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

namespace FIX
{

FIX::SSLSocketInitiator *initObj = 0;

int SSLSocketInitiator::passwordHandleCB(char *buf, int bufsize, int verify, void *job)
{
  return initObj->passwordHandleCallback(buf, bufsize, verify, job);
}

SSLSocketInitiator::SSLSocketInitiator( Application& application,
                                  MessageStoreFactory& factory,
                                  const SessionSettings& settings )
EXCEPT ( ConfigError )
: Initiator( application, factory, settings ),
  m_connector( 1 ), m_lastConnect( 0 ),
  m_reconnectInterval( 30 ), m_noDelay( false ), m_sendBufSize( 0 ),
  m_rcvBufSize( 0 ), m_sslInit(false), m_ctx(0), m_cert(0), m_key(0)
{
  initObj = this;
}

SSLSocketInitiator::SSLSocketInitiator( Application& application,
                                  MessageStoreFactory& factory,
                                  const SessionSettings& settings,
                                  LogFactory& logFactory )
EXCEPT ( ConfigError )
: Initiator( application, factory, settings, logFactory ),
  m_connector( 1 ), m_lastConnect( 0 ),
  m_reconnectInterval( 30 ), m_noDelay( false ), m_sendBufSize( 0 ),
  m_rcvBufSize( 0 ), m_sslInit(false), m_ctx(0), m_cert(0), m_key(0)
{
  initObj = this;
}

SSLSocketInitiator::~SSLSocketInitiator()
{
  SocketConnections::iterator i;
  for (i = m_connections.begin();
       i != m_connections.end(); ++i)
    delete i->second;

  for (i = m_pendingConnections.begin();
       i != m_pendingConnections.end(); ++i)
    delete i->second;

  if (m_sslInit)
  {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }
}

void SSLSocketInitiator::onConfigure( const SessionSettings& s )
EXCEPT ( ConfigError )
{
  const Dictionary& dict = s.get();

  if( dict.has( RECONNECT_INTERVAL ) )
    m_reconnectInterval = dict.getInt( RECONNECT_INTERVAL );
  if( dict.has( SOCKET_NODELAY ) )
    m_noDelay = dict.getBool( SOCKET_NODELAY );
  if( dict.has( SOCKET_SEND_BUFFER_SIZE ) )
    m_sendBufSize = dict.getInt( SOCKET_SEND_BUFFER_SIZE );
  if( dict.has( SOCKET_RECEIVE_BUFFER_SIZE ) )
    m_rcvBufSize = dict.getInt( SOCKET_RECEIVE_BUFFER_SIZE );
}

void SSLSocketInitiator::onInitialize( const SessionSettings& s )
EXCEPT ( RuntimeError )
{
  if (m_sslInit)
    return;

  ssl_init();

  std::string errStr;

  /* set up the application context */
  if ((m_ctx = createSSLContext(false, s, errStr)) == 0)
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
  else if (!loadSSLCert(m_ctx, false, s, getLog(), SSLSocketInitiator::passwordHandleCB, errStr))
  {
    ssl_term();
    throw RuntimeError(errStr);
  }

  int verifyLevel;
  if (!loadCAInfo(m_ctx, false, s, getLog(), errStr, verifyLevel))
  {
    ssl_term();
    throw RuntimeError(errStr);
  }

  m_sslInit = true;
}

void SSLSocketInitiator::onStart()
{
  connect();

  while ( !isStopped() ) {
    m_connector.block( *this, false, 1.0 );
    onTimeout( m_connector );
  }

  time_t start = 0;
  time_t now = 0;

  ::time( &start );
  while ( isLoggedOn() )
  {
    m_connector.block( *this );
    if( ::time(&now) -5 >= start )
      break;
  }
}

bool SSLSocketInitiator::onPoll( double timeout )
{
  time_t start = 0;
  time_t now = 0;

  if( isStopped() )
  {
    if( start == 0 )
      ::time( &start );
    if( !isLoggedOn() )
      return false;
    if( ::time(&now) - 5 >= start )
      return false;
  }

  m_connector.block( *this, true, timeout );
  return true;
}

void SSLSocketInitiator::onStop()
{
}

void SSLSocketInitiator::doConnect( const SessionID& s, const Dictionary& d )
{
  try
  {
    std::string address;
    short port = 0;
    std::string sourceAddress;
    short sourcePort = 0;

    Session* session = Session::lookupSession( s );
    if( !session->isSessionTime(UtcTimeStamp()) ) return;

    Log* log = session->getLog();

    getHost( s, d, address, port, sourceAddress, sourcePort );

    log->onEvent( "Connecting to " + address + " on port " + IntConvertor::convert((unsigned short)port) + " (Source " + sourceAddress + ":" + IntConvertor::convert((unsigned short)sourcePort) + ")");
    socket_handle result = m_connector.connect( address, port, m_noDelay, m_sendBufSize, m_rcvBufSize, sourceAddress, sourcePort );

    SSL *ssl = SSL_new(m_ctx);
    if (ssl == 0)
    {
      log->onEvent("Failed to create ssl object");
      return;
    }
    SSL_clear(ssl);
    BIO *sbio = BIO_new_socket(result, BIO_CLOSE); //unfortunately OpenSSL assumes socket is int
    
    if (sbio == 0)
    {
      log->onEvent("BIO_new_socket failed");
      return;
    }
    SSL_set_bio(ssl, sbio, sbio);    

    setPending( s );
    m_pendingConnections[ result ] = new SSLSocketConnection( *this, s, result, ssl, &m_connector.getMonitor() );
  }
  catch ( std::exception& ) {}
}

bool SSLSocketInitiator::handshakeSSL(SSL* ssl)
{
    ERR_clear_error();
    // Do the SSL handshake.
    int rc = SSL_connect(ssl);
    while (rc <= 0) {
        int err = SSL_get_error(ssl, rc);
        if ((err == SSL_ERROR_WANT_READ) ||
            (err == SSL_ERROR_WANT_WRITE)) {
            errno = EINTR;
        } else {
            getLog()->onEvent("SSL_connect failed with SSL error " + IntConvertor::convert(err));
            return false;
        }
        ERR_clear_error();
        rc = SSL_connect(ssl);
    }
    return true;
}

void SSLSocketInitiator::onConnect( SocketConnector& connector, socket_handle s )
{
  SocketConnections::iterator i = m_pendingConnections.find( s );
  if( i == m_pendingConnections.end() ) return;
  SSLSocketConnection* pSocketConnection = i->second;

  bool sslHandshakeSuccess = handshakeSSL(pSocketConnection->sslObject());

  if (sslHandshakeSuccess) {
      m_connections[s] = pSocketConnection;
      m_pendingConnections.erase(i);
      setConnected(pSocketConnection->getSession()->getSessionID());
      pSocketConnection->onTimeout();
  }else
  {
      setDisconnected(pSocketConnection->getSession()->getSessionID());
      m_pendingConnections.erase(i);
      delete pSocketConnection;
  }
}

void SSLSocketInitiator::onWrite( SocketConnector& connector, socket_handle s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SSLSocketConnection* pSocketConnection = i->second;
  if( pSocketConnection->processQueue() )
    pSocketConnection->unsignal();
}

bool SSLSocketInitiator::onData( SocketConnector& connector, socket_handle s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return false;
  SSLSocketConnection* pSocketConnection = i->second;
  return pSocketConnection->read( connector );
}

void SSLSocketInitiator::onDisconnect( SocketConnector&, socket_handle s )
{
  SocketConnections::iterator i = m_connections.find( s );
  SocketConnections::iterator j = m_pendingConnections.find( s );

  SSLSocketConnection* pSocketConnection = 0;
  if( i != m_connections.end() ) 
    pSocketConnection = i->second;
  if( j != m_pendingConnections.end() )
    pSocketConnection = j->second;
  if( !pSocketConnection )
    return;

  setDisconnected( pSocketConnection->getSession()->getSessionID() );

  Session* pSession = pSocketConnection->getSession();
  if ( pSession )
  {
    pSession->disconnect();
    setDisconnected( pSession->getSessionID() );
  }

  delete pSocketConnection;
  m_connections.erase( s );
  m_pendingConnections.erase( s );
}

void SSLSocketInitiator::onError( SocketConnector& connector )
{
  onTimeout( connector );
}

void SSLSocketInitiator::onTimeout( SocketConnector& )
{
  time_t now;
  ::time( &now );

  if ( (now - m_lastConnect) >= m_reconnectInterval )
  {
    connect();
    m_lastConnect = now;
  }

  SocketConnections::iterator i;
  for ( i = m_connections.begin(); i != m_connections.end(); ++i )
    i->second->onTimeout();
}

void SSLSocketInitiator::getHost( const SessionID& s, const Dictionary& d,
                               std::string& address, short& port,
                               std::string& sourceAddress, short& sourcePort)
{
  int num = 0;
  SessionToHostNum::iterator i = m_sessionToHostNum.find( s );
  if ( i != m_sessionToHostNum.end() ) num = i->second;

  std::stringstream hostStream;
  hostStream << SOCKET_CONNECT_HOST << num;
  std::string hostString = hostStream.str();

  std::stringstream portStream;
  portStream << SOCKET_CONNECT_PORT << num;
  std::string portString = portStream.str();

  sourcePort = 0;
  sourceAddress.clear();

  if( d.has(hostString) && d.has(portString) )
  {
    address = d.getString( hostString );
    port = ( short ) d.getInt( portString );

    std::stringstream sourceHostStream;
    sourceHostStream << SOCKET_CONNECT_SOURCE_HOST << num;
    hostString = sourceHostStream.str();
    if( d.has(hostString) )
      sourceAddress = d.getString( hostString );

    std::stringstream sourcePortStream;
    sourcePortStream << SOCKET_CONNECT_SOURCE_PORT << num;
    portString = sourcePortStream.str();
    if( d.has(portString) )
      sourcePort = ( short ) d.getInt( portString );
  }
  else
  {
    num = 0;
    address = d.getString( SOCKET_CONNECT_HOST );
    port = ( short ) d.getInt( SOCKET_CONNECT_PORT );

    if( d.has(SOCKET_CONNECT_SOURCE_HOST) )
      sourceAddress = d.getString( SOCKET_CONNECT_SOURCE_HOST );
    if( d.has(SOCKET_CONNECT_SOURCE_PORT) )
      sourcePort = ( short ) d.getInt( SOCKET_CONNECT_SOURCE_PORT );
  }

  m_sessionToHostNum[ s ] = ++num;
}

int SSLSocketInitiator::passwordHandleCallback(char *buf, size_t bufsize,
                                                       int verify, void *job)
{
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif
