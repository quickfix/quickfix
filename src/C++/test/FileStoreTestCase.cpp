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

#include "MessageStoreTestCase.h"
#include "TestHelper.h"
#include <FileStore.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

struct fileStoreFixture {
  fileStoreFixture(bool resetBefore, bool reset)
      : factory("store") {
    if (resetBefore) {
      deleteSession("SETGET", "TEST");
    }

    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("SETGET"), TargetCompID("TEST"));

    object = factory.create(UtcTimeStamp::now(), sessionID);

    this->resetAfter = reset;
  }

  ~fileStoreFixture() {
    factory.destroy(object);

    if (resetAfter) {
      deleteSession("SETGET", "TEST");
    }
  }

  FileStoreFactory factory;
  MessageStore *object;
  bool resetAfter;
};

struct resetBeforeFileStoreFixture : fileStoreFixture {
  resetBeforeFileStoreFixture()
      : fileStoreFixture(true, false) {}
};

struct resetAfterFileStoreFixture : fileStoreFixture {
  resetAfterFileStoreFixture()
      : fileStoreFixture(false, true) {}
};

struct resetBeforeAndAfterFileStoreFixture : fileStoreFixture {
  resetBeforeAndAfterFileStoreFixture()
      : fileStoreFixture(true, true) {}
};

struct noResetFileStoreFixture : fileStoreFixture {
  noResetFileStoreFixture()
      : fileStoreFixture(false, false) {}
};

struct resetBeforeAndAfterWithTestFileManager : resetBeforeAndAfterFileStoreFixture {
  resetBeforeAndAfterWithTestFileManager()
      : resetBeforeAndAfterFileStoreFixture() {
    factory.destroy(object);

    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("SETGET"), TargetCompID("TEST"), "Test");

    object = new FileStore(UtcTimeStamp::now(), "store", sessionID);
  }
};

TEST_CASE_METHOD(resetBeforeFileStoreFixture, "resetFileStoreTests"){
    SECTION("setGet"){CHECK_MESSAGE_STORE_SET_GET}

    SECTION("setGetUint64"){CHECK_MESSAGE_STORE_SET_GET_UINT64}

    SECTION("setGetWithQuote"){CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE}

    SECTION("other"){CHECK_MESSAGE_STORE_OTHER}

    SECTION("otherUint64"){CHECK_MESSAGE_STORE_OTHER_UINT64}

    SET_SEQUENCE_NUMBERS}

TEST_CASE_METHOD(noResetFileStoreFixture, "noResetFileStoreTests") {
  SECTION("reload"){CHECK_MESSAGE_STORE_RELOAD}

  SECTION("refresh") {
    CHECK_MESSAGE_STORE_RELOAD
  }
}

TEST_CASE_METHOD(noResetFileStoreFixture, "FileStoreTests_3") {
  SECTION("refresh") { CHECK_MESSAGE_STORE_REFRESH }
}

TEST_CASE_METHOD(resetAfterFileStoreFixture, "FileStoreTests_4") {
  SECTION("reload") { CHECK_MESSAGE_STORE_RELOAD }
}

TEST_CASE_METHOD(resetBeforeAndAfterFileStoreFixture, "FileStoreTests_5") {
  SECTION("FileStore_refresh_reset") {
    // Init store with 3 messages
    CHECK_MESSAGE_STORE_SET_GET
    object->get(1, 10, messages);

    // Still 3 messages after refresh
    object->refresh();
    object->get(1, 10, messages);

    // Should be 0 messages after reset
    object->reset(UtcTimeStamp::now());
    object->get(1, 10, messages);
  }
}

TEST_CASE_METHOD(resetBeforeAndAfterWithTestFileManager, "FileStoreTests_6") {
  SECTION("Refresh_DeleteFileStartup_NoException") {
    try {
      object->refresh();
    } catch (Exception &e) {
      CHECK(false);
      throw e;
    }
  }

  SECTION("Reset_DeleteFileStartup_NoException") {
    try {
      object->reset(UtcTimeStamp::now());
    } catch (Exception &e) {
      CHECK(false);
      throw e;
    }
  }

  SECTION("FileStoreCreationTime") {
    UtcTimeStamp timeStamp = object->getCreationTime();
    UtcTimeStamp currentTimeStamp = UtcTimeStamp::now();
    CHECK(currentTimeStamp.getYear() == timeStamp.getYear());
  }

  SECTION("FileStoreFactory_FileStoreFromDictionary") {
    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("SETGET"), TargetCompID("TEST"));
    Dictionary dictionary;
    dictionary.setString("ConnectionType", "acceptor");
    dictionary.setString("FileStorePath", "store");

    SessionSettings settings;
    settings.set(sessionID, dictionary);
    FileStoreFactory fileStoreFactory(settings);

    MessageStore *fileStore = fileStoreFactory.create(UtcTimeStamp::now(), sessionID);
    CHECK(fileStore != nullptr);
  }
}