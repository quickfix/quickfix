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
#include <Acceptor.h>
#include <DataDictionary.h>
#include <DataDictionaryProvider.h>
#include <FileLog.h>
#include <Message.h>
#include <Responder.h>
#include <Session.h>
#include <SessionID.h>
#include <TimeRange.h>
#include <Values.h>
#include <fix40/ExecutionReport.h>
#include <fix40/Logon.h>
#include <fix40/Logout.h>
#include <fix42/BusinessMessageReject.h>
#include <fix42/ExecutionReport.h>
#include <fix42/Heartbeat.h>
#include <fix42/Logon.h>
#include <fix42/Logout.h>
#include <fix42/NewOrderSingle.h>
#include <fix42/Reject.h>
#include <fix42/ResendRequest.h>
#include <fix42/SequenceReset.h>
#include <fix42/TestRequest.h>
#include <fix50/ExecutionReport.h>
#include <fix50/NewOrderSingle.h>
#include <fixt11/Heartbeat.h>
#include <fixt11/Logon.h>
#include <fixt11/Logout.h>
#include <fixt11/ResendRequest.h>
#include <fixt11/SequenceReset.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
void fillHeader(FIX::Header &header, const char *sender, const char *target, int seq) {
  header.setField(SenderCompID(sender));
  header.setField(TargetCompID(target));
  header.setField(SendingTime(UtcTimeStamp::now()));
  header.setField(MsgSeqNum(seq));
}

FIX42::Logon createLogon(const char *sender, const char *target, int seq) {
  FIX42::Logon logon;
  logon.set(EncryptMethod(0));
  logon.set(HeartBtInt(30));
  fillHeader(logon.getHeader(), sender, target, seq);
  logon.getHeader().setField(BodyLength(logon.bodyLength()));
  logon.getTrailer().setField(CheckSum(logon.checkSum()));
  return logon;
}

FIX40::Logon createFIX40Logon(const char *sender, const char *target, int seq) {
  FIX40::Logon logon;
  logon.set(EncryptMethod(0));
  logon.set(HeartBtInt(30));
  fillHeader(logon.getHeader(), sender, target, seq);
  logon.getHeader().setField(BodyLength(logon.bodyLength()));
  logon.getTrailer().setField(CheckSum(logon.checkSum()));
  return logon;
}

FIXT11::Logon createT11Logon(const char *sender, const char *target, int seq) {
  FIXT11::Logon logon;
  logon.set(EncryptMethod(0));
  logon.set(HeartBtInt(30));
  logon.set(DefaultApplVerID("7"));
  fillHeader(logon.getHeader(), sender, target, seq);
  logon.getHeader().setField(BodyLength(logon.bodyLength()));
  logon.getTrailer().setField(CheckSum(logon.checkSum()));
  return logon;
}

FIX42::Logout createLogout(const char *sender, const char *target, int seq) {
  FIX42::Logout logout;
  fillHeader(logout.getHeader(), sender, target, seq);
  logout.getHeader().setField(BodyLength(logout.bodyLength()));
  logout.getTrailer().setField(CheckSum(logout.checkSum()));
  return logout;
}

FIX42::Logout createT11Logout(const char *sender, const char *target, int seq) {
  FIXT11::Logout logout;
  fillHeader(logout.getHeader(), sender, target, seq);
  logout.getHeader().setField(BodyLength(logout.bodyLength()));
  logout.getTrailer().setField(CheckSum(logout.checkSum()));
  return logout;
}

FIX42::Heartbeat createHeartbeat(const char *sender, const char *target, int seq) {
  FIX42::Heartbeat heartbeat;
  fillHeader(heartbeat.getHeader(), sender, target, seq);
  heartbeat.getHeader().setField(BodyLength(heartbeat.bodyLength()));
  heartbeat.getTrailer().setField(CheckSum(heartbeat.checkSum()));
  return heartbeat;
}

FIXT11::Heartbeat createT11Heartbeat(const char *sender, const char *target, int seq) {
  FIXT11::Heartbeat heartbeat;
  fillHeader(heartbeat.getHeader(), sender, target, seq);
  heartbeat.getHeader().setField(BodyLength(heartbeat.bodyLength()));
  heartbeat.getTrailer().setField(CheckSum(heartbeat.checkSum()));
  return heartbeat;
}

FIX42::TestRequest createTestRequest(const char *sender, const char *target, int seq, const char *id) {
  FIX42::TestRequest testRequest;
  testRequest.set(TestReqID(id));
  fillHeader(testRequest.getHeader(), sender, target, seq);
  testRequest.getHeader().setField(BodyLength(testRequest.bodyLength()));
  testRequest.getTrailer().setField(CheckSum(testRequest.checkSum()));
  return testRequest;
}

FIX42::SequenceReset createSequenceReset(const char *sender, const char *target, int seq, int newSeq) {
  FIX42::SequenceReset sequenceReset;
  sequenceReset.set(NewSeqNo(newSeq));
  fillHeader(sequenceReset.getHeader(), sender, target, seq);
  sequenceReset.getHeader().setField(BodyLength(sequenceReset.bodyLength()));
  sequenceReset.getTrailer().setField(CheckSum(sequenceReset.checkSum()));
  return sequenceReset;
}

FIXT11::SequenceReset createT11SequenceReset(const char *sender, const char *target, int seq, int newSeq) {
  FIXT11::SequenceReset sequenceReset;
  sequenceReset.set(NewSeqNo(newSeq));
  fillHeader(sequenceReset.getHeader(), sender, target, seq);
  sequenceReset.getHeader().setField(BodyLength(sequenceReset.bodyLength()));
  sequenceReset.getTrailer().setField(CheckSum(sequenceReset.checkSum()));
  return sequenceReset;
}

FIX42::ResendRequest createResendRequest(const char *sender, const char *target, int seq, int begin, int end) {
  FIX42::ResendRequest resendRequest;
  resendRequest.set(BeginSeqNo(begin));
  resendRequest.set(EndSeqNo(end));
  fillHeader(resendRequest.getHeader(), sender, target, seq);
  resendRequest.getHeader().setField(BodyLength(resendRequest.bodyLength()));
  resendRequest.getTrailer().setField(CheckSum(resendRequest.checkSum()));
  return resendRequest;
}

FIXT11::ResendRequest createT11ResendRequest(const char *sender, const char *target, int seq, int begin, int end) {
  FIXT11::ResendRequest resendRequest;
  resendRequest.set(BeginSeqNo(begin));
  resendRequest.set(EndSeqNo(end));
  fillHeader(resendRequest.getHeader(), sender, target, seq);
  resendRequest.getHeader().setField(BodyLength(resendRequest.bodyLength()));
  resendRequest.getTrailer().setField(CheckSum(resendRequest.checkSum()));
  return resendRequest;
}

FIX42::Reject createReject(const char *sender, const char *target, int seq, int refSeq) {
  FIX42::Reject reject;
  reject.set(RefSeqNum(refSeq));
  fillHeader(reject.getHeader(), sender, target, seq);
  reject.getHeader().setField(BodyLength(reject.bodyLength()));
  reject.getTrailer().setField(CheckSum(reject.checkSum()));
  return reject;
}

FIX42::NewOrderSingle createNewOrderSingle(const char *sender, const char *target, int seq) {
  FIX42::NewOrderSingle newOrderSingle(
      ClOrdID("ID"),
      HandlInst('1'),
      Symbol("SYMBOL"),
      Side(Side_BUY),
      TransactTime::now(),
      OrdType(OrdType_MARKET));
  fillHeader(newOrderSingle.getHeader(), sender, target, seq);
  newOrderSingle.getHeader().setField(BodyLength(newOrderSingle.bodyLength()));
  newOrderSingle.getTrailer().setField(CheckSum(newOrderSingle.checkSum()));
  return newOrderSingle;
}

FIX50::NewOrderSingle createT1150NewOrderSingle(const char *sender, const char *target, int seq) {
  FIX50::NewOrderSingle newOrderSingle(ClOrdID("ID"), Side(Side_BUY), TransactTime(), OrdType(OrdType_MARKET));
  fillHeader(newOrderSingle.getHeader(), sender, target, seq);
  newOrderSingle.getHeader().setField(BodyLength(newOrderSingle.bodyLength()));
  newOrderSingle.getTrailer().setField(CheckSum(newOrderSingle.checkSum()));
  return newOrderSingle;
}

FIX42::ExecutionReport createExecutionReport(const char *sender, const char *target, int seq) {
  FIX42::ExecutionReport executionReport(
      OrderID("ID"),
      ExecID("ID"),
      ExecTransType('0'),
      ExecType('0'),
      OrdStatus('0'),
      Symbol("SYMBOL"),
      Side(Side_BUY),
      LeavesQty(100),
      CumQty(0),
      AvgPx(0));
  fillHeader(executionReport.getHeader(), sender, target, seq);
  FIX42::ExecutionReport::NoContraBrokers noContraBrokers;
  noContraBrokers.set(ContraBroker("BROKER"));
  noContraBrokers.set(ContraTrader("TRADER"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  noContraBrokers.set(ContraBroker("BROKER2"));
  noContraBrokers.set(ContraTrader("TRADER2"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  executionReport.getHeader().setField(BodyLength(executionReport.bodyLength()));
  executionReport.getTrailer().setField(CheckSum(executionReport.checkSum()));
  return executionReport;
}

FIX40::ExecutionReport createFIX40ExecutionReport(const char *sender, const char *target, int seq) {
  FIX40::ExecutionReport executionReport(
      OrderID("ID"),
      ExecID("123"),
      ExecTransType('0'),
      OrdStatus('0'),
      Symbol("SYMBOL"),
      Side(Side_BUY),
      OrderQty(100),
      LastShares(0),
      LastPx(0),
      CumQty(0),
      AvgPx(0));
  fillHeader(executionReport.getHeader(), sender, target, seq);
  executionReport.getHeader().set(BeginString("FIX.4.0"));
  executionReport.getHeader().setField(BodyLength(executionReport.bodyLength()));
  executionReport.getTrailer().setField(CheckSum(executionReport.checkSum()));
  return executionReport;
}

FIX42::ExecutionReport createT1142ExecutionReport(const char *sender, const char *target, int seq) {
  FIX42::ExecutionReport executionReport(
      OrderID("ID"),
      ExecID("ID"),
      ExecTransType('0'),
      ExecType('0'),
      OrdStatus('0'),
      Symbol("SYMBOL"),
      Side(Side_BUY),
      LeavesQty(100),
      CumQty(0),
      AvgPx(0));
  fillHeader(executionReport.getHeader(), sender, target, seq);
  executionReport.getHeader().set(BeginString("FIXT.1.1"));
  executionReport.getHeader().setField(ApplVerID(FIX::Message::toApplVerID(BeginString("FIX.4.2"))));
  FIX42::ExecutionReport::NoContraBrokers noContraBrokers;
  noContraBrokers.set(ContraBroker("BROKER"));
  noContraBrokers.set(ContraTrader("TRADER"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  noContraBrokers.set(ContraBroker("BROKER2"));
  noContraBrokers.set(ContraTrader("TRADER2"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  executionReport.getHeader().setField(BodyLength(executionReport.bodyLength()));
  executionReport.getTrailer().setField(CheckSum(executionReport.checkSum()));
  return executionReport;
}

FIX42::ExecutionReport createT1150ExecutionReport(const char *sender, const char *target, int seq) {
  FIX50::ExecutionReport executionReport(
      OrderID("ID"),
      ExecID("ID"),
      ExecType('0'),
      OrdStatus('0'),
      Side(Side_BUY),
      LeavesQty(100),
      CumQty(0));
  fillHeader(executionReport.getHeader(), sender, target, seq);
  FIX42::ExecutionReport::NoContraBrokers noContraBrokers;
  noContraBrokers.set(ContraBroker("BROKER"));
  noContraBrokers.set(ContraTrader("TRADER"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  noContraBrokers.set(ContraBroker("BROKER2"));
  noContraBrokers.set(ContraTrader("TRADER2"));
  noContraBrokers.set(ContraTradeQty(100));
  noContraBrokers.set(ContraTradeTime::now());
  executionReport.addGroup(noContraBrokers);
  executionReport.getHeader().setField(BodyLength(executionReport.bodyLength()));
  executionReport.getTrailer().setField(CheckSum(executionReport.checkSum()));
  return executionReport;
}

struct TestCallback : public Responder, public NullApplication {
protected:
  UtcTimeStamp now;
  UtcTimeStamp startTimeStamp;
  UtcTimeStamp endTimeStamp;
  UtcTimeOnly startTime;
  UtcTimeOnly endTime;
  FIX::Message lastResent;

public:
  TestCallback()
      : now(UtcTimeStamp::now()),
        startTimeStamp(UtcTimeStamp::now()),
        endTimeStamp(UtcTimeStamp::now()),
        endTime(startTime) {}

  bool send(const std::string &) { return true; }

  virtual void toAdmin(FIX::Message &message, const SessionID &) {
    MsgType msgType;
    message.getHeader().getField(msgType);
    switch (msgType.getValue()[0]) {
    case 'A':
      toLogon++;
      sentLogon = message;
      break;
    case '2':
      toResendRequest++;
      sentResendRequest = message;
      break;
    case '0':
      toHeartbeat++;
      sentHeartbeat = message;
      break;
    case '5':
      toLogout++;
      break;
    case '3':
      toReject++;
      break;
    case '4':
      toSequenceReset++;
      break;
    }
  }

  void fromAdmin(const FIX::Message &message, const SessionID &)
      EXCEPT(FieldNotFound, IncorrectDataFormat, IncorrectTagValue, RejectLogon) {
    MsgType msgType;
    message.getHeader().getField(msgType);
    switch (msgType.getValue()[0]) {
    case '0':
      fromHeartbeat++;
      break;
    case '1':
      fromTestRequest++;
      break;
    case '5':
      fromLogout++;
      break;
    case '3':
      fromReject++;
      break;
    case '4':
      fromSequenceReset++;
      break;
    }
  }

  void fromApp(const FIX::Message &message, const SessionID &)
      EXCEPT(FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType) {
    MsgType msgType;
    message.getHeader().getField(msgType);
    if (msgType == "8") {
      throw UnsupportedMessageType();
    }
  }

  void toApp(FIX::Message &message, const SessionID &) EXCEPT(DoNotSend) {
    if (checkForDoNotSend) {
      FIX::Text text;
      if (message.getFieldIfSet(text) && text == "DoNotSend") {
        throw DoNotSend();
      }
    }

    PossDupFlag possDupFlag(false);
    if (message.getHeader().isSetField(possDupFlag)) {
      message.getHeader().getField(possDupFlag);
    }
    if (possDupFlag) {
      resent++;
      lastResent = message;
    }

    MsgType msgType;
    message.getHeader().getField(msgType);
    switch (msgType.getValue()[0]) {
    case 'j':
      toBusinessMessageReject++;
      break;
    }
  }

  void disconnect() { disconnected++; }

  FIX::Message sentLogon;
  FIX::Message sentResendRequest;
  FIX::Message sentHeartbeat;
  int toLogon = 0;
  int toResendRequest = 0;
  int toHeartbeat = 0;
  int toLogout = 0;
  int toReject = 0;
  int toSequenceReset = 0;
  int toBusinessMessageReject = 0;
  int fromHeartbeat = 0;
  int fromTestRequest = 0;
  int fromLogout = 0;
  int fromReject = 0;
  int fromSequenceReset = 0;
  int resent = 0;
  int disconnected = 0;

  int checkForDoNotSend = false;

  MemoryStoreFactory factory;
};

struct ExceptionDataDictionary : public DataDictionary {
  enum ExceptionType {
    MESSAGE_PARSE_ERROR,
    REQUIRED_TAG_MISSING,
    INCORRECT_TAG_VALUE,
    REJECT_LOGON,
    IO_EXCEPTION
  };

  ExceptionDataDictionary(DataDictionary &dictionary, ExceptionType type)
      : DataDictionary(dictionary),
        exceptionType(type) {};
  ~ExceptionDataDictionary() {};

  virtual void validate(const FIX::Message &) const EXCEPT(FIX::Exception) { throwException(); }
  virtual void validate(const FIX::Message &, bool) const EXCEPT(FIX::Exception) { throwException(); }

  ExceptionType exceptionType;
  bool shouldThrowException = false;

private:
  void throwException() const {
    if (shouldThrowException) {
      switch (exceptionType) {
      case MESSAGE_PARSE_ERROR:
        throw MessageParseError();
      case REQUIRED_TAG_MISSING:
        throw RequiredTagMissing();
      case INCORRECT_TAG_VALUE:
        throw IncorrectTagValue();
      case REJECT_LOGON:
        throw RejectLogon();
      case IO_EXCEPTION:
        throw IOException();
      }
    }
  }
};

struct sessionFixture : public TestCallback {
  sessionFixture() { object = 0; }

  sessionFixture(int heartBtInt) {
    object = 0;
    createSession(heartBtInt);
  }

  ~sessionFixture() {
    if (object) {
      delete object;
    }
  }

  virtual void createSession(int heartBtInt, int startDay = -1, int endDay = -1) {
    if (object) {
      delete object;
    }

    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"));
    TimeRange sessionTime(startTime, endTime, startDay, endDay);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX42"));
    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, heartBtInt, 0);
    object->setResponder(this);
  }

  Session *object;
  MemoryStoreFactory factory;
};

struct sessionT11Fixture : public TestCallback {
  sessionT11Fixture() { object = 0; }

  sessionT11Fixture(int heartBtInt) {
    object = 0;
    createSession(heartBtInt);
  }

  ~sessionT11Fixture() {
    if (object) {
      delete object;
    }
  }

  virtual void createSession(int heartBtInt, int startDay = -1, int endDay = -1) {
    if (object) {
      delete object;
    }

    SessionID sessionID(BeginString("FIXT.1.1"), SenderCompID("TW"), TargetCompID("ISLD"));
    TimeRange sessionTime(startTime, endTime, startDay, endDay);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIXT11"));
    provider.addApplicationDataDictionary(ApplVerID(ApplVerID_FIX50), FIX::TestSettings::pathForSpec("FIX50"));
    provider.addApplicationDataDictionary(ApplVerID(ApplVerID_FIX42), FIX::TestSettings::pathForSpec("FIX42"));
    provider.addApplicationDataDictionary(ApplVerID(ApplVerID_FIX40), FIX::TestSettings::pathForSpec("FIX40"));

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, heartBtInt, 0);
    object->setSenderDefaultApplVerID(FIX::Message::toApplVerID(BeginString("FIX.5.0")));
    object->setResponder(this);
  }

  Session *object;
  MemoryStoreFactory factory;
};

struct sessionFIX40Fixture : public TestCallback {
  sessionFIX40Fixture() { object = 0; }

  sessionFIX40Fixture(int heartBtInt) {
    object = 0;
    createSession(heartBtInt);
  }

  ~sessionFIX40Fixture() {
    if (object) {
      delete object;
    }
  }

  virtual void createSession(int heartBtInt, int startDay = -1, int endDay = -1) {
    if (object) {
      delete object;
    }

    SessionID sessionID(BeginString("FIX.4.0"), SenderCompID("TW"), TargetCompID("ISLD"));
    TimeRange sessionTime(startTime, endTime, startDay, endDay);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX40"));

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, heartBtInt, 0);
    object->setResponder(this);
  }

  Session *object;
  MemoryStoreFactory factory;
};

struct initiatorFIX40Fixture : public sessionFIX40Fixture {
  initiatorFIX40Fixture()
      : sessionFIX40Fixture(1) {}

  void startLoggedOn() {
    now = UtcTimeStamp(8, 8, 8, 13, 5, 2015);
    startTimeStamp = now;
    endTimeStamp = UtcTimeStamp(16, 16, 16, 13, 5, 2200);
    startTime = UtcTimeOnly(startTimeStamp);
    endTime = UtcTimeOnly(endTimeStamp);

    createSession(1, 0, 31);

    FIX::Message sentLogon = createFIX40Logon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createFIX40Logon("ISLD", "TW", 1);
    object->next(receivedLogon, now);
  }
};

struct initiatorFixture : public sessionFixture {
  initiatorFixture()
      : sessionFixture(1) {}

  void startLoggedOn() {
    now = UtcTimeStamp::now();
    startTimeStamp = now;
    endTimeStamp = UtcTimeStamp(16, 16, 16, 13, 5, 2200);
    startTime = UtcTimeOnly(startTimeStamp);
    endTime = UtcTimeOnly(endTimeStamp);

    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);
  }
};

struct acceptorFixture : public sessionFixture {
  acceptorFixture()
      : sessionFixture(0) {}
};

struct initiatorT11Fixture : public sessionT11Fixture {
  initiatorT11Fixture()
      : sessionT11Fixture(1) {}

  void startLoggedOn() {
    now = UtcTimeStamp(8, 8, 8, 13, 5, 2015);
    endTimeStamp = now;
    startTime = UtcTimeOnly(startTimeStamp);
    endTime = UtcTimeOnly(endTimeStamp);
    createSession(1, 0, 31);

    FIX::Message sentLogon = createT11Logon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createT11Logon("ISLD", "TW", 1);
    object->next(receivedLogon, now);
  }
};

struct acceptorT11Fixture : public sessionT11Fixture {
  acceptorT11Fixture()
      : sessionT11Fixture(0) {}
};
} // namespace

TEST_CASE_METHOD(sessionFixture, "SessionTestCase") {
  SECTION("supportsSubMillisecondTimestamps") {
    CHECK(!Session::supportsSubSecondTimestamps(FIX::BeginString_FIX40));
    CHECK(!Session::supportsSubSecondTimestamps(FIX::BeginString_FIX41));
    CHECK(Session::supportsSubSecondTimestamps(FIX::BeginString_FIX42));
    CHECK(Session::supportsSubSecondTimestamps(FIX::BeginString_FIX43));
    CHECK(Session::supportsSubSecondTimestamps(FIX::BeginString_FIX44));
    CHECK(Session::supportsSubSecondTimestamps(FIX::BeginString_FIXT11));
  }

  SECTION("doesSessionExist") {
    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(BeginString("FIX.4.2"), std::shared_ptr<DataDictionary>(new DataDictionary()));
    auto const timestamper = [this]() { return now; };

    auto createSession = [&](SenderCompID senderCompID, TargetCompID targetCompID) {
      return new Session(
          timestamper,
          *this,
          factory,
          SessionID(BeginString("FIX.4.2"), senderCompID, targetCompID),
          provider,
          TimeRange(UtcTimeOnly(), UtcTimeOnly()),
          0,
          0);
    };

    Session *pSession1 = createSession(SenderCompID("TW"), TargetCompID("ISLD"));
    Session *pSession2 = createSession(SenderCompID("WT"), TargetCompID("ISLD"));
    Session *pSession3 = createSession(SenderCompID("TW"), TargetCompID("DLSI"));
    Session *pSession4 = createSession(SenderCompID("OREN"), TargetCompID("NERO"));
    Session *pSession5 = createSession(SenderCompID("OREN"), TargetCompID("NERO"));

    pSession1->setResponder(this);
    pSession2->setResponder(this);
    pSession3->setResponder(this);
    pSession4->setResponder(this);
    pSession5->setResponder(this);

    CHECK(Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("WT"), TargetCompID("ISLD"))));
    CHECK(Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("DLSI"))));
    CHECK(Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("OREN"), TargetCompID("NERO"))));

    CHECK(4lu == Session::numSessions());

    delete pSession1;

    CHECK(!Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(3lu == Session::numSessions());

    delete pSession2;
    delete pSession3;

    CHECK(1lu == Session::numSessions());
    CHECK(Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("OREN"), TargetCompID("NERO"))));

    delete pSession4;
    CHECK(0lu == Session::numSessions());
    CHECK(!Session::doesSessionExist(SessionID(BeginString("FIX.4.2"), SenderCompID("OREN"), TargetCompID("NERO"))));

    delete pSession5;
  }

  SECTION("lookupSession") {
    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(BeginString("FIX.4.2"), std::shared_ptr<DataDictionary>(new DataDictionary()));
    auto const timestamper = [this]() { return now; };

    auto createSession = [&](SenderCompID senderCompID, TargetCompID targetCompID) {
      return Session(
          timestamper,
          *this,
          factory,
          SessionID(BeginString("FIX.4.2"), senderCompID, targetCompID),
          provider,
          TimeRange(UtcTimeOnly(), UtcTimeOnly()),
          0,
          0);
    };

    Session session1 = createSession(SenderCompID("TW"), TargetCompID("ISLD"));
    Session session2 = createSession(SenderCompID("WT"), TargetCompID("ISLD"));
    Session session3 = createSession(SenderCompID("TW"), TargetCompID("DLSI"));
    Session session4 = createSession(SenderCompID("OREN"), TargetCompID("NERO"));
    Session session5 = createSession(SenderCompID("OREN"), TargetCompID("NERO"));

    session1.setResponder(this);
    session2.setResponder(this);
    session3.setResponder(this);
    session4.setResponder(this);
    session5.setResponder(this);

    CHECK(
        &session1
        == Session::lookupSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));

    CHECK(
        &session2
        == Session::lookupSession(SessionID(BeginString("FIX.4.2"), SenderCompID("WT"), TargetCompID("ISLD"))));

    CHECK(
        &session3
        == Session::lookupSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("DLSI"))));

    CHECK(
        &session4
        == Session::lookupSession(SessionID(BeginString("FIX.4.2"), SenderCompID("OREN"), TargetCompID("NERO"))));
  }

  SECTION("registerSession") {
    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(BeginString("FIX.4.2"), std::shared_ptr<DataDictionary>(new DataDictionary()));

    Session *pSession = new Session(
        [this]() { return now; },
        *this,
        factory,
        SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD")),
        provider,
        TimeRange(UtcTimeOnly(), UtcTimeOnly()),
        0,
        0);

    CHECK(
        nullptr
        == Session::registerSession(SessionID(BeginString("FIX.4.1"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(
        pSession
        == Session::registerSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(Session::isSessionRegistered(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(
        nullptr
        == Session::registerSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    Session::unregisterSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD")));
    CHECK(!Session::isSessionRegistered(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(
        pSession
        == Session::registerSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));

    delete pSession;
    CHECK(!Session::isSessionRegistered(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
    CHECK(
        nullptr
        == Session::registerSession(SessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"))));
  }

  SECTION("sessionRefreshKeepsCurrentMessageState") {
    createSession(1);
    SEQNUM expectedMessageSeq = object->getStore()->getNextSenderMsgSeqNum();
    object->refresh();
    CHECK(expectedMessageSeq == object->getStore()->getNextSenderMsgSeqNum());
  }

  SECTION("setSenderMsgSeqNum") {
    createSession(1);
    SEQNUM expectedMessageSeq = 25;
    object->setNextSenderMsgSeqNum(expectedMessageSeq);
    CHECK(expectedMessageSeq == object->getStore()->getNextSenderMsgSeqNum());
  }

  SECTION("setTargetMsgSeqNum") {
    createSession(1);
    SEQNUM expectedMessageSeq = 25;
    object->setNextTargetMsgSeqNum(expectedMessageSeq);
    CHECK(expectedMessageSeq == object->getStore()->getNextTargetMsgSeqNum());
  }

  SECTION("timeIsWithinSessionTime") {
    UtcTimeStamp fixedStartTime = UtcTimeStamp(8, 8, 8, 5, 13, 2019);
    UtcTimeStamp fixedEndTime = UtcTimeStamp(16, 16, 16, 5, 13, 2019);

    startTime = UtcTimeOnly(fixedStartTime);
    endTime = UtcTimeOnly(fixedEndTime);
    createSession(1);

    UtcTimeStamp withinSessionTime = UtcTimeStamp(10, 10, 10, 5, 13, 2019);

    CHECK(object->isSessionTime(withinSessionTime));
  }

  SECTION("timeIsOutsideSessionTime") {
    UtcTimeStamp fixedStartTime = UtcTimeStamp(8, 8, 8, 5, 13, 2019);
    UtcTimeStamp fixedEndTime = UtcTimeStamp(16, 16, 16, 5, 13, 2019);

    startTime = UtcTimeOnly(fixedStartTime);
    endTime = UtcTimeOnly(fixedEndTime);
    createSession(1);

    UtcTimeStamp outsideSessionTime = UtcTimeStamp(20, 20, 20, 5, 13, 2019);

    CHECK(!object->isSessionTime(outsideSessionTime));
  }

  SECTION("sessionIsAnInitiator") {
    createSession(1);
    CHECK(object->isInitiator());
  }

  SECTION("sessionIsAnAcceptor") {
    createSession(0);
    CHECK(object->isAcceptor());
  }

  SECTION("sendsRedundantResendRequests") {
    createSession(1);
    object->setSendRedundantResendRequests(true);
    CHECK(object->getSendRedundantResendRequests());
  }

  SECTION("doesNotSendRedundantResendRequests") {
    createSession(1);
    object->setSendRedundantResendRequests(false);
    CHECK(!object->getSendRedundantResendRequests());
  }

  SECTION("sessionChecksCompId") {
    createSession(1);
    object->setCheckCompId(true);
    CHECK(object->getCheckCompId());
  }

  SECTION("sessionDoesNotCheckCompId") {
    createSession(1);
    object->setCheckCompId(false);
    CHECK(!object->getCheckCompId());
  }

  SECTION("sessionChecksLatency") {
    createSession(1);
    object->setCheckLatency(true);
    CHECK(object->getCheckLatency());
  }

  SECTION("sessionDoesNotCheckLatency") {
    createSession(1);
    object->setCheckLatency(false);
    CHECK(!object->getCheckLatency());
  }

  SECTION("sessionHasMaxLatency") {
    createSession(1);
    object->setMaxLatency(5);
    CHECK(5 == object->getMaxLatency());
  }

  SECTION("sessionHasLogonTimeout") {
    createSession(1);
    object->setLogonTimeout(5);
    CHECK(5 == object->getLogonTimeout());
  }

  SECTION("sessionHasLogoutTimeout") {
    createSession(1);
    object->setLogoutTimeout(5);
    CHECK(5 == object->getLogoutTimeout());
  }

  SECTION("sessionResetsOnLogon") {
    createSession(1);
    object->setResetOnLogon(true);
    CHECK(object->getResetOnLogon());
  }

  SECTION("essionDoesNotResetOnLogon") {
    createSession(1);
    object->setResetOnLogon(false);
    CHECK(!object->getResetOnLogon());
  }

  SECTION("sessionResetsOnLogout") {
    createSession(1);
    object->setResetOnLogout(true);
    CHECK(object->getResetOnLogout());
  }

  SECTION("sessionDoesNotResetOnLogout") {
    createSession(1);
    object->setResetOnLogout(false);
    CHECK(!object->getResetOnLogout());
  }

  SECTION("sessionResetsOnDisconnect") {
    createSession(1);
    object->setResetOnDisconnect(true);
    CHECK(object->getResetOnDisconnect());
  }

  SECTION("sessionDoesNotResetOnDisconnect") {
    createSession(1);
    object->setResetOnDisconnect(false);
    CHECK(!object->getResetOnDisconnect());
  }

  SECTION("sessionRefreshesOnLogon") {
    createSession(1);
    object->setRefreshOnLogon(true);
    CHECK(object->getRefreshOnLogon());
  }

  SECTION("sessionDoesNotRefreshOnLogon") {
    createSession(1);
    object->setRefreshOnLogon(false);
    CHECK(!object->getRefreshOnLogon());
  }

  SECTION("sessionHasMillisecondsInTimeStamp") {
    createSession(1);
    object->setMillisecondsInTimeStamp(true);
    CHECK(object->getMillisecondsInTimeStamp());
  }

  SECTION("sessionDoesNotHaveMillisecondsInTimeStamp") {
    createSession(1);
    object->setMillisecondsInTimeStamp(false);
    CHECK(!object->getMillisecondsInTimeStamp());
  }

  SECTION("sessionTimeStampPrecision_GreaterThanTen_InvalidEntrySetAsPreviousValue") {
    createSession(1);
    int previousVal = object->getTimestampPrecision();
    object->setTimestampPrecision(20);
    CHECK(previousVal == object->getTimestampPrecision());
  }

  SECTION("sessionTimeStampPrecision_LessThanZero_InvalidEntrySetAsPreviousValue") {
    createSession(1);
    int previousVal = object->getTimestampPrecision();
    object->setTimestampPrecision(-5);
    CHECK(previousVal == object->getTimestampPrecision());
  }

  SECTION("sessionTimeStampPrecision_ValidEntry") {
    createSession(1);
    object->setTimestampPrecision(5);
    CHECK(5 == object->getTimestampPrecision());
  }

  SECTION("sessionPersistsMessages") {
    createSession(1);
    object->setPersistMessages(true);
    CHECK(object->getPersistMessages());
  }

  SECTION("sessionDoesNotPersistMessages") {
    createSession(1);
    object->setPersistMessages(false);
    CHECK(!object->getPersistMessages());
  }

  SECTION("sessionValidatesLengthAndChecksum") {
    createSession(1);
    object->setValidateLengthAndChecksum(true);
    CHECK(object->getValidateLengthAndChecksum());
  }

  SECTION("sessionDoesNotValidateLengthAndChecksum") {
    createSession(1);
    object->setValidateLengthAndChecksum(false);
    CHECK(!object->getValidateLengthAndChecksum());
  }

  SECTION("sessionCapableOfLogging") {
    SessionID sessionIDCustom(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"));
    TimeRange sessionTimeCustom(startTime, endTime);

    DataDictionaryProvider providerCustom;
    providerCustom.addTransportDataDictionary(
        sessionIDCustom.getBeginString(),
        FIX::TestSettings::pathForSpec("FIX42"));
    Dictionary dict;
    dict.setString("ConnectionType", "initiator");
    dict.setString("FileLogPath", "log");

    SessionSettings settings;
    settings.set(sessionIDCustom, dict);
    FileLogFactory fileLogFactory(settings);

    Session sessionObject = Session(
        [this]() { return now; },
        *this,
        factory,
        sessionIDCustom,
        providerCustom,
        sessionTimeCustom,
        1,
        &fileLogFactory);

    Log *log = sessionObject.getLog();
    CHECK(log != nullptr);
  }

  SECTION("logOut_NotLoggedOn_LogoutNotSent") {
    createSession(0, 0, 31);

    object->setResponder(this);

    object->logout("test_logout");
    object->next(now);
    CHECK(!object->sentLogout());
  }

  SECTION("logOn_TimeoutWaitingForLogOnResponse") {
    createSession(1, 0, 31);
    object->setLogonTimeout(0);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->next(now);

    CHECK(!object->sentLogon());
  }

  SECTION("next_IOExceptionHandledAndNotLoggedOn") {
    SessionID sessionIDCustom(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"));
    TimeRange sessionTimeCustom(startTime, endTime, 0, 31);

    DataDictionaryProvider providerCustom;
    providerCustom.addTransportDataDictionary(
        sessionIDCustom.getBeginString(),
        FIX::TestSettings::pathForSpec("FIX42"));
    Dictionary dict;
    dict.setString("ConnectionType", "initiator");

    SessionSettings settings;
    settings.set(sessionIDCustom, dict);

    ExceptionMessageStoreFactory exceptionFactory(settings);
    Session sessionObject = Session(
        [this]() { return now; },
        *this,
        exceptionFactory,
        sessionIDCustom,
        providerCustom,
        sessionTimeCustom,
        1,
        0);

    UtcTimeStamp oldTime(8, 8, 8, 13, 5, 2010);
    sessionObject.next(oldTime);

    CHECK(!sessionObject.isLoggedOn());
  }
}

TEST_CASE_METHOD(initiatorFixture, "InitiatorSessionTestCase") {
  SECTION("initiatorResetLogonWithResetSeqNumInResponse") {
    object->setResponder(this);
    object->next(now);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());

    object->next(createLogout("ISLD", "TW", 2), now);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());

    object->setResetOnLogon(true);
    object->next(now);
    FIX42::Logon logon = createLogon("ISLD", "TW", 1);
    logon.set(FIX::ResetSeqNumFlag(true));
    object->next(logon, now);
    CHECK(object->isLoggedOn());
  }

  SECTION("initiatorResetLogonWithoutResetSeqNumInResponse") {
    object->setResponder(this);
    object->next(now);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());

    object->next(createLogout("ISLD", "TW", 2), now);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());

    object->setResetOnLogon(true);
    object->next(now);
    FIX42::Logon logon = createLogon("ISLD", "TW", 1);
    object->next(logon, now);
    CHECK(object->isLoggedOn());
  }

  SECTION("logoutInitiator") {
    object->setResponder(this);
    object->next(now);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());

    object->next(createLogout("ISLD", "TW", 2), now);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());
  }

  SECTION("logOut_TimeoutWaitingForLogOutResponse") {
    createSession(1, 0, 31);
    object->setLogoutTimeout(-1);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    object->logout("");
    FIX::Message sendLogout = createLogout("TW", "ISLD", 2);
    object->send(sendLogout);
    object->next(now);

    CHECK(!object->sentLogout());
  }

  SECTION("heartBeatInterval_TimeOutWaitingForHeartBeat") {
    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    // Force Heartbeat Timeout
    now += 3;
    object->next(now);
    CHECK(!object->isLoggedOn());
  }

  SECTION("heartBeatInterval_TestRequestNeeded") {
    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    // Force Heartbeat Interval Flow
    now += 2;
    object->next(now);
    CHECK(4 == object->getExpectedSenderNum());
    CHECK(object->isLoggedOn());
  }

  SECTION("heartBeatInterval_TestRequestNotNeeded_HeartbeatGenerated") {
    createSession(2, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    // Force Heartbeat Interval Flow
    now += 2;
    object->next(now);
    CHECK(4 == object->getExpectedSenderNum());
    CHECK(object->isLoggedOn());
  }

  SECTION("logOnResponse_ReceivedResponseBeforeSendingLogOnRequest") {
    createSession(1, 0, 31);

    object->logon();
    object->next(createLogon("ISLD", "TW", 1), now);

    CHECK(!object->sentLogout());
  }

  SECTION("logOn_RefreshOnLogon") {
    createSession(1, 0, 31);

    object->setRefreshOnLogon(true);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    CHECK(object->isLoggedOn());
  }

  SECTION("resendRequest_MessagesNotPersistedAndResendEndGreaterThenSeqNums") {
    createSession(1, 0, 31);

    object->setPersistMessages(false);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    object->setNextSenderMsgSeqNum(5);

    FIX::Message resendReq = createResendRequest("ISLD", "TW", 2, 1, 10);
    object->next(resendReq, now);

    CHECK(5 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());
  }

  SECTION("disconnect_ResetOnDisconnect") {
    startLoggedOn();

    object->setResetOnDisconnect(true);

    object->setNextSenderMsgSeqNum(20);
    object->setNextTargetMsgSeqNum(20);

    object->disconnect();

    CHECK(1 == object->getExpectedSenderNum());
    CHECK(1 == object->getExpectedTargetNum());
  }

  SECTION("resendRequest_SessionTypeFIX_DictionaryPreservesFieldOrder") {
    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX42"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());
    dictionary.preserveMessageFieldsOrder(true);

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);
    pDataDictionary->addHeaderField(115, false);
    pDataDictionary->addTrailerField(115, false);
    pDataDictionary->addMsgField(FIX::MsgType_Logon, 115);
    pDataDictionary->addMsgField(FIX::MsgType_ResendRequest, 115);

    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    FIX::Message resendReq = createResendRequest("ISLD", "TW", 2, 1, 2);
    object->next(resendReq, now);

    CHECK(3 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());
  }

  SECTION("resendRequest_SessionTypeFIXT_DictionaryPreservesFieldOrder") {
    SessionID sessionID(BeginString("FIXT.1.1"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIXT11"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());
    dictionary.preserveMessageFieldsOrder(true);

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);
    pDataDictionary->addHeaderField(98, false);
    pDataDictionary->addTrailerField(98, false);
    pDataDictionary->addMsgField(FIX::MsgType_Logon, 98);
    pDataDictionary->addMsgField(FIX::MsgType_ResendRequest, 98);

    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);
    provider.addApplicationDataDictionary(ApplVerID("20"), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);
    object->setSenderDefaultApplVerID(ApplVerID("20"));
    object->setTargetDefaultApplVerID(ApplVerID("20"));

    FIX::Message sentLogon = createT11Logon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createT11Logon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    FIX::Message resendReq = createT11ResendRequest("ISLD", "TW", 2, 1, 2);
    object->next(resendReq, now);

    CHECK(3 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());
  }

  SECTION("resendRequest_AResentMessageReceivesADoNotSendException") {
    startLoggedOn();

    FIX::Message neworder1 = createNewOrderSingle("ISLD", "TW", 2);
    object->send(neworder1);

    FIX::Message neworder2 = createNewOrderSingle("ISLD", "TW", 3);
    neworder2.setField(FIX::Text("DoNotSend"));
    object->send(neworder2);

    this->checkForDoNotSend = true;

    FIX::Message resendReq = createResendRequest("ISLD", "TW", 2, 1, 8);
    object->next(resendReq, now);

    CHECK(5 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());
  }

  SECTION("resendRequest_EndSeqNumberLargerThanMessages") {
    startLoggedOn();

    object->setNextSenderMsgSeqNum(15);

    FIX::Message resendReq = createResendRequest("ISLD", "TW", 2, 1, 20);
    object->next(resendReq, now);

    CHECK(15 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());
  }

  SECTION("resendRequest_FIXTPreservedFieldOrder_UnsupportedMessageType") {
    SessionID sessionID(BeginString("FIXT.1.1"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIXT11"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());
    dictionary.preserveMessageFieldsOrder(true);

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);
    pDataDictionary->addHeaderField(98, false);
    pDataDictionary->addTrailerField(98, false);
    pDataDictionary->addMsgField(FIX::MsgType_Logon, 98);
    pDataDictionary->addMsgField(FIX::MsgType_ResendRequest, 98);
    pDataDictionary->addMsgField(FIX::MsgType_BusinessMessageReject, 98);

    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);
    provider.addApplicationDataDictionary(ApplVerID("20"), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);
    object->setSenderDefaultApplVerID(ApplVerID("20"));
    object->setTargetDefaultApplVerID(ApplVerID("20"));

    FIX::Message sentLogon = createT11Logon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createT11Logon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    FIX::Message executionReport = createT1142ExecutionReport("ISLD", "TW", 2);
    object->next(executionReport, now);

    CHECK(4 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());
  }

  SECTION("sendMessage_NotLoggedInAndResetOnLogonTrue_MessageNotSent") {
    createSession(1, 0, 31);

    object->setResetOnLogon(true);

    FIX::Message neworder1 = createNewOrderSingle("ISLD", "TW", 1);
    CHECK(!object->send(neworder1));
  }

  SECTION("sendMessage_DoNotSendNewOrder_MessageNotSent") {
    startLoggedOn();

    this->checkForDoNotSend = true;

    FIX::Message neworder1 = createNewOrderSingle("ISLD", "TW", 1);
    neworder1.setField(Text("DoNotSend"));
    CHECK(!object->send(neworder1));
  }

  SECTION("logonSequenceNumberTooHigh_FIX40_ResendSent") {
    SessionID sessionID(BeginString("FIX.4.0"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX40"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);

    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);
    provider.addApplicationDataDictionary(ApplVerID("20"), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);
    object->setSenderDefaultApplVerID(ApplVerID("20"));
    object->setTargetDefaultApplVerID(ApplVerID("20"));

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    sentLogon.getHeader().setField(BeginString("FIX.4.0"));
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    receivedLogon.getHeader().setField(BeginString("FIX.4.0"));
    receivedLogon.getHeader().setField(MsgSeqNum(50));
    object->next(receivedLogon, now);

    CHECK(4 == object->getExpectedSenderNum());
    CHECK(1 == object->getExpectedTargetNum());
  }

  SECTION("invalidTagNumber_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.setField(100000, "invalidTagNumber");

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("ragNotDefinedForMessageType_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.setField(391, "ClientBidID");

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("tagSpecifiedWithoutAValue_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.setField(FIELD::ClOrdID, "");

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("incorrectDataFormatForValue_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.setField(FIELD::MinQty, "incorrectFormat");

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("tagAppearsMoreThanOnce_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.setField(Symbol("1stAppearance"));
    newOrderSingle.setField(Symbol("2ndAppearance"), false);

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("messageTagsOutOfOrder_Reject") {
    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX42"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());
    dictionary.preserveMessageFieldsOrder(true);
    dictionary.checkFieldsOutOfOrder(true);

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);
    pDataDictionary->addHeaderField(115, false);
    pDataDictionary->addTrailerField(115, false);
    pDataDictionary->addMsgField(FIX::MsgType_Logon, 115);
    pDataDictionary->addMsgField(FIX::MsgType_NewOrderSingle, 115);
    pDataDictionary->addMsgField(FIX::MsgType_Reject, 115);
    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    FIX42::NewOrderSingle newOrderSingle;
    newOrderSingle.clear();
    std::string newOrderSingleRawFIX;
    std::string delimSOH = "\x01";
    newOrderSingleRawFIX
        = "8=FIX.4.2" + delimSOH + "9=114" + delimSOH + "35=D" + delimSOH + "34=2" + delimSOH + "49=ISLD" + delimSOH
          + "56=TW" + delimSOH + "52=20190517-16:08:43" + delimSOH + "11=ID" + delimSOH + "21=1" + delimSOH + "40=1"
          + delimSOH + "35=D" + delimSOH // header field out of order and included in body as well
          + "54=1" + delimSOH + "55=SYMBOL" + delimSOH + "60=20190517-16:08:43" + delimSOH + "10=166" + delimSOH;
    newOrderSingle.setString(newOrderSingleRawFIX, false, pDataDictionary.get(), pDataDictionary.get());
    object->next(newOrderSingle, now);

    CHECK(1 == toReject);
  }

  SECTION("incorrectNumInGroupCount_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    FIX::Group group1(FIELD::NoAllocs, FIELD::AllocAccount);
    group1.setField(AllocAccount("account"));
    newOrderSingle.addGroup(group1);
    newOrderSingle.setField(NoAllocs(2));

    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
  }

  SECTION("conditionallyRequiredFieldMissing_Rejected") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.getHeader().removeField(FIELD::TargetCompID);

    object->next(newOrderSingle, now);
    CHECK(1 == toBusinessMessageReject);
  }

  SECTION("loginTargetCompID_RequiredFieldMissing_NoLogon") {
    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    receivedLogon.getHeader().removeField(FIELD::TargetCompID);
    object->next(receivedLogon, now);

    CHECK(!object->isLoggedOn());
  }

  SECTION("sendingTimeOutsideOfMaxLatency_Rejected") {
    startLoggedOn();

    object->setMaxLatency(1);
    object->setCheckLatency(true);

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    UtcTimeStamp highLatency(16, 16, 16, 13, 5, 2150);
    newOrderSingle.getHeader().setField(SendingTime(highLatency));
    object->next(newOrderSingle, now);

    CHECK(1 == toReject);
  }

  SECTION("validLogonState_MsgTypeLogoutAndLogonAlreadySent_Valid") {
    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX42::Logout logout = createLogout("ISLD", "TW", 2);
    object->next(logout, now);

    CHECK(0 == toReject);
  }

  SECTION("invalidRawFixMessage_LogonMessageHeaderOrderInvalid_InvalidMessageException") {
    FIX42::NewOrderSingle newOrderSingle;
    std::string newOrderSingleRawFIX;
    std::string delimSOH = "\x01";
    newOrderSingleRawFIX = "8=FIX.4.2" + delimSOH + "35=A" + delimSOH + "9=114" + delimSOH + "34=2" + delimSOH
                           + "49=ISLD" + delimSOH + "56=TW" + delimSOH + "52=20190517-16:08:43" + delimSOH + "98=0"
                           + delimSOH + "108=1" + delimSOH + "10=166" + delimSOH;

    CHECK_THROWS_AS(object->next(newOrderSingleRawFIX, now), InvalidMessage);
  }

  SECTION("invalidRawFixMessage_LogonMessageParsingError_InvalidMessageException") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle;
    std::string newOrderSingleRawFIX;
    std::string delimSOH = "\x01";
    newOrderSingleRawFIX = "8=FIX.4.2" + delimSOH + "9=114" + delimSOH // missing Message type in header (35=A)
                           + "34=2" + delimSOH + "49=ISLD" + delimSOH + "56=TW" + delimSOH + "52=20190517-16:08:43"
                           + delimSOH + "98=0" + delimSOH + "108=1" + delimSOH + "10=166" + delimSOH;

    CHECK_THROWS_AS(object->next(newOrderSingleRawFIX, now), InvalidMessage);
  }

  SECTION("invalidRawFixTMessage_LogonMessageHeaderOrderInvalid_InvalidMessageException") {
    SessionID sessionID(BeginString("FIXT.1.1"), SenderCompID("TW"), TargetCompID("ISLD"));

    TimeRange sessionTime(startTime, endTime, 0, 31);

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIXT11"));
    DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());

    std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);

    provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);
    provider.addApplicationDataDictionary(ApplVerID("20"), pDataDictionary);

    object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);
    object->setSenderDefaultApplVerID(ApplVerID("20"));
    object->setTargetDefaultApplVerID(ApplVerID("20"));

    FIX42::NewOrderSingle newOrderSingle;
    std::string newOrderSingleRawFIX;
    std::string delimSOH = "\x01";
    newOrderSingleRawFIX = "8=FIXT.4.2" + delimSOH + "35=A" + delimSOH + "9=114" + delimSOH + "34=2" + delimSOH
                           + "49=ISLD" + delimSOH + "56=TW" + delimSOH + "52=20190517-16:08:43" + delimSOH + "98=0"
                           + delimSOH + "108=1" + delimSOH + "10=166" + delimSOH;

    CHECK_THROWS_AS(object->next(newOrderSingleRawFIX, now), InvalidMessage);
  }

  SECTION("sendToTarget_MsgHeaderMissingTarget_SessionNotFoundException") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.getHeader().removeField(FIELD::TargetCompID);

    CHECK_THROWS_AS(object->sendToTarget(newOrderSingle, "qualifier"), FIX::SessionNotFound);
  }

  SECTION("sendToTarget_SessionIDDoesNotExist_SessionNotFoundException") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    SessionID sessionid;
    CHECK_THROWS_AS(object->sendToTarget(newOrderSingle, sessionid), FIX::SessionNotFound);
  }

  SECTION("sendToTarget_SessionIDExists_MessageSent") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    CHECK(object->sendToTarget(newOrderSingle, object->getSessionID()));
  }

  SECTION("sendToTarget_MsgMissingTargetButTargetProvidedSeparatly_MessageSent") {
    startLoggedOn();

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.getHeader().removeField(FIELD::TargetCompID);

    CHECK(object->sendToTarget(newOrderSingle, "TW", "ISLD", object->getSessionID().getSessionQualifier()));
  }

  SECTION("queuedLogonMessages") {
    createSession(1, 0, 31);

    FIX::Message sentLogon = createLogon("TW", "ISLD", 1);
    object->send(sentLogon);
    object->next(now);
    object->logon();

    FIX::Message receivedLogon = createLogon("ISLD", "TW", 2);
    object->next(receivedLogon, now, true);

    for (int i = 3; i <= 6; ++i) {
      object->next(createNewOrderSingle("ISLD", "TW", i), now);
    }
    CHECK(1 == object->getExpectedTargetNum());
    CHECK(1 == toResendRequest);

    object->next(createNewOrderSingle("ISLD", "TW", 1), now);
    CHECK(1 == toResendRequest);
    CHECK(7 == object->getExpectedTargetNum());
  }

  SECTION("SessionIDsExist") {
    startLoggedOn();

    CHECK(1ul == object->getSessions().size());
  }

  SECTION("lookUpSession_InvalidSessionHeader_NoSessionReturned") {
    startLoggedOn();
    std::string delimSOH = "\x01";
    std::string header = "8=FIX.4.2" + delimSOH + "35=A" + delimSOH // header out of order;
                         + "9=100" + delimSOH;

    Session *actualSession = object->lookupSession(header, false);
    CHECK(nullptr == actualSession);
  }

  SECTION("lookUpSession_FieldNotFoundException_NoSessionReturned") {
    startLoggedOn();
    Session *actualSession = object->lookupSession("8=FIX.4.2\x01", false);
    CHECK(nullptr == actualSession);
  }

  SECTION("lookUpSession_SessionFound") {
    startLoggedOn();
    std::string delimSOH = "\x01";
    std::string header
        = "8=FIX.4.2" + delimSOH + "9=100" + delimSOH + "35=A" + delimSOH + "49=TW" + delimSOH + "56=ISLD" + delimSOH;

    Session *actualSession = object->lookupSession(header, false);
    CHECK(nullptr != actualSession);
  }
}

TEST_CASE_METHOD(acceptorFixture, "AcceptorSessionTestCase") {
  SECTION("nextLogon") {
    // send with an incorrect SenderCompID
    object->setResponder(this);
    object->next(createLogon("BLAH", "TW", 1), now);
    CHECK(!object->receivedLogon());
    CHECK(0 == toLogon);
    CHECK(1 == disconnected);

    // send with an incorrect TargetCompID
    object->setResponder(this);
    object->next(createLogon("ISLD", "BLAH", 1), now);
    CHECK(!object->receivedLogon());
    CHECK(0 == toLogon);
    CHECK(2 == disconnected);

    // send a correct logon
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(object->receivedLogon());
    CHECK(1 == toLogon);
    CHECK(2 == disconnected);

    // check that we got a valid logon response
    SenderCompID senderCompID;
    TargetCompID targetCompID;
    HeartBtInt heartBtInt;
    EncryptMethod encryptMethod;

    sentLogon.getHeader().getField(senderCompID);
    sentLogon.getHeader().getField(targetCompID);
    sentLogon.getField(heartBtInt);
    sentLogon.getField(encryptMethod);

    CHECK("TW" == senderCompID);
    CHECK("ISLD" == targetCompID);
    CHECK(30 == heartBtInt);
    CHECK(0 == encryptMethod);
  }

  SECTION("nextLogonNoEncryptMethod") {
    // send a correct logon
    object->setResponder(this);
    FIX42::Logon logon = createLogon("ISLD", "TW", 1);
    object->next(logon, now);
    CHECK(object->receivedLogon());
    CHECK(1 == toLogon);
    CHECK(0 == disconnected);

    // check that we got a valid logon response
    SenderCompID senderCompID;
    TargetCompID targetCompID;
    HeartBtInt heartBtInt;
    EncryptMethod encryptMethod;

    sentLogon.getHeader().getField(senderCompID);
    sentLogon.getHeader().getField(targetCompID);
    sentLogon.getField(heartBtInt);
    sentLogon.getField(encryptMethod);

    CHECK("TW" == senderCompID);
    CHECK("ISLD" == targetCompID);
    CHECK(30 == heartBtInt);
    CHECK(0 == encryptMethod);
  }

  SECTION("nextLogonResetSeqNumFlag") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    object->next(createLogout("ISLD", "TW", 2), now);
    CHECK(!object->receivedLogon());
    CHECK(1 == disconnected);
    CHECK(1 == toLogout);
    CHECK(1 == fromLogout);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());

    FIX42::Logon logon = createLogon("ISLD", "TW", 1);
    logon.set(FIX::ResetSeqNumFlag(true));
    object->next(logon, now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());
  }

  SECTION("notifyResendRequest") {
    object->next(createLogon("ISLD", "TW", 5), now);
    CHECK(1 == toResendRequest);
  }

  SECTION("incrMsgSeqNum") {
    CHECK(1 == object->getExpectedSenderNum());
    CHECK(1 == object->getExpectedTargetNum());

    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());

    object->next(createHeartbeat("ISLD", "TW", 2), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(3 == object->getExpectedTargetNum());

    object->next(createHeartbeat("ISLD", "TW", 3), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(4 == object->getExpectedTargetNum());
  }

  SECTION("callDisconnect") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(0 == disconnected);

    object->next(createHeartbeat("ISLD", "TW", 2), now);
    CHECK(0 == disconnected);
    CHECK(1 == fromHeartbeat);

    object->next(createHeartbeat("ISLD", "TW", 3), now);
    CHECK(0 == disconnected);
    CHECK(2 == fromHeartbeat);

    // message is dupicate
    FIX42::Heartbeat heartbeat = createHeartbeat("ISLD", "TW", 2);
    heartbeat.getHeader().setField(PossDupFlag(true));

    UtcTimeStamp timeStamp = now;
    timeStamp.setSecond(5);
    OrigSendingTime origSendingTime(timeStamp);
    timeStamp.setSecond(10);
    SendingTime sendingTime(timeStamp);

    // message is a possible dup, remain connected
    heartbeat.getHeader().setField(sendingTime);
    heartbeat.getHeader().setField(origSendingTime);
    object->next(heartbeat, now);
    CHECK(0 == disconnected);
    CHECK(2 == fromHeartbeat);

    // message is not a possible dup, disconnected
    heartbeat.getHeader().setField(PossDupFlag(false));
    object->next(heartbeat, now);
    CHECK(1 == disconnected);
    CHECK(2 == fromHeartbeat);
  }

  SECTION("outOfOrder") {
    CHECK(1 == object->getExpectedSenderNum());
    CHECK(1 == object->getExpectedTargetNum());

    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(2 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());

    object->next(createHeartbeat("ISLD", "TW", 3), now);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(2 == object->getExpectedTargetNum());
    CHECK(0 == fromHeartbeat);

    object->next(createHeartbeat("ISLD", "TW", 2), now);
    CHECK(3 == object->getExpectedSenderNum());
    CHECK(4 == object->getExpectedTargetNum());
    CHECK(2 == fromHeartbeat);
  }

  SECTION("nextLogout") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    object->next(createLogout("ISLD", "TW", 2), now);
    CHECK(!object->receivedLogon());
    CHECK(1 == disconnected);
    CHECK(1 == toLogout);
    CHECK(1 == fromLogout);
  }

  SECTION("nextTestRequest") {
    object->next(createLogon("ISLD", "TW", 1), now);

    object->next(createTestRequest("ISLD", "TW", 2, "HELLO"), now);
    CHECK(1 == fromTestRequest);
    CHECK(1 == toHeartbeat);

    TestReqID testReqID;
    sentHeartbeat.getField(testReqID);
    CHECK("HELLO" == testReqID);
  }

  SECTION("noOrigSendingTime") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    UtcTimeStamp timeStamp = now;
    timeStamp.setSecond(10);
    SendingTime sendingTime(timeStamp);

    object->next(createNewOrderSingle("ISLD", "TW", 2), now);
    object->next(createNewOrderSingle("ISLD", "TW", 3), now);

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.getHeader().setField(sendingTime);
    newOrderSingle.getHeader().setField(PossDupFlag(true));
    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
    CHECK(0 == toLogout);
    CHECK(0 == disconnected);

    object->next(createLogout("ISLD", "TW", 4), now);
    CHECK(1 == toLogout);
    CHECK(1 == disconnected);
  }

  SECTION("badCompID") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    object->next(createNewOrderSingle("ISLD", "WT", 3), now);
    CHECK(1 == toReject);
    CHECK(1 == toLogout);
    CHECK(0 == disconnected);

    object->next(createLogout("ISLD", "TW", 4), now);
    CHECK(1 == toLogout);
    CHECK(1 == disconnected);
  }

  SECTION("nextReject") {
    object->next(createLogon("ISLD", "TW", 1), now);
    object->next(createTestRequest("ISLD", "TW", 2, "HELLO"), now);

    object->next(createReject("ISLD", "TW", 3, 2), now);
    CHECK(1 == fromReject);
    CHECK(0 == toReject);
    CHECK(0 == toLogout);
    CHECK(0 == disconnected);
    CHECK(4 == object->getExpectedTargetNum());

    object->next(createHeartbeat("ISLD", "TW", 4), now);
    CHECK(0 == toResendRequest);
  }

  struct MsgWithBadType : public FIX42::Message {
    MsgWithBadType()
        : FIX42::Message(MsgType("*")) {}
  };

  SECTION("badMsgType") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    MsgWithBadType msgWithBadType;
    fillHeader(msgWithBadType.getHeader(), "ISLD", "TW", 2);

    object->next(msgWithBadType, now);

    CHECK(1 == toReject);
    CHECK(0 == disconnected);
    CHECK(0 == toLogout);

    object->next(createLogout("ISLD", "TW", 3), now);
    CHECK(1 == toLogout);
    CHECK(1 == disconnected);
  }

  SECTION("nextSequenceReset") {
    object->next(createLogon("ISLD", "TW", 1), now);

    // NewSeqNo is greater
    object->next(createSequenceReset("ISLD", "TW", 0, 3), now);
    CHECK(1 == fromSequenceReset);
    CHECK(3 == object->getExpectedTargetNum());
    CHECK(0 == toReject);

    // NewSeqNo is equal
    object->next(createSequenceReset("ISLD", "TW", 0, 3), now);
    CHECK(2 == fromSequenceReset);
    CHECK(3 == object->getExpectedTargetNum());
    CHECK(0 == toReject);

    // No MsgSeqNum
    FIX42::SequenceReset sequenceReset = createSequenceReset("ISLD", "TW", 0, 3);
    sequenceReset.getHeader().removeField(34);
    // Fiels 34 is a required field in the header. So validation does not pass.
    object->next(sequenceReset, now);
    CHECK(2 == fromSequenceReset);
    CHECK(3 == object->getExpectedTargetNum());
    CHECK(1 == toReject);

    // NewSeqNo is less
    object->next(createSequenceReset("ISLD", "TW", 0, 2), now);
    CHECK(3 == fromSequenceReset);
    CHECK(3 == object->getExpectedTargetNum());
    CHECK(2 == toReject);
  }

  SECTION("nextGapFill") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    // NewSeqNo is equal

    FIX42::SequenceReset sequenceReset = createSequenceReset("ISLD", "TW", 2, 20);
    sequenceReset.set(GapFillFlag(true));
    object->next(sequenceReset, now);
    CHECK(1 == fromSequenceReset);
    CHECK(0 == toResendRequest);
    CHECK(20 == object->getExpectedTargetNum());

    // NewSeqNo is greater
    FIX42::SequenceReset sequenceReset2 = createSequenceReset("ISLD", "TW", 21, 40);
    sequenceReset2.set(GapFillFlag(true));
    object->next(sequenceReset2, now);
    CHECK(1 == fromSequenceReset);
    CHECK(1 == toResendRequest);
    CHECK(20 == object->getExpectedTargetNum());

    // NewSeqNo is less, PossDupFlag = Y
    FIX42::SequenceReset sequenceReset3 = createSequenceReset("ISLD", "TW", 19, 20);
    sequenceReset3.set(GapFillFlag(true));
    sequenceReset3.getHeader().setField(PossDupFlag(true));
    sequenceReset3.getHeader().setField(OrigSendingTime::now());
    object->next(sequenceReset3, now);
    CHECK(1 == fromSequenceReset);
    CHECK(1 == toResendRequest);
    CHECK(20 == object->getExpectedTargetNum());
    CHECK(0 == disconnected);

    // NewSeqNo is less, PossDupFlag = N
    FIX42::SequenceReset sequenceReset4 = createSequenceReset("ISLD", "TW", 19, 20);
    sequenceReset4.set(GapFillFlag(true));
    sequenceReset4.getHeader().setField(PossDupFlag(false));
    object->next(sequenceReset4, now);
    CHECK(1 == fromSequenceReset);
    CHECK(1 == toResendRequest);
    CHECK(20 == object->getExpectedTargetNum());
    CHECK(1 == disconnected);
  }

  SECTION("nextResendRequest") {
    object->next(createLogon("ISLD", "TW", 1), now);
    object->next(createTestRequest("ISLD", "TW", 2, "HELLO"), now);
    object->next(createTestRequest("ISLD", "TW", 3, "HELLO"), now);
    object->next(createTestRequest("ISLD", "TW", 4, "HELLO"), now);
    object->next(createResendRequest("ISLD", "TW", 5, 1, 4), now);
    CHECK(1 == toSequenceReset);
    CHECK(0 == resent);

    FIX::Message message = createNewOrderSingle("ISLD", "TW", 6);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 7);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 8);
    CHECK(object->send(message));
    object->next(createResendRequest("ISLD", "TW", 6, 5, 7), now);
    CHECK(1 == toSequenceReset);
    CHECK(3 == resent);

    object->setNextSenderMsgSeqNum(15);
    object->next(createResendRequest("ISLD", "TW", 7, 8, 15), now);
    CHECK(2 == toSequenceReset);
    CHECK(3 == resent);

    object->next(createResendRequest("ISLD", "TW", 8, 1, 15), now);
    CHECK(4 == toSequenceReset);
    CHECK(6 == resent);

    message = createNewOrderSingle("ISLD", "TW", 16);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 17);
    CHECK(object->send(message));
    object->next(createResendRequest("ISLD", "TW", 8, 1, 20), now);
    CHECK(6 == toSequenceReset);
    CHECK(11 == resent);
  }

  SECTION("nextResendRequestRepeatingGroup") {
    object->next(createLogon("ISLD", "TW", 1), now);
    FIX::Message message = createExecutionReport("ISLD", "TW", 2);
    CHECK(object->send(message));
    object->next(createResendRequest("ISLD", "TW", 3, 2, 2), now);

    PossDupFlag possDupFlag;
    OrigSendingTime origSendingTime = OrigSendingTime::now();
    SendingTime sendingTime = SendingTime::now();
    lastResent.getHeader().getField(possDupFlag);
    lastResent.getHeader().getField(origSendingTime);
    lastResent.getHeader().getField(sendingTime);
    message.getHeader().setField(possDupFlag);
    message.getHeader().setField(origSendingTime);
    message.getHeader().setField(sendingTime);
    CHECK(message.toString() == lastResent.toString());
  }

  SECTION("badOrigSendingTime") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    UtcTimeStamp timeStamp = now;
    timeStamp.setSecond(10);
    SendingTime sendingTime(timeStamp);
    timeStamp.setSecond(20);
    OrigSendingTime origSendingTime(timeStamp);

    object->next(createNewOrderSingle("ISLD", "TW", 2), now);
    object->next(createNewOrderSingle("ISLD", "TW", 3), now);

    FIX42::NewOrderSingle newOrderSingle = createNewOrderSingle("ISLD", "TW", 2);
    newOrderSingle.getHeader().setField(sendingTime);
    newOrderSingle.getHeader().setField(origSendingTime);
    newOrderSingle.getHeader().setField(PossDupFlag(true));
    object->next(newOrderSingle, now);
    CHECK(1 == toReject);
    CHECK(1 == toLogout);
    CHECK(0 == disconnected);

    object->next(createLogout("ISLD", "TW", 4), now);
    CHECK(1 == disconnected);
    CHECK(1 == toLogout);
  }

  SECTION("nextResendRequestNoMessagePersist") {
    object->setPersistMessages(false);
    object->next(createLogon("ISLD", "TW", 1), now);
    object->next(createTestRequest("ISLD", "TW", 2, "HELLO"), now);
    object->next(createTestRequest("ISLD", "TW", 3, "HELLO"), now);
    object->next(createTestRequest("ISLD", "TW", 4, "HELLO"), now);
    object->next(createResendRequest("ISLD", "TW", 5, 1, 4), now);
    CHECK(1 == toSequenceReset);
    CHECK(0 == resent);

    FIX::Message message = createNewOrderSingle("ISLD", "TW", 6);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 7);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 8);
    CHECK(object->send(message));
    object->next(createResendRequest("ISLD", "TW", 6, 5, 7), now);
    CHECK(2 == toSequenceReset);
    CHECK(0 == resent);

    object->setNextSenderMsgSeqNum(15);
    object->next(createResendRequest("ISLD", "TW", 7, 8, 15), now);
    CHECK(3 == toSequenceReset);
    CHECK(0 == resent);

    object->next(createResendRequest("ISLD", "TW", 8, 1, 15), now);
    CHECK(4 == toSequenceReset);
    CHECK(0 == resent);

    message = createNewOrderSingle("ISLD", "TW", 16);
    CHECK(object->send(message));
    message = createNewOrderSingle("ISLD", "TW", 17);
    CHECK(object->send(message));
    object->next(createResendRequest("ISLD", "TW", 8, 1, 20), now);
    CHECK(5 == toSequenceReset);
    CHECK(0 == resent);
  }

  SECTION("badBeginString") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    FIX42::TestRequest testRequest = createTestRequest("ISLD", "TW", 2, "HELLO");
    testRequest.getHeader().setField(BeginString(BeginString_FIX41));
    object->next(testRequest, now);
    CHECK(1 == toLogout);
    CHECK(0 == disconnected);

    FIX42::Logout logout = createLogout("ISLD", "TW", 3);
    logout.getHeader().setField(BeginString(BeginString_FIX41));
    object->next(logout, now);
    CHECK(1 == toLogout);
    CHECK(1 == disconnected);
  }

  SECTION("unsupportedMsgType") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);

    FIX42::ExecutionReport message = createExecutionReport("ISLD", "TW", 2);
    object->next(message, now);
    CHECK(1 == toBusinessMessageReject);
  }

  SECTION("doNotRespondToLogonWhenDisabled") {
    object->setResponder(this);
    object->logout();
    object->next(createLogon("ISLD", "TW", 1), now);

    CHECK(0 == toLogon);
    CHECK(0 == toLogout);
  }

  SECTION("processQueuedMessages") {
    object->setResponder(this);
    object->next(createLogon("ISLD", "TW", 1), now);
    CHECK(0 == disconnected);

    for (int i = 3; i <= 5003; ++i) {
      object->next(createNewOrderSingle("ISLD", "TW", i), now);
    }
    CHECK(2 == object->getExpectedTargetNum());
    CHECK(1 == toResendRequest);
    object->next(createNewOrderSingle("ISLD", "TW", 2), now);
    CHECK(5004 == object->getExpectedTargetNum());
    object->next(createNewOrderSingle("ISLD", "TW", 5006), now);
    CHECK(2 == toResendRequest);
  }

  SECTION("logOn_ResetOnLogon") {
    createSession(0, 0, 31);

    object->setResetOnLogon(true);

    object->logon();
    FIX::Message receivedLogon = createLogon("ISLD", "TW", 1);
    object->next(receivedLogon, now);

    CHECK(object->isLoggedOn());
  }
}

TEST_CASE_METHOD(acceptorT11Fixture, "AcceptorT11TestCase") {
  SECTION("nextResendRequestT1142RepeatingGroup") {
    object->next(createT11Logon("ISLD", "TW", 1), now);
    FIX::Message message = createT1142ExecutionReport("ISLD", "TW", 2);
    CHECK(object->send(message));
    object->next(createT11ResendRequest("ISLD", "TW", 3, 2, 2), now);

    PossDupFlag possDupFlag;
    OrigSendingTime origSendingTime = OrigSendingTime::now();
    SendingTime sendingTime = SendingTime::now();
    lastResent.getHeader().getField(possDupFlag);
    lastResent.getHeader().getField(origSendingTime);
    lastResent.getHeader().getField(sendingTime);
    message.getHeader().setField(possDupFlag);
    message.getHeader().setField(origSendingTime);
    message.getHeader().setField(sendingTime);
    CHECK(message.toString() == lastResent.toString());
  }

  SECTION("nextResendRequestT1150RepeatingGroup") {
    object->next(createT11Logon("ISLD", "TW", 1), now);
    FIX::Message message = createT1150ExecutionReport("ISLD", "TW", 2);
    CHECK(object->send(message));
    object->next(createT11ResendRequest("ISLD", "TW", 3, 2, 2), now);

    PossDupFlag possDupFlag;
    OrigSendingTime origSendingTime = OrigSendingTime::now();
    SendingTime sendingTime = SendingTime::now();
    lastResent.getHeader().getField(possDupFlag);
    lastResent.getHeader().getField(origSendingTime);
    lastResent.getHeader().getField(sendingTime);
    message.getHeader().setField(possDupFlag);
    message.getHeader().setField(origSendingTime);
    message.getHeader().setField(sendingTime);
    CHECK(message.toString() == lastResent.toString());
  }

  SECTION("sendNextExpectedMsgSeqNum") {
    object->setSendNextExpectedMsgSeqNum(true);
    object->setResponder(this);

    FIXT11::Logon logon = createT11Logon("ISLD", "TW", 1);
    logon.set(NextExpectedMsgSeqNum(1));
    object->next(logon, now);
    CHECK(2 == sentLogon.getField<NextExpectedMsgSeqNum>());

    object->next(createT11Heartbeat("ISLD", "TW", 2), now);
    FIX::Message heartbeat = createT11Heartbeat("TW", "ISLD", 2);
    object->send(heartbeat);

    object->next(createT1150NewOrderSingle("ISLD", "TW", 3), now);
    FIX::Message executionReport = createT1142ExecutionReport("TW", "ISLD", 3);
    object->send(executionReport);
    object->next(createT11Logout("ISLD", "TW", 4), now);

    logon = createT11Logon("ISLD", "TW", 10); // initiator pretends to have sent SeqNum 5-9 before
    logon.set(NextExpectedMsgSeqNum(1));      // initiator pretends to miss SeqNum 2 and 3
    object->next(logon, now);

    CHECK(6 == sentLogon.getField<NextExpectedMsgSeqNum>());
    CHECK(3 == lastResent.getHeader().getField<MsgSeqNum>().getValue()); // retransmitted ExecutionReport
    CHECK(2 == toSequenceReset);

    CHECK(0 == toResendRequest); // no resend request for SeqNum 5-9, initiator is expected to start message recovery
    object->next(createT11SequenceReset("ISLD", "TW", 5, 11), now);
    CHECK(11 == object->getExpectedTargetNum());

    object->next(createT11Logout("ISLD", "TW", 11), now);
    CHECK(2 == toLogout);
    object->next(now);
    logon = createT11Logon("ISLD", "TW", 12);
    logon.set(NextExpectedMsgSeqNum(20)); // too high
    object->next(logon, now);
    CHECK(3 == toLogout);
    CHECK(1 == disconnected);
  }
}

TEST_CASE_METHOD(initiatorT11Fixture, "InitiatorT11TestCase") {
  SECTION("initiatorSendNextExpectedMsgSeqNum") {
    object->setSendNextExpectedMsgSeqNum(true);
    object->setResponder(this);

    object->next(now);
    CHECK(1 == sentLogon.getField<NextExpectedMsgSeqNum>());

    FIXT11::Logon logon = createT11Logon("ISLD", "TW", 1);
    logon.set(NextExpectedMsgSeqNum(2));
    object->next(logon, now);

    FIX::Message heartbeat = createT11Heartbeat("TW", "ISLD", 2);
    object->send(heartbeat);
    object->next(createT11Heartbeat("ISLD", "TW", 2), now);

    FIX::Message newOrderSingle = createNewOrderSingle("TW", "ISLD", 3);
    object->send(newOrderSingle);
    object->next(createT11Heartbeat("ISLD", "TW", 3), now);
    object->next(createT11Logout("ISLD", "TW", 4), now);

    object->next(now);
    CHECK(5 == sentLogon.getField<NextExpectedMsgSeqNum>());
    logon = createT11Logon("ISLD", "TW", 10); // acceptor pretends to have sent SeqNum 5-9 before
    logon.set(NextExpectedMsgSeqNum(2));      // acceptor pretends to miss SeqNum 2 and 3
    object->next(logon, now);

    CHECK(3 == lastResent.getHeader().getField<MsgSeqNum>().getValue()); // retransmitted NewOrderSingle
    CHECK(2 == toSequenceReset);

    CHECK(0 == toResendRequest); // no resend request for SeqNum 5-9, acceptor is expected to start message recovery
    object->next(createT11SequenceReset("ISLD", "TW", 5, 11), now);
    CHECK(11 == object->getExpectedTargetNum());

    object->next(createT11Logout("ISLD", "TW", 11), now);
    CHECK(2 == toLogout);
    object->next(now);
    logon = createT11Logon("ISLD", "TW", 12);
    logon.set(NextExpectedMsgSeqNum(20)); // too high
    object->next(logon, now);
    CHECK(3 == toLogout);
    CHECK(1 == disconnected);
  }
}

struct resetOnEndTimeFixture : public acceptorFixture {
  using acceptorFixture::createSession;

  void createSession() {
    now.setCurrent();
    startTimeStamp = now;
    startTimeStamp.setMillisecond(0);

    endTimeStamp = startTimeStamp;

    startTime = UtcTimeOnly(startTimeStamp);
    endTime = UtcTimeOnly(endTimeStamp);
    endTime += 2;

    acceptorFixture::createSession(0);
  }
};

TEST_CASE_METHOD(resetOnEndTimeFixture, "resetOnEndTime") {
  createSession();
  UtcTimeStamp timeStamp = startTimeStamp;
  object->next(createLogon("ISLD", "TW", 1), timeStamp);
  object->next(createHeartbeat("ISLD", "TW", 2), timeStamp);

  CHECK(1 == toLogon);
  CHECK(0 == disconnected);
  timeStamp += 1;
  object->next(timeStamp);
  CHECK(0 == disconnected);
  timeStamp += 2;
  object->next(timeStamp);
  CHECK(1 == disconnected);
  CHECK(1 == toLogout);
  CHECK(1 == object->getExpectedSenderNum());
  CHECK(1 == object->getExpectedTargetNum());
}

struct disconnectBeforeStartTimeFixture : public acceptorFixture {
  disconnectBeforeStartTimeFixture() {
    now.setCurrent();
    startTime = now;
    startTime += 1;
    endTime = now;
    endTime += 4;

    acceptorFixture::createSession(0);
  }
};

TEST_CASE_METHOD(disconnectBeforeStartTimeFixture, "disconnectedBeforeStartTime") {
  object->next(createLogon("ISLD", "TW", 1), now);
  CHECK(1 == disconnected);

  now += 2;
  object->next(createLogon("ISLD", "TW", 1), now);
  CHECK(1 == disconnected);
}

struct resetOnNewSessionFixture : public acceptorFixture {
  resetOnNewSessionFixture() {
    now.setCurrent();
    startTime = now;
    startTime += -2;
    endTime = now;
    endTime += 2;

    acceptorFixture::createSession(0);
  }
};

TEST_CASE_METHOD(resetOnNewSessionFixture, "resetOnNewSession") {
  now += 2;
  object->next(createLogon("ISLD", "TW", 1), now);
  CHECK(0 == disconnected);

  now += 3;
  object->next(now);
  CHECK(1 == disconnected);
}

struct logonAtLogonStartTimeFixture : public acceptorFixture {
  logonAtLogonStartTimeFixture() {
    now.setCurrent();
    startTime = now;
    startTime.setMillisecond(0);

    endTime = now;
    endTime.setMillisecond(0);

    startTime += -10;
    endTime += 10;

    UtcTimeOnly logonStartTime(now);
    UtcTimeOnly logonEndTime(now);
    logonStartTime += 1;
    logonEndTime += 2;
    TimeRange logonTime(logonStartTime, logonEndTime);

    object->setLogonTime(logonTime);
  }
};

TEST_CASE_METHOD(logonAtLogonStartTimeFixture, "logonAtLogonStartTime") {
  object->next(createLogon("ISLD", "TW", 1), now);
  object->next(createHeartbeat("ISLD", "TW", 2), now);
  object->next(now);

  CHECK(0 == toLogon);
  CHECK(0 == toLogout);

  now += 1;
  object->next(createLogon("ISLD", "TW", 1), now);
  object->next(createHeartbeat("ISLD", "TW", 2), now);
  object->next(now);
  CHECK(1 == toLogon);
  CHECK(0 == toLogout);

  now += 2;
  object->next(now);
  CHECK(1 == toLogon);
  CHECK(1 == toLogout);
}

struct initiatorCreatedBeforeStartTimeFixture : public TestCallback {
  static const int HEARTBTINT = 30;
  static const int STARTTIMEFROMNOW = 2;
  static const int ENDTIMEFROMNOW = 4;

  int actuallySent;
  bool actuallySentLogon;
  Session *object;
  MemoryStoreFactory messageStoreFactory;

  initiatorCreatedBeforeStartTimeFixture()
      : actuallySent(0),
        actuallySentLogon(false) {
    now.setCurrent();
    startTime = now;
    startTime.setMillisecond(0);
    startTime += STARTTIMEFROMNOW;
    endTime = now;
    endTime.setMillisecond(0);
    endTime += ENDTIMEFROMNOW;
    TimeRange sessionTime(startTime, endTime);

    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("MJKG"), TargetCompID("IZZY"));

    DataDictionaryProvider provider;
    provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX42"));
    object = new Session(
        [this]() { return now; },
        *this,
        messageStoreFactory,
        sessionID,
        provider,
        sessionTime,
        HEARTBTINT,
        0);
  }

  virtual ~initiatorCreatedBeforeStartTimeFixture() {
    if (object) {
      delete object;
    }
  }

  bool send(const std::string &s) {
    std::string::size_type p = s.find("\00135=A\001", 0);
    if (p != std::string::npos) {
      actuallySentLogon = true;
    }

    actuallySent++;
    return true;
  }
};

/**
 * Verifies bug fix: only a Logon should be sent at
 * StartTime, not Logout followed by Logon
 */
TEST_CASE_METHOD(initiatorCreatedBeforeStartTimeFixture, "initiatorLogonAtStartTime") {
  now += STARTTIMEFROMNOW;

  CHECK(0 == toLogon);
  CHECK(0 == actuallySent);
  CHECK(!actuallySentLogon);

  object->setResponder(this);
  object->next(now);

  CHECK(1 == toLogon);
  CHECK(1 == actuallySent);
  CHECK(actuallySentLogon);
}

// Session with StartTime = EndTime = 00:00:00 disconnects every day at 00:00:00
TEST_CASE_METHOD(sessionFixture, "sessionPeriodicallyDisconnects") {
  now = UtcTimeStamp(23, 59, 58, 2024, 3, 31);
  startTime = UtcTimeOnly(0, 0, 0);
  endTime = UtcTimeOnly(0, 0, 0);
  createSession(0);
  object->setCheckLatency(false);

  object->next(createLogon("ISLD", "TW", 1), now);
  CHECK(1 == toLogon);
  CHECK(0 == toLogout);

  now = UtcTimeStamp(23, 59, 59, 2024, 3, 31);
  object->next(createHeartbeat("ISLD", "TW", 2), now);
  CHECK(0 == toLogout);

  now = UtcTimeStamp(0, 0, 1, 2024, 4, 1);
  object->next(createHeartbeat("ISLD", "TW", 3), now);
  CHECK(1 == toLogout);
}

TEST_CASE_METHOD(sessionFixture, "sessionNonStop") {
  now = UtcTimeStamp(23, 59, 58, 2024, 3, 31);
  startTime = UtcTimeOnly(0, 0, 0);
  endTime = UtcTimeOnly(0, 0, 0);
  createSession(0);
  object->setCheckLatency(false);
  object->setIsNonStopSession(true);

  object->next(createLogon("ISLD", "TW", 1), now);
  CHECK(1 == toLogon);
  CHECK(0 == toLogout);

  now = UtcTimeStamp(23, 59, 59, 2024, 3, 31);
  object->next(createHeartbeat("ISLD", "TW", 2), now);
  CHECK(0 == toLogout);

  now = UtcTimeStamp(0, 0, 1, 2024, 4, 1);
  object->next(createHeartbeat("ISLD", "TW", 3), now);
  CHECK(0 == toLogout);
}

TEST_CASE_METHOD(initiatorFIX40Fixture, "customFIX40_UnsupportedMessageType_ERReject") {
  SessionID sessionID(BeginString("FIX.4.0"), SenderCompID("TW"), TargetCompID("ISLD"));
  TimeRange sessionTime(startTime, endTime, 0, 31);

  DataDictionaryProvider provider;
  provider.addTransportDataDictionary(sessionID.getBeginString(), FIX::TestSettings::pathForSpec("FIX40"));
  DataDictionary dictionary = provider.getSessionDataDictionary(sessionID.getBeginString());

  std::shared_ptr<DataDictionary> pDataDictionary = std::make_shared<DataDictionary>(dictionary);
  pDataDictionary->addField(FIELD::RefMsgType);
  pDataDictionary->addFieldName(FIELD::RefMsgType, "RefMsgType");
  pDataDictionary->addMsgField(FIX::MsgType_Reject, FIELD::RefMsgType);

  provider.addTransportDataDictionary(sessionID.getBeginString(), pDataDictionary);

  object = new Session([this]() { return now; }, *this, factory, sessionID, provider, sessionTime, 1, 0);
  object->setResponder(this);

  FIX::Message sentLogon = createFIX40Logon("TW", "ISLD", 1);
  object->send(sentLogon);
  object->next(now);
  object->logon();

  FIX::Message receivedLogon = createFIX40Logon("ISLD", "TW", 1);
  object->next(receivedLogon, now);

  FIX::Message executionReport = createFIX40ExecutionReport("ISLD", "TW", 2);

  object->next(executionReport, now);
  CHECK(1 == toReject);
}
