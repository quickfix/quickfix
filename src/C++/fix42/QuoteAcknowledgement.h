#ifndef FIX42_QUOTEACKNOWLEDGEMENT_H
#define FIX42_QUOTEACKNOWLEDGEMENT_H

#include "Message.h"

namespace FIX42
{

  class QuoteAcknowledgement : public Message
  {
  public:
    QuoteAcknowledgement() : Message(MsgType()) {}
    QuoteAcknowledgement(const FIX::Message& m) : Message(m) {}
    QuoteAcknowledgement(const Message& m) : Message(m) {}
    QuoteAcknowledgement(const QuoteAcknowledgement& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("b"); }

    QuoteAcknowledgement(
      const FIX::QuoteAckStatus& aQuoteAckStatus )
    : Message(MsgType())
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
    class NoQuoteSets: public FIX::Group
    {
    public:
    NoQuoteSets() : FIX::Group(296,302,FIX::message_order(302,311,312,309,305,310,313,314,315,316,317,436,435,308,306,362,363,307,364,365,304,295,0)) {}
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
      class NoQuoteEntries: public FIX::Group
      {
      public:
      NoQuoteEntries() : FIX::Group(295,299,FIX::message_order(299,55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,368,0)) {}
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

}

#endif
