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
/*! \addtogroup user
 *  @{
 */
/// Threaded Socket implementation of Acceptor.
class ThreadedSocketAcceptor : public Acceptor
{
  friend class SocketConnection;
public:
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings& ) throw( ConfigError );
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings&,
                          LogFactory& ) throw( ConfigError );

  virtual ~ThreadedSocketAcceptor();

  short getPort() const { return m_port; }

private:
  bool readSettings( const SessionSettings& );

  typedef std::map < int, int > SocketToThread;
  typedef std::pair < ThreadedSocketAcceptor*, ThreadedSocketConnection* > ThreadPair;

  void onConfigure( const SessionSettings& ) throw ( ConfigError );
  void onInitialize( const SessionSettings& ) throw ( RuntimeError );

  void onStart();
  bool onPoll();
  void onStop();

  void addThread( int s, int t );
  void removeThread( int s );
  static THREAD_PROC socketThread( void* p );

  short m_port;
  bool m_reuseAddress;
  bool m_noDelay;
  int m_socket;
  SocketToThread m_threads;
  Mutex m_mutex;
  bool m_stop;
};
/*! @} */
}

#endif //FIX_THREADEDSOCKETACCEPTOR_H
