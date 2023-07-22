#ifndef FIX50SP2_ALLOCATIONINSTRUCTIONALERTREQUESTACK_H
#define FIX50SP2_ALLOCATIONINSTRUCTIONALERTREQUESTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class AllocationInstructionAlertRequestAck : public Message
  {
  public:
    AllocationInstructionAlertRequestAck() : Message(MsgType()) {}
    AllocationInstructionAlertRequestAck(const FIX::Message& m) : Message(m) {}
    AllocationInstructionAlertRequestAck(const Message& m) : Message(m) {}
    AllocationInstructionAlertRequestAck(const AllocationInstructionAlertRequestAck&) = default;
    AllocationInstructionAlertRequestAck(AllocationInstructionAlertRequestAck&&) = default;
    AllocationInstructionAlertRequestAck& operator=(const AllocationInstructionAlertRequestAck&) = default;
    AllocationInstructionAlertRequestAck& operator=(AllocationInstructionAlertRequestAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DV"); }

    AllocationInstructionAlertRequestAck(
      const FIX::AllocRequestID& aAllocRequestID,
      const FIX::AllocRequestStatus& aAllocRequestStatus )
    : Message(MsgType())
    {
      set(aAllocRequestID);
      set(aAllocRequestStatus);
    }

    FIELD_SET(*this, FIX::AllocRequestID);
    FIELD_SET(*this, FIX::AllocRequestStatus);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
  };

}

#endif
