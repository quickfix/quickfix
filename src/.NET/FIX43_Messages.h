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

namespace Fix43
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
    NET_FIELD_SET(NoHops);
    NET_FIELD_SET(HopCompID);
    NET_FIELD_SET(HopSendingTime);
    NET_FIELD_SET(HopRefID);
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
    Message() : Fix::Message(new Fix::BeginString("FIX.4.3"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( Fix::MsgType* msgType ) 
    : Fix::Message(
      new Fix::BeginString("FIX.4.3"),msgType ) 
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
    NET_FIELD_SET(TestMessageIndicator);
    NET_FIELD_SET(Username);
    NET_FIELD_SET(Password);
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

  public __gc class Advertisement : public Message
  {
  public: 
    Advertisement() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("7"); }
    //
    Advertisement(
      Fix::AdvId* aAdvId,
      Fix::AdvTransType* aAdvTransType,
      Fix::AdvSide* aAdvSide,
      Fix::Quantity* aQuantity )
    : Message(MsgType())
    
    {
      set(aAdvId);
      set(aAdvTransType);
      set(aAdvSide);
      set(aQuantity);
    }
  
    NET_FIELD_SET(AdvId);
    NET_FIELD_SET(AdvTransType);
    NET_FIELD_SET(AdvRefID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(Quantity);
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
    NET_FIELD_SET(TradingSessionSubID);
  };

  public __gc class IndicationOfInterest : public Message
  {
  public: 
    IndicationOfInterest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("6"); }
    //
    IndicationOfInterest(
      Fix::IOIid* aIOIid,
      Fix::IOITransType* aIOITransType,
      Fix::Side* aSide,
      Fix::IOIQty* aIOIQty )
    : Message(MsgType())
    
    {
      set(aIOIid);
      set(aIOITransType);
      set(aSide);
      set(aIOIQty);
    }
  
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(IOITransType);
    NET_FIELD_SET(IOIRefID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(QuantityType);
    NET_FIELD_SET(IOIQty);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(IOIQltyInd);
    NET_FIELD_SET(IOINaturalFlag);
  
    __gc class NoIOIQualifiers : public Fix::Group
    {
    public:
      NoIOIQualifiers() : Group(199, 104, message_order ) {}
        static int message_order __gc[] = {
        104,
        216,
        217,
      0};
      NET_FIELD_SET(IOIQualifier);
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(URLLink);
  
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 104, message_order ) {}
        static int message_order __gc[] = {
        104,
        216,
        217,
      0};
      NET_FIELD_SET(IOIQualifier);
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
    };   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);
    NET_FIELD_SET(Benchmark);
  };

  public __gc class News : public Message
  {
  public: 
    News() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("B"); }
    //
    News(
      Fix::Headline* aHeadline,
      Fix::LinesOfText* aLinesOfText )
    : Message(MsgType())
    
    {
      set(aHeadline);
      set(aLinesOfText);
    }
  
    NET_FIELD_SET(OrigTime);
    NET_FIELD_SET(Urgency);
    NET_FIELD_SET(Headline);
    NET_FIELD_SET(EncodedHeadlineLen);
    NET_FIELD_SET(EncodedHeadline);
  
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 58, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 58, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
      Fix::Subject* aSubject,
      Fix::LinesOfText* aLinesOfText )
    : Message(MsgType())
    
    {
      set(aEmailThreadID);
      set(aEmailType);
      set(aSubject);
      set(aLinesOfText);
    }
  
    NET_FIELD_SET(EmailThreadID);
    NET_FIELD_SET(EmailType);
    NET_FIELD_SET(OrigTime);
    NET_FIELD_SET(Subject);
    NET_FIELD_SET(EncodedSubjectLen);
    NET_FIELD_SET(EncodedSubject);
  
    __gc class NoRoutingIDs : public Fix::Group
    {
    public:
      NoRoutingIDs() : Group(215, 58, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 58, message_order ) {}
        static int message_order __gc[] = {
        216,
        217,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(RoutingType);
      NET_FIELD_SET(RoutingID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
    NET_FIELD_SET(RFQReqID);
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        140,
        303,
        537,
        336,
        625,
        229,
        232,233,234,
        54,
        465,
        38,
        152,
        63,
        64,
        40,
        193,
        192,
        126,
        60,
        15,
        218,220,221,222,
        423,
        44,
        640,
        235,236,
      0};
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(QuoteRequestType);
      NET_FIELD_SET(QuoteType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(CashOrderQty);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(PriceType);
      NET_FIELD_SET(Price);
      NET_FIELD_SET(Price2);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
          NET_FIELD_SET(NoStipulations);
          NET_FIELD_SET(StipulationType);
          NET_FIELD_SET(StipulationValue);
          NET_FIELD_SET(Spread);
          NET_FIELD_SET(BenchmarkCurveCurrency);
          NET_FIELD_SET(BenchmarkCurveName);
          NET_FIELD_SET(BenchmarkCurvePoint);
          NET_FIELD_SET(YieldType);
          NET_FIELD_SET(Yield);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class RFQRequest : public Message
  {
  public: 
    RFQRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AH"); }
    //
    RFQRequest(
      Fix::RFQReqID* aRFQReqID )
    : Message(MsgType())
    
    {
      set(aRFQReqID);
    }
  
    NET_FIELD_SET(RFQReqID);
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 140, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        140,
        303,
        537,
        336,
        625,
      0};
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(QuoteRequestType);
      NET_FIELD_SET(QuoteType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class Quote : public Message
  {
  public: 
    Quote() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("S"); }
    //
    Quote(
      Fix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(QuoteResponseLevel);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(MktBidPx);
    NET_FIELD_SET(MktOfferPx);
    NET_FIELD_SET(MinBidSize);
    NET_FIELD_SET(BidSize);
    NET_FIELD_SET(MinOfferSize);
    NET_FIELD_SET(OfferSize);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(BidSpotRate);
    NET_FIELD_SET(OfferSpotRate);
    NET_FIELD_SET(BidForwardPoints);
    NET_FIELD_SET(OfferForwardPoints);
    NET_FIELD_SET(MidPx);
    NET_FIELD_SET(BidYield);
    NET_FIELD_SET(MidYield);
    NET_FIELD_SET(OfferYield);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(BidForwardPoints2);
    NET_FIELD_SET(OfferForwardPoints2);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SettlCurrBidFxRate);
    NET_FIELD_SET(SettlCurrOfferFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 55, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
      0};
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  };

  public __gc class QuoteStatusRequest : public Message
  {
  public: 
    QuoteStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("a"); }
  
    NET_FIELD_SET(QuoteStatusReqID);
    NET_FIELD_SET(QuoteID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class QuoteStatusReport : public Message
  {
  public: 
    QuoteStatusReport() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AI"); }
    //
    QuoteStatusReport(
      Fix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteStatusReqID);
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteType);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(MktBidPx);
    NET_FIELD_SET(MktOfferPx);
    NET_FIELD_SET(MinBidSize);
    NET_FIELD_SET(BidSize);
    NET_FIELD_SET(MinOfferSize);
    NET_FIELD_SET(OfferSize);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(BidSpotRate);
    NET_FIELD_SET(OfferSpotRate);
    NET_FIELD_SET(BidForwardPoints);
    NET_FIELD_SET(OfferForwardPoints);
    NET_FIELD_SET(MidPx);
    NET_FIELD_SET(BidYield);
    NET_FIELD_SET(MidYield);
    NET_FIELD_SET(OfferYield);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(BidForwardPoints2);
    NET_FIELD_SET(OfferForwardPoints2);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SettlCurrBidFxRate);
    NET_FIELD_SET(SettlCurrOfferFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(QuoteStatus);
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
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(QuoteResponseLevel);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DefBidSize);
    NET_FIELD_SET(DefOfferSize);
  
    __gc class NoQuoteSets : public Fix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
        302,
        311,312,309,305,457,458,459,462,463,310,313,542,241,242,243,244,245,246,256,595,592,593,594,247,315,316,317,436,435,308,306,362,363,307,364,365,
        367,
        304,
        
          299,
          55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          631,
          632,
          633,
          634,
          60,
          336,
          625,
          64,
          40,
          193,
          192,
          642,
          643,
          15,
        
      0};
      NET_FIELD_SET(QuoteSetID);
      NET_FIELD_SET(QuoteSetValidUntilTime);
      NET_FIELD_SET(TotQuoteEntries);
  
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 15, message_order ) {}
        static int message_order __gc[] = {
          299,
          55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          631,
          632,
          633,
          634,
          60,
          336,
          625,
          64,
          40,
          193,
          192,
          642,
          643,
          15,
        0};
      NET_FIELD_SET(QuoteEntryID);
      NET_FIELD_SET(BidPx);
      NET_FIELD_SET(OfferPx);
      NET_FIELD_SET(BidSize);
      NET_FIELD_SET(OfferSize);
      NET_FIELD_SET(ValidUntilTime);
      NET_FIELD_SET(BidSpotRate);
      NET_FIELD_SET(OfferSpotRate);
      NET_FIELD_SET(BidForwardPoints);
      NET_FIELD_SET(OfferForwardPoints);
      NET_FIELD_SET(MidPx);
      NET_FIELD_SET(BidYield);
      NET_FIELD_SET(MidYield);
      NET_FIELD_SET(OfferYield);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(BidForwardPoints2);
      NET_FIELD_SET(OfferForwardPoints2);
      NET_FIELD_SET(Currency);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(NoUnderlyingSecurityAltID);
          NET_FIELD_SET(UnderlyingSecurityAltID);
          NET_FIELD_SET(UnderlyingSecurityAltIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingMaturityMonthYear);
          NET_FIELD_SET(UnderlyingMaturityDate);
          NET_FIELD_SET(UnderlyingCouponPaymentDate);
          NET_FIELD_SET(UnderlyingIssueDate);
          NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);
          NET_FIELD_SET(UnderlyingRepurchaseTerm);
          NET_FIELD_SET(UnderlyingRepurchaseRate);
          NET_FIELD_SET(UnderlyingFactor);
          NET_FIELD_SET(UnderlyingCreditRating);
          NET_FIELD_SET(UnderlyingInstrRegistry);
          NET_FIELD_SET(UnderlyingCountryOfIssue);
          NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);
          NET_FIELD_SET(UnderlyingLocaleOfIssue);
          NET_FIELD_SET(UnderlyingRedemptionDate);
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
    };
  };

  public __gc class MassQuoteAcknowledgement : public Message
  {
  public: 
    MassQuoteAcknowledgement() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("b"); }
    //
    MassQuoteAcknowledgement(
      Fix::QuoteStatus* aQuoteStatus )
    : Message(MsgType())
    
    {
      set(aQuoteStatus);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteStatus);
    NET_FIELD_SET(QuoteRejectReason);
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(QuoteType);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(Text);
  
    __gc class NoQuoteSets : public Fix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
        302,
        311,312,309,305,457,458,459,462,463,310,313,542,241,242,243,244,245,246,256,595,592,593,594,247,315,316,317,436,435,308,306,362,363,307,364,365,
        304,
        
          299,
          55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          631,
          632,
          633,
          634,
          60,
          336,
          625,
          64,
          40,
          193,
          192,
          642,
          643,
          15,
          368,
        
      0};
      NET_FIELD_SET(QuoteSetID);
      NET_FIELD_SET(TotQuoteEntries);
  
    __gc class NoQuoteEntries : public Fix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 15, message_order ) {}
        static int message_order __gc[] = {
          299,
          55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
          132,
          133,
          134,
          135,
          62,
          188,
          190,
          189,
          191,
          631,
          632,
          633,
          634,
          60,
          336,
          625,
          64,
          40,
          193,
          192,
          642,
          643,
          15,
          368,
        0};
      NET_FIELD_SET(QuoteEntryID);
      NET_FIELD_SET(BidPx);
      NET_FIELD_SET(OfferPx);
      NET_FIELD_SET(BidSize);
      NET_FIELD_SET(OfferSize);
      NET_FIELD_SET(ValidUntilTime);
      NET_FIELD_SET(BidSpotRate);
      NET_FIELD_SET(OfferSpotRate);
      NET_FIELD_SET(BidForwardPoints);
      NET_FIELD_SET(OfferForwardPoints);
      NET_FIELD_SET(MidPx);
      NET_FIELD_SET(BidYield);
      NET_FIELD_SET(MidYield);
      NET_FIELD_SET(OfferYield);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(BidForwardPoints2);
      NET_FIELD_SET(OfferForwardPoints2);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(QuoteEntryRejectReason);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(NoUnderlyingSecurityAltID);
          NET_FIELD_SET(UnderlyingSecurityAltID);
          NET_FIELD_SET(UnderlyingSecurityAltIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingMaturityMonthYear);
          NET_FIELD_SET(UnderlyingMaturityDate);
          NET_FIELD_SET(UnderlyingCouponPaymentDate);
          NET_FIELD_SET(UnderlyingIssueDate);
          NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);
          NET_FIELD_SET(UnderlyingRepurchaseTerm);
          NET_FIELD_SET(UnderlyingRepurchaseRate);
          NET_FIELD_SET(UnderlyingFactor);
          NET_FIELD_SET(UnderlyingCreditRating);
          NET_FIELD_SET(UnderlyingInstrRegistry);
          NET_FIELD_SET(UnderlyingCountryOfIssue);
          NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);
          NET_FIELD_SET(UnderlyingLocaleOfIssue);
          NET_FIELD_SET(UnderlyingRedemptionDate);
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
    NET_FIELD_SET(OpenCloseSettleFlag);
    NET_FIELD_SET(Scope);
    NET_FIELD_SET(MDImplicitDelete);
  
    __gc class NoMDEntryTypes : public Fix::Group
    {
    public:
      NoMDEntryTypes() : Group(267, 269, message_order ) {}
        static int message_order __gc[] = {
        269,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        336,
        625,
      0};
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 269, message_order ) {}
        static int message_order __gc[] = {
        269,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        336,
        625,
      0};
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 269, message_order ) {}
        static int message_order __gc[] = {
        269,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        336,
        625,
      0};
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  };

  public __gc class MarketDataSnapshotFullRefresh : public Message
  {
  public: 
    MarketDataSnapshotFullRefresh() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("W"); }
  
    NET_FIELD_SET(MDReqID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TotalVolumeTradedDate);
    NET_FIELD_SET(TotalVolumeTradedTime);
    NET_FIELD_SET(NetChgPrevDay);
  
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
        625,
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
        546,
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
      NET_FIELD_SET(TradingSessionSubID);
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
      NET_FIELD_SET(Scope);
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
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
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
        625,
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
        546,
        387,
        449,
        450,
        451,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(MDUpdateAction);
      NET_FIELD_SET(DeleteReason);
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(MDEntryID);
      NET_FIELD_SET(MDEntryRefID);
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
      NET_FIELD_SET(TradingSessionSubID);
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
      NET_FIELD_SET(Scope);
      NET_FIELD_SET(TotalVolumeTraded);
      NET_FIELD_SET(TotalVolumeTradedDate);
      NET_FIELD_SET(TotalVolumeTradedTime);
      NET_FIELD_SET(NetChgPrevDay);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 556, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        556,
      0};
      NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
    };
    NET_FIELD_SET(SubscriptionRequestType);
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
      Fix::SecurityResponseType* aSecurityResponseType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityResponseType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityResponseType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 556, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        556,
      0};
      NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
    };
    NET_FIELD_SET(RoundLot);
    NET_FIELD_SET(MinTradeVol);
  };

  public __gc class SecurityTypeRequest : public Message
  {
  public: 
    SecurityTypeRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("v"); }
    //
    SecurityTypeRequest(
      Fix::SecurityReqID* aSecurityReqID )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
  };

  public __gc class SecurityTypes : public Message
  {
  public: 
    SecurityTypes() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("w"); }
    //
    SecurityTypes(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityResponseID* aSecurityResponseID,
      Fix::SecurityResponseType* aSecurityResponseType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityResponseType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityResponseType);
    NET_FIELD_SET(TotalNumSecurityTypes);
  
    __gc class NoSecurityTypes : public Fix::Group
    {
    public:
      NoSecurityTypes() : Group(558, 167, message_order ) {}
        static int message_order __gc[] = {
        167,
        460,
        461,
      0};
      NET_FIELD_SET(SecurityType);
      NET_FIELD_SET(Product);
      NET_FIELD_SET(CFICode);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class SecurityListRequest : public Message
  {
  public: 
    SecurityListRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("x"); }
    //
    SecurityListRequest(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityListRequestType* aSecurityListRequestType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityListRequestType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityListRequestType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class SecurityList : public Message
  {
  public: 
    SecurityList() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("y"); }
    //
    SecurityList(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityResponseID* aSecurityResponseID,
      Fix::SecurityRequestResult* aSecurityRequestResult )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityRequestResult);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityRequestResult);
    NET_FIELD_SET(TotalNumSecurities);
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        15,
        
          600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
          556,
        
        561,
        562,
        336,
        625,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(RoundLot);
      NET_FIELD_SET(MinTradeVol);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 556, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
          556,
        0};
      NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  };

  public __gc class DerivativeSecurityListRequest : public Message
  {
  public: 
    DerivativeSecurityListRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("z"); }
    //
    DerivativeSecurityListRequest(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityListRequestType* aSecurityListRequestType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityListRequestType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityListRequestType);   
    NET_FIELD_SET(UnderlyingSymbol);   
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(NoUnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingMaturityMonthYear);   
    NET_FIELD_SET(UnderlyingMaturityDate);   
    NET_FIELD_SET(UnderlyingCouponPaymentDate);   
    NET_FIELD_SET(UnderlyingIssueDate);   
    NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);   
    NET_FIELD_SET(UnderlyingRepurchaseTerm);   
    NET_FIELD_SET(UnderlyingRepurchaseRate);   
    NET_FIELD_SET(UnderlyingFactor);   
    NET_FIELD_SET(UnderlyingCreditRating);   
    NET_FIELD_SET(UnderlyingInstrRegistry);   
    NET_FIELD_SET(UnderlyingCountryOfIssue);   
    NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);   
    NET_FIELD_SET(UnderlyingLocaleOfIssue);   
    NET_FIELD_SET(UnderlyingRedemptionDate);   
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
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class DerivativeSecurityList : public Message
  {
  public: 
    DerivativeSecurityList() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AA"); }
    //
    DerivativeSecurityList(
      Fix::SecurityReqID* aSecurityReqID,
      Fix::SecurityResponseID* aSecurityResponseID,
      Fix::SecurityRequestResult* aSecurityRequestResult )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityRequestResult);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityRequestResult);   
    NET_FIELD_SET(UnderlyingSymbol);   
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(NoUnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingMaturityMonthYear);   
    NET_FIELD_SET(UnderlyingMaturityDate);   
    NET_FIELD_SET(UnderlyingCouponPaymentDate);   
    NET_FIELD_SET(UnderlyingIssueDate);   
    NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);   
    NET_FIELD_SET(UnderlyingRepurchaseTerm);   
    NET_FIELD_SET(UnderlyingRepurchaseRate);   
    NET_FIELD_SET(UnderlyingFactor);   
    NET_FIELD_SET(UnderlyingCreditRating);   
    NET_FIELD_SET(UnderlyingInstrRegistry);   
    NET_FIELD_SET(UnderlyingCountryOfIssue);   
    NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);   
    NET_FIELD_SET(UnderlyingLocaleOfIssue);   
    NET_FIELD_SET(UnderlyingRedemptionDate);   
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
    NET_FIELD_SET(TotalNumSecurities);
  
    __gc class NoRelatedSym : public Fix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        15,
        
          600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
          556,
        
        336,
        625,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 556, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
          556,
        0};
      NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
  };

  public __gc class SecurityStatusRequest : public Message
  {
  public: 
    SecurityStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("e"); }
    //
    SecurityStatusRequest(
      Fix::SecurityStatusReqID* aSecurityStatusReqID,
      Fix::SubscriptionRequestType* aSubscriptionRequestType )
    : Message(MsgType())
    
    {
      set(aSecurityStatusReqID);
      set(aSubscriptionRequestType);
    }
  
    NET_FIELD_SET(SecurityStatusReqID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TradingSessionSubID);
  };

  public __gc class SecurityStatus : public Message
  {
  public: 
    SecurityStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("f"); }
  
    NET_FIELD_SET(SecurityStatusReqID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TradingSessionSubID);
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
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
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
    NET_FIELD_SET(TradingSessionSubID);
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
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(TradSesMethod);
    NET_FIELD_SET(TradSesMode);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(TradSesStatus);
    NET_FIELD_SET(TradSesStatusRejReason);
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
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        539,524,525,538,545,
        80,
        336,
        625,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        539,524,525,538,545,
        80,
        336,
        625,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(ProcessCode);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(NoStipulations);   
    NET_FIELD_SET(StipulationType);   
    NET_FIELD_SET(StipulationValue);
    NET_FIELD_SET(QuantityType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);
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
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Price2);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(NetMoney);
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
      Fix::ExecType* aExecType,
      Fix::OrdStatus* aOrdStatus,
      Fix::Side* aSide,
      Fix::LeavesQty* aLeavesQty,
      Fix::CumQty* aCumQty,
      Fix::AvgPx* aAvgPx )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aExecID);
      set(aExecType);
      set(aOrdStatus);
      set(aSide);
      set(aLeavesQty);
      set(aCumQty);
      set(aAvgPx);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(SecondaryExecID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdLinkID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(TradeOriginationDate);
  
    __gc class NoContraBrokers : public Fix::Group
    {
    public:
      NoContraBrokers() : Group(382, 337, message_order ) {}
        static int message_order __gc[] = {
        375,
        337,
        437,
        438,
        655,
        519,
        520,
        521,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
        637,
      0};
      NET_FIELD_SET(ContraBroker);
      NET_FIELD_SET(ContraTrader);
      NET_FIELD_SET(ContraTradeQty);
      NET_FIELD_SET(ContraTradeTime);
      NET_FIELD_SET(ContraLegRefID);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(OrigCrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(ExecRefID);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(WorkingIndicator);
    NET_FIELD_SET(OrdRejReason);
    NET_FIELD_SET(ExecRestatementReason);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(NoStipulations);   
    NET_FIELD_SET(StipulationType);   
    NET_FIELD_SET(StipulationValue);
    NET_FIELD_SET(QuantityType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
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
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(LastQty);
    NET_FIELD_SET(UnderlyingLastQty);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(UnderlyingLastPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
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
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(ExDate);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(TradedFlatSwitch);
    NET_FIELD_SET(BasisFeatureDate);
    NET_FIELD_SET(BasisFeaturePrice);
    NET_FIELD_SET(Concession);
    NET_FIELD_SET(TotalTakedown);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(SettlCurrAmt);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(SettlCurrFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(LastForwardPoints2);
    NET_FIELD_SET(MultiLegReportingType);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(TransBkdTime);
    NET_FIELD_SET(ExecValuationPoint);
    NET_FIELD_SET(ExecPriceType);
    NET_FIELD_SET(ExecPriceAdjustment);
    NET_FIELD_SET(PriorityIndicator);
    NET_FIELD_SET(PriceImprovement);
  
    __gc class NoContAmts : public Fix::Group
    {
    public:
      NoContAmts() : Group(518, 337, message_order ) {}
        static int message_order __gc[] = {
        375,
        337,
        437,
        438,
        655,
        519,
        520,
        521,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
        637,
      0};
      NET_FIELD_SET(ContraBroker);
      NET_FIELD_SET(ContraTrader);
      NET_FIELD_SET(ContraTradeQty);
      NET_FIELD_SET(ContraTradeTime);
      NET_FIELD_SET(ContraLegRefID);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 337, message_order ) {}
        static int message_order __gc[] = {
        375,
        337,
        437,
        438,
        655,
        519,
        520,
        521,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
        637,
      0};
      NET_FIELD_SET(ContraBroker);
      NET_FIELD_SET(ContraTrader);
      NET_FIELD_SET(ContraTradeQty);
      NET_FIELD_SET(ContraTradeTime);
      NET_FIELD_SET(ContraLegRefID);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
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
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aExecID);
      set(aDKReason);
      set(aSide);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(DKReason);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(LastQty);
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
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(OrigOrdModTime);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        539,524,525,538,545,
        80,
        336,
        625,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        539,524,525,538,545,
        80,
        336,
        625,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(QuantityType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);
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
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(Rule80A);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(FutSettDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Price2);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(NetMoney);
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
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSide);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(OrigOrdModTime);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(ComplianceID);
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
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(WorkingIndicator);
    NET_FIELD_SET(OrigOrdModTime);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradeOriginationDate);
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
      Fix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aSide);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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

  public __gc class OrderMassCancelRequest : public Message
  {
  public: 
    OrderMassCancelRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("q"); }
    //
    OrderMassCancelRequest(
      Fix::ClOrdID* aClOrdID,
      Fix::MassCancelRequestType* aMassCancelRequestType,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aMassCancelRequestType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(MassCancelRequestType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(NoUnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingMaturityMonthYear);   
    NET_FIELD_SET(UnderlyingMaturityDate);   
    NET_FIELD_SET(UnderlyingCouponPaymentDate);   
    NET_FIELD_SET(UnderlyingIssueDate);   
    NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);   
    NET_FIELD_SET(UnderlyingRepurchaseTerm);   
    NET_FIELD_SET(UnderlyingRepurchaseRate);   
    NET_FIELD_SET(UnderlyingFactor);   
    NET_FIELD_SET(UnderlyingCreditRating);   
    NET_FIELD_SET(UnderlyingInstrRegistry);   
    NET_FIELD_SET(UnderlyingCountryOfIssue);   
    NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);   
    NET_FIELD_SET(UnderlyingLocaleOfIssue);   
    NET_FIELD_SET(UnderlyingRedemptionDate);   
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
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class OrderMassCancelReport : public Message
  {
  public: 
    OrderMassCancelReport() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("r"); }
    //
    OrderMassCancelReport(
      Fix::OrderID* aOrderID,
      Fix::MassCancelRequestType* aMassCancelRequestType,
      Fix::MassCancelResponse* aMassCancelResponse )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aMassCancelRequestType);
      set(aMassCancelResponse);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(MassCancelRequestType);
    NET_FIELD_SET(MassCancelResponse);
    NET_FIELD_SET(MassCancelRejectReason);
    NET_FIELD_SET(TotalAffectedOrders);
  
    __gc class NoAffectedOrders : public Fix::Group
    {
    public:
      NoAffectedOrders() : Group(534, 41, message_order ) {}
        static int message_order __gc[] = {
        41,
        535,
        536,
      0};
      NET_FIELD_SET(OrigClOrdID);
      NET_FIELD_SET(AffectedOrderID);
      NET_FIELD_SET(AffectedSecondaryOrderID);
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(NoUnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingMaturityMonthYear);   
    NET_FIELD_SET(UnderlyingMaturityDate);   
    NET_FIELD_SET(UnderlyingCouponPaymentDate);   
    NET_FIELD_SET(UnderlyingIssueDate);   
    NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);   
    NET_FIELD_SET(UnderlyingRepurchaseTerm);   
    NET_FIELD_SET(UnderlyingRepurchaseRate);   
    NET_FIELD_SET(UnderlyingFactor);   
    NET_FIELD_SET(UnderlyingCreditRating);   
    NET_FIELD_SET(UnderlyingInstrRegistry);   
    NET_FIELD_SET(UnderlyingCountryOfIssue);   
    NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);   
    NET_FIELD_SET(UnderlyingLocaleOfIssue);   
    NET_FIELD_SET(UnderlyingRedemptionDate);   
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
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class OrderMassStatusRequest : public Message
  {
  public: 
    OrderMassStatusRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AF"); }
    //
    OrderMassStatusRequest(
      Fix::MassStatusReqID* aMassStatusReqID,
      Fix::MassStatusReqType* aMassStatusReqType )
    : Message(MsgType())
    
    {
      set(aMassStatusReqID);
      set(aMassStatusReqType);
    }
  
    NET_FIELD_SET(MassStatusReqID);
    NET_FIELD_SET(MassStatusReqType);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(NoUnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltID);   
    NET_FIELD_SET(UnderlyingSecurityAltIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingMaturityMonthYear);   
    NET_FIELD_SET(UnderlyingMaturityDate);   
    NET_FIELD_SET(UnderlyingCouponPaymentDate);   
    NET_FIELD_SET(UnderlyingIssueDate);   
    NET_FIELD_SET(UnderlyingRepoCollateralSecurityType);   
    NET_FIELD_SET(UnderlyingRepurchaseTerm);   
    NET_FIELD_SET(UnderlyingRepurchaseRate);   
    NET_FIELD_SET(UnderlyingFactor);   
    NET_FIELD_SET(UnderlyingCreditRating);   
    NET_FIELD_SET(UnderlyingInstrRegistry);   
    NET_FIELD_SET(UnderlyingCountryOfIssue);   
    NET_FIELD_SET(UnderlyingStateOrProvinceOfIssue);   
    NET_FIELD_SET(UnderlyingLocaleOfIssue);   
    NET_FIELD_SET(UnderlyingRedemptionDate);   
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
    NET_FIELD_SET(Side);
  };

  public __gc class NewOrderCross : public Message
  {
  public: 
    NewOrderCross() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("s"); }
    //
    NewOrderCross(
      Fix::CrossID* aCrossID,
      Fix::CrossType* aCrossType,
      Fix::CrossPrioritization* aCrossPrioritization,
      Fix::HandlInst* aHandlInst,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aHandlInst);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(CrossPrioritization);
  
    __gc class NoSides : public Fix::Group
    {
    public:
      NoSides() : Group(552, 1, message_order ) {}
        static int message_order __gc[] = {
        54,
        11,
        526,
        583,
        453,448,447,452,523,
        229,
        1,
        581,
        589,
        590,
        591,
        
          79,
          467,
          539,524,525,538,545,
          80,
        
        465,
        38,152,516,468,469,
        12,13,479,497,
        528,
        529,
        582,
        121,
        120,
        58,
        354,
        355,
        77,
        203,
        544,
        635,
        377,
        659,
        336,
        625,
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 1, message_order ) {}
        static int message_order __gc[] = {
        54,
        11,
        526,
        583,
        453,448,447,452,523,
        229,
        1,
        581,
        589,
        590,
        591,
        
          79,
          467,
          539,524,525,538,545,
          80,
        
        465,
        38,152,516,468,469,
        12,13,479,497,
        528,
        529,
        582,
        121,
        120,
        58,
        354,
        355,
        77,
        203,
        544,
        635,
        377,
        659,
        336,
        625,
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);   
    NET_FIELD_SET(NoStipulations);   
    NET_FIELD_SET(StipulationType);   
    NET_FIELD_SET(StipulationValue);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(GTBookingInst);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(NetMoney);
  };

  public __gc class CrossOrderCancelReplaceRequest : public Message
  {
  public: 
    CrossOrderCancelReplaceRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("t"); }
    //
    CrossOrderCancelReplaceRequest(
      Fix::CrossID* aCrossID,
      Fix::OrigCrossID* aOrigCrossID,
      Fix::CrossType* aCrossType,
      Fix::CrossPrioritization* aCrossPrioritization,
      Fix::HandlInst* aHandlInst,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aCrossID);
      set(aOrigCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aHandlInst);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(OrigCrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(CrossPrioritization);
  
    __gc class NoSides : public Fix::Group
    {
    public:
      NoSides() : Group(552, 1, message_order ) {}
        static int message_order __gc[] = {
        54,
        41,
        11,
        526,
        583,
        586,
        453,448,447,452,523,
        229,
        1,
        581,
        589,
        590,
        591,
        
          79,
          467,
          539,524,525,538,545,
          80,
        
        465,
        38,152,516,468,469,
        12,13,479,497,
        528,
        529,
        582,
        121,
        120,
        58,
        354,
        355,
        77,
        203,
        544,
        635,
        377,
        659,
        336,
        625,
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrigClOrdID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(OrigOrdModTime);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 1, message_order ) {}
        static int message_order __gc[] = {
        54,
        41,
        11,
        526,
        583,
        586,
        453,448,447,452,523,
        229,
        1,
        581,
        589,
        590,
        591,
        
          79,
          467,
          539,524,525,538,545,
          80,
        
        465,
        38,152,516,468,469,
        12,13,479,497,
        528,
        529,
        582,
        121,
        120,
        58,
        354,
        355,
        77,
        203,
        544,
        635,
        377,
        659,
        336,
        625,
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrigClOrdID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(OrigOrdModTime);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);   
    NET_FIELD_SET(NoStipulations);   
    NET_FIELD_SET(StipulationType);   
    NET_FIELD_SET(StipulationValue);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(ComplianceID);
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(TimeInForce);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(GTBookingInst);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(NetMoney);
  };

  public __gc class CrossOrderCancelRequest : public Message
  {
  public: 
    CrossOrderCancelRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("u"); }
    //
    CrossOrderCancelRequest(
      Fix::CrossID* aCrossID,
      Fix::OrigCrossID* aOrigCrossID,
      Fix::CrossType* aCrossType,
      Fix::CrossPrioritization* aCrossPrioritization,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aCrossID);
      set(aOrigCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(OrigCrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(CrossPrioritization);
  
    __gc class NoSides : public Fix::Group
    {
    public:
      NoSides() : Group(552, 11, message_order ) {}
        static int message_order __gc[] = {
        54,
        41,
        11,
        526,
        583,
        586,
        453,448,447,452,523,
        229,
        38,152,516,468,469,
        376,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrigClOrdID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(OrigOrdModTime);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(ComplianceID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(TransactTime);
  };

  public __gc class NewOrderMultileg : public Message
  {
  public: 
    NewOrderMultileg() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AB"); }
    //
    NewOrderMultileg(
      Fix::ClOrdID* aClOrdID,
      Fix::HandlInst* aHandlInst,
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(QuantityType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
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
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(MultiLegRptTypeReq);
    NET_FIELD_SET(NetMoney);
  };

  public __gc class MultilegOrderCancelReplaceRequest : public Message
  {
  public: 
    MultilegOrderCancelReplaceRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AC"); }
    //
    MultilegOrderCancelReplaceRequest(
      Fix::OrigClOrdID* aOrigClOrdID,
      Fix::ClOrdID* aClOrdID,
      Fix::HandlInst* aHandlInst,
      Fix::Side* aSide,
      Fix::TransactTime* aTransactTime,
      Fix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(OrigOrdModTime);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
  
    __gc class NoLegs : public Fix::Group
    {
    public:
      NoLegs() : Group(555, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        467,
        80,
        336,
        625,
        600,601,602,603,604,605,606,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,
        564,
        565,
        539,524,525,538,545,
        654,
        566,
        587,
        588,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlmntTyp);
      NET_FIELD_SET(LegFutSettDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(NoLegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltID);
          NET_FIELD_SET(LegSecurityAltIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegMaturityMonthYear);
          NET_FIELD_SET(LegMaturityDate);
          NET_FIELD_SET(LegCouponPaymentDate);
          NET_FIELD_SET(LegIssueDate);
          NET_FIELD_SET(LegRepoCollateralSecurityType);
          NET_FIELD_SET(LegRepurchaseTerm);
          NET_FIELD_SET(LegRepurchaseRate);
          NET_FIELD_SET(LegFactor);
          NET_FIELD_SET(LegCreditRating);
          NET_FIELD_SET(LegInstrRegistry);
          NET_FIELD_SET(LegCountryOfIssue);
          NET_FIELD_SET(LegStateOrProvinceOfIssue);
          NET_FIELD_SET(LegLocaleOfIssue);
          NET_FIELD_SET(LegRedemptionDate);
          NET_FIELD_SET(LegStrikePrice);
          NET_FIELD_SET(LegOptAttribute);
          NET_FIELD_SET(LegContractMultiplier);
          NET_FIELD_SET(LegCouponRate);
          NET_FIELD_SET(LegSecurityExchange);
          NET_FIELD_SET(LegIssuer);
          NET_FIELD_SET(EncodedLegIssuerLen);
          NET_FIELD_SET(EncodedLegIssuer);
          NET_FIELD_SET(LegSecurityDesc);
          NET_FIELD_SET(EncodedLegSecurityDescLen);
          NET_FIELD_SET(EncodedLegSecurityDesc);
          NET_FIELD_SET(LegRatioQty);
          NET_FIELD_SET(LegSide);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(QuantityType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
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
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);
    NET_FIELD_SET(PegDifference);
    NET_FIELD_SET(DiscretionInst);
    NET_FIELD_SET(DiscretionOffset);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(MultiLegRptTypeReq);
    NET_FIELD_SET(NetMoney);
  };

  public __gc class BidRequest : public Message
  {
  public: 
    BidRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("k"); }
    //
    BidRequest(
      Fix::ClientBidID* aClientBidID,
      Fix::BidRequestTransType* aBidRequestTransType,
      Fix::TotalNumSecurities* aTotalNumSecurities,
      Fix::BidType* aBidType,
      Fix::TradeType* aTradeType,
      Fix::BasisPxType* aBasisPxType )
    : Message(MsgType())
    
    {
      set(aClientBidID);
      set(aBidRequestTransType);
      set(aTotalNumSecurities);
      set(aBidType);
      set(aTradeType);
      set(aBasisPxType);
    }
  
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(ClientBidID);
    NET_FIELD_SET(BidRequestTransType);
    NET_FIELD_SET(ListName);
    NET_FIELD_SET(TotalNumSecurities);
    NET_FIELD_SET(BidType);
    NET_FIELD_SET(NumTickets);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SideValue1);
    NET_FIELD_SET(SideValue2);
  
    __gc class NoBidDescriptors : public Fix::Group
    {
    public:
      NoBidDescriptors() : Group(398, 1, message_order ) {}
        static int message_order __gc[] = {
        399,
        400,
        401,
        404,
        441,
        402,
        403,
        405,
        406,
        407,
        408,
        66,
        54,
        336,
        625,
        430,
        63,
        64,
        1,
      0};
      NET_FIELD_SET(BidDescriptorType);
      NET_FIELD_SET(BidDescriptor);
      NET_FIELD_SET(SideValueInd);
      NET_FIELD_SET(LiquidityValue);
      NET_FIELD_SET(LiquidityNumSecurities);
      NET_FIELD_SET(LiquidityPctLow);
      NET_FIELD_SET(LiquidityPctHigh);
      NET_FIELD_SET(EFPTrackingError);
      NET_FIELD_SET(FairValue);
      NET_FIELD_SET(OutsideIndexPct);
      NET_FIELD_SET(ValueOfFutures);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(NetGrossInd);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(Account);
    };
  
    __gc class NoBidComponents : public Fix::Group
    {
    public:
      NoBidComponents() : Group(420, 1, message_order ) {}
        static int message_order __gc[] = {
        399,
        400,
        401,
        404,
        441,
        402,
        403,
        405,
        406,
        407,
        408,
        66,
        54,
        336,
        625,
        430,
        63,
        64,
        1,
      0};
      NET_FIELD_SET(BidDescriptorType);
      NET_FIELD_SET(BidDescriptor);
      NET_FIELD_SET(SideValueInd);
      NET_FIELD_SET(LiquidityValue);
      NET_FIELD_SET(LiquidityNumSecurities);
      NET_FIELD_SET(LiquidityPctLow);
      NET_FIELD_SET(LiquidityPctHigh);
      NET_FIELD_SET(EFPTrackingError);
      NET_FIELD_SET(FairValue);
      NET_FIELD_SET(OutsideIndexPct);
      NET_FIELD_SET(ValueOfFutures);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(NetGrossInd);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(Account);
    };
    NET_FIELD_SET(LiquidityIndType);
    NET_FIELD_SET(WtAverageLiquidity);
    NET_FIELD_SET(ExchangeForPhysical);
    NET_FIELD_SET(OutMainCntryUIndex);
    NET_FIELD_SET(CrossPercent);
    NET_FIELD_SET(ProgRptReqs);
    NET_FIELD_SET(ProgPeriodInterval);
    NET_FIELD_SET(IncTaxInd);
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(NumBidders);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TradeType);
    NET_FIELD_SET(BasisPxType);
    NET_FIELD_SET(StrikeTime);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class BidResponse : public Message
  {
  public: 
    BidResponse() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("l"); }
  
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(ClientBidID);
  
    __gc class NoBidComponents : public Fix::Group
    {
    public:
      NoBidComponents() : Group(420, 44, message_order ) {}
        static int message_order __gc[] = {
        12,13,479,497,
        66,
        421,
        54,
        44,
        423,
        406,
        430,
        63,
        64,
        336,
        625,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(Country);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(Price);
      NET_FIELD_SET(PriceType);
      NET_FIELD_SET(FairValue);
      NET_FIELD_SET(NetGrossInd);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
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
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(ListExecInstType);
    NET_FIELD_SET(ListExecInst);
    NET_FIELD_SET(EncodedListExecInstLen);
    NET_FIELD_SET(EncodedListExecInst);
    NET_FIELD_SET(TotNoOrders);
  
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 1, message_order ) {}
        static int message_order __gc[] = {
        11,
        526,
        67,
        583,
        160,
        453,448,447,452,523,
        229,
        1,
        581,
        589,
        590,
        591,
        
          79,
          467,
          539,524,525,538,545,
          80,
          336,
          625,
        
        63,
        64,
        544,
        635,
        21,
        18,
        110,
        111,
        100,
        
          79,
          467,
          539,524,525,538,545,
          80,
          336,
          625,
        
        81,
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        140,
        54,
        401,
        114,
        60,
        232,233,234,
        465,
        38,152,516,468,469,
        40,
        423,
        44,
        99,
        218,220,221,222,
        235,236,
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
        12,13,479,497,
        528,
        529,
        582,
        47,
        121,
        120,
        58,
        354,
        355,
        193,
        192,
        640,
        77,
        203,
        210,
        211,
        388,
        389,
        494,
        158,
        159,
        118,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListSeqNo);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(SettlInstMode);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(HandlInst);
      NET_FIELD_SET(ExecInst);
      NET_FIELD_SET(MinQty);
      NET_FIELD_SET(MaxFloor);
      NET_FIELD_SET(ExDestination);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(SideValueInd);
      NET_FIELD_SET(LocateReqd);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(QuantityType);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(PriceType);
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
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(Rule80A);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(FutSettDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(Price2);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(MaxShow);
      NET_FIELD_SET(PegDifference);
      NET_FIELD_SET(DiscretionInst);
      NET_FIELD_SET(DiscretionOffset);
      NET_FIELD_SET(Designation);
      NET_FIELD_SET(AccruedInterestRate);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(NetMoney);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
          336,
          625,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
  
    __gc class NoTradingSessions : public Fix::Group
    {
    public:
      NoTradingSessions() : Group(386, 79, message_order ) {}
        static int message_order __gc[] = {
          79,
          467,
          539,524,525,538,545,
          80,
          336,
          625,
        0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
          NET_FIELD_SET(NoStipulations);
          NET_FIELD_SET(StipulationType);
          NET_FIELD_SET(StipulationValue);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Spread);
          NET_FIELD_SET(BenchmarkCurveCurrency);
          NET_FIELD_SET(BenchmarkCurveName);
          NET_FIELD_SET(BenchmarkCurvePoint);
          NET_FIELD_SET(YieldType);
          NET_FIELD_SET(Yield);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
  };

  public __gc class ListStrikePrice : public Message
  {
  public: 
    ListStrikePrice() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("m"); }
    //
    ListStrikePrice(
      Fix::ListID* aListID,
      Fix::TotNoStrikes* aTotNoStrikes )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aTotNoStrikes);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(TotNoStrikes);
  
    __gc class NoStrikes : public Fix::Group
    {
    public:
      NoStrikes() : Group(428, 11, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,454,455,456,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,
        140,
        11,
        526,
        54,
        44,
        15,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(Price);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(NoSecurityAltID);
          NET_FIELD_SET(SecurityAltID);
          NET_FIELD_SET(SecurityAltIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(MaturityMonthYear);
          NET_FIELD_SET(MaturityDate);
          NET_FIELD_SET(CouponPaymentDate);
          NET_FIELD_SET(IssueDate);
          NET_FIELD_SET(RepoCollateralSecurityType);
          NET_FIELD_SET(RepurchaseTerm);
          NET_FIELD_SET(RepurchaseRate);
          NET_FIELD_SET(Factor);
          NET_FIELD_SET(CreditRating);
          NET_FIELD_SET(InstrRegistry);
          NET_FIELD_SET(CountryOfIssue);
          NET_FIELD_SET(StateOrProvinceOfIssue);
          NET_FIELD_SET(LocaleOfIssue);
          NET_FIELD_SET(RedemptionDate);
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
    NET_FIELD_SET(TradeOriginationDate);
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

  public __gc class ListStatus : public Message
  {
  public: 
    ListStatus() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("N"); }
    //
    ListStatus(
      Fix::ListID* aListID,
      Fix::ListStatusType* aListStatusType,
      Fix::ListOrderStatus* aListOrderStatus,
      Fix::RptSeq* aRptSeq,
      Fix::TotNoOrders* aTotNoOrders )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aListStatusType);
      set(aListOrderStatus);
      set(aRptSeq);
      set(aTotNoOrders);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(ListStatusType);
  
    __gc class NoRpts : public Fix::Group
    {
    public:
      NoRpts() : Group(82, 6, message_order ) {}
        static int message_order __gc[] = {
        11,
        526,
        14,
        39,
        636,
        151,
        84,
        6,
        103,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(CumQty);
      NET_FIELD_SET(OrdStatus);
      NET_FIELD_SET(WorkingIndicator);
      NET_FIELD_SET(LeavesQty);
      NET_FIELD_SET(CxlQty);
      NET_FIELD_SET(AvgPx);
      NET_FIELD_SET(OrdRejReason);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
    NET_FIELD_SET(ListOrderStatus);
    NET_FIELD_SET(RptSeq);
    NET_FIELD_SET(ListStatusText);
    NET_FIELD_SET(EncodedListStatusTextLen);
    NET_FIELD_SET(EncodedListStatusText);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(TotNoOrders);
  
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 6, message_order ) {}
        static int message_order __gc[] = {
        11,
        526,
        14,
        39,
        636,
        151,
        84,
        6,
        103,
        58,
        354,
        355,
      0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(CumQty);
      NET_FIELD_SET(OrdStatus);
      NET_FIELD_SET(WorkingIndicator);
      NET_FIELD_SET(LeavesQty);
      NET_FIELD_SET(CxlQty);
      NET_FIELD_SET(AvgPx);
      NET_FIELD_SET(OrdRejReason);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
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
      Fix::AllocType* aAllocType,
      Fix::Side* aSide,
      Fix::Quantity* aQuantity,
      Fix::AvgPx* aAvgPx,
      Fix::TradeDate* aTradeDate )
    : Message(MsgType())
    
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aAllocType);
      set(aSide);
      set(aQuantity);
      set(aAvgPx);
      set(aTradeDate);
    }
  
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(AllocTransType);
    NET_FIELD_SET(AllocType);
    NET_FIELD_SET(RefAllocID);
    NET_FIELD_SET(AllocLinkID);
    NET_FIELD_SET(AllocLinkType);
    NET_FIELD_SET(BookingRefID);
  
    __gc class NoOrders : public Fix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
        11,
        37,
        198,
        526,
        66,
        105,
        32,
        17,
        527,
        31,
        29,
        79,
        366,
        80,
        467,
        81,
        539,524,525,538,545,
        
          137,
          138,
          139,
        
        209,
        161,
        360,
        361,
        12,13,479,497,
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
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(WaveNo);
      NET_FIELD_SET(LastQty);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(SecondaryExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastCapacity);
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(SettlInstMode);
  
    __gc class NotifyBrokerOfCredit : public Fix::Group
    {
    public:
      NotifyBrokerOfCredit() : Group(208, 137, message_order ) {}
        static int message_order __gc[] = {
          137,
          138,
          139,
        0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
  
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
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
  
    __gc class NoExecs : public Fix::Group
    {
    public:
      NoExecs() : Group(124, 11, message_order ) {}
        static int message_order __gc[] = {
        11,
        37,
        198,
        526,
        66,
        105,
        32,
        17,
        527,
        31,
        29,
        79,
        366,
        80,
        467,
        81,
        539,524,525,538,545,
        
          137,
          138,
          139,
        
        209,
        161,
        360,
        361,
        12,13,479,497,
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
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(WaveNo);
      NET_FIELD_SET(LastQty);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(SecondaryExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastCapacity);
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(SettlInstMode);
  
    __gc class NotifyBrokerOfCredit : public Fix::Group
    {
    public:
      NotifyBrokerOfCredit() : Group(208, 137, message_order ) {}
        static int message_order __gc[] = {
          137,
          138,
          139,
        0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
  
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
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(AvgPrxPrecision);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(Concession);
    NET_FIELD_SET(TotalTakedown);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(TotalAccruedInterestAmt);
    NET_FIELD_SET(LegalConfirm);
  
    __gc class NoAllocs : public Fix::Group
    {
    public:
      NoAllocs() : Group(78, 11, message_order ) {}
        static int message_order __gc[] = {
        11,
        37,
        198,
        526,
        66,
        105,
        32,
        17,
        527,
        31,
        29,
        79,
        366,
        80,
        467,
        81,
        539,524,525,538,545,
        
          137,
          138,
          139,
        
        209,
        161,
        360,
        361,
        12,13,479,497,
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
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(WaveNo);
      NET_FIELD_SET(LastQty);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(SecondaryExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastCapacity);
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(SettlInstMode);
  
    __gc class NotifyBrokerOfCredit : public Fix::Group
    {
    public:
      NotifyBrokerOfCredit() : Group(208, 137, message_order ) {}
        static int message_order __gc[] = {
          137,
          138,
          139,
        0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
  
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
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
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
     
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AllocStatus);
    NET_FIELD_SET(AllocRejCode);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(LegalConfirm);
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
    NET_FIELD_SET(IndividualAllocID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(TransactTime);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
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
    NET_FIELD_SET(PaymentMethod);
    NET_FIELD_SET(PaymentRef);
    NET_FIELD_SET(CardHolderName);
    NET_FIELD_SET(CardNumber);
    NET_FIELD_SET(CardStartDate);
    NET_FIELD_SET(CardExpDate);
    NET_FIELD_SET(CardIssNo);
    NET_FIELD_SET(PaymentDate);
    NET_FIELD_SET(PaymentRemitterID);
  };

  public __gc class TradeCaptureReportRequest : public Message
  {
  public: 
    TradeCaptureReportRequest() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AD"); }
    //
    TradeCaptureReportRequest(
      Fix::TradeRequestID* aTradeRequestID,
      Fix::TradeRequestType* aTradeRequestType )
    : Message(MsgType())
    
    {
      set(aTradeRequestID);
      set(aTradeRequestType);
    }
  
    NET_FIELD_SET(TradeRequestID);
    NET_FIELD_SET(TradeRequestType);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(MatchStatus);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
  
    __gc class NoDates : public Fix::Group
    {
    public:
      NoDates() : Group(580, 60, message_order ) {}
        static int message_order __gc[] = {
        75,
        60,
      0};
      NET_FIELD_SET(TradeDate);
      NET_FIELD_SET(TransactTime);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradeInputSource);
    NET_FIELD_SET(TradeInputDevice);
  };

  public __gc class TradeCaptureReport : public Message
  {
  public: 
    TradeCaptureReport() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("AE"); }
    //
    TradeCaptureReport(
      Fix::TradeReportID* aTradeReportID,
      Fix::ExecType* aExecType,
      Fix::PreviouslyReported* aPreviouslyReported,
      Fix::LastQty* aLastQty,
      Fix::LastPx* aLastPx,
      Fix::TradeDate* aTradeDate,
      Fix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aTradeReportID);
      set(aExecType);
      set(aPreviouslyReported);
      set(aLastQty);
      set(aLastPx);
      set(aTradeDate);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(TradeReportID);
    NET_FIELD_SET(TradeReportTransType);
    NET_FIELD_SET(TradeRequestID);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(TradeReportRefID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(SecondaryExecID);
    NET_FIELD_SET(ExecRestatementReason);
    NET_FIELD_SET(PreviouslyReported);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(NoSecurityAltID);   
    NET_FIELD_SET(SecurityAltID);   
    NET_FIELD_SET(SecurityAltIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(MaturityMonthYear);   
    NET_FIELD_SET(MaturityDate);   
    NET_FIELD_SET(CouponPaymentDate);   
    NET_FIELD_SET(IssueDate);   
    NET_FIELD_SET(RepoCollateralSecurityType);   
    NET_FIELD_SET(RepurchaseTerm);   
    NET_FIELD_SET(RepurchaseRate);   
    NET_FIELD_SET(Factor);   
    NET_FIELD_SET(CreditRating);   
    NET_FIELD_SET(InstrRegistry);   
    NET_FIELD_SET(CountryOfIssue);   
    NET_FIELD_SET(StateOrProvinceOfIssue);   
    NET_FIELD_SET(LocaleOfIssue);   
    NET_FIELD_SET(RedemptionDate);   
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
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(LastQty);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlmntTyp);
    NET_FIELD_SET(FutSettDate);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(MatchType);
  
    __gc class NoSides : public Fix::Group
    {
    public:
      NoSides() : Group(552, 1, message_order ) {}
        static int message_order __gc[] = {
        54,
        37,
        198,
        11,
        453,448,447,452,523,
        1,
        581,
        63,
        64,
        81,
        575,
        
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        
        635,
        578,
        579,
        15,
        376,
        377,
        528,
        529,
        582,
        483,
        336,
        625,
        12,13,479,497,
        381,
        157,
        230,
        158,
        159,
        238,
        237,
        118,
        119,
        120,
        155,
        156,
        77,
        58,
        354,
        355,
        442,
        
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        
        
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        
      0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(SettlmntTyp);
      NET_FIELD_SET(FutSettDate);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(OddLot);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(TradeInputSource);
      NET_FIELD_SET(TradeInputDevice);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(ComplianceID);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(TransBkdTime);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(GrossTradeAmt);
      NET_FIELD_SET(NumDaysInterest);
      NET_FIELD_SET(ExDate);
      NET_FIELD_SET(AccruedInterestRate);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(Concession);
      NET_FIELD_SET(TotalTakedown);
      NET_FIELD_SET(NetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(MultiLegReportingType);
  
    __gc class NoClearingInstructions : public Fix::Group
    {
    public:
      NoClearingInstructions() : Group(576, 137, message_order ) {}
        static int message_order __gc[] = {
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        0};
      NET_FIELD_SET(ClearingInstruction);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
  
    __gc class NoContAmts : public Fix::Group
    {
    public:
      NoContAmts() : Group(518, 137, message_order ) {}
        static int message_order __gc[] = {
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        0};
      NET_FIELD_SET(ClearingInstruction);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
  
    __gc class NoMiscFees : public Fix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
          577,
          519,
          520,
          521,
          137,
          138,
          139,
        0};
      NET_FIELD_SET(ClearingInstruction);
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
    };
          NET_FIELD_SET(NoPartyIDs);
          NET_FIELD_SET(PartyID);
          NET_FIELD_SET(PartyIDSource);
          NET_FIELD_SET(PartyRole);
          NET_FIELD_SET(PartySubID);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    };
  };

  public __gc class RegistrationInstructions : public Message
  {
  public: 
    RegistrationInstructions() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("o"); }
    //
    RegistrationInstructions(
      Fix::RegistID* aRegistID,
      Fix::RegistTransType* aRegistTransType,
      Fix::RegistRefID* aRegistRefID )
    : Message(MsgType())
    
    {
      set(aRegistID);
      set(aRegistTransType);
      set(aRegistRefID);
    }
  
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(RegistTransType);
    NET_FIELD_SET(RegistRefID);
    NET_FIELD_SET(ClOrdID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(RegistAcctType);
    NET_FIELD_SET(TaxAdvantageType);
    NET_FIELD_SET(OwnershipType);
  
    __gc class NoRegistDtls : public Fix::Group
    {
    public:
      NoRegistDtls() : Group(473, 474, message_order ) {}
        static int message_order __gc[] = {
        509,
        511,
        474,
        482,
        539,524,525,538,545,
        522,
        486,
        475,
        477,
        512,
        478,
        498,
        499,
        500,
        501,
        502,
      0};
      NET_FIELD_SET(RegistDetls);
      NET_FIELD_SET(RegistEmail);
      NET_FIELD_SET(MailingDtls);
      NET_FIELD_SET(MailingInst);
      NET_FIELD_SET(OwnerType);
      NET_FIELD_SET(DateOfBirth);
      NET_FIELD_SET(InvestorCountryOfResidence);
      NET_FIELD_SET(DistribPaymentMethod);
      NET_FIELD_SET(DistribPercentage);
      NET_FIELD_SET(CashDistribCurr);
      NET_FIELD_SET(CashDistribAgentName);
      NET_FIELD_SET(CashDistribAgentCode);
      NET_FIELD_SET(CashDistribAgentAcctNumber);
      NET_FIELD_SET(CashDistribPayRef);
      NET_FIELD_SET(CashDistribAgentAcctName);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
  
    __gc class NoDistribInsts : public Fix::Group
    {
    public:
      NoDistribInsts() : Group(510, 474, message_order ) {}
        static int message_order __gc[] = {
        509,
        511,
        474,
        482,
        539,524,525,538,545,
        522,
        486,
        475,
        477,
        512,
        478,
        498,
        499,
        500,
        501,
        502,
      0};
      NET_FIELD_SET(RegistDetls);
      NET_FIELD_SET(RegistEmail);
      NET_FIELD_SET(MailingDtls);
      NET_FIELD_SET(MailingInst);
      NET_FIELD_SET(OwnerType);
      NET_FIELD_SET(DateOfBirth);
      NET_FIELD_SET(InvestorCountryOfResidence);
      NET_FIELD_SET(DistribPaymentMethod);
      NET_FIELD_SET(DistribPercentage);
      NET_FIELD_SET(CashDistribCurr);
      NET_FIELD_SET(CashDistribAgentName);
      NET_FIELD_SET(CashDistribAgentCode);
      NET_FIELD_SET(CashDistribAgentAcctNumber);
      NET_FIELD_SET(CashDistribPayRef);
      NET_FIELD_SET(CashDistribAgentAcctName);
          NET_FIELD_SET(NoNestedPartyIDs);
          NET_FIELD_SET(NestedPartyID);
          NET_FIELD_SET(NestedPartyIDSource);
          NET_FIELD_SET(NestedPartyRole);
          NET_FIELD_SET(NestedPartySubID);
    };
  };

  public __gc class RegistrationInstructionsResponse : public Message
  {
  public: 
    RegistrationInstructionsResponse() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("p"); }
    //
    RegistrationInstructionsResponse(
      Fix::RegistID* aRegistID,
      Fix::RegistTransType* aRegistTransType,
      Fix::RegistRefID* aRegistRefID,
      Fix::RegistStatus* aRegistStatus )
    : Message(MsgType())
    
    {
      set(aRegistID);
      set(aRegistTransType);
      set(aRegistRefID);
      set(aRegistStatus);
    }
  
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(RegistTransType);
    NET_FIELD_SET(RegistRefID);
    NET_FIELD_SET(ClOrdID);   
    NET_FIELD_SET(NoPartyIDs);   
    NET_FIELD_SET(PartyID);   
    NET_FIELD_SET(PartyIDSource);   
    NET_FIELD_SET(PartyRole);   
    NET_FIELD_SET(PartySubID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(RegistStatus);
    NET_FIELD_SET(RegistRejReasonCode);
    NET_FIELD_SET(RegistRejReasonText);
  };
}

 