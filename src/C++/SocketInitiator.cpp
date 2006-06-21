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

#include "SocketInitiator.h"
#include "Session.h"
#include "Settings.h"

namespace FIX
{
SocketInitiator::SocketInitiator( Application& application,
                                  MessageStoreFactory& factory,
                                  const SessionSettings& settings )
throw( ConfigError )
: Initiator( application, factory, settings ),
  m_connector( 1 ), m_lastConnect( 0 ),
  m_reconnectInterval( 30 ), m_noDelay( false ) {}

SocketInitiator::SocketInitiator( Application& application,
                                  MessageStoreFactory& factory,
                                  const SessionSettings& settings,
                                  LogFactory& logFactory )
throw( ConfigError )
: Initiator( application, factory, settings, logFactory ),
  m_connector( 1 ), m_lastConnect( 0 ),
  m_reconnectInterval( 30 ), m_noDelay( false ) {}

SocketInitiator::~SocketInitiator()
{
  for (SocketConnections::iterator i = m_connections.begin();
       i != m_connections.end(); ++i)
    delete i->second;

  for (SocketConnections::iterator i = m_pendingConnections.begin();
       i != m_pendingConnections.end(); ++i)
    delete i->second;

}

void SocketInitiator::onConfigure( const SessionSettings& s )
throw ( ConfigError )
{ QF_STACK_PUSH(SocketInitiator::onConfigure)

  try { m_reconnectInterval = s.get().getLong( RECONNECT_INTERVAL ); }
  catch ( std::exception& ) {}
  if( s.get().has( SOCKET_NODELAY ) )
    m_noDelay = s.get().getBool( SOCKET_NODELAY );

  QF_STACK_POP
}

void SocketInitiator::onInitialize( const SessionSettings& s )
throw ( RuntimeError )
{ QF_STACK_PUSH(SocketInitiator::onInitialize)
  QF_STACK_POP
}

void SocketInitiator::onStart()
{ QF_STACK_PUSH(SocketInitiator::onStart)

  connect();
  while ( !isStopped() )
    m_connector.block( *this );

  time_t start = 0;
  time_t now = 0;

  ::time( &start );
  while ( isLoggedOn() )
  {
    m_connector.block( *this );
    if( ::time(&now) -5 >= start )
      break;
  }

  QF_STACK_POP
}

bool SocketInitiator::onPoll()
{ QF_STACK_PUSH(SocketInitiator::onPoll)

  time_t start = 0;
  time_t now = 0;

  if( isStopped() )
  {
    if( start == 0 )
      ::time( &start );
    if( !isLoggedOn() )
      return false;
    if( ::time(&now) - 5 >= start )
      return false;
  }

  m_connector.block( *this, true );
  return true;

  QF_STACK_POP
}

void SocketInitiator::onStop()
{ QF_STACK_PUSH(SocketInitiator::onStop)
  QF_STACK_POP
}

bool SocketInitiator::doConnect( const SessionID& s, const Dictionary& d )
{ QF_STACK_PUSH(SocketInitiator::doConnect)

  try
  {
    std::string address;
    short port = 0;
    Session* session = Session::lookupSession( s );
    if( !session->isSessionTime() ) return false;

    Log* log = session->getLog();

    getHost( s, d, address, port );

    log->onEvent( "Connecting to " + address + " on port " + IntConvertor::convert((unsigned short)port) );
    int result = m_connector.connect( address, port, m_noDelay );
    setPending( s );

    m_pendingConnections[ result ] 
      = new SocketConnection( *this, s, result, &m_connector.getMonitor() );

    return true;
  }
  catch ( std::exception& ) { return false; }

  QF_STACK_POP
}

void SocketInitiator::onConnect( SocketConnector&, int s )
{ QF_STACK_PUSH(SocketInitiator::onConnect)

  SocketConnections::iterator i = m_pendingConnections.find( s );
  if( i == m_pendingConnections.end() ) return;
  SocketConnection* pSocketConnection = i->second;
  
  m_connections[s] = pSocketConnection;
  m_pendingConnections.erase( i );
  setConnected( pSocketConnection->getSession()->getSessionID() );

  QF_STACK_POP
}

void SocketInitiator::onWrite( SocketConnector& connector, int s )
{ QF_STACK_PUSH(SocketInitiator::onWrite)

  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SocketConnection* pSocketConnection = i->second;
  if( pSocketConnection->processQueue() )
    connector.getMonitor().removeWrite( pSocketConnection->getSocket() );

  QF_STACK_POP
}

void SocketInitiator::onData( SocketConnector& connector, int s )
{ QF_STACK_PUSH(SocketInitiator::onData)

  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SocketConnection* pSocketConnection = i->second;
  pSocketConnection->read( connector );

  QF_STACK_POP
}

void SocketInitiator::onDisconnect( SocketConnector&, int s )
{ QF_STACK_PUSH(SocketInitiator::onDisconnect)

  SocketConnections::iterator i = m_connections.find( s );
  SocketConnections::iterator j = m_pendingConnections.find( s );

  if ( i == m_connections.end() && j == m_pendingConnections.end() ) 
    return;

  SocketConnection* pSocketConnection = i->second;
  setDisconnected( pSocketConnection->getSession()->getSessionID() );

  Session* pSession = pSocketConnection->getSession();
  if ( pSession )
  {
    pSession->disconnect();
    setDisconnected( pSession->getSessionID() );
  }

  delete pSocketConnection;
  m_connections.erase( s );
  m_pendingConnections.erase( s );

  QF_STACK_POP
}

void SocketInitiator::onError( SocketConnector& connector )
{ QF_STACK_PUSH(SocketInitiator::onError)
  onTimeout( connector );
  QF_STACK_POP
}

void SocketInitiator::onTimeout( SocketConnector& )
{ QF_STACK_PUSH(SocketInitiator::onTimeout)

  time_t now;
  ::time( &now );

  if ( (now - m_lastConnect) >= m_reconnectInterval )
  {
    connect();
    m_lastConnect = now;
  }

  SocketConnections::iterator i;
  for ( i = m_connections.begin(); i != m_connections.end(); ++i )
    i->second->onTimeout();

  QF_STACK_POP
}

void SocketInitiator::getHost( const SessionID& s, const Dictionary& d,
                               std::string& address, short& port )
{ QF_STACK_PUSH(SocketInitiator::getHost)

  int num = 0;
  SessionToHostNum::iterator i = m_sessionToHostNum.find( s );
  if ( i != m_sessionToHostNum.end() ) num = i->second;

  try
  {
    std::stringstream hostStream;
    hostStream << SOCKET_CONNECT_HOST << num;
    address = d.getString( hostStream.str() );

    std::stringstream portStream;
    portStream << SOCKET_CONNECT_PORT << num;
    port = ( short ) d.getLong( portStream.str() );
  }
  catch ( ConfigError& )
  {
    num = 0;
    address = d.getString( SOCKET_CONNECT_HOST );
    port = ( short ) d.getLong( SOCKET_CONNECT_PORT );
  }
  m_sessionToHostNum[ s ] = ++num;

  QF_STACK_POP
}
}
