// #define FRAMEINTERLEAVE
#include <OSGGLUT.h>
#include <OSGGLU.h>
#include <OSGConfig.h>
#include <iostream>
#include <OSGLog.h>
#include <OSGTransform.h>
#include <OSGGroup.h>
#include <OSGNode.h>
#include <OSGClusterWindow.h>
#include <OSGSceneFileHandler.h>
#include <OSGDirectionalLight.h>
#include <OSGSimpleGeometry.h>
#include <OSGCamera.h>
#include <OSGViewport.h>
#include <OSGPerspectiveCamera.h>
#include <OSGSolidBackground.h>
//#include <OSGGradientBackground.h>
#include <OSGTrackball.h>
#include <OSGVolumeDraw.h>
#include <OSGGLUTWindow.h>
#include <OSGRenderAction.h>
//#include <OSGDrawAction.h>
#include <OSGMultiDisplayWindow.h>
//#include <OSGSortFirstWindow.h>
#include <OSGChunkMaterial.h>
#include <OSGPolygonChunk.h>
#include <OSGTriangleIterator.h>
#include <OSGMaterialGroup.h>
//#include <OSGSortLastWindow.h>
#include <OSGImageComposer.h>
#include <OSGProxyGroup.h>
#ifdef FRAMEINTERLEAVE
#include <OSGFrameInterleaveWindow.h>
#endif
#include <OSGShearedStereoCameraDecorator.h>
#include <OSGNameAttachment.h>
#include <OSGColorBufferViewport.h>

OSG_USING_NAMESPACE

Trackball                tball;
int                      mouseb = 0;
int                      lastx=0, lasty=0;
int                      winwidth=300, winheight=300;
NodePtr		             root;
TransformPtr             cam_trans;
PerspectiveCameraPtr     cam;
ClusterWindowPtr         clusterWindow;
RenderAction            *ract;
GLUTWindowPtr            clientWindow;

#ifdef HAVE_SORT
SortFirstWindowPtr       sortfirst;
SortLastWindowPtr        sortlast;
#endif

#ifdef FRAMEINTERLEAVE
FrameInterleaveWindowPtr frameinterleave;
#endif
MultiDisplayWindowPtr    multidisplay;
bool                     animate=false;
int                      animLoops=-1;
int                      animLength=30;
bool                     multiport=false;
float                    ca=-1,cb=-1,cc=-1;
Int32                    stereoMode=0;
float                    eyedistance=1,zeroparallax=10;
int                      serverx=-1,servery=-1;
std::vector<Quaternion>  animOri;
std::vector<Vec3f     >  animPos;
std::string              animName="animation.txt";
Real32                   animTime=0;
std::string              serviceAddress;
bool                     serviceAddressValid = false;
UInt32                   interleave=0;
Real32                   _dsFactor = 1.0; // scale down factor.
bool                     _enablecc = true; // enable color correction.
PolygonChunkPtr          polygonChunk;
bool                     prepared=false;
bool                     showInfo=false;
Time                     frame_time=0;
UInt32                   sum_positions=0;
UInt32                   sum_geometries=0;
UInt32                   sum_triangles=0;
bool                     info = false;
std::string              connectionDestination="";
std::string              connectionInterface="";
OSG::SolidBackgroundPtr  bkgnd;
UInt32                   subtilesize=32;

/*! Simple show text function
 */
void displayInfo(int x, int y)
{
  int len, i;
#ifdef WIN32
#ifdef OSG_WIN32_CL
  void *font = (void *) 2;
#else
  void *font = 2;
#endif
#else
  void *font = GLUT_BITMAP_9_BY_15;
#endif

  char text[1024];
  sprintf(text,
          "FPS:        %12.1f\n"
          "Positions:  %12u\n"
          "Triangles:  %12u\n"
          "Geometries: %12u",
          1.0/frame_time,
          sum_positions,
          sum_triangles,
          sum_geometries);

  glPushAttrib(GL_ALL_ATTRIB_BITS);
  glDisable(GL_LIGHTING);
  glEnable(GL_COLOR_MATERIAL);
  glPushMatrix();
  glLoadIdentity();
  glMatrixMode(GL_PROJECTION);
  glPushMatrix();
  glLoadIdentity();
  gluOrtho2D(0,clientWindow->getWidth(),0,clientWindow->getHeight());
  glDisable(GL_DEPTH_TEST);  
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

  int x1=x-5;
  int x2=x1+24*9+10;
  int y1=y+14;
  int y2=y1-4*20;
  glBegin(GL_QUADS);
  glColor4f(.1, .1, .7, .5);
  glVertex2i(x1,y1);
  glVertex2i(x1,y2);
  glVertex2i(x2,y2);
  glVertex2i(x2,y1);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glColor3f(1.0, 1.0, 0.0);
  glVertex2i(x1,y1);
  glVertex2i(x1,y2);
  glVertex2i(x2,y2);
  glVertex2i(x2,y1);
  glEnd();

  glColor3f(1.0, 1.0, 0.0);
  glRasterPos2f(x, y);
  len = (int) strlen(text);
  for (i = 0; i < len; i++) {
      if(text[i] == '\n')
      {
          y-=20;
          glRasterPos2f(x, y);
      }
      else
          glutBitmapCharacter(font, text[i]);
  }
  glPopMatrix();
  glMatrixMode(GL_MODELVIEW);
  glPopMatrix();
  glPopAttrib();
}

void prepareSceneGraph(const NodePtr &node)
{
    TriangleIterator f;

    if(!prepared)
    {
        polygonChunk = PolygonChunk::create();
        addRef(polygonChunk);
        prepared = true;
    }

    NodeCorePtr core  =node->getCore();
    if(core != NullFC)
    {
        GeometryPtr geo   = cast_dynamic<GeometryPtr>(core);
        if(geo != NullFC)
        {
            MaterialPtr mat = geo->getMaterial();
            if(mat != NullFC)
            {
                ChunkMaterialPtr cmat = cast_dynamic<ChunkMaterialPtr>(mat);
                if(cmat->getChunks().find(polygonChunk) == cmat->getChunks().end())
                {
                    cmat->addChunk(polygonChunk);
                }
            }
            // get num positions
            GeoPositionsPtr positionsPtr=geo->getPositions();
            if(positionsPtr != NullFC)
                sum_positions += positionsPtr->getSize();
            // get num triangles
            for(f=geo->beginTriangles() ; f!=geo->endTriangles() ; ++f)
                ++sum_triangles;
            // sum of geometry nodes
            ++sum_geometries;
        }
        else
        {
            MaterialGroupPtr matGrp = cast_dynamic<MaterialGroupPtr>(core);
            if(matGrp != NullFC)
            {
                MaterialPtr mat = matGrp->getMaterial();
                if(mat != NullFC)
                {
                    ChunkMaterialPtr cmat = 
                        cast_dynamic<ChunkMaterialPtr>(mat);

                    if(cmat->getChunks().find(polygonChunk) == cmat->getChunks().end())
                    {
                        cmat->addChunk(polygonChunk);
                    }
                }
            }
            else
            {
                ProxyGroupPtr proxy = cast_dynamic<ProxyGroupPtr>(core);
                if(proxy != NullFC)
                {
                    sum_triangles += proxy->getTriangles();
                    sum_positions += proxy->getPositions();
                    sum_geometries += proxy->getGeometries();
                }
            }
        }
    }
    for(MFNodePtr::const_iterator nI=node->getMFChildren()->begin();
        nI != node->getMFChildren()->end();
        ++nI)
    {
        prepareSceneGraph(*nI);
    }
}

void loadAnim()
{
    Real32 ax,ay,az,r,x,y,z;
    FILE *file=fopen(animName.c_str(),"r");
    
    animOri.clear();
    animPos.clear();
    if(!file)
        return;
    while(fscanf(file,"%f %f %f %f,%f %f %f",&ax,&ay,&az,&r,&x,&y,&z)==7)
    {
        animOri.push_back(Quaternion(Vec3f(ax,ay,az),r));
        animPos.push_back(Vec3f(x,y,z));
    }
    fclose(file);
}

void display(void)
{
    Time t;

    t=-getSystemTime();

    if(animate && animPos.size()>1)
    {
        UInt32 i=(UInt32)animTime;
        Real32 a=animTime-i;

        printf("%d %d\n",i,animPos.size());
        Vec3f v=animPos[i] + (animPos[i+1] - animPos[i]) * a; 

        cam_trans->editMatrix().setTranslate(v[0],v[1],v[2]);
        cam_trans->editMatrix().setRotate(
            Quaternion::slerp(animOri[i],animOri[i+1],a));
    }
    else
    {
        cam_trans->editSFMatrix()->setValue( tball.getFullTrackballMatrix() );
    }

    try
    {
        OSG::Thread::getCurrentChangeList()->commitChanges();
        clusterWindow->activate();	
        clusterWindow->frameInit();	
        clusterWindow->renderAllViewports(ract);	
        if(showInfo)
        {
            displayInfo(10,90);
/*
            char text[1024];
            sprintf(text,"FPS:        %12.1f",1.0/frame_time);
            showText(10,70,text);
            sprintf(text,"Positions:  %12d",sum_positions);
            showText(10,50,text);
            sprintf(text,"Triangles:  %12d",sum_triangles);
            showText(10,30,text);
            sprintf(text,"Geometries: %12d",sum_geometries);
            showText(10,10,text);
*/
        }
        clusterWindow->swap();	
        clusterWindow->frameExit();	
        // clear changelist from prototypes
        OSG::Thread::getCurrentChangeList()->clear();
	}
    catch(OSG_STDEXCEPTION_NAMESPACE::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit(0);
    }
    
    t+=getSystemTime();
    frame_time = t;

    if(animate)
    {
        Real32 a;
        Vec3f v;

        printf("Frame %8.3f %8.5f %8.3f\n",
               animTime,
               t,1/t);

        animTime += (animPos.size()/(float)animLength);
        if(int(animTime)+1 >= animPos.size())
        {
            animTime = 0;

            if(animLoops > 0)
            {
                animLoops--;
                if(!animLoops) 
                {
                    subRef(clusterWindow);
                    osgExit(); 
                    exit(0);
                }
            }
        }
    }
}

void reshape( int width, int height )
{
    printf("reshape %d %d\n",width,height);
    glViewport(0, 0, width, height);
	clientWindow->resize( width, height );
	glutPostRedisplay();
}

void motion(int x, int y)
{
    OSG::Real32 w = clientWindow->getWidth(), h = clientWindow->getHeight();


    OSG::Real32 a = -2. * ( lastx / w - .5 ),
                b = -2. * ( .5 - lasty / h ),
                c = -2. * ( x / w - .5 ),
                d = -2. * ( .5 - y / h );

    if ( mouseb & ( 1 << GLUT_LEFT_BUTTON ) )
    {
        tball.updateRotation( a, b, c, d );
    }
    else if ( mouseb & ( 1 << GLUT_MIDDLE_BUTTON ) )
    {
        tball.updatePosition( a, b, c, d );
    }
    else if ( mouseb & ( 1 << GLUT_RIGHT_BUTTON ) )
    {
        tball.updatePositionNeg( a, b, c, d );
    }
    lastx = x;
    lasty = y;
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if ( state == 0 )
    {
        switch ( button )
        {
        case GLUT_LEFT_BUTTON:  break;
        case GLUT_MIDDLE_BUTTON:tball.setAutoPosition(true);
                                break;
        case GLUT_RIGHT_BUTTON: tball.setAutoPositionNeg(true);
                                break;
        }
        mouseb |= 1 << button;
    }
    else if ( state == 1 )
    {
        switch ( button )
        {
        case GLUT_LEFT_BUTTON:  break;
        case GLUT_MIDDLE_BUTTON:tball.setAutoPosition(false);
                                break;
        case GLUT_RIGHT_BUTTON: tball.setAutoPositionNeg(false);
                                break;
        }
        mouseb &= ~(1 << button);
    }
    lastx = x;
    lasty = y;
	glutPostRedisplay();
}

void setHEyeWallParameter(Real32 dsFactor, bool enablecc)
{
    static char str[1024];
    
    NamePtr parameters = cast_dynamic<NamePtr>(clusterWindow->findAttachment(Name::getClassType()));

    if(parameters == NullFC)
    {
        parameters = Name::create();
        clusterWindow->addAttachment(parameters);
    }
    
    sprintf(str, "downScale=%f colorCorrection=%d", dsFactor, enablecc);
    parameters->editFieldPtr()->getValue().assign(str);
}

void key(unsigned char key, int /*x*/, int /*y*/)
{
	switch ( key )
	{
        case 'l':
        {
            loadAnim();
            break;
        }
        case 'c':
        {
            FILE *file=fopen(animName.c_str(),"w");
            fclose(file);
            animOri.clear();
            animPos.clear();
            break;
        }
        case 's':
        {
            FILE *file=fopen(animName.c_str(),"a");
            Matrix m=cam_trans->getMatrix();
            Quaternion q(m);
            Real32 ax,ay,az,r;
            animPos.push_back(Vec3f(m[3][0],
                                    m[3][1],
                                    m[3][2]));
            animOri.push_back(q);
            q.getValueAsAxisRad(ax,ay,az,r);
            fprintf(file,"%f %f %f %f,%f %f %f\n",ax,ay,az,r,
                    m[3][0],
                    m[3][1],
                    m[3][2]);
            fclose(file);
            break;
        }
        case 'S':
        {
            FILE *file=fopen((animName+".wrl").c_str(),"w");
            std::vector<Quaternion>::iterator qit;
            
            fprintf(file,"DEF OriInter OrientationInterpolator {\n\tkey [");
            for(int i = 0; i < animOri.size(); ++i)
            {               
                fprintf(file, "%f", i / (Real32)(animOri.size() - 1) );
                if(i < animOri.size() - 1)
                    fprintf(file,", ");
            }
            fprintf(file,"]\n\tkeyValue [");
            for(qit = animOri.begin(); qit != animOri.end(); ++qit)
            {
                Real32 ax,ay,az,r;
                (*qit).getValueAsAxisRad(ax,ay,az,r);
                
                fprintf(file, "%f %f %f %f", ax, ay, az, r );
                if(qit < animOri.end() - 1)
                    fprintf(file,", ");
            }
            fprintf(file,"]\n}\n\n");

            std::vector<Vec3f>::iterator vit;
            
            fprintf(file,"DEF PosInter PositionInterpolator {\n\tkey [");
            for(int i = 0; i < animPos.size(); ++i)
            {               
                fprintf(file, "%f", i / (Real32)(animPos.size() - 1) );
                if(i < animPos.size() - 1)
                    fprintf(file,", ");
            }
            fprintf(file,"]\n\tkeyValue [");
            for(vit = animPos.begin(); vit != animPos.end(); ++vit)
            {
                Vec3f v = *vit;
                
                fprintf(file, "%f %f %f, ", v[0], v[1], v[2] );
            }
            fprintf(file,"]\n}\n\n");

            fclose(file);
            break;
        }
#ifdef HAVE_SORT
        case 'j':
            if(sortfirst!=NullFC)
            {
                sortfirst->setCompression("JPEG");
            }
            break;
        case 'r':
            if(sortfirst!=NullFC)
            {
                sortfirst->setCompression("RLE");
            }
            break;
        case 'n':
            if(sortfirst!=NullFC)
            {
                sortfirst->getCompression().erase();
            }
            break;
#endif
        case 'i':
            showInfo = !showInfo;
            break;
        case 'w':
            if(polygonChunk->getFrontMode() == GL_FILL)
                polygonChunk->setFrontMode(GL_LINE);
            else
                polygonChunk->setFrontMode(GL_FILL);

            if(polygonChunk->getBackMode() == GL_FILL)
                polygonChunk->setBackMode(GL_LINE);
            else
                polygonChunk->setBackMode(GL_FILL);

            break;
        case 'a':
            if(animate)
            {
                glutIdleFunc(NULL);       
                animate=false;
            }
            else
            {
                glutIdleFunc(display);       
                animate=true;
            }
            break;
        case 'd':
            // remove tree
            while(root->getNChildren())
            {
                root->subChild(0);
            }
            break;
        case '+':
            _dsFactor += 0.01f;
            if(_dsFactor > 1.0f)
                _dsFactor = 1.0f;
            setHEyeWallParameter(_dsFactor, _enablecc);
            break;
        case '-':
            _dsFactor -= 0.01f;
            if(_dsFactor <= 0.0f)
                _dsFactor = 0.01f;
            setHEyeWallParameter(_dsFactor, _enablecc);
            break;
        case 'f':
            if(_enablecc)
                _enablecc = false;
            else
                _enablecc = true;
            setHEyeWallParameter(_dsFactor, _enablecc);
            break;
        case 'B':
            if(bkgnd->getColor()[0] == 0.0)
                bkgnd->setColor( OSG::Color3f(1,1,1) );
            else
                bkgnd->setColor( OSG::Color3f(0,0,0) );
            break;
        case 27:	// should kill the clients here
            // exit
//            subRef(clusterWindow);
            osgExit(); 
            exit(0);
	}
	
	glutPostRedisplay();
}

void init(std::vector<std::string> &filenames)
{
    int i;
    OSG::DirectionalLightPtr dl;
    Real32 x,y,z;
    DynamicVolume volume;
    OSG::Vec3f min,max;
    OSG::Vec3f size;

    glEnable( GL_DEPTH_TEST );
    glEnable( GL_LIGHTING );
    glEnable( GL_LIGHT0 );
    glPixelStorei( GL_UNPACK_ALIGNMENT, 1 );

    // create the graph

    // beacon for camera and light
    OSG::NodePtr b1n = OSG::Node::create();
    OSG::GroupPtr b1 = OSG::Group::create();

    b1n->setCore( b1 );

    // transformation
    OSG::NodePtr t1n = OSG::Node::create();
    OSG::TransformPtr t1 = OSG::Transform::create();

    t1n->setCore( t1 );
    t1n->addChild( b1n );

    cam_trans = t1;
    addRef(t1n);

    // light

    OSG::NodePtr dlight = OSG::Node::create();
    dl = OSG::DirectionalLight::create();


    dlight->setCore( dl );


    dl->setAmbient( .3, .3, .3, 1 );
    dl->setDiffuse( 1, 1, 1, 1 );
    dl->setDirection(0,0,1);
    dl->setBeacon( b1n);

    // root
    root = OSG::Node::create();
    addRef(root);
    OSG::GroupPtr gr1 = OSG::Group::create();

    root->setCore( gr1 );
    root->addChild( t1n );
    root->addChild( dlight );

    // Load the file
    OSG::NodePtr scene = OSG::Node::create();
    addRef(scene);

    scene->setCore(OSG::Group::create());

    NodePtr file;

    for(i=0;i<filenames.size();i++)
    {
        file = SceneFileHandler::the()->read(filenames[i].c_str(),0);
        if(file != NullFC)
            scene->addChild(file);
        else
            std::cerr << "Couldn't load file, ignoring " << filenames[i] << std::endl;
    }
	if ( filenames.size()==0 )
	{
        scene->addChild(makeTorus( .5, 2, 16, 16 ));
//        scene->addChild(makeBox(.6,.6,.6,5,5,5));
    }

    prepareSceneGraph(scene);
    
    OSG::Thread::getCurrentChangeList()->commitChanges();

    scene->invalidateVolume();
    scene->updateVolume();
    volume=scene->getVolume();
    volume.getBounds(min,max);
    size = max-min;

    if(ca>0)
    {
        if(cb==-1)
            cb=ca;
        if(cc==-1)
            cc=cb;
            
        NodePtr node;
        NodePtr geoNode;
        TransformPtr trans;
        for(x=-ca/2.0 ; x<ca/2.0 ; x++)
            for(y=-cb/2.0 ; y<cb/2.0 ; y++)
                for(z=-cc/2.0 ; z<cc/2.0 ; z++)
                {
                    trans=Transform::create();
                    node=Node::create();
                    
                    node->setCore(trans);
                    trans->editMatrix().setTranslate(
                        x*size[0]*1.1,
                        y*size[1]*1.1,
                        z*size[2]*1.1);
                    node->addChild( OSG::cloneTree(scene) );
                    dlight->addChild(node);
                }
    }
    else
    {
        dlight->addChild(scene);
	}
    subRef(scene);

    if(ca>0)
    {
        sum_geometries*=(UInt32)(ca*cb*cc);
        sum_triangles *=(UInt32)(ca*cb*cc);
        sum_positions *=(UInt32)(ca*cb*cc);
    }
//    dlight->invalidateVolume();

    dlight->updateVolume();

    // should check first. ok for now.
    const OSG::BoxVolume *vol = (OSG::BoxVolume *)&dlight->getVolume();

    OSG::Pnt3f center;

    vol->getBounds(min, max);
    vol->getCenter(center);

    size = max - min;

    std::cout << "Volume: from " << min << " to " << max << std::endl;

    // Camera

    OSG::PerspectiveCameraPtr cam = OSG::PerspectiveCamera::create();

    cam->setBeacon( b1n );
    cam->setFov( OSG::osgDegree2Rad( 60 ) );
    cam->setNear( 10 );
    cam->setFar( 50000 );

    // Solid Background
    bkgnd = OSG::SolidBackground::create();

    bkgnd->setColor( OSG::Color3f(0,0,0) );
//    bkgnd->setColor( OSG::Color3f(.1,.1,.6) );
//    bkgnd->setColor( OSG::Color3f(1,1,1) );

    // Viewport
    OSG::ViewportPtr vp1;
    OSG::ViewportPtr vp2;
    if(stereoMode == 0)
    {
        vp1 = OSG::Viewport::create();

        vp1->setCamera    ( cam );
        vp1->setBackground( bkgnd );
        vp1->setRoot      ( root );
        vp1->setSize      ( 0,0, 1,1 );

        if(multiport)
        {
            vp2 = OSG::Viewport::create();

            vp2->setCamera    ( cam );
            vp2->setBackground( bkgnd );
            vp2->setRoot      ( root );
            vp2->setSize      ( .1, .55, .7,.95 );
        }
    }
    else if(stereoMode == 1)
    {
        OSG::ShearedStereoCameraDecoratorPtr deco;
        // left
        deco=OSG::ShearedStereoCameraDecorator::create();

        deco->setLeftEye(true);
        deco->setEyeSeparation(eyedistance);
        deco->setDecoratee(cam);
        deco->setZeroParallaxDistance(zeroparallax);
        vp1 = OSG::Viewport::create();

        vp1->setCamera    ( deco );
        vp1->setBackground( bkgnd );
        vp1->setRoot      ( root );
        vp1->setSize      ( 0,0, .5,1 );

        // right
        deco=OSG::ShearedStereoCameraDecorator::create();

        deco->setLeftEye(false);
        deco->setEyeSeparation(eyedistance);
        deco->setDecoratee(cam);
        deco->setZeroParallaxDistance(zeroparallax);
        vp2 = OSG::Viewport::create();

        vp2->setCamera    ( deco );
        vp2->setBackground( bkgnd );
        vp2->setRoot      ( root );
        vp2->setSize      ( .5,0,1,1 );
    }
    else if(stereoMode == 2)
    {
        OSG::ShearedStereoCameraDecoratorPtr deco;
        // left
        deco=OSG::ShearedStereoCameraDecorator::create();

            deco->setLeftEye(true);
            deco->setEyeSeparation(eyedistance);
            deco->setDecoratee(cam);
            deco->setZeroParallaxDistance(zeroparallax);
        
        ColorBufferViewportPtr cvp1 = ColorBufferViewport::create();

            cvp1->setCamera    ( deco );
            cvp1->setBackground( bkgnd );
            cvp1->setRoot      ( root );
            cvp1->setSize      ( 0,0, 1,1 );
            cvp1->setRed(GL_FALSE);
            cvp1->setGreen(GL_TRUE);
            cvp1->setBlue(GL_TRUE);
            cvp1->setAlpha(GL_TRUE);

        vp1 = cvp1;
        
        // right
        deco=OSG::ShearedStereoCameraDecorator::create();

            deco->setLeftEye(false);
            deco->setEyeSeparation(eyedistance);
            deco->setDecoratee(cam);
            deco->setZeroParallaxDistance(zeroparallax);
        
        ColorBufferViewportPtr cvp2 = ColorBufferViewport::create();

            cvp2->setCamera    ( deco );
            cvp2->setBackground( bkgnd );
            cvp2->setRoot      ( root );
            cvp2->setSize      ( 0,0,1,1 );
            cvp2->setRed(GL_TRUE);
            cvp2->setGreen(GL_FALSE);
            cvp2->setBlue(GL_FALSE);
            cvp2->setAlpha(GL_FALSE);

        vp2 = cvp2;
    }

    GLint glvp[4];
    glGetIntegerv( GL_VIEWPORT, glvp );
    

    if(serverx>0 && servery>0)
        clusterWindow->setSize( serverx, servery );
    else
        clusterWindow->setSize( glvp[2], glvp[3] );
    clusterWindow->addPort( vp1 );

    if(multiport || stereoMode > 0)
        clusterWindow->addPort( vp2 );

    if(serviceAddressValid == true)
    {
        clusterWindow->setServiceAddress(serviceAddress);

        fprintf(stderr, "tcclient use ba %s\n", serviceAddress.c_str());
    }

    // tball

    OSG::Vec3f pos(min[0] + ((max[0] - min[0]) * 0.5),
                   min[1] + ((max[1] - min[1]) * 0.5),
                   max[2] + ( max[2] - min[2] ) * 1.5 );

    float scale = (max[2] - min[2] + max[1] - min[1] + max[0] - min[0]) / 6;

    tball.setMode( OSG::Trackball::OSGObject );
    tball.setStartPosition( pos, true );
    tball.setSum( true );
    tball.setTranslationMode( OSG::Trackball::OSGFree );
    tball.setTranslationScale(scale);
    tball.setRotationCenter(center);
    tball.setTranslationGen(OSG::Trackball::OSGAbsoluteTranslation);

    // run...
    std::cout << size.length() << std::endl;
    cam->setFar (size.length() * 100.0);
    cam->setNear(size.length() * 100.0 / 10000.0);
}

int main(int argc,char **argv)
{
    int                      i,winid;
    char                    *opt;
    std::vector<std::string> filenames;
    std::vector<std::string> servers;
    std::string              connectionType = "Multicast";
//    std::string              connectionType = "StreamSock";
    std::string              connectionParameters;
    int                      rows=1;
    char                     type='M';
    bool                     clientRendering=true;
    bool                     compose=false;

    std::string              composerType="";
    ImageComposerPtr         composer=NullFC;
    std::string              autostart;
    
    for(i=1;i<argc;i++)
    {
        if(strlen(argv[i])>1 && argv[i][0]=='-')
        {
            switch(argv[i][1])
            {
                case 'o':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    connectionParameters = opt;
                    printf("connectionParameters: '%s'\n", connectionParameters.c_str());
                    break;
                case 'A':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    autostart = opt;
                    break;
                case 'D':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    if(sscanf(opt,"%f,%f,%f",&ca,&cb,&cc)!=3)
                    {
                        std::cout << "Copy opton -D x,y,z" << std::endl;
                        return 1;
                    }
                    break;
                case 'b':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    serviceAddress.assign(opt);
                    serviceAddressValid = true;
                    break;
                case 'f':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    filenames.push_back(opt);
                    printf("<%s>\n",opt);
                    break;
                case 'm':
                    connectionType="Multicast";
                    break;
                case 'r':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    rows=atoi(opt);
                    break;
                case 't':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    subtilesize=atoi(opt);
                    break;
#ifdef FRAMEINTERLEAVE
                case 'i':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    interleave=atoi(opt);
                    break;
#endif
                case 'C':
                    compose=true;
                    break;
                case 'F':
                    type='F';
                    break;
                case 'P':
                    type='P';
                    break;
                case 'L':
                {
                    type='L';
                    int lpos=2;
                    while(argv[i][lpos])
                    {
                        if(argv[i][lpos] == 'B') 
                            composerType = "BinarySwapComposer";
                        if(argv[i][lpos] == 'P')
                            composerType = "PipelineComposer";
                        if(argv[i][lpos] == 'S')
                            composerType = "SepiaComposer";
                        ++lpos;
                    }
                    break;
                }
                case 'M':
                    type='M';
                    break;
                case 'I':
                    type='I';
                    break;
                case 's':
                    stereoMode=1;
                    break;
                case 'c':
                    stereoMode=2;
                    break;
                case 'p':
                    info=true;
                    break;
                case 'e':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    sscanf(opt,"%f",&eyedistance);
                    break;
                case 'z':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    sscanf(opt,"%f",&zeroparallax);
                    break;
                case 'd':
                    clientRendering=false;
                    break;
                case 'v':
                    multiport=true;
                    break;
                case 'x':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    sscanf(opt,"%d",&serverx);
                    break;
                case 'y':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    sscanf(opt,"%d",&servery);
                    break;
                case 'a':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    animName=opt;
                    loadAnim();
                    glutIdleFunc(display);       
                    animate=true;
                    break;
                case 'l':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    if(sscanf(opt,"%d,%d",&animLoops,&animLength) != 2)
                    {
                        animLength = 30;
                        if(sscanf(opt,"%d",&animLoops) != 1)
                        {
                            animLoops = -1;
                        }
                    }
                    break;
                case 'g':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    sscanf(opt,"%d,%d",&winwidth,&winheight);
                    break;
                case 'G':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    connectionDestination = opt;
                    break;
                case 'i':
                    opt = argv[i][2] ? opt=argv[i]+2 : opt=argv[++i];
                    connectionInterface = opt;
                    break;
                case 'h':
                    std::cout << argv[0] 
                              << "-ffile -m -rrows -C -M"
                              << std::endl;
                    std::cout << "-m  use multicast" << std::endl
                              << "-G  multicast group" << std::endl
                              << "-i  interface" << std::endl
                              << "-M  multi display" << std::endl
#ifdef FRAMEINTERLEAVE
                              << "-I  frame interleave" << std::endl
#endif
                              << "-r  number of display rows" << std::endl
                              << "-C  compose" << std::endl
                              << "-F  sort-first" << std::endl
                              << "-L  sort-last" << std::endl
                              << "-h  this msg" << std::endl
                              << "-s  stereo" << std::endl
                              << "-c  red/cyan stereo" << std::endl
                              << "-e  eye distance" << std::endl
                              << "-z  zero parallax" << std::endl
                              << "-d  disable client rendering"<<std::endl
                              << "-v  use two viewports" << std::endl
                              << "-x  server x resolution" << std::endl
                              << "-y  server y resolution" << std::endl
                              << "-t  subtile size for img composition" << std::endl
                              << "-D  x,y,z duplicate geometry" << std::endl
                              << "-A  Autostart command" << std::endl
                              << "-o  connection parameter string e.g. \"TTL=8\"" << std::endl;
                    return 0;
            }
        }
        else
        {
            servers.push_back(argv[i]);
        }
    }

    if(servers.size() == 0)
    {
        servers.push_back("foo");
    }

    try
    {
        osgInit(argc, argv);
        glutInit(&argc, argv);
        glutInitDisplayMode( GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE );
        glutInitWindowSize(winwidth,winheight);
        winid = glutCreateWindow("OpenSG Cluster Client");
        glutKeyboardFunc(key);
        glutReshapeFunc(reshape);
        glutDisplayFunc(display);       
        glutMouseFunc(mouse);   
        glutMotionFunc(motion); 
        ract = RenderAction::create();

        // clear changelist from prototypes
        OSG::Thread::getCurrentChangeList()->clear();

        OSG::Thread::getCurrentChangeList()->dump();
        
        // create cluster window
        switch(type)
        {
            case 'M': 
                multidisplay=MultiDisplayWindow::create();
                clusterWindow=multidisplay;
                break;
#ifdef HAVE_SORT
            case 'F':
                sortfirst=SortFirstWindow::create();

                if(compose)
                    sortfirst->setCompose(true);
                else
                    sortfirst->setCompose(false);

                clusterWindow=sortfirst;
                break;
            case 'L':
                sortlast=SortLastWindow::create();

                if(!composerType.empty())
                {
                    FieldContainerPtr fcPtr = 
                        FieldContainerFactory::the()->
                        createFieldContainer(composerType.c_str());
                    ImageComposerPtr icPtr = cast
                        _dynamic<ImageComposerPtr>(fcPtr);

                    if(icPtr != NullFC)
                    {
/*
                        if(PipelineComposerPtr::dcast(icPtr) != NullFC)
                            PipelineComposerPtr::dcast(icPtr)->setTileSize(subtilesize);
                        if(BinarySwapComposerPtr::dcast(icPtr) != NullFC)
                            BinarySwapComposerPtr::dcast(icPtr)->setTileSize(subtilesize);
*/
                        icPtr->setStatistics(info);
//                        icPtr->setShort(false);
                        sortlast->setComposer(icPtr);
                    }
                }
                clusterWindow=sortlast;
                break;
#endif
#ifdef FRAMEINTERLEAVE
            case 'I':
                frameinterleave=FrameInterleaveWindow::create();
                clusterWindow=frameinterleave;
                if(compose)
                    frameinterleave->setCompose(true);
                else
                    frameinterleave->setCompose(false);
                break;
#endif
#ifdef HAVE_SORT
            case 'P':
                sortfirst=SortFirstWindow::create();
                sortfirst->setCompose(false);
                clusterWindow=sortfirst;
                break;
#endif
        }

            if(!autostart.empty())
                clusterWindow->editAutostart().push_back(autostart);

            for(i=0 ; i<servers.size() ; ++i)
                clusterWindow->editServers().push_back(servers[i]);
            switch(type)
            {
                case 'M': 
                    multidisplay->setHServers(
                        clusterWindow->getServers().size()/rows);
                    multidisplay->setVServers(
                        rows);
                    break;
            }
#ifdef FRAMEINTERLEAVE
            clusterWindow->setInterleave(interleave);
#endif

        // create client window
        clientWindow=GLUTWindow::create();
//        glutReshapeWindow(800,600);
        glutReshapeWindow(winwidth,winheight);
        clientWindow->setId(winid);
        clientWindow->init();

        // init scene graph
        init(filenames);

        // init client
        clusterWindow->setConnectionType(connectionType);
        // needs to be called before init()!
        clusterWindow->setConnectionParams(connectionParameters);
        if(clientRendering)
        {
            clusterWindow->setClientWindow(clientWindow);
        }
        clusterWindow->init();
        clusterWindow->resize(winwidth,winheight);
        clientWindow->resize(winwidth,winheight);
        clusterWindow->setConnectionDestination(connectionDestination);
        clusterWindow->setConnectionInterface(connectionInterface);
        glutMainLoop();
    }
    catch(OSG_STDEXCEPTION_NAMESPACE::exception &e)
    {
        SLOG << e.what() << std::endl;
    }
    return 0;
}






