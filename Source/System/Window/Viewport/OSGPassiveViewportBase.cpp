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
 **     class PassiveViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEVIEWPORTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPassiveViewportBase.h"
#include "OSGPassiveViewport.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PassiveViewport
    The PassiveViewport does nothing itself, but expects OpenGL to be properly configured when draw() or render() are called.
 */


PassiveViewportBase::TypeObject PassiveViewportBase::_type(
    PassiveViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PassiveViewportBase::createEmptyLocal),
    PassiveViewport::initMethod,
    PassiveViewport::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PassiveViewport\"\n"
    "\tparent=\"Viewport\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "The PassiveViewport does nothing itself, but expects OpenGL to be properly configured when draw() or render() are called.\n"
    "</FieldContainer>\n",
    "The PassiveViewport does nothing itself, but expects OpenGL to be properly configured when draw() or render() are called.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &PassiveViewportBase::getType(void) const
{
    return _type;
}

UInt32 PassiveViewportBase::getContainerSize(void) const
{
    return sizeof(PassiveViewport);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 PassiveViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PassiveViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
PassiveViewportTransitPtr PassiveViewportBase::createLocal(BitVector bFlags)
{
    PassiveViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PassiveViewport>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PassiveViewportTransitPtr PassiveViewportBase::create(void)
{
    PassiveViewportTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PassiveViewport>(tmpPtr);
    }

    return fc;
}

PassiveViewport *PassiveViewportBase::createEmptyLocal(BitVector bFlags)
{
    PassiveViewport *returnValue;

    newPtr<PassiveViewport>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PassiveViewport *PassiveViewportBase::createEmpty(void)
{
    PassiveViewport *returnValue;

    newPtr<PassiveViewport>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}


FieldContainerTransitPtr PassiveViewportBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PassiveViewport *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PassiveViewport *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PassiveViewportBase::shallowCopy(void) const
{
    PassiveViewport *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const PassiveViewport *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PassiveViewportBase::PassiveViewportBase(void) :
    Inherited()
{
}

PassiveViewportBase::PassiveViewportBase(const PassiveViewportBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

PassiveViewportBase::~PassiveViewportBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void PassiveViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PassiveViewportBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PassiveViewportBase::createAspectCopy(void) const
{
    PassiveViewport *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PassiveViewport *>(this));

    return returnValue;
}
#endif

void PassiveViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PassiveViewport *>::_type("PassiveViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PassiveViewport *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           PassiveViewport *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           PassiveViewport *, 
                           0);

OSG_END_NAMESPACE
