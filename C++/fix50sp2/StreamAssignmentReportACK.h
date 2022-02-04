#ifndef FIX50SP2_STREAMASSIGNMENTREPORTACK_H
#define FIX50SP2_STREAMASSIGNMENTREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class StreamAssignmentReportACK : public Message
  {
  public:
    StreamAssignmentReportACK() : Message(MsgType()) {}
    StreamAssignmentReportACK(const FIX::Message& m) : Message(m) {}
    StreamAssignmentReportACK(const Message& m) : Message(m) {}
    StreamAssignmentReportACK(const StreamAssignmentReportACK& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("CE"); }

    StreamAssignmentReportACK(
      const FIX::StreamAsgnAckType& aStreamAsgnAckType,
      const FIX::StreamAsgnRptID& aStreamAsgnRptID )
    : Message(MsgType())
    {
      set(aStreamAsgnAckType);
      set(aStreamAsgnRptID);
    }

    FIELD_SET(*this, FIX::StreamAsgnAckType);
    FIELD_SET(*this, FIX::StreamAsgnRptID);
    FIELD_SET(*this, FIX::StreamAsgnRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
