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

#include "stdafx.h"

#include "Message.h"
#include "Fields.h"

namespace QuickFix
{
Message::Message( BeginString* beginString ) : disposed( false )
{
  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  mapSetField( beginString, m_pUnmanaged->getHeader() );
  addMemoryPressure();
}

Message::Message( BeginString* beginString, MsgType* msgType )
: disposed( false )
{
  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  mapSetField( beginString, m_pUnmanaged->getHeader() );
  mapSetField( msgType, m_pUnmanaged->getHeader() );
  addMemoryPressure();
}

void Message::setString(int field, String* value)
{
  checkDisposed(); 
  if( value == 0 ) throw new NullReferenceException(); 
  mapSetString( field, value, *m_pUnmanaged );
}

void Message::setBoolean(int field, bool value)
{
  checkDisposed(); 
  mapSetBoolean( field, value, *m_pUnmanaged );
}

void Message::setChar(int field, wchar_t value)
{
  checkDisposed(); 
  mapSetChar( field, value, *m_pUnmanaged );
}

void Message::setInt(int field, int value)
{
  checkDisposed(); 
  mapSetInt( field, value, *m_pUnmanaged );
}

void Message::setDouble(int field, double value)
{
  checkDisposed(); 
  mapSetDouble( field, value, *m_pUnmanaged );
}

void Message::setDouble(int field, double value, int padding)
{
  checkDisposed(); 
  mapSetDouble( field, value, padding, *m_pUnmanaged );
}

void Message::setUtcTimeStamp(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, false, *m_pUnmanaged );
}

void Message::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, showMilliseconds, *m_pUnmanaged );
}

void Message::setUtcDateOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcDateOnly( field, value, *m_pUnmanaged );
}

void Message::setUtcTimeOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, false, *m_pUnmanaged );
}

void Message::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, showMilliseconds, *m_pUnmanaged );
}

String* Message::getString(int field)
{
  checkDisposed(); 
  return mapGetString( field, *m_pUnmanaged );
}

bool Message::getBoolean(int field)
{
  checkDisposed(); 
  return mapGetBoolean( field, *m_pUnmanaged );
}

wchar_t Message::getChar(int field)
{
  checkDisposed(); 
  return mapGetChar( field, *m_pUnmanaged );
}

int Message::getInt(int field)
{
  checkDisposed(); 
  return mapGetInt( field, *m_pUnmanaged );
}

double Message::getDouble(int field)
{
  checkDisposed(); 
  return mapGetDouble( field, *m_pUnmanaged );
}

DateTime Message::getUtcTimeStamp(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeStamp( field, *m_pUnmanaged );
}

DateTime Message::getUtcDateOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcDateOnly( field, *m_pUnmanaged );
}

DateTime Message::getUtcTimeOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeOnly( field, *m_pUnmanaged );
}

void Message::setField( StringField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( BooleanField* field )
{
  checkDisposed();
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( CharField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( IntField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( DoubleField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( UtcTimeStampField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( UtcDateOnlyField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

void Message::setField( UtcTimeOnlyField* field )
{
  checkDisposed(); 
  mapSetField( field, *m_pUnmanaged );
}

StringField* Message::getField( StringField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

BooleanField* Message::getField( BooleanField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

CharField* Message::getField( CharField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

IntField* Message::getField( IntField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

DoubleField* Message::getField( DoubleField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

UtcTimeStampField* Message::getField( UtcTimeStampField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

UtcDateOnlyField* Message::getField( UtcDateOnlyField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

bool Message::isSetField( Field* field )
{
  checkDisposed();
  return m_pUnmanaged->isSetField( field->getField() );
}

String* Message::getField( int field )
{
  checkDisposed(); 
  return mapGetField( field, *m_pUnmanaged );
}

void Message::setField( int field, String* value )
{
  checkDisposed(); 
  return mapSetField( field, value, *m_pUnmanaged );
}

void Message::removeField( int field )
{
  checkDisposed(); 
  return mapRemoveField( field, *m_pUnmanaged );
}

bool Message::hasGroup( int field )
{
  checkDisposed(); 
  return mapHasGroup( field, *m_pUnmanaged );
}

bool Message::hasGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapHasGroup( num, field, *m_pUnmanaged );
}

bool Message::hasGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapHasGroup( num, group->field(), *m_pUnmanaged );
}

bool Message::hasGroup( Group* group )
{
  checkDisposed(); 
  return mapHasGroup( group->field(), *m_pUnmanaged );
}
  
void Message::removeGroup( int field )
{
  checkDisposed(); 
  return mapRemoveGroup( field, *m_pUnmanaged );
}

void Message::removeGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapRemoveGroup( num, field, *m_pUnmanaged );
}

void Message::removeGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( num, group->field(), *m_pUnmanaged );
}

void Message::removeGroup( Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( group->field(), *m_pUnmanaged );
}

int Message::groupCount( int field )
{
  checkDisposed(); 
  return mapGroupCount( field, *m_pUnmanaged );
}

bool Message::isSetField( int field )
{
  checkDisposed();
  return m_pUnmanaged->isSetField( field );
}

void Message::Header::setString(int field, String* value)
{
  checkDisposed(); 
  mapSetString( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setBoolean(int field, bool value)
{
  checkDisposed(); 
  mapSetBoolean( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setChar(int field, wchar_t value)
{
  checkDisposed(); 
  mapSetChar( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setInt(int field, int value)
{
  checkDisposed(); 
  mapSetInt( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setDouble(int field, double value)
{
  checkDisposed();
  mapSetDouble( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setDouble(int field, double value, int padding)
{
  checkDisposed(); 
  mapSetDouble( field, value, padding, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setUtcTimeStamp(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, false, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, showMilliseconds, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setUtcDateOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setUtcTimeOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, false, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, showMilliseconds, m_message->m_pUnmanaged->getHeader() );
}

String* Message::Header::getString(int field)
{
  checkDisposed(); 
  return mapGetString( field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::getBoolean(int field)
{
  checkDisposed(); 
  return mapGetBoolean( field, m_message->m_pUnmanaged->getHeader() );
}

wchar_t Message::Header::getChar(int field)
{
  checkDisposed(); 
  return mapGetChar( field, m_message->m_pUnmanaged->getHeader() );
}

int Message::Header::getInt(int field)
{
  checkDisposed(); 
  return mapGetInt( field, m_message->m_pUnmanaged->getHeader() );
}

double Message::Header::getDouble(int field)
{
  checkDisposed(); 
  return mapGetDouble( field, m_message->m_pUnmanaged->getHeader() );
}

DateTime Message::Header::getUtcTimeStamp(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getHeader() );
}

DateTime Message::Header::getUtcDateOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getHeader() );
}

DateTime Message::Header::getUtcTimeOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( StringField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( BooleanField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( CharField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( IntField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( DoubleField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( UtcTimeStampField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( UtcDateOnlyField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( UtcTimeOnlyField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
}

StringField* Message::Header::getField( StringField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

BooleanField* Message::Header::getField( BooleanField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

CharField* Message::Header::getField( CharField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

IntField* Message::Header::getField( IntField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

DoubleField* Message::Header::getField( DoubleField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

UtcTimeStampField* Message::Header::getField( UtcTimeStampField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

UtcDateOnlyField* Message::Header::getField( UtcDateOnlyField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

UtcTimeOnlyField* Message::Header::getField( UtcTimeOnlyField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::isSetField( Field* field )
{
  checkDisposed();
  return m_message->m_pUnmanaged->getHeader().isSetField( field->getField() );
}

String* Message::Header::getField( int field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::setField( int field, String* value )
{
  checkDisposed();
  return mapSetField( field, value, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::removeField( int field )
{
  checkDisposed();
  return mapRemoveField( field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::hasGroup( int field )
{
  checkDisposed(); 
  return mapHasGroup( field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::hasGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapHasGroup( num, field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::hasGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapHasGroup( num, group->field(), m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::hasGroup( Group* group )
{
  checkDisposed(); 
  return mapHasGroup( group->field(), m_message->m_pUnmanaged->getHeader() );
}
  
void Message::Header::removeGroup( int field )
{
  checkDisposed(); 
  return mapRemoveGroup( field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::removeGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapRemoveGroup( num, field, m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::removeGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( num, group->field(), m_message->m_pUnmanaged->getHeader() );
}

void Message::Header::removeGroup( Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( group->field(), m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::isEmpty()
{
  checkDisposed(); 
  return m_message->m_pUnmanaged->getHeader().isEmpty();
}

void Message::Header::clear()
{
  checkDisposed(); 
  m_message->m_pUnmanaged->getHeader().clear();
}

int Message::Header::groupCount( int field )
{
  checkDisposed();
  return mapGroupCount( field, m_message->m_pUnmanaged->getHeader() );
}

bool Message::Header::isSetField( int field )
{
  checkDisposed();
  return m_message->m_pUnmanaged->getHeader().isSetField( field );
}

void Message::Trailer::setString(int field, String* value)
{
  checkDisposed(); 
  mapSetString( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setBoolean(int field, bool value)
{
  checkDisposed();
  mapSetBoolean( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setChar(int field, wchar_t value)
{
  checkDisposed(); 
  mapSetChar( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setInt(int field, int value)
{
  checkDisposed(); 
  mapSetInt( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setDouble(int field, double value)
{
  checkDisposed(); 
  mapSetDouble( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setDouble(int field, double value, int padding)
{
  checkDisposed(); 
  mapSetDouble( field, value, padding, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setUtcTimeStamp(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, false, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeStamp( field, value, showMilliseconds, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setUtcDateOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setUtcTimeOnly(int field, DateTime value)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, false, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{
  checkDisposed(); 
  mapSetUtcTimeOnly( field, value, showMilliseconds, m_message->m_pUnmanaged->getTrailer() );
}

String* Message::Trailer::getString(int field)
{
  checkDisposed(); 
  return mapGetString( field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::getBoolean(int field)
{
  checkDisposed(); 
  return mapGetBoolean( field, m_message->m_pUnmanaged->getTrailer() );
}

wchar_t Message::Trailer::getChar(int field)
{
  checkDisposed(); 
  return mapGetChar( field, m_message->m_pUnmanaged->getTrailer() );
}

int Message::Trailer::getInt(int field)
{
  checkDisposed(); 
  return mapGetInt( field, m_message->m_pUnmanaged->getTrailer() );
}

double Message::Trailer::getDouble(int field)
{
  checkDisposed();
  return mapGetDouble( field, m_message->m_pUnmanaged->getTrailer() );
}

DateTime Message::Trailer::getUtcTimeStamp(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getTrailer() );
}

DateTime Message::Trailer::getUtcDateOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getTrailer() );
}

DateTime Message::Trailer::getUtcTimeOnly(int field)
{
  checkDisposed(); 
  return mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( StringField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( BooleanField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( CharField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( IntField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( DoubleField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( UtcTimeStampField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( UtcDateOnlyField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( UtcTimeOnlyField* field )
{
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
}

StringField* Message::Trailer::getField( StringField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

BooleanField* Message::Trailer::getField( BooleanField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

CharField* Message::Trailer::getField( CharField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

IntField* Message::Trailer::getField( IntField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

DoubleField* Message::Trailer::getField( DoubleField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

UtcTimeStampField* Message::Trailer::getField( UtcTimeStampField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

UtcDateOnlyField* Message::Trailer::getField( UtcDateOnlyField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

UtcTimeOnlyField* Message::Trailer::getField( UtcTimeOnlyField* field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::isSetField( Field* field )
{
  checkDisposed();
  return m_message->m_pUnmanaged->getTrailer().isSetField( field->getField() );
}

String* Message::Trailer::getField( int field )
{
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::setField( int field, String* value )
{
  checkDisposed();
  return mapSetField( field, value, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::removeField( int field )
{
  checkDisposed();
  return mapRemoveField( field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::hasGroup( int field )
{
  checkDisposed(); 
  return mapHasGroup( field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::hasGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapHasGroup( num, field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::hasGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapHasGroup( num, group->field(), m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::hasGroup( Group* group )
{
  checkDisposed(); 
  return mapHasGroup( group->field(), m_message->m_pUnmanaged->getTrailer() );
}
  
void Message::Trailer::removeGroup( int field )
{
  checkDisposed(); 
  return mapRemoveGroup( field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::removeGroup( unsigned num, int field )
{
  checkDisposed(); 
  return mapRemoveGroup( num, field, m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::removeGroup( unsigned num, Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( num, group->field(), m_message->m_pUnmanaged->getTrailer() );
}

void Message::Trailer::removeGroup( Group* group )
{
  checkDisposed(); 
  return mapRemoveGroup( group->field(), m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::isEmpty()
{
  checkDisposed(); 
  return m_message->m_pUnmanaged->getTrailer().isEmpty();
}

void Message::Trailer::clear()
{
  checkDisposed(); m_message->m_pUnmanaged->getTrailer().clear();
}

int Message::Trailer::groupCount( int field )
{
  checkDisposed();
  return mapGroupCount( field, m_message->m_pUnmanaged->getTrailer() );
}

bool Message::Trailer::isSetField( int field )
{
  checkDisposed();
  return m_message->m_pUnmanaged->getTrailer().isSetField( field );
}
}
