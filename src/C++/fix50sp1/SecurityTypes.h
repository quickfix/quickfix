#ifndef FIX50SP1_SECURITYTYPES_H
#define FIX50SP1_SECURITYTYPES_H

#include "Message.h"

namespace FIX50SP1
{

  class SecurityTypes : public Message
  {
  public:
    SecurityTypes() : Message(MsgType()) {}
    SecurityTypes(const FIX::Message& m) : Message(m) {}
    SecurityTypes(const Message& m) : Message(m) {}
    SecurityTypes(const SecurityTypes& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("w"); }

    SecurityTypes(
      const FIX::SecurityReqID& aSecurityReqID,
      const FIX::SecurityResponseID& aSecurityResponseID,
      const FIX::SecurityResponseType& aSecurityResponseType )
    : Message(MsgType())
    {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityResponseType);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityResponseID);
    FIELD_SET(*this, FIX::SecurityResponseType);
    FIELD_SET(*this, FIX::TotNoSecurityTypes);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET(*this, FIX::NoSecurityTypes);
    class NoSecurityTypes: public FIX::Group
    {
    public:
    NoSecurityTypes() : FIX::Group(558,167,FIX::message_order(167,762,460,461,0)) {}
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::SecuritySubType);
      FIELD_SET(*this, FIX::Product);
      FIELD_SET(*this, FIX::CFICode);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
