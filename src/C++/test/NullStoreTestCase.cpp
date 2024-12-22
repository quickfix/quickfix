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
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <NullStore.h>
#include <fix42/ExecutionReport.h>
#include <fix42/Heartbeat.h>
#include <fix42/Logon.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/TestRequest.h>

#include "catch_amalgamated.hpp"

using namespace FIX;
using namespace FIX42;

static NullStore shared(UtcTimeStamp::now());

TEST_CASE("NullStoreTests") {
  SECTION("setGet") {
    NullStore object(UtcTimeStamp::now());

    Logon logon;
    logon.getHeader().setField(MsgSeqNum(1));
    object.set(1, logon.toString());

    Heartbeat heartbeat;
    heartbeat.getHeader().setField(MsgSeqNum(2));
    object.set(2, heartbeat.toString());

    NewOrderSingle newOrderSingle;
    newOrderSingle.getHeader().setField(MsgSeqNum(3));
    object.set(3, newOrderSingle.toString());

    std::vector<std::string> messages;
    object.get(1, 3, messages);
    CHECK(0U == messages.size());

    object.get(4, 6, messages);
    CHECK(0U == messages.size());

    object.get(2, 6, messages);
    CHECK(0U == messages.size());
  }

  SECTION("setGetWithQuote") {
    NullStore object(UtcTimeStamp::now());

    ExecutionReport singleQuote;
    singleQuote.setField(Text("Some Text"));
    object.set(1, singleQuote.toString());

    ExecutionReport doubleQuote;
    doubleQuote.setField(Text("\"Some Text\""));
    object.set(2, doubleQuote.toString());

    ExecutionReport bothQuote;
    bothQuote.setField(Text("'\"Some Text\"'"));
    object.set(3, bothQuote.toString());

    ExecutionReport escape;
    escape.setField(Text("\\Some Text\\"));
    object.set(4, escape.toString());

    std::vector<std::string> messages;
    object.get(1, 4, messages);
    CHECK(0U == messages.size());
  }

  SECTION("other") {
    shared.setNextSenderMsgSeqNum(10);
    CHECK(10 == shared.getNextSenderMsgSeqNum());
    shared.setNextTargetMsgSeqNum(20);
    CHECK(20 == shared.getNextTargetMsgSeqNum());
    shared.incrNextSenderMsgSeqNum();
    CHECK(11 == shared.getNextSenderMsgSeqNum());
    shared.incrNextTargetMsgSeqNum();
    CHECK(21 == shared.getNextTargetMsgSeqNum());

    shared.setNextSenderMsgSeqNum(5);
    shared.setNextTargetMsgSeqNum(6);
  }

  SECTION("reload") {
    // use same session from previous test
    CHECK(5 == shared.getNextSenderMsgSeqNum());
    CHECK(6 == shared.getNextTargetMsgSeqNum());
  }

  SECTION("refresh") {
    // use same session from previous test
    shared.refresh();
    CHECK(5 == shared.getNextSenderMsgSeqNum());
    CHECK(6 == shared.getNextTargetMsgSeqNum());
  }
}
