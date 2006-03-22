#ifndef FIX43_MARKETDATAREQUEST_H
#define FIX43_MARKETDATAREQUEST_H

#include "Message.h"

namespace FIX43
{

  class MarketDataRequest : public Message
  {
  public:
    MarketDataRequest() : Message(MsgType()) {}
    MarketDataRequest(const FIX::Message& m) : Message(m) {}
    MarketDataRequest(const Message& m) : Message(m) {}
    MarketDataRequest(const MarketDataRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("V"); }

    MarketDataRequest(
      const FIX::MDReqID& aMDReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType,
      const FIX::MarketDepth& aMarketDepth )
    : Message(MsgType())
    {
      set(aMDReqID);
      set(aSubscriptionRequestType);
      set(aMarketDepth);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketDepth);
    FIELD_SET(*this, FIX::MDUpdateType);
    FIELD_SET(*this, FIX::AggregatedBook);
    FIELD_SET(*this, FIX::OpenCloseSettleFlag);
    FIELD_SET(*this, FIX::Scope);
    FIELD_SET(*this, FIX::MDImplicitDelete);
    FIELD_SET(*this, FIX::NoMDEntryTypes);
    class NoMDEntryTypes: public FIX::Group
    {
    public:
    NoMDEntryTypes() : FIX::Group(267,269,FIX::message_order(269,0)) {}
      FIELD_SET(*this, FIX::MDEntryType);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,0)) {}
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
    };
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,0)) {}
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
    };
  };

}

#endif
