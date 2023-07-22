#ifndef FIX50SP2_PAYMANAGEMENTREPORTACK_H
#define FIX50SP2_PAYMANAGEMENTREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class PayManagementReportAck : public Message
  {
  public:
    PayManagementReportAck() : Message(MsgType()) {}
    PayManagementReportAck(const FIX::Message& m) : Message(m) {}
    PayManagementReportAck(const Message& m) : Message(m) {}
    PayManagementReportAck(const PayManagementReportAck&) = default;
    PayManagementReportAck(PayManagementReportAck&&) = default;
    PayManagementReportAck& operator=(const PayManagementReportAck&) = default;
    PayManagementReportAck& operator=(PayManagementReportAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("EB"); }

    PayManagementReportAck(
      const FIX::PayReportID& aPayReportID,
      const FIX::PayReportStatus& aPayReportStatus )
    : Message(MsgType())
    {
      set(aPayReportID);
      set(aPayReportStatus);
    }

    FIELD_SET(*this, FIX::PayReportID);
    FIELD_SET(*this, FIX::PayReportStatus);
    FIELD_SET(*this, FIX::PayDisputeReason);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
  };

}

#endif
