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

#include "stdafx.h"

#include "Message.h"
#include "Fields.h"

namespace Fix
{
Message::Message( BeginString* beginString ) : disposed( false )
{
  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  setField( beginString, m_pUnmanaged->getHeader() );
}

Message::Message( BeginString* beginString, MsgType* msgType ) : disposed( false )
{
  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  setField( beginString, m_pUnmanaged->getHeader() );
  setField( msgType, m_pUnmanaged->getHeader() );
}

void Message::setField( StringField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( BooleanField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( CharField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( IntField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( DoubleField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( UtcTimeStampField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( UtcDateField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }
void Message::setField( UtcTimeOnlyField* field )
{ checkDisposed(); setField( field, *m_pUnmanaged ); }

StringField* Message::getField( StringField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
BooleanField* Message::getField( BooleanField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
CharField* Message::getField( CharField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
IntField* Message::getField( IntField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
DoubleField* Message::getField( DoubleField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
UtcTimeStampField* Message::getField( UtcTimeStampField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
UtcDateField* Message::getField( UtcDateField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }
UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field ) throw( FieldNotFound* )
{ checkDisposed(); return getField( field, *m_pUnmanaged ); }

void Message::Header::setField( StringField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( BooleanField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( CharField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( IntField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( DoubleField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( UtcTimeStampField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( UtcDateField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }
void Message::Header::setField( UtcTimeOnlyField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); }

StringField* Message::Header::getField( StringField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
BooleanField* Message::Header::getField( BooleanField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
CharField* Message::Header::getField( CharField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
IntField* Message::Header::getField( IntField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
DoubleField* Message::Header::getField( DoubleField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
UtcTimeStampField* Message::Header::getField( UtcTimeStampField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
UtcDateField* Message::Header::getField( UtcDateField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }
UtcTimeOnlyField* Message::Header::getField( UtcTimeOnlyField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); }

void Message::Trailer::setField( StringField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( BooleanField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( CharField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( IntField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( DoubleField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( UtcTimeStampField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( UtcDateField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }
void Message::Trailer::setField( UtcTimeOnlyField* field )
{ checkDisposed(); m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); }

StringField* Message::Trailer::getField( StringField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
BooleanField* Message::Trailer::getField( BooleanField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
CharField* Message::Trailer::getField( CharField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
IntField* Message::Trailer::getField( IntField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
DoubleField* Message::Trailer::getField( DoubleField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
UtcTimeStampField* Message::Trailer::getField( UtcTimeStampField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
UtcDateField* Message::Trailer::getField( UtcDateField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }
UtcTimeOnlyField* Message::Trailer::getField( UtcTimeOnlyField* field ) throw( FieldNotFound* )
{ checkDisposed(); return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); }

void Message::setField( StringField* field, FIX::FieldMap& map )
{
  map.setField( FIX::StringField( field->getField(), convertString( field->getValue() ) ) );
}

void Message::setField( BooleanField* field, FIX::FieldMap& map )
{
  map.setField( FIX::BoolField( field->getField(), field->getValue() ) );
}

void Message::setField( CharField* field, FIX::FieldMap& map )
{
  map.setField( FIX::CharField( field->getField(), field->getValue() ) );
}

void Message::setField( IntField* field, FIX::FieldMap& map )
{
  map.setField( FIX::IntField( field->getField(), field->getValue() ) );
}

void Message::setField( DoubleField* field, FIX::FieldMap& map )
{
  map.setField( FIX::DoubleField( field->getField(), field->getValue() ) );
}

void Message::setField( UtcTimeStampField* field, FIX::FieldMap& map )
{
  DateTime value = field->getValue();
  map.setField( FIX::UtcTimeStampField(
                  field->getField(),
                  FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                     value.Day, value.Month, value.Year ) ) );

}

void Message::setField( UtcDateField* field, FIX::FieldMap& map )
{
  DateTime value = field->getValue();
  map.setField( FIX::UtcDateField(
                  field->getField(),
                  FIX::UtcDate( value.Day, value.Month, value.Year ) ) );
}

void Message::setField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{
  DateTime value = field->getValue();
  map.setField( FIX::UtcTimeOnlyField(
                  field->getField(),
                  FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ) ) );
}

StringField* Message::getField( StringField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( map.getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

BooleanField* Message::getField( BooleanField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::BoolConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

CharField* Message::getField( CharField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::CharConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

IntField* Message::getField( IntField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::IntConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

DoubleField* Message::getField( DoubleField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::DoubleConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcTimeStampField* Message::getField( UtcTimeStampField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcTimeStamp fixd;
    fixd = FIX::UtcTimeStampConvertor::convert( map.getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(),
                fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcDateField* Message::getField( UtcDateField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcDate fixd;
    fixd = FIX::UtcDateConvertor::convert( map.getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(), 0, 0, 0 );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field, FIX::FieldMap& map ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcTimeOnly fixd;
    fixd = FIX::UtcTimeOnlyConvertor::convert( map.getField( field->getField() ) );
    DateTime d( 0, 0, 0, fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}
}
