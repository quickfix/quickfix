/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#ifndef FIX_SESSIONTESTCASE_H
#define FIX_SESSIONTESTCASE_H

#include <CPPTest/TestCase.h>
#include "Session.h"
#include "Responder.h"

namespace FIX
{
class SessionTestCase : public CPPTest::TestCase < Session >
{
public:
  SessionTestCase()
  {
    add( &m_nextLogon );
    add( &m_nextLogonNoEncryptMethod );
    add( &m_nextLogonResetSeqNumFlag );
    add( &m_notifyResendRequest );
    add( &m_incrMsgSeqNum );
    add( &m_callDisconnect );
    add( &m_doesSessionExist );
    add( &m_lookupSession );
    add( &m_registerSession );
    add( &m_nextTestRequest );
    add( &m_outOfOrder );
    add( &m_nextLogout );
    add( &m_logoutInitiator );
    add( &m_badOrigSendingTime );
    add( &m_noOrigSendingTime );
    add( &m_badCompID );
    add( &m_nextReject );
    add( &m_badMsgType );
    add( &m_nextSequenceReset );
    add( &m_nextGapFill );
    add( &m_nextResendRequest );
    add( &m_badBeginString );
    add( &m_unsupportedMsgType );
    add( &m_resetOnEndTime );
    add( &m_disconnectBeforeStartTime );
    add( &m_resetOnNewSession );
    add( &m_processQueuedMessages );
  }

private:
class Test : public CPPTest::Test < Session > ,
        public Responder, public NullApplication
  {
  protected:
    UtcTimeOnly m_startTime;
    UtcTimeOnly m_endTime;

  public:
    Test()
  : m_endTime( m_startTime ),
    m_toLogon( 0 ),
    m_toResendRequest( 0 ),
    m_toHeartbeat( 0 ),
    m_toLogout( 0 ),
    m_toReject( 0 ),
    m_toSequenceReset( 0 ),
    m_toBusinessMessageReject( 0 ),
    m_fromHeartbeat( 0 ),
    m_fromTestRequest( 0 ),
    m_fromLogout( 0 ),
    m_fromReject( 0 ),
    m_fromSequenceReset( 0 ),
    m_disconnect( 0 )
    {}

    void onTeardown( Session* pObject ) { delete pObject; }

    bool send( const std::string& ) { return true; }
    void onRun() {}
    void toAdmin( Message& message, const SessionID& )
    {
      MsgType msgType;
      message.getHeader().getField( msgType );
      switch ( msgType.getValue() [ 0 ] )
      {
        case 'A':
        m_toLogon++; m_logon = message; break;
        case '2':
        m_toResendRequest++;
        m_resendRequest = message; break;
        case '0':
        m_toHeartbeat++; m_heartbeat = message; break;
        case '5':
        m_toLogout++; break;
        case '3':
        m_toReject++; break;
        case '4':
        m_toSequenceReset++; break;
      }
    }

    void fromAdmin( const Message& message, const SessionID& )
    throw( FieldNotFound, IncorrectDataFormat, IncorrectTagValue, RejectLogon )
    {
      MsgType msgType;
      message.getHeader().getField( msgType );
      switch ( msgType.getValue() [ 0 ] )
      {
        case '0':
        m_fromHeartbeat++; break;
        case '1':
        m_fromTestRequest++; break;
        case '5':
        m_fromLogout++; break;
        case '3':
        m_fromReject++; break;
        case '4':
        m_fromSequenceReset++; break;
      }
    }

    void fromApp( const Message& message, const SessionID& )
    throw( FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType )
    {
      MsgType msgType;
      message.getHeader().getField( msgType );
      if ( msgType == "8" )
        throw UnsupportedMessageType();
    }

    void toApp( Message& message, const SessionID& )
    throw( DoNotSend )
    {
      MsgType msgType;
      message.getHeader().getField( msgType );
      switch ( msgType.getValue() [ 0 ] )
      {
        case 'j':
        m_toBusinessMessageReject++; break;
      }
    }

  void disconnect() { m_disconnect++; }

  virtual Session* createAcceptorSession()
  {
    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "TW" ), TargetCompID( "ISLD" ) );
    SessionTime sessionTime( m_startTime, m_endTime );

    return new Session( *this, m_factory, sessionID, DataDictionary(),
                        sessionTime, 0, 0 );
  }

  virtual Session* createInitiatorSession()
  {
    SessionID sessionID( BeginString( "FIX.4.2" ),
                         SenderCompID( "TW" ), TargetCompID( "ISLD" ) );
    SessionTime sessionTime( m_startTime, m_endTime );

    return new Session( *this, m_factory, sessionID, DataDictionary(),
                        sessionTime, 1, 0 );
  }

  protected:
    Message m_logon;
    Message m_resendRequest;
    Message m_heartbeat;
    int m_toLogon;
    int m_toResendRequest;
    int m_toHeartbeat;
    int m_toLogout;
    int m_toReject;
    int m_toSequenceReset;
    int m_toBusinessMessageReject;
    int m_fromHeartbeat;
    int m_fromTestRequest;
    int m_fromLogout;
    int m_fromReject;
    int m_fromSequenceReset;
    int m_disconnect;

    MemoryStoreFactory m_factory;
  };

  class AcceptorTest : public Test
  {
  public:
    bool onSetup( Session*& pObject );
  };

  class InitiatorTest : public Test
  {
  public:
    bool onSetup( Session*& pObject );
  };

  class EmptyTest : public AcceptorTest
  {
    bool onSetup( Session*& pObject ) { return true; }
    void onTeardown( Session* pObject ) {}
  };

  class nextLogon : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogon;

  class nextLogonNoEncryptMethod : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogonNoEncryptMethod;

  class nextLogonResetSeqNumFlag : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogonResetSeqNumFlag;

  class notifyResendRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_notifyResendRequest;

  class incrMsgSeqNum : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_incrMsgSeqNum;

  class callDisconnect : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_callDisconnect;

  class doesSessionExist : public EmptyTest
  {
    void onRun( Session& object );
  }
  m_doesSessionExist;

  class lookupSession : public EmptyTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
    void onTeardown( Session* pObject );
    Session *m_pSession1, *m_pSession2, *m_pSession3,
    *m_pSession4, *m_pSession5;
  }
  m_lookupSession;

  class registerSession : public EmptyTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
    Session *m_pSession;
  }
  m_registerSession;

  class nextTestRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextTestRequest;

  class outOfOrder : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_outOfOrder;

  class nextLogout : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextLogout;

  class logoutInitiator : public InitiatorTest
  {
    void onRun( Session& object );
  }
  m_logoutInitiator;

  class badOrigSendingTime : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badOrigSendingTime;

  class noOrigSendingTime : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_noOrigSendingTime;

  class badCompID : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badCompID;

  class nextReject : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextReject;

  class badMsgType : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_badMsgType;

  class nextSequenceReset : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextSequenceReset;

  class nextGapFill : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextGapFill;

  class nextResendRequest : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_nextResendRequest;

  class badBeginString : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_badBeginString;

  class unsupportedMsgType : public AcceptorTest
  {
    void onRun( Session& object );
  }
  m_unsupportedMsgType;

  class resetOnEndTime : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_resetOnEndTime;

  class disconnectBeforeStartTime : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_disconnectBeforeStartTime;

  class resetOnNewSession : public AcceptorTest
  {
  class Factory : public MemoryStoreFactory
    {
      MessageStore* create( const SessionID& )
      {
        MemoryStore * pStore = new MemoryStore();
        UtcTimeStamp yesterday;
        yesterday += -( UTC_DAY - 2 );
        pStore->setCreationTime( yesterday );
        return pStore;
      }
    }
    m_previousDayFactory;

    bool onSetup( Session*& pObject );
    void onRun( Session& object );

    Session* createSession();
  }
  m_resetOnNewSession;

  class processQueuedMessages : public AcceptorTest
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_processQueuedMessages;
};
}

#endif //FIX_SESSIONTESTCASE_H
