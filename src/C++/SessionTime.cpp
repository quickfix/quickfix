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
                            const UtcTimeOnly &endTime )
  : m_startTime( startTime ), m_endTime( endTime ) {}

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
      return std::abs(time1 - time2) < UTC_DAY;
    return false;
    
    QF_STACK_POP
  }

}
