#ifndef FIX42_SECURITYSTATUSREQUEST_H
#define FIX42_SECURITYSTATUSREQUEST_H

#include "Message.h"

namespace FIX42
{

  class SecurityStatusRequest : public Message
  {
  public:
    SecurityStatusRequest() : Message(MsgType()) {}
    SecurityStatusRequest(const FIX::Message& m) : Message(m) {}
    SecurityStatusRequest(const Message& m) : Message(m) {}
    SecurityStatusRequest(const SecurityStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("e"); }

    SecurityStatusRequest(
      const FIX::SecurityStatusReqID& aSecurityStatusReqID,
      const FIX::Symbol& aSymbol,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aSecurityStatusReqID);
      set(aSymbol);
      set(aSubscriptionRequestType);
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
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::TradingSessionID);
  };

}

#endif
