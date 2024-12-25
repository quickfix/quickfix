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

#include <FieldTypes.h>

#include "catch_amalgamated.hpp"

using namespace FIX;

TEST_CASE("FieldTypesTests") {
  SECTION("DateTime_getFraction_NanoSecond") {
    FIX::DateTime dateTime;
    dateTime.setHMS(1, 0, 0, 123456789, 9);

    CHECK(1 == dateTime.getFraction(1));
    CHECK(12 == dateTime.getFraction(2));
    CHECK(123 == dateTime.getFraction(3));
    CHECK(1234 == dateTime.getFraction(4));
    CHECK(12345 == dateTime.getFraction(5));
    CHECK(123456 == dateTime.getFraction(6));
    CHECK(1234567 == dateTime.getFraction(7));
    CHECK(12345678 == dateTime.getFraction(8));
    CHECK(123456789 == dateTime.getFraction(9));
    CHECK(123456789 == dateTime.getFraction(25));
  }

  SECTION("DateTime_convertToNanos") {
    CHECK(1000000000 == FIX::DateTime::convertToNanos(1, 0));
    CHECK(100000000 == FIX::DateTime::convertToNanos(1, 1));
    CHECK(10000000 == FIX::DateTime::convertToNanos(1, 2));
    CHECK(1000000 == FIX::DateTime::convertToNanos(1, 3));
    CHECK(100000 == FIX::DateTime::convertToNanos(1, 4));
    CHECK(10000 == FIX::DateTime::convertToNanos(1, 5));
    CHECK(1000 == FIX::DateTime::convertToNanos(1, 6));
    CHECK(100 == FIX::DateTime::convertToNanos(1, 7));
    CHECK(10 == FIX::DateTime::convertToNanos(1, 8));
    CHECK(1 == FIX::DateTime::convertToNanos(1, 9));
    CHECK(1 == FIX::DateTime::convertToNanos(1, 25));
  }

  SECTION("DateTime_getTimeT") {
    FIX::DateTime dateTime;
    dateTime.setYMD(2019, 5, 6);
    dateTime.setHMS(1, 0, 0, 123456789, 9);

    CHECK(1557104400 == dateTime.getTimeT());
  }

  SECTION("DateTime_addAndSubtractSeconds") {
    int secondsInAnHour = 3600;
    int secondsIn2Hours = 2 * secondsInAnHour;

    FIX::DateTime addSeconds(2019, 5, 6, 23, 1, 1, 0);
    addSeconds += secondsIn2Hours;
    CHECK(2019 == addSeconds.getYear());
    CHECK(5 == addSeconds.getMonth());
    CHECK(7 == addSeconds.getDay());
    CHECK(1 == addSeconds.getHour());
    CHECK(1 == addSeconds.getMinute());
    CHECK(1 == addSeconds.getSecond());

    FIX::DateTime subtractSeconds(2019, 5, 6, 1, 1, 1, 0);
    subtractSeconds += -secondsIn2Hours;
    CHECK(2019 == subtractSeconds.getYear());
    CHECK(5 == subtractSeconds.getMonth());
    CHECK(5 == subtractSeconds.getDay());
    CHECK(23 == subtractSeconds.getHour());
    CHECK(1 == subtractSeconds.getMinute());
    CHECK(1 == subtractSeconds.getSecond());

    int secondsInADay = 86400;
    FIX::DateTime addSecondsDayBoundary(2019, 5, 6, 23, 1, 1, 0);
    addSecondsDayBoundary += secondsInADay;
    CHECK(2019 == addSecondsDayBoundary.getYear());
    CHECK(5 == addSecondsDayBoundary.getMonth());
    CHECK(7 == addSecondsDayBoundary.getDay());
    CHECK(23 == addSecondsDayBoundary.getHour());
    CHECK(1 == addSecondsDayBoundary.getMinute());
    CHECK(1 == addSecondsDayBoundary.getSecond());
  }

  SECTION("DateTime_fromLocalTimeT") {
    time_t currTime;
    currTime = time(NULL);
    localtime(&currTime);

    FIX::DateTime nonFractionalDateTime;
    nonFractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime);

    CHECK(nonFractionalDateTime.m_date > 0);
    CHECK(nonFractionalDateTime.m_time > 0);

    FIX::DateTime fractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime, 1, 1);

    CHECK(fractionalDateTime.m_date > 0);
    CHECK(fractionalDateTime.m_time > 0);
  }

  SECTION("DateTime_fromTm") {
    tm expectedTm;
    expectedTm.tm_year = 119;
    expectedTm.tm_mon = 5;
    expectedTm.tm_mday = 6;
    expectedTm.tm_hour = 1;
    expectedTm.tm_min = 1;
    expectedTm.tm_sec = 1;

    FIX::DateTime dateTime = FIX::DateTime::fromTm(expectedTm);

    CHECK(2019 == dateTime.getYear());
    CHECK(6 == dateTime.getMonth());
    CHECK(6 == dateTime.getDate());
    CHECK(1 == dateTime.getHour());
    CHECK(1 == dateTime.getMinute());
    CHECK(1 == dateTime.getSecond());
  }

  SECTION("DateTime_nowLocal") {
    time_t currTime;
    currTime = time(NULL);
    localtime(&currTime);

    FIX::DateTime localTime = FIX::DateTime::nowLocal();

    CHECK(localTime.m_date > 0);
    CHECK(localTime.m_time > 0);
  }

  SECTION("LocalTimeStamp_fromTm") {
    time_t currTime;
    currTime = time(NULL);
    localtime(&currTime);

    FIX::LocalTimeStamp timestamp(currTime);

    CHECK(timestamp.m_date > 0);
    CHECK(timestamp.m_time > 0);
  }
}