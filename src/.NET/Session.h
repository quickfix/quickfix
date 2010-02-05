/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#pragma once

using namespace System;
using namespace System::IO;

#include "quickfix_net.h"

#include "Message.h"
#include "SessionID.h"
#include "DataDictionaryProvider.h"
#include "CPPLog.h"
#include "CPPMessageStore.h"
#include "quickfix/SessionID.h"
#include "quickfix/Session.h"

namespace QuickFix
{
public __gc class Session
{
public:
  void logon();
  void logout();
  void logout( String* reason );
  bool isEnabled();

  bool sentLogon();
  bool sentLogout();
  bool receivedLogon();
  bool isLoggedOn();
  void reset();
  void setNextSenderMsgSeqNum( int num );
  void setNextTargetMsgSeqNum( int num );

  SessionID* getSessionID()
  { return new SessionID(unmanaged().getSessionID()); }
  DataDictionaryProvider* getDataDictionaryProvider()
  { return new DataDictionaryProvider(unmanaged().getDataDictionaryProvider()); }

  static bool sendToTarget( Message* message );
  static bool sendToTarget( Message* message, String* qualifier );
  static bool sendToTarget( Message* message, SessionID* sessionID );
  static bool sendToTarget
  ( Message* message, String* senderCompID, String* targetCompID );
  static bool sendToTarget
  ( Message* message, String* senderCompID, String* targetCompID, String* qualifier );

  static bool doesSessionExist( SessionID* sessionID );
  static Session* lookupSession( SessionID* sessionID );

  static int numSessions();

  bool isSessionTime();
  bool isLogonTime();
  bool isInitiator();
  bool isAcceptor();

  String* getSenderDefaultApplVerID();
  String* getTargetDefaultApplVerID();

  int getExpectedSenderNum();
  int getExpectedTargetNum();

  Log* getLog()
  { return new CPPLog(unmanaged().getLog()); }
  MessageStore* getStore()
  { return new CPPMessageStore((FIX::MessageStore*)unmanaged().getStore()); }

private:
  Session(FIX::Session* unmanaged) : m_pUnmanaged(unmanaged) {}

  FIX::Session& unmanaged()
  { return * m_pUnmanaged; }
  FIX::Session* m_pUnmanaged;
};
}
