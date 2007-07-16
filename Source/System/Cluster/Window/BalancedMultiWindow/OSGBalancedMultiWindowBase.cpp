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
 **     class BalancedMultiWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBALANCEDMULTIWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBalancedMultiWindowBase.h"
#include "OSGBalancedMultiWindow.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BalancedMultiWindow
    Load balanced sort first rendering for multiple windows
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            BalancedMultiWindowBase::_sfBalance
    If true load balancing is eanbled. If falst it behaves like a MultiDisplayWindow
*/

/*! \var bool            BalancedMultiWindowBase::_sfBestCut
    If true horizontal and vertical cuts are testet. Otherwise the longes side of a viewport is split.
*/

/*! \var bool            BalancedMultiWindowBase::_sfShowBalancing
    Mark regions rendered by other hosts
*/

/*! \var UInt32          BalancedMultiWindowBase::_sfTileSize
    
*/

/*! \var bool            BalancedMultiWindowBase::_sfShort
    
*/


void BalancedMultiWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BalancedMultiWindowBase::*GetSFBalanceF)(void) const;

    GetSFBalanceF GetSFBalance = &BalancedMultiWindowBase::getSFBalance;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "balance",
        "If true load balancing is eanbled. If falst it behaves like a MultiDisplayWindow\n",
        BalanceFieldId, BalanceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BalancedMultiWindowBase::editSFBalance),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBalance));
#else
        reinterpret_cast<FieldGetMethodSig >(&BalancedMultiWindowBase::getSFBalance));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BalancedMultiWindowBase::*GetSFBestCutF)(void) const;

    GetSFBestCutF GetSFBestCut = &BalancedMultiWindowBase::getSFBestCut;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "bestCut",
        "If true horizontal and vertical cuts are testet. Otherwise the longes side of a viewport is split.\n",
        BestCutFieldId, BestCutFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BalancedMultiWindowBase::editSFBestCut),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBestCut));
#else
        reinterpret_cast<FieldGetMethodSig >(&BalancedMultiWindowBase::getSFBestCut));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BalancedMultiWindowBase::*GetSFShowBalancingF)(void) const;

    GetSFShowBalancingF GetSFShowBalancing = &BalancedMultiWindowBase::getSFShowBalancing;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "showBalancing",
        "Mark regions rendered by other hosts\n",
        ShowBalancingFieldId, ShowBalancingFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BalancedMultiWindowBase::editSFShowBalancing),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFShowBalancing));
#else
        reinterpret_cast<FieldGetMethodSig >(&BalancedMultiWindowBase::getSFShowBalancing));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(BalancedMultiWindowBase::*GetSFTileSizeF)(void) const;

    GetSFTileSizeF GetSFTileSize = &BalancedMultiWindowBase::getSFTileSize;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "tileSize",
        "",
        TileSizeFieldId, TileSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BalancedMultiWindowBase::editSFTileSize),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTileSize));
#else
        reinterpret_cast<FieldGetMethodSig >(&BalancedMultiWindowBase::getSFTileSize));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(BalancedMultiWindowBase::*GetSFShortF)(void) const;

    GetSFShortF GetSFShort = &BalancedMultiWindowBase::getSFShort;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "short",
        "",
        ShortFieldId, ShortFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&BalancedMultiWindowBase::editSFShort),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFShort));
#else
        reinterpret_cast<FieldGetMethodSig >(&BalancedMultiWindowBase::getSFShort));
#endif

    oType.addInitialDesc(pDesc);
}


BalancedMultiWindowBase::TypeObject BalancedMultiWindowBase::_type(
    BalancedMultiWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &BalancedMultiWindowBase::createEmpty,
    BalancedMultiWindow::initMethod,
    (InitalInsertDescFunc) &BalancedMultiWindowBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"BalancedMultiWindow\"\n"
    "\tparent=\"MultiDisplayWindow\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "Load balanced sort first rendering for multiple windows\n"
    "\t<Field\n"
    "\t\tname=\"balance\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true load balancing is eanbled. If falst it behaves like a MultiDisplayWindow\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bestCut\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true horizontal and vertical cuts are testet. Otherwise the longes side of a viewport is split.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"showBalancing\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMark regions rendered by other hosts\n"
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
    "\t<Field\n"
    "\t\tname=\"short\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Load balanced sort first rendering for multiple windows\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BalancedMultiWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &BalancedMultiWindowBase::getType(void) const
{
    return _type;
}

UInt32 BalancedMultiWindowBase::getContainerSize(void) const
{
    return sizeof(BalancedMultiWindow);
}

/*------------------------- decorator get ------------------------------*/


SFBool *BalancedMultiWindowBase::editSFBalance(void)
{
    editSField(BalanceFieldMask);

    return &_sfBalance;
}

const SFBool *BalancedMultiWindowBase::getSFBalance(void) const
{
    return &_sfBalance;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BalancedMultiWindowBase::getSFBalance        (void)
{
    return this->editSFBalance        ();
}
#endif

SFBool *BalancedMultiWindowBase::editSFBestCut(void)
{
    editSField(BestCutFieldMask);

    return &_sfBestCut;
}

const SFBool *BalancedMultiWindowBase::getSFBestCut(void) const
{
    return &_sfBestCut;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BalancedMultiWindowBase::getSFBestCut        (void)
{
    return this->editSFBestCut        ();
}
#endif

SFBool *BalancedMultiWindowBase::editSFShowBalancing(void)
{
    editSField(ShowBalancingFieldMask);

    return &_sfShowBalancing;
}

const SFBool *BalancedMultiWindowBase::getSFShowBalancing(void) const
{
    return &_sfShowBalancing;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BalancedMultiWindowBase::getSFShowBalancing  (void)
{
    return this->editSFShowBalancing  ();
}
#endif

SFUInt32 *BalancedMultiWindowBase::editSFTileSize(void)
{
    editSField(TileSizeFieldMask);

    return &_sfTileSize;
}

const SFUInt32 *BalancedMultiWindowBase::getSFTileSize(void) const
{
    return &_sfTileSize;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *BalancedMultiWindowBase::getSFTileSize       (void)
{
    return this->editSFTileSize       ();
}
#endif

SFBool *BalancedMultiWindowBase::editSFShort(void)
{
    editSField(ShortFieldMask);

    return &_sfShort;
}

const SFBool *BalancedMultiWindowBase::getSFShort(void) const
{
    return &_sfShort;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *BalancedMultiWindowBase::getSFShort          (void)
{
    return this->editSFShort          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 BalancedMultiWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        returnValue += _sfBalance.getBinSize();
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        returnValue += _sfBestCut.getBinSize();
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        returnValue += _sfShowBalancing.getBinSize();
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        returnValue += _sfTileSize.getBinSize();
    }
    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }

    return returnValue;
}

void BalancedMultiWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }
}

void BalancedMultiWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BalancedMultiWindowPtr BalancedMultiWindowBase::create(void)
{
    BalancedMultiWindowPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<BalancedMultiWindow::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
BalancedMultiWindowPtr BalancedMultiWindowBase::createEmpty(void)
{
    BalancedMultiWindowPtr returnValue;

    newPtr<BalancedMultiWindow>(returnValue);

    return returnValue;
}

FieldContainerPtr BalancedMultiWindowBase::shallowCopy(void) const
{
    BalancedMultiWindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const BalancedMultiWindow *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

BalancedMultiWindowBase::BalancedMultiWindowBase(void) :
    Inherited(),
    _sfBalance                (bool(true)),
    _sfBestCut                (bool(false)),
    _sfShowBalancing          (bool(false)),
    _sfTileSize               (UInt32(44)),
    _sfShort                  (bool(true))
{
}

BalancedMultiWindowBase::BalancedMultiWindowBase(const BalancedMultiWindowBase &source) :
    Inherited(source),
    _sfBalance                (source._sfBalance                ),
    _sfBestCut                (source._sfBestCut                ),
    _sfShowBalancing          (source._sfShowBalancing          ),
    _sfTileSize               (source._sfTileSize               ),
    _sfShort                  (source._sfShort                  )
{
}


/*-------------------------- destructors ----------------------------------*/

BalancedMultiWindowBase::~BalancedMultiWindowBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void BalancedMultiWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BalancedMultiWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr BalancedMultiWindowBase::createAspectCopy(void) const
{
    BalancedMultiWindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BalancedMultiWindow *>(this));

    return returnValue;
}
#endif

void BalancedMultiWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BalancedMultiWindowPtr>::_type("BalancedMultiWindowPtr", "MultiDisplayWindowPtr");
#endif


OSG_END_NAMESPACE
