
/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageSorters.h"

namespace FIX
{
message_order::message_order( int size, ... )
    : m_mode( group ), m_delim( 0 ), m_groupOrder( 0 ), m_largest( 0 )
{
  if ( size < 1 ) return ;

  va_list arguments;
  va_start( arguments, size );

  int* order = new int[size];
  for ( int i = 0; i < size; ++i )
    order[ i ] = va_arg( arguments, int );  
  setOrder(size, order);
  delete [] order;

  va_end( arguments );
}

message_order::message_order( int size, const int order[] )
    : m_mode( group ), m_delim( 0 ), m_groupOrder( 0 ), m_largest( 0 )
{
  setOrder(size, order);
}

message_order& message_order::operator=( const message_order& rhs )
{
  m_mode = rhs.m_mode;
  m_delim = rhs.m_delim;
  m_largest = rhs.m_largest;
  if ( rhs.m_groupOrder )
  {
    if ( m_groupOrder ) delete [] m_groupOrder;
    m_groupOrder = new int[ m_largest + 1 ];
    memcpy( m_groupOrder, rhs.m_groupOrder, ( m_largest + 1 ) * sizeof( int ) );
  }
  return *this;
}

void message_order::setOrder( int size, const int order[] )
{
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
}
}
