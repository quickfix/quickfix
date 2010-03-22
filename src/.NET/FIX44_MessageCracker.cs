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

namespace QuickFix44
{
  public class MessageCracker : QuickFix43.MessageCracker
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
  public virtual void onMessage( AllocationInstruction message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListExecute message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationInstructionAck message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( MultilegOrderCancelReplace message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( QuoteResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Confirmation message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( PositionMaintenanceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( PositionMaintenanceReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RequestForPositions message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RequestForPositionsAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( PositionReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportRequestAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationReportAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ConfirmationAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SettlementInstructionRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AssignmentReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralAssignment message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralInquiry message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NetworkCounterpartySystemStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NetworkCounterpartySystemStatusResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( UserRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( UserResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CollateralInquiryAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ConfirmationRequest message, QuickFix.SessionID session ) 
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
    if( message is IOI )
      onMessage( (IOI)(message), sessionID );
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
    if( message is AllocationInstruction )
      onMessage( (AllocationInstruction)(message), sessionID );
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
    if( message is AllocationInstructionAck )
      onMessage( (AllocationInstructionAck)(message), sessionID );
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
    if( message is MassQuoteAcknowledgement )
      onMessage( (MassQuoteAcknowledgement)(message), sessionID );
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
    else
    if( message is RegistrationInstructions )
      onMessage( (RegistrationInstructions)(message), sessionID );
    else
    if( message is RegistrationInstructionsResponse )
      onMessage( (RegistrationInstructionsResponse)(message), sessionID );
    else
    if( message is OrderMassCancelRequest )
      onMessage( (OrderMassCancelRequest)(message), sessionID );
    else
    if( message is OrderMassCancelReport )
      onMessage( (OrderMassCancelReport)(message), sessionID );
    else
    if( message is NewOrderCross )
      onMessage( (NewOrderCross)(message), sessionID );
    else
    if( message is CrossOrderCancelReplaceRequest )
      onMessage( (CrossOrderCancelReplaceRequest)(message), sessionID );
    else
    if( message is CrossOrderCancelRequest )
      onMessage( (CrossOrderCancelRequest)(message), sessionID );
    else
    if( message is SecurityTypeRequest )
      onMessage( (SecurityTypeRequest)(message), sessionID );
    else
    if( message is SecurityTypes )
      onMessage( (SecurityTypes)(message), sessionID );
    else
    if( message is SecurityListRequest )
      onMessage( (SecurityListRequest)(message), sessionID );
    else
    if( message is SecurityList )
      onMessage( (SecurityList)(message), sessionID );
    else
    if( message is DerivativeSecurityListRequest )
      onMessage( (DerivativeSecurityListRequest)(message), sessionID );
    else
    if( message is DerivativeSecurityList )
      onMessage( (DerivativeSecurityList)(message), sessionID );
    else
    if( message is NewOrderMultileg )
      onMessage( (NewOrderMultileg)(message), sessionID );
    else
    if( message is MultilegOrderCancelReplace )
      onMessage( (MultilegOrderCancelReplace)(message), sessionID );
    else
    if( message is TradeCaptureReportRequest )
      onMessage( (TradeCaptureReportRequest)(message), sessionID );
    else
    if( message is TradeCaptureReport )
      onMessage( (TradeCaptureReport)(message), sessionID );
    else
    if( message is OrderMassStatusRequest )
      onMessage( (OrderMassStatusRequest)(message), sessionID );
    else
    if( message is QuoteRequestReject )
      onMessage( (QuoteRequestReject)(message), sessionID );
    else
    if( message is RFQRequest )
      onMessage( (RFQRequest)(message), sessionID );
    else
    if( message is QuoteStatusReport )
      onMessage( (QuoteStatusReport)(message), sessionID );
    else
    if( message is QuoteResponse )
      onMessage( (QuoteResponse)(message), sessionID );
    else
    if( message is Confirmation )
      onMessage( (Confirmation)(message), sessionID );
    else
    if( message is PositionMaintenanceRequest )
      onMessage( (PositionMaintenanceRequest)(message), sessionID );
    else
    if( message is PositionMaintenanceReport )
      onMessage( (PositionMaintenanceReport)(message), sessionID );
    else
    if( message is RequestForPositions )
      onMessage( (RequestForPositions)(message), sessionID );
    else
    if( message is RequestForPositionsAck )
      onMessage( (RequestForPositionsAck)(message), sessionID );
    else
    if( message is PositionReport )
      onMessage( (PositionReport)(message), sessionID );
    else
    if( message is TradeCaptureReportRequestAck )
      onMessage( (TradeCaptureReportRequestAck)(message), sessionID );
    else
    if( message is TradeCaptureReportAck )
      onMessage( (TradeCaptureReportAck)(message), sessionID );
    else
    if( message is AllocationReport )
      onMessage( (AllocationReport)(message), sessionID );
    else
    if( message is AllocationReportAck )
      onMessage( (AllocationReportAck)(message), sessionID );
    else
    if( message is ConfirmationAck )
      onMessage( (ConfirmationAck)(message), sessionID );
    else
    if( message is SettlementInstructionRequest )
      onMessage( (SettlementInstructionRequest)(message), sessionID );
    else
    if( message is AssignmentReport )
      onMessage( (AssignmentReport)(message), sessionID );
    else
    if( message is CollateralRequest )
      onMessage( (CollateralRequest)(message), sessionID );
    else
    if( message is CollateralAssignment )
      onMessage( (CollateralAssignment)(message), sessionID );
    else
    if( message is CollateralResponse )
      onMessage( (CollateralResponse)(message), sessionID );
    else
    if( message is CollateralReport )
      onMessage( (CollateralReport)(message), sessionID );
    else
    if( message is CollateralInquiry )
      onMessage( (CollateralInquiry)(message), sessionID );
    else
    if( message is NetworkCounterpartySystemStatusRequest )
      onMessage( (NetworkCounterpartySystemStatusRequest)(message), sessionID );
    else
    if( message is NetworkCounterpartySystemStatusResponse )
      onMessage( (NetworkCounterpartySystemStatusResponse)(message), sessionID );
    else
    if( message is UserRequest )
      onMessage( (UserRequest)(message), sessionID );
    else
    if( message is UserResponse )
      onMessage( (UserResponse)(message), sessionID );
    else
    if( message is CollateralInquiryAck )
      onMessage( (CollateralInquiryAck)(message), sessionID );
    else
    if( message is ConfirmationRequest )
      onMessage( (ConfirmationRequest)(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

