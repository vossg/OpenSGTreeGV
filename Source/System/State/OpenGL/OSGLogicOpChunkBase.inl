/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class LogicOpChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LogicOpChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LogicOpChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LogicOpChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LogicOpChunk::_sfLogicOp field.

inline
GLenum &LogicOpChunkBase::editLogicOp(void)
{
    editSField(LogicOpFieldMask);

    return _sfLogicOp.getValue();
}

//! Get the value of the LogicOpChunk::_sfLogicOp field.
inline
const GLenum &LogicOpChunkBase::getLogicOp(void) const
{
    return _sfLogicOp.getValue();
}

//! Set the value of the LogicOpChunk::_sfLogicOp field.
inline
void LogicOpChunkBase::setLogicOp(const GLenum &value)
{
    editSField(LogicOpFieldMask);

    _sfLogicOp.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LogicOpChunkBase::execSync (      LogicOpChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LogicOpFieldMask & whichField))
        _sfLogicOp.syncWith(pFrom->_sfLogicOp);
}
#endif


inline
const Char8 *LogicOpChunkBase::getClassname(void)
{
    return "LogicOpChunk";
}
OSG_GEN_CONTAINERPTR(LogicOpChunk);

OSG_END_NAMESPACE

