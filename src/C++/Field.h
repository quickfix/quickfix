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

#ifndef FIX_FIELD
#define FIX_FIELD

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <sstream>
#include <numeric>
#include "FieldNumbers.h"
#include "FieldConvertors.h"
#include "FieldTypes.h"
#include "Utility.h"

namespace FIX
{
/*! \addtogroup user
 *  @{
 */
/**
 * Base representation of all Field classes.
 *
 * This base class is the lowest common denominator of all fields.  It
 * keeps all fields in its most generic string representation with its
 * integer tag.
 */
class FieldBase
{
  friend class Message;
public:
  FieldBase( int field, const std::string& string, bool doCalculate = true )
    : m_field( field ), m_string(string), m_length( 0 ), m_total( 0 ),
      m_calculated( false )
  {}

  void setField( int field )
  {
    m_field = field;
    m_calculated = false;
    calculate();
  }

  void setString( const std::string& string )
  {
    m_string = string;
    m_calculated = false;
    calculate();
  }

  /// Get the fields integer tag.
  int getField() const
    { return m_field; }

  /// Get the string representation of the fields value.
  const std::string& getString() const
    { return m_string; }

  /// Get the string representation of the Field (i.e.) 55=MSFT[SOH]
  const std::string& getValue() const
  {
    const_cast<FieldBase*>(this)->calculate();
    return m_data;
  }

  /// Get the length of the fields string representation
  int getLength() const
  {
    const_cast<FieldBase*>(this)->calculate();
    return m_length;
  }

  /// Get the total value the fields characters added together
  int getTotal() const
  {
    const_cast<FieldBase*>(this)->calculate();
    return m_total;
  }

  /// Compares fields based on thier tag numbers
  bool operator < ( const FieldBase& field ) const
    { return m_field < field.m_field; }

private:
  void calculate()
  {
    if( m_calculated ) return;

    char buf[64];

    if( 13 + m_string.length() < sizeof(buf) )
    {
      int tagLength = STRING_SPRINTF( buf, "%d=", m_field );
      m_length = tagLength + m_string.length() + 1;
      memcpy( buf + tagLength, m_string.data(), m_string.length() );
      buf[m_length - 1] = '\001';
      m_data.assign( buf, m_length );
    }
    else
    {
      m_data = IntConvertor::convert(m_field) + "=" + m_string + "\001";
      m_length = m_data.length();
    }

    const unsigned char* iter =
      reinterpret_cast<const unsigned char*>( m_data.c_str() );
    m_total = std::accumulate( iter, iter + m_length, 0 );

    m_calculated = true;
  }

  int m_field;
  std::string m_data;
  std::string m_string;
  int m_length;
  int m_total;
  mutable bool m_calculated;
};
/*! @} */

inline std::ostream& operator <<
( std::ostream& stream, const FieldBase& field )
{
  stream << field.getString();
  return stream;
}

/**
 * MSC doesn't support partial template specialization so we have this.
 * this is here to provide equality checking against native char arrays.
 */
class StringField : public FieldBase
{
public:
  explicit StringField( int field, const std::string& data )
: FieldBase( field, data ) {}
  StringField( int field )
: FieldBase( field, "" ) {}

  void setValue( const std::string& value )
    { setString( value ); }
  const std::string getValue() const
    { return getString(); }
  operator const std::string() const
    { return getString(); }

  bool operator<( const StringField& rhs ) const
    { return getString() < rhs.getString(); }
  bool operator>( const StringField& rhs ) const
    { return getString() > rhs.getString(); }
  bool operator==( const StringField& rhs ) const
    { return getString() == rhs.getString(); }
  bool operator!=( const StringField& rhs ) const
    { return getString() != rhs.getString(); }
  bool operator<=( const StringField& rhs ) const
    { return getString() <= rhs.getString(); }
  bool operator>=( const StringField& rhs ) const
    { return getString() >= rhs.getString(); }
  friend bool operator<( const StringField&, const char* );
  friend bool operator<( const char*, const StringField& );
  friend bool operator>( const StringField&, const char* );
  friend bool operator>( const char*, const StringField& );
  friend bool operator==( const StringField&, const char* );
  friend bool operator==( const char*, const StringField& );
  friend bool operator!=( const StringField&, const char* );
  friend bool operator!=( const char*, const StringField& );
  friend bool operator<=( const StringField&, const char* );
  friend bool operator<=( const char*, const StringField& );
  friend bool operator>=( const StringField&, const char* );
  friend bool operator>=( const char*, const StringField& );

  friend bool operator<( const StringField&, const std::string& );
  friend bool operator<( const std::string&, const StringField& );
  friend bool operator>( const StringField&, const std::string& );
  friend bool operator>( const std::string&, const StringField& );
  friend bool operator==( const StringField&, const std::string& );
  friend bool operator==( const std::string&, const StringField& );
  friend bool operator!=( const StringField&, const std::string& );
  friend bool operator!=( const std::string&, const StringField& );
  friend bool operator<=( const StringField&, const std::string& );
  friend bool operator<=( const std::string&, const StringField& );
  friend bool operator>=( const StringField&, const std::string& );
  friend bool operator>=( const std::string&, const StringField& );
};

inline bool operator<( const StringField& lhs, const char* rhs )
  { return lhs.getValue() < rhs; }
inline bool operator<( const char* lhs, const StringField& rhs )
  { return lhs < rhs.getValue(); }
inline bool operator>( const StringField& lhs, const char* rhs )
  { return lhs.getValue() > rhs; }
inline bool operator>( const char* lhs, const StringField& rhs )
  { return lhs > rhs.getValue(); }
inline bool operator==( const StringField& lhs, const char* rhs )
  { return lhs.getValue() == rhs; }
inline bool operator==( const char* lhs, const StringField& rhs )
  { return lhs == rhs.getValue(); }
inline bool operator!=( const StringField& lhs, const char* rhs )
  { return lhs.getValue() != rhs; }
inline bool operator!=( const char* lhs, const StringField& rhs )
  { return lhs != rhs.getValue(); }
inline bool operator<=( const StringField& lhs, const char* rhs )
  { return lhs.getValue() <= rhs; }
inline bool operator<=( const char* lhs, const StringField& rhs )
  { return lhs <= rhs.getValue(); }
inline bool operator>=( const StringField& lhs, const char* rhs )
  { return lhs.getValue() >= rhs; }
inline bool operator>=( const char* lhs, const StringField& rhs )
  { return lhs >= rhs.getValue(); }

inline bool operator<( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() < rhs; }
inline bool operator<( const std::string& lhs, const StringField& rhs )
  { return lhs < rhs.getValue(); }
inline bool operator>( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() > rhs; }
inline bool operator>( const std::string& lhs, const StringField& rhs )
  { return lhs > rhs.getValue(); }
inline bool operator==( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() == rhs; }
inline bool operator==( const std::string& lhs, const StringField& rhs )
  { return lhs == rhs.getValue(); }
inline bool operator!=( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() != rhs; }
inline bool operator!=( const std::string& lhs, const StringField& rhs )
  { return lhs != rhs.getValue(); }
inline bool operator<=( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() <= rhs; }
inline bool operator<=( const std::string& lhs, const StringField& rhs )
  { return lhs <= rhs.getValue(); }
inline bool operator>=( const StringField& lhs, const std::string& rhs )
  { return lhs.getValue() >= rhs; }
inline bool operator>=( const std::string& lhs, const StringField& rhs )
  { return lhs >= rhs.getValue(); }

/// Field that contains a character value
class CharField : public FieldBase
{
public:
  explicit CharField( int field, char data )
: FieldBase( field, CharConvertor::convert( data ) ) {}
  CharField( int field )
: FieldBase( field, "" ) {}

  void setValue( char value )
    { setString( CharConvertor::convert( value ) ); }
  const char getValue() const throw ( IncorrectDataFormat )
    { try
      { return CharConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator const char() const
    { return getValue(); }
};

/// Field that contains a double value
class DoubleField : public FieldBase
{
public:
  explicit DoubleField( int field, double data )
: FieldBase( field, DoubleConvertor::convert( data ) ) {}
  DoubleField( int field )
: FieldBase( field, "" ) {}

  void setValue( double value )
    { setString( DoubleConvertor::convert( value ) ); }
  const double getValue() const throw ( IncorrectDataFormat )
    { try
      { return DoubleConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator const double() const
    { return getValue(); }
};

/// Field that contains an integer value
class IntField : public FieldBase
{
public:
  explicit IntField( int field, int data )
: FieldBase( field, IntConvertor::convert( data ) ) {}
  IntField( int field )
: FieldBase( field, "" ) {}

  void setValue( int value )
    { setString( IntConvertor::convert( value ) ); }
  const int getValue() const throw ( IncorrectDataFormat )
    { try
      { return IntConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator const int() const
    { return getValue(); }
};

/// Field that contains a boolean value
class BoolField : public FieldBase
{
public:
  explicit BoolField( int field, bool data )
: FieldBase( field, BoolConvertor::convert( data ) ) {}
  BoolField( int field )
: FieldBase( field, "" ) {}

  void setValue( bool value )
    { setString( BoolConvertor::convert( value ) ); }
  const bool getValue() const throw ( IncorrectDataFormat )
    { try
      { return BoolConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator const bool() const
    { return getValue(); }
};

/// Field that contains a UTC time stamp value
class UtcTimeStampField : public FieldBase
{
public:
  explicit UtcTimeStampField( int field, const UtcTimeStamp& data, bool showMilliseconds = false )
: FieldBase( field, UtcTimeStampConvertor::convert( data, showMilliseconds ) ) {}
  UtcTimeStampField( int field, bool showMilliseconds = false )
: FieldBase( field, UtcTimeStampConvertor::convert( UtcTimeStamp(), showMilliseconds ) ) {}

  void setValue( UtcTimeStamp& value )
    { setString( UtcTimeStampConvertor::convert( value ) ); }
  UtcTimeStamp getValue() const throw ( IncorrectDataFormat )
    { try
      { return UtcTimeStampConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator UtcTimeStamp() const
    { return getValue(); }

  bool operator<( const UtcTimeStampField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcTimeStampField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcTimeStampField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

/// Field that contains a UTC date value
class UtcDateField : public FieldBase
{
public:
  explicit UtcDateField( int field, const UtcDate& data )
: FieldBase( field, UtcDateConvertor::convert( data ) ) {}
  UtcDateField( int field )
: FieldBase( field, UtcDateConvertor::convert( UtcDate() ) ) {}

  void setValue( UtcDate& value )
    { setString( UtcDateConvertor::convert( value ) ); }
  UtcDate getValue() const throw ( IncorrectDataFormat )
    { try
      { return UtcDateConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator UtcDate() const
    { return getValue(); }

  bool operator<( const UtcDateField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcDateField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcDateField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

/// Field that contains a UTC time value
class UtcTimeOnlyField : public FieldBase
{
public:
  explicit UtcTimeOnlyField( int field, const UtcTimeOnly& data, bool showMilliseconds = false )
: FieldBase( field, UtcTimeOnlyConvertor::convert( data, showMilliseconds ) ) {}
  UtcTimeOnlyField( int field, bool showMilliseconds = false )
: FieldBase( field, UtcTimeOnlyConvertor::convert( UtcTimeOnly(), showMilliseconds ) ) {}

  void setValue( UtcTimeOnly& value )
    { setString( UtcTimeOnlyConvertor::convert( value ) ); }
  UtcTimeOnly getValue() const throw ( IncorrectDataFormat )
    { try
      { return UtcTimeOnlyConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator UtcTimeOnly() const
    { return getValue(); }

  bool operator<( const UtcTimeOnlyField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcTimeOnlyField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcTimeOnlyField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

/// Field that contains a checksum value
class CheckSumField : public FieldBase
{
public:
  explicit CheckSumField( int field, int data )
: FieldBase( field, CheckSumConvertor::convert( data ) ) {}
  CheckSumField( int field )
: FieldBase( field, "" ) {}

  void setValue( int value )
    { setString( CheckSumConvertor::convert( value ) ); }
  const int getValue() const throw ( IncorrectDataFormat )
    { try
      { return CheckSumConvertor::convert( getString() ); }
      catch( FieldConvertError& )
      { throw IncorrectDataFormat( getField() ); } }
  operator const int() const
    { return getValue(); }
};

typedef DoubleField PriceField;
typedef DoubleField AmtField;
typedef DoubleField QtyField;
typedef StringField CurrencyField;
typedef StringField MultipleValueStringField;
typedef StringField ExchangeField;
typedef StringField LocalMktDateField;
typedef StringField DataField;
typedef DoubleField FloatField;
typedef DoubleField PriceOffsetField;
typedef StringField MonthField;
typedef StringField MonthYearField;
typedef StringField DayOfMonthField;
typedef UtcDateField UtcDateOnlyField;
typedef IntField LengthField;
typedef IntField NumInGroupField;
typedef IntField SeqNumField;
typedef DoubleField PercentageField;
typedef StringField CountryField;
}

#define DEFINE_FIELD_CLASS_NUM( NAME, TOK, TYPE, NUM ) \
class NAME : public TOK##Field { public: \
NAME() : TOK##Field(NUM) {} \
NAME(const TYPE& value) : TOK##Field(NUM, value) {} \
}

#define DEFINE_FIELD_CLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_CLASS_NUM(NAME, TOK, TYPE, FIELD::NAME)

#define DEFINE_DEPRECATED_FIELD_CLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_CLASS_NUM(NAME, TOK, TYPE, DEPRECATED_FIELD::NAME)

#define DEFINE_FIELD_TIMECLASS_NUM( NAME, TOK, TYPE, NUM ) \
class NAME : public TOK##Field { public: \
NAME() : TOK##Field(NUM, false) {} \
NAME(bool showMilliseconds) : TOK##Field(NUM, showMilliseconds) {} \
NAME(const TYPE& value) : TOK##Field(NUM, value) {} \
NAME(const TYPE& value, bool showMilliseconds) : TOK##Field(NUM, value, showMilliseconds) {} \
}

#define DEFINE_FIELD_TIMECLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_TIMECLASS_NUM(NAME, TOK, TYPE, FIELD::NAME)

#define DEFINE_DEPRECATED_FIELD_TIMECLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_TIMECLASS_NUM(NAME, TOK, TYPE, DEPRECATED_FIELD::NAME)

#define DEFINE_CHECKSUM( NAME ) \
  DEFINE_FIELD_CLASS(NAME, CheckSum, INT)
#define DEFINE_STRING( NAME ) \
  DEFINE_FIELD_CLASS(NAME, String, STRING)
#define DEFINE_CHAR( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Char, CHAR)
#define DEFINE_PRICE( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Price, PRICE)
#define DEFINE_INT( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Int, INT)
#define DEFINE_AMT( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Amt, AMT)
#define DEFINE_QTY( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Qty, QTY)
#define DEFINE_CURRENCY( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Currency, CURRENCY)
#define DEFINE_MULTIPLEVALUESTRING( NAME ) \
  DEFINE_FIELD_CLASS(NAME, MultipleValueString, MULTIPLEVALUESTRING)
#define DEFINE_EXCHANGE( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Exchange, EXCHANGE)
#define DEFINE_UTCTIMESTAMP( NAME ) \
  DEFINE_FIELD_TIMECLASS(NAME, UtcTimeStamp, UTCTIMESTAMP)
#define DEFINE_BOOLEAN( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Bool, BOOLEAN)
#define DEFINE_LOCALMKTDATE( NAME ) \
  DEFINE_FIELD_CLASS(NAME, String, LOCALMKTDATE)
#define DEFINE_DATA( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Data, DATA)
#define DEFINE_FLOAT( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Float, FLOAT)
#define DEFINE_PRICEOFFSET( NAME ) \
  DEFINE_FIELD_CLASS(NAME, PriceOffset, PRICEOFFSET)
#define DEFINE_MONTHYEAR( NAME ) \
  DEFINE_FIELD_CLASS(NAME, MonthYear, MONTHYEAR)
#define DEFINE_DAYOFMONTH( NAME ) \
  DEFINE_FIELD_CLASS(NAME, DayOfMonth, DAYOFMONTH)
#define DEFINE_UTCDATE( NAME ) \
  DEFINE_FIELD_CLASS(NAME, UtcDate, UTCDATE)
#define DEFINE_UTCDATEONLY( NAME ) \
  DEFINE_FIELD_CLASS(NAME, UtcDateOnly, UTCDATEONLY)
#define DEFINE_UTCTIMEONLY( NAME ) \
  DEFINE_FIELD_CLASS(NAME, UtcTimeOnly, UTCTIMEONLY)
#define DEFINE_NUMINGROUP( NAME ) \
  DEFINE_FIELD_CLASS(NAME, NumInGroup, NUMINGROUP)
#define DEFINE_SEQNUM( NAME ) \
  DEFINE_FIELD_CLASS(NAME, SeqNum, SEQNUM)
#define DEFINE_LENGTH( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Length, LENGTH)
#define DEFINE_PERCENTAGE( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Percentage, PERCENTAGE)
#define DEFINE_COUNTRY( NAME ) \
  DEFINE_FIELD_CLASS(NAME, Country, COUNTRY)

#define USER_DEFINE_STRING( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, String, STRING, NUM)
#define USER_DEFINE_CHAR( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Char, CHAR, NUM)
#define USER_DEFINE_PRICE( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Price, PRICE, NUM)
#define USER_DEFINE_INT( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Int, INT, NUM)
#define USER_DEFINE_AMT( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Amt, AMT, NUM)
#define USER_DEFINE_QTY( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Qty, QTY, NUM)
#define USER_DEFINE_CURRENCY( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Currency, CURRENCY, NUM)
#define USER_DEFINE_MULTIPLEVALUESTRING( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, MultipleValueString, MULTIPLEVALUESTRING, NUM)
#define USER_DEFINE_EXCHANGE( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Exchange, EXCHANGE, NUM)
#define USER_DEFINE_UTCTIMESTAMP( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, UtcTimeStamp, UTCTIMESTAMP, NUM)
#define USER_DEFINE_BOOLEAN( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Bool, BOOLEAN, NUM)
#define USER_DEFINE_LOCALMKTDATE( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, String, STRING, NUM)
#define USER_DEFINE_DATA( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Data, DATA, NUM)
#define USER_DEFINE_FLOAT( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Float, FLOAT, NUM)
#define USER_DEFINE_PRICEOFFSET( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, PriceOffset, PRICEOFFSET, NUM)
#define USER_DEFINE_MONTHYEAR( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, MonthYear, MONTHYEAR, NUM)
#define USER_DEFINE_DAYOFMONTH( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, DayOfMonth, DAYOFMONTH, NUM)
#define USER_DEFINE_UTCDATE( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, UtcDate, UTCDATE, NUM)
#define USER_DEFINE_UTCDATEONLY( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, UtcDateOnly, UTCDATEONLY, NUM)
#define USER_DEFINE_UTCTIMEONLY( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, UtcTimeOnly, UTCTIMEONLY, NUM)
#define USER_DEFINE_NUMINGROUP( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, NumInGroup, NUMINGROUP, NUM)
#define USER_DEFINE_SEQNUM( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, SeqNum, SEQNUM, NUM)
#define USER_DEFINE_LENGTH( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Length, LENGTH, NUM)
#define USER_DEFINE_PERCENTAGE( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Percentage, PERCENTAGE, NUM)
#define USER_DEFINE_COUNTRY( NAME, NUM ) \
  DEFINE_FIELD_CLASS_NUM(NAME, Country, COUNTRY, NUM)

#endif

