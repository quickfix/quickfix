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

#include "quickfix_net.h"

#include "quickfix/Dictionary.h"
#include "Exceptions.h"

namespace QuickFix
{
public __gc class Dictionary
{
public:
  Dictionary( String* name )
  {
    m_pUnmanaged = new FIX::Dictionary( convertString(name) );
  }

  Dictionary()
  {
    m_pUnmanaged = new FIX::Dictionary();
  }

  Dictionary( const FIX::Dictionary& dictionary )
  {
    m_pUnmanaged = new FIX::Dictionary();
    *m_pUnmanaged = dictionary;
  }

  ~Dictionary()
  {
    delete m_pUnmanaged;
  }

  String* getName()
  {
    return unmanaged().getName().c_str();
  }

  int size()
  {
    return unmanaged().size();
  }

  String* getString( String* key )
  {
    return getString( key, false );
  }

  String* getString( String* key, bool capitalize )
  {
    try
    {
      return unmanaged().getString( convertString(key), capitalize ).c_str();
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
    catch( FIX::FieldConvertError& e )
    {
      throw new FieldConvertError( e.what() );
    }
  }

  long getLong( String* key )
  {
    try
    {
      return unmanaged().getLong( convertString(key) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
    catch( FIX::FieldConvertError& e )
    {
      throw new FieldConvertError( e.what() );
    }
  }

  double getDouble( String* key )
  {
    try
    {
      return unmanaged().getDouble( convertString(key) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
    catch( FIX::FieldConvertError& e )
    {
      throw new FieldConvertError( e.what() );
    }
  }

  bool getBool( String* key )
  {
    try
    {
      return unmanaged().getBool( convertString(key) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
    catch( FIX::FieldConvertError& e )
    {
      throw new FieldConvertError( e.what() );
    }
  }

  int getDay( String* key )
  {
    try
    {
      return unmanaged().getDay( convertString(key) );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }
    catch( FIX::FieldConvertError& e )
    {
      throw new FieldConvertError( e.what() );
    }
  }

  void setString( String* key, String* value )
  {
    unmanaged().setString( convertString(key), convertString(value) );
  }

  void setLong( String* key, int value )
  {
    unmanaged().setLong( convertString(key), value );
  }

  void setDouble( String* key, double value )
  {
    unmanaged().setDouble( convertString(key), value );
  }

  void setBool( String* key, bool value )
  {
    unmanaged().setBool( convertString(key), value );
  }

  void setDay( String* key, int value )
  {
    unmanaged().setDay( convertString(key), value );
  }

  bool has( String* key )
  {
    return unmanaged().has( convertString(key) );
  }

  void merge( Dictionary* toMerge )
  {
    unmanaged().merge( toMerge->unmanaged() );
  }

  FIX::Dictionary& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::Dictionary* m_pUnmanaged;
};
}
