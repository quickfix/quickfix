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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MessageStoreTestCase.h"
#include "fix42/Logon.h"
#include "fix42/Heartbeat.h"
#include "fix42/TestRequest.h"
#include "fix42/NewOrderSingle.h"

namespace FIX
{
using namespace FIX42;

void MessageStoreTestCase::setGet::onRun( MessageStore& object )
{
  Logon logon;
  logon.getHeader().setField( MsgSeqNum( 1 ) );
  object.set( 1, logon.toString() );

  Heartbeat heartbeat;
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );
  object.set( 2, heartbeat.toString() );

  NewOrderSingle newOrderSingle;
  newOrderSingle.getHeader().setField( MsgSeqNum( 3 ) );
  object.set( 3, newOrderSingle.toString() );

  std::vector < std::string > messages;
  object.get( 1, 3, messages );
  assert( messages.size() == 3 );
  assert( messages[ 0 ] == logon.toString() );
  assert( messages[ 1 ] == heartbeat.toString() );
  assert( messages[ 2 ] == newOrderSingle.toString() );

  object.get( 4, 6, messages );
  assert( messages.size() == 0 );

  object.get( 2, 6, messages );
  assert( messages.size() == 2 );
  assert( messages[ 0 ] == heartbeat.toString() );
  assert( messages[ 1 ] == newOrderSingle.toString() );
}

void MessageStoreTestCase::other::onRun( MessageStore& object )
{
  object.setNextSenderMsgSeqNum( 10 );
  assert( object.getNextSenderMsgSeqNum() == 10 );
  object.setNextTargetMsgSeqNum( 20 );
  assert( object.getNextTargetMsgSeqNum() == 20 );
  object.incrNextSenderMsgSeqNum();
  assert( object.getNextSenderMsgSeqNum() == 11 );
  object.incrNextTargetMsgSeqNum();
  assert( object.getNextTargetMsgSeqNum() == 21 );

  object.setNextSenderMsgSeqNum( 5 );
  object.setNextTargetMsgSeqNum( 6 );
}

void MessageStoreTestCase::reload::onRun( MessageStore& object )
{
  // use same session from previous test
  assert( object.getNextSenderMsgSeqNum() == 5 );
  assert( object.getNextTargetMsgSeqNum() == 6 );
}

void MessageStoreTestCase::refresh::onRun( MessageStore& object )
{
  // use same session from previous test
  object.refresh();
  assert( object.getNextSenderMsgSeqNum() == 5 );
  assert( object.getNextTargetMsgSeqNum() == 6 );
}
}
