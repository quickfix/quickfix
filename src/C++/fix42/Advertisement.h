#ifndef FIX42_ADVERTISEMENT_H
#define FIX42_ADVERTISEMENT_H

#include "Message.h"

namespace FIX42
{

  class Advertisement : public Message
  {
  public:
    Advertisement() : Message(MsgType()) {}
    Advertisement(const FIX::Message& m) : Message(m) {}
    Advertisement(const Message& m) : Message(m) {}
    Advertisement(const Advertisement& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("7"); }

    Advertisement(
      const FIX::AdvId& aAdvId,
      const FIX::AdvTransType& aAdvTransType,
      const FIX::Symbol& aSymbol,
      const FIX::AdvSide& aAdvSide,
      const FIX::Shares& aShares )
    : Message(MsgType())
    {
      set(aAdvId);
      set(aAdvTransType);
      set(aSymbol);
      set(aAdvSide);
      set(aShares);
    }

    FIELD_SET(*this, FIX::AdvId);
    FIELD_SET(*this, FIX::AdvTransType);
    FIELD_SET(*this, FIX::AdvRefID);
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
    FIELD_SET(*this, FIX::AdvSide);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::URLLink);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

}

#endif
