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

using System;
using System.Threading;

namespace executor_csharp
{
public class Application: Fix.MessageCracker, Fix.Application
{
  public void onCreate( Fix.SessionID sessionID ) {}
  public void onLogon( Fix.SessionID sessionID ) {}
  public void onLogout( Fix.SessionID sessionID ) {}
  public void toAdmin( Fix.Message message, Fix.SessionID sessionID ) {}
  public void toApp( Fix.Message message, Fix.SessionID sessionID ) {}
  public void fromAdmin( Fix.Message message, Fix.SessionID sessionID ) {}
  public void fromApp( Fix.Message message, Fix.SessionID sessionID )
  { crack( message, sessionID ); }

  public override void onMessage( Fix40.NewOrderSingle order, Fix.SessionID sessionID )
  {
    Fix.Symbol symbol = new Fix.Symbol();
    Fix.Side side = new Fix.Side();
    Fix.OrdType ordType = new Fix.OrdType();
    Fix.OrderQty orderQty = new Fix.OrderQty();
    Fix.Price price = new Fix.Price();
    Fix.ClOrdID clOrdID = new Fix.ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != Fix.OrdType.LIMIT )
      throw new Fix.IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    Fix40.ExecutionReport executionReport = new Fix40.ExecutionReport
        ( genOrderID(),
          genExecID(),
          new Fix.ExecTransType( Fix.ExecTransType.NEW ),
          new Fix.OrdStatus ( Fix.OrdStatus.FILLED ),
          symbol,
          side,
          orderQty,
          new Fix.LastShares ( orderQty.getValue() ),
          new Fix.LastPx ( price.getValue() ),
          new Fix.CumQty ( orderQty.getValue() ),
          new Fix.AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );

    try
    {
      Fix.Session.sendToTarget( executionReport, sessionID );
    }
    catch ( Fix.SessionNotFound ) {}
  }

  public override void onMessage( Fix41.NewOrderSingle order, Fix.SessionID sessionID )
  {
    Fix.Symbol symbol = new Fix.Symbol();
    Fix.Side side = new Fix.Side();
    Fix.OrdType ordType = new Fix.OrdType();
    Fix.OrderQty orderQty = new Fix.OrderQty();
    Fix.Price price = new Fix.Price();
    Fix.ClOrdID clOrdID = new Fix.ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != Fix.OrdType.LIMIT )
      throw new Fix.IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    Fix41.ExecutionReport executionReport = new Fix41.ExecutionReport
        ( genOrderID(),
          genExecID(),
          new Fix.ExecTransType( Fix.ExecTransType.NEW ),
          new Fix.ExecType( Fix.ExecType.NEW ),
          new Fix.OrdStatus ( Fix.OrdStatus.NEW ),
          symbol,
          side,
          orderQty,
          new Fix.LastShares ( orderQty.getValue() ),
          new Fix.LastPx ( price.getValue() ),
          new Fix.LeavesQty( 0 ),
          new Fix.CumQty ( orderQty.getValue() ),
          new Fix.AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );

    try
    {
      Fix.Session.sendToTarget( executionReport, sessionID );
    }
    catch ( Fix.SessionNotFound ) {}
  }

  public override void onMessage( Fix42.NewOrderSingle order, Fix.SessionID sessionID )
  {
    Fix.Symbol symbol = new Fix.Symbol();
    Fix.Side side = new Fix.Side();
    Fix.OrdType ordType = new Fix.OrdType();
    Fix.OrderQty orderQty = new Fix.OrderQty();
    Fix.Price price = new Fix.Price();
    Fix.ClOrdID clOrdID = new Fix.ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != Fix.OrdType.LIMIT )
      throw new Fix.IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    Fix42.ExecutionReport executionReport = new Fix42.ExecutionReport
                                            ( genOrderID(),
                                              genExecID(),
                                              new Fix.ExecTransType( Fix.ExecTransType.NEW ),
                                              new Fix.ExecType ( Fix.ExecType.FILL ),
                                              new Fix.OrdStatus ( Fix.OrdStatus.FILLED ),
                                              symbol,
                                              side,
                                              new Fix.LeavesQty ( 0 ),
                                              new Fix.CumQty ( orderQty.getValue() ),
                                              new Fix.AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );
    executionReport.set( orderQty );
    executionReport.set( new Fix.LastShares( orderQty.getValue() ) );
    executionReport.set( new Fix.LastPx( price.getValue() ) );

    try
    {
      Fix.Session.sendToTarget( executionReport, sessionID );
    }
    catch ( Fix.SessionNotFound ) {}
  }

  public override void onMessage( Fix43.NewOrderSingle order, Fix.SessionID sessionID )
  {
    Fix.Symbol symbol = new Fix.Symbol();
    Fix.Side side = new Fix.Side();
    Fix.OrdType ordType = new Fix.OrdType();
    Fix.OrderQty orderQty = new Fix.OrderQty();
    Fix.Price price = new Fix.Price();
    Fix.ClOrdID clOrdID = new Fix.ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != Fix.OrdType.LIMIT )
      throw new Fix.IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    Fix43.ExecutionReport executionReport = new Fix43.ExecutionReport
                                            ( genOrderID(),
                                              genExecID(),
                                              new Fix.ExecType ( Fix.ExecType.FILL ),
                                              new Fix.OrdStatus ( Fix.OrdStatus.FILLED ),
                                              side,
                                              new Fix.LeavesQty ( 0 ),
                                              new Fix.CumQty ( orderQty.getValue() ),
                                              new Fix.AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );
    executionReport.set( symbol );
    executionReport.set( orderQty );
    executionReport.set( new Fix.LastQty( orderQty.getValue() ) );
    executionReport.set( new Fix.LastPx( price.getValue() ) );

    try
    {
      Fix.Session.sendToTarget( executionReport, sessionID );
    }
    catch ( Fix.SessionNotFound ) {}
  }

  public void onRun() { while ( true ) Thread.Sleep( 1000 ); }

  private Fix.OrderID genOrderID()
  {
    return new Fix.OrderID( ( ++m_orderID ).ToString() );
  }

  private Fix.ExecID genExecID()
  {
    return new Fix.ExecID( ( ++m_execID ).ToString() );
  }

  private Int32 m_orderID;
  private Int32 m_execID;
}
}
