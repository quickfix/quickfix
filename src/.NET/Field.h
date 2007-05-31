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

#pragma once

using namespace System;

#include "quickfix_net.h"

namespace QuickFix
{
public __gc class Field
{
public:
  Field( int field, Object* object )
  {
    this->field = field;
    this->object = object;
  }

  int getField()
  {
    return field;
  }

  Object* getObject()
  {
    return object;
  }

  virtual bool Equals( Object* object )
  {
    if( Object::Equals(object) == true )
      return true;
    if( object == 0 )
	    return false;
    if( !object->GetType()->Equals(GetType()) )
      return false;

    return field == static_cast<Field*>(object)->getField() &&
      getObject()->Equals(static_cast<Field*>(object)->getObject());
  }

  virtual String* ToString()
  {
    return field.ToString()->Concat(new String("="))->Concat(object->ToString());
  }

  virtual int GetHashCode()
  {
    return ToString()->GetHashCode();
  }

protected:
  void setObject( Object* object )
  {
    this->object = object;
  }

private:
  int field;
  Object* object;
};

public __gc class BooleanField : public Field
{
public:
BooleanField( int field ) : Field( field, __box( false ) ) {}
BooleanField( int field, bool value ) : Field( field, __box( value ) ) {}

  void setValue( bool value )
  { setObject( __box( value ) ); }
  bool getValue()
  { return * dynamic_cast < Boolean* > ( getObject() ); }
};

public __gc class CharField : public Field
{
public:
CharField( int field ) : Field( field, __box( ' ' ) ) {}
CharField( int field, __wchar_t value ) : Field( field, __box( value ) ) {}

  void setValue( __wchar_t value )
  { setObject( __box( value ) ); }
  __wchar_t getValue()
  { return * dynamic_cast < Char* > ( getObject() ); }
};

public __gc class DoubleField : public Field
{
public:
	DoubleField( int field ) : Field( field, __box( 0.0 ) ), m_padding( 0 ) {}
	DoubleField( int field, double value ) : Field( field, __box( value ) ), m_padding(0) {}
	DoubleField( int field, double value, int padding) : Field(field, __box( value )), m_padding(padding) {}

	void setValue( double value )
	 { setObject( __box( value ) ); }
	double getValue()
	{ return * dynamic_cast < Double* > ( getObject() ); }
	int getPadding()
	{ return m_padding; }

private:
	int m_padding;
};

public __gc class IntField : public Field
{
public:
IntField( int field ) : Field( field, __box( 0 ) ) {}
IntField( int field, int value ) : Field( field, __box( value ) ) {}

  void setValue( int value )
  { setObject( __box( value ) ); }
  int getValue()
  { return * dynamic_cast < Int32* > ( getObject() ); }
};

public __gc class StringField : public Field
{
public:
StringField( int field ) : Field( field, new String( "" ) ) {}
StringField( int field, String* data ) : Field( field, data ) {}

  void setValue( String* value )
  { setObject( value ); }
  String* getValue()
  { return static_cast < String* > ( getObject() ); }
};

public __gc class UtcTimeStampField : public Field
{
public:
  UtcTimeStampField( int field )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) )
, m_showMilliseconds(false) {}
  UtcTimeStampField( int field, bool showMilliseconds )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) )
, m_showMilliseconds(showMilliseconds) {}
  UtcTimeStampField( int field, DateTime data )
: Field( field, __box( data ) )
, m_showMilliseconds(false) {}
  UtcTimeStampField( int field, DateTime data, bool showMilliseconds )
: Field( field, __box( data ) )
, m_showMilliseconds(showMilliseconds) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }

  bool showMilliseconds() { return m_showMilliseconds; }

private:
  bool m_showMilliseconds;
};

public __gc class UtcDateOnlyField : public Field
{
public:
  UtcDateOnlyField( int field )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) ) {}
  UtcDateOnlyField( int field, DateTime data )
: Field( field, __box( data ) ) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }
};

public __gc class UtcDateField : public UtcDateOnlyField
{
public:
  UtcDateField( int field )
: UtcDateOnlyField( field ) {}
  UtcDateField( int field, DateTime data )
: UtcDateOnlyField( field, data ) {}
};

public __gc class UtcTimeOnlyField : public Field
{
public:
  UtcTimeOnlyField( int field )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) )
, m_showMilliseconds(false) {}
  UtcTimeOnlyField( int field, bool showMilliseconds )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) )
, m_showMilliseconds(showMilliseconds) {}
  UtcTimeOnlyField( int field, DateTime data )
: Field( field, __box( data ) )
, m_showMilliseconds(false) {}
  UtcTimeOnlyField( int field, DateTime data, bool showMilliseconds )
: Field( field, __box( data ) )
, m_showMilliseconds(showMilliseconds) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }

  bool showMilliseconds() { return m_showMilliseconds; }

private:
  bool m_showMilliseconds;
};
}
