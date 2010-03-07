/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "TimeRange.h"
#include "Utility.h"

namespace FIX
{
  TimeRange::TimeRange( const UtcTimeOnly& startTime,
                        const UtcTimeOnly& endTime,
                        int startDay,
                        int endDay )
  : m_startTime( startTime ), m_endTime( endTime ),
    m_startDay( startDay ), m_endDay( endDay )
  {
    if( startDay > 0
        && endDay > 0
        && startDay == endDay
        && endTime > startTime )
    { m_endTime = m_startTime; }
  }

  TimeRange::TimeRange( const LocalTimeOnly& startTime,
                        const LocalTimeOnly& endTime,
                        int startDay,
                        int endDay )
  : m_startTime( startTime ), m_endTime( endTime ),
    m_startDay( startDay ), m_endDay( endDay )
  {
    if( startDay > 0
        && endDay > 0
        && startDay == endDay
        && endTime > startTime )
    { m_endTime = m_startTime; }
  }

  bool TimeRange::isInRange( const DateTime& start,
                                   const DateTime& end,
                                   const DateTime& time )
  { QF_STACK_PUSH(TimeRange::isInRange)

    UtcTimeOnly timeOnly (time);

    if( start < end )
      return( timeOnly >= start && timeOnly <= end );
    else
      return( timeOnly >= start || timeOnly <= end );

    QF_STACK_POP
  }

  bool TimeRange::isInRange( const DateTime& startTime,
                                   const DateTime& endTime,
                                   int startDay,
                                   int endDay,
                                   const DateTime& time )
  { QF_STACK_PUSH(TimeRange::isInRange)

    int currentDay = time.getWeekDay();
    UtcTimeOnly timeOnly (time);

    if( startDay == endDay )
    {
      if( currentDay != startDay )
        return true;
      return isInRange( startTime, endTime, time );
    }
    else if( startDay < endDay )
    {
      if( currentDay < startDay || currentDay > endDay )
        return false;
      else if( currentDay == startDay && timeOnly < startTime )
        return false;
      else if( currentDay == endDay && timeOnly > endTime )
        return false;
    }
    else if( startDay > endDay )
    {
      if( currentDay < startDay && currentDay > endDay )
        return false;
      else if( currentDay == startDay && timeOnly < startTime )
        return false;
      else if( currentDay == endDay && timeOnly > endTime )
        return false;
    }
    return true;
    QF_STACK_POP
  }

  bool TimeRange::isInSameRange( const DateTime& start,
                                   const DateTime& end,
                                   const DateTime& time1,
                                   const DateTime& time2 )
  { QF_STACK_PUSH(TimeRange::isInSameRange)

    if( !isInRange( start, end, time1 ) ) return false;
    if( !isInRange( start, end, time2 ) ) return false;

    if( time1 == time2 ) return true;

    if( start < end || start == end )
    {
      UtcDate time1Date( time1 );
      UtcDate time2Date( time2 );
 
      return time1Date == time2Date;
    }
    else
    {
      int sessionLength = DateTime::SECONDS_PER_DAY - (start - end);

      if( time1 > time2 )
      {
        UtcTimeOnly time2TimeOnly = UtcTimeOnly(time2);
	  	  
        long delta = time2TimeOnly - start;
        if( delta < 0 )
          delta = DateTime::SECONDS_PER_DAY - labs(delta);

        return (time1 - time2) < (sessionLength - delta);
      }
      else
      {
        return (time2 - time1) < sessionLength;
      }
    }
	
    QF_STACK_POP
  }

  bool TimeRange::isInSameRange( const DateTime& startTime,
                                 const DateTime& endTime,
                                 int startDay,
                                 int endDay,
                                 const DateTime& time1,
                                 const DateTime& time2 )
  { QF_STACK_PUSH(TimeRange::isInSameRange)

    if( !isInRange( startTime, endTime, startDay, endDay, time1 ) )
      return false;

    if( !isInRange( startTime, endTime, startDay, endDay, time2 ) )
      return false;

    int absoluteDay1 = time1.getJulianDate() - time1.getWeekDay();
    int absoluteDay2 = time2.getJulianDate() - time2.getWeekDay();
    return absoluteDay1 == absoluteDay2;

    QF_STACK_POP
  }
}
