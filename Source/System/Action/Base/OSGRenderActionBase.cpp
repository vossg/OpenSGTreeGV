/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2000,2001,2002 by the OpenSG Forum                *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGRenderActionBase.h"
//#include "OSGRenderTraversalAction.h"

#include "OSGCamera.h"
#include "OSGStatCollector.h"
#include "OSGDrawable.h"
#include "OSGViewport.h"
#include "OSGVolumeDraw.h"
#include "OSGStageValidator.h"

OSG_USING_NAMESPACE

StatElemDesc<StatTimeElem>
RenderActionBase::statTravTime       ("RT-TravTime",
                                      "time for traversal"       );

/*
StatElemDesc<StatIntElem>
   RenderTraversalActionBase::statCullTestedNodes("rtCullTestedNodes",
                                                  "nodes tested"             );

StatElemDesc<StatIntElem>
   RenderTraversalActionBase::statCulledNodes    ("rtCulledNodes",
                                                  "nodes culled from frustum");
 */

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

RenderActionBase::RenderActionBase(void) :
     Inherited      (     ),
    _pCamera        (NULL ),
    _pBackground    (NULL ),
    _pWindow        (NULL ),
    _pViewport      (NULL ),
    _pStatistics    (NULL ),
    _pStageValidator(NULL ),

    _bFrustumCulling(true ),
    _bVolumeDrawing (false),
    _bAutoFrustum   (true ),
    _oFrustum       (     )
{
    _pStageValidator = new StageValidator();
}

RenderActionBase::RenderActionBase(const RenderActionBase &source) :

     Inherited      (source                 ),
    _pCamera        (source._pCamera        ),
    _pBackground    (source._pBackground    ),
    _pWindow        (source._pWindow        ),
    _pViewport      (source._pViewport      ),
    _pStageValidator(NULL                   ),
    _pStatistics    (NULL                   ),
    _bFrustumCulling(source._bFrustumCulling),
    _bVolumeDrawing (source._bVolumeDrawing ),
    _bAutoFrustum   (source._bAutoFrustum   ),
    _oFrustum       (source._oFrustum       )
{
    OSG::setRefd(_pStatistics, source._pStatistics);

    _pStageValidator = new StageValidator();
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

RenderActionBase::~RenderActionBase(void)
{
    OSG::subRef(_pStatistics);

    delete _pStageValidator;
}

ActionBase::ResultE RenderActionBase::start(void)
{
    if(_bFrustumCulling   == true &&
       _bAutoFrustum      == true &&
        getCamera      () != NULL &&
        getViewport    () != NULL)
    {
        getCamera()->getFrustum(_oFrustum, *getViewport());
    }

    if(_pStatistics != NULL)
    {
        _pStatistics->reset();


        _pStatistics->getElem(statTravTime       )->start();
//    getStatistics()->getElem(statCullTestedNodes)->reset();
//    getStatistics()->getElem(statCulledNodes    )->reset();
    //getStatistics()->getElem(RenderAction::statNTextures)->reset();
    //getStatistics()->getElem(RenderAction::statNTexBytes)->reset();

    // this really doesn't belong here, but don't know a better place to put it
        if(_pStatistics->getElem(Drawable::statNTriangles,false) != NULL)
        {
            _pStatistics->getElem(Drawable::statNTriangles )->set(0);
            _pStatistics->getElem(Drawable::statNLines     )->set(0);
            _pStatistics->getElem(Drawable::statNPoints    )->set(0);
            _pStatistics->getElem(Drawable::statNVertices  )->set(0);
            _pStatistics->getElem(Drawable::statNPrimitives)->set(0);
        }
    }

    _pStageValidator->incEventCounter();

    return Action::Continue;
}

ActionBase::ResultE RenderActionBase::stop(ActionBase::ResultE res)
{
    if(_pStatistics != NULL)
    {
        _pStatistics->getElem(statTravTime)->stop();
    }

    return res;
}

void RenderActionBase::setViewport(Viewport *pViewport)
{
    _pViewport = pViewport;
}

void RenderActionBase::setCamera(Camera *pCamera)
{
    _pCamera = pCamera;
}

void RenderActionBase::setBackground(Background *pBackground)
{
    _pBackground = pBackground;
}

void RenderActionBase::setWindow(Window *pWindow)
{
    _pWindow = pWindow;
}

void RenderActionBase::setStatCollector(StatCollector *pStatistics)
{
    OSG::setRefd(_pStatistics, pStatistics);
}


// do frustum culling at all?
// default true

void RenderActionBase::setFrustumCulling(bool val)
{
    _bFrustumCulling = val;
}

// automatically calc the frustum at the beginning of the traversal
// default true

void RenderActionBase::setAutoFrustum(bool val)
{
    _bAutoFrustum = val;
}

// draw the tested volumes
// default false

void RenderActionBase::setVolumeDrawing(bool val)
{
    _bVolumeDrawing = val;
}

// explicitly set the frustum

void RenderActionBase::setFrustum(FrustumVolume &oFrustum)
{
    _oFrustum = oFrustum;
}


#if 0
// select all visible nodes
UInt32 RenderActionBase::selectVisibles(void)
{
    if(getFrustumCulling() == false)
        return getNNodes();

    useNodeList();

    Color3f col;

    UInt32 count = 0;

    for(UInt32 i = 0; i < getNNodes(); i++)
    {
        if(isVisible(getCPtr(getNode(i))))
        {
            col.setValuesRGB(0,1,0);

            addNode(getNode(i));

            ++count;
        }
        else
        {
            col.setValuesRGB(1,0,0);
        }

        if(getVolumeDrawing())
        {
            dropVolume(this, getNode(i), col);
        }
    }

    return count;
}
#endif
