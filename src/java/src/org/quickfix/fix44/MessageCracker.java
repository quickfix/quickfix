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

package org.quickfix.fix44;

import org.quickfix.*;
import org.quickfix.field.*;

public class MessageCracker 
{
public void onMessage( org.quickfix.Message message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
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
 
  public void crack( org.quickfix.Message message, SessionID sessionID )
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
    if( msgTypeValue.equals("AS") )
      onMessage( (AllocationReportAck)message, sessionID );
    else
    if( msgTypeValue.equals("AK") )
      onMessage( (Confirmation)message, sessionID );
    else
    if( msgTypeValue.equals("AU") )
      onMessage( (ConfirmationAck)message, sessionID );
    else
    if( msgTypeValue.equals("BS") )
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
    if( msgTypeValue.equals("AO") )
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
    if( msgTypeValue.equals("BB") )
      onMessage( (CollateralInquiryAck)message, sessionID );
    else onMessage( message, sessionID );
  }

  };


