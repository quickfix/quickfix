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
#include <poll.h>
#endif

#include "SocketConnection.h"
#include "SocketAcceptor.h"
#include "SocketConnector.h"
#include "SocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
SocketConnection::SocketConnection(socket_handle s, Sessions sessions,
                                    SocketMonitor* pMonitor )
: m_socket( s ), m_sendLength( 0 ),
  m_sessions(sessions), m_pSession( 0 ), m_pMonitor( pMonitor )
{
#ifdef _MSC_VER
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
#endif
}

SocketConnection::SocketConnection( SocketInitiator& i,
                                    const SessionID& sessionID, socket_handle s,
                                    SocketMonitor* pMonitor )
: m_socket( s ), m_sendLength( 0 ),
  m_pSession( i.getSession( sessionID, *this ) ),
  m_pMonitor( pMonitor ) 
{
#ifdef _MSC_VER
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
#endif
  m_sessions.insert( sessionID );
}

SocketConnection::~SocketConnection()
{
  if ( m_pSession )
    Session::unregisterSession( m_pSession->getSessionID() );
}

bool SocketConnection::send( const std::string& msg )
{
  Locker l( m_mutex );

  m_sendQueue.push_back( msg );
  processQueue();
  signal();
  return true;
}

bool SocketConnection::processQueue()
{
  Locker l( m_mutex );

  if( !m_sendQueue.size() ) return true;

#ifdef _MSC_VER
  struct timeval timeout = { 0, 0 };
  fd_set writeset = m_fds;
  if( select( 0, 0, &writeset, 0, &timeout ) <= 0)
    return false;
#else
  struct pollfd pfd = { m_socket, POLLOUT, 0 };
  if ( poll( &pfd, 1, 0 ) <= 0 ) { return false; }
#endif

  const std::string& msg = m_sendQueue.front();

  ssize_t result = socket_send
    ( m_socket, msg.c_str() + m_sendLength, msg.length() - m_sendLength );

  if( result > 0 )
    m_sendLength += result;

  if( m_sendLength == msg.length() )
  {
    m_sendLength = 0;
    m_sendQueue.pop_front();
  }

  return !m_sendQueue.size();
}

void SocketConnection::disconnect()
{
  if ( m_pMonitor )
    m_pMonitor->drop( m_socket );
}

bool SocketConnection::read( SocketConnector& s )
{
  if ( !m_pSession ) return false;

  try
  {
    readFromSocket();
    readMessages( s.getMonitor() );
  }
  catch( SocketRecvFailed& e )
  {
    m_pSession->getLog()->onEvent( e.what() );
    return false;
  }
  return true;
}

bool SocketConnection::read( SocketAcceptor& a, SocketServer& s )
{
  std::string msg;
  try
  {
    if ( !m_pSession )
    {
#if _MSC_VER
      struct timeval timeout = { 1, 0 };
      fd_set readset = m_fds;
#else
      int timeout = 1000; // 1000ms = 1 second
      struct pollfd pfd = { m_socket, POLLIN | POLLPRI, 0 };
#endif

      while( !readMessage( msg ) )
      {
#if _MSC_VER
        int result = select( 0, &readset, 0, 0, &timeout );
#else
        int result = poll( &pfd, 1, timeout );
#endif
        if( result > 0 )
          readFromSocket();
        else if( result == 0 )
          return false;
        else if( result < 0 )
          return false;
      }

      m_pSession = Session::lookupSession( msg, true );
      if( !isValidSession() )
      {
        m_pSession = 0;
        if( a.getLog() )
        {
          a.getLog()->onEvent( "Session not found for incoming message: " + msg );
          a.getLog()->onIncoming( msg );
        }
      }
      if( m_pSession )
        m_pSession = a.getSession( msg, *this );
      if( m_pSession )
        m_pSession->next( msg, UtcTimeStamp::now() );
      if( !m_pSession )
      {
        s.getMonitor().drop( m_socket );
        return false;
      }

      Session::registerSession( m_pSession->getSessionID() );
      return true;
    }
    else
    {
      readFromSocket();
      readMessages( s.getMonitor() );
      return true;
    }
  }
  catch ( SocketRecvFailed& e )
  {
    if( m_pSession )
      m_pSession->getLog()->onEvent( e.what() );
    s.getMonitor().drop( m_socket );
  }
  catch ( InvalidMessage& )
  {
    s.getMonitor().drop( m_socket );
  }
  return false;
}

bool SocketConnection::isValidSession()
{
  if( m_pSession == 0 )
    return false;
  SessionID sessionID = m_pSession->getSessionID();
  if( Session::isSessionRegistered(sessionID) )
    return false;
  return !( m_sessions.find(sessionID) == m_sessions.end() );
}

void SocketConnection::readFromSocket()
EXCEPT ( SocketRecvFailed )
{
  ssize_t size = socket_recv( m_socket, m_buffer, sizeof(m_buffer) );
  if( size <= 0 ) throw SocketRecvFailed( size );
  m_parser.addToStream( m_buffer, size );
}

bool SocketConnection::readMessage( std::string& msg )
{
  try
  {
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;
}

void SocketConnection::readMessages( SocketMonitor& s )
{
  if( !m_pSession ) return;

  std::string msg;
  while( readMessage( msg ) )
  {
    try
    {
      m_pSession->next( msg, UtcTimeStamp::now() );
    }
    catch ( InvalidMessage& )
    {
      if( !m_pSession->isLoggedOn() )
        s.drop( m_socket );
    }
  }
}

void SocketConnection::onTimeout()
{
  if ( m_pSession ) m_pSession->next( UtcTimeStamp::now() );
}
} // namespace FIX
