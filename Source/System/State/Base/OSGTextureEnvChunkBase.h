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
 **     class TextureEnvChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREENVCHUNKBASE_H_
#define _OSGTEXTUREENVCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGGLenumFields.h" // EnvMode type
#include "OSGColor4fFields.h" // EnvColor type
#include "OSGGLenumFields.h" // EnvCombineRGB type
#include "OSGGLenumFields.h" // EnvCombineAlpha type
#include "OSGReal32Fields.h" // EnvScaleRGB type
#include "OSGReal32Fields.h" // EnvScaleAlpha type
#include "OSGGLenumFields.h" // EnvSource0RGB type
#include "OSGGLenumFields.h" // EnvSource1RGB type
#include "OSGGLenumFields.h" // EnvSource2RGB type
#include "OSGGLenumFields.h" // EnvSource0Alpha type
#include "OSGGLenumFields.h" // EnvSource1Alpha type
#include "OSGGLenumFields.h" // EnvSource2Alpha type
#include "OSGGLenumFields.h" // EnvOperand0RGB type
#include "OSGGLenumFields.h" // EnvOperand1RGB type
#include "OSGGLenumFields.h" // EnvOperand2RGB type
#include "OSGGLenumFields.h" // EnvOperand0Alpha type
#include "OSGGLenumFields.h" // EnvOperand1Alpha type
#include "OSGGLenumFields.h" // EnvOperand2Alpha type
#include "OSGBoolFields.h" // PointSprite type
#include "OSGGLenumFields.h" // ShaderOperation type
#include "OSGGLenumFields.h" // ShaderInput type
#include "OSGReal32Fields.h" // ShaderOffsetMatrix type
#include "OSGReal32Fields.h" // ShaderOffsetScale type
#include "OSGReal32Fields.h" // ShaderOffsetBias type
#include "OSGGLenumFields.h" // ShaderRGBADotProduct type
#include "OSGUInt8Fields.h" // ShaderCullModes type
#include "OSGVec3fFields.h" // ShaderConstEye type
#include "OSGReal32Fields.h" // LodBias type

#include "OSGTextureEnvChunkFields.h"

OSG_BEGIN_NAMESPACE

class TextureEnvChunk;

//! \brief TextureEnvChunk Base Class.

class OSG_SYSTEM_DLLMAPPING TextureEnvChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr, 
                              TextureEnvChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr, 
                              TextureEnvChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              TextureEnvChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              TextureEnvChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              TextureEnvChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr, 
                              StateChunkConstPtr,
                              TextureEnvChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EnvModeFieldId = Inherited::NextFieldId,
        EnvColorFieldId = EnvModeFieldId + 1,
        EnvCombineRGBFieldId = EnvColorFieldId + 1,
        EnvCombineAlphaFieldId = EnvCombineRGBFieldId + 1,
        EnvScaleRGBFieldId = EnvCombineAlphaFieldId + 1,
        EnvScaleAlphaFieldId = EnvScaleRGBFieldId + 1,
        EnvSource0RGBFieldId = EnvScaleAlphaFieldId + 1,
        EnvSource1RGBFieldId = EnvSource0RGBFieldId + 1,
        EnvSource2RGBFieldId = EnvSource1RGBFieldId + 1,
        EnvSource0AlphaFieldId = EnvSource2RGBFieldId + 1,
        EnvSource1AlphaFieldId = EnvSource0AlphaFieldId + 1,
        EnvSource2AlphaFieldId = EnvSource1AlphaFieldId + 1,
        EnvOperand0RGBFieldId = EnvSource2AlphaFieldId + 1,
        EnvOperand1RGBFieldId = EnvOperand0RGBFieldId + 1,
        EnvOperand2RGBFieldId = EnvOperand1RGBFieldId + 1,
        EnvOperand0AlphaFieldId = EnvOperand2RGBFieldId + 1,
        EnvOperand1AlphaFieldId = EnvOperand0AlphaFieldId + 1,
        EnvOperand2AlphaFieldId = EnvOperand1AlphaFieldId + 1,
        PointSpriteFieldId = EnvOperand2AlphaFieldId + 1,
        ShaderOperationFieldId = PointSpriteFieldId + 1,
        ShaderInputFieldId = ShaderOperationFieldId + 1,
        ShaderOffsetMatrixFieldId = ShaderInputFieldId + 1,
        ShaderOffsetScaleFieldId = ShaderOffsetMatrixFieldId + 1,
        ShaderOffsetBiasFieldId = ShaderOffsetScaleFieldId + 1,
        ShaderRGBADotProductFieldId = ShaderOffsetBiasFieldId + 1,
        ShaderCullModesFieldId = ShaderRGBADotProductFieldId + 1,
        ShaderConstEyeFieldId = ShaderCullModesFieldId + 1,
        LodBiasFieldId = ShaderConstEyeFieldId + 1,
        NextFieldId = LodBiasFieldId + 1
    };

    static const OSG::BitVector EnvModeFieldMask = 
        (TypeTraits<BitVector>::One << EnvModeFieldId);
    static const OSG::BitVector EnvColorFieldMask = 
        (TypeTraits<BitVector>::One << EnvColorFieldId);
    static const OSG::BitVector EnvCombineRGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvCombineRGBFieldId);
    static const OSG::BitVector EnvCombineAlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvCombineAlphaFieldId);
    static const OSG::BitVector EnvScaleRGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvScaleRGBFieldId);
    static const OSG::BitVector EnvScaleAlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvScaleAlphaFieldId);
    static const OSG::BitVector EnvSource0RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource0RGBFieldId);
    static const OSG::BitVector EnvSource1RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource1RGBFieldId);
    static const OSG::BitVector EnvSource2RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource2RGBFieldId);
    static const OSG::BitVector EnvSource0AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource0AlphaFieldId);
    static const OSG::BitVector EnvSource1AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource1AlphaFieldId);
    static const OSG::BitVector EnvSource2AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvSource2AlphaFieldId);
    static const OSG::BitVector EnvOperand0RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand0RGBFieldId);
    static const OSG::BitVector EnvOperand1RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand1RGBFieldId);
    static const OSG::BitVector EnvOperand2RGBFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand2RGBFieldId);
    static const OSG::BitVector EnvOperand0AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand0AlphaFieldId);
    static const OSG::BitVector EnvOperand1AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand1AlphaFieldId);
    static const OSG::BitVector EnvOperand2AlphaFieldMask = 
        (TypeTraits<BitVector>::One << EnvOperand2AlphaFieldId);
    static const OSG::BitVector PointSpriteFieldMask = 
        (TypeTraits<BitVector>::One << PointSpriteFieldId);
    static const OSG::BitVector ShaderOperationFieldMask = 
        (TypeTraits<BitVector>::One << ShaderOperationFieldId);
    static const OSG::BitVector ShaderInputFieldMask = 
        (TypeTraits<BitVector>::One << ShaderInputFieldId);
    static const OSG::BitVector ShaderOffsetMatrixFieldMask = 
        (TypeTraits<BitVector>::One << ShaderOffsetMatrixFieldId);
    static const OSG::BitVector ShaderOffsetScaleFieldMask = 
        (TypeTraits<BitVector>::One << ShaderOffsetScaleFieldId);
    static const OSG::BitVector ShaderOffsetBiasFieldMask = 
        (TypeTraits<BitVector>::One << ShaderOffsetBiasFieldId);
    static const OSG::BitVector ShaderRGBADotProductFieldMask = 
        (TypeTraits<BitVector>::One << ShaderRGBADotProductFieldId);
    static const OSG::BitVector ShaderCullModesFieldMask = 
        (TypeTraits<BitVector>::One << ShaderCullModesFieldId);
    static const OSG::BitVector ShaderConstEyeFieldMask = 
        (TypeTraits<BitVector>::One << ShaderConstEyeFieldId);
    static const OSG::BitVector LodBiasFieldMask = 
        (TypeTraits<BitVector>::One << LodBiasFieldId);
    static const OSG::BitVector NextFieldMask = 
        (TypeTraits<BitVector>::One << NextFieldId);


    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void); 
    static UInt32              getClassTypeId (void); 
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void); 
    virtual const FieldContainerType &getType         (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvMode(void);
#endif
           SFGLenum *editSFEnvMode(void);
     const SFGLenum *getSFEnvMode (void) const;

#ifdef OSG_1_COMPAT
           SFColor4f *getSFEnvColor(void);
#endif
           SFColor4f *editSFEnvColor(void);
     const SFColor4f *getSFEnvColor (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvCombineRGB(void);
#endif
           SFGLenum *editSFEnvCombineRGB(void);
     const SFGLenum *getSFEnvCombineRGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvCombineAlpha(void);
#endif
           SFGLenum *editSFEnvCombineAlpha(void);
     const SFGLenum *getSFEnvCombineAlpha (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFEnvScaleRGB(void);
#endif
           SFReal32 *editSFEnvScaleRGB(void);
     const SFReal32 *getSFEnvScaleRGB (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFEnvScaleAlpha(void);
#endif
           SFReal32 *editSFEnvScaleAlpha(void);
     const SFReal32 *getSFEnvScaleAlpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource0RGB(void);
#endif
           SFGLenum *editSFEnvSource0RGB(void);
     const SFGLenum *getSFEnvSource0RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource1RGB(void);
#endif
           SFGLenum *editSFEnvSource1RGB(void);
     const SFGLenum *getSFEnvSource1RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource2RGB(void);
#endif
           SFGLenum *editSFEnvSource2RGB(void);
     const SFGLenum *getSFEnvSource2RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource0Alpha(void);
#endif
           SFGLenum *editSFEnvSource0Alpha(void);
     const SFGLenum *getSFEnvSource0Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource1Alpha(void);
#endif
           SFGLenum *editSFEnvSource1Alpha(void);
     const SFGLenum *getSFEnvSource1Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvSource2Alpha(void);
#endif
           SFGLenum *editSFEnvSource2Alpha(void);
     const SFGLenum *getSFEnvSource2Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand0RGB(void);
#endif
           SFGLenum *editSFEnvOperand0RGB(void);
     const SFGLenum *getSFEnvOperand0RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand1RGB(void);
#endif
           SFGLenum *editSFEnvOperand1RGB(void);
     const SFGLenum *getSFEnvOperand1RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand2RGB(void);
#endif
           SFGLenum *editSFEnvOperand2RGB(void);
     const SFGLenum *getSFEnvOperand2RGB (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand0Alpha(void);
#endif
           SFGLenum *editSFEnvOperand0Alpha(void);
     const SFGLenum *getSFEnvOperand0Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand1Alpha(void);
#endif
           SFGLenum *editSFEnvOperand1Alpha(void);
     const SFGLenum *getSFEnvOperand1Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFEnvOperand2Alpha(void);
#endif
           SFGLenum *editSFEnvOperand2Alpha(void);
     const SFGLenum *getSFEnvOperand2Alpha (void) const;

#ifdef OSG_1_COMPAT
           SFBool *getSFPointSprite(void);
#endif
           SFBool *editSFPointSprite(void);
     const SFBool *getSFPointSprite (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFShaderOperation(void);
#endif
           SFGLenum *editSFShaderOperation(void);
     const SFGLenum *getSFShaderOperation (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFShaderInput(void);
#endif
           SFGLenum *editSFShaderInput(void);
     const SFGLenum *getSFShaderInput (void) const;

#ifdef OSG_1_COMPAT
           MFReal32 *getMFShaderOffsetMatrix(void);
#endif
           MFReal32 *editMFShaderOffsetMatrix(void);
     const MFReal32 *getMFShaderOffsetMatrix (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFShaderOffsetScale(void);
#endif
           SFReal32 *editSFShaderOffsetScale(void);
     const SFReal32 *getSFShaderOffsetScale (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFShaderOffsetBias(void);
#endif
           SFReal32 *editSFShaderOffsetBias(void);
     const SFReal32 *getSFShaderOffsetBias (void) const;

#ifdef OSG_1_COMPAT
           SFGLenum *getSFShaderRGBADotProduct(void);
#endif
           SFGLenum *editSFShaderRGBADotProduct(void);
     const SFGLenum *getSFShaderRGBADotProduct (void) const;

#ifdef OSG_1_COMPAT
           SFUInt8 *getSFShaderCullModes(void);
#endif
           SFUInt8 *editSFShaderCullModes(void);
     const SFUInt8 *getSFShaderCullModes (void) const;

#ifdef OSG_1_COMPAT
           SFVec3f *getSFShaderConstEye(void);
#endif
           SFVec3f *editSFShaderConstEye(void);
     const SFVec3f *getSFShaderConstEye (void) const;

#ifdef OSG_1_COMPAT
           SFReal32 *getSFLodBias(void);
#endif
           SFReal32 *editSFLodBias(void);
     const SFReal32 *getSFLodBias (void) const;


#ifdef OSG_1_COMPAT
           GLenum &getEnvMode(void);
#endif
           GLenum &editEnvMode(void);
     const GLenum &getEnvMode (void) const;

#ifdef OSG_1_COMPAT
           Color4f &getEnvColor(void);
#endif
           Color4f &editEnvColor(void);
     const Color4f &getEnvColor (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvCombineRGB(void);
#endif
           GLenum &editEnvCombineRGB(void);
     const GLenum &getEnvCombineRGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvCombineAlpha(void);
#endif
           GLenum &editEnvCombineAlpha(void);
     const GLenum &getEnvCombineAlpha (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getEnvScaleRGB(void);
#endif
           Real32 &editEnvScaleRGB(void);
     const Real32 &getEnvScaleRGB (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getEnvScaleAlpha(void);
#endif
           Real32 &editEnvScaleAlpha(void);
     const Real32 &getEnvScaleAlpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource0RGB(void);
#endif
           GLenum &editEnvSource0RGB(void);
     const GLenum &getEnvSource0RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource1RGB(void);
#endif
           GLenum &editEnvSource1RGB(void);
     const GLenum &getEnvSource1RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource2RGB(void);
#endif
           GLenum &editEnvSource2RGB(void);
     const GLenum &getEnvSource2RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource0Alpha(void);
#endif
           GLenum &editEnvSource0Alpha(void);
     const GLenum &getEnvSource0Alpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource1Alpha(void);
#endif
           GLenum &editEnvSource1Alpha(void);
     const GLenum &getEnvSource1Alpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvSource2Alpha(void);
#endif
           GLenum &editEnvSource2Alpha(void);
     const GLenum &getEnvSource2Alpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand0RGB(void);
#endif
           GLenum &editEnvOperand0RGB(void);
     const GLenum &getEnvOperand0RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand1RGB(void);
#endif
           GLenum &editEnvOperand1RGB(void);
     const GLenum &getEnvOperand1RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand2RGB(void);
#endif
           GLenum &editEnvOperand2RGB(void);
     const GLenum &getEnvOperand2RGB (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand0Alpha(void);
#endif
           GLenum &editEnvOperand0Alpha(void);
     const GLenum &getEnvOperand0Alpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand1Alpha(void);
#endif
           GLenum &editEnvOperand1Alpha(void);
     const GLenum &getEnvOperand1Alpha (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getEnvOperand2Alpha(void);
#endif
           GLenum &editEnvOperand2Alpha(void);
     const GLenum &getEnvOperand2Alpha (void) const;

#ifdef OSG_1_COMPAT
           bool &getPointSprite(void);
#endif
           bool &editPointSprite(void);
     const bool &getPointSprite (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getShaderOperation(void);
#endif
           GLenum &editShaderOperation(void);
     const GLenum &getShaderOperation (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getShaderInput(void);
#endif
           GLenum &editShaderInput(void);
     const GLenum &getShaderInput (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getShaderOffsetMatrix(const UInt32 index);
           MFReal32 &getShaderOffsetMatrix(void);
#endif
           Real32 &editShaderOffsetMatrix(const UInt32 index);
     const Real32 &getShaderOffsetMatrix (const UInt32 index) const;
           MFReal32 &editShaderOffsetMatrix(void);
     const MFReal32 &getShaderOffsetMatrix(void) const;

#ifdef OSG_1_COMPAT
           Real32 &getShaderOffsetScale(void);
#endif
           Real32 &editShaderOffsetScale(void);
     const Real32 &getShaderOffsetScale (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getShaderOffsetBias(void);
#endif
           Real32 &editShaderOffsetBias(void);
     const Real32 &getShaderOffsetBias (void) const;

#ifdef OSG_1_COMPAT
           GLenum &getShaderRGBADotProduct(void);
#endif
           GLenum &editShaderRGBADotProduct(void);
     const GLenum &getShaderRGBADotProduct (void) const;

#ifdef OSG_1_COMPAT
           UInt8 &getShaderCullModes(void);
#endif
           UInt8 &editShaderCullModes(void);
     const UInt8 &getShaderCullModes (void) const;

#ifdef OSG_1_COMPAT
           Vec3f &getShaderConstEye(void);
#endif
           Vec3f &editShaderConstEye(void);
     const Vec3f &getShaderConstEye (void) const;

#ifdef OSG_1_COMPAT
           Real32 &getLodBias(void);
#endif
           Real32 &editLodBias(void);
     const Real32 &getLodBias (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setEnvMode(const GLenum &value);
     void setEnvColor(const Color4f &value);
     void setEnvCombineRGB(const GLenum &value);
     void setEnvCombineAlpha(const GLenum &value);
     void setEnvScaleRGB(const Real32 &value);
     void setEnvScaleAlpha(const Real32 &value);
     void setEnvSource0RGB(const GLenum &value);
     void setEnvSource1RGB(const GLenum &value);
     void setEnvSource2RGB(const GLenum &value);
     void setEnvSource0Alpha(const GLenum &value);
     void setEnvSource1Alpha(const GLenum &value);
     void setEnvSource2Alpha(const GLenum &value);
     void setEnvOperand0RGB(const GLenum &value);
     void setEnvOperand1RGB(const GLenum &value);
     void setEnvOperand2RGB(const GLenum &value);
     void setEnvOperand0Alpha(const GLenum &value);
     void setEnvOperand1Alpha(const GLenum &value);
     void setEnvOperand2Alpha(const GLenum &value);
     void setPointSprite(const bool &value);
     void setShaderOperation(const GLenum &value);
     void setShaderInput(const GLenum &value);
     void setShaderOffsetScale(const Real32 &value);
     void setShaderOffsetBias(const Real32 &value);
     void setShaderRGBADotProduct(const GLenum &value);
     void setShaderCullModes(const UInt8 &value);
     void setShaderConstEye(const Vec3f &value);
     void setLodBias(const Real32 &value);

    /*! \}                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextureEnvChunkPtr create     (void); 
    static  TextureEnvChunkPtr createEmpty(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGLenum _sfEnvMode;
    SFColor4f _sfEnvColor;
    SFGLenum _sfEnvCombineRGB;
    SFGLenum _sfEnvCombineAlpha;
    SFReal32 _sfEnvScaleRGB;
    SFReal32 _sfEnvScaleAlpha;
    SFGLenum _sfEnvSource0RGB;
    SFGLenum _sfEnvSource1RGB;
    SFGLenum _sfEnvSource2RGB;
    SFGLenum _sfEnvSource0Alpha;
    SFGLenum _sfEnvSource1Alpha;
    SFGLenum _sfEnvSource2Alpha;
    SFGLenum _sfEnvOperand0RGB;
    SFGLenum _sfEnvOperand1RGB;
    SFGLenum _sfEnvOperand2RGB;
    SFGLenum _sfEnvOperand0Alpha;
    SFGLenum _sfEnvOperand1Alpha;
    SFGLenum _sfEnvOperand2Alpha;
    SFBool _sfPointSprite;
    SFGLenum _sfShaderOperation;
    SFGLenum _sfShaderInput;
    MFReal32 _mfShaderOffsetMatrix;
    SFReal32 _sfShaderOffsetScale;
    SFReal32 _sfShaderOffsetBias;
    SFGLenum _sfShaderRGBADotProduct;
    SFUInt8 _sfShaderCullModes;
    SFVec3f _sfShaderConstEye;
    SFReal32 _sfLodBias;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureEnvChunkBase(void);
    TextureEnvChunkBase(const TextureEnvChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureEnvChunkBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      TextureEnvChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TextureEnvChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField, 
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextureEnvChunkBase &source);
};

typedef TextureEnvChunkBase *TextureEnvChunkBaseP;

/** Type specific RefPtr type for TextureEnvChunk. */
typedef RefPtr<TextureEnvChunkPtr> TextureEnvChunkRefPtr;

typedef osgIF<
    TextureEnvChunkBase::isNodeCore,

    CoredNodePtr<TextureEnvChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        TextureEnvChunkNodePtr;

OSG_END_NAMESPACE

#define OSGTEXTUREENVCHUNKBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGTEXTUREENVCHUNKBASE_H_ */
