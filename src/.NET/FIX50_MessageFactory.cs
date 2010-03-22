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

namespace QuickFix50
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("6")) {
       return new QuickFix50.IOI();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix50.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix50.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix50.OrderCancelReject();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix50.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix50.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix50.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix50.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix50.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix50.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix50.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix50.AllocationInstruction();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix50.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix50.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix50.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix50.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix50.AllocationInstructionAck();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix50.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix50.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix50.Quote();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix50.SettlementInstructions();
     }
   
     if(msgType.Equals("V")) {
       return new QuickFix50.MarketDataRequest();
     }
   
     if(msgType.Equals("W")) {
       return new QuickFix50.MarketDataSnapshotFullRefresh();
     }
   
     if(msgType.Equals("X")) {
       return new QuickFix50.MarketDataIncrementalRefresh();
     }
   
     if(msgType.Equals("Y")) {
       return new QuickFix50.MarketDataRequestReject();
     }
   
     if(msgType.Equals("Z")) {
       return new QuickFix50.QuoteCancel();
     }
   
     if(msgType.Equals("a")) {
       return new QuickFix50.QuoteStatusRequest();
     }
   
     if(msgType.Equals("b")) {
       return new QuickFix50.MassQuoteAcknowledgement();
     }
   
     if(msgType.Equals("c")) {
       return new QuickFix50.SecurityDefinitionRequest();
     }
   
     if(msgType.Equals("d")) {
       return new QuickFix50.SecurityDefinition();
     }
   
     if(msgType.Equals("e")) {
       return new QuickFix50.SecurityStatusRequest();
     }
   
     if(msgType.Equals("f")) {
       return new QuickFix50.SecurityStatus();
     }
   
     if(msgType.Equals("g")) {
       return new QuickFix50.TradingSessionStatusRequest();
     }
   
     if(msgType.Equals("h")) {
       return new QuickFix50.TradingSessionStatus();
     }
   
     if(msgType.Equals("i")) {
       return new QuickFix50.MassQuote();
     }
   
     if(msgType.Equals("j")) {
       return new QuickFix50.BusinessMessageReject();
     }
   
     if(msgType.Equals("k")) {
       return new QuickFix50.BidRequest();
     }
   
     if(msgType.Equals("l")) {
       return new QuickFix50.BidResponse();
     }
   
     if(msgType.Equals("m")) {
       return new QuickFix50.ListStrikePrice();
     }
   
     if(msgType.Equals("o")) {
       return new QuickFix50.RegistrationInstructions();
     }
   
     if(msgType.Equals("p")) {
       return new QuickFix50.RegistrationInstructionsResponse();
     }
   
     if(msgType.Equals("q")) {
       return new QuickFix50.OrderMassCancelRequest();
     }
   
     if(msgType.Equals("r")) {
       return new QuickFix50.OrderMassCancelReport();
     }
   
     if(msgType.Equals("s")) {
       return new QuickFix50.NewOrderCross();
     }
   
     if(msgType.Equals("t")) {
       return new QuickFix50.CrossOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("u")) {
       return new QuickFix50.CrossOrderCancelRequest();
     }
   
     if(msgType.Equals("v")) {
       return new QuickFix50.SecurityTypeRequest();
     }
   
     if(msgType.Equals("w")) {
       return new QuickFix50.SecurityTypes();
     }
   
     if(msgType.Equals("x")) {
       return new QuickFix50.SecurityListRequest();
     }
   
     if(msgType.Equals("y")) {
       return new QuickFix50.SecurityList();
     }
   
     if(msgType.Equals("z")) {
       return new QuickFix50.DerivativeSecurityListRequest();
     }
   
     if(msgType.Equals("AA")) {
       return new QuickFix50.DerivativeSecurityList();
     }
   
     if(msgType.Equals("AB")) {
       return new QuickFix50.NewOrderMultileg();
     }
   
     if(msgType.Equals("AC")) {
       return new QuickFix50.MultilegOrderCancelReplace();
     }
   
     if(msgType.Equals("AD")) {
       return new QuickFix50.TradeCaptureReportRequest();
     }
   
     if(msgType.Equals("AE")) {
       return new QuickFix50.TradeCaptureReport();
     }
   
     if(msgType.Equals("AF")) {
       return new QuickFix50.OrderMassStatusRequest();
     }
   
     if(msgType.Equals("AG")) {
       return new QuickFix50.QuoteRequestReject();
     }
   
     if(msgType.Equals("AH")) {
       return new QuickFix50.RFQRequest();
     }
   
     if(msgType.Equals("AI")) {
       return new QuickFix50.QuoteStatusReport();
     }
   
     if(msgType.Equals("AJ")) {
       return new QuickFix50.QuoteResponse();
     }
   
     if(msgType.Equals("AK")) {
       return new QuickFix50.Confirmation();
     }
   
     if(msgType.Equals("AL")) {
       return new QuickFix50.PositionMaintenanceRequest();
     }
   
     if(msgType.Equals("AM")) {
       return new QuickFix50.PositionMaintenanceReport();
     }
   
     if(msgType.Equals("AN")) {
       return new QuickFix50.RequestForPositions();
     }
   
     if(msgType.Equals("AO")) {
       return new QuickFix50.RequestForPositionsAck();
     }
   
     if(msgType.Equals("AP")) {
       return new QuickFix50.PositionReport();
     }
   
     if(msgType.Equals("AQ")) {
       return new QuickFix50.TradeCaptureReportRequestAck();
     }
   
     if(msgType.Equals("AR")) {
       return new QuickFix50.TradeCaptureReportAck();
     }
   
     if(msgType.Equals("AS")) {
       return new QuickFix50.AllocationReport();
     }
   
     if(msgType.Equals("AT")) {
       return new QuickFix50.AllocationReportAck();
     }
   
     if(msgType.Equals("AU")) {
       return new QuickFix50.ConfirmationAck();
     }
   
     if(msgType.Equals("AV")) {
       return new QuickFix50.SettlementInstructionRequest();
     }
   
     if(msgType.Equals("AW")) {
       return new QuickFix50.AssignmentReport();
     }
   
     if(msgType.Equals("AX")) {
       return new QuickFix50.CollateralRequest();
     }
   
     if(msgType.Equals("AY")) {
       return new QuickFix50.CollateralAssignment();
     }
   
     if(msgType.Equals("AZ")) {
       return new QuickFix50.CollateralResponse();
     }
   
     if(msgType.Equals("BA")) {
       return new QuickFix50.CollateralReport();
     }
   
     if(msgType.Equals("BB")) {
       return new QuickFix50.CollateralInquiry();
     }
   
     if(msgType.Equals("BC")) {
       return new QuickFix50.NetworkCounterpartySystemStatusRequest();
     }
   
     if(msgType.Equals("BD")) {
       return new QuickFix50.NetworkCounterpartySystemStatusResponse();
     }
   
     if(msgType.Equals("BE")) {
       return new QuickFix50.UserRequest();
     }
   
     if(msgType.Equals("BF")) {
       return new QuickFix50.UserResponse();
     }
   
     if(msgType.Equals("BG")) {
       return new QuickFix50.CollateralInquiryAck();
     }
   
     if(msgType.Equals("BH")) {
       return new QuickFix50.ConfirmationRequest();
     }
   
     if(msgType.Equals("BO")) {
       return new QuickFix50.ContraryIntentionReport();
     }
   
     if(msgType.Equals("BP")) {
       return new QuickFix50.SecurityDefinitionUpdateReport();
     }
   
     if(msgType.Equals("BK")) {
       return new QuickFix50.SecurityListUpdateReport();
     }
   
     if(msgType.Equals("BL")) {
       return new QuickFix50.AdjustedPositionReport();
     }
   
     if(msgType.Equals("BM")) {
       return new QuickFix50.AllocationInstructionAlert();
     }
   
     if(msgType.Equals("BN")) {
       return new QuickFix50.ExecutionAcknowledgement();
     }
   
     if(msgType.Equals("BJ")) {
       return new QuickFix50.TradingSessionList();
     }
   
     if(msgType.Equals("BI")) {
       return new QuickFix50.TradingSessionListRequest();
     }
   
    return new QuickFix50.Message();
    }
  };
}
  