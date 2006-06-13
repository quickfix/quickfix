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

#include "CPPLog.h"
#include "Log.h"
#include "LogFactory.h"
#include "SessionSettings.h"
#include "quickfix/FileLog.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class FileLog : public CPPLog
{
public:
  FileLog( FIX::Log* pUnmanaged )
  {
    m_pUnmanaged = pUnmanaged;
  }
};

public __gc class FileLogFactory : public LogFactory
{
public:
  FileLogFactory( SessionSettings* settings )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::FileLogFactory( settings->unmanaged() );
    QF_STACK_CATCH
  }

  FileLogFactory( String* path )
  { QF_STACK_TRY

    char* upath = createUnmanagedString( path );
    m_pUnmanaged = new FIX::FileLogFactory( upath );
    destroyUnmanagedString( upath );

	QF_STACK_CATCH
  }

  Log* create()
  { QF_STACK_TRY
    return new FileLog(m_pUnmanaged->create());
    QF_STACK_CATCH
  }

  Log* create( SessionID* sessionID )
  { QF_STACK_TRY
    return new FileLog(m_pUnmanaged->create(sessionID->unmanaged()));
    QF_STACK_CATCH
  }

private:
  FIX::FileLogFactory* m_pUnmanaged;
};
}
