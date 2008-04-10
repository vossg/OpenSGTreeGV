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


#ifndef _OSGIMAGEFIELDS_H_
#define _OSGIMAGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class Image;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ImagePtr

OSG_GEN_CONTAINERPTR(Image);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ImagePtr> :
    public FieldTraitsFCPtrBase<ImagePtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ImagePtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFImagePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFImagePtr"; }
};

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdImagePtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ImagePtr, 0>
    \hideinhierarchy
 */
#endif


template <>
struct FieldTraits<ImagePtr, 1> :
    public FieldTraitsFCPtrBase<ImagePtr, 1>
{
  private:

  public:

    typedef FieldTraits<ImagePtr, 1>  Self;
    typedef FieldContainerPtr           ParentType;

    static const FieldType::Cardinality eParentCard = FieldType::MultiField;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFImagePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFImagePtr"; }
};

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFieldContainerChildImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<ImagePtr, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFieldContainerChildImagePtr"; 
}


#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef FieldContainerPtrSField<ImagePtr,
                                RecordedRefCountPolicy  > SFRecImagePtr;
typedef FieldContainerPtrSField<ImagePtr,
                                UnrecordedRefCountPolicy> SFUnrecImagePtr;
typedef FieldContainerPtrSField<ImagePtr,
                                WeakRefCountPolicy      > SFWeakImagePtr;
typedef FieldContainerPtrSField<ImagePtr,
                                NoRefCountPolicy        > SFUncountedImagePtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef FieldContainerPtrMField<ImagePtr,
                                RecordedRefCountPolicy  > MFRecImagePtr;
typedef FieldContainerPtrMField<ImagePtr,
                                UnrecordedRefCountPolicy> MFUnrecImagePtr;
typedef FieldContainerPtrMField<ImagePtr,
                                WeakRefCountPolicy      > MFWeakImagePtr;
typedef FieldContainerPtrMField<ImagePtr,
                                NoRefCountPolicy        > MFUncountedImagePtr;
#endif



typedef FieldContainerPtrChildSField<
          ImagePtr, 
          UnrecordedRefCountPolicy,
          1                  > SFUnrecFieldContainerChildImagePtr;

typedef SFUnrecFieldContainerChildImagePtr 
    SFUnrecChildImagePtr;

OSG_END_NAMESPACE

#endif /* _OSGIMAGEFIELDS_H_ */
