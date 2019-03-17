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

#include "Session.h"
#include "Values.h"
#include <algorithm>
#include <iostream>

namespace FIX
{
Session::Sessions Session::s_sessions;
Session::SessionIDs Session::s_sessionIDs;
Session::Sessions Session::s_registered;
Mutex Session::s_mutex;

#define LOGEX( method ) try { method; } catch( std::exception& e ) \
  { m_state.onEvent( e.what() ); }

Session::Session( Application& application,
                  MessageStoreFactory& messageStoreFactory,
                  const SessionID& sessionID,
                  const DataDictionaryProvider& dataDictionaryProvider,
                  const TimeRange& sessionTime,
                  int heartBtInt, LogFactory* pLogFactory )
: m_application( application ),
  m_sessionID( sessionID ),
  m_sessionTime( sessionTime ),
  m_logonTime( sessionTime ),
  m_senderDefaultApplVerID(ApplVerID_FIX50),
  m_targetDefaultApplVerID(ApplVerID_FIX50),
  m_sendRedundantResendRequests( false ),
  m_checkCompId( true ),
  m_checkLatency( true ), 
  m_maxLatency( 120 ),
  m_resetOnLogon( false ),
  m_resetOnLogout( false ), 
  m_resetOnDisconnect( false ),
  m_refreshOnLogon( false ),
  m_timestampPrecision( 3 ),
  m_persistMessages( true ),
  m_validateLengthAndChecksum( true ),
  m_dataDictionaryProvider( dataDictionaryProvider ),
  m_messageStoreFactory( messageStoreFactory ),
  m_pLogFactory( pLogFactory ),
  m_pResponder( 0 )
{
  m_state.heartBtInt( heartBtInt );
  m_state.initiate( heartBtInt != 0 );
  m_state.store( m_messageStoreFactory.create( m_sessionID ) );
  if ( m_pLogFactory )
    m_state.log( m_pLogFactory->create( m_sessionID ) );

  if( !checkSessionTime(UtcTimeStamp()) )
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

void Session::insertSendingTime( Header& header )
{
  UtcTimeStamp now;
  bool showMilliseconds = false;
  if( m_sessionID.getBeginString() == BeginString_FIXT11 )
    showMilliseconds = true;
  else
    showMilliseconds = m_sessionID.getBeginString() >= BeginString_FIX42;

  header.setField( SendingTime(now, showMilliseconds ? m_timestampPrecision : 0) );
}

void Session::insertOrigSendingTime( Header& header, const UtcTimeStamp& when )
{
  bool showMilliseconds = false;
  if( m_sessionID.getBeginString() == BeginString_FIXT11 )
    showMilliseconds = true;
  else
    showMilliseconds = m_sessionID.getBeginString() >= BeginString_FIX42;

  header.setField( OrigSendingTime(when, showMilliseconds ? m_timestampPrecision : 0) );
}

void Session::fill( Header& header )
{
  UtcTimeStamp now;
  m_state.lastSentTime( now );
  header.setField( m_sessionID.getBeginString() );
  header.setField( m_sessionID.getSenderCompID() );
  header.setField( m_sessionID.getTargetCompID() );
  header.setField( MsgSeqNum( getExpectedSenderNum() ) );
  insertSendingTime( header );
}

void Session::next()
{
  next( UtcTimeStamp() );
}

void Session::next( const UtcTimeStamp& timeStamp )
{
  try
  {
    if ( !checkSessionTime(timeStamp) )
      { reset(); return; }

    if( !isEnabled() || !isLogonTime(timeStamp) )
    {
      if( isLoggedOn() )
      {
        if( !m_state.sentLogout() )
        {
          m_state.onEvent( "Initiated logout request" );
          generateLogout( m_state.logoutReason() );
        }
      }
      else
        return;
    }

    if ( !m_state.receivedLogon() )
    {
      if ( m_state.shouldSendLogon() && isLogonTime(timeStamp) )
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
  catch ( FIX::IOException& e )
  {
    m_state.onEvent( e.what() );
    disconnect();
  }
}

void Session::nextLogon( const Message& logon, const UtcTimeStamp& timeStamp )
{
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  logon.getHeader().getField( senderCompID );
  logon.getHeader().getField( targetCompID );

  if( m_refreshOnLogon )
    refresh();

  if( !isEnabled() )
  {
    m_state.onEvent( "Session is not enabled for logon" );
    disconnect();
    return;
  }

  if( !isLogonTime(timeStamp) )
  {
    m_state.onEvent( "Received logon outside of valid logon time" );
    disconnect();
    return;
  }

  ResetSeqNumFlag resetSeqNumFlag(false);
  logon.getFieldIfSet(resetSeqNumFlag);
  m_state.receivedReset( resetSeqNumFlag );

  if( m_state.receivedReset() )
  {
    m_state.onEvent( "Logon contains ResetSeqNumFlag=Y, reseting sequence numbers to 1" );
    if( !m_state.sentReset() ) m_state.reset();
  }

  if( m_state.shouldSendLogon() && !m_state.receivedReset() )
  {
    m_state.onEvent( "Received logon response before sending request" );
    disconnect();
    return;
  }

  if( !m_state.initiate() && m_resetOnLogon )
    m_state.reset();

  if( !verify( logon, false, true ) )
    return;
  m_state.receivedLogon( true );

  if ( !m_state.initiate() 
       || (m_state.receivedReset() && !m_state.sentReset()) )
  {
    logon.getFieldIfSet(m_state.heartBtInt());
    m_state.onEvent( "Received logon request" );
    generateLogon( logon );
    m_state.onEvent( "Responding to logon request" );
  }
  else
    m_state.onEvent( "Received logon response" );

  m_state.sentReset( false );
  m_state.receivedReset( false );

  MsgSeqNum msgSeqNum;
  logon.getHeader().getField( msgSeqNum );
  if ( isTargetTooHigh( msgSeqNum ) && !resetSeqNumFlag )
  {
    doTargetTooHigh( logon );
  }
  else
  {
    m_state.incrNextTargetMsgSeqNum();
    nextQueued( timeStamp );
  }

  if ( isLoggedOn() )
    m_application.onLogon( m_sessionID );
}

void Session::nextHeartbeat( const Message& heartbeat, const UtcTimeStamp& timeStamp )
{
  if ( !verify( heartbeat ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );
}

void Session::nextTestRequest( const Message& testRequest, const UtcTimeStamp& timeStamp )
{
  if ( !verify( testRequest ) ) return ;
  generateHeartbeat( testRequest );
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );
}

void Session::nextLogout( const Message& logout, const UtcTimeStamp& timeStamp )
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
  if ( m_resetOnLogout ) m_state.reset();
  disconnect();
}

void Session::nextReject( const Message& reject, const UtcTimeStamp& timeStamp )
{
  if ( !verify( reject, false, true ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );
}

void Session::nextSequenceReset( const Message& sequenceReset, const UtcTimeStamp& timeStamp )
{
  bool isGapFill = false;
  GapFillFlag gapFillFlag;
  if ( sequenceReset.getFieldIfSet( gapFillFlag ) )
  {
    isGapFill = gapFillFlag;
  }

  if ( !verify( sequenceReset, isGapFill, isGapFill ) ) return ;

  NewSeqNo newSeqNo;
  if ( sequenceReset.getFieldIfSet( newSeqNo ) )
  {
    m_state.onEvent( "Received SequenceReset FROM: "
                     + IntConvertor::convert( getExpectedTargetNum() ) +
                     " TO: " + IntConvertor::convert( newSeqNo ) );

    if ( newSeqNo > getExpectedTargetNum() )
      m_state.setNextTargetMsgSeqNum( MsgSeqNum( newSeqNo ) );
    else if ( newSeqNo < getExpectedTargetNum() )
      generateReject( sequenceReset, SessionRejectReason_VALUE_IS_INCORRECT );
  }
}

void Session::nextResendRequest( const Message& resendRequest, const UtcTimeStamp& timeStamp )
{
  if ( !verify( resendRequest, false, false ) ) return ;

  Locker l( m_mutex );

  BeginSeqNo beginSeqNo;
  EndSeqNo endSeqNo;
  resendRequest.getField( beginSeqNo );
  resendRequest.getField( endSeqNo );

  m_state.onEvent( "Received ResendRequest FROM: "
       + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

  std::string beginString = m_sessionID.getBeginString();
  if ( (beginString >= FIX::BeginString_FIX42 && endSeqNo == 0) ||
       (beginString <= FIX::BeginString_FIX42 && endSeqNo == 999999) ||
       (endSeqNo >= getExpectedSenderNum()) )
  { endSeqNo = getExpectedSenderNum() - 1; }

  if ( !m_persistMessages )
  {
    endSeqNo = EndSeqNo(endSeqNo + 1);
    int next = m_state.getNextSenderMsgSeqNum();
    if( endSeqNo > next )
      endSeqNo = EndSeqNo(next);
    generateSequenceReset( beginSeqNo, endSeqNo );
    return;
  }

  std::vector < std::string > messages;
  m_state.get( beginSeqNo, endSeqNo, messages );

  std::vector < std::string > ::iterator i;
  MsgSeqNum msgSeqNum(0);
  MsgType msgType;
  int begin = 0;
  int current = beginSeqNo;
  std::string messageString;

  for ( i = messages.begin(); i != messages.end(); ++i )
  {
    SmartPtr<FIX::Message> pMsg;
    std::string strMsgType;
    const DataDictionary& sessionDD =
      m_dataDictionaryProvider.getSessionDataDictionary(m_sessionID.getBeginString());
    if (sessionDD.isMessageFieldsOrderPreserved())
    {
      std::string::size_type equalSign = (*i).find("\00135=");
      equalSign += 4;
      std::string::size_type soh = (*i).find_first_of('\001', equalSign);
      strMsgType = (*i).substr(equalSign, soh - equalSign);
#ifdef HAVE_EMX
      if (FIX::Message::isAdminMsgType(strMsgType) == false)
      {
        equalSign = (*i).find("\0019426=", soh);
        if (equalSign == std::string::npos)
          throw FIX::IOException("EMX message type (9426) not found");

        equalSign += 6;
        soh = (*i).find_first_of('\001', equalSign);
        if (soh == std::string::npos)
          throw FIX::IOException("EMX message type (9426) soh char not found");
        strMsgType.assign((*i).substr(equalSign, soh - equalSign));
      }
#endif
    }

    if( m_sessionID.isFIXT() )
    {
      Message msg;
      msg.setStringHeader(*i);
      ApplVerID applVerID;
      if( !msg.getHeader().getFieldIfSet(applVerID) )
        applVerID = m_senderDefaultApplVerID;

      const DataDictionary& applicationDD =
          m_dataDictionaryProvider.getApplicationDataDictionary(applVerID);
      if (strMsgType.empty())
        pMsg.reset( new Message( *i, sessionDD, applicationDD, m_validateLengthAndChecksum ));
      else
      {
        const message_order & headerOrder = sessionDD.getHeaderOrderedFields();
        const message_order & trailerOrder = sessionDD.getTrailerOrderedFields();
        const message_order & messageOrder = applicationDD.getMessageOrderedFields(strMsgType);
        pMsg.reset( new Message( headerOrder, trailerOrder, messageOrder, *i, sessionDD, applicationDD, m_validateLengthAndChecksum ));
      }
    }
    else
    {
      if (strMsgType.empty())
        pMsg.reset( new Message( *i, sessionDD, m_validateLengthAndChecksum ));
      else
      {
        const message_order & headerOrder = sessionDD.getHeaderOrderedFields();
        const message_order & trailerOrder = sessionDD.getTrailerOrderedFields();
        const message_order & messageOrder = sessionDD.getMessageOrderedFields(strMsgType);
        pMsg.reset(new Message(headerOrder, trailerOrder, messageOrder, *i, sessionDD, m_validateLengthAndChecksum ));
      }
    }

    Message & msg = *pMsg;

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
        send( msg.toString(messageString) );
        m_state.onEvent( "Resending Message: "
                         + IntConvertor::convert( msgSeqNum ) );
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

  resendRequest.getHeader().getField( msgSeqNum );
  if( !isTargetTooHigh(msgSeqNum) && !isTargetTooLow(msgSeqNum) )
    m_state.incrNextTargetMsgSeqNum();
}

Message * Session::newMessage(const std::string & msgType) const
{
  Message * msg = 0;

  const DataDictionary& sessionDD =
    m_dataDictionaryProvider.getSessionDataDictionary(m_sessionID.getBeginString());
  if (!sessionDD.isMessageFieldsOrderPreserved())
  {
    msg = new Message();
  }
  else
  {
    const message_order & headerOrder = sessionDD.getHeaderOrderedFields();
    const message_order & trailerOrder = sessionDD.getTrailerOrderedFields();
    if (!m_sessionID.isFIXT() || Message::isAdminMsgType(msgType) )
    {
      const message_order & messageOrder = sessionDD.getMessageOrderedFields(msgType);
      msg = new Message(headerOrder, trailerOrder, messageOrder);
    }
    else
    {
      const DataDictionary& applicationDD =
        m_dataDictionaryProvider.getApplicationDataDictionary(m_senderDefaultApplVerID);
      const message_order & messageOrder = applicationDD.getMessageOrderedFields(msgType);
      msg = new Message(headerOrder, trailerOrder, messageOrder);
    }
  }

  return msg;
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
    Header& header = message.getHeader();

    MsgType msgType;
    header.getFieldIfSet(msgType);

    fill( header );
    std::string messageString;

    if ( num )
      header.setField( MsgSeqNum( num ) );

    if ( Message::isAdminMsgType( msgType ) )
    {
      m_application.toAdmin( message, m_sessionID );

      if( msgType == "A" && !m_state.receivedReset() )
      {
        ResetSeqNumFlag resetSeqNumFlag( false );
        message.getFieldIfSet(resetSeqNumFlag);

        if( resetSeqNumFlag )
        {
          m_state.reset();
          message.getHeader().setField( MsgSeqNum(getExpectedSenderNum()) );
        }
        m_state.sentReset( resetSeqNumFlag );
      }

      message.toString( messageString );

      if( !num )
        persist( message, messageString );

      if (
        msgType == "A" || msgType == "5"
        || msgType == "2" || msgType == "4"
        || isLoggedOn() )
      {
        send( messageString );
      }
    }
    else
    {
      // do not send application messages if they will just be cleared
      if( !isLoggedOn() && shouldSendReset() )
        return false;

      try
      {
        m_application.toApp( message, m_sessionID );
        message.toString( messageString );

        if( !num )
          persist( message, messageString );

        if ( isLoggedOn() )
          send( messageString );
      }
      catch ( DoNotSend& ) { return false; }
    }

    return true;
  }
  catch ( IOException& e )
  {
    m_state.onEvent( e.what() );
    return false;
  }
}

bool Session::send( const std::string& string )
{
  if ( !m_pResponder ) return false;
  m_state.onOutgoing( string );
  return m_pResponder->send( string );
}

void Session::disconnect()
{
  Locker l(m_mutex);

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
  m_state.receivedReset( false );
  m_state.sentReset( false );
  m_state.clearQueue();
  m_state.logoutReason();
  if ( m_resetOnDisconnect )
    m_state.reset();

  m_state.resendRange( 0, 0 );
}

bool Session::resend( Message& message )
{
  SendingTime sendingTime;
  MsgSeqNum msgSeqNum;
  Header& header = message.getHeader();
  header.getField( sendingTime );
  header.getField( msgSeqNum );
  insertOrigSendingTime( header, sendingTime );
  header.setField( PossDupFlag( true ) );
  insertSendingTime( header );

  try
  {
    m_application.toApp( message, m_sessionID );
    return true;
  }
  catch ( DoNotSend& )
  { return false; }
}

void Session::persist( const Message& message,  const std::string& messageString ) 
EXCEPT ( IOException )
{
  MsgSeqNum msgSeqNum;
  message.getHeader().getField( msgSeqNum );
  if( m_persistMessages )
    m_state.set( msgSeqNum, messageString );
  m_state.incrNextSenderMsgSeqNum();
}

void Session::generateLogon()
{
  SmartPtr<Message> pMsg(newMessage("A"));
  Message & logon = *pMsg;

  logon.getHeader().setField( MsgType( "A" ) );
  logon.setField( EncryptMethod( 0 ) );
  logon.setField( m_state.heartBtInt() );
  if( m_sessionID.isFIXT() )
    logon.setField( DefaultApplVerID(m_senderDefaultApplVerID) );  
  if( m_refreshOnLogon )
    refresh();
  if( m_resetOnLogon )
    m_state.reset();
  if( shouldSendReset() )
    logon.setField( ResetSeqNumFlag(true) );

  fill( logon.getHeader() );
  UtcTimeStamp now;
  m_state.lastReceivedTime( now );
  m_state.testRequest( 0 );
  m_state.sentLogon( true );
  sendRaw( logon );
}

void Session::generateLogon( const Message& aLogon )
{
  SmartPtr<Message> pMsg(newMessage("A"));
  Message & logon = *pMsg;

  EncryptMethod encryptMethod;
  HeartBtInt heartBtInt;
  logon.setField( EncryptMethod( 0 ) );
  if( m_sessionID.isFIXT() )
    logon.setField( DefaultApplVerID(m_senderDefaultApplVerID) );  
  if( m_state.receivedReset() )
    logon.setField( ResetSeqNumFlag(true) );
  aLogon.getField( heartBtInt );
  logon.getHeader().setField( MsgType( "A" ) );
  logon.setField( heartBtInt );
  fill( logon.getHeader() );
  sendRaw( logon );
  m_state.sentLogon( true );
}

void Session::generateResendRequest( const BeginString& beginString, const MsgSeqNum& msgSeqNum )
{
  SmartPtr<Message> pMsg(newMessage("2"));
  Message & resendRequest = *pMsg;

  BeginSeqNo beginSeqNo( ( int ) getExpectedTargetNum() );
  EndSeqNo endSeqNo( msgSeqNum - 1 );
  if ( beginString >= FIX::BeginString_FIX42 )
    endSeqNo = 0;
  else if( beginString <= FIX::BeginString_FIX41 )
    endSeqNo = 999999;
  resendRequest.getHeader().setField( MsgType( "2" ) );
  resendRequest.setField( beginSeqNo );
  resendRequest.setField( endSeqNo );
  fill( resendRequest.getHeader() );
  sendRaw( resendRequest );

  m_state.onEvent( "Sent ResendRequest FROM: "
                   + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

  m_state.resendRange( beginSeqNo, msgSeqNum - 1 );
}

void Session::generateSequenceReset
( int beginSeqNo, int endSeqNo )
{
  SmartPtr<Message> pMsg(newMessage("4"));
  Message & sequenceReset = *pMsg;

  NewSeqNo newSeqNo( endSeqNo );
  sequenceReset.getHeader().setField( MsgType( "4" ) );
  sequenceReset.getHeader().setField( PossDupFlag( true ) );
  sequenceReset.setField( newSeqNo );
  fill( sequenceReset.getHeader() );

  SendingTime sendingTime;
  sequenceReset.getHeader().getField( sendingTime );
  insertOrigSendingTime( sequenceReset.getHeader(), sendingTime );
  sequenceReset.getHeader().setField( MsgSeqNum( beginSeqNo ) );
  sequenceReset.setField( GapFillFlag( true ) );
  sendRaw( sequenceReset, beginSeqNo );
  m_state.onEvent( "Sent SequenceReset TO: "
                   + IntConvertor::convert( newSeqNo ) );
}

void Session::generateHeartbeat()
{
  SmartPtr<Message> pMsg(newMessage("0"));
  Message & heartbeat = *pMsg;

  heartbeat.getHeader().setField( MsgType( "0" ) );
  fill( heartbeat.getHeader() );
  sendRaw( heartbeat );
}

void Session::generateHeartbeat( const Message& testRequest )
{
  SmartPtr<Message> pMsg(newMessage("0"));
  Message & heartbeat = *pMsg;

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
  SmartPtr<Message> pMsg(newMessage("1"));
  Message & testRequest = *pMsg;

  testRequest.getHeader().setField( MsgType( "1" ) );
  fill( testRequest.getHeader() );
  TestReqID testReqID( id );
  testRequest.setField( testReqID );

  sendRaw( testRequest );
}

void Session::generateReject( const Message& message, int err, int field )
{
  std::string beginString = m_sessionID.getBeginString();

  SmartPtr<Message> pMsg(newMessage("3"));
  Message & reject = *pMsg;

  reject.getHeader().setField( MsgType( "3" ) );
  reject.reverseRoute( message.getHeader() );
  fill( reject.getHeader() );

  MsgSeqNum msgSeqNum;
  MsgType msgType;

  message.getHeader().getField( msgType );
  if( message.getHeader().getFieldIfSet( msgSeqNum ) )
  {
    if( msgSeqNum.getString() != "" )
      reject.setField( RefSeqNum( msgSeqNum ) );
  }

  if ( beginString >= FIX::BeginString_FIX42 )
  {
    if( msgType.getString() != "" )
      reject.setField( RefMsgType( msgType ) );
    if ( (beginString == FIX::BeginString_FIX42
          && err <= SessionRejectReason_INVALID_MSGTYPE)
          || beginString > FIX::BeginString_FIX42 )
    {
      reject.setField( SessionRejectReason( err ) );
    }
  }
  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset
       && msgSeqNum == getExpectedTargetNum() )
  { m_state.incrNextTargetMsgSeqNum(); }

  const char* reason = 0;
  switch ( err )
  {
    case SessionRejectReason_INVALID_TAG_NUMBER:
    reason = SessionRejectReason_INVALID_TAG_NUMBER_TEXT;
    break;
    case SessionRejectReason_REQUIRED_TAG_MISSING:
    reason = SessionRejectReason_REQUIRED_TAG_MISSING_TEXT;
    break;
    case SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE:
    reason = SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE:
    reason = SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT;
    break;
    case SessionRejectReason_VALUE_IS_INCORRECT:
    reason = SessionRejectReason_VALUE_IS_INCORRECT_TEXT;
    break;
    case SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE:
    reason = SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT;
    break;
    case SessionRejectReason_COMPID_PROBLEM:
    reason = SessionRejectReason_COMPID_PROBLEM_TEXT;
    break;
    case SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM:
    reason = SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT;
    break;
    case SessionRejectReason_INVALID_MSGTYPE:
    reason = SessionRejectReason_INVALID_MSGTYPE_TEXT;
    break;
    case SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE:
    reason = SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER:
    reason = SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT;
    break;
    case SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP:
    reason = SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP_TEXT;
  };

  if ( reason && ( field || err == SessionRejectReason_INVALID_TAG_NUMBER ) )
  {
    populateRejectReason( reject, field, reason );
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected: "
                     + reason + ":" + IntConvertor::convert( field ) );
  }
  else if ( reason )
  {
    populateRejectReason( reject, reason );
    m_state.onEvent( "Message " + msgSeqNum.getString()
         + " Rejected: " + reason );
  }
  else
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected" );

  if ( !m_state.receivedLogon() )
    throw std::runtime_error( "Tried to send a reject while not logged on" );

  sendRaw( reject );
}

void Session::generateReject( const Message& message, const std::string& str )
{
  std::string beginString = m_sessionID.getBeginString();

  SmartPtr<Message> pMsg(newMessage("3"));
  Message & reject = *pMsg;

  reject.getHeader().setField( MsgType( "3" ) );
  reject.reverseRoute( message.getHeader() );
  fill( reject.getHeader() );

  MsgType msgType;
  MsgSeqNum msgSeqNum;

  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  if ( beginString >= FIX::BeginString_FIX42 )
    reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );

  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset )
    m_state.incrNextTargetMsgSeqNum();

  reject.setField( Text( str ) );
  sendRaw( reject );
  m_state.onEvent( "Message " + msgSeqNum.getString()
                   + " Rejected: " + str );
}

void Session::generateBusinessReject( const Message& message, int err, int field )
{
  SmartPtr<Message> pMsg(newMessage("j"));
  Message & reject = *pMsg;

  reject.getHeader().setField( MsgType( MsgType_BusinessMessageReject ) );
  if( m_sessionID.isFIXT() )
    reject.setField( DefaultApplVerID(m_senderDefaultApplVerID) );  
  fill( reject.getHeader() );
  MsgType msgType;
  MsgSeqNum msgSeqNum;
  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );
  reject.setField( BusinessRejectReason( err ) );
  m_state.incrNextTargetMsgSeqNum();

  const char* reason = 0;
  switch ( err )
  {
    case BusinessRejectReason_OTHER:
    reason = BusinessRejectReason_OTHER_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_ID:
    reason = BusinessRejectReason_UNKNOWN_ID_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_SECURITY:
    reason = BusinessRejectReason_UNKNOWN_SECURITY_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_MESSAGE_TYPE:
    reason = BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE_TEXT;
    break;
    case BusinessRejectReason_APPLICATION_NOT_AVAILABLE:
    reason = BusinessRejectReason_APPLICATION_NOT_AVAILABLE_TEXT;
    break;
    case BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING:
    reason = BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING_TEXT;
    break;
    case BusinessRejectReason_NOT_AUTHORIZED:
    reason = BusinessRejectReason_NOT_AUTHORIZED_TEXT;
    break;
    case BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME:
    reason = BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME_TEXT;
    break;
  };

  if ( reason && field )
  {
    populateRejectReason( reject, field, reason );
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected: "
                     + reason + ":" + IntConvertor::convert( field ) );
  }
  else if ( reason )
  {
    populateRejectReason( reject, reason );
    m_state.onEvent( "Message " + msgSeqNum.getString()
         + " Rejected: " + reason );
  }
  else
    m_state.onEvent( "Message " + msgSeqNum.getString() + " Rejected" );

  sendRaw( reject );
}

void Session::generateLogout( const std::string& text )
{
  SmartPtr<Message> pMsg(newMessage("5"));
  Message & logout = *pMsg;

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
  MsgType msgType;
   reject.getHeader().getField( msgType );

  if ( msgType == MsgType_Reject 
       && m_sessionID.getBeginString() >= FIX::BeginString_FIX42 )
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
  const MsgType* pMsgType = 0;
  const MsgSeqNum* pMsgSeqNum = 0;

  try
  {
    const Header& header = msg.getHeader();

    pMsgType = FIELD_GET_PTR( header, MsgType );
    const SenderCompID& senderCompID = FIELD_GET_REF( header, SenderCompID );
    const TargetCompID& targetCompID = FIELD_GET_REF( header, TargetCompID );
    const SendingTime& sendingTime = FIELD_GET_REF( header, SendingTime );

    if( checkTooHigh || checkTooLow )
      pMsgSeqNum = FIELD_GET_PTR( header, MsgSeqNum );

    if ( !validLogonState( *pMsgType ) )
      throw std::logic_error( "Logon state is not valid for message" );

    if ( !isGoodTime( sendingTime ) )
    {
      doBadTime( msg );
      return false;
    }
    if ( !isCorrectCompID( senderCompID, targetCompID ) )
    {
      doBadCompID( msg );
      return false;
    }

    if ( checkTooHigh && isTargetTooHigh( *pMsgSeqNum ) )
    {
      doTargetTooHigh( msg );
      return false;
    }
    else if ( checkTooLow && isTargetTooLow( *pMsgSeqNum ) )
    {
      doTargetTooLow( msg );
      return false;
    }

    if ( (checkTooHigh || checkTooLow) && m_state.resendRequested() )
    {
      SessionState::ResendRange range = m_state.resendRange();
 
      if ( *pMsgSeqNum >= range.second )
      {
        m_state.onEvent ("ResendRequest for messages FROM: " +
                         IntConvertor::convert (range.first) + " TO: " +
                         IntConvertor::convert (range.second) +
                         " has been satisfied.");
        m_state.resendRange (0, 0);
      }
    }
  }
  catch ( std::exception& e )
  {
    m_state.onEvent( e.what() );
    disconnect();
    return false;
  }

  UtcTimeStamp now;
  m_state.lastReceivedTime( now );
  m_state.testRequest( 0 );

  fromCallback( pMsgType ? *pMsgType : MsgType(), msg, m_sessionID );
  return true;
}

bool Session::shouldSendReset()
{
  std::string beginString = m_sessionID.getBeginString();
  return beginString >= FIX::BeginString_FIX41
    && ( m_resetOnLogon || 
         m_resetOnLogout || 
         m_resetOnDisconnect )
    && ( getExpectedSenderNum() == 1 )
    && ( getExpectedTargetNum() == 1 );
}

bool Session::validLogonState( const MsgType& msgType )
{
  if ( (msgType == MsgType_Logon && m_state.sentReset()) 
       || (m_state.receivedReset()) )
    return true;
  if ( (msgType == MsgType_Logon && !m_state.receivedLogon())
       || (msgType != MsgType_Logon && m_state.receivedLogon()) )
    return true;
  if ( msgType == MsgType_Logout && m_state.sentLogon() )
    return true;
  if ( msgType != MsgType_Logout && m_state.sentLogout() )
    return true;
  if ( msgType == MsgType_SequenceReset ) 
    return true;
  if ( msgType == MsgType_Reject )
    return true;

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
  generateReject( msg, SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM );
  generateLogout();
}

void Session::doBadCompID( const Message& msg )
{
  generateReject( msg, SessionRejectReason_COMPID_PROBLEM );
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
    if ( !header.getFieldIfSet( origSendingTime ) )
    {
      generateReject( msg, SessionRejectReason_REQUIRED_TAG_MISSING, origSendingTime.getTag() );
      return false;
    }

    if ( origSendingTime > sendingTime )
    {
      generateReject( msg, SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM );
      generateLogout();
      return false;
    }
  }
  return true;
}

bool Session::doTargetTooLow( const Message& msg )
{
  const Header & header = msg.getHeader();
  PossDupFlag possDupFlag(false);
  MsgSeqNum msgSeqNum;
  header.getFieldIfSet(possDupFlag);
  header.getField( msgSeqNum );

  if ( !possDupFlag )
  {
    std::stringstream stream;
    stream << "MsgSeqNum too low, expecting " << getExpectedTargetNum()
           << " but received " << msgSeqNum;
    generateLogout( stream.str() );
    throw std::logic_error( stream.str() );
  }

  return doPossDup( msg );
}

void Session::doTargetTooHigh( const Message& msg )
{
  const Header & header = msg.getHeader();
  BeginString beginString;
  MsgSeqNum msgSeqNum;
  header.getField( beginString );
  header.getField( msgSeqNum );

  m_state.onEvent( "MsgSeqNum too high, expecting "
                   + IntConvertor::convert( getExpectedTargetNum() )
                   + " but received "
                   + IntConvertor::convert( msgSeqNum ) );

  m_state.queue( msgSeqNum, msg );

  if( m_state.resendRequested() )
  {
    SessionState::ResendRange range = m_state.resendRange();

    if( !m_sendRedundantResendRequests && msgSeqNum >= range.first )
    {
          m_state.onEvent ("Already sent ResendRequest FROM: " +
                           IntConvertor::convert (range.first) + " TO: " +
                           IntConvertor::convert (range.second) +
                           ".  Not sending another.");
          return;
    }
  }

  generateResendRequest( beginString, msgSeqNum );
}

void Session::nextQueued( const UtcTimeStamp& timeStamp )
{
  while ( nextQueued( getExpectedTargetNum(), timeStamp ) ) {}
}

bool Session::nextQueued( int num, const UtcTimeStamp& timeStamp )
{
  Message msg;
  MsgType msgType;

  if( m_state.retrieve( num, msg ) )
  {
    m_state.onEvent( "Processing QUEUED message: "
                     + IntConvertor::convert( num ) );
    msg.getHeader().getField( msgType );
    if( msgType == MsgType_Logon
        || msgType == MsgType_ResendRequest )
    {
      m_state.incrNextTargetMsgSeqNum();
    }
    else
    {
      next( msg, timeStamp, true );
    }
    return true;
  }
  return false;
}

void Session::next( const std::string& msg, const UtcTimeStamp& timeStamp, bool queued )
{
  try
  {
    m_state.onIncoming( msg );
    const DataDictionary& sessionDD = 
      m_dataDictionaryProvider.getSessionDataDictionary(m_sessionID.getBeginString());
    if( m_sessionID.isFIXT() )
    {
      const DataDictionary& applicationDD =
        m_dataDictionaryProvider.getApplicationDataDictionary(m_senderDefaultApplVerID);
      next( Message( msg, sessionDD, applicationDD, m_validateLengthAndChecksum ), timeStamp, queued );
    }
    else
    {
      next( Message( msg, sessionDD, m_validateLengthAndChecksum ), timeStamp, queued );
    }
  }
  catch( InvalidMessage& e )
  {
    m_state.onEvent( e.what() );

    try
    {
      if( identifyType(msg) == MsgType_Logon )
      {
        m_state.onEvent( "Logon message is not valid" );
        disconnect();
      }
    } catch( MessageParseError& ) {}
    throw e;
  }
}

void Session::next( const Message& message, const UtcTimeStamp& timeStamp, bool queued )
{
  const Header& header = message.getHeader();

  try
  {
    if ( !checkSessionTime(timeStamp) )
      { reset(); return; }

    const MsgType& msgType = FIELD_GET_REF( header, MsgType );
    const BeginString& beginString = FIELD_GET_REF( header, BeginString );
    // make sure these fields are present
    FIELD_THROW_IF_NOT_FOUND( header, SenderCompID );
    FIELD_THROW_IF_NOT_FOUND( header, TargetCompID );

    if ( beginString != m_sessionID.getBeginString() )
      throw UnsupportedVersion();

    if( msgType == MsgType_Logon )
    {
      if( m_sessionID.isFIXT() )
      {
        const DefaultApplVerID& applVerID = FIELD_GET_REF( message, DefaultApplVerID );
        setTargetDefaultApplVerID(applVerID);
      }
      else
      {
        setTargetDefaultApplVerID(Message::toApplVerID(beginString));
      }
    }

    const DataDictionary& sessionDataDictionary = 
        m_dataDictionaryProvider.getSessionDataDictionary(m_sessionID.getBeginString());

    if( m_sessionID.isFIXT() && message.isApp() )
    {
      ApplVerID applVerID = m_targetDefaultApplVerID;
      header.getFieldIfSet(applVerID);
      const DataDictionary& applicationDataDictionary = 
        m_dataDictionaryProvider.getApplicationDataDictionary(applVerID);
      DataDictionary::validate( message, &sessionDataDictionary, &applicationDataDictionary );
    }
    else
    {
      sessionDataDictionary.validate( message );
    }

    if ( msgType == MsgType_Logon )
      nextLogon( message, timeStamp );
    else if ( msgType == MsgType_Heartbeat )
      nextHeartbeat( message, timeStamp );
    else if ( msgType == MsgType_TestRequest )
      nextTestRequest( message, timeStamp );
    else if ( msgType == MsgType_SequenceReset )
      nextSequenceReset( message, timeStamp );
    else if ( msgType == MsgType_Logout )
      nextLogout( message, timeStamp );
    else if ( msgType == MsgType_ResendRequest )
      nextResendRequest( message, timeStamp );
    else if ( msgType == MsgType_Reject )
      nextReject( message, timeStamp );
    else
    {
      if ( !verify( message ) ) return ;
      m_state.incrNextTargetMsgSeqNum();
    }
  }
  catch ( MessageParseError& e )
  { m_state.onEvent( e.what() ); }
  catch ( RequiredTagMissing & e )
  { LOGEX( generateReject( message, SessionRejectReason_REQUIRED_TAG_MISSING, e.field ) ); }
  catch ( FieldNotFound & e )
  {
    if( header.getField(FIELD::BeginString) >= FIX::BeginString_FIX42 && message.isApp() )
    {
      LOGEX( generateBusinessReject( message, BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING, e.field ) );
    }
    else
    {
      LOGEX( generateReject( message, SessionRejectReason_REQUIRED_TAG_MISSING, e.field ) );
      if ( header.getField(FIELD::MsgType) == MsgType_Logon )
      {
        m_state.onEvent( "Required field missing from logon" );
        disconnect();
      }
    }
  }
  catch ( InvalidTagNumber & e )
  { LOGEX( generateReject( message, SessionRejectReason_INVALID_TAG_NUMBER, e.field ) ); }
  catch ( NoTagValue & e )
  { LOGEX( generateReject( message, SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE, e.field ) ); }
  catch ( TagNotDefinedForMessage & e )
  { LOGEX( generateReject( message, SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE, e.field ) ); }
  catch ( InvalidMessageType& )
  { LOGEX( generateReject( message, SessionRejectReason_INVALID_MSGTYPE ) ); }
  catch ( UnsupportedMessageType& )
  {
    if ( header.getField(FIELD::BeginString) >= FIX::BeginString_FIX42 )
      { LOGEX( generateBusinessReject( message, BusinessRejectReason_UNKNOWN_MESSAGE_TYPE ) ); }
    else
      { LOGEX( generateReject( message, "Unsupported message type" ) ); }
  }
  catch ( TagOutOfOrder & e )
  { LOGEX( generateReject( message, SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER, e.field ) ); }
  catch ( IncorrectDataFormat & e )
  { LOGEX( generateReject( message, SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE, e.field ) ); }
  catch ( IncorrectTagValue & e )
  { LOGEX( generateReject( message, SessionRejectReason_VALUE_IS_INCORRECT, e.field ) ); }
  catch ( RepeatedTag & e )
  { LOGEX( generateReject( message, SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE, e.field ) ); }
  catch ( RepeatingGroupCountMismatch & e )
  { LOGEX( generateReject( message, SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP, e.field ) ); }
  catch ( InvalidMessage& e )
  { m_state.onEvent( e.what() ); }
  catch ( RejectLogon& e )
  {
    m_state.onEvent( e.what() );
    generateLogout( e.what() );
    disconnect();
  }
  catch ( UnsupportedVersion& )
  {
    if ( header.getField(FIELD::MsgType) == MsgType_Logout )
      nextLogout( message, timeStamp );
    else
    {
      generateLogout( "Incorrect BeginString" );
      m_state.incrNextTargetMsgSeqNum();
    }
  }
  catch ( IOException& e )
  {
    m_state.onEvent( e.what() );
    disconnect();
  }

  if( !queued )
    nextQueued( timeStamp );

  if( isLoggedOn() )
    next();
}

bool Session::sendToTarget( Message& message, const std::string& qualifier )
EXCEPT ( SessionNotFound )
{
  try
  {
    SessionID sessionID = message.getSessionID( qualifier );
    return sendToTarget( message, sessionID );
  }
  catch ( FieldNotFound& ) { throw SessionNotFound(); }
}

bool Session::sendToTarget( Message& message, const SessionID& sessionID )
EXCEPT ( SessionNotFound )
{
  message.setSessionID( sessionID );
  Session* pSession = lookupSession( sessionID );
  if ( !pSession ) throw SessionNotFound();
  return pSession->send( message );
}

bool Session::sendToTarget
( Message& message,
  const SenderCompID& senderCompID,
  const TargetCompID& targetCompID,
  const std::string& qualifier )
EXCEPT ( SessionNotFound )
{
  message.getHeader().setField( senderCompID );
  message.getHeader().setField( targetCompID );
  return sendToTarget( message, qualifier );
}

bool Session::sendToTarget
( Message& message, const std::string& sender, const std::string& target,
  const std::string& qualifier )
EXCEPT ( SessionNotFound )
{
  return sendToTarget( message, SenderCompID( sender ),
                       TargetCompID( target ), qualifier );
}

std::set<SessionID> Session::getSessions()
{
  return s_sessionIDs;
}

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

  try
  {
    const Header& header = message.getHeader();
    const BeginString& beginString = FIELD_GET_REF( header, BeginString );
    const SenderCompID& senderCompID = FIELD_GET_REF( header, SenderCompID );
    const TargetCompID& targetCompID = FIELD_GET_REF( header, TargetCompID );

    if ( reverse )
    {
      return lookupSession( SessionID( beginString, SenderCompID( targetCompID ),
                                     TargetCompID( senderCompID ) ) );
    }

    return lookupSession( SessionID( beginString, senderCompID,
                          targetCompID ) );
  }
  catch ( FieldNotFound& ) { return 0; }
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
  Locker locker( s_mutex );
  s_registered.erase( sessionID );
}

size_t Session::numSessions()
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
    s_sessionIDs.insert( s.m_sessionID );
    return true;
  }
  else
    return false;
}

void Session::removeSession( Session& s )
{
  Locker locker( s_mutex );
  s_sessions.erase( s.m_sessionID );
  s_sessionIDs.erase( s.m_sessionID );
  s_registered.erase( s.m_sessionID );
}
}
