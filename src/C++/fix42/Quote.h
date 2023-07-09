#ifndef FIX42_QUOTE_H
#define FIX42_QUOTE_H

#include "Message.h"

namespace FIX42
{

  class Quote : public Message
  {
  public:
    Quote() : Message(MsgType()) {}
    Quote(const FIX::Message& m) : Message(m) {}
    Quote(const Message& m) : Message(m) {}
    Quote(const Quote&) = default;
    Quote(Quote&&) = default;
    Quote& operator=(const Quote&) = default;
    Quote& operator=(Quote&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("S"); }

    Quote(
      const FIX::QuoteID& aQuoteID,
      const FIX::Symbol& aSymbol )
    : Message(MsgType())
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

}

#endif
