/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
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
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

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
    add( &m_notifyResendRequest );
    add( &m_incrMsgSeqNum );
    add( &m_callDisconnect );
    add( &m_doesSessionExist );
    add( &m_lookupSession );
    add( &m_registerSession );
    add( &m_nextTestRequest );
    add( &m_outOfOrder );
    add( &m_logout );
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
    add( &m_isSessionTime );
    add( &m_isSameSession );
    add( &m_resetOnEndTime );
    add( &m_disconnectBeforeStartTime );
    add( &m_resetOnNewSession );
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

    bool onSetup( Session*& pObject );
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
    throw( FieldNotFound&, IncorrectDataFormat&, IncorrectTagValue&, RejectLogon& )
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
    throw( FieldNotFound&, IncorrectDataFormat&, IncorrectTagValue&, UnsupportedMessageType& )
    {
      MsgType msgType;
      message.getHeader().getField( msgType );
      if ( msgType == "8" )
        throw UnsupportedMessageType();
    }

    void toApp( Message& message, const SessionID& )
    throw( DoNotSend& )
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

    virtual Session* createSession()
    {
      SessionID sessionID( BeginString( "FIX.4.2" ),
                           SenderCompID( "TW" ), TargetCompID( "ISLD" ) );

      return new Session( *this, m_factory, sessionID, DataDictionary(),
                          m_startTime, m_endTime, 0, 0 );
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

class EmptyTest : public Test
  {
    bool onSetup( Session*& pObject ) { return true; }
    void onTeardown( Session* pObject ) {}}
  ;

class nextLogon : public Test
  {
    void onRun( Session& object );
  }
  m_nextLogon;

class nextLogonNoEncryptMethod : public Test
  {
    void onRun( Session& object );
  }
  m_nextLogonNoEncryptMethod;

class notifyResendRequest : public Test
  {
    void onRun( Session& object );
  }
  m_notifyResendRequest;

class incrMsgSeqNum : public Test
  {
    void onRun( Session& object );
  }
  m_incrMsgSeqNum;

class callDisconnect : public Test
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

class nextTestRequest : public Test
  {
    void onRun( Session& object );
  }
  m_nextTestRequest;

class outOfOrder : public Test
  {
    void onRun( Session& object );
  }
  m_outOfOrder;

class logout : public Test
  {
    void onRun( Session& object );
  }
  m_logout;

class badOrigSendingTime : public Test
  {
    void onRun( Session& object );
  }
  m_badOrigSendingTime;

class noOrigSendingTime : public Test
  {
    void onRun( Session& object );
  }
  m_noOrigSendingTime;

class badCompID : public Test
  {
    void onRun( Session& object );
  }
  m_badCompID;

class nextReject : public Test
  {
    void onRun( Session& object );
  }
  m_nextReject;

class badMsgType : public Test
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_badMsgType;

class nextSequenceReset : public Test
  {
    void onRun( Session& object );
  }
  m_nextSequenceReset;

class nextGapFill : public Test
  {
    void onRun( Session& object );
  }
  m_nextGapFill;

class nextResendRequest : public Test
  {
    void onRun( Session& object );
  }
  m_nextResendRequest;

class badBeginString : public Test
  {
    void onRun( Session& object );
  }
  m_badBeginString;

class unsupportedMsgType : public Test
  {
    void onRun( Session& object );
  }
  m_unsupportedMsgType;

class isSessionTime : public Test
  {
    void onRun( Session& object );
  }
  m_isSessionTime;

class isSameSession : public Test
  {
    void onRun( Session& object );
  }
  m_isSameSession;

class resetOnEndTime : public Test
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_resetOnEndTime;

class disconnectBeforeStartTime : public Test
  {
    bool onSetup( Session*& pObject );
    void onRun( Session& object );
  }
  m_disconnectBeforeStartTime;

class resetOnNewSession : public Test
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
};
}

#endif //FIX_SESSIONTESTCASE_H
