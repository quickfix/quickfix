/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_MESSAGESORTERS_H
#define FIX_MESSAGESORTERS_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "FieldNumbers.h"
#include "SharedArray.h"
#include <stdarg.h>
#include <functional>
#include <map>

namespace FIX
{
/// Sorts fields in correct header order.
struct header_order
{
  static bool compare( const int x, const int y )
  {
    int orderedX = getOrderedPosition( x );
    int orderedY = getOrderedPosition( y );

    if ( orderedX && orderedY )
      return orderedX < orderedY;
    else
      if ( orderedX )
        return true;
      else
        if ( orderedY )
          return false;
        else
          return x < y;
  }

  static int getOrderedPosition( const int field )
  {
    switch ( field )
    {
      case FIELD::BeginString: return 1;
      case FIELD::BodyLength: return 2;
      case FIELD::MsgType: return 3;
      default: return 0;
    };
  }
};

/// Sorts fields in correct trailer order.
struct trailer_order
{
  static bool compare( const int x, const int y )
  {
    if ( x == FIELD::CheckSum ) return false;
    else
      if ( y == FIELD::CheckSum ) return true;
      else return x < y;
  }
};

/// Sorts fields in correct group order
struct group_order
{
  static bool compare( const int x, const int y, int* order, int largest )
  {
    if ( x <= largest && y <= largest )
    {
      int iX = order[ x ];
      int iY = order[ y ];
      if ( iX == 0 && iY == 0 )
        return x < y;
      else if ( iX == 0 )
        return false;
      else if ( iY == 0 )
        return true;
      else
        return iX < iY;
    }
    else if ( x <= largest ) return true;
    else if ( y <= largest ) return false;
    else return x < y;
  }
};

typedef std::less < int > normal_order;

/**
 * Sorts fields in header, normal, or trailer order.
 *
 * Used as a dynamic sorter to create Header, Trailer, and Message
 * FieldMaps while maintaining the same base type.
 */
struct message_order
{
public:
  enum cmp_mode { header, trailer, normal, group };

  message_order( cmp_mode mode = normal ) 
    : m_mode( mode ), m_delim( 0 ), m_largest( 0 ) {}
  message_order( int first, ... );
  message_order( const int order[] );
  message_order( const message_order& copy ) 
  { *this = copy; }

  bool operator() ( const int x, const int y ) const
  {
    switch ( m_mode )
    {
      case header:
      return header_order::compare( x, y );
      case trailer:
      return trailer_order::compare( x, y );
      case group:
      return group_order::compare( x, y, m_groupOrder, m_largest );
      case normal: default:
      return x < y;
    }
  }

  message_order& operator=( const message_order& rhs );

  operator bool() const
  { return !m_groupOrder.empty(); }

private:
  void setOrder( int size, const int order[] );

  cmp_mode m_mode;
  int m_delim;
  shared_array<int> m_groupOrder;
  int m_largest;
};
}

#endif //FIX_MESSAGESORTERS_H

