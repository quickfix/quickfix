#ifndef FIX50SP1_BUSINESSMESSAGEREJECT_H
#define FIX50SP1_BUSINESSMESSAGEREJECT_H

#include "Message.h"

namespace FIX50SP1
{

  class BusinessMessageReject : public Message
  {
  public:
    BusinessMessageReject() : Message(MsgType()) {}
    BusinessMessageReject(const FIX::Message& m) : Message(m) {}
    BusinessMessageReject(const Message& m) : Message(m) {}
    BusinessMessageReject(const BusinessMessageReject&) = default;
    BusinessMessageReject(BusinessMessageReject&&) = default;
    BusinessMessageReject& operator=(const BusinessMessageReject&) = default;
    BusinessMessageReject& operator=(BusinessMessageReject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("j"); }

    BusinessMessageReject(
      const FIX::RefMsgType& aRefMsgType,
      const FIX::BusinessRejectReason& aBusinessRejectReason )
    : Message(MsgType())
    {
      set(aRefMsgType);
      set(aBusinessRejectReason);
    }

    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::RefApplVerID);
    FIELD_SET(*this, FIX::RefApplExtID);
    FIELD_SET(*this, FIX::RefCstmApplVerID);
    FIELD_SET(*this, FIX::BusinessRejectRefID);
    FIELD_SET(*this, FIX::BusinessRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
