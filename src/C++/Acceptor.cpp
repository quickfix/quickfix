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

#include "Acceptor.h"
#include "Utility.h"
#include "SessionFactory.h"
#include <algorithm>
#include <fstream>

namespace FIX
{
Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings )
throw( ConfigError& )
    : m_application( application ),
    m_messageStoreFactory( messageStoreFactory ),
    m_settings( settings ),
    m_pLogFactory( 0 )
{ initialize(); }

Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings,
                    LogFactory& logFactory )
throw( ConfigError& )
    : m_application( application ),
    m_messageStoreFactory( messageStoreFactory ),
    m_settings( settings ),
    m_pLogFactory( &logFactory )
{ initialize(); }

Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings,
                    bool& threw, ConfigError& ex )
    : m_application( application ),
    m_messageStoreFactory( messageStoreFactory ),
    m_settings( settings ),
    m_pLogFactory( 0 )
{
  try
  {
    threw = false;
    initialize();
  }
  catch ( ConfigError & e )
  { threw = true; ex = e; }
}

Acceptor::Acceptor( Application& application,
                    MessageStoreFactory& messageStoreFactory,
                    const SessionSettings& settings,
                    LogFactory& logFactory,
                    bool& threw, ConfigError& ex )
    : m_application( application ),
    m_messageStoreFactory( messageStoreFactory ),
    m_settings( settings ),
    m_pLogFactory( &logFactory )
{
  try
  {
    threw = false;
    initialize();
  }
  catch ( ConfigError & e )
  { threw = true; ex = e; }
}

void Acceptor::initialize() throw ( ConfigError& )
{
  std::set < SessionID > sessions = m_settings.getSessions();
  std::set < SessionID > ::iterator i;

  if ( !sessions.size() )
    throw ConfigError( "No sessions defined" );

  SessionFactory factory( m_application, m_messageStoreFactory,
                          m_pLogFactory );

  for ( i = sessions.begin(); i != sessions.end(); ++i )
  {
    if ( m_settings.get( *i ).getString( CONNECTION_TYPE ) == "acceptor" )
      m_sessions[ *i ] = factory.create( *i, m_settings.get( *i ) );
  }
  if ( !m_sessions.size() )
    throw ConfigError( "No sessions defined for acceptor" );
}

Acceptor::~Acceptor()
{
  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;
}

Session* Acceptor::getSession
( const std::string& msg, Session::Responder& responder )
{
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
}

bool Acceptor::start()
{
  int threadid = thread_spawn( &startThread, this );
  if ( !threadid ) return false;

  bool result = onStart( m_settings );
  thread_join( threadid );
  return result;
}

void* Acceptor::startThread( void* p )
{
  Acceptor * pAcceptor = static_cast < Acceptor* > ( p );
  pAcceptor->getApplication().onRun();
  pAcceptor->stop();
  return 0;
}
}
