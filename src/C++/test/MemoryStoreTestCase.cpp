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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "MemoryStoreTestCase.h"
#include "Messages.h"

namespace FIX
{
using namespace FIX42;
void MemoryStoreTestCase::setGet::onRun( MemoryStore& object )
{
  Logon logon;
  logon.getHeader().setField( MsgSeqNum( 1 ) );
  object.setSender( logon );

  Heartbeat heartbeat;
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );
  object.setSender( heartbeat );

  Message getLogon;
  assert( object.getSender( MsgSeqNum( 1 ), getLogon ) );
  Message getHeartbeat;
  assert( object.getSender( MsgSeqNum( 2 ), getHeartbeat ) );

  assert( getLogon.getString() == logon.getString() );
  assert( getHeartbeat.getString() == heartbeat.getString() );
}

void MemoryStoreTestCase::getRange::onRun( MemoryStore& object )
{
  Logon logon;
  logon.getHeader().setField( MsgSeqNum( 1 ) );
  object.setSender( logon );

  Heartbeat heartbeat;
  heartbeat.getHeader().setField( MsgSeqNum( 2 ) );
  object.setSender( heartbeat );

  NewOrderSingle newOrderSingle;
  newOrderSingle.getHeader().setField( MsgSeqNum( 3 ) );
  object.setSender( newOrderSingle );

  std::vector < Message > messages;
  assert( object.getSender( MsgSeqNum( 1 ), MsgSeqNum( 3 ), messages ) );
  assert( messages.size() == 3 );
  assert( messages[ 0 ].getString() == logon.getString() );
  assert( messages[ 1 ].getString() == heartbeat.getString() );
  assert( messages[ 2 ].getString() == newOrderSingle.getString() );
}
}
