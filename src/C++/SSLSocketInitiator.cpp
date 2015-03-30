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

#include "UtilitySSL.h"
#include "ThreadedSSLSocketInitiator.h"
#include "Session.h"
#include "Settings.h"

namespace {
FIX::ThreadedSSLSocketInitiator *initObj = 0;
int passwordHandleCB(char *buf, int bufsize, int verify, void *job) {
  return initObj->passwordHandleCallback(buf, bufsize, verify, job);
}
}

namespace FIX {
ThreadedSSLSocketInitiator::ThreadedSSLSocketInitiator(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings) throw(ConfigError)
    : Initiator(application, factory, settings), m_lastConnect(0),
      m_reconnectInterval(30), m_noDelay(false), m_sendBufSize(0),
      m_rcvBufSize(0), m_sslInit(false), m_ctx(0) {
  socket_init();
  initObj = this;
}

ThreadedSSLSocketInitiator::ThreadedSSLSocketInitiator(
    Application &application, MessageStoreFactory &factory,
    const SessionSettings &settings, LogFactory &logFactory) throw(ConfigError)
    : Initiator(application, factory, settings, logFactory), m_lastConnect(0),
      m_reconnectInterval(30), m_noDelay(false), m_sendBufSize(0),
      m_rcvBufSize(0), m_sslInit(false), m_ctx(0) {
  socket_init();
  initObj = this;
}

ThreadedSSLSocketInitiator::~ThreadedSSLSocketInitiator() {
  if (m_sslInit) {
    SSL_CTX_free(m_ctx);
    m_ctx = 0;
    ssl_term();
  }

  socket_term();
}

void ThreadedSSLSocketInitiator::onConfigure(const SessionSettings &s) throw(
    ConfigError) {
  const Dictionary &dict = s.get();

  if (dict.has(RECONNECT_INTERVAL))
    m_reconnectInterval = dict.getInt(RECONNECT_INTERVAL);
  if (dict.has(SOCKET_NODELAY))
    m_noDelay = dict.getBool(SOCKET_NODELAY);
  if (dict.has(SOCKET_SEND_BUFFER_SIZE))
    m_sendBufSize = dict.getInt(SOCKET_SEND_BUFFER_SIZE);
  if (dict.has(SOCKET_RECEIVE_BUFFER_SIZE))
    m_rcvBufSize = dict.getInt(SOCKET_RECEIVE_BUFFER_SIZE);
}

void ThreadedSSLSocketInitiator::onInitialize(const SessionSettings &s) throw(
    RuntimeError) {
  if (m_sslInit)
    return;

  ssl_init();

  /* set up the application context */
  m_ctx = SSL_CTX_new(SSLv23_client_method());
  if (m_ctx == 0) {
    throw RuntimeError("Unable to get context");
  }

  std::string strOptions;
  if (m_settings.get().has(SSL_PROTOCOL)) {
    strOptions.assign(m_settings.get().getString(SSL_PROTOCOL));
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
    getLog()->onEvent(errStr);
    throw RuntimeError("Failed to load SSL cert. Please check log for details");
  }

  if (!loadCAInfo(errStr)) {
    getLog()->onEvent(errStr);
    throw RuntimeError("Failed to load CRL info. Please check log for details");
  }

  m_sslInit = true;
}

bool ThreadedSSLSocketInitiator::loadSSLCertificate(std::string &errStr) {

  std::string cert;
  if (m_settings.get().has(CLIENT_CERT_FILE))
    cert.assign(m_settings.get().getString(CLIENT_CERT_FILE));

  if (cert.empty())
    return true;

  getLog()->onEvent("Loading SSL certificate");

  errStr.erase();

  std::string key;
  if (m_settings.get().has(CLIENT_CERT_KEY_FILE))
    key.assign(m_settings.get().getString(CLIENT_CERT_KEY_FILE));
  else
    key.assign(cert);

  SSL_CTX_set_default_passwd_cb(m_ctx, ::passwordHandleCB);

  if (SSL_CTX_use_certificate_file(m_ctx, cert.c_str(), SSL_FILETYPE_PEM) <=
      0) {
    errStr.assign("Could not get certificate from file ");
    errStr.append(cert);
    return false;
  }

  if (SSL_CTX_use_PrivateKey_file(m_ctx, key.c_str(), SSL_FILETYPE_PEM) <= 0) {
    errStr.assign("Could not get key from file ");
    errStr.append(key);
    return false;
  }

  /* Now we know that a key and cert have been set against
   * the SSL context */
  if (!SSL_CTX_check_private_key(m_ctx)) {
    errStr.assign("Private key does not match the certificate public key");
    return false;
  }

  return true;
}

bool ThreadedSSLSocketInitiator::loadCAInfo(std::string &errStr) {

  std::string caFile;
  if (m_settings.get().has(CERT_AUTH_FILE))
    caFile.assign(m_settings.get().getString(CERT_AUTH_FILE));

  std::string caDir;
  if (m_settings.get().has(CERT_AUTH_DIR))
    caDir.assign(m_settings.get().getString(CERT_AUTH_DIR));

  if (caFile.empty() && caDir.empty())
    return true;

  getLog()->onEvent("Loading CA info");

  errStr.erase();

  if (!SSL_CTX_load_verify_locations(m_ctx, caFile.empty() ? 0 : caFile.c_str(),
                                     caDir.empty() ? 0 : caDir.c_str()) ||
      !SSL_CTX_set_default_verify_paths(m_ctx)) {
    errStr.assign("Unable to configure verify locations for authentication");
    return false;
  }

  STACK_OF(X509_NAME) * caList;
  if ((caList = findCAList(caFile.empty() ? 0 : caFile.c_str(),
                           caDir.empty() ? 0 : caDir.c_str())) == 0) {
    errStr.assign("Unable to determine list of available CA certificates "
                  "for authentication");
    return false;
  }
  SSL_CTX_set_client_CA_list(m_ctx, caList);

  /* Set the certificate verification callback */
  SSL_CTX_set_verify(m_ctx, SSL_VERIFY_PEER, callbackVerify);

  return true;
}

void ThreadedSSLSocketInitiator::onStart() {
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

bool ThreadedSSLSocketInitiator::onPoll(double timeout) { return false; }

void ThreadedSSLSocketInitiator::onStop() {
  SocketToThread threads;
  SocketToThread::iterator i;

  {
    Locker l(m_mutex);

    time_t start = 0;
    time_t now = 0;

    ::time(&start);
    while (isLoggedOn()) {
      if (::time(&now) - 5 >= start)
        break;
    }

    threads = m_threads;
    m_threads.clear();
  }

  for (i = threads.begin(); i != threads.end(); ++i)
    ssl_socket_close(i->first.first, i->first.second);

  for (i = threads.begin(); i != threads.end(); ++i) {
    thread_join(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
  }
  threads.clear();
}

void ThreadedSSLSocketInitiator::doConnect(const SessionID &s,
                                           const Dictionary &d) {
  try {
    Session *session = Session::lookupSession(s);
    if (!session->isSessionTime(UtcTimeStamp()))
      return;

    Log *log = session->getLog();

    std::string address;
    short port = 0;
    getHost(s, d, address, port);

    int socket = socket_createConnector();
    if (m_noDelay)
      socket_setsockopt(socket, TCP_NODELAY);
    if (m_sendBufSize)
      socket_setsockopt(socket, SO_SNDBUF, m_sendBufSize);
    if (m_rcvBufSize)
      socket_setsockopt(socket, SO_RCVBUF, m_rcvBufSize);

    setPending(s);
    log->onEvent("Connecting to " + address + " on port " +
                 IntConvertor::convert((unsigned short)port));

    SSL *ssl = SSL_new(m_ctx);
    if (ssl == 0) {
      log->onEvent("Failed to create ssl object");
      return;
    }
    SSL_clear(ssl);
    BIO *sbio = BIO_new_socket(socket, BIO_CLOSE);
    SSL_set_bio(ssl, sbio, sbio);

    ThreadedSSLSocketConnection *pConnection = new ThreadedSSLSocketConnection(
        s, socket, ssl, address, port, getLog());

    ThreadPair *pair = new ThreadPair(this, pConnection);

    {
      Locker l(m_mutex);
      thread_id thread;
      if (thread_spawn(&socketThread, pair, thread)) {
        addThread(SocketKey(socket, ssl), thread);
      } else {
        delete pair;
        pConnection->disconnect();
        delete pConnection;
        SSL_free(ssl);
        setDisconnected(s);
      }
    }
  } catch (std::exception &) {
  }
}

void ThreadedSSLSocketInitiator::addThread(SocketKey s, thread_id t) {
  Locker l(m_mutex);

  m_threads[s] = t;
}

void ThreadedSSLSocketInitiator::removeThread(SocketKey s) {
  Locker l(m_mutex);
  SocketToThread::iterator i = m_threads.find(s);

  if (i != m_threads.end()) {
    thread_detach(i->second);
    if (i->first.second != 0)
      SSL_free(i->first.second);
    m_threads.erase(i);
  }
}

THREAD_PROC ThreadedSSLSocketInitiator::socketThread(void *p) {
  ThreadPair *pair = reinterpret_cast<ThreadPair *>(p);

  ThreadedSSLSocketInitiator *pInitiator = pair->first;
  ThreadedSSLSocketConnection *pConnection = pair->second;
  FIX::SessionID sessionID = pConnection->getSession()->getSessionID();
  FIX::Session *pSession = FIX::Session::lookupSession(sessionID);
  int socket = pConnection->getSocket();
  delete pair;

  pInitiator->lock();

  if (!pConnection->connect()) {
    pInitiator->getLog()->onEvent("Connection failed");
    pConnection->disconnect();
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    pInitiator->removeThread(SocketKey(socket, ssl));
    pInitiator->setDisconnected(sessionID);
    return 0;
  }

  // Do the SSL handshake.
  int rc = SSL_connect(pConnection->sslObject());
  if (rc == -1) {
    int err = SSL_get_error(pConnection->sslObject(), rc);
    pInitiator->getLog()->onEvent("SSL_connect failed with SSL error " + err);
    pConnection->disconnect();
    SSL *ssl = pConnection->sslObject();
    delete pConnection;
    pInitiator->removeThread(SocketKey(socket, ssl));
    pInitiator->setDisconnected(sessionID);
    return 0;
  }

  pInitiator->setConnected(sessionID);
  pInitiator->getLog()->onEvent("Connection succeeded");

  pSession->next();

  while (pConnection->read()) {
  }

  SSL *ssl = pConnection->sslObject();
  delete pConnection;
  if (!pInitiator->isStopped())
    pInitiator->removeThread(SocketKey(socket, ssl));

  pInitiator->setDisconnected(sessionID);
  return 0;
}

void ThreadedSSLSocketInitiator::getHost(const SessionID &s,
                                         const Dictionary &d,
                                         std::string &address, short &port) {
  int num = 0;
  SessionToHostNum::iterator i = m_sessionToHostNum.find(s);
  if (i != m_sessionToHostNum.end())
    num = i->second;

  std::stringstream hostStream;
  hostStream << SOCKET_CONNECT_HOST << num;
  std::string hostString = hostStream.str();

  std::stringstream portStream;
  portStream << SOCKET_CONNECT_PORT << num;
  std::string portString = portStream.str();

  if (d.has(hostString) && d.has(portString)) {
    address = d.getString(hostString);
    port = (short)d.getInt(portString);
  } else {
    num = 0;
    address = d.getString(SOCKET_CONNECT_HOST);
    port = (short)d.getInt(SOCKET_CONNECT_PORT);
  }

  m_sessionToHostNum[s] = ++num;
}

int ThreadedSSLSocketInitiator::passwordHandleCallback(char *buf, size_t bufsize,
                                                       int verify, void *job) {
  if (m_password.length() > bufsize)
    return -1;

  std::strcpy(buf, m_password.c_str());
  return m_password.length();
}
}

#endif