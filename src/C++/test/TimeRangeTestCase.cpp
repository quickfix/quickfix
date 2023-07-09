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
#include <TimeRange.h>
#include <FieldConvertors.h>

using namespace FIX;

SUITE(TimeRangeTests)
{

TEST(isInRange)
{
  UtcTimeOnly start( 3, 0, 0 );
  UtcTimeOnly end( 18, 0, 0 );

  UtcTimeStamp now( 10, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 18, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 2, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 18, 0, 1, 10, 10, 2000 );
  CHECK( !TimeRange::isInRange( start, end, now ) );

  start = UtcTimeOnly( 18, 0, 0 );
  end = UtcTimeOnly( 3, 0, 0 );
  now = UtcTimeStamp( 18, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 3, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 4, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInRange( start, end, now ) );

  now = UtcTimeStamp( 17, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInRange( start, end, now ) );
}

TEST(isInRange_UseLocalTime)
{
  LocalTimeOnly start( 0, 0, 0 );
  LocalTimeOnly end( 1, 0, 0 );

  UtcTimeStamp now( 10, 0, 0, 10, 10, 2000 );
  TimeRange timeRange(start, end, 1, 1);
  CHECK( timeRange.isInRange( now ) );

}

TEST(isInRangeWithDay)
{
  UtcTimeOnly startTime( 3, 0, 0 );
  UtcTimeOnly endTime( 18, 0, 0 );
  int startDay = 2;
  int endDay = 5;

  UtcTimeStamp now( 2, 0, 0, 28, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 0, 27, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 59, 59, 26, 7, 2004 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 29, 7, 2004 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));

  startDay = 5;
  endDay = 2;

  now = UtcTimeStamp( 2, 0, 0, 24, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 0, 0, 28, 7, 2004 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 0, 22, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 0, 26, 7, 2004 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 59, 59, 22, 7, 2004 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 26, 7, 2004 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));

  startTime = UtcTimeOnly( 9, 1, 0 );
  endTime = UtcTimeOnly( 8, 59, 0 );
  startDay = 1;
  endDay = 1;

  now = UtcTimeStamp( 8, 59, 0, 3, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 8, 59, 1, 3, 12, 2006 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 9, 1, 0, 3, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 9, 0, 0, 3, 12, 2006 );
  CHECK(!TimeRange::isInRange(startTime, endTime, startDay, endDay, now));

  now = UtcTimeStamp( 8, 59, 0, 4, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 8, 59, 1, 4, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 9, 1, 0, 4, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 9, 0, 0, 4, 12, 2006 );
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
}

TEST(isInRangeWithDay_SameDay)
{
  UtcTimeOnly startTime( 3, 0, 0 );
  UtcTimeOnly endTime( 18, 0, 0 );
  int startDay = 2;
  int endDay = 2;

  UtcTimeStamp now( 2, 0, 0, 28, 7, 2004 );
  TimeRange timeRange(startTime, endTime, startDay, endDay);
  CHECK(TimeRange::isInRange(startTime, endTime, startDay, endDay, now));
}

TEST(isInRangeWithDay_PastSundayOverlapSession)
{
    //Start Friday 00:00:00, end Thursday 23:59:59
    UtcTimeOnly startTime( 0, 0, 0 );
    UtcTimeOnly endTime( 23, 59, 59 );
    int startDay = 6;
    int endDay = 5;

    //Given creation happened on a Friday at 00:00:01, and a login the next day Saturday
    UtcTimeStamp creation( 0, 0, 1, 23, 4, 2021 );
    UtcTimeStamp expSameSession1( 8, 30, 0, 24, 4, 2021 );
    CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, creation, expSameSession1) );

    //Then a login request on a Monday at 08:30:00 should be part of the same session
    UtcTimeStamp expSameSession2( 8, 30, 0, 26, 4, 2021 );
    CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, creation, expSameSession2) );

    //But a login request on the following Friday at 08:30:00 should be part of a different session
    UtcTimeStamp expNextSession( 8, 30, 0, 30, 4, 2021 );
    CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, creation, expNextSession) );

    //And a login request on the preceding Thursday at 23:59:58 should be part of a different session
    UtcTimeStamp expPrevSession( 23, 59, 58, 22, 4, 2021 );
    CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, creation, expPrevSession) );
}

TEST(isInSameRange)
{
  // start time is less than end time
  UtcTimeOnly start( 3, 0, 0 );
  UtcTimeOnly end( 18, 0, 0 );

  // same time
  UtcTimeStamp time1( 10, 0, 0, 10, 10, 2000 );
  UtcTimeStamp time2( 10, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // time 2 in same session but greater
  time1 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 11, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // time 2 in same session but less
  time1 = UtcTimeStamp( 11, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // time 1 not in session
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( !TimeRange::isInSameRange( start, end, time2, time1 ) );

  // time 2 not in session
  time1 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 2, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( !TimeRange::isInSameRange( start, end, time2, time1 ) );

  // start time is greater than end time
  start = UtcTimeOnly( 18, 0, 0 );
  end = UtcTimeOnly( 3, 0, 0 );

  // same session same day
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 20, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // same session time 2 is in next day
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 2, 0, 0, 11, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // same session time 1 is in next day
  time1 = UtcTimeStamp( 2, 0, 0, 11, 10, 2000 );
  time2 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  CHECK( TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( TimeRange::isInSameRange( start, end, time2, time1 ) );

  // time 1 is 25 hours greater than time 2
  time1 = UtcTimeStamp( 21, 0, 0, 11, 10, 2000 );
  time2 = UtcTimeStamp( 20, 0, 0, 10, 10, 2000 );
  CHECK( !TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( !TimeRange::isInSameRange( start, end, time2, time1 ) );

  // start time is greater than end time
  start = UtcTimeOnly( 6, 0, 0 );
  end = UtcTimeOnly( 6, 0, 0 );
  time1 = UtcTimeStamp( 19, 10, 0, 1, 13, 2004 );
  time2 = UtcTimeStamp( 19, 06, 0, 1, 14, 2004 );
  CHECK( !TimeRange::isInSameRange( start, end, time1, time2 ) );
  CHECK( !TimeRange::isInSameRange( start, end, time2, time1 ) );
}

TEST(isInSameRange_UseLocalTime)
{
  LocalTimeOnly start( 0, 0, 0 );
  LocalTimeOnly end( 1, 0, 0 );

  UtcTimeStamp time1 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  UtcTimeStamp time2 = UtcTimeStamp( 11, 0, 0, 10, 10, 2000 );
  TimeRange timeRange(start, end, 1, 1);

  CHECK( timeRange.isInSameRange(time1, time2) );

}

TEST(isInSameRangeWithDay)
{
  UtcTimeOnly startTime( 3, 0, 0 );
  UtcTimeOnly endTime( 18, 0, 0 );
  int startDay = 2;
  int endDay = 5;

  UtcTimeStamp time1( 3, 0, 0, 27, 7, 2004 );
  UtcTimeStamp time2( 3, 0, 0, 25, 7, 2004 );
  CHECK( !TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 3, 0, 0, 31, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  CHECK( !TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  CHECK( TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 26, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  CHECK( TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 2, 0, 0, 29, 7, 2004 );
  CHECK( TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 20, 7, 2004 );
  CHECK( !TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 2, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 20, 7, 2004 );
  CHECK( !TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 2, 0, 0, 26, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 19, 7, 2004 );
  CHECK( !TimeRange::isInSameRange
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  // Reset start/end time so that they fall within an hour of midnight
  startTime = UtcTimeOnly(0, 5, 0);
  endTime = UtcTimeOnly(23, 45, 0);

  // Make it a week-long session
  startDay = 1;
  endDay = 7;

  // Check that ST-->DST (Sunday is missing one hour) is handled
  time1 = UtcTimeStamp(0, 0, 0, 4, 4, 2006);
  time2 = UtcTimeStamp(1, 0, 0, 3, 4, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Check that DST-->ST (Sunday has an extra hour) is handled
  time1 = UtcTimeStamp(0, 0, 0, 30, 10, 2006);
  time2 = UtcTimeStamp(1, 0, 0, 31, 10, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Check that everything works across a year boundary
  time1 = UtcTimeStamp(10, 10, 10, 31, 12, 2006);
  time2 = UtcTimeStamp(10, 10, 10, 1, 1, 2007);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Check that "missing" start and end days are handled as isSameSession without days
  startDay = -1;
  endDay = -1;
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  startDay = 5;
  endDay = 5;
  startTime = UtcTimeOnly(22, 28, 20);
  endTime = UtcTimeOnly(22, 28, 5);
  time1 = UtcTimeStamp(22, 28, 2, 16, 1, 2020); // session
  time2 = UtcTimeStamp(22, 30, 47, 16, 1, 2020); // date
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  startTime = UtcTimeOnly(22, 24, 0);
  endTime = UtcTimeOnly(22, 15, 30);
  time1 = UtcTimeStamp(18, 15, 15, 15, 1, 2020); // session
  time2 = UtcTimeStamp(22, 26, 20, 16, 1, 2020); // date
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Session days are the same
  startDay = 1;
  endDay = 1;
  startTime = UtcTimeOnly(9, 1, 0);
  endTime = UtcTimeOnly(8, 59, 0);
  time1 = UtcTimeStamp(9, 1, 0, 3, 12, 2006);
  time2 = UtcTimeStamp(9, 1, 0, 3, 12, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(9, 1, 0, 10, 12, 2006);
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(9, 1, 0, 4, 12, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  time1 = UtcTimeStamp(10, 1, 0, 3, 12, 2006);
  time2 = UtcTimeStamp(9, 1, 0, 10, 12, 2006);
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(8, 1, 0, 10, 12, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(8, 1, 0, 5, 12, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Session days are the same, and not today
  startDay = 2;
  endDay = 2;
  startTime = UtcTimeOnly(9, 1, 0);
  endTime = UtcTimeOnly(8, 59, 0);
  time1 = UtcTimeStamp(9, 1, 0, 3, 12, 2006); // day before swap
  time2 = UtcTimeStamp(9, 1, 0, 5, 12, 2006);
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(9, 1, 0, 11, 12, 2006);
  CHECK( !TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
  time2 = UtcTimeStamp(8, 1, 0, 3, 12, 2006);
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  // Re-creating weekend cert reset
  startDay = 2;
  endDay = 2;
  startTime = UtcTimeOnly(17, 0, 0);
  endTime = UtcTimeOnly(16, 02, 30);
  time1 = UtcTimeStamp(23, 4, 3, 17, 1, 2020); // 20200117-23:04:03.008 -> H M S, D M Y
  time2 = UtcTimeStamp(6, 0, 0, 19, 1, 2020); // 20200119-06:00:00
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );

  startDay = 4;
  endDay = 4;
  startTime = UtcTimeOnly(17, 0, 0);
  endTime = UtcTimeOnly(16, 02, 30);
  time1 = UtcTimeStamp(23, 4, 3, 17, 1, 2020); // 20200117-23:04:03.008 -> H M S, D M Y
  time2 = UtcTimeStamp(6, 0, 0, 20, 1, 2020); // 20200120-06:00:00
  CHECK( TimeRange::isInSameRange(startTime, endTime, startDay, endDay, time1, time2) );
}

}
