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

#ifndef _MSC_VER

#include "config.h"

#include "SocketMonitor.h"
#include "Utility.h"
#include <algorithm>
#include <exception>
#include <iostream>
#include <set>

namespace FIX {
SocketMonitor::SocketMonitor(int timeout)
    : m_timeout(timeout) {
  socket_init();

  std::pair<socket_handle, socket_handle> sockets = socket_createpair();
  m_signal = sockets.first;
  m_interrupt = sockets.second;
  socket_setnonblock(m_signal);
  socket_setnonblock(m_interrupt);
  m_readSockets.insert(m_interrupt);

  m_ticks = clock();
}

SocketMonitor::~SocketMonitor() {
  Sockets::iterator i;
  for (i = m_readSockets.begin(); i != m_readSockets.end(); ++i) {
    socket_close(*i);
  }

  socket_close(m_signal);
  socket_term();
}

bool SocketMonitor::addConnect(socket_handle s) {
  socket_setnonblock(s);
  Sockets::iterator i = m_connectSockets.find(s);
  if (i != m_connectSockets.end()) {
    return false;
  }

  m_connectSockets.insert(s);
  return true;
}

bool SocketMonitor::addRead(socket_handle s) {
  socket_setnonblock(s);
  Sockets::iterator i = m_readSockets.find(s);
  if (i != m_readSockets.end()) {
    return false;
  }

  m_readSockets.insert(s);
  return true;
}

bool SocketMonitor::addWrite(socket_handle s) {
  if (m_readSockets.find(s) == m_readSockets.end()) {
    return false;
  }

  socket_setnonblock(s);
  Sockets::iterator i = m_writeSockets.find(s);
  if (i != m_writeSockets.end()) {
    return false;
  }

  m_writeSockets.insert(s);
  return true;
}

bool SocketMonitor::drop(socket_handle s) {
  Sockets::iterator i = m_readSockets.find(s);
  Sockets::iterator j = m_writeSockets.find(s);
  Sockets::iterator k = m_connectSockets.find(s);

  if (i != m_readSockets.end() || j != m_writeSockets.end() || k != m_connectSockets.end()) {
    socket_close(s);
    m_readSockets.erase(s);
    m_writeSockets.erase(s);
    m_connectSockets.erase(s);
    m_dropped.push(s);
    return true;
  }
  return false;
}

inline int SocketMonitor::getTimeval(bool poll, double timeout) {
  if (poll) {
    return 0;
  }

  timeout = m_timeout;

  if (!timeout) {
    return 0;
  }

  double elapsed = (double)(clock() - m_ticks) / (double)CLOCKS_PER_SEC;
  if (elapsed >= timeout || elapsed == 0.0) {
    m_ticks = clock();
    return (timeout * 1000);
  } else {
    return ((timeout - elapsed) * 1000);
  }
  return (timeout * 1000);
}

bool SocketMonitor::sleepIfEmpty(bool poll) {
  if (poll) {
    return false;
  }

  if (m_readSockets.empty() && m_writeSockets.empty() && m_connectSockets.empty()) {
    process_sleep(m_timeout);
    return true;
  } else {
    return false;
  }
}

void SocketMonitor::signal(socket_handle socket) { socket_send(m_signal, (char *)&socket, sizeof(socket)); }

void SocketMonitor::unsignal(socket_handle s) {
  Sockets::iterator i = m_writeSockets.find(s);
  if (i == m_writeSockets.end()) {
    return;
  }

  m_writeSockets.erase(s);
}

void SocketMonitor::block(Strategy &strategy, bool should_poll, double timeout) {
  while (m_dropped.size()) {
    strategy.onError(*this, m_dropped.front());
    m_dropped.pop();
    if (m_dropped.size() == 0) {
      return;
    }
  }

  int pfds_size = m_readSockets.size() + m_connectSockets.size() + m_writeSockets.size();
  struct pollfd pfds[pfds_size];
  buildSet(m_readSockets, pfds, POLLPRI | POLLIN);
  buildSet(m_connectSockets, pfds + m_readSockets.size(), POLLOUT | POLLERR);
  buildSet(m_writeSockets, pfds + m_readSockets.size() + m_connectSockets.size(), POLLOUT);

  if (sleepIfEmpty(should_poll)) {
    strategy.onTimeout(*this);
    return;
  }

  int result = poll(pfds, pfds_size, getTimeval(should_poll, timeout));

  if (result == 0) {
    strategy.onTimeout(*this);
    return;
  } else if (result > 0) {
    processPollList(strategy, pfds, pfds_size);
  } else {
    strategy.onError(*this);
  }
}

void SocketMonitor::processRead(Strategy &strategy, socket_handle socket_fd) {
  int s = socket_fd;
  if (s == m_interrupt) {
    socket_handle socket = 0;
    recv(s, (char *)&socket, sizeof(socket), 0);
    addWrite(socket);
  } else {
    strategy.onEvent(*this, s);
  }
}

void SocketMonitor::processWrite(Strategy &strategy, socket_handle socket_fd) {
  socket_handle s = socket_fd;
  if (m_connectSockets.find(s) != m_connectSockets.end()) {
    m_connectSockets.erase(s);
    m_readSockets.insert(s);
    strategy.onConnect(*this, s);
  } else {
    strategy.onWrite(*this, s);
  }
}

void SocketMonitor::processError(Strategy &strategy, socket_handle socket_fd) { strategy.onError(*this, socket_fd); }

void SocketMonitor::processPollList(Strategy &strategy, struct pollfd *pfds, unsigned pfds_size) {
  for (unsigned i = 0; i < pfds_size; ++i) {
    if ((pfds[i].revents & POLLIN) || (pfds[i].revents & POLLPRI)) {
      processRead(strategy, pfds[i].fd);
    }

    if ((pfds[i].revents & POLLOUT)) {
      processWrite(strategy, pfds[i].fd);
    }
    if ((pfds[i].revents & POLLERR)) {
      processError(strategy, pfds[i].fd);
    }
  }
}

void SocketMonitor::buildSet(const Sockets &sockets, struct pollfd *pfds, short events) {
  Sockets::const_iterator iter;
  unsigned int i = 0;
  for (iter = sockets.begin(); iter != sockets.end(); ++iter) {
    pfds[i].fd = *iter;
    pfds[i].events = events;
    pfds[i].revents = 0;
    i += 1;
  }
}

} // namespace FIX

#endif