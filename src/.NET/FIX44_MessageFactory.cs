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

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    
     if(msgType.Equals("0")) {
       return new QuickFix44.Heartbeat();
     }
   
     if(msgType.Equals("1")) {
       return new QuickFix44.TestRequest();
     }
   
     if(msgType.Equals("2")) {
       return new QuickFix44.ResendRequest();
     }
   
     if(msgType.Equals("3")) {
       return new QuickFix44.Reject();
     }
   
     if(msgType.Equals("4")) {
       return new QuickFix44.SequenceReset();
     }
   
     if(msgType.Equals("5")) {
       return new QuickFix44.Logout();
     }
   
     if(msgType.Equals("6")) {
       return new QuickFix44.IOI();
     }
   
     if(msgType.Equals("7")) {
       return new QuickFix44.Advertisement();
     }
   
     if(msgType.Equals("8")) {
       return new QuickFix44.ExecutionReport();
     }
   
     if(msgType.Equals("9")) {
       return new QuickFix44.OrderCancelReject();
     }
   
     if(msgType.Equals("A")) {
       return new QuickFix44.Logon();
     }
   
     if(msgType.Equals("B")) {
       return new QuickFix44.News();
     }
   
     if(msgType.Equals("C")) {
       return new QuickFix44.Email();
     }
   
     if(msgType.Equals("D")) {
       return new QuickFix44.NewOrderSingle();
     }
   
     if(msgType.Equals("E")) {
       return new QuickFix44.NewOrderList();
     }
   
     if(msgType.Equals("F")) {
       return new QuickFix44.OrderCancelRequest();
     }
   
     if(msgType.Equals("G")) {
       return new QuickFix44.OrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("H")) {
       return new QuickFix44.OrderStatusRequest();
     }
   
     if(msgType.Equals("J")) {
       return new QuickFix44.AllocationInstruction();
     }
   
     if(msgType.Equals("K")) {
       return new QuickFix44.ListCancelRequest();
     }
   
     if(msgType.Equals("L")) {
       return new QuickFix44.ListExecute();
     }
   
     if(msgType.Equals("M")) {
       return new QuickFix44.ListStatusRequest();
     }
   
     if(msgType.Equals("N")) {
       return new QuickFix44.ListStatus();
     }
   
     if(msgType.Equals("P")) {
       return new QuickFix44.AllocationInstructionAck();
     }
   
     if(msgType.Equals("Q")) {
       return new QuickFix44.DontKnowTrade();
     }
   
     if(msgType.Equals("R")) {
       return new QuickFix44.QuoteRequest();
     }
   
     if(msgType.Equals("S")) {
       return new QuickFix44.Quote();
     }
   
     if(msgType.Equals("T")) {
       return new QuickFix44.SettlementInstructions();
     }
   
     if(msgType.Equals("V")) {
       return new QuickFix44.MarketDataRequest();
     }
   
     if(msgType.Equals("W")) {
       return new QuickFix44.MarketDataSnapshotFullRefresh();
     }
   
     if(msgType.Equals("X")) {
       return new QuickFix44.MarketDataIncrementalRefresh();
     }
   
     if(msgType.Equals("Y")) {
       return new QuickFix44.MarketDataRequestReject();
     }
   
     if(msgType.Equals("Z")) {
       return new QuickFix44.QuoteCancel();
     }
   
     if(msgType.Equals("a")) {
       return new QuickFix44.QuoteStatusRequest();
     }
   
     if(msgType.Equals("b")) {
       return new QuickFix44.MassQuoteAcknowledgement();
     }
   
     if(msgType.Equals("c")) {
       return new QuickFix44.SecurityDefinitionRequest();
     }
   
     if(msgType.Equals("d")) {
       return new QuickFix44.SecurityDefinition();
     }
   
     if(msgType.Equals("e")) {
       return new QuickFix44.SecurityStatusRequest();
     }
   
     if(msgType.Equals("f")) {
       return new QuickFix44.SecurityStatus();
     }
   
     if(msgType.Equals("g")) {
       return new QuickFix44.TradingSessionStatusRequest();
     }
   
     if(msgType.Equals("h")) {
       return new QuickFix44.TradingSessionStatus();
     }
   
     if(msgType.Equals("i")) {
       return new QuickFix44.MassQuote();
     }
   
     if(msgType.Equals("j")) {
       return new QuickFix44.BusinessMessageReject();
     }
   
     if(msgType.Equals("k")) {
       return new QuickFix44.BidRequest();
     }
   
     if(msgType.Equals("l")) {
       return new QuickFix44.BidResponse();
     }
   
     if(msgType.Equals("m")) {
       return new QuickFix44.ListStrikePrice();
     }
   
     if(msgType.Equals("o")) {
       return new QuickFix44.RegistrationInstructions();
     }
   
     if(msgType.Equals("p")) {
       return new QuickFix44.RegistrationInstructionsResponse();
     }
   
     if(msgType.Equals("q")) {
       return new QuickFix44.OrderMassCancelRequest();
     }
   
     if(msgType.Equals("r")) {
       return new QuickFix44.OrderMassCancelReport();
     }
   
     if(msgType.Equals("s")) {
       return new QuickFix44.NewOrderCross();
     }
   
     if(msgType.Equals("t")) {
       return new QuickFix44.CrossOrderCancelReplaceRequest();
     }
   
     if(msgType.Equals("u")) {
       return new QuickFix44.CrossOrderCancelRequest();
     }
   
     if(msgType.Equals("v")) {
       return new QuickFix44.SecurityTypeRequest();
     }
   
     if(msgType.Equals("w")) {
       return new QuickFix44.SecurityTypes();
     }
   
     if(msgType.Equals("x")) {
       return new QuickFix44.SecurityListRequest();
     }
   
     if(msgType.Equals("y")) {
       return new QuickFix44.SecurityList();
     }
   
     if(msgType.Equals("z")) {
       return new QuickFix44.DerivativeSecurityListRequest();
     }
   
     if(msgType.Equals("AA")) {
       return new QuickFix44.DerivativeSecurityList();
     }
   
     if(msgType.Equals("AB")) {
       return new QuickFix44.NewOrderMultileg();
     }
   
     if(msgType.Equals("AC")) {
       return new QuickFix44.MultilegOrderCancelReplace();
     }
   
     if(msgType.Equals("AD")) {
       return new QuickFix44.TradeCaptureReportRequest();
     }
   
     if(msgType.Equals("AE")) {
       return new QuickFix44.TradeCaptureReport();
     }
   
     if(msgType.Equals("AF")) {
       return new QuickFix44.OrderMassStatusRequest();
     }
   
     if(msgType.Equals("AG")) {
       return new QuickFix44.QuoteRequestReject();
     }
   
     if(msgType.Equals("AH")) {
       return new QuickFix44.RFQRequest();
     }
   
     if(msgType.Equals("AI")) {
       return new QuickFix44.QuoteStatusReport();
     }
   
     if(msgType.Equals("AJ")) {
       return new QuickFix44.QuoteResponse();
     }
   
     if(msgType.Equals("AK")) {
       return new QuickFix44.Confirmation();
     }
   
     if(msgType.Equals("AL")) {
       return new QuickFix44.PositionMaintenanceRequest();
     }
   
     if(msgType.Equals("AM")) {
       return new QuickFix44.PositionMaintenanceReport();
     }
   
     if(msgType.Equals("AN")) {
       return new QuickFix44.RequestForPositions();
     }
   
     if(msgType.Equals("AO")) {
       return new QuickFix44.RequestForPositionsAck();
     }
   
     if(msgType.Equals("AP")) {
       return new QuickFix44.PositionReport();
     }
   
     if(msgType.Equals("AQ")) {
       return new QuickFix44.TradeCaptureReportRequestAck();
     }
   
     if(msgType.Equals("AR")) {
       return new QuickFix44.TradeCaptureReportAck();
     }
   
     if(msgType.Equals("AS")) {
       return new QuickFix44.AllocationReport();
     }
   
     if(msgType.Equals("AT")) {
       return new QuickFix44.AllocationReportAck();
     }
   
     if(msgType.Equals("AU")) {
       return new QuickFix44.ConfirmationAck();
     }
   
     if(msgType.Equals("AV")) {
       return new QuickFix44.SettlementInstructionRequest();
     }
   
     if(msgType.Equals("AW")) {
       return new QuickFix44.AssignmentReport();
     }
   
     if(msgType.Equals("AX")) {
       return new QuickFix44.CollateralRequest();
     }
   
     if(msgType.Equals("AY")) {
       return new QuickFix44.CollateralAssignment();
     }
   
     if(msgType.Equals("AZ")) {
       return new QuickFix44.CollateralResponse();
     }
   
     if(msgType.Equals("BA")) {
       return new QuickFix44.CollateralReport();
     }
   
     if(msgType.Equals("BB")) {
       return new QuickFix44.CollateralInquiry();
     }
   
     if(msgType.Equals("BC")) {
       return new QuickFix44.NetworkCounterpartySystemStatusRequest();
     }
   
     if(msgType.Equals("BD")) {
       return new QuickFix44.NetworkCounterpartySystemStatusResponse();
     }
   
     if(msgType.Equals("BE")) {
       return new QuickFix44.UserRequest();
     }
   
     if(msgType.Equals("BF")) {
       return new QuickFix44.UserResponse();
     }
   
     if(msgType.Equals("BG")) {
       return new QuickFix44.CollateralInquiryAck();
     }
   
     if(msgType.Equals("BH")) {
       return new QuickFix44.ConfirmationRequest();
     }
   
    return new QuickFix44.Message();
    }
  };
}
  