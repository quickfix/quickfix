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

#ifndef FIX_FIELDTYPES_H
#define FIX_FIELDTYPES_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Utility.h"
#include <string>
#include <time.h>
#include <sys/timeb.h>

namespace FIX
{
class UtcTimeOnly;
class UtcDate;

const int UTC_DAY = 86400;

/*! \addtogroup user
 *  @{
 */
/// Date and Time represented in UTC.
class UtcTimeStamp : protected tm
{
protected:
  int m_ms;
public:
  /// Defaults to the current date and time
  UtcTimeStamp()
  {
    setCurrent();
  }

  /// Defaults to the current date
  UtcTimeStamp( int hour, int minute, int second, int millisecond = 0 )
  {
    setCurrent();
    setHour( hour );
    setMinute( minute );
    setSecond( second );
    setMillisecond( millisecond );
  }


  UtcTimeStamp( int hour, int minute, int second,
                int date, int month, int year )
  {
    setCurrent();
    setHour( hour );
    setMinute( minute );
    setSecond( second );
    setMillisecond( 0 );
    setDate( date );
    setMonth( month );
    setYear( year );
    time_t t = mktime( (tm*)this );
    *static_cast<tm*>(this) = time_localtime( &t );
    tm_isdst = -1;
  }

  UtcTimeStamp( int hour, int minute, int second, int millisecond,
                int date, int month, int year )
  {
    setCurrent();
    setHour( hour );
    setMinute( minute );
    setSecond( second );
    setMillisecond( millisecond );
    setDate( date );
    setMonth( month );
    setYear( year );
    time_t t = mktime( (tm*)this );
    *static_cast<tm*>(this) = time_localtime( &t );
    tm_isdst = -1;
  }

  UtcTimeStamp( time_t time, int millisecond = 0 )
  {
    *static_cast<tm*>(this) = time_gmtime( &time );
    setMillisecond(millisecond);
  }

  UtcTimeStamp( const tm* time, int millisecond = 0 ) 
  { 
    *static_cast<tm*>(this) = *time;
    setMillisecond(millisecond);
  }
 
  operator tm*() { return this; }
  operator const tm*() const { return this; }

  void setMillisecond( int ms ) { m_ms = ms; }
  void setSecond( int s ) { tm_sec = s; }
  void setMinute( int m ) { tm_min = m; }
  void setHour( int h ) { tm_hour = h; }
  void setDate( int d ) { tm_mday = d; }
  void setMonth( int m ) { tm_mon = m - 1; }
  void setYear( int y ) { tm_year = y - 1900; }
  void setWeekDay( int wd ) { tm_wday = wd - 1; }
  void setYearDay( int yd ) { tm_yday = yd - 1; }
  void setTime( const UtcTimeOnly& time );

  int getMillisecond() const { return m_ms; }
  int getSecond() const { return tm_sec; }
  int getMinute() const { return tm_min; }
  int getHour() const { return tm_hour; }
  int getDate() const { return tm_mday; }
  int getMonth() const { return tm_mon + 1; }
  int getYear() const { return tm_year + 1900; }
  int getWeekDay() const { return tm_wday + 1; }
  int getYearDay() const { return tm_yday + 1; }

  friend bool operator==( const UtcTimeStamp&, const UtcTimeStamp& );
  friend bool operator<( const UtcTimeStamp&, const UtcTimeStamp& );
  friend bool operator>( const UtcTimeStamp&, const UtcTimeStamp& );
  friend bool operator<=( const UtcTimeStamp&, const UtcTimeStamp& );
  friend bool operator>=( const UtcTimeStamp&, const UtcTimeStamp& );
  friend long operator-( const UtcTimeStamp&, const UtcTimeStamp& );
  void operator+=( long seconds );

  /// Set to the current date and time.
  void setCurrent()
  { 
#ifdef HAVE_FTIME
    timeb tb;
    ftime(&tb);
    time_t& time = tb.time;
    m_ms = tb.millitm;
#else
    time_t time;
    ::time(&time);
    m_ms = 0;
#endif
    *static_cast<tm*>(this) = time_gmtime( &time );
    tm_isdst = -1;
  }
};

/// Time only represented in UTC.
class UtcTimeOnly : public UtcTimeStamp
{
public:
  /// Defaults to the current time
  UtcTimeOnly() : UtcTimeStamp()
  {
    clearDate();
  }

  UtcTimeOnly( int hour, int minute, int second, int millisecond = 0 )
  : UtcTimeStamp( hour, minute, second, millisecond )
  {
    clearDate();
  }

  UtcTimeOnly( time_t time, int millisecond = 0 ) 
  : UtcTimeStamp( time, millisecond ) 
  { 
    clearDate(); 
  }

  UtcTimeOnly( const tm* time, int millisecond = 0 ) 
  : UtcTimeStamp( time, millisecond ) 
  { 
    clearDate(); 
  }

  operator tm*() { return UtcTimeStamp::operator tm*(); }
  operator const tm*() const { return UtcTimeStamp::operator const tm*(); }

  void setMillisecond( int ms ) { UtcTimeStamp::setMillisecond( ms ); }
  void setSecond( int s ) { UtcTimeStamp::setSecond( s ); }
  void setMinute( int m ) { UtcTimeStamp::setMinute( m ); }
  void setHour( int h ) { UtcTimeStamp::setHour( h ); }

  int getMillisecond() const { return UtcTimeStamp::getMillisecond(); }
  int getSecond() const { return UtcTimeStamp::getSecond(); }
  int getMinute() const { return UtcTimeStamp::getMinute(); }
  int getHour() const { return UtcTimeStamp::getHour(); }

  friend bool operator==( const UtcTimeOnly&, const UtcTimeOnly& );
  friend bool operator<( const UtcTimeOnly&, const UtcTimeOnly& );
  friend bool operator>( const UtcTimeOnly&, const UtcTimeOnly& );
  friend bool operator<=( const UtcTimeOnly&, const UtcTimeOnly& );
  friend bool operator>=( const UtcTimeOnly&, const UtcTimeOnly& );
  void operator+=( long seconds )
  {
    UtcTimeStamp::operator+=( seconds );
  }

  /// Set to the current time.
  void setCurrent()
  {
    UtcTimeStamp::setCurrent();
    clearDate();
  }

private:
  void clearDate()
  {
    tm_mday = 1;
    tm_mon = 0;
    tm_year = 70;
    tm_wday = 0;
    tm_yday = 0;
    tm_isdst = -1;
    m_ms = 0;
  }
};

/// Date only represented in UTC.
class UtcDate : public UtcTimeStamp
{
public:
  /// Defaults to the current date
  UtcDate() : UtcTimeStamp()
  {
    clearTime();
  }

  UtcDate( int date, int month, int year )
  : UtcTimeStamp( 0, 0, 0, date, month, year )
  {
    clearTime();
  }

  UtcDate( long sec ) : UtcTimeStamp( sec, 0 ) { clearTime(); }
  UtcDate( const tm* time ) : UtcTimeStamp( time, 0 ) { clearTime(); }

  operator tm*() { return UtcTimeStamp::operator tm*(); }
  operator const tm*() const { return UtcTimeStamp::operator const tm*(); }

  void setDate( int d ) { UtcTimeStamp::setDate( d ); }
  void setMonth( int m ) { UtcTimeStamp::setMonth( m ); }
  void setYear( int y ) { UtcTimeStamp::setYear( y ); }

  int getDate() const { return UtcTimeStamp::getDate(); }
  int getMonth() const { return UtcTimeStamp::getMonth(); }
  int getYear() const { return UtcTimeStamp::getYear(); }
  int getWeekDay() const { return UtcTimeStamp::getWeekDay(); }
  int getYearDay() const { return UtcTimeStamp::getYearDay(); }

  friend bool operator==( const UtcDate&, const UtcDate& );
  friend bool operator<( const UtcDate&, const UtcDate& );
  friend bool operator>( const UtcDate&, const UtcDate& );
  friend bool operator<=( const UtcDate&, const UtcDate& );
  friend bool operator>=( const UtcDate&, const UtcDate& );
  friend long operator-( const UtcDate&, const UtcDate& );

  /// Set to the current time.
  void setCurrent()
  {
    UtcTimeStamp::setCurrent();
    clearTime();
  }

private:
  void clearTime()
  {
    setHour( 0 );
    setMinute( 0 );
    setSecond( 0 );
	setMillisecond( 0 );
  }
};
/*! @} */

typedef UtcDate UtcDateOnly;

inline bool operator==( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  return
    lhs.m_ms == rhs.m_ms
    && lhs.tm_sec == rhs.tm_sec
    && lhs.tm_min == rhs.tm_min
    && lhs.tm_hour == rhs.tm_hour
    && lhs.tm_mday == rhs.tm_mday
    && lhs.tm_mon == rhs.tm_mon
    && lhs.tm_year == rhs.tm_year
    && lhs.tm_wday == rhs.tm_wday
    && lhs.tm_yday == rhs.tm_yday;
}

inline bool operator<( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  tm l_copy = lhs; tm r_copy = rhs;
  time_t l_time = mktime( &l_copy );
  time_t r_time = mktime( &r_copy );
  double diff = difftime( l_time, r_time );

  if(diff==0.0)
     return (lhs.m_ms - rhs.m_ms) < 0;
  else
     return diff < 0;
}

inline bool operator>( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  return !( lhs <= rhs );
}

inline bool operator<=( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  return ( lhs == rhs ) || ( lhs < rhs );
}

inline bool operator>=( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  return ( lhs == rhs ) || ( lhs > rhs );
}

inline long operator-( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  tm l_copy = lhs; tm r_copy = rhs;
  time_t l_time = mktime( &l_copy );
  time_t r_time = mktime( &r_copy );
  return l_time - r_time;
}

inline bool operator==( const UtcTimeOnly& lhs, const UtcTimeOnly& rhs )
{
  return
    lhs.m_ms == rhs.m_ms
    && lhs.tm_sec == rhs.tm_sec
    && lhs.tm_min == rhs.tm_min
    && lhs.tm_hour == rhs.tm_hour;
}

inline bool operator<( const UtcTimeOnly& lhs, const UtcTimeOnly& rhs )
{
  if ( lhs.tm_hour < rhs.tm_hour ) return true;
  if ( lhs.tm_hour > rhs.tm_hour ) return false;
  if ( lhs.tm_min < rhs.tm_min ) return true;
  if ( lhs.tm_min > rhs.tm_min ) return false;
  if ( lhs.tm_sec < rhs.tm_sec ) return true;
  if ( lhs.tm_sec > rhs.tm_sec ) return false;
  if ( lhs.m_ms < rhs.m_ms ) return true;

  return false;
}

inline bool operator>( const UtcTimeOnly& lhs, const UtcTimeOnly& rhs )
{
  return !( lhs <= rhs );
}

inline bool operator<=( const UtcTimeOnly& lhs, const UtcTimeOnly& rhs )
{
  return ( lhs == rhs ) || ( lhs < rhs );
}

inline bool operator>=( const UtcTimeOnly& lhs, const UtcTimeOnly& rhs )
{
  return ( lhs == rhs ) || ( lhs > rhs );
}

inline bool operator==( const UtcDate& lhs, const UtcDate& rhs )
{
  return
    lhs.tm_mday == rhs.tm_mday
    && lhs.tm_mon == rhs.tm_mon
    && lhs.tm_year == rhs.tm_year;

}

inline bool operator<( const UtcDate& lhs, const UtcDate& rhs )
{
  if ( lhs.tm_year < rhs.tm_year ) return true;
  if ( lhs.tm_year > rhs.tm_year ) return false;
  if ( lhs.tm_mon < rhs.tm_mon ) return true;
  if ( lhs.tm_mon > rhs.tm_mon ) return true;
  if ( lhs.tm_mday < rhs.tm_mday ) return true;
  return false;
}

inline bool operator>( const UtcDate& lhs, const UtcDate& rhs )
{
  return !( lhs <= rhs );
}

inline bool operator<=( const UtcDate& lhs, const UtcDate& rhs )
{
  return ( lhs == rhs ) || ( lhs < rhs );
}

inline bool operator>=( const UtcDate& lhs, const UtcDate& rhs )
{
  return ( lhs == rhs ) || ( lhs > rhs );
}

inline long operator-( const UtcDate& lhs, const UtcDate& rhs )
{
  tm l_copy = lhs; tm r_copy = rhs;
  time_t l_time = mktime( &l_copy );
  time_t r_time = mktime( &r_copy );
  return ( l_time - r_time ) / UTC_DAY;
}

typedef std::string STRING;
typedef char CHAR;
typedef double PRICE;
typedef int INT;
typedef double AMT;
typedef double QTY;
typedef std::string CURRENCY;
typedef std::string MULTIPLEVALUESTRING;
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
  Country
};
}
}

#endif //FIX_FIELDTYPES_H
