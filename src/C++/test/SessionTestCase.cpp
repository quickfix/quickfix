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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "SessionTestCase.h"
#include "Values.h"
#include "fix42/Logon.h"
#include "fix42/Logout.h"
#include "fix42/Heartbeat.h"
#include "fix42/TestRequest.h"
#include "fix42/SequenceReset.h"
#include "fix42/ResendRequest.h"
#include "fix42/Reject.h"
#include "fix42/NewOrderSingle.h"
#include "fix42/ExecutionReport.h"

namespace FIX
{
using namespace FIX42;

void fillHeader( Header& header, const char* sender, const char* target, int seq )
{
  header.setField( SenderCompID( sender ) );
  header.setField( TargetCompID( target ) );
  header.setField( SendingTime() );
  header.setField( MsgSeqNum( seq ) );
}

Logon createLogon( const char* sender, const char* target, int seq )
{
  Logon logon( EncryptMethod( 0 ), HeartBtInt( 30 ) );
  fillHeader( logon.getHeader(), sender, target, seq );
  return logon;
}

Logout createLogout( const char* sender, const char* target, int seq )
{
  Logout logout;
  fillHeader( logout.getHeader(), sender, target, seq );
  return logout;
}

Heartbeat createHeartbeat( const char* sender, const char* target, int seq )
{
  Heartbeat heartbeat;
  fillHeader( heartbeat.getHeader(), sender, target, seq );
  return heartbeat;
}

TestRequest createTestRequest( const char* sender, const char* target, int seq, char* id )
{
  TestRequest testRequest;
  testRequest.set( TestReqID( id ) );
  fillHeader( testRequest.getHeader(), sender, target, seq );
  return testRequest;
}

SequenceReset createSequenceReset( const char* sender, const char* target, int seq, int newSeq )
{
  SequenceReset sequenceReset;
  sequenceReset.set( NewSeqNo( newSeq ) );
  fillHeader( sequenceReset.getHeader(), sender, target, seq );
  return sequenceReset;
}

ResendRequest createResendRequest( const char* sender, const char* target, int seq, int begin, int end )
{
  ResendRequest resendRequest;
  resendRequest.set( BeginSeqNo( begin ) );
  resendRequest.set( EndSeqNo( end ) );
  fillHeader( resendRequest.getHeader(), sender, target, seq );
  return resendRequest;
}

Reject createReject( const char* sender, const char* target, int seq, int refSeq )
{
  Reject reject;
  reject.set( RefSeqNum( refSeq ) );
  fillHeader( reject.getHeader(), sender, target, seq );
  return reject;
}

NewOrderSingle createNewOrderSingle( const char* sender, const char* target, int seq )
{
  NewOrderSingle newOrderSingle;
  fillHeader( newOrderSingle.getHeader(), sender, target, seq );
  return newOrderSingle;
}

bool SessionTestCase::InitiatorTest::onSetup( Session*& pObject )
{
  pObject = createInitiatorSession();
  pObject->setResponder( this );
  return true;
}

bool SessionTestCase::AcceptorTest::onSetup( Session*& pObject )
{
  pObject = createAcceptorSession();
  pObject->setResponder( this );
  return true;
}

void SessionTestCase::nextLogon::onRun( Session& object )
{
  // send with an incorrect SenderCompID
  object.setResponder( this );
  object.next( createLogon( "BLAH", "TW", 1 ) );
  assert( !object.receivedLogon() );
  assert( m_toLogon == 0 );
  assert( m_disconnect == 1 );

  // send with an incorrect TargetCompID
  object.setResponder( this );
  object.next( createLogon( "ISLD", "BLAH", 1 ) );
  assert( !object.receivedLogon() );
  assert( m_toLogon == 0 );
  assert( m_disconnect == 2 );

  // send a correct logon
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( object.receivedLogon() );
  assert( m_toLogon == 1 );
  assert( m_disconnect == 2 );

  // check that we got a valid logon response
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  HeartBtInt heartBtInt;
  EncryptMethod encryptMethod;
  try
  {
    m_logon.getHeader().getField( senderCompID );
    m_logon.getHeader().getField( targetCompID );
    m_logon.getField( heartBtInt );
    m_logon.getField( encryptMethod );
  }
  catch ( FieldNotFound& ) { assert( false ); }
  assert( senderCompID == "TW" );
  assert( targetCompID == "ISLD" );
  assert( heartBtInt == 30 );
  assert( encryptMethod == 0 );

}

void SessionTestCase::nextLogonNoEncryptMethod::onRun( Session& object )
{
  // send a correct logon
  object.setResponder( this );
  Logon logon;
  logon.setField( HeartBtInt( 30 ) );
  fillHeader( logon.getHeader(), "ISLD", "TW", 1 );
  object.next( logon );
  assert( object.receivedLogon() );
  assert( m_toLogon == 1 );
  assert( m_disconnect == 0 );

  // check that we got a valid logon response
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  HeartBtInt heartBtInt;
  EncryptMethod encryptMethod;
  try
  {
    m_logon.getHeader().getField( senderCompID );
    m_logon.getHeader().getField( targetCompID );
    m_logon.getField( heartBtInt );
    m_logon.getField( encryptMethod );
  }
  catch ( FieldNotFound& ) { assert( false ); }
  assert( senderCompID == "TW" );
  assert( targetCompID == "ISLD" );
  assert( heartBtInt == 30 );
  assert( encryptMethod == 0 );
}

void SessionTestCase::nextLogonResetSeqNumFlag::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  object.next( createLogout( "ISLD", "TW", 2 ) );
  assert( !object.receivedLogon() );
  assert( m_disconnect == 1 );
  assert( m_toLogout == 1 );
  assert( m_fromLogout == 1 );
  assert( object.getExpectedSenderNum() == 3 );
  assert( object.getExpectedTargetNum() == 3 );

  Logon logon = createLogon( "ISLD", "TW", 1 );
  logon.set( FIX::ResetSeqNumFlag(true) );
  object.next( logon );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 2 );
}

void SessionTestCase::notifyResendRequest::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 5 ) );
  assert( m_toResendRequest == 1 );
}

void SessionTestCase::incrMsgSeqNum::onRun( Session& object )
{
  assert( object.getExpectedSenderNum() == 1 );
  assert( object.getExpectedTargetNum() == 1 );

  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 2 );

  object.next( createHeartbeat( "ISLD", "TW", 2 ) );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 3 );

  object.next( createHeartbeat( "ISLD", "TW", 3 ) );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 4 );
}

void SessionTestCase::callDisconnect::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( m_disconnect == 0 );

  object.next( createHeartbeat( "ISLD", "TW", 2 ) );
  assert( m_disconnect == 0 );
  assert( m_fromHeartbeat == 1 );

  object.next( createHeartbeat( "ISLD", "TW", 3 ) );
  assert( m_disconnect == 0 );
  assert( m_fromHeartbeat == 2 );

  // message is dupicate
  Heartbeat heartbeat = createHeartbeat( "ISLD", "TW", 2 );
  heartbeat.getHeader().setField( PossDupFlag( true ) );

  UtcTimeStamp timeStamp;
  timeStamp.setSecond( 5 );
  OrigSendingTime origSendingTime( timeStamp );
  timeStamp.setSecond( 10 );
  SendingTime sendingTime( timeStamp );

  // message is a possible dup, remain connected
  heartbeat.getHeader().setField( sendingTime );
  heartbeat.getHeader().setField( origSendingTime );
  object.next( heartbeat );
  assert( m_disconnect == 0 );
  assert( m_fromHeartbeat == 2 );

  // message is not a possible dup, disconnect
  heartbeat.getHeader().setField( PossDupFlag( false ) );
  object.next( heartbeat );
  assert( m_disconnect == 1 );
  assert( m_fromHeartbeat == 2 );
}

void SessionTestCase::doesSessionExist::onRun( Session& object )
{
  Session * pSession1 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "TW" ), TargetCompID( "ISLD" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  Session* pSession2 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "WT" ), TargetCompID( "ISLD" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  Session* pSession3 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "TW" ), TargetCompID( "DLSI" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  Session* pSession4 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "OREN" ), TargetCompID( "NERO" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  Session* pSession5 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "OREN" ), TargetCompID( "NERO" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );

  pSession1->setResponder( this );
  pSession2->setResponder( this );
  pSession3->setResponder( this );
  pSession4->setResponder( this );
  pSession5->setResponder( this );

  assert( Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "TW" ),
                       TargetCompID( "ISLD" ) ) ) );
  assert( Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "WT" ),
                       TargetCompID( "ISLD" ) ) ) );
  assert( Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "TW" ),
                       TargetCompID( "DLSI" ) ) ) );
  assert( Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "OREN" ),
                       TargetCompID( "NERO" ) ) ) );

  assert( Session::numSessions() == 4 );

  delete pSession1;

  assert( !Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) );
  assert( Session::numSessions() == 3 );

  delete pSession2;
  delete pSession3;

  assert( Session::numSessions() == 1 );
  assert( Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "OREN" ),
                       TargetCompID( "NERO" ) ) ) );

  delete pSession4;
  assert( Session::numSessions() == 0 );
  assert( !Session::doesSessionExist
          ( SessionID( BeginString( "FIX.4.2" ), SenderCompID( "OREN" ),
                       TargetCompID( "NERO" ) ) ) );

  delete pSession5;
}

bool SessionTestCase::lookupSession::onSetup( Session*& pObject )
{
  m_pSession1 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "TW" ), TargetCompID( "ISLD" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  m_pSession2 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "WT" ), TargetCompID( "ISLD" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  m_pSession3 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "TW" ), TargetCompID( "DLSI" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  m_pSession4 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "OREN" ), TargetCompID( "NERO" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  m_pSession5 = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                                   SenderCompID( "OREN" ), TargetCompID( "NERO" ) ), DataDictionary(),
                                   SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );

  m_pSession1->setResponder( this );
  m_pSession2->setResponder( this );
  m_pSession3->setResponder( this );
  m_pSession4->setResponder( this );
  m_pSession5->setResponder( this );
  return true;
}

void SessionTestCase::lookupSession::onRun( Session& object )
{
  assert( Session::lookupSession
          ( SessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == m_pSession1 );
  assert( Session::lookupSession
          ( SessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "WT" ), TargetCompID( "ISLD" ) ) ) == m_pSession2 );
  assert( Session::lookupSession
          ( SessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "TW" ), TargetCompID( "DLSI" ) ) ) == m_pSession3 );
  assert( Session::lookupSession
          ( SessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "OREN" ), TargetCompID( "NERO" ) ) ) == m_pSession4 );
}

void SessionTestCase::lookupSession::onTeardown( Session* pObject )
{
  delete m_pSession1; delete m_pSession2; delete m_pSession3;
  delete m_pSession4; delete m_pSession5;
}

bool SessionTestCase::registerSession::onSetup( Session*& pObject )
{
  m_pSession = new Session
    ( *this, m_factory, SessionID( BeginString( "FIX.4.2" ),
                        SenderCompID( "TW" ), TargetCompID( "ISLD" ) ), DataDictionary(),
                        SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  return true;
}

void SessionTestCase::registerSession::onRun( Session& object )
{
  assert( Session::registerSession( SessionID( BeginString( "FIX.4.1" ),
                                    SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == 0 );
  assert( Session::registerSession( SessionID( BeginString( "FIX.4.2" ),
                                    SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == m_pSession );
  assert( Session::isSessionRegistered( SessionID( BeginString( "FIX.4.2" ),
                                        SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) );
  assert( Session::registerSession( SessionID( BeginString( "FIX.4.2" ),
                                    SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == 0 );
  Session::unregisterSession( SessionID( BeginString( "FIX.4.2" ),
                                         SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) );
  assert( !Session::isSessionRegistered( SessionID( BeginString( "FIX.4.2" ),
                                         SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) );
  assert( Session::registerSession( SessionID( BeginString( "FIX.4.2" ),
                                    SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == m_pSession );
  delete m_pSession;
  assert( !Session::isSessionRegistered( SessionID( BeginString( "FIX.4.2" ),
                                         SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) );
  assert( Session::registerSession( SessionID( BeginString( "FIX.4.2" ),
                                    SenderCompID( "TW" ), TargetCompID( "ISLD" ) ) ) == 0 );
}

void SessionTestCase::nextTestRequest::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );

  object.next( createTestRequest( "ISLD", "TW", 2, "HELLO" ) );
  assert( m_fromTestRequest == 1 );
  assert( m_toHeartbeat == 1 );

  TestReqID testReqID;
  m_heartbeat.getField( testReqID );
  assert( testReqID == "HELLO" );
}

void SessionTestCase::outOfOrder::onRun( Session& object )
{
  assert( object.getExpectedSenderNum() == 1 );
  assert( object.getExpectedTargetNum() == 1 );

  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 2 );

  object.next( createHeartbeat( "ISLD", "TW", 3 ) );
  assert( object.getExpectedSenderNum() == 3 );
  assert( object.getExpectedTargetNum() == 2 );
  assert( m_fromHeartbeat == 0 );

  object.next( createHeartbeat( "ISLD", "TW", 2 ) );
  assert( object.getExpectedSenderNum() == 3 );
  assert( object.getExpectedTargetNum() == 4 );
  assert( m_fromHeartbeat == 2 );
}

void SessionTestCase::nextLogout::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  object.next( createLogout( "ISLD", "TW", 2 ) );
  assert( !object.receivedLogon() );
  assert( m_disconnect == 1 );
  assert( m_toLogout == 1 );
  assert( m_fromLogout == 1 );
}

void SessionTestCase::logoutInitiator::onRun( Session& object )
{
  object.setResponder( this );
  object.next();
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( object.getExpectedSenderNum() == 2 );
  assert( object.getExpectedTargetNum() == 2 );

  object.next( createLogout( "ISLD", "TW", 2 ) );
  assert( object.getExpectedSenderNum() == 3 );
  assert( object.getExpectedTargetNum() == 3 );
}

void SessionTestCase::badOrigSendingTime::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  UtcTimeStamp timeStamp;
  timeStamp.setSecond( 10 );
  SendingTime sendingTime( timeStamp );
  timeStamp.setSecond( 20 );
  OrigSendingTime origSendingTime( timeStamp );

  object.next( createNewOrderSingle( "ISLD", "TW", 2 ) );
  object.next( createNewOrderSingle( "ISLD", "TW", 3 ) );

  NewOrderSingle newOrderSingle = createNewOrderSingle( "ISLD", "TW", 2 );
  newOrderSingle.getHeader().setField( sendingTime );
  newOrderSingle.getHeader().setField( origSendingTime );
  newOrderSingle.getHeader().setField( PossDupFlag( true ) );
  object.next( newOrderSingle );
  assert( m_toReject == 1 );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 0 );

  object.next( createLogout( "ISLD", "TW", 4 ) );
  assert( m_disconnect == 1 );
  assert( m_toLogout == 1 );
}

void SessionTestCase::noOrigSendingTime::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  UtcTimeStamp timeStamp;
  timeStamp.setSecond( 10 );
  SendingTime sendingTime( timeStamp );

  object.next( createNewOrderSingle( "ISLD", "TW", 2 ) );
  object.next( createNewOrderSingle( "ISLD", "TW", 3 ) );

  NewOrderSingle newOrderSingle = createNewOrderSingle( "ISLD", "TW", 2 );
  newOrderSingle.getHeader().setField( sendingTime );
  newOrderSingle.getHeader().setField( PossDupFlag( true ) );
  object.next( newOrderSingle );
  assert( m_toReject == 1 );
  assert( m_toLogout == 0 );
  assert( m_disconnect == 0 );

  object.next( createLogout( "ISLD", "TW", 4 ) );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 1 );
}

void SessionTestCase::badCompID::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  object.next( createNewOrderSingle( "ISLD", "WT", 3 ) );
  assert( m_toReject == 1 );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 0 );

  object.next( createLogout( "ISLD", "TW", 4 ) );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 1 );
}

void SessionTestCase::nextReject::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );
  object.next( createTestRequest( "ISLD", "TW", 2, "HELLO" ) );

  object.next( createReject( "ISLD", "TW", 3, 2 ) );
  assert( m_fromReject == 1 );
  assert( m_toReject == 0 );
  assert( m_toLogout == 0 );
  assert( m_disconnect == 0 );
  assert( object.getExpectedTargetNum() == 4 );

  object.next( createHeartbeat( "ISLD", "TW", 4 ) );
  assert( m_toResendRequest == 0 );
}

class MsgWithBadType : public FIX42::Message
{
public:
MsgWithBadType() : Message( MsgType( "*" ) ) {}}
;

bool SessionTestCase::badMsgType::onSetup( Session*& pObject )
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "TW" ), TargetCompID( "ISLD" ) );

  DataDictionary dataDictionary( "spec/FIX42.xml" );
  pObject = new Session( *this, m_factory, sessionID, dataDictionary,
                         SessionTime(UtcTimeOnly(), UtcTimeOnly()), 0, 0 );
  return true;
}

void SessionTestCase::badMsgType::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  MsgWithBadType msgWithBadType;
  fillHeader( msgWithBadType.getHeader(), "ISLD", "TW", 2 );

  object.next( msgWithBadType );

  assert( m_toReject == 1 );
  assert( m_disconnect == 0 );
  assert( m_toLogout == 0 );

  object.next( createLogout( "ISLD", "TW", 3 ) );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 1 );
}

void SessionTestCase::nextSequenceReset::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );

  // NewSeqNo is greater
  object.next( createSequenceReset( "ISLD", "TW", 0, 3 ) );
  assert( m_fromSequenceReset == 1 );
  assert( object.getExpectedTargetNum() == 3 );
  assert( m_toReject == 0 );

  // NewSeqNo is equal
  object.next( createSequenceReset( "ISLD", "TW", 0, 3 ) );
  assert( m_fromSequenceReset == 2 );
  assert( object.getExpectedTargetNum() == 3 );
  assert( m_toReject == 0 );

  // No MsgSeqNum
  SequenceReset sequenceReset = createSequenceReset( "ISLD", "TW", 0, 3 );
  sequenceReset.getHeader().removeField( 34 );
  object.next( sequenceReset );
  assert( m_fromSequenceReset == 3 );
  assert( object.getExpectedTargetNum() == 3 );
  assert( m_toReject == 0 );

  // NewSeqNo is less
  object.next( createSequenceReset( "ISLD", "TW", 0, 2 ) );
  assert( m_fromSequenceReset == 4 );
  assert( object.getExpectedTargetNum() == 3 );
  assert( m_toReject == 1 );
}

void SessionTestCase::nextGapFill::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  // NewSeqNo is equal
  SequenceReset sequenceReset = createSequenceReset( "ISLD", "TW", 2, 20 );
  sequenceReset.set( GapFillFlag( true ) );
  object.next( sequenceReset );
  assert( m_fromSequenceReset == 1 );
  assert( m_toResendRequest == 0 );
  assert( object.getExpectedTargetNum() == 20 );

  // NewSeqNo is greater
  SequenceReset sequenceReset2 = createSequenceReset( "ISLD", "TW", 21, 40 );
  sequenceReset2.set( GapFillFlag( true ) );
  object.next( sequenceReset2 );
  assert( m_fromSequenceReset == 1 );
  assert( m_toResendRequest == 1 );
  assert( object.getExpectedTargetNum() == 20 );

  // NewSeqNo is less, PossDupFlag = Y
  SequenceReset sequenceReset3 = createSequenceReset( "ISLD", "TW", 19, 20 );
  sequenceReset3.set( GapFillFlag( true ) );
  sequenceReset3.getHeader().setField( PossDupFlag( true ) );
  sequenceReset3.getHeader().setField( OrigSendingTime() );
  object.next( sequenceReset3 );
  assert( m_fromSequenceReset == 1 );
  assert( m_toResendRequest == 1 );
  assert( object.getExpectedTargetNum() == 20 );
  assert( m_disconnect == 0 );

  // NewSeqNo is less, PossDupFlag = N
  SequenceReset sequenceReset4 = createSequenceReset( "ISLD", "TW", 19, 20 );
  sequenceReset4.set( GapFillFlag( true ) );
  sequenceReset4.getHeader().setField( PossDupFlag( false ) );
  object.next( sequenceReset4 );
  assert( m_fromSequenceReset == 1 );
  assert( m_toResendRequest == 1 );
  assert( object.getExpectedTargetNum() == 20 );
  assert( m_disconnect == 1 );
}

void SessionTestCase::nextResendRequest::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );
  object.next( createTestRequest( "ISLD", "TW", 2, "HELLO" ) );
  object.next( createTestRequest( "ISLD", "TW", 3, "HELLO" ) );
  object.next( createTestRequest( "ISLD", "TW", 4, "HELLO" ) );
  object.next( createResendRequest( "ISLD", "TW", 5, 1, 4 ) );
  assert( m_toSequenceReset == 1 );

  FIX::Message message = createNewOrderSingle( "ISLD", "TW", 6 );
  assert( object.send( message ) );
  message = createNewOrderSingle( "ISLD", "TW", 7 );
  assert( object.send( message ) );
  message = createNewOrderSingle( "ISLD", "TW", 8 );
  assert( object.send( message ) );
  object.next( createResendRequest( "ISLD", "TW", 6, 5, 7 ) );
  assert( m_toSequenceReset == 1 );

  object.setNextSenderMsgSeqNum(15);
  object.next( createResendRequest( "ISLD", "TW", 7, 8, 15 ) );
  assert( m_toSequenceReset == 2 );

  object.next( createResendRequest( "ISLD", "TW", 8, 1, 15 ) );
  assert( m_toSequenceReset == 4 );

  message = createNewOrderSingle( "ISLD", "TW", 16 );
  assert( object.send( message ) );
  message = createNewOrderSingle( "ISLD", "TW", 17 );
  assert( object.send( message ) );
  object.next( createResendRequest( "ISLD", "TW", 8, 1, 20 ) );
  assert( m_toSequenceReset == 6 );
}

void SessionTestCase::badBeginString::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  TestRequest testRequest = createTestRequest( "ISLD", "TW", 2, "HELLO" );
  testRequest.getHeader().setField( BeginString( BeginString_FIX41 ) );
  object.next( testRequest );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 0 );

  Logout logout = createLogout( "ISLD", "TW", 3 );
  logout.getHeader().setField( BeginString( BeginString_FIX41 ) );
  object.next( logout );
  assert( m_toLogout == 1 );
  assert( m_disconnect == 1 );
}

void SessionTestCase::unsupportedMsgType::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );

  ExecutionReport message;
  fillHeader( message.getHeader(), "ISLD", "TW", 2 );
  object.next( message );
  assert( m_toBusinessMessageReject == 1 );
}

bool SessionTestCase::resetOnEndTime::onSetup( Session*& pObject )
{
  m_startTime.setCurrent();
  m_startTime.setMillisecond(0);

  m_endTime.setCurrent();
  m_endTime.setMillisecond(0);

  m_endTime += 2;
  return AcceptorTest::onSetup( pObject );
}

void SessionTestCase::resetOnEndTime::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );
  object.next( createHeartbeat( "ISLD", "TW", 2 ) );

  assert( m_disconnect == 0 );
  process_sleep( 1 );
  object.next();
  assert( m_disconnect == 0 );
  process_sleep( 2 );
  object.next();
  assert( m_disconnect == 1 );
}

bool SessionTestCase::disconnectBeforeStartTime::onSetup( Session*& pObject )
{
  m_startTime.setCurrent();
  m_startTime += 1;
  m_endTime.setCurrent();
  m_endTime += 4;
  return AcceptorTest::onSetup( pObject );
}

void SessionTestCase::disconnectBeforeStartTime::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( m_disconnect == 1 );

  process_sleep( 2 );
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( m_disconnect == 1 );
}

bool SessionTestCase::resetOnNewSession::onSetup( Session*& pObject )
{
  m_startTime.setCurrent();
  m_endTime = m_startTime;
  m_endTime += 2;
  m_startTime += -2;
  return AcceptorTest::onSetup( pObject );
}

void SessionTestCase::resetOnNewSession::onRun( Session& object )
{
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( m_disconnect == 0 );

  process_sleep( 3 );
  object.next();
  assert( m_disconnect == 1 );
}

bool SessionTestCase::processQueuedMessages::onSetup( Session*& pObject )
{
  return AcceptorTest::onSetup( pObject );
}

void SessionTestCase::processQueuedMessages::onRun( Session& object )
{
  object.setResponder( this );
  object.next( createLogon( "ISLD", "TW", 1 ) );
  assert( m_disconnect == 0 );

  for( int i = 3; i <= 5003; ++i )
  {
    object.next( createNewOrderSingle( "ISLD", "TW", i ) );
  }
  assert( 2 == object.getExpectedTargetNum() );
  assert( 1 == m_toResendRequest );
  object.next( createNewOrderSingle( "ISLD", "TW", 2 ) );
  assert( 5004 == object.getExpectedTargetNum() );
  object.next( createNewOrderSingle( "ISLD", "TW", 5006 ) );
  assert( 2 == m_toResendRequest );
}

Session* SessionTestCase::resetOnNewSession::createSession()
{
  SessionID sessionID( BeginString( "FIX.4.2" ),
                       SenderCompID( "TW" ), TargetCompID( "ISLD" ) );
  SessionTime sessionTime( m_startTime, m_endTime );
  return new Session( *this, m_previousDayFactory, sessionID,
                      DataDictionary(), sessionTime , 0, 0 );
}
}
