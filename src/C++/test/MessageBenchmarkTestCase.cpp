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

#include "TestHelper.h"
#include <Field.h>
#include <FieldMap.h>
#include <Message.h>
#include <Values.h>
#include <fix42/ExecutionReport.h>
#include <fix42/NewOrderSingle.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {

// Create a typical NewOrderSingle message for benchmarking
FIX42::NewOrderSingle createNewOrderSingle() {
  FIX42::NewOrderSingle message(
      FIX::ClOrdID("CLIENT123"),
      FIX::HandlInst('1'),
      FIX::Symbol("AAPL"),
      FIX::Side(FIX::Side_BUY),
      FIX::TransactTime(),
      FIX::OrdType(FIX::OrdType_LIMIT));

  message.set(FIX::OrderQty(100));
  message.set(FIX::Price(150.50));
  message.set(FIX::Account("ACCT001"));
  message.setField(FIX::SecurityID("037833100"));
  message.setField(FIX::SecurityIDSource(FIX::SecurityIDSource_CUSIP));
  message.set(FIX::TimeInForce(FIX::TimeInForce_DAY));
  message.set(FIX::Text("Test order"));

  message.getHeader().setField(FIX::SenderCompID("SENDER"));
  message.getHeader().setField(FIX::TargetCompID("TARGET"));
  message.getHeader().setField(FIX::MsgSeqNum(12345));
  message.getHeader().setField(FIX::SendingTime());

  return message;
}

// Create a larger ExecutionReport message with more fields
FIX42::ExecutionReport createExecutionReport() {
  FIX42::ExecutionReport message(
      FIX::OrderID("ORDER123456"),
      FIX::ExecID("EXEC789012"),
      FIX::ExecTransType(FIX::ExecTransType_NEW),
      FIX::ExecType(FIX::ExecType_NEW),
      FIX::OrdStatus(FIX::OrdStatus_NEW),
      FIX::Symbol("AAPL"),
      FIX::Side(FIX::Side_BUY),
      FIX::LeavesQty(100),
      FIX::CumQty(0),
      FIX::AvgPx(0));

  message.set(FIX::ClOrdID("CLIENT123"));
  message.set(FIX::Account("ACCT001"));
  message.set(FIX::OrderQty(100));
  message.set(FIX::Price(150.50));
  message.setField(FIX::SecurityID("037833100"));
  message.setField(FIX::SecurityIDSource(FIX::SecurityIDSource_CUSIP));
  message.set(FIX::TimeInForce(FIX::TimeInForce_DAY));
  message.set(FIX::TransactTime());
  message.set(FIX::Text("Execution report"));
  message.set(FIX::LastShares(0));
  message.set(FIX::LastPx(0));

  message.getHeader().setField(FIX::SenderCompID("SENDER"));
  message.getHeader().setField(FIX::TargetCompID("TARGET"));
  message.getHeader().setField(FIX::MsgSeqNum(12345));
  message.getHeader().setField(FIX::SendingTime());

  return message;
}

// Create a message with many fields for stress testing
FIX::Message createLargeMessage() {
  FIX::Message message;

  message.getHeader().setField(FIX::BeginString("FIX.4.2"));
  message.getHeader().setField(FIX::MsgType("D"));
  message.getHeader().setField(FIX::SenderCompID("SENDER"));
  message.getHeader().setField(FIX::TargetCompID("TARGET"));
  message.getHeader().setField(FIX::MsgSeqNum(12345));
  message.getHeader().setField(FIX::SendingTime());

  // Add many body fields
  for (int i = 100; i < 150; ++i) {
    message.setField(i, "TestValue" + std::to_string(i));
  }

  return message;
}

} // namespace

TEST_CASE("MessageBenchmarks", "[!benchmark]") {

  SECTION("toString - NewOrderSingle") {
    FIX42::NewOrderSingle message = createNewOrderSingle();

    BENCHMARK("NewOrderSingle::toString()") {
      return message.toString();
    };
  }

  SECTION("toString with reuse - NewOrderSingle") {
    FIX42::NewOrderSingle message = createNewOrderSingle();
    std::string result;

    BENCHMARK("NewOrderSingle::toString(str)") {
      return message.toString(result);
    };
  }

  SECTION("toString - ExecutionReport") {
    FIX42::ExecutionReport message = createExecutionReport();

    BENCHMARK("ExecutionReport::toString()") {
      return message.toString();
    };
  }

  SECTION("toString with reuse - ExecutionReport") {
    FIX42::ExecutionReport message = createExecutionReport();
    std::string result;

    BENCHMARK("ExecutionReport::toString(str)") {
      return message.toString(result);
    };
  }

  SECTION("toString - Large Message") {
    FIX::Message message = createLargeMessage();

    BENCHMARK("LargeMessage::toString()") {
      return message.toString();
    };
  }

  SECTION("toString with reuse - Large Message") {
    FIX::Message message = createLargeMessage();
    std::string result;

    BENCHMARK("LargeMessage::toString(str)") {
      return message.toString(result);
    };
  }

  SECTION("FieldBase::getFixString") {
    FIX::StringField field(55, "AAPL");

    BENCHMARK("StringField::getFixString()") {
      return field.getFixString();
    };
  }

  SECTION("IntField creation and serialization") {
    BENCHMARK("IntField creation and getFixString") {
      FIX::IntField field(38, 12345);
      return field.getFixString();
    };
  }

  SECTION("Message construction and serialization") {
    BENCHMARK("Full message build and serialize") {
      FIX42::NewOrderSingle message = createNewOrderSingle();
      return message.toString();
    };
  }

  SECTION("calculateString only") {
    FIX42::NewOrderSingle message = createNewOrderSingle();
    // Force header/body length calculation first
    std::string warmup = message.toString();

    std::string result;
    result.reserve(256);

    BENCHMARK("FieldMap::calculateString") {
      result.clear();
      message.getHeader().calculateString(result);
      return result;
    };
  }
}
