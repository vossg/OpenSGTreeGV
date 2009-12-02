/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright(C) 2000-2002 by the OpenSG Forum                    *
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
#include "OSGTriangleIterator.h"
#include "OSGGLEXT.h"

OSG_USING_NAMESPACE


/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TriangleIterator
    \ingroup GrpSystemDrawablesGeometryIterators
    
The TriangleIterator iterates through the geometry one triangle at a
time. See \ref PageSystemTriangleIterator for details.

\sa PrimitiveIterator FaceIterator

*/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)

/*! \var OSG::TriangleIterator::_triIndex

    Running index of the triangles iterated.
*/

/*! \var OSG::TriangleIterator::_actPrimIndex

    Index of the next point to use in the current primitive.
*/

/*! \var OSG::TriangleIterator::_triPntIndex

    The vertex indices of the current triangle.
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

TriangleIterator::TriangleIterator(void) : PrimitiveIterator(),
    _triIndex(0), _actPrimIndex(0)
{
    _triPntIndex[0] = 0;
    _triPntIndex[1] = 0;
    _triPntIndex[2] = 0;
}

TriangleIterator::TriangleIterator(const TriangleIterator &source) : 
    PrimitiveIterator(source),
    _triIndex(source._triIndex), _actPrimIndex(source._actPrimIndex)
{
    _triPntIndex[0] = source._triPntIndex[0];
    _triPntIndex[1] = source._triPntIndex[1];
    _triPntIndex[2] = source._triPntIndex[2];
}


/*! This constructor creates an iterator for the given geometry. It is useful
    to create an iterator to be used to seek() to a specific indexed face. 
    Otherwise, use OSG::Geometry::beginTriangles() resp. 
    OSG::Geometry::endTriangles() to create an iterator.
*/
TriangleIterator::TriangleIterator(Geometry const * geo) :
    PrimitiveIterator(),
    _triIndex(0), _actPrimIndex(0)
{
    _triPntIndex[0] = 0;
    _triPntIndex[1] = 0;
    _triPntIndex[2] = 0;

    setGeo(geo);
}


/*! This constructor creates an iterator for the given node. It is useful to
    create an iterator to be used to seek() to a specific indexed face. 
    Otherwise, use OSG::Geometry::beginTriangles() resp. 
    OSG::Geometry::endTriangles() to create an iterator.
*/

TriangleIterator::TriangleIterator(Node * const geo) : 
    PrimitiveIterator(),
    _triIndex(0), _actPrimIndex(0)
{
    _triPntIndex[0] = 0;
    _triPntIndex[1] = 0;
    _triPntIndex[2] = 0;

    setGeo(geo);
}


TriangleIterator::~TriangleIterator(void)
{
}

/*--------------------------- Operators ----------------------------------*/

/*! The increment operator steps the iterator to the next triangle. If it is
    already beyond the last triangle it does not change.
*/
void TriangleIterator::operator++()
{
    // already at end?
    if(isAtEnd())
        return;
    
    ++_triIndex;

    // at end of primitive?
    if(_actPrimIndex >= getLength())
    {
        ++(static_cast<PrimitiveIterator&>(*this));      
        startPrim();
        
        return;
    }

    switch(getType())
    {
    case GL_TRIANGLES:      _triPntIndex[0] = _actPrimIndex++;
                            _triPntIndex[1] = _actPrimIndex++;
                            _triPntIndex[2] = _actPrimIndex++;
                            break;
    case GL_QUAD_STRIP:
    case GL_TRIANGLE_STRIP: if(_actPrimIndex & 1)
                            {
                                _triPntIndex[0] = _triPntIndex[2];
                            }
                            else
                            {
                                _triPntIndex[1] = _triPntIndex[2];
                            }                           
                            _triPntIndex[2] = _actPrimIndex++;
                            
                            if(getPositionIndex(0) == getPositionIndex(1) ||
                               getPositionIndex(0) == getPositionIndex(2) ||
                               getPositionIndex(1) == getPositionIndex(2))
                            {
                                --_triIndex;
                                ++(*this);
                            }
                               
                            break;
    case GL_POLYGON:
    case GL_TRIANGLE_FAN:   _triPntIndex[1] = _triPntIndex[2];
                            _triPntIndex[2] = _actPrimIndex++;
                            break;
    case GL_QUADS:          if(_actPrimIndex & 1)
                            {
                                _triPntIndex[1] = _triPntIndex[2];
                                _triPntIndex[2] = _actPrimIndex++;
                            }
                            else
                            {
                                _triPntIndex[0] = _actPrimIndex++;
                                _triPntIndex[1] = _actPrimIndex++;
                                _triPntIndex[2] = _actPrimIndex++;
                            }                           
                            break;
    default:                SWARNING << "TriangleIterator::++: encountered " 
                                      << "unknown primitive type " 
                                      << getType()
                                      << ", ignoring!" << std::endl;
                            startPrim();
                            break;
    }           
}


/*! Helper function to reset all state to the beginning of a new primitive.
    Also skips non-polygonal primitives(lines, points) and primitives with less
    than 3 points.
*/
void TriangleIterator::startPrim(void)
{
    // already at end?
    if(isAtEnd())
        return;
        
    _triPntIndex[0] = 0;
    _triPntIndex[1] = 1;
    _triPntIndex[2] = 2;
    _actPrimIndex = 3;
    
    // loop until you find a useful primitive or run out
    while(! isAtEnd())
    {
        switch(getType())
        {
        case GL_POINTS:         // non-polygon types: ignored
        case GL_LINES:
        case GL_LINE_STRIP: 
        case GL_LINE_LOOP:  
                                break;
        case GL_TRIANGLES:      // polygon types
        case GL_TRIANGLE_STRIP:
        case GL_TRIANGLE_FAN:
        case GL_QUADS:
        case GL_QUAD_STRIP:
        case GL_POLYGON:        if(getLength() >= 3)
                                    return;
                                break;
        default:                SWARNING << "TriangleIterator::startPrim: "
                                          << "encountered " 
                                          << "unknown primitive type " 
                                          << getType()
                                          << ", ignoring!" << std::endl;
                                break;
        }
        
        ++(static_cast<PrimitiveIterator&>(*this));
    }           
}


/*! Seek the iterator to a specific triangle indicated by its index. 

    This is primarily used in conjunction with 
    OSG::TriangleIterator::getIndex to record a position in the iteration and
    later return to it.
*/
void TriangleIterator::seek(Int32 index)
{
    setToBegin();
    
    while(getIndex() != index)
        ++(*this);
}


/*! Set the iterator to the beginning of the attached Geometry. Is primarily
    used by OSG::Geometry::beginTriangles, but can also be used to quickly
    recycle an iterator.
*/
void TriangleIterator::setToBegin(void)
{
    PrimitiveIterator::setToBegin();
    _triIndex = 0;
    startPrim();
}

/*! Set the iterator to the end of the attached Geometry. Is primarily used by
    OSG::Geometry::endTriangles, but can also be used to quickly recycle an
    iterator.
*/
void TriangleIterator::setToEnd(void)
{
    PrimitiveIterator::setToEnd();
    _actPrimIndex = 0;
}

/*-------------------------- assignment -----------------------------------*/

TriangleIterator& TriangleIterator::operator =(const TriangleIterator &source)
{
    if(this == &source)
        return *this;

    *static_cast<Inherited *>(this) = source;
    
    this->_triIndex         = source._triIndex;
    this->_actPrimIndex     = source._actPrimIndex;
    this->_triPntIndex[0]   = source._triPntIndex[0];
    this->_triPntIndex[1]   = source._triPntIndex[1];
    this->_triPntIndex[2]   = source._triPntIndex[2];

    return *this;
}

/*-------------------------- comparison -----------------------------------*/

bool TriangleIterator::operator <(const TriangleIterator &other) const
{
    return 
          (*static_cast<const Inherited *>(this) <  other) ||
        ( (*static_cast<const Inherited *>(this) == other)             &&
          _actPrimIndex                          <  other._actPrimIndex);
}

bool TriangleIterator::operator ==(const TriangleIterator &other) const
{
    if(isAtEnd() && other.isAtEnd())
        return true;

    if(isAtEnd() || other.isAtEnd())
        return false;

    return 
        (*static_cast<const Inherited *>(this) == other              ) &&
        _actPrimIndex                          == other._actPrimIndex;
}

bool TriangleIterator::operator !=(const TriangleIterator &other) const
{
    return !(*this == other);
}

#endif
