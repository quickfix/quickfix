/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#ifndef FIX_FIELDTYPES_H
#define FIX_FIELDTYPES_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Utility.h"
#include <string>
#include "strptime.h"
#include <time.h>

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
public:
  /// Defaults to the current date and time
  UtcTimeStamp()
  {
    setCurrent();
  }

  /// Defaults to the current date
  UtcTimeStamp( int hour, int minute, int second )
  {
    setCurrent();
    setHour( hour );
    setMinute( minute );
    setSecond( second );
  }

  UtcTimeStamp( int hour, int minute, int second,
                int date, int month, int year )
  {
    setCurrent();
    setHour( hour );
    setMinute( minute );
    setSecond( second );
    setDate( date );
    setMonth( month );
    setYear( year );
  }

  UtcTimeStamp( long sec )
  {
    time_t t = (time_t)sec;
    *static_cast < tm* > ( this ) = time_gmtime( &t );
  }

  UtcTimeStamp( const tm* time ) { *static_cast < tm* > ( this ) = *time; }

  operator tm*() { return this; }
  operator const tm*() const { return this; }

  void setSecond( int s ) { tm_sec = s; }
  void setMinute( int m ) { tm_min = m; }
  void setHour( int h ) { tm_hour = h; }
  void setDate( int d ) { tm_mday = d; }
  void setMonth( int m ) { tm_mon = m - 1; }
  void setYear( int y ) { tm_year = y - 1900; }
  void setTime( const UtcTimeOnly& time );

  int getSecond() const { return tm_sec; }
  int getMinute() const { return tm_min; }
  int getHour() const { return tm_hour; }
  int getDate() const { return tm_mday; }
  int getMonth() const { return tm_mon + 1; }
  int getYear() const { return tm_year + 1900; }

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
    time_t t;
    time( &t );
    *static_cast < tm* > ( this ) = time_gmtime( &t );
    tm_isdst = 0;
  }
};

/// Time only represented in UTC.
class UtcTimeOnly : protected UtcTimeStamp
{
public:
  /// Defaults to the current time
  UtcTimeOnly() : UtcTimeStamp()
  {
    clearDate();
  }

  UtcTimeOnly( int hour, int minute, int second )
  : UtcTimeStamp( hour, minute, second )
  {
    clearDate();
  }

  UtcTimeOnly( long sec ) : UtcTimeStamp( sec ) { clearDate(); }
  UtcTimeOnly( const tm* time ) : UtcTimeStamp( time ) { clearDate(); }

  operator tm*() { return UtcTimeStamp::operator tm*(); }
  operator const tm*() const { return UtcTimeStamp::operator const tm*(); }

  void setSecond( int s ) { UtcTimeStamp::setSecond( s ); }
  void setMinute( int m ) { UtcTimeStamp::setMinute( m ); }
  void setHour( int h ) { UtcTimeStamp::setHour( h ); }

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
  }
};

/// Date only represented in UTC.
class UtcDate : protected UtcTimeStamp
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

  UtcDate( long sec ) : UtcTimeStamp( sec ) { clearTime(); }
  UtcDate( const tm* time ) : UtcTimeStamp( time ) { clearTime(); }

  operator tm*() { return UtcTimeStamp::operator tm*(); }
  operator const tm*() const { return UtcTimeStamp::operator const tm*(); }

  void setDate( int d ) { UtcTimeStamp::setDate( d ); }
  void setMonth( int m ) { UtcTimeStamp::setMonth( m ); }
  void setYear( int y ) { UtcTimeStamp::setYear( y ); }

  int getDate() const { return UtcTimeStamp::getDate(); }
  int getMonth() const { return UtcTimeStamp::getMonth(); }
  int getYear() const { return UtcTimeStamp::getYear(); }

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
  }
};
/*! @} */

inline bool operator==( const UtcTimeStamp& lhs, const UtcTimeStamp& rhs )
{
  return
    lhs.tm_sec == rhs.tm_sec
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
  return difftime( l_time, r_time ) < 0;
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
    lhs.tm_sec == rhs.tm_sec
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
