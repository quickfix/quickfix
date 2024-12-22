/* -*- C++ -*- */

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

#ifndef FIX_ACCEPTOR_H
#define FIX_ACCEPTOR_H

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Application.h"
#include "Exceptions.h"
#include "Log.h"
#include "MessageStore.h"
#include "Responder.h"
#include "SessionSettings.h"
#include <map>
#include <string>

namespace FIX {
class Client;
class Session;

/**
 * Base for classes which act as an acceptor for incoming connections.
 *
 * Most users will not need to implement one of these.  The default
 * SocketAcceptor implementation will be used in most cases.
 */
class Acceptor {
public:
  Acceptor(Application &, MessageStoreFactory &, const SessionSettings &) EXCEPT(ConfigError);
  Acceptor(Application &, MessageStoreFactory &, const SessionSettings &, LogFactory &) EXCEPT(ConfigError);

  virtual ~Acceptor();

  Log *getLog() {
    if (m_pLog) {
      return m_pLog;
    }
    return &m_nullLog;
  }

  /// Start acceptor.
  void start() EXCEPT(ConfigError, RuntimeError);
  /// Block on the acceptor
  void block() EXCEPT(ConfigError, RuntimeError);
  /// Poll the acceptor
  bool poll() EXCEPT(ConfigError, RuntimeError);

  /// Stop acceptor.
  void stop(bool force = false);

  /// Check to see if any sessions are currently logged on
  bool isLoggedOn() const;

  Session *getSession(const std::string &msg, Responder &);

  const std::set<SessionID> &getSessions() const { return m_sessionIDs; }
  Session *getSession(const SessionID &sessionID) const;
  const Dictionary *const getSessionSettings(const SessionID &sessionID) const;

  bool has(const SessionID &id) const { return m_sessions.find(id) != m_sessions.end(); }

  bool isStopped() const { return m_stop; }

  Application &getApplication() const { return m_application; }
  MessageStoreFactory &getMessageStoreFactory() const { return m_messageStoreFactory; }

private:
  void initialize() EXCEPT(ConfigError);

  /// Implemented to configure acceptor
  virtual void onConfigure(const SessionSettings &) EXCEPT(ConfigError) {};
  /// Implemented to initialize acceptor
  virtual void onInitialize(const SessionSettings &) EXCEPT(RuntimeError) {};
  /// Implemented to start listening for connections.
  virtual void onStart() = 0;
  /// Implemented to connect and poll for events.
  virtual bool onPoll() = 0;
  /// Implemented to stop a running acceptor.
  virtual void onStop() = 0;

  static THREAD_PROC startThread(void *p);

  typedef std::set<SessionID> SessionIDs;
  typedef std::map<SessionID, Session *> Sessions;

  thread_id m_threadid;
  Sessions m_sessions;
  SessionIDs m_sessionIDs;
  Application &m_application;
  MessageStoreFactory &m_messageStoreFactory;

protected:
  SessionSettings m_settings;

private:
  LogFactory *m_pLogFactory;
  Log *m_pLog;
  NullLog m_nullLog;
  std::atomic<bool> m_processing;
  std::atomic<bool> m_firstPoll;
  std::atomic<bool> m_stop;
};
/*! @} */
} // namespace FIX

#endif // FIX_ACCEPTOR_H
