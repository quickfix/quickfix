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

#pragma once

using namespace System;

#include "quickfix_net.h"

namespace Fix
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

public __gc class UtcDateField : public Field
{
public:
  UtcDateField( int field )
: Field( field, __box( DateTime::Now.ToUniversalTime() ) ) {}
  UtcDateField( int field, DateTime data )
: Field( field, __box( data ) ) {}

  void setValue( DateTime value )
  { setObject( __box( value ) ); }
  DateTime getValue()
  { return * dynamic_cast < DateTime* > ( getObject() ); }
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
