/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Initiator.h"
#include "Utility.h"
#include "SessionFactory.h"
#include <algorithm>
#include <fstream>

namespace FIX
{
Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings ) throw( ConfigError& )
: m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_settings( settings ),
  m_pLogFactory( 0 )
{ initialize(); }

Initiator::Initiator( Application& application,
                      MessageStoreFactory& messageStoreFactory,
                      const SessionSettings& settings,
                      LogFactory& logFactory ) throw( ConfigError& )
: m_application( application ),
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
                                Session::Responder& responder )
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
    if ( pSession->isSessionTime() )
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
  int threadid = thread_spawn( &startThread, this );
  if ( !threadid ) throw RuntimeError("Unable to spawn thread");
  onStart();
  thread_join( threadid );

  QF_STACK_POP
}

void* Initiator::startThread( void* p )
{ QF_STACK_TRY
  QF_STACK_PUSH(Initiator::startThread)

  Initiator * pInitiator = static_cast < Initiator* > ( p );
  pInitiator->getApplication().onRun();
  pInitiator->stop();
  return 0;

  QF_STACK_POP
  QF_STACK_CATCH
}
}
