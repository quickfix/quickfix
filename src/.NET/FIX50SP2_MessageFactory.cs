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


namespace QuickFix50Sp2
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("6")) {
      
      return new QuickFix50Sp2.IOI();
      
     }
   
     if(msgType.Equals("7")) {
      
      return new QuickFix50Sp2.Advertisement();
      
     }
   
     if(msgType.Equals("8")) {
      
      return new QuickFix50Sp2.ExecutionReport();
      
     }
   
     if(msgType.Equals("9")) {
      
      return new QuickFix50Sp2.OrderCancelReject();
      
     }
   
     if(msgType.Equals("B")) {
      
      return new QuickFix50Sp2.News();
      
     }
   
     if(msgType.Equals("C")) {
      
      return new QuickFix50Sp2.Email();
      
     }
   
     if(msgType.Equals("D")) {
      
      return new QuickFix50Sp2.NewOrderSingle();
      
     }
   
     if(msgType.Equals("E")) {
      
      return new QuickFix50Sp2.NewOrderList();
      
     }
   
     if(msgType.Equals("F")) {
      
      return new QuickFix50Sp2.OrderCancelRequest();
      
     }
   
     if(msgType.Equals("G")) {
      
      return new QuickFix50Sp2.OrderCancelReplaceRequest();
      
     }
   
     if(msgType.Equals("H")) {
      
      return new QuickFix50Sp2.OrderStatusRequest();
      
     }
   
     if(msgType.Equals("J")) {
      
      return new QuickFix50Sp2.AllocationInstruction();
      
     }
   
     if(msgType.Equals("K")) {
      
      return new QuickFix50Sp2.ListCancelRequest();
      
     }
   
     if(msgType.Equals("L")) {
      
      return new QuickFix50Sp2.ListExecute();
      
     }
   
     if(msgType.Equals("M")) {
      
      return new QuickFix50Sp2.ListStatusRequest();
      
     }
   
     if(msgType.Equals("N")) {
      
      return new QuickFix50Sp2.ListStatus();
      
     }
   
     if(msgType.Equals("P")) {
      
      return new QuickFix50Sp2.AllocationInstructionAck();
      
     }
   
     if(msgType.Equals("Q")) {
      
      return new QuickFix50Sp2.DontKnowTrade();
      
     }
   
     if(msgType.Equals("R")) {
      
      return new QuickFix50Sp2.QuoteRequest();
      
     }
   
     if(msgType.Equals("S")) {
      
      return new QuickFix50Sp2.Quote();
      
     }
   
     if(msgType.Equals("T")) {
      
      return new QuickFix50Sp2.SettlementInstructions();
      
     }
   
     if(msgType.Equals("V")) {
      
      return new QuickFix50Sp2.MarketDataRequest();
      
     }
   
     if(msgType.Equals("W")) {
      
      return new QuickFix50Sp2.MarketDataSnapshotFullRefresh();
      
     }
   
     if(msgType.Equals("X")) {
      
      return new QuickFix50Sp2.MarketDataIncrementalRefresh();
      
     }
   
     if(msgType.Equals("Y")) {
      
      return new QuickFix50Sp2.MarketDataRequestReject();
      
     }
   
     if(msgType.Equals("Z")) {
      
      return new QuickFix50Sp2.QuoteCancel();
      
     }
   
     if(msgType.Equals("a")) {
      
      return new QuickFix50Sp2.QuoteStatusRequest();
      
     }
   
     if(msgType.Equals("b")) {
      
      return new QuickFix50Sp2.MassQuoteAcknowledgement();
      
     }
   
     if(msgType.Equals("c")) {
      
      return new QuickFix50Sp2.SecurityDefinitionRequest();
      
     }
   
     if(msgType.Equals("d")) {
      
      return new QuickFix50Sp2.SecurityDefinition();
      
     }
   
     if(msgType.Equals("e")) {
      
      return new QuickFix50Sp2.SecurityStatusRequest();
      
     }
   
     if(msgType.Equals("f")) {
      
      return new QuickFix50Sp2.SecurityStatus();
      
     }
   
     if(msgType.Equals("g")) {
      
      return new QuickFix50Sp2.TradingSessionStatusRequest();
      
     }
   
     if(msgType.Equals("h")) {
      
      return new QuickFix50Sp2.TradingSessionStatus();
      
     }
   
     if(msgType.Equals("i")) {
      
      return new QuickFix50Sp2.MassQuote();
      
     }
   
     if(msgType.Equals("j")) {
      
      return new QuickFix50Sp2.BusinessMessageReject();
      
     }
   
     if(msgType.Equals("k")) {
      
      return new QuickFix50Sp2.BidRequest();
      
     }
   
     if(msgType.Equals("l")) {
      
      return new QuickFix50Sp2.BidResponse();
      
     }
   
     if(msgType.Equals("m")) {
      
      return new QuickFix50Sp2.ListStrikePrice();
      
     }
   
     if(msgType.Equals("o")) {
      
      return new QuickFix50Sp2.RegistrationInstructions();
      
     }
   
     if(msgType.Equals("p")) {
      
      return new QuickFix50Sp2.RegistrationInstructionsResponse();
      
     }
   
     if(msgType.Equals("q")) {
      
      return new QuickFix50Sp2.OrderMassCancelRequest();
      
     }
   
     if(msgType.Equals("r")) {
      
      return new QuickFix50Sp2.OrderMassCancelReport();
      
     }
   
     if(msgType.Equals("s")) {
      
      return new QuickFix50Sp2.NewOrderCross();
      
     }
   
     if(msgType.Equals("t")) {
      
      return new QuickFix50Sp2.CrossOrderCancelReplaceRequest();
      
     }
   
     if(msgType.Equals("u")) {
      
      return new QuickFix50Sp2.CrossOrderCancelRequest();
      
     }
   
     if(msgType.Equals("v")) {
      
      return new QuickFix50Sp2.SecurityTypeRequest();
      
     }
   
     if(msgType.Equals("w")) {
      
      return new QuickFix50Sp2.SecurityTypes();
      
     }
   
     if(msgType.Equals("x")) {
      
      return new QuickFix50Sp2.SecurityListRequest();
      
     }
   
     if(msgType.Equals("y")) {
      
      return new QuickFix50Sp2.SecurityList();
      
     }
   
     if(msgType.Equals("z")) {
      
      return new QuickFix50Sp2.DerivativeSecurityListRequest();
      
     }
   
     if(msgType.Equals("AA")) {
      
      return new QuickFix50Sp2.DerivativeSecurityList();
      
     }
   
     if(msgType.Equals("AB")) {
      
      return new QuickFix50Sp2.NewOrderMultileg();
      
     }
   
     if(msgType.Equals("AC")) {
      
      return new QuickFix50Sp2.MultilegOrderCancelReplace();
      
     }
   
     if(msgType.Equals("AD")) {
      
      return new QuickFix50Sp2.TradeCaptureReportRequest();
      
     }
   
     if(msgType.Equals("AE")) {
      
      return new QuickFix50Sp2.TradeCaptureReport();
      
     }
   
     if(msgType.Equals("AF")) {
      
      return new QuickFix50Sp2.OrderMassStatusRequest();
      
     }
   
     if(msgType.Equals("AG")) {
      
      return new QuickFix50Sp2.QuoteRequestReject();
      
     }
   
     if(msgType.Equals("AH")) {
      
      return new QuickFix50Sp2.RFQRequest();
      
     }
   
     if(msgType.Equals("AI")) {
      
      return new QuickFix50Sp2.QuoteStatusReport();
      
     }
   
     if(msgType.Equals("AJ")) {
      
      return new QuickFix50Sp2.QuoteResponse();
      
     }
   
     if(msgType.Equals("AK")) {
      
      return new QuickFix50Sp2.Confirmation();
      
     }
   
     if(msgType.Equals("AL")) {
      
      return new QuickFix50Sp2.PositionMaintenanceRequest();
      
     }
   
     if(msgType.Equals("AM")) {
      
      return new QuickFix50Sp2.PositionMaintenanceReport();
      
     }
   
     if(msgType.Equals("AN")) {
      
      return new QuickFix50Sp2.RequestForPositions();
      
     }
   
     if(msgType.Equals("AO")) {
      
      return new QuickFix50Sp2.RequestForPositionsAck();
      
     }
   
     if(msgType.Equals("AP")) {
      
      return new QuickFix50Sp2.PositionReport();
      
     }
   
     if(msgType.Equals("AQ")) {
      
      return new QuickFix50Sp2.TradeCaptureReportRequestAck();
      
     }
   
     if(msgType.Equals("AR")) {
      
      return new QuickFix50Sp2.TradeCaptureReportAck();
      
     }
   
     if(msgType.Equals("AS")) {
      
      return new QuickFix50Sp2.AllocationReport();
      
     }
   
     if(msgType.Equals("AT")) {
      
      return new QuickFix50Sp2.AllocationReportAck();
      
     }
   
     if(msgType.Equals("AU")) {
      
      return new QuickFix50Sp2.ConfirmationAck();
      
     }
   
     if(msgType.Equals("AV")) {
      
      return new QuickFix50Sp2.SettlementInstructionRequest();
      
     }
   
     if(msgType.Equals("AW")) {
      
      return new QuickFix50Sp2.AssignmentReport();
      
     }
   
     if(msgType.Equals("AX")) {
      
      return new QuickFix50Sp2.CollateralRequest();
      
     }
   
     if(msgType.Equals("AY")) {
      
      return new QuickFix50Sp2.CollateralAssignment();
      
     }
   
     if(msgType.Equals("AZ")) {
      
      return new QuickFix50Sp2.CollateralResponse();
      
     }
   
     if(msgType.Equals("BA")) {
      
      return new QuickFix50Sp2.CollateralReport();
      
     }
   
     if(msgType.Equals("BB")) {
      
      return new QuickFix50Sp2.CollateralInquiry();
      
     }
   
     if(msgType.Equals("BC")) {
      
      return new QuickFix50Sp2.NetworkCounterpartySystemStatusRequest();
      
     }
   
     if(msgType.Equals("BD")) {
      
      return new QuickFix50Sp2.NetworkCounterpartySystemStatusResponse();
      
     }
   
     if(msgType.Equals("BE")) {
      
      return new QuickFix50Sp2.UserRequest();
      
     }
   
     if(msgType.Equals("BF")) {
      
      return new QuickFix50Sp2.UserResponse();
      
     }
   
     if(msgType.Equals("BG")) {
      
      return new QuickFix50Sp2.CollateralInquiryAck();
      
     }
   
     if(msgType.Equals("BH")) {
      
      return new QuickFix50Sp2.ConfirmationRequest();
      
     }
   
     if(msgType.Equals("BO")) {
      
      return new QuickFix50Sp2.ContraryIntentionReport();
      
     }
   
     if(msgType.Equals("BP")) {
      
      return new QuickFix50Sp2.SecurityDefinitionUpdateReport();
      
     }
   
     if(msgType.Equals("BK")) {
      
      return new QuickFix50Sp2.SecurityListUpdateReport();
      
     }
   
     if(msgType.Equals("BL")) {
      
      return new QuickFix50Sp2.AdjustedPositionReport();
      
     }
   
     if(msgType.Equals("BM")) {
      
      return new QuickFix50Sp2.AllocationInstructionAlert();
      
     }
   
     if(msgType.Equals("BN")) {
      
      return new QuickFix50Sp2.ExecutionAcknowledgement();
      
     }
   
     if(msgType.Equals("BJ")) {
      
      return new QuickFix50Sp2.TradingSessionList();
      
     }
   
     if(msgType.Equals("BI")) {
      
      return new QuickFix50Sp2.TradingSessionListRequest();
      
     }
   
     if(msgType.Equals("BQ")) {
      
      return new QuickFix50Sp2.SettlementObligationReport();
      
     }
   
     if(msgType.Equals("BR")) {
      
      return new QuickFix50Sp2.DerivativeSecurityListUpdateReport();
      
     }
   
     if(msgType.Equals("BS")) {
      
      return new QuickFix50Sp2.TradingSessionListUpdateReport();
      
     }
   
     if(msgType.Equals("BT")) {
      
      return new QuickFix50Sp2.MarketDefinitionRequest();
      
     }
   
     if(msgType.Equals("BU")) {
      
      return new QuickFix50Sp2.MarketDefinition();
      
     }
   
     if(msgType.Equals("BV")) {
      
      return new QuickFix50Sp2.MarketDefinitionUpdateReport();
      
     }
   
     if(msgType.Equals("BW")) {
      
      return new QuickFix50Sp2.ApplicationMessageRequest();
      
     }
   
     if(msgType.Equals("BX")) {
      
      return new QuickFix50Sp2.ApplicationMessageRequestAck();
      
     }
   
     if(msgType.Equals("BY")) {
      
      return new QuickFix50Sp2.ApplicationMessageReport();
      
     }
   
     if(msgType.Equals("BZ")) {
      
      return new QuickFix50Sp2.OrderMassActionReport();
      
     }
   
     if(msgType.Equals("CA")) {
      
      return new QuickFix50Sp2.OrderMassActionRequest();
      
     }
   
     if(msgType.Equals("CB")) {
      
      return new QuickFix50Sp2.UserNotification();
      
     }
   
     if(msgType.Equals("CC")) {
      
      return new QuickFix50Sp2.StreamAssignmentRequest();
      
     }
   
     if(msgType.Equals("CD")) {
      
      return new QuickFix50Sp2.StreamAssignmentReport();
      
     }
   
     if(msgType.Equals("CE")) {
      
      return new QuickFix50Sp2.StreamAssignmentReportACK();
      
     }
   
    return new QuickFix50Sp2.Message();
    
    }
  };
}
  