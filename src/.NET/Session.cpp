/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#include "stdafx.h"

#include "Session.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
bool Session::sendToTarget( Message* message )
throw( SessionNotFound* )
{ QF_STACK_TRY

  try
  {
    return FIX::Session::sendToTarget( message->unmanaged() );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }; 

  QF_STACK_CATCH
}

bool Session::sendToTarget( Message* message, SessionID* sessionID )
throw( SessionNotFound* )
{ QF_STACK_TRY

  try
  {
    return FIX::Session::sendToTarget( message->unmanaged(),
                                       sessionID->unmanaged() );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }

  QF_STACK_CATCH
}

bool Session::sendToTarget
( Message* message, String* senderCompID, String* targetCompID )
throw( SessionNotFound* )
{ QF_STACK_TRY

  try
  {
    return FIX::Session::sendToTarget
           ( message->unmanaged(),
             FIX::SenderCompID( convertString( senderCompID ) ),
             FIX::TargetCompID( convertString( targetCompID ) ) );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }

  QF_STACK_CATCH
}

Session* Session::lookupSession( SessionID* sessionID )
{ QF_STACK_TRY

  FIX::Session* pSession = FIX::Session::lookupSession(sessionID->unmanaged());
  if( !pSession ) return 0;
  return new Session(pSession);

  QF_STACK_CATCH
}

void Session::logon()
{ QF_STACK_TRY
  unmanaged().logon();
  QF_STACK_CATCH
}

void Session::logout()
{ QF_STACK_TRY
  unmanaged().logout();
  QF_STACK_CATCH
}

bool Session::isEnabled()
{ QF_STACK_TRY
  return unmanaged().isEnabled();
  QF_STACK_CATCH
}

bool Session::sentLogon()
{ QF_STACK_TRY
  return unmanaged().sentLogon();
  QF_STACK_CATCH
}

bool Session::sentLogout()
{ QF_STACK_TRY
  return unmanaged().sentLogout();
  QF_STACK_CATCH
}

bool Session::receivedLogon()
{ QF_STACK_TRY
  return unmanaged().receivedLogon();
  QF_STACK_CATCH
}

bool Session::isLoggedOn()
{ QF_STACK_TRY
  return unmanaged().isLoggedOn();
  QF_STACK_CATCH
}

void Session::reset() throw( IOException* )
{ QF_STACK_TRY

  try
  {
    unmanaged().reset();
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }

  QF_STACK_CATCH
}

void Session::setNextSenderMsgSeqNum( int num ) throw( IOException* )
{ QF_STACK_TRY

  try
  {
    unmanaged().setNextSenderMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }

  QF_STACK_CATCH
}

void Session::setNextTargetMsgSeqNum( int num ) throw( IOException* )
{ QF_STACK_TRY

  try
  {
    unmanaged().setNextTargetMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }

  QF_STACK_CATCH
}

int Session::getExpectedSenderNum()
{ QF_STACK_TRY
  return unmanaged().getExpectedSenderNum();
  QF_STACK_CATCH
}

int Session::getExpectedTargetNum()
{ QF_STACK_TRY
  return unmanaged().getExpectedTargetNum();
  QF_STACK_CATCH
}

}
