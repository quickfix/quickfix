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

#include "stdafx.h"

#include "Message.h"
#include "Fields.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
Message::Message( BeginString* beginString ) : disposed( false )
{ QF_STACK_TRY

  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  setField( beginString, m_pUnmanaged->getHeader() );

  QF_STACK_CATCH
}

Message::Message( BeginString* beginString, MsgType* msgType ) 
: disposed( false )
{
  QF_STACK_TRY

  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  setField( beginString, m_pUnmanaged->getHeader() );
  setField( msgType, m_pUnmanaged->getHeader() );

  QF_STACK_CATCH
}

void Message::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged );
  QF_STACK_CATCH 
}
void Message::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
void Message::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); setField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}

StringField* Message::getField( StringField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
BooleanField* Message::getField( BooleanField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
CharField* Message::getField( CharField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
IntField* Message::getField( IntField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
DoubleField* Message::getField( DoubleField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
UtcTimeStampField* Message::getField( UtcTimeStampField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
UtcDateOnlyField* Message::getField( UtcDateOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}
UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged ); 
  QF_STACK_CATCH 
}

bool Message::isSetField( Field* field )
{ QF_STACK_TRY
  return m_pUnmanaged->isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::getField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return getField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( int field, String* value ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return setField( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::removeField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return removeField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
bool Message::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return hasGroup( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
int Message::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed(); return groupCount( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
bool Message::isSetField( int field )
{ QF_STACK_TRY
  return m_pUnmanaged->isSetField( field );
  QF_STACK_CATCH
}

void Message::Header::setField( StringField* field )
{ QF_STACK_TRY 
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}

StringField* Message::Header::getField( StringField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
BooleanField* Message::Header::getField( BooleanField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
CharField* Message::Header::getField( CharField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
IntField* Message::Header::getField( IntField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
DoubleField* Message::Header::getField( DoubleField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Header::getField( UtcTimeStampField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Header::getField( UtcDateOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Header::getField( UtcTimeOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() ); 
  QF_STACK_CATCH
}

bool Message::Header::isSetField( Field* field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getHeader().isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::Header::getField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( int field, String* value ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->setField( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::removeField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->removeField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
bool Message::Header::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->hasGroup( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
int Message::Header::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->groupCount( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
bool Message::Header::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getHeader().isSetField( field );
  QF_STACK_CATCH
}

void Message::Trailer::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); 
  m_message->setField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}

StringField* Message::Trailer::getField( StringField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
BooleanField* Message::Trailer::getField( BooleanField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
CharField* Message::Trailer::getField( CharField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
IntField* Message::Trailer::getField( IntField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
DoubleField* Message::Trailer::getField( DoubleField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Trailer::getField( UtcTimeStampField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Trailer::getField( UtcDateOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Trailer::getField( UtcTimeOnlyField* field )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() ); 
  QF_STACK_CATCH
}

bool Message::Trailer::isSetField( Field* field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getTrailer().isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::Trailer::getField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->getField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( int field, String* value ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->setField( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::removeField( int field ) 
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->removeField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
bool Message::Trailer::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->hasGroup( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
int Message::Trailer::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed(); 
  return m_message->groupCount( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
bool Message::Trailer::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getTrailer().isSetField( field );
  QF_STACK_CATCH
}

void Message::setField( StringField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( FIX::StringField( field->getField(), 
				  convertString( field->getValue() ) ) );
  QF_STACK_CATCH
}

void Message::setField( BooleanField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( FIX::BoolField( field->getField(), field->getValue() ) );
  QF_STACK_CATCH
}

void Message::setField( CharField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( FIX::CharField( field->getField(), field->getValue() ) );
  QF_STACK_CATCH
}

void Message::setField( IntField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( FIX::IntField( field->getField(), field->getValue() ) );
  QF_STACK_CATCH
}

void Message::setField( DoubleField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( FIX::DoubleField( field->getField(), field->getValue() ) );
  QF_STACK_CATCH
}

void Message::setField( UtcTimeStampField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

  DateTime value = field->getValue();
  map.setField( FIX::UtcTimeStampField(
                  field->getField(),
                  FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                     value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

void Message::setField( UtcDateOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

  DateTime value = field->getValue();
  map.setField( FIX::UtcDateOnlyField(
                  field->getField(),
                  FIX::UtcDate( value.Day, value.Month, value.Year ) ) );
  QF_STACK_CATCH
}

void Message::setField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY

  DateTime value = field->getValue();
  map.setField
    ( FIX::UtcTimeOnlyField
      ( field->getField(),
	FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ) ) );

  QF_STACK_CATCH
}

StringField* Message::getField( StringField* field, FIX::FieldMap& map ) 
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    field->setValue( map.getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }

  QF_STACK_CATCH
}

BooleanField* Message::getField( BooleanField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    field->setValue
      ( FIX::BoolConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

CharField* Message::getField( CharField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    field->setValue
      ( FIX::CharConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

IntField* Message::getField( IntField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    field->setValue
      ( FIX::IntConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

DoubleField* Message::getField( DoubleField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    field->setValue
      ( FIX::DoubleConvertor::convert( map.getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

UtcTimeStampField* Message::getField( UtcTimeStampField* field, 
				      FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    FIX::UtcTimeStamp fixd;
    fixd = FIX::UtcTimeStampConvertor::convert
      ( map.getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(),
                fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

UtcDateOnlyField* Message::getField( UtcDateOnlyField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

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
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field, FIX::FieldMap& map )
throw( FieldNotFound*, IncorrectDataFormat* )
{ QF_STACK_TRY

  try
  {
    FIX::UtcTimeOnly fixd;
    fixd = FIX::UtcTimeOnlyConvertor::convert
      ( map.getField( field->getField() ) );
    DateTime d( 0, 0, 0, fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  catch ( FIX::FieldConvertError & e )
  { throw new IncorrectDataFormat( field->getField() ); }

  QF_STACK_CATCH
}

void Message::setField( int field, String* value, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( field, convertString(value) );
  QF_STACK_CATCH
}

String* Message::getField( int field, FIX::FieldMap& map )
throw( FieldNotFound* )
{ QF_STACK_TRY
  
  try
  {
    return map.getField( field ).c_str();
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
  QF_STACK_CATCH
}

void Message::removeField( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.removeField( field );
  QF_STACK_CATCH
}

bool Message::hasGroup( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.hasGroup( field );
  QF_STACK_CATCH
}

int Message::groupCount( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.groupCount(field);
  QF_STACK_CATCH
}

}
