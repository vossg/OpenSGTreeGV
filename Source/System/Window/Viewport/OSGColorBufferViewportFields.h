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


#ifndef _OSGCOLORBUFFERVIEWPORTFIELDS_H_
#define _OSGCOLORBUFFERVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ColorBufferViewport;

OSG_GEN_CONTAINERPTR(ColorBufferViewport);

/*! \ingroup GrpWindowFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<ColorBufferViewport *> :
    public FieldTraitsFCPtrBase<ColorBufferViewport *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ColorBufferViewport *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFColorBufferViewportPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFColorBufferViewportPtr"; }
};

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakColorBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorBufferViewport *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdColorBufferViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<ColorBufferViewport *,
                      RecordedRefCountPolicy  > SFRecColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<ColorBufferViewport *,
                      UnrecordedRefCountPolicy> SFUnrecColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<ColorBufferViewport *,
                      WeakRefCountPolicy      > SFWeakColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldSFields */
typedef PointerSField<ColorBufferViewport *,
                      NoRefCountPolicy        > SFUncountedColorBufferViewportPtr;


/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<ColorBufferViewport *,
                      RecordedRefCountPolicy  > MFRecColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<ColorBufferViewport *,
                      UnrecordedRefCountPolicy> MFUnrecColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<ColorBufferViewport *,
                      WeakRefCountPolicy      > MFWeakColorBufferViewportPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<ColorBufferViewport *,
                      NoRefCountPolicy        > MFUncountedColorBufferViewportPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecColorBufferViewportPtr : 
    public PointerSField<ColorBufferViewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecColorBufferViewportPtr : 
    public PointerSField<ColorBufferViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakColorBufferViewportPtr :
    public PointerSField<ColorBufferViewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedColorBufferViewportPtr :
    public PointerSField<ColorBufferViewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecColorBufferViewportPtr :
    public PointerMField<ColorBufferViewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecColorBufferViewportPtr :
    public PointerMField<ColorBufferViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakColorBufferViewportPtr :
    public PointerMField<ColorBufferViewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedColorBufferViewportPtr :
    public PointerMField<ColorBufferViewport *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOLORBUFFERVIEWPORTFIELDS_H_ */
