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

#include "FixFields.h"
#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786)
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "DataDictionary.h"
#include "FieldConvertors.h"
#include "FileStore.h"
#include "Message.h"
#include "MessageStore.h"
#include "Session.h"
#include "SessionID.h"
#include "SocketAcceptor.h"
#include "SocketInitiator.h"
#include "ThreadedSocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "Utility.h"
#include "Values.h"
#include "fix42/Heartbeat.h"
#include "fix42/NewOrderSingle.h"
#include "fix42/QuoteRequest.h"

#include "TestHelper.h"
#include "catch_amalgamated.hpp"

#include <atomic>
#include <sstream>

static FIX42::NewOrderSingle makeNewOrderSingle() {
  FIX::ClOrdID clOrdID("ORDERID");
  FIX::HandlInst handlInst('1');
  FIX::Symbol symbol("LNUX");
  FIX::Side side(FIX::Side_BUY);
  FIX::TransactTime transactTime = FIX::TransactTime::now();
  FIX::OrdType ordType(FIX::OrdType_MARKET);
  return FIX42::NewOrderSingle(clOrdID, handlInst, symbol, side, transactTime, ordType);
}

static FIX42::QuoteRequest makeQuoteRequest() {
  FIX42::QuoteRequest message(FIX::QuoteReqID("1"));
  FIX42::QuoteRequest::NoRelatedSym noRelatedSym;
  for (int i = 1; i <= 10; ++i) {
    noRelatedSym.set(FIX::Symbol("IBM"));
    noRelatedSym.set(FIX::MaturityMonthYear());
    noRelatedSym.set(FIX::PutOrCall(FIX::PutOrCall_PUT));
    noRelatedSym.set(FIX::StrikePrice(120));
    noRelatedSym.set(FIX::Side(FIX::Side_BUY));
    noRelatedSym.set(FIX::OrderQty(100));
    noRelatedSym.set(FIX::Currency("USD"));
    noRelatedSym.set(FIX::OrdType(FIX::OrdType_MARKET));
    message.addGroup(noRelatedSym);
    noRelatedSym.clear();
  }
  return message;
}

TEST_CASE("TypeConversions", "[benchmark]") {
  BENCHMARK("IntegerToString") { return FIX::IntConvertor::convert(1234); };

  BENCHMARK("StringToInteger") {
    std::string value("1234");
    return FIX::IntConvertor::convert(value);
  };

  BENCHMARK("DoubleToString") { return FIX::DoubleConvertor::convert(123.45); };

  BENCHMARK("StringToDouble") {
    std::string value("123.45");
    return FIX::DoubleConvertor::convert(value);
  };
}

TEST_CASE("HeartbeatMessage", "[benchmark]") {
  FIX::DataDictionary dataDictionary(FIX::TestSettings::pathForSpec("FIX42"));
  FIX42::Heartbeat message;
  std::string serialized = message.toString();

  BENCHMARK("Create") { return FIX42::Heartbeat(); };

  BENCHMARK("IdentifyType") { return FIX::identifyType(serialized); };

  BENCHMARK("Serialize") { return message.toString(); };

  BENCHMARK("Deserialize") { return message.setString(serialized, false, &dataDictionary); };

  BENCHMARK("DeserializeAndValidate") { return message.setString(serialized, true, &dataDictionary); };
}

TEST_CASE("NewOrderSingleMessage", "[benchmark]") {
  FIX::DataDictionary dataDictionary(FIX::TestSettings::pathForSpec("FIX42"));
  FIX42::NewOrderSingle message = makeNewOrderSingle();
  std::string serialized = message.toString();

  BENCHMARK("Create") { return makeNewOrderSingle(); };

  BENCHMARK("Serialize") { return message.toString(); };

  BENCHMARK("Deserialize") { return message.setString(serialized, false, &dataDictionary); };

  BENCHMARK("DeserializeAndValidate") { return message.setString(serialized, true, &dataDictionary); };
}

TEST_CASE("QuoteRequestMessage", "[benchmark]") {
  FIX::DataDictionary dataDictionary(FIX::TestSettings::pathForSpec("FIX42"));
  FIX42::QuoteRequest message = makeQuoteRequest();
  FIX42::QuoteRequest::NoRelatedSym group;
  std::string serialized = message.toString();

  BENCHMARK("Create") { return makeQuoteRequest(); };

  BENCHMARK("Serialize") { return message.toString(); };

  BENCHMARK("Deserialize") { return message.setString(serialized, false, &dataDictionary); };

  BENCHMARK("DeserializeAndValidate") { return message.setString(serialized, true, &dataDictionary); };

  BENCHMARK("ReadFields") {
    FIX::Symbol symbol;
    FIX::MaturityMonthYear maturityMonthYear;
    FIX::PutOrCall putOrCall;
    FIX::StrikePrice strikePrice;
    FIX::Side side;
    FIX::OrderQty orderQty;
    FIX::Currency currency;
    FIX::OrdType ordType;
    FIX::NoRelatedSym noRelatedSym;
    message.get(noRelatedSym);
    int count = noRelatedSym;
    for (int k = 1; k <= count; ++k) {
      message.getGroup(k, group);
      group.get(symbol);
      group.get(maturityMonthYear);
      group.get(putOrCall);
      group.get(strikePrice);
      group.get(side);
      group.get(orderQty);
      group.get(currency);
      group.get(ordType);
    }
    return noRelatedSym;
  };
}

TEST_CASE("Validation", "[benchmark]") {
  FIX::DataDictionary dataDictionary(FIX::TestSettings::pathForSpec("FIX42"));
  FIX::DataDictionary emptyDataDictionary;

  FIX42::NewOrderSingle newOrderSingle = makeNewOrderSingle();
  newOrderSingle.getHeader().set(FIX::SenderCompID("SENDER"));
  newOrderSingle.getHeader().set(FIX::TargetCompID("TARGET"));
  newOrderSingle.getHeader().set(FIX::MsgSeqNum(1));
  newOrderSingle.getHeader().set(FIX::SendingTime::now());
  newOrderSingle.getHeader().set(FIX::BodyLength(newOrderSingle.calculateLength()));
  newOrderSingle.getTrailer().set(FIX::CheckSum(newOrderSingle.checkSum()));

  FIX42::QuoteRequest quoteRequest = makeQuoteRequest();
  quoteRequest.getHeader().set(FIX::SenderCompID("SENDER"));
  quoteRequest.getHeader().set(FIX::TargetCompID("TARGET"));
  quoteRequest.getHeader().set(FIX::MsgSeqNum(1));
  quoteRequest.getHeader().set(FIX::SendingTime::now());
  quoteRequest.getHeader().set(FIX::BodyLength(quoteRequest.calculateLength()));
  quoteRequest.getTrailer().set(FIX::CheckSum(quoteRequest.checkSum()));

  BENCHMARK("ValidateNewOrderSingle") { emptyDataDictionary.validate(newOrderSingle); };

  BENCHMARK("ValidateDictNewOrderSingle") { dataDictionary.validate(newOrderSingle); };

  BENCHMARK("ValidateQuoteRequest") { emptyDataDictionary.validate(quoteRequest); };

  BENCHMARK("ValidateDictQuoteRequest") { dataDictionary.validate(quoteRequest); };
}

TEST_CASE("FileStore", "[benchmark]") {
  FIX::BeginString beginString(FIX::BeginString_FIX42);
  FIX::SenderCompID senderCompID("SENDER");
  FIX::TargetCompID targetCompID("TARGET");
  FIX::SessionID sessionID(beginString, senderCompID, targetCompID);

  FIX42::NewOrderSingle message = makeNewOrderSingle();
  message.getHeader().set(FIX::MsgSeqNum(1));
  std::string messageString = message.toString();

  BENCHMARK_ADVANCED("StoreNewOrderSingle")(Catch::Benchmark::Chronometer meter) {
    FIX::FileStore store(FIX::UtcTimeStamp::now(), "store", sessionID);
    store.reset(FIX::UtcTimeStamp::now());
    int seq = 0;
    meter.measure([&] { store.set(++seq, messageString); });
    store.reset(FIX::UtcTimeStamp::now());
  };
}

static unsigned short s_networkBenchmarkPort = 54322;

class NetworkBenchmarkApplication : public FIX::NullApplication {
public:
  std::atomic<int> received{0};
  void fromApp(const FIX::Message &, const FIX::SessionID &)
      EXCEPT(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType) {
    received.fetch_add(1, std::memory_order_relaxed);
  }
};

static std::string makeSocketConfig(
    unsigned short port,
    const std::string &serverCompID,
    const std::string &clientCompID) {
  std::ostringstream stream;
  stream << "[DEFAULT]\n"
         << "SocketConnectHost=localhost\n"
         << "SocketConnectPort=" << port << "\n"
         << "SocketAcceptPort=" << port << "\n"
         << "SocketReuseAddress=Y\n"
         << "StartTime=00:00:00\n"
         << "EndTime=00:00:00\n"
         << "UseDataDictionary=N\n"
         << "BeginString=FIX.4.2\n"
         << "PersistMessages=N\n"
         << "[SESSION]\n"
         << "ConnectionType=acceptor\n"
         << "SenderCompID=" << serverCompID << "\n"
         << "TargetCompID=" << clientCompID << "\n"
         << "[SESSION]\n"
         << "ConnectionType=initiator\n"
         << "SenderCompID=" << clientCompID << "\n"
         << "TargetCompID=" << serverCompID << "\n"
         << "HeartBtInt=30\n";
  return stream.str();
}

// Each network benchmark context connects once and stays connected for all
// samples. The two contexts use different ports and session IDs so they can
// coexist during the program's lifetime without a session registry conflict.

struct SocketBenchmarkContext {
  NetworkBenchmarkApplication application;
  FIX::MemoryStoreFactory storeFactory;
  FIX::SessionID sessionID;
  std::unique_ptr<FIX::SocketAcceptor> acceptor;
  std::unique_ptr<FIX::SocketInitiator> initiator;

  explicit SocketBenchmarkContext(unsigned short port)
      : sessionID("FIX.4.2", "CLIENT", "SERVER") {
    std::istringstream configStream(makeSocketConfig(port, "SERVER", "CLIENT"));
    FIX::SessionSettings settings(configStream);
    acceptor = std::make_unique<FIX::SocketAcceptor>(application, storeFactory, settings);
    acceptor->start();
    initiator = std::make_unique<FIX::SocketInitiator>(application, storeFactory, settings);
    initiator->start();
    FIX::process_sleep(1);
  }

  ~SocketBenchmarkContext() {
    initiator->stop();
    acceptor->stop();
  }
};

struct ThreadedSocketBenchmarkContext {
  NetworkBenchmarkApplication application;
  FIX::MemoryStoreFactory storeFactory;
  FIX::SessionID sessionID;
  std::unique_ptr<FIX::ThreadedSocketAcceptor> acceptor;
  std::unique_ptr<FIX::ThreadedSocketInitiator> initiator;

  explicit ThreadedSocketBenchmarkContext(unsigned short port)
      : sessionID("FIX.4.2", "TCLIENT", "TSERVER") {
    std::istringstream configStream(makeSocketConfig(port, "TSERVER", "TCLIENT"));
    FIX::SessionSettings settings(configStream);
    acceptor = std::make_unique<FIX::ThreadedSocketAcceptor>(application, storeFactory, settings);
    acceptor->start();
    initiator = std::make_unique<FIX::ThreadedSocketInitiator>(application, storeFactory, settings);
    initiator->start();
    FIX::process_sleep(1);
  }

  ~ThreadedSocketBenchmarkContext() {
    initiator->stop();
    acceptor->stop();
  }
};

TEST_CASE("Socket", "[benchmark][network]") {
  static SocketBenchmarkContext context(s_networkBenchmarkPort);
  FIX42::NewOrderSingle message = makeNewOrderSingle();

  BENCHMARK("SendMessage") {
    int expected = context.application.received.load(std::memory_order_relaxed) + 1;
    FIX::Session::sendToTarget(message, context.sessionID);
    while (context.application.received.load(std::memory_order_relaxed) < expected) {
      FIX::process_sleep(0.0001);
    }
    return context.application.received.load(std::memory_order_relaxed);
  };
}

TEST_CASE("ThreadedSocket", "[benchmark][network]") {
  static ThreadedSocketBenchmarkContext context(s_networkBenchmarkPort + 1);
  FIX42::NewOrderSingle message = makeNewOrderSingle();

  BENCHMARK("SendMessage") {
    int expected = context.application.received.load(std::memory_order_relaxed) + 1;
    FIX::Session::sendToTarget(message, context.sessionID);
    while (context.application.received.load(std::memory_order_relaxed) < expected) {
      FIX::process_sleep(0.0001);
    }
    return context.application.received.load(std::memory_order_relaxed);
  };
}

int main(int argc, char **argv) {
  Catch::Session session;
  auto &cli = session.cli();
  auto newCli = cli
                | Catch::Clara::Opt(
                    [](std::string path) { FIX::TestSettings::specPath = path; },
                    "path")["--quickfix-spec-path"]("QuickFIX spec path (required for message benchmarks)")
                | Catch::Clara::Opt(
                    [](int port) { s_networkBenchmarkPort = static_cast<unsigned short>(port); },
                    "port")["--port"]("Port for network benchmarks (default: 54322)");
  session.cli(newCli);
  return session.run(argc, argv);
}
