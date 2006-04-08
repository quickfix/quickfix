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
#include "quickfix/CallStack.h"
#include "Exceptions.h"

namespace QuickFix
{
public __gc class Dictionary
{
public:
  Dictionary( String* name )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Dictionary( convertString(name) );
  
    QF_STACK_CATCH
  }

  Dictionary()
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::Dictionary();

    QF_STACK_CATCH
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
  { QF_STACK_TRY
    return unmanaged().getName().c_str();
    QF_STACK_CATCH
  }

  int size()
  { QF_STACK_TRY
    return unmanaged().size();
    QF_STACK_CATCH
  }

  String* getString( String* key )
  {
    return getString( key, false );
  }

  String* getString( String* key, bool capitalize )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  long getLong( String* key )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  double getDouble( String* key )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  bool getBool( String* key )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  int getDay( String* key )
  { QF_STACK_TRY

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

    QF_STACK_CATCH
  }

  void setString( String* key, String* value )
  { QF_STACK_TRY
    unmanaged().setString( convertString(key), convertString(value) );
    QF_STACK_CATCH
  }

  void setLong( String* key, int value )
  { QF_STACK_TRY
    unmanaged().setLong( convertString(key), value );
    QF_STACK_CATCH
  }

  void setDouble( String* key, double value )
  { QF_STACK_TRY
    unmanaged().setDouble( convertString(key), value );
    QF_STACK_CATCH
  }

  void setBool( String* key, bool value )
  { QF_STACK_TRY
    unmanaged().setBool( convertString(key), value );
    QF_STACK_CATCH
  }

  void setDay( String* key, int value )
  { QF_STACK_TRY
    unmanaged().setDay( convertString(key), value );
    QF_STACK_CATCH
  }

  bool has( String* key )
  { QF_STACK_TRY
    return unmanaged().has( convertString(key) );
    QF_STACK_CATCH
  }

  void merge( Dictionary* toMerge )
  { QF_STACK_TRY
    unmanaged().merge( toMerge->unmanaged() );
    QF_STACK_CATCH
  }

  FIX::Dictionary& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::Dictionary* m_pUnmanaged;
};
}
