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
 **     class ShaderChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderChunk::_sfVertexProgram field.

inline
std::string &ShaderChunkBase::editVertexProgram(void)
{
    editSField(VertexProgramFieldMask);

    return _sfVertexProgram.getValue();
}

//! Get the value of the ShaderChunk::_sfVertexProgram field.
inline
const std::string &ShaderChunkBase::getVertexProgram(void) const
{
    return _sfVertexProgram.getValue();
}

//! Set the value of the ShaderChunk::_sfVertexProgram field.
inline
void ShaderChunkBase::setVertexProgram(const std::string &value)
{
    editSField(VertexProgramFieldMask);

    _sfVertexProgram.setValue(value);
}
//! Get the value of the ShaderChunk::_sfFragmentProgram field.

inline
std::string &ShaderChunkBase::editFragmentProgram(void)
{
    editSField(FragmentProgramFieldMask);

    return _sfFragmentProgram.getValue();
}

//! Get the value of the ShaderChunk::_sfFragmentProgram field.
inline
const std::string &ShaderChunkBase::getFragmentProgram(void) const
{
    return _sfFragmentProgram.getValue();
}

//! Set the value of the ShaderChunk::_sfFragmentProgram field.
inline
void ShaderChunkBase::setFragmentProgram(const std::string &value)
{
    editSField(FragmentProgramFieldMask);

    _sfFragmentProgram.setValue(value);
}
//! Get the value of the ShaderChunk::_sfGeometryProgram field.

inline
std::string &ShaderChunkBase::editGeometryProgram(void)
{
    editSField(GeometryProgramFieldMask);

    return _sfGeometryProgram.getValue();
}

//! Get the value of the ShaderChunk::_sfGeometryProgram field.
inline
const std::string &ShaderChunkBase::getGeometryProgram(void) const
{
    return _sfGeometryProgram.getValue();
}

//! Set the value of the ShaderChunk::_sfGeometryProgram field.
inline
void ShaderChunkBase::setGeometryProgram(const std::string &value)
{
    editSField(GeometryProgramFieldMask);

    _sfGeometryProgram.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderChunkBase::execSync (      ShaderChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
        _sfVertexProgram.syncWith(pFrom->_sfVertexProgram);

    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
        _sfFragmentProgram.syncWith(pFrom->_sfFragmentProgram);

    if(FieldBits::NoField != (GeometryProgramFieldMask & whichField))
        _sfGeometryProgram.syncWith(pFrom->_sfGeometryProgram);
}
#endif


inline
Char8 *ShaderChunkBase::getClassname(void)
{
    return "ShaderChunk";
}
OSG_GEN_CONTAINERPTR(ShaderChunk);

OSG_END_NAMESPACE

