#ifndef FIX50SP2_QUOTEACK_H
#define FIX50SP2_QUOTEACK_H

#include "Message.h"

namespace FIX50SP2
{

  class QuoteAck : public Message
  {
  public:
    QuoteAck() : Message(MsgType()) {}
    QuoteAck(const FIX::Message& m) : Message(m) {}
    QuoteAck(const Message& m) : Message(m) {}
    QuoteAck(const QuoteAck&) = default;
    QuoteAck(QuoteAck&&) = default;
    QuoteAck& operator=(const QuoteAck&) = default;
    QuoteAck& operator=(QuoteAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CW"); }

    QuoteAck(
      const FIX::QuoteAckStatus& aQuoteAckStatus )
    : Message(MsgType())
    {
      set(aQuoteAckStatus);
    }

    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::QuoteMsgID);
    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteType);
    FIELD_SET(*this, FIX::QuoteCancelType);
    FIELD_SET(*this, FIX::SecondaryQuoteID);
    FIELD_SET(*this, FIX::QuoteAckStatus);
    FIELD_SET(*this, FIX::QuoteRejectReason);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,2376,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartyRoleQualifier);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::NoQuoteAttributes);
    class NoQuoteAttributes: public FIX::Group
    {
    public:
    NoQuoteAttributes() : FIX::Group(2706,2707,FIX::message_order(2707,2708,0)) {}
      FIELD_SET(*this, FIX::QuoteAttributeType);
      FIELD_SET(*this, FIX::QuoteAttributeValue);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
