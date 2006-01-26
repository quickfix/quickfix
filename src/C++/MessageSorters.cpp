/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "MessageSorters.h"

namespace FIX
{
message_order::message_order( int first, ... )
: m_mode( group ), m_delim( 0 ), m_groupOrder( 0 ), m_largest( 0 )
{
  int field = first;
  int size = 0;

  va_list arguments;
  va_start( arguments, first );
  while( field != 0 )
  {
    size++;
    field = va_arg( arguments, int );
  }

  va_start( arguments, first );
  int* order = new int[size];
  order[0] = first;
  for ( int i = 1; i < size; ++i )
    order[ i ] = va_arg( arguments, int );
  setOrder(size, order);
  delete [] order;

  va_end( arguments );
}

message_order::message_order( const int order[] )
: m_mode( group ), m_delim( 0 ), m_groupOrder( 0 ), m_largest( 0 )
{
  int size = 0;
  while( order[size] != 0 ) { ++size; }
  setOrder(size, order);
}

message_order& message_order::operator=( const message_order& rhs )
{ QF_STACK_PUSH(message_order::operator=)

  m_mode = rhs.m_mode;
  m_delim = rhs.m_delim;
  m_largest = rhs.m_largest;
  if ( rhs.m_groupOrder )
  {
    if ( m_groupOrder ) delete [] m_groupOrder;
    m_groupOrder = new int[ m_largest + 1 ];
    memcpy( m_groupOrder, rhs.m_groupOrder,
            ( m_largest + 1 ) * sizeof( int ) );
  }
  return *this;

  QF_STACK_POP
}

void message_order::setOrder( int size, const int order[] )
{ QF_STACK_PUSH(message_order::operator=)

  if(size < 1) return;
  m_largest = m_delim = order[0];

  int* fields = new int[ size + 1 ];
  fields[ 1 ] = m_delim;
  // collect all fields and find the largest field number
  int i;
  for ( i = 2; i <= size; ++i )
  {
    int field = order[i-1];
    m_largest = m_largest > field ? m_largest : field;
    fields[ i ] = field;
  }

  // populate array with field number as key and position as value
  m_groupOrder = new int[ m_largest + 1 ];
  memset( m_groupOrder, 0, ( m_largest + 1 ) * sizeof( int ) );
  for ( i = 1; i <= size; ++i )
    m_groupOrder[ fields[ i ] ] = i;
  delete [] fields;

  QF_STACK_POP
}
}
