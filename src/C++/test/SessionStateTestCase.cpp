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

#include <Log.h>
#include <Session.h>
#include <SessionState.h>
#include <atomic>
#include <sstream>
#include <string>
#include <thread>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
template <typename Writer, typename Reader> void testConcurrentStatus(Writer writer, Reader reader, int iterations) {
  std::atomic<int> ready{0};
  std::atomic<bool> start{false};
  std::atomic<bool> finished{false};
  auto waitForStart = [&]() {
    ready.fetch_add(1);
    while (!start.load()) {
      std::this_thread::yield();
    }
  };

  std::thread writing([&]() {
    waitForStart();
    for (int i = 0; i < iterations; ++i) {
      writer(i);
    }
    finished.store(true, std::memory_order_relaxed);
  });
  std::thread reading([&]() {
    waitForStart();
    volatile bool observed = false;
    do {
      observed = reader();
    } while (!finished.load(std::memory_order_relaxed));
    (void)observed;
  });

  while (ready.load() != 2) {
    std::this_thread::yield();
  }
  start.store(true);
  writing.join();
  reading.join();
}

void testConcurrentFlag(void (SessionState::*setter)(bool), bool (SessionState::*getter)() const, bool initial) {
  SessionState state(UtcTimeStamp::now());
  REQUIRE((state.*getter)() == initial);

  testConcurrentStatus(
      [&](int i) { (state.*setter)(i % 2 == 0 ? initial : !initial); },
      [&]() { return (state.*getter)(); },
      100000);

  CHECK((state.*getter)() == !initial);
  (state.*setter)(initial);
  CHECK((state.*getter)() == initial);
}
} // namespace

TEST_CASE("SessionState enabled concurrent access", "[session-state-races]") {
  testConcurrentFlag(&SessionState::enabled, &SessionState::enabled, true);
}

TEST_CASE("SessionState receivedLogon concurrent access", "[session-state-races]") {
  testConcurrentFlag(&SessionState::receivedLogon, &SessionState::receivedLogon, false);
}

TEST_CASE("SessionState sentLogon concurrent access", "[session-state-races]") {
  testConcurrentFlag(&SessionState::sentLogon, &SessionState::sentLogon, false);
}

TEST_CASE("Session status during enable and disconnect transitions", "[session-status-races]") {
  const UtcTimeStamp now = UtcTimeStamp::now();
  NullApplication application;
  MemoryStoreFactory factory;
  DataDictionaryProvider provider;
  const SessionID id("FIX.4.2", "STATUS", "PEER");
  const TimeRange sessionTime(UtcTimeOnly(0, 0, 0), UtcTimeOnly(0, 0, 0));
  Session session([&]() { return now; }, application, factory, id, provider, sessionTime, 0, nullptr);

  REQUIRE(session.isEnabled());
  REQUIRE_FALSE(session.receivedLogon());
  REQUIRE_FALSE(session.sentLogon());
  REQUIRE_FALSE(session.isLoggedOn());

  SECTION("enable and disable") {
    testConcurrentStatus(
        [&](int i) {
          if (i % 2 == 0) {
            session.logon();
          } else {
            session.logout();
          }
        },
        [&]() { return session.isEnabled(); },
        100000);
    CHECK_FALSE(session.isEnabled());
    session.logon();
    CHECK(session.isEnabled());
  }

  SECTION("logon and disconnect") {
    auto logon = [&]() {
      Message message;
      message.getHeader().setField(BeginString("FIX.4.2"));
      message.getHeader().setField(MsgType(MsgType_Logon));
      message.getHeader().setField(SenderCompID("PEER"));
      message.getHeader().setField(TargetCompID("STATUS"));
      message.getHeader().setField(MsgSeqNum(session.getExpectedTargetNum()));
      message.getHeader().setField(SendingTime(now));
      message.setField(EncryptMethod(0));
      message.setField(HeartBtInt(30));
      session.next(message, now);
    };
    logon();
    REQUIRE(session.receivedLogon());
    REQUIRE(session.sentLogon());
    REQUIRE(session.isLoggedOn());
    session.disconnect();

    testConcurrentStatus(
        [&](int) {
          logon();
          session.disconnect();
        },
        [&]() { return session.receivedLogon() & session.sentLogon() & session.isLoggedOn(); },
        1000);
    CHECK_FALSE(session.receivedLogon());
    CHECK_FALSE(session.sentLogon());
    CHECK_FALSE(session.isLoggedOn());
    logon();
    CHECK(session.receivedLogon());
    CHECK(session.sentLogon());
    CHECK(session.isLoggedOn());
  }
}

TEST_CASE("SessionStateTests") {
  class TestLog : public Log {
  public:
    void clear() { events = 0; }
    void backup() { eventsBackup = events; }
    void onIncoming(const std::string &) {}
    void onOutgoing(const std::string &) {}
    void onEvent(const std::string &) {}

    int events = 0;
    int eventsBackup = 0;
  };

  SECTION("ClearSessionLog_StateLogNotNull_LogCleared") {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state(UtcTimeStamp::now());
    state.log(&log);

    state.clear();

    CHECK(0 == log.events);
  }

  SECTION("clearSessionLog_StateLogIsNull_LogNotCleared") {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state(UtcTimeStamp::now());

    state.clear();

    CHECK(5 == log.events);
  }

  SECTION("backupSessionLog_StateLogNotNull_LogBackedUp") {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state(UtcTimeStamp::now());
    state.log(&log);

    state.backup();

    CHECK(5 == log.eventsBackup);
  }

  SECTION("backupSessionLog_StateLogIsNull_LogBackedUp") {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state(UtcTimeStamp::now());

    state.backup();

    CHECK(0 == log.eventsBackup);
  }
}
