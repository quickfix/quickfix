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

#ifndef FIX_SESSIONSTATE_H
#define FIX_SESSIONSTATE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "FieldTypes.h"
#include "MessageStore.h"
#include "Log.h"
#include "Mutex.h"

namespace FIX
{
class SessionState : public MessageStore, public Log
{
  typedef std::map < int, Message > Messages;
public:
SessionState() : m_connected( false ), m_receivedLogon( false ),
  m_sentLogout( false ), m_sentLogon( false ),
  m_initiate( false ), m_logonTimeout( 10 ), m_testRequest( 0 ),
  m_pStore( 0 ), m_pLog( 0 ) {}

  bool connected() { return m_connected; }
  void connected( bool value ) { m_connected = value; }
  bool receivedLogon() { return m_receivedLogon; }
  void receivedLogon( bool value ) { m_receivedLogon = value; }
  bool sentLogout() { return m_sentLogout; }
  void sentLogout( bool value ) { m_sentLogout = value; }
  bool sentLogon() { return m_sentLogon; }
  void sentLogon( bool value ) { m_sentLogon = value; }
  bool initiate() { return m_initiate; }
  void initiate( bool value ) { m_initiate = value; }
  int logonTimeout() { return m_logonTimeout; }
  void logonTimeout( int value ) { m_logonTimeout = value; }
  int testRequest() { return m_testRequest; }
  void testRequest( int value ) { m_testRequest = value; }

  MessageStore* store() { return m_pStore; }
  void store( MessageStore* pValue ) { m_pStore = pValue; }
  Log* log() { return m_pLog; }
  void log( Log* pValue ) { m_pLog = pValue; }

  void heartBtInt( const HeartBtInt& value )
  { m_heartBtInt = value; }
  HeartBtInt& heartBtInt()
  { return m_heartBtInt; }

  void lastSentTime( const UtcTimeStamp& value )
  { m_lastSentTime = value; }
  const UtcTimeStamp& lastSentTime() const
    { return m_lastSentTime; }

  void lastReceivedTime( const UtcTimeStamp& value )
  { m_lastReceivedTime = value; }
  const UtcTimeStamp& lastReceivedTime() const
    { return m_lastReceivedTime; }

  bool shouldSendLogon() { return initiate() && !sentLogon(); }
  bool alreadySentLogon() { return initiate() && sentLogon(); }
  bool logonTimedOut()
  {
    UtcTimeStamp now;
    return now - lastReceivedTime() >= logonTimeout();
  }
  bool logoutTimedOut()
  {
    UtcTimeStamp now;
    return sentLogout() && ( ( now - lastReceivedTime() ) >= 2 );
  }
  bool withinHeartBeat()
  {
    UtcTimeStamp now;
    return ( ( now - lastSentTime() ) < heartBtInt() ) &&
           ( ( now - lastReceivedTime() ) < heartBtInt() );
  }
  bool timedOut()
  {
    UtcTimeStamp now;
    return ( now - lastReceivedTime() ) >= ( 2.4 * ( double ) heartBtInt() );
  }
  bool needHeartbeat()
  {
    UtcTimeStamp now;
    return ( ( now - lastSentTime() ) >= heartBtInt() ) && !testRequest();
  }
  bool needTestRequest()
  {
    UtcTimeStamp now;
    return ( now - lastReceivedTime() ) >=
           ( ( 1.2 * ( ( double ) testRequest() + 1 ) ) * ( double ) heartBtInt() );
  }

  void queue( int msgSeqNum, const Message& message )
  { Locker l( m_mutex ); m_queue[ msgSeqNum ] = message; }
  bool retreive( int msgSeqNum, Message& message )
  {
    Locker l( m_mutex );
    Messages::iterator i = m_queue.find( msgSeqNum );
    if ( i != m_queue.end() )
    {
      message = i->second;
      m_queue.erase( i );
      return true;
    }
    return false;
  }
  void clearQueue()
  { Locker l( m_mutex ); m_queue.clear(); }

  bool set( int s, const std::string& m ) throw ( IOException& )
  { Locker l( m_mutex ); return m_pStore->set( s, m ); }
  bool get( int s, std::string& m ) const throw ( IOException& )
  { Locker l( m_mutex ); return m_pStore->get( s, m ); }
  void get( int b, int e, std::vector < std::string > &m ) const
  throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->get( b, e, m ); }
  int getNextSenderMsgSeqNum() const throw ( IOException& )
  { Locker l( m_mutex ); return m_pStore->getNextSenderMsgSeqNum(); }
  int getNextTargetMsgSeqNum() const throw ( IOException& )
  { Locker l( m_mutex ); return m_pStore->getNextTargetMsgSeqNum(); }
  void setNextSenderMsgSeqNum( int n ) throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->setNextSenderMsgSeqNum( n ); }
  void setNextTargetMsgSeqNum( int n ) throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->setNextTargetMsgSeqNum( n ); }
  void incrNextSenderMsgSeqNum() throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->incrNextSenderMsgSeqNum(); }
  void incrNextTargetMsgSeqNum() throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->incrNextTargetMsgSeqNum(); }
  UtcTimeStamp getCreationTime() const throw ( IOException& )
  { Locker l( m_mutex ); return m_pStore->getCreationTime(); }
  void reset() throw ( IOException& )
  { Locker l( m_mutex ); m_pStore->reset(); }

  void onIncoming( const std::string& string )
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onIncoming( string ); }
  void onOutgoing( const std::string& string )
{ if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onOutgoing( string ); }
  void onEvent( const std::string& string )
{ if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onEvent( string ); }

private:
  bool m_connected;
  bool m_receivedLogon;
  bool m_sentLogout;
  bool m_sentLogon;
  bool m_initiate;
  int m_logonTimeout;
  int m_testRequest;
  HeartBtInt m_heartBtInt;
  UtcTimeStamp m_lastSentTime;
  UtcTimeStamp m_lastReceivedTime;
  Messages m_queue;
  MessageStore* m_pStore;
  Log* m_pLog;
  mutable Mutex m_mutex;
};
}

#endif //FIX_SESSIONSTATE_H
