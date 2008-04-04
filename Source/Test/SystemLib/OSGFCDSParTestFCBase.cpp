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
 **     class FCDSParTestFC!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFCDSPARTESTFCINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Parent Class

#include "OSGFCDSParTestFCBase.h"
#include "OSGFCDSParTestFC.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FCDSParTestFC
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ParentFieldContainerPtr FCDSParTestFCBase::_sfParent
    
*/


void FCDSParTestFCBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "parent",
        "",
        ParentFieldId, ParentFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FCDSParTestFCBase::invalidEditField),
        static_cast     <FieldGetMethodSig >(&FCDSParTestFCBase::invalidGetField));

    oType.addInitialDesc(pDesc);
}


FCDSParTestFCBase::TypeObject FCDSParTestFCBase::_type(
    FCDSParTestFCBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FCDSParTestFCBase::createEmptyLocal,
    FCDSParTestFC::initMethod,
    FCDSParTestFC::exitMethod,
    (InitalInsertDescFunc) &FCDSParTestFCBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FCDSParTestFC\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    "    childFields=\"both\"\n"
    "    childfieldparent=\"FieldContainer\"\n"
    "    parentfieldcard=\"single\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"parent\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FCDSParTestFCBase::getType(void)
{
    return _type;
}

const FieldContainerType &FCDSParTestFCBase::getType(void) const
{
    return _type;
}

UInt32 FCDSParTestFCBase::getContainerSize(void) const
{
    return sizeof(FCDSParTestFC);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

UInt32 FCDSParTestFCBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }

    return returnValue;
}

void FCDSParTestFCBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
}

void FCDSParTestFCBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FCDSParTestFCTransitPtr FCDSParTestFCBase::create(void)
{
    FCDSParTestFCTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FCDSParTestFC>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FCDSParTestFCTransitPtr FCDSParTestFCBase::createLocal(BitVector bFlags)
{
    FCDSParTestFCTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FCDSParTestFC>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
FCDSParTestFCPtr FCDSParTestFCBase::createEmpty(void)
{
    FCDSParTestFCPtr returnValue;

    newPtr<FCDSParTestFC>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

FCDSParTestFCPtr FCDSParTestFCBase::createEmptyLocal(BitVector bFlags)
{
    FCDSParTestFCPtr returnValue;

    newPtr<FCDSParTestFC>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FCDSParTestFCBase::shallowCopy(void) const
{
    FCDSParTestFCPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const FCDSParTestFC *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr FCDSParTestFCBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FCDSParTestFCPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FCDSParTestFC *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

FCDSParTestFCBase::FCDSParTestFCBase(void) :
    Inherited(),
    _sfParent                 (NullFC)
{
}

FCDSParTestFCBase::FCDSParTestFCBase(const FCDSParTestFCBase &source) :
    Inherited(source),
    _sfParent                 (NullFC)
{
}


/*-------------------------- destructors ----------------------------------*/

FCDSParTestFCBase::~FCDSParTestFCBase(void)
{
}

void FCDSParTestFCBase::onCreate(const FCDSParTestFC *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
    }
}

GetFieldHandlePtr FCDSParTestFCBase::getHandleParent          (void) const
{
    SFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr FCDSParTestFCBase::editHandleParent         (void)
{
    SFParentFieldContainerPtr::EditHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FCDSParTestFCBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FCDSParTestFCBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FCDSParTestFCBase::createAspectCopy(void) const
{
    FCDSParTestFCPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FCDSParTestFC *>(this));

    return returnValue;
}
#endif

void FCDSParTestFCBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FCDSParTestFCPtr>::_type("FCDSParTestFCPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FCDSParTestFCPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           FCDSParTestFCPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           FCDSParTestFCPtr, 
                           0);

DataType &FieldTraits< FCDSParTestFCPtr, 1 >::getType(void)
{                                                           
    return FieldTraits<FCDSParTestFCPtr, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(FieldContainerPtrChildSField,
                      FCDSParTestFCPtr,       
                      UnrecordedRefCounts,  
                      1);


OSG_EXPORT_PTR_MFIELD(FieldContainerPtrChildMField,
                      FCDSParTestFCPtr,       
                      UnrecordedRefCounts,  
                      1);


OSG_END_NAMESPACE
