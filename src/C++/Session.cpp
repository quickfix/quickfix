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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Session.h"
#include "Values.h"
#include <algorithm>
#include <iostream>

namespace FIX
{
Session::Sessions Session::s_sessions;
Session::Sessions Session::s_registered;
Mutex Session::s_mutex;

Session::Session( Application& application,
                  MessageStoreFactory& messageStoreFactory,
                  const SessionID& sessionID,
                  const DataDictionary& dataDictionary,
                  const UtcTimeOnly& startTime,
                  const UtcTimeOnly& endTime,
                  int heartBtInt, LogFactory* pLogFactory )
    : m_application( application ),
    m_sessionID( sessionID ),
    m_startTime( startTime ), m_endTime( endTime ),
    m_checkLatency( true ), m_maxLatency( 120 ),
    m_resetOnLogout( false ), m_resetOnDisconnect( false ),
    m_dataDictionary( dataDictionary ),
    m_messageStoreFactory( messageStoreFactory ),
    m_pLogFactory( pLogFactory ),
    m_pResponder( 0 )
{
  m_state.heartBtInt( heartBtInt );
  m_state.initiate( heartBtInt != 0 );
  m_state.store( m_messageStoreFactory.create( m_sessionID ) );
  if ( m_pLogFactory )
    m_state.log( m_pLogFactory->create( m_sessionID ) );

  if( !checkSessionTime( UtcTimeStamp() ) )
    reset();

  addSession( *this );
  m_application.onCreate( m_sessionID );
  m_state.onEvent( "Created session" );
}

Session::~Session()
{
  removeSession( *this );
  m_messageStoreFactory.destroy( m_state.store() );
  if ( m_pLogFactory && m_state.log() )
    m_pLogFactory->destroy( m_state.log() );
}

void Session::fill( Header& header )
{
  UtcTimeStamp now;
  m_state.lastSentTime( now );
  header.setField( m_sessionID.getBeginString() );
  header.setField( m_sessionID.getSenderCompID() );
  header.setField( m_sessionID.getTargetCompID() );
  header.setField( MsgSeqNum( getExpectedSenderNum() ) );
  header.setField( SendingTime() );
}

void Session::next()
{
  try
  {
    UtcTimeStamp now;
    if ( !checkSessionTime( now ) )
    { reset(); return ; }

    if ( !m_state.receivedLogon() )
    {
      if ( m_state.shouldSendLogon() )
      {
        generateLogon();
        m_state.onEvent( "Initiated logon request" );
      }
      else if ( m_state.alreadySentLogon() && m_state.logonTimedOut() )
      {
        m_state.onEvent( "Timed out waiting for logon response" );
        disconnect();
      }
      return ;
    }

    if ( m_state.heartBtInt() == 0 ) return ;

    if ( m_state.logoutTimedOut() )
    {
      m_state.onEvent( "Timed out waiting for logout response" );
      disconnect();
    }

    if ( m_state.withinHeartBeat() ) return ;

    if ( m_state.timedOut() )
    {
      m_state.onEvent( "Timed out waiting for heartbeat" );
      disconnect();
    }
    else
    {
      if ( m_state.needTestRequest() )
      {
        generateTestRequest( "TEST" );
        m_state.testRequest( m_state.testRequest() + 1 );
        m_state.onEvent( "Sent test request TEST" );
      }
      else if ( m_state.needHeartbeat() )
      {
        generateHeartbeat();
      }
    }
  }
  catch ( FIX::IOException& )
  {
    m_state.onEvent( "Error Reading/Writing in MessageStore" );
    disconnect();
  }
}

void Session::nextLogon( const Message& logon )
{
  if ( m_state.shouldSendLogon() )
  {
    m_state.onEvent( "Received logon response before sending request" );
    disconnect();
    return ;
  }

  SenderCompID senderCompID;
  TargetCompID targetCompID;
  logon.getHeader().getField( senderCompID );
  logon.getHeader().getField( targetCompID );

  bool verified = verify( logon, false, true );
  if ( isCorrectCompID( senderCompID, targetCompID ) )
    m_state.receivedLogon( true );
  if ( !verified ) return ;

  if ( !m_state.initiate() )
  {
    logon.getField( m_state.heartBtInt() );
    m_state.onEvent( "Received logon request" );
    generateLogon( logon );
    m_state.onEvent( "Responding to logon request" );
  }
  else
    m_state.onEvent( "Received logon response" );

  MsgSeqNum msgSeqNum;
  logon.getHeader().getField( msgSeqNum );
  if ( isTargetTooHigh( msgSeqNum ) )
  {
    doTargetTooHigh( logon );
  }
  else
  {
    m_state.incrNextTargetMsgSeqNum();
    nextQueued();
  }

  if ( isLoggedOn() )
    m_application.onLogon( m_sessionID );
}

void Session::nextHeartbeat( const Message& heartbeat )
{
  if ( !verify( heartbeat ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued();
}

void Session::nextTestRequest( const Message& testRequest )
{
  if ( !verify( testRequest ) ) return ;
  generateHeartbeat( testRequest );
  m_state.incrNextTargetMsgSeqNum();
  nextQueued();
}

void Session::nextLogout( const Message& logout )
{
  if ( !verify( logout, false, false ) ) return ;
  if ( !m_state.sentLogout() )
  {
    m_state.onEvent( "Received logout request" );
    generateLogout();
    m_state.onEvent( "Sending logout response" );
  }
  else
    m_state.onEvent( "Received logout response" );

  m_state.incrNextTargetMsgSeqNum();
  if ( m_resetOnLogout ) reset();
  disconnect();
}

void Session::nextReject( const Message& reject )
{
  if ( !verify( reject ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued();
}

void Session::nextSequenceReset( const Message& sequenceReset )
{
  bool isGapFill = false;
  GapFillFlag gapFillFlag;
  if ( sequenceReset.isSetField( gapFillFlag ) )
  {
    sequenceReset.getField( gapFillFlag );
    isGapFill = gapFillFlag;
  }

  if ( !verify( sequenceReset, isGapFill, isGapFill ) ) return ;

  NewSeqNo newSeqNo;
  if ( sequenceReset.isSetField( newSeqNo ) )
  {
    sequenceReset.getField( newSeqNo );

    m_state.onEvent( "Received SequenceReset FROM: " + IntConvertor::convert( getExpectedTargetNum() ) +
                     " TO: " + IntConvertor::convert( newSeqNo ) );

    if ( newSeqNo > getExpectedTargetNum() )
      m_state.setNextTargetMsgSeqNum( MsgSeqNum( newSeqNo ) );
    else if ( newSeqNo < getExpectedTargetNum() )
      generateReject( sequenceReset, 5 );
  }
}

void Session::nextResendRequest( const Message& resendRequest )
{
  if ( !verify( resendRequest, false, false ) ) return ;
  BeginSeqNo beginSeqNo;
  EndSeqNo endSeqNo;
  resendRequest.getField( beginSeqNo );
  resendRequest.getField( endSeqNo );
  std::vector < std::string > messages;

  m_state.onEvent( "Received ResendRequest FROM: " + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

  std::string beginString = m_sessionID.getBeginString();
  if ( beginString >= FIX::BeginString_FIX42 && endSeqNo == 0 ||
       beginString <= FIX::BeginString_FIX42 && endSeqNo == 999999 )
  { endSeqNo = getExpectedSenderNum() - 1; }

  m_state.get( beginSeqNo, endSeqNo, messages );

  std::vector < std::string > ::iterator i;
  MsgSeqNum msgSeqNum(0);
  MsgType msgType;
  int begin = 0;
  int current = beginSeqNo;

  for ( i = messages.begin(); i != messages.end(); ++i )
  {
    Message msg( *i, m_dataDictionary );
    msg.getHeader().getField( msgSeqNum );
    msg.getHeader().getField( msgType );

    if( (current != msgSeqNum) && !begin )
      begin = current;      

    if ( Message::isAdminMsgType( msgType ) )
    {
      if ( !begin ) begin = msgSeqNum;
    }
    else
    {
      if ( resend( msg ) )
      {
        if ( begin ) generateSequenceReset( begin, msgSeqNum );
        send( msg.toString() );
        m_state.onEvent( "Resending Message: " + IntConvertor::convert( msgSeqNum ) );
        begin = 0;
      }
      else
      { if ( !begin ) begin = msgSeqNum; }
    }
    current = msgSeqNum + 1;
  }
  if ( begin ) 
  {
    generateSequenceReset( begin, msgSeqNum + 1 );
  }

  if ( endSeqNo > msgSeqNum ) 
  {
    endSeqNo = EndSeqNo(endSeqNo + 1);
    int next = m_state.getNextSenderMsgSeqNum();
    if( endSeqNo > next )
      endSeqNo = EndSeqNo(next);
    generateSequenceReset( beginSeqNo, endSeqNo );
  }

  m_state.incrNextTargetMsgSeqNum();
}

bool Session::send( Message& message )
{
  message.getHeader().removeField( FIELD::PossDupFlag );
  message.getHeader().removeField( FIELD::OrigSendingTime );
  return sendRaw( message );
}

bool Session::sendRaw( Message& message, int num )
{
  Locker l( m_mutex );

  try
  {
    bool result = false;
    Header& header = message.getHeader();
    MsgType msgType;
    header.getField( msgType );

    fill( header );

    if ( num )
      header.setField( MsgSeqNum( num ) );

    if ( Message::isAdminMsgType( msgType ) )
    {
      m_application.toAdmin( message, m_sessionID );
      if (
        msgType == "A" || msgType == "5"
        || msgType == "2" || msgType == "4"
        || isLoggedOn()
      )
        result = send( message.toString() );
    }
    else
    {
      try
      {
        m_application.toApp( message, m_sessionID );
        if ( isLoggedOn() ) result = send( message.toString() );
      }
      catch ( DoNotSend& ) {}}

    if ( !num )
    {
      MsgSeqNum msgSeqNum;
      header.getField( msgSeqNum );
      m_state.set( msgSeqNum, message.toString() );
      m_state.incrNextSenderMsgSeqNum();
    }
    return result;
  }
  catch ( IOException& )
  { return false; }
}

bool Session::send( const std::string string )
{
  if ( !m_pResponder ) return false;
  m_state.onOutgoing( string );
  return m_pResponder->send( string );
}

void Session::disconnect()
{
  if ( m_pResponder )
  {
    m_state.onEvent( "Disconnecting" );
    m_pResponder->disconnect();
    m_pResponder = 0;
  }

  if ( m_state.receivedLogon() || m_state.sentLogon() )
  {
    m_state.receivedLogon( false );
    m_state.sentLogon( false );
    m_application.onLogout( m_sessionID );
  }

  m_state.sentLogout( false );
  m_state.clearQueue();
  if ( m_resetOnDisconnect && m_state.connected() )
  { m_state.connected( false ); reset(); }
}

bool Session::resend( Message& message )
{
  SendingTime sendingTime;
  MsgSeqNum msgSeqNum;
  Header& header = message.getHeader();
  header.getField( sendingTime );
  header.getField( msgSeqNum );

  header.setField( OrigSendingTime( sendingTime ) );
  header.setField( SendingTime() );
  header.setField( PossDupFlag( true ) );

  try
  {
    m_application.toApp( message, m_sessionID );
    return true;
  }
  catch ( DoNotSend& )
  { return false; }
}

void Session::generateLogon()
{
  Message logon;
  logon.getHeader().setField( MsgType( "A" ) );
  logon.setField( EncryptMethod( 0 ) );
  logon.setField( m_state.heartBtInt() );
  fill( logon.getHeader() );
  UtcTimeStamp now;
  m_state.lastReceivedTime( now );
  m_state.testRequest( 0 );
  m_state.sentLogon( true );
  sendRaw( logon );
}

void Session::generateLogon( const Message& aLogon )
{
  Message logon;
  EncryptMethod encryptMethod;
  HeartBtInt heartBtInt;
  logon.setField( EncryptMethod( 0 ) );
  aLogon.getField( heartBtInt );
  logon.getHeader().setField( MsgType( "A" ) );
  logon.setField( heartBtInt );
  fill( logon.getHeader() );
  sendRaw( logon );
  m_state.sentLogon( true );
}

void Session::generateResendRequest( const MsgSeqNum& msgSeqNum )
{
  Message resendRequest;
  BeginSeqNo beginSeqNo( ( int ) getExpectedTargetNum() );
  EndSeqNo endSeqNo( msgSeqNum - 1 );
  resendRequest.getHeader().setField( MsgType( "2" ) );
  resendRequest.setField( beginSeqNo );
  resendRequest.setField( endSeqNo );
  fill( resendRequest.getHeader() );
  sendRaw( resendRequest );
  m_state.onEvent( "Sent ResendRequest FROM: " + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

}

void Session::generateSequenceReset
( int beginSeqNo, int endSeqNo )
{
  Message sequenceReset;
  NewSeqNo newSeqNo( endSeqNo );
  sequenceReset.getHeader().setField( MsgType( "4" ) );
  sequenceReset.getHeader().setField( PossDupFlag( true ) );
  sequenceReset.getHeader().setField( OrigSendingTime() );
  sequenceReset.setField( newSeqNo );
  fill( sequenceReset.getHeader() );
  sequenceReset.getHeader().setField( MsgSeqNum( beginSeqNo ) );
  sequenceReset.setField( GapFillFlag( true ) );
  sendRaw( sequenceReset, beginSeqNo );
  m_state.onEvent( "Sent SequenceReset TO: " + IntConvertor::convert( newSeqNo ) );
}

void Session::generateHeartbeat()
{
  Message heartbeat;
  heartbeat.getHeader().setField( MsgType( "0" ) );
  fill( heartbeat.getHeader() );
  sendRaw( heartbeat );
}

void Session::generateHeartbeat( const Message& testRequest )
{
  Message heartbeat;
  heartbeat.getHeader().setField( MsgType( "0" ) );
  fill( heartbeat.getHeader() );
  try
  {
    TestReqID testReqID;
    testRequest.getField( testReqID );
    heartbeat.setField( testReqID );
  }
  catch ( FieldNotFound& ) {}

  sendRaw( heartbeat );
}

void Session::generateTestRequest( const std::string& id )
{
  Message testRequest;
  testRequest.getHeader().setField( MsgType( "1" ) );
  fill( testRequest.getHeader() );
  TestReqID testReqID( id );
  testRequest.setField( testReqID );

  sendRaw( testRequest );
}

void Session::generateReject( const Message& message, int err, int field )
{
  std::string beginString = m_sessionID.getBeginString();

  Message reject;
  reject.getHeader().setField( MsgType( "3" ) );
  fill( reject.getHeader() );

  MsgSeqNum msgSeqNum;
  MsgType msgType;
  PossDupFlag possDupFlag( false );

  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  if ( message.getHeader().isSetField( possDupFlag ) )
    message.getHeader().getField( possDupFlag );

  reject.setField( RefSeqNum( msgSeqNum ) );
  if ( beginString >= FIX::BeginString_FIX42 )
  {
    reject.setField( RefMsgType( msgType ) );
    if ( (beginString == FIX::BeginString_FIX42 && err <= SessionRejectReason_INVALID_MSGTYPE)
       || beginString > FIX::BeginString_FIX42 )
    {
      reject.setField( SessionRejectReason( err ) );
    }
  }
  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset
       && !possDupFlag )
  { m_state.incrNextTargetMsgSeqNum(); }


  const std::string* reason = 0;
  switch ( err )
  {
    case SessionRejectReason_INVALID_TAG_NUMBER:
    reason = &SessionRejectReason_INVALID_TAG_NUMBER_TEXT;
    break;
    case SessionRejectReason_REQUIRED_TAG_MISSING:
    reason = &SessionRejectReason_REQUIRED_TAG_MISSING_TEXT;
    break;
    case SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE:
    reason = &SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE:
    reason = &SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT;
    break;
    case SessionRejectReason_VALUE_IS_INCORRECT:
    reason = &SessionRejectReason_VALUE_IS_INCORRECT_TEXT;
    break;
    case SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE:
    reason = &SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT;
    break;
    case SessionRejectReason_COMPID_PROBLEM:
    reason = &SessionRejectReason_COMPID_PROBLEM_TEXT;
    break;
    case SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM:
    reason = &SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT;
    break;
    case SessionRejectReason_INVALID_MSGTYPE:
    reason = &SessionRejectReason_INVALID_MSGTYPE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER:
    reason = &SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT;
  };

  if ( reason && ( field || err == SessionRejectReason_INVALID_TAG_NUMBER ) )
  {
    populateRejectReason( reject, field, *reason );
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected: "
                     + *reason + ":" + IntConvertor::convert( field ) );
  }
  else if ( reason )
  {
    populateRejectReason( reject, *reason );
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected: " + *reason );
  }
  else
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected" );

  sendRaw( reject );
}

void Session::generateReject( const Message& message, const std::string& str )
{
  std::string beginString = m_sessionID.getBeginString();

  Message reject;
  reject.getHeader().setField( MsgType( "3" ) );
  fill( reject.getHeader() );

  MsgType msgType;
  MsgSeqNum msgSeqNum;
  PossDupFlag possDupFlag( false );

  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  if ( beginString >= FIX::BeginString_FIX42 )
    reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );

  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset
       && !possDupFlag )
  { m_state.incrNextTargetMsgSeqNum(); }

  reject.setField( Text( str ) );
  sendRaw( reject );
  m_state.onEvent( "Rejecting Message: " + IntConvertor::convert( msgSeqNum ) );
}

void Session::generateBusinessReject( const Message& message, int err )
{
  Message reject;
  reject.getHeader().setField( MsgType( MsgType_BusinessMessageReject ) );
  fill( reject.getHeader() );
  MsgType msgType;
  MsgSeqNum msgSeqNum;
  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );
  reject.setField( BusinessRejectReason( err ) );
  m_state.incrNextTargetMsgSeqNum();

  if ( err == 3 )
    reject.setField( Text( "Unsupported Message Type" ) );
  sendRaw( reject );
  m_state.onEvent( "Rejecting Message: " + IntConvertor::convert( msgSeqNum ) );
}

void Session::generateLogout( const std::string& text )
{
  Message logout;
  logout.getHeader().setField( MsgType( MsgType_Logout ) );
  fill( logout.getHeader() );
  if ( text.length() )
    logout.setField( Text( text ) );
  sendRaw( logout );
  m_state.sentLogout( true );
}

void Session::populateRejectReason( Message& reject, int field,
                                    const std::string& text )
{
  if ( m_sessionID.getBeginString() >= FIX::BeginString_FIX42 )
  {
    reject.setField( RefTagID( field ) );
    reject.setField( Text( text ) );
  }
  else
  {
    std::stringstream stream;
    stream << text << " (" << field << ")";
    reject.setField( Text( stream.str() ) );
  }
}

void Session::populateRejectReason( Message& reject, const std::string& text )
{
  reject.setField( Text( text ) );
}

bool Session::verify( const Message& msg, bool checkTooHigh,
                      bool checkTooLow )
{
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  SendingTime sendingTime;
  MsgType msgType;
  MsgSeqNum msgSeqNum;

  try
  {
    const Header& header = msg.getHeader();
    header.getField( senderCompID );
    header.getField( targetCompID );
    header.getField( sendingTime );
    header.getField( msgType );
    header.getField( msgSeqNum );

    if ( !validLogonState( msgType ) )
      throw std::exception();
    if ( !isGoodTime( sendingTime ) )
      doBadTime( msg );
    if ( !isCorrectCompID( senderCompID, targetCompID ) )
      doBadCompID( msg );

    if ( checkTooHigh && isTargetTooHigh( msgSeqNum ) )
    {
      doTargetTooHigh( msg );
      return false;
    }
    else if ( checkTooLow && isTargetTooLow( msgSeqNum ) )
    {
      doTargetTooLow( msg );
      return false;
    }

    UtcTimeStamp now;
    m_state.lastReceivedTime( now );
    m_state.testRequest( 0 );
  }
  catch ( std::exception& )
  { disconnect(); return false; }

  fromCallback( msgType, msg, m_sessionID );
  return true;
}

bool Session::get( int b, int e, std::vector < Message > &m ) const
{
  return false;
}

bool Session::validLogonState( const MsgType& msgType )
{
  if ( msgType == MsgType_Logon && !m_state.receivedLogon()
       || msgType != MsgType_Logon && m_state.receivedLogon() )
    return true;
  if ( msgType != MsgType_Logout && m_state.sentLogout() )
    return true;
  if ( msgType == MsgType_SequenceReset ) return true;
  return false;
}

void Session::fromCallback( const MsgType& msgType, const Message& msg,
                            const SessionID& sessionID )
{
  if ( Message::isAdminMsgType( msgType ) )
    m_application.fromAdmin( msg, m_sessionID );
  else
    m_application.fromApp( msg, m_sessionID );
}

void Session::doBadTime( const Message& msg )
{
  generateReject( msg, 10 );
  generateLogout();
}

void Session::doBadCompID( const Message& msg )
{
  if ( !m_state.receivedLogon() )
    throw std::exception();
  generateReject( msg, 9 );
  generateLogout();
}

bool Session::doPossDup( const Message& msg )
{
  const Header & header = msg.getHeader();
  OrigSendingTime origSendingTime;
  SendingTime sendingTime;
  MsgType msgType;

  header.getField( msgType );
  header.getField( sendingTime );
  
  if ( msgType != MsgType_SequenceReset )
  {
    if ( !header.isSetField( origSendingTime ) )
    {
      generateReject( msg, 1, origSendingTime.getField() );
      return false;
    }
    header.getField( origSendingTime );

    if ( origSendingTime > sendingTime )
    {
      generateReject( msg, 10 );
      generateLogout();
      return false;
    }
  }
  return true;
}

bool Session::doTargetTooLow( const Message& msg )
{
  const Header & header = msg.getHeader();
  MsgType msgType;
  PossDupFlag possDupFlag;
  MsgSeqNum msgSeqNum;
  header.getField( msgType );
  header.getField( possDupFlag );
  header.getField( msgSeqNum );

  m_state.onEvent( "MsgSeqNum too low RECEIVED: " + IntConvertor::convert( msgSeqNum ) +
                   " EXPECTED: " + IntConvertor::convert( getExpectedTargetNum() ) +
                   " PosDup: " + BoolConvertor::convert( possDupFlag ) );

  if ( !possDupFlag )
    throw std::exception();
  return doPossDup( msg );
}

void Session::doTargetTooHigh( const Message& msg )
{
  const Header & header = msg.getHeader();
  MsgSeqNum msgSeqNum;
  header.getField( msgSeqNum );

  m_state.onEvent( "MsgSeqNum too high RECEIVED: " + IntConvertor::convert( msgSeqNum ) +
                   " EXPECTED: " + IntConvertor::convert( getExpectedTargetNum() ) );

  m_state.queue( msgSeqNum, msg );
  generateResendRequest( msgSeqNum );
}

void Session::nextQueued()
{
  while ( nextQueued( getExpectedTargetNum() ) ) {}}

bool Session::nextQueued( int num )
{
  Message msg;
  MsgType msgType;

  if ( m_state.retreive( num, msg ) )
  {
    m_state.onEvent( "Processing QUEUED message: " + IntConvertor::convert( num ) );
    msg.getHeader().getField( msgType );
    if ( msgType != MsgType_Logon )
      next( msg.toString() );
    return true;
  }
  return false;
}

void Session::next( const std::string& msg )
{
  m_state.onIncoming( msg );
  next( Message( msg, m_dataDictionary ) );
}

void Session::next( const Message& message )
{
  MsgType msgType;
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  try
  {
    m_state.connected( true );

    if ( !checkSessionTime( UtcTimeStamp() ) )
    { reset(); return ; }

    message.getHeader().getField( msgType );
    message.getHeader().getField( beginString );
    message.getHeader().getField( senderCompID );
    message.getHeader().getField( targetCompID );

    if ( beginString != m_sessionID.getBeginString() )
      throw UnsupportedVersion();

    m_dataDictionary.validate( message );

    if ( msgType == MsgType_Logon )
      nextLogon( message );
    else if ( msgType == MsgType_Heartbeat )
      nextHeartbeat( message );
    else if ( msgType == MsgType_TestRequest )
      nextTestRequest( message );
    else if ( msgType == MsgType_SequenceReset )
      nextSequenceReset( message );
    else if ( msgType == MsgType_Logout )
      nextLogout( message );
    else if ( msgType == MsgType_ResendRequest )
      nextResendRequest( message );
    else if ( msgType == MsgType_Reject )
      nextReject( message );
    else
    {
      if ( !verify( message ) ) return ;
      m_state.incrNextTargetMsgSeqNum();
    }
    nextQueued();
  }
catch ( MessageParseError& ) {}
  catch ( RequiredTagMissing & e )
  { generateReject( message, 1, e.field ); }
  catch ( FieldNotFound & e )
  {
    generateReject( message, 1, e.field );
    if ( msgType == MsgType_Logon )
      disconnect();
  }
  catch ( InvalidTagNumber & e )
  { generateReject( message, 0, e.field ); }
  catch ( NoTagValue & e )
  { generateReject( message, 4, e.field ); }
  catch ( TagNotDefinedForMessage & e )
  { generateReject( message, 2, e.field ); }
  catch ( InvalidMessageType& )
  { generateReject( message, 11 ); }
  catch ( UnsupportedMessageType& )
  {
    if ( beginString >= FIX::BeginString_FIX42 )
      generateBusinessReject( message, 3 );
    else
      generateReject( message, "Unsupported message type" );
  }
  catch ( TagOutOfOrder & e )
  { generateReject( message, 14, e.field ); }
  catch ( IncorrectDataFormat & e )
  { generateReject( message, 6, e.field ); }
  catch ( IncorrectTagValue & e )
  { generateReject( message, 5, e.field ); }
  catch ( InvalidMessage& ) {}
  catch ( RejectLogon& )
  {
    m_state.onEvent( "Logon rejected" );
    disconnect();
  }
  catch ( UnsupportedVersion& )
  {
    if ( msgType == MsgType_Logout )
      nextLogout( message );
    else
    {
      generateLogout( "Incorrect BeginString" );
      m_state.incrNextTargetMsgSeqNum();
    }
  }
  catch ( IOException& )
  {
    m_state.onEvent( "Error Reading/Writing in MessageStore" );
    disconnect();
  }
}

bool Session::sendToTarget( Message& message )
throw( SessionNotFound& )
{
  try
  {
    SessionID sessionID = message.getSessionID();
    Session* pSession = lookupSession( sessionID );
    if ( !pSession ) throw SessionNotFound();
    bool result = pSession->send( message );
    return result;
  }
catch ( FieldNotFound& ) { throw SessionNotFound(); }
}

bool Session::sendToTarget( Message& message, const SessionID& sessionID )
throw( SessionNotFound& )
{
  message.setSessionID( sessionID );
  return sendToTarget( message );
}

bool Session::sendToTarget
( Message& message, const SenderCompID& senderCompID,
  const TargetCompID& targetCompID )
throw( SessionNotFound& )
{
  message.getHeader().setField( senderCompID );
  message.getHeader().setField( targetCompID );
  return sendToTarget( message );
}

bool Session::sendToTarget
( Message& message, const std::string& sender, const std::string& target )
throw( SessionNotFound& )
{ return sendToTarget( message, SenderCompID( sender ), TargetCompID( target ) ); }

bool Session::doesSessionExist( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  return s_sessions.end() != s_sessions.find( sessionID );
}

Session* Session::lookupSession( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  Sessions::iterator find = s_sessions.find( sessionID );
  if ( find != s_sessions.end() )
    return find->second;
  else
    return 0;
}

Session* Session::lookupSession( const std::string& string, bool reverse )
{
  Message message;
  if ( !message.setStringHeader( string ) )
    return 0;

  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  try
  {
    message.getHeader().getField( beginString );
    message.getHeader().getField( senderCompID );
    message.getHeader().getField( targetCompID );
  }
  catch ( FieldNotFound& ) { return 0; }

  if ( reverse )
  {
    return lookupSession( SessionID( beginString, SenderCompID( targetCompID ),
                                     TargetCompID( senderCompID ) ) );
  }
  else
  {
    return lookupSession( SessionID( beginString, senderCompID, targetCompID ) );
  }
}

bool Session::isSessionRegistered( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  return s_registered.end() != s_registered.find( sessionID );
}

Session* Session::registerSession( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  Session* pSession = lookupSession( sessionID );
  if ( pSession == 0 ) return 0;
  if ( isSessionRegistered( sessionID ) ) return 0;
  s_registered[ sessionID ] = pSession;
  return pSession;
}

void Session::unregisterSession( const SessionID& sessionID )
{
  s_registered.erase( sessionID );
}

int Session::numSessions()
{
  Locker locker( s_mutex );
  return s_sessions.size();
}

bool Session::addSession( Session& s )
{
  Locker locker( s_mutex );
  Sessions::iterator it = s_sessions.find( s.m_sessionID );
  if ( it == s_sessions.end() )
  {
    s_sessions[ s.m_sessionID ] = &s;
    return true;
  }
  else
    return false;
}

void Session::removeSession( Session& s )
{
  Locker locker( s_mutex );
  s_sessions.erase( s.m_sessionID );
  s_registered.erase( s.m_sessionID );
}

bool Session::isSessionTime( const UtcTimeOnly& start, const UtcTimeOnly& end,
                             const UtcTimeStamp& time )
{
  UtcTimeOnly timeOnly( time );

  if ( start < end )
    return ( timeOnly >= start && timeOnly <= end );
  else
    return ( timeOnly >= start || timeOnly <= end );
}

bool Session::isSameSession( const UtcTimeOnly& start,
                             const UtcTimeOnly& end,
                             const UtcTimeStamp& time1,
                             const UtcTimeStamp& time2 )
{
  if ( !isSessionTime( start, end, time1 ) ) return false;
  if ( !isSessionTime( start, end, time2 ) ) return false;

  if ( time1 == time2 ) return true;

  UtcDate time1Date( time1 );
  UtcDate time2Date( time2 );

  if ( start < end || start == end )
    return time1Date == time2Date;
  else if( start > end )
    return abs( time1Date - time2Date ) <= 1;
  return false;
}
}
