/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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
 
package quickfix.fix44;

import quickfix.*;
import quickfix.field.*;

public class MessageCracker extends quickfix.fix43.MessageCracker
{
public void onMessage( quickfix.Message message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
  { throw new UnsupportedMessageType(); }
 public void onMessage( Heartbeat message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( Logon message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( TestRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( ResendRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( Reject message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( SequenceReset message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( Logout message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( BusinessMessageReject message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    {}
  public void onMessage( UserRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( UserResponse message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Advertisement message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( IndicationOfInterest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( News message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Email message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteResponse message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteRequestReject message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( RFQRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Quote message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteCancel message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( QuoteStatusReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MassQuote message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MassQuoteAcknowledgement message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MarketDataRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MarketDataSnapshotFullRefresh message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MarketDataIncrementalRefresh message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MarketDataRequestReject message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityDefinitionRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityDefinition message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityTypeRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityTypes message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityListRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityList message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( DerivativeSecurityListRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( DerivativeSecurityList message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SecurityStatus message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradingSessionStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradingSessionStatus message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
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
  public void onMessage( OrderMassCancelRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderMassCancelReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( OrderMassStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( NewOrderCross message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CrossOrderCancelReplaceRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CrossOrderCancelRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( NewOrderMultileg message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( MultilegOrderCancelReplaceRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( BidRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( BidResponse message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( NewOrderList message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListStrikePrice message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListStatus message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListExecute message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListCancelRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ListStatusRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AllocationInstruction message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AllocationInstructionAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AllocationReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AllocationReportAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( Confirmation message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ConfirmationAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( ConfirmationRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SettlementInstructions message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( SettlementInstructionRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradeCaptureReportRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradeCaptureReportRequestAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradeCaptureReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( TradeCaptureReportAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( RegistrationInstructions message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( RegistrationInstructionsResponse message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( PositionMaintenanceRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( PositionMaintenanceReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( RequestForPositions message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( RequestForPositionsAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( PositionReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( AssignmentReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralRequest message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralAssignment message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralResponse message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralReport message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralInquiry message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
  public void onMessage( CollateralInquiryAck message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
    { throw new UnsupportedMessageType(); }
 
  public void crack( quickfix.Message message, SessionID sessionID )
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  { crack44((Message)message, sessionID); }

  public void crack44( Message message, SessionID sessionID ) 
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
    if( msgTypeValue.equals("j") )
      onMessage( (BusinessMessageReject)message, sessionID );
    else
    if( msgTypeValue.equals("BE") )
      onMessage( (UserRequest)message, sessionID );
    else
    if( msgTypeValue.equals("BF") )
      onMessage( (UserResponse)message, sessionID );
    else
    if( msgTypeValue.equals("7") )
      onMessage( (Advertisement)message, sessionID );
    else
    if( msgTypeValue.equals("6") )
      onMessage( (IndicationOfInterest)message, sessionID );
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
    if( msgTypeValue.equals("AJ") )
      onMessage( (QuoteResponse)message, sessionID );
    else
    if( msgTypeValue.equals("AG") )
      onMessage( (QuoteRequestReject)message, sessionID );
    else
    if( msgTypeValue.equals("AH") )
      onMessage( (RFQRequest)message, sessionID );
    else
    if( msgTypeValue.equals("S") )
      onMessage( (Quote)message, sessionID );
    else
    if( msgTypeValue.equals("Z") )
      onMessage( (QuoteCancel)message, sessionID );
    else
    if( msgTypeValue.equals("a") )
      onMessage( (QuoteStatusRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AI") )
      onMessage( (QuoteStatusReport)message, sessionID );
    else
    if( msgTypeValue.equals("i") )
      onMessage( (MassQuote)message, sessionID );
    else
    if( msgTypeValue.equals("b") )
      onMessage( (MassQuoteAcknowledgement)message, sessionID );
    else
    if( msgTypeValue.equals("V") )
      onMessage( (MarketDataRequest)message, sessionID );
    else
    if( msgTypeValue.equals("W") )
      onMessage( (MarketDataSnapshotFullRefresh)message, sessionID );
    else
    if( msgTypeValue.equals("X") )
      onMessage( (MarketDataIncrementalRefresh)message, sessionID );
    else
    if( msgTypeValue.equals("Y") )
      onMessage( (MarketDataRequestReject)message, sessionID );
    else
    if( msgTypeValue.equals("c") )
      onMessage( (SecurityDefinitionRequest)message, sessionID );
    else
    if( msgTypeValue.equals("d") )
      onMessage( (SecurityDefinition)message, sessionID );
    else
    if( msgTypeValue.equals("v") )
      onMessage( (SecurityTypeRequest)message, sessionID );
    else
    if( msgTypeValue.equals("w") )
      onMessage( (SecurityTypes)message, sessionID );
    else
    if( msgTypeValue.equals("x") )
      onMessage( (SecurityListRequest)message, sessionID );
    else
    if( msgTypeValue.equals("y") )
      onMessage( (SecurityList)message, sessionID );
    else
    if( msgTypeValue.equals("z") )
      onMessage( (DerivativeSecurityListRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AA") )
      onMessage( (DerivativeSecurityList)message, sessionID );
    else
    if( msgTypeValue.equals("e") )
      onMessage( (SecurityStatusRequest)message, sessionID );
    else
    if( msgTypeValue.equals("f") )
      onMessage( (SecurityStatus)message, sessionID );
    else
    if( msgTypeValue.equals("g") )
      onMessage( (TradingSessionStatusRequest)message, sessionID );
    else
    if( msgTypeValue.equals("h") )
      onMessage( (TradingSessionStatus)message, sessionID );
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
    if( msgTypeValue.equals("q") )
      onMessage( (OrderMassCancelRequest)message, sessionID );
    else
    if( msgTypeValue.equals("r") )
      onMessage( (OrderMassCancelReport)message, sessionID );
    else
    if( msgTypeValue.equals("AF") )
      onMessage( (OrderMassStatusRequest)message, sessionID );
    else
    if( msgTypeValue.equals("s") )
      onMessage( (NewOrderCross)message, sessionID );
    else
    if( msgTypeValue.equals("t") )
      onMessage( (CrossOrderCancelReplaceRequest)message, sessionID );
    else
    if( msgTypeValue.equals("u") )
      onMessage( (CrossOrderCancelRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AB") )
      onMessage( (NewOrderMultileg)message, sessionID );
    else
    if( msgTypeValue.equals("AC") )
      onMessage( (MultilegOrderCancelReplaceRequest)message, sessionID );
    else
    if( msgTypeValue.equals("k") )
      onMessage( (BidRequest)message, sessionID );
    else
    if( msgTypeValue.equals("l") )
      onMessage( (BidResponse)message, sessionID );
    else
    if( msgTypeValue.equals("E") )
      onMessage( (NewOrderList)message, sessionID );
    else
    if( msgTypeValue.equals("m") )
      onMessage( (ListStrikePrice)message, sessionID );
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
    else
    if( msgTypeValue.equals("J") )
      onMessage( (AllocationInstruction)message, sessionID );
    else
    if( msgTypeValue.equals("P") )
      onMessage( (AllocationInstructionAck)message, sessionID );
    else
    if( msgTypeValue.equals("AS") )
      onMessage( (AllocationReport)message, sessionID );
    else
    if( msgTypeValue.equals("AT") )
      onMessage( (AllocationReportAck)message, sessionID );
    else
    if( msgTypeValue.equals("AK") )
      onMessage( (Confirmation)message, sessionID );
    else
    if( msgTypeValue.equals("AU") )
      onMessage( (ConfirmationAck)message, sessionID );
    else
    if( msgTypeValue.equals("BH") )
      onMessage( (ConfirmationRequest)message, sessionID );
    else
    if( msgTypeValue.equals("T") )
      onMessage( (SettlementInstructions)message, sessionID );
    else
    if( msgTypeValue.equals("AV") )
      onMessage( (SettlementInstructionRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AD") )
      onMessage( (TradeCaptureReportRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AQ") )
      onMessage( (TradeCaptureReportRequestAck)message, sessionID );
    else
    if( msgTypeValue.equals("AE") )
      onMessage( (TradeCaptureReport)message, sessionID );
    else
    if( msgTypeValue.equals("AR") )
      onMessage( (TradeCaptureReportAck)message, sessionID );
    else
    if( msgTypeValue.equals("o") )
      onMessage( (RegistrationInstructions)message, sessionID );
    else
    if( msgTypeValue.equals("p") )
      onMessage( (RegistrationInstructionsResponse)message, sessionID );
    else
    if( msgTypeValue.equals("AL") )
      onMessage( (PositionMaintenanceRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AM") )
      onMessage( (PositionMaintenanceReport)message, sessionID );
    else
    if( msgTypeValue.equals("AN") )
      onMessage( (RequestForPositions)message, sessionID );
    else
    if( msgTypeValue.equals("AO") )
      onMessage( (RequestForPositionsAck)message, sessionID );
    else
    if( msgTypeValue.equals("AP") )
      onMessage( (PositionReport)message, sessionID );
    else
    if( msgTypeValue.equals("AW") )
      onMessage( (AssignmentReport)message, sessionID );
    else
    if( msgTypeValue.equals("AX") )
      onMessage( (CollateralRequest)message, sessionID );
    else
    if( msgTypeValue.equals("AY") )
      onMessage( (CollateralAssignment)message, sessionID );
    else
    if( msgTypeValue.equals("AZ") )
      onMessage( (CollateralResponse)message, sessionID );
    else
    if( msgTypeValue.equals("BA") )
      onMessage( (CollateralReport)message, sessionID );
    else
    if( msgTypeValue.equals("BB") )
      onMessage( (CollateralInquiry)message, sessionID );
    else
    if( msgTypeValue.equals("BG") )
      onMessage( (CollateralInquiryAck)message, sessionID );
    else onMessage( message, sessionID );
  }

  };


