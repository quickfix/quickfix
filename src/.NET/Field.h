/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
DoubleField( int field ) : Field( field, __box( 0.0 ) ) {}
DoubleField( int field, double value ) : Field( field, __box( value ) ) {}

  void setValue( double value )
  { setObject( __box( value ) ); }
  double getValue()
  { return * dynamic_cast < Double* > ( getObject() ); }
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
: Field( field, __box( DateTime::Now.ToUniversalTime() ) ) {}
  UtcTimeStampField( int field, DateTime data )
: Field( field, __box( data ) ) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }
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
: Field( field, __box( DateTime::Now.ToUniversalTime() ) ) {}
  UtcTimeOnlyField( int field, DateTime data )
: Field( field, __box( data ) ) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }
};
}
