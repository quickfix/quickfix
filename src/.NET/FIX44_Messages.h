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
#include "DeprecatedFields.h"

namespace QuickFix44
{
  public __gc class Header : public QuickFix::Message::Header
  {
  public:
    Header(QuickFix::Message* message) : QuickFix::Message::Header(message) {}
    
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
    NET_FIELD_SET(HopCompID);
    __gc class HopCompID : public QuickFix::Group
    {
    public:
      HopCompID() : Group(628, 628, message_order ) {}
        static int message_order __gc[] = {
      628,
      629,
      630,
    0};
      NET_FIELD_SET(HopCompID);
      NET_FIELD_SET(HopSendingTime);
      NET_FIELD_SET(HopRefID);
    };
  };
  
  public __gc class Trailer : public QuickFix::Message::Trailer
  {
  public:
    Trailer(QuickFix::Message* message) : QuickFix::Message::Trailer(message) {}
    
    NET_FIELD_SET(SignatureLength);
    NET_FIELD_SET(Signature);
    NET_FIELD_SET(CheckSum);
  };
  
  public __gc class Message : public QuickFix::Message
  {
  public: 
    Message() : QuickFix::Message(new QuickFix::BeginString("FIX.4.4"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( QuickFix::MsgType* msgType ) 
    : QuickFix::Message(
      new QuickFix::BeginString("FIX.4.4"),msgType ) 
      { 
        m_header = new Header(this); 
        m_trailer = new Trailer(this);
      }

    Header* getHeader() { return dynamic_cast<Header*>(QuickFix::Message::getHeader()); }
  };

  public __gc class Heartbeat : public Message
  {
  public: 
    Heartbeat() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("0"); }
  
    NET_FIELD_SET(TestReqID);
  };

  public __gc class Logon : public Message
  {
  public: 
    Logon() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("A"); }
    //
    Logon(
      QuickFix::EncryptMethod* aEncryptMethod,
      QuickFix::HeartBtInt* aHeartBtInt )
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
    NET_FIELD_SET(NextExpectedMsgSeqNum);
    NET_FIELD_SET(MaxMessageSize);
    NET_FIELD_SET(NoMsgTypes);
    __gc class NoMsgTypes : public QuickFix::Group
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("1"); }
    //
    TestRequest(
      QuickFix::TestReqID* aTestReqID )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("2"); }
    //
    ResendRequest(
      QuickFix::BeginSeqNo* aBeginSeqNo,
      QuickFix::EndSeqNo* aEndSeqNo )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("3"); }
    //
    Reject(
      QuickFix::RefSeqNum* aRefSeqNum )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("4"); }
    //
    SequenceReset(
      QuickFix::NewSeqNo* aNewSeqNo )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("5"); }
  
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class BusinessMessageReject : public Message
  {
  public: 
    BusinessMessageReject() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("j"); }
    //
    BusinessMessageReject(
      QuickFix::RefMsgType* aRefMsgType,
      QuickFix::BusinessRejectReason* aBusinessRejectReason )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("7"); }
    //
    Advertisement(
      QuickFix::AdvId* aAdvId,
      QuickFix::AdvTransType* aAdvTransType,
      QuickFix::AdvSide* aAdvSide,
      QuickFix::Quantity* aQuantity )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(AdvSide);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("6"); }
    //
    IndicationOfInterest(
      QuickFix::IOIid* aIOIid,
      QuickFix::IOITransType* aIOITransType,
      QuickFix::Side* aSide,
      QuickFix::IOIQty* aIOIQty )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(QtyType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(IOIQty);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 682, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        682,
        
      0};
      NET_FIELD_SET(LegIOIQty);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    };
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(ValidUntilTime);
    NET_FIELD_SET(IOIQltyInd);
    NET_FIELD_SET(IOINaturalFlag);
    NET_FIELD_SET(NoIOIQualifiers);
    __gc class NoIOIQualifiers : public QuickFix::Group
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
    __gc class NoRoutingIDs : public QuickFix::Group
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
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
  };

  public __gc class News : public Message
  {
  public: 
    News() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("B"); }
    //
    News(
      QuickFix::Headline* aHeadline )
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
    __gc class NoRoutingIDs : public QuickFix::Group
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
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 55, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      0};
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(LinesOfText);
    __gc class LinesOfText : public QuickFix::Group
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("C"); }
    //
    Email(
      QuickFix::EmailThreadID* aEmailThreadID,
      QuickFix::EmailType* aEmailType,
      QuickFix::Subject* aSubject )
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
    __gc class NoRoutingIDs : public QuickFix::Group
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
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 55, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      0};
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(LinesOfText);
    __gc class LinesOfText : public QuickFix::Group
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("R"); }
    //
    QuoteRequest(
      QuickFix::QuoteReqID* aQuoteReqID )
    : Message(MsgType())
    
    {
      set(aQuoteReqID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(RFQReqID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 1, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        913,914,915,918,788,916,917,919,898,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        140,
        303,
        537,
        336,
        625,
        229,
        54,
        854,
        38,152,516,468,469,
        63,
        64,
        193,
        192,
        15,
        
        1,
        660,
        581,
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          687,
          690,
          587,
          588,
          
          
          676,677,678,679,680,
        
        
          695,
        
        692,
        40,
        62,
        126,
        60,
        218,220,221,222,662,663,699,761,
        423,
        44,
        640,
        235,236,701,696,697,698,
        
      0};
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(QuoteRequestType);
      NET_FIELD_SET(QuoteType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(QtyType);
      NET_FIELD_SET(SettlType);
      NET_FIELD_SET(SettlDate);
      NET_FIELD_SET(SettlDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(QuotePriceType);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(ValidUntilTime);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(TransactTime);
      NET_FIELD_SET(PriceType);
      NET_FIELD_SET(Price);
      NET_FIELD_SET(Price2);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          687,
          690,
          587,
          588,
          
          
          676,677,678,679,680,
        0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(LegBenchmarkCurveCurrency);
          NET_FIELD_SET(LegBenchmarkCurveName);
          NET_FIELD_SET(LegBenchmarkCurvePoint);
          NET_FIELD_SET(LegBenchmarkPrice);
          NET_FIELD_SET(LegBenchmarkPriceType);
    };
    NET_FIELD_SET(NoQuoteQualifiers);
    __gc class NoQuoteQualifiers : public QuickFix::Group
    {
    public:
      NoQuoteQualifiers() : Group(735, 695, message_order ) {}
        static int message_order __gc[] = {
          695,
        0};
      NET_FIELD_SET(QuoteQualifier);
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
          NET_FIELD_SET(AgreementDesc);
          NET_FIELD_SET(AgreementID);
          NET_FIELD_SET(AgreementDate);
          NET_FIELD_SET(AgreementCurrency);
          NET_FIELD_SET(TerminationType);
          NET_FIELD_SET(StartDate);
          NET_FIELD_SET(EndDate);
          NET_FIELD_SET(DeliveryType);
          NET_FIELD_SET(MarginRatio);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
          NET_FIELD_SET(Spread);
          NET_FIELD_SET(BenchmarkCurveCurrency);
          NET_FIELD_SET(BenchmarkCurveName);
          NET_FIELD_SET(BenchmarkCurvePoint);
          NET_FIELD_SET(BenchmarkPrice);
          NET_FIELD_SET(BenchmarkPriceType);
          NET_FIELD_SET(BenchmarkSecurityID);
          NET_FIELD_SET(BenchmarkSecurityIDSource);
          NET_FIELD_SET(YieldType);
          NET_FIELD_SET(Yield);
          NET_FIELD_SET(YieldCalcDate);
          NET_FIELD_SET(YieldRedemptionDate);
          NET_FIELD_SET(YieldRedemptionPrice);
          NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class QuoteResponse : public Message
  {
  public: 
    QuoteResponse() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AJ"); }
    //
    QuoteResponse(
      QuickFix::QuoteRespID* aQuoteRespID,
      QuickFix::QuoteRespType* aQuoteRespType )
    : Message(MsgType())
    
    {
      set(aQuoteRespID);
      set(aQuoteRespType);
    }
  
    NET_FIELD_SET(QuoteRespID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteRespType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(IOIid);
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(NoQuoteQualifiers);
    __gc class NoQuoteQualifiers : public QuickFix::Group
    {
    public:
      NoQuoteQualifiers() : Group(735, 695, message_order ) {}
        static int message_order __gc[] = {
        695,
      0};
      NET_FIELD_SET(QuoteQualifier);
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(SettlDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        687,
        690,
        587,
        588,
        
        
        686,
        681,
        684,
        676,677,678,679,680,
      0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
      NET_FIELD_SET(LegPriceType);
      NET_FIELD_SET(LegBidPx);
      NET_FIELD_SET(LegOfferPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(LegBenchmarkCurveCurrency);
          NET_FIELD_SET(LegBenchmarkCurveName);
          NET_FIELD_SET(LegBenchmarkCurvePoint);
          NET_FIELD_SET(LegBenchmarkPrice);
          NET_FIELD_SET(LegBenchmarkPriceType);
    };
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
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(BidForwardPoints2);
    NET_FIELD_SET(OfferForwardPoints2);
    NET_FIELD_SET(SettlCurrBidFxRate);
    NET_FIELD_SET(SettlCurrOfferFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
  };

  public __gc class QuoteRequestReject : public Message
  {
  public: 
    QuoteRequestReject() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AG"); }
    //
    QuoteRequestReject(
      QuickFix::QuoteReqID* aQuoteReqID,
      QuickFix::QuoteRequestRejectReason* aQuoteRequestRejectReason )
    : Message(MsgType())
    
    {
      set(aQuoteReqID);
      set(aQuoteRequestRejectReason);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(RFQReqID);
    NET_FIELD_SET(QuoteRequestRejectReason);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 1, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        913,914,915,918,788,916,917,919,898,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        140,
        303,
        537,
        336,
        625,
        229,
        54,
        854,
        38,152,516,468,469,
        63,
        64,
        193,
        192,
        15,
        
        1,
        660,
        581,
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          687,
          690,
          587,
          588,
          
          
          676,677,678,679,680,
          
        0};
      NET_FIELD_SET(PrevClosePx);
      NET_FIELD_SET(QuoteRequestType);
      NET_FIELD_SET(QuoteType);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(QtyType);
      NET_FIELD_SET(SettlType);
      NET_FIELD_SET(SettlDate);
      NET_FIELD_SET(SettlDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          687,
          690,
          587,
          588,
          
          
          676,677,678,679,680,
          0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(LegBenchmarkCurveCurrency);
          NET_FIELD_SET(LegBenchmarkCurveName);
          NET_FIELD_SET(LegBenchmarkCurvePoint);
          NET_FIELD_SET(LegBenchmarkPrice);
          NET_FIELD_SET(LegBenchmarkPriceType);
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
          NET_FIELD_SET(AgreementDesc);
          NET_FIELD_SET(AgreementID);
          NET_FIELD_SET(AgreementDate);
          NET_FIELD_SET(AgreementCurrency);
          NET_FIELD_SET(TerminationType);
          NET_FIELD_SET(StartDate);
          NET_FIELD_SET(EndDate);
          NET_FIELD_SET(DeliveryType);
          NET_FIELD_SET(MarginRatio);
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    };
    NET_FIELD_SET(NoQuoteQualifiers);
    __gc class NoQuoteQualifiers : public QuickFix::Group
    {
    public:
      NoQuoteQualifiers() : Group(735, 695, message_order ) {}
        static int message_order __gc[] = {
          695,
        0};
      NET_FIELD_SET(QuoteQualifier);
    };
    NET_FIELD_SET(QuotePriceType);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(TransactTime);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(Price2);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class RFQRequest : public Message
  {
  public: 
    RFQRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AH"); }
    //
    RFQRequest(
      QuickFix::RFQReqID* aRFQReqID )
    : Message(MsgType())
    
    {
      set(aRFQReqID);
    }
  
    NET_FIELD_SET(RFQReqID);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 140, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        
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
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class Quote : public Message
  {
  public: 
    Quote() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("S"); }
    //
    Quote(
      QuickFix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteRespID);
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(NoQuoteQualifiers);
    __gc class NoQuoteQualifiers : public QuickFix::Group
    {
    public:
      NoQuoteQualifiers() : Group(735, 695, message_order ) {}
        static int message_order __gc[] = {
        695,
      0};
      NET_FIELD_SET(QuoteQualifier);
    };
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(SettlDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        687,
        690,
        587,
        588,
        
        
        686,
        681,
        684,
        676,677,678,679,680,
      0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
      NET_FIELD_SET(LegPriceType);
      NET_FIELD_SET(LegBidPx);
      NET_FIELD_SET(LegOfferPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(LegBenchmarkCurveCurrency);
          NET_FIELD_SET(LegBenchmarkCurveName);
          NET_FIELD_SET(LegBenchmarkCurvePoint);
          NET_FIELD_SET(LegBenchmarkPrice);
          NET_FIELD_SET(LegBenchmarkPriceType);
    };
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
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(BidForwardPoints2);
    NET_FIELD_SET(OfferForwardPoints2);
    NET_FIELD_SET(SettlCurrBidFxRate);
    NET_FIELD_SET(SettlCurrOfferFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(PriceType);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class QuoteCancel : public Message
  {
  public: 
    QuoteCancel() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("Z"); }
    //
    QuoteCancel(
      QuickFix::QuoteID* aQuoteID,
      QuickFix::QuoteCancelType* aQuoteCancelType )
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public QuickFix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 55, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        913,914,915,918,788,916,917,919,898,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        
      0};
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
          NET_FIELD_SET(AgreementDesc);
          NET_FIELD_SET(AgreementID);
          NET_FIELD_SET(AgreementDate);
          NET_FIELD_SET(AgreementCurrency);
          NET_FIELD_SET(TerminationType);
          NET_FIELD_SET(StartDate);
          NET_FIELD_SET(EndDate);
          NET_FIELD_SET(DeliveryType);
          NET_FIELD_SET(MarginRatio);
    };
  };

  public __gc class QuoteStatusRequest : public Message
  {
  public: 
    QuoteStatusRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("a"); }
  
    NET_FIELD_SET(QuoteStatusReqID);
    NET_FIELD_SET(QuoteID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class QuoteStatusReport : public Message
  {
  public: 
    QuoteStatusReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AI"); }
    //
    QuoteStatusReport(
      QuickFix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteStatusReqID);
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteRespID);
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(SettlDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        687,
        690,
        587,
        588,
        
        
      0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoQuoteQualifiers);
    __gc class NoQuoteQualifiers : public QuickFix::Group
    {
    public:
      NoQuoteQualifiers() : Group(735, 695, message_order ) {}
        static int message_order __gc[] = {
        695,
      0};
      NET_FIELD_SET(QuoteQualifier);
    };
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
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
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(BidForwardPoints2);
    NET_FIELD_SET(OfferForwardPoints2);
    NET_FIELD_SET(SettlCurrBidFxRate);
    NET_FIELD_SET(SettlCurrOfferFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(CommType);
    NET_FIELD_SET(Commission);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(QuoteStatus);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class MassQuote : public Message
  {
  public: 
    MassQuote() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("i"); }
    //
    MassQuote(
      QuickFix::QuoteID* aQuoteID )
    : Message(MsgType())
    
    {
      set(aQuoteID);
    }
  
    NET_FIELD_SET(QuoteReqID);
    NET_FIELD_SET(QuoteID);
    NET_FIELD_SET(QuoteType);
    NET_FIELD_SET(QuoteResponseLevel);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DefBidSize);
    NET_FIELD_SET(DefOfferSize);
    NET_FIELD_SET(NoQuoteSets);
    __gc class NoQuoteSets : public QuickFix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
        302,
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        367,
        304,
        893,
        
          299,
          55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
          
            600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          
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
      NET_FIELD_SET(TotNoQuoteEntries);
      NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public QuickFix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 15, message_order ) {}
        static int message_order __gc[] = {
          299,
          55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
          
            600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          
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
      NET_FIELD_SET(SettlDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(SettlDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(BidForwardPoints2);
      NET_FIELD_SET(OfferForwardPoints2);
      NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
            600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
          0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
  };

  public __gc class MassQuoteAcknowledgement : public Message
  {
  public: 
    MassQuoteAcknowledgement() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("b"); }
    //
    MassQuoteAcknowledgement(
      QuickFix::QuoteStatus* aQuoteStatus )
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoQuoteSets);
    __gc class NoQuoteSets : public QuickFix::Group
    {
    public:
      NoQuoteSets() : Group(296, 302, message_order ) {}
        static int message_order __gc[] = {
      302,
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      304,
      893,
      
        299,
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
         
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
      NET_FIELD_SET(TotNoQuoteEntries);
      NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoQuoteEntries);
    __gc class NoQuoteEntries : public QuickFix::Group
    {
    public:
      NoQuoteEntries() : Group(295, 15, message_order ) {}
        static int message_order __gc[] = {
        299,
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
         
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
      NET_FIELD_SET(SettlDate);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(SettlDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(BidForwardPoints2);
      NET_FIELD_SET(OfferForwardPoints2);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(QuoteEntryRejectReason);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
         0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
  };

  public __gc class MarketDataRequest : public Message
  {
  public: 
    MarketDataRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("V"); }
    //
    MarketDataRequest(
      QuickFix::MDReqID* aMDReqID,
      QuickFix::SubscriptionRequestType* aSubscriptionRequestType,
      QuickFix::MarketDepth* aMarketDepth )
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
    NET_FIELD_SET(OpenCloseSettlFlag);
    NET_FIELD_SET(Scope);
    NET_FIELD_SET(MDImplicitDelete);
    NET_FIELD_SET(NoMDEntryTypes);
    __gc class NoMDEntryTypes : public QuickFix::Group
    {
    public:
      NoMDEntryTypes() : Group(267, 269, message_order ) {}
        static int message_order __gc[] = {
      269,
    0};
      NET_FIELD_SET(MDEntryType);
    };
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 55, message_order ) {}
        static int message_order __gc[] = {
      55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      
      
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      
    0};
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ApplQueueAction);
    NET_FIELD_SET(ApplQueueMax);
  };

  public __gc class MarketDataSnapshotFullRefresh : public Message
  {
  public: 
    MarketDataSnapshotFullRefresh() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("W"); }
  
    NET_FIELD_SET(MDReqID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(FinancialStatus);
    NET_FIELD_SET(CorporateAction);
    NET_FIELD_SET(NetChgPrevDay);
    NET_FIELD_SET(NoMDEntries);
    __gc class NoMDEntries : public QuickFix::Group
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
      811,
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
      NET_FIELD_SET(OpenCloseSettlFlag);
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
      NET_FIELD_SET(PriceDelta);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    };
    NET_FIELD_SET(ApplQueueDepth);
    NET_FIELD_SET(ApplQueueResolution);
  };

  public __gc class MarketDataIncrementalRefresh : public Message
  {
  public: 
    MarketDataIncrementalRefresh() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("X"); }
  
    NET_FIELD_SET(MDReqID);
    NET_FIELD_SET(NoMDEntries);
    __gc class NoMDEntries : public QuickFix::Group
    {
    public:
      NoMDEntries() : Group(268, 15, message_order ) {}
        static int message_order __gc[] = {
      279,
      285,
      269,
      278,
      
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        
      
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
      811,
      451,
      58,
      354,
      355,
    0};
      NET_FIELD_SET(MDUpdateAction);
      NET_FIELD_SET(DeleteReason);
      NET_FIELD_SET(MDEntryType);
      NET_FIELD_SET(MDEntryID);
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
      NET_FIELD_SET(OpenCloseSettlFlag);
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
      NET_FIELD_SET(PriceDelta);
      NET_FIELD_SET(NetChgPrevDay);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(MDEntryRefID);
    __gc class MDEntryRefID : public QuickFix::Group
    {
    public:
      MDEntryRefID() : Group(280, 55, message_order ) {}
        static int message_order __gc[] = {
        55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
        
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        
        
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        
      0};
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
          311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
        0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
          600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    };
    NET_FIELD_SET(ApplQueueDepth);
    NET_FIELD_SET(ApplQueueResolution);
  };

  public __gc class MarketDataRequestReject : public Message
  {
  public: 
    MarketDataRequestReject() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("Y"); }
    //
    MarketDataRequestReject(
      QuickFix::MDReqID* aMDReqID )
    : Message(MsgType())
    
    {
      set(aMDReqID);
    }
  
    NET_FIELD_SET(MDReqID);
    NET_FIELD_SET(MDReqRejReason);
    NET_FIELD_SET(NoAltMDSource);
    __gc class NoAltMDSource : public QuickFix::Group
    {
    public:
      NoAltMDSource() : Group(816, 817, message_order ) {}
        static int message_order __gc[] = {
      817,
    0};
      NET_FIELD_SET(AltMDSourceID);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class SecurityDefinitionRequest : public Message
  {
  public: 
    SecurityDefinitionRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("c"); }
    //
    SecurityDefinitionRequest(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityRequestType* aSecurityRequestType )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(ExpirationCycle);
    NET_FIELD_SET(SubscriptionRequestType);
  };

  public __gc class SecurityDefinition : public Message
  {
  public: 
    SecurityDefinition() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("d"); }
    //
    SecurityDefinition(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityResponseID* aSecurityResponseID,
      QuickFix::SecurityResponseType* aSecurityResponseType )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(ExpirationCycle);
    NET_FIELD_SET(RoundLot);
    NET_FIELD_SET(MinTradeVol);
  };

  public __gc class SecurityTypeRequest : public Message
  {
  public: 
    SecurityTypeRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("v"); }
    //
    SecurityTypeRequest(
      QuickFix::SecurityReqID* aSecurityReqID )
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
    NET_FIELD_SET(Product);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(SecuritySubType);
  };

  public __gc class SecurityTypes : public Message
  {
  public: 
    SecurityTypes() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("w"); }
    //
    SecurityTypes(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityResponseID* aSecurityResponseID,
      QuickFix::SecurityResponseType* aSecurityResponseType )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityResponseType);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityResponseType);
    NET_FIELD_SET(TotNoSecurityTypes);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoSecurityTypes);
    __gc class NoSecurityTypes : public QuickFix::Group
    {
    public:
      NoSecurityTypes() : Group(558, 167, message_order ) {}
        static int message_order __gc[] = {
      167,
      762,
      460,
      461,
    0};
      NET_FIELD_SET(SecurityType);
      NET_FIELD_SET(SecuritySubType);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("x"); }
    //
    SecurityListRequest(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityListRequestType* aSecurityListRequestType )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("y"); }
    //
    SecurityList(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityResponseID* aSecurityResponseID,
      QuickFix::SecurityRequestResult* aSecurityRequestResult )
    : Message(MsgType())
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityRequestResult);
    }
  
    NET_FIELD_SET(SecurityReqID);
    NET_FIELD_SET(SecurityResponseID);
    NET_FIELD_SET(SecurityRequestResult);
    NET_FIELD_SET(TotNoRelatedSym);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
      55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      668,869,
      913,914,915,918,788,916,917,919,898,
      
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      
      15,
      
      
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        690,
        587,
        
        676,677,678,679,680,
      
      218,220,221,222,662,663,699,761,
      235,236,701,696,697,698,
      561,
      562,
      336,
      625,
      827,
      58,
      354,
      355,
    0};
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(RoundLot);
      NET_FIELD_SET(MinTradeVol);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(ExpirationCycle);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 587, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
        690,
        587,
        
        676,677,678,679,680,
      0};
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegSettlType);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
          NET_FIELD_SET(LegBenchmarkCurveCurrency);
          NET_FIELD_SET(LegBenchmarkCurveName);
          NET_FIELD_SET(LegBenchmarkCurvePoint);
          NET_FIELD_SET(LegBenchmarkPrice);
          NET_FIELD_SET(LegBenchmarkPriceType);
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
          NET_FIELD_SET(DeliveryForm);
          NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
          NET_FIELD_SET(AgreementDesc);
          NET_FIELD_SET(AgreementID);
          NET_FIELD_SET(AgreementDate);
          NET_FIELD_SET(AgreementCurrency);
          NET_FIELD_SET(TerminationType);
          NET_FIELD_SET(StartDate);
          NET_FIELD_SET(EndDate);
          NET_FIELD_SET(DeliveryType);
          NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
          NET_FIELD_SET(Spread);
          NET_FIELD_SET(BenchmarkCurveCurrency);
          NET_FIELD_SET(BenchmarkCurveName);
          NET_FIELD_SET(BenchmarkCurvePoint);
          NET_FIELD_SET(BenchmarkPrice);
          NET_FIELD_SET(BenchmarkPriceType);
          NET_FIELD_SET(BenchmarkSecurityID);
          NET_FIELD_SET(BenchmarkSecurityIDSource);
          NET_FIELD_SET(YieldType);
          NET_FIELD_SET(Yield);
          NET_FIELD_SET(YieldCalcDate);
          NET_FIELD_SET(YieldRedemptionDate);
          NET_FIELD_SET(YieldRedemptionPrice);
          NET_FIELD_SET(YieldRedemptionPriceType);
    };
  };

  public __gc class DerivativeSecurityListRequest : public Message
  {
  public: 
    DerivativeSecurityListRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("z"); }
    //
    DerivativeSecurityListRequest(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityListRequestType* aSecurityListRequestType )
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
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingSecuritySubType);   
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
    NET_FIELD_SET(UnderlyingStrikePrice);   
    NET_FIELD_SET(UnderlyingStrikeCurrency);   
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
    NET_FIELD_SET(UnderlyingCPProgram);   
    NET_FIELD_SET(UnderlyingCPRegType);   
    NET_FIELD_SET(UnderlyingCurrency);   
    NET_FIELD_SET(UnderlyingQty);   
    NET_FIELD_SET(UnderlyingPx);   
    NET_FIELD_SET(UnderlyingDirtyPrice);   
    NET_FIELD_SET(UnderlyingEndPrice);   
    NET_FIELD_SET(UnderlyingStartValue);   
    NET_FIELD_SET(UnderlyingCurrentValue);   
    NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    NET_FIELD_SET(SecuritySubType);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AA"); }
    //
    DerivativeSecurityList(
      QuickFix::SecurityReqID* aSecurityReqID,
      QuickFix::SecurityResponseID* aSecurityResponseID,
      QuickFix::SecurityRequestResult* aSecurityRequestResult )
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
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingSecuritySubType);   
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
    NET_FIELD_SET(UnderlyingStrikePrice);   
    NET_FIELD_SET(UnderlyingStrikeCurrency);   
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
    NET_FIELD_SET(UnderlyingCPProgram);   
    NET_FIELD_SET(UnderlyingCPRegType);   
    NET_FIELD_SET(UnderlyingCurrency);   
    NET_FIELD_SET(UnderlyingQty);   
    NET_FIELD_SET(UnderlyingPx);   
    NET_FIELD_SET(UnderlyingDirtyPrice);   
    NET_FIELD_SET(UnderlyingEndPrice);   
    NET_FIELD_SET(UnderlyingStartValue);   
    NET_FIELD_SET(UnderlyingCurrentValue);   
    NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    NET_FIELD_SET(TotNoRelatedSym);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoRelatedSym);
    __gc class NoRelatedSym : public QuickFix::Group
    {
    public:
      NoRelatedSym() : Group(146, 15, message_order ) {}
        static int message_order __gc[] = {
      55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      15,
      827,
      668,869,
      
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      
      336,
      625,
      58,
      354,
      355,
    0};
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(ExpirationCycle);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
        600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
          NET_FIELD_SET(DeliveryForm);
          NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
    };
  };

  public __gc class SecurityStatusRequest : public Message
  {
  public: 
    SecurityStatusRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("e"); }
    //
    SecurityStatusRequest(
      QuickFix::SecurityStatusReqID* aSecurityStatusReqID,
      QuickFix::SubscriptionRequestType* aSubscriptionRequestType )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
  };

  public __gc class SecurityStatus : public Message
  {
  public: 
    SecurityStatus() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("f"); }
  
    NET_FIELD_SET(SecurityStatusReqID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("g"); }
    //
    TradingSessionStatusRequest(
      QuickFix::TradSesReqID* aTradSesReqID,
      QuickFix::SubscriptionRequestType* aSubscriptionRequestType )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("h"); }
    //
    TradingSessionStatus(
      QuickFix::TradingSessionID* aTradingSessionID,
      QuickFix::TradSesStatus* aTradSesStatus )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("D"); }
    //
    NewOrderSingle(
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      736,
      467,
      
      80,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ProcessCode);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(QtyType);   
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
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
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
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(SettlDate2);
    NET_FIELD_SET(OrderQty2);
    NET_FIELD_SET(Price2);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);   
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
  };

  public __gc class ExecutionReport : public Message
  {
  public: 
    ExecutionReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("8"); }
    //
    ExecutionReport(
      QuickFix::OrderID* aOrderID,
      QuickFix::ExecID* aExecID,
      QuickFix::ExecType* aExecType,
      QuickFix::OrdStatus* aOrdStatus,
      QuickFix::Side* aSide,
      QuickFix::LeavesQty* aLeavesQty,
      QuickFix::CumQty* aCumQty,
      QuickFix::AvgPx* aAvgPx )
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
    NET_FIELD_SET(QuoteRespID);
    NET_FIELD_SET(OrdStatusReqID);
    NET_FIELD_SET(MassStatusReqID);
    NET_FIELD_SET(TotNumReports);
    NET_FIELD_SET(LastRptRequested);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(NoContraBrokers);
    __gc class NoContraBrokers : public QuickFix::Group
    {
    public:
      NoContraBrokers() : Group(382, 337, message_order ) {}
        static int message_order __gc[] = {
      375,
      337,
      437,
      438,
      655,
    0};
      NET_FIELD_SET(ContraBroker);
      NET_FIELD_SET(ContraTrader);
      NET_FIELD_SET(ContraTradeQty);
      NET_FIELD_SET(ContraTradeTime);
      NET_FIELD_SET(ContraLegRefID);
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
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(QtyType);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(PeggedPrice);
    NET_FIELD_SET(DiscretionPrice);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(TargetStrategyPerformance);
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
    NET_FIELD_SET(LastQty);
    NET_FIELD_SET(UnderlyingLastQty);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(UnderlyingLastPx);
    NET_FIELD_SET(LastParPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(TimeBracket);
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
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(ExDate);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(InterestAtMaturity);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);
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
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(SettlDate2);
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
    NET_FIELD_SET(LastLiquidityInd);
    NET_FIELD_SET(NoContAmts);
    __gc class NoContAmts : public QuickFix::Group
    {
    public:
      NoContAmts() : Group(518, 519, message_order ) {}
        static int message_order __gc[] = {
      519,
      520,
      521,
    0};
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 564, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      687,
      690,
      
      564,
      565,
      
      654,
      566,
      587,
      588,
      637,
    0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(CopyMsgIndicator);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138,
      139,
      891,
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
  };

  public __gc class DontKnowTrade : public Message
  {
  public: 
    DontKnowTrade() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("Q"); }
    //
    DontKnowTrade(
      QuickFix::OrderID* aOrderID,
      QuickFix::ExecID* aExecID,
      QuickFix::DKReason* aDKReason,
      QuickFix::Side* aSide )
    : Message(MsgType())
    
    {
      set(aOrderID);
      set(aExecID);
      set(aDKReason);
      set(aSide);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(DKReason);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("G"); }
    //
    OrderCancelReplaceRequest(
      QuickFix::OrigClOrdID* aOrigClOrdID,
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(OrigClOrdID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(OrigOrdModTime);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      736,
      467,
      
      80,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(QtyType);   
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
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);   
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
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
    NET_FIELD_SET(ForexReq);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(SettlDate2);
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
  };

  public __gc class OrderCancelRequest : public Message
  {
  public: 
    OrderCancelRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("F"); }
    //
    OrderCancelRequest(
      QuickFix::OrigClOrdID* aOrigClOrdID,
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide,
      QuickFix::TransactTime* aTransactTime )
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
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("9"); }
    //
    OrderCancelReject(
      QuickFix::OrderID* aOrderID,
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::OrigClOrdID* aOrigClOrdID,
      QuickFix::OrdStatus* aOrdStatus,
      QuickFix::CxlRejResponseTo* aCxlRejResponseTo )
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
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("H"); }
    //
    OrderStatusRequest(
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide )
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(OrdStatusReqID);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Side);
  };

  public __gc class OrderMassCancelRequest : public Message
  {
  public: 
    OrderMassCancelRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("q"); }
    //
    OrderMassCancelRequest(
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::MassCancelRequestType* aMassCancelRequestType,
      QuickFix::TransactTime* aTransactTime )
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(UnderlyingSymbol);   
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingSecuritySubType);   
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
    NET_FIELD_SET(UnderlyingStrikePrice);   
    NET_FIELD_SET(UnderlyingStrikeCurrency);   
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
    NET_FIELD_SET(UnderlyingCPProgram);   
    NET_FIELD_SET(UnderlyingCPRegType);   
    NET_FIELD_SET(UnderlyingCurrency);   
    NET_FIELD_SET(UnderlyingQty);   
    NET_FIELD_SET(UnderlyingPx);   
    NET_FIELD_SET(UnderlyingDirtyPrice);   
    NET_FIELD_SET(UnderlyingEndPrice);   
    NET_FIELD_SET(UnderlyingStartValue);   
    NET_FIELD_SET(UnderlyingCurrentValue);   
    NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("r"); }
    //
    OrderMassCancelReport(
      QuickFix::OrderID* aOrderID,
      QuickFix::MassCancelRequestType* aMassCancelRequestType,
      QuickFix::MassCancelResponse* aMassCancelResponse )
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
    NET_FIELD_SET(NoAffectedOrders);
    __gc class NoAffectedOrders : public QuickFix::Group
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(UnderlyingSymbol);   
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingSecuritySubType);   
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
    NET_FIELD_SET(UnderlyingStrikePrice);   
    NET_FIELD_SET(UnderlyingStrikeCurrency);   
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
    NET_FIELD_SET(UnderlyingCPProgram);   
    NET_FIELD_SET(UnderlyingCPRegType);   
    NET_FIELD_SET(UnderlyingCurrency);   
    NET_FIELD_SET(UnderlyingQty);   
    NET_FIELD_SET(UnderlyingPx);   
    NET_FIELD_SET(UnderlyingDirtyPrice);   
    NET_FIELD_SET(UnderlyingEndPrice);   
    NET_FIELD_SET(UnderlyingStartValue);   
    NET_FIELD_SET(UnderlyingCurrentValue);   
    NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AF"); }
    //
    OrderMassStatusRequest(
      QuickFix::MassStatusReqID* aMassStatusReqID,
      QuickFix::MassStatusReqType* aMassStatusReqType )
    : Message(MsgType())
    
    {
      set(aMassStatusReqID);
      set(aMassStatusReqType);
    }
  
    NET_FIELD_SET(MassStatusReqID);
    NET_FIELD_SET(MassStatusReqType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(UnderlyingSymbol);   
    NET_FIELD_SET(UnderlyingSymbolSfx);   
    NET_FIELD_SET(UnderlyingSecurityID);   
    NET_FIELD_SET(UnderlyingSecurityIDSource);   
    NET_FIELD_SET(UnderlyingProduct);   
    NET_FIELD_SET(UnderlyingCFICode);   
    NET_FIELD_SET(UnderlyingSecurityType);   
    NET_FIELD_SET(UnderlyingSecuritySubType);   
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
    NET_FIELD_SET(UnderlyingStrikePrice);   
    NET_FIELD_SET(UnderlyingStrikeCurrency);   
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
    NET_FIELD_SET(UnderlyingCPProgram);   
    NET_FIELD_SET(UnderlyingCPRegType);   
    NET_FIELD_SET(UnderlyingCurrency);   
    NET_FIELD_SET(UnderlyingQty);   
    NET_FIELD_SET(UnderlyingPx);   
    NET_FIELD_SET(UnderlyingDirtyPrice);   
    NET_FIELD_SET(UnderlyingEndPrice);   
    NET_FIELD_SET(UnderlyingStartValue);   
    NET_FIELD_SET(UnderlyingCurrentValue);   
    NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    NET_FIELD_SET(Side);
  };

  public __gc class NewOrderCross : public Message
  {
  public: 
    NewOrderCross() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("s"); }
    //
    NewOrderCross(
      QuickFix::CrossID* aCrossID,
      QuickFix::CrossType* aCrossType,
      QuickFix::CrossPrioritization* aCrossPrioritization,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(CrossPrioritization);
    NET_FIELD_SET(NoSides);
    __gc class NoSides : public QuickFix::Group
    {
    public:
      NoSides() : Group(552, 1, message_order ) {}
        static int message_order __gc[] = {
      54,
      11,
      526,
      583,
      
      229,
      75,
      1,
      660,
      581,
      589,
      590,
      591,
      70,
      
        79,
        661,
        736,
        467,
        
        80,
      
      854,
      38,152,516,468,469,
      12,13,479,497,
      528,
      529,
      582,
      121,
      120,
      775,
      58,
      354,
      355,
      77,
      203,
      544,
      635,
      377,
      659,
    0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(TradeDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(AllocID);
      NET_FIELD_SET(QtyType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(BookingType);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        661,
        736,
        467,
        
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
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
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
  };

  public __gc class CrossOrderCancelReplaceRequest : public Message
  {
  public: 
    CrossOrderCancelReplaceRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("t"); }
    //
    CrossOrderCancelReplaceRequest(
      QuickFix::CrossID* aCrossID,
      QuickFix::OrigCrossID* aOrigCrossID,
      QuickFix::CrossType* aCrossType,
      QuickFix::CrossPrioritization* aCrossPrioritization,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aCrossID);
      set(aOrigCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(CrossID);
    NET_FIELD_SET(OrigCrossID);
    NET_FIELD_SET(CrossType);
    NET_FIELD_SET(CrossPrioritization);
    NET_FIELD_SET(NoSides);
    __gc class NoSides : public QuickFix::Group
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
      
      229,
      75,
      1,
      660,
      581,
      589,
      590,
      591,
      70,
      
        79,
        661,
        736,
        467,
        
        80,
      
      854,
      38,152,516,468,469,
      12,13,479,497,
      528,
      529,
      582,
      121,
      120,
      775,
      58,
      354,
      355,
      77,
      203,
      544,
      635,
      377,
      659,
    0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrigClOrdID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(OrigOrdModTime);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(TradeDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(AllocID);
      NET_FIELD_SET(QtyType);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(BookingType);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(CashMargin);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(SideComplianceID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        661,
        736,
        467,
        
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(OrdType);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(StopPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
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
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
  };

  public __gc class CrossOrderCancelRequest : public Message
  {
  public: 
    CrossOrderCancelRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("u"); }
    //
    CrossOrderCancelRequest(
      QuickFix::CrossID* aCrossID,
      QuickFix::OrigCrossID* aOrigCrossID,
      QuickFix::CrossType* aCrossType,
      QuickFix::CrossPrioritization* aCrossPrioritization,
      QuickFix::TransactTime* aTransactTime )
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
    NET_FIELD_SET(NoSides);
    __gc class NoSides : public QuickFix::Group
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
      
      229,
      75,
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
      NET_FIELD_SET(TradeDate);
      NET_FIELD_SET(ComplianceID);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
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
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(TransactTime);
  };

  public __gc class NewOrderMultileg : public Message
  {
  public: 
    NewOrderMultileg() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AB"); }
    //
    NewOrderMultileg(
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aClOrdID);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(ClOrdLinkID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      736,
      467,
      
      80,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNested3PartyIDs);
    __gc class NoNested3PartyIDs : public QuickFix::Group
    {
    public:
      NoNested3PartyIDs() : Group(948, 949, message_order ) {}
        static int message_order __gc[] = {
        949,
        950,
        951,
        
          953,
          954,
          
      0};
      NET_FIELD_SET(Nested3PartyID);
      NET_FIELD_SET(Nested3PartyIDSource);
      NET_FIELD_SET(Nested3PartyRole);
    NET_FIELD_SET(NoNested3PartySubIDs);
    __gc class NoNested3PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested3PartySubIDs() : Group(952, 953, message_order ) {}
        static int message_order __gc[] = {
          953,
          954,
          0};
      NET_FIELD_SET(Nested3PartySubID);
      NET_FIELD_SET(Nested3PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 564, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      687,
      690,
      
      
        671,
        672,
        
        673,
        674,
        675,
      
      564,
      565,
      
      654,
      566,
      587,
      588,
    0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
    NET_FIELD_SET(NoLegAllocs);
    __gc class NoLegAllocs : public QuickFix::Group
    {
    public:
      NoLegAllocs() : Group(670, 671, message_order ) {}
        static int message_order __gc[] = {
        671,
        672,
        
        673,
        674,
        675,
      0};
      NET_FIELD_SET(LegAllocAccount);
      NET_FIELD_SET(LegIndividualAllocID);
      NET_FIELD_SET(LegAllocQty);
      NET_FIELD_SET(LegAllocAcctIDSource);
      NET_FIELD_SET(LegSettlCurrency);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(QtyType);   
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
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);   
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(MultiLegRptTypeReq);
  };

  public __gc class MultilegOrderCancelReplaceRequest : public Message
  {
  public: 
    MultilegOrderCancelReplaceRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AC"); }
    //
    MultilegOrderCancelReplaceRequest(
      QuickFix::OrigClOrdID* aOrigClOrdID,
      QuickFix::ClOrdID* aClOrdID,
      QuickFix::Side* aSide,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::OrdType* aOrdType )
    : Message(MsgType())
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(DayBookingInst);
    NET_FIELD_SET(BookingUnit);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      736,
      467,
      
      80,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNested3PartyIDs);
    __gc class NoNested3PartyIDs : public QuickFix::Group
    {
    public:
      NoNested3PartyIDs() : Group(948, 949, message_order ) {}
        static int message_order __gc[] = {
        949,
        950,
        951,
        
          953,
          954,
          
      0};
      NET_FIELD_SET(Nested3PartyID);
      NET_FIELD_SET(Nested3PartyIDSource);
      NET_FIELD_SET(Nested3PartyRole);
    NET_FIELD_SET(NoNested3PartySubIDs);
    __gc class NoNested3PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested3PartySubIDs() : Group(952, 953, message_order ) {}
        static int message_order __gc[] = {
          953,
          954,
          0};
      NET_FIELD_SET(Nested3PartySubID);
      NET_FIELD_SET(Nested3PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(CashMargin);
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(HandlInst);
    NET_FIELD_SET(ExecInst);
    NET_FIELD_SET(MinQty);
    NET_FIELD_SET(MaxFloor);
    NET_FIELD_SET(ExDestination);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(PrevClosePx);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 564, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      687,
      690,
      
      
        671,
        672,
        
        673,
        674,
        675,
      
      564,
      565,
      
      654,
      566,
      587,
      588,
    0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
    NET_FIELD_SET(NoLegAllocs);
    __gc class NoLegAllocs : public QuickFix::Group
    {
    public:
      NoLegAllocs() : Group(670, 671, message_order ) {}
        static int message_order __gc[] = {
        671,
        672,
        
        673,
        674,
        675,
      0};
      NET_FIELD_SET(LegAllocAccount);
      NET_FIELD_SET(LegIndividualAllocID);
      NET_FIELD_SET(LegAllocQty);
      NET_FIELD_SET(LegAllocAcctIDSource);
      NET_FIELD_SET(LegSettlCurrency);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(LocateReqd);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(QtyType);   
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
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(CoveredOrUncovered);
    NET_FIELD_SET(MaxShow);   
    NET_FIELD_SET(PegOffsetValue);   
    NET_FIELD_SET(PegMoveType);   
    NET_FIELD_SET(PegOffsetType);   
    NET_FIELD_SET(PegLimitType);   
    NET_FIELD_SET(PegRoundDirection);   
    NET_FIELD_SET(PegScope);   
    NET_FIELD_SET(DiscretionInst);   
    NET_FIELD_SET(DiscretionOffsetValue);   
    NET_FIELD_SET(DiscretionMoveType);   
    NET_FIELD_SET(DiscretionOffsetType);   
    NET_FIELD_SET(DiscretionLimitType);   
    NET_FIELD_SET(DiscretionRoundDirection);   
    NET_FIELD_SET(DiscretionScope);
    NET_FIELD_SET(TargetStrategy);
    NET_FIELD_SET(TargetStrategyParameters);
    NET_FIELD_SET(ParticipationRate);
    NET_FIELD_SET(CancellationRights);
    NET_FIELD_SET(MoneyLaunderingStatus);
    NET_FIELD_SET(RegistID);
    NET_FIELD_SET(Designation);
    NET_FIELD_SET(MultiLegRptTypeReq);
  };

  public __gc class BidRequest : public Message
  {
  public: 
    BidRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("k"); }
    //
    BidRequest(
      QuickFix::ClientBidID* aClientBidID,
      QuickFix::BidRequestTransType* aBidRequestTransType,
      QuickFix::TotNoRelatedSym* aTotNoRelatedSym,
      QuickFix::BidType* aBidType,
      QuickFix::BidTradeType* aBidTradeType,
      QuickFix::BasisPxType* aBasisPxType )
    : Message(MsgType())
    
    {
      set(aClientBidID);
      set(aBidRequestTransType);
      set(aTotNoRelatedSym);
      set(aBidType);
      set(aBidTradeType);
      set(aBasisPxType);
    }
  
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(ClientBidID);
    NET_FIELD_SET(BidRequestTransType);
    NET_FIELD_SET(ListName);
    NET_FIELD_SET(TotNoRelatedSym);
    NET_FIELD_SET(BidType);
    NET_FIELD_SET(NumTickets);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SideValue1);
    NET_FIELD_SET(SideValue2);
    NET_FIELD_SET(NoBidDescriptors);
    __gc class NoBidDescriptors : public QuickFix::Group
    {
    public:
      NoBidDescriptors() : Group(398, 399, message_order ) {}
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
    };
    NET_FIELD_SET(NoBidComponents);
    __gc class NoBidComponents : public QuickFix::Group
    {
    public:
      NoBidComponents() : Group(420, 1, message_order ) {}
        static int message_order __gc[] = {
      66,
      54,
      336,
      625,
      430,
      63,
      64,
      1,
      660,
    0};
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(NetGrossInd);
      NET_FIELD_SET(SettlType);
      NET_FIELD_SET(SettlDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
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
    NET_FIELD_SET(BidTradeType);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("l"); }
  
    NET_FIELD_SET(BidID);
    NET_FIELD_SET(ClientBidID);
    NET_FIELD_SET(NoBidComponents);
    __gc class NoBidComponents : public QuickFix::Group
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
      NET_FIELD_SET(SettlType);
      NET_FIELD_SET(SettlDate);
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("E"); }
    //
    NewOrderList(
      QuickFix::ListID* aListID,
      QuickFix::BidType* aBidType,
      QuickFix::TotNoOrders* aTotNoOrders )
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
    NET_FIELD_SET(AllowableOneSidednessPct);
    NET_FIELD_SET(AllowableOneSidednessValue);
    NET_FIELD_SET(AllowableOneSidednessCurr);
    NET_FIELD_SET(TotNoOrders);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
    {
    public:
      NoOrders() : Group(73, 1, message_order ) {}
        static int message_order __gc[] = {
      11,
      526,
      67,
      583,
      160,
      
      229,
      75,
      1,
      660,
      581,
      589,
      590,
      70,
      591,
      
        79,
        661,
        736,
        467,
        
        80,
      
      63,
      64,
      544,
      635,
      21,
      18,
      110,
      111,
      100,
      
        336,
        625,
      
      81,
      55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
      
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      
      140,
      54,
      401,
      114,
      60,
      
      854,
      38,152,516,468,469,
      40,
      423,
      44,
      99,
      218,220,221,222,662,663,699,761,
      235,236,701,696,697,698,
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
      121,
      120,
      775,
      58,
      354,
      355,
      193,
      192,
      640,
      77,
      203,
      210,
      211,835,836,837,838,840,
      388,389,841,842,843,844,846,
      847,
      848,
      849,
      494,
    0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListSeqNo);
      NET_FIELD_SET(ClOrdLinkID);
      NET_FIELD_SET(SettlInstMode);
      NET_FIELD_SET(TradeOriginationDate);
      NET_FIELD_SET(TradeDate);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(DayBookingInst);
      NET_FIELD_SET(BookingUnit);
      NET_FIELD_SET(AllocID);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(SettlType);
      NET_FIELD_SET(SettlDate);
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
      NET_FIELD_SET(QtyType);
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
      NET_FIELD_SET(ForexReq);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(BookingType);
      NET_FIELD_SET(Text);
      NET_FIELD_SET(EncodedTextLen);
      NET_FIELD_SET(EncodedText);
      NET_FIELD_SET(SettlDate2);
      NET_FIELD_SET(OrderQty2);
      NET_FIELD_SET(Price2);
      NET_FIELD_SET(PositionEffect);
      NET_FIELD_SET(CoveredOrUncovered);
      NET_FIELD_SET(MaxShow);
      NET_FIELD_SET(TargetStrategy);
      NET_FIELD_SET(TargetStrategyParameters);
      NET_FIELD_SET(ParticipationRate);
      NET_FIELD_SET(Designation);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        661,
        736,
        467,
        
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
        336,
        625,
      0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
        311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
          NET_FIELD_SET(OrderQty);
          NET_FIELD_SET(CashOrderQty);
          NET_FIELD_SET(OrderPercent);
          NET_FIELD_SET(RoundingDirection);
          NET_FIELD_SET(RoundingModulus);
          NET_FIELD_SET(Spread);
          NET_FIELD_SET(BenchmarkCurveCurrency);
          NET_FIELD_SET(BenchmarkCurveName);
          NET_FIELD_SET(BenchmarkCurvePoint);
          NET_FIELD_SET(BenchmarkPrice);
          NET_FIELD_SET(BenchmarkPriceType);
          NET_FIELD_SET(BenchmarkSecurityID);
          NET_FIELD_SET(BenchmarkSecurityIDSource);
          NET_FIELD_SET(YieldType);
          NET_FIELD_SET(Yield);
          NET_FIELD_SET(YieldCalcDate);
          NET_FIELD_SET(YieldRedemptionDate);
          NET_FIELD_SET(YieldRedemptionPrice);
          NET_FIELD_SET(YieldRedemptionPriceType);
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
          NET_FIELD_SET(PegOffsetValue);
          NET_FIELD_SET(PegMoveType);
          NET_FIELD_SET(PegOffsetType);
          NET_FIELD_SET(PegLimitType);
          NET_FIELD_SET(PegRoundDirection);
          NET_FIELD_SET(PegScope);
          NET_FIELD_SET(DiscretionInst);
          NET_FIELD_SET(DiscretionOffsetValue);
          NET_FIELD_SET(DiscretionMoveType);
          NET_FIELD_SET(DiscretionOffsetType);
          NET_FIELD_SET(DiscretionLimitType);
          NET_FIELD_SET(DiscretionRoundDirection);
          NET_FIELD_SET(DiscretionScope);
    };
  };

  public __gc class ListStrikePrice : public Message
  {
  public: 
    ListStrikePrice() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("m"); }
    //
    ListStrikePrice(
      QuickFix::ListID* aListID,
      QuickFix::TotNoStrikes* aTotNoStrikes )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aTotNoStrikes);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(TotNoStrikes);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoStrikes);
    __gc class NoStrikes : public QuickFix::Group
    {
    public:
      NoStrikes() : Group(428, 55, message_order ) {}
        static int message_order __gc[] = {
      55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,
    0};
          NET_FIELD_SET(Symbol);
          NET_FIELD_SET(SymbolSfx);
          NET_FIELD_SET(SecurityID);
          NET_FIELD_SET(SecurityIDSource);
          NET_FIELD_SET(Product);
          NET_FIELD_SET(CFICode);
          NET_FIELD_SET(SecurityType);
          NET_FIELD_SET(SecuritySubType);
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
          NET_FIELD_SET(StrikeCurrency);
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
          NET_FIELD_SET(Pool);
          NET_FIELD_SET(ContractSettlMonth);
          NET_FIELD_SET(CPProgram);
          NET_FIELD_SET(CPRegType);
          NET_FIELD_SET(DatedDate);
          NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 11, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
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
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
  };

  public __gc class ListStatus : public Message
  {
  public: 
    ListStatus() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("N"); }
    //
    ListStatus(
      QuickFix::ListID* aListID,
      QuickFix::ListStatusType* aListStatusType,
      QuickFix::NoRpts* aNoRpts,
      QuickFix::ListOrderStatus* aListOrderStatus,
      QuickFix::RptSeq* aRptSeq,
      QuickFix::TotNoOrders* aTotNoOrders )
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
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
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

  public __gc class ListExecute : public Message
  {
  public: 
    ListExecute() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("L"); }
    //
    ListExecute(
      QuickFix::ListID* aListID,
      QuickFix::TransactTime* aTransactTime )
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
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("K"); }
    //
    ListCancelRequest(
      QuickFix::ListID* aListID,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aListID);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class ListStatusRequest : public Message
  {
  public: 
    ListStatusRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("M"); }
    //
    ListStatusRequest(
      QuickFix::ListID* aListID )
    : Message(MsgType())
    
    {
      set(aListID);
    }
  
    NET_FIELD_SET(ListID);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class AllocationInstruction : public Message
  {
  public: 
    AllocationInstruction() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("J"); }
    //
    AllocationInstruction(
      QuickFix::AllocID* aAllocID,
      QuickFix::AllocTransType* aAllocTransType,
      QuickFix::AllocType* aAllocType,
      QuickFix::AllocNoOrdersType* aAllocNoOrdersType,
      QuickFix::Side* aSide,
      QuickFix::Quantity* aQuantity,
      QuickFix::AvgPx* aAvgPx,
      QuickFix::TradeDate* aTradeDate )
    : Message(MsgType())
    
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aAllocType);
      set(aAllocNoOrdersType);
      set(aSide);
      set(aQuantity);
      set(aAvgPx);
      set(aTradeDate);
    }
  
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(AllocTransType);
    NET_FIELD_SET(AllocType);
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(RefAllocID);
    NET_FIELD_SET(AllocCancReplaceReason);
    NET_FIELD_SET(AllocIntermedReqType);
    NET_FIELD_SET(AllocLinkID);
    NET_FIELD_SET(AllocLinkType);
    NET_FIELD_SET(BookingRefID);
    NET_FIELD_SET(AllocNoOrdersType);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
      11,
      37,
      198,
      526,
      66,
      
      38,
      799,
      800,
    0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(OrderAvgPx);
      NET_FIELD_SET(OrderBookingQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      32,
      17,
      527,
      31,
      669,
      29,
    0};
      NET_FIELD_SET(LastQty);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(SecondaryExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastParPx);
      NET_FIELD_SET(LastCapacity);
    };
    NET_FIELD_SET(PreviouslyReported);
    NET_FIELD_SET(ReversalIndicator);
    NET_FIELD_SET(MatchType);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(AvgParPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(AvgPxPrecision);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(Concession);
    NET_FIELD_SET(TotalTakedown);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(AutoAcceptIndicator);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(TotalAccruedInterestAmt);
    NET_FIELD_SET(InterestAtMaturity);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);
    NET_FIELD_SET(LegalConfirm);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(TotNoAllocs);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      573,
      366,
      80,
      467,
      81,
      
      208,
      209,
      161,
      360,
      361,
      12,13,479,497,
      153,
      154,
      119,
      737,
      120,
      736,
      155,
      156,
      159,
      742,
      741,
      160,
      
        137,
        138,
        139,
        891,
      
      576,
      577,
      635,
      780,
      172,169,170,171,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(MatchStatus);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(NotifyBrokerOfCredit);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(AllocSettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(AllocAccruedInterestAmt);
      NET_FIELD_SET(AllocInterestAtMaturity);
      NET_FIELD_SET(SettlInstMode);
      NET_FIELD_SET(NoClearingInstructions);
      NET_FIELD_SET(ClearingInstruction);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(AllocSettlInstType);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
        137,
        138,
        139,
        891,
      0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
          NET_FIELD_SET(SettlDeliveryType);
          NET_FIELD_SET(StandInstDbType);
          NET_FIELD_SET(StandInstDbName);
          NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    };
  };

  public __gc class AllocationInstructionAck : public Message
  {
  public: 
    AllocationInstructionAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("P"); }
    //
    AllocationInstructionAck(
      QuickFix::AllocID* aAllocID,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::AllocStatus* aAllocStatus )
    : Message(MsgType())
    
    {
      set(aAllocID);
      set(aTransactTime);
      set(aAllocStatus);
    }
  
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AllocStatus);
    NET_FIELD_SET(AllocRejCode);
    NET_FIELD_SET(AllocType);
    NET_FIELD_SET(AllocIntermedReqType);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(Product);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      366,
      467,
      776,
      161,
      360,
      361,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(IndividualAllocRejCode);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
    };
  };

  public __gc class AllocationReport : public Message
  {
  public: 
    AllocationReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AS"); }
    //
    AllocationReport(
      QuickFix::AllocReportID* aAllocReportID,
      QuickFix::AllocTransType* aAllocTransType,
      QuickFix::AllocReportType* aAllocReportType,
      QuickFix::AllocStatus* aAllocStatus,
      QuickFix::AllocNoOrdersType* aAllocNoOrdersType,
      QuickFix::Side* aSide,
      QuickFix::Quantity* aQuantity,
      QuickFix::AvgPx* aAvgPx,
      QuickFix::TradeDate* aTradeDate )
    : Message(MsgType())
    
    {
      set(aAllocReportID);
      set(aAllocTransType);
      set(aAllocReportType);
      set(aAllocStatus);
      set(aAllocNoOrdersType);
      set(aSide);
      set(aQuantity);
      set(aAvgPx);
      set(aTradeDate);
    }
  
    NET_FIELD_SET(AllocReportID);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(AllocTransType);
    NET_FIELD_SET(AllocReportRefID);
    NET_FIELD_SET(AllocCancReplaceReason);
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(AllocReportType);
    NET_FIELD_SET(AllocStatus);
    NET_FIELD_SET(AllocRejCode);
    NET_FIELD_SET(RefAllocID);
    NET_FIELD_SET(AllocIntermedReqType);
    NET_FIELD_SET(AllocLinkID);
    NET_FIELD_SET(AllocLinkType);
    NET_FIELD_SET(BookingRefID);
    NET_FIELD_SET(AllocNoOrdersType);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
      11,
      37,
      198,
      526,
      66,
      
      38,
      799,
      800,
    0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(OrderAvgPx);
      NET_FIELD_SET(OrderBookingQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      32,
      17,
      527,
      31,
      669,
      29,
    0};
      NET_FIELD_SET(LastQty);
      NET_FIELD_SET(ExecID);
      NET_FIELD_SET(SecondaryExecID);
      NET_FIELD_SET(LastPx);
      NET_FIELD_SET(LastParPx);
      NET_FIELD_SET(LastCapacity);
    };
    NET_FIELD_SET(PreviouslyReported);
    NET_FIELD_SET(ReversalIndicator);
    NET_FIELD_SET(MatchType);
    NET_FIELD_SET(Side);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradeOriginationDate);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(AvgParPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(AvgPxPrecision);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(BookingType);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(Concession);
    NET_FIELD_SET(TotalTakedown);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(AutoAcceptIndicator);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(TotalAccruedInterestAmt);
    NET_FIELD_SET(InterestAtMaturity);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);
    NET_FIELD_SET(LegalConfirm);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(TotNoAllocs);
    NET_FIELD_SET(LastFragment);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      573,
      366,
      80,
      467,
      81,
      
      208,
      209,
      161,
      360,
      361,
      12,13,479,497,
      153,
      154,
      119,
      737,
      120,
      736,
      155,
      156,
      742,
      741,
      
        137,
        138,
        139,
        891,
      
      
        577,
      
      635,
      780,
      172,169,170,171,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(MatchStatus);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(AllocQty);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(NotifyBrokerOfCredit);
      NET_FIELD_SET(AllocHandlInst);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
      NET_FIELD_SET(AllocAvgPx);
      NET_FIELD_SET(AllocNetMoney);
      NET_FIELD_SET(SettlCurrAmt);
      NET_FIELD_SET(AllocSettlCurrAmt);
      NET_FIELD_SET(SettlCurrency);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(SettlCurrFxRate);
      NET_FIELD_SET(SettlCurrFxRateCalc);
      NET_FIELD_SET(AllocAccruedInterestAmt);
      NET_FIELD_SET(AllocInterestAtMaturity);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(AllocSettlInstType);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
        137,
        138,
        139,
        891,
      0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(NoClearingInstructions);
    __gc class NoClearingInstructions : public QuickFix::Group
    {
    public:
      NoClearingInstructions() : Group(576, 577, message_order ) {}
        static int message_order __gc[] = {
        577,
      0};
      NET_FIELD_SET(ClearingInstruction);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
          NET_FIELD_SET(SettlDeliveryType);
          NET_FIELD_SET(StandInstDbType);
          NET_FIELD_SET(StandInstDbName);
          NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    };
  };

  public __gc class AllocationReportAck : public Message
  {
  public: 
    AllocationReportAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AS"); }
    //
    AllocationReportAck(
      QuickFix::AllocReportID* aAllocReportID,
      QuickFix::AllocID* aAllocID,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::AllocStatus* aAllocStatus )
    : Message(MsgType())
    
    {
      set(aAllocReportID);
      set(aAllocID);
      set(aTransactTime);
      set(aAllocStatus);
    }
  
    NET_FIELD_SET(AllocReportID);
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AllocStatus);
    NET_FIELD_SET(AllocRejCode);
    NET_FIELD_SET(AllocReportType);
    NET_FIELD_SET(AllocIntermedReqType);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(Product);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      366,
      467,
      776,
      161,
      360,
      361,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocPrice);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(IndividualAllocRejCode);
      NET_FIELD_SET(AllocText);
      NET_FIELD_SET(EncodedAllocTextLen);
      NET_FIELD_SET(EncodedAllocText);
    };
  };

  public __gc class Confirmation : public Message
  {
  public: 
    Confirmation() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AK"); }
    //
    Confirmation(
      QuickFix::ConfirmID* aConfirmID,
      QuickFix::ConfirmTransType* aConfirmTransType,
      QuickFix::ConfirmType* aConfirmType,
      QuickFix::ConfirmStatus* aConfirmStatus,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::TradeDate* aTradeDate,
      QuickFix::AllocQty* aAllocQty,
      QuickFix::Side* aSide,
      QuickFix::AllocAccount* aAllocAccount,
      QuickFix::AvgPx* aAvgPx,
      QuickFix::GrossTradeAmt* aGrossTradeAmt,
      QuickFix::NetMoney* aNetMoney )
    : Message(MsgType())
    
    {
      set(aConfirmID);
      set(aConfirmTransType);
      set(aConfirmType);
      set(aConfirmStatus);
      set(aTransactTime);
      set(aTradeDate);
      set(aAllocQty);
      set(aSide);
      set(aAllocAccount);
      set(aAvgPx);
      set(aGrossTradeAmt);
      set(aNetMoney);
    }
  
    NET_FIELD_SET(ConfirmID);
    NET_FIELD_SET(ConfirmRefID);
    NET_FIELD_SET(ConfirmReqID);
    NET_FIELD_SET(ConfirmTransType);
    NET_FIELD_SET(ConfirmType);
    NET_FIELD_SET(CopyMsgIndicator);
    NET_FIELD_SET(LegalConfirm);
    NET_FIELD_SET(ConfirmStatus);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
      11,
      37,
      198,
      526,
      66,
      
      38,
      799,
      800,
    0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(OrderAvgPx);
      NET_FIELD_SET(OrderBookingQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(IndividualAllocID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(NoCapacities);
    __gc class NoCapacities : public QuickFix::Group
    {
    public:
      NoCapacities() : Group(862, 528, message_order ) {}
        static int message_order __gc[] = {
      528,
      529,
      863,
    0};
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(OrderCapacityQty);
    };
    NET_FIELD_SET(AllocAccount);
    NET_FIELD_SET(AllocAcctIDSource);
    NET_FIELD_SET(AllocAccountType);
    NET_FIELD_SET(AvgPx);
    NET_FIELD_SET(AvgPxPrecision);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AvgParPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(ReportedPx);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(ProcessCode);
    NET_FIELD_SET(GrossTradeAmt);
    NET_FIELD_SET(NumDaysInterest);
    NET_FIELD_SET(ExDate);
    NET_FIELD_SET(AccruedInterestRate);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(InterestAtMaturity);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);
    NET_FIELD_SET(Concession);
    NET_FIELD_SET(TotalTakedown);
    NET_FIELD_SET(NetMoney);
    NET_FIELD_SET(MaturityNetMoney);
    NET_FIELD_SET(SettlCurrAmt);
    NET_FIELD_SET(SettlCurrency);
    NET_FIELD_SET(SettlCurrFxRate);
    NET_FIELD_SET(SettlCurrFxRateCalc);
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);   
    NET_FIELD_SET(SettlDeliveryType);   
    NET_FIELD_SET(StandInstDbType);   
    NET_FIELD_SET(StandInstDbName);   
    NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };   
    NET_FIELD_SET(Commission);   
    NET_FIELD_SET(CommType);   
    NET_FIELD_SET(CommCurrency);   
    NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(SharedCommission);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138,
      139,
      891,
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
  };

  public __gc class ConfirmationAck : public Message
  {
  public: 
    ConfirmationAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AU"); }
    //
    ConfirmationAck(
      QuickFix::ConfirmID* aConfirmID,
      QuickFix::TradeDate* aTradeDate,
      QuickFix::TransactTime* aTransactTime,
      QuickFix::AffirmStatus* aAffirmStatus )
    : Message(MsgType())
    
    {
      set(aConfirmID);
      set(aTradeDate);
      set(aTransactTime);
      set(aAffirmStatus);
    }
  
    NET_FIELD_SET(ConfirmID);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AffirmStatus);
    NET_FIELD_SET(ConfirmRejReason);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class ConfirmationRequest : public Message
  {
  public: 
    ConfirmationRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("BS"); }
    //
    ConfirmationRequest(
      QuickFix::ConfirmReqID* aConfirmReqID,
      QuickFix::ConfirmType* aConfirmType,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aConfirmReqID);
      set(aConfirmType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(ConfirmReqID);
    NET_FIELD_SET(ConfirmType);
    NET_FIELD_SET(NoOrders);
    __gc class NoOrders : public QuickFix::Group
    {
    public:
      NoOrders() : Group(73, 11, message_order ) {}
        static int message_order __gc[] = {
      11,
      37,
      198,
      526,
      66,
      
      38,
      799,
      800,
    0};
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(OrderQty);
      NET_FIELD_SET(OrderAvgPx);
      NET_FIELD_SET(OrderBookingQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(AllocID);
    NET_FIELD_SET(SecondaryAllocID);
    NET_FIELD_SET(IndividualAllocID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(AllocAccount);
    NET_FIELD_SET(AllocAcctIDSource);
    NET_FIELD_SET(AllocAccountType);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class SettlementInstructions : public Message
  {
  public: 
    SettlementInstructions() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("T"); }
    //
    SettlementInstructions(
      QuickFix::SettlInstMsgID* aSettlInstMsgID,
      QuickFix::SettlInstMode* aSettlInstMode,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aSettlInstMsgID);
      set(aSettlInstMode);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(SettlInstMsgID);
    NET_FIELD_SET(SettlInstReqID);
    NET_FIELD_SET(SettlInstMode);
    NET_FIELD_SET(SettlInstReqRejCode);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(SettlInstSource);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoSettlInst);
    __gc class NoSettlInst : public QuickFix::Group
    {
    public:
      NoSettlInst() : Group(778, 54, message_order ) {}
        static int message_order __gc[] = {
      162,
      163,
      214,
      
      54,
      460,
      167,
      461,
      168,
      126,
      779,
      172,169,170,171,
      492,
      476,
      488,
      489,
      503,
      490,
      491,
      504,
      505,
    0};
      NET_FIELD_SET(SettlInstID);
      NET_FIELD_SET(SettlInstTransType);
      NET_FIELD_SET(SettlInstRefID);
      NET_FIELD_SET(Side);
      NET_FIELD_SET(Product);
      NET_FIELD_SET(SecurityType);
      NET_FIELD_SET(CFICode);
      NET_FIELD_SET(EffectiveTime);
      NET_FIELD_SET(ExpireTime);
      NET_FIELD_SET(LastUpdateTime);
      NET_FIELD_SET(PaymentMethod);
      NET_FIELD_SET(PaymentRef);
      NET_FIELD_SET(CardHolderName);
      NET_FIELD_SET(CardNumber);
      NET_FIELD_SET(CardStartDate);
      NET_FIELD_SET(CardExpDate);
      NET_FIELD_SET(CardIssNum);
      NET_FIELD_SET(PaymentDate);
      NET_FIELD_SET(PaymentRemitterID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
          NET_FIELD_SET(SettlDeliveryType);
          NET_FIELD_SET(StandInstDbType);
          NET_FIELD_SET(StandInstDbName);
          NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    };
  };

  public __gc class SettlementInstructionRequest : public Message
  {
  public: 
    SettlementInstructionRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AV"); }
    //
    SettlementInstructionRequest(
      QuickFix::SettlInstReqID* aSettlInstReqID,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aSettlInstReqID);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(SettlInstReqID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(AllocAccount);
    NET_FIELD_SET(AllocAcctIDSource);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(Product);
    NET_FIELD_SET(SecurityType);
    NET_FIELD_SET(CFICode);
    NET_FIELD_SET(EffectiveTime);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(LastUpdateTime);
    NET_FIELD_SET(StandInstDbType);
    NET_FIELD_SET(StandInstDbName);
    NET_FIELD_SET(StandInstDbID);
  };

  public __gc class TradeCaptureReportRequest : public Message
  {
  public: 
    TradeCaptureReportRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AD"); }
    //
    TradeCaptureReportRequest(
      QuickFix::TradeRequestID* aTradeRequestID,
      QuickFix::TradeRequestType* aTradeRequestType )
    : Message(MsgType())
    
    {
      set(aTradeRequestID);
      set(aTradeRequestType);
    }
  
    NET_FIELD_SET(TradeRequestID);
    NET_FIELD_SET(TradeRequestType);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TradeReportID);
    NET_FIELD_SET(SecondaryTradeReportID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(TrdType);
    NET_FIELD_SET(TrdSubType);
    NET_FIELD_SET(TransferReason);
    NET_FIELD_SET(SecondaryTrdType);
    NET_FIELD_SET(TradeLinkID);
    NET_FIELD_SET(TrdMatchID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(DeliveryForm);   
    NET_FIELD_SET(PctAtRisk);
    NET_FIELD_SET(NoInstrAttrib);
    __gc class NoInstrAttrib : public QuickFix::Group
    {
    public:
      NoInstrAttrib() : Group(870, 871, message_order ) {}
        static int message_order __gc[] = {
        871,
        872,
      0};
      NET_FIELD_SET(InstrAttribType);
      NET_FIELD_SET(InstrAttribValue);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoDates);
    __gc class NoDates : public QuickFix::Group
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
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(TimeBracket);
    NET_FIELD_SET(Side);
    NET_FIELD_SET(MultiLegReportingType);
    NET_FIELD_SET(TradeInputSource);
    NET_FIELD_SET(TradeInputDevice);
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class TradeCaptureReportRequestAck : public Message
  {
  public: 
    TradeCaptureReportRequestAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AQ"); }
    //
    TradeCaptureReportRequestAck(
      QuickFix::TradeRequestID* aTradeRequestID,
      QuickFix::TradeRequestType* aTradeRequestType,
      QuickFix::TradeRequestResult* aTradeRequestResult,
      QuickFix::TradeRequestStatus* aTradeRequestStatus )
    : Message(MsgType())
    
    {
      set(aTradeRequestID);
      set(aTradeRequestType);
      set(aTradeRequestResult);
      set(aTradeRequestStatus);
    }
  
    NET_FIELD_SET(TradeRequestID);
    NET_FIELD_SET(TradeRequestType);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TotNumTradeReports);
    NET_FIELD_SET(TradeRequestResult);
    NET_FIELD_SET(TradeRequestStatus);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MultiLegReportingType);
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class TradeCaptureReport : public Message
  {
  public: 
    TradeCaptureReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AE"); }
    //
    TradeCaptureReport(
      QuickFix::TradeReportID* aTradeReportID,
      QuickFix::PreviouslyReported* aPreviouslyReported,
      QuickFix::LastQty* aLastQty,
      QuickFix::LastPx* aLastPx,
      QuickFix::TradeDate* aTradeDate,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aTradeReportID);
      set(aPreviouslyReported);
      set(aLastQty);
      set(aLastPx);
      set(aTradeDate);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(TradeReportID);
    NET_FIELD_SET(TradeReportTransType);
    NET_FIELD_SET(TradeReportType);
    NET_FIELD_SET(TradeRequestID);
    NET_FIELD_SET(TrdType);
    NET_FIELD_SET(TrdSubType);
    NET_FIELD_SET(SecondaryTrdType);
    NET_FIELD_SET(TransferReason);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(TotNumTradeReports);
    NET_FIELD_SET(LastRptRequested);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TradeReportRefID);
    NET_FIELD_SET(SecondaryTradeReportRefID);
    NET_FIELD_SET(SecondaryTradeReportID);
    NET_FIELD_SET(TradeLinkID);
    NET_FIELD_SET(TrdMatchID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(OrdStatus);
    NET_FIELD_SET(SecondaryExecID);
    NET_FIELD_SET(ExecRestatementReason);
    NET_FIELD_SET(PreviouslyReported);
    NET_FIELD_SET(PriceType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);   
    NET_FIELD_SET(OrderQty);   
    NET_FIELD_SET(CashOrderQty);   
    NET_FIELD_SET(OrderPercent);   
    NET_FIELD_SET(RoundingDirection);   
    NET_FIELD_SET(RoundingModulus);
    NET_FIELD_SET(QtyType);   
    NET_FIELD_SET(YieldType);   
    NET_FIELD_SET(Yield);   
    NET_FIELD_SET(YieldCalcDate);   
    NET_FIELD_SET(YieldRedemptionDate);   
    NET_FIELD_SET(YieldRedemptionPrice);   
    NET_FIELD_SET(YieldRedemptionPriceType);
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(UnderlyingTradingSessionID);
    NET_FIELD_SET(UnderlyingTradingSessionSubID);
    NET_FIELD_SET(LastQty);
    NET_FIELD_SET(LastPx);
    NET_FIELD_SET(LastParPx);
    NET_FIELD_SET(LastSpotRate);
    NET_FIELD_SET(LastForwardPoints);
    NET_FIELD_SET(LastMkt);
    NET_FIELD_SET(TradeDate);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(AvgPx);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(AvgPxIndicator);   
    NET_FIELD_SET(NoPosAmt);   
    NET_FIELD_SET(PosAmtType);   
    NET_FIELD_SET(PosAmt);
    NET_FIELD_SET(MultiLegReportingType);
    NET_FIELD_SET(TradeLegRefID);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 564, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      687,
      690,
      
      564,
      565,
      
      654,
      566,
      587,
      588,
      637,
    0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(SettlType);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(MatchType);
    NET_FIELD_SET(NoSides);
    __gc class NoSides : public QuickFix::Group
    {
    public:
      NoSides() : Group(552, 1, message_order ) {}
        static int message_order __gc[] = {
      54,
      37,
      198,
      11,
      526,
      66,
      
      1,
      660,
      581,
      81,
      575,
      
        577,
      
      635,
      578,
      579,
      821,
      15,
      376,
      377,
      528,
      529,
      582,
      40,
      18,
      483,
      336,
      625,
      943,
      12,13,479,497,
      381,
      157,
      230,
      158,
      159,
      738,
      920,
      921,
      922,
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
      752,
      
        519,
        520,
        521,
      
      
      
        137,
        138,
        139,
        891,
      
      825,
      826,
      591,
      70,
      
        79,
        661,
        736,
        467,
        
        80,
      
    0};
      NET_FIELD_SET(Side);
      NET_FIELD_SET(OrderID);
      NET_FIELD_SET(SecondaryOrderID);
      NET_FIELD_SET(ClOrdID);
      NET_FIELD_SET(SecondaryClOrdID);
      NET_FIELD_SET(ListID);
      NET_FIELD_SET(Account);
      NET_FIELD_SET(AcctIDSource);
      NET_FIELD_SET(AccountType);
      NET_FIELD_SET(ProcessCode);
      NET_FIELD_SET(OddLot);
      NET_FIELD_SET(ClearingFeeIndicator);
      NET_FIELD_SET(TradeInputSource);
      NET_FIELD_SET(TradeInputDevice);
      NET_FIELD_SET(OrderInputDevice);
      NET_FIELD_SET(Currency);
      NET_FIELD_SET(ComplianceID);
      NET_FIELD_SET(SolicitedFlag);
      NET_FIELD_SET(OrderCapacity);
      NET_FIELD_SET(OrderRestrictions);
      NET_FIELD_SET(CustOrderCapacity);
      NET_FIELD_SET(OrdType);
      NET_FIELD_SET(ExecInst);
      NET_FIELD_SET(TransBkdTime);
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
      NET_FIELD_SET(TimeBracket);
      NET_FIELD_SET(GrossTradeAmt);
      NET_FIELD_SET(NumDaysInterest);
      NET_FIELD_SET(ExDate);
      NET_FIELD_SET(AccruedInterestRate);
      NET_FIELD_SET(AccruedInterestAmt);
      NET_FIELD_SET(InterestAtMaturity);
      NET_FIELD_SET(EndAccruedInterestAmt);
      NET_FIELD_SET(StartCash);
      NET_FIELD_SET(EndCash);
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
      NET_FIELD_SET(SideMultiLegReportingType);
      NET_FIELD_SET(ExchangeRule);
      NET_FIELD_SET(TradeAllocIndicator);
      NET_FIELD_SET(PreallocMethod);
      NET_FIELD_SET(AllocID);
    NET_FIELD_SET(NoClearingInstructions);
    __gc class NoClearingInstructions : public QuickFix::Group
    {
    public:
      NoClearingInstructions() : Group(576, 577, message_order ) {}
        static int message_order __gc[] = {
        577,
      0};
      NET_FIELD_SET(ClearingInstruction);
    };
    NET_FIELD_SET(NoContAmts);
    __gc class NoContAmts : public QuickFix::Group
    {
    public:
      NoContAmts() : Group(518, 519, message_order ) {}
        static int message_order __gc[] = {
        519,
        520,
        521,
      0};
      NET_FIELD_SET(ContAmtType);
      NET_FIELD_SET(ContAmtValue);
      NET_FIELD_SET(ContAmtCurr);
    };
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
        137,
        138,
        139,
        891,
      0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
        79,
        661,
        736,
        467,
        
        80,
      0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
          NET_FIELD_SET(Commission);
          NET_FIELD_SET(CommType);
          NET_FIELD_SET(CommCurrency);
          NET_FIELD_SET(FundRenewWaiv);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    };
    NET_FIELD_SET(CopyMsgIndicator);
    NET_FIELD_SET(PublishTrdIndicator);
    NET_FIELD_SET(ShortSaleReason);
  };

  public __gc class TradeCaptureReportAck : public Message
  {
  public: 
    TradeCaptureReportAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AR"); }
    //
    TradeCaptureReportAck(
      QuickFix::TradeReportID* aTradeReportID,
      QuickFix::ExecType* aExecType )
    : Message(MsgType())
    
    {
      set(aTradeReportID);
      set(aExecType);
    }
  
    NET_FIELD_SET(TradeReportID);
    NET_FIELD_SET(TradeReportTransType);
    NET_FIELD_SET(TradeReportType);
    NET_FIELD_SET(TrdType);
    NET_FIELD_SET(TrdSubType);
    NET_FIELD_SET(SecondaryTrdType);
    NET_FIELD_SET(TransferReason);
    NET_FIELD_SET(ExecType);
    NET_FIELD_SET(TradeReportRefID);
    NET_FIELD_SET(SecondaryTradeReportRefID);
    NET_FIELD_SET(TrdRptStatus);
    NET_FIELD_SET(TradeReportRejectReason);
    NET_FIELD_SET(SecondaryTradeReportID);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TradeLinkID);
    NET_FIELD_SET(TrdMatchID);
    NET_FIELD_SET(ExecID);
    NET_FIELD_SET(SecondaryExecID);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 564, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
      687,
      690,
      
      564,
      565,
      
      654,
      566,
      587,
      588,
      637,
    0};
      NET_FIELD_SET(LegQty);
      NET_FIELD_SET(LegSwapType);
      NET_FIELD_SET(LegPositionEffect);
      NET_FIELD_SET(LegCoveredOrUncovered);
      NET_FIELD_SET(LegRefID);
      NET_FIELD_SET(LegPrice);
      NET_FIELD_SET(LegSettlType);
      NET_FIELD_SET(LegSettlDate);
      NET_FIELD_SET(LegLastPx);
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoLegStipulations);
    __gc class NoLegStipulations : public QuickFix::Group
    {
    public:
      NoLegStipulations() : Group(683, 688, message_order ) {}
        static int message_order __gc[] = {
        688,
        689,
      0};
      NET_FIELD_SET(LegStipulationType);
      NET_FIELD_SET(LegStipulationValue);
    };
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(ClearingFeeIndicator);
    NET_FIELD_SET(OrderCapacity);
    NET_FIELD_SET(OrderRestrictions);
    NET_FIELD_SET(CustOrderCapacity);
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(PositionEffect);
    NET_FIELD_SET(PreallocMethod);
    NET_FIELD_SET(NoAllocs);
    __gc class NoAllocs : public QuickFix::Group
    {
    public:
      NoAllocs() : Group(78, 79, message_order ) {}
        static int message_order __gc[] = {
      79,
      661,
      736,
      467,
      
      80,
    0};
      NET_FIELD_SET(AllocAccount);
      NET_FIELD_SET(AllocAcctIDSource);
      NET_FIELD_SET(AllocSettlCurrency);
      NET_FIELD_SET(IndividualAllocID);
      NET_FIELD_SET(AllocQty);
    NET_FIELD_SET(NoNested2PartyIDs);
    __gc class NoNested2PartyIDs : public QuickFix::Group
    {
    public:
      NoNested2PartyIDs() : Group(756, 757, message_order ) {}
        static int message_order __gc[] = {
        757,
        758,
        759,
        
          760,
          807,
        
      0};
      NET_FIELD_SET(Nested2PartyID);
      NET_FIELD_SET(Nested2PartyIDSource);
      NET_FIELD_SET(Nested2PartyRole);
    NET_FIELD_SET(NoNested2PartySubIDs);
    __gc class NoNested2PartySubIDs : public QuickFix::Group
    {
    public:
      NoNested2PartySubIDs() : Group(806, 760, message_order ) {}
        static int message_order __gc[] = {
          760,
          807,
        0};
      NET_FIELD_SET(Nested2PartySubID);
      NET_FIELD_SET(Nested2PartySubIDType);
    };
    };
    };
  };

  public __gc class RegistrationInstructions : public Message
  {
  public: 
    RegistrationInstructions() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("o"); }
    //
    RegistrationInstructions(
      QuickFix::RegistID* aRegistID,
      QuickFix::RegistTransType* aRegistTransType,
      QuickFix::RegistRefID* aRegistRefID )
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(RegistAcctType);
    NET_FIELD_SET(TaxAdvantageType);
    NET_FIELD_SET(OwnershipType);
    NET_FIELD_SET(NoRegistDtls);
    __gc class NoRegistDtls : public QuickFix::Group
    {
    public:
      NoRegistDtls() : Group(473, 474, message_order ) {}
        static int message_order __gc[] = {
      509,
      511,
      474,
      482,
      
      522,
      486,
      475,
    0};
      NET_FIELD_SET(RegistDtls);
      NET_FIELD_SET(RegistEmail);
      NET_FIELD_SET(MailingDtls);
      NET_FIELD_SET(MailingInst);
      NET_FIELD_SET(OwnerType);
      NET_FIELD_SET(DateOfBirth);
      NET_FIELD_SET(InvestorCountryOfResidence);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(NoDistribInsts);
    __gc class NoDistribInsts : public QuickFix::Group
    {
    public:
      NoDistribInsts() : Group(510, 477, message_order ) {}
        static int message_order __gc[] = {
      477,
      512,
      478,
      498,
      499,
      500,
      501,
      502,
    0};
      NET_FIELD_SET(DistribPaymentMethod);
      NET_FIELD_SET(DistribPercentage);
      NET_FIELD_SET(CashDistribCurr);
      NET_FIELD_SET(CashDistribAgentName);
      NET_FIELD_SET(CashDistribAgentCode);
      NET_FIELD_SET(CashDistribAgentAcctNumber);
      NET_FIELD_SET(CashDistribPayRef);
      NET_FIELD_SET(CashDistribAgentAcctName);
    };
  };

  public __gc class RegistrationInstructionsResponse : public Message
  {
  public: 
    RegistrationInstructionsResponse() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("p"); }
    //
    RegistrationInstructionsResponse(
      QuickFix::RegistID* aRegistID,
      QuickFix::RegistTransType* aRegistTransType,
      QuickFix::RegistRefID* aRegistRefID,
      QuickFix::RegistStatus* aRegistStatus )
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
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(RegistStatus);
    NET_FIELD_SET(RegistRejReasonCode);
    NET_FIELD_SET(RegistRejReasonText);
  };

  public __gc class PositionMaintenanceRequest : public Message
  {
  public: 
    PositionMaintenanceRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AL"); }
    //
    PositionMaintenanceRequest(
      QuickFix::PosReqID* aPosReqID,
      QuickFix::PosTransType* aPosTransType,
      QuickFix::PosMaintAction* aPosMaintAction,
      QuickFix::ClearingBusinessDate* aClearingBusinessDate,
      QuickFix::Account* aAccount,
      QuickFix::AccountType* aAccountType,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aPosReqID);
      set(aPosTransType);
      set(aPosMaintAction);
      set(aClearingBusinessDate);
      set(aAccount);
      set(aAccountType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(PosReqID);
    NET_FIELD_SET(PosTransType);
    NET_FIELD_SET(PosMaintAction);
    NET_FIELD_SET(OrigPosReqRefID);
    NET_FIELD_SET(PosMaintRptRefID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoPositions);
    __gc class NoPositions : public QuickFix::Group
    {
    public:
      NoPositions() : Group(702, 703, message_order ) {}
        static int message_order __gc[] = {
        703,
        704,   
        705,   
        706,   
        
      0};
      NET_FIELD_SET(PosType);
      NET_FIELD_SET(LongQty);
      NET_FIELD_SET(ShortQty);
      NET_FIELD_SET(PosQtyStatus);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(AdjustmentType);
    NET_FIELD_SET(ContraryInstructionIndicator);
    NET_FIELD_SET(PriorSpreadIndicator);
    NET_FIELD_SET(ThresholdAmount);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class PositionMaintenanceReport : public Message
  {
  public: 
    PositionMaintenanceReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AM"); }
    //
    PositionMaintenanceReport(
      QuickFix::PosMaintRptID* aPosMaintRptID,
      QuickFix::PosTransType* aPosTransType,
      QuickFix::PosMaintAction* aPosMaintAction,
      QuickFix::OrigPosReqRefID* aOrigPosReqRefID,
      QuickFix::PosMaintStatus* aPosMaintStatus,
      QuickFix::ClearingBusinessDate* aClearingBusinessDate,
      QuickFix::Account* aAccount,
      QuickFix::AccountType* aAccountType,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aPosMaintRptID);
      set(aPosTransType);
      set(aPosMaintAction);
      set(aOrigPosReqRefID);
      set(aPosMaintStatus);
      set(aClearingBusinessDate);
      set(aAccount);
      set(aAccountType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(PosMaintRptID);
    NET_FIELD_SET(PosTransType);
    NET_FIELD_SET(PosReqID);
    NET_FIELD_SET(PosMaintAction);
    NET_FIELD_SET(OrigPosReqRefID);
    NET_FIELD_SET(PosMaintStatus);
    NET_FIELD_SET(PosMaintResult);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoPositions);
    __gc class NoPositions : public QuickFix::Group
    {
    public:
      NoPositions() : Group(702, 703, message_order ) {}
        static int message_order __gc[] = {
        703,
        704,   
        705,   
        706,   
        
      0};
      NET_FIELD_SET(PosType);
      NET_FIELD_SET(LongQty);
      NET_FIELD_SET(ShortQty);
      NET_FIELD_SET(PosQtyStatus);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };   
    NET_FIELD_SET(NoPosAmt);   
    NET_FIELD_SET(PosAmtType);   
    NET_FIELD_SET(PosAmt);
    NET_FIELD_SET(AdjustmentType);
    NET_FIELD_SET(ThresholdAmount);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class RequestForPositions : public Message
  {
  public: 
    RequestForPositions() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AN"); }
    //
    RequestForPositions(
      QuickFix::PosReqID* aPosReqID,
      QuickFix::PosReqType* aPosReqType,
      QuickFix::Account* aAccount,
      QuickFix::AccountType* aAccountType,
      QuickFix::ClearingBusinessDate* aClearingBusinessDate,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aPosReqID);
      set(aPosReqType);
      set(aAccount);
      set(aAccountType);
      set(aClearingBusinessDate);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(PosReqID);
    NET_FIELD_SET(PosReqType);
    NET_FIELD_SET(MatchStatus);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(NoTradingSessions);
    __gc class NoTradingSessions : public QuickFix::Group
    {
    public:
      NoTradingSessions() : Group(386, 336, message_order ) {}
        static int message_order __gc[] = {
      336,
      625,
    0};
      NET_FIELD_SET(TradingSessionID);
      NET_FIELD_SET(TradingSessionSubID);
    };
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class RequestForPositionsAck : public Message
  {
  public: 
    RequestForPositionsAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AO"); }
    //
    RequestForPositionsAck(
      QuickFix::PosMaintRptID* aPosMaintRptID,
      QuickFix::PosReqResult* aPosReqResult,
      QuickFix::PosReqStatus* aPosReqStatus,
      QuickFix::Account* aAccount,
      QuickFix::AccountType* aAccountType )
    : Message(MsgType())
    
    {
      set(aPosMaintRptID);
      set(aPosReqResult);
      set(aPosReqStatus);
      set(aAccount);
      set(aAccountType);
    }
  
    NET_FIELD_SET(PosMaintRptID);
    NET_FIELD_SET(PosReqID);
    NET_FIELD_SET(TotalNumPosReports);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(PosReqResult);
    NET_FIELD_SET(PosReqStatus);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class PositionReport : public Message
  {
  public: 
    PositionReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AO"); }
    //
    PositionReport(
      QuickFix::PosMaintRptID* aPosMaintRptID,
      QuickFix::PosReqResult* aPosReqResult,
      QuickFix::ClearingBusinessDate* aClearingBusinessDate,
      QuickFix::Account* aAccount,
      QuickFix::AccountType* aAccountType,
      QuickFix::SettlPrice* aSettlPrice,
      QuickFix::SettlPriceType* aSettlPriceType,
      QuickFix::PriorSettlPrice* aPriorSettlPrice )
    : Message(MsgType())
    
    {
      set(aPosMaintRptID);
      set(aPosReqResult);
      set(aClearingBusinessDate);
      set(aAccount);
      set(aAccountType);
      set(aSettlPrice);
      set(aSettlPriceType);
      set(aPriorSettlPrice);
    }
  
    NET_FIELD_SET(PosMaintRptID);
    NET_FIELD_SET(PosReqID);
    NET_FIELD_SET(PosReqType);
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(TotalNumPosReports);
    NET_FIELD_SET(UnsolicitedIndicator);
    NET_FIELD_SET(PosReqResult);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AcctIDSource);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(SettlPrice);
    NET_FIELD_SET(SettlPriceType);
    NET_FIELD_SET(PriorSettlPrice);
    NET_FIELD_SET(NoLegs);
    __gc class NoLegs : public QuickFix::Group
    {
    public:
      NoLegs() : Group(555, 600, message_order ) {}
        static int message_order __gc[] = {
      600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,
    0};
          NET_FIELD_SET(LegSymbol);
          NET_FIELD_SET(LegSymbolSfx);
          NET_FIELD_SET(LegSecurityID);
          NET_FIELD_SET(LegSecurityIDSource);
          NET_FIELD_SET(LegProduct);
          NET_FIELD_SET(LegCFICode);
          NET_FIELD_SET(LegSecurityType);
          NET_FIELD_SET(LegSecuritySubType);
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
          NET_FIELD_SET(LegStrikeCurrency);
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
          NET_FIELD_SET(LegCurrency);
          NET_FIELD_SET(LegPool);
          NET_FIELD_SET(LegDatedDate);
          NET_FIELD_SET(LegContractSettlMonth);
          NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 732, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      732,
      733,
    0};
      NET_FIELD_SET(UnderlyingSettlPrice);
      NET_FIELD_SET(UnderlyingSettlPriceType);
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoPositions);
    __gc class NoPositions : public QuickFix::Group
    {
    public:
      NoPositions() : Group(702, 703, message_order ) {}
        static int message_order __gc[] = {
        703,
        704,   
        705,   
        706,   
        
      0};
      NET_FIELD_SET(PosType);
      NET_FIELD_SET(LongQty);
      NET_FIELD_SET(ShortQty);
      NET_FIELD_SET(PosQtyStatus);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };   
    NET_FIELD_SET(NoPosAmt);   
    NET_FIELD_SET(PosAmtType);   
    NET_FIELD_SET(PosAmt);
    NET_FIELD_SET(RegistStatus);
    NET_FIELD_SET(DeliveryDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class AssignmentReport : public Message
  {
  public: 
    AssignmentReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AW"); }
    //
    AssignmentReport(
      QuickFix::AsgnRptID* aAsgnRptID,
      QuickFix::AccountType* aAccountType,
      QuickFix::SettlPrice* aSettlPrice,
      QuickFix::SettlPriceType* aSettlPriceType,
      QuickFix::UnderlyingSettlPrice* aUnderlyingSettlPrice,
      QuickFix::AssignmentMethod* aAssignmentMethod,
      QuickFix::OpenInterest* aOpenInterest,
      QuickFix::ExerciseMethod* aExerciseMethod,
      QuickFix::SettlSessID* aSettlSessID,
      QuickFix::SettlSessSubID* aSettlSessSubID,
      QuickFix::ClearingBusinessDate* aClearingBusinessDate )
    : Message(MsgType())
    
    {
      set(aAsgnRptID);
      set(aAccountType);
      set(aSettlPrice);
      set(aSettlPriceType);
      set(aUnderlyingSettlPrice);
      set(aAssignmentMethod);
      set(aOpenInterest);
      set(aExerciseMethod);
      set(aSettlSessID);
      set(aSettlSessSubID);
      set(aClearingBusinessDate);
    }
  
    NET_FIELD_SET(AsgnRptID);
    NET_FIELD_SET(TotNumAssignmentReports);
    NET_FIELD_SET(LastRptRequested);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(NoPositions);
    __gc class NoPositions : public QuickFix::Group
    {
    public:
      NoPositions() : Group(702, 703, message_order ) {}
        static int message_order __gc[] = {
        703,
        704,   
        705,   
        706,   
        
      0};
      NET_FIELD_SET(PosType);
      NET_FIELD_SET(LongQty);
      NET_FIELD_SET(ShortQty);
      NET_FIELD_SET(PosQtyStatus);
    NET_FIELD_SET(NoNestedPartyIDs);
    __gc class NoNestedPartyIDs : public QuickFix::Group
    {
    public:
      NoNestedPartyIDs() : Group(539, 524, message_order ) {}
        static int message_order __gc[] = {
        524,
        525,
        538,
        
          545,
          805,
        
      0};
      NET_FIELD_SET(NestedPartyID);
      NET_FIELD_SET(NestedPartyIDSource);
      NET_FIELD_SET(NestedPartyRole);
    NET_FIELD_SET(NoNestedPartySubIDs);
    __gc class NoNestedPartySubIDs : public QuickFix::Group
    {
    public:
      NoNestedPartySubIDs() : Group(804, 545, message_order ) {}
        static int message_order __gc[] = {
          545,
          805,
        0};
      NET_FIELD_SET(NestedPartySubID);
      NET_FIELD_SET(NestedPartySubIDType);
    };
    };
    };   
    NET_FIELD_SET(NoPosAmt);   
    NET_FIELD_SET(PosAmtType);   
    NET_FIELD_SET(PosAmt);
    NET_FIELD_SET(ThresholdAmount);
    NET_FIELD_SET(SettlPrice);
    NET_FIELD_SET(SettlPriceType);
    NET_FIELD_SET(UnderlyingSettlPrice);
    NET_FIELD_SET(ExpireDate);
    NET_FIELD_SET(AssignmentMethod);
    NET_FIELD_SET(AssignmentUnit);
    NET_FIELD_SET(OpenInterest);
    NET_FIELD_SET(ExerciseMethod);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralRequest : public Message
  {
  public: 
    CollateralRequest() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AX"); }
    //
    CollateralRequest(
      QuickFix::CollReqID* aCollReqID,
      QuickFix::CollAsgnReason* aCollAsgnReason,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aCollReqID);
      set(aCollAsgnReason);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(CollReqID);
    NET_FIELD_SET(CollAsgnReason);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 944, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      944,
    0};
      NET_FIELD_SET(CollAction);
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MarginExcess);
    NET_FIELD_SET(TotalNetValue);
    NET_FIELD_SET(CashOutstanding);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138, 
      139,
      891, 
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralAssignment : public Message
  {
  public: 
    CollateralAssignment() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AY"); }
    //
    CollateralAssignment(
      QuickFix::CollAsgnID* aCollAsgnID,
      QuickFix::CollAsgnReason* aCollAsgnReason,
      QuickFix::CollAsgnTransType* aCollAsgnTransType,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aCollAsgnID);
      set(aCollAsgnReason);
      set(aCollAsgnTransType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(CollAsgnID);
    NET_FIELD_SET(CollReqID);
    NET_FIELD_SET(CollAsgnReason);
    NET_FIELD_SET(CollAsgnTransType);
    NET_FIELD_SET(CollAsgnRefID);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(ExpireTime);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 944, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      944,
    0};
      NET_FIELD_SET(CollAction);
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MarginExcess);
    NET_FIELD_SET(TotalNetValue);
    NET_FIELD_SET(CashOutstanding);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138, 
      139,
      891, 
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };   
    NET_FIELD_SET(SettlDeliveryType);   
    NET_FIELD_SET(StandInstDbType);   
    NET_FIELD_SET(StandInstDbName);   
    NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralResponse : public Message
  {
  public: 
    CollateralResponse() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("AZ"); }
    //
    CollateralResponse(
      QuickFix::CollRespID* aCollRespID,
      QuickFix::CollAsgnID* aCollAsgnID,
      QuickFix::CollAsgnReason* aCollAsgnReason,
      QuickFix::CollAsgnRespType* aCollAsgnRespType,
      QuickFix::TransactTime* aTransactTime )
    : Message(MsgType())
    
    {
      set(aCollRespID);
      set(aCollAsgnID);
      set(aCollAsgnReason);
      set(aCollAsgnRespType);
      set(aTransactTime);
    }
  
    NET_FIELD_SET(CollRespID);
    NET_FIELD_SET(CollAsgnID);
    NET_FIELD_SET(CollReqID);
    NET_FIELD_SET(CollAsgnReason);
    NET_FIELD_SET(CollAsgnTransType);
    NET_FIELD_SET(CollAsgnRespType);
    NET_FIELD_SET(CollAsgnRejectReason);
    NET_FIELD_SET(TransactTime);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 944, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
      944,
    0};
      NET_FIELD_SET(CollAction);
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MarginExcess);
    NET_FIELD_SET(TotalNetValue);
    NET_FIELD_SET(CashOutstanding);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138, 
      139,
      891, 
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralReport : public Message
  {
  public: 
    CollateralReport() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("BA"); }
    //
    CollateralReport(
      QuickFix::CollRptID* aCollRptID,
      QuickFix::CollStatus* aCollStatus )
    : Message(MsgType())
    
    {
      set(aCollRptID);
      set(aCollStatus);
    }
  
    NET_FIELD_SET(CollRptID);
    NET_FIELD_SET(CollInquiryID);
    NET_FIELD_SET(CollStatus);
    NET_FIELD_SET(TotNumReports);
    NET_FIELD_SET(LastRptRequested);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MarginExcess);
    NET_FIELD_SET(TotalNetValue);
    NET_FIELD_SET(CashOutstanding);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(NoMiscFees);
    __gc class NoMiscFees : public QuickFix::Group
    {
    public:
      NoMiscFees() : Group(136, 137, message_order ) {}
        static int message_order __gc[] = {
      137,
      138, 
      139,
      891, 
    0};
      NET_FIELD_SET(MiscFeeAmt);
      NET_FIELD_SET(MiscFeeCurr);
      NET_FIELD_SET(MiscFeeType);
      NET_FIELD_SET(MiscFeeBasis);
    };
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };   
    NET_FIELD_SET(SettlDeliveryType);   
    NET_FIELD_SET(StandInstDbType);   
    NET_FIELD_SET(StandInstDbName);   
    NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralInquiry : public Message
  {
  public: 
    CollateralInquiry() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("BB"); }
  
    NET_FIELD_SET(CollInquiryID);
    NET_FIELD_SET(NoCollInquiryQualifier);
    __gc class NoCollInquiryQualifier : public QuickFix::Group
    {
    public:
      NoCollInquiryQualifier() : Group(938, 896, message_order ) {}
        static int message_order __gc[] = {
      896,
    0};
      NET_FIELD_SET(CollInquiryQualifier);
    };
    NET_FIELD_SET(SubscriptionRequestType);
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(MarginExcess);
    NET_FIELD_SET(TotalNetValue);
    NET_FIELD_SET(CashOutstanding);
    NET_FIELD_SET(NoTrdRegTimestamps);
    __gc class NoTrdRegTimestamps : public QuickFix::Group
    {
    public:
      NoTrdRegTimestamps() : Group(768, 769, message_order ) {}
        static int message_order __gc[] = {
        769,
        770,
        771,
      0};
      NET_FIELD_SET(TrdRegTimestamp);
      NET_FIELD_SET(TrdRegTimestampType);
      NET_FIELD_SET(TrdRegTimestampOrigin);
    };
    NET_FIELD_SET(Side);
    NET_FIELD_SET(Price);
    NET_FIELD_SET(PriceType);
    NET_FIELD_SET(AccruedInterestAmt);
    NET_FIELD_SET(EndAccruedInterestAmt);
    NET_FIELD_SET(StartCash);
    NET_FIELD_SET(EndCash);   
    NET_FIELD_SET(Spread);   
    NET_FIELD_SET(BenchmarkCurveCurrency);   
    NET_FIELD_SET(BenchmarkCurveName);   
    NET_FIELD_SET(BenchmarkCurvePoint);   
    NET_FIELD_SET(BenchmarkPrice);   
    NET_FIELD_SET(BenchmarkPriceType);   
    NET_FIELD_SET(BenchmarkSecurityID);   
    NET_FIELD_SET(BenchmarkSecurityIDSource);
    NET_FIELD_SET(NoStipulations);
    __gc class NoStipulations : public QuickFix::Group
    {
    public:
      NoStipulations() : Group(232, 233, message_order ) {}
        static int message_order __gc[] = {
        233,
        234,
      0};
      NET_FIELD_SET(StipulationType);
      NET_FIELD_SET(StipulationValue);
    };   
    NET_FIELD_SET(SettlDeliveryType);   
    NET_FIELD_SET(StandInstDbType);   
    NET_FIELD_SET(StandInstDbName);   
    NET_FIELD_SET(StandInstDbID);
    NET_FIELD_SET(NoDlvyInst);
    __gc class NoDlvyInst : public QuickFix::Group
    {
    public:
      NoDlvyInst() : Group(85, 165, message_order ) {}
        static int message_order __gc[] = {
        165,
        787,
        
      0};
      NET_FIELD_SET(SettlInstSource);
      NET_FIELD_SET(DlvyInstType);
    NET_FIELD_SET(NoSettlPartyIDs);
    __gc class NoSettlPartyIDs : public QuickFix::Group
    {
    public:
      NoSettlPartyIDs() : Group(781, 782, message_order ) {}
        static int message_order __gc[] = {
        782,
        783,
        784,
        
          785,
          786,
        
      0};
      NET_FIELD_SET(SettlPartyID);
      NET_FIELD_SET(SettlPartyIDSource);
      NET_FIELD_SET(SettlPartyRole);
    NET_FIELD_SET(NoSettlPartySubIDs);
    __gc class NoSettlPartySubIDs : public QuickFix::Group
    {
    public:
      NoSettlPartySubIDs() : Group(801, 785, message_order ) {}
        static int message_order __gc[] = {
          785,
          786,
        0};
      NET_FIELD_SET(SettlPartySubID);
      NET_FIELD_SET(SettlPartySubIDType);
    };
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };

  public __gc class CollateralInquiryAck : public Message
  {
  public: 
    CollateralInquiryAck() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("BB"); }
    //
    CollateralInquiryAck(
      QuickFix::CollInquiryID* aCollInquiryID,
      QuickFix::CollInquiryStatus* aCollInquiryStatus )
    : Message(MsgType())
    
    {
      set(aCollInquiryID);
      set(aCollInquiryStatus);
    }
  
    NET_FIELD_SET(CollInquiryID);
    NET_FIELD_SET(CollInquiryStatus);
    NET_FIELD_SET(CollInquiryResult);
    NET_FIELD_SET(NoCollInquiryQualifier);
    __gc class NoCollInquiryQualifier : public QuickFix::Group
    {
    public:
      NoCollInquiryQualifier() : Group(938, 896, message_order ) {}
        static int message_order __gc[] = {
      896,
    0};
      NET_FIELD_SET(CollInquiryQualifier);
    };
    NET_FIELD_SET(TotNumReports);
    NET_FIELD_SET(NoPartyIDs);
    __gc class NoPartyIDs : public QuickFix::Group
    {
    public:
      NoPartyIDs() : Group(453, 447, message_order ) {}
        static int message_order __gc[] = {
        448,
        447,
        452,
        
          523,
          803,
        
      0};
      NET_FIELD_SET(PartyID);
      NET_FIELD_SET(PartyIDSource);
      NET_FIELD_SET(PartyRole);
    NET_FIELD_SET(NoPartySubIDs);
    __gc class NoPartySubIDs : public QuickFix::Group
    {
    public:
      NoPartySubIDs() : Group(802, 523, message_order ) {}
        static int message_order __gc[] = {
          523,
          803,
        0};
      NET_FIELD_SET(PartySubID);
      NET_FIELD_SET(PartySubIDType);
    };
    };
    NET_FIELD_SET(Account);
    NET_FIELD_SET(AccountType);
    NET_FIELD_SET(ClOrdID);
    NET_FIELD_SET(OrderID);
    NET_FIELD_SET(SecondaryOrderID);
    NET_FIELD_SET(SecondaryClOrdID);
    NET_FIELD_SET(NoExecs);
    __gc class NoExecs : public QuickFix::Group
    {
    public:
      NoExecs() : Group(124, 17, message_order ) {}
        static int message_order __gc[] = {
      17,
    0};
      NET_FIELD_SET(ExecID);
    };
    NET_FIELD_SET(NoTrades);
    __gc class NoTrades : public QuickFix::Group
    {
    public:
      NoTrades() : Group(897, 571, message_order ) {}
        static int message_order __gc[] = {
      571,
      818, 
    0};
      NET_FIELD_SET(TradeReportID);
      NET_FIELD_SET(SecondaryTradeReportID);
    };   
    NET_FIELD_SET(Symbol);   
    NET_FIELD_SET(SymbolSfx);   
    NET_FIELD_SET(SecurityID);   
    NET_FIELD_SET(SecurityIDSource);   
    NET_FIELD_SET(Product);   
    NET_FIELD_SET(CFICode);   
    NET_FIELD_SET(SecurityType);   
    NET_FIELD_SET(SecuritySubType);   
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
    NET_FIELD_SET(StrikeCurrency);   
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
    NET_FIELD_SET(Pool);   
    NET_FIELD_SET(ContractSettlMonth);   
    NET_FIELD_SET(CPProgram);   
    NET_FIELD_SET(CPRegType);   
    NET_FIELD_SET(DatedDate);   
    NET_FIELD_SET(InterestAccrualDate);
    NET_FIELD_SET(NoSecurityAltID);
    __gc class NoSecurityAltID : public QuickFix::Group
    {
    public:
      NoSecurityAltID() : Group(454, 455, message_order ) {}
        static int message_order __gc[] = {
        455,
        456,
      0};
      NET_FIELD_SET(SecurityAltID);
      NET_FIELD_SET(SecurityAltIDSource);
    };
    NET_FIELD_SET(NoEvents);
    __gc class NoEvents : public QuickFix::Group
    {
    public:
      NoEvents() : Group(864, 865, message_order ) {}
        static int message_order __gc[] = {
        865,
        866,
        867,
        868,
      0};
      NET_FIELD_SET(EventType);
      NET_FIELD_SET(EventDate);
      NET_FIELD_SET(EventPx);
      NET_FIELD_SET(EventText);
    };   
    NET_FIELD_SET(AgreementDesc);   
    NET_FIELD_SET(AgreementID);   
    NET_FIELD_SET(AgreementDate);   
    NET_FIELD_SET(AgreementCurrency);   
    NET_FIELD_SET(TerminationType);   
    NET_FIELD_SET(StartDate);   
    NET_FIELD_SET(EndDate);   
    NET_FIELD_SET(DeliveryType);   
    NET_FIELD_SET(MarginRatio);
    NET_FIELD_SET(SettlDate);
    NET_FIELD_SET(Quantity);
    NET_FIELD_SET(QtyType);
    NET_FIELD_SET(Currency);
    NET_FIELD_SET(NoLegs);   
    NET_FIELD_SET(LegSymbol);   
    NET_FIELD_SET(LegSymbolSfx);   
    NET_FIELD_SET(LegSecurityID);   
    NET_FIELD_SET(LegSecurityIDSource);   
    NET_FIELD_SET(LegProduct);   
    NET_FIELD_SET(LegCFICode);   
    NET_FIELD_SET(LegSecurityType);   
    NET_FIELD_SET(LegSecuritySubType);   
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
    NET_FIELD_SET(LegStrikeCurrency);   
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
    NET_FIELD_SET(LegCurrency);   
    NET_FIELD_SET(LegPool);   
    NET_FIELD_SET(LegDatedDate);   
    NET_FIELD_SET(LegContractSettlMonth);   
    NET_FIELD_SET(LegInterestAccrualDate);
    NET_FIELD_SET(NoLegSecurityAltID);
    __gc class NoLegSecurityAltID : public QuickFix::Group
    {
    public:
      NoLegSecurityAltID() : Group(604, 605, message_order ) {}
        static int message_order __gc[] = {
        605,
        606,
      0};
      NET_FIELD_SET(LegSecurityAltID);
      NET_FIELD_SET(LegSecurityAltIDSource);
    };
    NET_FIELD_SET(NoUnderlyings);
    __gc class NoUnderlyings : public QuickFix::Group
    {
    public:
      NoUnderlyings() : Group(711, 311, message_order ) {}
        static int message_order __gc[] = {
      311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,
    0};
          NET_FIELD_SET(UnderlyingSymbol);
          NET_FIELD_SET(UnderlyingSymbolSfx);
          NET_FIELD_SET(UnderlyingSecurityID);
          NET_FIELD_SET(UnderlyingSecurityIDSource);
          NET_FIELD_SET(UnderlyingProduct);
          NET_FIELD_SET(UnderlyingCFICode);
          NET_FIELD_SET(UnderlyingSecurityType);
          NET_FIELD_SET(UnderlyingSecuritySubType);
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
          NET_FIELD_SET(UnderlyingStrikePrice);
          NET_FIELD_SET(UnderlyingStrikeCurrency);
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
          NET_FIELD_SET(UnderlyingCPProgram);
          NET_FIELD_SET(UnderlyingCPRegType);
          NET_FIELD_SET(UnderlyingCurrency);
          NET_FIELD_SET(UnderlyingQty);
          NET_FIELD_SET(UnderlyingPx);
          NET_FIELD_SET(UnderlyingDirtyPrice);
          NET_FIELD_SET(UnderlyingEndPrice);
          NET_FIELD_SET(UnderlyingStartValue);
          NET_FIELD_SET(UnderlyingCurrentValue);
          NET_FIELD_SET(UnderlyingEndValue);
    NET_FIELD_SET(NoUnderlyingSecurityAltID);
    __gc class NoUnderlyingSecurityAltID : public QuickFix::Group
    {
    public:
      NoUnderlyingSecurityAltID() : Group(457, 458, message_order ) {}
        static int message_order __gc[] = {
        458,
        459,
      0};
      NET_FIELD_SET(UnderlyingSecurityAltID);
      NET_FIELD_SET(UnderlyingSecurityAltIDSource);
    };
    };
    NET_FIELD_SET(TradingSessionID);
    NET_FIELD_SET(TradingSessionSubID);
    NET_FIELD_SET(SettlSessID);
    NET_FIELD_SET(SettlSessSubID);
    NET_FIELD_SET(ClearingBusinessDate);
    NET_FIELD_SET(ResponseTransportType);
    NET_FIELD_SET(ResponseDestination);
    NET_FIELD_SET(Text);
    NET_FIELD_SET(EncodedTextLen);
    NET_FIELD_SET(EncodedText);
  };
}

 