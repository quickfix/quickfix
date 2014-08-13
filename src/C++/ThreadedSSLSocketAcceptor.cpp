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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#if (HAVE_SSL > 0)

#include "ThreadedSSLSocketAcceptor.h"
#include "Settings.h"
#include "Utility.h"

namespace FIX {

Mutex ThreadedSSLSocketAcceptor::m_acceptMutex = Mutex();

// TODO
int passPhraseHandleCB(char *buf, int bufsize, int verify, void *job) {
  return 0;
}

ThreadedSSLSocketAcceptor::ThreadedSSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings) throw(ConfigError)
    : Acceptor(application, factory, settings), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0) {
  socket_init();
}

ThreadedSSLSocketAcceptor::ThreadedSSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings, LogFactory &logFactory) throw(ConfigError)
    : Acceptor(application, factory, settings, logFactory), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0) {
  socket_init();
}

ThreadedSSLSocketAcceptor::~ThreadedSSLSocketAcceptor() {
  if (m_sslInit) {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }

  socket_term();
}

void ThreadedSSLSocketAcceptor::onConfigure(const SessionSettings &s) throw(
    ConfigError) {
  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i;
  for (i = sessions.begin(); i != sessions.end(); ++i) {
    const Dictionary &settings = s.get(*i);
    settings.getInt(SOCKET_ACCEPT_PORT);
    if (settings.has(SOCKET_REUSE_ADDRESS))
      settings.getBool(SOCKET_REUSE_ADDRESS);
    if (settings.has(SOCKET_NODELAY))
      settings.getBool(SOCKET_NODELAY);
  }
}

void ThreadedSSLSocketAcceptor::onInitialize(const SessionSettings &s) throw(
    RuntimeError) {
  if (!m_sslInit) {

    ssl_init();

    /* set up the application context */
    if ((m_ctx = SSL_CTX_new(SSLv23_server_method())) == 0) {
      throw RuntimeError("Unable to get context");
    }

    SSL_CTX_set_options(m_ctx, SSL_OP_ALL);
    SSL_CTX_set_mode(m_ctx, SSL_MODE_ENABLE_PARTIAL_WRITE |
                                SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER);

    std::string errStr;
    if (!loadSSLCertificate(errStr)) {
      ssl_term();
      getLog()->onEvent(errStr);
      throw RuntimeError(
          "Failed to load SSL cert. Please check log for details");
    }

    if (!loadCRLInfo(errStr)) {
      ssl_term();
      getLog()->onEvent(errStr);
      throw RuntimeError(
          "Failed to load CRL info. Please check log for details");
    }

    SSL_CTX_set_options(m_ctx, SSL_OP_SINGLE_DH_USE);
    SSL_CTX_set_session_cache_mode(m_ctx, SSL_SESS_CACHE_SERVER);

    m_sslInit = true;
  }

  short port = 0;
  std::set<int> ports;

  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i = sessions.begin();
  for (; i != sessions.end(); ++i) {
    const Dictionary &settings = s.get(*i);
    port = (short)settings.getInt(SOCKET_ACCEPT_PORT);

    m_portToSessions[port].insert(*i);

    if (ports.find(port) != ports.end())
      continue;
    ports.insert(port);

    const bool reuseAddress = settings.has(SOCKET_REUSE_ADDRESS)
                                  ? settings.getBool(SOCKET_REUSE_ADDRESS)
                                  : true;

    const bool noDelay =
        settings.has(SOCKET_NODELAY) ? settings.getBool(SOCKET_NODELAY) : false;

    const int sendBufSize = settings.has(SOCKET_SEND_BUFFER_SIZE)
                                ? settings.getInt(SOCKET_SEND_BUFFER_SIZE)
                                : 0;

    const int rcvBufSize = settings.has(SOCKET_RECEIVE_BUFFER_SIZE)
                               ? settings.getInt(SOCKET_RECEIVE_BUFFER_SIZE)
                               : 0;

    int socket = socket_createAcceptor(port, reuseAddress);
    if (socket < 0) {
      SocketException e;
      socket_close(socket);
      throw RuntimeError("Unable to create, bind, or listen to port " +
                         IntConvertor::convert((unsigned short)port) + " (" +
                         e.what() + ")");
    }
    if (noDelay)
      socket_setsockopt(socket, TCP_NODELAY);
    if (sendBufSize)
      socket_setsockopt(socket, SO_SNDBUF, sendBufSize);
    if (rcvBufSize)
      socket_setsockopt(socket, SO_RCVBUF, rcvBufSize);

    m_socketToPort[socket] = port;
    m_sockets.insert(socket);
  }
}

void ThreadedSSLSocketAcceptor::onStart() {
  Sockets::iterator i;
  for (i = m_sockets.begin(); i != m_sockets.end(); ++i) {
    Locker l(m_mutex);
    int port = m_socketToPort[*i];
    AcceptorThreadInfo *info = new AcceptorThreadInfo(this, *i, port);
    thread_id thread;
    thread_spawn(&socketAcceptorThread, info, thread);
    addThread(SocketKey(*i, 0), thread);
  }
}

bool ThreadedSSLSocketAcceptor::loadSSLCertificate(std::string &errStr) {

  getLog()->onEvent("Loading SSL certificate");

  errStr.erase();

  if (!m_settings.get().has(SERVER_CERT_FILE)) {
    errStr.assign(SERVER_CERT_FILE);
    errStr.append(" parameter not found");
    return false;
  }

  std::string cert(m_settings.get().getString(SERVER_CERT_FILE));
  std::string key;
  if (m_settings.get().has(SERVER_CERT_KEY_FILE))
    key.assign(m_settings.get().getString(SERVER_CERT_KEY_FILE));
  else
    key.assign(cert);

  FILE *fp;

  if ((fp = fopen(cert.c_str(), "r")) == 0) {
    errStr.assign(cert);
    errStr.append(" file could not be opened");
    return false;
  }

  X509 *X509Cert = readX509(fp, 0, 0);

  fclose(fp);

  if (X509Cert == 0) {
    errStr.assign(cert);
    errStr.append(" readX509 failed");
    return false;
  }

  switch (typeofSSLAlgo(X509Cert, 0)) {
  case SSL_ALGO_RSA:
    getLog()->onEvent("Configuring RSA server certificate");

    if (SSL_CTX_use_certificate(m_ctx, X509Cert) <= 0) {
      errStr.assign("Unable to configure RSA server certificate");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    getLog()->onEvent("Configuring DSA server certificate");
    if (SSL_CTX_use_certificate(m_ctx, X509Cert) <= 0) {
      errStr.assign("Unable to configure DSA server certificate");
      return false;
    }
    break;

  default:
    errStr.assign("Unable to configure server certificate");
    return false;
    break;
  }
  X509_free(X509Cert);

  if ((fp = fopen(key.c_str(), "r")) == 0) {
    errStr.assign(key);
    errStr.append(" file could not be opened");
    return false;
  }

  EVP_PKEY *privateKey = readPrivateKey(fp, 0, passPhraseHandleCB);

  fclose(fp);

  if (privateKey == 0) {
    errStr.assign(key);
    errStr.append(" readPrivateKey failed");
    return false;
  }

  switch (typeofSSLAlgo(0, privateKey)) {
  case SSL_ALGO_RSA:
    getLog()->onEvent("Configuring RSA server private key");
    if (SSL_CTX_use_PrivateKey(m_ctx, privateKey) <= 0) {
      errStr.assign("Unable to configure RSA server private key");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    getLog()->onEvent("Configuring DSA server private key");
    if (SSL_CTX_use_PrivateKey(m_ctx, privateKey) <= 0) {
      errStr.assign("Unable to configure DSA server private key");
      return false;
    }
    break;
  default:

    errStr.assign("Unable to configure server certificate");
    return false;
    break;
  }
  EVP_PKEY_free(privateKey);

  std::string caFile;
  if (m_settings.get().has(CERT_AUTH_FILE))
    caFile.assign(m_settings.get().getString(CERT_AUTH_FILE));

  std::string caDir;
  if (m_settings.get().has(CERT_AUTH_DIR))
    caDir.assign(m_settings.get().getString(CERT_AUTH_DIR));

  if (caFile.empty() && caDir.empty())
    return true;

  if (!SSL_CTX_load_verify_locations(m_ctx,caFile.empty() ? 0 : caFile.c_str(),
                                     caDir.empty() ? 0 : caDir.c_str()) ||
      !SSL_CTX_set_default_verify_paths(m_ctx)) {
    errStr.assign(
        "Unable to configure verify locations for client authentication");
    return false;
  }

  STACK_OF(X509_NAME) * caList;
  if ((caList = findCAList(caFile.empty() ? 0 : caFile.c_str(),
                           caDir.empty() ? 0 : caDir.c_str())) == 0) {
    errStr.assign("Unable to determine list of available CA certificates "
                  "for client authentication");
    return false;
  }
  SSL_CTX_set_client_CA_list(m_ctx, caList);

  if (m_settings.get().has(VERIFY_LEVEL))
    m_verify = (m_settings.get().getInt(VERIFY_LEVEL));

  if (m_verify != SSL_CLIENT_VERIFY_NOTSET) {
    /* configure new state */
    int cVerify = SSL_VERIFY_NONE;
    if (m_verify == SSL_CLIENT_VERIFY_REQUIRE)
      cVerify |= SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT;
    else if (m_verify == SSL_CLIENT_VERIFY_OPTIONAL)
      cVerify |= SSL_VERIFY_PEER;

    SSL_CTX_set_verify(m_ctx, cVerify, callbackVerify);
  }

  return true;
}

bool ThreadedSSLSocketAcceptor::loadCRLInfo(std::string &errStr) {
  getLog()->onEvent("Loading CRL information");

  errStr.erase();

  std::string crlFile;
  if (m_settings.get().has(CRL_FILE))
    crlFile.assign(m_settings.get().getString(CRL_FILE));

  std::string crlDir;
  if (m_settings.get().has(CRL_DIR))
    crlDir.assign(m_settings.get().getString(CRL_DIR));

  if (crlFile.empty() && crlDir.empty())
    return true;

  m_revocationStore =
      createX509Store(crlFile.c_str(), crlDir.empty() ? 0 : crlDir.c_str());
  if (m_revocationStore == 0) {
    errStr.assign("Unable to create revocation store");
    return false;
  }

  return true;
}

X509 *ThreadedSSLSocketAcceptor::readX509(FILE *fp, X509 **x509,
                                          passPhraseHandleCallbackType cb) {
  X509 *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_X509(fp, x509, cb, 0);
  if (rc == 0) {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0) {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_X509_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0) {
      /* 3. try plain DER */
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_X509_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && x509 != 0) {
    if (*x509 != 0)
      X509_free(*x509);
    *x509 = rc;
  }
  return rc;
}

EVP_PKEY *
ThreadedSSLSocketAcceptor::readPrivateKey(FILE *fp, EVP_PKEY **key,
                                          passPhraseHandleCallbackType cb) {
  EVP_PKEY *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_PrivateKey(fp, key, cb, 0);
  if (rc == 0) {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0) {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_PrivateKey_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0) {
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_PrivateKey_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && key != 0) {
    if (*key != 0)
      EVP_PKEY_free(*key);
    *key = rc;
  }
  return rc;
}

X509_STORE *ThreadedSSLSocketAcceptor::createX509Store(const char *cpFile,
                                                       const char *cpPath) {
  X509_STORE *pStore;
  X509_LOOKUP *pLookup;

  if (cpFile == 0 && cpPath == 0)
    return 0;
  if ((pStore = X509_STORE_new()) == 0)
    return 0;
  if (cpFile != 0) {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_file())) == 0) {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_load_file(pLookup, cpFile, X509_FILETYPE_PEM);
  }
  if (cpPath != 0) {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_hash_dir())) ==
        0) {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_add_dir(pLookup, cpPath, X509_FILETYPE_PEM);
  }
  return pStore;
}

bool ThreadedSSLSocketAcceptor::onPoll(double timeout) { return false; }

void ThreadedSSLSocketAcceptor::onStop() {
  SocketToThread threads;
  SocketToThread::iterator i;

  {
    Locker l(m_mutex);

    time_t start = 0;
    time_t now = 0;

    ::time(&start);
    while (isLoggedOn()) {
      if (::time(&now) - 5 >= start)
        break;
    }

    threads = m_threads;
    m_threads.clear();
  }

  for (i = threads.begin(); i != threads.end(); ++i)
    ssl_socket_close(i->first.first, i->first.second);
  for (i = threads.begin(); i != threads.end(); ++i) {
    thread_join(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
  }
}

void ThreadedSSLSocketAcceptor::addThread(SocketKey s, thread_id t) {
  Locker l(m_mutex);

  m_threads[s] = t;
}

void ThreadedSSLSocketAcceptor::removeThread(SocketKey s) {
  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find(s);
  if (i != m_threads.end()) {
    thread_detach(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
    m_threads.erase(i);
  }
}

THREAD_PROC ThreadedSSLSocketAcceptor::socketAcceptorThread(void *p) {
  AcceptorThreadInfo *info = reinterpret_cast<AcceptorThreadInfo *>(p);

  ThreadedSSLSocketAcceptor *pAcceptor = info->m_pAcceptor;
  int s = info->m_socket;
  int port = info->m_port;
  delete info;

  int noDelay = 0;
  int sendBufSize = 0;
  int rcvBufSize = 0;
  socket_getsockopt(s, TCP_NODELAY, noDelay);
  socket_getsockopt(s, SO_SNDBUF, sendBufSize);
  socket_getsockopt(s, SO_RCVBUF, rcvBufSize);

  int socket = 0;
  while ((!pAcceptor->isStopped() && (socket = socket_accept(s)) >= 0)) {
    if (noDelay)
      socket_setsockopt(socket, TCP_NODELAY);
    if (sendBufSize)
      socket_setsockopt(socket, SO_SNDBUF, sendBufSize);
    if (rcvBufSize)
      socket_setsockopt(socket, SO_RCVBUF, rcvBufSize);

    Sessions sessions = pAcceptor->m_portToSessions[port];

    SSL *ssl = SSL_new(pAcceptor->sslContext());
    ThreadedSSLSocketConnection *pConnection = new ThreadedSSLSocketConnection(
        socket, ssl, sessions, pAcceptor->getLog());
    SSL_clear(ssl);
    BIO *sBio = BIO_new_socket(socket, BIO_CLOSE);
    SSL_set_bio(ssl, sBio, sBio);
    // TODO - check this
    SSL_set_app_data(ssl, pAcceptor->revocationStore());
    SSL_set_verify_result(ssl, X509_V_OK);

    ConnectionThreadInfo *info =
        new ConnectionThreadInfo(pAcceptor, pConnection);

    {
      Locker l(pAcceptor->m_mutex);

      std::stringstream stream;
      stream << "Accepted connection from " << socket_peername(socket)
             << " on port " << port;

      if (pAcceptor->getLog())
        pAcceptor->getLog()->onEvent(stream.str());

      thread_id thread;
      if (!thread_spawn(&socketConnectionThread, info, thread)) {
        delete info;
        delete pConnection;
        SSL_free(ssl);
      } else
        pAcceptor->addThread(SocketKey(socket, ssl), thread);
    }
  }

  if (!pAcceptor->isStopped())
    pAcceptor->removeThread(SocketKey(s, 0));

  return 0;
}

THREAD_PROC ThreadedSSLSocketAcceptor::socketConnectionThread(void *p) {
  ConnectionThreadInfo *info = reinterpret_cast<ConnectionThreadInfo *>(p);

  ThreadedSSLSocketAcceptor *pAcceptor = info->m_pAcceptor;
  ThreadedSSLSocketConnection *pConnection = info->m_pConnection;
  delete info;

  int socket = pConnection->getSocket();

  if (pAcceptor->newConnection(pConnection) != 0) {
    if (pAcceptor->getLog())
      pAcceptor->getLog()->onEvent("Failed to accept new SSL connection");
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    if (!pAcceptor->isStopped())
      pAcceptor->removeThread(SocketKey(socket, ssl));
    return 0;
  }

  while (pConnection->read()) {
  }
  SSL *ssl = pConnection->sslObject();
  delete pConnection;
  if (!pAcceptor->isStopped())
    pAcceptor->removeThread(SocketKey(socket, ssl));
  return 0;
}

int ThreadedSSLSocketAcceptor::doAccept(SSL *ssl, int &result) {

  //Not sure if a lock is required here anymore. But there used to
  //be a bug and boost asio still has a lock as well.
  Locker l(m_acceptMutex);

  int rc = SSL_accept(ssl);
  if (rc <= 0) {
    result = SSL_get_error(ssl, rc);
  }

  return rc;
}

int ThreadedSSLSocketAcceptor::newConnection(
    ThreadedSSLSocketConnection *pConnection) {

  int rc;
  int result = -1;
  char *subjName = 0;
  time_t timeout = time(0) + 10;
  int socket = pConnection->getSocket();

  SSL *ssl = pConnection->sslObject();

  /*
   * Now enter the SSL Handshake Phase
   */
  while (!SSL_is_init_finished(ssl)) {
    ERR_clear_error();
    while ((rc = doAccept(ssl, result)) <= 0) {

      if (result == SSL_ERROR_WANT_READ)
        ;
      else if (result == SSL_ERROR_WANT_WRITE)
        ;
      else if (result == SSL_ERROR_ZERO_RETURN) {
        /*
         * The case where the connection was closed before any data
         * was transferred. That's not a real error and can occur
         * sporadically with some clients.
         */
        getLog()->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      } else if (ERR_GET_REASON(ERR_peek_error()) == SSL_R_HTTP_REQUEST) {
        /*
         * The case where OpenSSL has recognized a HTTP request:
         * This means the client speaks plain HTTP on our HTTPS
         * port. Hmmmm...  At least for this error we can be more friendly
         * and try to provide him with a HTML error page. We have only one
         * problem: OpenSSL has already read some bytes from the HTTP
         * request. So we have to skip the request line manually and
         * instead provide a faked one in order to continue the internal
         * Apache processing.
         *
         */
        char ca[2];
        int rv;

        /* log the situation */
        getLog()->onEvent("SSL handshake failed: HTTP spoken on HTTPS port");

        /* first: skip the remaining bytes of the request line */
        do {
#ifndef _MSC_VER // Unix
          do {
            rv = read(socket, ca, 1);
          } while (rv == -1 && errno == EINTR);
#else // Windows
          do {
            rv = recv(socket, ca, 1, 0);
          } while (rv == -1 && errno == EINTR);
#endif
        } while (rv > 0 && ca[0] != '\012' /*LF*/);

        SSL_set_shutdown(ssl, SSL_SENT_SHUTDOWN | SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        ;
        return result;
      } else if (result == SSL_ERROR_SYSCALL) {
#ifdef AIX
        if (errno == EINTR)
          continue;
        else if (errno == EAGAIN) {
          // Please refer:
          // http://community.emailogy.com/scripts/wa-COMMUNITY.exe?A2=ind0303&L=lstsrv-l&O=A&P=19558
          // http://mirt.net/pipermail/stunnel-users/2007-May/001570.html
          ++retries;
          if (retries <= 100) {
            getLog()->onEvent(
                "EAGAIN received during SSL handshake, trying again");
            process_sleep(0.005);
            continue;
          }
        }
        if (errno > 0) {
          getLog()->onEvent(std::string("SSL handshake interrupted by system, errno " + IntConvertor::convert(errno));
        } else
          getLog()->onEvent("Spurious SSL handshake interrupt");
#elif defined(_MSC_VER)
        // MS Windows will not set errno, but WSEGetLastError() must be queried
        int lastSocketError = WSAGetLastError();
        if ((lastSocketError == WSAEINTR) ||
            (lastSocketError == WSAEWOULDBLOCK))
          continue;
        getLog()->onEvent(
            std::string("SSL handshake interrupted by system, system error ") +
            IntConvertor::convert(lastSocketError) + " socket " +
            IntConvertor::convert(socket));

#else
        if (errno == EINTR)
          continue;
        if (errno > 0) {
          getLog()->onEvent(
              std::string("SSL handshake interrupted by system, errno ") +
              IntConvertor::convert(errno));
        } else
          getLog()->onEvent("Spurious SSL handshake interrupt");
#endif
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      } else {
        /*
         * Ok, anything else is a fatal error
         */
        unsigned long err = ERR_get_error();
        getLog()->onEvent("SSL handshake failed");

        while (err) {
          getLog()->onEvent(std::string("SSL failure reason: ") +
                            ERR_reason_error_string(err));
          err = ERR_get_error();
        }

        /*
         * try to gracefully shutdown the connection:
         * - send an own shutdown message (be gracefully)
         * - don't wait for peer's shutdown message (deadloop)
         * - kick away the SSL stuff immediately
         */
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      if (time(0) > timeout) {
        getLog()->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      process_sleep(0.01);
    }

    X509 *xs = 0;

    /*
     * Check for failed client authentication
     */
    if ((result = SSL_get_verify_result(ssl)) != X509_V_OK) {
      getLog()->onEvent("SSL client authentication failed: ");
      SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
      ssl_socket_close(socket, ssl);
      return result;
    } else {
      if ((xs = SSL_get_peer_certificate(ssl)) != 0) {
        subjName = X509_NAME_oneline(X509_get_subject_name(xs), 0, 0);
      }
    }
  }

  if ((m_verify == SSL_CLIENT_VERIFY_REQUIRE) && subjName == 0) {
    getLog()->onEvent("No acceptable peer certificate available");
    SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
    ssl_socket_close(socket, ssl);
    result = 2;
  }

  if (subjName)
    free(subjName);

  return result;
}
}

#endif
