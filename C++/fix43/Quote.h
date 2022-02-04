#ifndef FIX43_QUOTE_H
#define FIX43_QUOTE_H

#include "Message.h"

namespace FIX43
{

  class Quote : public Message
  {
  public:
    Quote() : Message(MsgType()) {}
    Quote(const FIX::Message& m) : Message(m) {}
    Quote(const Message& m) : Message(m) {}
    Quote(const Quote& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("S"); }

    Quote(
      const FIX::QuoteID& aQuoteID )
    : Message(MsgType())
    {
      set(aQuoteID);
    }

    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteType);
    FIELD_SET(*this, FIX::QuoteResponseLevel);
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
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AccountType);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
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
    FIELD_SET(*this, FIX::BidPx);
    FIELD_SET(*this, FIX::OfferPx);
    FIELD_SET(*this, FIX::MktBidPx);
    FIELD_SET(*this, FIX::MktOfferPx);
    FIELD_SET(*this, FIX::MinBidSize);
    FIELD_SET(*this, FIX::BidSize);
    FIELD_SET(*this, FIX::MinOfferSize);
    FIELD_SET(*this, FIX::OfferSize);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::BidSpotRate);
    FIELD_SET(*this, FIX::OfferSpotRate);
    FIELD_SET(*this, FIX::BidForwardPoints);
    FIELD_SET(*this, FIX::OfferForwardPoints);
    FIELD_SET(*this, FIX::MidPx);
    FIELD_SET(*this, FIX::BidYield);
    FIELD_SET(*this, FIX::MidYield);
    FIELD_SET(*this, FIX::OfferYield);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::BidForwardPoints2);
    FIELD_SET(*this, FIX::OfferForwardPoints2);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::SettlCurrBidFxRate);
    FIELD_SET(*this, FIX::SettlCurrOfferFxRate);
    FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::CustOrderCapacity);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
