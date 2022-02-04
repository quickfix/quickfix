#ifndef FIX42_QUOTECANCEL_H
#define FIX42_QUOTECANCEL_H

#include "Message.h"

namespace FIX42
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
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::NoQuoteEntries);
    class NoQuoteEntries: public FIX::Group
    {
    public:
    NoQuoteEntries() : FIX::Group(295,55,FIX::message_order(55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,311,0)) {}
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
      FIELD_SET(*this, FIX::UnderlyingSymbol);
    };
  };

}

#endif
