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


namespace QuickFix50Sp1
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("6")) {
      
      return new QuickFix50Sp1.IOI();
      
     }
   
     if(msgType.Equals("7")) {
      
      return new QuickFix50Sp1.Advertisement();
      
     }
   
     if(msgType.Equals("8")) {
      
      return new QuickFix50Sp1.ExecutionReport();
      
     }
   
     if(msgType.Equals("9")) {
      
      return new QuickFix50Sp1.OrderCancelReject();
      
     }
   
     if(msgType.Equals("B")) {
      
      return new QuickFix50Sp1.News();
      
     }
   
     if(msgType.Equals("C")) {
      
      return new QuickFix50Sp1.Email();
      
     }
   
     if(msgType.Equals("D")) {
      
      return new QuickFix50Sp1.NewOrderSingle();
      
     }
   
     if(msgType.Equals("E")) {
      
      return new QuickFix50Sp1.NewOrderList();
      
     }
   
     if(msgType.Equals("F")) {
      
      return new QuickFix50Sp1.OrderCancelRequest();
      
     }
   
     if(msgType.Equals("G")) {
      
      return new QuickFix50Sp1.OrderCancelReplaceRequest();
      
     }
   
     if(msgType.Equals("H")) {
      
      return new QuickFix50Sp1.OrderStatusRequest();
      
     }
   
     if(msgType.Equals("J")) {
      
      return new QuickFix50Sp1.AllocationInstruction();
      
     }
   
     if(msgType.Equals("K")) {
      
      return new QuickFix50Sp1.ListCancelRequest();
      
     }
   
     if(msgType.Equals("L")) {
      
      return new QuickFix50Sp1.ListExecute();
      
     }
   
     if(msgType.Equals("M")) {
      
      return new QuickFix50Sp1.ListStatusRequest();
      
     }
   
     if(msgType.Equals("N")) {
      
      return new QuickFix50Sp1.ListStatus();
      
     }
   
     if(msgType.Equals("P")) {
      
      return new QuickFix50Sp1.AllocationInstructionAck();
      
     }
   
     if(msgType.Equals("Q")) {
      
      return new QuickFix50Sp1.DontKnowTrade();
      
     }
   
     if(msgType.Equals("R")) {
      
      return new QuickFix50Sp1.QuoteRequest();
      
     }
   
     if(msgType.Equals("S")) {
      
      return new QuickFix50Sp1.Quote();
      
     }
   
     if(msgType.Equals("T")) {
      
      return new QuickFix50Sp1.SettlementInstructions();
      
     }
   
     if(msgType.Equals("V")) {
      
      return new QuickFix50Sp1.MarketDataRequest();
      
     }
   
     if(msgType.Equals("W")) {
      
      return new QuickFix50Sp1.MarketDataSnapshotFullRefresh();
      
     }
   
     if(msgType.Equals("X")) {
      
      return new QuickFix50Sp1.MarketDataIncrementalRefresh();
      
     }
   
     if(msgType.Equals("Y")) {
      
      return new QuickFix50Sp1.MarketDataRequestReject();
      
     }
   
     if(msgType.Equals("Z")) {
      
      return new QuickFix50Sp1.QuoteCancel();
      
     }
   
     if(msgType.Equals("a")) {
      
      return new QuickFix50Sp1.QuoteStatusRequest();
      
     }
   
     if(msgType.Equals("b")) {
      
      return new QuickFix50Sp1.MassQuoteAcknowledgement();
      
     }
   
     if(msgType.Equals("c")) {
      
      return new QuickFix50Sp1.SecurityDefinitionRequest();
      
     }
   
     if(msgType.Equals("d")) {
      
      return new QuickFix50Sp1.SecurityDefinition();
      
     }
   
     if(msgType.Equals("e")) {
      
      return new QuickFix50Sp1.SecurityStatusRequest();
      
     }
   
     if(msgType.Equals("f")) {
      
      return new QuickFix50Sp1.SecurityStatus();
      
     }
   
     if(msgType.Equals("g")) {
      
      return new QuickFix50Sp1.TradingSessionStatusRequest();
      
     }
   
     if(msgType.Equals("h")) {
      
      return new QuickFix50Sp1.TradingSessionStatus();
      
     }
   
     if(msgType.Equals("i")) {
      
      return new QuickFix50Sp1.MassQuote();
      
     }
   
     if(msgType.Equals("j")) {
      
      return new QuickFix50Sp1.BusinessMessageReject();
      
     }
   
     if(msgType.Equals("k")) {
      
      return new QuickFix50Sp1.BidRequest();
      
     }
   
     if(msgType.Equals("l")) {
      
      return new QuickFix50Sp1.BidResponse();
      
     }
   
     if(msgType.Equals("m")) {
      
      return new QuickFix50Sp1.ListStrikePrice();
      
     }
   
     if(msgType.Equals("o")) {
      
      return new QuickFix50Sp1.RegistrationInstructions();
      
     }
   
     if(msgType.Equals("p")) {
      
      return new QuickFix50Sp1.RegistrationInstructionsResponse();
      
     }
   
     if(msgType.Equals("q")) {
      
      return new QuickFix50Sp1.OrderMassCancelRequest();
      
     }
   
     if(msgType.Equals("r")) {
      
      return new QuickFix50Sp1.OrderMassCancelReport();
      
     }
   
     if(msgType.Equals("s")) {
      
      return new QuickFix50Sp1.NewOrderCross();
      
     }
   
     if(msgType.Equals("t")) {
      
      return new QuickFix50Sp1.CrossOrderCancelReplaceRequest();
      
     }
   
     if(msgType.Equals("u")) {
      
      return new QuickFix50Sp1.CrossOrderCancelRequest();
      
     }
   
     if(msgType.Equals("v")) {
      
      return new QuickFix50Sp1.SecurityTypeRequest();
      
     }
   
     if(msgType.Equals("w")) {
      
      return new QuickFix50Sp1.SecurityTypes();
      
     }
   
     if(msgType.Equals("x")) {
      
      return new QuickFix50Sp1.SecurityListRequest();
      
     }
   
     if(msgType.Equals("y")) {
      
      return new QuickFix50Sp1.SecurityList();
      
     }
   
     if(msgType.Equals("z")) {
      
      return new QuickFix50Sp1.DerivativeSecurityListRequest();
      
     }
   
     if(msgType.Equals("AA")) {
      
      return new QuickFix50Sp1.DerivativeSecurityList();
      
     }
   
     if(msgType.Equals("AB")) {
      
      return new QuickFix50Sp1.NewOrderMultileg();
      
     }
   
     if(msgType.Equals("AC")) {
      
      return new QuickFix50Sp1.MultilegOrderCancelReplace();
      
     }
   
     if(msgType.Equals("AD")) {
      
      return new QuickFix50Sp1.TradeCaptureReportRequest();
      
     }
   
     if(msgType.Equals("AE")) {
      
      return new QuickFix50Sp1.TradeCaptureReport();
      
     }
   
     if(msgType.Equals("AF")) {
      
      return new QuickFix50Sp1.OrderMassStatusRequest();
      
     }
   
     if(msgType.Equals("AG")) {
      
      return new QuickFix50Sp1.QuoteRequestReject();
      
     }
   
     if(msgType.Equals("AH")) {
      
      return new QuickFix50Sp1.RFQRequest();
      
     }
   
     if(msgType.Equals("AI")) {
      
      return new QuickFix50Sp1.QuoteStatusReport();
      
     }
   
     if(msgType.Equals("AJ")) {
      
      return new QuickFix50Sp1.QuoteResponse();
      
     }
   
     if(msgType.Equals("AK")) {
      
      return new QuickFix50Sp1.Confirmation();
      
     }
   
     if(msgType.Equals("AL")) {
      
      return new QuickFix50Sp1.PositionMaintenanceRequest();
      
     }
   
     if(msgType.Equals("AM")) {
      
      return new QuickFix50Sp1.PositionMaintenanceReport();
      
     }
   
     if(msgType.Equals("AN")) {
      
      return new QuickFix50Sp1.RequestForPositions();
      
     }
   
     if(msgType.Equals("AO")) {
      
      return new QuickFix50Sp1.RequestForPositionsAck();
      
     }
   
     if(msgType.Equals("AP")) {
      
      return new QuickFix50Sp1.PositionReport();
      
     }
   
     if(msgType.Equals("AQ")) {
      
      return new QuickFix50Sp1.TradeCaptureReportRequestAck();
      
     }
   
     if(msgType.Equals("AR")) {
      
      return new QuickFix50Sp1.TradeCaptureReportAck();
      
     }
   
     if(msgType.Equals("AS")) {
      
      return new QuickFix50Sp1.AllocationReport();
      
     }
   
     if(msgType.Equals("AT")) {
      
      return new QuickFix50Sp1.AllocationReportAck();
      
     }
   
     if(msgType.Equals("AU")) {
      
      return new QuickFix50Sp1.ConfirmationAck();
      
     }
   
     if(msgType.Equals("AV")) {
      
      return new QuickFix50Sp1.SettlementInstructionRequest();
      
     }
   
     if(msgType.Equals("AW")) {
      
      return new QuickFix50Sp1.AssignmentReport();
      
     }
   
     if(msgType.Equals("AX")) {
      
      return new QuickFix50Sp1.CollateralRequest();
      
     }
   
     if(msgType.Equals("AY")) {
      
      return new QuickFix50Sp1.CollateralAssignment();
      
     }
   
     if(msgType.Equals("AZ")) {
      
      return new QuickFix50Sp1.CollateralResponse();
      
     }
   
     if(msgType.Equals("BA")) {
      
      return new QuickFix50Sp1.CollateralReport();
      
     }
   
     if(msgType.Equals("BB")) {
      
      return new QuickFix50Sp1.CollateralInquiry();
      
     }
   
     if(msgType.Equals("BC")) {
      
      return new QuickFix50Sp1.NetworkCounterpartySystemStatusRequest();
      
     }
   
     if(msgType.Equals("BD")) {
      
      return new QuickFix50Sp1.NetworkCounterpartySystemStatusResponse();
      
     }
   
     if(msgType.Equals("BE")) {
      
      return new QuickFix50Sp1.UserRequest();
      
     }
   
     if(msgType.Equals("BF")) {
      
      return new QuickFix50Sp1.UserResponse();
      
     }
   
     if(msgType.Equals("BG")) {
      
      return new QuickFix50Sp1.CollateralInquiryAck();
      
     }
   
     if(msgType.Equals("BH")) {
      
      return new QuickFix50Sp1.ConfirmationRequest();
      
     }
   
     if(msgType.Equals("BO")) {
      
      return new QuickFix50Sp1.ContraryIntentionReport();
      
     }
   
     if(msgType.Equals("BP")) {
      
      return new QuickFix50Sp1.SecurityDefinitionUpdateReport();
      
     }
   
     if(msgType.Equals("BK")) {
      
      return new QuickFix50Sp1.SecurityListUpdateReport();
      
     }
   
     if(msgType.Equals("BL")) {
      
      return new QuickFix50Sp1.AdjustedPositionReport();
      
     }
   
     if(msgType.Equals("BM")) {
      
      return new QuickFix50Sp1.AllocationInstructionAlert();
      
     }
   
     if(msgType.Equals("BN")) {
      
      return new QuickFix50Sp1.ExecutionAcknowledgement();
      
     }
   
     if(msgType.Equals("BJ")) {
      
      return new QuickFix50Sp1.TradingSessionList();
      
     }
   
     if(msgType.Equals("BI")) {
      
      return new QuickFix50Sp1.TradingSessionListRequest();
      
     }
   
     if(msgType.Equals("BQ")) {
      
      return new QuickFix50Sp1.SettlementObligationReport();
      
     }
   
     if(msgType.Equals("BR")) {
      
      return new QuickFix50Sp1.DerivativeSecurityListUpdateReport();
      
     }
   
     if(msgType.Equals("BS")) {
      
      return new QuickFix50Sp1.TradingSessionListUpdateReport();
      
     }
   
     if(msgType.Equals("BT")) {
      
      return new QuickFix50Sp1.MarketDefinitionRequest();
      
     }
   
     if(msgType.Equals("BU")) {
      
      return new QuickFix50Sp1.MarketDefinition();
      
     }
   
     if(msgType.Equals("BV")) {
      
      return new QuickFix50Sp1.MarketDefinitionUpdateReport();
      
     }
   
     if(msgType.Equals("BW")) {
      
      return new QuickFix50Sp1.ApplicationMessageRequest();
      
     }
   
     if(msgType.Equals("BX")) {
      
      return new QuickFix50Sp1.ApplicationMessageRequestAck();
      
     }
   
     if(msgType.Equals("BY")) {
      
      return new QuickFix50Sp1.ApplicationMessageReport();
      
     }
   
     if(msgType.Equals("BZ")) {
      
      return new QuickFix50Sp1.OrderMassActionReport();
      
     }
   
     if(msgType.Equals("CA")) {
      
      return new QuickFix50Sp1.OrderMassActionRequest();
      
     }
   
     if(msgType.Equals("CB")) {
      
      return new QuickFix50Sp1.UserNotification();
      
     }
   
    return new QuickFix50Sp1.Message();
    
    }
  };
}
  