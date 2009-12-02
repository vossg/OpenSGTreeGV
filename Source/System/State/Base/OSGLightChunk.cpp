/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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
 * License along with this library; ifnot, write to the Free Software       *
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

#include "OSGGL.h"
#include "OSGGLU.h"

#include "OSGMatrix.h"
#include "OSGNode.h"
#include "OSGLightChunk.h"
#include "OSGDrawEnv.h"

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGLightChunkBase.cpp file.
// To modify it, please change the .fcd file (OSGLightChunk.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

StateChunkClass LightChunk::_class("Light", 8);

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

void LightChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/


/*------------- constructors & destructors --------------------------------*/

LightChunk::LightChunk(void) :
    Inherited()
{
}

LightChunk::LightChunk(const LightChunk &source) :
    Inherited(source)
{
}

LightChunk::~LightChunk(void)
{
}

/*------------------------- Chunk Class Access ---------------------------*/

const StateChunkClass *LightChunk::getClass(void) const
{
    return &_class;
}

/*------------------------------- Sync -----------------------------------*/

void LightChunk::changed(ConstFieldMaskArg whichField, 
                         UInt32            origin,
                         BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

/*------------------------------ Output ----------------------------------*/

void LightChunk::dump(      UInt32    OSG_CHECK_ARG(uiIndent),
                      const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump LightChunk NI" << std::endl;
}


/*------------------------------ State ------------------------------------*/

void LightChunk::activate(DrawEnv *pEnv, UInt32 index)
{
	glErr("light:activate:precheck");

    Matrixr tobeacon;

    if(_sfBeacon.getValue() != NULL)
    {
        _sfBeacon.getValue()->getToWorld(tobeacon);
    }
    else
    {
        tobeacon.setIdentity();
    }

    Matrixr cameraMat = pEnv->getCameraViewing();

    cameraMat.mult(tobeacon);


    glPushMatrix();
    GLP::glLoadMatrixf(cameraMat.getValues());


    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_DIFFUSE,
                   _sfDiffuse.getValue().getValuesRGBA());

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_AMBIENT,
                   _sfAmbient.getValue().getValuesRGBA());

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_SPECULAR,
                   _sfSpecular.getValue().getValuesRGBA());
    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_POSITION,
                   _sfPosition.getValue().getValues());

#if defined(GL_CONSTANT_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_CONSTANT_ATTENUATION,
                   _sfConstantAttenuation.getValue());
#endif

#if defined(GL_LINEAR_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_LINEAR_ATTENUATION,
                   _sfLinearAttenuation.getValue());
#endif

#if defined(GL_QUADRATIC_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_QUADRATIC_ATTENUATION,
                   _sfQuadraticAttenuation.getValue());
#endif

#if defined(GL_SPOT_CUTOFF)
    GLP::glLightf( GL_LIGHT0 + index, 
                   GL_SPOT_CUTOFF, 
                  _sfCutoff.getValue());
#endif

#if defined(GL_SPOT_DIRECTION) && defined(GL_SPOT_EXPONENT)
    if(_sfCutoff.getValue() < 180.f)
    {
        GLP::glLightfv( GL_LIGHT0 + index, 
                        GL_SPOT_DIRECTION,
                       _sfDirection.getValue().getValues());

        GLP::glLightf( GL_LIGHT0 + index, 
                       GL_SPOT_EXPONENT, 
                      _sfExponent.getValue());
    }
#endif

    glEnable(GL_LIGHT0 + index);

    glPopMatrix();

	glErr("light:activate:postcheck");
}

void LightChunk::changeFrom(DrawEnv    *pEnv, 
                            StateChunk *old_chunk, 
                            UInt32      index    )
{
	glErr("light:changed:precheck");

    LightChunk const *old = dynamic_cast<LightChunk const *>(old_chunk);

    // change from me to me?
    // this assumes I haven't changed in the meantime. is that a valid 
    // assumption?

    if(old == this)
        return;

    Matrixr tobeacon;

    if(_sfBeacon.getValue() != NULL)
    {
        _sfBeacon.getValue()->getToWorld(tobeacon);
    }
    else
    {
        tobeacon.setIdentity();
    }

    Matrixr cameraMat = pEnv->getCameraViewing();

    cameraMat.mult(tobeacon);

    glPushMatrix();
	GLP::glLoadMatrixf(cameraMat.getValues());

    // it could theoretically be more efficient to turn the light off before
    // changing its parameters, have to try that sometime

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_DIFFUSE,
                   _sfDiffuse.getValue().getValuesRGBA());

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_AMBIENT,
                   _sfAmbient.getValue().getValuesRGBA());

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_SPECULAR,
                   _sfSpecular.getValue().getValuesRGBA());

    GLP::glLightfv( GL_LIGHT0 + index, 
                    GL_POSITION,
                   _sfPosition.getValue().getValues());

#if defined(GL_CONSTANT_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_CONSTANT_ATTENUATION,
                   _sfConstantAttenuation.getValue());
#endif

#if defined(GL_LINEAR_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_LINEAR_ATTENUATION,
                   _sfLinearAttenuation.getValue());
#endif

#if defined(GL_QUADRATIC_ATTENUATION)
    GLP::glLightf ( GL_LIGHT0 + index, 
                    GL_QUADRATIC_ATTENUATION,
                   _sfQuadraticAttenuation.getValue());
#endif

#if defined(GL_SPOT_CUTOFF)
    GLP::glLightf( GL_LIGHT0 + index, 
                   GL_SPOT_CUTOFF,
                  _sfCutoff.getValue());
#endif

#if defined(GL_SPOT_DIRECTION) && defined(GL_SPOT_EXPONENT)
    if(_sfCutoff.getValue() < 180.f)
    {
        GLP::glLightfv( GL_LIGHT0 + index, 
                        GL_SPOT_DIRECTION,
                       _sfDirection.getValue().getValues());

        GLP::glLightf( GL_LIGHT0 + index, 
                       GL_SPOT_EXPONENT, 
                      _sfExponent.getValue());
    }
#endif

    glPopMatrix();

	glErr("light:changed:postcheck");
}

void LightChunk::deactivate(DrawEnv *, UInt32 index)
{
    glDisable(GL_LIGHT0 + index);
}


/*-------------------------- Comparison -----------------------------------*/

Real32 LightChunk::switchCost(StateChunk *OSG_CHECK_ARG(chunk))
{
    return 0;
}

bool LightChunk::operator < (const StateChunk &other) const
{
    return this < &other;
}

bool LightChunk::operator == (const StateChunk &other) const
{
    LightChunk const *tother = dynamic_cast<LightChunk const*>(&other);

    if(!tother)
        return false;

    if(tother == this)
        return true;

    if(!getAmbient  ().equals(tother->getAmbient  (), Eps) ||
       !getDiffuse  ().equals(tother->getDiffuse  (), Eps) ||
       !getSpecular ().equals(tother->getSpecular (), Eps) ||
       !getPosition ().equals(tother->getPosition (), Eps) ||
       !getDirection().equals(tother->getDirection(), Eps) ||

        getConstantAttenuation () != tother->getConstantAttenuation () ||
        getLinearAttenuation   () != tother->getLinearAttenuation   () ||
        getQuadraticAttenuation() != tother->getQuadraticAttenuation() ||
        getCutoff              () != tother->getCutoff              () ||
        getExponent            () != tother->getExponent            ()
      )
    {
        return false;
    }

    return true;
}

bool LightChunk::operator != (const StateChunk &other) const
{
    return ! (*this == other);
}
