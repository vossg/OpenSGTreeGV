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
 **     class Geometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOMETRYBASE_H_
#define _OSGGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGGeoIntegralPropertyFields.h" // Types type
#include "OSGGeoIntegralPropertyFields.h" // Lengths type
#include "OSGGeoVectorPropertyFields.h" // Properties type
#include "OSGGeoIntegralPropertyFields.h" // PropIndices type
#include "OSGBoolFields.h" // DlistCache type
#include "OSGInt32Fields.h" // ClassicGLId type
#include "OSGInt32Fields.h" // AttGLId type

#include "OSGGeometryFields.h"

OSG_BEGIN_NAMESPACE

class Geometry;

//! \brief Geometry Base Class.

class OSG_DRAWABLE_DLLMAPPING GeometryBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Geometry);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TypesFieldId = Inherited::NextFieldId,
        LengthsFieldId = TypesFieldId + 1,
        PropertiesFieldId = LengthsFieldId + 1,
        PropIndicesFieldId = PropertiesFieldId + 1,
        DlistCacheFieldId = PropIndicesFieldId + 1,
        ClassicGLIdFieldId = DlistCacheFieldId + 1,
        AttGLIdFieldId = ClassicGLIdFieldId + 1,
        NextFieldId = AttGLIdFieldId + 1
    };

    static const OSG::BitVector TypesFieldMask =
        (TypeTraits<BitVector>::One << TypesFieldId);
    static const OSG::BitVector LengthsFieldMask =
        (TypeTraits<BitVector>::One << LengthsFieldId);
    static const OSG::BitVector PropertiesFieldMask =
        (TypeTraits<BitVector>::One << PropertiesFieldId);
    static const OSG::BitVector PropIndicesFieldMask =
        (TypeTraits<BitVector>::One << PropIndicesFieldId);
    static const OSG::BitVector DlistCacheFieldMask =
        (TypeTraits<BitVector>::One << DlistCacheFieldId);
    static const OSG::BitVector ClassicGLIdFieldMask =
        (TypeTraits<BitVector>::One << ClassicGLIdFieldId);
    static const OSG::BitVector AttGLIdFieldMask =
        (TypeTraits<BitVector>::One << AttGLIdFieldId);
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

            const SFGeoIntegralPropertyPtr *getSFTypes           (void) const;
            const SFGeoIntegralPropertyPtr *getSFLengths         (void) const;
            const MFGeoVectorPropertyPtr *getMFProperties      (void) const;
            const MFGeoIntegralPropertyPtr *getMFPropIndices     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFDlistCache      (void);
#endif
                  SFBool              *editSFDlistCache     (void);
            const SFBool              *getSFDlistCache      (void) const;


                  GeoIntegralPropertyPtrConst getTypes          (void) const;

                  GeoIntegralPropertyPtrConst getLengths        (void) const;

                  GeoVectorPropertyPtrConst getProperties     (const UInt32 index) const;
            const MFGeoVectorPropertyPtr &getProperties     (void) const;

                  GeoIntegralPropertyPtrConst getPropIndices    (const UInt32 index) const;
            const MFGeoIntegralPropertyPtr &getPropIndices    (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getDlistCache      (void);
#endif
                  bool                &editDlistCache     (void);
            const bool                &getDlistCache      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTypes          (GeoIntegralPropertyPtrConstArg value);
            void setLengths        (GeoIntegralPropertyPtrConstArg value);
            void setDlistCache     (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(      FieldContainerPtrConstArg pElement,
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToProperties           (GeoVectorPropertyPtrConstArg value   );
    void assignProperties           (const MFGeoVectorPropertyPtr &value);
    void insertIntoProperties      (UInt32                uiIndex,
                                             GeoVectorPropertyPtrConstArg value   );
    void replaceInProperties  (UInt32                uiIndex,
                                             GeoVectorPropertyPtrConstArg value   );
    void replaceInProperties (GeoVectorPropertyPtrConstArg pOldElem,
                                             GeoVectorPropertyPtrConstArg pNewElem);
    void removeFromProperties (UInt32                uiIndex );
    void removeFromProperties(GeoVectorPropertyPtrConstArg value   );
    void clearProperties            (void                          );


    void pushToPropIndices           (GeoIntegralPropertyPtrConstArg value   );
    void assignPropIndices           (const MFGeoIntegralPropertyPtr &value);
    void insertIntoPropIndices      (UInt32                uiIndex,
                                             GeoIntegralPropertyPtrConstArg value   );
    void replaceInPropIndices  (UInt32                uiIndex,
                                             GeoIntegralPropertyPtrConstArg value   );
    void replaceInPropIndices (GeoIntegralPropertyPtrConstArg pOldElem,
                                             GeoIntegralPropertyPtrConstArg pNewElem);
    void removeFromPropIndices (UInt32                uiIndex );
    void removeFromPropIndices(GeoIntegralPropertyPtrConstArg value   );
    void clearPropIndices            (void                          );


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

    static  GeometryPtr create     (void);
    static  GeometryPtr createEmpty(void);

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

    SFGeoIntegralPropertyPtr _sfTypes;
    SFGeoIntegralPropertyPtr _sfLengths;
    MFGeoVectorPropertyPtr _mfProperties;
    MFGeoIntegralPropertyPtr _mfPropIndices;
    SFBool            _sfDlistCache;
    SFInt32           _sfClassicGLId;
    SFInt32           _sfAttGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeometryBase(void);
    GeometryBase(const GeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeometryBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Geometry *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFClassicGLId     (void);
#endif
                  SFInt32             *editSFClassicGLId    (void);
            const SFInt32             *getSFClassicGLId     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFAttGLId         (void);
#endif
                  SFInt32             *editSFAttGLId        (void);
            const SFInt32             *getSFAttGLId         (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getClassicGLId     (void);
#endif
                  Int32               &editClassicGLId    (void);
            const Int32               &getClassicGLId     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getAttGLId         (void);
#endif
                  Int32               &editAttGLId        (void);
            const Int32               &getAttGLId         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setClassicGLId    (const Int32 &value);
            void setAttGLId        (const Int32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */




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

            void execSync (      GeometryBase *pFrom,
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
    void operator =(const GeometryBase &source);
};

typedef GeometryBase *GeometryBaseP;

/** Type specific RefPtr type for Geometry. */
typedef RefPtr<GeometryPtr> GeometryRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<GeometryBase::isNodeCore>,
    CoredNodePtr<Geometry>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        GeometryNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGGEOMETRYBASE_H_ */
