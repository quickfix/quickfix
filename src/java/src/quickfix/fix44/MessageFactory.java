/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

import quickfix.Message;

public class MessageFactory implements quickfix.MessageFactory
{
  public Message create( String beginString, String msgType ) {

   if("0".equals(msgType)) {
     return new quickfix.fix44.Heartbeat();
   }

   if("A".equals(msgType)) {
     return new quickfix.fix44.Logon();
   }

   if("1".equals(msgType)) {
     return new quickfix.fix44.TestRequest();
   }

   if("2".equals(msgType)) {
     return new quickfix.fix44.ResendRequest();
   }

   if("3".equals(msgType)) {
     return new quickfix.fix44.Reject();
   }

   if("4".equals(msgType)) {
     return new quickfix.fix44.SequenceReset();
   }

   if("5".equals(msgType)) {
     return new quickfix.fix44.Logout();
   }

   if("j".equals(msgType)) {
     return new quickfix.fix44.BusinessMessageReject();
   }

   if("BE".equals(msgType)) {
     return new quickfix.fix44.UserRequest();
   }

   if("BF".equals(msgType)) {
     return new quickfix.fix44.UserResponse();
   }

   if("7".equals(msgType)) {
     return new quickfix.fix44.Advertisement();
   }

   if("6".equals(msgType)) {
     return new quickfix.fix44.IndicationOfInterest();
   }

   if("B".equals(msgType)) {
     return new quickfix.fix44.News();
   }

   if("C".equals(msgType)) {
     return new quickfix.fix44.Email();
   }

   if("R".equals(msgType)) {
     return new quickfix.fix44.QuoteRequest();
   }

   if("AJ".equals(msgType)) {
     return new quickfix.fix44.QuoteResponse();
   }

   if("AG".equals(msgType)) {
     return new quickfix.fix44.QuoteRequestReject();
   }

   if("AH".equals(msgType)) {
     return new quickfix.fix44.RFQRequest();
   }

   if("S".equals(msgType)) {
     return new quickfix.fix44.Quote();
   }

   if("Z".equals(msgType)) {
     return new quickfix.fix44.QuoteCancel();
   }

   if("a".equals(msgType)) {
     return new quickfix.fix44.QuoteStatusRequest();
   }

   if("AI".equals(msgType)) {
     return new quickfix.fix44.QuoteStatusReport();
   }

   if("i".equals(msgType)) {
     return new quickfix.fix44.MassQuote();
   }

   if("b".equals(msgType)) {
     return new quickfix.fix44.MassQuoteAcknowledgement();
   }

   if("V".equals(msgType)) {
     return new quickfix.fix44.MarketDataRequest();
   }

   if("W".equals(msgType)) {
     return new quickfix.fix44.MarketDataSnapshotFullRefresh();
   }

   if("X".equals(msgType)) {
     return new quickfix.fix44.MarketDataIncrementalRefresh();
   }

   if("Y".equals(msgType)) {
     return new quickfix.fix44.MarketDataRequestReject();
   }

   if("c".equals(msgType)) {
     return new quickfix.fix44.SecurityDefinitionRequest();
   }

   if("d".equals(msgType)) {
     return new quickfix.fix44.SecurityDefinition();
   }

   if("v".equals(msgType)) {
     return new quickfix.fix44.SecurityTypeRequest();
   }

   if("w".equals(msgType)) {
     return new quickfix.fix44.SecurityTypes();
   }

   if("x".equals(msgType)) {
     return new quickfix.fix44.SecurityListRequest();
   }

   if("y".equals(msgType)) {
     return new quickfix.fix44.SecurityList();
   }

   if("z".equals(msgType)) {
     return new quickfix.fix44.DerivativeSecurityListRequest();
   }

   if("AA".equals(msgType)) {
     return new quickfix.fix44.DerivativeSecurityList();
   }

   if("e".equals(msgType)) {
     return new quickfix.fix44.SecurityStatusRequest();
   }

   if("f".equals(msgType)) {
     return new quickfix.fix44.SecurityStatus();
   }

   if("g".equals(msgType)) {
     return new quickfix.fix44.TradingSessionStatusRequest();
   }

   if("h".equals(msgType)) {
     return new quickfix.fix44.TradingSessionStatus();
   }

   if("D".equals(msgType)) {
     return new quickfix.fix44.NewOrderSingle();
   }

   if("8".equals(msgType)) {
     return new quickfix.fix44.ExecutionReport();
   }

   if("Q".equals(msgType)) {
     return new quickfix.fix44.DontKnowTrade();
   }

   if("G".equals(msgType)) {
     return new quickfix.fix44.OrderCancelReplaceRequest();
   }

   if("F".equals(msgType)) {
     return new quickfix.fix44.OrderCancelRequest();
   }

   if("9".equals(msgType)) {
     return new quickfix.fix44.OrderCancelReject();
   }

   if("H".equals(msgType)) {
     return new quickfix.fix44.OrderStatusRequest();
   }

   if("q".equals(msgType)) {
     return new quickfix.fix44.OrderMassCancelRequest();
   }

   if("r".equals(msgType)) {
     return new quickfix.fix44.OrderMassCancelReport();
   }

   if("AF".equals(msgType)) {
     return new quickfix.fix44.OrderMassStatusRequest();
   }

   if("s".equals(msgType)) {
     return new quickfix.fix44.NewOrderCross();
   }

   if("t".equals(msgType)) {
     return new quickfix.fix44.CrossOrderCancelReplaceRequest();
   }

   if("u".equals(msgType)) {
     return new quickfix.fix44.CrossOrderCancelRequest();
   }

   if("AB".equals(msgType)) {
     return new quickfix.fix44.NewOrderMultileg();
   }

   if("AC".equals(msgType)) {
     return new quickfix.fix44.MultilegOrderCancelReplaceRequest();
   }

   if("k".equals(msgType)) {
     return new quickfix.fix44.BidRequest();
   }

   if("l".equals(msgType)) {
     return new quickfix.fix44.BidResponse();
   }

   if("E".equals(msgType)) {
     return new quickfix.fix44.NewOrderList();
   }

   if("m".equals(msgType)) {
     return new quickfix.fix44.ListStrikePrice();
   }

   if("N".equals(msgType)) {
     return new quickfix.fix44.ListStatus();
   }

   if("L".equals(msgType)) {
     return new quickfix.fix44.ListExecute();
   }

   if("K".equals(msgType)) {
     return new quickfix.fix44.ListCancelRequest();
   }

   if("M".equals(msgType)) {
     return new quickfix.fix44.ListStatusRequest();
   }

   if("J".equals(msgType)) {
     return new quickfix.fix44.AllocationInstruction();
   }

   if("P".equals(msgType)) {
     return new quickfix.fix44.AllocationInstructionAck();
   }

   if("AS".equals(msgType)) {
     return new quickfix.fix44.AllocationReport();
   }

   if("AT".equals(msgType)) {
     return new quickfix.fix44.AllocationReportAck();
   }

   if("AK".equals(msgType)) {
     return new quickfix.fix44.Confirmation();
   }

   if("AU".equals(msgType)) {
     return new quickfix.fix44.ConfirmationAck();
   }

   if("BH".equals(msgType)) {
     return new quickfix.fix44.ConfirmationRequest();
   }

   if("T".equals(msgType)) {
     return new quickfix.fix44.SettlementInstructions();
   }

   if("AV".equals(msgType)) {
     return new quickfix.fix44.SettlementInstructionRequest();
   }

   if("AD".equals(msgType)) {
     return new quickfix.fix44.TradeCaptureReportRequest();
   }

   if("AQ".equals(msgType)) {
     return new quickfix.fix44.TradeCaptureReportRequestAck();
   }

   if("AE".equals(msgType)) {
     return new quickfix.fix44.TradeCaptureReport();
   }

   if("AR".equals(msgType)) {
     return new quickfix.fix44.TradeCaptureReportAck();
   }

   if("o".equals(msgType)) {
     return new quickfix.fix44.RegistrationInstructions();
   }

   if("p".equals(msgType)) {
     return new quickfix.fix44.RegistrationInstructionsResponse();
   }

   if("AL".equals(msgType)) {
     return new quickfix.fix44.PositionMaintenanceRequest();
   }

   if("AM".equals(msgType)) {
     return new quickfix.fix44.PositionMaintenanceReport();
   }

   if("AN".equals(msgType)) {
     return new quickfix.fix44.RequestForPositions();
   }

   if("AO".equals(msgType)) {
     return new quickfix.fix44.RequestForPositionsAck();
   }

   if("AP".equals(msgType)) {
     return new quickfix.fix44.PositionReport();
   }

   if("AW".equals(msgType)) {
     return new quickfix.fix44.AssignmentReport();
   }

   if("AX".equals(msgType)) {
     return new quickfix.fix44.CollateralRequest();
   }

   if("AY".equals(msgType)) {
     return new quickfix.fix44.CollateralAssignment();
   }

   if("AZ".equals(msgType)) {
     return new quickfix.fix44.CollateralResponse();
   }

   if("BA".equals(msgType)) {
     return new quickfix.fix44.CollateralReport();
   }

   if("BB".equals(msgType)) {
     return new quickfix.fix44.CollateralInquiry();
   }

   if("BG".equals(msgType)) {
     return new quickfix.fix44.CollateralInquiryAck();
   }

  return new quickfix.fix44.Message();
  }
}

