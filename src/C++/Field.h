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

#ifndef FIX_FIELD
#define FIX_FIELD

#ifdef _MSC_VER
#pragma warning( disable : 4786 )
#endif

#include <sstream>
#include "FieldNumbers.h"
#include "FieldConvertors.h"
#include "FieldTypes.h"

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
  FieldBase( int field, const std::string& string )
  : m_field( field ), m_length( 0 ), m_total( 0 )
  {
    std::stringstream stream;
    stream << field << "=" << string << '\001';

    m_string = string;
    m_data = stream.str();
    m_length = m_data.length();
    std::string::const_iterator iter = m_data.begin();
    std::string::const_iterator end = m_data.end();
    while ( iter != end )
    {
      m_total += *iter;
      ++iter;
    }
  }

  /// Get the fields integer tag.
  int getField() const
    { return m_field; }

  /// Get the string representation of the fields value.
  const std::string& getString() const
    { return m_string; }

  /// Get the string representation of the Field (i.e.) 55=MSFT<SOH>
  const std::string& getValue() const
    { return m_data; }

  /// Get the length of the fields string representation
  int getLength() const
    { return m_length; }

  /// Get the total value the fields characters added together
  int getTotal() const
    { return m_total; }

  /// Compares fields based on thier tag numbers
  bool operator < ( const FieldBase& field ) const
    { return m_field < field.m_field; }

private:
  int m_field;
  std::string m_data;
  std::string m_string;
  int m_length;
  int m_total;
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

class CharField : public FieldBase
{
public:
  explicit CharField( int field, char data )
: FieldBase( field, CharConvertor::convert( data ) ) {}
  CharField( int field )
: FieldBase( field, "" ) {}

  const char getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return CharConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const char() const
    { return getValue(); }
};

class DoubleField : public FieldBase
{
public:
  explicit DoubleField( int field, double data )
: FieldBase( field, DoubleConvertor::convert( data ) ) {}
  DoubleField( int field )
: FieldBase( field, "" ) {}

  const double getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return DoubleConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const double() const
    { return getValue(); }
};

class IntField : public FieldBase
{
public:
  explicit IntField( int field, int data )
: FieldBase( field, IntConvertor::convert( data ) ) {}
  IntField( int field )
: FieldBase( field, "" ) {}

  const int getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return IntConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const int() const
    { return getValue(); }
};

class BoolField : public FieldBase
{
public:
  explicit BoolField( int field, bool data )
: FieldBase( field, BoolConvertor::convert( data ) ) {}
  BoolField( int field )
: FieldBase( field, "" ) {}

  const bool getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return BoolConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const bool() const
    { return getValue(); }
};

class UtcTimeStampField : public FieldBase
{
public:
  explicit UtcTimeStampField( int field, const UtcTimeStamp& data )
: FieldBase( field, UtcTimeStampConvertor::convert( data ) ) {}
  UtcTimeStampField( int field )
: FieldBase( field, UtcTimeStampConvertor::convert( UtcTimeStamp() ) ) {}

  const UtcTimeStamp getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return UtcTimeStampConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const UtcTimeStamp() const
    { return getValue(); }

  bool operator<( const UtcTimeStampField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcTimeStampField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcTimeStampField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

class UtcDateField : public FieldBase
{
public:
  explicit UtcDateField( int field, const UtcDate& data )
: FieldBase( field, UtcDateConvertor::convert( data ) ) {}
  UtcDateField( int field )
: FieldBase( field, UtcDateConvertor::convert( UtcDate() ) ) {}

  const UtcDate getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return UtcDateConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const UtcDate() const
    { return getValue(); }

  bool operator<( const UtcDateField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcDateField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcDateField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

class UtcTimeOnlyField : public FieldBase
{
public:
  explicit UtcTimeOnlyField( int field, const UtcTimeOnly& data )
: FieldBase( field, UtcTimeOnlyConvertor::convert( data ) ) {}
  UtcTimeOnlyField( int field )
: FieldBase( field, UtcTimeOnlyConvertor::convert( UtcTimeOnly() ) ) {}

  const UtcTimeOnly getValue() const throw ( IncorrectDataFormat& )
    { try 
      { return UtcTimeOnlyConvertor::convert( getString() ); }
      catch( FieldConvertError& ) 
      { throw IncorrectDataFormat( getField() ); } }
  operator const UtcTimeOnly() const
    { return getValue(); }

  bool operator<( const UtcTimeOnlyField& rhs ) const
    { return getValue() < rhs.getValue(); }
  bool operator==( const UtcTimeOnlyField& rhs ) const
    { return getValue() == rhs.getValue(); }
  bool operator!=( const UtcTimeOnlyField& rhs ) const
    { return getValue() != rhs.getValue(); }
};

class CheckSumField : public FieldBase
{
public:
  explicit CheckSumField( int field, int data )
: FieldBase( field, CheckSumConvertor::convert( data ) ) {}
  CheckSumField( int field )
: FieldBase( field, "" ) {}

  const int getValue() const throw ( IncorrectDataFormat& )
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
typedef StringField MonthYearField;
typedef StringField DayOfMonthField;
typedef IntField LengthField;
typedef IntField NumInGroupField;
typedef IntField SeqNumField;
typedef DoubleField PercentageField;
typedef StringField CountryField;
}

#define DEFINE_FIELD_CLASS_NUM( NAME, TOK, TYPE, NUM ) \
class NAME : public TOK##Field { public: \
NAME() : TOK##Field(NUM) {} \
NAME(TYPE value) : TOK##Field(NUM, value) {} \
};

#define DEFINE_FIELD_CLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_CLASS_NUM(NAME, TOK, TYPE, FIELD::NAME)

#define DEFINE_DEPRECATED_FIELD_CLASS( NAME, TOK, TYPE ) \
DEFINE_FIELD_CLASS_NUM(NAME, TOK, TYPE, DEPRECATED_FIELD::NAME)

#define DEFINE_CHECKSUM( NAME ) \
DEFINE_FIELD_CLASS(NAME, CheckSum, INT)
#define DEFINE_STRING( NAME ) DEFINE_FIELD_CLASS(NAME, String, STRING)
#define DEFINE_CHAR( NAME ) DEFINE_FIELD_CLASS(NAME, Char, CHAR)
#define DEFINE_PRICE( NAME ) DEFINE_FIELD_CLASS(NAME, Price, PRICE)
#define DEFINE_INT( NAME ) DEFINE_FIELD_CLASS(NAME, Int, INT)
#define DEFINE_AMT( NAME ) DEFINE_FIELD_CLASS(NAME, Amt, AMT)
#define DEFINE_QTY( NAME ) DEFINE_FIELD_CLASS(NAME, Qty, QTY)
#define DEFINE_CURRENCY( NAME ) DEFINE_FIELD_CLASS(NAME, Currency, CURRENCY)
#define DEFINE_MULTIPLEVALUESTRING( NAME ) \
DEFINE_FIELD_CLASS(NAME, MultipleValueString, MULTIPLEVALUESTRING)
#define DEFINE_EXCHANGE( NAME ) DEFINE_FIELD_CLASS(NAME, Exchange, EXCHANGE)
#define DEFINE_UTCTIMESTAMP( NAME ) \
DEFINE_FIELD_CLASS(NAME, UtcTimeStamp, UTCTIMESTAMP)
#define DEFINE_BOOLEAN( NAME ) DEFINE_FIELD_CLASS(NAME, Bool, BOOLEAN)
#define DEFINE_LOCALMKTDATE( NAME ) \
DEFINE_FIELD_CLASS(NAME, String, LOCALMKTDATE)
#define DEFINE_DATA( NAME ) DEFINE_FIELD_CLASS(NAME, Data, DATA)
#define DEFINE_FLOAT( NAME ) DEFINE_FIELD_CLASS(NAME, Float, FLOAT)
#define DEFINE_PRICEOFFSET( NAME ) \
DEFINE_FIELD_CLASS(NAME, PriceOffset, PRICEOFFSET)
#define DEFINE_MONTHYEAR( NAME ) \
DEFINE_FIELD_CLASS(NAME, MonthYear, MONTHYEAR)
#define DEFINE_DAYOFMONTH( NAME ) \
DEFINE_FIELD_CLASS(NAME, DayOfMonth, DAYOFMONTH)
#define DEFINE_UTCDATE( NAME ) DEFINE_FIELD_CLASS(NAME, UtcDate, UTCDATE)
#define DEFINE_UTCTIMEONLY( NAME ) \
DEFINE_FIELD_CLASS(NAME, UtcTimeOnly, UTCTIMEONLY)
#define DEFINE_NUMINGROUP( NAME ) DEFINE_FIELD_CLASS(NAME, NumInGroup, NUMINGROUP)
#define DEFINE_SEQNUM( NAME ) DEFINE_FIELD_CLASS(NAME, SeqNum, SEQNUM)
#define DEFINE_LENGTH( NAME ) DEFINE_FIELD_CLASS(NAME, Length, LENGTH)
#define DEFINE_PERCENTAGE( NAME ) DEFINE_FIELD_CLASS(NAME, Percentage, PERCENTAGE)
#define DEFINE_COUNTRY( NAME ) DEFINE_FIELD_CLASS(NAME, Country, COUNTRY)

#define USER_DEFINE_STRING( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, String, STRING, NUM);
#define USER_DEFINE_CHAR( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Char, CHAR, NUM);
#define USER_DEFINE_PRICE( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Price, PRICE, NUM);
#define USER_DEFINE_INT( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Int, INT, NUM);
#define USER_DEFINE_AMT( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Amt, AMT, NUM);
#define USER_DEFINE_QTY( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Qty, QTY, NUM);
#define USER_DEFINE_CURRENCY( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Currency, CURRENCY, NUM);
#define USER_DEFINE_MULTIPLEVALUESTRING( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, MultipleValueString, MULTIPLEVALUESTRING, NUM);
#define USER_DEFINE_EXCHANGE( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Exchange, EXCHANGE, NUM);
#define USER_DEFINE_UTCTIMESTAMP( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, UtcTimeStamp, UTCTIMESTAMP, NUM);
#define USER_DEFINE_BOOLEAN( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Bool, BOOLEAN, NUM);
#define USER_DEFINE_LOCALMKTDATE( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, String, STRING, NUM);
#define USER_DEFINE_DATA( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Data, DATA, NUM);
#define USER_DEFINE_FLOAT( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Float, FLOAT, NUM);
#define USER_DEFINE_PRICEOFFSET( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, PriceOffset, PRICEOFFSET, NUM);
#define USER_DEFINE_MONTHYEAR( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, MonthYear, MONTHYEAR, NUM);
#define USER_DEFINE_DAYOFMONTH( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, DayOfMonth, DAYOFMONTH, NUM);
#define USER_DEFINE_UTCDATE( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, UtcDate, UTCDATE, NUM);
#define USER_DEFINE_UTCTIMEONLY( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, UtcTimeOnly, UTCTIMEONLY, NUM);
#define USER_DEFINE_NUMINGROUP( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, NumInGroup, NUMINGROUP, NUM);
#define USER_DEFINE_SEQNUM( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, SeqNum, SEQNUM, NUM);
#define USER_DEFINE_LENGTH( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Length, LENGTH, NUM);
#define USER_DEFINE_PERCENTAGE( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Percentage, PERCENTAGE, NUM);
#define USER_DEFINE_COUNTRY( NAME, NUM ) \
DEFINE_FIELD_CLASS_NUM(NAME, Country, COUNTRY, NUM);


#endif

