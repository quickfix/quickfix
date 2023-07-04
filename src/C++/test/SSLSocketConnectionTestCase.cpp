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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <SSLSocketConnection.h>
#include <set>
#include <Application.h>
#include <MessageStore.h>
#include <Dictionary.h>
#include <SessionSettings.h>
#include <SSLSocketInitiator.h>
#include <SSLSocketAcceptor.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/Logon.h>
#include <Utility.h>


using namespace FIX;

SUITE(SocketConnectionTests)
{
  class TestSocketMonitor : public SocketMonitor {
  public:
    virtual void signal( int socket ) {
      signaledSocket = socket;
    }

    virtual void unsignal( int socket ) {
      unsignalSocket = socket;
    }

    virtual bool drop( int socket ) {
      dropSocket = socket;
      return true;
    }

    int signaledSocket = -1;
    int unsignalSocket = -1;
    int dropSocket = -1;

  };

  class TestApplication : public FIX::NullApplication
  {
  public:
    TestApplication() : m_count(0) {}

    void fromApp( const FIX::Message& m, const FIX::SessionID& )
    EXCEPT( FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType )
    {
      m_count++;
    }

    int getCount() { return m_count; }

  private:
    int m_count;
  };

  class NullLogFactory : public LogFactory {
  public:
    virtual ~NullLogFactory() {}
    virtual Log* create(){return 0;}
    virtual Log* create( const SessionID& ){return 0;}
    virtual void destroy( Log* ){}
  };

  class TestSession : public Session {
  public:
    TestSession(Application& app, MessageStoreFactory& factory, const SessionID& sessionId,
        DataDictionaryProvider& provider, const TimeRange& timeRange, int heartBtInt)
    : Session(app, factory, sessionId, provider, timeRange, heartBtInt, nullptr) {};
    ~TestSession(){};

    virtual void next( const std::string&, const UtcTimeStamp& timeStamp, bool queued = false ) {
      if(nextThrowInvalidMsg)
        throw InvalidMessage();
    }

    SSLSocketConnection* pConnection = nullptr;
    bool nextThrowInvalidMsg = false;
  };

  class TestSSLSocketInitiator : public SSLSocketInitiator {
  public:
    TestSSLSocketInitiator(Application& app, MessageStoreFactory& factory, const SessionSettings& settings, Session* session) :
      SSLSocketInitiator(app, factory, settings), pSession(session){    };

    virtual ~TestSSLSocketInitiator(){};

    virtual Session* getSession( const SessionID&, Responder& responder) {
      pSession->setResponder(&responder);
      return pSession;
    }

    Session* pSession;
  };

  class TestSSLSocketAcceptor : public SSLSocketAcceptor {
  public:
    TestSSLSocketAcceptor(Application& app, MessageStoreFactory& factory, const SessionSettings& settings, Session* session, LogFactory& log) :
      SSLSocketAcceptor(app, factory, settings, log), pSession(session){    };

    virtual ~TestSSLSocketAcceptor(){};

    virtual Session* getSession(const std::string& msg, Responder& responder ) {
      pSession->setResponder(&responder);
      return pSession;
    }

    Session* pSession;
  };

  struct BaseSocketConnection
  {
    BaseSocketConnection() {
      initiatorSessionID = SessionID( BeginString( "FIX.4.2" ),
          SenderCompID( "INITIATOR" ), TargetCompID( "ACCEPT" ) );

      acceptorSessionID = SessionID( BeginString( "FIX.4.2" ),
          SenderCompID( "ACCEPT" ), TargetCompID( "INITIATOR" ) );

      initiatorProvider.addTransportDataDictionary( initiatorSessionID.getBeginString(), "../spec/FIX42.xml" );
      acceptorProvider.addTransportDataDictionary( acceptorSessionID.getBeginString(), "../spec/FIX42.xml" );

      sessionTime.reset( new TimeRange(UtcTimeOnly(), UtcTimeOnly(), 0, 31));

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
      acceptorSession.reset(new TestSession(application,factory, acceptorSessionID, acceptorProvider, *sessionTime, 1));
      acceptor.reset(new TestSSLSocketAcceptor(application, factory, settingsAcceptor, acceptorSession.get(), logFactory));

      initiator.reset(new SSLSocketInitiator(application, factory, settingsInitiator));
      initiatorSession.reset(new TestSession(application,factory, initiatorSessionID, initiatorProvider, *sessionTime, 1));
      testInitiator.reset(new TestSSLSocketInitiator(application, factory, settingsInitiator, initiatorSession.get()));
    };

    ~BaseSocketConnection(){
      socket_close(socket);
    };

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

    std::unique_ptr<SSLSocketInitiator> initiator;
    std::unique_ptr<TestSSLSocketInitiator> testInitiator;

    std::unique_ptr<SSLSocketAcceptor> acceptor;
    int socket = 101;

  };

}
