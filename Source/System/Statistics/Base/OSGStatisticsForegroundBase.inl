/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class StatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StatisticsForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 StatisticsForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 StatisticsForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the StatisticsForeground::_sfCollector field.

inline
StatCollectorP &StatisticsForegroundBase::editCollector(void)
{
    editSField(CollectorFieldMask);

    return _sfCollector.getValue();
}

//! Get the value of the StatisticsForeground::_sfCollector field.
inline
const StatCollectorP &StatisticsForegroundBase::getCollector(void) const
{
    return _sfCollector.getValue();
}

//! Set the value of the StatisticsForeground::_sfCollector field.
inline
void StatisticsForegroundBase::setCollector(const StatCollectorP &value)
{
    editSField(CollectorFieldMask);

    _sfCollector.setValue(value);
}

//! Get the value of the \a index element the StatisticsForeground::_mfElementIDs field.
inline
      Int32  StatisticsForegroundBase::getElementIDs(const UInt32 index) const
{
    return _mfElementIDs[index];
}

inline
Int32 &StatisticsForegroundBase::editElementIDs(const UInt32 index)
{
    editMField(ElementIDsFieldMask, _mfElementIDs);

    return _mfElementIDs[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void StatisticsForegroundBase::execSync (      StatisticsForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ElementIDsFieldMask & whichField))
        _mfElementIDs.syncWith(pFrom->_mfElementIDs,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (CollectorFieldMask & whichField))
        _sfCollector.syncWith(pFrom->_sfCollector);
}
#endif


inline
Char8 *StatisticsForegroundBase::getClassname(void)
{
    return "StatisticsForeground";
}
OSG_GEN_CONTAINERPTR(StatisticsForeground);

OSG_END_NAMESPACE

