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

#include "SSLSocketAcceptor.h"
#include "Session.h"
#include "Settings.h"
#include "Utility.h"
#include "Exceptions.h"

namespace FIX
{

FIX::SSLSocketAcceptor *acceptObj = 0;

Mutex SSLSocketAcceptor::m_acceptMutex = Mutex();

int SSLSocketAcceptor::passPhraseHandleCB(char *buf, int bufsize, int verify, void *job)
{
  return acceptObj->passwordHandleCallback(buf, bufsize, verify, job);
}

SSLSocketAcceptor::SSLSocketAcceptor( Application& application,
                                MessageStoreFactory& factory,
                                const SessionSettings& settings ) throw( ConfigError )
: Acceptor( application, factory, settings ),
  m_pServer( 0 ), m_sslInit(false),
  m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
  acceptObj = this;
}

SSLSocketAcceptor::SSLSocketAcceptor( Application& application,
                                MessageStoreFactory& factory,
                                const SessionSettings& settings,
                                LogFactory& logFactory ) throw( ConfigError )
: Acceptor( application, factory, settings, logFactory ),
  m_pServer( 0 ), m_sslInit(false),
  m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
  acceptObj = this;
}

SSLSocketAcceptor::~SSLSocketAcceptor()
{
  SocketConnections::iterator iter;
  for ( iter = m_connections.begin(); iter != m_connections.end(); ++iter )
    delete iter->second;

  if (m_sslInit)
  {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }
}

void SSLSocketAcceptor::onConfigure( const SessionSettings& s )
throw ( ConfigError )
{
  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i;
  for( i = sessions.begin(); i != sessions.end(); ++i )
  {
    const Dictionary& settings = s.get( *i );
    settings.getInt( SOCKET_ACCEPT_PORT );
    if( settings.has(SOCKET_REUSE_ADDRESS) )
      settings.getBool( SOCKET_REUSE_ADDRESS );
    if( settings.has(SOCKET_NODELAY) )
      settings.getBool( SOCKET_NODELAY );
  }
}

void SSLSocketAcceptor::onInitialize( const SessionSettings& s )
throw ( RuntimeError )
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

    if (!loadSSLCert(m_ctx, true, m_settings, getLog(), SSLSocketAcceptor::passPhraseHandleCB, errStr))
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    if (!loadCAInfo(m_ctx, true, m_settings, getLog(), errStr, m_verify))
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    m_revocationStore = loadCRLInfo(m_settings, getLog(), errStr);
    if (!m_revocationStore && !errStr.empty())
    {
      ssl_term();
      throw RuntimeError(errStr);
    }

    m_sslInit = true;
  }

  short port = 0;

  try
  {
    m_pServer = new SocketServer( 1 );

    std::set<SessionID> sessions = s.getSessions();
    std::set<SessionID>::iterator i = sessions.begin();
    for( ; i != sessions.end(); ++i )
    {
      const Dictionary& settings = s.get( *i );
      port = (short)settings.getInt( SOCKET_ACCEPT_PORT );

      const bool reuseAddress = settings.has( SOCKET_REUSE_ADDRESS ) ? 
        settings.getBool( SOCKET_REUSE_ADDRESS ) : true;

      const bool noDelay = settings.has( SOCKET_NODELAY ) ? 
        settings.getBool( SOCKET_NODELAY ) : false;

      const int sendBufSize = settings.has( SOCKET_SEND_BUFFER_SIZE ) ?
        settings.getInt( SOCKET_SEND_BUFFER_SIZE ) : 0;

      const int rcvBufSize = settings.has( SOCKET_RECEIVE_BUFFER_SIZE ) ?
        settings.getInt( SOCKET_RECEIVE_BUFFER_SIZE ) : 0;

      m_portToSessions[port].insert( *i );
      m_pServer->add( port, reuseAddress, noDelay, sendBufSize, rcvBufSize );      
    }    
  }
  catch( SocketException& e )
  {
    throw RuntimeError( "Unable to create, bind, or listen to port "
                       + IntConvertor::convert( (unsigned short)port ) + " (" + e.what() + ")" );
  }
}

void SSLSocketAcceptor::onStart()
{
  while ( !isStopped() && m_pServer && m_pServer->block( *this ) ) {}

  if( !m_pServer )
    return;

  time_t start = 0;
  time_t now = 0;

  ::time( &start );
  while ( isLoggedOn() )
  {
    m_pServer->block( *this );
    if( ::time(&now) -5 >= start )
      break;
  }

  m_pServer->close();
  delete m_pServer;
  m_pServer = 0;
}

bool SSLSocketAcceptor::onPoll( double timeout )
{
  if( !m_pServer )
    return false;

  time_t start = 0;
  time_t now = 0;

  if( isStopped() )
  {
    if( start == 0 )
      ::time( &start );
    if( !isLoggedOn() )
    {
      start = 0;
      return false;
    }
    if( ::time(&now) - 5 >= start )
    {
      start = 0;
      return false;
    }
  }

  m_pServer->block( *this, true, timeout );
  return true;
}

void SSLSocketAcceptor::onStop()
{
}

void SSLSocketAcceptor::onConnect( SocketServer& server, int a, int s )
{
  if ( !socket_isValid( s ) ) return;
  SocketConnections::iterator i = m_connections.find( s );
  if ( i != m_connections.end() ) return;
  int port = server.socketToPort( a );
  Sessions sessions = m_portToSessions[port];

  SSL *ssl = SSL_new(m_ctx);
  SSL_clear(ssl);
  BIO *sBio = BIO_new_socket(s, BIO_CLOSE);
  SSL_set_bio(ssl, sBio, sBio);
  // TODO - check this
  SSL_set_app_data(ssl, m_revocationStore);
  SSL_set_verify_result(ssl, X509_V_OK);

  SSLSocketConnection * sconn = new SSLSocketConnection( s, ssl, sessions, &server.getMonitor() );
  // SSL accept
  if (newConnection(sconn) != 0)
  {
    std::stringstream stream;
    stream << "Failed to accept SSL connection from " << socket_peername( s ) << " on port " << port;
    if( getLog() )
      getLog()->onEvent( stream.str() );

    delete sconn;
    return;
  }

  m_connections[ s ] = sconn;

  std::stringstream stream;
  stream << "Accepted SSL connection from " << socket_peername( s ) << " on port " << port;

  if( getLog() )
    getLog()->onEvent( stream.str() );
}

int SSLSocketAcceptor::newConnection(SSLSocketConnection *pConnection)
{

  int rc;
  int result = -1;
  char *subjName = 0;
  time_t timeout = time(0) + 10;
  int socket = pConnection->getSocket();

  SSL *ssl = pConnection->sslObject();

  /*
   * Now enter the SSL Handshake Phase
   */
  while (!SSL_is_init_finished(ssl))
  {
    ERR_clear_error();
    while ((rc = doAccept(ssl, result)) <= 0)
    {

      if (result == SSL_ERROR_WANT_READ)
        ;
      else if (result == SSL_ERROR_WANT_WRITE)
        ;
      else if (result == SSL_ERROR_ZERO_RETURN)
      {
        /*
         * The case where the connection was closed before any data
         * was transferred. That's not a real error and can occur
         * sporadically with some clients.
         */
        getLog()->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      else if (ERR_GET_REASON(ERR_peek_error()) == SSL_R_HTTP_REQUEST)
      {
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
        do
        {
#ifndef _MSC_VER // Unix
          do
          {
            rv = read(socket, ca, 1);
          } while (rv == -1 && errno == EINTR);
#else // Windows
          do
          {
            rv = recv(socket, ca, 1, 0);
          } while (rv == -1 && errno == EINTR);
#endif
        } while (rv > 0 && ca[0] != '\012' /*LF*/);

        SSL_set_shutdown(ssl, SSL_SENT_SHUTDOWN | SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        ;
        return result;
      }
      else if (result == SSL_ERROR_SYSCALL)
      {
#ifdef AIX
        if (errno == EINTR)
          continue;
        else if (errno == EAGAIN)
        {
          // Please refer:
          // http://community.emailogy.com/scripts/wa-COMMUNITY.exe?A2=ind0303&L=lstsrv-l&O=A&P=19558
          // http://mirt.net/pipermail/stunnel-users/2007-May/001570.html
          ++retries;
          if (retries <= 100)
          {
            getLog()->onEvent(
                "EAGAIN received during SSL handshake, trying again");
            process_sleep(0.005);
            continue;
          }
        }
        if (errno > 0)
        {
          getLog()->onEvent(std::string("SSL handshake interrupted by system, errno " + IntConvertor::convert(errno));
        }
        else
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
        if (errno > 0)
        {
          getLog()->onEvent(
              std::string("SSL handshake interrupted by system, errno ") +
              IntConvertor::convert(errno));
        }
        else
          getLog()->onEvent("Spurious SSL handshake interrupt");
#endif
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      }
      else
      {
        /*
         * Ok, anything else is a fatal error
         */
        unsigned long err = ERR_get_error();
        getLog()->onEvent("SSL handshake failed");

        while (err)
        {
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
      if (time(0) > timeout)
      {
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
    if ((result = SSL_get_verify_result(ssl)) != X509_V_OK)
    {
      getLog()->onEvent("SSL client authentication failed: ");
      SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
      ssl_socket_close(socket, ssl);
      return result;
    }
    else
    {
      if ((xs = SSL_get_peer_certificate(ssl)) != 0)
      {
        subjName = X509_NAME_oneline(X509_get_subject_name(xs), 0, 0);
      }
    }
  }

  if ((m_verify == SSL_CLIENT_VERIFY_REQUIRE) && subjName == 0)
  {
    getLog()->onEvent("No acceptable peer certificate available");
    SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
    ssl_socket_close(socket, ssl);
    result = 2;
  }

  if (subjName)
    free(subjName);

  return result;
}

int SSLSocketAcceptor::doAccept(SSL *ssl, int &result)
{

  // Not sure if a lock is required here anymore. But there used to
  // be a bug and boost asio still has a lock as well.
  Locker l(m_acceptMutex);

  int rc = SSL_accept(ssl);
  if (rc <= 0)
  {
    result = SSL_get_error(ssl, rc);
  }

  return rc;
}

void SSLSocketAcceptor::onWrite( SocketServer& server, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SSLSocketConnection* pSocketConnection = i->second;
  if( pSocketConnection->processQueue() )
    pSocketConnection->unsignal();
}

bool SSLSocketAcceptor::onData( SocketServer& server, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return false;
  SSLSocketConnection* pSocketConnection = i->second;
  return pSocketConnection->read( *this, server );
}

void SSLSocketAcceptor::onDisconnect( SocketServer&, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SSLSocketConnection* pSocketConnection = i->second;

  Session* pSession = pSocketConnection->getSession();
  if ( pSession ) pSession->disconnect();

  delete pSocketConnection;
  m_connections.erase( s );
}

void SSLSocketAcceptor::onError( SocketServer& )
{
}

void SSLSocketAcceptor::onTimeout( SocketServer& )
{
  SocketConnections::iterator i;
  for ( i = m_connections.begin(); i != m_connections.end(); ++i )
    i->second->onTimeout();
}

int SSLSocketAcceptor::passwordHandleCallback(char *buf, size_t bufsize,
                                                      int verify, void *job)
{
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif
