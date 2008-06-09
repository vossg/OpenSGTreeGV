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
 **     class StencilChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTENCILCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include "OSGGL.h"                        // StencilFunc default header
#include "OSGGL.h"                        // StencilOpFail default header
#include "OSGGL.h"                        // StencilOpZFail default header
#include "OSGGL.h"                        // StencilOpZPass default header


#include "OSGStencilChunkBase.h"
#include "OSGStencilChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StencilChunk
    The stencil chunk handles OpenGL stencil tests by wrapping glStencilFunc() and glStencilOp().
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          StencilChunkBase::_sfStencilFunc
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var Int32           StencilChunkBase::_sfStencilValue
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var UInt32          StencilChunkBase::_sfStencilMask
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var GLenum          StencilChunkBase::_sfStencilOpFail
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var GLenum          StencilChunkBase::_sfStencilOpZFail
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var GLenum          StencilChunkBase::_sfStencilOpZPass
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.
    See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/

/*! \var Int32           StencilChunkBase::_sfClearBuffer
    Clear buffer on activate(1) or deactivate(2).
*/

/*! \var UInt32          StencilChunkBase::_sfBitMask
    Controls writing of individual bits in stencil planes, with 0 means write protected and 1 write enabled.
*/


void StencilChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "stencilFunc",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilFuncFieldId, StencilFuncFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilFunc),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilFunc));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "stencilValue",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilValueFieldId, StencilValueFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilValue),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "stencilMask",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilMaskFieldId, StencilMaskFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilMask),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilMask));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "stencilOpFail",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilOpFailFieldId, StencilOpFailFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilOpFail),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilOpFail));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "stencilOpZFail",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilOpZFailFieldId, StencilOpZFailFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilOpZFail),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilOpZFail));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "stencilOpZPass",
        "The stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
        "See glStencilFunc() for details. GL_NONE is used to disable stencil.\n",
        StencilOpZPassFieldId, StencilOpZPassFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleStencilOpZPass),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleStencilOpZPass));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "clearBuffer",
        "Clear buffer on activate(1) or deactivate(2).\n",
        ClearBufferFieldId, ClearBufferFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleClearBuffer),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleClearBuffer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "bitMask",
        "Controls writing of individual bits in stencil planes, with 0 means write protected and 1 write enabled.\n",
        BitMaskFieldId, BitMaskFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&StencilChunk::editHandleBitMask),
        static_cast<FieldGetMethodSig >(&StencilChunk::getHandleBitMask));

    oType.addInitialDesc(pDesc);
}


StencilChunkBase::TypeObject StencilChunkBase::_type(
    StencilChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&StencilChunkBase::createEmptyLocal),
    StencilChunk::initMethod,
    StencilChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StencilChunkBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"StencilChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "The stencil chunk handles OpenGL stencil tests by wrapping glStencilFunc() and glStencilOp().\n"
    "\t<Field\n"
    "\t\tname=\"stencilFunc\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"OSGGL.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stencilValue\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stencilMask\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0x1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stencilOpFail\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_KEEP\"\n"
    "\t\tdefaultHeader=\"OSGGL.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stencilOpZFail\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_KEEP\"\n"
    "\t\tdefaultHeader=\"OSGGL.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stencilOpZPass\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_KEEP\"\n"
    "\t\tdefaultHeader=\"OSGGL.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe stencilFunc defines how fragments which do not fulfill a certain condition are handled.\n"
    "        See glStencilFunc() for details. GL_NONE is used to disable stencil.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"clearBuffer\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tClear buffer on activate(1) or deactivate(2).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bitMask\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0xFFFFFFFF\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tControls writing of individual bits in stencil planes, with 0 means write protected and 1 write enabled.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The stencil chunk handles OpenGL stencil tests by wrapping glStencilFunc() and glStencilOp().\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StencilChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &StencilChunkBase::getType(void) const
{
    return _type;
}

UInt32 StencilChunkBase::getContainerSize(void) const
{
    return sizeof(StencilChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *StencilChunkBase::editSFStencilFunc(void)
{
    editSField(StencilFuncFieldMask);

    return &_sfStencilFunc;
}

const SFGLenum *StencilChunkBase::getSFStencilFunc(void) const
{
    return &_sfStencilFunc;
}


SFInt32 *StencilChunkBase::editSFStencilValue(void)
{
    editSField(StencilValueFieldMask);

    return &_sfStencilValue;
}

const SFInt32 *StencilChunkBase::getSFStencilValue(void) const
{
    return &_sfStencilValue;
}


SFUInt32 *StencilChunkBase::editSFStencilMask(void)
{
    editSField(StencilMaskFieldMask);

    return &_sfStencilMask;
}

const SFUInt32 *StencilChunkBase::getSFStencilMask(void) const
{
    return &_sfStencilMask;
}


SFGLenum *StencilChunkBase::editSFStencilOpFail(void)
{
    editSField(StencilOpFailFieldMask);

    return &_sfStencilOpFail;
}

const SFGLenum *StencilChunkBase::getSFStencilOpFail(void) const
{
    return &_sfStencilOpFail;
}


SFGLenum *StencilChunkBase::editSFStencilOpZFail(void)
{
    editSField(StencilOpZFailFieldMask);

    return &_sfStencilOpZFail;
}

const SFGLenum *StencilChunkBase::getSFStencilOpZFail(void) const
{
    return &_sfStencilOpZFail;
}


SFGLenum *StencilChunkBase::editSFStencilOpZPass(void)
{
    editSField(StencilOpZPassFieldMask);

    return &_sfStencilOpZPass;
}

const SFGLenum *StencilChunkBase::getSFStencilOpZPass(void) const
{
    return &_sfStencilOpZPass;
}


SFInt32 *StencilChunkBase::editSFClearBuffer(void)
{
    editSField(ClearBufferFieldMask);

    return &_sfClearBuffer;
}

const SFInt32 *StencilChunkBase::getSFClearBuffer(void) const
{
    return &_sfClearBuffer;
}


SFUInt32 *StencilChunkBase::editSFBitMask(void)
{
    editSField(BitMaskFieldMask);

    return &_sfBitMask;
}

const SFUInt32 *StencilChunkBase::getSFBitMask(void) const
{
    return &_sfBitMask;
}






/*------------------------------ access -----------------------------------*/

UInt32 StencilChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        returnValue += _sfStencilFunc.getBinSize();
    }
    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        returnValue += _sfStencilValue.getBinSize();
    }
    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        returnValue += _sfStencilMask.getBinSize();
    }
    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        returnValue += _sfStencilOpFail.getBinSize();
    }
    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        returnValue += _sfStencilOpZFail.getBinSize();
    }
    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        returnValue += _sfStencilOpZPass.getBinSize();
    }
    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        returnValue += _sfClearBuffer.getBinSize();
    }
    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        returnValue += _sfBitMask.getBinSize();
    }

    return returnValue;
}

void StencilChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        _sfStencilFunc.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        _sfStencilValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        _sfStencilMask.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        _sfStencilOpFail.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        _sfStencilOpZFail.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        _sfStencilOpZPass.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        _sfClearBuffer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        _sfBitMask.copyToBin(pMem);
    }
}

void StencilChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        _sfStencilFunc.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        _sfStencilValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        _sfStencilMask.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        _sfStencilOpFail.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        _sfStencilOpZFail.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        _sfStencilOpZPass.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        _sfClearBuffer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        _sfBitMask.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StencilChunkTransitPtr StencilChunkBase::create(void)
{
    StencilChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<StencilChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StencilChunkTransitPtr StencilChunkBase::createLocal(BitVector bFlags)
{
    StencilChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<StencilChunk>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
StencilChunk *StencilChunkBase::createEmpty(void)
{
    StencilChunk *returnValue;

    newPtr<StencilChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

StencilChunk *StencilChunkBase::createEmptyLocal(BitVector bFlags)
{
    StencilChunk *returnValue;

    newPtr<StencilChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StencilChunkBase::shallowCopy(void) const
{
    StencilChunk *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const StencilChunk *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr StencilChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    StencilChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StencilChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

StencilChunkBase::StencilChunkBase(void) :
    Inherited(),
    _sfStencilFunc            (GLenum(GL_NONE)),
    _sfStencilValue           (Int32(0)),
    _sfStencilMask            (UInt32(0x1)),
    _sfStencilOpFail          (GLenum(GL_KEEP)),
    _sfStencilOpZFail         (GLenum(GL_KEEP)),
    _sfStencilOpZPass         (GLenum(GL_KEEP)),
    _sfClearBuffer            (Int32(0)),
    _sfBitMask                (UInt32(0xFFFFFFFF))
{
}

StencilChunkBase::StencilChunkBase(const StencilChunkBase &source) :
    Inherited(source),
    _sfStencilFunc            (source._sfStencilFunc            ),
    _sfStencilValue           (source._sfStencilValue           ),
    _sfStencilMask            (source._sfStencilMask            ),
    _sfStencilOpFail          (source._sfStencilOpFail          ),
    _sfStencilOpZFail         (source._sfStencilOpZFail         ),
    _sfStencilOpZPass         (source._sfStencilOpZPass         ),
    _sfClearBuffer            (source._sfClearBuffer            ),
    _sfBitMask                (source._sfBitMask                )
{
}


/*-------------------------- destructors ----------------------------------*/

StencilChunkBase::~StencilChunkBase(void)
{
}


GetFieldHandlePtr StencilChunkBase::getHandleStencilFunc     (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfStencilFunc, 
             this->getType().getFieldDesc(StencilFuncFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilFunc    (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfStencilFunc, 
             this->getType().getFieldDesc(StencilFuncFieldId)));

    editSField(StencilFuncFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleStencilValue    (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfStencilValue, 
             this->getType().getFieldDesc(StencilValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilValue   (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfStencilValue, 
             this->getType().getFieldDesc(StencilValueFieldId)));

    editSField(StencilValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleStencilMask     (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfStencilMask, 
             this->getType().getFieldDesc(StencilMaskFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilMask    (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfStencilMask, 
             this->getType().getFieldDesc(StencilMaskFieldId)));

    editSField(StencilMaskFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleStencilOpFail   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfStencilOpFail, 
             this->getType().getFieldDesc(StencilOpFailFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilOpFail  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfStencilOpFail, 
             this->getType().getFieldDesc(StencilOpFailFieldId)));

    editSField(StencilOpFailFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleStencilOpZFail  (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfStencilOpZFail, 
             this->getType().getFieldDesc(StencilOpZFailFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilOpZFail (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfStencilOpZFail, 
             this->getType().getFieldDesc(StencilOpZFailFieldId)));

    editSField(StencilOpZFailFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleStencilOpZPass  (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfStencilOpZPass, 
             this->getType().getFieldDesc(StencilOpZPassFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleStencilOpZPass (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfStencilOpZPass, 
             this->getType().getFieldDesc(StencilOpZPassFieldId)));

    editSField(StencilOpZPassFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleClearBuffer     (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfClearBuffer, 
             this->getType().getFieldDesc(ClearBufferFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleClearBuffer    (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfClearBuffer, 
             this->getType().getFieldDesc(ClearBufferFieldId)));

    editSField(ClearBufferFieldMask);

    return returnValue;
}

GetFieldHandlePtr StencilChunkBase::getHandleBitMask         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfBitMask, 
             this->getType().getFieldDesc(BitMaskFieldId)));

    return returnValue;
}

EditFieldHandlePtr StencilChunkBase::editHandleBitMask        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfBitMask, 
             this->getType().getFieldDesc(BitMaskFieldId)));

    editSField(BitMaskFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StencilChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StencilChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StencilChunkBase::createAspectCopy(void) const
{
    StencilChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StencilChunk *>(this));

    return returnValue;
}
#endif

void StencilChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StencilChunk *>::_type("StencilChunkPtr", "StateChunkPtr");
#endif


OSG_END_NAMESPACE
