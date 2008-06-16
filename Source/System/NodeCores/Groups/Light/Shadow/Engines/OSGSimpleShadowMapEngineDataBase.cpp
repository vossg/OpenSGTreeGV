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
 **     class SimpleShadowMapEngineData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLESHADOWMAPENGINEDATAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGCamera.h> // Camera Class
#include <OSGTextureObjChunk.h> // TexChunk Class
#include <OSGTextureBuffer.h> // TexBuffer Class
#include <OSGLightChunk.h> // LightChunk Class
#include <OSGBlendChunk.h> // BlendChunk Class
#include <OSGTexGenChunk.h> // TexGenChunk Class
#include <OSGPolygonChunk.h> // PolyChunk Class

#include "OSGSimpleShadowMapEngineDataBase.h"
#include "OSGSimpleShadowMapEngineData.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleShadowMapEngineData
    Data use for rendering by the SimpleShadowmap stage
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Camera *        SimpleShadowMapEngineDataBase::_sfCamera
    
*/

/*! \var TextureObjChunk * SimpleShadowMapEngineDataBase::_sfTexChunk
    
*/

/*! \var TextureBuffer * SimpleShadowMapEngineDataBase::_sfTexBuffer
    
*/

/*! \var LightChunk *    SimpleShadowMapEngineDataBase::_sfLightChunk
    
*/

/*! \var BlendChunk *    SimpleShadowMapEngineDataBase::_sfBlendChunk
    
*/

/*! \var TexGenChunk *   SimpleShadowMapEngineDataBase::_sfTexGenChunk
    
*/

/*! \var PolygonChunk *  SimpleShadowMapEngineDataBase::_sfPolyChunk
    
*/


void SimpleShadowMapEngineDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecCameraPtr::Description(
        SFUnrecCameraPtr::getClassType(),
        "camera",
        "",
        CameraFieldId, CameraFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleCamera),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "texChunk",
        "",
        TexChunkFieldId, TexChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleTexChunk),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleTexChunk));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureBufferPtr::Description(
        SFUnrecTextureBufferPtr::getClassType(),
        "texBuffer",
        "",
        TexBufferFieldId, TexBufferFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleTexBuffer),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleTexBuffer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecLightChunkPtr::Description(
        SFUnrecLightChunkPtr::getClassType(),
        "lightChunk",
        "",
        LightChunkFieldId, LightChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleLightChunk),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleLightChunk));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecBlendChunkPtr::Description(
        SFUnrecBlendChunkPtr::getClassType(),
        "blendChunk",
        "",
        BlendChunkFieldId, BlendChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleBlendChunk),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleBlendChunk));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTexGenChunkPtr::Description(
        SFUnrecTexGenChunkPtr::getClassType(),
        "texGenChunk",
        "",
        TexGenChunkFieldId, TexGenChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandleTexGenChunk),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandleTexGenChunk));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecPolygonChunkPtr::Description(
        SFUnrecPolygonChunkPtr::getClassType(),
        "polyChunk",
        "",
        PolyChunkFieldId, PolyChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SimpleShadowMapEngineData::editHandlePolyChunk),
        static_cast<FieldGetMethodSig >(&SimpleShadowMapEngineData::getHandlePolyChunk));

    oType.addInitialDesc(pDesc);
}


SimpleShadowMapEngineDataBase::TypeObject SimpleShadowMapEngineDataBase::_type(
    SimpleShadowMapEngineDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SimpleShadowMapEngineDataBase::createEmptyLocal),
    SimpleShadowMapEngineData::initMethod,
    SimpleShadowMapEngineData::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SimpleShadowMapEngineDataBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"SimpleShadowMapEngineData\"\n"
    "    parent=\"StageData\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "Data use for rendering by the SimpleShadowmap stage\n"
    "\t<Field\n"
    "\t\tname=\"camera\"\n"
    "\t\ttype=\"CameraPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texChunk\"\n"
    "\t\ttype=\"TextureObjChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texBuffer\"\n"
    "\t\ttype=\"TextureBufferPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lightChunk\"\n"
    "\t\ttype=\"LightChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"blendChunk\"\n"
    "\t\ttype=\"BlendChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texGenChunk\"\n"
    "\t\ttype=\"TexGenChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"polyChunk\"\n"
    "\t\ttype=\"PolygonChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the SimpleShadowmap stage\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleShadowMapEngineDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleShadowMapEngineDataBase::getType(void) const
{
    return _type;
}

UInt32 SimpleShadowMapEngineDataBase::getContainerSize(void) const
{
    return sizeof(SimpleShadowMapEngineData);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SimpleShadowMapEngineData::_sfCamera field.
const SFUnrecCameraPtr *SimpleShadowMapEngineDataBase::getSFCamera(void) const
{
    return &_sfCamera;
}

SFUnrecCameraPtr    *SimpleShadowMapEngineDataBase::editSFCamera         (void)
{
    editSField(CameraFieldMask);

    return &_sfCamera;
}

//! Get the SimpleShadowMapEngineData::_sfTexChunk field.
const SFUnrecTextureObjChunkPtr *SimpleShadowMapEngineDataBase::getSFTexChunk(void) const
{
    return &_sfTexChunk;
}

SFUnrecTextureObjChunkPtr *SimpleShadowMapEngineDataBase::editSFTexChunk       (void)
{
    editSField(TexChunkFieldMask);

    return &_sfTexChunk;
}

//! Get the SimpleShadowMapEngineData::_sfTexBuffer field.
const SFUnrecTextureBufferPtr *SimpleShadowMapEngineDataBase::getSFTexBuffer(void) const
{
    return &_sfTexBuffer;
}

SFUnrecTextureBufferPtr *SimpleShadowMapEngineDataBase::editSFTexBuffer      (void)
{
    editSField(TexBufferFieldMask);

    return &_sfTexBuffer;
}

//! Get the SimpleShadowMapEngineData::_sfLightChunk field.
const SFUnrecLightChunkPtr *SimpleShadowMapEngineDataBase::getSFLightChunk(void) const
{
    return &_sfLightChunk;
}

SFUnrecLightChunkPtr *SimpleShadowMapEngineDataBase::editSFLightChunk     (void)
{
    editSField(LightChunkFieldMask);

    return &_sfLightChunk;
}

//! Get the SimpleShadowMapEngineData::_sfBlendChunk field.
const SFUnrecBlendChunkPtr *SimpleShadowMapEngineDataBase::getSFBlendChunk(void) const
{
    return &_sfBlendChunk;
}

SFUnrecBlendChunkPtr *SimpleShadowMapEngineDataBase::editSFBlendChunk     (void)
{
    editSField(BlendChunkFieldMask);

    return &_sfBlendChunk;
}

//! Get the SimpleShadowMapEngineData::_sfTexGenChunk field.
const SFUnrecTexGenChunkPtr *SimpleShadowMapEngineDataBase::getSFTexGenChunk(void) const
{
    return &_sfTexGenChunk;
}

SFUnrecTexGenChunkPtr *SimpleShadowMapEngineDataBase::editSFTexGenChunk    (void)
{
    editSField(TexGenChunkFieldMask);

    return &_sfTexGenChunk;
}

//! Get the SimpleShadowMapEngineData::_sfPolyChunk field.
const SFUnrecPolygonChunkPtr *SimpleShadowMapEngineDataBase::getSFPolyChunk(void) const
{
    return &_sfPolyChunk;
}

SFUnrecPolygonChunkPtr *SimpleShadowMapEngineDataBase::editSFPolyChunk      (void)
{
    editSField(PolyChunkFieldMask);

    return &_sfPolyChunk;
}





/*------------------------------ access -----------------------------------*/

UInt32 SimpleShadowMapEngineDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }
    if(FieldBits::NoField != (TexChunkFieldMask & whichField))
    {
        returnValue += _sfTexChunk.getBinSize();
    }
    if(FieldBits::NoField != (TexBufferFieldMask & whichField))
    {
        returnValue += _sfTexBuffer.getBinSize();
    }
    if(FieldBits::NoField != (LightChunkFieldMask & whichField))
    {
        returnValue += _sfLightChunk.getBinSize();
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        returnValue += _sfBlendChunk.getBinSize();
    }
    if(FieldBits::NoField != (TexGenChunkFieldMask & whichField))
    {
        returnValue += _sfTexGenChunk.getBinSize();
    }
    if(FieldBits::NoField != (PolyChunkFieldMask & whichField))
    {
        returnValue += _sfPolyChunk.getBinSize();
    }

    return returnValue;
}

void SimpleShadowMapEngineDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexChunkFieldMask & whichField))
    {
        _sfTexChunk.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexBufferFieldMask & whichField))
    {
        _sfTexBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightChunkFieldMask & whichField))
    {
        _sfLightChunk.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        _sfBlendChunk.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexGenChunkFieldMask & whichField))
    {
        _sfTexGenChunk.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PolyChunkFieldMask & whichField))
    {
        _sfPolyChunk.copyToBin(pMem);
    }
}

void SimpleShadowMapEngineDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexChunkFieldMask & whichField))
    {
        _sfTexChunk.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexBufferFieldMask & whichField))
    {
        _sfTexBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightChunkFieldMask & whichField))
    {
        _sfLightChunk.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlendChunkFieldMask & whichField))
    {
        _sfBlendChunk.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexGenChunkFieldMask & whichField))
    {
        _sfTexGenChunk.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PolyChunkFieldMask & whichField))
    {
        _sfPolyChunk.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleShadowMapEngineDataTransitPtr SimpleShadowMapEngineDataBase::createLocal(BitVector bFlags)
{
    SimpleShadowMapEngineDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleShadowMapEngineData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleShadowMapEngineDataTransitPtr SimpleShadowMapEngineDataBase::create(void)
{
    return createLocal();
}

SimpleShadowMapEngineData *SimpleShadowMapEngineDataBase::createEmptyLocal(BitVector bFlags)
{
    SimpleShadowMapEngineData *returnValue;

    newPtr<SimpleShadowMapEngineData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleShadowMapEngineData *SimpleShadowMapEngineDataBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr SimpleShadowMapEngineDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleShadowMapEngineData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleShadowMapEngineData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleShadowMapEngineDataBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

SimpleShadowMapEngineDataBase::SimpleShadowMapEngineDataBase(void) :
    Inherited(),
    _sfCamera                 (NULL),
    _sfTexChunk               (NULL),
    _sfTexBuffer              (NULL),
    _sfLightChunk             (NULL),
    _sfBlendChunk             (NULL),
    _sfTexGenChunk            (NULL),
    _sfPolyChunk              (NULL)
{
}

SimpleShadowMapEngineDataBase::SimpleShadowMapEngineDataBase(const SimpleShadowMapEngineDataBase &source) :
    Inherited(source),
    _sfCamera                 (NULL),
    _sfTexChunk               (NULL),
    _sfTexBuffer              (NULL),
    _sfLightChunk             (NULL),
    _sfBlendChunk             (NULL),
    _sfTexGenChunk            (NULL),
    _sfPolyChunk              (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleShadowMapEngineDataBase::~SimpleShadowMapEngineDataBase(void)
{
}

void SimpleShadowMapEngineDataBase::onCreate(const SimpleShadowMapEngineData *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SimpleShadowMapEngineData *pThis = static_cast<SimpleShadowMapEngineData *>(this);

        pThis->setCamera(source->getCamera());

        pThis->setTexChunk(source->getTexChunk());

        pThis->setTexBuffer(source->getTexBuffer());

        pThis->setLightChunk(source->getLightChunk());

        pThis->setBlendChunk(source->getBlendChunk());

        pThis->setTexGenChunk(source->getTexGenChunk());

        pThis->setPolyChunk(source->getPolyChunk());
    }
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleCamera          (void) const
{
    SFUnrecCameraPtr::GetHandlePtr returnValue(
        new  SFUnrecCameraPtr::GetHandle(
             &_sfCamera, 
             this->getType().getFieldDesc(CameraFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleCamera         (void)
{
    SFUnrecCameraPtr::EditHandlePtr returnValue(
        new  SFUnrecCameraPtr::EditHandle(
             &_sfCamera, 
             this->getType().getFieldDesc(CameraFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setCamera, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(CameraFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleTexChunk        (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexChunk, 
             this->getType().getFieldDesc(TexChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleTexChunk       (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexChunk, 
             this->getType().getFieldDesc(TexChunkFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setTexChunk, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(TexChunkFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleTexBuffer       (void) const
{
    SFUnrecTextureBufferPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureBufferPtr::GetHandle(
             &_sfTexBuffer, 
             this->getType().getFieldDesc(TexBufferFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleTexBuffer      (void)
{
    SFUnrecTextureBufferPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureBufferPtr::EditHandle(
             &_sfTexBuffer, 
             this->getType().getFieldDesc(TexBufferFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setTexBuffer, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(TexBufferFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleLightChunk      (void) const
{
    SFUnrecLightChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecLightChunkPtr::GetHandle(
             &_sfLightChunk, 
             this->getType().getFieldDesc(LightChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleLightChunk     (void)
{
    SFUnrecLightChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecLightChunkPtr::EditHandle(
             &_sfLightChunk, 
             this->getType().getFieldDesc(LightChunkFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setLightChunk, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(LightChunkFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleBlendChunk      (void) const
{
    SFUnrecBlendChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecBlendChunkPtr::GetHandle(
             &_sfBlendChunk, 
             this->getType().getFieldDesc(BlendChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleBlendChunk     (void)
{
    SFUnrecBlendChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecBlendChunkPtr::EditHandle(
             &_sfBlendChunk, 
             this->getType().getFieldDesc(BlendChunkFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setBlendChunk, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(BlendChunkFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandleTexGenChunk     (void) const
{
    SFUnrecTexGenChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTexGenChunkPtr::GetHandle(
             &_sfTexGenChunk, 
             this->getType().getFieldDesc(TexGenChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandleTexGenChunk    (void)
{
    SFUnrecTexGenChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTexGenChunkPtr::EditHandle(
             &_sfTexGenChunk, 
             this->getType().getFieldDesc(TexGenChunkFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setTexGenChunk, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(TexGenChunkFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleShadowMapEngineDataBase::getHandlePolyChunk       (void) const
{
    SFUnrecPolygonChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecPolygonChunkPtr::GetHandle(
             &_sfPolyChunk, 
             this->getType().getFieldDesc(PolyChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr SimpleShadowMapEngineDataBase::editHandlePolyChunk      (void)
{
    SFUnrecPolygonChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecPolygonChunkPtr::EditHandle(
             &_sfPolyChunk, 
             this->getType().getFieldDesc(PolyChunkFieldId)));

    returnValue->setSetMethod(boost::bind(&SimpleShadowMapEngineData::setPolyChunk, 
                                          static_cast<SimpleShadowMapEngineData *>(this), _1));

    editSField(PolyChunkFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleShadowMapEngineDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleShadowMapEngineDataBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleShadowMapEngineDataBase::createAspectCopy(void) const
{
    SimpleShadowMapEngineData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleShadowMapEngineData *>(this));

    return returnValue;
}
#endif

void SimpleShadowMapEngineDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleShadowMapEngineData *>(this)->setCamera(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setTexChunk(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setTexBuffer(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setLightChunk(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setBlendChunk(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setTexGenChunk(NULL);

    static_cast<SimpleShadowMapEngineData *>(this)->setPolyChunk(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SimpleShadowMapEngineData *>::_type("SimpleShadowMapEngineDataPtr", "StageDataPtr");
#endif


OSG_END_NAMESPACE
