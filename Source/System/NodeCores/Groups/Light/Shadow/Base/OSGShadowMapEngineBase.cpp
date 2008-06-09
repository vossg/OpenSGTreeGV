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
 **     class ShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADOWMAPENGINEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // RenderTarget Class

#include "OSGShadowMapEngineBase.h"
#include "OSGShadowMapEngine.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShadowMapEngine
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObject * ShadowMapEngineBase::_sfRenderTarget
    
*/

/*! \var Int32           ShadowMapEngineBase::_sfWidth
    
*/

/*! \var Int32           ShadowMapEngineBase::_sfHeight
    
*/

/*! \var Color4f         ShadowMapEngineBase::_sfShadowColor
    
*/

/*! \var Real32          ShadowMapEngineBase::_sfOffsetBias
    
*/

/*! \var Real32          ShadowMapEngineBase::_sfOffsetFactor
    
*/


void ShadowMapEngineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    Inherited::classDescInserter(oType);


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleRenderTarget),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleRenderTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleWidth),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleHeight),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "shadowColor",
        "",
        ShadowColorFieldId, ShadowColorFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleShadowColor),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleShadowColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetBias",
        "",
        OffsetBiasFieldId, OffsetBiasFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleOffsetBias),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleOffsetBias));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetFactor",
        "",
        OffsetFactorFieldId, OffsetFactorFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShadowMapEngine::editHandleOffsetFactor),
        static_cast<FieldGetMethodSig >(&ShadowMapEngine::getHandleOffsetFactor));

    oType.addInitialDesc(pDesc);
}


ShadowMapEngineBase::TypeObject ShadowMapEngineBase::_type(
    ShadowMapEngineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShadowMapEngine::initMethod,
    ShadowMapEngine::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShadowMapEngineBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShadowMapEngine\"\n"
    "\tparent=\"LightEngine\"\n"
    "    mixinparent=\"ShadowMapEngineParent\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"abstract\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"renderTarget\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"512\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"512\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shadowColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"Color4f(0.f, 0.f, 0.f, 1.f)\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetBias\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"4.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetFactor\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShadowMapEngineBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShadowMapEngineBase::getType(void) const
{
    return _type;
}

UInt32 ShadowMapEngineBase::getContainerSize(void) const
{
    return sizeof(ShadowMapEngine);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShadowMapEngine::_sfRenderTarget field.
const SFUnrecFrameBufferObjectPtr *ShadowMapEngineBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFUnrecFrameBufferObjectPtr *ShadowMapEngineBase::editSFRenderTarget   (void)
{
    editSField(RenderTargetFieldMask);

    return &_sfRenderTarget;
}

SFInt32 *ShadowMapEngineBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFInt32 *ShadowMapEngineBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFInt32 *ShadowMapEngineBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFInt32 *ShadowMapEngineBase::getSFHeight(void) const
{
    return &_sfHeight;
}


SFColor4f *ShadowMapEngineBase::editSFShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return &_sfShadowColor;
}

const SFColor4f *ShadowMapEngineBase::getSFShadowColor(void) const
{
    return &_sfShadowColor;
}


SFReal32 *ShadowMapEngineBase::editSFOffsetBias(void)
{
    editSField(OffsetBiasFieldMask);

    return &_sfOffsetBias;
}

const SFReal32 *ShadowMapEngineBase::getSFOffsetBias(void) const
{
    return &_sfOffsetBias;
}


SFReal32 *ShadowMapEngineBase::editSFOffsetFactor(void)
{
    editSField(OffsetFactorFieldMask);

    return &_sfOffsetFactor;
}

const SFReal32 *ShadowMapEngineBase::getSFOffsetFactor(void) const
{
    return &_sfOffsetFactor;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShadowMapEngineBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        returnValue += _sfShadowColor.getBinSize();
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        returnValue += _sfOffsetBias.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        returnValue += _sfOffsetFactor.getBinSize();
    }

    return returnValue;
}

void ShadowMapEngineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyToBin(pMem);
    }
}

void ShadowMapEngineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
    {
        _sfShadowColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ShadowMapEngineBase::ShadowMapEngineBase(void) :
    Inherited(),
    _sfRenderTarget           (NULL),
    _sfWidth                  (Int32(512)),
    _sfHeight                 (Int32(512)),
    _sfShadowColor            (Color4f(Color4f(0.f, 0.f, 0.f, 1.f))),
    _sfOffsetBias             (Real32(4.f)),
    _sfOffsetFactor           (Real32(10.f))
{
}

ShadowMapEngineBase::ShadowMapEngineBase(const ShadowMapEngineBase &source) :
    Inherited(source),
    _sfRenderTarget           (NULL),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfShadowColor            (source._sfShadowColor            ),
    _sfOffsetBias             (source._sfOffsetBias             ),
    _sfOffsetFactor           (source._sfOffsetFactor           )
{
}


/*-------------------------- destructors ----------------------------------*/

ShadowMapEngineBase::~ShadowMapEngineBase(void)
{
}

void ShadowMapEngineBase::onCreate(const ShadowMapEngine *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShadowMapEngine *pThis = static_cast<ShadowMapEngine *>(this);

        pThis->setRenderTarget(source->getRenderTarget());
    }
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleRenderTarget    (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfRenderTarget, 
             this->getType().getFieldDesc(RenderTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleRenderTarget   (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfRenderTarget, 
             this->getType().getFieldDesc(RenderTargetFieldId)));

    returnValue->setSetMethod(boost::bind(&ShadowMapEngine::setRenderTarget, 
                                          static_cast<ShadowMapEngine *>(this), _1));

    editSField(RenderTargetFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleWidth           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleWidth          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleHeight          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleHeight         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleShadowColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfShadowColor, 
             this->getType().getFieldDesc(ShadowColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleShadowColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfShadowColor, 
             this->getType().getFieldDesc(ShadowColorFieldId)));

    editSField(ShadowColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleOffsetBias      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOffsetBias, 
             this->getType().getFieldDesc(OffsetBiasFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleOffsetBias     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOffsetBias, 
             this->getType().getFieldDesc(OffsetBiasFieldId)));

    editSField(OffsetBiasFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShadowMapEngineBase::getHandleOffsetFactor    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOffsetFactor, 
             this->getType().getFieldDesc(OffsetFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShadowMapEngineBase::editHandleOffsetFactor   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOffsetFactor, 
             this->getType().getFieldDesc(OffsetFactorFieldId)));

    editSField(OffsetFactorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShadowMapEngineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShadowMapEngineBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void ShadowMapEngineBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShadowMapEngine *>(this)->setRenderTarget(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShadowMapEngine *>::_type("ShadowMapEnginePtr", "LightEnginePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShadowMapEngine *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           ShadowMapEngine *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           ShadowMapEngine *, 
                           0);

OSG_END_NAMESPACE
