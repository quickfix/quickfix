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
#ifndef FIX_THREADEDSSLSOCKETACCEPTOR_H
#define FIX_THREADEDSSLSOCKETACCEPTOR_H

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#if (HAVE_SSL > 0)

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Acceptor.h"
#include "ThreadedSSLSocketConnection.h"
#include "Mutex.h"

namespace FIX {

typedef enum {
  SSL_CLIENT_VERIFY_NONE = 0,
  SSL_CLIENT_VERIFY_REQUIRE = 1,
  SSL_CLIENT_VERIFY_OPTIONAL = 2,
  SSL_CLIENT_VERIFY_NOTSET = 3
} SSLVerifyClient;

/// Threaded Socket implementation of Acceptor.
class ThreadedSSLSocketAcceptor : public Acceptor {
  friend class SocketConnection;

public:
  ThreadedSSLSocketAcceptor(Application &, MessageStoreFactory &,
                            const SessionSettings &) throw(ConfigError);
  ThreadedSSLSocketAcceptor(Application &, MessageStoreFactory &,
                            const SessionSettings &,
                            LogFactory &) throw(ConfigError);

  virtual ~ThreadedSSLSocketAcceptor();

  void setPassword(const std::string & pwd) {
    m_password.assign(pwd);
  }

  int passwordHandleCallback(char *buf, size_t bufsize, int verify, void *job);

private:
  struct AcceptorThreadInfo {
    AcceptorThreadInfo(ThreadedSSLSocketAcceptor *pAcceptor, int socket,
                       int port)
        : m_pAcceptor(pAcceptor), m_socket(socket), m_port(port) {}

    ThreadedSSLSocketAcceptor *m_pAcceptor;
    int m_socket;
    int m_port;
  };

  struct ConnectionThreadInfo {
    ConnectionThreadInfo(ThreadedSSLSocketAcceptor *pAcceptor,
                         ThreadedSSLSocketConnection *pConnection)
        : m_pAcceptor(pAcceptor), m_pConnection(pConnection) {}

    ThreadedSSLSocketAcceptor *m_pAcceptor;
    ThreadedSSLSocketConnection *m_pConnection;
  };

  bool readSettings(const SessionSettings &);

  typedef std::set<int> Sockets;
  typedef std::set<SessionID> Sessions;
  typedef std::map<int, Sessions> PortToSessions;
  typedef std::map<int, int> SocketToPort;
  typedef std::pair<int, SSL *> SocketKey;
  typedef std::map<SocketKey, thread_id> SocketToThread;

  void onConfigure(const SessionSettings &) throw(ConfigError);
  void onInitialize(const SessionSettings &) throw(RuntimeError);

  void onStart();
  bool onPoll(double timeout);
  void onStop();

  void addThread(SocketKey s, thread_id t);
  void removeThread(SocketKey s);
  static THREAD_PROC socketAcceptorThread(void *p);
  static THREAD_PROC socketConnectionThread(void *p);

  bool loadSSLCertificate(std::string &errStr);
  bool loadCRLInfo(std::string &errStr);
  X509 *readX509(FILE *fp, X509 **x509, passPhraseHandleCallbackType cb);
  EVP_PKEY *readPrivateKey(FILE *fp, EVP_PKEY **key,
                           passPhraseHandleCallbackType cb);
  int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                      X509_OBJECT *pObj);
  X509_STORE *createX509Store(const char *cpFile, const char *cpPath);
  int newConnection(ThreadedSSLSocketConnection *pConnection);
  SSL_CTX *sslContext() { return m_ctx; }
  X509_STORE *revocationStore() { return m_revocationStore; }
  int doAccept(SSL *ssl, int & result);

  Sockets m_sockets;
  PortToSessions m_portToSessions;
  SocketToPort m_socketToPort;
  SocketToThread m_threads;
  Mutex m_mutex;
  bool m_sslInit;
  int m_verify;
  SSL_CTX *m_ctx;
  X509_STORE *m_revocationStore;
  std::string m_password;

  static Mutex m_acceptMutex;
};
/*! @} */
}

#endif // FIX_THREADEDSOCKETACCEPTOR_H

#endif
