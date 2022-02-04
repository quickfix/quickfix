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

#ifndef FIX_FIELDTYPES_H
#define FIX_FIELDTYPES_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1600)
 #include "stdint_msvc.h"
#else
 #include <stdint.h> /* integer types int8_t .. uint64_t, intptr_t */
#endif

#include "Utility.h"
#include <string>
#include <time.h>

namespace FIX
{
/*! \addtogroup user
 *  @{
 */

/// Date and Time stored as a Julian day number and number of
/// nanoseconds since midnight.  Does not perform any timezone
/// calculations.  All magic numbers and related calculations
/// have been taken from:
///
/// \sa http://www.faqs.org/faqs/calendars.faq
/// \sa http://scienceworld.wolfram.com/astronomy/JulianDate.html
/// \sa http://scienceworld.wolfram.com/astronomy/GregorianCalendar.html
/// \sa http://scienceworld.wolfram.com/astronomy/Weekday.html
///
/// \author Caleb Epstein <caleb.epstein at gmail dot com>

// Precision factor of timestamp. [0] - second, [9] - nanosecond
static const int PRECISION_FACTOR[10] = {1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};

struct DateTime 
{
  int m_date;
  int64_t m_time;

  /// Magic numbers
  static const int64_t  SECONDS_PER_DAY = 86400;
  static const int64_t  SECONDS_PER_HOUR = 3600;
  static const int64_t  SECONDS_PER_MIN = 60;
  static const int64_t  MINUTES_PER_HOUR = 60;

  static const int64_t  NANOS_PER_DAY = 86400000000000;
  static const int64_t  NANOS_PER_HOUR = 3600000000000;
  static const int64_t  NANOS_PER_MIN = 60000000000;
  static const int64_t  NANOS_PER_SEC = 1000000000;

  // time_t epoch (1970-01-01) as a Julian date
  static const int64_t  JULIAN_19700101 = 2440588;

  /// Default constructor - initializes to zero
  DateTime () : m_date (0), m_time (0) {}

  /// Construct from a Julian day number and time in millis
  DateTime (int date, int64_t time) : m_date (date), m_time (time) {}

  /// Construct from the specified components
  DateTime( int year, int month, int day,
            int hour, int minute, int second, int millis ) 
  {
    m_date = julianDate( year, month, day );
    m_time = makeHMS( hour, minute, second, millis * PRECISION_FACTOR[3] );
  }

  /// Construct from the specified components
  DateTime( int year, int month, int day,
            int hour, int minute, int second, int fraction, int precision )
  {
    m_date = julianDate( year, month, day );
    int nanos = convertToNanos(fraction, precision);
    m_time = makeHMS( hour, minute, second, nanos );
  }

  virtual ~DateTime() {}

  /// Return the year portion of the date
  inline int getYear() const 
  {
    int y, m, d;
    getYMD( y, m, d );
    return y;
  }
    
  /// Return the month (1-12) portion of the date
  inline int getMonth() const 
  {
    int y, m, d;
    getYMD( y, m, d );
    return m;
  }

  /// Return the day of the month portion of the date
  inline int getDay() const 
  {
    int y, m, d;
    getYMD( y, m, d );
    return d;
  }

  /// Another name for the day of the month.  Bad name, but used
  /// because of the legacy UtcTimeStamp interface
  inline int getDate() const { return getDay(); }

  /// Return the internal julian date
  inline int getJulianDate() const { return m_date; }

  /// Return the hour portion of the time (0-23)
  inline int getHour() const
  {
    return (int)(m_time / NANOS_PER_HOUR);
  }

  /// Return the minute portion of the time (0-59)
  inline int getMinute() const
  {
    return (m_time / NANOS_PER_MIN) % MINUTES_PER_HOUR;
  }

  /// Return the second portion of the time (0-59)
  inline int getSecond() const
  {
    return (m_time / NANOS_PER_SEC) % SECONDS_PER_MIN;
  }

  /// Return the millisecond portion of the time (0-999)
  inline int getMillisecond() const
  {
    return (getNanosecond() / PRECISION_FACTOR[3]);
  }

  /// Return the microsecond portion of the time
  inline int getMicrosecond() const
  {
    return (getNanosecond() / PRECISION_FACTOR[6]);
  }

  // deprecated method: use getMicrosecond instead
  inline int getMicroecond() const {
    return getMicrosecond();
  }

  /// Return the nanosecond portion of the time
  inline unsigned int getNanosecond() const
  {
    return static_cast<uint64_t>(m_time) % NANOS_PER_SEC;
  }

  /// Return the fraction portion of the time
  inline int getFraction(int precision) const
  {
    switch (precision)
    {
    case 0:
       return (getNanosecond() / PRECISION_FACTOR[0]);

    case 1:
      return (getNanosecond() / PRECISION_FACTOR[1]);

    case 2:
      return (getNanosecond() / PRECISION_FACTOR[2]);

    case 3:
     return (getNanosecond() / PRECISION_FACTOR[3]);

    case 4:
      return (getNanosecond() / PRECISION_FACTOR[4]);

    case 5:
      return (getNanosecond() / PRECISION_FACTOR[5]);

    case 6:
      return (getNanosecond() / PRECISION_FACTOR[6]);

    case 7:
      return (getNanosecond() / PRECISION_FACTOR[7]);

    case 8:
      return (getNanosecond() / PRECISION_FACTOR[8]);

    case 9:
    default:
      return (getNanosecond() / PRECISION_FACTOR[9]);
    }
  }

  /// Load the referenced values with the year, month and day
  /// portions of the date in a single operation
  inline void getYMD (int& year, int& month, int& day) const 
  {
    getYMD( m_date, year, month, day );
  }

  /// Load the referenced values with the hour, minute, second and
  /// millisecond portions of the time in a single operation
  inline void getHMS( int& hour, int& minute, int& second, int& millis ) const 
  {
    int ticks = (int)(m_time / NANOS_PER_SEC);
    hour = ticks / SECONDS_PER_HOUR;
    minute = (ticks / SECONDS_PER_MIN) % MINUTES_PER_HOUR;
    second = ticks % SECONDS_PER_MIN;
    millis = getMillisecond();
  }

  /// Load the referenced values with the hour, minute, second and
  /// fraction portions of the time in a single operation
  inline void getHMS( int& hour, int& minute, int& second, int& fraction, int precision ) const
  {
    int ticks = (int)(m_time / NANOS_PER_SEC);
    hour = ticks / SECONDS_PER_HOUR;
    minute = (ticks / SECONDS_PER_MIN) % MINUTES_PER_HOUR;
    second = ticks % SECONDS_PER_MIN;
    fraction = getFraction(precision);
  }

  /// Calculate the weekday of the date (Sunday is 1, Saturday is 7)
  inline int getWeekDay() const 
  {
    int Y, M, D;
    getYMD (Y, M, D);
    int m = M >= 3 ? M - 2 : M + 10;
    int Yprime = M >= 3 ? Y : Y - 1;
    int y = Yprime % 100;
    int c = Yprime / 100;
    int wd = (D + int (2.6 * m - 0.2) + y + int (y / 4) + int (c / 4) -
              (2 * c)) % 7;
    return 1 + (wd < 0 ? 7 + wd : wd);
  }

  /// Convert the DateTime to a time_t.  Note that this operation
  /// can overflow on 32-bit platforms when we go beyond year 2038.
  inline time_t getTimeT() const 
  {
    return (SECONDS_PER_DAY * (m_date - JULIAN_19700101) +
            m_time / NANOS_PER_SEC);
  }

  /// Convert the DateTime to a struct tm which is in UTC
  tm getTmUtc() const 
  {
    int year, month, day;
    int hour, minute, second, millis;
    tm result = { 0 };

    getYMD( year, month, day );
    getHMS( hour, minute, second, millis );

    result.tm_year = year - 1900;
    result.tm_mon = month - 1;
    result.tm_mday = day;
    result.tm_hour = hour;
    result.tm_min = minute;
    result.tm_sec = second;
    result.tm_isdst = -1;

    return result;
  }

  /// Set the date portion of the DateTime
  void setYMD( int year, int month, int day ) 
  {
    m_date = julianDate( year, month, day );
  }

  /// Set the time portion of the DateTime
  void setHMS( int hour, int minute, int second, int millis )
  {
    m_time = makeHMS( hour, minute, second, millis * PRECISION_FACTOR[3] );
  }

  /// Set the time portion of the DateTime
  void setHMS( int hour, int minute, int second, int fraction, int precision )
  {
    int nanos = convertToNanos(fraction, precision);

    m_time = makeHMS( hour, minute, second,  nanos);
  }

  /// Set the hour portion of the time
  void setHour( int hour )
  {
    int old_hour, min, sec, millis;
    getHMS( old_hour, min, sec, millis );
    setHMS( hour, min, sec, millis );
  }

  /// Set the minute portion of the time
  void setMinute( int min )
  {
    int hour, old_min, sec, millis;
    getHMS( hour, old_min, sec, millis );
    setHMS( hour, min, sec, millis );
  }

  /// Set the seconds portion of the time
  void setSecond( int sec )
  {
    int hour, min, old_sec, millis;
    getHMS( hour, min, old_sec, millis );
    setHMS( hour, min, sec, millis );
  }

  /// Set the millisecond portion of the time
  void setMillisecond( int millis )
  {
    int hour, min, sec, old_millis;
    getHMS( hour, min, sec, old_millis );
    setHMS( hour, min, sec, millis );
  }

  /// Set the microsecond portion of the time
  void setMicrosecond( int micros )
  {
    int hour, min, sec, old_nanos;
    getHMS( hour, min, sec, old_nanos, 9 );
    setHMS( hour, min, sec, micros, 6 );
  }

  /// Set the nanosecond portion of the time
  void setNanosecond( int nanos )
  {
    int hour, min, sec, old_nanos;
    getHMS( hour, min, sec, old_nanos, 9 );
    setHMS( hour, min, sec, nanos, 9 );
  }

  /// Set the fraction portion of the time
  void setFraction( int fraction, int precision )
  {
    int hour, min, sec, old_nanos;
    getHMS( hour, min, sec, old_nanos, 9 );
    setHMS( hour, min, sec, fraction, precision );
  }

  /// Clear the date portion of the DateTime
  void clearDate() 
  {
    m_date = 0;
  }

  /// Clear the time portion of the DateTime
  void clearTime() 
  {
    m_time = 0;
  }

  /// Set the internal date and time members
  void set( int date, int64_t time ) { m_date = date; m_time = time; }

  /// Initialize from another DateTime
  void set( const DateTime& other ) 
  {
    m_date = other.m_date;
    m_time = other.m_time;
  }

  /// Add a number of seconds to this
  void operator+=( int seconds )
  {
    int d = seconds / SECONDS_PER_DAY;
    int s = seconds % SECONDS_PER_DAY;

    m_date += d;
    m_time += s * NANOS_PER_SEC;

    if( m_time > NANOS_PER_DAY )
    {
      m_date++;
      m_time %= NANOS_PER_DAY;
    }
    else if( m_time < 0 )
    {
      m_date--;
      m_time += NANOS_PER_DAY;
    }
  }

  /// Convert to internal nanos
  static int convertToNanos(int fraction, int precision)
  {
    int nanos;

    switch (precision)
    {
    case 0:
      nanos = fraction * PRECISION_FACTOR[0];
      break;

    case 1:
      nanos = fraction * PRECISION_FACTOR[1];
      break;

    case 2:
      nanos = fraction * PRECISION_FACTOR[2];
      break;

    case 3:
      nanos = fraction * PRECISION_FACTOR[3];
      break;

    case 4:
      nanos = fraction * PRECISION_FACTOR[4];
      break;

    case 5:
      nanos = fraction * PRECISION_FACTOR[5];
      break;

    case 6:
      nanos = fraction * PRECISION_FACTOR[6];
      break;

    case 7:
      nanos = fraction * PRECISION_FACTOR[7];
      break;

    case 8:
      nanos = fraction * PRECISION_FACTOR[8];
      break;

    case 9:
    default:
      nanos = fraction * PRECISION_FACTOR[9];
      break;
    }

    return nanos;
  }

  /// Helper method to convert a broken down time to a number of
  /// nanoseconds since midnight
  static int64_t makeHMS( int hour, int minute, int second, int nanos )
  {
    return NANOS_PER_SEC * (SECONDS_PER_HOUR * hour +
                            SECONDS_PER_MIN * minute +
                            second) + nanos;
  }

  /// Return the current wall-clock time as a utc DateTime
  static DateTime nowUtc();

  /// Return the current wall-clock time as a local DateTime
  static DateTime nowLocal();

  /// Convert a time_t and optional milliseconds to a DateTime
  static DateTime fromUtcTimeT( time_t t, int millis = 0 ) 
  {
    struct tm tm = time_gmtime( &t );
    return fromTm( tm, millis );
  }

  static DateTime fromLocalTimeT( time_t t, int millis = 0 )
  {
    struct tm tm = time_localtime( &t );
    return fromTm( tm, millis );
  }

  static DateTime fromUtcTimeT( time_t t, int fraction, int precision )
  {
    struct tm tm = time_gmtime( &t );
    return fromTm( tm, fraction, precision );
  }

  static DateTime fromLocalTimeT( time_t t, int fraction, int precision )
  {
    struct tm tm = time_localtime( &t );
    return fromTm( tm, fraction, precision );
  }

  /// Convert a tm and optional milliseconds to a DateTime.  \note
  /// the tm structure is assumed to contain a date specified in UTC
  static DateTime fromTm( const tm& tm, int millis = 0 )
  {
    return DateTime ( julianDate(tm.tm_year + 1900, tm.tm_mon + 1,
                                 tm.tm_mday),
                     makeHMS(tm.tm_hour, tm.tm_min, tm.tm_sec, millis * PRECISION_FACTOR[3]) );
  }

  /// Convert a tm and optional milliseconds to a DateTime.  \note
  /// the tm structure is assumed to contain a date specified in UTC
  static DateTime fromTm( const tm& tm, int fraction, int precision )
  {
    int nanos = convertToNanos(fraction, precision);
    return DateTime ( julianDate(tm.tm_year + 1900, tm.tm_mon + 1,
                                 tm.tm_mday),
                     makeHMS(tm.tm_hour, tm.tm_min, tm.tm_sec, nanos) );
  }

  /// Helper method to calculate a Julian day number.
  static int julianDate( int year, int month, int day )
  {
    int a = (14 - month) / 12;
    int y = year + 4800 - a;
    int m = month + 12 * a - 3;
    return (day + int ((153 * m + 2) / 5) + y * 365 +
            int (y / 4) - int (y / 100) + int (y / 400) - 32045);
  }

  /// Convert a Julian day number to a year, month and day
  static void getYMD( int jday, int& year, int& month, int& day )
  {
    int a = jday + 32044;
    int b = (4 * a + 3) / 146097;
    int c = a - int ((b * 146097) / 4);
    int d = (4 * c + 3) / 1461;
    int e = c - int ((1461 * d) / 4);
    int m = (5 * e + 2) / 153;
    day = e - int ((153 * m + 2) / 5) + 1;
    month = m + 3 - 12 * int (m / 10);
    year = b * 100 + d - 4800 + int (m / 10);
  }
};

inline bool operator==( const DateTime& lhs, const DateTime& rhs )
{
  return lhs.m_date == rhs.m_date && lhs.m_time == rhs.m_time;
}

inline bool operator!=( const DateTime& lhs, const DateTime& rhs )
{
  return !(lhs == rhs);
}

inline bool operator<( const DateTime& lhs, const DateTime& rhs )
{
  if( lhs.m_date < rhs.m_date )
    return true;
  else if( lhs.m_date > rhs.m_date )
    return false;
  else if( lhs.m_time < rhs.m_time )
    return true;
  return false;
}

inline bool operator>( const DateTime& lhs, const DateTime& rhs )
{
  return !(lhs == rhs || lhs < rhs);
}

inline bool operator<=( const DateTime& lhs, const DateTime& rhs )
{
  return lhs == rhs || lhs < rhs;
}

inline bool operator>=( const DateTime& lhs, const DateTime& rhs )
{
  return lhs == rhs || lhs > rhs;
}

/// Calculate the difference between two DateTime values and return
/// the result as a number of seconds
inline int operator-( const DateTime& lhs, const DateTime& rhs )
{
  return (DateTime::SECONDS_PER_DAY * (lhs.m_date - rhs.m_date) +
          // Truncate the nanos before subtracting
          (int)(lhs.m_time / DateTime::NANOS_PER_SEC) - (int)(rhs.m_time / DateTime::NANOS_PER_SEC));
}

/// Date and Time represented in UTC.
class UtcTimeStamp : public DateTime
{
public:
  /// Defaults to the current date and time
  UtcTimeStamp()
  : DateTime( DateTime::nowUtc() ) {}

  /// Defaults to the current date
  UtcTimeStamp( int hour, int minute, int second, int millisecond = 0 )
  : DateTime( DateTime::nowUtc() )
  {
    setHMS( hour, minute, second, millisecond );
  }

  UtcTimeStamp( int hour, int minute, int second, int fraction, int precision )
  : DateTime( DateTime::nowUtc() )
  {
    setHMS( hour, minute, second, fraction, precision );
  }

  UtcTimeStamp( int hour, int minute, int second,
                int date, int month, int year )
  : DateTime( year, month, date, hour, minute, second, 0 ) {}

  UtcTimeStamp( int hour, int minute, int second, int millisecond,
                int date, int month, int year )
  : DateTime( year, month, date, hour, minute, second, millisecond ) {}

  UtcTimeStamp( int hour, int minute, int second, int fraction,
                int date, int month, int year, int precision )
  : DateTime( year, month, date, hour, minute, second, fraction, precision ) {}

  explicit UtcTimeStamp( time_t time, int millisecond = 0 )
  : DateTime( fromUtcTimeT (time, millisecond) ) {}

  UtcTimeStamp( time_t time, int fraction, int precision )
    : DateTime( fromUtcTimeT (time, fraction, precision) ) {}

  UtcTimeStamp( const tm* time, int millisecond = 0 )
  : DateTime( fromTm (*time, millisecond) ) {}

  UtcTimeStamp( const tm* time, int fraction, int precision )
  : DateTime( fromTm (*time, fraction, precision) ) {}

  void setCurrent() 
  {
    set( DateTime::nowUtc() );
  }
};

/// Date and Time represented in local time.
class LocalTimeStamp : public DateTime
{
public:
  /// Defaults to the current date and time
  LocalTimeStamp()
  : DateTime( DateTime::nowLocal() ) {}

  /// Defaults to the current date
  LocalTimeStamp( int hour, int minute, int second, int millisecond = 0 )
  : DateTime( DateTime::nowLocal() )
  {
    setHMS( hour, minute, second, millisecond );
  }

  LocalTimeStamp( int hour, int minute, int second, int fraction, int precision )
  : DateTime( DateTime::nowLocal() )
  {
    setHMS( hour, minute, second, fraction, precision );
  }

  LocalTimeStamp( int hour, int minute, int second,
                int date, int month, int year )
  : DateTime( year, month, date, hour, minute, second, 0 ) {}

  LocalTimeStamp( int hour, int minute, int second, int millisecond,
                int date, int month, int year )
  : DateTime( year, month, date, hour, minute, second, millisecond ) {}

  LocalTimeStamp( int hour, int minute, int second, int fraction,
                int date, int month, int year, int precision )
  : DateTime( year, month, date, hour, minute, second, fraction, precision ) {}

  explicit LocalTimeStamp( time_t time, int millisecond = 0 )
  : DateTime( fromLocalTimeT (time, millisecond) ) {}

  LocalTimeStamp( time_t time, int fraction, int precision )
    : DateTime( fromLocalTimeT (time, fraction, precision) ) {}

  LocalTimeStamp( const tm* time, int millisecond = 0 )
  : DateTime( fromTm (*time, millisecond) ) {}

  LocalTimeStamp( const tm* time, int fraction, int precision )
  : DateTime( fromTm (*time, fraction, precision) ) {}

  void setCurrent() 
  {
    set( DateTime::nowLocal() );
  }
};

/// Time only represented in UTC.
class UtcTimeOnly : public DateTime
{
public:
  /// Defaults to the current time
  UtcTimeOnly()
  {
    setCurrent();
  }

  UtcTimeOnly( const DateTime& val )
  : DateTime(val)
  {
    clearDate();
  }

  UtcTimeOnly( int hour, int minute, int second, int millisecond = 0 )
  {
    setHMS( hour, minute, second, millisecond );
  }

  UtcTimeOnly( int hour, int minute, int second, int fraction, int precision )
  {
    setHMS( hour, minute, second, fraction, precision );
  }

  explicit UtcTimeOnly( time_t time, int millisecond = 0 )
  : DateTime( fromUtcTimeT (time, millisecond) )
  {
    clearDate();
  }

  UtcTimeOnly( time_t time, int fraction, int precision )
    : DateTime( fromUtcTimeT (time, fraction, precision) )
  {
    clearDate();
  }

  UtcTimeOnly( const tm* time, int millisecond = 0 )
  : DateTime( fromTm (*time, millisecond) )
  {
    clearDate();
  }

  UtcTimeOnly( const tm* time, int fraction, int precision )
  : DateTime( fromTm (*time, fraction, precision) )
  {
    clearDate();
  }

  /// Set to the current time.
  void setCurrent()
  {
    DateTime d = nowUtc();
    m_time = d.m_time;
  }
};

/// Time only represented in local time.
class LocalTimeOnly : public DateTime
{
public:
  /// Defaults to the current time
  LocalTimeOnly()
  {
    setCurrent();
  }

  LocalTimeOnly( const DateTime& val )
  : DateTime(val)
  {
    clearDate();
  }

  LocalTimeOnly( int hour, int minute, int second, int millisecond = 0 )
  {
    setHMS( hour, minute, second, millisecond );
  }

  LocalTimeOnly( int hour, int minute, int second, int fraction, int precision )
  {
    setHMS( hour, minute, second, fraction, precision );
  }

  explicit LocalTimeOnly( time_t time, int millisecond = 0 )
  : DateTime( fromLocalTimeT (time, millisecond) )
  {
    clearDate();
  }

  LocalTimeOnly( time_t time, int fraction, int precision )
    : DateTime( fromLocalTimeT (time, fraction, precision) )
  {
    clearDate();
  }

  LocalTimeOnly( const tm* time, int millisecond = 0 )
  : DateTime( fromTm (*time, millisecond) )
  {
    clearDate();
  }

  LocalTimeOnly( const tm* time, int fraction, int precision )
  : DateTime( fromTm (*time, fraction, precision) )
  {
    clearDate();
  }

  /// Set to the current time.
  void setCurrent()
  {
    DateTime d = nowLocal();
    m_time = d.m_time;
  }
};

/// Date only represented in UTC.
class UtcDate : public DateTime
{
public:
  /// Defaults to the current date
  UtcDate()
  {
    setCurrent();
  }

  UtcDate( const DateTime& val )
  : DateTime( val )
  {
    clearTime();
  }

  UtcDate( int date, int month, int year )
  : DateTime(year, month, date, 0, 0, 0, 0) {}

  UtcDate( int sec )
  : DateTime( sec / DateTime::SECONDS_PER_DAY, 0 ) {}

  UtcDate( const tm* time )
  : DateTime( fromTm (*time) )
  {
    clearTime();
  }

  /// Set to the current time.
  void setCurrent()
  {
    DateTime d = nowUtc();
    m_date = d.m_date;
  }
};

/// Date only represented in local time.
class LocalDate : public DateTime
{
public:
  /// Defaults to the current date
  LocalDate()
  {
    setCurrent();
  }

  LocalDate( const DateTime& val )
  : DateTime( val )
  {
    clearTime();
  }

  LocalDate( int date, int month, int year )
  : DateTime(year, month, date, 0, 0, 0, 0) {}

  LocalDate( int sec )
  : DateTime( sec / DateTime::SECONDS_PER_DAY, 0 ) {}

  LocalDate( const tm* time )
  : DateTime( fromTm (*time) )
  {
    clearTime();
  }

  /// Set to the current time.
  void setCurrent()
  {
    DateTime d = nowLocal();
    m_date = d.m_date;
  }
};

/*! @} */

typedef UtcDate UtcDateOnly;

typedef std::string STRING;
typedef char CHAR;
typedef double PRICE;
typedef int INT;
typedef double AMT;
typedef double QTY;
typedef std::string CURRENCY;
typedef std::string MULTIPLEVALUESTRING;
typedef std::string MULTIPLESTRINGVALUE;
typedef std::string MULTIPLECHARVALUE;
typedef std::string EXCHANGE;
typedef UtcTimeStamp UTCTIMESTAMP;
typedef bool BOOLEAN;
typedef std::string LOCALMKTDATE;
typedef std::string DATA;
typedef double FLOAT;
typedef double PRICEOFFSET;
typedef std::string MONTHYEAR;
typedef std::string DAYOFMONTH;
typedef UtcDate UTCDATE;
typedef UtcDateOnly UTCDATEONLY;
typedef UtcTimeOnly UTCTIMEONLY;
typedef int NUMINGROUP;
typedef double PERCENTAGE;
typedef int SEQNUM;
typedef int LENGTH;
typedef std::string COUNTRY;
typedef std::string TZTIMEONLY;
typedef std::string TZTIMESTAMP;
typedef std::string XMLDATA;
typedef std::string LANGUAGE;

namespace TYPE
{
enum Type
{
  Unknown,
  String,
  Char,
  Price,
  Int,
  Amt,
  Qty,
  Currency,
  MultipleValueString,
  MultipleStringValue,
  MultipleCharValue,
  Exchange,
  UtcTimeStamp,
  Boolean,
  LocalMktDate,
  Data,
  Float,
  PriceOffset,
  MonthYear,
  DayOfMonth,
  UtcDate,
  UtcDateOnly = UtcDate,
  UtcTimeOnly,
  NumInGroup,
  Percentage,
  SeqNum,
  Length,
  Country,
  TzTimeOnly,
  TzTimeStamp,
  XmlData,
  Language
};
}
}

#endif //FIX_FIELDTYPES_H
