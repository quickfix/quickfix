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
#include "CallStack.h"

#include "SocketMonitor.h"
#include "Utility.h"
#include <exception>
#include <set>
#include <algorithm>
#include <iostream>

namespace FIX
{
SocketMonitor::SocketMonitor( int timeout )
: m_timeout( timeout )
{
  socket_init();

  m_timeval.tv_sec = 0;
  m_timeval.tv_usec = 0;
#ifndef SELECT_DECREMENTS_TIME
  m_ticks = clock();
#endif
}

SocketMonitor::~SocketMonitor()
{
  Sockets::iterator i;
  for ( i = m_sockets.begin(); i != m_sockets.end(); ++i )
    socket_close( *i );

  socket_term();
}

bool SocketMonitor::add( int s )
{ QF_STACK_PUSH(SocketMonitor::add)

  Sockets::iterator i = m_sockets.find( s );
  if ( i == m_sockets.end() )
  {
    m_sockets.insert( s );
    return true;
  }
  else
    return false;

  QF_STACK_POP
}

bool SocketMonitor::drop( int s )
{ QF_STACK_PUSH(SocketMonitor::drop)

  Sockets::iterator i = m_sockets.find( s );
  if ( i != m_sockets.end() )
  {
    socket_close( s );
    m_sockets.erase( s );
    m_dropped.push( s );
    return true;
  }
  return false;

  QF_STACK_POP
}

inline timeval* SocketMonitor::getTimeval( bool poll )
{ QF_STACK_PUSH(SocketMonitor::getTimeval)

  if ( poll )
  {
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = 0;
    return &m_timeval;
  }

  if ( !m_timeout )
    return 0;
#ifdef SELECT_MODIFIES_TIMEVAL
  if ( !m_timeval.tv_sec && !m_timeval.tv_usec && m_timeout )
    m_timeval.tv_sec = m_timeout;
  return &m_timeval;
#else
double elapsed = ( double ) ( clock() - m_ticks ) / ( double ) CLOCKS_PER_SEC;
  if ( elapsed >= m_timeout || elapsed == 0.0 )
  {
    m_ticks = clock();
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = m_timeout * 1000000;
  }
  else
  {
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = ( long ) ( ( m_timeout - elapsed ) * 1000000 );
  }
  return &m_timeval;
#endif

  QF_STACK_POP
}

bool SocketMonitor::sleepIfEmpty( bool poll )
{ QF_STACK_PUSH(SocketMonitor::sleepIfEmpty)
  
  if( poll )
    return false;

  if ( m_sockets.empty() )
  {
    process_sleep( m_timeout );
    return true;
  }
  else
    return false;

  QF_STACK_POP
}

void SocketMonitor::block( Strategy& strategy, bool poll )
{ QF_STACK_PUSH(SocketMonitor::block)

  while ( m_dropped.size() )
  {
    strategy.onError( *this, m_dropped.front() );
    m_dropped.pop();
    if ( m_dropped.size() == 0 )
      return ;
  }

  fd_set watchSet;
  buildSet( watchSet );

  if ( sleepIfEmpty(poll) )
  {
    strategy.onTimeout( *this );
    return ;
  }

  int result = select( FD_SETSIZE, &watchSet, 0, 0, getTimeval(poll) );

  if ( result == 0 )
  {
    strategy.onTimeout( *this );
    return ;
  }
  else if ( result > 0 )
  {
#ifdef _MSC_VER
    for ( unsigned i = 0; i < watchSet.fd_count; ++i )
    {
      int s = watchSet.fd_array[ i ];
#else
    Sockets::iterator i;
    Sockets sockets = m_sockets;
    for ( i = sockets.begin(); i != sockets.end(); ++i )
    {
      int s = *i;
      if ( !FD_ISSET( *i, &watchSet ) )
        continue;
#endif
      strategy.onEvent( *this, s );
    }
#ifdef _MSC_VER 
    // need this for emacs to format correctly
  }
#else
  }
  else if ( errno == EBADF )
  {
    Sockets::iterator i;
    for ( i = m_sockets.begin(); i != m_sockets.end(); ++i )
    {
      if ( socket_isBad( *i ) )
      {
        m_sockets.erase( *i );
        strategy.onError( *this, *i );
      }
    }
    return ;
  }
#endif
  else
    strategy.onError( *this );

  QF_STACK_POP
}

void SocketMonitor::buildSet( fd_set& watchSet )
{ QF_STACK_PUSH(SocketMonitor::buildSet)

  FD_ZERO( &watchSet );
  Sockets::iterator iter;
  for ( iter = m_sockets.begin(); iter != m_sockets.end(); ++iter ) {
    FD_SET( *iter, &watchSet );
  }

  QF_STACK_POP
}
}
