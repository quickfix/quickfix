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

namespace QuickFix42
{
  public class MessageCracker : QuickFix41.MessageCracker
  {
  
    public new void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    
    { throw new QuickFix.UnsupportedMessageType(); }
 public virtual void onMessage( Heartbeat message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( TestRequest message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( ResendRequest message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Reject message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( SequenceReset message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Logout message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( IndicationofInterest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Advertisement message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ExecutionReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Logon message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( News message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Email message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderSingle message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderList message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Allocation message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListExecute message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationACK message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( DontKnowTrade message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Quote message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SettlementInstructions message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataSnapshotFullRefresh message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataIncrementalRefresh message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataRequestReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteCancel message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteAcknowledgement message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityDefinitionRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityDefinition message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradingSessionStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradingSessionStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MassQuote message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( BusinessMessageReject message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( BidRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( BidResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStrikePrice message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
 
    public new void crack( QuickFix.Message message, QuickFix.SessionID sessionID )
    
  {
    if( message is Heartbeat )
      onMessage( (Heartbeat)(message), sessionID );
    else
    if( message is TestRequest )
      onMessage( (TestRequest)(message), sessionID );
    else
    if( message is ResendRequest )
      onMessage( (ResendRequest)(message), sessionID );
    else
    if( message is Reject )
      onMessage( (Reject)(message), sessionID );
    else
    if( message is SequenceReset )
      onMessage( (SequenceReset)(message), sessionID );
    else
    if( message is Logout )
      onMessage( (Logout)(message), sessionID );
    else
    if( message is IndicationofInterest )
      onMessage( (IndicationofInterest)(message), sessionID );
    else
    if( message is Advertisement )
      onMessage( (Advertisement)(message), sessionID );
    else
    if( message is ExecutionReport )
      onMessage( (ExecutionReport)(message), sessionID );
    else
    if( message is OrderCancelReject )
      onMessage( (OrderCancelReject)(message), sessionID );
    else
    if( message is Logon )
      onMessage( (Logon)(message), sessionID );
    else
    if( message is News )
      onMessage( (News)(message), sessionID );
    else
    if( message is Email )
      onMessage( (Email)(message), sessionID );
    else
    if( message is NewOrderSingle )
      onMessage( (NewOrderSingle)(message), sessionID );
    else
    if( message is NewOrderList )
      onMessage( (NewOrderList)(message), sessionID );
    else
    if( message is OrderCancelRequest )
      onMessage( (OrderCancelRequest)(message), sessionID );
    else
    if( message is OrderCancelReplaceRequest )
      onMessage( (OrderCancelReplaceRequest)(message), sessionID );
    else
    if( message is OrderStatusRequest )
      onMessage( (OrderStatusRequest)(message), sessionID );
    else
    if( message is Allocation )
      onMessage( (Allocation)(message), sessionID );
    else
    if( message is ListCancelRequest )
      onMessage( (ListCancelRequest)(message), sessionID );
    else
    if( message is ListExecute )
      onMessage( (ListExecute)(message), sessionID );
    else
    if( message is ListStatusRequest )
      onMessage( (ListStatusRequest)(message), sessionID );
    else
    if( message is ListStatus )
      onMessage( (ListStatus)(message), sessionID );
    else
    if( message is AllocationACK )
      onMessage( (AllocationACK)(message), sessionID );
    else
    if( message is DontKnowTrade )
      onMessage( (DontKnowTrade)(message), sessionID );
    else
    if( message is QuoteRequest )
      onMessage( (QuoteRequest)(message), sessionID );
    else
    if( message is Quote )
      onMessage( (Quote)(message), sessionID );
    else
    if( message is SettlementInstructions )
      onMessage( (SettlementInstructions)(message), sessionID );
    else
    if( message is MarketDataRequest )
      onMessage( (MarketDataRequest)(message), sessionID );
    else
    if( message is MarketDataSnapshotFullRefresh )
      onMessage( (MarketDataSnapshotFullRefresh)(message), sessionID );
    else
    if( message is MarketDataIncrementalRefresh )
      onMessage( (MarketDataIncrementalRefresh)(message), sessionID );
    else
    if( message is MarketDataRequestReject )
      onMessage( (MarketDataRequestReject)(message), sessionID );
    else
    if( message is QuoteCancel )
      onMessage( (QuoteCancel)(message), sessionID );
    else
    if( message is QuoteStatusRequest )
      onMessage( (QuoteStatusRequest)(message), sessionID );
    else
    if( message is QuoteAcknowledgement )
      onMessage( (QuoteAcknowledgement)(message), sessionID );
    else
    if( message is SecurityDefinitionRequest )
      onMessage( (SecurityDefinitionRequest)(message), sessionID );
    else
    if( message is SecurityDefinition )
      onMessage( (SecurityDefinition)(message), sessionID );
    else
    if( message is SecurityStatusRequest )
      onMessage( (SecurityStatusRequest)(message), sessionID );
    else
    if( message is SecurityStatus )
      onMessage( (SecurityStatus)(message), sessionID );
    else
    if( message is TradingSessionStatusRequest )
      onMessage( (TradingSessionStatusRequest)(message), sessionID );
    else
    if( message is TradingSessionStatus )
      onMessage( (TradingSessionStatus)(message), sessionID );
    else
    if( message is MassQuote )
      onMessage( (MassQuote)(message), sessionID );
    else
    if( message is BusinessMessageReject )
      onMessage( (BusinessMessageReject)(message), sessionID );
    else
    if( message is BidRequest )
      onMessage( (BidRequest)(message), sessionID );
    else
    if( message is BidResponse )
      onMessage( (BidResponse)(message), sessionID );
    else
    if( message is ListStrikePrice )
      onMessage( (ListStrikePrice)(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

