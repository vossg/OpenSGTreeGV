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
 **     class Geometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeometryBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GeometryBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GeometryBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Geometry::_sfTypes field.
inline
GeoIntegralProperty * GeometryBase::getTypes(void) const
{
    return _sfTypes.getValue();
}

//! Set the value of the Geometry::_sfTypes field.
inline
void GeometryBase::setTypes(GeoIntegralProperty * const value)
{
    editSField(TypesFieldMask);

    _sfTypes.setValue(value);
}

//! Get the value of the Geometry::_sfLengths field.
inline
GeoIntegralProperty * GeometryBase::getLengths(void) const
{
    return _sfLengths.getValue();
}

//! Set the value of the Geometry::_sfLengths field.
inline
void GeometryBase::setLengths(GeoIntegralProperty * const value)
{
    editSField(LengthsFieldMask);

    _sfLengths.setValue(value);
}
//! Get the value of the Geometry::_sfClassicGLId field.

inline
Int32 &GeometryBase::editClassicGLId(void)
{
    editSField(ClassicGLIdFieldMask);

    return _sfClassicGLId.getValue();
}

//! Get the value of the Geometry::_sfClassicGLId field.
inline
      Int32  GeometryBase::getClassicGLId(void) const
{
    return _sfClassicGLId.getValue();
}

//! Set the value of the Geometry::_sfClassicGLId field.
inline
void GeometryBase::setClassicGLId(const Int32 value)
{
    editSField(ClassicGLIdFieldMask);

    _sfClassicGLId.setValue(value);
}
//! Get the value of the Geometry::_sfAttGLId field.

inline
Int32 &GeometryBase::editAttGLId(void)
{
    editSField(AttGLIdFieldMask);

    return _sfAttGLId.getValue();
}

//! Get the value of the Geometry::_sfAttGLId field.
inline
      Int32  GeometryBase::getAttGLId(void) const
{
    return _sfAttGLId.getValue();
}

//! Set the value of the Geometry::_sfAttGLId field.
inline
void GeometryBase::setAttGLId(const Int32 value)
{
    editSField(AttGLIdFieldMask);

    _sfAttGLId.setValue(value);
}

//! Get the value of the \a index element the Geometry::_mfProperties field.
inline
GeoVectorProperty * GeometryBase::getProperties(const UInt32 index) const
{
    return _mfProperties[index];
}

//! Get the value of the \a index element the Geometry::_mfPropIndices field.
inline
GeoIntegralProperty * GeometryBase::getPropIndices(const UInt32 index) const
{
    return _mfPropIndices[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GeometryBase::execSync (      GeometryBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TypesFieldMask & whichField))
        _sfTypes.syncWith(pFrom->_sfTypes);

    if(FieldBits::NoField != (LengthsFieldMask & whichField))
        _sfLengths.syncWith(pFrom->_sfLengths);

    if(FieldBits::NoField != (PropertiesFieldMask & whichField))
        _mfProperties.syncWith(pFrom->_mfProperties,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (PropIndicesFieldMask & whichField))
        _mfPropIndices.syncWith(pFrom->_mfPropIndices,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ClassicGLIdFieldMask & whichField))
        _sfClassicGLId.syncWith(pFrom->_sfClassicGLId);

    if(FieldBits::NoField != (AttGLIdFieldMask & whichField))
        _sfAttGLId.syncWith(pFrom->_sfAttGLId);
}
#endif


inline
Char8 *GeometryBase::getClassname(void)
{
    return "Geometry";
}
OSG_GEN_CONTAINERPTR(Geometry);

OSG_END_NAMESPACE

