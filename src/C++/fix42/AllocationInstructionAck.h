#ifndef FIX42_ALLOCATIONINSTRUCTIONACK_H
#define FIX42_ALLOCATIONINSTRUCTIONACK_H

#include "Message.h"

namespace FIX42
{

  class AllocationInstructionAck : public Message
  {
  public:
    AllocationInstructionAck() : Message(MsgType()) {}
    AllocationInstructionAck(const FIX::Message& m) : Message(m) {}
    AllocationInstructionAck(const Message& m) : Message(m) {}
    AllocationInstructionAck(const AllocationInstructionAck&) = default;
    AllocationInstructionAck(AllocationInstructionAck&&) = default;
    AllocationInstructionAck& operator=(const AllocationInstructionAck&) = default;
    AllocationInstructionAck& operator=(AllocationInstructionAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("P"); }

    AllocationInstructionAck(
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
