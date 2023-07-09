/* -*- C++ -*- */

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

#ifndef FIX_TIMERANGE_H
#define FIX_TIMERANGE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "FieldTypes.h"

namespace FIX
{
/// Keeps track of when session is active
class TimeRange
{
public:
  TimeRange( const UtcTimeOnly& startTime, const UtcTimeOnly& endTime,
               int startDay = -1, int endDay = -1 );

  TimeRange( const LocalTimeOnly& startTime, const LocalTimeOnly& endTime,
               int startDay = -1, int endDay = -1 );

  static bool isInRange( const UtcTimeOnly& start,
                         const UtcTimeOnly& end,
                         const DateTime& time )
  {
    return isInRange
      ( (DateTime)start, (DateTime)end, (DateTime)time );
  }

  static bool isInRange( const UtcTimeOnly& startTime,
                         const UtcTimeOnly& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time,
                         int day )
  {
    return isInRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time, day );
  }

  static bool isInRange( const UtcTimeOnly& startTime,
                         const UtcTimeOnly& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time )
  {
    return isInRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time );
  }

  static bool isInSameRange( const UtcTimeOnly& start,
                             const UtcTimeOnly& end,
                             const DateTime& time1,
                             const DateTime& time2 )
  {
    return isInSameRange
      ( (DateTime)start, (DateTime)end, 
        (DateTime)time1, (DateTime)time2 );
  }

  static bool isInSameRange( const UtcTimeOnly& startTime,
                             const UtcTimeOnly& endTime,
                             int startDay,
                             int endDay,
                             const DateTime& time1,
                             const DateTime& time2 )
  {
    return isInSameRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time1, (DateTime)time2 );
  }

  static bool isInRange( const LocalTimeOnly& start,
                         const LocalTimeOnly& end,
                         const DateTime& time )
  {
    return isInRange
      ( (DateTime)start, (DateTime)end, (DateTime)time );
  }

  static bool isInRange( const LocalTimeOnly& startTime,
                         const LocalTimeOnly& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time,
                         int day )
  {
    return isInRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time, day );
  }

  static bool isInRange( const LocalTimeOnly& startTime,
                         const LocalTimeOnly& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time )
  {
    return isInRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time );
  }

  static bool isInSameRange( const LocalTimeOnly& start,
                             const LocalTimeOnly& end,
                             const DateTime& time1,
                             const DateTime& time2 )
  {
    return isInSameRange
      ( (DateTime)start, (DateTime)end, 
        (DateTime)time1, (DateTime)time2 );
  }

  static bool isInSameRange( const LocalTimeOnly& startTime,
                             const LocalTimeOnly& endTime,
                             int startDay,
                             int endDay,
                             const DateTime& time1,
                             const DateTime& time2 )
  {
    return isInSameRange
      ( (DateTime)startTime, (DateTime)endTime, 
        startDay, endDay, 
        (DateTime)time1, (DateTime)time2 );
  }

private:
  static int getRangeStartDate( const DateTime& time,
                                int startDay,
                                const DateTime& startTime );

  static bool isInRange( const DateTime& start,
                         const DateTime& end,
                         const DateTime& time );

  static bool isInRange( const DateTime& startTime,
                         const DateTime& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time,
                         int day );

  static bool isInRange( const DateTime& startTime,
                         const DateTime& endTime,
                         int startDay,
                         int endDay,
                         const DateTime& time );

  static bool isInSameRange( const DateTime& start,
                             const DateTime& end,
                             const DateTime& time1,
                             const DateTime& time2 );

  static bool isInSameRange( const DateTime& startTime,
                             const DateTime& endTime,
                             int startDay,
                             int endDay,
                             const DateTime& time1,
                             const DateTime& time2 );
public:  
  bool isInRange( const DateTime& dateTime, int day )
  {
    if( m_startDay < 0 && m_endDay < 0 )
      return isInRange( m_startTime, m_endTime, dateTime );
    else
      return isInRange
        ( m_startTime, m_endTime, m_startDay, m_endDay, dateTime, day );
  }

  bool isInRange( const UtcTimeStamp& dateTime )
  {
    if( m_useLocalTime )
    {
      LocalTimeStamp localDateTime( dateTime.getTimeT() );
      return isInRange( localDateTime, localDateTime.getWeekDay() );
    }

    return isInRange( dateTime, dateTime.getWeekDay() );
  }

  bool isInRange( const LocalTimeStamp& dateTime )
  {
    if( !m_useLocalTime )
    {
      LocalTimeStamp utcDateTime( dateTime.getTimeT() );
      return isInRange( utcDateTime, utcDateTime.getWeekDay() );
    }

    return isInRange( dateTime, dateTime.getWeekDay() );
  }

  bool isInSameRange( const UtcTimeStamp& time1, const UtcTimeStamp& time2 )
  {
    if( m_useLocalTime )
    {
      LocalTimeStamp localTime1( time1.getTimeT() );
      LocalTimeStamp localTime2( time2.getTimeT() );
      return isInSameRange( (DateTime)localTime1, (DateTime)localTime2 );
    }

    return isInSameRange( (DateTime)time1, (DateTime)time2 );
  }

  bool isInSameRange( const LocalTimeStamp& time1, const LocalTimeStamp& time2 )
  {
    if( !m_useLocalTime )
    {
      UtcTimeStamp utcTime1( time1.getTimeT() );
      UtcTimeStamp utcTime2( time2.getTimeT() );
      return isInSameRange( (DateTime)utcTime1, (DateTime)utcTime2 );
    }

    return isInSameRange( (DateTime)time1, (DateTime)time2 );
  }

private:
  bool isInSameRange( const DateTime& time1, const DateTime& time2 )
  {
    if( m_startDay < 0 && m_endDay < 0 )
      return isInSameRange( m_startTime, m_endTime, time1, time2 );
    else
      return isInSameRange
        ( m_startTime, m_endTime, m_startDay, m_endDay, time1, time2 );
  }

  UtcTimeOnly m_startTime;
  UtcTimeOnly m_endTime;
  int m_startDay;
  int m_endDay;
  bool m_useLocalTime;
};
}

#endif
