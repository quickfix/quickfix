/* -*- C++ -*- */

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
/// Maintains all of state for the Session class.
class SessionState : public MessageStore, public Log
{
  typedef std::map < int, Message > Messages;

public:
  SessionState()
: m_enabled( true ), m_receivedLogon( false ),
  m_sentLogout( false ), m_sentLogon( false ),
  m_sentReset( false ), m_receivedReset( false ),
  m_initiate( false ), m_logonTimeout( 10 ), 
  m_logoutTimeout( 2 ), m_testRequest( 0 ),
  m_pStore( 0 ), m_pLog( 0 ) {}

  bool enabled() const { return m_enabled; }
  void enabled( bool value ) { m_enabled = value; }

  bool receivedLogon() const { return m_receivedLogon; }
  void receivedLogon( bool value ) { m_receivedLogon = value; }

  bool sentLogout() const { return m_sentLogout; }
  void sentLogout( bool value ) { m_sentLogout = value; }

  bool sentLogon() const { return m_sentLogon; }
  void sentLogon( bool value ) { m_sentLogon = value; }

  bool receivedReset() const { return m_receivedReset; }
  void receivedReset( bool value ) { m_receivedReset = value; }

  bool sentReset() const { return m_sentReset; }
  void sentReset( bool value ) { m_sentReset = value; }

  bool initiate() const { return m_initiate; }
  void initiate( bool value ) { m_initiate = value; }

  int logonTimeout() const { return m_logonTimeout; }
  void logonTimeout( int value ) { m_logonTimeout = value; }

  int logoutTimeout() const { return m_logoutTimeout; }
  void logoutTimeout( int value ) { m_logoutTimeout = value; }

  int testRequest() const { return m_testRequest; }
  void testRequest( int value ) { m_testRequest = value; }

  bool resendRequested() const
  { return !(m_resendRange.first == 0 && m_resendRange.second == 0); }

  typedef std::pair<int, int> ResendRange;

  ResendRange resendRange () const { return m_resendRange; }
  void resendRange (int begin, int end)
  { m_resendRange = std::make_pair( begin, end ); }

  MessageStore* store() { return m_pStore; }
  void store( MessageStore* pValue ) { m_pStore = pValue; }
  Log* log() { return m_pLog ? m_pLog : &m_nullLog; }
  void log( Log* pValue ) { m_pLog = pValue; }

  void heartBtInt( const HeartBtInt& value )
  { m_heartBtInt = value; }
  HeartBtInt& heartBtInt()
  { return m_heartBtInt; }
  const HeartBtInt& heartBtInt() const
  { return m_heartBtInt; }

  void lastSentTime( const UtcTimeStamp& value )
  { m_lastSentTime = value; }
  UtcTimeStamp& lastSentTime()
  { return m_lastSentTime; }
  const UtcTimeStamp& lastSentTime() const
  { return m_lastSentTime; }

  void lastReceivedTime( const UtcTimeStamp& value )
  { m_lastReceivedTime = value; }
  UtcTimeStamp& lastReceivedTime()
  { return m_lastReceivedTime; }
  const UtcTimeStamp& lastReceivedTime() const
  { return m_lastReceivedTime; }

  bool shouldSendLogon() const { return initiate() && !sentLogon(); }
  bool alreadySentLogon() const { return initiate() && sentLogon(); }
  bool logonTimedOut() const
  {
    UtcTimeStamp now;
    return now - lastReceivedTime() >= logonTimeout();
  }
  bool logoutTimedOut() const
  {
    UtcTimeStamp now;
    return sentLogout() && ( ( now - lastSentTime() ) >= logoutTimeout() );
  }
  bool withinHeartBeat() const
  {
    UtcTimeStamp now;
    return ( ( now - lastSentTime() ) < heartBtInt() ) &&
           ( ( now - lastReceivedTime() ) < heartBtInt() );
  }
  bool timedOut() const
  {
    UtcTimeStamp now;
    return ( now - lastReceivedTime() ) >= ( 2.4 * ( double ) heartBtInt() );
  }
  bool needHeartbeat() const
  {
    UtcTimeStamp now;
    return ( ( now - lastSentTime() ) >= heartBtInt() ) && !testRequest();
  }
  bool needTestRequest() const
  {
    UtcTimeStamp now;
    return ( now - lastReceivedTime() ) >=
           ( ( 1.2 * ( ( double ) testRequest() + 1 ) ) * ( double ) heartBtInt() );
  }

  std::string logoutReason() const 
  { Locker l( m_mutex ); return m_logoutReason; }
  void logoutReason( const std::string& value ) 
  { Locker l( m_mutex ); m_logoutReason = value; }

  void queue( int msgSeqNum, const Message& message )
  { Locker l( m_mutex ); m_queue[ msgSeqNum ] = message; }
  bool retrieve( int msgSeqNum, Message& message )
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

  bool set( int s, const std::string& m )
  { Locker l( m_mutex ); return m_pStore->set( s, m ); }
  void get( int b, int e, std::vector < std::string > &m ) const
  { Locker l( m_mutex ); m_pStore->get( b, e, m ); }
  int getNextSenderMsgSeqNum() const
  { Locker l( m_mutex ); return m_pStore->getNextSenderMsgSeqNum(); }
  int getNextTargetMsgSeqNum() const
  { Locker l( m_mutex ); return m_pStore->getNextTargetMsgSeqNum(); }
  void setNextSenderMsgSeqNum( int n )
  { Locker l( m_mutex ); m_pStore->setNextSenderMsgSeqNum( n ); }
  void setNextTargetMsgSeqNum( int n )
  { Locker l( m_mutex ); m_pStore->setNextTargetMsgSeqNum( n ); }
  void incrNextSenderMsgSeqNum()
  { Locker l( m_mutex ); m_pStore->incrNextSenderMsgSeqNum(); }
  void incrNextTargetMsgSeqNum()
  { Locker l( m_mutex ); m_pStore->incrNextTargetMsgSeqNum(); }
  UtcTimeStamp getCreationTime() const
  { Locker l( m_mutex ); return m_pStore->getCreationTime(); }
  void reset()
  { Locker l( m_mutex ); m_pStore->reset(); }
  void refresh()
  { Locker l( m_mutex ); m_pStore->refresh(); }

  void clear()
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->clear(); }
  void backup()
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->backup(); }
  void onIncoming( const std::string& string )
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onIncoming( string ); }
  void onOutgoing( const std::string& string )
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onOutgoing( string ); }
  void onEvent( const std::string& string )
  { if ( !m_pLog ) return ; Locker l( m_mutex ); m_pLog->onEvent( string ); }

private:
  bool m_enabled;
  bool m_receivedLogon;
  bool m_sentLogout;
  bool m_sentLogon;
  bool m_sentReset;
  bool m_receivedReset;
  bool m_initiate;
  int m_logonTimeout;
  int m_logoutTimeout;
  int m_testRequest;
  ResendRange m_resendRange;
  HeartBtInt m_heartBtInt;
  UtcTimeStamp m_lastSentTime;
  UtcTimeStamp m_lastReceivedTime;
  std::string m_logoutReason;
  Messages m_queue;
  MessageStore* m_pStore;
  Log* m_pLog;
  NullLog m_nullLog;
  mutable Mutex m_mutex;
};
}

#endif //FIX_SESSIONSTATE_H
