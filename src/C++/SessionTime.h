/* -*- C++ -*- */

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

#ifndef FIX_SESSIONTIME_H
#define FIX_SESSIONTIME_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "FieldTypes.h"

namespace FIX
{
/// Keeps track of when session is active
class SessionTime
{
public:
  SessionTime( const UtcTimeOnly& startTime, const UtcTimeOnly &endTime,
               int startDay = -1, int endDay = -1 );

  static bool isSessionTime( const UtcTimeOnly& start, 
                             const UtcTimeOnly& end,
                             const UtcTimeStamp& time );

  static bool isSessionTime( const UtcTimeOnly& startTime, 
                             const UtcTimeOnly& endTime,
                             int startDay,
                             int endDay,
                             const UtcTimeStamp& time );

  static bool isSameSession( const UtcTimeOnly& start, const UtcTimeOnly& end,
                             const UtcTimeStamp& time1,
                             const UtcTimeStamp& time2 );

  bool isSessionTime() 
    { return isSessionTime( m_startTime, m_endTime, UtcTimeStamp() ); }
  bool isSameSession( const UtcTimeStamp& time1, const UtcTimeStamp& time2 )
    { return isSameSession( m_startTime, m_endTime, time1, time2 ); }

private:
  UtcTimeOnly m_startTime;
  UtcTimeOnly m_endTime;
  int m_startDay;
  int m_endDay;
};
}

#endif
