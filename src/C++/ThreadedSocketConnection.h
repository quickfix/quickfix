/* -*- C++ -*- */

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

#ifndef FIX_THREADEDSOCKETCONNECTION_H
#define FIX_THREADEDSOCKETCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Parser.h"
#include "Responder.h"
#include "SessionID.h"
#include <set>
#include <map>

namespace FIX
{
class ThreadedSocketAcceptor;
class ThreadedSocketInitiator;
class Session;
class Application;

/// Encapsulates a socket file descriptor (multi-threaded).
class ThreadedSocketConnection : Responder
{
public:
  typedef std::set<SessionID> Sessions;

  ThreadedSocketConnection( int s, Sessions sessions, Application& application );
  ThreadedSocketConnection( const SessionID&, int s, Application& );
  virtual ~ThreadedSocketConnection() ;

  Session* getSession() const { return m_pSession; }
  int getSocket() const { return m_socket; }
  bool read();

private:
  bool readMessage( std::string& msg ) throw( SocketRecvFailed );
  void processStream();
  bool send( const std::string& );
  void disconnect();
  bool setSession( const std::string& msg );

  int m_socket;
  char m_buffer[BUFSIZ];

  Application& m_application;
  Parser m_parser;
  Sessions m_sessions;
  Session* m_pSession;
  fd_set m_fds;
};
}

#endif //FIX_THREADEDSOCKETCONNECTION_H
