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

#ifndef FIX_SESSION_H
#define FIX_SESSION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SessionState.h"
#include "SessionTime.h"
#include "SessionID.h"
#include "Responder.h"
#include "Fields.h"
#include "DataDictionary.h"
#include "Application.h"
#include "Mutex.h"
#include "Log.h"
#include <utility>
#include <map>
#include <queue>

namespace FIX
{
/// Maintains the state and implements the logic of a %FIX %session.
class Session
{
public:
  Session( Application&, MessageStoreFactory&,
           const SessionID&,
           const DataDictionary&,
           const SessionTime&,
           int heartBtInt, LogFactory* pLogFactory );
  ~Session();

  void logon() { m_enabled = true; }
  void logout() { m_enabled = false; }
  bool isEnabled() { return m_enabled; }

  bool sentLogon() { return m_state.sentLogon(); }
  bool sentLogout() { return m_state.sentLogout(); }
  bool receivedLogon() { return m_state.receivedLogon(); }
  bool isLoggedOn() { return receivedLogon() && sentLogon(); }
  void reset() throw( IOException ) { disconnect(); m_state.reset(); }
  void setNextSenderMsgSeqNum( int num ) throw( IOException )
  { m_state.setNextSenderMsgSeqNum( num ); }
  void setNextTargetMsgSeqNum( int num ) throw( IOException )
  { m_state.setNextTargetMsgSeqNum( num ); }

  const SessionID& getSessionID() const
  { return m_sessionID; }
  const DataDictionary& getDataDictionary() const
  { return m_dataDictionary; }

  static bool sendToTarget( Message& message,
                            const std::string& qualifier = "" )
  throw( SessionNotFound );
  static bool sendToTarget( Message& message, const SessionID& sessionID )
  throw( SessionNotFound );
  static bool sendToTarget( Message&,
                            const SenderCompID& senderCompID,
                            const TargetCompID& targetCompID,
                            const std::string& qualifier = "" )
  throw( SessionNotFound );
  static bool sendToTarget( Message& message,
                            const std::string& senderCompID,
                            const std::string& targetCompID,
                            const std::string& qualifier = "" )
  throw( SessionNotFound );

  static bool doesSessionExist( const SessionID& );
  static Session* lookupSession( const SessionID& );
  static Session* lookupSession( const std::string&, bool reverse = false );
  static bool isSessionRegistered( const SessionID& );
  static Session* registerSession( const SessionID& );
  static void unregisterSession( const SessionID& );

  static int numSessions();

  bool isSessionTime()
    { return m_sessionTime.isSessionTime(); }
  void checkLatency ( bool value )
    { m_checkLatency = value; }
  void setMaxLatency ( int value )
    { m_maxLatency = value; }
  void setLogonTimeout ( int value )
    { m_state.logonTimeout( value ); }
  void setSendResetSeqNumFlag( bool value )
    { m_sendResetSeqNumFlag = value; }
  void setResetOnLogout ( bool value )
    { m_resetOnLogout = value; }
  void setResetOnDisconnect( bool value )
    { m_resetOnDisconnect = value; }
  void setMillisecondsInTimeStamp ( bool value )
    { m_millisecondsInTimeStamp = value; }

  void setResponder( Responder* pR )
  {
    if ( !checkSessionTime( UtcTimeStamp() ) )
      reset();
    m_pResponder = pR;
  }

  bool send( Message& );
  void next();
  void next( const std::string&, bool queued = false );
  void next( const Message&, bool queued = false );
  void disconnect();

  long getExpectedSenderNum() { return m_state.getNextSenderMsgSeqNum(); }
  long getExpectedTargetNum() { return m_state.getNextTargetMsgSeqNum(); }

  Log* getLog() { return &m_state; }
  const MessageStore* getStore() { return &m_state; }

private:
  typedef std::map < SessionID, Session* > Sessions;
  static bool addSession( Session& );
  static void removeSession( Session& );

  bool send( const std::string );
  bool sendRaw( Message&, int msgSeqNum = 0 );
  bool resend( Message& message );

  void insertSendingTime( Header& );
  void fill( Header& );

  bool isGoodTime( const SendingTime& sendingTime )
  {
    if ( !m_checkLatency ) return true;
    UtcTimeStamp now;
    return labs( now - sendingTime ) <= m_maxLatency;
  }
  bool checkSessionTime( const UtcTimeStamp& time )
  {
    UtcTimeStamp creationTime = m_state.getCreationTime();
    return m_sessionTime.isSameSession(time, creationTime);
  }
  bool isTargetTooHigh( const MsgSeqNum& msgSeqNum )
  { return msgSeqNum > ( m_state.getNextTargetMsgSeqNum() ); }
  bool isTargetTooLow( const MsgSeqNum& msgSeqNum )
  { return msgSeqNum < ( m_state.getNextTargetMsgSeqNum() ); }
  bool isCorrectCompID( const SenderCompID& senderCompID,
                        const TargetCompID& targetCompID )
  {
    return
      m_sessionID.getSenderCompID().getValue() == targetCompID.getValue()
      && m_sessionID.getTargetCompID().getValue() == senderCompID.getValue();
  }
  bool shouldSendReset();

  bool validLogonState( const MsgType& msgType );
  void fromCallback( const MsgType& msgType, const Message& msg,
                     const SessionID& sessionID );

  void doBadTime( const Message& msg );
  void doBadCompID( const Message& msg );
  bool doPossDup( const Message& msg );
  bool doTargetTooLow( const Message& msg );
  void doTargetTooHigh( const Message& msg );
  void nextQueued();
  bool nextQueued( int num );

  void nextLogon( const Message& );
  void nextHeartbeat( const Message& );
  void nextTestRequest( const Message& );
  void nextLogout( const Message& );
  void nextReject( const Message& );
  void nextSequenceReset( const Message& );
  void nextResendRequest( const Message& );

  void generateLogon();
  void generateLogon( const Message& );
  void generateResendRequest( const BeginString&, const MsgSeqNum& );
  void generateSequenceReset( int, int );
  void generateHeartbeat();
  void generateHeartbeat( const Message& );
  void generateTestRequest( const std::string& );
  void generateReject( const Message&, int err, int field = 0 );
  void generateReject( const Message&, const std::string& );
  void generateBusinessReject( const Message&, int err );
  void generateLogout( const std::string& text = "" );

  void populateRejectReason( Message&, int field, const std::string& );
  void populateRejectReason( Message&, const std::string& );

  bool verify( const Message& msg,
               bool checkTooHigh = true, bool checkTooLow = true );

  bool set( int s, const Message& m );
  bool get( int s, Message& m ) const;

  Application& m_application;
  SessionID m_sessionID;
  SessionTime m_sessionTime;
  bool m_enabled;

  bool m_checkLatency;
  int m_maxLatency;
  bool m_sendResetSeqNumFlag;
  bool m_resetOnLogout;
  bool m_resetOnDisconnect;
  bool m_millisecondsInTimeStamp;

  SessionState m_state;
  DataDictionary m_dataDictionary;
  MessageStoreFactory& m_messageStoreFactory;
  LogFactory* m_pLogFactory;
  Responder* m_pResponder;
  Mutex m_mutex;

  static Sessions s_sessions;
  static Sessions s_registered;
  static Mutex s_mutex;

};
}

#endif //FIX_SESSION_H
