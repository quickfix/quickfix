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

#ifndef FIX_SOCKETMONITOR_H
#define FIX_SOCKETMONITOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#ifdef _MSC_VER
#include <Winsock2.h>
typedef int socklen_t;
#else
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
  void block( Strategy& strategy );

  int numSockets()
  {
    return m_sockets.size();
  }

private:
  typedef std::set < int > Sockets;
  typedef std::queue < int > Queue;

  void setsockopt();
  bool bind();
  bool listen();
  void buildSet( fd_set& );
  inline timeval* getTimeval();
  inline bool sleepIfEmpty();

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
