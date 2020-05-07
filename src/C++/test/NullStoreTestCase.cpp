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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <gtest/gtest.h>
#include <NullStore.h>
#include <fix42/Logon.h>
#include <fix42/Heartbeat.h>
#include <fix42/TestRequest.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/ExecutionReport.h>

using namespace FIX;
using namespace FIX42;

struct sharedObjectFixture : public ::testing::Test
{
  static NullStore object;
};

NullStore sharedObjectFixture::object;

TEST(NullStoreTests, setGet)
{
  NullStore object;

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
  ASSERT_EQ( 0U, messages.size() );

  object.get( 4, 6, messages );
  ASSERT_EQ( 0U, messages.size() );

  object.get( 2, 6, messages );
  ASSERT_EQ( 0U, messages.size() );
}

TEST(NullStoreTests,  setGetWithQuote)
{
  NullStore object;

  ExecutionReport singleQuote;
  singleQuote.setField( Text("Some Text") );
  object.set( 1, singleQuote.toString() );

  ExecutionReport doubleQuote;
  doubleQuote.setField( Text("\"Some Text\"") );
  object.set( 2, doubleQuote.toString() );

  ExecutionReport bothQuote;
  bothQuote.setField( Text("'\"Some Text\"'") );
  object.set( 3, bothQuote.toString() );

  ExecutionReport escape;
  escape.setField( Text("\\Some Text\\") );
  object.set( 4, escape.toString() );

  std::vector < std::string > messages;
  object.get( 1, 4, messages );
  ASSERT_EQ( 0U, messages.size() );
}

TEST_F( sharedObjectFixture, other )
{
  object.setNextSenderMsgSeqNum( 10 );
  ASSERT_EQ( 10, object.getNextSenderMsgSeqNum() );
  object.setNextTargetMsgSeqNum( 20 );
  ASSERT_EQ( 20, object.getNextTargetMsgSeqNum() );
  object.incrNextSenderMsgSeqNum();
  ASSERT_EQ( 11, object.getNextSenderMsgSeqNum() );
  object.incrNextTargetMsgSeqNum();
  ASSERT_EQ( 21, object.getNextTargetMsgSeqNum() );

  object.setNextSenderMsgSeqNum( 5 );
  object.setNextTargetMsgSeqNum( 6 );
}

TEST_F( sharedObjectFixture, reload )
{
  // use same session from previous test
  ASSERT_EQ( 5, object.getNextSenderMsgSeqNum() );
  ASSERT_EQ( 6, object.getNextTargetMsgSeqNum() );
}

TEST_F( sharedObjectFixture, refresh )
{
  // use same session from previous test
  object.refresh();
  ASSERT_EQ( 5, object.getNextSenderMsgSeqNum() );
  ASSERT_EQ( 6, object.getNextTargetMsgSeqNum() );
}
