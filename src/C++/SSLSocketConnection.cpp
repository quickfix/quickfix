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


#include "SSLSocketConnection.h"
#include "SSLSocketAcceptor.h"
#include "SSLSocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX {
SSLSocketConnection::SSLSocketConnection(int s, SSL *ssl,
                                                         Sessions sessions,
                                                         Log *pLog)
    : m_socket(s), m_ssl(ssl), m_pLog(pLog), m_sessions(sessions),
      m_pSession(0), m_disconnect(false) {
  FD_ZERO(&m_fds);
  FD_SET(m_socket, &m_fds);
}

SSLSocketConnection::SSLSocketConnection(
    const SessionID &sessionID, int s, SSL *ssl, const std::string &address,
    short port, Log *pLog)
    : m_socket(s), m_ssl(ssl), m_address(address), m_port(port), m_pLog(pLog),
      m_pSession(Session::lookupSession(sessionID)), m_disconnect(false) {
  FD_ZERO(&m_fds);
  FD_SET(m_socket, &m_fds);
  if (m_pSession)
    m_pSession->setResponder(this);
}

SSLSocketConnection::~SSLSocketConnection() {
  if (m_pSession) {
    m_pSession->setResponder(0);
    Session::unregisterSession(m_pSession->getSessionID());
  }
}

bool SSLSocketConnection::send(const std::string &msg) {
  int totalSent = 0;

  while (totalSent < (int)msg.length()) {
    errno = 0;
    int errCodeSSL = 0;
    int sent = 0;
    ERR_clear_error();

    // Cannot do concurrent SSL write and read as ssl context has to be
    // protected.
    {
      Locker locker(m_mutex);

      sent = SSL_write(m_ssl, msg.c_str(), totalSent + msg.length());
      if (sent <= 0)
        errCodeSSL = SSL_get_error(m_ssl, sent);
    }

    if (sent <= 0) {
      if ((errCodeSSL == SSL_ERROR_WANT_READ) ||
          (errCodeSSL == SSL_ERROR_WANT_WRITE)) {
        errno = EINTR;
        sent = 0;
      } else {
        char errbuf[200];

        socket_error(errbuf, sizeof(errbuf));

        m_pSession->getLog()->onEvent("SSL send error <" +
                                      IntConvertor::convert(errCodeSSL) + "> " +
                                      errbuf);

        return false;
      }
    }

    totalSent += sent;
  }

  return true;
}

bool SSLSocketConnection::connect() {
  return socket_connect(getSocket(), m_address.c_str(), m_port) >= 0;
}

void SSLSocketConnection::disconnect() {
  m_disconnect = true;
  ssl_socket_close(m_socket, m_ssl);
}

bool SSLSocketConnection::read() {
  struct timeval timeout = { 1, 0 };
  fd_set readset = m_fds;

  try {
    // Wait for input (1 second timeout)
    int result = select(1 + m_socket, &readset, 0, 0, &timeout);

    if (result > 0) // Something to read
    {
      bool pending = false;

      do {
        pending = false;
        errno = 0;
        int size = 0;
        int errCodeSSL = 0;
        ERR_clear_error();

        // Cannot do concurrent SSL write and read as ssl context has to be
        // protected.
        {
          Locker locker(m_mutex);

          size = SSL_read(m_ssl, m_buffer, sizeof(m_buffer));
          if (size <= 0)
            errCodeSSL = SSL_get_error(m_ssl, size);
          else if (SSL_pending(m_ssl) > 0)
            pending = true;
        }

        if (size <= 0) {
          if ((errCodeSSL == SSL_ERROR_WANT_READ) ||
              (errCodeSSL == SSL_ERROR_WANT_WRITE)) {
            errno = EINTR;
            size = 0;

            return true;
          } else {
            char errbuf[200];

            socket_error(errbuf, sizeof(errbuf));

            if (m_pSession)
              m_pSession->getLog()->onEvent("SSL read error <" +
                                            IntConvertor::convert(errCodeSSL) +
                                            "> " + errbuf);
            else {
              std::cerr << UtcTimeStampConvertor::convert(UtcTimeStamp())
                        << "SSL read error <"
                        << IntConvertor::convert(errCodeSSL) << "> " << errbuf
                        << std::endl;
            }

            throw SocketRecvFailed(size);
          }
        }

        m_parser.addToStream(m_buffer, size);
      } while (pending);
    } else if (result == 0 && m_pSession) // Timeout
    {
      m_pSession->next();
    } else if (result < 0) // Error
    {
      throw SocketRecvFailed(result);
    }

    processStream();

    if (m_disconnect)
      return false;

    return true;
  }
  catch (SocketRecvFailed &e) {
    if (m_disconnect)
      return false;

    if (m_pSession) {
      m_pSession->getLog()->onEvent(e.what());
      m_pSession->disconnect();
    } else {
      disconnect();
    }

    return false;
  }
}

bool SSLSocketConnection::readMessage(std::string &msg) throw(
    SocketRecvFailed) {
  try {
    return m_parser.readFixMessage(msg);
  }
  catch (MessageParseError &) {
  }
  return true;
}

void SSLSocketConnection::processStream() {
  std::string msg;
  while (readMessage(msg)) {
    if (!m_pSession) {
      if (!setSession(msg)) {
        disconnect();
        continue;
      }
    }
    try {
      m_pSession->next(msg, UtcTimeStamp());
    }
    catch (InvalidMessage &) {
      if (!m_pSession->isLoggedOn()) {
        disconnect();
        return;
      }
    }
  }
}

bool SSLSocketConnection::setSession(const std::string &msg) {
  m_pSession = Session::lookupSession(msg, true);
  if (!m_pSession) {
    if (m_pLog) {
      m_pLog->onEvent("Session not found for incoming message: " + msg);
      m_pLog->onIncoming(msg);
    }
    return false;
  }

  SessionID sessionID = m_pSession->getSessionID();
  m_pSession = 0;

  // see if the session frees up within 5 seconds
  for (int i = 1; i <= 5; i++) {
    if (!Session::isSessionRegistered(sessionID))
      m_pSession = Session::registerSession(sessionID);
    if (m_pSession)
      break;
    process_sleep(1);
  }

  if (!m_pSession)
    return false;
  if (m_sessions.find(m_pSession->getSessionID()) == m_sessions.end())
    return false;

  m_pSession->setResponder(this);
  return true;
}

} // namespace FIX

