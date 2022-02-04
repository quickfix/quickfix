#ifndef FIX43_BUSINESSMESSAGEREJECT_H
#define FIX43_BUSINESSMESSAGEREJECT_H

#include "Message.h"

namespace FIX43
{

  class BusinessMessageReject : public Message
  {
  public:
    BusinessMessageReject() : Message(MsgType()) {}
    BusinessMessageReject(const FIX::Message& m) : Message(m) {}
    BusinessMessageReject(const Message& m) : Message(m) {}
    BusinessMessageReject(const BusinessMessageReject& m) : Message(m) {}
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
    FIELD_SET(*this, FIX::BusinessRejectRefID);
    FIELD_SET(*this, FIX::BusinessRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
