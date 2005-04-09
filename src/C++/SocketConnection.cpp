/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#include "SocketConnection.h"
#include "SocketAcceptor.h"
#include "SocketConnector.h"
#include "SocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
SocketConnection::SocketConnection( int s, SocketMonitor* pMonitor )
: m_socket( s ), m_pSession( 0 ), m_pMonitor( pMonitor ) {}

SocketConnection::SocketConnection( SocketInitiator& i,
                                    const SessionID& sessionID, int s,
                                    SocketMonitor* pMonitor )
: m_socket( s ),
  m_pSession( i.getSession( sessionID, *this ) ),
  m_pMonitor( pMonitor ) {}

SocketConnection::~SocketConnection()
{
  if ( m_pSession )
    Session::unregisterSession( m_pSession->getSessionID() );
}

bool SocketConnection::send( const std::string& msg )
{ QF_STACK_PUSH(SocketConnection::send)
  return socket_send( m_socket, msg.c_str(), msg.length() );
  QF_STACK_POP
}

void SocketConnection::disconnect()
{ QF_STACK_PUSH(SocketConnection::disconnect)

  if ( m_pMonitor )
    m_pMonitor->drop( m_socket );

  QF_STACK_POP
}

bool SocketConnection::read( SocketConnector& s )
{ QF_STACK_PUSH(SocketConnection::read)

  if ( !m_pSession ) return false;

  std::string msg;
  try
  {
    if ( !readMessage( msg ) ) return false;

    m_pSession->next( msg );
  } 
  catch( SocketRecvFailed& e )
  {
    if( m_pSession )
      m_pSession->getLog()->onEvent( e.what() );
    s.getMonitor().drop( m_socket );
  }
  catch ( InvalidMessage& e )
  {
    if ( !m_pSession || (m_pSession && !m_pSession->isLoggedOn()) )
    {
      if( m_pSession )
        m_pSession->getLog()->onEvent( e.what() );
      s.getMonitor().drop( m_socket );
    }
  }
  return true;

  QF_STACK_POP
}

bool SocketConnection::read( SocketAcceptor& a, SocketServer& s )
{ QF_STACK_PUSH(SocketConnection::read)

  std::string msg;
  try
  {
    if ( !readMessage( msg ) ) return false;

    if ( !m_pSession )
    {
      m_pSession = Session::lookupSession( msg, true );
      if ( m_pSession ) 
        m_pSession = Session::registerSession( m_pSession->getSessionID() );
      if ( m_pSession ) 
        m_pSession = a.getSession( msg, *this );
    }

    if ( m_pSession )
      m_pSession->next( msg );
    else
      s.getMonitor().drop( m_socket );
    return true;
  }
  catch ( SocketRecvFailed& e )
  {
    if( m_pSession )
      m_pSession->getLog()->onEvent( e.what() );
    s.getMonitor().drop( m_socket );
  }
  catch ( InvalidMessage& )
  {
    if ( !m_pSession || !m_pSession->isLoggedOn() )
      s.getMonitor().drop( m_socket );
  }
  return false;

  QF_STACK_POP
}

bool SocketConnection::readMessage( std::string& msg )
throw( SocketRecvFailed )
{ QF_STACK_PUSH(SocketConnection::readMessage)

  int size = recv( m_socket, m_buffer, 4095, 0 );
  if( size <= 0 ) 
    throw SocketRecvFailed( size );

  m_buffer[ size ] = '\0';

  try
  {
    m_parser.addToStream( m_buffer, size );
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;

  QF_STACK_POP
}

void SocketConnection::onTimeout()
{ QF_STACK_PUSH(SocketConnection::onTimeout)
  if ( m_pSession ) m_pSession->next();
  QF_STACK_POP
}
} // namespace FIX
