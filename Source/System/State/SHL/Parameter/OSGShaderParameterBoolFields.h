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


#ifndef _OSGSHADERPARAMETERBOOLFIELDS_H_
#define _OSGSHADERPARAMETERBOOLFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterBool;

OSG_GEN_CONTAINERPTR(ShaderParameterBool);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ShaderParameterBool *> :
    public FieldTraitsFCPtrBase<ShaderParameterBool *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterBool *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterBoolPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterBoolPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderParameterBoolPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterBool *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderParameterBoolPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterBool *,
                      RecordedRefCountPolicy  > SFRecShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterBool *,
                      UnrecordedRefCountPolicy> SFUnrecShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterBool *,
                      WeakRefCountPolicy      > SFWeakShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterBool *,
                      NoRefCountPolicy        > SFUncountedShaderParameterBoolPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterBool *,
                      RecordedRefCountPolicy  > MFRecShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterBool *,
                      UnrecordedRefCountPolicy> MFUnrecShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterBool *,
                      WeakRefCountPolicy      > MFWeakShaderParameterBoolPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterBool *,
                      NoRefCountPolicy        > MFUncountedShaderParameterBoolPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecShaderParameterBoolPtr : 
    public PointerSField<ShaderParameterBool *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecShaderParameterBoolPtr : 
    public PointerSField<ShaderParameterBool *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakShaderParameterBoolPtr :
    public PointerSField<ShaderParameterBool *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedShaderParameterBoolPtr :
    public PointerSField<ShaderParameterBool *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecShaderParameterBoolPtr :
    public PointerMField<ShaderParameterBool *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecShaderParameterBoolPtr :
    public PointerMField<ShaderParameterBool *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakShaderParameterBoolPtr :
    public PointerMField<ShaderParameterBool *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedShaderParameterBoolPtr :
    public PointerMField<ShaderParameterBool *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERBOOLFIELDS_H_ */
