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
 **     class Light!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LightBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LightBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LightBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Light::_sfAmbient field.

inline
Color4r &LightBase::editAmbient(void)
{
    editSField(AmbientFieldMask);

    return _sfAmbient.getValue();
}

//! Get the value of the Light::_sfAmbient field.
inline
const Color4r &LightBase::getAmbient(void) const
{
    return _sfAmbient.getValue();
}

//! Set the value of the Light::_sfAmbient field.
inline
void LightBase::setAmbient(const Color4r &value)
{
    editSField(AmbientFieldMask);

    _sfAmbient.setValue(value);
}
//! Get the value of the Light::_sfDiffuse field.

inline
Color4r &LightBase::editDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return _sfDiffuse.getValue();
}

//! Get the value of the Light::_sfDiffuse field.
inline
const Color4r &LightBase::getDiffuse(void) const
{
    return _sfDiffuse.getValue();
}

//! Set the value of the Light::_sfDiffuse field.
inline
void LightBase::setDiffuse(const Color4r &value)
{
    editSField(DiffuseFieldMask);

    _sfDiffuse.setValue(value);
}
//! Get the value of the Light::_sfSpecular field.

inline
Color4r &LightBase::editSpecular(void)
{
    editSField(SpecularFieldMask);

    return _sfSpecular.getValue();
}

//! Get the value of the Light::_sfSpecular field.
inline
const Color4r &LightBase::getSpecular(void) const
{
    return _sfSpecular.getValue();
}

//! Set the value of the Light::_sfSpecular field.
inline
void LightBase::setSpecular(const Color4r &value)
{
    editSField(SpecularFieldMask);

    _sfSpecular.setValue(value);
}

//! Get the value of the Light::_sfBeacon field.
inline
Node * LightBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the Light::_sfBeacon field.
inline
void LightBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the Light::_sfOn field.

inline
bool &LightBase::editOn(void)
{
    editSField(OnFieldMask);

    return _sfOn.getValue();
}

//! Get the value of the Light::_sfOn field.
inline
      bool  LightBase::getOn(void) const
{
    return _sfOn.getValue();
}

//! Set the value of the Light::_sfOn field.
inline
void LightBase::setOn(const bool value)
{
    editSField(OnFieldMask);

    _sfOn.setValue(value);
}
//! Get the value of the Light::_sfConstantAttenuation field.

inline
Real &LightBase::editConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return _sfConstantAttenuation.getValue();
}

//! Get the value of the Light::_sfConstantAttenuation field.
inline
const Real &LightBase::getConstantAttenuation(void) const
{
    return _sfConstantAttenuation.getValue();
}

//! Set the value of the Light::_sfConstantAttenuation field.
inline
void LightBase::setConstantAttenuation(const Real &value)
{
    editSField(ConstantAttenuationFieldMask);

    _sfConstantAttenuation.setValue(value);
}
//! Get the value of the Light::_sfLinearAttenuation field.

inline
Real &LightBase::editLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return _sfLinearAttenuation.getValue();
}

//! Get the value of the Light::_sfLinearAttenuation field.
inline
const Real &LightBase::getLinearAttenuation(void) const
{
    return _sfLinearAttenuation.getValue();
}

//! Set the value of the Light::_sfLinearAttenuation field.
inline
void LightBase::setLinearAttenuation(const Real &value)
{
    editSField(LinearAttenuationFieldMask);

    _sfLinearAttenuation.setValue(value);
}
//! Get the value of the Light::_sfQuadraticAttenuation field.

inline
Real &LightBase::editQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return _sfQuadraticAttenuation.getValue();
}

//! Get the value of the Light::_sfQuadraticAttenuation field.
inline
const Real &LightBase::getQuadraticAttenuation(void) const
{
    return _sfQuadraticAttenuation.getValue();
}

//! Set the value of the Light::_sfQuadraticAttenuation field.
inline
void LightBase::setQuadraticAttenuation(const Real &value)
{
    editSField(QuadraticAttenuationFieldMask);

    _sfQuadraticAttenuation.setValue(value);
}

//! Get the value of the Light::_sfLightEngine field.
inline
LightEngine * LightBase::getLightEngine(void) const
{
    return _sfLightEngine.getValue();
}

//! Set the value of the Light::_sfLightEngine field.
inline
void LightBase::setLightEngine(LightEngine * const value)
{
    editSField(LightEngineFieldMask);

    _sfLightEngine.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LightBase::execSync (      LightBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pFrom->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pFrom->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pFrom->_sfSpecular);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (OnFieldMask & whichField))
        _sfOn.syncWith(pFrom->_sfOn);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pFrom->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pFrom->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pFrom->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
        _sfLightEngine.syncWith(pFrom->_sfLightEngine);
}
#endif


inline
Char8 *LightBase::getClassname(void)
{
    return "Light";
}
OSG_GEN_CONTAINERPTR(Light);

OSG_END_NAMESPACE

