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

#ifndef FIX_SSLSOCKETCONNECTION_H
#define FIX_SSLSOCKETCONNECTION_H

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif


#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Parser.h"
#include "Responder.h"
#include "SessionID.h"
#include "Mutex.h"
#include "UtilitySSL.h"
#include <set>
#include <map>

namespace FIX {
class SSLSocketAcceptor;
class SSLSocketInitiator;
class Session;
class Application;
class Log;

/// Encapsulates a socket file descriptor (multi-threaded).
class SSLSocketConnection : Responder {
public:
  typedef std::set<SessionID> Sessions;

  SSLSocketConnection(int s, SSL *ssl, Sessions sessions, Log *pLog);
  SSLSocketConnection(const SessionID &, int s, SSL *ssl,
                              const std::string &address, short port,
                              Log *pLog);
  virtual ~SSLSocketConnection();

  Session *getSession() const { return m_pSession; }
  int getSocket() const { return m_socket; }
  bool connect();
  void disconnect();
  bool read();
  SSL *sslObject() { return m_ssl; }

private:
  typedef std::pair<int, SSL *> SocketKey;

  bool readMessage(std::string &msg) throw(SocketRecvFailed);
  void processStream();
  bool send(const std::string &);
  bool setSession(const std::string &msg);

  int m_socket;
  SSL *m_ssl;
  char m_buffer[BUFSIZ];

  std::string m_address;
  int m_port;

  Log *m_pLog;
  Parser m_parser;
  Sessions m_sessions;
  Session *m_pSession;
  bool m_disconnect;
  fd_set m_fds;

  Mutex m_mutex;
};
}

#endif // FIX_THREADEDSOCKETCONNECTION_H
