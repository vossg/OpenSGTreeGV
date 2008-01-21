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
 **     class MatrixCamera
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATRIXCAMERABASE_H_
#define _OSGMATRIXCAMERABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGCamera.h" // Parent

#include "OSGMatrixFields.h" // ProjectionMatrix type
#include "OSGMatrixFields.h" // ModelviewMatrix type
#include "OSGBoolFields.h" // UseBeacon type

#include "OSGMatrixCameraFields.h"

OSG_BEGIN_NAMESPACE

class MatrixCamera;

//! \brief MatrixCamera Base Class.

class OSG_SYSTEM_DLLMAPPING MatrixCameraBase : public Camera
{
  public:

    typedef Camera Inherited;
    typedef Camera ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MatrixCamera);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ProjectionMatrixFieldId = Inherited::NextFieldId,
        ModelviewMatrixFieldId = ProjectionMatrixFieldId + 1,
        UseBeaconFieldId = ModelviewMatrixFieldId + 1,
        NextFieldId = UseBeaconFieldId + 1
    };

    static const OSG::BitVector ProjectionMatrixFieldMask =
        (TypeTraits<BitVector>::One << ProjectionMatrixFieldId);
    static const OSG::BitVector ModelviewMatrixFieldMask =
        (TypeTraits<BitVector>::One << ModelviewMatrixFieldId);
    static const OSG::BitVector UseBeaconFieldMask =
        (TypeTraits<BitVector>::One << UseBeaconFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFMatrix            *getSFProjectionMatrix (void);
#endif
                  SFMatrix            *editSFProjectionMatrix(void);
            const SFMatrix            *getSFProjectionMatrix (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFMatrix            *getSFModelviewMatrix (void);
#endif
                  SFMatrix            *editSFModelviewMatrix(void);
            const SFMatrix            *getSFModelviewMatrix (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFUseBeacon       (void);
#endif
                  SFBool              *editSFUseBeacon      (void);
            const SFBool              *getSFUseBeacon       (void) const;


#ifdef OSG_1_GET_COMPAT
                  Matrix              &getProjectionMatrix (void);
#endif
                  Matrix              &editProjectionMatrix(void);
            const Matrix              &getProjectionMatrix (void) const;

#ifdef OSG_1_GET_COMPAT
                  Matrix              &getModelviewMatrix (void);
#endif
                  Matrix              &editModelviewMatrix(void);
            const Matrix              &getModelviewMatrix (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getUseBeacon       (void);
#endif
                  bool                &editUseBeacon      (void);
            const bool                &getUseBeacon       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setProjectionMatrix(const Matrix &value);
            void setModelviewMatrix(const Matrix &value);
            void setUseBeacon      (const bool &value);

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

    static  MatrixCameraPtr create     (void);
    static  MatrixCameraPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFMatrix          _sfProjectionMatrix;
    SFMatrix          _sfModelviewMatrix;
    SFBool            _sfUseBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MatrixCameraBase(void);
    MatrixCameraBase(const MatrixCameraBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MatrixCameraBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleProjectionMatrix (void) const;
    EditFieldHandlePtr editHandleProjectionMatrix(void);
    GetFieldHandlePtr  getHandleModelviewMatrix (void) const;
    EditFieldHandlePtr editHandleModelviewMatrix(void);
    GetFieldHandlePtr  getHandleUseBeacon       (void) const;
    EditFieldHandlePtr editHandleUseBeacon      (void);

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

            void execSync (      MatrixCameraBase *pFrom,
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
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const MatrixCameraBase &source);
};

typedef MatrixCameraBase *MatrixCameraBaseP;

/** Type specific RefPtr type for MatrixCamera. */
typedef RefPtr<MatrixCameraPtr> MatrixCameraRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<MatrixCameraBase::isNodeCore>,
    CoredNodePtr<MatrixCamera>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        MatrixCameraNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGMATRIXCAMERABASE_H_ */