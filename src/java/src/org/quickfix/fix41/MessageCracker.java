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

package org.quickfix.fix41;

import org.quickfix.*;
import org.quickfix.field.*;

public class MessageCracker extends org.quickfix.fix40.MessageCracker
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
  public void onMessage( SettlementInstructions message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
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
  { crack41((Message)message, sessionID); }

  public void crack41( Message message, SessionID sessionID ) 
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  {
    MsgType msgType = new MsgType();
    message.getHeader().getField(msgType);
    String msgTypeString = msgType.getValue();
    if(msgTypeString.length() > 1)
    {
      onMessage( message, sessionID );
      return;
    }

    switch(msgTypeString.charAt(0))
    {
      case '0':
        onMessage( (Heartbeat)message, sessionID );
	      break;
      case 'A':
        onMessage( (Logon)message, sessionID );
	      break;
      case '1':
        onMessage( (TestRequest)message, sessionID );
	      break;
      case '2':
        onMessage( (ResendRequest)message, sessionID );
	      break;
      case '3':
        onMessage( (Reject)message, sessionID );
	      break;
      case '4':
        onMessage( (SequenceReset)message, sessionID );
	      break;
      case '5':
        onMessage( (Logout)message, sessionID );
	      break;
      case '7':
        onMessage( (Advertisement)message, sessionID );
	      break;
      case '6':
        onMessage( (IndicationofInterest)message, sessionID );
	      break;
      case 'B':
        onMessage( (News)message, sessionID );
	      break;
      case 'C':
        onMessage( (Email)message, sessionID );
	      break;
      case 'R':
        onMessage( (QuoteRequest)message, sessionID );
	      break;
      case 'S':
        onMessage( (Quote)message, sessionID );
	      break;
      case 'D':
        onMessage( (NewOrderSingle)message, sessionID );
	      break;
      case '8':
        onMessage( (ExecutionReport)message, sessionID );
	      break;
      case 'Q':
        onMessage( (DontKnowTrade)message, sessionID );
	      break;
      case 'G':
        onMessage( (OrderCancelReplaceRequest)message, sessionID );
	      break;
      case 'F':
        onMessage( (OrderCancelRequest)message, sessionID );
	      break;
      case '9':
        onMessage( (OrderCancelReject)message, sessionID );
	      break;
      case 'H':
        onMessage( (OrderStatusRequest)message, sessionID );
	      break;
      case 'J':
        onMessage( (Allocation)message, sessionID );
	      break;
      case 'P':
        onMessage( (AllocationACK)message, sessionID );
	      break;
      case 'T':
        onMessage( (SettlementInstructions)message, sessionID );
	      break;
      case 'E':
        onMessage( (NewOrderList)message, sessionID );
	      break;
      case 'N':
        onMessage( (ListStatus)message, sessionID );
	      break;
      case 'L':
        onMessage( (ListExecute)message, sessionID );
	      break;
      case 'K':
        onMessage( (ListCancelRequest)message, sessionID );
	      break;
      case 'M':
        onMessage( (ListStatusRequest)message, sessionID );
	      break;
      default:
        onMessage( message, sessionID );
    }
  }

  };


