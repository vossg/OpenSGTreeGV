/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003, by the OpenSG Forum                         *
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

#ifndef _OSGTAGGEDSINGLETONHOLDER_H_
#define _OSGTAGGEDSINGLETONHOLDER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBaseTypes.h"
#include "OSGLog.h"
#include "OSGLockPolicies.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpBaseMixinLib
 */

template<class SingletonT, typename TagT, class LockPolicy = NoLockPolicy>
class TaggedSingletonHolder
{
    /*==========================  PUBLIC  =================================*/

    typedef TaggedSingletonHolder<SingletonT, TagT, LockPolicy> Self;

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      access                                  */
    /*! \{                                                                 */

    static SingletonT *the    (void);
    static bool        destroy(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    static SingletonT *_the;
    static LockPolicy  _oLock;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    /*!\brief prohibit default function (move to 'public' if needed) */
    TaggedSingletonHolder(const TaggedSingletonHolder &source);
    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const TaggedSingletonHolder &source);
};

OSG_END_NAMESPACE

#endif /* _OSGTAGGEDSINGLETONHOLDER_H_ */
