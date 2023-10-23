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

#include "Acceptor.h"
#include "Utility.h"
#include "Session.h"
#include "SessionFactory.h"
#include "HttpServer.h"
#include "scope_guard.hpp"

#include <algorithm>
#include <fstream>

namespace FIX
{
Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings )
EXCEPT ( ConfigError )
  : m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( 0 ),
  m_pLog( 0 ),
  m_processing( false ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings,
                    LogFactory& logFactory )
EXCEPT ( ConfigError )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( &logFactory ),
  m_pLog( logFactory.create() ),
  m_processing( false ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

void Acceptor::initialize() EXCEPT ( ConfigError )
{
  std::set<SessionID> sessions = m_settings.getSessions();
  std::set<SessionID>::iterator i;

  if ( !sessions.size() )
    throw ConfigError( "No sessions defined" );

  SessionFactory factory( m_application, m_messageStoreFactory,
                          m_pLogFactory );

  for ( i = sessions.begin(); i != sessions.end(); ++i )
  {
    if ( m_settings.get( *i ).getString( CONNECTION_TYPE ) == "acceptor" )
    {
      m_sessionIDs.insert( *i );
      m_sessions[ *i ] = factory.create( *i, m_settings.get( *i ) );
    }
  }

  if ( !m_sessions.size() )
    throw ConfigError( "No sessions defined for acceptor" );
}

Acceptor::~Acceptor()
{
  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;

  if( m_pLogFactory && m_pLog )
    m_pLogFactory->destroy( m_pLog );
}

Session* Acceptor::getSession
( const std::string& msg, Responder& responder )
{
  Message message;
  if ( !message.setStringHeader( msg ) )
    return 0;

  try
  {
    auto const & beginString = message.getHeader().getField<BeginString>();
    auto const & clSenderCompID = message.getHeader().getField<SenderCompID>();
    auto const & clTargetCompID = message.getHeader().getField<TargetCompID>();
    auto const & msgType = message.getHeader().getField<MsgType>();
    if ( msgType != MsgType_Logon ) return 0;

    SenderCompID senderCompID( clTargetCompID );
    TargetCompID targetCompID( clSenderCompID );
    SessionID sessionID( beginString, senderCompID, targetCompID );

    Sessions::iterator i = m_sessions.find( sessionID );
    if ( i != m_sessions.end() )
    {
      i->second->setResponder( &responder );
      return i->second;
    }
  }
  catch ( FieldNotFound& ) {}
  return 0;
}

Session* Acceptor::getSession( const SessionID& sessionID ) const
{
  Sessions::const_iterator i = m_sessions.find( sessionID );
  if( i != m_sessions.end() )
    return i->second;
  else
    return 0;
}

const Dictionary* const Acceptor::getSessionSettings( const SessionID& sessionID ) const
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

void Acceptor::start() EXCEPT ( ConfigError, RuntimeError )
{
  if( m_processing )
    throw RuntimeError("Acceptor::start called when already processing messages");
  
  m_processing = true;
  m_stop = false;

  try
  {
    onConfigure( m_settings );
    onInitialize( m_settings );

    HttpServer::startGlobal( m_settings );
  }
  catch(...)
  {
    m_processing = false;
    throw;
  }

  if( !thread_spawn( &startThread, this, m_threadid ) )
  {
    m_processing = false;
    throw RuntimeError("Unable to spawn thread");
  }
}

void Acceptor::block() EXCEPT ( ConfigError, RuntimeError )
{
  if( m_processing )
    throw RuntimeError("Acceptor::block called when already processing messages");

  m_processing = true;
  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  startThread(this);
}

bool Acceptor::poll() EXCEPT ( ConfigError, RuntimeError )
{
  if( m_processing )
    throw RuntimeError("Acceptor::poll called when already processing messages");

  {
    auto guard = sg::make_scope_guard([this](){ m_processing = false; });

    m_processing = true;
    if( m_firstPoll )
    {
      m_stop = false;
      onConfigure( m_settings );
      onInitialize( m_settings );
      m_firstPoll = false;
    }
  }

  return onPoll();
}

void Acceptor::stop( bool force )
{
  if( isStopped() ) return;

  HttpServer::stopGlobal();

  std::vector<Session*> enabledSessions;

  Sessions sessions = m_sessions;
  Sessions::iterator i = sessions.begin();
  for ( ; i != sessions.end(); ++i )
  {
    Session* pSession = Session::lookupSession(i->first);
    if( pSession && pSession->isEnabled() )
    {
      enabledSessions.push_back( pSession );
      pSession->logout();
      Session::unregisterSession( pSession->getSessionID() );
    }
  }

  if( !force )
  {
    for ( int second = 1; second <= 10 && isLoggedOn(); ++second )
      process_sleep( 1 );
  }

  m_stop = true;
  onStop();
  if( m_threadid )
    thread_join( m_threadid );
  m_threadid = 0;

  for( Session* session : enabledSessions )
    session->logon();
}

bool Acceptor::isLoggedOn()
{
  Sessions sessions = m_sessions;
  for ( Sessions::value_type const& sessionIDWithSession : sessions )
  {
    if( sessionIDWithSession.second->isLoggedOn() )
      return true;
  }
  return false;
}

THREAD_PROC Acceptor::startThread( void* p )
{
  Acceptor * pAcceptor = static_cast<Acceptor*>( p );
  auto guard = sg::make_scope_guard([pAcceptor](){ pAcceptor->m_processing = false; });
  pAcceptor->onStart();
  return 0;
}
}
