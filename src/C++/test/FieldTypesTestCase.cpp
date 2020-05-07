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

#include <gtest/gtest.h>
#include <FieldTypes.h>

using namespace FIX;

TEST(FieldTypesTests, DateTime_getFraction_NanoSecond)
{
  FIX::DateTime dateTime;
  dateTime.setHMS(1,0,0,123456789,9);

  ASSERT_EQ(1,dateTime.getFraction(1));
  ASSERT_EQ(12,dateTime.getFraction(2));
  ASSERT_EQ(123,dateTime.getFraction(3));
  ASSERT_EQ(1234,dateTime.getFraction(4));
  ASSERT_EQ(12345,dateTime.getFraction(5));
  ASSERT_EQ(123456,dateTime.getFraction(6));
  ASSERT_EQ(1234567,dateTime.getFraction(7));
  ASSERT_EQ(12345678,dateTime.getFraction(8));
  ASSERT_EQ(123456789,dateTime.getFraction(9));
  ASSERT_EQ(123456789,dateTime.getFraction(25));

}

TEST(FieldTypesTests, DateTime_convertToNanos)
{

  ASSERT_EQ(1000000000,FIX::DateTime::convertToNanos(1,0));
  ASSERT_EQ(100000000,FIX::DateTime::convertToNanos(1,1));
  ASSERT_EQ(10000000,FIX::DateTime::convertToNanos(1,2));
  ASSERT_EQ(1000000,FIX::DateTime::convertToNanos(1,3));
  ASSERT_EQ(100000,FIX::DateTime::convertToNanos(1,4));
  ASSERT_EQ(10000,FIX::DateTime::convertToNanos(1,5));
  ASSERT_EQ(1000,FIX::DateTime::convertToNanos(1,6));
  ASSERT_EQ(100,FIX::DateTime::convertToNanos(1,7));
  ASSERT_EQ(10,FIX::DateTime::convertToNanos(1,8));
  ASSERT_EQ(1,FIX::DateTime::convertToNanos(1,9));
  ASSERT_EQ(1,FIX::DateTime::convertToNanos(1,25));

}

TEST(FieldTypesTests, DateTime_getTimeT)
{
  FIX::DateTime dateTime;
  dateTime.setYMD(2019,5,6);
  dateTime.setHMS(1,0,0,123456789,9);

  ASSERT_EQ(1557104400, dateTime.getTimeT());
}

TEST(FieldTypesTests, DateTime_addAndSubtractSeconds)
{
  FIX::DateTime addSeconds(2019,5,6,23,1,1,0);
  addSeconds += 7200; // 2 hours in seconds
  ASSERT_EQ(2019, addSeconds.getYear());
  ASSERT_EQ(5, addSeconds.getMonth());
  ASSERT_EQ(7, addSeconds.getDay());
  ASSERT_EQ(1, addSeconds.getHour());
  ASSERT_EQ(1, addSeconds.getMinute());
  ASSERT_EQ(1, addSeconds.getSecond());

  FIX::DateTime subtractSeconds(2019,5,6,1,1,1,0);
  subtractSeconds += -7200; // 2 hours in seconds

  ASSERT_EQ(2019, subtractSeconds.getYear());
  ASSERT_EQ(5, subtractSeconds.getMonth());
  ASSERT_EQ(5, subtractSeconds.getDay());
  ASSERT_EQ(23, subtractSeconds.getHour());
  ASSERT_EQ(1, subtractSeconds.getMinute());
  ASSERT_EQ(1, subtractSeconds.getSecond());
}

TEST(FieldTypesTests, DateTime_fromLocalTimeT)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::DateTime nonFractionalDateTime;
  nonFractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime);

  ASSERT_TRUE(nonFractionalDateTime.m_date > 0);
  ASSERT_TRUE(nonFractionalDateTime.m_time > 0);

  FIX::DateTime fractionalDateTime = FIX::DateTime::fromLocalTimeT(currTime,1,1);

  ASSERT_TRUE(fractionalDateTime.m_date > 0);
  ASSERT_TRUE(fractionalDateTime.m_time > 0);

}

TEST(FieldTypesTests, DateTime_fromTm)
{
  tm expectedTm;
  expectedTm.tm_year = 119;
  expectedTm.tm_mon = 5;
  expectedTm.tm_mday = 6;
  expectedTm.tm_hour = 1;
  expectedTm.tm_min = 1;
  expectedTm.tm_sec = 1;

  FIX::DateTime dateTime = FIX::DateTime::fromTm(expectedTm);

  ASSERT_EQ(2019, dateTime.getYear());
  ASSERT_EQ(6, dateTime.getMonth());
  ASSERT_EQ(6, dateTime.getDate());
  ASSERT_EQ(1, dateTime.getHour());
  ASSERT_EQ(1, dateTime.getMinute());
  ASSERT_EQ(1, dateTime.getSecond());
}

TEST(FieldTypesTests, DateTime_nowLocal)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::DateTime localTime = FIX::DateTime::nowLocal();

  ASSERT_TRUE(localTime.m_date > 0);
  ASSERT_TRUE(localTime.m_time > 0);
}

TEST(FieldTypesTests, LocalTimeStamp_fromTm)
{
  time_t currTime;
  currTime = time(NULL);
  localtime(&currTime);

  FIX::LocalTimeStamp timestamp(currTime);

  ASSERT_TRUE(timestamp.m_date > 0);
  ASSERT_TRUE(timestamp.m_time > 0);
}
