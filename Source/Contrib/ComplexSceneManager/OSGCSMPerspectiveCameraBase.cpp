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
 **     class CSMPerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // HeadBeacon Class

#include "OSGCSMPerspectiveCameraBase.h"
#include "OSGCSMPerspectiveCamera.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMPerspectiveCamera
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          CSMPerspectiveCameraBase::_sfEyeSeparation
    
*/

/*! \var Real32          CSMPerspectiveCameraBase::_sfZeroParallax
    
*/

/*! \var Node *          CSMPerspectiveCameraBase::_sfHeadBeacon
    
*/


void CSMPerspectiveCameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "eyeSeparation",
        "",
        EyeSeparationFieldId, EyeSeparationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMPerspectiveCamera::editHandleEyeSeparation),
        static_cast<FieldGetMethodSig >(&CSMPerspectiveCamera::getHandleEyeSeparation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "zeroParallax",
        "",
        ZeroParallaxFieldId, ZeroParallaxFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMPerspectiveCamera::editHandleZeroParallax),
        static_cast<FieldGetMethodSig >(&CSMPerspectiveCamera::getHandleZeroParallax));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "headBeacon",
        "",
        HeadBeaconFieldId, HeadBeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMPerspectiveCamera::editHandleHeadBeacon),
        static_cast<FieldGetMethodSig >(&CSMPerspectiveCamera::getHandleHeadBeacon));

    oType.addInitialDesc(pDesc);
}


CSMPerspectiveCameraBase::TypeObject CSMPerspectiveCameraBase::_type(
    CSMPerspectiveCameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CSMPerspectiveCameraBase::createEmptyLocal),
    CSMPerspectiveCamera::initMethod,
    CSMPerspectiveCamera::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMPerspectiveCamera::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMPerspectiveCamera\"\n"
    "    parent=\"PerspectiveCamera\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"eyeSeparation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.5f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"zeroParallax\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"10.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "      name=\"headBeacon\"\n"
    "      type=\"Node\"\n"
    "      category=\"weakpointer\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "    >\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMPerspectiveCameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMPerspectiveCameraBase::getType(void) const
{
    return _type;
}

UInt32 CSMPerspectiveCameraBase::getContainerSize(void) const
{
    return sizeof(CSMPerspectiveCamera);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *CSMPerspectiveCameraBase::editSFEyeSeparation(void)
{
    editSField(EyeSeparationFieldMask);

    return &_sfEyeSeparation;
}

const SFReal32 *CSMPerspectiveCameraBase::getSFEyeSeparation(void) const
{
    return &_sfEyeSeparation;
}


SFReal32 *CSMPerspectiveCameraBase::editSFZeroParallax(void)
{
    editSField(ZeroParallaxFieldMask);

    return &_sfZeroParallax;
}

const SFReal32 *CSMPerspectiveCameraBase::getSFZeroParallax(void) const
{
    return &_sfZeroParallax;
}


//! Get the CSMPerspectiveCamera::_sfHeadBeacon field.
const SFWeakNodePtr *CSMPerspectiveCameraBase::getSFHeadBeacon(void) const
{
    return &_sfHeadBeacon;
}

SFWeakNodePtr       *CSMPerspectiveCameraBase::editSFHeadBeacon     (void)
{
    editSField(HeadBeaconFieldMask);

    return &_sfHeadBeacon;
}





/*------------------------------ access -----------------------------------*/

UInt32 CSMPerspectiveCameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        returnValue += _sfEyeSeparation.getBinSize();
    }
    if(FieldBits::NoField != (ZeroParallaxFieldMask & whichField))
    {
        returnValue += _sfZeroParallax.getBinSize();
    }
    if(FieldBits::NoField != (HeadBeaconFieldMask & whichField))
    {
        returnValue += _sfHeadBeacon.getBinSize();
    }

    return returnValue;
}

void CSMPerspectiveCameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        _sfEyeSeparation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ZeroParallaxFieldMask & whichField))
    {
        _sfZeroParallax.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeadBeaconFieldMask & whichField))
    {
        _sfHeadBeacon.copyToBin(pMem);
    }
}

void CSMPerspectiveCameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    {
        _sfEyeSeparation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ZeroParallaxFieldMask & whichField))
    {
        _sfZeroParallax.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeadBeaconFieldMask & whichField))
    {
        _sfHeadBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMPerspectiveCameraTransitPtr CSMPerspectiveCameraBase::createLocal(BitVector bFlags)
{
    CSMPerspectiveCameraTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMPerspectiveCamera>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMPerspectiveCameraTransitPtr CSMPerspectiveCameraBase::createDependent(BitVector bFlags)
{
    CSMPerspectiveCameraTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMPerspectiveCamera>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMPerspectiveCameraTransitPtr CSMPerspectiveCameraBase::create(void)
{
    CSMPerspectiveCameraTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CSMPerspectiveCamera>(tmpPtr);
    }

    return fc;
}

CSMPerspectiveCamera *CSMPerspectiveCameraBase::createEmptyLocal(BitVector bFlags)
{
    CSMPerspectiveCamera *returnValue;

    newPtr<CSMPerspectiveCamera>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMPerspectiveCamera *CSMPerspectiveCameraBase::createEmpty(void)
{
    CSMPerspectiveCamera *returnValue;

    newPtr<CSMPerspectiveCamera>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CSMPerspectiveCameraBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMPerspectiveCamera *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMPerspectiveCamera *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMPerspectiveCameraBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMPerspectiveCamera *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMPerspectiveCamera *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMPerspectiveCameraBase::shallowCopy(void) const
{
    CSMPerspectiveCamera *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CSMPerspectiveCamera *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CSMPerspectiveCameraBase::CSMPerspectiveCameraBase(void) :
    Inherited(),
    _sfEyeSeparation          (Real32(0.5f)),
    _sfZeroParallax           (Real32(10.0f)),
    _sfHeadBeacon             (NULL)
{
}

CSMPerspectiveCameraBase::CSMPerspectiveCameraBase(const CSMPerspectiveCameraBase &source) :
    Inherited(source),
    _sfEyeSeparation          (source._sfEyeSeparation          ),
    _sfZeroParallax           (source._sfZeroParallax           ),
    _sfHeadBeacon             (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

CSMPerspectiveCameraBase::~CSMPerspectiveCameraBase(void)
{
}

void CSMPerspectiveCameraBase::onCreate(const CSMPerspectiveCamera *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CSMPerspectiveCamera *pThis = static_cast<CSMPerspectiveCamera *>(this);

        pThis->setHeadBeacon(source->getHeadBeacon());
    }
}

GetFieldHandlePtr CSMPerspectiveCameraBase::getHandleEyeSeparation   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEyeSeparation,
             this->getType().getFieldDesc(EyeSeparationFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMPerspectiveCameraBase::editHandleEyeSeparation  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEyeSeparation,
             this->getType().getFieldDesc(EyeSeparationFieldId)));


    editSField(EyeSeparationFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMPerspectiveCameraBase::getHandleZeroParallax    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfZeroParallax,
             this->getType().getFieldDesc(ZeroParallaxFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMPerspectiveCameraBase::editHandleZeroParallax   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfZeroParallax,
             this->getType().getFieldDesc(ZeroParallaxFieldId)));


    editSField(ZeroParallaxFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMPerspectiveCameraBase::getHandleHeadBeacon      (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfHeadBeacon,
             this->getType().getFieldDesc(HeadBeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr CSMPerspectiveCameraBase::editHandleHeadBeacon     (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfHeadBeacon,
             this->getType().getFieldDesc(HeadBeaconFieldId)));

    returnValue->setSetMethod(
        boost::bind(&CSMPerspectiveCamera::setHeadBeacon,
                    static_cast<CSMPerspectiveCamera *>(this), _1));

    editSField(HeadBeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMPerspectiveCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMPerspectiveCamera *pThis = static_cast<CSMPerspectiveCamera *>(this);

    pThis->execSync(static_cast<CSMPerspectiveCamera *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMPerspectiveCameraBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMPerspectiveCamera *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMPerspectiveCamera *>(pRefAspect),
                  dynamic_cast<const CSMPerspectiveCamera *>(this));

    return returnValue;
}
#endif

void CSMPerspectiveCameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CSMPerspectiveCamera *>(this)->setHeadBeacon(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CSMPerspectiveCamera *>::_type("CSMPerspectiveCameraPtr", "PerspectiveCameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CSMPerspectiveCamera *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMPerspectiveCamera *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMPerspectiveCamera *,
                           0);

OSG_END_NAMESPACE
