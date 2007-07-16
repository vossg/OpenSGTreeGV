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
 **     class State!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTATEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGStateBase.h"
#include "OSGState.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::State
    \ingroup GrpSystemState

    The state base class. See \ref PageSystemState for the conceptual background.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunkPtr   StateBase::_mfChunks
    
*/


void StateBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFStateChunkPtr::Description(
        MFStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&StateBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&StateBase::getMFChunks));

    oType.addInitialDesc(pDesc);
}


StateBase::TypeObject StateBase::_type(
    StateBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &StateBase::createEmpty,
    State::initMethod,
    (InitalInsertDescFunc) &StateBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"State\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        checkNilPtr=\"false\"\n"
    "        linkParent=\"false\"\n"
    "        removeTo=\"NullFC\"\n"
    "        clearMField=\"true\"\n"
    "        pushToField=\"\"\n"
    "        insertIntoMField=\"\"\n"
    "        replaceInMFieldIndex=\"\"\n"
    "        replaceInMFieldObject=\"\"\n"
    "        removeFromMFieldIndex=\"\"\n"
    "        removeFromMFieldObject=\"\"\n"
    "        clearField=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StateBase::getType(void)
{
    return _type;
}

const FieldContainerType &StateBase::getType(void) const
{
    return _type;
}

UInt32 StateBase::getContainerSize(void) const
{
    return sizeof(State);
}

/*------------------------- decorator get ------------------------------*/


//! Get the State::_mfChunks field.
const MFStateChunkPtr *StateBase::getMFChunks(void) const
{
    return &_mfChunks;
}


void StateBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->pushToChunks(
            dynamic_cast<StateChunkPtr>(pNewElement));
    }
}

void StateBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->insertIntoChunks(
            uiIndex,
            dynamic_cast<StateChunkPtr>(pNewElement));
    }
}

void StateBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->replaceInChunks(
            uiIndex,
            dynamic_cast<StateChunkPtr>(pNewElement));
    }
}

void StateBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->replaceInChunks(
            dynamic_cast<StateChunkPtr>(pOldElement),
            dynamic_cast<StateChunkPtr>(pNewElement));
    }
}

void StateBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->removeFromChunks(
            uiIndex);
    }
}

void StateBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->removeFromChunks(
            dynamic_cast<StateChunkPtr>(pElement));
    }
}

void StateBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ChunksFieldId)
    {
        static_cast<State *>(this)->clearChunks();
    }
}

void StateBase::pushToChunks(StateChunkPtrConstArg value)
{
    editMField(ChunksFieldMask, _mfChunks);

    addRef(value);

    _mfChunks.push_back(value);

    if(value == NullFC)
        return;
}

void StateBase::assignChunks   (const MFStateChunkPtr   &value)
{
    MFStateChunkPtr  ::const_iterator elemIt  =
        value.begin();
    MFStateChunkPtr  ::const_iterator elemEnd =
        value.end  ();

    while(elemIt != elemEnd)
    {
        this->pushToChunks(*elemIt);

        ++elemIt;
    }
}

void StateBase::insertIntoChunks(UInt32                uiIndex,
                                                   StateChunkPtrConstArg value   )
{
    editMField(ChunksFieldMask, _mfChunks);

    MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfChunks.insert(fieldIt, value);

    if(value == NullFC)
        return;
}

void StateBase::replaceInChunks(UInt32                uiIndex,
                                                       StateChunkPtrConstArg value   )
{
    if(uiIndex >= _mfChunks.size())
        return;

    editMField(ChunksFieldMask, _mfChunks);

    addRef(value);

    subRef(_mfChunks[uiIndex]);

    _mfChunks[uiIndex] = value;

    if(value == NullFC)
        return;
}

void StateBase::replaceInChunks(StateChunkPtrConstArg pOldElem,
                                                        StateChunkPtrConstArg pNewElem)
{
    Int32  elemIdx = _mfChunks.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void StateBase::removeFromChunks(UInt32 uiIndex)
{
    if(uiIndex < _mfChunks.size())
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        *fieldIt = NullFC;
    }
}

void StateBase::removeFromChunks(StateChunkPtrConstArg value)
{
    Int32 iElemIdx = _mfChunks.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ChunksFieldMask, _mfChunks);

        MFStateChunkPtr::iterator fieldIt = _mfChunks.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        *fieldIt = NullFC;
    }
}
void StateBase::clearChunks(void)
{
    editMField(ChunksFieldMask, _mfChunks);

    MFStateChunkPtr::iterator       fieldIt  = _mfChunks.begin();
    MFStateChunkPtr::const_iterator fieldEnd = _mfChunks.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        *fieldIt = NullFC;

        ++fieldIt;
    }

    _mfChunks.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 StateBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void StateBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void StateBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StatePtr StateBase::create(void)
{
    StatePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<State::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
StatePtr StateBase::createEmpty(void)
{
    StatePtr returnValue;

    newPtr<State>(returnValue);

    return returnValue;
}

FieldContainerPtr StateBase::shallowCopy(void) const
{
    StatePtr returnValue;

    newPtr(returnValue, dynamic_cast<const State *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

StateBase::StateBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

StateBase::StateBase(const StateBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

StateBase::~StateBase(void)
{
}

void StateBase::onCreate(const State *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            this->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

#ifdef OSG_MT_CPTR_ASPECT
void StateBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StateBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr StateBase::createAspectCopy(void) const
{
    StatePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const State *>(this));

    return returnValue;
}
#endif

void StateBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<State *>(this)->clearChunks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StatePtr>::_type("StatePtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StatePtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, StatePtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, StatePtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
