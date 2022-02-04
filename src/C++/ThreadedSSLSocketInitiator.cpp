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

#include "UtilitySSL.h"
#include "ThreadedSSLSocketInitiator.h"
#include "Session.h"
#include "Settings.h"

namespace FIX
{

int ThreadedSSLSocketInitiator::passwordHandleCB(char *buf, int bufsize, int verify, void *instance)
{
  return reinterpret_cast<ThreadedSSLSocketInitiator*>(instance)->passwordHandleCallback(buf, bufsize, verify);
}

ThreadedSSLSocketInitiator::ThreadedSSLSocketInitiator(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings) EXCEPT (ConfigError)
    : Initiator(application, factory, settings), m_lastConnect(0),
      m_reconnectInterval(30), m_noDelay(false), m_sendBufSize(0),
      m_rcvBufSize(0), m_sslInit(false), m_ctx(0), m_cert(0), m_key(0)
{
  socket_init();
}

ThreadedSSLSocketInitiator::ThreadedSSLSocketInitiator(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings, LogFactory &logFactory) EXCEPT (ConfigError)
    : Initiator(application, factory, settings, logFactory), m_lastConnect(0),
      m_reconnectInterval(30), m_noDelay(false), m_sendBufSize(0),
      m_rcvBufSize(0), m_sslInit(false), m_ctx(0), m_cert(0), m_key(0)
{
  socket_init();
}

ThreadedSSLSocketInitiator::~ThreadedSSLSocketInitiator()
{
  if (m_sslInit)
  {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }

  socket_term();
}

void ThreadedSSLSocketInitiator::onConfigure(const SessionSettings &s) EXCEPT (ConfigError)
{
  const Dictionary &dict = s.get();

  if (dict.has(RECONNECT_INTERVAL))
    m_reconnectInterval = dict.getInt(RECONNECT_INTERVAL);
  if (dict.has(SOCKET_NODELAY))
    m_noDelay = dict.getBool(SOCKET_NODELAY);
  if (dict.has(SOCKET_SEND_BUFFER_SIZE))
    m_sendBufSize = dict.getInt(SOCKET_SEND_BUFFER_SIZE);
  if (dict.has(SOCKET_RECEIVE_BUFFER_SIZE))
    m_rcvBufSize = dict.getInt(SOCKET_RECEIVE_BUFFER_SIZE);
}

void ThreadedSSLSocketInitiator::onInitialize(const SessionSettings &s) EXCEPT (RuntimeError)
{
  if (m_sslInit)
    return;

  ssl_init();

  std::string errStr;

  /* set up the application context */
  if ((m_ctx = createSSLContext(false, m_settings, errStr)) == 0)
  {
    throw RuntimeError(errStr);
  }

  if (m_cert && m_key)
  {
    if (SSL_CTX_use_certificate(m_ctx, m_cert) < 1)
    {
      ssl_term();
      throw RuntimeError("Failed to set certificate");
    }

    if (SSL_CTX_use_RSAPrivateKey(m_ctx, m_key) <= 0)
    {
      ssl_term();
      throw RuntimeError("Failed to set key");
    }
  }
  else if (!loadSSLCert(m_ctx, false, m_settings, getLog(), ThreadedSSLSocketInitiator::passwordHandleCB, this, errStr))
  {
    ssl_term();
    throw RuntimeError(errStr);
  }

  int verifyLevel;
  if (!loadCAInfo(m_ctx, false, m_settings, getLog(), errStr, verifyLevel))
  {
    ssl_term();
    throw RuntimeError(errStr);
  }

  m_sslInit = true;
}

void ThreadedSSLSocketInitiator::onStart()
{
  while (!isStopped())
  {
    time_t now;
    ::time(&now);

    if ((now - m_lastConnect) >= m_reconnectInterval)
    {
      Locker l(m_mutex);
      connect();
      m_lastConnect = now;
    }

    process_sleep(1);
  }
}

bool ThreadedSSLSocketInitiator::onPoll(double timeout) { return false; }

void ThreadedSSLSocketInitiator::onStop()
{
  SocketToThread threads;
  SocketToThread::iterator i;

  {
    Locker l(m_mutex);

    time_t start = 0;
    time_t now = 0;

    ::time(&start);
    while (isLoggedOn())
    {
      if (::time(&now) - 5 >= start)
        break;
    }

    threads = m_threads;
    m_threads.clear();
  }

  for (i = threads.begin(); i != threads.end(); ++i)
    ssl_socket_close(i->first.first, i->first.second);

  for (i = threads.begin(); i != threads.end(); ++i)
  {
    thread_join(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
  }
  threads.clear();
}

void ThreadedSSLSocketInitiator::doConnect(const SessionID &s,
                                           const Dictionary &d)
{
  try
  {
    Session *session = Session::lookupSession(s);
    if (!session->isSessionTime(UtcTimeStamp()))
      return;

    Log *log = session->getLog();

    std::string address;
    short port = 0;
    getHost(s, d, address, port);

    socket_handle socket = socket_createConnector();
    if (m_noDelay)
      socket_setsockopt(socket, TCP_NODELAY);
    if (m_sendBufSize)
      socket_setsockopt(socket, SO_SNDBUF, m_sendBufSize);
    if (m_rcvBufSize)
      socket_setsockopt(socket, SO_RCVBUF, m_rcvBufSize);

    setPending(s);
    log->onEvent("Connecting to " + address + " on port " +
                 IntConvertor::convert((unsigned short)port));

    SSL *ssl = SSL_new(m_ctx);
    if (ssl == 0)
    {
      log->onEvent("Failed to create ssl object");
      return;
    }
    SSL_clear(ssl);
    BIO *sbio = BIO_new_socket(socket, BIO_CLOSE); //unfortunately OpenSSL uses int for socket handles
    SSL_set_bio(ssl, sbio, sbio);

    ThreadedSSLSocketConnection *pConnection = new ThreadedSSLSocketConnection(
        s, socket, ssl, address, port, getLog());

    ThreadPair *pair = new ThreadPair(this, pConnection);

    {
      Locker l(m_mutex);
      thread_id thread;
      if (thread_spawn(&socketThread, pair, thread))
      {
        addThread(SocketKey(socket, ssl), thread);
      }
      else
      {
        delete pair;
        pConnection->disconnect();
        delete pConnection;
        SSL_free(ssl);
        setDisconnected(s);
      }
    }
  }
  catch (std::exception &)
  {
  }
}

void ThreadedSSLSocketInitiator::addThread(SocketKey s, thread_id t)
{
  Locker l(m_mutex);

  m_threads[s] = t;
}

void ThreadedSSLSocketInitiator::removeThread(SocketKey s)
{
  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find(s);

  if (i != m_threads.end())
  {
    thread_detach(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
    m_threads.erase(i);
  }
}

THREAD_PROC ThreadedSSLSocketInitiator::socketThread(void *p)
{
  ThreadPair *pair = reinterpret_cast< ThreadPair * >(p);

  ThreadedSSLSocketInitiator *pInitiator = pair->first;
  ThreadedSSLSocketConnection *pConnection = pair->second;
  FIX::SessionID sessionID = pConnection->getSession()->getSessionID();
  FIX::Session *pSession = FIX::Session::lookupSession(sessionID);
  socket_handle socket = pConnection->getSocket();
  delete pair;

  pInitiator->lock();

  if (!pConnection->connect())
  {
    pInitiator->getLog()->onEvent("Connection failed");
    pConnection->disconnect();
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    pInitiator->removeThread(SocketKey(socket, ssl));
    pInitiator->setDisconnected(sessionID);
    return 0;
  }

  // Do the SSL handshake.
  int rc = SSL_connect(pConnection->sslObject());
  if (rc <= 0)
  {
    int err = SSL_get_error(pConnection->sslObject(), rc);
    pInitiator->getLog()->onEvent("SSL_connect failed with SSL error " + IntConvertor::convert(err));
    pConnection->disconnect();
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    pInitiator->removeThread(SocketKey(socket, ssl));
    pInitiator->setDisconnected(sessionID);
    return 0;
  }

  pInitiator->setConnected(sessionID);
  pInitiator->getLog()->onEvent("Connection succeeded");

  pSession->next();

  while (pConnection->read())
  {
  }

  SSL *ssl = pConnection->sslObject();
  delete pConnection;
  if (!pInitiator->isStopped())
    pInitiator->removeThread(SocketKey(socket, ssl));

  pInitiator->setDisconnected(sessionID);
  return 0;
}

void ThreadedSSLSocketInitiator::getHost(const SessionID &s,
                                         const Dictionary &d,
                                         std::string &address, short &port)
{
  int num = 0;
  SessionToHostNum::iterator i = m_sessionToHostNum.find(s);
  if (i != m_sessionToHostNum.end())
    num = i->second;

  std::stringstream hostStream;
  hostStream << SOCKET_CONNECT_HOST << num;
  std::string hostString = hostStream.str();

  std::stringstream portStream;
  portStream << SOCKET_CONNECT_PORT << num;
  std::string portString = portStream.str();

  if (d.has(hostString) && d.has(portString))
  {
    address = d.getString(hostString);
    port = (short)d.getInt(portString);
  }
  else
  {
    num = 0;
    address = d.getString(SOCKET_CONNECT_HOST);
    port = (short)d.getInt(SOCKET_CONNECT_PORT);
  }

  m_sessionToHostNum[s] = ++num;
}

int ThreadedSSLSocketInitiator::passwordHandleCallback(char *buf, size_t bufsize,
                                                       int verify)
{
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif
