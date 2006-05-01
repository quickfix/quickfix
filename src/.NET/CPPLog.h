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
public __gc class CPPLog : public Log, public IDisposable
{
public:
  CPPLog() {}
  CPPLog( FIX::Log* pUnmanaged )
  { QF_STACK_TRY
    m_pUnmanaged = pUnmanaged;
    QF_STACK_CATCH
  }

  void Dispose()
  {
    if( !m_pUnmanaged ) return;

    delete m_pUnmanaged;
    m_pUnmanaged = 0;
  }

  ~CPPLog()
  { Dispose(); }

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

protected:
  FIX::Log* m_pUnmanaged;
};
}
