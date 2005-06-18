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
#include "Exceptions.h"

namespace QuickFix
{
public __gc class SessionSettings
{
public:
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

  FIX::SessionSettings& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::SessionSettings* m_pUnmanaged;
};
}
