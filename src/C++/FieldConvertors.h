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

#ifndef FIX_FIELDCONVERTORS_H
#define FIX_FIELDCONVERTORS_H

#include "FieldTypes.h"
#include "Exceptions.h"
#include "Utility.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdio>

namespace FIX
{
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
    char temp[ 12 ];
    memset( temp, 0, 12 * sizeof( char ) );
    sprintf( temp, "%d", ( int ) value );
    return temp;
  }

  static bool convert( const std::string& value, long& result )
  {
    const char * str = value.c_str();
    if ( *str == '-' ) ++str;
    for ( const char * p = str; *p != 0; ++p )
    {
      if ( !isdigit( *p ) ) return false;
    }
    result = atol( value.c_str() );
    return true;
  }

  static long convert( const std::string& value )
  throw( FieldConvertError )
  {
    long result = 0;
    if ( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

struct CheckSumConvertor
{
  static std::string convert( long value )
  throw( FieldConvertError )
  {
    if ( value > 255 || value < 0 ) throw FieldConvertError();
    std::ostringstream stream;
    stream << std::setw( 3 ) << std::setfill( '0' ) << value;
    return stream.str();
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
  static std::string convert( double value )
  {
    char result[ 32 ];
    memset( result, 0, 32 * sizeof( char ) );
    sprintf( result, "%.15g", value );
    return result;
  }

  static bool convert( const std::string& value, double& result )
  {
    if ( !value.size() ) return false;
    if ( value == "." ) return false;

    result = atof( const_cast < char* > ( value.c_str() ) );
    std::string stripped = value;

    // add leading zero if none exists
    if ( *stripped.begin() == '.' ) 
      stripped = '0' + stripped;

    // remove extra leading zeros
    while ( stripped.size() > 1 
            && *(stripped.begin()) == '0' 
            && isdigit(*(stripped.begin()+1)) )
    {
      stripped.erase( stripped.begin() );
    }

    if ( stripped.find( '.' ) != std::string::npos )
    {
      std::string::reverse_iterator r = stripped.rbegin();
      while ( r != stripped.rend() && ( *r == '0' || *r == '.' ) )
      {
        if ( *r == '.' ) { stripped.resize( stripped.size() - 1 ); break; }
        stripped.resize( stripped.size() - 1 ); r++;
      }
    }
    if ( *stripped.begin() == '0' )
    {
      std::string::size_type i = stripped.find_first_not_of( '0' );
      std::string::size_type dot = stripped.find( '.' );
      if ( i != dot )
        stripped = stripped.substr( i );
    }

    std::string converted = convert( result );
    if ( stripped.size() != converted.size() ) return false;

    // strcmp is being used because == operator is funky under linux
    return ( strcmp( stripped.c_str(), converted.c_str() ) == 0 );
  }

  static double convert( const std::string& value )
  throw( FieldConvertError )
  {
    double result = 0.0;
    if ( !convert( value, result ) )
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
    char temp[ 2 ];
    temp[ 0 ] = value;
    temp[ 1 ] = '\0';
    return temp;
  }

  static bool convert( const std::string& value, char& result )
  {
    if ( value.size() == 0 ) return false;
    result = *value.c_str();
    return true;
  }

  static char convert( const std::string& value )
  throw( FieldConvertError )
  {
    char result = '\0';
    if ( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts boolean to/from a string
struct BoolConvertor
{
  static std::string convert( bool value )
  { return value ? "Y" : "N"; }

  static bool convert( const std::string& value, bool& result )
  {
    if ( value == "Y" ) result = true;
    else
      if ( value == "N" ) result = false;
      else
        return false;
    return true;
  }

  static bool convert( const std::string& value )
  throw( FieldConvertError )
  {
    bool result = false;
    if ( !convert( value, result ) )
      throw FieldConvertError();
    else
      return result;
  }
};

/// Converts a UtcTimeStamp to/from a string
struct UtcTimeStampConvertor
{
  static std::string convert( const UtcTimeStamp& value, bool showMilliseconds=false)
  throw( FieldConvertError )
  {
    char result[ 18+4 ];
    int len = strftime( result, 18, "%Y%m%d-%H:%M:%S", value );
    if ( len != 17 ) throw FieldConvertError();

    if(true==showMilliseconds)
    {
      len = sprintf(result+17,".%03d",value.getMillisecond());
      if ( len != 4) throw FieldConvertError();
    }
    return result;
  }

  static UtcTimeStamp convert( const std::string& value )
  throw( FieldConvertError )
  {
    UtcTimeStamp result;
    const char* val = value.c_str();
    const char* len = strptime( val, "%Y%m%d-%H:%M:%S", result );
    if ( len - val != 17 ) throw FieldConvertError();
    static_cast<tm*>(result)->tm_isdst = -1;

    // if we have milliseconds in the string, *len should be ".sss"
    result.setMillisecond(0);
    if(NULL != len && strlen(len)==4 && len[0] == '.')
    {
      int ms = atoi(&len[1]);
      if(ms < 0 || ms > 999) throw FieldConvertError();
        result.setMillisecond(ms);
    }

    return result;
  }
};

/// Converts a UtcTimeOnly to/from a string
struct UtcTimeOnlyConvertor
{
  static std::string convert( const UtcTimeOnly& value, bool showMilliseconds=false)
  throw( FieldConvertError )
  {
    char result[ 9+4 ];
    int len = strftime( result, 9, "%H:%M:%S", value );
    if ( len != 8 ) throw FieldConvertError();

    if(true==showMilliseconds)
    {
      len = sprintf(result+8,".%03d",value.getMillisecond());
      if ( len != 4) throw FieldConvertError();
    }

    return result;
  }

  static UtcTimeOnly convert( const std::string& value )
  throw( FieldConvertError )
  {
    UtcTimeOnly result;
    const char* val = value.c_str();
    const char* len = strptime( val, "%H:%M:%S", result );
    if ( len - val != 8 ) throw FieldConvertError();
    static_cast<tm*>(result)->tm_isdst = -1;

    // if we have milliseconds in the string, *len should be ".sss"
    result.setMillisecond(0);
    if(NULL != len && strlen(len)==4 && len[0] == '.')
    {
      int ms = atoi(&len[1]);
      if(ms < 0 || ms > 999) throw FieldConvertError();
      result.setMillisecond(ms);
    }

    return result;
  }
};

/// Converts a UtcDate to/from a string
struct UtcDateConvertor
{
  static std::string convert( const UtcDate& value )
  throw( FieldConvertError )
  {
    char result[ 9 ];
    int len = strftime( result, 9, "%Y%m%d", value );
    if ( len != 8 ) throw FieldConvertError();
    return result;
  }

  static UtcDate convert( const std::string& value )
  throw( FieldConvertError )
  {
    UtcDate result;
    const char* val = value.c_str();
    const char* len = strptime( val, "%Y%m%d", result );
    if ( len - val != 8 ) throw FieldConvertError();
    static_cast<tm*>(result)->tm_isdst = -1;
    return result;
  }
};

typedef UtcDateConvertor UtcDateOnlyConvertor;

typedef StringConvertor STRING_CONVERTOR;
typedef CharConvertor CHAR_CONVERTOR;
typedef DoubleConvertor PRICE_CONVERTOR;
typedef IntConvertor INT_CONVERTOR;
typedef DoubleConvertor AMT_CONVERTOR;
typedef DoubleConvertor QTY_CONVERTOR;
typedef CharConvertor CURRENCY_CONVERTOR;
typedef StringConvertor MULTIPLEVALUESTRING_CONVERTOR;
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
typedef CheckSumConvertor CHECKSUM_CONVERTOR;
}

#endif //FIX_FIELDCONVERTORS_H
