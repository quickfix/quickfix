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

#ifndef FIX_FIELDCONVERTORS_H
#define FIX_FIELDCONVERTORS_H

#ifdef _MSC_VER
#pragma warning( disable: 4146 )
#endif

#include "FieldTypes.h"
#include "Exceptions.h"
#include "Utility.h"
#include "config-all.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <limits>
#include <iterator>

namespace FIX
{

typedef int signed_int;
typedef unsigned int unsigned_int;

#define UNSIGNED_VALUE_OF( x ) ( ( x < 0 ) ? -unsigned_int(x) : unsigned_int(x) )

#define IS_SPACE( x ) ( x == ' ' )
#define IS_DIGIT( x ) ( unsigned_int( x - '0' ) < 10 )

inline int number_of_symbols_in( const signed_int value )
{
  unsigned_int number = UNSIGNED_VALUE_OF( value );

  int symbols = 0;

  while( number > 9999 )
  {
    symbols += 4;
    number /= 10000;
  }

  // small tweak to make comparison times consistent
  // always 2 comparisons instead of [1 - 4]
  if( number > 99 )
  {
    if( number > 999 )
      symbols += 4;
    else
      symbols += 3;
  }
  else
  {
    if( number > 9 )
      symbols += 2;
    else
      symbols += 1;
  }

  if( value < 0 )
    symbols += 1;

  return symbols;
}

static const char digit_pairs[201] = {
  "00010203040506070809"
  "10111213141516171819"
  "20212223242526272829"
  "30313233343536373839"
  "40414243444546474849"
  "50515253545556575859"
  "60616263646566676869"
  "70717273747576777879"
  "80818283848586878889"
  "90919293949596979899"
};

inline char* integer_to_string( char* buf, const size_t len, signed_int t )
{
  const bool isNegative = t < 0;
  char* p = buf + len;

  unsigned_int number = UNSIGNED_VALUE_OF( t );

  while( number > 99 )
  {
    unsigned_int pos = number % 100;
    number /= 100;

    *--p = digit_pairs[2 * pos + 1];
    *--p = digit_pairs[2 * pos];
  }

  if( number > 9 )
  {
    *--p = digit_pairs[2 * number + 1];
    *--p = digit_pairs[2 * number];
  }
  else
  {
    *--p = '0' + char(number);
  }

  if( isNegative )
    *--p = '-';

  return p;
}

inline char* integer_to_string_padded
( char* buf, const size_t len, signed_int t,
  const char paddingChar = '0')
{
  char* p = integer_to_string( buf, len, t );
  while( p > buf )
    *--p = paddingChar;
  return p;
}

/// Empty converter is a no-op.
struct EmptyConvertor
{
  static const std::string& convert( const std::string& value )
  { return value; }
};

typedef EmptyConvertor StringConvertor;

/// Converts integer to/from a string
struct IntConvertor
{
  static std::string convert( signed_int value )
  {
    // buffer is big enough for significant digits and extra digit,
    // minus and null
    char buffer[std::numeric_limits<signed_int>::digits10 + 2];
    const char* const start
      = integer_to_string( buffer, sizeof (buffer), value );
    return std::string( start, buffer + sizeof (buffer) - start );
  }

  static bool convert(     
    std::string::const_iterator str, 
    std::string::const_iterator end, 
    signed_int& result )
  {
    bool isNegative = false;
    signed_int x = 0;

    if( str == end )
      return false;

    if( *str == '-' )
    {
      isNegative = true;
      if( ++str == end )
        return false;
    }

    do
    {
      const unsigned_int c = *str - '0';
      if( c > 9 ) return false;
      x = 10 * x + c;
    } while ( ++str != end );

    if( isNegative )
      x = -unsigned_int(x);

    result = x;
    return true;
  }

  static bool convert( const std::string& value, signed_int& result )
  {
    return convert( value.begin(), value.end(), result );
  }

  static signed_int convert( const std::string& value )
  EXCEPT ( FieldConvertError )
  {
    signed_int result = 0;
    if( !convert( value.begin(), value.end(), result ) )
      throw FieldConvertError(value);
    else
      return result;
  }
};

/// Converts checksum to/from a string
struct CheckSumConvertor
{
  static std::string convert( int value )
  EXCEPT ( FieldConvertError )
  {
    if ( value > 255 || value < 0 ) throw FieldConvertError();
    char result[3];
    integer_to_string_padded(result, sizeof(result), value);
    return std::string( result, sizeof( result ) );
  }

  static bool convert( const std::string& value, int& result )
  {
    return IntConvertor::convert( value, result );
  }

  static int convert( const std::string& value )
  EXCEPT ( FieldConvertError )
  {
    return IntConvertor::convert( value );
  }
};

/// Converts double to/from a string
struct DoubleConvertor
{

private:

  static double fast_strtod( const char * buffer, int size, int * processed_chars );

  static int fast_dtoa( char * buffer, int size, double value, int significant_digits );

  static int fast_fixed_dtoa( char * buffer, int size, double value, int significant_digits);

public:

  static const int SIGNIFICANT_DIGITS = 15;
  static const int BUFFFER_SIZE = 32;

  static std::string convert( double value, int padding = 0, int significant_digits = SIGNIFICANT_DIGITS, int buffer_size = BUFFFER_SIZE )
  {
    char result[buffer_size];
    char *end = 0;

    int size;
    if( value == 0 || value > 0.0001 || value < -0.0001 )
    {
      size = fast_dtoa( result, buffer_size, value, significant_digits);
      if( size == 0 )
        return std::string();

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
          ++size;
        }
        int needed = padding - (int)(end - point);

        if( needed > 0 )
        {
          memset( ++end, '0', needed );
          size += needed;
        }
      }
    }
    else
    {
      size = fast_fixed_dtoa( result, buffer_size, value, significant_digits );
      if( size == 0 )
        return std::string();

      // strip trailing 0's
      end = result + size - 1;

      if( padding > 0 )
      {
        int discard = significant_digits - padding;

        while( (*end == '0') && (discard-- > 0) )
        {
          --end;
          --size;
        }
      }
      else
      {
        while( *end == '0' )
        {
          --end;
          --size;
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

  if( IS_DIGIT(*i) )
  {
    haveDigit = true;
    while( IS_DIGIT (*++i) );
  }

  if( *i == '.' && IS_DIGIT(*++i) )
  {
    haveDigit = true;
    while( IS_DIGIT (*++i) );
  }

  if( *i || !haveDigit ) return false;

  int processed_chars;
  const int total_length = value.length();
  result = fast_strtod( value.c_str(), total_length, &processed_chars);

  return true;
}

  static double convert( const std::string& value )
  EXCEPT ( FieldConvertError )
  {
    double result = 0.0;
    if( !convert( value, result ) )
      throw FieldConvertError(value);
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
  EXCEPT ( FieldConvertError )
  {
    char result = '\0';
    if( !convert( value, result ) )
      throw FieldConvertError(value);
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
  EXCEPT ( FieldConvertError )
  {
    bool result = false;
    if( !convert( value, result ) )
      throw FieldConvertError(value);
    else
      return result;
  }
};

/// Converts a UtcTimeStamp to/from a string
struct UtcTimeStampConvertor
{
  static std::string convert( const UtcTimeStamp& value,
                              int precision = 0 )
  EXCEPT ( FieldConvertError )
  {
    char result[ 17+10 ]; // Maximum
    int year, month, day, hour, minute, second, fraction;

    value.getYMD( year, month, day );
    value.getHMS( hour, minute, second, fraction, precision );

    integer_to_string_padded( result, 4, year);
    integer_to_string_padded( result + 4, 2, month );
    integer_to_string_padded( result + 6, 2, day );
    result[8]  = '-';
    integer_to_string_padded( result + 9, 2, hour);
    result[11] = ':';
    integer_to_string_padded( result + 12, 2, minute);
    result[14] = ':';
    integer_to_string_padded( result + 15, 2, second);

    if( precision )
    {
      result[17] = '.';
      integer_to_string_padded ( result + 18, precision, fraction );
    }

    return std::string(result, precision ? (17 + 1 + precision) : 17);
  }

  static UtcTimeStamp convert( const std::string& value )
  EXCEPT ( FieldConvertError )
  {
    size_t len = value.size();
    if (len < 17 || len > 27) throw FieldConvertError(value);

    size_t i = 0;
    int c = 0;
    for( c = 0; c < 8; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);
    if (value[i++] != '-') throw FieldConvertError(value);
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);
    if( value[i++] != ':' ) throw FieldConvertError(value);
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);
    if( value[i++] != ':' ) throw FieldConvertError(value);
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);

    int year, mon, mday, hour, min, sec;

    i = 0;

    year = value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';

    mon = value[i++] - '0';
    mon = 10 * mon + value[i++] - '0';
    if( mon < 1 || 12 < mon ) throw FieldConvertError(value);

    mday = value[i++] - '0';
    mday = 10 * mday + value[i++] - '0';
    if( mday < 1 || 31 < mday ) throw FieldConvertError(value);

    ++i; // skip '-'

    hour = value[i++] - '0';
    hour = 10 * hour + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 23 < hour ) throw FieldConvertError(value);

    ++i; // skip ':'

    min = value[i++] - '0';
    min = 10 * min + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 59 < min ) throw FieldConvertError(value);

    ++i; // skip ':'

    sec = value[i++] - '0';
    sec = 10 * sec + value[i++] - '0';

    // No check for >= 0 as no '-' are converted here
    if( 60 < sec ) throw FieldConvertError(value);

    if (len == 17)
      return UtcTimeStamp (hour, min, sec, 0,
                           mday, mon, year);

    if( value[i++] != '.' ) throw FieldConvertError(value);

    int fraction = 0;
    for (; i < len; ++i)
    {
      char ch = value[i];
      if( !IS_DIGIT(ch)) throw FieldConvertError(value);
      fraction = (fraction * 10) + ch - '0';
    }

    return UtcTimeStamp (hour, min, sec, fraction,
                         mday, mon, year, len - 17 - 1);
  }
};

/// Converts a UtcTimeOnly to/from a string
struct UtcTimeOnlyConvertor
{
  static std::string convert( const UtcTimeOnly& value,
                              int precision = 0 )
  EXCEPT ( FieldConvertError )
  {
    char result[ 8+10 ]; // Maximum
    int hour, minute, second, fraction;

    value.getHMS( hour, minute, second, fraction, precision );

    integer_to_string_padded ( result, 2, hour );
    result[2] = ':';
    integer_to_string_padded ( result + 3, 2, minute );
    result[5] = ':';
    integer_to_string_padded ( result + 6, 2, second );

    if( precision )
    {
      result[8] = '.';
      integer_to_string_padded ( result + 9, precision, fraction );
    }

    return std::string(result, precision ? (8 + 1 + precision) : 8);
  }

  static UtcTimeOnly convert( const std::string& value)
  EXCEPT ( FieldConvertError )
  {
    size_t len = value.size();
    if (len < 8 || len > 18) throw FieldConvertError(value);

    size_t i = 0;
    int c = 0;
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);
    if( value[i++] != ':' ) throw FieldConvertError(value);
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);
    if( value[i++] != ':' ) throw FieldConvertError(value);
    for( c = 0; c < 2; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);

    int hour, min, sec;

    i = 0;

    hour = value[i++] - '0';
    hour = 10 * hour + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 23 < hour ) throw FieldConvertError(value);

    ++i; // skip ':'

    min = value[i++] - '0';
    min = 10 * min + value[i++] - '0';
    // No check for >= 0 as no '-' are converted here
    if( 59 < min ) throw FieldConvertError(value);

    ++i; // skip ':'

    sec = value[i++] - '0';
    sec = 10 * sec + value[i++] - '0';

    // No check for >= 0 as no '-' are converted here
    if( 60 < sec ) throw FieldConvertError(value);

    if (len == 8)
      return UtcTimeOnly (hour, min, sec, 0);

    if( value[i++] != '.' ) throw FieldConvertError(value);

    int fraction = 0;
    for (; i < len; ++i)
    {
      char ch = value[i];
      if( !IS_DIGIT(ch)) throw FieldConvertError(value);
      fraction = (fraction * 10) + ch - '0';
    }

    return UtcTimeOnly (hour, min, sec, fraction, len - 8 - 1);
  }
};

/// Converts a UtcDate to/from a string
struct UtcDateConvertor
{
  static std::string convert( const UtcDate& value )
  EXCEPT ( FieldConvertError )
  {
    int year, month, day;
    value.getYMD( year, month, day );

    char result[ 8 ];

    integer_to_string_padded( result, 4, year );
    integer_to_string_padded( result + 4, 2, month );
    integer_to_string_padded( result + 6, 2, day );

    return std::string( result, sizeof( result ) );
  }

  static UtcDate convert( const std::string& value )
  EXCEPT ( FieldConvertError )
  {
    if( value.size() != 8 ) throw FieldConvertError(value);

    int i = 0;
    for( int c=0; c<8; ++c )
      if( !IS_DIGIT(value[i++]) ) throw FieldConvertError(value);

    int year, mon, mday;

    i = 0;

    year = value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';
    year = 10 * year + value[i++] - '0';

    mon = value[i++] - '0';
    mon = 10 * mon + value[i++] - '0';
    if( mon < 1 || 12 < mon )
      throw FieldConvertError(value);

    mday = value[i++] - '0';
    mday = 10 * mday + value[i++] - '0';
    if( mday < 1 || 31 < mday )
      throw FieldConvertError(value);

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
