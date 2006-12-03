/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class SpotLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESPOTLIGHTINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSpotLightBase.h"
#include "OSGSpotLight.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SpotLight
    SpotLight is a located lightsource. The position of the light source
    (in the beacon's coordinate system) is defined by the \c position
    attribute, its direction by the \c direction attribute. The spot has an
    exponential fallof, controlled by the \c spotExponent attribute and a
    maximum opening angle, defined by the \c spotCutOff attribute. The
    influence of the light diminishes with distance, controlled by the \c
    constantAttenuation, \c linearAttenuation and \c quadraticAttenuation
    attributes.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3r           SpotLightBase::_sfDirection
    
*/
/*! \var Real            SpotLightBase::_sfSpotExponent
    The drop-off exponent of the spotlight.
*/
/*! \var Real            SpotLightBase::_sfSpotCutOff
    The cut-off angle of the spotlight (in radians, not degrees!).
*/

void SpotLightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(SpotLightBase::*GetSFDirectionF)(void) const;

    GetSFDirectionF GetSFDirection = &SpotLightBase::getSFDirection;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "direction",
        "",
        DirectionFieldId, DirectionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SpotLightBase::editSFDirection),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDirection));
#else
        reinterpret_cast<FieldGetMethodSig >(&SpotLightBase::getSFDirection));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(SpotLightBase::*GetSFSpotExponentF)(void) const;

    GetSFSpotExponentF GetSFSpotExponent = &SpotLightBase::getSFSpotExponent;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "spotExponent",
        "The drop-off exponent of the spotlight.\n",
        SpotExponentFieldId, SpotExponentFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SpotLightBase::editSFSpotExponent),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSpotExponent));
#else
        reinterpret_cast<FieldGetMethodSig >(&SpotLightBase::getSFSpotExponent));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(SpotLightBase::*GetSFSpotCutOffF)(void) const;

    GetSFSpotCutOffF GetSFSpotCutOff = &SpotLightBase::getSFSpotCutOff;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "spotCutOff",
        "The cut-off angle of the spotlight (in radians, not degrees!).\n",
        SpotCutOffFieldId, SpotCutOffFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SpotLightBase::editSFSpotCutOff),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSpotCutOff));
#else
        reinterpret_cast<FieldGetMethodSig >(&SpotLightBase::getSFSpotCutOff));
#endif

    oType.addInitialDesc(pDesc);
}


SpotLightBase::TypeObject SpotLightBase::_type(true,
    SpotLightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SpotLightBase::createEmpty,
    SpotLight::initMethod,
    (InitalInsertDescFunc) &SpotLightBase::classDescInserter,
    false,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SpotLight\"\n"
    "\tparent=\"PointLight\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "SpotLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute, its direction by the \\c direction attribute. The spot has an\n"
    "exponential fallof, controlled by the \\c spotExponent attribute and a\n"
    "maximum opening angle, defined by the \\c spotCutOff attribute.\n"
    "The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    "\t<Field\n"
    "\t\tname=\"direction\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f,0.f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"spotExponent\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe drop-off exponent of the spotlight.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"spotCutOff\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe cut-off angle of the spotlight (in radians, not degrees!).\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "SpotLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute, its direction by the \\c direction attribute. The spot has an\n"
    "exponential fallof, controlled by the \\c spotExponent attribute and a\n"
    "maximum opening angle, defined by the \\c spotCutOff attribute.\n"
    "The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SpotLightBase::getType(void)
{
    return _type;
}

const FieldContainerType &SpotLightBase::getType(void) const
{
    return _type;
}

UInt32 SpotLightBase::getContainerSize(void) const
{
    return sizeof(SpotLight);
}

/*------------------------- decorator get ------------------------------*/


SFVec3r *SpotLightBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3r *SpotLightBase::getSFDirection(void) const
{
    return &_sfDirection;
}

#ifdef OSG_1_COMPAT
SFVec3r             *SpotLightBase::getSFDirection      (void)
{
    return this->editSFDirection      ();
}
#endif

SFReal *SpotLightBase::editSFSpotExponent(void)
{
    editSField(SpotExponentFieldMask);

    return &_sfSpotExponent;
}

const SFReal *SpotLightBase::getSFSpotExponent(void) const
{
    return &_sfSpotExponent;
}

#ifdef OSG_1_COMPAT
SFReal              *SpotLightBase::getSFSpotExponent   (void)
{
    return this->editSFSpotExponent   ();
}
#endif

SFReal *SpotLightBase::editSFSpotCutOff(void)
{
    editSField(SpotCutOffFieldMask);

    return &_sfSpotCutOff;
}

const SFReal *SpotLightBase::getSFSpotCutOff(void) const
{
    return &_sfSpotCutOff;
}

#ifdef OSG_1_COMPAT
SFReal              *SpotLightBase::getSFSpotCutOff     (void)
{
    return this->editSFSpotCutOff     ();
}
#endif



/*------------------------------ access -----------------------------------*/

UInt32 SpotLightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        returnValue += _sfSpotExponent.getBinSize();
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        returnValue += _sfSpotCutOff.getBinSize();
    }

    return returnValue;
}

void SpotLightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        _sfSpotExponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        _sfSpotCutOff.copyToBin(pMem);
    }
}

void SpotLightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        _sfSpotExponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        _sfSpotCutOff.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SpotLightPtr SpotLightBase::createEmpty(void)
{
    SpotLightPtr returnValue;

    newPtr<SpotLight>(returnValue);

    return returnValue;
}

FieldContainerPtr SpotLightBase::shallowCopy(void) const
{
    SpotLightPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SpotLight *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SpotLightBase::SpotLightBase(void) :
    Inherited(),
    _sfDirection              (Vec3r(0.f,0.f,1.f)),
    _sfSpotExponent           (Real(0.f)),
    _sfSpotCutOff             (Real(0.f))
{
}

SpotLightBase::SpotLightBase(const SpotLightBase &source) :
    Inherited(source),
    _sfDirection              (source._sfDirection              ),
    _sfSpotExponent           (source._sfSpotExponent           ),
    _sfSpotCutOff             (source._sfSpotCutOff             )
{
}

/*-------------------------- destructors ----------------------------------*/

SpotLightBase::~SpotLightBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void SpotLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SpotLightBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SpotLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SpotLightBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SpotLightBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SpotLightBase::createAspectCopy(void) const
{
    SpotLightPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SpotLight *>(this));

    return returnValue;
}
#endif

void SpotLightBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SpotLightPtr>::_type("SpotLightPtr", "PointLightPtr");
#endif



/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGSPOTLIGHTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSPOTLIGHTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSPOTLIGHTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
