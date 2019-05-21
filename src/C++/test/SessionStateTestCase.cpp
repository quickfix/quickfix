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

#include <UnitTest++.h>
#include <SessionState.h>
#include <string>
#include <sstream>
#include "Log.h"

using namespace FIX;

SUITE(SessionStateTests)
{

  class TestLog : public Log
  {
  public:
    void clear() {
      events = 0;
    }
    void backup() {
      eventsBackup = events;
    }
    void onIncoming( const std::string& ) {}
    void onOutgoing( const std::string& ) {}
    void onEvent( const std::string& ) {}

    int events = 0;
    int eventsBackup = 0;
  };

  TEST(ClearSessionLog_StateLogNotNull_LogCleared)
  {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state;
    state.log(&log);

    state.clear();

    CHECK_EQUAL(0, log.events);
  }

  TEST(ClearSessionLog_StateLogIsNull_LogNotCleared)
  {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state;

    state.clear();

    CHECK_EQUAL(5, log.events);
  }

  TEST(BackupSessionLog_StateLogNotNull_LogBackedUp)
  {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state;
    state.log(&log);

    state.backup();

    CHECK_EQUAL(5, log.eventsBackup);
  }

  TEST(BackupSessionLog_StateLogIsNull_LogBackedUp)
  {
    SessionSettings settings;
    TestLog log;
    log.events = 5;

    SessionState state;

    state.backup();

    CHECK_EQUAL(0, log.eventsBackup);
  }
}
