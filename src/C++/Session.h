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

#ifndef FIX_SESSION_H
#define FIX_SESSION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SessionState.h"
#include "SessionID.h"
#include "Fields.h"
#include "Messages.h"
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
  class Responder;

  Session( Application&, MessageStoreFactory&,
           const SessionID&, const DataDictionary&,
           const UtcTimeOnly& startTime, const UtcTimeOnly &endTime,
           int heartBtInt, LogFactory* pLogFactory );
  ~Session();

  bool sentLogon() { return m_state.sentLogon(); }
  bool sentLogout() { return m_state.sentLogout(); }
  bool receivedLogon() { return m_state.receivedLogon(); }
  bool isLoggedOn() { return receivedLogon() && sentLogon(); }
  void reset() throw( IOException& ) { disconnect(); m_state.reset(); }
  void setNextSenderMsgSeqNum( int num ) throw( IOException& )
  { m_state.setNextSenderMsgSeqNum( num ); }
  void setNextTargetMsgSeqNum( int num ) throw( IOException& )
  { m_state.setNextTargetMsgSeqNum( num ); }

  const SessionID& getSessionID() const { return m_sessionID; }

  static bool sendToTarget( Message& )
  throw( SessionNotFound& );
  static bool sendToTarget( Message&, const SessionID& )
  throw( SessionNotFound& );
  static bool sendToTarget( Message&, const SenderCompID&,
                            const TargetCompID& )
  throw( SessionNotFound& );
  static bool sendToTarget( Message&, const std::string&,
                            const std::string& )
  throw( SessionNotFound& );

  static bool doesSessionExist( const SessionID& );
  static Session* lookupSession( const SessionID& );
  static Session* lookupSession( const std::string&, bool reverse = false );
  static bool isSessionRegistered( const SessionID& );
  static Session* registerSession( const SessionID& );
  static void unregisterSession( const SessionID& );

  static int numSessions();
  static bool isSessionTime( const UtcTimeOnly& start, const UtcTimeOnly& end,
                             const UtcTimeStamp& time );
  static bool isSameSession( const UtcTimeOnly& start, const UtcTimeOnly& end,
                             const UtcTimeStamp& time1,
                             const UtcTimeStamp& time2 );
  bool isSessionTime() { return isSessionTime( m_startTime, m_endTime, UtcTimeStamp() ); }

  void checkLatency ( bool value ) { m_checkLatency = value; }
  void setMaxLatency ( int value ) { m_maxLatency = value; }
  void setLogonTimeout ( int value ) { m_state.logonTimeout( value ); }
  void setResetOnLogout ( bool value ) { m_resetOnLogout = value; }
  void setResetOnDisconnect( bool value ) { m_resetOnDisconnect = value; }

  void setResponder( Responder* pR ) { m_pResponder = pR; }
  bool send( Message& );
  void next();
  void next( const std::string& );
  void next( const Message& );
  void disconnect();

  long getExpectedSenderNum() { return m_state.getNextSenderMsgSeqNum(); }
  long getExpectedTargetNum() { return m_state.getNextTargetMsgSeqNum(); }

  Log* getLog() { return &m_state; }

private:
  void initialize( int );

  typedef std::map < SessionID, Session* > Sessions;
  static bool addSession( Session& );
  static void removeSession( Session& );

  bool send( const std::string );
  bool sendRaw( Message&, int msgSeqNum = 0 );
  bool resend( Message& message );
  void fill( Header& );

  bool isGoodTime( const SendingTime& sendingTime )
  {
    if ( !m_checkLatency ) return true;
    UtcTimeStamp now;
    return abs( now - sendingTime ) <= m_maxLatency;
  }
  bool checkSessionTime( const UtcTimeStamp& time )
  {
    UtcTimeStamp creationTime = m_state.getCreationTime();
    return isSameSession(m_startTime, m_endTime, time, creationTime);
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
  void generateResendRequest( const MsgSeqNum& );
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
  bool get( int b, int e, std::vector < Message > &m ) const;

  Application& m_application;
  SessionID m_sessionID;
  UtcTimeOnly m_startTime;
  UtcTimeOnly m_endTime;

  bool m_checkLatency;
  int m_maxLatency;
  bool m_resetOnLogout;
  bool m_resetOnDisconnect;

  SessionState m_state;
  DataDictionary m_dataDictionary;
  MessageStoreFactory& m_messageStoreFactory;
  LogFactory* m_pLogFactory;
  Responder* m_pResponder;
  Mutex m_mutex;

  static Sessions s_sessions;
  static Sessions s_registered;
  static Mutex s_mutex;

public:
  /// Interface implements sending on and disconnecting a transport.
  class Responder
  {
    friend class Session;
  public:
    virtual ~Responder() {}
    virtual bool send( const std::string& ) = 0;
    virtual void disconnect() = 0;
  };
};
}

#endif //FIX_SESSION_H
