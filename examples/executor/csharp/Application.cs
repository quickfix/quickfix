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
using QuickFix;

namespace executor_csharp
{
public class Application: MessageCracker, QuickFix.Application
{
  public void onCreate( SessionID sessionID ) {}
  public void onLogon( SessionID sessionID ) {}
  public void onLogout( SessionID sessionID ) {}
  public void toAdmin( Message message, SessionID sessionID ) {}
  public void toApp( Message message, SessionID sessionID ) {}
  public void fromAdmin( Message message, SessionID sessionID ) {}
  public void fromApp( Message message, SessionID sessionID )
  { crack( message, sessionID ); }

  public override void onMessage( QuickFix40.NewOrderSingle order, SessionID sessionID )
  {
    Symbol symbol = new Symbol();
    Side side = new Side();
    OrdType ordType = new OrdType();
    OrderQty orderQty = new OrderQty();
    Price price = new Price();
    ClOrdID clOrdID = new ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != OrdType.LIMIT )
      throw new IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    QuickFix40.ExecutionReport executionReport = new QuickFix40.ExecutionReport
        ( genOrderID(),
          genExecID(),
          new ExecTransType( ExecTransType.NEW ),
          new OrdStatus ( OrdStatus.FILLED ),
          symbol,
          side,
          orderQty,
          new LastShares ( orderQty.getValue() ),
          new LastPx ( price.getValue() ),
          new CumQty ( orderQty.getValue() ),
          new AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }

  public override void onMessage( QuickFix41.NewOrderSingle order, SessionID sessionID )
  {
    Symbol symbol = new Symbol();
    Side side = new Side();
    OrdType ordType = new OrdType();
    OrderQty orderQty = new OrderQty();
    Price price = new Price();
    ClOrdID clOrdID = new ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != OrdType.LIMIT )
      throw new IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    QuickFix41.ExecutionReport executionReport = new QuickFix41.ExecutionReport
        ( genOrderID(),
          genExecID(),
          new ExecTransType( ExecTransType.NEW ),
          new ExecType( ExecType.NEW ),
          new OrdStatus ( OrdStatus.NEW ),
          symbol,
          side,
          orderQty,
          new LastShares ( orderQty.getValue() ),
          new LastPx ( price.getValue() ),
          new LeavesQty( 0 ),
          new CumQty ( orderQty.getValue() ),
          new AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }

  public override void onMessage( QuickFix42.NewOrderSingle order, SessionID sessionID )
  {
    Symbol symbol = new Symbol();
    Side side = new Side();
    OrdType ordType = new OrdType();
    OrderQty orderQty = new OrderQty();
    Price price = new Price();
    ClOrdID clOrdID = new ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != OrdType.LIMIT )
      throw new IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    QuickFix42.ExecutionReport executionReport = new QuickFix42.ExecutionReport
                                            ( genOrderID(),
                                              genExecID(),
                                              new ExecTransType( ExecTransType.NEW ),
                                              new ExecType ( ExecType.FILL ),
                                              new OrdStatus ( OrdStatus.FILLED ),
                                              symbol,
                                              side,
                                              new LeavesQty ( 0 ),
                                              new CumQty ( orderQty.getValue() ),
                                              new AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );
    executionReport.set( orderQty );
    executionReport.set( new LastShares( orderQty.getValue() ) );
    executionReport.set( new LastPx( price.getValue() ) );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }

  public override void onMessage( QuickFix43.NewOrderSingle order, SessionID sessionID )
  {
    Symbol symbol = new Symbol();
    Side side = new Side();
    OrdType ordType = new OrdType();
    OrderQty orderQty = new OrderQty();
    Price price = new Price();
    ClOrdID clOrdID = new ClOrdID();

    order.get( ordType );

    if ( ordType.getValue() != OrdType.LIMIT )
      throw new IncorrectTagValue( ordType.getField() );

    order.get( symbol );
    order.get( side );
    order.get( orderQty );
    order.get( price );
    order.get( clOrdID );

    QuickFix43.ExecutionReport executionReport = new QuickFix43.ExecutionReport
                                            ( genOrderID(),
                                              genExecID(),
                                              new ExecType ( ExecType.FILL ),
                                              new OrdStatus ( OrdStatus.FILLED ),
                                              side,
                                              new LeavesQty ( 0 ),
                                              new CumQty ( orderQty.getValue() ),
                                              new AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );
    executionReport.set( symbol );
    executionReport.set( orderQty );
    executionReport.set( new LastQty( orderQty.getValue() ) );
    executionReport.set( new LastPx( price.getValue() ) );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }

  public void onRun() { while ( true ) Thread.Sleep( 1000 ); }

  private OrderID genOrderID()
  {
    return new OrderID( ( ++m_orderID ).ToString() );
  }

  private ExecID genExecID()
  {
    return new ExecID( ( ++m_execID ).ToString() );
  }

  private Int32 m_orderID;
  private Int32 m_execID;
}
}
