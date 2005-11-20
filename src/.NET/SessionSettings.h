/* -*- C++ -*- */

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

#pragma once

using namespace System;
using namespace System::IO;

#include "quickfix_net.h"

#include "quickfix/SessionSettings.h"
#include "quickfix/CallStack.h"
#include "SessionID.h"
#include "Dictionary.h"
#include "Exceptions.h"

namespace QuickFix
{
public __gc class SessionSettings
{
public:
  SessionSettings()
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionSettings();

    QF_STACK_CATCH
  }

  SessionSettings( Stream* stream )
  { QF_STACK_TRY

    std::string streamValue;
    char read = -1;
    while ( ( read = ( char ) stream->ReadByte() ) != -1 )
      streamValue += read;
    std::stringstream stringStream( streamValue );
    try
    {
      m_pUnmanaged = new FIX::SessionSettings( stringStream );
    }
    catch ( std::exception & e ) { throw new ConfigError( e.what() ); }

    QF_STACK_CATCH
  }

  SessionSettings( String* file )
  { QF_STACK_TRY

    try
    {
      m_pUnmanaged = new FIX::SessionSettings( convertString( file ) );
    }
    catch ( std::exception & e ) { throw new ConfigError( e.what() ); }

    QF_STACK_CATCH
  }

  ~SessionSettings()
  {
    delete m_pUnmanaged;
  }

  Dictionary* get( SessionID* sessionID )
  { QF_STACK_TRY

    return new Dictionary( unmanaged().get(sessionID->unmanaged()) );

    QF_STACK_CATCH
  }

  void set( SessionID* sessionID, Dictionary* settings )
  { QF_STACK_TRY

    try
    {
      unmanaged().set( sessionID->unmanaged(), settings->unmanaged() );
    }
    catch( FIX::ConfigError& e )
    {
      throw new ConfigError( e.what() );
    }

    QF_STACK_CATCH
  }

  Dictionary* get()
  { QF_STACK_TRY
    return new Dictionary( unmanaged().get() );
    QF_STACK_CATCH
  }

  void set( Dictionary* defaults )
  { QF_STACK_TRY
    unmanaged().set( defaults->unmanaged() );
    QF_STACK_CATCH
  }

  int size()
  { QF_STACK_TRY
    return unmanaged().size();
    QF_STACK_CATCH
  }

  FIX::SessionSettings& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::SessionSettings* m_pUnmanaged;
};
}
