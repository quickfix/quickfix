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

namespace FIX
{
/// Monitors events on a collection of sockets.
class SocketMonitor
{
public:
  class Strategy;

  SocketMonitor( int timeout = 0 );
  virtual ~SocketMonitor();

  bool add( int socket );
  bool drop( int socket );
  void block( Strategy& strategy, bool poll = 0 );

  int numSockets() { return m_sockets.size(); }

private:
  typedef std::set < int > Sockets;
  typedef std::queue < int > Queue;

  void setsockopt();
  bool bind();
  bool listen();
  void buildSet( fd_set& );
  inline timeval* getTimeval( bool poll );
  inline bool sleepIfEmpty( bool poll );

  int m_timeout;
  timeval m_timeval;
#ifndef SELECT_DECREMENTS_TIME
  clock_t m_ticks;
#endif

  Sockets m_sockets;
  Queue m_dropped;

public:
  class Strategy
  {
  public:
    virtual ~Strategy()
    {}
    virtual void onEvent( SocketMonitor&, int socket ) = 0;
    virtual void onError( SocketMonitor&, int socket ) = 0;
    virtual void onError( SocketMonitor& ) = 0;
    virtual void onTimeout( SocketMonitor& )
  {}}
  ;
};
}

#endif //FIX_SOCKETMONITOR_H
