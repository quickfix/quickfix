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

    if( order.isSetAccount() )
      executionReport.set( order.getAccount() );

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
          new ExecType( ExecType.FILL ),
          new OrdStatus ( OrdStatus.FILLED ),
          symbol,
          side,
          orderQty,
          new LastShares ( orderQty.getValue() ),
          new LastPx ( price.getValue() ),
          new LeavesQty( 0 ),
          new CumQty ( orderQty.getValue() ),
          new AvgPx ( price.getValue() ) );

    executionReport.set( clOrdID );

    if( order.isSetAccount() )
      executionReport.set( order.getAccount() );

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
                                              new ExecType( ExecType.FILL ),
                                              new OrdStatus( OrdStatus.FILLED ),
                                              symbol,
                                              side,
                                              new LeavesQty( 0 ),
                                              new CumQty( orderQty.getValue() ),
                                              new AvgPx( price.getValue() ) );

    executionReport.set( clOrdID );
    executionReport.set( orderQty );
    executionReport.set( new LastShares( orderQty.getValue() ) );
    executionReport.set( new LastPx( price.getValue() ) );

    if( order.isSetAccount() )
      executionReport.set( order.getAccount() );

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

    if( order.isSetAccount() )
      executionReport.set( order.getAccount() );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }


  public override void onMessage( QuickFix44.NewOrderSingle order, SessionID sessionID )
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

    QuickFix44.ExecutionReport executionReport = new QuickFix44.ExecutionReport
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

    if( order.isSetAccount() )
      executionReport.setField( order.getAccount() );

    try
    {
      Session.sendToTarget( executionReport, sessionID );
    }
    catch ( SessionNotFound ) {}
  }

  public override void onMessage(QuickFix50.NewOrderSingle order, SessionID sessionID)
  {
    Symbol symbol = new Symbol();
    Side side = new Side();
    OrdType ordType = new OrdType();
    OrderQty orderQty = new OrderQty();
    Price price = new Price();
    ClOrdID clOrdID = new ClOrdID();

    order.get(ordType);

    if (ordType.getValue() != OrdType.LIMIT)
      throw new IncorrectTagValue(ordType.getField());

    order.get(symbol);
    order.get(side);
    order.get(orderQty);
    order.get(price);
    order.get(clOrdID);

    QuickFix50.ExecutionReport executionReport = new QuickFix50.ExecutionReport
     (genOrderID(),
      genExecID(),
      new ExecType(ExecType.FILL),
      new OrdStatus(OrdStatus.FILLED),
      side,
      new LeavesQty(0),
      new CumQty(orderQty.getValue()));

    executionReport.set(clOrdID);
    executionReport.set(symbol);
    executionReport.set(orderQty);
    executionReport.set(new LastQty(orderQty.getValue()));
    executionReport.set(new LastPx(price.getValue()));
    executionReport.set(new AvgPx(price.getValue()));

    if (order.isSetAccount())
      executionReport.setField(order.getAccount());

    try
    {
      Session.sendToTarget(executionReport, sessionID);
    }
    catch (SessionNotFound) { }
  }

  private OrderID genOrderID()
  {
    return new OrderID( ( ++m_orderID ).ToString() );
  }

  private ExecID genExecID()
  {
    return new ExecID( ( ++m_execID ).ToString() );
  }

  private int m_orderID;
  private int m_execID;
}
}
