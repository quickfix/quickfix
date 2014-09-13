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

  std::pair<int, int> sockets = socket_createpair();
  m_signal = sockets.first;
  m_interrupt = sockets.second;
  socket_setnonblock( m_signal );
  socket_setnonblock( m_interrupt );
  m_readSockets.insert( m_interrupt );

  m_timeval.tv_sec = 0;
  m_timeval.tv_usec = 0;
#ifndef SELECT_DECREMENTS_TIME
  m_ticks = clock();
#endif
}

SocketMonitor::~SocketMonitor()
{
  Sockets::iterator i;
  for ( i = m_readSockets.begin(); i != m_readSockets.end(); ++i ) {
    socket_close( *i );
  }

  socket_close( m_signal );
  socket_term();
}

bool SocketMonitor::addConnect( int s )
{
  socket_setnonblock( s );
  Sockets::iterator i = m_connectSockets.find( s );
  if( i != m_connectSockets.end() ) return false;

  m_connectSockets.insert( s );
  return true;
}

bool SocketMonitor::addRead( int s )
{
  socket_setnonblock( s );
  Sockets::iterator i = m_readSockets.find( s );
  if( i != m_readSockets.end() ) return false;

  m_readSockets.insert( s );
  return true;
}

bool SocketMonitor::addWrite( int s )
{
  if( m_readSockets.find(s) == m_readSockets.end() )
    return false;

  socket_setnonblock( s );
  Sockets::iterator i = m_writeSockets.find( s );
  if( i != m_writeSockets.end() ) return false;

  m_writeSockets.insert( s );
  return true;
}

bool SocketMonitor::drop( int s )
{
  Sockets::iterator i = m_readSockets.find( s );
  Sockets::iterator j = m_writeSockets.find( s );
  Sockets::iterator k = m_connectSockets.find( s );

  if ( i != m_readSockets.end() || 
       j != m_writeSockets.end() ||
       k != m_connectSockets.end() )
  {
    socket_close( s );
    m_readSockets.erase( s );
    m_writeSockets.erase( s );
    m_connectSockets.erase( s );
    m_dropped.push( s );
    return true;
  }
  return false;
}

inline timeval* SocketMonitor::getTimeval( bool poll, double timeout )
{
  if ( poll )
  {
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = 0;
    return &m_timeval;
  }

  timeout = m_timeout;

  if ( !timeout )
    return 0;
#ifdef SELECT_MODIFIES_TIMEVAL
  if ( !m_timeval.tv_sec && !m_timeval.tv_usec && timeout )
    m_timeval.tv_sec = timeout;
  return &m_timeval;
#else
double elapsed = ( double ) ( clock() - m_ticks ) / ( double ) CLOCKS_PER_SEC;
  if ( elapsed >= timeout || elapsed == 0.0 )
  {
    m_ticks = clock();
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = (timeout * 1000000);
  }
  else
  {
    m_timeval.tv_sec = 0;
    m_timeval.tv_usec = ( ( timeout - elapsed ) * 1000000 );
  }
  return &m_timeval;
#endif
}

bool SocketMonitor::sleepIfEmpty( bool poll )
{
  if( poll )
    return false;

  if ( m_readSockets.empty() && 
       m_writeSockets.empty() &&
       m_connectSockets.empty() )
  {
    process_sleep( m_timeout );
    return true;
  }
  else
    return false;
}

void SocketMonitor::signal( int socket )
{
  socket_send( m_signal, (char*)&socket, sizeof(socket) );
}

void SocketMonitor::unsignal( int s )
{
  Sockets::iterator i = m_writeSockets.find( s );
  if( i == m_writeSockets.end() ) return;

  m_writeSockets.erase( s );
}

void SocketMonitor::block( Strategy& strategy, bool poll, double timeout )
{
  while ( m_dropped.size() )
  {
    strategy.onError( *this, m_dropped.front() );
    m_dropped.pop();
    if ( m_dropped.size() == 0 )
      return ;
  }

  fd_set readSet;
  FD_ZERO( &readSet );
  buildSet( m_readSockets, readSet );
  fd_set writeSet;
  FD_ZERO( &writeSet );
  buildSet( m_connectSockets, writeSet );
  buildSet( m_writeSockets, writeSet );
  fd_set exceptSet;
  FD_ZERO( &exceptSet );
  buildSet( m_connectSockets, exceptSet );

  if ( sleepIfEmpty(poll) )
  {
    strategy.onTimeout( *this );
    return;
  }

  int result = select( FD_SETSIZE, &readSet, &writeSet, &exceptSet, getTimeval(poll, timeout) );

  if ( result == 0 )
  {
    strategy.onTimeout( *this );
    return;
  }
  else if ( result > 0 )
  {
    processExceptSet( strategy, exceptSet );
    processWriteSet( strategy, writeSet );
    processReadSet( strategy, readSet );
  }
  else
  {
    strategy.onError( *this );
  }
}

void SocketMonitor::processReadSet( Strategy& strategy, fd_set& readSet )
{
#ifdef _MSC_VER
  for ( unsigned i = 0; i < readSet.fd_count; ++i )
  {
    int s = readSet.fd_array[ i ];
    if( s == m_interrupt )
    {
      int socket = 0;
      recv( s, (char*)&socket, sizeof(socket), 0 );
      addWrite( socket );
    }
    else
    {
      strategy.onEvent( *this, s );
    }
  }
#else
    Sockets::iterator i;
    Sockets sockets = m_readSockets;
    for ( i = sockets.begin(); i != sockets.end(); ++i )
    {
      int s = *i;
      if ( !FD_ISSET( *i, &readSet ) )
        continue;
      if( s == m_interrupt )
      {
        int socket = 0;
        recv( s, (char*)&socket, sizeof(socket), 0 );
        addWrite( socket );
      }
      else
      {
        strategy.onEvent( *this, s );
      }
    }
#endif
}

void SocketMonitor::processWriteSet( Strategy& strategy, fd_set& writeSet )
{
#ifdef _MSC_VER
  for ( unsigned i = 0; i < writeSet.fd_count; ++i )
  {
    int s = writeSet.fd_array[ i ];
    if( m_connectSockets.find(s) != m_connectSockets.end() )
    {
      m_connectSockets.erase( s );
      m_readSockets.insert( s );
      strategy.onConnect( *this, s );
    }
    else
    {
      strategy.onWrite( *this, s );
    }
  }
#else
  Sockets::iterator i;
  Sockets sockets = m_connectSockets;
  for( i = sockets.begin(); i != sockets.end(); ++i )
  {
    int s = *i;
    if ( !FD_ISSET( *i, &writeSet ) )
      continue;
    m_connectSockets.erase( s );
    m_readSockets.insert( s );
    strategy.onConnect( *this, s );
  }

  sockets = m_writeSockets;
  for( i = sockets.begin(); i != sockets.end(); ++i )
  {
    int s = *i;
    if ( !FD_ISSET( *i, &writeSet ) )
      continue;
    strategy.onWrite( *this, s );
  }
#endif
}

void SocketMonitor::processExceptSet( Strategy& strategy, fd_set& exceptSet )
{
#ifdef _MSC_VER
  for ( unsigned i = 0; i < exceptSet.fd_count; ++i )
  {
    int s = exceptSet.fd_array[ i ];
    strategy.onError( *this, s );
  }
#else
    Sockets::iterator i;
    Sockets sockets = m_connectSockets;
    for ( i = sockets.begin(); i != sockets.end(); ++i )
    {
      int s = *i;
      if ( !FD_ISSET( *i, &exceptSet ) )
        continue;
      strategy.onError( *this, s );
    }
#endif
}

void SocketMonitor::buildSet( const Sockets& sockets, fd_set& watchSet )
{
  Sockets::const_iterator iter;
  for ( iter = sockets.begin(); iter != sockets.end(); ++iter ) {
    FD_SET( *iter, &watchSet );
  }
}
}
