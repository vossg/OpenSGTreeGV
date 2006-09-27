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
 **     class TextureEnvChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureEnvChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureEnvChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 TextureEnvChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextureEnvChunk::_sfEnvMode field.

inline
GLenum &TextureEnvChunkBase::editEnvMode(void)
{
    editSField(EnvModeFieldMask);

    return _sfEnvMode.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvMode field.
inline
const GLenum &TextureEnvChunkBase::getEnvMode(void) const
{
    return _sfEnvMode.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvMode(void)
{
    return this->editEnvMode();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvMode field.
inline
void TextureEnvChunkBase::setEnvMode(const GLenum &value)
{
    editSField(EnvModeFieldMask);

    _sfEnvMode.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvColor field.

inline
Color4f &TextureEnvChunkBase::editEnvColor(void)
{
    editSField(EnvColorFieldMask);

    return _sfEnvColor.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvColor field.
inline
const Color4f &TextureEnvChunkBase::getEnvColor(void) const
{
    return _sfEnvColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &TextureEnvChunkBase::getEnvColor(void)
{
    return this->editEnvColor();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvColor field.
inline
void TextureEnvChunkBase::setEnvColor(const Color4f &value)
{
    editSField(EnvColorFieldMask);

    _sfEnvColor.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvCombineRGB field.

inline
GLenum &TextureEnvChunkBase::editEnvCombineRGB(void)
{
    editSField(EnvCombineRGBFieldMask);

    return _sfEnvCombineRGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvCombineRGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvCombineRGB(void) const
{
    return _sfEnvCombineRGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvCombineRGB(void)
{
    return this->editEnvCombineRGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvCombineRGB field.
inline
void TextureEnvChunkBase::setEnvCombineRGB(const GLenum &value)
{
    editSField(EnvCombineRGBFieldMask);

    _sfEnvCombineRGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvCombineAlpha field.

inline
GLenum &TextureEnvChunkBase::editEnvCombineAlpha(void)
{
    editSField(EnvCombineAlphaFieldMask);

    return _sfEnvCombineAlpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvCombineAlpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvCombineAlpha(void) const
{
    return _sfEnvCombineAlpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvCombineAlpha(void)
{
    return this->editEnvCombineAlpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvCombineAlpha field.
inline
void TextureEnvChunkBase::setEnvCombineAlpha(const GLenum &value)
{
    editSField(EnvCombineAlphaFieldMask);

    _sfEnvCombineAlpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvScaleRGB field.

inline
Real32 &TextureEnvChunkBase::editEnvScaleRGB(void)
{
    editSField(EnvScaleRGBFieldMask);

    return _sfEnvScaleRGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvScaleRGB field.
inline
const Real32 &TextureEnvChunkBase::getEnvScaleRGB(void) const
{
    return _sfEnvScaleRGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getEnvScaleRGB(void)
{
    return this->editEnvScaleRGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvScaleRGB field.
inline
void TextureEnvChunkBase::setEnvScaleRGB(const Real32 &value)
{
    editSField(EnvScaleRGBFieldMask);

    _sfEnvScaleRGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvScaleAlpha field.

inline
Real32 &TextureEnvChunkBase::editEnvScaleAlpha(void)
{
    editSField(EnvScaleAlphaFieldMask);

    return _sfEnvScaleAlpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvScaleAlpha field.
inline
const Real32 &TextureEnvChunkBase::getEnvScaleAlpha(void) const
{
    return _sfEnvScaleAlpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getEnvScaleAlpha(void)
{
    return this->editEnvScaleAlpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvScaleAlpha field.
inline
void TextureEnvChunkBase::setEnvScaleAlpha(const Real32 &value)
{
    editSField(EnvScaleAlphaFieldMask);

    _sfEnvScaleAlpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource0RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvSource0RGB(void)
{
    editSField(EnvSource0RGBFieldMask);

    return _sfEnvSource0RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource0RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource0RGB(void) const
{
    return _sfEnvSource0RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource0RGB(void)
{
    return this->editEnvSource0RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource0RGB field.
inline
void TextureEnvChunkBase::setEnvSource0RGB(const GLenum &value)
{
    editSField(EnvSource0RGBFieldMask);

    _sfEnvSource0RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource1RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvSource1RGB(void)
{
    editSField(EnvSource1RGBFieldMask);

    return _sfEnvSource1RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource1RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource1RGB(void) const
{
    return _sfEnvSource1RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource1RGB(void)
{
    return this->editEnvSource1RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource1RGB field.
inline
void TextureEnvChunkBase::setEnvSource1RGB(const GLenum &value)
{
    editSField(EnvSource1RGBFieldMask);

    _sfEnvSource1RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource2RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvSource2RGB(void)
{
    editSField(EnvSource2RGBFieldMask);

    return _sfEnvSource2RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource2RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource2RGB(void) const
{
    return _sfEnvSource2RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource2RGB(void)
{
    return this->editEnvSource2RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource2RGB field.
inline
void TextureEnvChunkBase::setEnvSource2RGB(const GLenum &value)
{
    editSField(EnvSource2RGBFieldMask);

    _sfEnvSource2RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource0Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvSource0Alpha(void)
{
    editSField(EnvSource0AlphaFieldMask);

    return _sfEnvSource0Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource0Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource0Alpha(void) const
{
    return _sfEnvSource0Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource0Alpha(void)
{
    return this->editEnvSource0Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource0Alpha field.
inline
void TextureEnvChunkBase::setEnvSource0Alpha(const GLenum &value)
{
    editSField(EnvSource0AlphaFieldMask);

    _sfEnvSource0Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource1Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvSource1Alpha(void)
{
    editSField(EnvSource1AlphaFieldMask);

    return _sfEnvSource1Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource1Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource1Alpha(void) const
{
    return _sfEnvSource1Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource1Alpha(void)
{
    return this->editEnvSource1Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource1Alpha field.
inline
void TextureEnvChunkBase::setEnvSource1Alpha(const GLenum &value)
{
    editSField(EnvSource1AlphaFieldMask);

    _sfEnvSource1Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvSource2Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvSource2Alpha(void)
{
    editSField(EnvSource2AlphaFieldMask);

    return _sfEnvSource2Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvSource2Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvSource2Alpha(void) const
{
    return _sfEnvSource2Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvSource2Alpha(void)
{
    return this->editEnvSource2Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvSource2Alpha field.
inline
void TextureEnvChunkBase::setEnvSource2Alpha(const GLenum &value)
{
    editSField(EnvSource2AlphaFieldMask);

    _sfEnvSource2Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand0RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand0RGB(void)
{
    editSField(EnvOperand0RGBFieldMask);

    return _sfEnvOperand0RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand0RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand0RGB(void) const
{
    return _sfEnvOperand0RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand0RGB(void)
{
    return this->editEnvOperand0RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand0RGB field.
inline
void TextureEnvChunkBase::setEnvOperand0RGB(const GLenum &value)
{
    editSField(EnvOperand0RGBFieldMask);

    _sfEnvOperand0RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand1RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand1RGB(void)
{
    editSField(EnvOperand1RGBFieldMask);

    return _sfEnvOperand1RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand1RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand1RGB(void) const
{
    return _sfEnvOperand1RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand1RGB(void)
{
    return this->editEnvOperand1RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand1RGB field.
inline
void TextureEnvChunkBase::setEnvOperand1RGB(const GLenum &value)
{
    editSField(EnvOperand1RGBFieldMask);

    _sfEnvOperand1RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand2RGB field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand2RGB(void)
{
    editSField(EnvOperand2RGBFieldMask);

    return _sfEnvOperand2RGB.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand2RGB field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand2RGB(void) const
{
    return _sfEnvOperand2RGB.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand2RGB(void)
{
    return this->editEnvOperand2RGB();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand2RGB field.
inline
void TextureEnvChunkBase::setEnvOperand2RGB(const GLenum &value)
{
    editSField(EnvOperand2RGBFieldMask);

    _sfEnvOperand2RGB.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand0Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand0Alpha(void)
{
    editSField(EnvOperand0AlphaFieldMask);

    return _sfEnvOperand0Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand0Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand0Alpha(void) const
{
    return _sfEnvOperand0Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand0Alpha(void)
{
    return this->editEnvOperand0Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand0Alpha field.
inline
void TextureEnvChunkBase::setEnvOperand0Alpha(const GLenum &value)
{
    editSField(EnvOperand0AlphaFieldMask);

    _sfEnvOperand0Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand1Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand1Alpha(void)
{
    editSField(EnvOperand1AlphaFieldMask);

    return _sfEnvOperand1Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand1Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand1Alpha(void) const
{
    return _sfEnvOperand1Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand1Alpha(void)
{
    return this->editEnvOperand1Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand1Alpha field.
inline
void TextureEnvChunkBase::setEnvOperand1Alpha(const GLenum &value)
{
    editSField(EnvOperand1AlphaFieldMask);

    _sfEnvOperand1Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfEnvOperand2Alpha field.

inline
GLenum &TextureEnvChunkBase::editEnvOperand2Alpha(void)
{
    editSField(EnvOperand2AlphaFieldMask);

    return _sfEnvOperand2Alpha.getValue();
}

//! Get the value of the TextureEnvChunk::_sfEnvOperand2Alpha field.
inline
const GLenum &TextureEnvChunkBase::getEnvOperand2Alpha(void) const
{
    return _sfEnvOperand2Alpha.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getEnvOperand2Alpha(void)
{
    return this->editEnvOperand2Alpha();
}
#endif

//! Set the value of the TextureEnvChunk::_sfEnvOperand2Alpha field.
inline
void TextureEnvChunkBase::setEnvOperand2Alpha(const GLenum &value)
{
    editSField(EnvOperand2AlphaFieldMask);

    _sfEnvOperand2Alpha.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfPointSprite field.

inline
bool &TextureEnvChunkBase::editPointSprite(void)
{
    editSField(PointSpriteFieldMask);

    return _sfPointSprite.getValue();
}

//! Get the value of the TextureEnvChunk::_sfPointSprite field.
inline
const bool &TextureEnvChunkBase::getPointSprite(void) const
{
    return _sfPointSprite.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool &TextureEnvChunkBase::getPointSprite(void)
{
    return this->editPointSprite();
}
#endif

//! Set the value of the TextureEnvChunk::_sfPointSprite field.
inline
void TextureEnvChunkBase::setPointSprite(const bool &value)
{
    editSField(PointSpriteFieldMask);

    _sfPointSprite.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderOperation field.

inline
GLenum &TextureEnvChunkBase::editShaderOperation(void)
{
    editSField(ShaderOperationFieldMask);

    return _sfShaderOperation.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderOperation field.
inline
const GLenum &TextureEnvChunkBase::getShaderOperation(void) const
{
    return _sfShaderOperation.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getShaderOperation(void)
{
    return this->editShaderOperation();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderOperation field.
inline
void TextureEnvChunkBase::setShaderOperation(const GLenum &value)
{
    editSField(ShaderOperationFieldMask);

    _sfShaderOperation.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderInput field.

inline
GLenum &TextureEnvChunkBase::editShaderInput(void)
{
    editSField(ShaderInputFieldMask);

    return _sfShaderInput.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderInput field.
inline
const GLenum &TextureEnvChunkBase::getShaderInput(void) const
{
    return _sfShaderInput.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getShaderInput(void)
{
    return this->editShaderInput();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderInput field.
inline
void TextureEnvChunkBase::setShaderInput(const GLenum &value)
{
    editSField(ShaderInputFieldMask);

    _sfShaderInput.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderOffsetScale field.

inline
Real32 &TextureEnvChunkBase::editShaderOffsetScale(void)
{
    editSField(ShaderOffsetScaleFieldMask);

    return _sfShaderOffsetScale.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderOffsetScale field.
inline
const Real32 &TextureEnvChunkBase::getShaderOffsetScale(void) const
{
    return _sfShaderOffsetScale.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getShaderOffsetScale(void)
{
    return this->editShaderOffsetScale();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderOffsetScale field.
inline
void TextureEnvChunkBase::setShaderOffsetScale(const Real32 &value)
{
    editSField(ShaderOffsetScaleFieldMask);

    _sfShaderOffsetScale.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderOffsetBias field.

inline
Real32 &TextureEnvChunkBase::editShaderOffsetBias(void)
{
    editSField(ShaderOffsetBiasFieldMask);

    return _sfShaderOffsetBias.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderOffsetBias field.
inline
const Real32 &TextureEnvChunkBase::getShaderOffsetBias(void) const
{
    return _sfShaderOffsetBias.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getShaderOffsetBias(void)
{
    return this->editShaderOffsetBias();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderOffsetBias field.
inline
void TextureEnvChunkBase::setShaderOffsetBias(const Real32 &value)
{
    editSField(ShaderOffsetBiasFieldMask);

    _sfShaderOffsetBias.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderRGBADotProduct field.

inline
GLenum &TextureEnvChunkBase::editShaderRGBADotProduct(void)
{
    editSField(ShaderRGBADotProductFieldMask);

    return _sfShaderRGBADotProduct.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderRGBADotProduct field.
inline
const GLenum &TextureEnvChunkBase::getShaderRGBADotProduct(void) const
{
    return _sfShaderRGBADotProduct.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureEnvChunkBase::getShaderRGBADotProduct(void)
{
    return this->editShaderRGBADotProduct();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderRGBADotProduct field.
inline
void TextureEnvChunkBase::setShaderRGBADotProduct(const GLenum &value)
{
    editSField(ShaderRGBADotProductFieldMask);

    _sfShaderRGBADotProduct.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderCullModes field.

inline
UInt8 &TextureEnvChunkBase::editShaderCullModes(void)
{
    editSField(ShaderCullModesFieldMask);

    return _sfShaderCullModes.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderCullModes field.
inline
const UInt8 &TextureEnvChunkBase::getShaderCullModes(void) const
{
    return _sfShaderCullModes.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt8 &TextureEnvChunkBase::getShaderCullModes(void)
{
    return this->editShaderCullModes();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderCullModes field.
inline
void TextureEnvChunkBase::setShaderCullModes(const UInt8 &value)
{
    editSField(ShaderCullModesFieldMask);

    _sfShaderCullModes.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfShaderConstEye field.

inline
Vec3f &TextureEnvChunkBase::editShaderConstEye(void)
{
    editSField(ShaderConstEyeFieldMask);

    return _sfShaderConstEye.getValue();
}

//! Get the value of the TextureEnvChunk::_sfShaderConstEye field.
inline
const Vec3f &TextureEnvChunkBase::getShaderConstEye(void) const
{
    return _sfShaderConstEye.getValue();
}

#ifdef OSG_1_COMPAT
inline
Vec3f &TextureEnvChunkBase::getShaderConstEye(void)
{
    return this->editShaderConstEye();
}
#endif

//! Set the value of the TextureEnvChunk::_sfShaderConstEye field.
inline
void TextureEnvChunkBase::setShaderConstEye(const Vec3f &value)
{
    editSField(ShaderConstEyeFieldMask);

    _sfShaderConstEye.setValue(value);
}
//! Get the value of the TextureEnvChunk::_sfLodBias field.

inline
Real32 &TextureEnvChunkBase::editLodBias(void)
{
    editSField(LodBiasFieldMask);

    return _sfLodBias.getValue();
}

//! Get the value of the TextureEnvChunk::_sfLodBias field.
inline
const Real32 &TextureEnvChunkBase::getLodBias(void) const
{
    return _sfLodBias.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getLodBias(void)
{
    return this->editLodBias();
}
#endif

//! Set the value of the TextureEnvChunk::_sfLodBias field.
inline
void TextureEnvChunkBase::setLodBias(const Real32 &value)
{
    editSField(LodBiasFieldMask);

    _sfLodBias.setValue(value);
}

//! Get the value of the \a index element the TextureEnvChunk::_mfShaderOffsetMatrix field.
inline
const Real32 &TextureEnvChunkBase::getShaderOffsetMatrix(const UInt32 index) const
{
    return _mfShaderOffsetMatrix[index];
}

inline
Real32 &TextureEnvChunkBase::editShaderOffsetMatrix(const UInt32 index)
{
    editMField(ShaderOffsetMatrixFieldMask, _mfShaderOffsetMatrix);

    return _mfShaderOffsetMatrix[index];
}

//! Get the TextureEnvChunk::_mfShaderOffsetMatrix field.
inline
MFReal32 &TextureEnvChunkBase::editShaderOffsetMatrix(void)
{
    editMField(ShaderOffsetMatrixFieldMask, _mfShaderOffsetMatrix);

    return _mfShaderOffsetMatrix;
}

#ifdef OSG_1_COMPAT
inline
Real32 &TextureEnvChunkBase::getShaderOffsetMatrix(const UInt32 index)
{
    return this->editShaderOffsetMatrix(index);
}

inline
MFReal32 &TextureEnvChunkBase::getShaderOffsetMatrix(void)
{
    return this->editShaderOffsetMatrix();
}

#endif


//! Get the TextureEnvChunk::_mfShaderOffsetMatrix field.
inline
const MFReal32 &TextureEnvChunkBase::getShaderOffsetMatrix(void) const
{
    return _mfShaderOffsetMatrix;
}

//! create a new instance of the class
inline
TextureEnvChunkPtr TextureEnvChunkBase::create(void) 
{
    TextureEnvChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<TextureEnvChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void TextureEnvChunkBase::execSync(      TextureEnvChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
        _sfEnvMode.syncWith(pOther->_sfEnvMode);

    if(FieldBits::NoField != (EnvColorFieldMask & whichField))
        _sfEnvColor.syncWith(pOther->_sfEnvColor);

    if(FieldBits::NoField != (EnvCombineRGBFieldMask & whichField))
        _sfEnvCombineRGB.syncWith(pOther->_sfEnvCombineRGB);

    if(FieldBits::NoField != (EnvCombineAlphaFieldMask & whichField))
        _sfEnvCombineAlpha.syncWith(pOther->_sfEnvCombineAlpha);

    if(FieldBits::NoField != (EnvScaleRGBFieldMask & whichField))
        _sfEnvScaleRGB.syncWith(pOther->_sfEnvScaleRGB);

    if(FieldBits::NoField != (EnvScaleAlphaFieldMask & whichField))
        _sfEnvScaleAlpha.syncWith(pOther->_sfEnvScaleAlpha);

    if(FieldBits::NoField != (EnvSource0RGBFieldMask & whichField))
        _sfEnvSource0RGB.syncWith(pOther->_sfEnvSource0RGB);

    if(FieldBits::NoField != (EnvSource1RGBFieldMask & whichField))
        _sfEnvSource1RGB.syncWith(pOther->_sfEnvSource1RGB);

    if(FieldBits::NoField != (EnvSource2RGBFieldMask & whichField))
        _sfEnvSource2RGB.syncWith(pOther->_sfEnvSource2RGB);

    if(FieldBits::NoField != (EnvSource0AlphaFieldMask & whichField))
        _sfEnvSource0Alpha.syncWith(pOther->_sfEnvSource0Alpha);

    if(FieldBits::NoField != (EnvSource1AlphaFieldMask & whichField))
        _sfEnvSource1Alpha.syncWith(pOther->_sfEnvSource1Alpha);

    if(FieldBits::NoField != (EnvSource2AlphaFieldMask & whichField))
        _sfEnvSource2Alpha.syncWith(pOther->_sfEnvSource2Alpha);

    if(FieldBits::NoField != (EnvOperand0RGBFieldMask & whichField))
        _sfEnvOperand0RGB.syncWith(pOther->_sfEnvOperand0RGB);

    if(FieldBits::NoField != (EnvOperand1RGBFieldMask & whichField))
        _sfEnvOperand1RGB.syncWith(pOther->_sfEnvOperand1RGB);

    if(FieldBits::NoField != (EnvOperand2RGBFieldMask & whichField))
        _sfEnvOperand2RGB.syncWith(pOther->_sfEnvOperand2RGB);

    if(FieldBits::NoField != (EnvOperand0AlphaFieldMask & whichField))
        _sfEnvOperand0Alpha.syncWith(pOther->_sfEnvOperand0Alpha);

    if(FieldBits::NoField != (EnvOperand1AlphaFieldMask & whichField))
        _sfEnvOperand1Alpha.syncWith(pOther->_sfEnvOperand1Alpha);

    if(FieldBits::NoField != (EnvOperand2AlphaFieldMask & whichField))
        _sfEnvOperand2Alpha.syncWith(pOther->_sfEnvOperand2Alpha);

    if(FieldBits::NoField != (PointSpriteFieldMask & whichField))
        _sfPointSprite.syncWith(pOther->_sfPointSprite);

    if(FieldBits::NoField != (ShaderOperationFieldMask & whichField))
        _sfShaderOperation.syncWith(pOther->_sfShaderOperation);

    if(FieldBits::NoField != (ShaderInputFieldMask & whichField))
        _sfShaderInput.syncWith(pOther->_sfShaderInput);

    if(FieldBits::NoField != (ShaderOffsetMatrixFieldMask & whichField))
        _mfShaderOffsetMatrix.syncWith(pOther->_mfShaderOffsetMatrix, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (ShaderOffsetScaleFieldMask & whichField))
        _sfShaderOffsetScale.syncWith(pOther->_sfShaderOffsetScale);

    if(FieldBits::NoField != (ShaderOffsetBiasFieldMask & whichField))
        _sfShaderOffsetBias.syncWith(pOther->_sfShaderOffsetBias);

    if(FieldBits::NoField != (ShaderRGBADotProductFieldMask & whichField))
        _sfShaderRGBADotProduct.syncWith(pOther->_sfShaderRGBADotProduct);

    if(FieldBits::NoField != (ShaderCullModesFieldMask & whichField))
        _sfShaderCullModes.syncWith(pOther->_sfShaderCullModes);

    if(FieldBits::NoField != (ShaderConstEyeFieldMask & whichField))
        _sfShaderConstEye.syncWith(pOther->_sfShaderConstEye);

    if(FieldBits::NoField != (LodBiasFieldMask & whichField))
        _sfLodBias.syncWith(pOther->_sfLodBias);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureEnvChunkBase::execSync (      TextureEnvChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EnvModeFieldMask & whichField))
        _sfEnvMode.syncWith(pFrom->_sfEnvMode);

    if(FieldBits::NoField != (EnvColorFieldMask & whichField))
        _sfEnvColor.syncWith(pFrom->_sfEnvColor);

    if(FieldBits::NoField != (EnvCombineRGBFieldMask & whichField))
        _sfEnvCombineRGB.syncWith(pFrom->_sfEnvCombineRGB);

    if(FieldBits::NoField != (EnvCombineAlphaFieldMask & whichField))
        _sfEnvCombineAlpha.syncWith(pFrom->_sfEnvCombineAlpha);

    if(FieldBits::NoField != (EnvScaleRGBFieldMask & whichField))
        _sfEnvScaleRGB.syncWith(pFrom->_sfEnvScaleRGB);

    if(FieldBits::NoField != (EnvScaleAlphaFieldMask & whichField))
        _sfEnvScaleAlpha.syncWith(pFrom->_sfEnvScaleAlpha);

    if(FieldBits::NoField != (EnvSource0RGBFieldMask & whichField))
        _sfEnvSource0RGB.syncWith(pFrom->_sfEnvSource0RGB);

    if(FieldBits::NoField != (EnvSource1RGBFieldMask & whichField))
        _sfEnvSource1RGB.syncWith(pFrom->_sfEnvSource1RGB);

    if(FieldBits::NoField != (EnvSource2RGBFieldMask & whichField))
        _sfEnvSource2RGB.syncWith(pFrom->_sfEnvSource2RGB);

    if(FieldBits::NoField != (EnvSource0AlphaFieldMask & whichField))
        _sfEnvSource0Alpha.syncWith(pFrom->_sfEnvSource0Alpha);

    if(FieldBits::NoField != (EnvSource1AlphaFieldMask & whichField))
        _sfEnvSource1Alpha.syncWith(pFrom->_sfEnvSource1Alpha);

    if(FieldBits::NoField != (EnvSource2AlphaFieldMask & whichField))
        _sfEnvSource2Alpha.syncWith(pFrom->_sfEnvSource2Alpha);

    if(FieldBits::NoField != (EnvOperand0RGBFieldMask & whichField))
        _sfEnvOperand0RGB.syncWith(pFrom->_sfEnvOperand0RGB);

    if(FieldBits::NoField != (EnvOperand1RGBFieldMask & whichField))
        _sfEnvOperand1RGB.syncWith(pFrom->_sfEnvOperand1RGB);

    if(FieldBits::NoField != (EnvOperand2RGBFieldMask & whichField))
        _sfEnvOperand2RGB.syncWith(pFrom->_sfEnvOperand2RGB);

    if(FieldBits::NoField != (EnvOperand0AlphaFieldMask & whichField))
        _sfEnvOperand0Alpha.syncWith(pFrom->_sfEnvOperand0Alpha);

    if(FieldBits::NoField != (EnvOperand1AlphaFieldMask & whichField))
        _sfEnvOperand1Alpha.syncWith(pFrom->_sfEnvOperand1Alpha);

    if(FieldBits::NoField != (EnvOperand2AlphaFieldMask & whichField))
        _sfEnvOperand2Alpha.syncWith(pFrom->_sfEnvOperand2Alpha);

    if(FieldBits::NoField != (PointSpriteFieldMask & whichField))
        _sfPointSprite.syncWith(pFrom->_sfPointSprite);

    if(FieldBits::NoField != (ShaderOperationFieldMask & whichField))
        _sfShaderOperation.syncWith(pFrom->_sfShaderOperation);

    if(FieldBits::NoField != (ShaderInputFieldMask & whichField))
        _sfShaderInput.syncWith(pFrom->_sfShaderInput);

    if(FieldBits::NoField != (ShaderOffsetMatrixFieldMask & whichField))
        _mfShaderOffsetMatrix.syncWith(pFrom->_mfShaderOffsetMatrix, 
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ShaderOffsetScaleFieldMask & whichField))
        _sfShaderOffsetScale.syncWith(pFrom->_sfShaderOffsetScale);

    if(FieldBits::NoField != (ShaderOffsetBiasFieldMask & whichField))
        _sfShaderOffsetBias.syncWith(pFrom->_sfShaderOffsetBias);

    if(FieldBits::NoField != (ShaderRGBADotProductFieldMask & whichField))
        _sfShaderRGBADotProduct.syncWith(pFrom->_sfShaderRGBADotProduct);

    if(FieldBits::NoField != (ShaderCullModesFieldMask & whichField))
        _sfShaderCullModes.syncWith(pFrom->_sfShaderCullModes);

    if(FieldBits::NoField != (ShaderConstEyeFieldMask & whichField))
        _sfShaderConstEye.syncWith(pFrom->_sfShaderConstEye);

    if(FieldBits::NoField != (LodBiasFieldMask & whichField))
        _sfLodBias.syncWith(pFrom->_sfLodBias);
}
#endif

#if 0
inline
void TextureEnvChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ShaderOffsetMatrixFieldMask & whichField))
    {
        _mfShaderOffsetMatrix.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *TextureEnvChunkBase::getClassname(void)
{
    return "TextureEnvChunk";
}

typedef PointerBuilder<TextureEnvChunk>::ObjPtr          TextureEnvChunkPtr;
typedef PointerBuilder<TextureEnvChunk>::ObjPtrConst     TextureEnvChunkPtrConst;
typedef PointerBuilder<TextureEnvChunk>::ObjConstPtr     TextureEnvChunkConstPtr;

typedef PointerBuilder<TextureEnvChunk>::ObjPtrArg       TextureEnvChunkPtrArg;
typedef PointerBuilder<TextureEnvChunk>::ObjConstPtrArg  TextureEnvChunkConstPtrArg;
typedef PointerBuilder<TextureEnvChunk>::ObjPtrConstArg  TextureEnvChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGTEXTUREENVCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h 106 2006-09-14 03:15:53Z dirk $"
