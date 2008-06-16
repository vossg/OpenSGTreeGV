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
 **     class DrawableStatsAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDRAWABLESTATSATTACHMENTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGDrawableStatsAttachmentBase.h"
#include "OSGDrawableStatsAttachment.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DrawableStatsAttachment
    The base class for drawable statistics.

    It is designed as an attachment so that it can be kept inside the graph. It
    can also be used to keep aggregated information about subtrees, by adding up
    the contributions of the underlying nodes. It can invalidate itself by using
    changed callbacks, so that no manual bookkeeping is necessary.

    \warning To use the automatic update you have to use the
    osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()
    methods! Otherwise the necessary callbacks are not set!

    \warning Before accessing the data osg::GeoStatsAttachment::validate() needs
    to be called to calculate and aggregate the results.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfVertices
    The number of vertices in the subtree.
*/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfPoints
    The number of points in the subtree.
*/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfLines
    The number of lines in the subtree.
*/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfTriangles
    The number of triangles in the subtree.
*/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfProcessedAttributeBytes
    The number of bytes in vertex attribute data that are processed while rendering.
*/

/*! \var UInt32          DrawableStatsAttachmentBase::_sfStoredAttributeBytes
    The number of bytes in vertex attribute data that are stored.
*/

/*! \var bool            DrawableStatsAttachmentBase::_sfValid
    Flags whether the data is valid or needs to be updated.
*/


void DrawableStatsAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "vertices",
        "The number of vertices in the subtree.\n",
        VerticesFieldId, VerticesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleVertices),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleVertices));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "points",
        "The number of points in the subtree.\n",
        PointsFieldId, PointsFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandlePoints),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandlePoints));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "lines",
        "The number of lines in the subtree.\n",
        LinesFieldId, LinesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleLines),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleLines));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "triangles",
        "The number of triangles in the subtree.\n",
        TrianglesFieldId, TrianglesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleTriangles),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleTriangles));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "processedAttributeBytes",
        "The number of bytes in vertex attribute data that are processed while rendering.\n",
        ProcessedAttributeBytesFieldId, ProcessedAttributeBytesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleProcessedAttributeBytes),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleProcessedAttributeBytes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "storedAttributeBytes",
        "The number of bytes in vertex attribute data that are stored.\n",
        StoredAttributeBytesFieldId, StoredAttributeBytesFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleStoredAttributeBytes),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleStoredAttributeBytes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "valid",
        "Flags whether the data is valid or needs to be updated.\n",
        ValidFieldId, ValidFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DrawableStatsAttachment::editHandleValid),
        static_cast<FieldGetMethodSig >(&DrawableStatsAttachment::getHandleValid));

    oType.addInitialDesc(pDesc);
}


DrawableStatsAttachmentBase::TypeObject DrawableStatsAttachmentBase::_type(
    DrawableStatsAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "DrawableStatsAttachment",
    0,
    reinterpret_cast<PrototypeCreateF>(&DrawableStatsAttachmentBase::createEmptyLocal),
    DrawableStatsAttachment::initMethod,
    DrawableStatsAttachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DrawableStatsAttachmentBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DrawableStatsAttachment\"\n"
    "\tparent=\"StatsAttachment\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "The base class for drawable statistics.\n"
    "\n"
    "It is designed as an attachment so that it can be kept inside the graph. It\n"
    "can also be used to keep aggregated information about subtrees, by adding up\n"
    "the contributions of the underlying nodes. It can invalidate itself by using\n"
    "changed callbacks, so that no manual bookkeeping is necessary.\n"
    "\n"
    "\\warning To use the automatic update you have to use the\n"
    "osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()\n"
    "methods! Otherwise the necessary callbacks are not set!\n"
    "\n"
    "\\warning Before accessing the data osg::GeoStatsAttachment::validate() needs\n"
    "to be called to calculate and aggregate the results.\n"
    "\t<Field\n"
    "\t\tname=\"vertices\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of vertices in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"points\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of points in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lines\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of lines in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"triangles\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of triangles in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"processedAttributeBytes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of bytes in vertex attribute data that are processed while rendering.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"storedAttributeBytes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of bytes in vertex attribute data that are stored.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"valid\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "                defaultValue=\"false\"\n"
    "\t>\n"
    "        Flags whether the data is valid or needs to be updated.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The base class for drawable statistics.\n"
    "\n"
    "It is designed as an attachment so that it can be kept inside the graph. It\n"
    "can also be used to keep aggregated information about subtrees, by adding up\n"
    "the contributions of the underlying nodes. It can invalidate itself by using\n"
    "changed callbacks, so that no manual bookkeeping is necessary.\n"
    "\n"
    "\\warning To use the automatic update you have to use the\n"
    "osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()\n"
    "methods! Otherwise the necessary callbacks are not set!\n"
    "\n"
    "\\warning Before accessing the data osg::GeoStatsAttachment::validate() needs\n"
    "to be called to calculate and aggregate the results.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DrawableStatsAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &DrawableStatsAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 DrawableStatsAttachmentBase::getContainerSize(void) const
{
    return sizeof(DrawableStatsAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *DrawableStatsAttachmentBase::editSFVertices(void)
{
    editSField(VerticesFieldMask);

    return &_sfVertices;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFVertices(void) const
{
    return &_sfVertices;
}


SFUInt32 *DrawableStatsAttachmentBase::editSFPoints(void)
{
    editSField(PointsFieldMask);

    return &_sfPoints;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFPoints(void) const
{
    return &_sfPoints;
}


SFUInt32 *DrawableStatsAttachmentBase::editSFLines(void)
{
    editSField(LinesFieldMask);

    return &_sfLines;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFLines(void) const
{
    return &_sfLines;
}


SFUInt32 *DrawableStatsAttachmentBase::editSFTriangles(void)
{
    editSField(TrianglesFieldMask);

    return &_sfTriangles;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFTriangles(void) const
{
    return &_sfTriangles;
}


SFUInt32 *DrawableStatsAttachmentBase::editSFProcessedAttributeBytes(void)
{
    editSField(ProcessedAttributeBytesFieldMask);

    return &_sfProcessedAttributeBytes;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFProcessedAttributeBytes(void) const
{
    return &_sfProcessedAttributeBytes;
}


SFUInt32 *DrawableStatsAttachmentBase::editSFStoredAttributeBytes(void)
{
    editSField(StoredAttributeBytesFieldMask);

    return &_sfStoredAttributeBytes;
}

const SFUInt32 *DrawableStatsAttachmentBase::getSFStoredAttributeBytes(void) const
{
    return &_sfStoredAttributeBytes;
}


SFBool *DrawableStatsAttachmentBase::editSFValid(void)
{
    editSField(ValidFieldMask);

    return &_sfValid;
}

const SFBool *DrawableStatsAttachmentBase::getSFValid(void) const
{
    return &_sfValid;
}






/*------------------------------ access -----------------------------------*/

UInt32 DrawableStatsAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        returnValue += _sfVertices.getBinSize();
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        returnValue += _sfPoints.getBinSize();
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        returnValue += _sfLines.getBinSize();
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        returnValue += _sfTriangles.getBinSize();
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        returnValue += _sfProcessedAttributeBytes.getBinSize();
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        returnValue += _sfStoredAttributeBytes.getBinSize();
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        returnValue += _sfValid.getBinSize();
    }

    return returnValue;
}

void DrawableStatsAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _sfVertices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        _sfPoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        _sfLines.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        _sfProcessedAttributeBytes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        _sfStoredAttributeBytes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        _sfValid.copyToBin(pMem);
    }
}

void DrawableStatsAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _sfVertices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        _sfPoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        _sfLines.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        _sfProcessedAttributeBytes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        _sfStoredAttributeBytes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        _sfValid.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DrawableStatsAttachmentTransitPtr DrawableStatsAttachmentBase::createLocal(BitVector bFlags)
{
    DrawableStatsAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DrawableStatsAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DrawableStatsAttachmentTransitPtr DrawableStatsAttachmentBase::create(void)
{
    DrawableStatsAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DrawableStatsAttachment>(tmpPtr);
    }

    return fc;
}

DrawableStatsAttachment *DrawableStatsAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    DrawableStatsAttachment *returnValue;

    newPtr<DrawableStatsAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DrawableStatsAttachment *DrawableStatsAttachmentBase::createEmpty(void)
{
    DrawableStatsAttachment *returnValue;

    newPtr<DrawableStatsAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}


FieldContainerTransitPtr DrawableStatsAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DrawableStatsAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DrawableStatsAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DrawableStatsAttachmentBase::shallowCopy(void) const
{
    DrawableStatsAttachment *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const DrawableStatsAttachment *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DrawableStatsAttachmentBase::DrawableStatsAttachmentBase(void) :
    Inherited(),
    _sfVertices               (),
    _sfPoints                 (),
    _sfLines                  (),
    _sfTriangles              (),
    _sfProcessedAttributeBytes(),
    _sfStoredAttributeBytes   (),
    _sfValid                  (bool(false))
{
}

DrawableStatsAttachmentBase::DrawableStatsAttachmentBase(const DrawableStatsAttachmentBase &source) :
    Inherited(source),
    _sfVertices               (source._sfVertices               ),
    _sfPoints                 (source._sfPoints                 ),
    _sfLines                  (source._sfLines                  ),
    _sfTriangles              (source._sfTriangles              ),
    _sfProcessedAttributeBytes(source._sfProcessedAttributeBytes),
    _sfStoredAttributeBytes   (source._sfStoredAttributeBytes   ),
    _sfValid                  (source._sfValid                  )
{
}


/*-------------------------- destructors ----------------------------------*/

DrawableStatsAttachmentBase::~DrawableStatsAttachmentBase(void)
{
}


GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleVertices        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfVertices, 
             this->getType().getFieldDesc(VerticesFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleVertices       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfVertices, 
             this->getType().getFieldDesc(VerticesFieldId)));

    editSField(VerticesFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandlePoints          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPoints, 
             this->getType().getFieldDesc(PointsFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandlePoints         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPoints, 
             this->getType().getFieldDesc(PointsFieldId)));

    editSField(PointsFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleLines           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfLines, 
             this->getType().getFieldDesc(LinesFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleLines          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfLines, 
             this->getType().getFieldDesc(LinesFieldId)));

    editSField(LinesFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleTriangles       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTriangles, 
             this->getType().getFieldDesc(TrianglesFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleTriangles      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTriangles, 
             this->getType().getFieldDesc(TrianglesFieldId)));

    editSField(TrianglesFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleProcessedAttributeBytes (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfProcessedAttributeBytes, 
             this->getType().getFieldDesc(ProcessedAttributeBytesFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleProcessedAttributeBytes(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfProcessedAttributeBytes, 
             this->getType().getFieldDesc(ProcessedAttributeBytesFieldId)));

    editSField(ProcessedAttributeBytesFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleStoredAttributeBytes (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfStoredAttributeBytes, 
             this->getType().getFieldDesc(StoredAttributeBytesFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleStoredAttributeBytes(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfStoredAttributeBytes, 
             this->getType().getFieldDesc(StoredAttributeBytesFieldId)));

    editSField(StoredAttributeBytesFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawableStatsAttachmentBase::getHandleValid           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfValid, 
             this->getType().getFieldDesc(ValidFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawableStatsAttachmentBase::editHandleValid          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfValid, 
             this->getType().getFieldDesc(ValidFieldId)));

    editSField(ValidFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DrawableStatsAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<DrawableStatsAttachmentBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DrawableStatsAttachmentBase::createAspectCopy(void) const
{
    DrawableStatsAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DrawableStatsAttachment *>(this));

    return returnValue;
}
#endif

void DrawableStatsAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DrawableStatsAttachment *>::_type("DrawableStatsAttachmentPtr", "StatsAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DrawableStatsAttachment *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           DrawableStatsAttachment *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           DrawableStatsAttachment *, 
                           0);

OSG_END_NAMESPACE
