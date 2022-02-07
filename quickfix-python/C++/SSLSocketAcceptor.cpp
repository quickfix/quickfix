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

int SSLSocketAcceptor::passPhraseHandleCB(char *buf, int bufsize, int verify, void *instance)
{
  return reinterpret_cast<SSLSocketAcceptor*>(instance)->passwordHandleCallback(buf, bufsize, verify);
}

SSLSocketAcceptor::SSLSocketAcceptor( Application& application,
                                MessageStoreFactory& factory,
                                const SessionSettings& settings ) EXCEPT ( ConfigError )
: Acceptor( application, factory, settings ),
  m_pServer( 0 ), m_sslInit(false),
  m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
}

SSLSocketAcceptor::SSLSocketAcceptor( Application& application,
                                MessageStoreFactory& factory,
                                const SessionSettings& settings,
                                LogFactory& logFactory ) EXCEPT ( ConfigError )
: Acceptor( application, factory, settings, logFactory ),
  m_pServer( 0 ), m_sslInit(false),
  m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0)
{
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
EXCEPT ( ConfigError )
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
EXCEPT ( RuntimeError )
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

    if (!loadSSLCert(m_ctx, true, m_settings, getLog(), SSLSocketAcceptor::passPhraseHandleCB, this, errStr))
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

void SSLSocketAcceptor::onConnect( SocketServer& server, socket_handle a, socket_handle s )
{
  if ( !socket_isValid( s ) ) return;
  SocketConnections::iterator i = m_connections.find( s );
  if ( i != m_connections.end() ) return;
  int port = server.socketToPort( a );
  Sessions sessions = m_portToSessions[port];

  SSL *ssl = SSL_new(m_ctx);
  SSL_clear(ssl);
  BIO *sBio = BIO_new_socket(s, BIO_CLOSE); //Unfortunately OpenSSL assumes socket is int
  SSL_set_bio(ssl, sBio, sBio);
  // TODO - check this
  SSL_set_app_data(ssl, m_revocationStore);
  SSL_set_verify_result(ssl, X509_V_OK);

  SSLSocketConnection * sconn = new SSLSocketConnection( s, ssl, sessions, &server.getMonitor() );
  // SSL accept
  if (acceptSSLConnection(sconn->getSocket(), sconn->sslObject(), getLog(), m_verify) != 0)
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

void SSLSocketAcceptor::onWrite( SocketServer& server, socket_handle s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SSLSocketConnection* pSocketConnection = i->second;
  if( pSocketConnection->processQueue() )
    pSocketConnection->unsignal();
}

bool SSLSocketAcceptor::onData( SocketServer& server, socket_handle s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return false;
  SSLSocketConnection* pSocketConnection = i->second;
  return pSocketConnection->read( *this, server );
}

void SSLSocketAcceptor::onDisconnect( SocketServer&, socket_handle s )
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
                                                      int verify)
{
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif
