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
#include <FieldTypes.h>

using namespace FIX;

SUITE(FieldTypesTests)
{

TEST(DateTime_getFraction_NanoSecond)
{
  FIX::DateTime dateTime;
  dateTime.setHMS(1,0,0,123456789,9);

  CHECK_EQUAL(1,dateTime.getFraction(1));
  CHECK_EQUAL(12,dateTime.getFraction(2));
  CHECK_EQUAL(123,dateTime.getFraction(3));
  CHECK_EQUAL(1234,dateTime.getFraction(4));
  CHECK_EQUAL(12345,dateTime.getFraction(5));
  CHECK_EQUAL(123456,dateTime.getFraction(6));
  CHECK_EQUAL(1234567,dateTime.getFraction(7));
  CHECK_EQUAL(12345678,dateTime.getFraction(8));
  CHECK_EQUAL(123456789,dateTime.getFraction(9));
  CHECK_EQUAL(123456789,dateTime.getFraction(25));

}

TEST(DateTime_convertToNanos)
{

  CHECK_EQUAL(1000000000,FIX::DateTime::convertToNanos(1,0));
  CHECK_EQUAL(100000000,FIX::DateTime::convertToNanos(1,1));
  CHECK_EQUAL(10000000,FIX::DateTime::convertToNanos(1,2));
  CHECK_EQUAL(1000000,FIX::DateTime::convertToNanos(1,3));
  CHECK_EQUAL(100000,FIX::DateTime::convertToNanos(1,4));
  CHECK_EQUAL(10000,FIX::DateTime::convertToNanos(1,5));
  CHECK_EQUAL(1000,FIX::DateTime::convertToNanos(1,6));
  CHECK_EQUAL(100,FIX::DateTime::convertToNanos(1,7));
  CHECK_EQUAL(10,FIX::DateTime::convertToNanos(1,8));
  CHECK_EQUAL(1,FIX::DateTime::convertToNanos(1,9));
  CHECK_EQUAL(1,FIX::DateTime::convertToNanos(1,25));

}

TEST(DateTime_getTimeT)
{
  FIX::DateTime dateTime;
  dateTime.setYMD(2019,5,6);
  dateTime.setHMS(1,0,0,123456789,9);

  CHECK_EQUAL(1557104400, dateTime.getTimeT());
}

TEST(DateTime_addAndSubtractSeconds)
{
  FIX::DateTime addSeconds(2019,5,6,23,1,1,0);
  addSeconds += 7200; // 2 hours in seconds
  CHECK_EQUAL(2019, addSeconds.getYear());
  CHECK_EQUAL(5, addSeconds.getMonth());
  CHECK_EQUAL(7, addSeconds.getDay());
  CHECK_EQUAL(1, addSeconds.getHour());
  CHECK_EQUAL(1, addSeconds.getMinute());
  CHECK_EQUAL(1, addSeconds.getSecond());

  FIX::DateTime subtractSeconds(2019,5,6,1,1,1,0);
  subtractSeconds += -7200; // 2 hours in seconds

  CHECK_EQUAL(2019, subtractSeconds.getYear());
  CHECK_EQUAL(5, subtractSeconds.getMonth());
  CHECK_EQUAL(5, subtractSeconds.getDay());
  CHECK_EQUAL(23, subtractSeconds.getHour());
  CHECK_EQUAL(1, subtractSeconds.getMinute());
  CHECK_EQUAL(1, subtractSeconds.getSecond());
}

TEST(DateTime_fromLocalTimeT)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::DateTime nonFractionalDateTime;
  nonFractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime);

  CHECK(nonFractionalDateTime.m_date > 0);
  CHECK(nonFractionalDateTime.m_time > 0);

  FIX::DateTime fractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime,1,1);

  CHECK(fractionalDateTime.m_date > 0);
  CHECK(fractionalDateTime.m_time > 0);

}

TEST(DateTime_fromTm)
{
  tm expectedTm;
  expectedTm.tm_year = 119;
  expectedTm.tm_mon = 5;
  expectedTm.tm_mday = 6;
  expectedTm.tm_hour = 1;
  expectedTm.tm_min = 1;
  expectedTm.tm_sec = 1;

  FIX::DateTime dateTime = FIX::DateTime::fromTm(expectedTm);

  CHECK_EQUAL(2019, dateTime.getYear());
  CHECK_EQUAL(6, dateTime.getMonth());
  CHECK_EQUAL(6, dateTime.getDate());
  CHECK_EQUAL(1, dateTime.getHour());
  CHECK_EQUAL(1, dateTime.getMinute());
  CHECK_EQUAL(1, dateTime.getSecond());
}

TEST(DateTime_nowLocal)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::DateTime localTime = FIX::DateTime::nowLocal();

  CHECK(localTime.m_date > 0);
  CHECK(localTime.m_time > 0);
}

TEST(LocalTimeStamp_fromTm)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::LocalTimeStamp timestamp(currTime);

  CHECK(timestamp.m_date > 0);
  CHECK(timestamp.m_time > 0);
}





}


