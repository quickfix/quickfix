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

#include "Initiator.h"
#include "Utility.h"
#include "Session.h"
#include "SessionFactory.h"
#include <algorithm>
#include <fstream>

namespace FIX
{
Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings ) throw( ConfigError& )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( 0 )
{ initialize(); }

Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings,
                      LogFactory& logFactory ) throw( ConfigError& )
: m_threadid( 0 ),
  m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( &logFactory )
{ initialize(); }

void Initiator::initialize() throw ( ConfigError& )
{ QF_STACK_PUSH(Initiator::initialize)

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
      m_sessions[ *i ] = factory.create( *i, m_settings.get( *i ) );
      setConnected( *i, false );
    }
  }

  if ( !m_sessions.size() )
    throw ConfigError( "No sessions defined for initiator" );

  QF_STACK_POP
}

Initiator::~Initiator()
{ QF_STACK_IGNORE_BEGIN
  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;
  QF_STACK_IGNORE_END
}

Session* Initiator::getSession( const SessionID& sessionID,
                                Responder& responder )
{ QF_STACK_PUSH(Initiator::getSession)

  Sessions::iterator i = m_sessions.find( sessionID );
  if ( i != m_sessions.end() )
  {
    i->second->setResponder( &responder );
    return i->second;
  }
  return 0;

  QF_STACK_POP
}

void Initiator::connect()
{ QF_STACK_PUSH(Initiator::connect)

  SessionIDs disconnected = m_disconnected;
  SessionIDs::iterator i = disconnected.begin();
  for ( ; i != disconnected.end(); ++i )
  {
    Session* pSession = Session::lookupSession( *i );
    if ( pSession->isEnabled() && pSession->isSessionTime() )
      setConnected( *i, doConnect( *i, m_settings.get( *i ) ) );
  }

  QF_STACK_POP
}

void Initiator::setConnected( const SessionID& sessionID, bool connected )
{ QF_STACK_PUSH(Initiator::setConnected)

  if ( connected )
  {
    m_connected.insert( sessionID );
    m_disconnected.erase( sessionID );
  }
  else
  {
    m_disconnected.insert( sessionID );
    m_connected.erase( sessionID );
  }

  QF_STACK_POP
}

bool Initiator::isConnected( const SessionID& sessionID )
{ QF_STACK_PUSH(Initiator::isConnected)
  return m_connected.find( sessionID ) != m_connected.end();
  QF_STACK_POP
}

void Initiator::start() throw ( ConfigError&, RuntimeError& )
{ QF_STACK_PUSH(Initiator::start)

  onConfigure( m_settings );
  onInitialize( m_settings );

  if( !thread_spawn( &startThread, this, m_threadid ) )
    throw RuntimeError("Unable to spawn thread");

  QF_STACK_POP
}


void Initiator::block() throw ( ConfigError&, RuntimeError& )
{ QF_STACK_PUSH(Initiator::block)

  onConfigure( m_settings );
  onInitialize( m_settings );

  startThread(this);

  QF_STACK_POP
}

bool Initiator::poll() throw ( ConfigError&, RuntimeError& )
{ QF_STACK_PUSH(Initiator::poll)

  if( m_firstPoll )
  {
    onConfigure( m_settings );
    onInitialize( m_settings );
    m_firstPoll = false;
  }

  return onPoll();

  QF_STACK_POP
}

void Initiator::stop() 
{ QF_STACK_PUSH(Initiator::stop) 

  SessionIDs connected = m_connected;
  SessionIDs::iterator i = connected.begin();
  for ( ; i != connected.end(); ++i )
    Session::lookupSession(*i)->logout();
  
  if( !m_threadid ) return;
  onStop();
  thread_join( m_threadid );

  QF_STACK_POP
}

bool Initiator::isLoggedOn()
{ QF_STACK_PUSH(Initiator::isLoggedOn)

  SessionIDs connected = m_connected;
  SessionIDs::iterator i = connected.begin();
  for ( ; i != connected.end(); ++i )
  {
    if( Session::lookupSession(*i)->isLoggedOn() )
      return true;
  }
  return false;

  QF_STACK_POP
}

THREAD_PROC Initiator::startThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(Initiator::startThread)

  Initiator * pInitiator = static_cast < Initiator* > ( p );
  pInitiator->onStart();
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
}
