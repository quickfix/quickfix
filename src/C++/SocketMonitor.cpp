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
