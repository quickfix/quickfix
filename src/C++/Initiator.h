/* -*- C++ -*- */
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

#ifndef FIX_INITIATOR_H
#define FIX_INITIATOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Application.h"
#include "MessageStore.h"
#include "Log.h"
#include "Responder.h"
#include "SessionSettings.h"
#include "Exceptions.h"
#include "Mutex.h"
#include <set>
#include <map>
#include <string>

namespace FIX
{
class Client;

/*! \addtogroup user
 *  @{
 */ 
/**
 * Base for classes which act as an initiator for establishing connections.
 *
 * Most users will not need to implement one of these.  The default
 * SocketInitiator implementation will be used in most cases.
 */
class Initiator
{
public:
  Initiator( Application&, MessageStoreFactory&,
             const SessionSettings& ) throw( ConfigError& );
  Initiator( Application&, MessageStoreFactory&,
             const SessionSettings&, LogFactory& ) throw( ConfigError& );

  virtual ~Initiator();

  /// Start initiator.
  void start() throw ( ConfigError&, RuntimeError& );
  /// Block on the initiator
  void block() throw ( ConfigError&, RuntimeError& );
  /// Poll the initiator
  bool poll() throw ( ConfigError&, RuntimeError& );

  /// Stop initiator.
  void stop();

  Session* getSession( const SessionID& sessionID, Responder& );

public:
  Application& getApplication() { return m_application; }
  MessageStoreFactory& getMessageStoreFactory()
  { return m_messageStoreFactory; }

protected:
  void setConnected( const SessionID&, bool );
  bool isConnected( const SessionID& );
  void connect();

private:
  void initialize() throw ( ConfigError& );

  /// Implemented to configure acceptor
  virtual void onConfigure( const SessionSettings& ) throw ( ConfigError& ) {};
  /// Implemented to initialize initiator
  virtual void onInitialize( const SessionSettings& ) throw ( RuntimeError& ) {};
  /// Implemented to start connecting to targets.
  virtual void onStart() = 0;
  /// Implemented to connect and poll for events.
  virtual bool onPoll() = 0;
  /// Implemented to stop a running initiator.
  virtual void onStop() = 0;
  /// Implemented to connect a session to its target.
  virtual bool doConnect( const SessionID&, const Dictionary& ) = 0;

  static void* startThread( void* p );

  typedef std::set < SessionID > SessionIDs;
  typedef std::map < SessionID, int > SessionState;
  typedef std::map < SessionID, Session* > Sessions;

  Sessions m_sessions;
  SessionIDs m_connected;
  SessionIDs m_disconnected;
  SessionState m_sessionState;

  unsigned m_threadid;
  Application& m_application;
  MessageStoreFactory& m_messageStoreFactory;
  SessionSettings m_settings;
  LogFactory* m_pLogFactory;
};
/*! @} */
}

#endif // FIX_INITIATOR_H
