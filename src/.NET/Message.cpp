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

  QF_STACK_CATCH
}

void Message::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); mapSetString( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); mapSetBoolean( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setChar(int field, char value)
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

void Message::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeStamp( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcDateOnly( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

void Message::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); mapSetUtcTimeOnly( field, value, *m_pUnmanaged );
  QF_STACK_CATCH
}

String* Message::getString(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetString( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

bool Message::getBoolean(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetBoolean( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

char Message::getChar(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetChar( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

int Message::getInt(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetInt( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

double Message::getDouble(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetDouble( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcTimeStamp(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcTimeStamp( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcDateOnly(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetUtcDateOnly( field, *m_pUnmanaged );
  QF_STACK_CATCH
}

DateTime Message::getUtcTimeOnly(int field) throw ( FieldNotFound* )
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
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
BooleanField* Message::getField( BooleanField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
CharField* Message::getField( CharField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
IntField* Message::getField( IntField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
DoubleField* Message::getField( DoubleField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::getField( UtcTimeStampField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::getField( UtcDateOnlyField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return mapGetField( field, *m_pUnmanaged );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::getField( UtcTimeOnlyField* field )
throw( FieldNotFound* )
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
throw( FieldNotFound* )
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
  checkDisposed(); m_message->mapSetString( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetBoolean( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setChar(int field, char value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetChar( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetInt( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetDouble( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcTimeStamp( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcTimeOnly( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

String* Message::Header::getString(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetString( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

bool Message::Header::getBoolean(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetBoolean( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

char Message::Header::getChar(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetChar( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

int Message::Header::getInt(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetInt( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

double Message::Header::getDouble(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetDouble( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcTimeStamp(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcDateOnly(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

DateTime Message::Header::getUtcTimeOnly(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

void Message::Header::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}

StringField* Message::Header::getField( StringField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
BooleanField* Message::Header::getField( BooleanField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
CharField* Message::Header::getField( CharField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
IntField* Message::Header::getField( IntField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
DoubleField* Message::Header::getField( DoubleField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Header::getField( UtcTimeStampField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Header::getField( UtcDateOnlyField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Header::getField( UtcTimeOnlyField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
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
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapSetField( field, value, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
void Message::Header::removeField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapRemoveField( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
bool Message::Header::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapHasGroup( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
int Message::Header::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGroupCount( field, m_message->m_pUnmanaged->getHeader() );
  QF_STACK_CATCH
}
bool Message::Header::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getHeader().isSetField( field );
  QF_STACK_CATCH
}

void Message::Trailer::setString(int field, String* value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetString( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setBoolean(int field, bool value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetBoolean( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setChar(int field, char value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetChar( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setInt(int field, int value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetInt( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setDouble(int field, double value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetDouble( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeStamp(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcTimeStamp( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcDateOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcDateOnly( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setUtcTimeOnly(int field, DateTime value)
{ QF_STACK_TRY
  checkDisposed(); m_message->mapSetUtcTimeOnly( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

String* Message::Trailer::getString(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetString( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

bool Message::Trailer::getBoolean(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetBoolean( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

char Message::Trailer::getChar(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetChar( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

int Message::Trailer::getInt(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetInt( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

double Message::Trailer::getDouble(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetDouble( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcTimeStamp(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcTimeStamp( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcDateOnly(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcDateOnly( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

DateTime Message::Trailer::getUtcTimeOnly(int field) throw ( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed(); return m_message->mapGetUtcTimeOnly( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

void Message::Trailer::setField( StringField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( BooleanField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( CharField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( IntField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( DoubleField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeStampField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcDateOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( UtcTimeOnlyField* field )
{ QF_STACK_TRY
  checkDisposed();
  m_message->mapSetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}

StringField* Message::Trailer::getField( StringField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
BooleanField* Message::Trailer::getField( BooleanField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
CharField* Message::Trailer::getField( CharField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
IntField* Message::Trailer::getField( IntField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
DoubleField* Message::Trailer::getField( DoubleField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcTimeStampField* Message::Trailer::getField( UtcTimeStampField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcDateOnlyField* Message::Trailer::getField( UtcDateOnlyField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
UtcTimeOnlyField* Message::Trailer::getField( UtcTimeOnlyField* field )
throw( FieldNotFound* )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
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
  return m_message->mapGetField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::setField( int field, String* value )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapSetField( field, value, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
void Message::Trailer::removeField( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapRemoveField( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
bool Message::Trailer::hasGroup( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapHasGroup( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
int Message::Trailer::groupCount( int field )
{ QF_STACK_TRY
  checkDisposed();
  return m_message->mapGroupCount( field, m_message->m_pUnmanaged->getTrailer() );
  QF_STACK_CATCH
}
bool Message::Trailer::isSetField( int field )
{ QF_STACK_TRY
  return m_message->m_pUnmanaged->getTrailer().isSetField( field );
  QF_STACK_CATCH
}

void Message::mapSetString(int field, String* value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::StringField( field, convertString( value ) ) );
  QF_STACK_CATCH
}

void Message::mapSetBoolean(int field, bool value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::BoolField( field, value ) );
  QF_STACK_CATCH
}

void Message::mapSetChar(int field, char value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::CharField( field, value ) );
  QF_STACK_CATCH
}

void Message::mapSetInt(int field, int value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::IntField( field, value ) );
  QF_STACK_CATCH
}

void Message::mapSetDouble(int field, double value, FIX::FieldMap& map)
{ QF_STACK_TRY
  map.setField( FIX::DoubleField( field, value ) );
  QF_STACK_CATCH
}

void Message::mapSetUtcTimeStamp(int field, DateTime value, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcTimeStampField(
                  field,
                  FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                     value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

void Message::mapSetUtcDateOnly(int field, DateTime value, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcDateOnlyField(
                  field,
                  FIX::UtcDate( value.Day, value.Month, value.Year ) ) );

  QF_STACK_CATCH
}

void Message::mapSetUtcTimeOnly(int field, DateTime value, FIX::FieldMap& map)
{ QF_STACK_TRY

  map.setField( FIX::UtcTimeOnlyField(
                  field,
	                FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ) ) );

  QF_STACK_CATCH
}

String* Message::mapGetString(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  StringField* stringField = new StringField(field);
  return mapGetField( stringField, map )->getValue();

  QF_STACK_CATCH
}

bool Message::mapGetBoolean(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  BooleanField* booleanField = new BooleanField(field);
  return mapGetField( booleanField, map )->getValue();

  QF_STACK_CATCH
}

char Message::mapGetChar(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  CharField* charField = new CharField(field);
  return mapGetField( charField, map )->getValue();

  QF_STACK_CATCH
}

int Message::mapGetInt(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  IntField* intField = new IntField(field);
  return mapGetField( intField, map )->getValue();

  QF_STACK_CATCH
}

double Message::mapGetDouble(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  DoubleField* doubleField = new DoubleField(field);
  return mapGetField( doubleField, map )->getValue();

  QF_STACK_CATCH
}

DateTime Message::mapGetUtcTimeStamp(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  UtcTimeStampField* utcTimeStampField = new UtcTimeStampField(field);
  return mapGetField( utcTimeStampField, map )->getValue();

  QF_STACK_CATCH
}

DateTime Message::mapGetUtcDateOnly(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  UtcDateOnlyField* utcDateOnlyField = new UtcDateOnlyField(field);
  return mapGetField( utcDateOnlyField, map )->getValue();

  QF_STACK_CATCH
}

DateTime Message::mapGetUtcTimeOnly(int field, FIX::FieldMap& map) throw ( FieldNotFound* )
{ QF_STACK_TRY

  UtcTimeOnlyField* utcTimeOnlyField = new UtcTimeOnlyField(field);
  return mapGetField( utcTimeOnlyField, map )->getValue();

  QF_STACK_CATCH
}

void Message::mapSetField( StringField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetString( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( BooleanField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetBoolean( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( CharField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetChar( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( IntField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetInt( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( DoubleField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetDouble( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( UtcTimeStampField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcTimeStamp( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( UtcDateOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcDateOnly( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

void Message::mapSetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
{ QF_STACK_TRY
  mapSetUtcTimeOnly( field->getField(), field->getValue(), map );
  QF_STACK_CATCH
}

StringField* Message::mapGetField( StringField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

BooleanField* Message::mapGetField( BooleanField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

CharField* Message::mapGetField( CharField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

IntField* Message::mapGetField( IntField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

DoubleField* Message::mapGetField( DoubleField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

UtcTimeStampField* Message::mapGetField( UtcTimeStampField* field,
				      FIX::FieldMap& map )
throw( FieldNotFound* )
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

UtcDateOnlyField* Message::mapGetField( UtcDateOnlyField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

UtcTimeOnlyField* Message::mapGetField( UtcTimeOnlyField* field, FIX::FieldMap& map )
throw( FieldNotFound* )
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

void Message::mapSetField( int field, String* value, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.setField( field, convertString(value) );
  QF_STACK_CATCH
}

String* Message::mapGetField( int field, FIX::FieldMap& map )
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

void Message::mapRemoveField( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  map.removeField( field );
  QF_STACK_CATCH
}

bool Message::mapHasGroup( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.hasGroup( field );
  QF_STACK_CATCH
}

int Message::mapGroupCount( int field, FIX::FieldMap& map )
{ QF_STACK_TRY
  return map.groupCount(field);
  QF_STACK_CATCH
}

}
