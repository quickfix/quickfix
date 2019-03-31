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

#ifndef FIX_THREADEDSOCKETACCEPTOR_H
#define FIX_THREADEDSOCKETACCEPTOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Acceptor.h"
#include "ThreadedSocketConnection.h"
#include "Mutex.h"

namespace FIX
{
/// Threaded Socket implementation of Acceptor.
class ThreadedSocketAcceptor : public Acceptor
{
  friend class SocketConnection;
public:
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings& ) EXCEPT ( ConfigError );
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings&,
                          LogFactory& ) EXCEPT ( ConfigError );

  virtual ~ThreadedSocketAcceptor();

private:
  struct AcceptorThreadInfo
  {
    AcceptorThreadInfo( ThreadedSocketAcceptor* pAcceptor, socket_handle socket, int port )
    : m_pAcceptor( pAcceptor ), m_socket( socket ), m_port( port ) {}

    ThreadedSocketAcceptor* m_pAcceptor;
    socket_handle m_socket;
    int m_port;
  };

  struct ConnectionThreadInfo
  {
    ConnectionThreadInfo( ThreadedSocketAcceptor* pAcceptor, 
                          ThreadedSocketConnection* pConnection )
    : m_pAcceptor( pAcceptor ), m_pConnection( pConnection ) {}

    ThreadedSocketAcceptor* m_pAcceptor;
    ThreadedSocketConnection* m_pConnection;
  };

  bool readSettings( const SessionSettings& );

  typedef std::set < socket_handle >  Sockets;
  typedef std::set < SessionID > Sessions;
  typedef std::map < int, Sessions > PortToSessions;
  typedef std::map < socket_handle, int > SocketToPort;
  typedef std::map < socket_handle, thread_id > SocketToThread;

  void onConfigure( const SessionSettings& ) EXCEPT ( ConfigError );
  void onInitialize( const SessionSettings& ) EXCEPT ( RuntimeError );

  void onStart();
  bool onPoll( double timeout );
  void onStop();

  void addThread(socket_handle s, thread_id t );
  void removeThread(socket_handle s );
  static THREAD_PROC socketAcceptorThread( void* p );
  static THREAD_PROC socketConnectionThread( void* p );

  Sockets m_sockets;
  PortToSessions m_portToSessions;
  SocketToPort m_socketToPort;
  SocketToThread m_threads;
  Mutex m_mutex;
};
/*! @} */
}

#endif //FIX_THREADEDSOCKETACCEPTOR_H
