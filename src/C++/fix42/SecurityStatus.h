#ifndef FIX42_SECURITYSTATUS_H
#define FIX42_SECURITYSTATUS_H

#include "Message.h"

namespace FIX42
{

  class SecurityStatus : public Message
  {
  public:
    SecurityStatus() : Message(MsgType()) {}
    SecurityStatus(const FIX::Message& m) : Message(m) {}
    SecurityStatus(const Message& m) : Message(m) {}
    SecurityStatus(const SecurityStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("f"); }

    SecurityStatus(
      const FIX::Symbol& aSymbol )
    : Message(MsgType())
    {
      set(aSymbol);
    }

    FIELD_SET(*this, FIX::SecurityStatusReqID);
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
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::SecurityTradingStatus);
    FIELD_SET(*this, FIX::FinancialStatus);
    FIELD_SET(*this, FIX::CorporateAction);
    FIELD_SET(*this, FIX::HaltReasonChar);
    FIELD_SET(*this, FIX::InViewOfCommon);
    FIELD_SET(*this, FIX::DueToRelated);
    FIELD_SET(*this, FIX::BuyVolume);
    FIELD_SET(*this, FIX::SellVolume);
    FIELD_SET(*this, FIX::HighPx);
    FIELD_SET(*this, FIX::LowPx);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Adjustment);
  };

}

#endif
