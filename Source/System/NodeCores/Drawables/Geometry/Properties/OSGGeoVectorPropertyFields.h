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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOVECTORPROPERTYFIELDS_H_
#define _OSGGEOVECTORPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class GeoVectorProperty;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! GeoVectorPropertyPtr

OSG_GEN_CONTAINERPTR(GeoVectorProperty);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpDrawableFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<GeoVectorPropertyPtr> :
    public FieldTraitsFCPtrBase<GeoVectorPropertyPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoVectorPropertyPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoVectorPropertyPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoVectorPropertyPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoVectorPropertyPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<GeoVectorPropertyPtr, 0>
    \hideinhierarchy
 */
#endif


template <>
struct FieldTraits<GeoVectorPropertyPtr, 1> :
    public FieldTraitsFCPtrBase<GeoVectorPropertyPtr, 1>
{
  private:

  public:

    typedef FieldTraits<GeoVectorPropertyPtr, 1>  Self;
    typedef FieldContainerPtr           ParentType;

    static const FieldType::Cardinality eParentCard = FieldType::MultiField;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoVectorPropertyPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoVectorPropertyPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFieldContainerChildGeoVectorPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoVectorPropertyPtr, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFieldContainerChildGeoVectorPropertyPtr"; 
}


#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDrawableFieldSingle */

typedef FieldContainerPtrSField<GeoVectorPropertyPtr,
                                RecordedRefCountPolicy  > SFRecGeoVectorPropertyPtr;
typedef FieldContainerPtrSField<GeoVectorPropertyPtr,
                                UnrecordedRefCountPolicy> SFUnrecGeoVectorPropertyPtr;
typedef FieldContainerPtrSField<GeoVectorPropertyPtr,
                                WeakRefCountPolicy      > SFWeakGeoVectorPropertyPtr;
typedef FieldContainerPtrSField<GeoVectorPropertyPtr,
                                NoRefCountPolicy        > SFUncountedGeoVectorPropertyPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDrawableFieldMulti */

typedef FieldContainerPtrMField<GeoVectorPropertyPtr,
                                RecordedRefCountPolicy  > MFRecGeoVectorPropertyPtr;
typedef FieldContainerPtrMField<GeoVectorPropertyPtr,
                                UnrecordedRefCountPolicy> MFUnrecGeoVectorPropertyPtr;
typedef FieldContainerPtrMField<GeoVectorPropertyPtr,
                                WeakRefCountPolicy      > MFWeakGeoVectorPropertyPtr;
typedef FieldContainerPtrMField<GeoVectorPropertyPtr,
                                NoRefCountPolicy        > MFUncountedGeoVectorPropertyPtr;
#endif



typedef FieldContainerPtrChildSField<
          GeoVectorPropertyPtr, 
          UnrecordedRefCountPolicy,
          1                  > SFUnrecFieldContainerChildGeoVectorPropertyPtr;

typedef SFUnrecFieldContainerChildGeoVectorPropertyPtr 
    SFUnrecChildGeoVectorPropertyPtr;


typedef FieldContainerPtrChildMField<
          GeoVectorPropertyPtr, 
          UnrecordedRefCountPolicy,
          1                  > MFUnrecFieldContainerChildGeoVectorPropertyPtr;

typedef MFUnrecFieldContainerChildGeoVectorPropertyPtr
    MFUnrecChildGeoVectorPropertyPtr;

OSG_END_NAMESPACE

#endif /* _OSGGEOVECTORPROPERTYFIELDS_H_ */
