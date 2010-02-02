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

package quickfix.fixt11;

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("0".equals(msgType)) {
     return new quickfix.fixt11.Heartbeat();
   }
 
   if("1".equals(msgType)) {
     return new quickfix.fixt11.TestRequest();
   }
 
   if("2".equals(msgType)) {
     return new quickfix.fixt11.ResendRequest();
   }
 
   if("3".equals(msgType)) {
     return new quickfix.fixt11.Reject();
   }
 
   if("4".equals(msgType)) {
     return new quickfix.fixt11.SequenceReset();
   }
 
   if("5".equals(msgType)) {
     return new quickfix.fixt11.Logout();
   }
 
   if("A".equals(msgType)) {
     return new quickfix.fixt11.Logon();
   }
 
  return new quickfix.fixt11.Message();
  }
}

