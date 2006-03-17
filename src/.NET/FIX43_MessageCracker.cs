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

namespace QuickFix43
{
  public class MessageCracker : QuickFix42.MessageCracker
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
  public virtual void onMessage( IOI message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( AllocationAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( DontKnowTradeDK message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( MassQuoteAcknowledgement message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( XML_non_FIX message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RegistrationInstructions message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RegistrationInstructionsResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassCancelReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderCross message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CrossOrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CrossOrderCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityTypeRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityTypes message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityListRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityList message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( DerivativeSecurityListRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( DerivativeSecurityList message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderMultileg message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MultilegOrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteRequestReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RFQRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteStatusReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
 
  public new void crack( QuickFix.Message message,
                     QuickFix.SessionID sessionID )
  {
    QuickFix.MsgType msgType = new QuickFix.MsgType();
    message.getHeader().getField(msgType);
    String msgTypeValue = msgType.getValue();

    if( msgTypeValue == "0" )
      onMessage( (Heartbeat)(message), sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( (TestRequest)(message), sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( (ResendRequest)(message), sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( (Reject)(message), sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( (SequenceReset)(message), sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( (Logout)(message), sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( (IOI)(message), sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( (Advertisement)(message), sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( (ExecutionReport)(message), sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( (OrderCancelReject)(message), sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( (Logon)(message), sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( (News)(message), sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( (Email)(message), sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( (NewOrderSingle)(message), sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( (NewOrderList)(message), sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( (OrderCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( (OrderCancelReplaceRequest)(message), sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( (OrderStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( (Allocation)(message), sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( (ListCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( (ListExecute)(message), sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( (ListStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( (ListStatus)(message), sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( (AllocationAck)(message), sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( (DontKnowTradeDK)(message), sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( (QuoteRequest)(message), sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( (Quote)(message), sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( (SettlementInstructions)(message), sessionID );
    else
    if( msgTypeValue == "V" )
      onMessage( (MarketDataRequest)(message), sessionID );
    else
    if( msgTypeValue == "W" )
      onMessage( (MarketDataSnapshotFullRefresh)(message), sessionID );
    else
    if( msgTypeValue == "X" )
      onMessage( (MarketDataIncrementalRefresh)(message), sessionID );
    else
    if( msgTypeValue == "Y" )
      onMessage( (MarketDataRequestReject)(message), sessionID );
    else
    if( msgTypeValue == "Z" )
      onMessage( (QuoteCancel)(message), sessionID );
    else
    if( msgTypeValue == "a" )
      onMessage( (QuoteStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "b" )
      onMessage( (MassQuoteAcknowledgement)(message), sessionID );
    else
    if( msgTypeValue == "c" )
      onMessage( (SecurityDefinitionRequest)(message), sessionID );
    else
    if( msgTypeValue == "d" )
      onMessage( (SecurityDefinition)(message), sessionID );
    else
    if( msgTypeValue == "e" )
      onMessage( (SecurityStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "f" )
      onMessage( (SecurityStatus)(message), sessionID );
    else
    if( msgTypeValue == "g" )
      onMessage( (TradingSessionStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "h" )
      onMessage( (TradingSessionStatus)(message), sessionID );
    else
    if( msgTypeValue == "i" )
      onMessage( (MassQuote)(message), sessionID );
    else
    if( msgTypeValue == "j" )
      onMessage( (BusinessMessageReject)(message), sessionID );
    else
    if( msgTypeValue == "k" )
      onMessage( (BidRequest)(message), sessionID );
    else
    if( msgTypeValue == "l" )
      onMessage( (BidResponse)(message), sessionID );
    else
    if( msgTypeValue == "m" )
      onMessage( (ListStrikePrice)(message), sessionID );
    else
    if( msgTypeValue == "n" )
      onMessage( (XML_non_FIX)(message), sessionID );
    else
    if( msgTypeValue == "o" )
      onMessage( (RegistrationInstructions)(message), sessionID );
    else
    if( msgTypeValue == "p" )
      onMessage( (RegistrationInstructionsResponse)(message), sessionID );
    else
    if( msgTypeValue == "q" )
      onMessage( (OrderMassCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "r" )
      onMessage( (OrderMassCancelReport)(message), sessionID );
    else
    if( msgTypeValue == "s" )
      onMessage( (NewOrderCross)(message), sessionID );
    else
    if( msgTypeValue == "t" )
      onMessage( (CrossOrderCancelReplaceRequest)(message), sessionID );
    else
    if( msgTypeValue == "u" )
      onMessage( (CrossOrderCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "v" )
      onMessage( (SecurityTypeRequest)(message), sessionID );
    else
    if( msgTypeValue == "w" )
      onMessage( (SecurityTypes)(message), sessionID );
    else
    if( msgTypeValue == "x" )
      onMessage( (SecurityListRequest)(message), sessionID );
    else
    if( msgTypeValue == "y" )
      onMessage( (SecurityList)(message), sessionID );
    else
    if( msgTypeValue == "z" )
      onMessage( (DerivativeSecurityListRequest)(message), sessionID );
    else
    if( msgTypeValue == "AA" )
      onMessage( (DerivativeSecurityList)(message), sessionID );
    else
    if( msgTypeValue == "AB" )
      onMessage( (NewOrderMultileg)(message), sessionID );
    else
    if( msgTypeValue == "AC" )
      onMessage( (MultilegOrderCancelReplaceRequest)(message), sessionID );
    else
    if( msgTypeValue == "AD" )
      onMessage( (TradeCaptureReportRequest)(message), sessionID );
    else
    if( msgTypeValue == "AE" )
      onMessage( (TradeCaptureReport)(message), sessionID );
    else
    if( msgTypeValue == "AF" )
      onMessage( (OrderMassStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "AG" )
      onMessage( (QuoteRequestReject)(message), sessionID );
    else
    if( msgTypeValue == "AH" )
      onMessage( (RFQRequest)(message), sessionID );
    else
    if( msgTypeValue == "AI" )
      onMessage( (QuoteStatusReport)(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

