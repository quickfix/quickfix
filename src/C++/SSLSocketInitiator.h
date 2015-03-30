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

#ifndef FIX_SSLSOCKETINITIATOR_H
#define FIX_SSLSOCKETINITIATOR_H

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#if (HAVE_SSL > 0)

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Initiator.h"
#include "SSLSocketConnection.h"
#include <map>

namespace FIX {
/*! \addtogroup user
 *  @{
 */
class SSLSocketInitiator : public Initiator {
public:
  SSLSocketInitiator(Application &, MessageStoreFactory &,
                             const SessionSettings &) throw(ConfigError);
  SSLSocketInitiator(Application &, MessageStoreFactory &,
                             const SessionSettings &,
                             LogFactory &) throw(ConfigError);

  virtual ~SSLSocketInitiator();

  void setPassword(const std::string & pwd) {
    m_password.assign(pwd);
  }

  int passwordHandleCallback(char *buf, size_t bufsize, int verify, void *job);

private:
  typedef std::pair<int, SSL *> SocketKey;
  typedef std::map<SocketKey, thread_id> SocketToThread;
  typedef std::map<SessionID, int> SessionToHostNum;

  void onConfigure(const SessionSettings &) throw(ConfigError);
  void onInitialize(const SessionSettings &) throw(RuntimeError);

  void onStart();
  bool onPoll(double timeout);
  void onStop();

  void doConnect(const SessionID &s, const Dictionary &d);

  void getHost(const SessionID &, const Dictionary &, std::string &, short &);

  bool loadSSLCertificate(std::string &errStr);
  bool loadCAInfo(std::string &errStr);

  SessionToHostNum m_sessionToHostNum;
  time_t m_lastConnect;
  int m_reconnectInterval;
  bool m_noDelay;
  int m_sendBufSize;
  int m_rcvBufSize;
  bool m_sslInit;
  SSL_CTX *m_ctx;
  std::string m_password;
};
/*! @} */
}

#endif // FIX_SOCKETINITIATOR_H

#endif