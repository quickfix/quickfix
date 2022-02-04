#ifndef FIX43_MASSQUOTE_H
#define FIX43_MASSQUOTE_H

#include "Message.h"

namespace FIX43
{

  class MassQuote : public Message
  {
  public:
    MassQuote() : Message(MsgType()) {}
    MassQuote(const FIX::Message& m) : Message(m) {}
    MassQuote(const Message& m) : Message(m) {}
    MassQuote(const MassQuote& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("i"); }

    MassQuote(
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
    FIELD_SET(*this, FIX::DefBidSize);
    FIELD_SET(*this, FIX::DefOfferSize);
    FIELD_SET(*this, FIX::NoQuoteSets);
    class NoQuoteSets: public FIX::Group
    {
    public:
    NoQuoteSets() : FIX::Group(296,302,FIX::message_order(302,311,312,309,305,457,462,463,310,313,542,315,241,242,243,244,245,246,256,595,592,593,594,247,316,317,436,435,308,306,362,363,307,364,365,367,304,295,0)) {}
      FIELD_SET(*this, FIX::QuoteSetID);
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
      FIELD_SET(*this, FIX::UnderlyingProduct);
      FIELD_SET(*this, FIX::UnderlyingCFICode);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDate);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
      FIELD_SET(*this, FIX::UnderlyingIssueDate);
      FIELD_SET(*this, FIX::UnderlyingRepoCollateralSecurityType);
      FIELD_SET(*this, FIX::UnderlyingRepurchaseTerm);
      FIELD_SET(*this, FIX::UnderlyingRepurchaseRate);
      FIELD_SET(*this, FIX::UnderlyingFactor);
      FIELD_SET(*this, FIX::UnderlyingCreditRating);
      FIELD_SET(*this, FIX::UnderlyingInstrRegistry);
      FIELD_SET(*this, FIX::UnderlyingCountryOfIssue);
      FIELD_SET(*this, FIX::UnderlyingStateOrProvinceOfIssue);
      FIELD_SET(*this, FIX::UnderlyingLocaleOfIssue);
      FIELD_SET(*this, FIX::UnderlyingRedemptionDate);
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
      FIELD_SET(*this, FIX::NoUnderlyingSecurityAltID);
      class NoUnderlyingSecurityAltID: public FIX::Group
      {
      public:
      NoUnderlyingSecurityAltID() : FIX::Group(457,458,FIX::message_order(458,459,0)) {}
        FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
        FIELD_SET(*this, FIX::UnderlyingSecurityAltIDSource);
      };
      FIELD_SET(*this, FIX::QuoteSetValidUntilTime);
      FIELD_SET(*this, FIX::TotQuoteEntries);
      FIELD_SET(*this, FIX::NoQuoteEntries);
      class NoQuoteEntries: public FIX::Group
      {
      public:
      NoQuoteEntries() : FIX::Group(295,299,FIX::message_order(299,55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,132,133,134,135,62,188,190,189,191,631,632,633,634,60,336,625,64,40,193,192,642,643,15,0)) {}
        FIELD_SET(*this, FIX::QuoteEntryID);
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
        FIELD_SET(*this, FIX::BidSize);
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
        FIELD_SET(*this, FIX::TradingSessionID);
        FIELD_SET(*this, FIX::TradingSessionSubID);
        FIELD_SET(*this, FIX::FutSettDate);
        FIELD_SET(*this, FIX::OrdType);
        FIELD_SET(*this, FIX::FutSettDate2);
        FIELD_SET(*this, FIX::OrderQty2);
        FIELD_SET(*this, FIX::BidForwardPoints2);
        FIELD_SET(*this, FIX::OfferForwardPoints2);
        FIELD_SET(*this, FIX::Currency);
      };
    };
  };

}

#endif
