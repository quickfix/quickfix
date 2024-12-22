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
#include <MessageStore.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

struct memoryStoreFixture {
  memoryStoreFixture(bool reset) {
    SessionID sessionID(BeginString("FIX.4.2"), SenderCompID("SETGET"), TargetCompID("TEST"));

    try {
      object = factory.create(UtcTimeStamp::now(), sessionID);
    } catch (std::exception &e) {
      std::cerr << e.what() << std::endl;
      throw;
    }

    if (reset) {
      object->reset(UtcTimeStamp::now());
    }

    this->resetAfter = reset;
  }

  ~memoryStoreFixture() { factory.destroy(object); }

  MemoryStoreFactory factory;
  MessageStore *object;
  bool resetAfter;
};

struct noResetMemoryStoreFixture : memoryStoreFixture {
  noResetMemoryStoreFixture()
      : memoryStoreFixture(false) {}
};

struct resetMemoryStoreFixture : memoryStoreFixture {
  resetMemoryStoreFixture()
      : memoryStoreFixture(true) {}
};

TEST_CASE_METHOD(resetMemoryStoreFixture, "resetMemoryStoreTests") {
  SECTION("setGet") { CHECK_MESSAGE_STORE_SET_GET; }

  SECTION("setGetWithQuote") { CHECK_MESSAGE_STORE_SET_GET_WITH_QUOTE; }

  SECTION("other") { CHECK_MESSAGE_STORE_OTHER }
}