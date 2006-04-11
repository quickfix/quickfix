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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Log.h"

namespace FIX
{
Mutex ScreenLog::s_mutex;

Log* ScreenLogFactory::create( const SessionID& sessionID )
{ QF_STACK_PUSH(ScreenLogFactory::create)
  if( m_useSettings )
  {
    bool incoming = false;
    bool outgoing = false;
    bool event = false;

    Dictionary settings = m_settings.get( sessionID );
    if( settings.has(SCREEN_LOG_SHOW_INCOMING) )
      incoming = settings.getBool(SCREEN_LOG_SHOW_INCOMING);
    if( settings.has(SCREEN_LOG_SHOW_OUTGOING) )
      outgoing = settings.getBool(SCREEN_LOG_SHOW_OUTGOING);
    if( settings.has(SCREEN_LOG_SHOW_EVENTS) )
      event = settings.getBool(SCREEN_LOG_SHOW_EVENTS);

    return new ScreenLog( sessionID, incoming, outgoing, event );
  }
  else
  {
    return new ScreenLog( sessionID, m_incoming, m_outgoing, m_event );
  }
  QF_STACK_POP
}

void ScreenLogFactory::destroy( Log* pLog )
{ QF_STACK_PUSH(ScreenLogFactory::destroy)
  delete pLog;
  QF_STACK_POP
}
} //namespace FIX
