/* -*- C++ -*- */

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

#pragma once

using namespace System;
using namespace System::Collections;

#include "quickfix_net.h"
#include "FieldMap.h"
#include "Field.h"
#include "Exceptions.h"
#include "Group.h"
#include "DataDictionary.h"

#include "quickfix/Message.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class BeginString;
public __gc class MsgType;

public __gc class Message : public FieldMap, public IDisposable
{
public:
  Message() : disposed( false )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Message();
    m_header = new Header( this );
    m_trailer = new Trailer( this );

    QF_STACK_CATCH
  }

  Message( String* string ) : disposed( false )
  { QF_STACK_TRY

    try
    {
      if ( !String::Compare( string, String::Empty ) )
        m_pUnmanaged = new FIX::Message();
      else
        m_pUnmanaged = new FIX::Message( convertString( string ) );
      m_header = new Header( this );
      m_trailer = new Trailer( this );
    }
    catch ( FIX::InvalidMessage & e )
    { throw new InvalidMessage(); }

    QF_STACK_CATCH
  }

  Message( String* string, DataDictionary* dataDictionary ) : disposed( false )
  { QF_STACK_TRY

    try
    {
      if ( !String::Compare( string, String::Empty ) )
        m_pUnmanaged = new FIX::Message();
      else
        m_pUnmanaged = new FIX::Message( convertString(string), dataDictionary->unmanaged() );
      m_header = new Header( this );
      m_trailer = new Trailer( this );
    }
    catch ( FIX::InvalidMessage & e )
    { throw new InvalidMessage(); }

    QF_STACK_CATCH
  }

  Message( const FIX::Message& message ) : disposed( false )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Message();
    *m_pUnmanaged = message;
    m_header = new Header( this );
    m_trailer = new Trailer( this );

    QF_STACK_CATCH
  }

  Message( BeginString* beginString );
  Message( BeginString* beginString, MsgType* msgType );

  static bool Message::InitializeXML( String* url )
  { QF_STACK_TRY
    return FIX::Message::InitializeXML(convertString(url));
    QF_STACK_CATCH
  }

  ~Message()
  {
    delete m_pUnmanaged;
    m_pUnmanaged = 0;
  }

  void Dispose()
  {
    if ( !disposed )
    {
      m_header->Dispose();
      m_trailer->Dispose();
      delete m_pUnmanaged; m_pUnmanaged = 0;
      System::GC::SuppressFinalize( this );
      disposed = true;
    }
  }

  void checkDisposed()
  {
    if ( disposed )
      throw new System::ObjectDisposedException( this->ToString() );
  }

  FIX::Message& unmanaged()
  { return * m_pUnmanaged; }

  void setUnmanaged( const FIX::Message& message )
  { delete m_pUnmanaged; m_pUnmanaged = new FIX::Message(); *m_pUnmanaged = message; }

  void setString(int field, String* value);
  void setBoolean(int field, bool value);
  void setChar(int field, char value);
  void setInt(int field, int value);
  void setDouble(int field, double value);
  void setUtcTimeStamp(int field, DateTime value);
  void setUtcDateOnly(int field, DateTime value);
  void setUtcTimeOnly(int field, DateTime value);

  String* getString(int field) throw ( FieldNotFound* );
  bool getBoolean(int field) throw ( FieldNotFound* );
  char getChar(int field) throw ( FieldNotFound* );
  int getInt(int field) throw ( FieldNotFound* );
  double getDouble(int field) throw ( FieldNotFound* );
  DateTime getUtcTimeStamp(int field) throw ( FieldNotFound* );
  DateTime getUtcDateOnly(int field) throw ( FieldNotFound* );
  DateTime getUtcTimeOnly(int field) throw ( FieldNotFound* );

  String* ToString()
  { QF_STACK_TRY
    return m_pUnmanaged->toString().c_str();
    QF_STACK_CATCH
  }

  String* ToXML()
  { QF_STACK_TRY
    return m_pUnmanaged->toXML().c_str();
    QF_STACK_CATCH
  }

  void setField( StringField* field );
  void setField( BooleanField* field );
  void setField( CharField* field );
  void setField( IntField* field );
  void setField( DoubleField* field );
  void setField( UtcTimeStampField* field );
  void setField( UtcDateOnlyField* field );
  void setField( UtcTimeOnlyField* field );

  StringField* getField( StringField* field ) throw( FieldNotFound* );
  BooleanField* getField( BooleanField* field ) throw( FieldNotFound* );
  CharField* getField( CharField* field ) throw( FieldNotFound* );
  IntField* getField( IntField* field ) throw( FieldNotFound* );
  DoubleField* getField( DoubleField* field ) throw( FieldNotFound* );
  UtcTimeStampField* getField( UtcTimeStampField* field ) throw( FieldNotFound* );
  UtcDateOnlyField* getField( UtcDateOnlyField* field ) throw( FieldNotFound* );
  UtcTimeOnlyField* getField( UtcTimeOnlyField* field ) throw( FieldNotFound* );

  bool isSetField( Field* field );

  String* getField( int field ) throw( FieldNotFound* );
  void setField( int field, String* );
  void removeField( int field );
  bool hasGroup( int field );
  int groupCount( int field );
  bool isSetField( int field );

  void addGroup( Group* group )
  { QF_STACK_TRY
    m_pUnmanaged->addGroup( group->unmanaged() );
    QF_STACK_CATCH
  }

  Group* getGroup( unsigned num, Group* group ) throw( FieldNotFound* )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged->getGroup( num, group->unmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }

    QF_STACK_CATCH
  }

  __gc class Header : public FieldMap, public IDisposable
  {
  public:
    Header( Message* message ) : m_message( message ), disposed( false ) {}

    void setString(int field, String* value);
    void setBoolean(int field, bool value);
    void setChar(int field, char value);
    void setInt(int field, int value);
    void setDouble(int field, double value);
    void setUtcTimeStamp(int field, DateTime value);
    void setUtcDateOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value);

    String* getString(int field) throw ( FieldNotFound* );
    bool getBoolean(int field) throw ( FieldNotFound* );
    char getChar(int field) throw ( FieldNotFound* );
    int getInt(int field) throw ( FieldNotFound* );
    double getDouble(int field) throw ( FieldNotFound* );
    DateTime getUtcTimeStamp(int field) throw ( FieldNotFound* );
    DateTime getUtcDateOnly(int field) throw ( FieldNotFound* );
    DateTime getUtcTimeOnly(int field) throw ( FieldNotFound* );

    void setField( StringField* field );
    void setField( BooleanField* field );
    void setField( CharField* field );
    void setField( IntField* field );
    void setField( DoubleField* field );
    void setField( UtcTimeStampField* field );
    void setField( UtcDateOnlyField* field );
    void setField( UtcTimeOnlyField* field );

    StringField* getField( StringField* field ) throw( FieldNotFound* );
    BooleanField* getField( BooleanField* field ) throw( FieldNotFound* );
    CharField* getField( CharField* field ) throw( FieldNotFound* );
    IntField* getField( IntField* field ) throw( FieldNotFound* );
    DoubleField* getField( DoubleField* field ) throw( FieldNotFound* );
    UtcTimeStampField* getField( UtcTimeStampField* field ) throw( FieldNotFound* );
    UtcDateOnlyField* getField( UtcDateOnlyField* field ) throw( FieldNotFound* );
    UtcTimeOnlyField* getField( UtcTimeOnlyField* field ) throw( FieldNotFound* );

    bool isSetField( Field* field );

    String* getField( int field ) throw( FieldNotFound* );
    void setField( int field, String* );
    void removeField( int field );
    bool hasGroup( int field );
    int groupCount( int field );
    bool isSetField( int field );

    void Dispose()
    {
      if ( !disposed )
      {
        System::GC::SuppressFinalize( this );
        disposed = true;
      }
    }

    void checkDisposed()
    {
      if ( disposed )
        throw new System::ObjectDisposedException( this->ToString() );
    }

    IEnumerator* GetEnumerator()
    {
      return new Enumerator( m_message );
    }

    __gc class Enumerator : public IEnumerator
    {
    public:
      Enumerator( Message* message )
        : m_message( message ), m_iterator(0) {}

      ~Enumerator()
      {
        if( m_iterator )
          delete m_iterator;
      }

      __property Object* get_Current()
      {
        if( m_iterator == 0 )
          return 0;
        if( *m_iterator == m_message->unmanaged().getHeader().end() )
          return 0;
        FIX::FieldBase field = (*m_iterator)->second;
        return new StringField( field.getField(), field.getString().c_str() );
      }

      bool MoveNext()
      {
        if( m_iterator == 0 )
        {
          m_iterator = new FIX::Message::iterator();
          *m_iterator = m_message->unmanaged().getHeader().begin();
        }
        else
        {
          (*m_iterator)++;
        }

        return *m_iterator != m_message->unmanaged().getHeader().end();
      }

      void Reset()
      {
        if( m_iterator )
          delete m_iterator;
        m_iterator = 0;
      }

    private:
      Message* m_message;
      FIX::Message::iterator* m_iterator;
    };

  private:
    Message* m_message;
    bool disposed;
  };

  __gc class Trailer : public FieldMap, public IDisposable
  {
  public:
    Trailer( Message* message ) : m_message( message ), disposed( false ) {}
    
    void setString(int field, String* value);
    void setBoolean(int field, bool value);
    void setChar(int field, char value);
    void setInt(int field, int value);
    void setDouble(int field, double value);
    void setUtcTimeStamp(int field, DateTime value);
    void setUtcDateOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value);

    String* getString(int field) throw ( FieldNotFound* );
    bool getBoolean(int field) throw ( FieldNotFound* );
    char getChar(int field) throw ( FieldNotFound* );
    int getInt(int field) throw ( FieldNotFound* );
    double getDouble(int field) throw ( FieldNotFound* );
    DateTime getUtcTimeStamp(int field) throw ( FieldNotFound* );
    DateTime getUtcDateOnly(int field) throw ( FieldNotFound* );
    DateTime getUtcTimeOnly(int field) throw ( FieldNotFound* );

    void setField( StringField* field );
    void setField( BooleanField* field );
    void setField( CharField* field );
    void setField( IntField* field );
    void setField( DoubleField* field );
    void setField( UtcTimeStampField* field );
    void setField( UtcDateOnlyField* field );
    void setField( UtcTimeOnlyField* field );

    StringField* getField( StringField* field ) throw( FieldNotFound* );
    BooleanField* getField( BooleanField* field ) throw( FieldNotFound* );
    CharField* getField( CharField* field ) throw( FieldNotFound* );
    IntField* getField( IntField* field ) throw( FieldNotFound* );
    DoubleField* getField( DoubleField* field ) throw( FieldNotFound* );
    UtcTimeStampField* getField( UtcTimeStampField* field ) throw( FieldNotFound* );
    UtcDateOnlyField* getField( UtcDateOnlyField* field ) throw( FieldNotFound* );
    UtcTimeOnlyField* getField( UtcTimeOnlyField* field ) throw( FieldNotFound* );

    bool isSetField( Field* field );

    String* getField( int field ) throw( FieldNotFound* );
    void setField( int field, String* );
    void removeField( int field );
    bool hasGroup( int field );
    int groupCount( int field );
    bool isSetField( int field );

    void Dispose()
    {
      if ( !disposed )
      {
        System::GC::SuppressFinalize( this );
        disposed = true;
      }
    }

    void checkDisposed()
    {
      if ( disposed )
        throw new System::ObjectDisposedException( this->ToString() );
    }

    IEnumerator* GetEnumerator()
    {
      return new Enumerator( m_message );
    }

    __gc class Enumerator : public IEnumerator
    {
    public:
      Enumerator( Message* message )
        : m_message( message ), m_iterator(0) {}

      ~Enumerator()
      {
        if( m_iterator )
          delete m_iterator;
      }

      __property Object* get_Current()
      {
        if( m_iterator == 0 )
          return 0;
        if( *m_iterator == m_message->unmanaged().getTrailer().end() )
          return 0;
        FIX::FieldBase field = (*m_iterator)->second;
        return new StringField( field.getField(), field.getString().c_str() );
      }

      bool MoveNext()
      {
        if( m_iterator == 0 )
        {
          m_iterator = new FIX::Message::iterator();
          *m_iterator = m_message->unmanaged().getTrailer().begin();
        }
        else
        {
          (*m_iterator)++;
        }

        return *m_iterator != m_message->unmanaged().getTrailer().end();
      }

      void Reset()
      {
        if( m_iterator )
          delete m_iterator;
        m_iterator = 0;
      }

    private:
      Message* m_message;
      FIX::Message::iterator* m_iterator;
    };

  private:
    Message* m_message;
    bool disposed;
  };

  Header* getHeader() { checkDisposed(); return m_header; }
  Trailer* getTrailer() { checkDisposed(); return m_trailer; }

  bool isAdmin()
  { return unmanaged().isAdmin(); }
  bool isApp()
  { return unmanaged().isApp(); }

  IEnumerator* GetEnumerator()
  {
    return new Enumerator( this );
  }

  __gc class Enumerator : public IEnumerator
  {
  public:
    Enumerator( Message* message )
      : m_message( message ), m_iterator(0) {}

    ~Enumerator()
    {
      if( m_iterator )
        delete m_iterator;
    }

    __property Object* get_Current()
    {
      if( m_iterator == 0 )
        return 0;
      if( *m_iterator == m_message->unmanaged().end() )
        return 0;
      FIX::FieldBase field = (*m_iterator)->second;
      return new StringField( field.getField(), field.getString().c_str() );
    }

    bool MoveNext()
    {
      if( m_iterator == 0 )
      {
        m_iterator = new FIX::Message::iterator();
        *m_iterator = m_message->unmanaged().begin();
      }
      else
      {
        (*m_iterator)++;
      }

      return *m_iterator != m_message->unmanaged().end();
    }

    void Reset()
    {
      if( m_iterator )
        delete m_iterator;
      m_iterator = 0;
    }

  private:
    Message* m_message;
    FIX::Message::iterator* m_iterator;
  };

private:
  void mapSetString(int field, String* value, FIX::FieldMap& map);
  void mapSetBoolean(int field, bool value, FIX::FieldMap& map);
  void mapSetChar(int field, char value, FIX::FieldMap& map);
  void mapSetInt(int field, int value, FIX::FieldMap& map);
  void mapSetDouble(int field, double value, FIX::FieldMap& map);
  void mapSetUtcTimeStamp(int field, DateTime value, FIX::FieldMap& map);
  void mapSetUtcTimeOnly(int field, DateTime value, FIX::FieldMap& map);
  void mapSetUtcDateOnly(int field, DateTime value, FIX::FieldMap& map);

  String* mapGetString(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  bool mapGetBoolean(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  char mapGetChar(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  int mapGetInt(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  double mapGetDouble(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  DateTime mapGetUtcTimeStamp(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  DateTime mapGetUtcDateOnly(int field, FIX::FieldMap& map) throw ( FieldNotFound* );
  DateTime mapGetUtcTimeOnly(int field, FIX::FieldMap& map) throw ( FieldNotFound* );

  void mapSetField( StringField* field, FIX::FieldMap& map );
  void mapSetField( BooleanField* field, FIX::FieldMap& map );
  void mapSetField( CharField* field, FIX::FieldMap& map );
  void mapSetField( IntField* field, FIX::FieldMap& map );
  void mapSetField( DoubleField* field, FIX::FieldMap& map );
  void mapSetField( UtcTimeStampField* field, FIX::FieldMap& map );
  void mapSetField( UtcDateOnlyField* field, FIX::FieldMap& map );
  void mapSetField( UtcTimeOnlyField* field, FIX::FieldMap& map );

  StringField* mapGetField( StringField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  BooleanField* mapGetField( BooleanField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  CharField* mapGetField( CharField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  IntField* mapGetField( IntField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  DoubleField* mapGetField( DoubleField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  UtcTimeStampField* mapGetField( UtcTimeStampField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  UtcDateOnlyField* mapGetField( UtcDateOnlyField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );
  UtcTimeOnlyField* mapGetField( UtcTimeOnlyField* field, FIX::FieldMap& map ) 
    throw( FieldNotFound* );

  void mapSetField( int field, String*, FIX::FieldMap& map );
  String* mapGetField( int field, FIX::FieldMap& map )
    throw( FieldNotFound* );
  void mapRemoveField( int field, FIX::FieldMap& map );
  bool mapHasGroup( int field, FIX::FieldMap& map );
  int mapGroupCount( int field, FIX::FieldMap& map );

protected:
  Header* m_header;
  Trailer* m_trailer;
private:
  FIX::Message* m_pUnmanaged;
  bool disposed;
};
}

#define NET_FIELD_SET( FIELD )                                               \
void set(QuickFix::FIELD* value)                                             \
{ setField(value); }                                                         \
QuickFix::FIELD* get(QuickFix::FIELD* value) throw(QuickFix::FieldNotFound*) \
{ getField(value); return value; }                                           \
QuickFix::FIELD* get##FIELD() throw(QuickFix::FieldNotFound*)                \
{ QuickFix::FIELD* value = new QuickFix::FIELD();                            \
getField(value); return value; }
