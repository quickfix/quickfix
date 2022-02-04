#ifndef FIX42_QUOTESTATUSREQUEST_H
#define FIX42_QUOTESTATUSREQUEST_H

#include "Message.h"

namespace FIX42
{

  class QuoteStatusRequest : public Message
  {
  public:
    QuoteStatusRequest() : Message(MsgType()) {}
    QuoteStatusRequest(const FIX::Message& m) : Message(m) {}
    QuoteStatusRequest(const Message& m) : Message(m) {}
    QuoteStatusRequest(const QuoteStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("a"); }

    QuoteStatusRequest(
      const FIX::Symbol& aSymbol )
    : Message(MsgType())
    {
      set(aSymbol);
    }

    FIELD_SET(*this, FIX::QuoteID);
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
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

}

#endif
