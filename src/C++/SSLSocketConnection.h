/* ====================================================================
 * Copyright (c) 1998-2006 Ralf S. Engelschall. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by
 *     Ralf S. Engelschall <rse@engelschall.com> for use in the
 *     mod_ssl project (http://www.modssl.org/)."
 *
 * 4. The names "mod_ssl" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    rse@engelschall.com.
 *
 * 5. Products derived from this software may not be called "mod_ssl"
 *    nor may "mod_ssl" appear in their names without prior
 *    written permission of Ralf S. Engelschall.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by
 *     Ralf S. Engelschall <rse@engelschall.com> for use in the
 *     mod_ssl project (http://www.modssl.org/)."
 *
 * THIS SOFTWARE IS PROVIDED BY RALF S. ENGELSCHALL ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL RALF S. ENGELSCHALL OR
 * HIS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

/* ====================================================================
 * Copyright (c) 1995-1999 Ben Laurie. All rights reserved.
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
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by Ben Laurie
 *    for use in the Apache-SSL HTTP server project."
 *
 * 4. The name "Apache-SSL Server" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission.
 *
 * 5. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by Ben Laurie
 *    for use in the Apache-SSL HTTP server project."
 *
 * THIS SOFTWARE IS PROVIDED BY BEN LAURIE ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL BEN LAURIE OR
 * HIS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

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

#ifndef FIX_SSLSOCKETCONNECTION_H
#define FIX_SSLSOCKETCONNECTION_H

#if (HAVE_SSL > 0)

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Parser.h"
#include "Responder.h"
#include "SessionID.h"
#include "SocketMonitor.h"
#include "Utility.h"
#include "UtilitySSL.h"
#include "Mutex.h"
#include <set>

namespace FIX
{
class SSLSocketAcceptor;
class SocketServer;
class SocketConnector;
class SSLSocketInitiator;
class Session;

/// Encapsulates a socket file descriptor (single-threaded).
class SSLSocketConnection : Responder
{
public:
  typedef std::set<SessionID> Sessions;

  SSLSocketConnection( socket_handle s, SSL *ssl, Sessions sessions, SocketMonitor* pMonitor );
  SSLSocketConnection( SSLSocketInitiator&, const SessionID&, socket_handle, SSL *, SocketMonitor* );
  virtual ~SSLSocketConnection();

  socket_handle getSocket() const { return m_socket; }
  Session* getSession() const { return m_pSession; }

  bool read( SocketConnector& s );
  bool read( SSLSocketAcceptor&, SocketServer& );
  bool processQueue();

  void signal()
  {
    Locker l( m_mutex );
    if( m_sendQueue.size() == 1 )
      m_pMonitor->signal( m_socket );
  }

  void unsignal()
  {
    Locker l( m_mutex );
    if( m_sendQueue.size() == 0 )
      m_pMonitor->unsignal( m_socket );
  }

  void onTimeout();

  SSL *sslObject() { return m_ssl; }

private:
  typedef std::deque<std::string, ALLOCATOR<std::string> >
    Queue;

  bool isValidSession();
  void readFromSocket() EXCEPT ( SocketRecvFailed );
  bool readMessage( std::string& msg );
  void readMessages( SocketMonitor& s );
  bool send( const std::string& );
  void disconnect();

  socket_handle m_socket;
  SSL *m_ssl;
  char m_buffer[BUFSIZ];

  Parser m_parser;
  Queue m_sendQueue;
  unsigned m_sendLength;
  Sessions m_sessions;
  Session* m_pSession;
  SocketMonitor* m_pMonitor;
  Mutex m_mutex;
  fd_set m_fds;
};
}

#endif

#endif //FIX_SSLSOCKETCONNECTION_H
