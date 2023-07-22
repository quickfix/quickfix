#ifndef FIX50SP2_PAYMANAGEMENTREQUESTACK_H
#define FIX50SP2_PAYMANAGEMENTREQUESTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class PayManagementRequestAck : public Message
  {
  public:
    PayManagementRequestAck() : Message(MsgType()) {}
    PayManagementRequestAck(const FIX::Message& m) : Message(m) {}
    PayManagementRequestAck(const Message& m) : Message(m) {}
    PayManagementRequestAck(const PayManagementRequestAck&) = default;
    PayManagementRequestAck(PayManagementRequestAck&&) = default;
    PayManagementRequestAck& operator=(const PayManagementRequestAck&) = default;
    PayManagementRequestAck& operator=(PayManagementRequestAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DZ"); }

    PayManagementRequestAck(
      const FIX::PayRequestID& aPayRequestID,
      const FIX::PayRequestStatus& aPayRequestStatus )
    : Message(MsgType())
    {
      set(aPayRequestID);
      set(aPayRequestStatus);
    }

    FIELD_SET(*this, FIX::PayRequestID);
    FIELD_SET(*this, FIX::PayRequestStatus);
  };

}

#endif
