/****************************************************************************
** Copyright (c) 2001-2014
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
using QuickFix;

public class at_application : QuickFix.Application
{
  private at_messagecracker cracker = new at_messagecracker();

  public void onCreate( SessionID sessionID ) 
  {
    Session session = Session.lookupSession( sessionID );
    try 
    {
      if ( session != null ) session.reset();
    } 
    catch( Exception ) {}
  }

  public void onLogon( SessionID sessionID ) {}

  public void onLogout( SessionID sessionID ) 
  {
    cracker.reset();
  }

  public void toAdmin( Message message, SessionID sessionID ) {}
  public void toApp( Message message, SessionID sessionID ) {}
  public void fromAdmin( Message message, SessionID sessionID ) {}
  public void fromApp( Message message, SessionID sessionID )
  {
    cracker.crack( message, sessionID );
  }
}
