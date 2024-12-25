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
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"
#include <Application.h>
#include <Dictionary.h>
#include <MessageStore.h>
#include <SessionSettings.h>
#include <SocketAcceptor.h>
#include <SocketConnection.h>
#include <SocketInitiator.h>
#include <SocketServer.h>
#include <Utility.h>
#include <fix42/Logon.h>
#include <fix42/NewOrderSingle.h>
#include <set>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("SocketConnectionTests") {
  struct TestSocketMonitor : public SocketMonitor {
    virtual void signal(int socket) { signaledSocket = socket; }

    virtual void unsignal(int socket) { unsignalSocket = socket; }

    virtual bool drop(int socket) {
      dropSocket = socket;
      return true;
    }

    int signaledSocket = -1;
    int unsignalSocket = -1;
    int dropSocket = -1;
  };

  struct TestApplication : public FIX::NullApplication {
    void fromApp(const FIX::Message &m, const FIX::SessionID &)
        EXCEPT(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType) {
      count++;
    }

    int count = 0;
  };

  struct NullLogFactory : public LogFactory {
  public:
    virtual ~NullLogFactory() {}
    virtual Log *create() { return 0; }
    virtual Log *create(const SessionID &) { return 0; }
    virtual void destroy(Log *) {}
  };

  struct TestSession : public Session {
    TestSession(
        Application &app,
        MessageStoreFactory &factory,
        const SessionID &sessionId,
        DataDictionaryProvider &provider,
        const TimeRange &timeRange,
        int heartBtInt)
        : Session(
              []() { return UtcTimeStamp::now(); },
              app,
              factory,
              sessionId,
              provider,
              timeRange,
              heartBtInt,
              nullptr) {};
    ~TestSession() {};

    virtual void next(const std::string &, const UtcTimeStamp &timeStamp, bool queued = false) {
      if (nextThrowInvalidMsg) {
        throw InvalidMessage();
      }
    }

    SocketConnection *pConnection = nullptr;
    bool nextThrowInvalidMsg = false;
  };

  struct TestSocketInitiator : public SocketInitiator {
    TestSocketInitiator(
        Application &app,
        MessageStoreFactory &factory,
        const SessionSettings &settings,
        Session *session)
        : SocketInitiator(app, factory, settings),
          pSession(session) {};

    virtual ~TestSocketInitiator() {};

    virtual Session *getSession(const SessionID &, Responder &responder) {
      pSession->setResponder(&responder);
      return pSession;
    }

    Session *pSession;
  };

  struct TestSocketAcceptor : public SocketAcceptor {
    TestSocketAcceptor(
        Application &app,
        MessageStoreFactory &factory,
        const SessionSettings &settings,
        Session *session,
        LogFactory &log)
        : SocketAcceptor(app, factory, settings, log),
          pSession(session) {};

    virtual ~TestSocketAcceptor() {};

    virtual Session *getSession(const std::string &msg, Responder &responder) {
      pSession->setResponder(&responder);
      return pSession;
    }

    Session *pSession;
  };

  struct BaseSocketConnection {
    BaseSocketConnection() {
      initiatorSessionID = SessionID(BeginString("FIX.4.2"), SenderCompID("INITIATOR"), TargetCompID("ACCEPT"));

      acceptorSessionID = SessionID(BeginString("FIX.4.2"), SenderCompID("ACCEPT"), TargetCompID("INITIATOR"));

      initiatorProvider.addTransportDataDictionary(
          initiatorSessionID.getBeginString(),
          FIX::TestSettings::pathForSpec("FIX42"));
      acceptorProvider.addTransportDataDictionary(
          acceptorSessionID.getBeginString(),
          FIX::TestSettings::pathForSpec("FIX42"));

      sessionTime.reset(new TimeRange(UtcTimeOnly(), UtcTimeOnly(), 0, 31));

      dictionaryInitiator.setString("ConnectionType", "initiator");
      dictionaryInitiator.setString("FileStorePath", "store");
      dictionaryInitiator.setString(USE_DATA_DICTIONARY, "N");
      dictionaryInitiator.setString(START_TIME, "12:00:00");
      dictionaryInitiator.setString(END_TIME, "12:00:00");
      dictionaryInitiator.setString(START_DAY, "Sun");
      dictionaryInitiator.setString(END_DAY, "Mon");
      dictionaryInitiator.setString(HEARTBTINT, "30");

      settingsInitiator.set(initiatorSessionID, dictionaryInitiator);

      dictionaryAcceptor.setString("ConnectionType", "acceptor");
      dictionaryAcceptor.setString("FileStorePath", "store");
      dictionaryAcceptor.setString(USE_DATA_DICTIONARY, "N");
      dictionaryAcceptor.setString(START_TIME, "12:00:00");
      dictionaryAcceptor.setString(END_TIME, "12:00:00");
      dictionaryAcceptor.setString(START_DAY, "Sun");
      dictionaryAcceptor.setString(END_DAY, "Mon");

      settingsAcceptor.set(acceptorSessionID, dictionaryAcceptor);
      acceptorSession.reset(
          new TestSession(application, factory, acceptorSessionID, acceptorProvider, *sessionTime, 1));
      acceptor.reset(new TestSocketAcceptor(application, factory, settingsAcceptor, acceptorSession.get(), logFactory));

      initiator.reset(new SocketInitiator(application, factory, settingsInitiator));
      initiatorSession.reset(
          new TestSession(application, factory, initiatorSessionID, initiatorProvider, *sessionTime, 1));
      testInitiator.reset(new TestSocketInitiator(application, factory, settingsInitiator, initiatorSession.get()));
    };

    ~BaseSocketConnection() { socket_close(socket); };

    DataDictionaryProvider initiatorProvider;
    DataDictionaryProvider acceptorProvider;

    SessionID initiatorSessionID;
    Dictionary dictionaryInitiator;
    SessionSettings settingsInitiator;

    SessionID acceptorSessionID;
    Dictionary dictionaryAcceptor;
    SessionSettings settingsAcceptor;

    TestSocketMonitor monitor;
    TestApplication application;
    FIX::MemoryStoreFactory factory;
    NullLogFactory logFactory;
    SocketServer server;

    std::unique_ptr<TimeRange> sessionTime;
    std::unique_ptr<TestSession> initiatorSession;
    std::unique_ptr<TestSession> acceptorSession;

    std::unique_ptr<SocketInitiator> initiator;
    std::unique_ptr<TestSocketInitiator> testInitiator;

    std::unique_ptr<SocketAcceptor> acceptor;
    int socket = 101;
  };

  struct TestSessionConnection : public BaseSocketConnection {
    TestSessionConnection()
        : BaseSocketConnection() {
      pSocketConnection.reset(new SocketConnection(*testInitiator, initiatorSessionID, socket, &monitor));
    };

    ~TestSessionConnection() {};

    Session *getSession() { return pSocketConnection->getSession(); }

    std::unique_ptr<SocketConnection> pSocketConnection;
  };

  SECTION("socketTimeout_SessionIsNotNull") {
    TestSessionConnection connection;
    connection.pSocketConnection->onTimeout();
    Session *session = connection.pSocketConnection->getSession();
    CHECK(nullptr != session);
  }

  SECTION("ReadSocket_SessionMissing_NoMessagesRead") {
    TestSessionConnection connection;
    std::set<SessionID> sessions;
    connection.pSocketConnection.reset(new SocketConnection(connection.socket, sessions, &connection.monitor));

    SocketConnector connector;
    CHECK(!connection.pSocketConnection->read(connector));
  }

  SECTION("ReadSocket_SocketException_ReadFailed") {
    TestSessionConnection connection;
    Session *session = connection.getSession();
    CHECK(nullptr != session);
    session->disconnect();

    SocketConnector connector;
    CHECK(!connection.pSocketConnection->read(connector));
  }
}
