/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

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
