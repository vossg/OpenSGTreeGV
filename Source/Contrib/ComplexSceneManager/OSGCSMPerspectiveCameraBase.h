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
 **     Do not change this file, changes should be done in the derived      **
 **     class CSMPerspectiveCamera
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMPERSPECTIVECAMERABASE_H_
#define _OSGCSMPERSPECTIVECAMERABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPerspectiveCamera.h" // Parent

#include "OSGSysFields.h"               // EyeSeparation type
#include "OSGNodeFields.h"              // HeadBeacon type

#include "OSGCSMPerspectiveCameraFields.h"

OSG_BEGIN_NAMESPACE

class CSMPerspectiveCamera;

//! \brief CSMPerspectiveCamera Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMPerspectiveCameraBase : public PerspectiveCamera
{
  public:

    typedef PerspectiveCamera Inherited;
    typedef PerspectiveCamera ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMPerspectiveCamera);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EyeSeparationFieldId = Inherited::NextFieldId,
        ZeroParallaxFieldId = EyeSeparationFieldId + 1,
        HeadBeaconFieldId = ZeroParallaxFieldId + 1,
        NextFieldId = HeadBeaconFieldId + 1
    };

    static const OSG::BitVector EyeSeparationFieldMask =
        (TypeTraits<BitVector>::One << EyeSeparationFieldId);
    static const OSG::BitVector ZeroParallaxFieldMask =
        (TypeTraits<BitVector>::One << ZeroParallaxFieldId);
    static const OSG::BitVector HeadBeaconFieldMask =
        (TypeTraits<BitVector>::One << HeadBeaconFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFEyeSeparationType;
    typedef SFReal32          SFZeroParallaxType;
    typedef SFWeakNodePtr     SFHeadBeaconType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFEyeSeparation  (void);
            const SFReal32            *getSFEyeSeparation   (void) const;

                  SFReal32            *editSFZeroParallax   (void);
            const SFReal32            *getSFZeroParallax    (void) const;
            const SFWeakNodePtr       *getSFHeadBeacon     (void) const;
                  SFWeakNodePtr       *editSFHeadBeacon     (void);


                  Real32              &editEyeSeparation  (void);
                  Real32               getEyeSeparation   (void) const;

                  Real32              &editZeroParallax   (void);
                  Real32               getZeroParallax    (void) const;

                  Node * getHeadBeacon     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEyeSeparation  (const Real32 value);
            void setZeroParallax   (const Real32 value);
            void setHeadBeacon     (Node * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CSMPerspectiveCameraTransitPtr  create          (void);
    static  CSMPerspectiveCamera           *createEmpty     (void);

    static  CSMPerspectiveCameraTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMPerspectiveCamera            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CSMPerspectiveCameraTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfEyeSeparation;
    SFReal32          _sfZeroParallax;
    SFWeakNodePtr     _sfHeadBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMPerspectiveCameraBase(void);
    CSMPerspectiveCameraBase(const CSMPerspectiveCameraBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMPerspectiveCameraBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CSMPerspectiveCamera *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEyeSeparation   (void) const;
    EditFieldHandlePtr editHandleEyeSeparation  (void);
    GetFieldHandlePtr  getHandleZeroParallax    (void) const;
    EditFieldHandlePtr editHandleZeroParallax   (void);
    GetFieldHandlePtr  getHandleHeadBeacon      (void) const;
    EditFieldHandlePtr editHandleHeadBeacon     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      CSMPerspectiveCameraBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CSMPerspectiveCameraBase &source);
};

typedef CSMPerspectiveCameraBase *CSMPerspectiveCameraBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMPERSPECTIVECAMERABASE_H_ */
