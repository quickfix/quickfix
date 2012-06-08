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

#include "stdafx.h"

#include "Session.h"

namespace QuickFix
{
void Session::logon()
{
  unmanaged().logon();
}

void Session::logout()
{
  unmanaged().logout();
}

void Session::logout( String* reason )
{
  unmanaged().logout( convertString(reason) );
}

bool Session::isEnabled()
{
  return unmanaged().isEnabled();
}

bool Session::sentLogon()
{
  return unmanaged().sentLogon();
}

bool Session::sentLogout()
{
  return unmanaged().sentLogout();
}

bool Session::receivedLogon()
{
  return unmanaged().receivedLogon();
}

bool Session::isLoggedOn()
{
  return unmanaged().isLoggedOn();
}

void Session::reset()
{
  try
  {
    unmanaged().reset();
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }
}

void Session::setNextSenderMsgSeqNum( int num )
{
  try
  {
    unmanaged().setNextSenderMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }
}

void Session::setNextTargetMsgSeqNum( int num )
{
  try
  {
    unmanaged().setNextTargetMsgSeqNum( num );
  }
  catch( FIX::IOException& )
  {
    throw new IOException();
  }
}

bool Session::sendToTarget( Message* message )
{
  try
  {
    Message __pin * pMessage = message;
    return FIX::Session::sendToTarget( pMessage->unmanaged() );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); };
}

bool Session::sendToTarget( Message* message, String* qualifier )
{
  try
  {
    Message __pin * pMessage = message;
    return FIX::Session::sendToTarget( pMessage->unmanaged(),
                                       convertString( qualifier ) );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); };
}

bool Session::sendToTarget( Message* message, SessionID* sessionID )
{
  try
  {
    Message __pin * pMessage = message;
    return FIX::Session::sendToTarget( pMessage->unmanaged(),
                                       sessionID->unmanaged() );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }
}

bool Session::sendToTarget
( Message* message, String* senderCompID, String* targetCompID )
{
  try
  {
    Message __pin * pMessage = message;
    return FIX::Session::sendToTarget
           ( pMessage->unmanaged(),
             FIX::SenderCompID( convertString( senderCompID ) ),
             FIX::TargetCompID( convertString( targetCompID ) ) );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }
}

bool Session::sendToTarget
( Message* message, String* senderCompID, String* targetCompID, String* qualifier )
{
  try
  {
    Message __pin * pMessage = message;
    return FIX::Session::sendToTarget
           ( pMessage->unmanaged(),
             FIX::SenderCompID( convertString( senderCompID ) ),
             FIX::TargetCompID( convertString( targetCompID ) ),
             convertString( qualifier ) );
  }
  catch ( FIX::SessionNotFound& ) { throw new SessionNotFound(); }
}

bool Session::doesSessionExist( SessionID* sessionID )
{
  return FIX::Session::doesSessionExist(sessionID->unmanaged());
}

Session* Session::lookupSession( SessionID* sessionID )
{
  FIX::Session* pSession = FIX::Session::lookupSession(sessionID->unmanaged());
  if( !pSession ) return 0;
  return new Session(pSession);
}

int Session::numSessions()
{
  return FIX::Session::numSessions();
}

bool Session::isSessionTime()
{
  return unmanaged().isSessionTime(FIX::UtcTimeStamp());
}

bool Session::isLogonTime()
{
  return unmanaged().isLogonTime(FIX::UtcTimeStamp());
}

bool Session::isInitiator()
{
  return unmanaged().isInitiator();
}

bool Session::isAcceptor()
{
  return unmanaged().isAcceptor();
}

String* Session::getSenderDefaultApplVerID()
{
  return unmanaged().getSenderDefaultApplVerID().c_str();
}

String* Session::getTargetDefaultApplVerID()
{
  return unmanaged().getTargetDefaultApplVerID().c_str();
}

int Session::getExpectedSenderNum()
{
  return unmanaged().getExpectedSenderNum();
}

int Session::getExpectedTargetNum()
{
  return unmanaged().getExpectedTargetNum();
}

}
