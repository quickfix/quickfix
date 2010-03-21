#ifndef FIX50SP2_APPLICATIONMESSAGEREPORT_H
#define FIX50SP2_APPLICATIONMESSAGEREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class ApplicationMessageReport : public Message
  {
  public:
    ApplicationMessageReport() : Message(MsgType()) {}
    ApplicationMessageReport(const FIX::Message& m) : Message(m) {}
    ApplicationMessageReport(const Message& m) : Message(m) {}
    ApplicationMessageReport(const ApplicationMessageReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BY"); }

    ApplicationMessageReport(
      const FIX::ApplReportID& aApplReportID,
      const FIX::ApplReportType& aApplReportType )
    : Message(MsgType())
    {
      set(aApplReportID);
      set(aApplReportType);
    }

    FIELD_SET(*this, FIX::ApplReportID);
    FIELD_SET(*this, FIX::ApplReportType);
    FIELD_SET(*this, FIX::NoApplIDs);
    class NoApplIDs: public FIX::Group
    {
    public:
    NoApplIDs() : FIX::Group(1351,1355,FIX::message_order(1355,1399,1357,0)) {}
      FIELD_SET(*this, FIX::RefApplID);
      FIELD_SET(*this, FIX::ApplNewSeqNum);
      FIELD_SET(*this, FIX::RefApplLastSeqNum);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::ApplReqID);
  };

}

#endif
