#ifndef FIX43_QUOTECANCEL_H
#define FIX43_QUOTECANCEL_H

#include "Message.h"

namespace FIX43
{

  class QuoteCancel : public Message
  {
  public:
    QuoteCancel() : Message(MsgType()) {}
    QuoteCancel(const FIX::Message& m) : Message(m) {}
    QuoteCancel(const Message& m) : Message(m) {}
    QuoteCancel(const QuoteCancel& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Z"); }

    QuoteCancel(
      const FIX::QuoteID& aQuoteID,
      const FIX::QuoteCancelType& aQuoteCancelType )
    : Message(MsgType())
    {
      set(aQuoteID);
      set(aQuoteCancelType);
    }

    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteCancelType);
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
    FIELD_SET(*this, FIX::NoQuoteEntries);
    class NoQuoteEntries: public FIX::Group
    {
    public:
    NoQuoteEntries() : FIX::Group(295,55,FIX::message_order(55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,0)) {}
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
  };

}

#endif
