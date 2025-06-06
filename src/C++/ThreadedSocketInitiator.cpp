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

#include "Session.h"
#include "Settings.h"
#include "ThreadedSocketInitiator.h"

namespace FIX {
ThreadedSocketInitiator::ThreadedSocketInitiator(
    Application &application,
    MessageStoreFactory &factory,
    const SessionSettings &settings) EXCEPT(ConfigError)
    : Initiator(application, factory, settings),
      m_lastConnect(0),
      m_reconnectInterval(30),
      m_noDelay(false),
      m_sendBufSize(0),
      m_rcvBufSize(0) {
  socket_init();
}

ThreadedSocketInitiator::ThreadedSocketInitiator(
    Application &application,
    MessageStoreFactory &factory,
    const SessionSettings &settings,
    LogFactory &logFactory) EXCEPT(ConfigError)
    : Initiator(application, factory, settings, logFactory),
      m_lastConnect(0),
      m_reconnectInterval(30),
      m_noDelay(false),
      m_sendBufSize(0),
      m_rcvBufSize(0) {
  socket_init();
}

ThreadedSocketInitiator::~ThreadedSocketInitiator() { socket_term(); }

void ThreadedSocketInitiator::onConfigure(const SessionSettings &s) EXCEPT(ConfigError) {
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

void ThreadedSocketInitiator::onInitialize(const SessionSettings &s) EXCEPT(RuntimeError) {}

void ThreadedSocketInitiator::onStart() {
  while (!isStopped()) {
    time_t now;
    ::time(&now);

    if ((now - m_lastConnect) >= m_reconnectInterval) {
      Locker l(m_mutex);
      connect();
      m_lastConnect = now;
    }

    process_sleep(1);
  }
}

bool ThreadedSocketInitiator::onPoll() { return false; }

void ThreadedSocketInitiator::onStop() {
  SocketToThread threads;
  SocketToThread::iterator i;

  {
    Locker l(m_mutex);

    time_t start = 0;
    time_t now = 0;

    ::time(&start);
    while (isLoggedOn()) {
      if (::time(&now) - 5 >= start) {
        break;
      }
    }

    threads = m_threads;
    m_threads.clear();
  }

  for (i = threads.begin(); i != threads.end(); ++i) {
    socket_close(i->first);
  }

  for (i = threads.begin(); i != threads.end(); ++i) {
    thread_join(i->second);
  }
  threads.clear();
}

void ThreadedSocketInitiator::doConnect(const SessionID &s, const Dictionary &d) {
  try {
    Session *session = Session::lookupSession(s);
    if (!session->isSessionTime(UtcTimeStamp::now())) {
      return;
    }

    Log *log = session->getLog();

    HostDetails host = m_hostDetailsProvider.getHost(s, d);
    if (d.has(RECONNECT_INTERVAL)) // ReconnectInterval in [SESSION]
    {
      m_reconnectInterval = d.getInt(RECONNECT_INTERVAL);
    }

    socket_handle socket = socket_createConnector();
    if (m_noDelay) {
      socket_setsockopt(socket, TCP_NODELAY);
    }
    if (m_sendBufSize) {
      socket_setsockopt(socket, SO_SNDBUF, m_sendBufSize);
    }
    if (m_rcvBufSize) {
      socket_setsockopt(socket, SO_RCVBUF, m_rcvBufSize);
    }

    setPending(s);
    log->onEvent(
        "Connecting to " + host.address + " on port " + IntConvertor::convert((unsigned short)host.port) + " (Source "
        + host.sourceAddress + ":" + IntConvertor::convert((unsigned short)host.sourcePort)
        + ") ReconnectInterval=" + IntConvertor::convert((int)m_reconnectInterval));

    ThreadedSocketConnection *pConnection = new ThreadedSocketConnection(
        s,
        socket,
        host.address,
        host.port,
        getLog(),
        host.sourceAddress,
        host.sourcePort);

    ThreadPair *pair = new ThreadPair(this, pConnection);

    {
      Locker l(m_mutex);
      thread_id thread;
      if (thread_spawn(&socketThread, pair, thread)) {
        addThread(socket, thread);
      } else {
        delete pair;
        pConnection->disconnect();
        delete pConnection;
        setDisconnected(s);
      }
    }
  } catch (std::exception &) {}
}

void ThreadedSocketInitiator::addThread(socket_handle s, thread_id t) {
  Locker l(m_mutex);

  m_threads[s] = t;
}

void ThreadedSocketInitiator::removeThread(socket_handle s) {
  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find(s);

  if (i != m_threads.end()) {
    thread_detach(i->second);
    m_threads.erase(i);
  }
}

THREAD_PROC ThreadedSocketInitiator::socketThread(void *p) {
  ThreadPair *pair = reinterpret_cast<ThreadPair *>(p);

  ThreadedSocketInitiator *pInitiator = pair->first;
  ThreadedSocketConnection *pConnection = pair->second;
  FIX::SessionID sessionID = pConnection->getSession()->getSessionID();
  FIX::Session *pSession = FIX::Session::lookupSession(sessionID);
  socket_handle socket = pConnection->getSocket();
  delete pair;

  pInitiator->lock();

  if (!pConnection->connect()) {
    pInitiator->getLog()->onEvent("Connection failed");
    pConnection->disconnect();
    delete pConnection;
    pInitiator->removeThread(socket);
    pInitiator->setDisconnected(sessionID);
    return 0;
  }

  pInitiator->setConnected(sessionID);
  pInitiator->getLog()->onEvent("Connection succeeded");

  pSession->next(UtcTimeStamp::now());

  while (pConnection->read()) {}

  delete pConnection;
  if (!pInitiator->isStopped()) {
    pInitiator->removeThread(socket);
  }

  pInitiator->setDisconnected(sessionID);
  return 0;
}
} // namespace FIX
