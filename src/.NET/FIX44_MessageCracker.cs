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

using System;

namespace QuickFix44
{
  public class MessageCracker : QuickFix43.MessageCracker
  {
  public new void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    { throw new QuickFix.UnsupportedMessageType(); }
 public virtual void onMessage( Heartbeat message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Logon message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TestRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ResendRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Reject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SequenceReset message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Logout message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( BusinessMessageReject message, QuickFix.SessionID session ) 
    {}
  public virtual void onMessage( Advertisement message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( IndicationOfInterest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( News message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Email message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteRequestReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RFQRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Quote message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteCancel message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( QuoteStatusReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MassQuote message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MassQuoteAcknowledgement message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataSnapshotFullRefresh message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataIncrementalRefresh message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MarketDataRequestReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityDefinitionRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityDefinition message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( SecurityStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SecurityStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradingSessionStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradingSessionStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderSingle message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ExecutionReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( DontKnowTrade message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderCancelReject message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassCancelReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( OrderMassStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderCross message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CrossOrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( CrossOrderCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderMultileg message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( MultilegOrderCancelReplaceRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( BidRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( BidResponse message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( NewOrderList message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStrikePrice message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatus message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListExecute message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListCancelRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ListStatusRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationInstruction message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationInstructionAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( AllocationReportAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( Confirmation message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ConfirmationAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( ConfirmationRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SettlementInstructions message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( SettlementInstructionRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportRequest message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportRequestAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReport message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( TradeCaptureReportAck message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RegistrationInstructions message, QuickFix.SessionID session ) 
    { throw new QuickFix.UnsupportedMessageType(); }
  public virtual void onMessage( RegistrationInstructionsResponse message, QuickFix.SessionID session ) 
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
  public virtual void onMessage( CollateralInquiryAck message, QuickFix.SessionID session ) 
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
    if( msgTypeValue == "A" )
      onMessage( (Logon)(message), sessionID );
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
    if( msgTypeValue == "j" )
      onMessage( (BusinessMessageReject)(message), sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( (Advertisement)(message), sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( (IndicationOfInterest)(message), sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( (News)(message), sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( (Email)(message), sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( (QuoteRequest)(message), sessionID );
    else
    if( msgTypeValue == "AJ" )
      onMessage( (QuoteResponse)(message), sessionID );
    else
    if( msgTypeValue == "AG" )
      onMessage( (QuoteRequestReject)(message), sessionID );
    else
    if( msgTypeValue == "AH" )
      onMessage( (RFQRequest)(message), sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( (Quote)(message), sessionID );
    else
    if( msgTypeValue == "Z" )
      onMessage( (QuoteCancel)(message), sessionID );
    else
    if( msgTypeValue == "a" )
      onMessage( (QuoteStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "AI" )
      onMessage( (QuoteStatusReport)(message), sessionID );
    else
    if( msgTypeValue == "i" )
      onMessage( (MassQuote)(message), sessionID );
    else
    if( msgTypeValue == "b" )
      onMessage( (MassQuoteAcknowledgement)(message), sessionID );
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
    if( msgTypeValue == "c" )
      onMessage( (SecurityDefinitionRequest)(message), sessionID );
    else
    if( msgTypeValue == "d" )
      onMessage( (SecurityDefinition)(message), sessionID );
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
    if( msgTypeValue == "D" )
      onMessage( (NewOrderSingle)(message), sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( (ExecutionReport)(message), sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( (DontKnowTrade)(message), sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( (OrderCancelReplaceRequest)(message), sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( (OrderCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( (OrderCancelReject)(message), sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( (OrderStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "q" )
      onMessage( (OrderMassCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "r" )
      onMessage( (OrderMassCancelReport)(message), sessionID );
    else
    if( msgTypeValue == "AF" )
      onMessage( (OrderMassStatusRequest)(message), sessionID );
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
    if( msgTypeValue == "AB" )
      onMessage( (NewOrderMultileg)(message), sessionID );
    else
    if( msgTypeValue == "AC" )
      onMessage( (MultilegOrderCancelReplaceRequest)(message), sessionID );
    else
    if( msgTypeValue == "k" )
      onMessage( (BidRequest)(message), sessionID );
    else
    if( msgTypeValue == "l" )
      onMessage( (BidResponse)(message), sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( (NewOrderList)(message), sessionID );
    else
    if( msgTypeValue == "m" )
      onMessage( (ListStrikePrice)(message), sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( (ListStatus)(message), sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( (ListExecute)(message), sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( (ListCancelRequest)(message), sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( (ListStatusRequest)(message), sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( (AllocationInstruction)(message), sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( (AllocationInstructionAck)(message), sessionID );
    else
    if( msgTypeValue == "AS" )
      onMessage( (AllocationReport)(message), sessionID );
    else
    if( msgTypeValue == "AS" )
      onMessage( (AllocationReportAck)(message), sessionID );
    else
    if( msgTypeValue == "AK" )
      onMessage( (Confirmation)(message), sessionID );
    else
    if( msgTypeValue == "AU" )
      onMessage( (ConfirmationAck)(message), sessionID );
    else
    if( msgTypeValue == "BS" )
      onMessage( (ConfirmationRequest)(message), sessionID );
    else
    if( msgTypeValue == "T" )
      onMessage( (SettlementInstructions)(message), sessionID );
    else
    if( msgTypeValue == "AV" )
      onMessage( (SettlementInstructionRequest)(message), sessionID );
    else
    if( msgTypeValue == "AD" )
      onMessage( (TradeCaptureReportRequest)(message), sessionID );
    else
    if( msgTypeValue == "AQ" )
      onMessage( (TradeCaptureReportRequestAck)(message), sessionID );
    else
    if( msgTypeValue == "AE" )
      onMessage( (TradeCaptureReport)(message), sessionID );
    else
    if( msgTypeValue == "AR" )
      onMessage( (TradeCaptureReportAck)(message), sessionID );
    else
    if( msgTypeValue == "o" )
      onMessage( (RegistrationInstructions)(message), sessionID );
    else
    if( msgTypeValue == "p" )
      onMessage( (RegistrationInstructionsResponse)(message), sessionID );
    else
    if( msgTypeValue == "AL" )
      onMessage( (PositionMaintenanceRequest)(message), sessionID );
    else
    if( msgTypeValue == "AM" )
      onMessage( (PositionMaintenanceReport)(message), sessionID );
    else
    if( msgTypeValue == "AN" )
      onMessage( (RequestForPositions)(message), sessionID );
    else
    if( msgTypeValue == "AO" )
      onMessage( (RequestForPositionsAck)(message), sessionID );
    else
    if( msgTypeValue == "AO" )
      onMessage( (PositionReport)(message), sessionID );
    else
    if( msgTypeValue == "AW" )
      onMessage( (AssignmentReport)(message), sessionID );
    else
    if( msgTypeValue == "AX" )
      onMessage( (CollateralRequest)(message), sessionID );
    else
    if( msgTypeValue == "AY" )
      onMessage( (CollateralAssignment)(message), sessionID );
    else
    if( msgTypeValue == "AZ" )
      onMessage( (CollateralResponse)(message), sessionID );
    else
    if( msgTypeValue == "BA" )
      onMessage( (CollateralReport)(message), sessionID );
    else
    if( msgTypeValue == "BB" )
      onMessage( (CollateralInquiry)(message), sessionID );
    else
    if( msgTypeValue == "BB" )
      onMessage( (CollateralInquiryAck)(message), sessionID );
    else onMessage( message, sessionID );    
  }

  };
}

