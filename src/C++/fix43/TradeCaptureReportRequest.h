#ifndef FIX43_TRADECAPTUREREPORTREQUEST_H
#define FIX43_TRADECAPTUREREPORTREQUEST_H

#include "Message.h"

namespace FIX43
{

  class TradeCaptureReportRequest : public Message
  {
  public:
    TradeCaptureReportRequest() : Message(MsgType()) {}
    TradeCaptureReportRequest(const FIX::Message& m) : Message(m) {}
    TradeCaptureReportRequest(const Message& m) : Message(m) {}
    TradeCaptureReportRequest(const TradeCaptureReportRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AD"); }

    TradeCaptureReportRequest(
      const FIX::TradeRequestID& aTradeRequestID,
      const FIX::TradeRequestType& aTradeRequestType )
    : Message(MsgType())
    {
      set(aTradeRequestID);
      set(aTradeRequestType);
    }

    FIELD_SET(*this, FIX::TradeRequestID);
    FIELD_SET(*this, FIX::TradeRequestType);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,523,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartySubID);
    };
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::SecurityIDSource);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::CFICode);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDate);
    FIELD_SET(*this, FIX::CouponPaymentDate);
    FIELD_SET(*this, FIX::IssueDate);
    FIELD_SET(*this, FIX::RepoCollateralSecurityType);
    FIELD_SET(*this, FIX::RepurchaseTerm);
    FIELD_SET(*this, FIX::RepurchaseRate);
    FIELD_SET(*this, FIX::Factor);
    FIELD_SET(*this, FIX::CreditRating);
    FIELD_SET(*this, FIX::InstrRegistry);
    FIELD_SET(*this, FIX::CountryOfIssue);
    FIELD_SET(*this, FIX::StateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::LocaleOfIssue);
    FIELD_SET(*this, FIX::RedemptionDate);
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
    FIELD_SET(*this, FIX::NoSecurityAltID);
    class NoSecurityAltID: public FIX::Group
    {
    public:
    NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
      FIELD_SET(*this, FIX::SecurityAltID);
      FIELD_SET(*this, FIX::SecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TradeInputSource);
    FIELD_SET(*this, FIX::TradeInputDevice);
    FIELD_SET(*this, FIX::NoDates);
    class NoDates: public FIX::Group
    {
    public:
    NoDates() : FIX::Group(580,75,FIX::message_order(75,60,0)) {}
      FIELD_SET(*this, FIX::TradeDate);
      FIELD_SET(*this, FIX::TransactTime);
    };
  };

}

#endif
