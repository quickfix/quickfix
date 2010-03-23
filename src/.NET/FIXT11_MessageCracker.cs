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

using System;

namespace QuickFixT11
{
  public class MessageCracker : QuickFix50.MessageCracker
  {
  
    public new void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    
    { throw new QuickFix.UnsupportedMessageType(); }
 public virtual void onMessage( Heartbeat message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( TestRequest message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( ResendRequest message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Reject message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( SequenceReset message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Logout message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Logon message, QuickFix.SessionID session ) 
    {}
 
    public new void crack( QuickFix.Message message, QuickFix.SessionID sessionID )
    
  {
    if( message is Heartbeat )
      onMessage( (Heartbeat)(message), sessionID );
    else
    if( message is TestRequest )
      onMessage( (TestRequest)(message), sessionID );
    else
    if( message is ResendRequest )
      onMessage( (ResendRequest)(message), sessionID );
    else
    if( message is Reject )
      onMessage( (Reject)(message), sessionID );
    else
    if( message is SequenceReset )
      onMessage( (SequenceReset)(message), sessionID );
    else
    if( message is Logout )
      onMessage( (Logout)(message), sessionID );
    else
    if( message is Logon )
      onMessage( (Logon)(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

