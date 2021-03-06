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


#ifndef _OSGCOLORMASKCHUNKFIELDS_H_
#define _OSGCOLORMASKCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ColorMaskChunk;

OSG_GEN_CONTAINERPTR(ColorMaskChunk);

/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ColorMaskChunk *> :
    public FieldTraitsFCPtrBase<ColorMaskChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ColorMaskChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFColorMaskChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFColorMaskChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakColorMaskChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ColorMaskChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdColorMaskChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ColorMaskChunk *,
                      RecordedRefCountPolicy  > SFRecColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ColorMaskChunk *,
                      UnrecordedRefCountPolicy> SFUnrecColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ColorMaskChunk *,
                      WeakRefCountPolicy      > SFWeakColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ColorMaskChunk *,
                      NoRefCountPolicy        > SFUncountedColorMaskChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ColorMaskChunk *,
                      RecordedRefCountPolicy  > MFRecColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ColorMaskChunk *,
                      UnrecordedRefCountPolicy> MFUnrecColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ColorMaskChunk *,
                      WeakRefCountPolicy      > MFWeakColorMaskChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ColorMaskChunk *,
                      NoRefCountPolicy        > MFUncountedColorMaskChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecColorMaskChunkPtr : 
    public PointerSField<ColorMaskChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecColorMaskChunkPtr : 
    public PointerSField<ColorMaskChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakColorMaskChunkPtr :
    public PointerSField<ColorMaskChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedColorMaskChunkPtr :
    public PointerSField<ColorMaskChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecColorMaskChunkPtr :
    public PointerMField<ColorMaskChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecColorMaskChunkPtr :
    public PointerMField<ColorMaskChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakColorMaskChunkPtr :
    public PointerMField<ColorMaskChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedColorMaskChunkPtr :
    public PointerMField<ColorMaskChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOLORMASKCHUNKFIELDS_H_ */
