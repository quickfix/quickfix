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

using System.Collections;
using QuickFix;
//using QuickFix.Field;

class at_messagecracker : QuickFix.MessageCracker
{
  private Hashtable orderIDs = new Hashtable();

  public void reset()
  {
    orderIDs.Clear();
  }

  public void process(Message message, SessionID sessionID)
  {
    Message echo = (Message)message;
    PossResend possResend = new PossResend(false);
    if (message.getHeader().isSetField(possResend))
      message.getHeader().getField(possResend);

    ClOrdID clOrdID = new ClOrdID();
    message.getField(clOrdID);

    Pair pair = new Pair(clOrdID, sessionID);

    if (possResend.getValue() == true)
    {
      if (orderIDs.Contains(pair))
        return;
    }
    if(!orderIDs.Contains(pair))
      orderIDs.Add(pair, pair);
    try
    {
      Session.sendToTarget(echo, sessionID);
    }
    catch (SessionNotFound) { }
  }

  public override void onMessage(QuickFix50.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  public override void onMessage(QuickFix50.SecurityDefinition message, SessionID sessionID)
  {
    QuickFix50.SecurityDefinition echo = message;
    try
    {
      Session.sendToTarget(echo, sessionID);
    }
    catch (SessionNotFound) { }
  }

  public override void onMessage(QuickFix44.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  public override void onMessage(QuickFix44.SecurityDefinition message, SessionID sessionID)
  {
    QuickFix44.SecurityDefinition echo = message;
    try
    {
      Session.sendToTarget(echo, sessionID);
    }
    catch (SessionNotFound) { }
  }

  public override void onMessage(QuickFix43.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  public override void onMessage(QuickFix43.SecurityDefinition message, SessionID sessionID)
  {
    QuickFix43.SecurityDefinition echo = message;
    try
    {
      Session.sendToTarget(echo, sessionID);
    }
    catch (SessionNotFound) { }
  }

  public override void onMessage(QuickFix42.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  public override void onMessage(QuickFix42.SecurityDefinition message, SessionID sessionID)
  {
    QuickFix42.SecurityDefinition echo = message;
    try
    {
      Session.sendToTarget(echo, sessionID);
    }
    catch (SessionNotFound) { }
  }

  public override void onMessage(QuickFix41.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  public override void onMessage(QuickFix40.NewOrderSingle message, SessionID sessionID)
  {
    process(message, sessionID);
  }

  private class Pair
  {
    private ClOrdID clOrdID;
    private SessionID sessionID;
    private int hashCode = 0;

    public Pair(ClOrdID clOrdID, SessionID sessionID)
    {
      this.clOrdID = clOrdID;
      this.sessionID = sessionID;
      hashCode =
        ("C:" + clOrdID.ToString() + "S:" + sessionID.ToString()).GetHashCode();
    }

    public override bool Equals(System.Object obj)
    {
      if (obj == null)
        return false;
      Pair pair = (Pair)obj;

      return
        clOrdID.Equals(pair.clOrdID)
        && sessionID.Equals(pair.sessionID);
    }

    public override int GetHashCode()
    {
      return hashCode;
    }
  }
}