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

package quickfix.fix50;

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {
  
   if("j".equals(msgType)) {
     return new quickfix.fix50.BusinessMessageReject();
   }
 
   if("BE".equals(msgType)) {
     return new quickfix.fix50.UserRequest();
   }
 
   if("BF".equals(msgType)) {
     return new quickfix.fix50.UserResponse();
   }
 
   if("7".equals(msgType)) {
     return new quickfix.fix50.Advertisement();
   }
 
   if("B".equals(msgType)) {
     return new quickfix.fix50.News();
   }
 
   if("C".equals(msgType)) {
     return new quickfix.fix50.Email();
   }
 
   if("R".equals(msgType)) {
     return new quickfix.fix50.QuoteRequest();
   }
 
   if("AJ".equals(msgType)) {
     return new quickfix.fix50.QuoteResponse();
   }
 
   if("AG".equals(msgType)) {
     return new quickfix.fix50.QuoteRequestReject();
   }
 
   if("AH".equals(msgType)) {
     return new quickfix.fix50.RFQRequest();
   }
 
   if("S".equals(msgType)) {
     return new quickfix.fix50.Quote();
   }
 
   if("Z".equals(msgType)) {
     return new quickfix.fix50.QuoteCancel();
   }
 
   if("a".equals(msgType)) {
     return new quickfix.fix50.QuoteStatusRequest();
   }
 
   if("AI".equals(msgType)) {
     return new quickfix.fix50.QuoteStatusReport();
   }
 
   if("i".equals(msgType)) {
     return new quickfix.fix50.MassQuote();
   }
 
   if("b".equals(msgType)) {
     return new quickfix.fix50.MassQuoteAcknowledgement();
   }
 
   if("V".equals(msgType)) {
     return new quickfix.fix50.MarketDataRequest();
   }
 
   if("W".equals(msgType)) {
     return new quickfix.fix50.MarketDataSnapshotFullRefresh();
   }
 
   if("X".equals(msgType)) {
     return new quickfix.fix50.MarketDataIncrementalRefresh();
   }
 
   if("Y".equals(msgType)) {
     return new quickfix.fix50.MarketDataRequestReject();
   }
 
   if("c".equals(msgType)) {
     return new quickfix.fix50.SecurityDefinitionRequest();
   }
 
   if("d".equals(msgType)) {
     return new quickfix.fix50.SecurityDefinition();
   }
 
   if("v".equals(msgType)) {
     return new quickfix.fix50.SecurityTypeRequest();
   }
 
   if("w".equals(msgType)) {
     return new quickfix.fix50.SecurityTypes();
   }
 
   if("x".equals(msgType)) {
     return new quickfix.fix50.SecurityListRequest();
   }
 
   if("y".equals(msgType)) {
     return new quickfix.fix50.SecurityList();
   }
 
   if("z".equals(msgType)) {
     return new quickfix.fix50.DerivativeSecurityListRequest();
   }
 
   if("AA".equals(msgType)) {
     return new quickfix.fix50.DerivativeSecurityList();
   }
 
   if("e".equals(msgType)) {
     return new quickfix.fix50.SecurityStatusRequest();
   }
 
   if("f".equals(msgType)) {
     return new quickfix.fix50.SecurityStatus();
   }
 
   if("g".equals(msgType)) {
     return new quickfix.fix50.TradingSessionStatusRequest();
   }
 
   if("h".equals(msgType)) {
     return new quickfix.fix50.TradingSessionStatus();
   }
 
   if("D".equals(msgType)) {
     return new quickfix.fix50.NewOrderSingle();
   }
 
   if("8".equals(msgType)) {
     return new quickfix.fix50.ExecutionReport();
   }
 
   if("Q".equals(msgType)) {
     return new quickfix.fix50.DontKnowTradeDK();
   }
 
   if("G".equals(msgType)) {
     return new quickfix.fix50.OrderCancelReplaceRequest();
   }
 
   if("F".equals(msgType)) {
     return new quickfix.fix50.OrderCancelRequest();
   }
 
   if("9".equals(msgType)) {
     return new quickfix.fix50.OrderCancelReject();
   }
 
   if("H".equals(msgType)) {
     return new quickfix.fix50.OrderStatusRequest();
   }
 
   if("q".equals(msgType)) {
     return new quickfix.fix50.OrderMassCancelRequest();
   }
 
   if("r".equals(msgType)) {
     return new quickfix.fix50.OrderMassCancelReport();
   }
 
   if("AF".equals(msgType)) {
     return new quickfix.fix50.OrderMassStatusRequest();
   }
 
   if("s".equals(msgType)) {
     return new quickfix.fix50.NewOrderCross();
   }
 
   if("t".equals(msgType)) {
     return new quickfix.fix50.CrossOrderCancelReplaceRequest();
   }
 
   if("u".equals(msgType)) {
     return new quickfix.fix50.CrossOrderCancelRequest();
   }
 
   if("AB".equals(msgType)) {
     return new quickfix.fix50.NewOrderMultileg();
   }
 
   if("AC".equals(msgType)) {
     return new quickfix.fix50.MultilegOrderCancelReplace();
   }
 
   if("k".equals(msgType)) {
     return new quickfix.fix50.BidRequest();
   }
 
   if("l".equals(msgType)) {
     return new quickfix.fix50.BidResponse();
   }
 
   if("E".equals(msgType)) {
     return new quickfix.fix50.NewOrderList();
   }
 
   if("m".equals(msgType)) {
     return new quickfix.fix50.ListStrikePrice();
   }
 
   if("N".equals(msgType)) {
     return new quickfix.fix50.ListStatus();
   }
 
   if("L".equals(msgType)) {
     return new quickfix.fix50.ListExecute();
   }
 
   if("K".equals(msgType)) {
     return new quickfix.fix50.ListCancelRequest();
   }
 
   if("M".equals(msgType)) {
     return new quickfix.fix50.ListStatusRequest();
   }
 
   if("J".equals(msgType)) {
     return new quickfix.fix50.AllocationInstruction();
   }
 
   if("P".equals(msgType)) {
     return new quickfix.fix50.AllocationInstructionAck();
   }
 
   if("AS".equals(msgType)) {
     return new quickfix.fix50.AllocationReport();
   }
 
   if("AT".equals(msgType)) {
     return new quickfix.fix50.AllocationReportAck();
   }
 
   if("AK".equals(msgType)) {
     return new quickfix.fix50.Confirmation();
   }
 
   if("AU".equals(msgType)) {
     return new quickfix.fix50.Confirmation_Ack();
   }
 
   if("BH".equals(msgType)) {
     return new quickfix.fix50.ConfirmationRequest();
   }
 
   if("T".equals(msgType)) {
     return new quickfix.fix50.SettlementInstructions();
   }
 
   if("AV".equals(msgType)) {
     return new quickfix.fix50.SettlementInstructionRequest();
   }
 
   if("AD".equals(msgType)) {
     return new quickfix.fix50.TradeCaptureReportRequest();
   }
 
   if("AQ".equals(msgType)) {
     return new quickfix.fix50.TradeCaptureReportRequestAck();
   }
 
   if("AE".equals(msgType)) {
     return new quickfix.fix50.TradeCaptureReport();
   }
 
   if("AR".equals(msgType)) {
     return new quickfix.fix50.TradeCaptureReportAck();
   }
 
   if("o".equals(msgType)) {
     return new quickfix.fix50.RegistrationInstructions();
   }
 
   if("p".equals(msgType)) {
     return new quickfix.fix50.RegistrationInstructionsResponse();
   }
 
   if("AL".equals(msgType)) {
     return new quickfix.fix50.PositionMaintenanceRequest();
   }
 
   if("AM".equals(msgType)) {
     return new quickfix.fix50.PositionMaintenanceReport();
   }
 
   if("AN".equals(msgType)) {
     return new quickfix.fix50.RequestForPositions();
   }
 
   if("AO".equals(msgType)) {
     return new quickfix.fix50.RequestForPositionsAck();
   }
 
   if("AP".equals(msgType)) {
     return new quickfix.fix50.PositionReport();
   }
 
   if("AW".equals(msgType)) {
     return new quickfix.fix50.AssignmentReport();
   }
 
   if("AX".equals(msgType)) {
     return new quickfix.fix50.CollateralRequest();
   }
 
   if("AY".equals(msgType)) {
     return new quickfix.fix50.CollateralAssignment();
   }
 
   if("AZ".equals(msgType)) {
     return new quickfix.fix50.CollateralResponse();
   }
 
   if("BA".equals(msgType)) {
     return new quickfix.fix50.CollateralReport();
   }
 
   if("BB".equals(msgType)) {
     return new quickfix.fix50.CollateralInquiry();
   }
 
   if("BC".equals(msgType)) {
     return new quickfix.fix50.NetworkCounterpartySystemStatusRequest();
   }
 
   if("BD".equals(msgType)) {
     return new quickfix.fix50.NetworkCounterpartySystemStatusResponse();
   }
 
   if("BG".equals(msgType)) {
     return new quickfix.fix50.CollateralInquiryAck();
   }
 
   if("BO".equals(msgType)) {
     return new quickfix.fix50.ContraryIntentionReport();
   }
 
   if("BP".equals(msgType)) {
     return new quickfix.fix50.SecurityDefinitionUpdateReport();
   }
 
   if("BK".equals(msgType)) {
     return new quickfix.fix50.SecurityListUpdateReport();
   }
 
   if("BL".equals(msgType)) {
     return new quickfix.fix50.AdjustedPositionReport();
   }
 
   if("BM".equals(msgType)) {
     return new quickfix.fix50.AllocationInstructionAlert();
   }
 
   if("BN".equals(msgType)) {
     return new quickfix.fix50.ExecutionAcknowledgement();
   }
 
   if("BJ".equals(msgType)) {
     return new quickfix.fix50.TradingSessionList();
   }
 
   if("BI".equals(msgType)) {
     return new quickfix.fix50.TradingSessionListRequest();
   }
 
   if("6".equals(msgType)) {
     return new quickfix.fix50.IOI();
   }
 
  return new quickfix.fix50.Message();
  }
}

