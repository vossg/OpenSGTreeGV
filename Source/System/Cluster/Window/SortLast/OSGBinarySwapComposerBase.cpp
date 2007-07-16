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
 **     class BinarySwapComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBINARYSWAPCOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBinarySwapComposerBase.h"
#include "OSGBinarySwapComposer.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BinarySwapComposer
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            BinarySwapComposerBase::_sfShort
    
*/

/*! \var bool            BinarySwapComposerBase::_sfAlpha
    
*/

/*! \var UInt32          BinarySwapComposerBase::_sfTileSize
    
*/


void BinarySwapComposerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BinarySwapComposerBase::*GetSFShortF)(void) const;

    GetSFShortF GetSFShort = &BinarySwapComposerBase::getSFShort;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "short",
        "",
        ShortFieldId, ShortFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editSFShort),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFShort));
#else
        reinterpret_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getSFShort));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BinarySwapComposerBase::*GetSFAlphaF)(void) const;

    GetSFAlphaF GetSFAlpha = &BinarySwapComposerBase::getSFAlpha;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editSFAlpha),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAlpha));
#else
        reinterpret_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getSFAlpha));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(BinarySwapComposerBase::*GetSFTileSizeF)(void) const;

    GetSFTileSizeF GetSFTileSize = &BinarySwapComposerBase::getSFTileSize;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "tileSize",
        "",
        TileSizeFieldId, TileSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BinarySwapComposerBase::editSFTileSize),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTileSize));
#else
        reinterpret_cast<FieldGetMethodSig >(&BinarySwapComposerBase::getSFTileSize));
#endif

    oType.addInitialDesc(pDesc);
}


BinarySwapComposerBase::TypeObject BinarySwapComposerBase::_type(
    BinarySwapComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &BinarySwapComposerBase::createEmpty,
    BinarySwapComposer::initMethod,
    (InitalInsertDescFunc) &BinarySwapComposerBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"BinarySwapComposer\"\n"
    "\tparent=\"ImageComposer\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"short\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alpha\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tileSize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"44\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BinarySwapComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &BinarySwapComposerBase::getType(void) const
{
    return _type;
}

UInt32 BinarySwapComposerBase::getContainerSize(void) const
{
    return sizeof(BinarySwapComposer);
}

/*------------------------- decorator get ------------------------------*/


SFBool *BinarySwapComposerBase::editSFShort(void)
{
    editSField(ShortFieldMask);

    return &_sfShort;
}

const SFBool *BinarySwapComposerBase::getSFShort(void) const
{
    return &_sfShort;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BinarySwapComposerBase::getSFShort          (void)
{
    return this->editSFShort          ();
}
#endif

SFBool *BinarySwapComposerBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *BinarySwapComposerBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BinarySwapComposerBase::getSFAlpha          (void)
{
    return this->editSFAlpha          ();
}
#endif

SFUInt32 *BinarySwapComposerBase::editSFTileSize(void)
{
    editSField(TileSizeFieldMask);

    return &_sfTileSize;
}

const SFUInt32 *BinarySwapComposerBase::getSFTileSize(void) const
{
    return &_sfTileSize;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *BinarySwapComposerBase::getSFTileSize       (void)
{
    return this->editSFTileSize       ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BinarySwapComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        returnValue += _sfTileSize.getBinSize();
    }

    return returnValue;
}

void BinarySwapComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyToBin(pMem);
    }
}

void BinarySwapComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BinarySwapComposerPtr BinarySwapComposerBase::create(void)
{
    BinarySwapComposerPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<BinarySwapComposer::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BinarySwapComposerPtr BinarySwapComposerBase::createEmpty(void)
{
    BinarySwapComposerPtr returnValue;

    newPtr<BinarySwapComposer>(returnValue);

    return returnValue;
}

FieldContainerPtr BinarySwapComposerBase::shallowCopy(void) const
{
    BinarySwapComposerPtr returnValue;

    newPtr(returnValue, dynamic_cast<const BinarySwapComposer *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BinarySwapComposerBase::BinarySwapComposerBase(void) :
    Inherited(),
    _sfShort                  (bool(true)),
    _sfAlpha                  (bool(false)),
    _sfTileSize               (UInt32(44))
{
}

BinarySwapComposerBase::BinarySwapComposerBase(const BinarySwapComposerBase &source) :
    Inherited(source),
    _sfShort                  (source._sfShort                  ),
    _sfAlpha                  (source._sfAlpha                  ),
    _sfTileSize               (source._sfTileSize               )
{
}


/*-------------------------- destructors ----------------------------------*/

BinarySwapComposerBase::~BinarySwapComposerBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void BinarySwapComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BinarySwapComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr BinarySwapComposerBase::createAspectCopy(void) const
{
    BinarySwapComposerPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BinarySwapComposer *>(this));

    return returnValue;
}
#endif

void BinarySwapComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BinarySwapComposerPtr>::_type("BinarySwapComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE
