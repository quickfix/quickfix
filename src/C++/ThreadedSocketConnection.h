/* -*- C++ -*- */

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

#ifndef FIX_THREADEDSOCKETCONNECTION_H
#define FIX_THREADEDSOCKETCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Parser.h"
#include "Responder.h"
#include "Queue.h"
#include <map>

namespace FIX
{
class ThreadedSocketAcceptor;
class ThreadedSocketInitiator;
class Session;
class SessionID;
class Application;

class ThreadedSocketConnection : Responder
{
public:
  ThreadedSocketConnection( int s, Application& application );
  ThreadedSocketConnection( const SessionID&, int s, Application& );
  virtual ~ThreadedSocketConnection() ;

  Session* getSession() const { return m_pSession; }
  int getSocket() const { return m_socket; }
  bool read();

private:
  bool readMessage( std::string& msg ) throw( SocketRecvFailed );
  void readQueue();
  void processStream();
  bool send( const std::string& );
  void disconnect();
  bool setSession( const std::string& msg );

  static THREAD_PROC queueThread( void* p );

  int m_socket;
  Application& m_application;
  Parser m_parser;
  Session* m_pSession;
  bool m_deleted;
  Queue< std::pair<size_t, char*> > m_queue;
  bool m_queueThreadSpawned;
  unsigned m_queueThread;
};
}

#endif //FIX_THREADEDSOCKETCONNECTION_H
