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
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TimeRange.h"
#include "Utility.h"

namespace FIX {
TimeRange::TimeRange(const UtcTimeOnly &startTime, const UtcTimeOnly &endTime, int startDay, int endDay)
    : m_startTime(startTime),
      m_endTime(endTime),
      m_startDay(startDay),
      m_endDay(endDay),
      m_useLocalTime(false) {
  if (startDay > 0 && endDay > 0 && startDay == endDay && endTime > startTime) {
    m_endTime = m_startTime;
  }
}

TimeRange::TimeRange(const LocalTimeOnly &startTime, const LocalTimeOnly &endTime, int startDay, int endDay)
    : m_startTime(startTime),
      m_endTime(endTime),
      m_startDay(startDay),
      m_endDay(endDay),
      m_useLocalTime(true) {
  if (startDay > 0 && endDay > 0 && startDay == endDay && endTime > startTime) {
    m_endTime = m_startTime;
  }
}

int TimeRange::getRangeStartDate(const DateTime &time, int startDay, const DateTime &startTime) {
  if (time.getWeekDay() > startDay) {
    return time.getJulianDate() - time.getWeekDay() + startDay;
  } else if (time.getWeekDay() < startDay) {
    return time.getJulianDate() - time.getWeekDay() + startDay - 7;
  } else {
    if (UtcTimeOnly(time) >= UtcTimeOnly(startTime)) {
      return time.getJulianDate();
    } else {
      return time.getJulianDate() - 7;
    }
  }
}

bool TimeRange::isInRange(const DateTime &start, const DateTime &end, const DateTime &time) {
  UtcTimeOnly timeOnly(time);

  if (start < end) {
    return (timeOnly >= start && timeOnly <= end);
  } else {
    return (timeOnly >= start || timeOnly <= end);
  }
}

bool TimeRange::isInRange(
    const DateTime &startTime,
    const DateTime &endTime,
    int startDay,
    int endDay,
    const DateTime &time,
    int day) {
  UtcTimeOnly timeOnly(time);

  if (startDay == endDay) {
    if (day != startDay) {
      return true;
    }
    return isInRange(startTime, endTime, time);
  } else if (startDay < endDay) {
    if (day < startDay || day > endDay) {
      return false;
    } else if (day == startDay && timeOnly < startTime) {
      return false;
    } else if (day == endDay && timeOnly > endTime) {
      return false;
    }
  } else if (startDay > endDay) {
    if (day < startDay && day > endDay) {
      return false;
    } else if (day == startDay && timeOnly < startTime) {
      return false;
    } else if (day == endDay && timeOnly > endTime) {
      return false;
    }
  }
  return true;
}

bool TimeRange::isInRange(
    const DateTime &startTime,
    const DateTime &endTime,
    int startDay,
    int endDay,
    const DateTime &time) {
  return isInRange(startTime, endTime, startDay, endDay, time, time.getWeekDay());
}

bool TimeRange::isInSameRange(
    const DateTime &start,
    const DateTime &end,
    const DateTime &time1,
    const DateTime &time2) {
  if (!isInRange(start, end, time1)) {
    return false;
  }
  if (!isInRange(start, end, time2)) {
    return false;
  }

  if (time1 == time2) {
    return true;
  }

  if (start < end || start == end) {
    UtcDate time1Date(time1);
    UtcDate time2Date(time2);

    return time1Date == time2Date;
  } else {
    int sessionLength = DateTime::SECONDS_PER_DAY - (start - end);

    if (time1 > time2) {
      UtcTimeOnly time2TimeOnly = UtcTimeOnly(time2);

      long delta = time2TimeOnly - start;
      if (delta < 0) {
        delta = DateTime::SECONDS_PER_DAY - labs(delta);
      }

      return (time1 - time2) < (sessionLength - delta);
    } else {
      return (time2 - time1) < sessionLength;
    }
  }
}

bool TimeRange::isInSameRange(
    const DateTime &startTime,
    const DateTime &endTime,
    int startDay,
    int endDay,
    const DateTime &time1,
    const DateTime &time2) {
  if (!isInRange(startTime, endTime, startDay, endDay, time1, time1.getWeekDay())) {
    return false;
  }

  if (!isInRange(startTime, endTime, startDay, endDay, time2, time2.getWeekDay())) {
    return false;
  }

  if (startDay != endDay) {
    int time1RangeStartDate = getRangeStartDate(time1, startDay, startTime);
    int time2RangeStartDate = getRangeStartDate(time2, startDay, startTime);
    return time1RangeStartDate == time2RangeStartDate;
  } else {
    int day1 = time1.getJulianDate();
    int day2 = time2.getJulianDate();

    // session start and end day are the same day, which is also both of these time's day
    if (time1.getJulianDate() == time2.getJulianDate() && startDay == time1.getWeekDay()) {
      auto time1_utcTimeOnly = UtcTimeOnly(time1);
      auto time2_utcTimeOnly = UtcTimeOnly(time2);
      auto startTime_utcTimeOnly = UtcTimeOnly(startTime);
      auto endTime_utcTimeOnly = UtcTimeOnly(endTime);
      bool bothBeforeEndOfRange = time1_utcTimeOnly <= endTime_utcTimeOnly && time2_utcTimeOnly <= endTime_utcTimeOnly;
      bool bothAfterStartOfRange
          = time1_utcTimeOnly >= startTime_utcTimeOnly && time2_utcTimeOnly >= startTime_utcTimeOnly;
      return bothBeforeEndOfRange || bothAfterStartOfRange;
    }

    // session start and end day are the same day, which is neither of these time's day
    else if (day1 == day2 && startDay != time1.getWeekDay()) {
      return true;
    }

    // session start and end day are 7 days apart, so times greater than 7 days apart means different range
    else if (abs(day1 - day2) > 7) {
      return false;
    }

    else if (abs(day1 - day2) == 7) {
      if (time1.getWeekDay() != startDay) {
        return false;
      }

      // a week apart on start days
      DateTime earlierTime, laterTime;
      if (day2 > day1) {
        earlierTime = time1;
        laterTime = time2;
      } else {
        earlierTime = time2;
        laterTime = time1;
      }
      return UtcTimeOnly(earlierTime) >= UtcTimeOnly(startTime) && UtcTimeOnly(laterTime) <= UtcTimeOnly(endTime);
    }
    // session start and end day are the same day, which is between these times
    else {
      int time1RangeStartDate = getRangeStartDate(time1, startDay, startTime);
      int time2RangeStartDate = getRangeStartDate(time2, startDay, startTime);
      return time1RangeStartDate == time2RangeStartDate;
    }
  }
}
} // namespace FIX
