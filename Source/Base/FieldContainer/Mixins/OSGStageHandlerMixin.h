/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGSTAGEHANDLERMIXIN_H_
#define _OSGSTAGEHANDLERMIXIN_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDataSlotPool.h"
#include "OSGStageIdPool.h"
#include "OSGWindow.h"
#include "OSGViewport.h"
#include "OSGStageValidator.h"
#include "OSGStageData.h"
#include "OSGOSGAnyFields.h"
#include "OSGMultiCore.h"

#include "OSGRenderAction.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpBaseFieldContainerMixins
    \ingroup GrpLibOSGBase
 */
template <class ParentT>
class StageHandlerMixin  : public ParentT
{
    /*==========================  PRIVATE  ================================*/

  private:

    typedef ParentT                     Inherited;
    typedef RenderActionBase::Inherited DataSlotHandler;

    /*==========================  PUBLIC  =================================*/

  public:

    typedef          StageHandlerMixin<ParentT>        Self;

    typedef typename ParentT::Desc                     Desc;
    typedef typename Desc::TypeObject                  TypeObject;

    typedef          StageValidator::ValidationStatus  ValidationStatus;

    enum UpdateMode
    {
        PerWindow    = 0x0001,
        PerViewport  = 0x0002,
        PerTraversal = 0x0003,

        PerVisit     = 0x0004,

        OnRequest    = 0x0005
    };

    enum GroupMode 
    {
        NoPartitionGroup = 0x0000,
        InPartitionGroup = 0x0001,
        InPartitionList  = 0x0002
    };

    /*---------------------------------------------------------------------*/
    /*! \name                      dcast                                   */
    /*! \{                                                                 */

    OSG_RC_FIRST_FIELD_DECL(UpdateMode                   );

    OSG_RC_FIELD_DECL      (RequestRun,        UpdateMode);
    OSG_RC_FIELD_DECL      (DestroyedFunctors, RequestRun);
    OSG_RC_LAST_FIELD_DECL (DestroyedFunctors            );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name        General Fieldcontainer Declaration                    */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    void   addDestroyedFunctor     (ChangedFunctor    func,
                                    std::string       createSymbol);

    template<class FunctorT>
    void   subDestroyedFunctor     (FunctorT          func        );

    template<class FunctorT>
    bool   hasDestroyedFunctor     (FunctorT          func        );

    void   clearDestroyedFunctors  (void                          );

    void   clearDestroyedFunctorFor(DataSlotHandler  *pHandler    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    bool requestRun(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Helper                                    */
    /*! \{                                                                 */

    void changed(ConstFieldMaskArg whichField, 
                 UInt32            origin,
                 BitVector         details);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    ValidationStatus validateOnEnter(RenderActionBase *pAction);
    ValidationStatus validateOnLeave(RenderActionBase *pAction);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    void pushPartition      (RenderActionBase          *pAction,
                             UInt32                     uiCopyOnPush = 0x0000, 
                             RenderPartitionBase::Mode  eMode        = 
                                            RenderPartitionBase::StateSorting);
    void popPartition       (RenderActionBase          *pAction);

    void beginPartitionGroup(RenderActionBase          *pAction);
    void endPartitionGroup  (RenderActionBase          *pAction);

    void beginPartitions    (RenderActionBase          *pAction);
    void endPartitions      (RenderActionBase          *pAction);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_category                              */
    /*! \{                                                                 */

          void      setUpdateMode   (UpdateMode eMode);
          UInt32    getUpdateMode   (void            ) const;

          SFUInt32 *editSFUpdateMode(void            );
    const SFUInt32 *getSFUpdateMode (void            ) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Container Access                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg   whichField);
    virtual void   copyToBin  (BinaryDataHandler  &pMem,
                               ConstFieldMaskArg   whichField);
    virtual void   copyFromBin(BinaryDataHandler  &pMem,
                               ConstFieldMaskArg   whichField);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_operators                             */
    /*! \{                                                                 */

    void setData(StageData        *pData, 
                 Int32             iDataSlotId,
                 RenderActionBase *pAction    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Assignment                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Comparison                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Dump                                  */
    /*! \{                                                                 */

    virtual void dump(      UInt32    uiIndent = 0,
                      const BitVector bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    Int32  _iDataSlotId;
    Int32  _iStageId;


    StageValidator::ValidationStatus _tmpStatus;

    /*---------------------------------------------------------------------*/
    /*! \name                  Type information                            */
    /*! \{                                                                 */

    ValidationStatus validate(RenderActionBase *pAction);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32                 _sfUpdateMode;
    SFOSGAny                 _sfRequestRun;
    MFChangedFunctorCallback _mfDestroyedFunctors;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    StageHandlerMixin(void);
    StageHandlerMixin(const StageHandlerMixin &source);

    virtual ~StageHandlerMixin(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Changed                                 */
    /*! \{                                                                 */

    static void classDescInserter(TypeObject &oType);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   MT Destruction                             */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    void execSync  (      Self              *pFrom,
                          ConstFieldMaskArg  whichField,
                          AspectOffsetStore &oOffsets,
                          ConstFieldMaskArg  syncMode  ,
                    const UInt32             uiSyncInfo);
#endif


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    Action::ResultE recurseFromThis(RenderAction *action);

    Action::ResultE recurseFrom    (RenderAction *action,
                                    NodeCore     *pFrom );

    Action::ResultE recurse        (RenderAction *action,
                                    Node         *node  );
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    EditFieldHandlePtr editHandleUpdateMode       (void);
    GetFieldHandlePtr  getHandleUpdateMode        (void) const;

    GetFieldHandlePtr  getHandleRequestRun        (void) const;

    GetFieldHandlePtr  getHandleDestroyedFunctors (void) const;
    EditFieldHandlePtr editHandleDestroyedFunctors(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

            void onCreateAspect (const Self   *createAspect,
                                 const Self   *source      = NULL);

            void onCreate       (const Self   *source      = NULL);

    virtual void onDestroy      (      UInt32  uiContainerId     );

    virtual void onDestroyAspect(      UInt32  uiContainerId,
                                       UInt32  uiAspect          );

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const StageHandlerMixin &source);
};

OSG_END_NAMESPACE

#include "OSGStageHandlerMixin.inl"

#endif /* _OSGSTAGEHANDLERMIXIN_H_ */
