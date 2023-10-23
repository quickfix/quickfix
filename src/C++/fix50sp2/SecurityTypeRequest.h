#ifndef FIX50SP2_SECURITYTYPEREQUEST_H
#define FIX50SP2_SECURITYTYPEREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class SecurityTypeRequest : public Message
  {
  public:
    SecurityTypeRequest() : Message(MsgType()) {}
    SecurityTypeRequest(const FIX::Message& m) : Message(m) {}
    SecurityTypeRequest(const Message& m) : Message(m) {}
    SecurityTypeRequest(const SecurityTypeRequest&) = default;
    SecurityTypeRequest(SecurityTypeRequest&&) = default;
    SecurityTypeRequest& operator=(const SecurityTypeRequest&) = default;
    SecurityTypeRequest& operator=(SecurityTypeRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("v"); }

    SecurityTypeRequest(
      const FIX::SecurityReqID& aSecurityReqID )
    : Message(MsgType())
    {
      set(aSecurityReqID);
    }

    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::SecuritySubType);
  };

}

#endif
