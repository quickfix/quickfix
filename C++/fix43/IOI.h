#ifndef FIX43_IOI_H
#define FIX43_IOI_H

#include "Message.h"

namespace FIX43
{

  class IOI : public Message
  {
  public:
    IOI() : Message(MsgType()) {}
    IOI(const FIX::Message& m) : Message(m) {}
    IOI(const Message& m) : Message(m) {}
    IOI(const IOI& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("6"); }

    IOI(
      const FIX::IOIid& aIOIid,
      const FIX::IOITransType& aIOITransType,
      const FIX::Side& aSide,
      const FIX::IOIQty& aIOIQty )
    : Message(MsgType())
    {
      set(aIOIid);
      set(aIOITransType);
      set(aSide);
      set(aIOIQty);
    }

    FIELD_SET(*this, FIX::IOIid);
    FIELD_SET(*this, FIX::IOITransType);
    FIELD_SET(*this, FIX::IOIRefID);
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
    FIELD_SET(*this, FIX::QuantityType);
    FIELD_SET(*this, FIX::IOIQty);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::IOIQltyInd);
    FIELD_SET(*this, FIX::IOINaturalFlag);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::URLLink);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::Benchmark);
    FIELD_SET(*this, FIX::NoIOIQualifiers);
    class NoIOIQualifiers: public FIX::Group
    {
    public:
    NoIOIQualifiers() : FIX::Group(199,104,FIX::message_order(104,0)) {}
      FIELD_SET(*this, FIX::IOIQualifier);
    };
    FIELD_SET(*this, FIX::NoRoutingIDs);
    class NoRoutingIDs: public FIX::Group
    {
    public:
    NoRoutingIDs() : FIX::Group(215,216,FIX::message_order(216,217,0)) {}
      FIELD_SET(*this, FIX::RoutingType);
      FIELD_SET(*this, FIX::RoutingID);
    };
  };

}

#endif
