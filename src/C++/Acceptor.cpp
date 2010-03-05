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

#include "Acceptor.h"
#include "Utility.h"
#include "Session.h"
#include "SessionFactory.h"
#include "HttpServer.h"
#include <algorithm>
#include <fstream>

namespace FIX
{
Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings )
throw( ConfigError )
  : m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( 0 ),
  m_pLog( 0 ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings,
                    LogFactory& logFactory )
throw( ConfigError )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( &logFactory ),
  m_pLog( logFactory.create() ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

void Acceptor::initialize() throw ( ConfigError )
{ QF_STACK_PUSH( Acceptor::initialize )

  std::set < SessionID > sessions = m_settings.getSessions();
  std::set < SessionID > ::iterator i;

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

  QF_STACK_POP
}

Acceptor::~Acceptor()
{ QF_STACK_IGNORE_BEGIN

  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;

  if( m_pLogFactory && m_pLog )
    m_pLogFactory->destroy( m_pLog );
  
  QF_STACK_IGNORE_END
}

Session* Acceptor::getSession
( const std::string& msg, Responder& responder )
{ QF_STACK_PUSH( Acceptor::getSession )

  Message message;
  if ( !message.setStringHeader( msg ) )
    return 0;

  BeginString beginString;
  SenderCompID clSenderCompID;
  TargetCompID clTargetCompID;
  MsgType msgType;
  try
  {
    message.getHeader().getField( beginString );
    message.getHeader().getField( clSenderCompID );
    message.getHeader().getField( clTargetCompID );
    message.getHeader().getField( msgType );
    if ( msgType != "A" ) return 0;

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

  QF_STACK_POP
}

Session* Acceptor::getSession( const SessionID& sessionID ) const
{ QF_STACK_PUSH(Initiator::getSession)

  Sessions::const_iterator i = m_sessions.find( sessionID );
  if( i != m_sessions.end() )
    return i->second;
  else
    return 0;

  QF_STACK_POP
}

const Dictionary* const Acceptor::getSessionSettings( const SessionID& sessionID ) const
{ QF_STACK_PUSH(Initiator::getSessionSettings)

  try
  {
    return &m_settings.get( sessionID );
  }
  catch( ConfigError& )
  {
    return 0;
  }

  QF_STACK_POP
}

void Acceptor::start() throw ( ConfigError, RuntimeError )
{ QF_STACK_PUSH( Acceptor::start )

  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  HttpServer::startGlobal( m_settings );

  if( !thread_spawn( &startThread, this, m_threadid ) )
    throw RuntimeError("Unable to spawn thread");

  QF_STACK_POP
}

void Acceptor::block() throw ( ConfigError, RuntimeError )
{ QF_STACK_PUSH( Acceptor::start )

  m_stop = false;
  onConfigure( m_settings );
  onInitialize( m_settings );

  startThread(this);

  QF_STACK_POP
}

bool Acceptor::poll( double timeout ) throw ( ConfigError, RuntimeError )
{ QF_STACK_PUSH( Acceptor::poll )

  if( m_firstPoll )
  {
    onConfigure( m_settings );
    onInitialize( m_settings );
    m_firstPoll = false;
  }

  return onPoll( timeout );

  QF_STACK_POP
}

void Acceptor::stop( bool force )
{ QF_STACK_PUSH( Acceptor::stop )

  if( isStopped() ) return;

  HttpServer::stopGlobal();

  std::vector<Session*> enabledSessions;

  Sessions sessions = m_sessions;
  Sessions::iterator i = sessions.begin();
  for ( ; i != sessions.end(); ++i )
  {
    Session* pSession = Session::lookupSession(i->first);
    if( pSession->isEnabled() )
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

  std::vector<Session*>::iterator session = enabledSessions.begin();
  for( ; session != enabledSessions.end(); ++session )
    (*session)->logon();

  QF_STACK_POP
}

bool Acceptor::isLoggedOn()
{ QF_STACK_PUSH(Acceptor::isLoggedOn)

  Sessions sessions = m_sessions;
  Sessions::iterator i = sessions.begin();
  for ( ; i != sessions.end(); ++i )
  {
    if( i->second->isLoggedOn() )
      return true;
  }
  return false;

  QF_STACK_POP
}

THREAD_PROC Acceptor::startThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH( Acceptor::startThread )

  Acceptor * pAcceptor = static_cast < Acceptor* > ( p );
  pAcceptor->onStart();
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
}
