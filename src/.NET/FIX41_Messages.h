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

#pragma once

#include "Message.h"
#include "Group.h"
#include "Fields.h"

namespace Fix41
{
  public __gc class Header : public Fix::Message::Header
  {
  public:
    Header(Fix::Message* message) : Fix::Message::Header(message) {}
    
    NET_FIELD_SET(BeginString);
    NET_FIELD_SET(BodyLength);
    NET_FIELD_SET(MsgType);
    NET_FIELD_SET(SenderCompID);
    NET_FIELD_SET(TargetCompID);
    NET_FIELD_SET(OnBehalfOfCompID);
    NET_FIELD_SET(DeliverToCompID);
    NET_FIELD_SET(SecureDataLen);
    NET_FIELD_SET(SecureData);
    NET_FIELD_SET(MsgSeqNum);
    NET_FIELD_SET(SenderSubID);
    NET_FIELD_SET(SenderLocationID);
    NET_FIELD_SET(TargetSubID);
    NET_FIELD_SET(TargetLocationID);
    NET_FIELD_SET(OnBehalfOfSubID);
    NET_FIELD_SET(OnBehalfOfLocationID);
    NET_FIELD_SET(DeliverToSubID);
    NET_FIELD_SET(DeliverToLocationID);
    NET_FIELD_SET(PossDupFlag);
    NET_FIELD_SET(PossResend);
    NET_FIELD_SET(SendingTime);
    NET_FIELD_SET(OrigSendingTime);
  };
  
  public __gc class Trailer : public Fix::Message::Trailer
  {
  public:
    Trailer(Fix::Message* message) : Fix::Message::Trailer(message) {}
    
    NET_FIELD_SET(SignatureLength);
    NET_FIELD_SET(Signature);
    NET_FIELD_SET(CheckSum);
  };
  
  public __gc class Message : public Fix::Message
  {
  public: 
    Message() : Fix::Message(new Fix::BeginString("FIX.4.1"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( Fix::MsgType* msgType ) 
    : Fix::Message(
      new Fix::BeginString("FIX.4.1"),msgType ) 
      { 
        m_header = new Header(this); 
        m_trailer = new Trailer(this);
      }

    Header* getHeader() { return dynamic_cast<Header*>(Fix::Message::getHeader()); }
  };

  public __gc class Heartbeat : public Message
  {
  public: 
    Heartbeat() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("0"); }
  
    NET_FIELD_SET(TestReqID);
  };

  public __gc class Logon : public Message
  {
  public: 
    Logon() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("A"); }
    //
    Logon(
      Fix::EncryptMethod* aEncryptMethod,
      Fix::HeartBtInt* aHeartBtInt )
    : Message(MsgType())
    
    {
      set(aEncryptMethod);
      set(aHeartBtInt);
    }
  
    NET_FIELD_SET(EncryptMethod);
    NET_FIELD_SET(HeartBtInt);
    NET_FIELD_SET(RawDataLength);
    NET_FIELD_SET(RawData);
    NET_FIELD_SET(ResetSeqNumFlag);
  };

  public __gc class TestRequest : public Message
  {
  public: 
    TestRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("1"); }
    //
    TestRequest(
      Fix::TestReqID* aTestReqID )
    : Message(MsgType())
    
    {
      set(aTestReqID);
    }
  
    NET_FIELD_SET(TestReqID);
  };

  public __gc class ResendRequest : public Message
  {
  public: 
    ResendRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("2"); }
    //
    ResendRequest(
      Fix::BeginSeqNo* aBeginSeqNo,
      Fix::EndSeqNo* aEndSeqNo )
    : Message(MsgType())
    
    {
      set(aBeginSeqNo);
      set(aEndSeqNo);
    }
  
    NET_FIELD_SET(BeginSeqNo);
    NET_FIELD_SET(EndSeqNo);
  };

  public __gc class Reject : public Message
  {
  public: 
    Reject() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("3"); }
    //
    Reject(
      Fix::RefSeqNum* aRefSeqNum )
    : Message(MsgType())
    
    {
      set(aRefSeqNum);
    }
  
    NET_FIELD_SET(RefSeqNum);
    NET_FIELD_SET(Text);
  };

  public __gc class SequenceReset : public Message
  {
  public: 
    SequenceReset() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("4"); }
    //
    SequenceReset(
      Fix::NewSeqNo* aNewSeqNo )
    : Message(MsgType())
    
    {
      set(aNewSeqNo);
    }
  
    NET_FIELD_SET(GapFillFlag);
    NET_FIELD_SET(NewSeqNo);
  };

  public __gc class Logout : public Message
  {
  public: 
    Logout() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("5"); }
  
    NET_FIELD_SET(Text);
  };

  public __gc class Advertisement : public Message
  {
  public: 
    Advertisement() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("7"); }
    //
    Advertisement(
      Fix::AdvId* aAdvId,
      Fix::AdvTransType* aAdvTransType,
      Fix::Symbol* aSymbol,
      Fix::AdvSide* aAdvSide,
      Fix::Shares* aShares )
    : Message(MsgType())
    
    {
      set(aAdvId);
      set(aAdvTransType);
      set(aSymbol);
      set(aAdvSide);
      set(aShares);
    }
  
    NET_FIELD_SET(AdvId);
    NET_FIELD_SET(AdvTransType);
    NET_FIELD_SET(AdvRefID);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(AdvSide);
    NET_FIELD_SET(Shares);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(URLLink);
    NET_FIELD_SET(LastMkt);
  };

  public __gc class IndicationofInterest : public Message
  {
  public: 
    IndicationofInterest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("6"); }
    //
    IndicationofInterest(
      Fix::IOIid* aIOIid,
      Fix::IOITransType* aIOITransType,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide,
      Fix::IOIShares* aIOIShares )
    : Message(MsgType())
    
    {
      set(aIOIid);
      set(aIOITransType);
      set(aSymbol);
      set(aSide);
      set(aIOIShares);
    }
  
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(IOITransType);
    NET_FIELD_SET(IOIRefID);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(IOIShares);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(IOIQltyInd);
    NET_FIELD_SET(IOIOthSvc);
    NET_FIELD_SET(IOINaturalFlag);
    NET_FIELD_SET(NoIOIQualifiers);
    __gc class NoIOIQualifiers : public Fix::Group
    {
    public:
      NoIOIQualifiers() : Group(199, 104, message_order ) {}
        static int message_order __gc[] = {
        104,
      0};
      NET_FIELD_SET(IOIQualifier);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(URLLink);
  };

  public __gc class News : public Message
  {
  public: 
    News() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("B"); }
    //
    News(
      Fix::Headline* aHeadline )
    : Message(MsgType())
    
    {
      set(aHeadline);
    }
  
    NET_FIELD_SET(OrigTime);
    NET_FIELD_SET(Urgency);
    NET_FIELD_SET(Headline);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 22, message_order ) {}
        static int message_order __gc[] = {
        46,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        207,
        106,
        107,
      0};
      NET_FIELD_SET(RelatdSym);
      NET_FIELD_SET(SymbolSfx);
      NET_FIELD_SET(SecurityID);
      NET_FIELD_SET(IDSource);
      NET_FIELD_SET(SecurityType);
      NET_FIELD_SET(MaturityMonthYear);
      NET_FIELD_SET(MaturityDay);
      NET_FIELD_SET(PutOrCall);
      NET_FIELD_SET(StrikePrice);
      NET_FIELD_SET(OptAttribute);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(SecurityDesc);
    };
    NET_FIELD_SET(LinesOfText);
    __gc class LinesOfText : public Fix::Group
    {
    public:
      LinesOfText() : Group(33, 58, message_order ) {}
        static int message_order __gc[] = {
        58,
      0};
      NET_FIELD_SET(Text);
    };
    NET_FIELD_SET(URLLink);
    NET_FIELD_SET(RawDataLength);
    NET_FIELD_SET(RawData);
  };

  public __gc class Email : public Message
  {
  public: 
    Email() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("C"); }
    //
    Email(
      Fix::EmailThreadID* aEmailThreadID,
      Fix::EmailType* aEmailType,
      Fix::Subject* aSubject )
    : Message(MsgType())
    
    {
      set(aEmailThreadID);
      set(aEmailType);
      set(aSubject);
    }
  
    NET_FIELD_SET(EmailThreadID);
    NET_FIELD_SET(EmailType);
    NET_FIELD_SET(OrigTime);
    NET_FIELD_SET(Subject);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 22, message_order ) {}
        static int message_order __gc[] = {
        46,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        207,
        106,
        107,
      0};
      NET_FIELD_SET(RelatdSym);
      NET_FIELD_SET(SymbolSfx);
      NET_FIELD_SET(SecurityID);
      NET_FIELD_SET(IDSource);
      NET_FIELD_SET(SecurityType);
      NET_FIELD_SET(MaturityMonthYear);
      NET_FIELD_SET(MaturityDay);
      NET_FIELD_SET(PutOrCall);
      NET_FIELD_SET(StrikePrice);
      NET_FIELD_SET(OptAttribute);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(SecurityDesc);
    };
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(LinesOfText);
    __gc class LinesOfText : public Fix::Group
    {
    public:
      LinesOfText() : Group(33, 58, message_order ) {}
        static int message_order __gc[] = {
        58,
      0};
      NET_FIELD_SET(Text);
    };
    NET_FIELD_SET(RawDataLength);
    NET_FIELD_SET(RawData);
  };

  public __gc class QuoteRequest : public Message
  {
  public: 
    QuoteRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("R"); }
    //
    QuoteRequest(
      Fix::QuoteReqID* aQuoteReqID,
      Fix::Symbol* aSymbol )
    : Message(MsgType())
    
    {
      set(aQuoteReqID);
      set(aSymbol);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
  };

  public __gc class Quote : public Message
  {
  public: 
    Quote() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("S"); }
    //
    Quote(
      Fix::QuoteID* aQuoteID,
      Fix::Symbol* aSymbol )
    : Message(MsgType())
    
    {
      set(aQuoteID);
      set(aSymbol);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(BidPx);
    NET_FIELD_SET(OfferPx);
    NET_FIELD_SET(BidSize);
    NET_FIELD_SET(OfferSize);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(BidSpotRate);
    NET_FIELD_SET(OfferSpotRate);
    NET_FIELD_SET(BidForwardPoints);
    NET_FIELD_SET(OfferForwardPoints);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
  };

  public __gc class NewOrderSingle : public Message
  {
  public: 
    NewOrderSingle() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("D"); }
    //
    NewOrderSingle(
      Fix::ClOrdID* aClOrdID,
      Fix::HandlInst* aHandlInst,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(CustomerOrFirm);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
  };

  public __gc class ExecutionReport : public Message
  {
  public: 
    ExecutionReport() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("8"); }
    //
    ExecutionReport(
      Fix::OrderID* aOrderID,
      Fix::ExecID* aExecID,
      Fix::ExecTransType* aExecTransType,
      Fix::ExecType* aExecType,
      Fix::OrdStatus* aOrdStatus,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide,
      Fix::OrderQty* aOrderQty,
      Fix::LastShares* aLastShares,
      Fix::LastPx* aLastPx,
      Fix::LeavesQty* aLeavesQty,
      Fix::CumQty* aCumQty,
      Fix::AvgPx* aAvgPx )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aExecID);
      set(aExecTransType);
      set(aExecType);
      set(aOrdStatus);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aLastShares);
      set(aLastPx);
      set(aLeavesQty);
      set(aCumQty);
      set(aAvgPx);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(ExecTransType);
    NET_FIELD_SET(ExecRefID);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(OrdRejReason);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(LastShares);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(LastCapacity);
    NET_FIELD_SET(LeavesQty);
    NET_FIELD_SET(CumQty);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ReportToExch);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(SettlCurrAmt);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
  };

  public __gc class DontKnowTrade : public Message
  {
  public: 
    DontKnowTrade() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("Q"); }
    //
    DontKnowTrade(
      Fix::DKReason* aDKReason,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aDKReason);
      set(aSymbol);
      set(aSide);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(DKReason);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(LastShares);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(Text);
  };

  public __gc class OrderCancelReplaceRequest : public Message
  {
  public: 
    OrderCancelReplaceRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("G"); }
    //
    OrderCancelReplaceRequest(
      Fix::OrigClOrdID* aOrigClOrdID,
      Fix::ClOrdID* aClOrdID,
      Fix::HandlInst* aHandlInst,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(CustomerOrFirm);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(LocateReqd);
  };

  public __gc class OrderCancelRequest : public Message
  {
  public: 
    OrderCancelRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("F"); }
    //
    OrderCancelRequest(
      Fix::OrigClOrdID* aOrigClOrdID,
      Fix::ClOrdID* aClOrdID,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
    }
  
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(Text);
  };

  public __gc class OrderCancelReject : public Message
  {
  public: 
    OrderCancelReject() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("9"); }
    //
    OrderCancelReject(
      Fix::OrderID* aOrderID,
      Fix::ClOrdID* aClOrdID,
      Fix::OrigClOrdID* aOrigClOrdID,
      Fix::OrdStatus* aOrdStatus )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(CxlRejReason);
    NET_FIELD_SET(Text);
  };

  public __gc class OrderStatusRequest : public Message
  {
  public: 
    OrderStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("H"); }
    //
    OrderStatusRequest(
      Fix::ClOrdID* aClOrdID,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Side);
  };

  public __gc class Allocation : public Message
  {
  public: 
    Allocation() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("J"); }
    //
    Allocation(
      Fix::AllocID* aAllocID,
      Fix::AllocTransType* aAllocTransType,
      Fix::Side* aSide,
      Fix::Symbol* aSymbol,
      Fix::Shares* aShares,
      Fix::AvgPx* aAvgPx,
      Fix::TradeDate* aTradeDate )
    : Message(MsgType())
    
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aSide);
      set(aSymbol);
      set(aShares);
      set(aAvgPx);
      set(aTradeDate);
    }
  
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(AllocTransType);
    NET_FIELD_SET(RefAllocID);
    NET_FIELD_SET(AllocLinkID);
    NET_FIELD_SET(AllocLinkType);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
        11,
        37,
        198,
        66,
        105,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(WaveNo);
    };
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public Fix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
        32,
        17,
        31,
        29,
      0};
      NET_FIELD_SET(LastShares);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastCapacity);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(Shares);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(AvgPrxPrecision);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 12, message_order ) {}
        static int message_order __gc[] = {
        79,
        80,
        81,
        92,
        208,
        209,
        161,
        76,
        109,
        12,
        13,
        153,
        154,
        119,
        120,
        155,
        156,
        159,
        160,
        
          137,
          138,
          139,
        
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocShares);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(BrokerOfCredit);
      NET_FIELD_SET(NotifyBrokerOfCredit);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(ExecBroker);
      NET_FIELD_SET(ClientID);
      NET_FIELD_SET(Commission);
      NET_FIELD_SET(CommType);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(SettlInstMode);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public Fix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
          137,
          138,
          139,
        0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
    };
  };

  public __gc class AllocationACK : public Message
  {
  public: 
    AllocationACK() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("P"); }
    //
    AllocationACK(
      Fix::AllocID* aAllocID,
      Fix::TradeDate* aTradeDate,
      Fix::AllocStatus* aAllocStatus )
    : Message(MsgType())
    
    {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }
  
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AllocStatus);
    NET_FIELD_SET(AllocRejCode);
    NET_FIELD_SET(Text);
  };

  public __gc class SettlementInstructions : public Message
  {
  public: 
    SettlementInstructions() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("T"); }
    //
    SettlementInstructions(
      Fix::SettlInstID* aSettlInstID,
      Fix::SettlInstTransType* aSettlInstTransType,
      Fix::SettlInstMode* aSettlInstMode,
      Fix::SettlInstSource* aSettlInstSource,
      Fix::AllocAccount* aAllocAccount,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aSettlInstID);
      set(aSettlInstTransType);
      set(aSettlInstMode);
      set(aSettlInstSource);
      set(aAllocAccount);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(SettlInstID);
    NET_FIELD_SET(SettlInstTransType);
    NET_FIELD_SET(SettlInstMode);
    NET_FIELD_SET(SettlInstSource);
    NET_FIELD_SET(AllocAccount);
    NET_FIELD_SET(SettlLocation);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(StandInstDbType);
    NET_FIELD_SET(StandInstDbName);
    NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(SettlDeliveryType);
    NET_FIELD_SET(SettlDepositoryCode);
    NET_FIELD_SET(SettlBrkrCode);
    NET_FIELD_SET(SettlInstCode);
    NET_FIELD_SET(SecuritySettlAgentName);
    NET_FIELD_SET(SecuritySettlAgentCode);
    NET_FIELD_SET(SecuritySettlAgentAcctNum);
    NET_FIELD_SET(SecuritySettlAgentAcctName);
    NET_FIELD_SET(SecuritySettlAgentContactName);
    NET_FIELD_SET(SecuritySettlAgentContactPhone);
    NET_FIELD_SET(CashSettlAgentName);
    NET_FIELD_SET(CashSettlAgentCode);
    NET_FIELD_SET(CashSettlAgentAcctNum);
    NET_FIELD_SET(CashSettlAgentAcctName);
    NET_FIELD_SET(CashSettlAgentContactName);
    NET_FIELD_SET(CashSettlAgentContactPhone);
  };

  public __gc class NewOrderList : public Message
  {
  public: 
    NewOrderList() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("E"); }
    //
    NewOrderList(
      Fix::ListID* aListID,
      Fix::ListSeqNo* aListSeqNo,
      Fix::ListNoOrds* aListNoOrds,
      Fix::ClOrdID* aClOrdID,
      Fix::HandlInst* aHandlInst,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide,
      Fix::OrderQty* aOrderQty,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aListSeqNo);
      set(aListNoOrds);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(WaveNo);
    NET_FIELD_SET(ListSeqNo);
    NET_FIELD_SET(ListNoOrds);
    NET_FIELD_SET(ListExecInst);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Symbol);
    NET_FIELD_SET(SymbolSfx);
    NET_FIELD_SET(SecurityID);
    NET_FIELD_SET(IDSource);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(MaturityMonthYear);
    NET_FIELD_SET(MaturityDay);
    NET_FIELD_SET(PutOrCall);
    NET_FIELD_SET(StrikePrice);
    NET_FIELD_SET(OptAttribute);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(CustomerOrFirm);
    NET_FIELD_SET(MaxShow);
  };

  public __gc class ListStatus : public Message
  {
  public: 
    ListStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("N"); }
    //
    ListStatus(
      Fix::ListID* aListID,
      Fix::NoRpts* aNoRpts,
      Fix::RptSeq* aRptSeq )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aNoRpts);
      set(aRptSeq);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(WaveNo);
    NET_FIELD_SET(NoRpts);
    NET_FIELD_SET(RptSeq);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 6, message_order ) {}
        static int message_order __gc[] = {
        11,
        14,
        151,
        84,
        6,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(CumQty);
      NET_FIELD_SET(LeavesQty);
      NET_FIELD_SET(CxlQty);
      NET_FIELD_SET(AvgPx);
    };
  };

  public __gc class ListExecute : public Message
  {
  public: 
    ListExecute() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("L"); }
    //
    ListExecute(
      Fix::ListID* aListID )
    : Message(MsgType())
    
    {
      set(aListID);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(WaveNo);
    NET_FIELD_SET(Text);
  };

  public __gc class ListCancelRequest : public Message
  {
  public: 
    ListCancelRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("K"); }
    //
    ListCancelRequest(
      Fix::ListID* aListID )
    : Message(MsgType())
    
    {
      set(aListID);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(WaveNo);
    NET_FIELD_SET(Text);
  };

  public __gc class ListStatusRequest : public Message
  {
  public: 
    ListStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("M"); }
    //
    ListStatusRequest(
      Fix::ListID* aListID )
    : Message(MsgType())
    
    {
      set(aListID);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(WaveNo);
    NET_FIELD_SET(Text);
  };
}

 