#ifndef FIXT11_REJECT_H
#define FIXT11_REJECT_H

#include "Message.h"

namespace FIXT11
{

  class Reject : public Message
  {
  public:
    Reject() : Message(MsgType()) {}
    Reject(const FIX::Message& m) : Message(m) {}
    Reject(const Message& m) : Message(m) {}
    Reject(const Reject&) = default;
    Reject(Reject&&) = default;
    Reject& operator=(const Reject&) = default;
    Reject& operator=(Reject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("3"); }

    Reject(
      const FIX::RefSeqNum& aRefSeqNum )
    : Message(MsgType())
    {
      set(aRefSeqNum);
    }

    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefTagID);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::RefApplVerID);
    FIELD_SET(*this, FIX::RefApplExtID);
    FIELD_SET(*this, FIX::RefCstmApplVerID);
    FIELD_SET(*this, FIX::SessionRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
