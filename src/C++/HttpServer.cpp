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

#include "HttpServer.h"
#include "HttpConnection.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX
{
Mutex HttpServer::s_mutex;
int HttpServer::s_count = 0;
HttpServer* HttpServer::s_pServer = 0;

void HttpServer::startGlobal( const SessionSettings& s ) 
EXCEPT ( ConfigError, RuntimeError )
{
  Locker l( s_mutex );

  if( !s.get().has(HTTP_ACCEPT_PORT) )
    return;

  s_count += 1;
  if( !s_pServer )
  {
    s_pServer = new HttpServer( s );
    s_pServer->start();
  }
}

void HttpServer::stopGlobal()
{
  Locker l( s_mutex );

  s_count -= 1;
  if( !s_count && s_pServer )
  {
    s_pServer->stop();
    delete s_pServer;
    s_pServer = 0;
  }  
}

HttpServer::HttpServer( const SessionSettings& settings ) EXCEPT ( ConfigError )
: m_pServer( 0 ), m_settings( settings ), m_threadid( 0 ), m_port( 0 ), m_stop( false ) {}

void HttpServer::onConfigure( const SessionSettings& s )
EXCEPT ( ConfigError )
{  
  m_port = s.get().getInt( HTTP_ACCEPT_PORT );
}

void HttpServer::onInitialize( const SessionSettings& s )
EXCEPT ( RuntimeError )
{
  try
  {
    m_pServer = new SocketServer( 1 );
    m_pServer->add( m_port, true, false, 0, 0 );
  }
  catch( std::exception& )
  {
    throw RuntimeError( "Unable to create, bind, or listen to port " + IntConvertor::convert( (unsigned short)m_port ) );
  }
}

void HttpServer::start() EXCEPT ( ConfigError, RuntimeError )
{
  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  if( !thread_spawn( &startThread, this, m_threadid ) )
    throw RuntimeError("Unable to spawn thread");
}

void HttpServer::stop()
{
  if( m_stop ) return;
  m_stop = true;
  onStop();

  if( m_threadid )
    thread_join( m_threadid );
  m_threadid = 0;
}

void HttpServer::onStart()
{
  while ( !m_stop && m_pServer && m_pServer->block( *this ) ) {}

  if( !m_pServer )
    return;

  m_pServer->close();
  delete m_pServer;
  m_pServer = 0;
}

bool HttpServer::onPoll()
{
  if( !m_pServer || m_stop )
    return false;

  m_pServer->block( *this, true );
  return true;
}

void HttpServer::onStop() 
{
}

void HttpServer::onConnect( SocketServer& server, socket_handle a, socket_handle s )
{
  if ( !socket_isValid( s ) ) return;
  HttpConnection connection( s );
  while( connection.read() ) {}
  m_pServer->getMonitor().drop( s );
}

void HttpServer::onWrite( SocketServer& server, socket_handle s )
{
}

bool HttpServer::onData( SocketServer& server, socket_handle s )
{
  return true;
}

void HttpServer::onDisconnect( SocketServer&, socket_handle s )
{
}

void HttpServer::onError( SocketServer& ) {}

void HttpServer::onTimeout( SocketServer& )
{
}

THREAD_PROC HttpServer::startThread( void* p )
{
  HttpServer * pServer = static_cast < HttpServer* > ( p );
  pServer->onStart();
  return 0;
}

}
