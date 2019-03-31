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

#include "ThreadedSSLSocketConnection.h"
#include "ThreadedSSLSocketAcceptor.h"
#include "ThreadedSSLSocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
ThreadedSSLSocketConnection::ThreadedSSLSocketConnection(socket_handle s, SSL *ssl,
                                                         Sessions sessions,
                                                         Log *pLog)
    : m_socket(s), m_ssl(ssl), m_pLog(pLog), m_sessions(sessions),
      m_pSession(0), m_disconnect(false)
{
  FD_ZERO(&m_fds);
  FD_SET(m_socket, &m_fds);
}

ThreadedSSLSocketConnection::ThreadedSSLSocketConnection(
    const SessionID &sessionID, socket_handle s, SSL *ssl, const std::string &address,
    short port, Log *pLog)
    : m_socket(s), m_ssl(ssl), m_address(address), m_port(port), m_pLog(pLog),
      m_pSession(Session::lookupSession(sessionID)), m_disconnect(false)
{
  FD_ZERO(&m_fds);
  FD_SET(m_socket, &m_fds);
  if (m_pSession)
    m_pSession->setResponder(this);
}

ThreadedSSLSocketConnection::~ThreadedSSLSocketConnection()
{
  if (m_pSession)
  {
    m_pSession->setResponder(0);
    Session::unregisterSession(m_pSession->getSessionID());
  }
}

bool ThreadedSSLSocketConnection::send(const std::string &msg)
{
  int totalSent = 0;

  while (totalSent < (int)msg.length())
  {
    errno = 0;
    int errCodeSSL = 0;
    int sent = 0;
    ERR_clear_error();

    // Cannot do concurrent SSL write and read as ssl context has to be
    // protected.
    {
      Locker locker(m_mutex);

      sent = SSL_write(m_ssl, msg.c_str() + totalSent, msg.length() - totalSent);
      if (sent <= 0)
        errCodeSSL = SSL_get_error(m_ssl, sent);
    }

    if (sent <= 0)
    {
      if ((errCodeSSL == SSL_ERROR_WANT_READ) ||
          (errCodeSSL == SSL_ERROR_WANT_WRITE))
      {
        errno = EINTR;
        sent = 0;
      }
      else
      {
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

bool ThreadedSSLSocketConnection::connect()
{
  return socket_connect(getSocket(), m_address.c_str(), m_port) >= 0;
}

void ThreadedSSLSocketConnection::disconnect()
{
  m_disconnect = true;
  ssl_socket_close(m_socket, m_ssl);
}

bool ThreadedSSLSocketConnection::read()
{
  struct timeval timeout = {1, 0};
  fd_set readset = m_fds;

  try
  {
    // Wait for input (1 second timeout)
    int result = select(1 + m_socket, &readset, 0, 0, &timeout);

    if (result > 0) // Something to read
    {
      bool pending = false;

      do
      {
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

        if (size <= 0)
        {
          if ((errCodeSSL == SSL_ERROR_WANT_READ) ||
              (errCodeSSL == SSL_ERROR_WANT_WRITE))
          {
            errno = EINTR;
            size = 0;

            return true;
          }
          else
          {
            char errbuf[200];

            socket_error(errbuf, sizeof(errbuf));

            if (m_pSession)
              m_pSession->getLog()->onEvent("SSL read error <" +
                                            IntConvertor::convert(errCodeSSL) +
                                            "> " + errbuf);
            else
            {
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
    }
    else if (result == 0 && m_pSession) // Timeout
    {
      m_pSession->next();
    }
    else if (result < 0) // Error
    {
      throw SocketRecvFailed(result);
    }

    processStream();

    if (m_disconnect)
      return false;

    return true;
  }
  catch (SocketRecvFailed &e)
  {
    if (m_disconnect)
      return false;

    if (m_pSession)
    {
      m_pSession->getLog()->onEvent(e.what());
      m_pSession->disconnect();
    }
    else
    {
      disconnect();
    }

    return false;
  }
}

bool ThreadedSSLSocketConnection::readMessage(std::string &msg) EXCEPT (SocketRecvFailed)
{
  try
  {
    return m_parser.readFixMessage(msg);
  }
  catch (MessageParseError &)
  {
  }
  return true;
}

void ThreadedSSLSocketConnection::processStream()
{
  std::string msg;
  while (readMessage(msg))
  {
    if (!m_pSession)
    {
      if (!setSession(msg))
      {
        disconnect();
        continue;
      }
    }
    try
    {
      m_pSession->next(msg, UtcTimeStamp());
    }
    catch (InvalidMessage &)
    {
      if (!m_pSession->isLoggedOn())
      {
        disconnect();
        return;
      }
    }
  }
}

bool ThreadedSSLSocketConnection::setSession(const std::string &msg)
{
  m_pSession = Session::lookupSession(msg, true);
  if (!m_pSession)
  {
    if (m_pLog)
    {
      m_pLog->onEvent("Session not found for incoming message: " + msg);
      m_pLog->onIncoming(msg);
    }
    return false;
  }

  SessionID sessionID = m_pSession->getSessionID();
  m_pSession = 0;

  // see if the session frees up within 5 seconds
  for (int i = 1; i <= 5; i++)
  {
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

#endif
