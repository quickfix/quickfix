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

#ifndef FIX_SOCKETMONITOR_H
#define FIX_SOCKETMONITOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#ifdef _MSC_VER
#include <Winsock2.h>
typedef int socklen_t;
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif

#include <set>
#include <queue>
#include <time.h>

#include "Utility.h"

namespace FIX
{
/// Monitors events on a collection of sockets.
class SocketMonitor
{
public:
  class Strategy;

  SocketMonitor( int timeout = 0 );
  virtual ~SocketMonitor();

  bool addConnect(socket_handle socket );
  bool addRead(socket_handle socket );
  bool addWrite(socket_handle socket );
  bool drop(socket_handle socket );
  void signal(socket_handle socket );
  void unsignal(socket_handle socket );
  void block( Strategy& strategy, bool poll = 0, double timeout = 0.0 );

  size_t numSockets() 
  { return m_readSockets.size() - 1; }

private:
  typedef std::set < socket_handle > Sockets;
  typedef std::queue < socket_handle > Queue;

  void setsockopt();
  bool bind();
  bool listen();
  void buildSet( const Sockets&, fd_set& );
  inline timeval* getTimeval( bool poll, double timeout );
  inline bool sleepIfEmpty( bool poll );

  void processReadSet( Strategy&, fd_set& );
  void processWriteSet( Strategy&, fd_set& );
  void processExceptSet( Strategy&, fd_set& );

  int m_timeout;
  timeval m_timeval;
#ifndef SELECT_DECREMENTS_TIME
  clock_t m_ticks;
#endif

  socket_handle m_signal;
  socket_handle m_interrupt;
  Sockets m_connectSockets;
  Sockets m_readSockets;
  Sockets m_writeSockets;
  Queue m_dropped;

public:
  class Strategy
  {
  public:
    virtual ~Strategy()
    {}
    virtual void onConnect( SocketMonitor&, socket_handle socket ) = 0;
    virtual void onEvent( SocketMonitor&, socket_handle socket ) = 0;
    virtual void onWrite( SocketMonitor&, socket_handle socket ) = 0;
    virtual void onError( SocketMonitor&, socket_handle socket ) = 0;
    virtual void onError( SocketMonitor& ) = 0;
    virtual void onTimeout( SocketMonitor& )
  {}}
  ;
};
}

#endif //FIX_SOCKETMONITOR_H
