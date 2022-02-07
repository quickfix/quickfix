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

#include "Initiator.h"
#include "Utility.h"
#include "Session.h"
#include "SessionFactory.h"
#include "HttpServer.h"
#include <algorithm>
#include <fstream>

namespace FIX
{
Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings ) EXCEPT ( ConfigError )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( 0 ),
  m_pLog( 0 ),
  m_firstPoll( true ),
  m_stop( true )
{ initialize(); }

Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings,
                      LogFactory& logFactory ) EXCEPT ( ConfigError )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( &logFactory ),
  m_pLog( logFactory.create() ),
  m_firstPoll( true ),
  m_stop( true )
{ initialize(); }

void Initiator::initialize() EXCEPT ( ConfigError )
{
  std::set < SessionID > sessions = m_settings.getSessions();
  std::set < SessionID > ::iterator i;

  if ( !sessions.size() )
    throw ConfigError( "No sessions defined" );

  SessionFactory factory( m_application, m_messageStoreFactory,
                          m_pLogFactory );

  for ( i = sessions.begin(); i != sessions.end(); ++i )
  {
    if ( m_settings.get( *i ).getString( "ConnectionType" ) == "initiator" )
    {
      m_sessionIDs.insert( *i );
      m_sessions[ *i ] = factory.create( *i, m_settings.get( *i ) );
      setDisconnected( *i );
    }
  }

  if ( !m_sessions.size() )
    throw ConfigError( "No sessions defined for initiator" );
}

Initiator::~Initiator()
{
  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;

  if( m_pLogFactory && m_pLog )
    m_pLogFactory->destroy( m_pLog );
}

Session* Initiator::getSession( const SessionID& sessionID,
                                Responder& responder )
{
  Sessions::iterator i = m_sessions.find( sessionID );
  if ( i != m_sessions.end() )
  {
    i->second->setResponder( &responder );
    return i->second;
  }
  return 0;
}

Session* Initiator::getSession( const SessionID& sessionID ) const
{
  Sessions::const_iterator i = m_sessions.find( sessionID );
  if( i != m_sessions.end() )
    return i->second;
  else
    return 0;
}

const Dictionary* const Initiator::getSessionSettings( const SessionID& sessionID ) const
{
  try
  {
    return &m_settings.get( sessionID );
  }
  catch( ConfigError& )
  {
    return 0;
  }
}

void Initiator::connect()
{
  Locker l(m_mutex);

  SessionIDs disconnected = m_disconnected;
  SessionIDs::iterator i = disconnected.begin();
  for ( ; i != disconnected.end(); ++i )
  {
    Session* pSession = Session::lookupSession( *i );
    if ( pSession->isEnabled() && pSession->isSessionTime(UtcTimeStamp()) )
      doConnect( *i, m_settings.get( *i ));
  }
}

void Initiator::setPending( const SessionID& sessionID )
{
  Locker l(m_mutex);

  m_pending.insert( sessionID );
  m_connected.erase( sessionID );
  m_disconnected.erase( sessionID );
}

void Initiator::setConnected( const SessionID& sessionID )
{
  Locker l(m_mutex);

  m_pending.erase( sessionID );
  m_connected.insert( sessionID );
  m_disconnected.erase( sessionID );
}

void Initiator::setDisconnected( const SessionID& sessionID )
{
  Locker l(m_mutex);

  m_pending.erase( sessionID );
  m_connected.erase( sessionID );
  m_disconnected.insert( sessionID );
}

bool Initiator::isPending( const SessionID& sessionID )
{
  Locker l(m_mutex);
  return m_pending.find( sessionID ) != m_pending.end();
}

bool Initiator::isConnected( const SessionID& sessionID )
{
  Locker l(m_mutex);
  return m_connected.find( sessionID ) != m_connected.end();
}

bool Initiator::isDisconnected( const SessionID& sessionID )
{
  Locker l(m_mutex);
  return m_disconnected.find( sessionID ) != m_disconnected.end();
}

void Initiator::start() EXCEPT ( ConfigError, RuntimeError )
{
  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  HttpServer::startGlobal( m_settings );

  if( !thread_spawn( &startThread, this, m_threadid ) )
    throw RuntimeError("Unable to spawn thread");
}


void Initiator::block() EXCEPT ( ConfigError, RuntimeError )
{
  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  startThread(this);
}

bool Initiator::poll( double timeout ) EXCEPT ( ConfigError, RuntimeError )
{
  if( m_firstPoll )
  {
    m_stop = false;
    onConfigure( m_settings );
    onInitialize( m_settings );
    connect();
    m_firstPoll = false;
  }

  return onPoll( timeout );
}

void Initiator::stop( bool force )
{
  if( isStopped() ) return;

  HttpServer::stopGlobal();

  std::vector<Session*> enabledSessions;

  SessionIDs connected;

  {
    Locker l(m_mutex);
    connected = m_connected;
  }

  SessionIDs::iterator i = connected.begin();
  for ( ; i != connected.end(); ++i )
  {
    Session* pSession = Session::lookupSession(*i);
    if( pSession && pSession->isEnabled() )
    {
      enabledSessions.push_back( pSession );
      pSession->logout();
    }
  }

  if( !force )
  {
    for ( int second = 1; second <= 10 && isLoggedOn(); ++second )
      process_sleep( 1 );
  }

  {
    Locker l(m_mutex);
    for ( i = connected.begin(); i != connected.end(); ++i )
      setDisconnected( Session::lookupSession(*i)->getSessionID() );
  }

  m_stop = true;
  onStop();
  if( m_threadid )
    thread_join( m_threadid );
  m_threadid = 0;

  std::vector<Session*>::iterator session = enabledSessions.begin();
  for( ; session != enabledSessions.end(); ++session )
    (*session)->logon();
}

bool Initiator::isLoggedOn()
{
  Locker l(m_mutex);

  SessionIDs connected = m_connected;
  SessionIDs::iterator i = connected.begin();
  for ( ; i != connected.end(); ++i )
  {
    if( Session::lookupSession(*i)->isLoggedOn() )
      return true;
  }
  return false;
}

THREAD_PROC Initiator::startThread( void* p )
{
  Initiator * pInitiator = static_cast < Initiator* > ( p );
  pInitiator->onStart();
  return 0;
}
}
