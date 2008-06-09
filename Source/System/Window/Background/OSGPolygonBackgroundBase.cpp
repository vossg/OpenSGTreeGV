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
 **     class PolygonBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOLYGONBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Material Class

#include "OSGPolygonBackgroundBase.h"
#include "OSGPolygonBackground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonBackground
    A Background that renders a single polygon using the specified material.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Material *      PolygonBackgroundBase::_sfMaterial
    The material used to display.
*/

/*! \var Vec3f           PolygonBackgroundBase::_mfTexCoords
    The texture coordinates of the geometry to display.
*/

/*! \var Pnt2f           PolygonBackgroundBase::_mfPositions
    The positions of the geometry to display.
*/

/*! \var bool            PolygonBackgroundBase::_sfNormalizedX
    Define whether the x coordinates are normalized (0-1) or pixel-based.
*/

/*! \var bool            PolygonBackgroundBase::_sfNormalizedY
    Define whether the y coordinates are normalized (0-1) or pixel-based.
*/

/*! \var UInt16          PolygonBackgroundBase::_sfAspectHeight
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var UInt16          PolygonBackgroundBase::_sfAspectWidth
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var Real32          PolygonBackgroundBase::_sfScale
    Scale factor for zooming.
*/

/*! \var bool            PolygonBackgroundBase::_sfCleanup
    Clear depth/ stencil buffer after applying the material.
*/

/*! \var bool            PolygonBackgroundBase::_sfTile
    If true the image tiles in multi window settings.
*/


void PolygonBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecMaterialPtr::Description(
        SFUnrecMaterialPtr::getClassType(),
        "material",
        "The material used to display.\n",
        MaterialFieldId, MaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "texCoords",
        "The texture coordinates of the geometry to display.\n",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleTexCoords),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleTexCoords));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The positions of the geometry to display.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandlePositions),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandlePositions));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedX",
        "Define whether the x coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedXFieldId, NormalizedXFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleNormalizedX),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleNormalizedX));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedY",
        "Define whether the y coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedYFieldId, NormalizedYFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleNormalizedY),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleNormalizedY));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectHeight",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectHeightFieldId, AspectHeightFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleAspectHeight),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleAspectHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectWidth",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectWidthFieldId, AspectWidthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleAspectWidth),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleAspectWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "Scale factor for zooming.\n",
        ScaleFieldId, ScaleFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleScale),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "cleanup",
        "Clear depth/ stencil buffer after applying the material.\n",
        CleanupFieldId, CleanupFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleCleanup),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleCleanup));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "tile",
        "If true the image tiles in multi window settings.\n",
        TileFieldId, TileFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&PolygonBackground::editHandleTile),
        static_cast<FieldGetMethodSig >(&PolygonBackground::getHandleTile));

    oType.addInitialDesc(pDesc);
}


PolygonBackgroundBase::TypeObject PolygonBackgroundBase::_type(
    PolygonBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PolygonBackgroundBase::createEmptyLocal),
    PolygonBackground::initMethod,
    PolygonBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PolygonBackgroundBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "A Background that renders a single polygon using the specified material.\n"
    "\t<Field\n"
    "\t\tname=\"material\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe material used to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texCoords\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe texture coordinates of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe positions of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedX\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the x coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedY\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the y coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectHeight\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectWidth\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"scale\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tScale factor for zooming.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"cleanup\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tClear depth/ stencil buffer after applying the material.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tile\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true the image tiles in multi window settings.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A Background that renders a single polygon using the specified material.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 PolygonBackgroundBase::getContainerSize(void) const
{
    return sizeof(PolygonBackground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PolygonBackground::_sfMaterial field.
const SFUnrecMaterialPtr *PolygonBackgroundBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

SFUnrecMaterialPtr  *PolygonBackgroundBase::editSFMaterial       (void)
{
    editSField(MaterialFieldMask);

    return &_sfMaterial;
}

MFVec3f *PolygonBackgroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFVec3f *PolygonBackgroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}


MFPnt2f *PolygonBackgroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *PolygonBackgroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}


SFBool *PolygonBackgroundBase::editSFNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return &_sfNormalizedX;
}

const SFBool *PolygonBackgroundBase::getSFNormalizedX(void) const
{
    return &_sfNormalizedX;
}


SFBool *PolygonBackgroundBase::editSFNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return &_sfNormalizedY;
}

const SFBool *PolygonBackgroundBase::getSFNormalizedY(void) const
{
    return &_sfNormalizedY;
}


SFUInt16 *PolygonBackgroundBase::editSFAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return &_sfAspectHeight;
}

const SFUInt16 *PolygonBackgroundBase::getSFAspectHeight(void) const
{
    return &_sfAspectHeight;
}


SFUInt16 *PolygonBackgroundBase::editSFAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return &_sfAspectWidth;
}

const SFUInt16 *PolygonBackgroundBase::getSFAspectWidth(void) const
{
    return &_sfAspectWidth;
}


SFReal32 *PolygonBackgroundBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *PolygonBackgroundBase::getSFScale(void) const
{
    return &_sfScale;
}


SFBool *PolygonBackgroundBase::editSFCleanup(void)
{
    editSField(CleanupFieldMask);

    return &_sfCleanup;
}

const SFBool *PolygonBackgroundBase::getSFCleanup(void) const
{
    return &_sfCleanup;
}


SFBool *PolygonBackgroundBase::editSFTile(void)
{
    editSField(TileFieldMask);

    return &_sfTile;
}

const SFBool *PolygonBackgroundBase::getSFTile(void) const
{
    return &_sfTile;
}






/*------------------------------ access -----------------------------------*/

UInt32 PolygonBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        returnValue += _sfNormalizedX.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        returnValue += _sfNormalizedY.getBinSize();
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        returnValue += _sfAspectHeight.getBinSize();
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        returnValue += _sfAspectWidth.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        returnValue += _sfCleanup.getBinSize();
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        returnValue += _sfTile.getBinSize();
    }

    return returnValue;
}

void PolygonBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        _sfCleanup.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyToBin(pMem);
    }
}

void PolygonBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CleanupFieldMask & whichField))
    {
        _sfCleanup.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonBackgroundTransitPtr PolygonBackgroundBase::create(void)
{
    PolygonBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PolygonBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PolygonBackgroundTransitPtr PolygonBackgroundBase::createLocal(BitVector bFlags)
{
    PolygonBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PolygonBackground>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonBackground *PolygonBackgroundBase::createEmpty(void)
{
    PolygonBackground *returnValue;

    newPtr<PolygonBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

PolygonBackground *PolygonBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    PolygonBackground *returnValue;

    newPtr<PolygonBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonBackgroundBase::shallowCopy(void) const
{
    PolygonBackground *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const PolygonBackground *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr PolygonBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PolygonBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PolygonBackgroundBase::PolygonBackgroundBase(void) :
    Inherited(),
    _sfMaterial               (NULL),
    _mfTexCoords              (),
    _mfPositions              (),
    _sfNormalizedX            (bool(true)),
    _sfNormalizedY            (bool(true)),
    _sfAspectHeight           (UInt16(0)),
    _sfAspectWidth            (UInt16(0)),
    _sfScale                  (Real32(1.0)),
    _sfCleanup                (bool(true)),
    _sfTile                   (bool(true))
{
}

PolygonBackgroundBase::PolygonBackgroundBase(const PolygonBackgroundBase &source) :
    Inherited(source),
    _sfMaterial               (NULL),
    _mfTexCoords              (source._mfTexCoords              ),
    _mfPositions              (source._mfPositions              ),
    _sfNormalizedX            (source._sfNormalizedX            ),
    _sfNormalizedY            (source._sfNormalizedY            ),
    _sfAspectHeight           (source._sfAspectHeight           ),
    _sfAspectWidth            (source._sfAspectWidth            ),
    _sfScale                  (source._sfScale                  ),
    _sfCleanup                (source._sfCleanup                ),
    _sfTile                   (source._sfTile                   )
{
}


/*-------------------------- destructors ----------------------------------*/

PolygonBackgroundBase::~PolygonBackgroundBase(void)
{
}

void PolygonBackgroundBase::onCreate(const PolygonBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PolygonBackground *pThis = static_cast<PolygonBackground *>(this);

        pThis->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleMaterial        (void) const
{
    SFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecMaterialPtr::GetHandle(
             &_sfMaterial, 
             this->getType().getFieldDesc(MaterialFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleMaterial       (void)
{
    SFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecMaterialPtr::EditHandle(
             &_sfMaterial, 
             this->getType().getFieldDesc(MaterialFieldId)));

    returnValue->setSetMethod(boost::bind(&PolygonBackground::setMaterial, 
                                          static_cast<PolygonBackground *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleTexCoords       (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfTexCoords, 
             this->getType().getFieldDesc(TexCoordsFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleTexCoords      (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfTexCoords, 
             this->getType().getFieldDesc(TexCoordsFieldId)));

    editMField(TexCoordsFieldMask, _mfTexCoords);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandlePositions       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfPositions, 
             this->getType().getFieldDesc(PositionsFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandlePositions      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfPositions, 
             this->getType().getFieldDesc(PositionsFieldId)));

    editMField(PositionsFieldMask, _mfPositions);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleNormalizedX     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedX, 
             this->getType().getFieldDesc(NormalizedXFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleNormalizedX    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedX, 
             this->getType().getFieldDesc(NormalizedXFieldId)));

    editSField(NormalizedXFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleNormalizedY     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedY, 
             this->getType().getFieldDesc(NormalizedYFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleNormalizedY    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedY, 
             this->getType().getFieldDesc(NormalizedYFieldId)));

    editSField(NormalizedYFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleAspectHeight    (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectHeight, 
             this->getType().getFieldDesc(AspectHeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleAspectHeight   (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectHeight, 
             this->getType().getFieldDesc(AspectHeightFieldId)));

    editSField(AspectHeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleAspectWidth     (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectWidth, 
             this->getType().getFieldDesc(AspectWidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleAspectWidth    (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectWidth, 
             this->getType().getFieldDesc(AspectWidthFieldId)));

    editSField(AspectWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleScale           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScale, 
             this->getType().getFieldDesc(ScaleFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleScale          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScale, 
             this->getType().getFieldDesc(ScaleFieldId)));

    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleCleanup         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfCleanup, 
             this->getType().getFieldDesc(CleanupFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleCleanup        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfCleanup, 
             this->getType().getFieldDesc(CleanupFieldId)));

    editSField(CleanupFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBackgroundBase::getHandleTile            (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfTile, 
             this->getType().getFieldDesc(TileFieldId)));

    return returnValue;
}

EditFieldHandlePtr PolygonBackgroundBase::editHandleTile           (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfTile, 
             this->getType().getFieldDesc(TileFieldId)));

    editSField(TileFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PolygonBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PolygonBackgroundBase::createAspectCopy(void) const
{
    PolygonBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonBackground *>(this));

    return returnValue;
}
#endif

void PolygonBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PolygonBackground *>(this)->setMaterial(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfTexCoords.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPositions.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonBackground *>::_type("PolygonBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonBackground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           PolygonBackground *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           PolygonBackground *, 
                           0);

OSG_END_NAMESPACE
