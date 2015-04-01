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
#ifndef FIX_SSLSOCKETACCEPTOR_H
#define FIX_SSLSOCKETACCEPTOR_H

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Acceptor.h"
#include "SocketServer.h"
#include "SSLSocketConnection.h"

namespace FIX {

typedef enum {
  SSL_CLIENT_VERIFY_NONE = 0,
  SSL_CLIENT_VERIFY_REQUIRE = 1,
  SSL_CLIENT_VERIFY_OPTIONAL = 2,
  SSL_CLIENT_VERIFY_NOTSET = 3
} SSLVerifyClient;

class SSLSocketAcceptor : public Acceptor, SocketServer::Strategy {
  friend class SocketConnection;

public:
  SSLSocketAcceptor(Application &, MessageStoreFactory &,
                            const SessionSettings &) throw(ConfigError);
  SSLSocketAcceptor(Application &, MessageStoreFactory &,
                            const SessionSettings &,
                            LogFactory &) throw(ConfigError);

  virtual ~SSLSocketAcceptor();

  void setPassword(const std::string & pwd) {
    m_password.assign(pwd);
  }

  int passwordHandleCallback(char *buf, size_t bufsize, int verify, void *job);

private:
  bool readSettings(const SessionSettings &);

  typedef std::set<int> Sockets;
  typedef std::set<SessionID> Sessions;
  typedef std::map<int, Sessions> PortToSessions;
  typedef std::map<int, int> SocketToPort;
  typedef std::pair<int, SSL *> SocketKey;

  void onConfigure(const SessionSettings &) throw(ConfigError);
  void onInitialize(const SessionSettings &) throw(RuntimeError);

  void onStart();
  bool onPoll(double timeout);
  void onStop();

  void onConnect( SocketServer&, int, int );
  void onWrite( SocketServer&, int );
  bool onData( SocketServer&, int );
  void onDisconnect( SocketServer&, int );
  void onError( SocketServer& );
  void onTimeout( SocketServer& );

  bool loadSSLCertificate(std::string &errStr);
  bool loadCRLInfo(std::string &errStr);
  X509 *readX509(FILE *fp, X509 **x509, passPhraseHandleCallbackType cb);
  EVP_PKEY *readPrivateKey(FILE *fp, EVP_PKEY **key,
                           passPhraseHandleCallbackType cb);
  int lookupX509Store(X509_STORE *pStore, int nType, X509_NAME *pName,
                      X509_OBJECT *pObj);
  X509_STORE *createX509Store(const char *cpFile, const char *cpPath);
  int newConnection(SSLSocketConnection *pConnection);
  SSL_CTX *sslContext() { return m_ctx; }
  X509_STORE *revocationStore() { return m_revocationStore; }
  int doAccept(SSL *ssl, int & result);

  Sockets m_sockets;
  PortToSessions m_portToSessions;
  SocketToPort m_socketToPort;
  SocketServer* m_pServer;
  SocketConnections m_connections;
  bool m_sslInit;
  int m_verify;
  SSL_CTX *m_ctx;
  X509_STORE *m_revocationStore;
  std::string m_password;

};
/*! @} */
}

#endif // FIX_SOCKETACCEPTOR_H

