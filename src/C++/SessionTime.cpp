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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "SessionTime.h"

namespace FIX
{
  SessionTime::SessionTime( const UtcTimeOnly& startTime, 
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

  bool SessionTime::isSessionTime( const UtcTimeOnly& start, 
                                   const UtcTimeOnly& end,
                                   const UtcTimeStamp& time )
  { QF_STACK_PUSH(SessionTime::isSessionTime)

    UtcTimeOnly timeOnly( time, 0 );
    
    if ( start < end )
      return ( timeOnly >= start && timeOnly <= end );
    else
      return ( timeOnly >= start || timeOnly <= end );
    
    QF_STACK_POP
  }

  bool SessionTime::isSessionTime( const UtcTimeOnly& startTime, 
                                   const UtcTimeOnly& endTime,
                                   int startDay,
                                   int endDay,
                                   const UtcTimeStamp& time )
  { QF_STACK_PUSH(SessionTime::isSessionTime)
    
    int currentDay = time.getWeekDay();
    UtcTimeOnly timeOnly( time, 0 );

    if( startDay == endDay )
    {
      if( timeOnly < startTime && timeOnly > endTime )
        return false;
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

  bool SessionTime::isSameSession( const UtcTimeOnly& start,
                                   const UtcTimeOnly& end,
                                   const UtcTimeStamp& time1,
                                   const UtcTimeStamp& time2 )
  { QF_STACK_PUSH(SessionTime::isSameSession)

    if ( !isSessionTime( start, end, time1 ) ) return false;
    if ( !isSessionTime( start, end, time2 ) ) return false;

    if ( time1 == time2 ) return true;

    UtcDate time1Date( time1 );
    UtcDate time2Date( time2 );

    if ( start < end || start == end )
      return time1Date == time2Date;
    else if( start > end )
      return abs(time1 - time2) < UTC_DAY;
    return false;
    
    QF_STACK_POP
  }

  bool SessionTime::isSameSession( const UtcTimeOnly& startTime,
                                   const UtcTimeOnly& endTime,
                                   int startDay,
                                   int endDay,
                                   const UtcTimeStamp& time1,
                                   const UtcTimeStamp& time2 )
  { QF_STACK_PUSH(SessionTime::isSameSession)

    if( !isSessionTime( startTime, endTime, startDay, endDay, time1 ) )
      return false;
    if( !isSessionTime( startTime, endTime, startDay, endDay, time2 ) )
      return false;

    if( time1 == time2 ) return true;

    int time1Range = time1.getWeekDay() - startDay;
    int time2Range = time2.getWeekDay() - startDay;

    if( time1Range == 0 )
    {
      UtcTimeOnly timeOnly = UtcTimeOnly( time1, 0 );
      if( timeOnly < startTime )
        time1Range = 7;
    }

    if( time2Range == 0 )
    {
      UtcTimeOnly timeOnly = UtcTimeOnly( time2, 0 );
      if( timeOnly < startTime )
        time2Range = 7;
    }

    time_t t1 = mktime( (tm*)&time1 ) - UTC_DAY * time1Range;
    time_t t2 = mktime( (tm*)&time2 ) - UTC_DAY * time2Range;
    
    tm tm1;
    localtime_r( &t1, &tm1 );
    tm tm2;
    localtime_r( &t2, &tm2 );

    return tm1.tm_year == tm2.tm_year
           && tm1.tm_yday == tm2.tm_yday;

    QF_STACK_POP
  }
}
