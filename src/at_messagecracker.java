/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2003 ThoughtWorks, Inc.  All rights
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
import java.util.HashSet;
import quickfix.*;
import quickfix.field.*;

class at_messagecracker extends quickfix.MessageCracker {

private HashSet orderIDs = new HashSet();

public void reset() {
  orderIDs.clear();
}

public void process( Message message, SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  quickfix.Message echo = (quickfix.Message)message.clone();
  PossResend possResend = new PossResend( false );
  if ( message.getHeader().isSetField( possResend ) )
    message.getHeader().getField( possResend );

  ClOrdID clOrdID = new ClOrdID();
  message.getField( clOrdID );

  Pair pair = new Pair( clOrdID, sessionID );

  if( possResend.getValue() == true ) {
    if( orderIDs.contains(pair) )
      return;
  }
  orderIDs.add( pair );
  try {
    Session.sendToTarget( echo, sessionID );
  } catch( SessionNotFound snf ) {
  }
}

public void onMessage( quickfix.fix44.NewOrderSingle message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  process( message, sessionID );
}

public void onMessage( quickfix.fix44.SecurityDefinition message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  quickfix.fix44.SecurityDefinition echo = message;
  try {
    Session.sendToTarget( echo, sessionID );
  } catch( SessionNotFound snf ) {
  }
}


public void onMessage( quickfix.fix43.NewOrderSingle message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  process( message, sessionID );
}

public void onMessage( quickfix.fix43.SecurityDefinition message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  quickfix.fix43.SecurityDefinition echo = message;
  try {
    Session.sendToTarget( echo, sessionID );
  } catch( SessionNotFound snf ) {
  }
}

public void onMessage( quickfix.fix42.NewOrderSingle message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  process( message, sessionID );
}

public void onMessage( quickfix.fix42.SecurityDefinition message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  quickfix.fix42.SecurityDefinition echo = message;
  try {
    Session.sendToTarget( echo, sessionID );
  } catch( SessionNotFound snf ) {
  }
}

public void onMessage( quickfix.fix41.NewOrderSingle message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  process( message, sessionID );
}

public void onMessage( quickfix.fix40.NewOrderSingle message,
		       SessionID sessionID )
throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue {
  process( message, sessionID );
}

private class Pair {

private ClOrdID clOrdID;
private SessionID sessionID;
private int hashCode = 0;

public Pair( ClOrdID clOrdID, SessionID sessionID ) {
  this.clOrdID = clOrdID;
  this.sessionID = sessionID;
  hashCode =
    ("C:" + clOrdID.toString() + "S:" + sessionID.toString()).hashCode();
}

public boolean equals( Object object ) {
  if( object == null )
    return false;
  Pair pair = (Pair)object;

  return
    clOrdID.equals( pair.clOrdID )
    && sessionID.equals( pair.sessionID );
}

public int hashCode() {
  return hashCode;
}
}

}
