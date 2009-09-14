/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000,2001 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

// Minimalistic OpenSG program

// GLUT is used for window handling
#include <OSGGLUT.h>

// General OpenSG configuration, needed everywhere
#include <OSGConfig.h>

// The GLUT-OpenSG connection class
#include <OSGGLUTWindow.h>

// A little helper to simplify scene management and interaction
#include <OSGSimpleSceneManager.h>
#include <OSGWalkEngine.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OSGSimpleGeometry.h>


#include <OSGSceneFileHandler.h>
#include <OSGGeoFunctions.h>
#include <OSGPointLight.h>
#include <OSGTransform.h>
#include <OSGTiledQuadTreeTerrain.h>
#include <OSGImageFileHandler.h>
#include <OSGTextureObjChunk.h>
#include <OSGTextureEnvChunk.h>
#include <OSGFileSystem.h>

OSG::SimpleSceneManager *mgr;

OSG::NodeUnrecPtr scene;
OSG::TiledQuadTreeTerrainUnrecPtr terrain;

OSG::Real32 speed = 1.;

static OSG::UInt32 frame = 0;
// Standard GLUT callback functions
void display( void )
{
    OSG::commitChanges();

    mgr->idle();
    mgr->redraw();
    //SLOG << "frametime=" << mgr->getWindow()->getPort(0)->getDrawTime() 
    //<< " ms" << std::endl;

    if (terrain->getUpdateTerrain()) 
    {
       terrain->setUpdateTerrain(false);
    }
}

void idle( void )
{
   if (frame%10 == 0) 
   {
       frame = 0;
       terrain->setUpdateTerrain(true);
   } 
   else 
   {
     ++frame;
   }
}

void reshape( int w, int h )
{
    mgr->resize( w, h );
    glutPostRedisplay();
}

void
motion(int x, int y)
{
    mgr->mouseMove( x, y );
    glutPostRedisplay();
}

void
mouse(int button, int state, int x, int y)
{
    if ( state )
        mgr->mouseButtonRelease( button, x, y );
    else
        mgr->mouseButtonPress( button, x, y );
    glutPostRedisplay();
}

void
key(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 27:    
            delete mgr;

            scene   = NULL;
            terrain = NULL;

            OSG::osgExit();
            exit(1);
        case 'a':   mgr->setHighlight( scene );
            break;
        case 's':   mgr->setHighlight( NULL );
            break;
        case ' ': {
            GLint current = GL_LINE;
            glGetIntegerv(GL_POLYGON_MODE, &current);
            if (current == GL_FILL) {
                glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            } else {
                glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            }
            break;
        }
        case 'l':   mgr->useOpenSGLogo();
            break;
        case 'f':   mgr->setNavigationMode(OSG::Navigator::FLY);
            break;
        case 't':   mgr->setNavigationMode(OSG::Navigator::TRACKBALL);
            break;
        case 'w':   mgr->setNavigationMode(OSG::Navigator::WALK);
            break;                
        case 'u': {
            terrain->setUpdate(!terrain->getUpdate());

            SLOG << "update tiling " << (terrain->getUpdate() ? "on" : "off")
                 << std::endl;
            break;
        }
        case 'x': 
        {
            terrain->setGeoMorphing(!terrain->getGeoMorphing());
            SLOG << "geomorphing " 
                 << (terrain->getGeoMorphing() ? "on" : "off") << std::endl;
            
            break;
        }
        case 'v':   speed *= .9;
            FLOG(("Speed set to %f\n", speed ));
            mgr->getNavigator()->setMotionFactor(speed);
            break;
        case 'b':   speed *= 1.1;
            FLOG(("Speed set to %f\n", speed ));
            mgr->getNavigator()->setMotionFactor(speed);
            break;
    }
    mgr->key(key,x,y);
    glutPostRedisplay();
}

OSG::Material *makeTexture (const char* texname)
{
   OSG::ImageUnrecPtr image = OSG::ImageFileHandler::the()->read(texname);

   SLOG << "Create ChunkMaterial" << std::endl;

   OSG::ChunkMaterialUnrecPtr   texMatPtr      = OSG::ChunkMaterial::create();
   OSG::TextureObjChunkUnrecPtr texObjChunkPtr = OSG::TextureObjChunk::create();
   OSG::TextureEnvChunkUnrecPtr texEnvChunkPtr = OSG::TextureEnvChunk::create();
   OSG::BlendChunkUnrecPtr      blendChunkPtr  = OSG::BlendChunk::create();
   OSG::MaterialChunkUnrecPtr   phongChunk     = OSG::MaterialChunk::create();

   phongChunk->setDiffuse (OSG::Color4f(1.0f, 1.0f, 1.0f, 1.0f));
   phongChunk->setAmbient (OSG::Color4f(0.1f, 0.1f, 0.1f, 1.0f));
   phongChunk->setSpecular(OSG::Color4f(0.2f, 0.2f, 0.2f, 1.0f));
   phongChunk->setShininess(6);

   texObjChunkPtr->setImage     ( image);
   
   texObjChunkPtr->setWrapS     ( GL_CLAMP_TO_EDGE );
   texObjChunkPtr->setWrapT     ( GL_CLAMP_TO_EDGE );
   texObjChunkPtr->setWrapR     ( GL_CLAMP_TO_EDGE );
   
   texObjChunkPtr->setMinFilter ( GL_LINEAR );
   texObjChunkPtr->setMagFilter ( GL_LINEAR );
   
//   texEnvChunkPtr->setEnvMode(GL_MODULATE);
   texEnvChunkPtr->setEnvMode(GL_REPLACE);

   blendChunkPtr->setSrcFactor  ( GL_SRC_ALPHA           );
   blendChunkPtr->setDestFactor ( GL_ONE_MINUS_SRC_ALPHA );

   texMatPtr->addChunk(texObjChunkPtr, 0);
   texMatPtr->addChunk(texEnvChunkPtr, 0);
//   texMatPtr->addChunk(phongChunk);
   //texMatPtr->addChunk(blendChunkPtr);

   return texMatPtr;
}

void loadHeightDir(const OSG::Char8 *szDir, 
                   OSG::UInt32 xMin, OSG::UInt32 xMax,
                   OSG::UInt32 yMin, OSG::UInt32 yMax,
                   OSG::TiledQuadTreeTerrain *terrain)
{
    std::string fname;
    std::string baseFName = szDir;

    OSG::Char8 szBuff[64];

    OSG::ImageUnrecPtr pH;

    if(baseFName.size() < 1)
        OSG_ASSERT(false);

    if(baseFName[baseFName.size() - 1] != '/')
    {
        baseFName += '/';
    }

    for(OSG::UInt32 y = yMin; y <= yMax; ++y)
    {
        for(OSG::UInt32 x = xMin; x <= xMax; ++x)
        {
            fname = baseFName;

            sprintf(szBuff, "tile.%d-%d.db", x, y);

            fname += szBuff;

            if(OSG::File::tstAttr(fname.c_str(), 
                                  OSG::AccessFlags::IsReadable) == false)
            {
                fprintf(stderr, "%s: [FAILED]\n", fname.c_str());
                OSG_ASSERT(false);
            }

            fprintf(stderr, "%s: [OK]\n", fname.c_str());

            pH = OSG::ImageFileHandler::the()->read(fname.c_str());

            terrain->pushToHeightTiles(pH);
        }
    }
}

void loadHeightDir(const OSG::Char8 *szDir, OSG::TiledQuadTreeTerrain *terrain)
{
    OSG::UInt32 x;
    OSG::UInt32 y = 0;

    OSG::UInt32 iXTry = 0;

    std::string fname;
    std::string baseFName = szDir;

    OSG::Char8 szBuff[64];

    OSG::ImageUnrecPtr pH;

    if(baseFName.size() < 1)
        OSG_ASSERT(false);

    if(baseFName[baseFName.size() - 1] != '/')
    {
        baseFName += '/';
    }

    while(1)
    {
        x     = 0;
        iXTry = 0;

        while(1)
        {
            fname = baseFName;

            sprintf(szBuff, "tile.%d-%d.db", x, y);

            fname += szBuff;

            if(OSG::File::tstAttr(fname.c_str(), 
                                  OSG::AccessFlags::IsReadable) == false)
            {
                fprintf(stderr, "%s: [FAILED]\n", fname.c_str());
                break;
            }

            fprintf(stderr, "%s: [OK]\n", fname.c_str());

            pH = OSG::ImageFileHandler::the()->read(fname.c_str());

            terrain->pushToHeightTiles(pH);

            ++iXTry;
            ++x;
        };

        if(iXTry == 0)
        {
            break;
        }

        ++y;
    };
    
}

void loadTextureDir(const OSG::Char8 *szDir, 
                    OSG::UInt32 xMin, OSG::UInt32 xMax,
                    OSG::UInt32 yMin, OSG::UInt32 yMax,
                    OSG::TiledQuadTreeTerrain *terrain)
{
    std::string fname;
    std::string baseFName = szDir;

    OSG::Char8 szBuff[64];

    OSG::MaterialUnrecPtr pM;

    if(baseFName.size() < 1)
        OSG_ASSERT(false);

    if(baseFName[baseFName.size() - 1] != '/')
    {
        baseFName += '/';
    }

    for(OSG::UInt32 y = yMin; y <= yMax; ++y)
    {
        for(OSG::UInt32 x = xMin; x <= xMax; ++x)
        {
            fname = baseFName;

            sprintf(szBuff, "tile.%d-%d.db", x, y);

            fname += szBuff;

            if(OSG::File::tstAttr(fname.c_str(), 
                                  OSG::AccessFlags::IsReadable) == false)
            {
                fprintf(stderr, "%s: [FAILED]\n", fname.c_str());
                OSG_ASSERT(false);
            }

            fprintf(stderr, "%s: [OK]\n", fname.c_str());

            pM = makeTexture(fname.c_str());
            
            terrain->pushToHeightTextures(pM);
        }
    }
}

void loadTextureDir(const OSG::Char8 *szDir, OSG::TiledQuadTreeTerrain *terrain)
{
    OSG::UInt32 x;
    OSG::UInt32 y = 0;

    OSG::UInt32 iXTry = 0;

    std::string fname;
    std::string baseFName = szDir;

    OSG::Char8 szBuff[64];

    OSG::MaterialUnrecPtr pM;

    if(baseFName.size() < 1)
        OSG_ASSERT(false);

    if(baseFName[baseFName.size() - 1] != '/')
    {
        baseFName += '/';
    }

    while(1)
    {
        x     = 0;
        iXTry = 0;

        while(1)
        {
            fname = baseFName;

            sprintf(szBuff, "tile.%d-%d.db", x, y);

            fname += szBuff;

            if(OSG::File::tstAttr(fname.c_str(), 
                                  OSG::AccessFlags::IsReadable) == false)
            {
                fprintf(stderr, "%s: [FAILED]\n", fname.c_str());
                break;
            }

            fprintf(stderr, "%s: [OK]\n", fname.c_str());

            pM = makeTexture(fname.c_str());
            
            terrain->pushToHeightTextures(pM);


            ++iXTry;
            ++x;
        };

        if(iXTry == 0)
        {
            break;
        }

        ++y;
    };
 }


// Initialize GLUT & OpenSG and set up the scene
int main (int argc, char **argv)
{
    // OSG init
    OSG::osgInit(argc,argv);
    // VERY IMPORTANT: artifacts if not ignoring GL_EXT_compiled_vertex_array
    OSG::Window::ignoreExtensions("GL_EXT_compiled_vertex_array");

    // GLUT init
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    int winid = glutCreateWindow("OpenSG");
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    // the connection between GLUT and OpenSG
    OSG::GLUTWindowUnrecPtr gwin= OSG::GLUTWindow::create();
    gwin->setGlutId(winid);
    gwin->init();
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    // create the scene
    terrain = OSG::TiledQuadTreeTerrain::create();
    scene = OSG::Node::create();

    scene->setCore(terrain);


#if 0
    for (OSG::Int32 i=2; i>=0; --i) 
    {
        for (OSG::UInt32 j=0; j<6; ++j) 
        {
            char filename[255];
            sprintf(filename, "HeightMap_%03d_%03d.png", j+1, i+1);
            SINFO << "load " << filename << std::endl;
            OSG::ImagePtr    height = 
                OSG::ImageFileHandler::the()->read(filename);
            terrain->pushToHeightTiles(height);
        }
    }
#endif

    OSG::UInt32 xMin = 0; OSG::UInt32 xMax = 11;
    OSG::UInt32 yMin = 0; OSG::UInt32 yMax = 11;
    
    OSG::UInt32 xRes = xMax - xMin + 1;
    OSG::UInt32 yRes = yMax - yMin + 1;

    fprintf(stderr, "Foo\n");

    loadHeightDir("/home/gerrit/Downloads/FFocus/java_1/java_1",
                  xMin, xMax,
                  yMin, yMax,
                  terrain);

    loadTextureDir("/home/gerrit/Downloads/FFocus/java_1.color/java_1",
                   xMin, xMax,
                   yMin, yMax,
                   terrain);

    fprintf(stderr, "Bar\n");

#if 0
    ImagePtr pH;

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.7-6.db");

    terrain->pushToHeightTiles(pH);

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.8-6.db");

    terrain->pushToHeightTiles(pH);

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.7-7.db");

    terrain->pushToHeightTiles(pH);

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.8-7.db");

    terrain->pushToHeightTiles(pH);

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.7-8.db");

    terrain->pushToHeightTiles(pH);

    pH = ImageFileHandler::the()->read(
        "/home/gerrit/Downloads/FFocus/java_1/java_1/tile.8-8.db");

    terrain->pushToHeightTiles(pH);


    MaterialPtr pM;

    pM = makeTexture(
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.7-6.db");

    terrain->pushToHeightTextures(pM);

    pM = makeTexture(
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.8-6.db");

    terrain->pushToHeightTextures(pM);

    pM = makeTexture(
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.7-7.db");

    terrain->pushToHeightTextures(pM);

    pM = makeTexture(
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.8-7.db");

    terrain->pushToHeightTextures(pM);

    pM = makeTexture( 
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.7-8.db");

    terrain->pushToHeightTextures(pM);

    pM = makeTexture(
        "/home/gerrit/Downloads/FFocus/java_1.color/java_1/tile.8-8.db");

    terrain->pushToHeightTextures(pM);
#endif


    terrain->setVertexSpacing(90.f);
    terrain->setDetail(10.0f);
    terrain->setHeightScale  (1.f);
    terrain->setGeoMorphing(true);
    terrain->setSizeROI(2);
    terrain->setSizeX(xRes);
    terrain->setSizeY(yRes); 


    //endEditCP  (terrain, ~(TiledTerrain::MaterialFieldMask | TiledTerrain::PerPixelLightingFieldMask));
    //beginEditCP(terrain, TiledTerrain::MaterialFieldMask | TiledTerrain::PerPixelLightingFieldMask);

//    MaterialPtr mat = makeTexture("WorldMap.png");

//    terrain->setMaterial(mat);
//    terrain->setPerPixelLighting(true); 
    terrain->setPerPixelLighting(false); 


    // create the SimpleSceneManager helper
    mgr = new OSG::SimpleSceneManager;

    mgr->setWindow( gwin );
    mgr->setRoot( scene );
    mgr->getRenderAction()->setFrustumCulling(false);

    OSG::WalkEngine& walker=mgr->getNavigator()->getWalkEngine();
    walker.setGroundDistance(1);
    walker.setPersonDimensions(3,1,1);

    mgr->showAll();

    // GLUT main loop
    glutMainLoop();

    return 0;
}
