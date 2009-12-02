/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright(C) 2000-2002 by the OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#ifndef OSG_EMBEDDED

#include "OSGGeometry.h"
#include "OSGPrimitiveIterator.h"

OSG_USING_NAMESPACE



/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PrimitiveIterator
    \ingroup GrpSystemDrawablesGeometryIterators
    
    Geometry Iterator for primitives. See \ref 
    PageSystemGeometryIterators for a description.

*/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)

/*! \var OSG::PrimitiveIterator::_geo;

    The geometry being iterated.
*/

/*! \var OSG::PrimitiveIterator::_ended;

    Flag whether the iterator has reached the end.
*/

/*! \var OSG::PrimitiveIterator::_primIndex;

    Index of the currently iterated primitive. Returned by getIndex().
*/

/*! \var OSG::PrimitiveIterator::_actPointIndex;

    The base of the indices used for this primitive.
*/

/*! \var OSG::PrimitiveIterator::_actPrimType;

    Type of the current primitive.
*/

/*! \var OSG::PrimitiveIterator::_actPrimLength;

    Length of the current primitive.
*/

/*! \var OSG::PrimitiveIterator::_types;

    Cache variable for quick access to the Types Property of the iterated
    OSG::Geometry.
*/

/*! \var OSG::PrimitiveIterator::_lengths;

    Cache variable for quick access to the Lengths Property of the iterated
    OSG::Geometry.
*/

#endif // only include in dev docs

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/

/*------------- constructors & destructors --------------------------------*/

PrimitiveIterator::PrimitiveIterator(void) :
    _geo                (      ), 
    _ended              (  true),
    _primIndex          (     0), 
    _actPointIndex      (     0),
    _actPrimType        (     0), 
    _actPrimLength      (     0),
    _types              (NULL  ), 
    _lengths            (NULL  )
{
    for(UInt32 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        _inds [i] = NULL;
        _props[i] = NULL;
    }
}

/*! This constructor creates an iterator for the given node. It is useful to
    create an iterator to be used to seek() to a specific indexed face. 
    Otherwise, use Geometry::beginPrimitives() resp. Geometry::endPrimitives()
    to create an iterator.
*/
PrimitiveIterator::PrimitiveIterator(Geometry const * geo) :
    _geo                (      ), 
    _ended              (  true),
    _primIndex          (     0), 
    _actPointIndex      (     0),
    _actPrimType        (     0), 
    _actPrimLength      (     0),
    _types              (NULL  ), 
    _lengths            (NULL  )
{
    for(UInt32 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        _inds [i] = NULL;
        _props[i] = NULL;
    }

    setGeo(geo);
}

/*! This constructor creates an iterator for the given Node, which has to have
    a Geometry core. It is useful to create an iterator to be used to seek()
    to a specific indexed face. Otherwise, use Geometry::beginPrimitives()
    resp. Geometry::endPrimitives() to create an iterator.
*/
PrimitiveIterator::PrimitiveIterator(Node * const geo) :
    _geo                (      ), 
    _ended              (  true),
    _primIndex          (     0), 
    _actPointIndex      (     0),
    _actPrimType        (     0), 
    _actPrimLength      (     0),
    _types              (NULL  ), 
    _lengths            (NULL  )
{
    for(UInt32 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        _inds [i] = NULL;
        _props[i] = NULL;
    }

    setGeo(geo);
}


PrimitiveIterator::PrimitiveIterator(const PrimitiveIterator &source) :
    _geo                (source._geo                ),
    _ended              (source._ended              ),
    _primIndex          (source._primIndex          ), 
    _actPointIndex      (source._actPointIndex      ),
    _actPrimType        (source._actPrimType        ), 
    _actPrimLength      (source._actPrimLength      ),  
    _types              (source._types              ), 
    _lengths            (source._lengths            ) 
{
    for(UInt16 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        _inds [i] = source._inds [i];
        _props[i] = source._props[i];
    }
}

PrimitiveIterator::~PrimitiveIterator(void)
{
}


/*------------------------------- Set -----------------------------------*/

/*! Switch the iterator to a new geometry. Automatically sets it to the
    beginning.
*/
void PrimitiveIterator::setGeo(Geometry const * geo)
{
    OSG_ASSERT(geo != NULL);

    _geo     = geo;
    _types   = geo->getTypes();
    _lengths = geo->getLengths();
    
    for(UInt16 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        _inds [i] = geo->getIndex(i);
        _props[i] = geo->getProperty(i);
    }
    
    setToBegin();
}


/*! Switch the iterator to a new geometry. Automatically sets it to the
    beginning.
*/
void PrimitiveIterator::setGeo(Node * const geo)
{
    Geometry *gc = dynamic_cast<Geometry *>(geo->getCore());
    
    if(gc == NULL)
    {
        FWARNING(("PrimitiveIterator::setGeo: called for NodePtr which "
                  "is not a Geometry!\n"));
    }
    else
    {
        setGeo(gc);
    }
}

/*---------------------------- Operators ---------------------------------*/

/*! Increment the iterator and move it to the next primitive. It does not
    change if it already is at the end.
    
    \dev Also updates the cache variables _actPointIndex, _actPrimType and
    _actPrimLength. \enddev
*/
void PrimitiveIterator::operator++()
{
    if(isAtEnd())
    {
        return;
    }

    _actPointIndex += _actPrimLength;
    
    ++_primIndex;

    if(_primIndex >= _types->getSize())
    {
        _ended = true;
    }
    else
    {
        _types->getValue(_actPrimType, _primIndex);
        if(_lengths != NULL)
        {
             _lengths->getValue(_actPrimLength, _primIndex);
        }
        else if (_geo->getIndex(Geometry::PositionsIndex) != NULL)
        {
            _actPrimLength = _geo->getIndex(
                                Geometry::PositionsIndex)->getSize();
        }
        else
        {
            _actPrimLength = _geo->getPositions()->getSize();
        }
    }
}

/*! Set the iterator to the beginning of the attached Geometry. Is primarily
    used by OSG::Geometry::beginPrimitives, but can also be used to quickly
    recycle an iterator.
*/
void PrimitiveIterator::setToBegin(void)
{
    _primIndex           = 0;
    _actPointIndex       = 0;
    _ended               = false;
                  
    if(_types != NULL && _types->getSize() > 0)
    {
        _types->getValue(_actPrimType, _primIndex);
        if(_lengths != NULL)
        {
             _lengths->getValue(_actPrimLength, _primIndex);
        }
        else if (_geo->getIndex(Geometry::PositionsIndex) != NULL)
        {
            _actPrimLength = _geo->getIndex(
                                Geometry::PositionsIndex)->getSize();
        }
        else
        {
            _actPrimLength = _geo->getPositions()->getSize();
        }
    }
    else
    {
        setToEnd();
    }
}

/*! Set the iterator to the end of the attached Geometry. Is primarily used by
    OSG::Geometry::endPrimitives, but can also be used to quickly recycle an
    iterator.
*/
void PrimitiveIterator::setToEnd(void)
{
    if(_types != NULL)
        _primIndex = _types->getSize();
    else
        _primIndex = 0;
    _actPointIndex = 0;
    _ended = true;
}

/*! Seek the iterator to a specific primitive indicated by its index. 

    This is primarily used in conjunction with 
    OSG::PrimitiveIterator::getIndex to record a position in the iteration and
    later return to it.
*/
void PrimitiveIterator::seek(Int32 index)
{   
    _actPointIndex = 0;
    _ended = false;

    if(index >= Int32(_types->getSize()))
    {
        _primIndex = _types->getSize();
        _ended = true;
    }
    else
    {
        _primIndex = osgMax(0, index);   
        
        for(UInt32 j = 0; j < _primIndex; j++)
            _actPointIndex += _lengths->getValue<UInt32>(j);
            
        _types->getValue(_actPrimType, _primIndex);
        _lengths->getValue(_actPrimLength, _primIndex);
    }
}

/*-------------------------- assignment -----------------------------------*/

PrimitiveIterator& PrimitiveIterator::operator =(const PrimitiveIterator &source)
{
    if(this == &source)
        return *this;
    
    this->_geo                  = source._geo;
    this->_primIndex            = source._primIndex;
    this->_actPrimType          = source._actPrimType;
    this->_actPrimLength        = source._actPrimLength;
    this->_actPointIndex        = source._actPointIndex;
    this->_types                = source._types;
    this->_lengths              = source._lengths;
    this->_ended                = source._ended;
    
    for(UInt16 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        this->_inds [i] = source._inds [i];
        this->_props[i] = source._props[i];
    }

    return *this;
}

/*-------------------------- comparison -----------------------------------*/

/*! Compare two iterators. If the iterators are attached to different
    geometries a comparison in senseless, in that case false will be returned.
*/
bool PrimitiveIterator::operator <(const PrimitiveIterator &other) const
{
    return _geo       == other._geo &&
           _primIndex <= other._primIndex;
}

/*! Compare two iterators. If the iterators are attached to different
    geometries a comparison in senseless, in that case false will be returned.
*/
bool PrimitiveIterator::operator ==(const PrimitiveIterator &other) const
{
    return _ended     == other._ended &&
           _geo       == other._geo &&
           _primIndex == other._primIndex;
}

/*! Compare two iterators. If the iterators are attached to different
    geometries a comparison in senseless, in that case false will be returned.
*/
bool PrimitiveIterator::operator !=(const PrimitiveIterator &other) const
{
    return !(*this == other);
}

#endif
