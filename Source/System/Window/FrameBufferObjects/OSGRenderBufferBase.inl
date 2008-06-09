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
 **     class RenderBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RenderBufferBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RenderBufferBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RenderBufferBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RenderBuffer::_sfGLId field.

inline
GLenum &RenderBufferBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the RenderBuffer::_sfGLId field.
inline
const GLenum &RenderBufferBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the RenderBuffer::_sfGLId field.
inline
void RenderBufferBase::setGLId(const GLenum &value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}
//! Get the value of the RenderBuffer::_sfInternalFormat field.

inline
GLenum &RenderBufferBase::editInternalFormat(void)
{
    editSField(InternalFormatFieldMask);

    return _sfInternalFormat.getValue();
}

//! Get the value of the RenderBuffer::_sfInternalFormat field.
inline
const GLenum &RenderBufferBase::getInternalFormat(void) const
{
    return _sfInternalFormat.getValue();
}

//! Set the value of the RenderBuffer::_sfInternalFormat field.
inline
void RenderBufferBase::setInternalFormat(const GLenum &value)
{
    editSField(InternalFormatFieldMask);

    _sfInternalFormat.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RenderBufferBase::execSync (      RenderBufferBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);

    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
        _sfInternalFormat.syncWith(pFrom->_sfInternalFormat);
}
#endif


inline
Char8 *RenderBufferBase::getClassname(void)
{
    return "RenderBuffer";
}
OSG_GEN_CONTAINERPTR(RenderBuffer);

OSG_END_NAMESPACE

