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

#ifndef FIX42_MESSAGES_H
#define FIX42_MESSAGES_H

#include "Message.h"
#include "Group.h"

namespace FIX42
{
  class Header : public FIX::Header
  {
  public:
    FIELD_SET(*this, FIX::BeginString);
    FIELD_SET(*this, FIX::BodyLength);
    FIELD_SET(*this, FIX::MsgType);
    FIELD_SET(*this, FIX::SenderCompID);
    FIELD_SET(*this, FIX::TargetCompID);
    FIELD_SET(*this, FIX::OnBehalfOfCompID);
    FIELD_SET(*this, FIX::DeliverToCompID);
    FIELD_SET(*this, FIX::SecureDataLen);
    FIELD_SET(*this, FIX::SecureData);
    FIELD_SET(*this, FIX::MsgSeqNum);
    FIELD_SET(*this, FIX::SenderSubID);
    FIELD_SET(*this, FIX::SenderLocationID);
    FIELD_SET(*this, FIX::TargetSubID);
    FIELD_SET(*this, FIX::TargetLocationID);
    FIELD_SET(*this, FIX::OnBehalfOfSubID);
    FIELD_SET(*this, FIX::OnBehalfOfLocationID);
    FIELD_SET(*this, FIX::DeliverToSubID);
    FIELD_SET(*this, FIX::DeliverToLocationID);
    FIELD_SET(*this, FIX::PossDupFlag);
    FIELD_SET(*this, FIX::PossResend);
    FIELD_SET(*this, FIX::SendingTime);
    FIELD_SET(*this, FIX::OrigSendingTime);
    FIELD_SET(*this, FIX::XmlDataLen);
    FIELD_SET(*this, FIX::XmlData);
    FIELD_SET(*this, FIX::MessageEncoding);
    FIELD_SET(*this, FIX::LastMsgSeqNumProcessed);
    FIELD_SET(*this, FIX::OnBehalfOfSendingTime);
  };
  
  class Trailer : public FIX::Trailer
  {
  public:
    FIELD_SET(*this, FIX::SignatureLength);
    FIELD_SET(*this, FIX::Signature);
    FIELD_SET(*this, FIX::CheckSum);
  };
  
  class Message : public FIX::Message
  {
  public: 
    Message( const FIX::MsgType& msgType ) 
    : FIX::Message(
      FIX::BeginString("FIX.4.2"),msgType ) {}   

    Header& getHeader() { return (Header&)m_header; }
    const Header& getHeader() const { return (Header&)m_header; }
    
    FIELD_SET(m_header, FIX::BeginString);
    FIELD_SET(m_header, FIX::BodyLength);
    FIELD_SET(m_header, FIX::MsgType);
    FIELD_SET(m_header, FIX::SenderCompID);
    FIELD_SET(m_header, FIX::TargetCompID);
    FIELD_SET(m_header, FIX::OnBehalfOfCompID);
    FIELD_SET(m_header, FIX::DeliverToCompID);
    FIELD_SET(m_header, FIX::SecureDataLen);
    FIELD_SET(m_header, FIX::SecureData);
    FIELD_SET(m_header, FIX::MsgSeqNum);
    FIELD_SET(m_header, FIX::SenderSubID);
    FIELD_SET(m_header, FIX::SenderLocationID);
    FIELD_SET(m_header, FIX::TargetSubID);
    FIELD_SET(m_header, FIX::TargetLocationID);
    FIELD_SET(m_header, FIX::OnBehalfOfSubID);
    FIELD_SET(m_header, FIX::OnBehalfOfLocationID);
    FIELD_SET(m_header, FIX::DeliverToSubID);
    FIELD_SET(m_header, FIX::DeliverToLocationID);
    FIELD_SET(m_header, FIX::PossDupFlag);
    FIELD_SET(m_header, FIX::PossResend);
    FIELD_SET(m_header, FIX::SendingTime);
    FIELD_SET(m_header, FIX::OrigSendingTime);
    FIELD_SET(m_header, FIX::XmlDataLen);
    FIELD_SET(m_header, FIX::XmlData);
    FIELD_SET(m_header, FIX::MessageEncoding);
    FIELD_SET(m_header, FIX::LastMsgSeqNumProcessed);
    FIELD_SET(m_header, FIX::OnBehalfOfSendingTime);
  };

  class Heartbeat : public Message
  {
  public: 
    Heartbeat() : Message(MsgType()) {}
    Heartbeat(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("0"); }
  
    FIELD_SET(*this, FIX::TestReqID);
  };

  class Logon : public Message
  {
  public: 
    Logon() : Message(MsgType()) {}
    Logon(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("A"); }
    //
    Logon(
      const FIX::EncryptMethod& aEncryptMethod,
      const FIX::HeartBtInt& aHeartBtInt )
    : Message(FIX::MsgType("A"))
    
    {
      set(aEncryptMethod);
      set(aHeartBtInt);
    }
  
    FIELD_SET(*this, FIX::EncryptMethod);
    FIELD_SET(*this, FIX::HeartBtInt);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::ResetSeqNumFlag);
    FIELD_SET(*this, FIX::MaxMessageSize);
    FIELD_SET(*this, FIX::NoMsgTypes);

    class NoMsgTypes : public FIX::Group
    {
    public:
    NoMsgTypes() : FIX::Group(384, 372, FIX::message_order(
            372,
            385,
         0)){}
      FIELD_SET(*this, FIX::RefMsgType);
      FIELD_SET(*this, FIX::MsgDirection);
    };
  };

  class TestRequest : public Message
  {
  public: 
    TestRequest() : Message(MsgType()) {}
    TestRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("1"); }
    //
    TestRequest(
      const FIX::TestReqID& aTestReqID )
    : Message(FIX::MsgType("1"))
    
    {
      set(aTestReqID);
    }
  
    FIELD_SET(*this, FIX::TestReqID);
  };

  class ResendRequest : public Message
  {
  public: 
    ResendRequest() : Message(MsgType()) {}
    ResendRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("2"); }
    //
    ResendRequest(
      const FIX::BeginSeqNo& aBeginSeqNo,
      const FIX::EndSeqNo& aEndSeqNo )
    : Message(FIX::MsgType("2"))
    
    {
      set(aBeginSeqNo);
      set(aEndSeqNo);
    }
  
    FIELD_SET(*this, FIX::BeginSeqNo);
    FIELD_SET(*this, FIX::EndSeqNo);
  };

  class Reject : public Message
  {
  public: 
    Reject() : Message(MsgType()) {}
    Reject(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("3"); }
    //
    Reject(
      const FIX::RefSeqNum& aRefSeqNum )
    : Message(FIX::MsgType("3"))
    
    {
      set(aRefSeqNum);
    }
  
    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefTagID);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::SessionRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class SequenceReset : public Message
  {
  public: 
    SequenceReset() : Message(MsgType()) {}
    SequenceReset(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("4"); }
    //
    SequenceReset(
      const FIX::NewSeqNo& aNewSeqNo )
    : Message(FIX::MsgType("4"))
    
    {
      set(aNewSeqNo);
    }
  
    FIELD_SET(*this, FIX::GapFillFlag);
    FIELD_SET(*this, FIX::NewSeqNo);
  };

  class Logout : public Message
  {
  public: 
    Logout() : Message(MsgType()) {}
    Logout(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("5"); }
  
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class Advertisement : public Message
  {
  public: 
    Advertisement() : Message(MsgType()) {}
    Advertisement(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("7"); }
    //
    Advertisement(
      const FIX::AdvId& aAdvId,
      const FIX::AdvTransType& aAdvTransType,
      const FIX::Symbol& aSymbol,
      const FIX::AdvSide& aAdvSide,
      const FIX::Shares& aShares )
    : Message(FIX::MsgType("7"))
    
    {
      set(aAdvId);
      set(aAdvTransType);
      set(aSymbol);
      set(aAdvSide);
      set(aShares);
    }
  
    FIELD_SET(*this, FIX::AdvId);
    FIELD_SET(*this, FIX::AdvTransType);
    FIELD_SET(*this, FIX::AdvRefID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::AdvSide);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::URLLink);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

  class IndicationofInterest : public Message
  {
  public: 
    IndicationofInterest() : Message(MsgType()) {}
    IndicationofInterest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("6"); }
    //
    IndicationofInterest(
      const FIX::IOIid& aIOIid,
      const FIX::IOITransType& aIOITransType,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::IOIShares& aIOIShares )
    : Message(FIX::MsgType("6"))
    
    {
      set(aIOIid);
      set(aIOITransType);
      set(aSymbol);
      set(aSide);
      set(aIOIShares);
    }
  
    FIELD_SET(*this, FIX::IOIid);
    FIELD_SET(*this, FIX::IOITransType);
    FIELD_SET(*this, FIX::IOIRefID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::IOIShares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::IOIQltyInd);
    FIELD_SET(*this, FIX::IOINaturalFlag);
    FIELD_SET(*this, FIX::NoIOIQualifiers);

    class NoIOIQualifiers : public FIX::Group
    {
    public:
    NoIOIQualifiers() : FIX::Group(199, 104, FIX::message_order(
            104,
         0)){}
      FIELD_SET(*this, FIX::IOIQualifier);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::URLLink);
    FIELD_SET(*this, FIX::NoRoutingIDs);

    class NoRoutingIDs : public FIX::Group
    {
    public:
    NoRoutingIDs() : FIX::Group(215, 216, FIX::message_order(
            216,
            217,
         0)){}
      FIELD_SET(*this, FIX::RoutingType);
      FIELD_SET(*this, FIX::RoutingID);
    };
    FIELD_SET(*this, FIX::SpreadToBenchmark);
    FIELD_SET(*this, FIX::Benchmark);
  };

  class News : public Message
  {
  public: 
    News() : Message(MsgType()) {}
    News(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }
    //
    News(
      const FIX::Headline& aHeadline,
      const FIX::LinesOfText& aLinesOfText )
    : Message(FIX::MsgType("B"))
    
    {
      set(aHeadline);
      set(aLinesOfText);
    }
  
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Urgency);
    FIELD_SET(*this, FIX::Headline);
    FIELD_SET(*this, FIX::EncodedHeadlineLen);
    FIELD_SET(*this, FIX::EncodedHeadline);
    FIELD_SET(*this, FIX::NoRoutingIDs);

    class NoRoutingIDs : public FIX::Group
    {
    public:
    NoRoutingIDs() : FIX::Group(215, 216, FIX::message_order(
            216,
            217,
         0)){}
      FIELD_SET(*this, FIX::RoutingType);
      FIELD_SET(*this, FIX::RoutingID);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 22, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::RelatdSym);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
    };
    FIELD_SET(*this, FIX::LinesOfText);

    class LinesOfText : public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33, 58, FIX::message_order(
            58,
            354,
            355,
         0)){}
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
    FIELD_SET(*this, FIX::URLLink);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
  };

  class Email : public Message
  {
  public: 
    Email() : Message(MsgType()) {}
    Email(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("C"); }
    //
    Email(
      const FIX::EmailThreadID& aEmailThreadID,
      const FIX::EmailType& aEmailType,
      const FIX::Subject& aSubject,
      const FIX::LinesOfText& aLinesOfText )
    : Message(FIX::MsgType("C"))
    
    {
      set(aEmailThreadID);
      set(aEmailType);
      set(aSubject);
      set(aLinesOfText);
    }
  
    FIELD_SET(*this, FIX::EmailThreadID);
    FIELD_SET(*this, FIX::EmailType);
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Subject);
    FIELD_SET(*this, FIX::EncodedSubjectLen);
    FIELD_SET(*this, FIX::EncodedSubject);
    FIELD_SET(*this, FIX::NoRoutingIDs);

    class NoRoutingIDs : public FIX::Group
    {
    public:
    NoRoutingIDs() : FIX::Group(215, 216, FIX::message_order(
            216,
            217,
         0)){}
      FIELD_SET(*this, FIX::RoutingType);
      FIELD_SET(*this, FIX::RoutingID);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 22, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::RelatdSym);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
    };
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::LinesOfText);

    class LinesOfText : public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33, 58, FIX::message_order(
            58,
            354,
            355,
         0)){}
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
  };

  class QuoteRequest : public Message
  {
  public: 
    QuoteRequest() : Message(MsgType()) {}
    QuoteRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("R"); }
    //
    QuoteRequest(
      const FIX::QuoteReqID& aQuoteReqID,
      const FIX::NoRelatedSym& aNoRelatedSym )
    : Message(FIX::MsgType("R"))
    
    {
      set(aQuoteReqID);
      set(aNoRelatedSym);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 15, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::PrevClosePx);
      FIELD_SET(*this, FIX::QuoteRequestType);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::FutSettDate);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::FutSettDate2);
      FIELD_SET(*this, FIX::OrderQty2);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::Currency);
    };
  };

  class Quote : public Message
  {
  public: 
    Quote() : Message(MsgType()) {}
    Quote(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("S"); }
    //
    Quote(
      const FIX::QuoteID& aQuoteID,
      const FIX::Symbol& aSymbol )
    : Message(FIX::MsgType("S"))
    
    {
      set(aQuoteID);
      set(aSymbol);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteResponseLevel);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::BidPx);
    FIELD_SET(*this, FIX::OfferPx);
    FIELD_SET(*this, FIX::BidSize);
    FIELD_SET(*this, FIX::OfferSize);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::BidSpotRate);
    FIELD_SET(*this, FIX::OfferSpotRate);
    FIELD_SET(*this, FIX::BidForwardPoints);
    FIELD_SET(*this, FIX::OfferForwardPoints);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::Currency);
  };

  class MassQuote : public Message
  {
  public: 
    MassQuote() : Message(MsgType()) {}
    MassQuote(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("i"); }
    //
    MassQuote(
      const FIX::QuoteID& aQuoteID,
      const FIX::NoQuoteSets& aNoQuoteSets )
    : Message(FIX::MsgType("i"))
    
    {
      set(aQuoteID);
      set(aNoQuoteSets);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteResponseLevel);
    FIELD_SET(*this, FIX::DefBidSize);
    FIELD_SET(*this, FIX::DefOfferSize);
    FIELD_SET(*this, FIX::NoQuoteSets);

    class NoQuoteSets : public FIX::Group
    {
    public:
    NoQuoteSets() : FIX::Group(296, 295, FIX::message_order(
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
            295,
            
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
            
         0)){}
      FIELD_SET(*this, FIX::QuoteSetID);
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingIDSource);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDay);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::QuoteSetValidUntilTime);
      FIELD_SET(*this, FIX::TotQuoteEntries);
      FIELD_SET(*this, FIX::NoQuoteEntries);

    class NoQuoteEntries : public FIX::Group
    {
    public:
    NoQuoteEntries() : FIX::Group(295, 15, FIX::message_order(
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
            0)){}
      FIELD_SET(*this, FIX::QuoteEntryID);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::BidPx);
      FIELD_SET(*this, FIX::OfferPx);
      FIELD_SET(*this, FIX::BidSize);
      FIELD_SET(*this, FIX::OfferSize);
      FIELD_SET(*this, FIX::ValidUntilTime);
      FIELD_SET(*this, FIX::BidSpotRate);
      FIELD_SET(*this, FIX::OfferSpotRate);
      FIELD_SET(*this, FIX::BidForwardPoints);
      FIELD_SET(*this, FIX::OfferForwardPoints);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::FutSettDate);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::FutSettDate2);
      FIELD_SET(*this, FIX::OrderQty2);
      FIELD_SET(*this, FIX::Currency);
    };
    };
  };

  class QuoteCancel : public Message
  {
  public: 
    QuoteCancel() : Message(MsgType()) {}
    QuoteCancel(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Z"); }
    //
    QuoteCancel(
      const FIX::QuoteID& aQuoteID,
      const FIX::QuoteCancelType& aQuoteCancelType,
      const FIX::NoQuoteEntries& aNoQuoteEntries )
    : Message(FIX::MsgType("Z"))
    
    {
      set(aQuoteID);
      set(aQuoteCancelType);
      set(aNoQuoteEntries);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteCancelType);
    FIELD_SET(*this, FIX::QuoteResponseLevel);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::NoQuoteEntries);

    class NoQuoteEntries : public FIX::Group
    {
    public:
    NoQuoteEntries() : FIX::Group(295, 22, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::UnderlyingSymbol);
    };
  };

  class QuoteStatusRequest : public Message
  {
  public: 
    QuoteStatusRequest() : Message(MsgType()) {}
    QuoteStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("a"); }
    //
    QuoteStatusRequest(
      const FIX::Symbol& aSymbol )
    : Message(FIX::MsgType("a"))
    
    {
      set(aSymbol);
    }
  
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

  class QuoteAcknowledgement : public Message
  {
  public: 
    QuoteAcknowledgement() : Message(MsgType()) {}
    QuoteAcknowledgement(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("b"); }
    //
    QuoteAcknowledgement(
      const FIX::QuoteAckStatus& aQuoteAckStatus )
    : Message(FIX::MsgType("b"))
    
    {
      set(aQuoteAckStatus);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteAckStatus);
    FIELD_SET(*this, FIX::QuoteRejectReason);
    FIELD_SET(*this, FIX::QuoteResponseLevel);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::NoQuoteSets);

    class NoQuoteSets : public FIX::Group
    {
    public:
    NoQuoteSets() : FIX::Group(296, 295, FIX::message_order(
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
            295,
            
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
            
         0)){}
      FIELD_SET(*this, FIX::QuoteSetID);
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingIDSource);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDay);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::TotQuoteEntries);
      FIELD_SET(*this, FIX::NoQuoteEntries);

    class NoQuoteEntries : public FIX::Group
    {
    public:
    NoQuoteEntries() : FIX::Group(295, 22, FIX::message_order(
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
            0)){}
      FIELD_SET(*this, FIX::QuoteEntryID);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::QuoteEntryRejectReason);
    };
    };
  };

  class MarketDataRequest : public Message
  {
  public: 
    MarketDataRequest() : Message(MsgType()) {}
    MarketDataRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("V"); }
    //
    MarketDataRequest(
      const FIX::MDReqID& aMDReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType,
      const FIX::MarketDepth& aMarketDepth,
      const FIX::NoMDEntryTypes& aNoMDEntryTypes,
      const FIX::NoRelatedSym& aNoRelatedSym )
    : Message(FIX::MsgType("V"))
    
    {
      set(aMDReqID);
      set(aSubscriptionRequestType);
      set(aMarketDepth);
      set(aNoMDEntryTypes);
      set(aNoRelatedSym);
    }
  
    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketDepth);
    FIELD_SET(*this, FIX::MDUpdateType);
    FIELD_SET(*this, FIX::AggregatedBook);
    FIELD_SET(*this, FIX::NoMDEntryTypes);

    class NoMDEntryTypes : public FIX::Group
    {
    public:
    NoMDEntryTypes() : FIX::Group(267, 269, FIX::message_order(
            269,
         0)){}
      FIELD_SET(*this, FIX::MDEntryType);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 22, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::TradingSessionID);
    };
  };

  class MarketDataSnapshotFullRefresh : public Message
  {
  public: 
    MarketDataSnapshotFullRefresh() : Message(MsgType()) {}
    MarketDataSnapshotFullRefresh(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("W"); }
    //
    MarketDataSnapshotFullRefresh(
      const FIX::Symbol& aSymbol,
      const FIX::NoMDEntries& aNoMDEntries )
    : Message(FIX::MsgType("W"))
    
    {
      set(aSymbol);
      set(aNoMDEntries);
    }
  
    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::FinancialStatus);
    FIELD_SET(*this, FIX::CorporateAction);
    FIELD_SET(*this, FIX::TotalVolumeTraded);
    FIELD_SET(*this, FIX::NoMDEntries);

    class NoMDEntries : public FIX::Group
    {
    public:
    NoMDEntries() : FIX::Group(268, 15, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::MDEntryType);
      FIELD_SET(*this, FIX::MDEntryPx);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::MDEntrySize);
      FIELD_SET(*this, FIX::MDEntryDate);
      FIELD_SET(*this, FIX::MDEntryTime);
      FIELD_SET(*this, FIX::TickDirection);
      FIELD_SET(*this, FIX::MDMkt);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::QuoteCondition);
      FIELD_SET(*this, FIX::TradeCondition);
      FIELD_SET(*this, FIX::MDEntryOriginator);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
      FIELD_SET(*this, FIX::OpenCloseSettleFlag);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::ExpireDate);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::MinQty);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::SellerDays);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::QuoteEntryID);
      FIELD_SET(*this, FIX::MDEntryBuyer);
      FIELD_SET(*this, FIX::MDEntrySeller);
      FIELD_SET(*this, FIX::NumberOfOrders);
      FIELD_SET(*this, FIX::MDEntryPositionNo);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

  class MarketDataIncrementalRefresh : public Message
  {
  public: 
    MarketDataIncrementalRefresh() : Message(MsgType()) {}
    MarketDataIncrementalRefresh(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("X"); }
    //
    MarketDataIncrementalRefresh(
      const FIX::NoMDEntries& aNoMDEntries )
    : Message(FIX::MsgType("X"))
    
    {
      set(aNoMDEntries);
    }
  
    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::NoMDEntries);

    class NoMDEntries : public FIX::Group
    {
    public:
    NoMDEntries() : FIX::Group(268, 15, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::MDUpdateAction);
      FIELD_SET(*this, FIX::DeleteReason);
      FIELD_SET(*this, FIX::MDEntryType);
      FIELD_SET(*this, FIX::MDEntryID);
      FIELD_SET(*this, FIX::MDEntryRefID);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::FinancialStatus);
      FIELD_SET(*this, FIX::CorporateAction);
      FIELD_SET(*this, FIX::MDEntryPx);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::MDEntrySize);
      FIELD_SET(*this, FIX::MDEntryDate);
      FIELD_SET(*this, FIX::MDEntryTime);
      FIELD_SET(*this, FIX::TickDirection);
      FIELD_SET(*this, FIX::MDMkt);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::QuoteCondition);
      FIELD_SET(*this, FIX::TradeCondition);
      FIELD_SET(*this, FIX::MDEntryOriginator);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
      FIELD_SET(*this, FIX::OpenCloseSettleFlag);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::ExpireDate);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::MinQty);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::SellerDays);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::QuoteEntryID);
      FIELD_SET(*this, FIX::MDEntryBuyer);
      FIELD_SET(*this, FIX::MDEntrySeller);
      FIELD_SET(*this, FIX::NumberOfOrders);
      FIELD_SET(*this, FIX::MDEntryPositionNo);
      FIELD_SET(*this, FIX::TotalVolumeTraded);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

  class MarketDataRequestReject : public Message
  {
  public: 
    MarketDataRequestReject() : Message(MsgType()) {}
    MarketDataRequestReject(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Y"); }
    //
    MarketDataRequestReject(
      const FIX::MDReqID& aMDReqID )
    : Message(FIX::MsgType("Y"))
    
    {
      set(aMDReqID);
    }
  
    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::MDReqRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class SecurityDefinitionRequest : public Message
  {
  public: 
    SecurityDefinitionRequest() : Message(MsgType()) {}
    SecurityDefinitionRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("c"); }
    //
    SecurityDefinitionRequest(
      const FIX::SecurityReqID& aSecurityReqID,
      const FIX::SecurityRequestType& aSecurityRequestType )
    : Message(FIX::MsgType("c"))
    
    {
      set(aSecurityReqID);
      set(aSecurityRequestType);
    }
  
    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityRequestType);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 54, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingIDSource);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDay);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::RatioQty);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::UnderlyingCurrency);
    };
  };

  class SecurityDefinition : public Message
  {
  public: 
    SecurityDefinition() : Message(MsgType()) {}
    SecurityDefinition(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("d"); }
    //
    SecurityDefinition(
      const FIX::SecurityReqID& aSecurityReqID,
      const FIX::SecurityResponseID& aSecurityResponseID,
      const FIX::TotalNumSecurities& aTotalNumSecurities )
    : Message(FIX::MsgType("d"))
    
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aTotalNumSecurities);
    }
  
    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityResponseID);
    FIELD_SET(*this, FIX::SecurityResponseType);
    FIELD_SET(*this, FIX::TotalNumSecurities);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::NoRelatedSym);

    class NoRelatedSym : public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146, 54, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingIDSource);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDay);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::RatioQty);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::UnderlyingCurrency);
    };
  };

  class SecurityStatusRequest : public Message
  {
  public: 
    SecurityStatusRequest() : Message(MsgType()) {}
    SecurityStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("e"); }
    //
    SecurityStatusRequest(
      const FIX::SecurityStatusReqID& aSecurityStatusReqID,
      const FIX::Symbol& aSymbol,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(FIX::MsgType("e"))
    
    {
      set(aSecurityStatusReqID);
      set(aSymbol);
      set(aSubscriptionRequestType);
    }
  
    FIELD_SET(*this, FIX::SecurityStatusReqID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

  class SecurityStatus : public Message
  {
  public: 
    SecurityStatus() : Message(MsgType()) {}
    SecurityStatus(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("f"); }
    //
    SecurityStatus(
      const FIX::Symbol& aSymbol )
    : Message(FIX::MsgType("f"))
    
    {
      set(aSymbol);
    }
  
    FIELD_SET(*this, FIX::SecurityStatusReqID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::SecurityTradingStatus);
    FIELD_SET(*this, FIX::FinancialStatus);
    FIELD_SET(*this, FIX::CorporateAction);
    FIELD_SET(*this, FIX::HaltReason);
    FIELD_SET(*this, FIX::InViewOfCommon);
    FIELD_SET(*this, FIX::DueToRelated);
    FIELD_SET(*this, FIX::BuyVolume);
    FIELD_SET(*this, FIX::SellVolume);
    FIELD_SET(*this, FIX::HighPx);
    FIELD_SET(*this, FIX::LowPx);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Adjustment);
  };

  class TradingSessionStatusRequest : public Message
  {
  public: 
    TradingSessionStatusRequest() : Message(MsgType()) {}
    TradingSessionStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("g"); }
    //
    TradingSessionStatusRequest(
      const FIX::TradSesReqID& aTradSesReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(FIX::MsgType("g"))
    
    {
      set(aTradSesReqID);
      set(aSubscriptionRequestType);
    }
  
    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

  class TradingSessionStatus : public Message
  {
  public: 
    TradingSessionStatus() : Message(MsgType()) {}
    TradingSessionStatus(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("h"); }
    //
    TradingSessionStatus(
      const FIX::TradingSessionID& aTradingSessionID,
      const FIX::TradSesStatus& aTradSesStatus )
    : Message(FIX::MsgType("h"))
    
    {
      set(aTradingSessionID);
      set(aTradSesStatus);
    }
  
    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::TradSesStatus);
    FIELD_SET(*this, FIX::TradSesStartTime);
    FIELD_SET(*this, FIX::TradSesOpenTime);
    FIELD_SET(*this, FIX::TradSesPreCloseTime);
    FIELD_SET(*this, FIX::TradSesCloseTime);
    FIELD_SET(*this, FIX::TradSesEndTime);
    FIELD_SET(*this, FIX::TotalVolumeTraded);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class NewOrderSingle : public Message
  {
  public: 
    NewOrderSingle() : Message(MsgType()) {}
    NewOrderSingle(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("D"); }
    //
    NewOrderSingle(
      const FIX::ClOrdID& aClOrdID,
      const FIX::HandlInst& aHandlInst,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::TransactTime& aTransactTime,
      const FIX::OrdType& aOrdType )
    : Message(FIX::MsgType("D"))
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::NoAllocs);

    class NoAllocs : public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78, 79, FIX::message_order(
            79,
            80,
         0)){}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocShares);
    };
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::NoTradingSessions);

    class NoTradingSessions : public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386, 336, FIX::message_order(
            336,
         0)){}
      FIELD_SET(*this, FIX::TradingSessionID);
    };
    FIELD_SET(*this, FIX::ProcessCode);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::PrevClosePx);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::LocateReqd);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::SolicitedFlag);
    FIELD_SET(*this, FIX::IOIid);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::ExpireDate);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::GTBookingInst);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::CoveredOrUncovered);
    FIELD_SET(*this, FIX::CustomerOrFirm);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::PegDifference);
    FIELD_SET(*this, FIX::DiscretionInst);
    FIELD_SET(*this, FIX::DiscretionOffset);
    FIELD_SET(*this, FIX::ClearingFirm);
    FIELD_SET(*this, FIX::ClearingAccount);
  };

  class ExecutionReport : public Message
  {
  public: 
    ExecutionReport() : Message(MsgType()) {}
    ExecutionReport(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("8"); }
    //
    ExecutionReport(
      const FIX::OrderID& aOrderID,
      const FIX::ExecID& aExecID,
      const FIX::ExecTransType& aExecTransType,
      const FIX::ExecType& aExecType,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::LeavesQty& aLeavesQty,
      const FIX::CumQty& aCumQty,
      const FIX::AvgPx& aAvgPx )
    : Message(FIX::MsgType("8"))
    
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
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::NoContraBrokers);

    class NoContraBrokers : public FIX::Group
    {
    public:
    NoContraBrokers() : FIX::Group(382, 337, FIX::message_order(
            375,
            337,
            437,
            438,
         0)){}
      FIELD_SET(*this, FIX::ContraBroker);
      FIELD_SET(*this, FIX::ContraTrader);
      FIELD_SET(*this, FIX::ContraTradeQty);
      FIELD_SET(*this, FIX::ContraTradeTime);
    };
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::ExecTransType);
    FIELD_SET(*this, FIX::ExecRefID);
    FIELD_SET(*this, FIX::ExecType);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::OrdRejReason);
    FIELD_SET(*this, FIX::ExecRestatementReason);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::PegDifference);
    FIELD_SET(*this, FIX::DiscretionInst);
    FIELD_SET(*this, FIX::DiscretionOffset);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::SolicitedFlag);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::ExpireDate);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::LastSpotRate);
    FIELD_SET(*this, FIX::LastForwardPoints);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::LastCapacity);
    FIELD_SET(*this, FIX::LeavesQty);
    FIELD_SET(*this, FIX::CumQty);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::DayOrderQty);
    FIELD_SET(*this, FIX::DayCumQty);
    FIELD_SET(*this, FIX::DayAvgPx);
    FIELD_SET(*this, FIX::GTBookingInst);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ReportToExch);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::ClearingFirm);
    FIELD_SET(*this, FIX::ClearingAccount);
    FIELD_SET(*this, FIX::MultiLegReportingType);
  };

  class DontKnowTrade : public Message
  {
  public: 
    DontKnowTrade() : Message(MsgType()) {}
    DontKnowTrade(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Q"); }
    //
    DontKnowTrade(
      const FIX::OrderID& aOrderID,
      const FIX::ExecID& aExecID,
      const FIX::DKReason& aDKReason,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(FIX::MsgType("Q"))
    
    {
      set(aOrderID);
      set(aExecID);
      set(aDKReason);
      set(aSymbol);
      set(aSide);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::DKReason);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class OrderCancelReplaceRequest : public Message
  {
  public: 
    OrderCancelReplaceRequest() : Message(MsgType()) {}
    OrderCancelReplaceRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("G"); }
    //
    OrderCancelReplaceRequest(
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::HandlInst& aHandlInst,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::TransactTime& aTransactTime,
      const FIX::OrdType& aOrdType )
    : Message(FIX::MsgType("G"))
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::NoAllocs);

    class NoAllocs : public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78, 79, FIX::message_order(
            79,
            80,
         0)){}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocShares);
    };
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::NoTradingSessions);

    class NoTradingSessions : public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386, 336, FIX::message_order(
            336,
         0)){}
      FIELD_SET(*this, FIX::TradingSessionID);
    };
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::PegDifference);
    FIELD_SET(*this, FIX::DiscretionInst);
    FIELD_SET(*this, FIX::DiscretionOffset);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::SolicitedFlag);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::ExpireDate);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::GTBookingInst);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::CoveredOrUncovered);
    FIELD_SET(*this, FIX::CustomerOrFirm);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::LocateReqd);
    FIELD_SET(*this, FIX::ClearingFirm);
    FIELD_SET(*this, FIX::ClearingAccount);
  };

  class OrderCancelRequest : public Message
  {
  public: 
    OrderCancelRequest() : Message(MsgType()) {}
    OrderCancelRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("F"); }
    //
    OrderCancelRequest(
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::TransactTime& aTransactTime )
    : Message(FIX::MsgType("F"))
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
      set(aTransactTime);
    }
  
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::SolicitedFlag);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class OrderCancelReject : public Message
  {
  public: 
    OrderCancelReject() : Message(MsgType()) {}
    OrderCancelReject(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("9"); }
    //
    OrderCancelReject(
      const FIX::OrderID& aOrderID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::CxlRejResponseTo& aCxlRejResponseTo )
    : Message(FIX::MsgType("9"))
    
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
      set(aCxlRejResponseTo);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::CxlRejResponseTo);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class OrderStatusRequest : public Message
  {
  public: 
    OrderStatusRequest() : Message(MsgType()) {}
    OrderStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("H"); }
    //
    OrderStatusRequest(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(FIX::MsgType("H"))
    
    {
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
  };

  class Allocation : public Message
  {
  public: 
    Allocation() : Message(MsgType()) {}
    Allocation(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("J"); }
    //
    Allocation(
      const FIX::AllocID& aAllocID,
      const FIX::AllocTransType& aAllocTransType,
      const FIX::NoOrders& aNoOrders,
      const FIX::Side& aSide,
      const FIX::Symbol& aSymbol,
      const FIX::Shares& aShares,
      const FIX::AvgPx& aAvgPx,
      const FIX::TradeDate& aTradeDate,
      const FIX::NoAllocs& aNoAllocs )
    : Message(FIX::MsgType("J"))
    
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aNoOrders);
      set(aSide);
      set(aSymbol);
      set(aShares);
      set(aAvgPx);
      set(aTradeDate);
      set(aNoAllocs);
    }
  
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::AllocTransType);
    FIELD_SET(*this, FIX::RefAllocID);
    FIELD_SET(*this, FIX::AllocLinkID);
    FIELD_SET(*this, FIX::AllocLinkType);
    FIELD_SET(*this, FIX::NoOrders);

    class NoOrders : public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73, 11, FIX::message_order(
            11,
            37,
            198,
            66,
            105,
         0)){}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::SecondaryOrderID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::WaveNo);
    };
    FIELD_SET(*this, FIX::NoExecs);

    class NoExecs : public FIX::Group
    {
    public:
    NoExecs() : FIX::Group(124, 17, FIX::message_order(
            32,
            17,
            31,
            29,
         0)){}
      FIELD_SET(*this, FIX::LastShares);
      FIELD_SET(*this, FIX::ExecID);
      FIELD_SET(*this, FIX::LastPx);
      FIELD_SET(*this, FIX::LastCapacity);
    };
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::AvgPrxPrecision);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET(*this, FIX::NetMoney);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::NumDaysInterest);
    FIELD_SET(*this, FIX::AccruedInterestRate);
    FIELD_SET(*this, FIX::NoAllocs);

    class NoAllocs : public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78, 12, FIX::message_order(
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
            136,
            
               137,
               138,
               139,
            
         0)){}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocPrice);
      FIELD_SET(*this, FIX::AllocShares);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET(*this, FIX::BrokerOfCredit);
      FIELD_SET(*this, FIX::NotifyBrokerOfCredit);
      FIELD_SET(*this, FIX::AllocHandlInst);
      FIELD_SET(*this, FIX::AllocText);
      FIELD_SET(*this, FIX::EncodedAllocTextLen);
      FIELD_SET(*this, FIX::EncodedAllocText);
      FIELD_SET(*this, FIX::ExecBroker);
      FIELD_SET(*this, FIX::ClientID);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET(*this, FIX::AllocAvgPx);
      FIELD_SET(*this, FIX::AllocNetMoney);
      FIELD_SET(*this, FIX::SettlCurrAmt);
      FIELD_SET(*this, FIX::SettlCurrency);
      FIELD_SET(*this, FIX::SettlCurrFxRate);
      FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
      FIELD_SET(*this, FIX::AccruedInterestAmt);
      FIELD_SET(*this, FIX::SettlInstMode);
      FIELD_SET(*this, FIX::NoMiscFees);

    class NoMiscFees : public FIX::Group
    {
    public:
    NoMiscFees() : FIX::Group(136, 137, FIX::message_order(
               137,
               138,
               139,
            0)){}
      FIELD_SET(*this, FIX::MiscFeeAmt);
      FIELD_SET(*this, FIX::MiscFeeCurr);
      FIELD_SET(*this, FIX::MiscFeeType);
    };
    };
  };

  class AllocationACK : public Message
  {
  public: 
    AllocationACK() : Message(MsgType()) {}
    AllocationACK(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("P"); }
    //
    AllocationACK(
      const FIX::AllocID& aAllocID,
      const FIX::TradeDate& aTradeDate,
      const FIX::AllocStatus& aAllocStatus )
    : Message(FIX::MsgType("P"))
    
    {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }
  
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class SettlementInstructions : public Message
  {
  public: 
    SettlementInstructions() : Message(MsgType()) {}
    SettlementInstructions(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("T"); }
    //
    SettlementInstructions(
      const FIX::SettlInstID& aSettlInstID,
      const FIX::SettlInstTransType& aSettlInstTransType,
      const FIX::SettlInstRefID& aSettlInstRefID,
      const FIX::SettlInstMode& aSettlInstMode,
      const FIX::SettlInstSource& aSettlInstSource,
      const FIX::AllocAccount& aAllocAccount,
      const FIX::TransactTime& aTransactTime )
    : Message(FIX::MsgType("T"))
    
    {
      set(aSettlInstID);
      set(aSettlInstTransType);
      set(aSettlInstRefID);
      set(aSettlInstMode);
      set(aSettlInstSource);
      set(aAllocAccount);
      set(aTransactTime);
    }
  
    FIELD_SET(*this, FIX::SettlInstID);
    FIELD_SET(*this, FIX::SettlInstTransType);
    FIELD_SET(*this, FIX::SettlInstRefID);
    FIELD_SET(*this, FIX::SettlInstMode);
    FIELD_SET(*this, FIX::SettlInstSource);
    FIELD_SET(*this, FIX::AllocAccount);
    FIELD_SET(*this, FIX::SettlLocation);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::StandInstDbType);
    FIELD_SET(*this, FIX::StandInstDbName);
    FIELD_SET(*this, FIX::StandInstDbID);
    FIELD_SET(*this, FIX::SettlDeliveryType);
    FIELD_SET(*this, FIX::SettlDepositoryCode);
    FIELD_SET(*this, FIX::SettlBrkrCode);
    FIELD_SET(*this, FIX::SettlInstCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentName);
    FIELD_SET(*this, FIX::SecuritySettlAgentCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctNum);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactPhone);
    FIELD_SET(*this, FIX::CashSettlAgentName);
    FIELD_SET(*this, FIX::CashSettlAgentCode);
    FIELD_SET(*this, FIX::CashSettlAgentAcctNum);
    FIELD_SET(*this, FIX::CashSettlAgentAcctName);
    FIELD_SET(*this, FIX::CashSettlAgentContactName);
    FIELD_SET(*this, FIX::CashSettlAgentContactPhone);
  };

  class NewOrderList : public Message
  {
  public: 
    NewOrderList() : Message(MsgType()) {}
    NewOrderList(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("E"); }
    //
    NewOrderList(
      const FIX::ListID& aListID,
      const FIX::BidType& aBidType,
      const FIX::TotNoOrders& aTotNoOrders,
      const FIX::NoOrders& aNoOrders )
    : Message(FIX::MsgType("E"))
    
    {
      set(aListID);
      set(aBidType);
      set(aTotNoOrders);
      set(aNoOrders);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::ProgRptReqs);
    FIELD_SET(*this, FIX::BidType);
    FIELD_SET(*this, FIX::ProgPeriodInterval);
    FIELD_SET(*this, FIX::ListExecInstType);
    FIELD_SET(*this, FIX::ListExecInst);
    FIELD_SET(*this, FIX::EncodedListExecInstLen);
    FIELD_SET(*this, FIX::EncodedListExecInst);
    FIELD_SET(*this, FIX::TotNoOrders);
    FIELD_SET(*this, FIX::NoOrders);

    class NoOrders : public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73, 1, FIX::message_order(
            11,
            67,
            160,
            109,
            76,
            1,
            78,
            
               79,
               80,
            
            63,
            64,
            21,
            18,
            110,
            111,
            100,
            386,
            
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
         0)){}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::ListSeqNo);
      FIELD_SET(*this, FIX::SettlInstMode);
      FIELD_SET(*this, FIX::ClientID);
      FIELD_SET(*this, FIX::ExecBroker);
      FIELD_SET(*this, FIX::Account);
      FIELD_SET(*this, FIX::NoAllocs);
      FIELD_SET(*this, FIX::SettlmntTyp);
      FIELD_SET(*this, FIX::FutSettDate);
      FIELD_SET(*this, FIX::HandlInst);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::MinQty);
      FIELD_SET(*this, FIX::MaxFloor);
      FIELD_SET(*this, FIX::ExDestination);
      FIELD_SET(*this, FIX::NoTradingSessions);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::PrevClosePx);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::SideValueInd);
      FIELD_SET(*this, FIX::LocateReqd);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::StopPx);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::ComplianceID);
      FIELD_SET(*this, FIX::SolicitedFlag);
      FIELD_SET(*this, FIX::IOIid);
      FIELD_SET(*this, FIX::QuoteID);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::EffectiveTime);
      FIELD_SET(*this, FIX::ExpireDate);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::GTBookingInst);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET(*this, FIX::Rule80A);
      FIELD_SET(*this, FIX::ForexReq);
      FIELD_SET(*this, FIX::SettlCurrency);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
      FIELD_SET(*this, FIX::FutSettDate2);
      FIELD_SET(*this, FIX::OrderQty2);
      FIELD_SET(*this, FIX::OpenClose);
      FIELD_SET(*this, FIX::CoveredOrUncovered);
      FIELD_SET(*this, FIX::CustomerOrFirm);
      FIELD_SET(*this, FIX::MaxShow);
      FIELD_SET(*this, FIX::PegDifference);
      FIELD_SET(*this, FIX::DiscretionInst);
      FIELD_SET(*this, FIX::DiscretionOffset);
      FIELD_SET(*this, FIX::ClearingFirm);
      FIELD_SET(*this, FIX::ClearingAccount);

    class NoAllocs : public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78, 79, FIX::message_order(
               79,
               80,
            0)){}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocShares);
    };

    class NoTradingSessions : public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386, 336, FIX::message_order(
               336,
            0)){}
      FIELD_SET(*this, FIX::TradingSessionID);
    };
    };
  };

  class ListStatus : public Message
  {
  public: 
    ListStatus() : Message(MsgType()) {}
    ListStatus(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("N"); }
    //
    ListStatus(
      const FIX::ListID& aListID,
      const FIX::ListStatusType& aListStatusType,
      const FIX::NoRpts& aNoRpts,
      const FIX::ListOrderStatus& aListOrderStatus,
      const FIX::RptSeq& aRptSeq,
      const FIX::TotNoOrders& aTotNoOrders,
      const FIX::NoOrders& aNoOrders )
    : Message(FIX::MsgType("N"))
    
    {
      set(aListID);
      set(aListStatusType);
      set(aNoRpts);
      set(aListOrderStatus);
      set(aRptSeq);
      set(aTotNoOrders);
      set(aNoOrders);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ListStatusType);
    FIELD_SET(*this, FIX::NoRpts);
    FIELD_SET(*this, FIX::ListOrderStatus);
    FIELD_SET(*this, FIX::RptSeq);
    FIELD_SET(*this, FIX::ListStatusText);
    FIELD_SET(*this, FIX::EncodedListStatusTextLen);
    FIELD_SET(*this, FIX::EncodedListStatusText);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::TotNoOrders);
    FIELD_SET(*this, FIX::NoOrders);

    class NoOrders : public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73, 6, FIX::message_order(
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
         0)){}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::CumQty);
      FIELD_SET(*this, FIX::OrdStatus);
      FIELD_SET(*this, FIX::LeavesQty);
      FIELD_SET(*this, FIX::CxlQty);
      FIELD_SET(*this, FIX::AvgPx);
      FIELD_SET(*this, FIX::OrdRejReason);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

  class ListExecute : public Message
  {
  public: 
    ListExecute() : Message(MsgType()) {}
    ListExecute(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("L"); }
    //
    ListExecute(
      const FIX::ListID& aListID,
      const FIX::TransactTime& aTransactTime )
    : Message(FIX::MsgType("L"))
    
    {
      set(aListID);
      set(aTransactTime);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class ListCancelRequest : public Message
  {
  public: 
    ListCancelRequest() : Message(MsgType()) {}
    ListCancelRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("K"); }
    //
    ListCancelRequest(
      const FIX::ListID& aListID,
      const FIX::TransactTime& aTransactTime )
    : Message(FIX::MsgType("K"))
    
    {
      set(aListID);
      set(aTransactTime);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class ListStatusRequest : public Message
  {
  public: 
    ListStatusRequest() : Message(MsgType()) {}
    ListStatusRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("M"); }
    //
    ListStatusRequest(
      const FIX::ListID& aListID )
    : Message(FIX::MsgType("M"))
    
    {
      set(aListID);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

  class BusinessMessageReject : public Message
  {
  public: 
    BusinessMessageReject() : Message(MsgType()) {}
    BusinessMessageReject(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("j"); }
    //
    BusinessMessageReject(
      const FIX::RefMsgType& aRefMsgType,
      const FIX::BusinessRejectReason& aBusinessRejectReason )
    : Message(FIX::MsgType("j"))
    
    {
      set(aRefMsgType);
      set(aBusinessRejectReason);
    }
  
    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::BusinessRejectRefID);
    FIELD_SET(*this, FIX::BusinessRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };
}

#endif //FIX42_MESSAGES_H
 