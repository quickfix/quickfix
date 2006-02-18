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

#include "quickfix_net.h"

#include "Log.h"
#include "LogFactory.h"
#include "SessionSettings.h"
#include "quickfix/FileLog.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class FileLog : public Log
{
public:
  FileLog( String* path, SessionID* sessionID )
  { QF_STACK_TRY

    char* upath = createUnmanagedString( path );
    m_pUnmanaged = new FIX::FileLog
                   ( upath, sessionID->unmanaged() );
    destroyUnmanagedString( upath );

    QF_STACK_CATCH
  }
  ~FileLog() { delete m_pUnmanaged; }

  void clear()
  { QF_STACK_TRY
    m_pUnmanaged->clear();
    QF_STACK_CATCH
  }

  void onIncoming( String* s )
  { QF_STACK_TRY

    char* us = createUnmanagedString( s );
    m_pUnmanaged->onIncoming( us );
    destroyUnmanagedString( us );

    QF_STACK_CATCH
  }

  void onOutgoing( String* s )
  { QF_STACK_TRY

    char* us = createUnmanagedString( s );
    m_pUnmanaged->onOutgoing( us );
    destroyUnmanagedString( us );

    QF_STACK_CATCH
  }

  void onEvent( String* s )
  { QF_STACK_TRY

    char* us = createUnmanagedString( s );
    m_pUnmanaged->onEvent( us );
    destroyUnmanagedString( us );

    QF_STACK_CATCH
  }

private:
  FIX::FileLog* m_pUnmanaged;
};

public __gc class FileLogFactory : public LogFactory
{
public:
  FileLogFactory( SessionSettings* settings )
  : m_path( 0 ), m_settings( settings ) {}

  FileLogFactory( String* path )
  : m_path( path ), m_settings( 0 ) {}

  Log* create( SessionID* sessionID )
  { QF_STACK_TRY

    if ( m_path ) return new FileLog( m_path, sessionID );

    FIX::SessionSettings& s = m_settings->unmanaged();
    FIX::Dictionary settings = s.get( sessionID->unmanaged() );
    try
    {
      m_path = settings.getString( FIX::FILE_LOG_PATH ).c_str();
      return new FileLog( m_path, sessionID );
    }
    catch ( FIX::ConfigError & e ) { throw new ConfigError( e.what() ); }

    QF_STACK_CATCH
  }

private:
  String* m_path;
  SessionSettings* m_settings;
};
}
