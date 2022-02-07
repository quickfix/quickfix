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

#include "SSLSocketConnection.h"
#include "SSLSocketAcceptor.h"
#include "SocketConnector.h"
#include "SSLSocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
SSLSocketConnection::SSLSocketConnection(socket_handle s, SSL *ssl, Sessions sessions,
                                    SocketMonitor* pMonitor )
: m_socket( s ), m_ssl(ssl), m_sendLength( 0 ),
  m_sessions(sessions), m_pSession( 0 ), m_pMonitor( pMonitor )
{
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
}

SSLSocketConnection::SSLSocketConnection(SSLSocketInitiator &i,
                                    const SessionID& sessionID, socket_handle s, SSL * ssl,
                                    SocketMonitor* pMonitor )
: m_socket( s ), m_ssl(ssl), m_sendLength( 0 ),
  m_pSession( i.getSession( sessionID, *this ) ),
  m_pMonitor( pMonitor ) 
{
  FD_ZERO( &m_fds );
  FD_SET( m_socket, &m_fds );
  m_sessions.insert( sessionID );
}

SSLSocketConnection::~SSLSocketConnection()
{
  if ( m_pSession )
    Session::unregisterSession( m_pSession->getSessionID() );

  ssl_socket_close(m_socket, m_ssl);

  SSL_free(m_ssl);
}

bool SSLSocketConnection::send( const std::string& msg )
{
  Locker l( m_mutex );

  m_sendQueue.push_back( msg );
  processQueue();
  signal();
  return true;
}

bool SSLSocketConnection::processQueue()
{
  Locker l( m_mutex );

  if( m_sendQueue.empty() ) return true;

  struct timeval timeout = { 0, 0 };
  fd_set writeset = m_fds;
  if( select( 1 + m_socket, 0, &writeset, 0, &timeout ) <= 0 )
    return false;
    
  const std::string& msg = m_sendQueue.front();
  m_sendLength = 0;

  while (m_sendLength < (int)msg.length())
  {
    errno = 0;
    int errCodeSSL = 0;
    int sent = 0;
    ERR_clear_error();

    // Cannot do concurrent SSL write and read as ssl context has to be
    // protected. Done above.
    {
      sent = SSL_write(m_ssl, msg.c_str() + m_sendLength,  msg.length() - m_sendLength);
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

        return m_sendQueue.empty();
      }
    }

    m_sendLength += sent;
  }

  m_sendLength = 0;
  m_sendQueue.pop_front();

  return m_sendQueue.empty();
}

void SSLSocketConnection::disconnect()
{
  if ( m_pMonitor )
    m_pMonitor->drop( m_socket );
}

bool SSLSocketConnection::read( SocketConnector& s )
{
  if ( !m_pSession ) return false;

  try
  {
    readFromSocket();
    readMessages( s.getMonitor() );
  }
  catch( SocketRecvFailed& e )
  {
    m_pSession->getLog()->onEvent( e.what() );
    return false;
  }
  return true;
}

bool SSLSocketConnection::read(SSLSocketAcceptor &a, SocketServer& s )
{
  std::string msg;
  try
  {
    if ( !m_pSession )
    {
      struct timeval timeout = { 1, 0 };
      fd_set readset = m_fds;

      while( !readMessage( msg ) )
      {
        int result = select( 1 + m_socket, &readset, 0, 0, &timeout );
        if( result > 0 )
          readFromSocket();
        else if( result == 0 )
          return false;
        else if( result < 0 )
          return false;
      }

      m_pSession = Session::lookupSession( msg, true );
      if( !isValidSession() )
      {
        m_pSession = 0;
        if( a.getLog() )
        {
          a.getLog()->onEvent( "Session not found for incoming message: " + msg );
          a.getLog()->onIncoming( msg );
        }
      }
      if( m_pSession )
        m_pSession = a.getSession( msg, *this );
      if( m_pSession )
        m_pSession->next( msg, UtcTimeStamp() );
      if( !m_pSession )
      {
        s.getMonitor().drop( m_socket );
        return false;
      }

      Session::registerSession( m_pSession->getSessionID() );
      return true;
    }
    else
    {
      readFromSocket();
      readMessages( s.getMonitor() );
      return true;
    }
  }
  catch ( SocketRecvFailed& e )
  {
    if( m_pSession )
      m_pSession->getLog()->onEvent( e.what() );
    s.getMonitor().drop( m_socket );
  }
  catch ( InvalidMessage& )
  {
    s.getMonitor().drop( m_socket );
  }
  return false;
}

bool SSLSocketConnection::isValidSession()
{
  if( m_pSession == 0 )
    return false;
  SessionID sessionID = m_pSession->getSessionID();
  if( Session::isSessionRegistered(sessionID) )
    return false;
  return !( m_sessions.find(sessionID) == m_sessions.end() );
}

void SSLSocketConnection::readFromSocket()
EXCEPT ( SocketRecvFailed )
{
  bool pending = false;

  do
  {
    pending = false;
    errno = 0;
    ssize_t size = 0;
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

        return;
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

bool SSLSocketConnection::readMessage( std::string& msg )
{
  try
  {
    return m_parser.readFixMessage( msg );
  }
  catch ( MessageParseError& ) {}
  return true;
}

void SSLSocketConnection::readMessages( SocketMonitor& s )
{
  if( !m_pSession ) return;

  std::string msg;
  while( readMessage( msg ) )
  {
    try
    {
      m_pSession->next( msg, UtcTimeStamp() );
    }
    catch ( InvalidMessage& )
    {
      if( !m_pSession->isLoggedOn() )
        s.drop( m_socket );
    }
  }
}

void SSLSocketConnection::onTimeout()
{
  if ( m_pSession ) m_pSession->next();
}

} // namespace FIX

#endif
