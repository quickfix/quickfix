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
#include "LogFactory.h"
#include "quickfix/Log.h"
#include "quickfix/SessionSettings.h"
#include "quickfix/CallStack.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class ScreenLog : public CPPLog
{
public:
  ScreenLog( bool incoming, bool outgoing, bool event )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::ScreenLog
                   ( incoming, outgoing, event );
    QF_STACK_CATCH
  }

  ScreenLog( SessionID* sessionID, bool incoming, bool outgoing, bool event )
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::ScreenLog
                   ( sessionID->unmanaged(), incoming, outgoing, event );
    QF_STACK_CATCH
  }
};

public __gc class ScreenLogFactory : public LogFactory
{
public:
  ScreenLogFactory( SessionSettings* settings )
  : m_settings( settings ) {}

  ScreenLogFactory( bool incoming, bool outgoing, bool event )
  : m_incoming( incoming ), m_outgoing( outgoing ), m_event( event ),
    m_settings( 0 ) {}

  Log* create()
  { QF_STACK_TRY

    if( m_settings )
    {
      bool incoming = true;
      bool outgoing = true;
      bool event = true;

      Dictionary* settings = m_settings->get();
      if( settings->has(FIX::SCREEN_LOG_SHOW_INCOMING) )
        incoming = settings->getBool(FIX::SCREEN_LOG_SHOW_INCOMING);
      if( settings->has(FIX::SCREEN_LOG_SHOW_OUTGOING) )
        outgoing = settings->getBool(FIX::SCREEN_LOG_SHOW_OUTGOING);
      if( settings->has(FIX::SCREEN_LOG_SHOW_EVENTS) )
        event = settings->getBool(FIX::SCREEN_LOG_SHOW_EVENTS);

      return new ScreenLog( incoming, outgoing, event );
    }
    else
    {
      return new ScreenLog( m_incoming, m_outgoing, m_event );
    }

    QF_STACK_CATCH
  }

  Log* create( SessionID* sessionID )
  { QF_STACK_TRY
    
    if( m_settings )
    {
      bool incoming = true;
      bool outgoing = true;
      bool event = true;

      Dictionary* settings = m_settings->get( sessionID );
      if( settings->has(FIX::SCREEN_LOG_SHOW_INCOMING) )
        incoming = settings->getBool(FIX::SCREEN_LOG_SHOW_INCOMING);
      if( settings->has(FIX::SCREEN_LOG_SHOW_OUTGOING) )
        outgoing = settings->getBool(FIX::SCREEN_LOG_SHOW_OUTGOING);
      if( settings->has(FIX::SCREEN_LOG_SHOW_EVENTS) )
        event = settings->getBool(FIX::SCREEN_LOG_SHOW_EVENTS);

      return new ScreenLog( sessionID, incoming, outgoing, event );
    }
    else
    {
      return new ScreenLog( sessionID, m_incoming, m_outgoing, m_event );
    }

    QF_STACK_CATCH
  }

private:
  SessionSettings* m_settings;
  bool m_incoming;
  bool m_outgoing;
  bool m_event;
};
}
