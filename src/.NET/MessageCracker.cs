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

namespace QuickFix
{
  public class MessageCracker : QuickFix44.MessageCracker
  {
    public new void crack( QuickFix.Message message, QuickFix.SessionID sessionID )
    {
      BeginString beginString = new BeginString();
      message.getHeader().getField( beginString );
      String value = beginString.getValue();
      if( value.Equals("FIX.4.0") )
        ((QuickFix40.MessageCracker)this).crack( message, sessionID );
      else if( value.Equals("FIX.4.1") )
        ((QuickFix41.MessageCracker)this).crack( message, sessionID );
      else if( value.Equals("FIX.4.2") )
        ((QuickFix42.MessageCracker)this).crack( message, sessionID );
      else if( value.Equals("FIX.4.3") )
        ((QuickFix43.MessageCracker)this).crack( message, sessionID );
      else if( value.Equals("FIX.4.4") )
        ((QuickFix44.MessageCracker)this).crack( message, sessionID );
      else
        onMessage( message, sessionID );
    }
  };
}
