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

#include "SSLSocketInitiator.h"
#include "Session.h"
#include "Settings.h"

namespace FIX {

int SSLSocketInitiator::passwordHandleCB(char *buf, int bufsize, int verify, void *instance) {
  return reinterpret_cast<SSLSocketInitiator *>(instance)->passwordHandleCallback(buf, bufsize, verify);
}

SSLSocketInitiator::SSLSocketInitiator(
    Application &application,
    MessageStoreFactory &factory,
    const SessionSettings &settings) EXCEPT(ConfigError)
    : Initiator(application, factory, settings),
      m_connector(1),
      m_lastConnect(0),
      m_reconnectInterval(30),
      m_noDelay(false),
      m_sendBufSize(0),
      m_rcvBufSize(0),
      m_sslInit(false),
      m_ctx(0),
      m_cert(0),
      m_key(0) {}

SSLSocketInitiator::SSLSocketInitiator(
    Application &application,
    MessageStoreFactory &factory,
    const SessionSettings &settings,
    LogFactory &logFactory) EXCEPT(ConfigError)
    : Initiator(application, factory, settings, logFactory),
      m_connector(1),
      m_lastConnect(0),
      m_reconnectInterval(30),
      m_noDelay(false),
      m_sendBufSize(0),
      m_rcvBufSize(0),
      m_sslInit(false),
      m_ctx(0),
      m_cert(0),
      m_key(0) {}

SSLSocketInitiator::~SSLSocketInitiator() {
  for (const SocketConnections::value_type &connection : m_connections) {
    delete connection.second;
  }

  for (const SocketConnections::value_type &connection : m_pendingConnections) {
    delete connection.second;
  }

  for (const SocketConnections::value_type &connection : m_pendingSSLHandshakes) {
    delete connection.second;
  }

  if (m_sslInit) {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }
}

void SSLSocketInitiator::onConfigure(const SessionSettings &s) EXCEPT(ConfigError) {
  const Dictionary &dict = s.get();

  if (dict.has(RECONNECT_INTERVAL)) // ReconnectInterval in [DEFAULT]
  {
    m_reconnectInterval = dict.getInt(RECONNECT_INTERVAL);
  }
  if (dict.has(SOCKET_NODELAY)) {
    m_noDelay = dict.getBool(SOCKET_NODELAY);
  }
  if (dict.has(SOCKET_SEND_BUFFER_SIZE)) {
    m_sendBufSize = dict.getInt(SOCKET_SEND_BUFFER_SIZE);
  }
  if (dict.has(SOCKET_RECEIVE_BUFFER_SIZE)) {
    m_rcvBufSize = dict.getInt(SOCKET_RECEIVE_BUFFER_SIZE);
  }
}

void SSLSocketInitiator::onInitialize(const SessionSettings &s) EXCEPT(RuntimeError) {
  if (m_sslInit) {
    return;
  }

  ssl_init();

  std::string errStr;

  /* set up the application context */
  if ((m_ctx = createSSLContext(false, s, errStr)) == 0) {
    throw RuntimeError(errStr);
  }

  if (m_cert && m_key) {
    if (SSL_CTX_use_certificate(m_ctx, m_cert) < 1) {
      ssl_term();
      throw RuntimeError("Failed to set certificate");
    }

    if (SSL_CTX_use_RSAPrivateKey(m_ctx, m_key) <= 0) {
      ssl_term();
      throw RuntimeError("Failed to set key");
    }
  } else if (!loadSSLCert(m_ctx, false, s, getLog(), SSLSocketInitiator::passwordHandleCB, this, errStr)) {
    ssl_term();
    throw RuntimeError(errStr);
  }

  int verifyLevel;
  if (!loadCAInfo(m_ctx, false, s, getLog(), errStr, verifyLevel)) {
    ssl_term();
    throw RuntimeError(errStr);
  }

  m_sslInit = true;
}

void SSLSocketInitiator::onStart() {
  connect();

  while (!isStopped()) {
    m_connector.block(*this, false, 1.0);
    onTimeout(m_connector);
  }

  time_t start = 0;
  time_t now = 0;

  ::time(&start);
  while (isLoggedOn()) {
    m_connector.block(*this);
    if (::time(&now) - 5 >= start) {
      break;
    }
  }
}

bool SSLSocketInitiator::onPoll() {
  time_t start = 0;
  time_t now = 0;

  if (isStopped()) {
    if (start == 0) {
      ::time(&start);
    }
    if (!isLoggedOn()) {
      return false;
    }
    if (::time(&now) - 5 >= start) {
      return false;
    }
  }

  m_connector.block(*this, true);
  return true;
}

void SSLSocketInitiator::onStop() {}

void SSLSocketInitiator::doConnect(const SessionID &sessionID, const Dictionary &dictionary) {
  try {

    Session *session = Session::lookupSession(sessionID);
    if (!session->isSessionTime(UtcTimeStamp::now())) {
      return;
    }

    Log *log = session->getLog();

    HostDetails host = m_hostDetailsProvider.getHost(sessionID, dictionary);
    if (d.has(RECONNECT_INTERVAL)) // ReconnectInterval in [SESSION]
    {
      m_reconnectInterval = d.getInt(RECONNECT_INTERVAL);
    }

    log->onEvent(
        "Connecting to " + host.address + " on port " + IntConvertor::convert((unsigned short)host.port) + " (Source "
        + host.sourceAddress + ":" + IntConvertor::convert((unsigned short)host.sourcePort)
        + ") ReconnectInterval=" + IntConvertor::convert((int)m_reconnectInterval));
    socket_handle result = m_connector.connect(
        host.address,
        host.port,
        m_noDelay,
        m_sendBufSize,
        m_rcvBufSize,
        host.sourceAddress,
        host.sourcePort);

    log->onEvent("Socket created with handle:" + std::to_string(result));

    SSL *ssl = SSL_new(m_ctx);
    if (ssl == 0) {
      log->onEvent("Failed to create ssl object");
      return;
    }
    SSL_clear(ssl);
    BIO *sbio = BIO_new_socket(result, BIO_NOCLOSE); // unfortunately OpenSSL assumes socket is int

    if (sbio == 0) {
      log->onEvent("BIO_new_socket failed");
      return;
    }
    SSL_set_bio(ssl, sbio, sbio);

    setPending(sessionID);
    m_pendingConnections[result] = new SSLSocketConnection(*this, sessionID, result, ssl, &m_connector.getMonitor());
  } catch (std::exception &ex) {
    getLog()->onEvent(ex.what());
  }
}

SSLHandshakeStatus SSLSocketInitiator::handshakeSSL(SSLSocketConnection *connection) {
  SSL *ssl = connection->sslObject();
  ERR_clear_error();
  // Do the SSL handshake.
  int rc = SSL_connect(ssl);
  if (rc <= 0) {
    int err = SSL_get_error(ssl, rc);
    if ((err == SSL_ERROR_WANT_READ) || (err == SSL_ERROR_WANT_WRITE)) {
      errno = EINTR;

      if (err == SSL_ERROR_WANT_WRITE) {
        connection->subscribeToSocketWriteAvailableEvents();
      }
      return SSL_HANDSHAKE_IN_PROGRESS;
    } else if (err == SSL_ERROR_SYSCALL) {
      getLog()->onEvent("SSL_connect failed with SSL error " + IntConvertor::convert(err) + ". Error stack:");

      char errorBuffer[512];
      unsigned long systemError;

      while ((systemError = ERR_get_error()) != 0) {
        ERR_error_string_n(systemError, errorBuffer, sizeof(errorBuffer));
        getLog()->onEvent(errorBuffer);
      }
      getLog()->onEvent("End of error stack");

      getLog()->onEvent(socket_get_last_error());

      return SSL_HANDSHAKE_FAILED;
    } else {
      getLog()->onEvent("SSL_connect failed with SSL error " + IntConvertor::convert(err));
      return SSL_HANDSHAKE_FAILED;
    }
  }

  return SSL_HANDSHAKE_SUCCEDED;
}

void SSLSocketInitiator::onConnect(SocketConnector &connector, socket_handle socket) {
  getLog()->onEvent("Socket connected handle: " + std::to_string(socket));

  time_t now;
  ::time(&now);

  SocketConnections::iterator i = m_pendingConnections.find(socket);
  if (i == m_pendingConnections.end()) {
    return;
  }
  SSLSocketConnection *pSocketConnection = i->second;

  m_pendingConnections.erase(i);
  m_pendingSSLHandshakes[socket] = pSocketConnection;
  pSocketConnection->setHandshakeStartTime(now);

  handshakeSSLAndHandleConnection(connector, socket);
}

void SSLSocketInitiator::handshakeSSLAndHandleConnection(SocketConnector &connector, socket_handle socket) {
  SocketConnections::iterator i = m_pendingSSLHandshakes.find(socket);
  if (i == m_pendingSSLHandshakes.end()) {
    return;
  }
  SSLSocketConnection *pSocketConnection = i->second;

  SSLHandshakeStatus sslHandshakeStatus = handshakeSSL(pSocketConnection);

  if (sslHandshakeStatus == SSL_HANDSHAKE_SUCCEDED) {
    m_connections[socket] = pSocketConnection;
    m_pendingSSLHandshakes.erase(i);
    setConnected(pSocketConnection->getSession()->getSessionID());
    pSocketConnection->onTimeout();
  } else if (sslHandshakeStatus == SSL_HANDSHAKE_FAILED) {
    setDisconnected(pSocketConnection->getSession()->getSessionID());

    Session *pSession = pSocketConnection->getSession();
    if (pSession) {
      pSession->disconnect();
      setDisconnected(pSession->getSessionID());
    }

    delete pSocketConnection;
    m_pendingSSLHandshakes.erase(i);

    getLog()->onEvent("Socket deleted due to ssl handshake error");
  }
}

void SSLSocketInitiator::onWrite(SocketConnector &connector, socket_handle socket) {
  SocketConnections::iterator iPendingSSL = m_pendingSSLHandshakes.find(socket);
  if (iPendingSSL != m_pendingSSLHandshakes.end()) {
    SSLSocketConnection *pSocketConnection = iPendingSSL->second;
    pSocketConnection->unsignal();
    handshakeSSLAndHandleConnection(connector, socket);
    return;
  }

  SocketConnections::iterator i = m_connections.find(socket);
  if (i == m_connections.end()) {
    return;
  }
  SSLSocketConnection *pSocketConnection = i->second;

  if (pSocketConnection->didReadFromSocketRequestToWrite()) {
    pSocketConnection->read(connector);
  }

  if (pSocketConnection->processQueue()) {
    pSocketConnection->unsignal();
  }
}

bool SSLSocketInitiator::onData(SocketConnector &connector, socket_handle socket) {
  SocketConnections::iterator iPending = m_pendingSSLHandshakes.find(socket);
  if (iPending != m_pendingSSLHandshakes.end()) {
    handshakeSSLAndHandleConnection(connector, socket);
    return true;
  }

  SocketConnections::iterator i = m_connections.find(socket);
  if (i == m_connections.end()) {
    return false;
  }
  SSLSocketConnection *pSocketConnection = i->second;

  if (pSocketConnection->didProcessQueueRequestToRead()) {
    pSocketConnection->processQueue();
    pSocketConnection->signal();
  }

  return pSocketConnection->read(connector);
}

void SSLSocketInitiator::onDisconnect(SocketConnector &, socket_handle socket) {
  getLog()->onEvent("Socket disconnect " + std::to_string(socket));
  SocketConnections::iterator i = m_connections.find(socket);
  SocketConnections::iterator j = m_pendingConnections.find(socket);
  SocketConnections::iterator k = m_pendingSSLHandshakes.find(socket);

  SSLSocketConnection *pSocketConnection = 0;
  if (i != m_connections.end()) {
    pSocketConnection = i->second;
  }
  if (j != m_pendingConnections.end()) {
    pSocketConnection = j->second;
  }
  if (k != m_pendingSSLHandshakes.end()) {
    pSocketConnection = k->second;
  }

  if (!pSocketConnection) {
    return;
  }

  Session *pSession = pSocketConnection->getSession();
  if (pSession) {
    pSession->disconnect();
    setDisconnected(pSession->getSessionID());
  }

  delete pSocketConnection;
  m_connections.erase(socket);
  m_pendingConnections.erase(socket);
  m_pendingSSLHandshakes.erase(socket);
}

void SSLSocketInitiator::onError(SocketConnector &connector) {
  getLog()->onEvent("Socket error " + socket_get_last_error());
  onTimeout(connector);
}

void SSLSocketInitiator::onTimeout(SocketConnector &) {
  time_t now;
  ::time(&now);

  disconnectPendingSSLHandshakesThatTakeTooLong(now);

  if ((now - m_lastConnect) >= m_reconnectInterval) {
    connect();
    m_lastConnect = now;
  }

  SocketConnections::iterator i;
  for (i = m_connections.begin(); i != m_connections.end(); ++i) {
    i->second->onTimeout();
  }
}

void SSLSocketInitiator::disconnectPendingSSLHandshakesThatTakeTooLong(time_t now) {
  SocketConnections::iterator iPendingSSL;
  for (iPendingSSL = m_pendingSSLHandshakes.begin(); iPendingSSL != m_pendingSSLHandshakes.end();) {
    FIX::SSLSocketConnection *pSocketConnection = iPendingSSL->second;

    if (pSocketConnection->getSecondsFromHandshakeStart(now) > 10) {
      getLog()->onEvent("SSL Handshake took too long to complete");

      setDisconnected(pSocketConnection->getSession()->getSessionID());

      Session *pSession = pSocketConnection->getSession();
      if (pSession) {
        pSession->disconnect();
        setDisconnected(pSession->getSessionID());
      }

      delete pSocketConnection;

      iPendingSSL = m_pendingSSLHandshakes.erase(iPendingSSL);
    } else {
      ++iPendingSSL;
    }
  }
}

int SSLSocketInitiator::passwordHandleCallback(char *buf, size_t bufsize, int verify) {
  if (m_password.length() > bufsize) {
    return -1;
  }

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
} // namespace FIX

#endif
