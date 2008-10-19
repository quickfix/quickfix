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
#include "quickfix/CallStack.h"

namespace QuickFix
{
Message::Message( BeginString* beginString ) : disposed( false )
{ QF_STACK_TRY

  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  mapSetField( beginString, m_pUnmanaged->getHeader() );
  addMemoryPressure();

  QF_STACK_CATCH
}

Message::Message( BeginString* beginString, MsgType* msgType )
: disposed( false )
{
  QF_STACK_TRY

  m_pUnmanaged = new FIX::Message();
  m_header = new Header( this );
  m_trailer = new Trailer( this );
  mapSetField( beginString, m_pUnmanaged->getHeader() );
  mapSetField( msgType, m_pUnmanaged->getHeader() );
  addMemoryPressure();

  QF_STACK_CATCH
}

void Message::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); 
  if( value == 0 ) throw new NullReferenceException(); 
  mapSetString( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); mapSetBoolean( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setChar(int field, wchar_t value)
{ QF_STACK_TRY
  checkDisposed(); mapSetChar( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); mapSetInt( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setDouble(int field, double value, int padding)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, padding, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, false, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, showMilliseconds, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcDateOnly( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, false, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, showMilliseconds, *m_pUnmanaged );
  QF_STACK_CATCH
}

String* Message::getString(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetString( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::getBoolean(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetBoolean( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

wchar_t Message::getChar(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetChar( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

int Message::getInt(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetInt( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

double Message::getDouble(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetDouble( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcTimeStamp(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeStamp( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcDateOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcDateOnly( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcTimeOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeOnly( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
void Message::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); mapSetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

StringField* Message::getField( StringField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
BooleanField* Message::getField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
CharField* Message::getField( CharField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
IntField* Message::getField( IntField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
DoubleField* Message::getField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::getField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::getField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::isSetField( Field* field )
{ QF_STACK_TRY
  return m_pUnmanaged->isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::getField( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed(); return mapSetField( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::removeField( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::hasGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::hasGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, group->field(), *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::hasGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( group->field(), *m_pUnmanaged );
  QF_STACK_CATCH
}
  
void Message::removeGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::removeGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, field, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::removeGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, group->field(), *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::removeGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( group->field(), *m_pUnmanaged );
  QF_STACK_CATCH
}

int Message::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapGroupCount( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::isSetField( int field )
{ QF_STACK_TRY
  return m_pUnmanaged->isSetField( field );
  QF_STACK_CATCH
}

void Message::Header::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); mapSetString( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); mapSetBoolean( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setChar(int field, wchar_t value)
{ QF_STACK_TRY
  checkDisposed(); mapSetChar( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); mapSetInt( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setDouble(int field, double value, int padding)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, padding, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, false, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, showMilliseconds, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, false, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, showMilliseconds, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

String* Message::Header::getString(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetString( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::getBoolean(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetBoolean( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

wchar_t Message::Header::getChar(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetChar( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

int Message::Header::getInt(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetInt( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

double Message::Header::getDouble(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetDouble( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcTimeStamp(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcDateOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcTimeOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

StringField* Message::Header::getField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
BooleanField* Message::Header::getField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
CharField* Message::Header::getField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
IntField* Message::Header::getField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
DoubleField* Message::Header::getField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Header::getField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Header::getField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Header::getField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::isSetField( Field* field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getHeader().isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::Header::getField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed();
  return mapSetField( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::removeField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapRemoveField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::hasGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::hasGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, group->field(), m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::hasGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( group->field(), m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
  
void Message::Header::removeGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::removeGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::removeGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, group->field(), m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::removeGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( group->field(), m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::isEmpty()
{ QF_STACK_TRY
  checkDisposed(); return m_message->m_pUnmanaged->getHeader().isEmpty();
  QF_STACK_CATCH
}

void Message::Header::clear()
{ QF_STACK_TRY
  checkDisposed(); m_message->m_pUnmanaged->getHeader().clear();
  QF_STACK_CATCH
}

int Message::Header::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGroupCount( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getHeader().isSetField( field );
  QF_STACK_CATCH
}

void Message::Trailer::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); mapSetString( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); mapSetBoolean( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setChar(int field, wchar_t value)
{ QF_STACK_TRY
  checkDisposed(); mapSetChar( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); mapSetInt( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setDouble(int field, double value, int padding)
{ QF_STACK_TRY
  checkDisposed(); mapSetDouble( field, value, padding, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, false, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeStamp(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, showMilliseconds, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, false, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeOnly(int field, DateTime value, bool showMilliseconds)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, showMilliseconds, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

String* Message::Trailer::getString(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetString( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::getBoolean(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetBoolean( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

wchar_t Message::Trailer::getChar(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetChar( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

int Message::Trailer::getInt(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetInt( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

double Message::Trailer::getDouble(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetDouble( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcTimeStamp(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcDateOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcTimeOnly(int field)
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

StringField* Message::Trailer::getField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
BooleanField* Message::Trailer::getField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
CharField* Message::Trailer::getField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
IntField* Message::Trailer::getField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
DoubleField* Message::Trailer::getField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Trailer::getField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Trailer::getField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Trailer::getField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::isSetField( Field* field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getTrailer().isSetField( field->getField() );
  QF_STACK_CATCH
}

String* Message::Trailer::getField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed();
  return mapSetField( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::removeField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapRemoveField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::hasGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::hasGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( num, group->field(), m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::hasGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapHasGroup( group->field(), m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
  
void Message::Trailer::removeGroup( int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::removeGroup( unsigned num, int field )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::removeGroup( unsigned num, Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( num, group->field(), m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::removeGroup( Group* group )
{ QF_STACK_TRY
  checkDisposed(); return mapRemoveGroup( group->field(), m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::isEmpty()
{ QF_STACK_TRY
  checkDisposed(); return m_message->m_pUnmanaged->getTrailer().isEmpty();
  QF_STACK_CATCH
}

void Message::Trailer::clear()
{ QF_STACK_TRY
  checkDisposed(); m_message->m_pUnmanaged->getTrailer().clear();
  QF_STACK_CATCH
}

int Message::Trailer::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed();
  return mapGroupCount( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getTrailer().isSetField( field );
  QF_STACK_CATCH
}
}
