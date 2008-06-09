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
 **     class PipelineComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPIPELINECOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPipelineComposerBase.h"
#include "OSGPipelineComposer.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PipelineComposer
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            PipelineComposerBase::_sfShort
    
*/

/*! \var bool            PipelineComposerBase::_sfAlpha
    
*/

/*! \var UInt32          PipelineComposerBase::_sfTileSize
    
*/

/*! \var bool            PipelineComposerBase::_sfPipelined
    
*/


void PipelineComposerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "short",
        "",
        ShortFieldId, ShortFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PipelineComposer::editHandleShort),
        static_cast<FieldGetMethodSig >(&PipelineComposer::getHandleShort));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PipelineComposer::editHandleAlpha),
        static_cast<FieldGetMethodSig >(&PipelineComposer::getHandleAlpha));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "tileSize",
        "",
        TileSizeFieldId, TileSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PipelineComposer::editHandleTileSize),
        static_cast<FieldGetMethodSig >(&PipelineComposer::getHandleTileSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "pipelined",
        "",
        PipelinedFieldId, PipelinedFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PipelineComposer::editHandlePipelined),
        static_cast<FieldGetMethodSig >(&PipelineComposer::getHandlePipelined));

    oType.addInitialDesc(pDesc);
}


PipelineComposerBase::TypeObject PipelineComposerBase::_type(
    PipelineComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PipelineComposerBase::createEmptyLocal),
    PipelineComposer::initMethod,
    PipelineComposer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PipelineComposerBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PipelineComposer\"\n"
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
    "\t<Field\n"
    "\t\tname=\"pipelined\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PipelineComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &PipelineComposerBase::getType(void) const
{
    return _type;
}

UInt32 PipelineComposerBase::getContainerSize(void) const
{
    return sizeof(PipelineComposer);
}

/*------------------------- decorator get ------------------------------*/


SFBool *PipelineComposerBase::editSFShort(void)
{
    editSField(ShortFieldMask);

    return &_sfShort;
}

const SFBool *PipelineComposerBase::getSFShort(void) const
{
    return &_sfShort;
}


SFBool *PipelineComposerBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *PipelineComposerBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}


SFUInt32 *PipelineComposerBase::editSFTileSize(void)
{
    editSField(TileSizeFieldMask);

    return &_sfTileSize;
}

const SFUInt32 *PipelineComposerBase::getSFTileSize(void) const
{
    return &_sfTileSize;
}


SFBool *PipelineComposerBase::editSFPipelined(void)
{
    editSField(PipelinedFieldMask);

    return &_sfPipelined;
}

const SFBool *PipelineComposerBase::getSFPipelined(void) const
{
    return &_sfPipelined;
}






/*------------------------------ access -----------------------------------*/

UInt32 PipelineComposerBase::getBinSize(ConstFieldMaskArg whichField)
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
    if(FieldBits::NoField != (PipelinedFieldMask & whichField))
    {
        returnValue += _sfPipelined.getBinSize();
    }

    return returnValue;
}

void PipelineComposerBase::copyToBin(BinaryDataHandler &pMem,
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
    if(FieldBits::NoField != (PipelinedFieldMask & whichField))
    {
        _sfPipelined.copyToBin(pMem);
    }
}

void PipelineComposerBase::copyFromBin(BinaryDataHandler &pMem,
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
    if(FieldBits::NoField != (PipelinedFieldMask & whichField))
    {
        _sfPipelined.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PipelineComposerTransitPtr PipelineComposerBase::create(void)
{
    PipelineComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PipelineComposer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PipelineComposerTransitPtr PipelineComposerBase::createLocal(BitVector bFlags)
{
    PipelineComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PipelineComposer>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
PipelineComposer *PipelineComposerBase::createEmpty(void)
{
    PipelineComposer *returnValue;

    newPtr<PipelineComposer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

PipelineComposer *PipelineComposerBase::createEmptyLocal(BitVector bFlags)
{
    PipelineComposer *returnValue;

    newPtr<PipelineComposer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PipelineComposerBase::shallowCopy(void) const
{
    PipelineComposer *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const PipelineComposer *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr PipelineComposerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PipelineComposer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PipelineComposer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PipelineComposerBase::PipelineComposerBase(void) :
    Inherited(),
    _sfShort                  (bool(true)),
    _sfAlpha                  (bool(false)),
    _sfTileSize               (UInt32(44)),
    _sfPipelined              (bool(false))
{
}

PipelineComposerBase::PipelineComposerBase(const PipelineComposerBase &source) :
    Inherited(source),
    _sfShort                  (source._sfShort                  ),
    _sfAlpha                  (source._sfAlpha                  ),
    _sfTileSize               (source._sfTileSize               ),
    _sfPipelined              (source._sfPipelined              )
{
}


/*-------------------------- destructors ----------------------------------*/

PipelineComposerBase::~PipelineComposerBase(void)
{
}


GetFieldHandlePtr PipelineComposerBase::getHandleShort           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    return returnValue;
}

EditFieldHandlePtr PipelineComposerBase::editHandleShort          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    editSField(ShortFieldMask);

    return returnValue;
}

GetFieldHandlePtr PipelineComposerBase::getHandleAlpha           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    return returnValue;
}

EditFieldHandlePtr PipelineComposerBase::editHandleAlpha          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    editSField(AlphaFieldMask);

    return returnValue;
}

GetFieldHandlePtr PipelineComposerBase::getHandleTileSize        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTileSize, 
             this->getType().getFieldDesc(TileSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PipelineComposerBase::editHandleTileSize       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTileSize, 
             this->getType().getFieldDesc(TileSizeFieldId)));

    editSField(TileSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PipelineComposerBase::getHandlePipelined       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPipelined, 
             this->getType().getFieldDesc(PipelinedFieldId)));

    return returnValue;
}

EditFieldHandlePtr PipelineComposerBase::editHandlePipelined      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPipelined, 
             this->getType().getFieldDesc(PipelinedFieldId)));

    editSField(PipelinedFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PipelineComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PipelineComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PipelineComposerBase::createAspectCopy(void) const
{
    PipelineComposer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PipelineComposer *>(this));

    return returnValue;
}
#endif

void PipelineComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PipelineComposer *>::_type("PipelineComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE
