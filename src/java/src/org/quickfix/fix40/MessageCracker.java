/* -*- C++ -*- */
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

package org.quickfix.fix40;

import org.quickfix.*;
import org.quickfix.field.*;

public class MessageCracker 
{
public void onMessage( org.quickfix.Message message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
  { throw new UnsupportedMessageType(); }
 public void onMessage( Advertisement message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( IndicationofInterest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( News message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Email message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Quote message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( NewOrderSingle message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ExecutionReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( DontKnowTrade message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderCancelReplaceRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderCancelRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderCancelReject message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Allocation message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AllocationACK message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( NewOrderList message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListStatus message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListExecute message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListCancelRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
 
  public void crack( org.quickfix.Message message, SessionID sessionID )
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  { crack40((Message)message, sessionID); }

  public void crack40( Message message, SessionID sessionID ) 
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  {
    MsgType msgType = new MsgType();
    message.getHeader().getField(msgType);
    String msgTypeValue = msgType.getValue();

    if( msgTypeValue.equals("0") )
      onMessage( (Heartbeat)message, sessionID );
    else
    if( msgTypeValue.equals("A") )
      onMessage( (Logon)message, sessionID );
    else
    if( msgTypeValue.equals("1") )
      onMessage( (TestRequest)message, sessionID );
    else
    if( msgTypeValue.equals("2") )
      onMessage( (ResendRequest)message, sessionID );
    else
    if( msgTypeValue.equals("3") )
      onMessage( (Reject)message, sessionID );
    else
    if( msgTypeValue.equals("4") )
      onMessage( (SequenceReset)message, sessionID );
    else
    if( msgTypeValue.equals("5") )
      onMessage( (Logout)message, sessionID );
    else
    if( msgTypeValue.equals("7") )
      onMessage( (Advertisement)message, sessionID );
    else
    if( msgTypeValue.equals("6") )
      onMessage( (IndicationofInterest)message, sessionID );
    else
    if( msgTypeValue.equals("B") )
      onMessage( (News)message, sessionID );
    else
    if( msgTypeValue.equals("C") )
      onMessage( (Email)message, sessionID );
    else
    if( msgTypeValue.equals("R") )
      onMessage( (QuoteRequest)message, sessionID );
    else
    if( msgTypeValue.equals("S") )
      onMessage( (Quote)message, sessionID );
    else
    if( msgTypeValue.equals("D") )
      onMessage( (NewOrderSingle)message, sessionID );
    else
    if( msgTypeValue.equals("8") )
      onMessage( (ExecutionReport)message, sessionID );
    else
    if( msgTypeValue.equals("Q") )
      onMessage( (DontKnowTrade)message, sessionID );
    else
    if( msgTypeValue.equals("G") )
      onMessage( (OrderCancelReplaceRequest)message, sessionID );
    else
    if( msgTypeValue.equals("F") )
      onMessage( (OrderCancelRequest)message, sessionID );
    else
    if( msgTypeValue.equals("9") )
      onMessage( (OrderCancelReject)message, sessionID );
    else
    if( msgTypeValue.equals("H") )
      onMessage( (OrderStatusRequest)message, sessionID );
    else
    if( msgTypeValue.equals("J") )
      onMessage( (Allocation)message, sessionID );
    else
    if( msgTypeValue.equals("P") )
      onMessage( (AllocationACK)message, sessionID );
    else
    if( msgTypeValue.equals("E") )
      onMessage( (NewOrderList)message, sessionID );
    else
    if( msgTypeValue.equals("N") )
      onMessage( (ListStatus)message, sessionID );
    else
    if( msgTypeValue.equals("L") )
      onMessage( (ListExecute)message, sessionID );
    else
    if( msgTypeValue.equals("K") )
      onMessage( (ListCancelRequest)message, sessionID );
    else
    if( msgTypeValue.equals("M") )
      onMessage( (ListStatusRequest)message, sessionID );
    else onMessage( message, sessionID );
  }

  };


