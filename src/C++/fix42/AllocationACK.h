#ifndef FIX42_ALLOCATIONACK_H
#define FIX42_ALLOCATIONACK_H

#include "Message.h"

namespace FIX42
{

  class AllocationACK : public Message
  {
  public:
    AllocationACK() : Message(MsgType()) {}
    AllocationACK(const FIX::Message& m) : Message(m) {}
    AllocationACK(const Message& m) : Message(m) {}
    AllocationACK(const AllocationACK& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("P"); }

    AllocationACK(
      const FIX::AllocID& aAllocID,
      const FIX::TradeDate& aTradeDate,
      const FIX::AllocStatus& aAllocStatus )
    : Message(MsgType())
    {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }

    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
