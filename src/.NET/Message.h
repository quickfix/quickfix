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
using namespace System::Collections;

#include "quickfix_net.h"
#include "FieldMap.h"
#include "Field.h"
#include "Fields.h"
#include "Exceptions.h"
#include "Group.h"
#include "DataDictionary.h"

#include "quickfix/Message.h"
#include "quickfix/CallStack.h"

#include <vcclr.h>

namespace QuickFix
{
public __gc class BeginString;
public __gc class MsgType;

public __gc class Message : public FieldMap, public IDisposable
{
private:
  void addMemoryPressure()
  {
#if defined(_MSC_VER) && _MSC_VER >= 1400
    GC::AddMemoryPressure( 2048 );
#endif
  }

  void removeMemoryPressure()
  {
#if defined(_MSC_VER) && _MSC_VER >= 1400
    GC::RemoveMemoryPressure( 2048 );
#endif
  }

public:
  Message() : disposed( false )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Message();
    m_header = new Header( this );
    m_trailer = new Trailer( this );
    addMemoryPressure();

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
    { disposed = true; throw new InvalidMessage( e.what() ); }

    addMemoryPressure();

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
    { disposed = true; throw new InvalidMessage( e.what() ); }

    addMemoryPressure();

    QF_STACK_CATCH
  }

  Message( String* string, DataDictionary* dataDictionary, bool validate ) : disposed( false )
  { QF_STACK_TRY

    try
    {
      if ( !String::Compare( string, String::Empty ) )
        m_pUnmanaged = new FIX::Message();
      else
        m_pUnmanaged = new FIX::Message( convertString(string), dataDictionary->unmanaged(), validate );
      m_header = new Header( this );
      m_trailer = new Trailer( this );
    }
    catch ( FIX::InvalidMessage & e )
    { disposed = true; throw new InvalidMessage( e.what() ); }

    addMemoryPressure();

    QF_STACK_CATCH
  }

  Message( const FIX::Message& message ) : disposed( false )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Message();
    *m_pUnmanaged = message;
    m_header = new Header( this );
    m_trailer = new Trailer( this );

    addMemoryPressure();

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
    Dispose();
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
      removeMemoryPressure();
    }
  }

  void checkDisposed()
  {
    if ( disposed )
      throw new System::ObjectDisposedException( this->ToString() );
  }

  FIX::FieldMap* pUnmanaged()
  { return m_pUnmanaged; }

  FIX::Message& unmanaged()
  { return * m_pUnmanaged; }

  void setUnmanaged( const FIX::Message& message )
  { delete m_pUnmanaged; m_pUnmanaged = new FIX::Message(); *m_pUnmanaged = message; }

  void setString(int field, String* value);
  void setBoolean(int field, bool value);
  void setChar(int field, wchar_t value);
  void setInt(int field, int value);
  void setDouble(int field, double value);
  void setDouble(int field, double value, int padding);
  void setUtcTimeStamp(int field, DateTime value);
  void setUtcTimeStamp(int field, DateTime value, bool showMilliseconds);
  void setUtcDateOnly(int field, DateTime value);
  void setUtcTimeOnly(int field, DateTime value);
  void setUtcTimeOnly(int field, DateTime value, bool showMilliseconds);

  String* getString(int field);
  bool getBoolean(int field);
  wchar_t getChar(int field);
  int getInt(int field);
  double getDouble(int field);
  DateTime getUtcTimeStamp(int field);
  DateTime getUtcDateOnly(int field);
  DateTime getUtcTimeOnly(int field);

  String* ToString()
  { QF_STACK_TRY
    return m_pUnmanaged->toString().c_str();
    QF_STACK_CATCH
  }

  String* ToString( int beginStringField, int bodyLengthField, int checkSumField )
  { QF_STACK_TRY
    return m_pUnmanaged->toString(beginStringField, bodyLengthField, checkSumField).c_str();
    QF_STACK_CATCH
  }

  String* ToXML()
  { QF_STACK_TRY
    return m_pUnmanaged->toXML().c_str();
    QF_STACK_CATCH
  }

  void setString( String* string )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged->setString( convertString(string) );
    }
    catch( FIX::InvalidMessage& e )
    { throw new InvalidMessage( e.what() ); }

    QF_STACK_CATCH
  }

  void setString( String* string, bool validate )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged->setString( convertString(string), validate );
    }
    catch( FIX::InvalidMessage& e )
    { throw new InvalidMessage( e.what() ); }

    QF_STACK_CATCH
  }

  void setString( String* string, bool validate, DataDictionary* dataDictionary )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged->setString( convertString(string), validate, &dataDictionary->unmanaged() );
    }
    catch( FIX::InvalidMessage& e )
    { throw new InvalidMessage( e.what() ); }

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

  StringField* getField( StringField* field );
  BooleanField* getField( BooleanField* field );
  CharField* getField( CharField* field );
  IntField* getField( IntField* field );
  DoubleField* getField( DoubleField* field );
  UtcTimeStampField* getField( UtcTimeStampField* field );
  UtcDateOnlyField* getField( UtcDateOnlyField* field );
  UtcTimeOnlyField* getField( UtcTimeOnlyField* field );

  bool isSetField( Field* field );

  String* getField( int field );
  void setField( int field, String* );
  void removeField( int field );

  bool hasGroup( int field );
  bool hasGroup( unsigned num, int field );
  bool hasGroup( unsigned num, Group* group );
  bool hasGroup( Group* group );
  
  void removeGroup( int field );
  void removeGroup( unsigned num, int field );
  void removeGroup( unsigned num, Group* group );
  void removeGroup( Group* group );

  int groupCount( int field );
  bool isSetField( int field );

  void addGroup( int field, FieldMap* group )
  { QF_STACK_TRY
    pUnmanaged()->addGroup( field, *group->pUnmanaged() );
    QF_STACK_CATCH
  }

  void addGroup( Group* group )
  { QF_STACK_TRY
    unmanaged().addGroup( group->unmanaged() );
    QF_STACK_CATCH
  }

  void replaceGroup( unsigned num, int field, FieldMap* group )
  { QF_STACK_TRY
    pUnmanaged()->replaceGroup( num, field, *group->pUnmanaged() );
    QF_STACK_CATCH
  }

  void replaceGroup( unsigned num, Group* group )
  { QF_STACK_TRY
    unmanaged().replaceGroup( num, group->unmanaged() );
    QF_STACK_CATCH
  }

  FieldMap* getGroup( unsigned num, int field, FieldMap* group )
  {
    try
    {
      pUnmanaged()->getGroup( num, field, *group->pUnmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }
  }

  Group* getGroup( unsigned num, Group* group )
  { QF_STACK_TRY

    try
    {
      unmanaged().getGroup( num, group->unmanaged() );
      return group;
    }
    catch ( FIX::FieldNotFound & e )
    {
      throw new FieldNotFound( e.field );
    }

    QF_STACK_CATCH
  }

  static MsgType* identifyType( String* message )
  {
    try 
    {
      int index = message->IndexOf( "\00135=" );
      if( index == -1 ) throw new MessageParseError();

      int startValue = index + 4;
      int soh = message->IndexOf( "\001", startValue );
      if( soh == -1 ) throw new MessageParseError();
      String* value = message->Substring( startValue, soh - startValue );
	  return new QuickFix::MsgType( value );
    }
    catch( Exception* e ) 
    {
      throw new MessageParseError();
    }
  }

  __gc class Header : public FieldMap, public IDisposable
  {
  public:
    Header( Message* message ) : m_message( message ), disposed( false ) {}

    void setString(int field, String* value);
    void setBoolean(int field, bool value);
    void setChar(int field, wchar_t value);
    void setInt(int field, int value);
    void setDouble(int field, double value);
    void setDouble(int field, double value, int padding);
    void setUtcTimeStamp(int field, DateTime value);
    void setUtcTimeStamp(int field, DateTime value, bool showMilliseconds);
    void setUtcDateOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value, bool showMilliseconds);

    String* getString(int field);
    bool getBoolean(int field);
    wchar_t getChar(int field);
    int getInt(int field);
    double getDouble(int field);
    DateTime getUtcTimeStamp(int field);
    DateTime getUtcDateOnly(int field);
    DateTime getUtcTimeOnly(int field);

    void setField( StringField* field );
    void setField( BooleanField* field );
    void setField( CharField* field );
    void setField( IntField* field );
    void setField( DoubleField* field );
    void setField( UtcTimeStampField* field );
    void setField( UtcDateOnlyField* field );
    void setField( UtcTimeOnlyField* field );

    StringField* getField( StringField* field );
    BooleanField* getField( BooleanField* field );
    CharField* getField( CharField* field );
    IntField* getField( IntField* field );
    DoubleField* getField( DoubleField* field );
    UtcTimeStampField* getField( UtcTimeStampField* field );
    UtcDateOnlyField* getField( UtcDateOnlyField* field );
    UtcTimeOnlyField* getField( UtcTimeOnlyField* field );

    bool isSetField( Field* field );

    String* getField( int field );
    void setField( int field, String* );
    void removeField( int field );

    bool hasGroup( int field );
    bool hasGroup( unsigned num, int field );
    bool hasGroup( unsigned num, Group* group );
    bool hasGroup( Group* group );
  
    void removeGroup( int field );
    void removeGroup( unsigned num, int field );
    void removeGroup( unsigned num, Group* group );
    void removeGroup( Group* group );

    bool isEmpty();
    void clear();

    int groupCount( int field );
    bool isSetField( int field );

    void addGroup( int field, FieldMap* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getHeader().addGroup( field, *group->pUnmanaged() );
      QF_STACK_CATCH
    }

    void addGroup( Group* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getHeader().addGroup( group->unmanaged().field(), group->unmanaged() );
      QF_STACK_CATCH
    }

    void replaceGroup( unsigned num, int field, FieldMap* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getHeader().replaceGroup( num, field, *group->pUnmanaged() );
      QF_STACK_CATCH
    }

    void replaceGroup( unsigned num, Group* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getHeader().replaceGroup( num, group->unmanaged().field(), group->unmanaged() );
      QF_STACK_CATCH
    }

	FieldMap* getGroup( unsigned num, int field, FieldMap* group )
    {
      try
      {
        m_message->m_pUnmanaged->getHeader().getGroup( num, field, *group->pUnmanaged() );
        return group;
      }
      catch ( FIX::FieldNotFound & e )
      {
        throw new FieldNotFound( e.field );
      }
    }

    Group* getGroup( unsigned num, Group* group )
    { QF_STACK_TRY

      try
      {
        m_message->m_pUnmanaged->getHeader().getGroup( num, group->unmanaged().field(), group->unmanaged() );
        return group;
      }
      catch ( FIX::FieldNotFound & e )
      {
        throw new FieldNotFound( e.field );
      }

      QF_STACK_CATCH
    }

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

    FIX::FieldMap* pUnmanaged()
    { return &m_message->m_pUnmanaged->getHeader(); }

    FIX::Header& unmanaged()
    { return m_message->m_pUnmanaged->getHeader(); }

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
        if( *m_iterator == m_message->m_pUnmanaged->getHeader().end() )
          return 0;
        FIX::FieldBase field = (*m_iterator)->second;
        return new StringField( field.getField(), field.getString().c_str() );
      }

      bool MoveNext()
      {
        if( m_iterator == 0 )
        {
          m_iterator = new FIX::Message::iterator();
          *m_iterator = m_message->m_pUnmanaged->getHeader().begin();
        }
        else
        {
          (*m_iterator)++;
        }

        return *m_iterator != m_message->m_pUnmanaged->getHeader().end();
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
    void setChar(int field, wchar_t value);
    void setInt(int field, int value);
    void setDouble(int field, double value);
    void setDouble(int field, double value, int padding);
    void setUtcTimeStamp(int field, DateTime value);
    void setUtcTimeStamp(int field, DateTime value, bool showMilliseconds);
    void setUtcDateOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value);
    void setUtcTimeOnly(int field, DateTime value, bool showMilliseconds);

    String* getString(int field);
    bool getBoolean(int field);
    wchar_t getChar(int field);
    int getInt(int field);
    double getDouble(int field);
    DateTime getUtcTimeStamp(int field);
    DateTime getUtcDateOnly(int field);
    DateTime getUtcTimeOnly(int field);

    void setField( StringField* field );
    void setField( BooleanField* field );
    void setField( CharField* field );
    void setField( IntField* field );
    void setField( DoubleField* field );
    void setField( UtcTimeStampField* field );
    void setField( UtcDateOnlyField* field );
    void setField( UtcTimeOnlyField* field );

    StringField* getField( StringField* field );
    BooleanField* getField( BooleanField* field );
    CharField* getField( CharField* field );
    IntField* getField( IntField* field );
    DoubleField* getField( DoubleField* field );
    UtcTimeStampField* getField( UtcTimeStampField* field );
    UtcDateOnlyField* getField( UtcDateOnlyField* field );
    UtcTimeOnlyField* getField( UtcTimeOnlyField* field );

    bool isSetField( Field* field );

    String* getField( int field );
    void setField( int field, String* );
    void removeField( int field );

    bool hasGroup( int field );
    bool hasGroup( unsigned num, int field );
    bool hasGroup( unsigned num, Group* group );
    bool hasGroup( Group* group );
  
    void removeGroup( int field );
    void removeGroup( unsigned num, int field );
    void removeGroup( unsigned num, Group* group );
    void removeGroup( Group* group );

    bool isEmpty();
    void clear();

    int groupCount( int field );
    bool isSetField( int field );

    void addGroup( int field, FieldMap* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getTrailer().addGroup( field, *group->pUnmanaged() );
      QF_STACK_CATCH
    }

    void addGroup( Group* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getTrailer().addGroup( group->unmanaged().field(), group->unmanaged() );
      QF_STACK_CATCH
    }

    void replaceGroup( unsigned num, int field, FieldMap* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getTrailer().replaceGroup( num, field, *group->pUnmanaged() );
      QF_STACK_CATCH
    }

    void replaceGroup( unsigned num, Group* group )
    { QF_STACK_TRY
      m_message->m_pUnmanaged->getTrailer().replaceGroup( num, group->unmanaged().field(), group->unmanaged() );
      QF_STACK_CATCH
    }

    FieldMap* getGroup( unsigned num, int field, FieldMap* group )
    {
      try
      {
        m_message->m_pUnmanaged->getTrailer().getGroup( num, field, *group->pUnmanaged() );
        return group;
      }
      catch ( FIX::FieldNotFound & e )
      {
        throw new FieldNotFound( e.field );
      }
    }

    Group* getGroup( unsigned num, Group* group )
    { QF_STACK_TRY

      try
      {
        m_message->m_pUnmanaged->getTrailer().getGroup( num, group->unmanaged().field(), group->unmanaged() );
        return group;
      }
      catch ( FIX::FieldNotFound & e )
      {
        throw new FieldNotFound( e.field );
      }

      QF_STACK_CATCH
    }

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

    FIX::FieldMap* pUnmanaged()
    { return &m_message->m_pUnmanaged->getTrailer(); }

    FIX::Header& unmanaged()
    { return m_message->m_pUnmanaged->getTrailer(); }

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
        if( *m_iterator == m_message->m_pUnmanaged->getTrailer().end() )
          return 0;
        FIX::FieldBase field = (*m_iterator)->second;
        return new StringField( field.getField(), field.getString().c_str() );
      }

      bool MoveNext()
      {
        if( m_iterator == 0 )
        {
          m_iterator = new FIX::Message::iterator();
          *m_iterator = m_message->m_pUnmanaged->getTrailer().begin();
        }
        else
        {
          (*m_iterator)++;
        }

        return *m_iterator != m_message->m_pUnmanaged->getTrailer().end();
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
  { checkDisposed(); return m_pUnmanaged->isAdmin(); }
  bool isApp()
  { checkDisposed(); return m_pUnmanaged->isApp(); }

  bool isEmpty()
  { checkDisposed(); return unmanaged().isEmpty(); }
  void clear()
  { checkDisposed(); unmanaged().clear(); }

  static bool isAdminMsgType( String* msgType )
  {
    return FIX::Message::isAdminMsgType( FIX::MsgType(convertString(msgType)) );
  }

  static ApplVerID* toApplVerID( BeginString* value )
  { 
    FIX::BeginString beginString( convertString(value->getValue()) );
    FIX::ApplVerID applVerID = FIX::Message::toApplVerID(beginString);
    return new ApplVerID(applVerID.getValue().c_str());
  }

  static BeginString* toBeginString( ApplVerID* value )
  { 
    FIX::ApplVerID applVerID( convertString(value->getValue()) );
    FIX::BeginString beginString = FIX::Message::toBeginString(applVerID);
    return new BeginString(beginString.getValue().c_str());
  }

  IEnumerator* GetEnumerator()
  {
    checkDisposed(); return new Enumerator( this );
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
