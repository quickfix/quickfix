/* -*- C++ -*- */

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

#ifndef FIX_FIELDCONVERTORS_H
#define FIX_FIELDCONVERTORS_H

#include "FieldTypes.h"
#include "Exceptions.h"
#include "Utility.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <limits>

namespace FIX
{
template<class T>
inline char* integer_to_string( char* buf, const size_t len, T t )
{
  const bool isNegative = t < 0;
  char* p = buf + len;

  *--p = '\0';

  if( isNegative )
  {
    if( t == (std::numeric_limits<T>::min)() )
    {
      *--p = '0' + (char)((10-t%10)%10);
      t/=10;
    }
    t = -t;
    do
    {
      *--p = '0' + (char)(t % 10);
      t /= 10;
    } while (t > 0);
    *--p = '-';
  }
  else
  {
    do
    {
      *--p = '0' + (char)(t % 10);
      t /= 10;
    } while( t > 0 );
  }
  return p;
}

template<class T>
inline char* integer_to_string_padded
( char* buf, const size_t len, T t,
  const size_t width = 0,
  const char paddingChar = '0')
{
  if( !width ) return integer_to_string( buf, len, t );

  const bool isNegative = t < 0;
  char* p = buf + len;

  *--p = '\0';

  if( isNegative )
  {
    if( t == (std::numeric_limits<T>::min)() )
    {
      *--p = '0' + (char)(( 10 -t % 10 ) % 10);
      t/=10;
    }
    t=-t;
    do
    {
      *--p = '0' + (char)(t % 10);
      t /= 10;
    } while (t > 0);
    if( p > buf )
      *--p = '-';
  }
  else
  {
    do
    {
      *--p = '0' + (char)(t % 10);
      t /= 10;
    } while( t > 0 );
  }
  const char* stop_p = buf + len - width - 1;
  if( stop_p < buf ) stop_p = buf;
  while( p > stop_p )
    *--p = paddingChar;
  return p;
}

/// Empty convertor is a no-op.
struct EmptyConvertor
{
  static const std::string& convert( const std::string& value )
  { return value; }
};

typedef EmptyConvertor StringConvertor;

/// Converts integer to/from a string
struct IntConvertor
{
  static std::string convert( long value )
  {
    // buffer is big enough for significant digits and extra digit,
    // minus and null
    char buffer[std::numeric_limits<long>::digits10 + 3];
    const char* const start
      = integer_to_string( buffer, sizeof (buffer), value );
    return std::string( start, buffer + sizeof (buffer) - start - 1 );
  }

  static bool convert( const std::string& value, long& result )
  {
    const char* str = value.c_str();
    bool isNegative = false;
    long x = 0;

    if( *str == '-' )
    {
      isNegative = true;
      ++str;
    }

    do
    {
      const int c = *str - '0';
      if( c < 0 || 9 < c ) return false;
      x = 10 * x + c;
    } while (*++str);

    if( isNegative )
      x = -x;

    result = x;
    return true;
  }

  static long convert( const std::string& value )
  throw( FieldConvertError )
  {
    long result = 0;
    if( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts checksum to/from a string
struct CheckSumConvertor
{
  static std::string convert( long value )
  throw( FieldConvertError )
  {
    if ( value > 255 || value < 0 ) throw FieldConvertError();
    char result[4];
    if( integer_to_string_padded(result, sizeof(result), value, 3, '0') != result )
    {
      throw FieldConvertError();
    }
    return std::string( result, 3 );
  }

  static bool convert( const std::string& value, long& result )
  {
    return IntConvertor::convert( value, result );
  }

  static long convert( const std::string& value )
  throw( FieldConvertError )
  {
    return IntConvertor::convert( value );
  }
};

/// Converts double to/from a string
struct DoubleConvertor
{
  static std::string convert( double value, int padding = 0 )
  {
    char result[32];
    char *end = 0;

    int size;
    if( value == 0 || value > 0.0001 || value <= -0.0001 )
    {
      size = STRING_SPRINTF( result, "%.15g", value );

      if( padding > 0 )
      {
        char* point = result;
        end = result + size - 1;
        while( *point != '.' && *point != 0 )
          point++;

        if( *point == 0 )
        {
          end = point;
          *point = '.';
          size++;
        }
        int needed = padding - (int)(end - point);

        while( needed-- > 0 )
        {
          *(++end) = '0';
          size++;
        }
        *(end+1) = 0;
      }
    }
    else
    {
      size = STRING_SPRINTF( result, "%.15f", value );
      // strip trailing 0's
      end = result + size - 1;

      if( padding > 0 )
      {
        int discard = 15 - padding;

        while( (*end == '0') && (discard-- > 0) )
        {
          *(end--) = 0;
          size--;
        }
     }
     else
     {
       while( *end == '0' )
       {
         *(end--) = 0;
         size--;
       }
     }
   }

   return std::string( result, size );
}

static bool convert( const std::string& value, double& result )
{
  const char * i = value.c_str();

  // Catch null strings
  if( !*i ) return false;
  // Eat leading '-' and recheck for null string
  if( *i == '-' && !*++i ) return false;

  bool haveDigit = false;

  if( isdigit(*i) )
  {
    haveDigit = true;
    while( isdigit (*++i) );
  }

  if( *i == '.' && isdigit(*++i) )
  {
    haveDigit = true;
    while( isdigit (*++i) );
  }

  if( *i || !haveDigit ) return false;
    result = strtod( value.c_str(), 0 );
    return true;
  }

  static double convert( const std::string& value )
  throw( FieldConvertError )
  {
    double result = 0.0;
    if( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts character to/from a string
struct CharConvertor
{
  static std::string convert( char value )
  {
    if( value == '\0' ) return "";
    return std::string( 1, value );
  }

  static bool convert( const std::string& value, char& result )
  {
    if( value.size() != 1 ) return false;
    result = value[0];
    return true;
  }

  static char convert( const std::string& value )
  throw( FieldConvertError )
  {
    char result = '\0';
    if( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts boolean to/from a string
struct BoolConvertor
{
  static std::string convert( bool value )
  {
    const char ch = value ? 'Y' : 'N';
    return std::string( 1, ch );
  }

  static bool convert( const std::string& value, bool& result )
  {
    if( value.size() != 1 ) return false;
    switch( value[0] )
    {
      case 'Y': result = true; break;
      case 'N': result = false; break;
      default: return false;
    }

    return true;
  }

  static bool convert( const std::string& value )
  throw( FieldConvertError )
  {
    bool result = false;
    if( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts a UtcTimeStamp to/from a string
struct UtcTimeStampConvertor
{
  static std::string convert( const UtcTimeStamp& value,
                              bool showMilliseconds = false )
  throw( FieldConvertError )
  {
    char result[ 18+4 ];
    int year, month, day, hour, minute, second, millis;

    value.getYMD( year, month, day );
    value.getHMS( hour, minute, second, millis );

    integer_to_string_padded( result, 5, year, 4, '0' );
    integer_to_string_padded( result + 4, 3, month, 2, '0' );
    integer_to_string_padded( result + 6, 3, day, 2, '0' );
    result[8]  = '-';
    integer_to_string_padded( result + 9, 3, hour, 2, '0' );
    result[11] = ':';
    integer_to_string_padded( result + 12, 3, minute, 2, '0' );
    result[14] = ':';
    integer_to_string_padded( result + 15, 3, second, 2, '0' );

    if( showMilliseconds )
    {
      result[17] = '.';
      if( integer_to_string_padded ( result + 18, 4, millis, 3, '0' )
          != result + 18 )
      {
        throw FieldConvertError();
      }
    }

    return result;
  }

  static UtcTimeStamp convert( const std::string& value,
                               bool calculateDays = false )
  throw( FieldConvertError )
  {
    bool haveMilliseconds = false;

    switch( value.size() )
    {
      case 21: haveMilliseconds = true;
      case 17: break;
      default: throw FieldConvertError();
    }

    int i = 0;
    int c = 0;
    for( c = 0; c < 8; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();
    if (value[i++] != '-') throw FieldConvertError();
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();
    if( value[i++] != ':' ) throw FieldConvertError();
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();
    if( value[i++] != ':' ) throw FieldConvertError();
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();

    if( haveMilliseconds )
    {
      if( value[i++] != '.' ) throw FieldConvertError();
      for( c = 0; c < 3; ++c )
	      if( !isdigit(value[i++]) ) throw FieldConvertError();
    }

    int year, mon, mday, hour, min, sec, millis;

    i = 0;

    year = value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';

    mon = value[i++] - '0';
    mon = 10 * mon + value[i++] - '0';
    if( mon < 1 || 12 < mon ) throw FieldConvertError();

    mday = value[i++] - '0';
    mday = 10 * mday + value[i++] - '0';
    if( mday < 1 || 31 < mday ) throw FieldConvertError();

    ++i; // skip '-'

    hour = value[i++] - '0';
    hour = 10 * hour + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 23 < hour ) throw FieldConvertError();

    ++i; // skip ':'

    min = value[i++] - '0';
    min = 10 * min + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 59 < min ) throw FieldConvertError();

    ++i; // skip ':'

    sec = value[i++] - '0';
    sec = 10 * sec + value[i++] - '0';

    // No check for >= 0 as no '-' are converted here
    if( 60 < sec ) throw FieldConvertError();

    if( haveMilliseconds )
    {
      millis = (100 * (value[i+1] - '0')
                + 10 * (value[i+2] - '0')
                + (value[i+3] - '0'));
    }
    else
      millis = 0;

    return UtcTimeStamp (hour, min, sec, millis,
                         mday, mon, year);
  }
};

/// Converts a UtcTimeOnly to/from a string
struct UtcTimeOnlyConvertor
{
  static std::string convert( const UtcTimeOnly& value,
                              bool showMilliseconds = false)
  throw( FieldConvertError )
  {
    char result[ 9+4 ];
    int hour, minute, second, millis;

    value.getHMS( hour, minute, second, millis );

    integer_to_string_padded ( result, 3, hour, 2, '0' );
    result[2] = ':';
    integer_to_string_padded ( result + 3, 3, minute,  2, '0' );
    result[5] = ':';
    integer_to_string_padded ( result + 6, 3, second,  2, '0' );

    if( showMilliseconds )
    {
      result[8] = '.';
      if( integer_to_string_padded ( result + 9, 4, millis, 3, '0' )
          != result + 9 )
          throw FieldConvertError();
    }

    return result;
  }

  static UtcTimeOnly convert( const std::string& value )
  throw( FieldConvertError )
  {
    bool haveMilliseconds = false;

    switch( value.size() )
    {
      case 12: haveMilliseconds = true;
      case 8: break;
      default: throw FieldConvertError();
    }

    int i = 0;
    int c = 0;
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();
    if( value[i++] != ':' ) throw FieldConvertError();
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();
    if( value[i++] != ':' ) throw FieldConvertError();
    for( c = 0; c < 2; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();

    if( haveMilliseconds )
    {
      // ++i instead of i++ skips the '.' separator
      for( c = 0; c < 3; ++c )
	      if( !isdigit(value[++i]) ) throw FieldConvertError();
    }

    int hour, min, sec, millis;
 
    i = 0;

    hour = value[i++] - '0';
    hour = 10 * hour + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 23 < hour ) throw FieldConvertError();
    ++i; // skip ':'

    min = value[i++] - '0';
    min = 10 * min + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 59 < min ) throw FieldConvertError();
    ++i; // skip ':'

    sec = value[i++] - '0';
    sec = 10 * sec + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 60 < sec ) throw FieldConvertError();

    if( haveMilliseconds )
    {
      millis = (100 * (value[i+1] - '0')
                + 10 * (value[i+2] - '0')
                + (value[i+3] - '0'));
    }
    else
      millis = 0;

    return UtcTimeOnly( hour, min, sec, millis );
  }
};

/// Converts a UtcDate to/from a string
struct UtcDateConvertor
{
  static std::string convert( const UtcDate& value )
  throw( FieldConvertError )
  {
    char result[ 9 ];
    int year, month, day;

    value.getYMD( year, month, day );

    integer_to_string_padded( result, 5, year, 4, '0' );
    integer_to_string_padded( result + 4, 3, month, 2, '0' );
    integer_to_string_padded( result + 6, 3, day, 2, '0' );
    return result;
  }

  static UtcDate convert( const std::string& value )
  throw( FieldConvertError )
  {
    if( value.size() != 8 ) throw FieldConvertError();

    int i = 0;
    for( int c=0; c<8; ++c )
      if( !isdigit(value[i++]) ) throw FieldConvertError();

    int year, mon, mday;

    i = 0;

    year = value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';

    mon = value[i++] - '0';
    mon = 10 * mon + value[i++] - '0';
    if( mon < 1 || 12 < mon )
      throw FieldConvertError();

    mday = value[i++] - '0';
    mday = 10 * mday + value[i++] - '0';
    if( mday < 1 || 31 < mday )
      throw FieldConvertError();

    return UtcDateOnly( mday, mon, year );
  }
};

typedef UtcDateConvertor UtcDateOnlyConvertor;

typedef StringConvertor STRING_CONVERTOR;
typedef CharConvertor CHAR_CONVERTOR;
typedef DoubleConvertor PRICE_CONVERTOR;
typedef IntConvertor INT_CONVERTOR;
typedef DoubleConvertor AMT_CONVERTOR;
typedef DoubleConvertor QTY_CONVERTOR;
typedef StringConvertor CURRENCY_CONVERTOR;
typedef StringConvertor MULTIPLEVALUESTRING_CONVERTOR;
typedef StringConvertor MULTIPLESTRINGVALUE_CONVERTOR;
typedef StringConvertor MULTIPLECHARVALUE_CONVERTOR;
typedef StringConvertor EXCHANGE_CONVERTOR;
typedef UtcTimeStampConvertor UTCTIMESTAMP_CONVERTOR;
typedef BoolConvertor BOOLEAN_CONVERTOR;
typedef StringConvertor LOCALMKTDATE_CONVERTOR;
typedef StringConvertor DATA_CONVERTOR;
typedef DoubleConvertor FLOAT_CONVERTOR;
typedef DoubleConvertor PRICEOFFSET_CONVERTOR;
typedef StringConvertor MONTHYEAR_CONVERTOR;
typedef StringConvertor DAYOFMONTH_CONVERTOR;
typedef UtcDateConvertor UTCDATE_CONVERTOR;
typedef UtcTimeOnlyConvertor UTCTIMEONLY_CONVERTOR;
typedef IntConvertor NUMINGROUP_CONVERTOR;
typedef DoubleConvertor PERCENTAGE_CONVERTOR;
typedef IntConvertor SEQNUM_CONVERTOR;
typedef IntConvertor LENGTH_CONVERTOR;
typedef StringConvertor COUNTRY_CONVERTOR;
typedef StringConvertor TZTIMEONLY_CONVERTOR;
typedef StringConvertor TZTIMESTAMP_CONVERTOR;
typedef StringConvertor XMLDATA_CONVERTOR;
typedef StringConvertor LANGUAGE_CONVERTOR;
typedef CheckSumConvertor CHECKSUM_CONVERTOR;
}

#endif //FIX_FIELDCONVERTORS_H
