/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#include "SessionTimeTestCase.h"
#include "FieldConvertors.h"

namespace FIX
{
void SessionTimeTestCase::isSessionTime::onRun( SessionTime& object )
{
  UtcTimeOnly start( 3, 0, 0 );
  UtcTimeOnly end( 18, 0, 0 );

  UtcTimeStamp now( 10, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 18, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 2, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 18, 0, 1, 10, 10, 2000 );
  assert( !SessionTime::isSessionTime( start, end, now ) );

  start = UtcTimeOnly( 18, 0, 0 );
  end = UtcTimeOnly( 3, 0, 0 );
  now = UtcTimeStamp( 18, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 3, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 4, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSessionTime( start, end, now ) );

  now = UtcTimeStamp( 17, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSessionTime( start, end, now ) );
}

void SessionTimeTestCase::isSessionTimeWithDay::onRun( SessionTime& object )
{
  UtcTimeOnly startTime( 18, 0, 0 );
  UtcTimeOnly endTime( 3, 0, 0 );  
  int startDay = 7;
  int endDay = 7;

  UtcTimeStamp now( 10, 0, 0, 24, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 0, 24, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 0, 24, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 1, 24, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 24, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 1, 25, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 26, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));

  startTime = UtcTimeOnly( 3, 0, 0 );
  endTime = UtcTimeOnly( 18, 0, 0 );  
  startDay = 2;
  endDay = 5;

  now = UtcTimeStamp( 2, 0, 0, 28, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 0, 27, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 59, 59, 26, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 29, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));

  startDay = 5;
  endDay = 2;

  now = UtcTimeStamp( 2, 0, 0, 24, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 0, 0, 28, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 3, 0, 0, 22, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 0, 26, 7, 2004 );
  assert(SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 2, 59, 59, 22, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
  now = UtcTimeStamp( 18, 0, 1, 26, 7, 2004 );
  assert(!SessionTime::isSessionTime(startTime, endTime, startDay, endDay, now));
}

void SessionTimeTestCase::isSameSession::onRun( SessionTime& object )
{
  // start time is less than end time
  UtcTimeOnly start( 3, 0, 0 );
  UtcTimeOnly end( 18, 0, 0 );

  // same time
  UtcTimeStamp time1( 10, 0, 0, 10, 10, 2000 );
  UtcTimeStamp time2( 10, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // time 2 in same session but greater
  time1 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 11, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // time 2 in same session but less
  time1 = UtcTimeStamp( 11, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // time 1 not in session
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( !SessionTime::isSameSession( start, end, time2, time1 ) );

  // time 2 not in session
  time1 = UtcTimeStamp( 10, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 2, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( !SessionTime::isSameSession( start, end, time2, time1 ) );

  // start time is greater than end time
  start = UtcTimeOnly( 18, 0, 0 );
  end = UtcTimeOnly( 3, 0, 0 );

  // same session same day
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 20, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // same session time 2 is in next day
  time1 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  time2 = UtcTimeStamp( 2, 0, 0, 11, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // same session time 1 is in next day
  time1 = UtcTimeStamp( 2, 0, 0, 11, 10, 2000 );
  time2 = UtcTimeStamp( 19, 0, 0, 10, 10, 2000 );
  assert( SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( SessionTime::isSameSession( start, end, time2, time1 ) );

  // time 1 is 25 hours greater than time 2
  time1 = UtcTimeStamp( 21, 0, 0, 11, 10, 2000 );
  time2 = UtcTimeStamp( 20, 0, 0, 10, 10, 2000 );
  assert( !SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( !SessionTime::isSameSession( start, end, time2, time1 ) );

  // start time is greater than end time
  start = UtcTimeOnly( 6, 0, 0 );
  end = UtcTimeOnly( 6, 0, 0 );
  time1 = UtcTimeStamp( 19, 10, 0, 1, 13, 2004 );
  time2 = UtcTimeStamp( 19, 06, 0, 1, 14, 2004 );
  assert( !SessionTime::isSameSession( start, end, time1, time2 ) );
  assert( !SessionTime::isSameSession( start, end, time2, time1 ) );
}

void SessionTimeTestCase::isSameSessionWithDay::onRun( SessionTime& object )
{
  UtcTimeOnly startTime( 3, 0, 0 );
  UtcTimeOnly endTime( 18, 0, 0 );
  int startDay = 2;
  int endDay = 5;

  UtcTimeStamp time1( 3, 0, 0, 27, 7, 2004 );
  UtcTimeStamp time2( 3, 0, 0, 25, 7, 2004 );
  assert( !SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 3, 0, 0, 31, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  assert( !SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  assert( SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 26, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 27, 7, 2004 );
  assert( SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 2, 0, 0, 29, 7, 2004 );
  assert( SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 10, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 20, 7, 2004 );
  assert( !SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 2, 0, 0, 27, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 20, 7, 2004 );
  assert( !SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );

  time1 = UtcTimeStamp( 2, 0, 0, 26, 7, 2004 );
  time2 = UtcTimeStamp( 3, 0, 0, 19, 7, 2004 );
  assert( !SessionTime::isSameSession
    ( startTime, endTime, startDay, endDay, time1, time2 ) );
}

}
