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

namespace Fix42
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
    NET_FIELD_SET(XmlDataLen);
    NET_FIELD_SET(XmlData);
    NET_FIELD_SET(MessageEncoding);
    NET_FIELD_SET(LastMsgSeqNumProcessed);
    NET_FIELD_SET(OnBehalfOfSendingTime);
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
    Message() : Fix::Message(new Fix::BeginString("FIX.4.2"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( Fix::MsgType* msgType ) 
    : Fix::Message(
      new Fix::BeginString("FIX.4.2"),msgType ) 
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
    NET_FIELD_SET(MaxMessageSize);
    NET_FIELD_SET(NoMsgTypes);
    __gc class NoMsgTypes : public Fix::Group
    {
    public:
      NoMsgTypes() : Group(384, 372, message_order ) {}
        static int message_order __gc[] = {
        372,
        385,
      0};
      NET_FIELD_SET(RefMsgType);
      NET_FIELD_SET(MsgDirection);
    };
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
    NET_FIELD_SET(RefTagID);
    NET_FIELD_SET(RefMsgType);
    NET_FIELD_SET(SessionRejectReason);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(AdvSide);
    NET_FIELD_SET(Shares);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(URLLink);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(IOIShares);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(IOIQltyInd);
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
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(URLLink);
    NET_FIELD_SET(NoRoutingIDs);
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 216, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
    };
    NET_FIELD_SET(SpreadToBenchmark);
    NET_FIELD_SET(Benchmark);
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
    NET_FIELD_SET(EncodedHeadlineLen);
    NET_FIELD_SET(EncodedHeadline);
    NET_FIELD_SET(NoRoutingIDs);
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 216, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
    };
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
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
    };
    NET_FIELD_SET(LinesOfText);
    __gc class LinesOfText : public Fix::Group
    {
    public:
      LinesOfText() : Group(33, 58, message_order ) {}
        static int message_order __gc[] = {
        58,
        354,
        355,
      0};
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(EncodedSubjectLen);
    NET_FIELD_SET(EncodedSubject);
    NET_FIELD_SET(NoRoutingIDs);
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 216, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
    };
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
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
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
        354,
        355,
      0};
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
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
      Fix::QuoteReqID* aQuoteReqID )
    : Message(MsgType())
    
    {
      set(aQuoteReqID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
        55,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
        140,
        303,
        336,
        54,
        38,
        64,
        40,
        193,
        192,
        126,
        60,
        15,
      0};
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(QuoteRequestType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(Currency);
    };
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
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(TradingSessionID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
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
    NET_FIELD_SET(Currency);
  };

  public __gc class MassQuote : public Message
  {
  public: 
    MassQuote() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("i"); }
    //
    MassQuote(
      Fix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(DefBidSize);
    NET_FIELD_SET(DefOfferSize);
    NET_FIELD_SET(NoQuoteSets);
    __gc class NoQuoteSets : public Fix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
        302,
        311,
        312,
        309,
        305,
        310,
        313,
        314,
        315,
        316,
        317,
        436,
        435,
        308,
        306,
        362,
        363,
        307,
        364,
        365,
        367,
        304,
        
          299,
          55,
          65,
          48,
          22,
          167,
          200,
          205,
          201,
          202,
          206,
          231,
          223,
          207,
          106,
          348,
          349,
          107,
          350,
          351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          60,
          336,
          64,
          40,
          193,
          192,
          15,
        
      0};
      NET_FIELD_SET(QuoteSetID);
      NET_FIELD_SET(UnderlyingSymbol);
      NET_FIELD_SET(UnderlyingSymbolSfx);
      NET_FIELD_SET(UnderlyingSecurityID);
      NET_FIELD_SET(UnderlyingIDSource);
      NET_FIELD_SET(UnderlyingSecurityType);
      NET_FIELD_SET(UnderlyingMaturityMonthYear);
      NET_FIELD_SET(UnderlyingMaturityDay);
      NET_FIELD_SET(UnderlyingPutOrCall);
      NET_FIELD_SET(UnderlyingStrikePrice);
      NET_FIELD_SET(UnderlyingOptAttribute);
      NET_FIELD_SET(UnderlyingContractMultiplier);
      NET_FIELD_SET(UnderlyingCouponRate);
      NET_FIELD_SET(UnderlyingSecurityExchange);
      NET_FIELD_SET(UnderlyingIssuer);
      NET_FIELD_SET(EncodedUnderlyingIssuerLen);
      NET_FIELD_SET(EncodedUnderlyingIssuer);
      NET_FIELD_SET(UnderlyingSecurityDesc);
      NET_FIELD_SET(EncodedUnderlyingSecurityDescLen);
      NET_FIELD_SET(EncodedUnderlyingSecurityDesc);
      NET_FIELD_SET(QuoteSetValidUntilTime);
      NET_FIELD_SET(TotQuoteEntries);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 15, message_order ) {}
        static int message_order __gc[] = {
          299,
          55,
          65,
          48,
          22,
          167,
          200,
          205,
          201,
          202,
          206,
          231,
          223,
          207,
          106,
          348,
          349,
          107,
          350,
          351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          60,
          336,
          64,
          40,
          193,
          192,
          15,
        0};
      NET_FIELD_SET(QuoteEntryID);
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
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
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(Currency);
    };
    };
  };

  public __gc class QuoteCancel : public Message
  {
  public: 
    QuoteCancel() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("Z"); }
    //
    QuoteCancel(
      Fix::QuoteID* aQuoteID,
      Fix::QuoteCancelType* aQuoteCancelType )
    : Message(MsgType())
    
    {
      set(aQuoteID);
      set(aQuoteCancelType);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteCancelType);
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 22, message_order ) {}
        static int message_order __gc[] = {
        55,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
        311,
      0};
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(UnderlyingSymbol);
    };
  };

  public __gc class QuoteStatusRequest : public Message
  {
  public: 
    QuoteStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("a"); }
    //
    QuoteStatusRequest(
      Fix::Symbol* aSymbol )
    : Message(MsgType())
    
    {
      set(aSymbol);
    }
  
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TradingSessionID);
  };

  public __gc class QuoteAcknowledgement : public Message
  {
  public: 
    QuoteAcknowledgement() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("b"); }
    //
    QuoteAcknowledgement(
      Fix::QuoteAckStatus* aQuoteAckStatus )
    : Message(MsgType())
    
    {
      set(aQuoteAckStatus);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteAckStatus);
    NET_FIELD_SET(QuoteRejectReason);
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(NoQuoteSets);
    __gc class NoQuoteSets : public Fix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
        302,
        311,
        312,
        309,
        305,
        310,
        313,
        314,
        315,
        316,
        317,
        436,
        435,
        308,
        306,
        362,
        363,
        307,
        364,
        365,
        304,
        
          299,
          55,
          65,
          48,
          22,
          167,
          200,
          205,
          201,
          202,
          206,
          231,
          223,
          207,
          106,
          348,
          349,
          107,
          350,
          351,
          368,
        
      0};
      NET_FIELD_SET(QuoteSetID);
      NET_FIELD_SET(UnderlyingSymbol);
      NET_FIELD_SET(UnderlyingSymbolSfx);
      NET_FIELD_SET(UnderlyingSecurityID);
      NET_FIELD_SET(UnderlyingIDSource);
      NET_FIELD_SET(UnderlyingSecurityType);
      NET_FIELD_SET(UnderlyingMaturityMonthYear);
      NET_FIELD_SET(UnderlyingMaturityDay);
      NET_FIELD_SET(UnderlyingPutOrCall);
      NET_FIELD_SET(UnderlyingStrikePrice);
      NET_FIELD_SET(UnderlyingOptAttribute);
      NET_FIELD_SET(UnderlyingContractMultiplier);
      NET_FIELD_SET(UnderlyingCouponRate);
      NET_FIELD_SET(UnderlyingSecurityExchange);
      NET_FIELD_SET(UnderlyingIssuer);
      NET_FIELD_SET(EncodedUnderlyingIssuerLen);
      NET_FIELD_SET(EncodedUnderlyingIssuer);
      NET_FIELD_SET(UnderlyingSecurityDesc);
      NET_FIELD_SET(EncodedUnderlyingSecurityDescLen);
      NET_FIELD_SET(EncodedUnderlyingSecurityDesc);
      NET_FIELD_SET(TotQuoteEntries);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 22, message_order ) {}
        static int message_order __gc[] = {
          299,
          55,
          65,
          48,
          22,
          167,
          200,
          205,
          201,
          202,
          206,
          231,
          223,
          207,
          106,
          348,
          349,
          107,
          350,
          351,
          368,
        0};
      NET_FIELD_SET(QuoteEntryID);
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(QuoteEntryRejectReason);
    };
    };
  };

  public __gc class MarketDataRequest : public Message
  {
  public: 
    MarketDataRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("V"); }
    //
    MarketDataRequest(
      Fix::MDReqID* aMDReqID,
      Fix::SubscriptionRequestType* aSubscriptionRequestType,
      Fix::MarketDepth* aMarketDepth )
    : Message(MsgType())
    
    {
      set(aMDReqID);
      set(aSubscriptionRequestType);
      set(aMarketDepth);
    }
  
    NET_FIELD_SET(MDReqID);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(MarketDepth);
    NET_FIELD_SET(MDUpdateType);
    NET_FIELD_SET(AggregatedBook);
    NET_FIELD_SET(NoMDEntryTypes);
    __gc class NoMDEntryTypes : public Fix::Group
    {
    public:
      NoMDEntryTypes() : Group(267, 269, message_order ) {}
        static int message_order __gc[] = {
        269,
      0};
      NET_FIELD_SET(MDEntryType);
    };
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 22, message_order ) {}
        static int message_order __gc[] = {
        55,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
        336,
      0};
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(TradingSessionID);
    };
  };

  public __gc class MarketDataSnapshotFullRefresh : public Message
  {
  public: 
    MarketDataSnapshotFullRefresh() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("W"); }
    //
    MarketDataSnapshotFullRefresh(
      Fix::Symbol* aSymbol )
    : Message(MsgType())
    
    {
      set(aSymbol);
    }
  
    NET_FIELD_SET(MDReqID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(FinancialStatus);
    NET_FIELD_SET(CorporateAction);
    NET_FIELD_SET(TotalVolumeTraded);
    NET_FIELD_SET(NoMDEntries);
    __gc class NoMDEntries : public Fix::Group
    {
    public:
      NoMDEntries() : Group(268, 15, message_order ) {}
        static int message_order __gc[] = {
        269,
        270,
        15,
        271,
        272,
        273,
        274,
        275,
        336,
        276,
        277,
        282,
        283,
        284,
        286,
        59,
        432,
        126,
        110,
        18,
        287,
        37,
        299,
        288,
        289,
        346,
        290,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(MDEntryPx);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(MDEntrySize);
      NET_FIELD_SET(MDEntryDate);
      NET_FIELD_SET(MDEntryTime);
      NET_FIELD_SET(TickDirection);
      NET_FIELD_SET(MDMkt);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(QuoteCondition);
      NET_FIELD_SET(TradeCondition);
      NET_FIELD_SET(MDEntryOriginator);
      NET_FIELD_SET(LocationID);
      NET_FIELD_SET(DeskID);
      NET_FIELD_SET(OpenCloseSettleFlag);
      NET_FIELD_SET(TimeInForce);
      NET_FIELD_SET(ExpireDate);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(MinQty);
      NET_FIELD_SET(ExecInst);
      NET_FIELD_SET(SellerDays);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(QuoteEntryID);
      NET_FIELD_SET(MDEntryBuyer);
      NET_FIELD_SET(MDEntrySeller);
      NET_FIELD_SET(NumberOfOrders);
      NET_FIELD_SET(MDEntryPositionNo);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
  };

  public __gc class MarketDataIncrementalRefresh : public Message
  {
  public: 
    MarketDataIncrementalRefresh() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("X"); }
  
    NET_FIELD_SET(MDReqID);
    NET_FIELD_SET(NoMDEntries);
    __gc class NoMDEntries : public Fix::Group
    {
    public:
      NoMDEntries() : Group(268, 15, message_order ) {}
        static int message_order __gc[] = {
        279,
        285,
        269,
        278,
        280,
        55,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
        291,
        292,
        270,
        15,
        271,
        272,
        273,
        274,
        275,
        336,
        276,
        277,
        282,
        283,
        284,
        286,
        59,
        432,
        126,
        110,
        18,
        287,
        37,
        299,
        288,
        289,
        346,
        290,
        387,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(MDUpdateAction);
      NET_FIELD_SET(DeleteReason);
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(MDEntryID);
      NET_FIELD_SET(MDEntryRefID);
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(FinancialStatus);
      NET_FIELD_SET(CorporateAction);
      NET_FIELD_SET(MDEntryPx);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(MDEntrySize);
      NET_FIELD_SET(MDEntryDate);
      NET_FIELD_SET(MDEntryTime);
      NET_FIELD_SET(TickDirection);
      NET_FIELD_SET(MDMkt);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(QuoteCondition);
      NET_FIELD_SET(TradeCondition);
      NET_FIELD_SET(MDEntryOriginator);
      NET_FIELD_SET(LocationID);
      NET_FIELD_SET(DeskID);
      NET_FIELD_SET(OpenCloseSettleFlag);
      NET_FIELD_SET(TimeInForce);
      NET_FIELD_SET(ExpireDate);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(MinQty);
      NET_FIELD_SET(ExecInst);
      NET_FIELD_SET(SellerDays);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(QuoteEntryID);
      NET_FIELD_SET(MDEntryBuyer);
      NET_FIELD_SET(MDEntrySeller);
      NET_FIELD_SET(NumberOfOrders);
      NET_FIELD_SET(MDEntryPositionNo);
      NET_FIELD_SET(TotalVolumeTraded);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
  };

  public __gc class MarketDataRequestReject : public Message
  {
  public: 
    MarketDataRequestReject() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("Y"); }
    //
    MarketDataRequestReject(
      Fix::MDReqID* aMDReqID )
    : Message(MsgType())
    
    {
      set(aMDReqID);
    }
  
    NET_FIELD_SET(MDReqID);
    NET_FIELD_SET(MDReqRejReason);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class SecurityDefinitionRequest : public Message
  {
  public: 
    SecurityDefinitionRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("c"); }
    //
    SecurityDefinitionRequest(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityRequestType* aSecurityRequestType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityRequestType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityRequestType);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 54, message_order ) {}
        static int message_order __gc[] = {
        311,
        312,
        309,
        305,
        310,
        313,
        314,
        315,
        316,
        317,
        436,
        435,
        308,
        306,
        362,
        363,
        307,
        364,
        365,
        319,
        54,
        318,
      0};
      NET_FIELD_SET(UnderlyingSymbol);
      NET_FIELD_SET(UnderlyingSymbolSfx);
      NET_FIELD_SET(UnderlyingSecurityID);
      NET_FIELD_SET(UnderlyingIDSource);
      NET_FIELD_SET(UnderlyingSecurityType);
      NET_FIELD_SET(UnderlyingMaturityMonthYear);
      NET_FIELD_SET(UnderlyingMaturityDay);
      NET_FIELD_SET(UnderlyingPutOrCall);
      NET_FIELD_SET(UnderlyingStrikePrice);
      NET_FIELD_SET(UnderlyingOptAttribute);
      NET_FIELD_SET(UnderlyingContractMultiplier);
      NET_FIELD_SET(UnderlyingCouponRate);
      NET_FIELD_SET(UnderlyingSecurityExchange);
      NET_FIELD_SET(UnderlyingIssuer);
      NET_FIELD_SET(EncodedUnderlyingIssuerLen);
      NET_FIELD_SET(EncodedUnderlyingIssuer);
      NET_FIELD_SET(UnderlyingSecurityDesc);
      NET_FIELD_SET(EncodedUnderlyingSecurityDescLen);
      NET_FIELD_SET(EncodedUnderlyingSecurityDesc);
      NET_FIELD_SET(RatioQty);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(UnderlyingCurrency);
    };
  };

  public __gc class SecurityDefinition : public Message
  {
  public: 
    SecurityDefinition() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("d"); }
    //
    SecurityDefinition(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityResponseID* aSecurityResponseID,
      Fix::TotalNumSecurities* aTotalNumSecurities )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aTotalNumSecurities);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityResponseType);
    NET_FIELD_SET(TotalNumSecurities);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 54, message_order ) {}
        static int message_order __gc[] = {
        311,
        312,
        309,
        305,
        310,
        313,
        314,
        315,
        316,
        317,
        436,
        435,
        308,
        306,
        362,
        363,
        307,
        364,
        365,
        319,
        54,
        318,
      0};
      NET_FIELD_SET(UnderlyingSymbol);
      NET_FIELD_SET(UnderlyingSymbolSfx);
      NET_FIELD_SET(UnderlyingSecurityID);
      NET_FIELD_SET(UnderlyingIDSource);
      NET_FIELD_SET(UnderlyingSecurityType);
      NET_FIELD_SET(UnderlyingMaturityMonthYear);
      NET_FIELD_SET(UnderlyingMaturityDay);
      NET_FIELD_SET(UnderlyingPutOrCall);
      NET_FIELD_SET(UnderlyingStrikePrice);
      NET_FIELD_SET(UnderlyingOptAttribute);
      NET_FIELD_SET(UnderlyingContractMultiplier);
      NET_FIELD_SET(UnderlyingCouponRate);
      NET_FIELD_SET(UnderlyingSecurityExchange);
      NET_FIELD_SET(UnderlyingIssuer);
      NET_FIELD_SET(EncodedUnderlyingIssuerLen);
      NET_FIELD_SET(EncodedUnderlyingIssuer);
      NET_FIELD_SET(UnderlyingSecurityDesc);
      NET_FIELD_SET(EncodedUnderlyingSecurityDescLen);
      NET_FIELD_SET(EncodedUnderlyingSecurityDesc);
      NET_FIELD_SET(RatioQty);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(UnderlyingCurrency);
    };
  };

  public __gc class SecurityStatusRequest : public Message
  {
  public: 
    SecurityStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("e"); }
    //
    SecurityStatusRequest(
      Fix::SecurityStatusReqID* aSecurityStatusReqID,
      Fix::Symbol* aSymbol,
      Fix::SubscriptionRequestType* aSubscriptionRequestType )
    : Message(MsgType())
    
    {
      set(aSecurityStatusReqID);
      set(aSymbol);
      set(aSubscriptionRequestType);
    }
  
    NET_FIELD_SET(SecurityStatusReqID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TradingSessionID);
  };

  public __gc class SecurityStatus : public Message
  {
  public: 
    SecurityStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("f"); }
    //
    SecurityStatus(
      Fix::Symbol* aSymbol )
    : Message(MsgType())
    
    {
      set(aSymbol);
    }
  
    NET_FIELD_SET(SecurityStatusReqID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(SecurityTradingStatus);
    NET_FIELD_SET(FinancialStatus);
    NET_FIELD_SET(CorporateAction);
    NET_FIELD_SET(HaltReason);
    NET_FIELD_SET(InViewOfCommon);
    NET_FIELD_SET(DueToRelated);
    NET_FIELD_SET(BuyVolume);
    NET_FIELD_SET(SellVolume);
    NET_FIELD_SET(HighPx);
    NET_FIELD_SET(LowPx);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Adjustment);
  };

  public __gc class TradingSessionStatusRequest : public Message
  {
  public: 
    TradingSessionStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("g"); }
    //
    TradingSessionStatusRequest(
      Fix::TradSesReqID* aTradSesReqID,
      Fix::SubscriptionRequestType* aSubscriptionRequestType )
    : Message(MsgType())
    
    {
      set(aTradSesReqID);
      set(aSubscriptionRequestType);
    }
  
    NET_FIELD_SET(TradSesReqID);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradSesMethod);
    NET_FIELD_SET(TradSesMode);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class TradingSessionStatus : public Message
  {
  public: 
    TradingSessionStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("h"); }
    //
    TradingSessionStatus(
      Fix::TradingSessionID* aTradingSessionID,
      Fix::TradSesStatus* aTradSesStatus )
    : Message(MsgType())
    
    {
      set(aTradingSessionID);
      set(aTradSesStatus);
    }
  
    NET_FIELD_SET(TradSesReqID);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradSesMethod);
    NET_FIELD_SET(TradSesMode);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(TradSesStatus);
    NET_FIELD_SET(TradSesStartTime);
    NET_FIELD_SET(TradSesOpenTime);
    NET_FIELD_SET(TradSesPreCloseTime);
    NET_FIELD_SET(TradSesCloseTime);
    NET_FIELD_SET(TradSesEndTime);
    NET_FIELD_SET(TotalVolumeTraded);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocShares);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
        336,
      0};
      NET_FIELD_SET(TradingSessionID);
    };
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(SolicitedFlag);
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(GTBookingInst);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(CustomerOrFirm);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(ClearingFirm);
    NET_FIELD_SET(ClearingAccount);
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
    NET_FIELD_SET(NoContraBrokers);
    __gc class NoContraBrokers : public Fix::Group
    {
    public:
      NoContraBrokers() : Group(382, 337, message_order ) {}
        static int message_order __gc[] = {
        375,
        337,
        437,
        438,
      0};
      NET_FIELD_SET(ContraBroker);
      NET_FIELD_SET(ContraTrader);
      NET_FIELD_SET(ContraTradeQty);
      NET_FIELD_SET(ContraTradeTime);
    };
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(ExecTransType);
    NET_FIELD_SET(ExecRefID);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(OrdRejReason);
    NET_FIELD_SET(ExecRestatementReason);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(SolicitedFlag);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(LastShares);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(LastCapacity);
    NET_FIELD_SET(LeavesQty);
    NET_FIELD_SET(CumQty);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(DayOrderQty);
    NET_FIELD_SET(DayCumQty);
    NET_FIELD_SET(DayAvgPx);
    NET_FIELD_SET(GTBookingInst);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ReportToExch);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(SettlCurrAmt);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(ClearingFirm);
    NET_FIELD_SET(ClearingAccount);
    NET_FIELD_SET(MultiLegReportingType);
  };

  public __gc class DontKnowTrade : public Message
  {
  public: 
    DontKnowTrade() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("Q"); }
    //
    DontKnowTrade(
      Fix::OrderID* aOrderID,
      Fix::ExecID* aExecID,
      Fix::DKReason* aDKReason,
      Fix::Symbol* aSymbol,
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aExecID);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(LastShares);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocShares);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
        336,
      0};
      NET_FIELD_SET(TradingSessionID);
    };
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(SolicitedFlag);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(GTBookingInst);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(CustomerOrFirm);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(ClearingFirm);
    NET_FIELD_SET(ClearingAccount);
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
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Account);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(OrderQty);
    NET_FIELD_SET(CashOrderQty);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(SolicitedFlag);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
      Fix::OrdStatus* aOrdStatus,
      Fix::CxlRejResponseTo* aCxlRejResponseTo )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
      set(aCxlRejResponseTo);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(ClientID);
    NET_FIELD_SET(ExecBroker);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(CxlRejResponseTo);
    NET_FIELD_SET(CxlRejReason);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(Account);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
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
    NET_FIELD_SET(ContractMultiplier);
    NET_FIELD_SET(CouponRate);
    NET_FIELD_SET(SecurityExchange);
    NET_FIELD_SET(Issuer);
    NET_FIELD_SET(EncodedIssuerLen);
    NET_FIELD_SET(EncodedIssuer);
    NET_FIELD_SET(SecurityDesc);
    NET_FIELD_SET(EncodedSecurityDescLen);
    NET_FIELD_SET(EncodedSecurityDesc);
    NET_FIELD_SET(Shares);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(AvgPrxPrecision);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(OpenClose);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 12, message_order ) {}
        static int message_order __gc[] = {
        79,
        366,
        80,
        81,
        92,
        208,
        209,
        161,
        360,
        361,
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
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocShares);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(BrokerOfCredit);
      NET_FIELD_SET(NotifyBrokerOfCredit);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
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
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
      Fix::SettlInstRefID* aSettlInstRefID,
      Fix::SettlInstMode* aSettlInstMode,
      Fix::SettlInstSource* aSettlInstSource,
      Fix::AllocAccount* aAllocAccount,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aSettlInstID);
      set(aSettlInstTransType);
      set(aSettlInstRefID);
      set(aSettlInstMode);
      set(aSettlInstSource);
      set(aAllocAccount);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(SettlInstID);
    NET_FIELD_SET(SettlInstTransType);
    NET_FIELD_SET(SettlInstRefID);
    NET_FIELD_SET(SettlInstMode);
    NET_FIELD_SET(SettlInstSource);
    NET_FIELD_SET(AllocAccount);
    NET_FIELD_SET(SettlLocation);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
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
      Fix::BidType* aBidType,
      Fix::TotNoOrders* aTotNoOrders )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aBidType);
      set(aTotNoOrders);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(ClientBidID);
    NET_FIELD_SET(ProgRptReqs);
    NET_FIELD_SET(BidType);
    NET_FIELD_SET(ProgPeriodInterval);
    NET_FIELD_SET(ListExecInstType);
    NET_FIELD_SET(ListExecInst);
    NET_FIELD_SET(EncodedListExecInstLen);
    NET_FIELD_SET(EncodedListExecInst);
    NET_FIELD_SET(TotNoOrders);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 1, message_order ) {}
        static int message_order __gc[] = {
        11,
        67,
        160,
        109,
        76,
        1,
        
          79,
          80,
        
        63,
        64,
        21,
        18,
        110,
        111,
        100,
        
          336,
        
        81,
        55,
        65,
        48,
        22,
        167,
        200,
        205,
        201,
        202,
        206,
        231,
        223,
        207,
        106,
        348,
        349,
        107,
        350,
        351,
        140,
        54,
        401,
        114,
        60,
        38,
        152,
        40,
        44,
        99,
        15,
        376,
        377,
        23,
        117,
        59,
        168,
        432,
        126,
        427,
        12,
        13,
        47,
        121,
        120,
        58,
        354,
        355,
        193,
        192,
        77,
        203,
        204,
        210,
        211,
        388,
        389,
        439,
        440,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(ListSeqNo);
      NET_FIELD_SET(SettlInstMode);
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
      NET_FIELD_SET(ContractMultiplier);
      NET_FIELD_SET(CouponRate);
      NET_FIELD_SET(SecurityExchange);
      NET_FIELD_SET(Issuer);
      NET_FIELD_SET(EncodedIssuerLen);
      NET_FIELD_SET(EncodedIssuer);
      NET_FIELD_SET(SecurityDesc);
      NET_FIELD_SET(EncodedSecurityDescLen);
      NET_FIELD_SET(EncodedSecurityDesc);
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(SideValueInd);
      NET_FIELD_SET(LocateReqd);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(CashOrderQty);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(Price);
      NET_FIELD_SET(StopPx);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(ComplianceID);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(IOIid);
      NET_FIELD_SET(QuoteID);
      NET_FIELD_SET(TimeInForce);
      NET_FIELD_SET(EffectiveTime);
      NET_FIELD_SET(ExpireDate);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(GTBookingInst);
      NET_FIELD_SET(Commission);
      NET_FIELD_SET(CommType);
      NET_FIELD_SET(Rule80A);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(OpenClose);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CustomerOrFirm);
      NET_FIELD_SET(MaxShow);
      NET_FIELD_SET(PegDifference);
      NET_FIELD_SET(DiscretionInst);
      NET_FIELD_SET(DiscretionOffset);
      NET_FIELD_SET(ClearingFirm);
      NET_FIELD_SET(ClearingAccount);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          80,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocShares);
    };
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
          336,
        0};
      NET_FIELD_SET(TradingSessionID);
    };
    };
  };

  public __gc class ListStatus : public Message
  {
  public: 
    ListStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("N"); }
    //
    ListStatus(
      Fix::ListID* aListID,
      Fix::ListStatusType* aListStatusType,
      Fix::NoRpts* aNoRpts,
      Fix::ListOrderStatus* aListOrderStatus,
      Fix::RptSeq* aRptSeq,
      Fix::TotNoOrders* aTotNoOrders )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aListStatusType);
      set(aNoRpts);
      set(aListOrderStatus);
      set(aRptSeq);
      set(aTotNoOrders);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ListStatusType);
    NET_FIELD_SET(NoRpts);
    NET_FIELD_SET(ListOrderStatus);
    NET_FIELD_SET(RptSeq);
    NET_FIELD_SET(ListStatusText);
    NET_FIELD_SET(EncodedListStatusTextLen);
    NET_FIELD_SET(EncodedListStatusText);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(TotNoOrders);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 6, message_order ) {}
        static int message_order __gc[] = {
        11,
        14,
        39,
        151,
        84,
        6,
        103,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(CumQty);
      NET_FIELD_SET(OrdStatus);
      NET_FIELD_SET(LeavesQty);
      NET_FIELD_SET(CxlQty);
      NET_FIELD_SET(AvgPx);
      NET_FIELD_SET(OrdRejReason);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
  };

  public __gc class ListExecute : public Message
  {
  public: 
    ListExecute() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("L"); }
    //
    ListExecute(
      Fix::ListID* aListID,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ClientBidID);
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class ListCancelRequest : public Message
  {
  public: 
    ListCancelRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("K"); }
    //
    ListCancelRequest(
      Fix::ListID* aListID,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class BusinessMessageReject : public Message
  {
  public: 
    BusinessMessageReject() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("j"); }
    //
    BusinessMessageReject(
      Fix::RefMsgType* aRefMsgType,
      Fix::BusinessRejectReason* aBusinessRejectReason )
    : Message(MsgType())
    
    {
      set(aRefMsgType);
      set(aBusinessRejectReason);
    }
  
    NET_FIELD_SET(RefSeqNum);
    NET_FIELD_SET(RefMsgType);
    NET_FIELD_SET(BusinessRejectRefID);
    NET_FIELD_SET(BusinessRejectReason);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };
}

 