#ifndef FIX41_REJECT_H
#define FIX41_REJECT_H

#include "Message.h"

namespace FIX41
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
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
