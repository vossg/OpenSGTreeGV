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


#ifndef _OSGPERFMONITORFOREGROUNDFIELDS_H_
#define _OSGPERFMONITORFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGUtilDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PerfMonitorForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! PerfMonitorForegroundPtr

OSG_GEN_CONTAINERPTR(PerfMonitorForeground);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpUtilFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<PerfMonitorForeground *> :
    public FieldTraitsFCPtrBase<PerfMonitorForeground *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PerfMonitorForeground *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_UTIL_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPerfMonitorForegroundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPerfMonitorForegroundPtr"; }
};

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPerfMonitorForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PerfMonitorForeground *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPerfMonitorForegroundPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<PerfMonitorForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpUtilFieldSingle */

typedef PointerSField<PerfMonitorForeground *,
                      RecordedRefCountPolicy  > SFRecPerfMonitorForegroundPtr;
typedef PointerSField<PerfMonitorForeground *,
                      UnrecordedRefCountPolicy> SFUnrecPerfMonitorForegroundPtr;
typedef PointerSField<PerfMonitorForeground *,
                      WeakRefCountPolicy      > SFWeakPerfMonitorForegroundPtr;
typedef PointerSField<PerfMonitorForeground *,
                      NoRefCountPolicy        > SFUncountedPerfMonitorForegroundPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpUtilFieldMulti */

typedef PointerMField<PerfMonitorForeground *,
                      RecordedRefCountPolicy  > MFRecPerfMonitorForegroundPtr;
typedef PointerMField<PerfMonitorForeground *,
                      UnrecordedRefCountPolicy> MFUnrecPerfMonitorForegroundPtr;
typedef PointerMField<PerfMonitorForeground *,
                      WeakRefCountPolicy      > MFWeakPerfMonitorForegroundPtr;
typedef PointerMField<PerfMonitorForeground *,
                      NoRefCountPolicy        > MFUncountedPerfMonitorForegroundPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGPERFMONITORFOREGROUNDFIELDS_H_ */