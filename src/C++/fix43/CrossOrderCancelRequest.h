#ifndef FIX43_CROSSORDERCANCELREQUEST_H
#define FIX43_CROSSORDERCANCELREQUEST_H

#include "Message.h"

namespace FIX43
{

  class CrossOrderCancelRequest : public Message
  {
  public:
    CrossOrderCancelRequest() : Message(MsgType()) {}
    CrossOrderCancelRequest(const FIX::Message& m) : Message(m) {}
    CrossOrderCancelRequest(const Message& m) : Message(m) {}
    CrossOrderCancelRequest(const CrossOrderCancelRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("u"); }

    CrossOrderCancelRequest(
      const FIX::CrossID& aCrossID,
      const FIX::OrigCrossID& aOrigCrossID,
      const FIX::CrossType& aCrossType,
      const FIX::CrossPrioritization& aCrossPrioritization,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aCrossID);
      set(aOrigCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::CrossID);
    FIELD_SET(*this, FIX::OrigCrossID);
    FIELD_SET(*this, FIX::CrossType);
    FIELD_SET(*this, FIX::CrossPrioritization);
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
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::NoSides);
    class NoSides: public FIX::Group
    {
    public:
    NoSides() : FIX::Group(552,54,FIX::message_order(54,41,11,526,583,586,453,229,38,152,516,468,469,376,58,354,355,0)) {}
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::OrigClOrdID);
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET(*this, FIX::ClOrdLinkID);
      FIELD_SET(*this, FIX::OrigOrdModTime);
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
      FIELD_SET(*this, FIX::TradeOriginationDate);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::OrderPercent);
      FIELD_SET(*this, FIX::RoundingDirection);
      FIELD_SET(*this, FIX::RoundingModulus);
      FIELD_SET(*this, FIX::ComplianceID);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
