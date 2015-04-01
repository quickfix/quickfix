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


#include "SSLSocketAcceptor.h"
#include "Session.h"
#include "Settings.h"
#include "Utility.h"

namespace {
FIX::SSLSocketAcceptor *acceptObj = 0;
int passPhraseHandleCB(char *buf, int bufsize, int verify, void *job) {
  return acceptObj->passwordHandleCallback(buf, bufsize, verify, job);
}
}

namespace FIX {

SSLSocketAcceptor::SSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings) throw(ConfigError)
    : Acceptor(application, factory, settings), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0), m_pServer(0) {
  socket_init();
}

SSLSocketAcceptor::SSLSocketAcceptor(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings, LogFactory &logFactory) throw(ConfigError)
    : Acceptor(application, factory, settings, logFactory), m_sslInit(false),
      m_verify(SSL_CLIENT_VERIFY_NOTSET), m_ctx(0), m_revocationStore(0) {
  socket_init();
}

SSLSocketAcceptor::~SSLSocketAcceptor() {
  if (m_sslInit) {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }

  socket_term();
}

void SSLSocketAcceptor::onConfigure(const SessionSettings &s) throw(
    ConfigError) {
  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i;
  for (i = sessions.begin(); i != sessions.end(); ++i) {
    const Dictionary &settings = s.get(*i);
    settings.getInt(SOCKET_ACCEPT_PORT);
    if (settings.has(SOCKET_REUSE_ADDRESS))
      settings.getBool(SOCKET_REUSE_ADDRESS);
    if (settings.has(SOCKET_NODELAY))
      settings.getBool(SOCKET_NODELAY);
  }
}

void SSLSocketAcceptor::onInitialize(const SessionSettings &s) throw(
    RuntimeError) {
  if (!m_sslInit) {

    ssl_init();

    /* set up the application context */
    m_ctx = SSL_CTX_new(SSLv23_server_method());
    if (m_ctx == 0) {
      throw RuntimeError("Unable to get context");
    }

    std::string strOptions;
    if (m_settings.get().has(SSL_PROTOCOL)) {
      strOptions = m_settings.get().getString(SSL_PROTOCOL);
    }
    setCtxOptions(m_ctx, strOptions.c_str());

    SSL_CTX_set_mode(m_ctx, SSL_MODE_ENABLE_PARTIAL_WRITE |
                                SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER);

    if (m_settings.get().has(SSL_CIPHER_SUITE)) {
      std::string strCipherSuite = m_settings.get().getString(SSL_CIPHER_SUITE);

      if (!strCipherSuite.empty() && !SSL_CTX_set_cipher_list(m_ctx, strCipherSuite.c_str()))
        throw RuntimeError("Unable to configure permitted SSL ciphers");
    }

    std::string errStr;
    if (!loadSSLCertificate(errStr)) {
      ssl_term();
      getLog()->onEvent(errStr);
      throw RuntimeError(
          "Failed to load SSL cert. Please check log for details");
    }

    if (!loadCRLInfo(errStr)) {
      ssl_term();
      getLog()->onEvent(errStr);
      throw RuntimeError(
          "Failed to load CRL info. Please check log for details");
    }

    SSL_CTX_set_options(m_ctx, SSL_OP_SINGLE_DH_USE);
    SSL_CTX_set_session_cache_mode(m_ctx, SSL_SESS_CACHE_SERVER);

    m_sslInit = true;
  }

  short port = 0;
  std::set<int> ports;

  std::set<SessionID> sessions = s.getSessions();
  std::set<SessionID>::iterator i = sessions.begin();
  for (; i != sessions.end(); ++i) {
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

    int socket = socket_createAcceptor(port, reuseAddress);
    if (socket < 0) {
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

void SSLSocketAcceptor::onStart() {
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

bool SSLSocketAcceptor::loadSSLCertificate(std::string &errStr) {

  getLog()->onEvent("Loading SSL certificate");

  errStr.erase();

  if (!m_settings.get().has(SERVER_CERT_FILE)) {
    errStr.assign(SERVER_CERT_FILE);
    errStr.append(" parameter not found");
    return false;
  }

  std::string cert(m_settings.get().getString(SERVER_CERT_FILE));
  std::string key;
  if (m_settings.get().has(SERVER_CERT_KEY_FILE))
    key.assign(m_settings.get().getString(SERVER_CERT_KEY_FILE));
  else
    key.assign(cert);

  FILE *fp;

  if ((fp = fopen(cert.c_str(), "r")) == 0) {
    errStr.assign(cert);
    errStr.append(" file could not be opened");
    return false;
  }

  X509 *X509Cert = readX509(fp, 0, 0);

  fclose(fp);

  if (X509Cert == 0) {
    errStr.assign(cert);
    errStr.append(" readX509 failed");
    return false;
  }

  switch (typeofSSLAlgo(X509Cert, 0)) {
  case SSL_ALGO_RSA:
    getLog()->onEvent("Configuring RSA server certificate");

    if (SSL_CTX_use_certificate(m_ctx, X509Cert) <= 0) {
      errStr.assign("Unable to configure RSA server certificate");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    getLog()->onEvent("Configuring DSA server certificate");
    if (SSL_CTX_use_certificate(m_ctx, X509Cert) <= 0) {
      errStr.assign("Unable to configure DSA server certificate");
      return false;
    }
    break;

  default:
    errStr.assign("Unable to configure server certificate");
    return false;
    break;
  }
  X509_free(X509Cert);

  if ((fp = fopen(key.c_str(), "r")) == 0) {
    errStr.assign(key);
    errStr.append(" file could not be opened");
    return false;
  }

  EVP_PKEY *privateKey = readPrivateKey(fp, 0, ::passPhraseHandleCB);

  fclose(fp);

  if (privateKey == 0) {
    errStr.assign(key);
    errStr.append(" readPrivateKey failed");
    return false;
  }

  switch (typeofSSLAlgo(0, privateKey)) {
  case SSL_ALGO_RSA:
    getLog()->onEvent("Configuring RSA server private key");
    if (SSL_CTX_use_PrivateKey(m_ctx, privateKey) <= 0) {
      errStr.assign("Unable to configure RSA server private key");
      return false;
    }
    break;

  case SSL_ALGO_DSA:
    getLog()->onEvent("Configuring DSA server private key");
    if (SSL_CTX_use_PrivateKey(m_ctx, privateKey) <= 0) {
      errStr.assign("Unable to configure DSA server private key");
      return false;
    }
    break;
  default:

    errStr.assign("Unable to configure server certificate");
    return false;
    break;
  }
  EVP_PKEY_free(privateKey);

  std::string caFile;
  if (m_settings.get().has(CERT_AUTH_FILE))
    caFile.assign(m_settings.get().getString(CERT_AUTH_FILE));

  std::string caDir;
  if (m_settings.get().has(CERT_AUTH_DIR))
    caDir.assign(m_settings.get().getString(CERT_AUTH_DIR));

  if (caFile.empty() && caDir.empty())
    return true;

  if (!SSL_CTX_load_verify_locations(m_ctx, caFile.empty() ? 0 : caFile.c_str(),
                                     caDir.empty() ? 0 : caDir.c_str()) ||
      !SSL_CTX_set_default_verify_paths(m_ctx)) {
    errStr.assign(
        "Unable to configure verify locations for client authentication");
    return false;
  }

  STACK_OF(X509_NAME) * caList;
  if ((caList = findCAList(caFile.empty() ? 0 : caFile.c_str(),
                           caDir.empty() ? 0 : caDir.c_str())) == 0) {
    errStr.assign("Unable to determine list of available CA certificates "
                  "for client authentication");
    return false;
  }
  SSL_CTX_set_client_CA_list(m_ctx, caList);

  if (m_settings.get().has(VERIFY_LEVEL))
    m_verify = (m_settings.get().getInt(VERIFY_LEVEL));

  if (m_verify != SSL_CLIENT_VERIFY_NOTSET) {
    /* configure new state */
    int cVerify = SSL_VERIFY_NONE;
    if (m_verify == SSL_CLIENT_VERIFY_REQUIRE)
      cVerify |= SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT;
    else if (m_verify == SSL_CLIENT_VERIFY_OPTIONAL)
      cVerify |= SSL_VERIFY_PEER;

    SSL_CTX_set_verify(m_ctx, cVerify, callbackVerify);
  }

  return true;
}

bool SSLSocketAcceptor::loadCRLInfo(std::string &errStr) {
  getLog()->onEvent("Loading CRL information");

  errStr.erase();

  std::string crlFile;
  if (m_settings.get().has(CRL_FILE))
    crlFile.assign(m_settings.get().getString(CRL_FILE));

  std::string crlDir;
  if (m_settings.get().has(CRL_DIR))
    crlDir.assign(m_settings.get().getString(CRL_DIR));

  if (crlFile.empty() && crlDir.empty())
    return true;

  m_revocationStore =
      createX509Store(crlFile.c_str(), crlDir.empty() ? 0 : crlDir.c_str());
  if (m_revocationStore == 0) {
    errStr.assign("Unable to create revocation store");
    return false;
  }

  return true;
}

X509 *SSLSocketAcceptor::readX509(FILE *fp, X509 **x509,
                                          passPhraseHandleCallbackType cb) {
  X509 *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_X509(fp, x509, cb, 0);
  if (rc == 0) {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0) {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_X509_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0) {
      /* 3. try plain DER */
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_X509_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && x509 != 0) {
    if (*x509 != 0)
      X509_free(*x509);
    *x509 = rc;
  }
  return rc;
}

EVP_PKEY *
SSLSocketAcceptor::readPrivateKey(FILE *fp, EVP_PKEY **key,
                                          passPhraseHandleCallbackType cb) {
  EVP_PKEY *rc;
  BIO *bioS;
  BIO *bioF;

  rc = PEM_read_PrivateKey(fp, key, cb, 0);
  if (rc == 0) {
    /* 2. try DER+Base64 */
    fseek(fp, 0L, SEEK_SET);
    if ((bioS = BIO_new(BIO_s_fd())) == 0)
      return 0;
    BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
    if ((bioF = BIO_new(BIO_f_base64())) == 0) {
      BIO_free(bioS);
      return 0;
    }
    bioS = BIO_push(bioF, bioS);
    rc = d2i_PrivateKey_bio(bioS, 0);
    BIO_free_all(bioS);
    if (rc == 0) {
      fseek(fp, 0L, SEEK_SET);
      if ((bioS = BIO_new(BIO_s_fd())) == 0)
        return 0;
      BIO_set_fd(bioS, fileno(fp), BIO_NOCLOSE);
      rc = d2i_PrivateKey_bio(bioS, 0);
      BIO_free(bioS);
    }
  }
  if (rc != 0 && key != 0) {
    if (*key != 0)
      EVP_PKEY_free(*key);
    *key = rc;
  }
  return rc;
}

X509_STORE *SSLSocketAcceptor::createX509Store(const char *cpFile,
                                                       const char *cpPath) {
  X509_STORE *pStore;
  X509_LOOKUP *pLookup;

  if (cpFile == 0 && cpPath == 0)
    return 0;
  if ((pStore = X509_STORE_new()) == 0)
    return 0;
  if (cpFile != 0) {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_file())) == 0) {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_load_file(pLookup, cpFile, X509_FILETYPE_PEM);
  }
  if (cpPath != 0) {
    if ((pLookup = X509_STORE_add_lookup(pStore, X509_LOOKUP_hash_dir())) ==
        0) {
      X509_STORE_free(pStore);
      return 0;
    }
    X509_LOOKUP_add_dir(pLookup, cpPath, X509_FILETYPE_PEM);
  }
  return pStore;
}

bool SSLSocketAcceptor::onPoll(double timeout) {
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

void SSLSocketAcceptor::onStop() {
}

void SSLSocketAcceptor::onConnect( SocketServer& server, int a, int s )
{
  if ( !socket_isValid( s ) ) return;
  SocketConnections::iterator i = m_connections.find( s );
  if ( i != m_connections.end() ) return;
  int port = server.socketToPort( a );
  Sessions sessions = m_portToSessions[port];
  m_connections[ s ] = new SocketConnection( s, sessions, &server.getMonitor() );

  std::stringstream stream;
  stream << "Accepted connection from " << socket_peername( s ) << " on port " << port;

  if( getLog() )
    getLog()->onEvent( stream.str() );
}

void SSLSocketAcceptor::onWrite( SocketServer& server, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SocketConnection* pSocketConnection = i->second;
  if( pSocketConnection->processQueue() )
    pSocketConnection->unsignal();
}

bool SSLSocketAcceptor::onData( SocketServer& server, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return false;
  SocketConnection* pSocketConnection = i->second;
  return pSocketConnection->read( *this, server );
}

void SSLSocketAcceptor::onDisconnect( SocketServer&, int s )
{
  SocketConnections::iterator i = m_connections.find( s );
  if ( i == m_connections.end() ) return ;
  SocketConnection* pSocketConnection = i->second;

  Session* pSession = pSocketConnection->getSession();
  if ( pSession ) pSession->disconnect();

  delete pSocketConnection;
  m_connections.erase( s );
}

void SSLSocketAcceptor::onError( SocketServer& ) 
{
}


int SSLSocketAcceptor::doAccept(SSL *ssl, int &result) {

  int rc = SSL_accept(ssl);
  if (rc <= 0) {
    result = SSL_get_error(ssl, rc);
  }

  return rc;
}

int SSLSocketAcceptor::newConnection(
    SSLSocketConnection *pConnection) {

  int rc;
  int result = -1;
  char *subjName = 0;
  time_t timeout = time(0) + 10;
  int socket = pConnection->getSocket();

  SSL *ssl = pConnection->sslObject();

  /*
   * Now enter the SSL Handshake Phase
   */
  while (!SSL_is_init_finished(ssl)) {
    ERR_clear_error();
    while ((rc = doAccept(ssl, result)) <= 0) {

      if (result == SSL_ERROR_WANT_READ)
        ;
      else if (result == SSL_ERROR_WANT_WRITE)
        ;
      else if (result == SSL_ERROR_ZERO_RETURN) {
        /*
         * The case where the connection was closed before any data
         * was transferred. That's not a real error and can occur
         * sporadically with some clients.
         */
        getLog()->onEvent("SSL handshake stopped: connection was closed");
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      } else if (ERR_GET_REASON(ERR_peek_error()) == SSL_R_HTTP_REQUEST) {
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
        do {
#ifndef _MSC_VER // Unix
          do {
            rv = read(socket, ca, 1);
          } while (rv == -1 && errno == EINTR);
#else // Windows
          do {
            rv = recv(socket, ca, 1, 0);
          } while (rv == -1 && errno == EINTR);
#endif
        } while (rv > 0 && ca[0] != '\012' /*LF*/);

        SSL_set_shutdown(ssl, SSL_SENT_SHUTDOWN | SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        ;
        return result;
      } else if (result == SSL_ERROR_SYSCALL) {
#ifdef AIX
        if (errno == EINTR)
          continue;
        else if (errno == EAGAIN) {
          // Please refer:
          // http://community.emailogy.com/scripts/wa-COMMUNITY.exe?A2=ind0303&L=lstsrv-l&O=A&P=19558
          // http://mirt.net/pipermail/stunnel-users/2007-May/001570.html
          ++retries;
          if (retries <= 100) {
            getLog()->onEvent(
                "EAGAIN received during SSL handshake, trying again");
            process_sleep(0.005);
            continue;
          }
        }
        if (errno > 0) {
          getLog()->onEvent(std::string("SSL handshake interrupted by system, errno " + IntConvertor::convert(errno));
        } else
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
        if (errno > 0) {
          getLog()->onEvent(
              std::string("SSL handshake interrupted by system, errno ") +
              IntConvertor::convert(errno));
        } else
          getLog()->onEvent("Spurious SSL handshake interrupt");
#endif
        SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
        ssl_socket_close(socket, ssl);
        return result;
      } else {
        /*
         * Ok, anything else is a fatal error
         */
        unsigned long err = ERR_get_error();
        getLog()->onEvent("SSL handshake failed");

        while (err) {
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
      if (time(0) > timeout) {
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
    if ((result = SSL_get_verify_result(ssl)) != X509_V_OK) {
      getLog()->onEvent("SSL client authentication failed: ");
      SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
      ssl_socket_close(socket, ssl);
      return result;
    } else {
      if ((xs = SSL_get_peer_certificate(ssl)) != 0) {
        subjName = X509_NAME_oneline(X509_get_subject_name(xs), 0, 0);
      }
    }
  }

  if ((m_verify == SSL_CLIENT_VERIFY_REQUIRE) && subjName == 0) {
    getLog()->onEvent("No acceptable peer certificate available");
    SSL_set_shutdown(ssl, SSL_RECEIVED_SHUTDOWN);
    ssl_socket_close(socket, ssl);
    result = 2;
  }

  if (subjName)
    free(subjName);

  return result;
}

int SSLSocketAcceptor::passwordHandleCallback(char *buf, size_t bufsize,
                                                      int verify, void *job) {
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}
