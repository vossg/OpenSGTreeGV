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
 **     class CubeMapGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CubeMapGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CubeMapGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CubeMapGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CubeMapGenerator::_sfRoot field.
inline
Node * CubeMapGeneratorBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the CubeMapGenerator::_sfRoot field.
inline
void CubeMapGeneratorBase::setRoot(Node * const value)
{
    editSField(RootFieldMask);

    _sfRoot.setValue(value);
}

//! Get the value of the CubeMapGenerator::_sfTexture field.
inline
TextureObjChunk * CubeMapGeneratorBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the CubeMapGenerator::_sfTexture field.
inline
void CubeMapGeneratorBase::setTexture(TextureObjChunk * const value)
{
    editSField(TextureFieldMask);

    _sfTexture.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfTextureSize field.

inline
Vec2s &CubeMapGeneratorBase::editTextureSize(void)
{
    editSField(TextureSizeFieldMask);

    return _sfTextureSize.getValue();
}

//! Get the value of the CubeMapGenerator::_sfTextureSize field.
inline
const Vec2s &CubeMapGeneratorBase::getTextureSize(void) const
{
    return _sfTextureSize.getValue();
}

//! Set the value of the CubeMapGenerator::_sfTextureSize field.
inline
void CubeMapGeneratorBase::setTextureSize(const Vec2s &value)
{
    editSField(TextureSizeFieldMask);

    _sfTextureSize.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfTextureFormat field.

inline
GLenum &CubeMapGeneratorBase::editTextureFormat(void)
{
    editSField(TextureFormatFieldMask);

    return _sfTextureFormat.getValue();
}

//! Get the value of the CubeMapGenerator::_sfTextureFormat field.
inline
const GLenum &CubeMapGeneratorBase::getTextureFormat(void) const
{
    return _sfTextureFormat.getValue();
}

//! Set the value of the CubeMapGenerator::_sfTextureFormat field.
inline
void CubeMapGeneratorBase::setTextureFormat(const GLenum &value)
{
    editSField(TextureFormatFieldMask);

    _sfTextureFormat.setValue(value);
}

//! Get the value of the CubeMapGenerator::_sfBeacon field.
inline
Node * CubeMapGeneratorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the CubeMapGenerator::_sfBeacon field.
inline
void CubeMapGeneratorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfOrigin field.

inline
Pnt3f &CubeMapGeneratorBase::editOrigin(void)
{
    editSField(OriginFieldMask);

    return _sfOrigin.getValue();
}

//! Get the value of the CubeMapGenerator::_sfOrigin field.
inline
const Pnt3f &CubeMapGeneratorBase::getOrigin(void) const
{
    return _sfOrigin.getValue();
}

//! Set the value of the CubeMapGenerator::_sfOrigin field.
inline
void CubeMapGeneratorBase::setOrigin(const Pnt3f &value)
{
    editSField(OriginFieldMask);

    _sfOrigin.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfOriginMode field.

inline
UInt32 &CubeMapGeneratorBase::editOriginMode(void)
{
    editSField(OriginModeFieldMask);

    return _sfOriginMode.getValue();
}

//! Get the value of the CubeMapGenerator::_sfOriginMode field.
inline
      UInt32  CubeMapGeneratorBase::getOriginMode(void) const
{
    return _sfOriginMode.getValue();
}

//! Set the value of the CubeMapGenerator::_sfOriginMode field.
inline
void CubeMapGeneratorBase::setOriginMode(const UInt32 value)
{
    editSField(OriginModeFieldMask);

    _sfOriginMode.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfTexUnit field.

inline
UInt32 &CubeMapGeneratorBase::editTexUnit(void)
{
    editSField(TexUnitFieldMask);

    return _sfTexUnit.getValue();
}

//! Get the value of the CubeMapGenerator::_sfTexUnit field.
inline
      UInt32  CubeMapGeneratorBase::getTexUnit(void) const
{
    return _sfTexUnit.getValue();
}

//! Set the value of the CubeMapGenerator::_sfTexUnit field.
inline
void CubeMapGeneratorBase::setTexUnit(const UInt32 value)
{
    editSField(TexUnitFieldMask);

    _sfTexUnit.setValue(value);
}
//! Get the value of the CubeMapGenerator::_sfSetupMode field.

inline
UInt32 &CubeMapGeneratorBase::editSetupMode(void)
{
    editSField(SetupModeFieldMask);

    return _sfSetupMode.getValue();
}

//! Get the value of the CubeMapGenerator::_sfSetupMode field.
inline
      UInt32  CubeMapGeneratorBase::getSetupMode(void) const
{
    return _sfSetupMode.getValue();
}

//! Set the value of the CubeMapGenerator::_sfSetupMode field.
inline
void CubeMapGeneratorBase::setSetupMode(const UInt32 value)
{
    editSField(SetupModeFieldMask);

    _sfSetupMode.setValue(value);
}

//! Get the value of the CubeMapGenerator::_sfBackground field.
inline
Background * CubeMapGeneratorBase::getBackground(void) const
{
    return _sfBackground.getValue();
}

//! Set the value of the CubeMapGenerator::_sfBackground field.
inline
void CubeMapGeneratorBase::setBackground(Background * const value)
{
    editSField(BackgroundFieldMask);

    _sfBackground.setValue(value);
}

//! Get the value of the \a index element the CubeMapGenerator::_mfExclude field.
inline
Node * CubeMapGeneratorBase::getExclude(const UInt32 index) const
{
    return _mfExclude[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CubeMapGeneratorBase::execSync (      CubeMapGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
        _mfExclude.syncWith(pFrom->_mfExclude,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pFrom->_sfTexture);

    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
        _sfTextureSize.syncWith(pFrom->_sfTextureSize);

    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
        _sfTextureFormat.syncWith(pFrom->_sfTextureFormat);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (OriginFieldMask & whichField))
        _sfOrigin.syncWith(pFrom->_sfOrigin);

    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
        _sfOriginMode.syncWith(pFrom->_sfOriginMode);

    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
        _sfTexUnit.syncWith(pFrom->_sfTexUnit);

    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
        _sfSetupMode.syncWith(pFrom->_sfSetupMode);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);
}
#endif


inline
Char8 *CubeMapGeneratorBase::getClassname(void)
{
    return "CubeMapGenerator";
}
OSG_GEN_CONTAINERPTR(CubeMapGenerator);

OSG_END_NAMESPACE

