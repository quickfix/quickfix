/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef FIX_THREADEDSOCKETINITIATOR_H
#define FIX_THREADEDSOCKETINITIATOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Initiator.h"
#include "ThreadedSocketConnection.h"
#include <map>

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/// Threaded Socket implementation of Initiator.
class ThreadedSocketInitiator : public Initiator
{
public:
  ThreadedSocketInitiator( Application&, MessageStoreFactory&,
                           const SessionSettings& ) throw( ConfigError );
  ThreadedSocketInitiator( Application&, MessageStoreFactory&,
                           const SessionSettings&,
                           LogFactory& ) throw( ConfigError );

  virtual ~ThreadedSocketInitiator();

private:
  typedef std::map < int, int > SocketToThread;
  typedef std::map < SessionID, int > SessionToHostNum;

  void onConfigure( const SessionSettings& ) throw ( ConfigError );
  void onInitialize( const SessionSettings& ) throw ( RuntimeError );

  void onStart();
  bool onPoll();
  void onStop();

  bool doConnect( const SessionID& s, const Dictionary& d );

  void addThread( int s, int t );
  void removeThread( int s );
  static THREAD_PROC socketThread( void* p );

  void getHost( const SessionID&, const Dictionary&, std::string&, short& );

  SessionSettings m_settings;
  SessionToHostNum m_sessionToHostNum;
  int m_reconnectInterval;
  bool m_stop;
  SocketToThread m_threads;
  Mutex m_mutex;

  struct ThreadStruct
  {
    ThreadStruct( ThreadedSocketInitiator* i, const SessionID& s, const Dictionary& d );
    ThreadedSocketInitiator* pInitiator;
    SessionID sessionID;
    Dictionary dictionary;
  };
};
/*! @} */
}

#endif //FIX_THREADEDSOCKETINITIATOR_H
