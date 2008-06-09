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
 **     class SHLChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SHLChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SHLChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SHLChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SHLChunk::_sfCgFrontEnd field.

inline
bool &SHLChunkBase::editCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return _sfCgFrontEnd.getValue();
}

//! Get the value of the SHLChunk::_sfCgFrontEnd field.
inline
      bool  SHLChunkBase::getCgFrontEnd(void) const
{
    return _sfCgFrontEnd.getValue();
}

//! Set the value of the SHLChunk::_sfCgFrontEnd field.
inline
void SHLChunkBase::setCgFrontEnd(const bool value)
{
    editSField(CgFrontEndFieldMask);

    _sfCgFrontEnd.setValue(value);
}
//! Get the value of the SHLChunk::_sfPointSize field.

inline
bool &SHLChunkBase::editPointSize(void)
{
    editSField(PointSizeFieldMask);

    return _sfPointSize.getValue();
}

//! Get the value of the SHLChunk::_sfPointSize field.
inline
      bool  SHLChunkBase::getPointSize(void) const
{
    return _sfPointSize.getValue();
}

//! Set the value of the SHLChunk::_sfPointSize field.
inline
void SHLChunkBase::setPointSize(const bool value)
{
    editSField(PointSizeFieldMask);

    _sfPointSize.setValue(value);
}
//! Get the value of the SHLChunk::_sfGLId field.

inline
UInt32 &SHLChunkBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the SHLChunk::_sfGLId field.
inline
      UInt32  SHLChunkBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the SHLChunk::_sfGLId field.
inline
void SHLChunkBase::setGLId(const UInt32 value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}
//! Get the value of the SHLChunk::_sfUnknownParameterWarning field.

inline
bool &SHLChunkBase::editUnknownParameterWarning(void)
{
    editSField(UnknownParameterWarningFieldMask);

    return _sfUnknownParameterWarning.getValue();
}

//! Get the value of the SHLChunk::_sfUnknownParameterWarning field.
inline
      bool  SHLChunkBase::getUnknownParameterWarning(void) const
{
    return _sfUnknownParameterWarning.getValue();
}

//! Set the value of the SHLChunk::_sfUnknownParameterWarning field.
inline
void SHLChunkBase::setUnknownParameterWarning(const bool value)
{
    editSField(UnknownParameterWarningFieldMask);

    _sfUnknownParameterWarning.setValue(value);
}

//! Get the value of the \a index element the SHLChunk::_mfProgramParameterNames field.
inline
const GLenum &SHLChunkBase::getProgramParameterNames(const UInt32 index) const
{
    return _mfProgramParameterNames[index];
}

inline
GLenum &SHLChunkBase::editProgramParameterNames(const UInt32 index)
{
    editMField(ProgramParameterNamesFieldMask, _mfProgramParameterNames);

    return _mfProgramParameterNames[index];
}


//! Get the value of the \a index element the SHLChunk::_mfProgramParameterValues field.
inline
      UInt32  SHLChunkBase::getProgramParameterValues(const UInt32 index) const
{
    return _mfProgramParameterValues[index];
}

inline
UInt32 &SHLChunkBase::editProgramParameterValues(const UInt32 index)
{
    editMField(ProgramParameterValuesFieldMask, _mfProgramParameterValues);

    return _mfProgramParameterValues[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void SHLChunkBase::execSync (      SHLChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
        _sfCgFrontEnd.syncWith(pFrom->_sfCgFrontEnd);

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
        _sfPointSize.syncWith(pFrom->_sfPointSize);

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
        _mfProgramParameterNames.syncWith(pFrom->_mfProgramParameterNames,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
        _mfProgramParameterValues.syncWith(pFrom->_mfProgramParameterValues,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);

    if(FieldBits::NoField != (UnknownParameterWarningFieldMask & whichField))
        _sfUnknownParameterWarning.syncWith(pFrom->_sfUnknownParameterWarning);
}
#endif


inline
Char8 *SHLChunkBase::getClassname(void)
{
    return "SHLChunk";
}
OSG_GEN_CONTAINERPTR(SHLChunk);

OSG_END_NAMESPACE

