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
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class DataDictionary
{
public:
  DataDictionary()
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionary();

    QF_STACK_CATCH
  }

  DataDictionary( DataDictionary* dataDictionary )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionary( dataDictionary->unmanaged() );

    QF_STACK_CATCH
  }

  DataDictionary( Stream* stream )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  DataDictionary( String* url )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged = new FIX::DataDictionary( convertString(url) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }

    QF_STACK_CATCH
  }

  DataDictionary( const FIX::DataDictionary& dataDictionary )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionary( dataDictionary );

    QF_STACK_CATCH
  }

  ~DataDictionary()
  {
    delete m_pUnmanaged;
  }

  String* getVersion()
  { QF_STACK_TRY
    return unmanaged().getVersion().c_str();
    QF_STACK_CATCH
  }

  String* getFieldName( int field )
  { QF_STACK_TRY

    std::string nameString;
    bool result = unmanaged().getFieldName( field, nameString );
    return result ? nameString.c_str() : (System::String*)0;

    QF_STACK_CATCH
  }

  int getFieldTag( String* name )
  { QF_STACK_TRY

    int field;
    bool result = unmanaged().getFieldTag( convertString(name), field );
    return result ? field : 0;

    QF_STACK_CATCH
  }

  String* getValueName( int field, String* value )
  { QF_STACK_TRY

    std::string nameString;
    bool result = unmanaged().getValueName( field, convertString(value), nameString );
    return result ? nameString.c_str() : (System::String*)0;

    QF_STACK_CATCH
  }

  bool isField( int field )
  { QF_STACK_TRY
    return unmanaged().isField( field );
    QF_STACK_CATCH
  }

  bool isMsgType( String* msgType )
  { QF_STACK_TRY
    return unmanaged().isMsgType( convertString(msgType) );
    QF_STACK_CATCH
  }

  bool isMsgField( String* msgType, int field )
  { QF_STACK_TRY
    return unmanaged().isMsgField( convertString(msgType), field );
    QF_STACK_CATCH
  }

  bool isHeaderField( int field )
  { QF_STACK_TRY
    return unmanaged().isHeaderField( field );
    QF_STACK_CATCH
  }

  bool isTrailerField( int field )
  { QF_STACK_TRY
    return unmanaged().isTrailerField( field );
    QF_STACK_CATCH
  }

  bool isRequiredField( String* msgType, int field )
  { QF_STACK_TRY
    return unmanaged().isRequiredField( convertString(msgType), field );
    QF_STACK_CATCH
  }

  bool hasFieldValue( int field )
  { QF_STACK_TRY
    return unmanaged().hasFieldValue( field );
    QF_STACK_CATCH
  }

  bool isFieldValue( int field, String* value )
  { QF_STACK_TRY
    return unmanaged().isFieldValue( field, convertString(value) );
    QF_STACK_CATCH
  }

  bool isGroup( String* msg, int field )
  { QF_STACK_TRY
    return unmanaged().isGroup( convertString(msg), field );
    QF_STACK_CATCH
  }

  bool DataDictionary::getGroup( String* msg, int field, [Out]int delim,
                                 [Out]DataDictionary** dataDictionary )
  { QF_STACK_TRY
  
    const FIX::DataDictionary* pDataDictionary = 0;
    bool result = unmanaged().getGroup( convertString(msg), field, delim, pDataDictionary );
	  if( result == false ) return false;
	  (*dataDictionary)->unmanaged() = *pDataDictionary;
	  return true;

    QF_STACK_CATCH
  }

  int getFieldType( int field )
  { QF_STACK_TRY

    FIX::TYPE::Type type;
    bool result = unmanaged().getFieldType( field, type );
    if( result ) return type;
    return FIX::TYPE::Unknown;

    QF_STACK_CATCH
  }

  FIX::DataDictionary& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::DataDictionary* m_pUnmanaged;
};
}
