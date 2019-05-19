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

namespace FIX
{

FIX::ThreadedSSLSocketAcceptor *acceptObjT = 0;

int ThreadedSSLSocketAcceptor::passPhraseHandleCB(char *buf, int bufsize, int verify, void *job)
{
  return acceptObjT->passwordHandleCallback(buf, bufsize, verify, job);
}

ThreadedSSLSocketAcceptor::ThreadedSSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings) EXCEPT (ConfigError)
    : Acceptor(application, factory, settings), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
  socket_init();
  acceptObjT = this;
}

ThreadedSSLSocketAcceptor::ThreadedSSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings, LogFactory &logFactory) EXCEPT (ConfigError)
    : Acceptor(application, factory, settings, logFactory), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
  socket_init();
  acceptObjT = this;
}

ThreadedSSLSocketAcceptor::~ThreadedSSLSocketAcceptor()
{
  if (m_sslInit)
  {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }

  socket_term();
}

void ThreadedSSLSocketAcceptor::onConfigure(const SessionSettings &s) EXCEPT (ConfigError)
{
  std::set< SessionID > sessions = s.getSessions();
  std::set< SessionID >::iterator i;
  for (i = sessions.begin(); i != sessions.end(); ++i)
  {
    const Dictionary &settings = s.get(*i);
    settings.getInt(SOCKET_ACCEPT_PORT);
    if (settings.has(SOCKET_REUSE_ADDRESS))
      settings.getBool(SOCKET_REUSE_ADDRESS);
    if (settings.has(SOCKET_NODELAY))
      settings.getBool(SOCKET_NODELAY);
  }
}

void ThreadedSSLSocketAcceptor::onInitialize(const SessionSettings &s) EXCEPT (RuntimeError)
{
  if (!m_sslInit)
  {

    ssl_init();

    std::string errStr;

    /* set up the application context */
    if ((m_ctx = createSSLContext(true, m_settings, errStr)) == 0)
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    if (!loadSSLCert(m_ctx, true, m_settings, getLog(), ThreadedSSLSocketAcceptor::passPhraseHandleCB, errStr))
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    if (!loadCAInfo(m_ctx, true, m_settings, getLog(), errStr, m_verify))
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    m_revocationStore = loadCRLInfo(m_ctx, m_settings, getLog(), errStr);
    if (!m_revocationStore && !errStr.empty())
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    m_sslInit = true;
  }

  short port = 0;
  std::set< int > ports;

  std::set< SessionID > sessions = s.getSessions();
  std::set< SessionID >::iterator i = sessions.begin();
  for (; i != sessions.end(); ++i)
  {
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

    socket_handle socket = socket_createAcceptor(port, reuseAddress);
    if (socket == INVALID_SOCKET_HANDLE)
    {
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

void ThreadedSSLSocketAcceptor::onStart()
{
  Sockets::iterator i;
  for (i = m_sockets.begin(); i != m_sockets.end(); ++i)
  {
    Locker l(m_mutex);
    int port = m_socketToPort[*i];
    AcceptorThreadInfo *info = new AcceptorThreadInfo(this, *i, port);
    thread_id thread;
    thread_spawn(&socketAcceptorThread, info, thread);
    addThread(SocketKey(*i, 0), thread);
  }
}

bool ThreadedSSLSocketAcceptor::onPoll(double timeout) { return false; }

void ThreadedSSLSocketAcceptor::onStop()
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
}

void ThreadedSSLSocketAcceptor::addThread(SocketKey s, thread_id t)
{
  Locker l(m_mutex);

  m_threads[s] = t;
}

void ThreadedSSLSocketAcceptor::removeThread(SocketKey s)
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

THREAD_PROC ThreadedSSLSocketAcceptor::socketAcceptorThread(void *p)
{
  AcceptorThreadInfo *info = reinterpret_cast< AcceptorThreadInfo * >(p);

  ThreadedSSLSocketAcceptor *pAcceptor = info->m_pAcceptor;
  socket_handle s = info->m_socket;
  int port = info->m_port;
  delete info;

  int noDelay = 0;
  int sendBufSize = 0;
  int rcvBufSize = 0;
  socket_getsockopt(s, TCP_NODELAY, noDelay);
  socket_getsockopt(s, SO_SNDBUF, sendBufSize);
  socket_getsockopt(s, SO_RCVBUF, rcvBufSize);

  socket_handle socket = 0;
  while ((!pAcceptor->isStopped() && (socket = socket_accept(s)) != INVALID_SOCKET_HANDLE))
  {
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
    BIO *sBio = BIO_new_socket(socket, BIO_CLOSE); //unfortunately OpenSSL uses int as socket handle
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
      if (!thread_spawn(&socketConnectionThread, info, thread))
      {
        delete info;
        delete pConnection;
        SSL_free(ssl);
      }
      else
        pAcceptor->addThread(SocketKey(socket, ssl), thread);
    }
  }

  if (!pAcceptor->isStopped())
    pAcceptor->removeThread(SocketKey(s, 0));

  return 0;
}

THREAD_PROC ThreadedSSLSocketAcceptor::socketConnectionThread(void *p)
{
  ConnectionThreadInfo *info = reinterpret_cast< ConnectionThreadInfo * >(p);

  ThreadedSSLSocketAcceptor *pAcceptor = info->m_pAcceptor;
  ThreadedSSLSocketConnection *pConnection = info->m_pConnection;
  delete info;

  socket_handle socket = pConnection->getSocket();

  if (acceptSSLConnection(pConnection->getSocket(), pConnection->sslObject(), pAcceptor->getLog(), pAcceptor->m_verify) != 0)
  {
    if (pAcceptor->getLog())
      pAcceptor->getLog()->onEvent("Failed to accept new SSL connection");
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    if (!pAcceptor->isStopped())
      pAcceptor->removeThread(SocketKey(socket, ssl));
    return 0;
  }

  while (pConnection->read())
  {
  }
  SSL *ssl = pConnection->sslObject();
  delete pConnection;
  if (!pAcceptor->isStopped())
    pAcceptor->removeThread(SocketKey(socket, ssl));
  return 0;
}

int ThreadedSSLSocketAcceptor::passwordHandleCallback(char *buf, size_t bufsize,
                                                      int verify, void *job)
{
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif
