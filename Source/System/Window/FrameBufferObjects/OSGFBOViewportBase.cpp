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
 **     class FBOViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGFrameBufferObject.h"       // FrameBufferObject Class

#include "OSGFBOViewportBase.h"
#include "OSGFBOViewport.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FBOViewport
    \ingroup GrpSystemWindowViewports

    A viewport using a framebuffer object for output.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FrameBufferObject * FBOViewportBase::_sfFrameBufferObject
    FramebufferObject to write to.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FBOViewport *>::_type("FBOViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FBOViewport *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FBOViewport *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FBOViewport *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FBOViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "frameBufferObject",
        "FramebufferObject to write to.\n",
        FrameBufferObjectFieldId, FrameBufferObjectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FBOViewport::editHandleFrameBufferObject),
        static_cast<FieldGetMethodSig >(&FBOViewport::getHandleFrameBufferObject));

    oType.addInitialDesc(pDesc);
}


FBOViewportBase::TypeObject FBOViewportBase::_type(
    FBOViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FBOViewportBase::createEmptyLocal),
    FBOViewport::initMethod,
    FBOViewport::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FBOViewport::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FBOViewport\"\n"
    "\tparent=\"Viewport\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "A viewport using a framebuffer object for output.\n"
    "\t<Field\n"
    "\t\tname=\"frameBufferObject\"\n"
    "\t\ttype=\"FrameBufferObjectPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        FramebufferObject to write to.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "A viewport using a framebuffer object for output.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FBOViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &FBOViewportBase::getType(void) const
{
    return _type;
}

UInt32 FBOViewportBase::getContainerSize(void) const
{
    return sizeof(FBOViewport);
}

/*------------------------- decorator get ------------------------------*/


//! Get the FBOViewport::_sfFrameBufferObject field.
const SFUnrecFrameBufferObjectPtr *FBOViewportBase::getSFFrameBufferObject(void) const
{
    return &_sfFrameBufferObject;
}

SFUnrecFrameBufferObjectPtr *FBOViewportBase::editSFFrameBufferObject(void)
{
    editSField(FrameBufferObjectFieldMask);

    return &_sfFrameBufferObject;
}





/*------------------------------ access -----------------------------------*/

UInt32 FBOViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        returnValue += _sfFrameBufferObject.getBinSize();
    }

    return returnValue;
}

void FBOViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyToBin(pMem);
    }
}

void FBOViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrameBufferObjectFieldMask & whichField))
    {
        _sfFrameBufferObject.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FBOViewportTransitPtr FBOViewportBase::createLocal(BitVector bFlags)
{
    FBOViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FBOViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FBOViewportTransitPtr FBOViewportBase::createDependent(BitVector bFlags)
{
    FBOViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FBOViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FBOViewportTransitPtr FBOViewportBase::create(void)
{
    FBOViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FBOViewport>(tmpPtr);
    }

    return fc;
}

FBOViewport *FBOViewportBase::createEmptyLocal(BitVector bFlags)
{
    FBOViewport *returnValue;

    newPtr<FBOViewport>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FBOViewport *FBOViewportBase::createEmpty(void)
{
    FBOViewport *returnValue;

    newPtr<FBOViewport>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FBOViewportBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FBOViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FBOViewport *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FBOViewportBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FBOViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FBOViewport *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FBOViewportBase::shallowCopy(void) const
{
    FBOViewport *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FBOViewport *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FBOViewportBase::FBOViewportBase(void) :
    Inherited(),
    _sfFrameBufferObject      (NULL)
{
}

FBOViewportBase::FBOViewportBase(const FBOViewportBase &source) :
    Inherited(source),
    _sfFrameBufferObject      (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

FBOViewportBase::~FBOViewportBase(void)
{
}

void FBOViewportBase::onCreate(const FBOViewport *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FBOViewport *pThis = static_cast<FBOViewport *>(this);

        pThis->setFrameBufferObject(source->getFrameBufferObject());
    }
}

GetFieldHandlePtr FBOViewportBase::getHandleFrameBufferObject (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfFrameBufferObject,
             this->getType().getFieldDesc(FrameBufferObjectFieldId),
             const_cast<FBOViewportBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FBOViewportBase::editHandleFrameBufferObject(void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfFrameBufferObject,
             this->getType().getFieldDesc(FrameBufferObjectFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FBOViewport::setFrameBufferObject,
                    static_cast<FBOViewport *>(this), _1));

    editSField(FrameBufferObjectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FBOViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FBOViewport *pThis = static_cast<FBOViewport *>(this);

    pThis->execSync(static_cast<FBOViewport *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FBOViewportBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FBOViewport *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FBOViewport *>(pRefAspect),
                  dynamic_cast<const FBOViewport *>(this));

    return returnValue;
}
#endif

void FBOViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FBOViewport *>(this)->setFrameBufferObject(NULL);


}


OSG_END_NAMESPACE
