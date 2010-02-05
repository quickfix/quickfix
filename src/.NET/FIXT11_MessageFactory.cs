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

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFixT11.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFixT11.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFixT11.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFixT11.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFixT11.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFixT11.Logout();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFixT11.Logon();
     }
   
    return new QuickFixT11.Message();
    }
  };
}
  