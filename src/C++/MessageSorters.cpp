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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageSorters.h"

#include <string.h>

namespace FIX
{
message_order::message_order( int first, ... )
: m_mode( group ), m_delim( 0 ), m_largest( 0 )
{
  int field = first;
  int size = 0;
  m_largest = m_delim = first;

  va_list arguments;
  va_start( arguments, first );
  while( field != 0 )
  {
      m_largest = m_largest > field ? m_largest : field;
      
      size++;
      field = va_arg( arguments, int );
  }

  if(size)
  {
      m_groupOrder = shared_array<int>::create(m_largest + 1);

      va_start( arguments, first );
      field = first;
      int i = 0;
      while( field != 0 )
      {
          m_groupOrder[ field ] = ++i;
          field = va_arg( arguments, int );
      }
  }
  else
  {
      m_largest = 0;
      m_delim = 0;
  }

  va_end( arguments );
}

message_order::message_order( const int order[] )
: m_mode( group ), m_delim( 0 ), m_largest( 0 )
{
  int size = 0;
  while( order[size] != 0 ) { ++size; }
  setOrder(size, order);
}

message_order& message_order::operator=( const message_order& rhs )
{
  m_mode = rhs.m_mode;
  m_delim = rhs.m_delim;
  m_largest = rhs.m_largest;
  m_groupOrder = rhs.m_groupOrder;

  return *this;
}

void message_order::setOrder( int size, const int order[] )
{
  if(size < 1) return;
  m_largest = m_delim = order[0];

  // collect all fields and find the largest field number
  for (int i = 1; i < size; ++i )
  {
      int field = order[i];
      m_largest = m_largest > field ? m_largest : field;
  }

  m_groupOrder = shared_array<int>::create(m_largest + 1);
  for (int i = 0; i < size; ++i )
      m_groupOrder[ order[ i ] ] = i + 1;
}
}
