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

#ifndef FIX_HTTPSERVER_H
#define FIX_HTTPSERVER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SocketServer.h"
#include "SessionSettings.h"
#include "Exceptions.h"
#include "Mutex.h"

namespace FIX
{
/// Basic HTTP Server
class HttpServer : public SocketServer::Strategy
{
public:
  HttpServer( const SessionSettings& );

  static void startGlobal( const SessionSettings& );
  static void stopGlobal();

  void start();
  void stop();

private:
  void onConfigure( const SessionSettings& );
  void onInitialize( const SessionSettings& );

  void onStart();
  bool onPoll();
  void onStop();

  void onConnect( SocketServer&, int, int );
  void onWrite( SocketServer&, int );
  bool onData( SocketServer&, int );
  void onDisconnect( SocketServer&, int );
  void onError( SocketServer& );
  void onTimeout( SocketServer& );

  static THREAD_PROC startThread( void* p );

  SocketServer* m_pServer;
  SessionSettings m_settings;
  thread_id m_threadid;
  int m_port;
  bool m_stop;

  static Mutex s_mutex;
  static int s_count;
  static HttpServer* s_pServer;
};
/*! @} */
}

#endif //FIX_HTTPSERVER_H
