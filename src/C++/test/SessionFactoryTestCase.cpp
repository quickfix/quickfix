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

#include <Application.h>
#include <MessageStore.h>
#include <Session.h>
#include <SessionFactory.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

namespace {
// Hands out a store that was created on an earlier day and already holds
// sequence numbers and a message, like a FileStore reopened the next day.
class PreviousDayStoreFactory : public MessageStoreFactory {
public:
  MessageStore *create(const UtcTimeStamp &now, const SessionID &) override {
    UtcTimeStamp creationTime = now;
    creationTime.setYMD(2020, 1, 1);
    MemoryStore *store = new MemoryStore(creationTime);
    store->set(7, "retained-message");
    store->setNextSenderMsgSeqNum(8);
    store->setNextTargetMsgSeqNum(9);
    return store;
  }
  void destroy(MessageStore *store) override { delete store; }
};
} // namespace

TEST_CASE("SessionFactoryTests") {
  SECTION("validConfiguration") {
    NullApplication application;
    MemoryStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(START_TIME, "12:00:00");
    settings.setString(END_TIME, "12:00:00");
    settings.setString(HEARTBTINT, "30");
    object.destroy(object.create(sessionID, settings));
  }

  SECTION("startDayAndEndDayAreDifferent") {
    NullApplication application;
    MemoryStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(START_TIME, "12:00:00");
    settings.setString(END_TIME, "12:00:00");
    settings.setString(START_DAY, "Sun");
    settings.setString(END_DAY, "Mon");
    settings.setString(HEARTBTINT, "30");
    object.destroy(object.create(sessionID, settings));
  }

  SECTION("nonStopSession") {
    NullApplication application;
    MemoryStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(NON_STOP_SESSION, "Y");
    settings.setString(HEARTBTINT, "30");

    Session *session = nullptr;
    CHECK_NOTHROW(session = object.create(sessionID, settings));
    CHECK(session->getIsNonStopSession());
    object.destroy(session);
  }

  SECTION("nonStopSessionKeepsPreviousDayStore") {
    NullApplication application;
    PreviousDayStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(NON_STOP_SESSION, "Y");
    settings.setString(HEARTBTINT, "30");

    Session *session = object.create(sessionID, settings);
    CHECK(session->getIsNonStopSession());
    CHECK(session->getExpectedSenderNum() == 8);
    CHECK(session->getExpectedTargetNum() == 9);
    std::vector<std::string> messages;
    session->getStore()->get(7, 7, messages);
    CHECK(messages == std::vector<std::string>{"retained-message"});
    object.destroy(session);
  }

  SECTION("scheduledSessionResetsPreviousDayStore") {
    NullApplication application;
    PreviousDayStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(START_TIME, "00:00:00");
    settings.setString(END_TIME, "00:00:00");
    settings.setString(HEARTBTINT, "30");

    Session *session = object.create(sessionID, settings);
    CHECK_FALSE(session->getIsNonStopSession());
    CHECK(session->getExpectedSenderNum() == 1);
    CHECK(session->getExpectedTargetNum() == 1);
    std::vector<std::string> messages;
    session->getStore()->get(7, 7, messages);
    CHECK(messages.empty());
    object.destroy(session);
  }

  SECTION("wrongNonStopAndTime") {
    NullApplication application;
    MemoryStoreFactory messageStoreFactory;
    SessionFactory object(application, messageStoreFactory, 0);

    SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
    Dictionary settings;
    settings.setString(CONNECTION_TYPE, "initiator");
    settings.setString(USE_DATA_DICTIONARY, "N");
    settings.setString(NON_STOP_SESSION, "Y");
    settings.setString(START_TIME, "12:00:00");
    settings.setString(END_TIME, "12:00:00");
    settings.setString(HEARTBTINT, "30");

    CHECK_THROWS(object.create(sessionID, settings));
  }
}
