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

#ifndef FIX40_MESSAGES_H
#define FIX40_MESSAGES_H

#include "Message.h"
#include "Group.h"

namespace FIX40
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
    FIELD_SET(*this, FIX::TargetSubID);
    FIELD_SET(*this, FIX::OnBehalfOfSubID);
    FIELD_SET(*this, FIX::DeliverToSubID);
    FIELD_SET(*this, FIX::PossDupFlag);
    FIELD_SET(*this, FIX::PossResend);
    FIELD_SET(*this, FIX::SendingTime);
    FIELD_SET(*this, FIX::OrigSendingTime);
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
      FIX::BeginString("FIX.4.0"),msgType ) {}   

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
    FIELD_SET(m_header, FIX::TargetSubID);
    FIELD_SET(m_header, FIX::OnBehalfOfSubID);
    FIELD_SET(m_header, FIX::DeliverToSubID);
    FIELD_SET(m_header, FIX::PossDupFlag);
    FIELD_SET(m_header, FIX::PossResend);
    FIELD_SET(m_header, FIX::SendingTime);
    FIELD_SET(m_header, FIX::OrigSendingTime);
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
    FIELD_SET(*this, FIX::Text);
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
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::AdvSide);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
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
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::IOIShares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::IOIQltyInd);
    FIELD_SET(*this, FIX::IOIOthSvc);
    FIELD_SET(*this, FIX::IOINaturalFlag);
    FIELD_SET(*this, FIX::IOIQualifier);
    FIELD_SET(*this, FIX::Text);
  };

  class News : public Message
  {
  public: 
    News() : Message(MsgType()) {}
    News(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }
  
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Urgency);
    FIELD_SET(*this, FIX::RelatdSym);

    class LinesOfText : public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33, 58, FIX::message_order(
            58,
         0)){}
      FIELD_SET(*this, FIX::Text);
    };
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
      const FIX::EmailType& aEmailType )
    : Message(FIX::MsgType("C"))
    
    {
      set(aEmailType);
    }
  
    FIELD_SET(*this, FIX::EmailType);
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::RelatdSym);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);

    class LinesOfText : public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33, 58, FIX::message_order(
            58,
         0)){}
      FIELD_SET(*this, FIX::Text);
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
      const FIX::Symbol& aSymbol )
    : Message(FIX::MsgType("R"))
    
    {
      set(aQuoteReqID);
      set(aSymbol);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::PrevClosePx);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
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
      const FIX::Symbol& aSymbol,
      const FIX::BidPx& aBidPx )
    : Message(FIX::MsgType("S"))
    
    {
      set(aQuoteID);
      set(aSymbol);
      set(aBidPx);
    }
  
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::BidPx);
    FIELD_SET(*this, FIX::OfferPx);
    FIELD_SET(*this, FIX::BidSize);
    FIELD_SET(*this, FIX::OfferSize);
    FIELD_SET(*this, FIX::ValidUntilTime);
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
      const FIX::OrderQty& aOrderQty,
      const FIX::OrdType& aOrdType )
    : Message(FIX::MsgType("D"))
    
    {
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aOrdType);
    }
  
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::ProcessCode);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::PrevClosePx);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::LocateReqd);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::IOIid);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
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
      const FIX::OrdStatus& aOrdStatus,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::LastShares& aLastShares,
      const FIX::LastPx& aLastPx,
      const FIX::CumQty& aCumQty,
      const FIX::AvgPx& aAvgPx )
    : Message(FIX::MsgType("8"))
    
    {
      set(aOrderID);
      set(aExecID);
      set(aExecTransType);
      set(aOrdStatus);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aLastShares);
      set(aLastPx);
      set(aCumQty);
      set(aAvgPx);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::ExecTransType);
    FIELD_SET(*this, FIX::ExecRefID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::OrdRejReason);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::LastCapacity);
    FIELD_SET(*this, FIX::CumQty);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ReportToExch);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);

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
    FIELD_SET(*this, FIX::NetMoney);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
  };

  class DontKnowTrade : public Message
  {
  public: 
    DontKnowTrade() : Message(MsgType()) {}
    DontKnowTrade(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Q"); }
    //
    DontKnowTrade(
      const FIX::DKReason& aDKReason,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::LastShares& aLastShares,
      const FIX::LastPx& aLastPx )
    : Message(FIX::MsgType("Q"))
    
    {
      set(aDKReason);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aLastShares);
      set(aLastPx);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::DKReason);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::Text);
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
      const FIX::OrderQty& aOrderQty,
      const FIX::OrdType& aOrdType )
    : Message(FIX::MsgType("G"))
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aOrdType);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
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
      const FIX::CxlType& aCxlType,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty )
    : Message(FIX::MsgType("F"))
    
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aCxlType);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
    }
  
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlType);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::Text);
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
      const FIX::ClOrdID& aClOrdID )
    : Message(FIX::MsgType("9"))
    
    {
      set(aOrderID);
      set(aClOrdID);
    }
  
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
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
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
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
      const FIX::Side& aSide,
      const FIX::Symbol& aSymbol,
      const FIX::Shares& aShares,
      const FIX::AvgPx& aAvgPx,
      const FIX::TradeDate& aTradeDate )
    : Message(FIX::MsgType("J"))
    
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aSide);
      set(aSymbol);
      set(aShares);
      set(aAvgPx);
      set(aTradeDate);
    }
  
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::AllocTransType);
    FIELD_SET(*this, FIX::RefAllocID);

    class NoOrders : public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73, 11, FIX::message_order(
            11,
            37,
            66,
            105,
         0)){}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::WaveNo);
    };

    class NoExecs : public FIX::Group
    {
    public:
    NoExecs() : FIX::Group(124, 17, FIX::message_order(
            17,
            32,
            31,
            30,
         0)){}
      FIELD_SET(*this, FIX::ExecID);
      FIELD_SET(*this, FIX::LastShares);
      FIELD_SET(*this, FIX::LastPx);
      FIELD_SET(*this, FIX::LastMkt);
    };
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::AvgPrxPrecision);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::NetMoney);

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
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::Text);

    class NoAllocs : public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78, 12, FIX::message_order(
            79,
            80,
            81,
            76,
            109,
            12,
            13,
            
               92,
               86,
            
         0)){}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocShares);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET(*this, FIX::ExecBroker);
      FIELD_SET(*this, FIX::ClientID);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);

    class NoDlvyInst : public FIX::Group
    {
    public:
    NoDlvyInst() : FIX::Group(85, 86, FIX::message_order(
               92,
               86,
            0)){}
      FIELD_SET(*this, FIX::BrokerOfCredit);
      FIELD_SET(*this, FIX::DlvyInst);
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
      const FIX::ListSeqNo& aListSeqNo,
      const FIX::ListNoOrds& aListNoOrds,
      const FIX::ClOrdID& aClOrdID,
      const FIX::HandlInst& aHandlInst,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::OrdType& aOrdType )
    : Message(FIX::MsgType("E"))
    
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
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::ListSeqNo);
    FIELD_SET(*this, FIX::ListNoOrds);
    FIELD_SET(*this, FIX::ListExecInst);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::ProcessCode);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::PrevClosePx);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::LocateReqd);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
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
      const FIX::NoRpts& aNoRpts,
      const FIX::RptSeq& aRptSeq )
    : Message(FIX::MsgType("N"))
    
    {
      set(aListID);
      set(aNoRpts);
      set(aRptSeq);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::NoRpts);
    FIELD_SET(*this, FIX::RptSeq);

    class NoOrders : public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73, 6, FIX::message_order(
            11,
            14,
            84,
            6,
         0)){}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::CumQty);
      FIELD_SET(*this, FIX::CxlQty);
      FIELD_SET(*this, FIX::AvgPx);
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
      const FIX::ListID& aListID )
    : Message(FIX::MsgType("L"))
    
    {
      set(aListID);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
  };

  class ListCancelRequest : public Message
  {
  public: 
    ListCancelRequest() : Message(MsgType()) {}
    ListCancelRequest(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("K"); }
    //
    ListCancelRequest(
      const FIX::ListID& aListID )
    : Message(FIX::MsgType("K"))
    
    {
      set(aListID);
    }
  
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
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
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
  };
}

#endif //FIX40_MESSAGES_H
 