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
using namespace System::IO;
using namespace System::Runtime::InteropServices;

#include "quickfix_net.h"

#include "Exceptions.h"
#include "quickfix/DataDictionary.h"

namespace QuickFix
{
public __gc class DataDictionary
{
public:
  DataDictionary()
  {
    m_pUnmanaged = new FIX::DataDictionary();
  }

  DataDictionary( DataDictionary* dataDictionary )
  {
    m_pUnmanaged = new FIX::DataDictionary( dataDictionary->unmanaged() );
  }

  DataDictionary( Stream* stream )
  {
    std::string streamValue;
    char read = -1;
    while ( ( read = ( char ) stream->ReadByte() ) != -1 )
      streamValue += read;
    std::stringstream stringStream( streamValue );
    try
    {
      m_pUnmanaged = new FIX::DataDictionary( stringStream );
    }
    catch ( std::exception & e ) { throw new ConfigError( e.what() ); }
  }

  DataDictionary( String* url )
  {
    try
    {
      m_pUnmanaged = new FIX::DataDictionary( convertString(url) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
  }

  DataDictionary( const FIX::DataDictionary& dataDictionary )
  {
    m_pUnmanaged = new FIX::DataDictionary( dataDictionary );
  }

  ~DataDictionary()
  {
    delete m_pUnmanaged;
  }

  String* getVersion()
  {
    return unmanaged().getVersion().c_str();
  }

  String* getFieldName( int field )
  {
    std::string nameString;
    bool result = unmanaged().getFieldName( field, nameString );
    return result ? nameString.c_str() : (System::String*)0;
  }

  int getFieldTag( String* name )
  {
    int field;
    bool result = unmanaged().getFieldTag( convertString(name), field );
    return result ? field : 0;
  }

  String* getValueName( int field, String* value )
  {
    std::string nameString;
    bool result = unmanaged().getValueName( field, convertString(value), nameString );
    return result ? nameString.c_str() : (System::String*)0;
  }

  bool isField( int field )
  {
    return unmanaged().isField( field );
  }

  bool isMsgType( String* msgType )
  {
    return unmanaged().isMsgType( convertString(msgType) );
  }

  bool isMsgField( String* msgType, int field )
  {
    return unmanaged().isMsgField( convertString(msgType), field );
  }

  bool isHeaderField( int field )
  {
    return unmanaged().isHeaderField( field );
  }

  bool isTrailerField( int field )
  {
    return unmanaged().isTrailerField( field );
  }

  bool isRequiredField( String* msgType, int field )
  {
    return unmanaged().isRequiredField( convertString(msgType), field );
  }

  bool hasFieldValue( int field )
  {
    return unmanaged().hasFieldValue( field );
  }

  bool isFieldValue( int field, String* value )
  {
    return unmanaged().isFieldValue( field, convertString(value) );
  }

  bool isGroup( String* msg, int field )
  {
    return unmanaged().isGroup( convertString(msg), field );
  }

  bool DataDictionary::getGroup( String* msg, int field, [Out]int delim,
                                 [Out]DataDictionary** dataDictionary )
  {  
    const FIX::DataDictionary* pDataDictionary = 0;
    bool result = unmanaged().getGroup( convertString(msg), field, delim, pDataDictionary );
	  if( result == false ) return false;
	  (*dataDictionary)->unmanaged() = *pDataDictionary;
	  return true;
  }

  int getFieldType( int field )
  {
    FIX::TYPE::Type type;
    bool result = unmanaged().getFieldType( field, type );
    if( result ) return type;
    return FIX::TYPE::Unknown;
  }

  FIX::DataDictionary& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::DataDictionary* m_pUnmanaged;
};
}
