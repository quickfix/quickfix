#ifndef FIX50SP2_COLLATERALREPORTACK_H
#define FIX50SP2_COLLATERALREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class CollateralReportAck : public Message
  {
  public:
    CollateralReportAck() : Message(MsgType()) {}
    CollateralReportAck(const FIX::Message& m) : Message(m) {}
    CollateralReportAck(const Message& m) : Message(m) {}
    CollateralReportAck(const CollateralReportAck&) = default;
    CollateralReportAck(CollateralReportAck&&) = default;
    CollateralReportAck& operator=(const CollateralReportAck&) = default;
    CollateralReportAck& operator=(CollateralReportAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DQ"); }

    CollateralReportAck(
      const FIX::CollRptID& aCollRptID,
      const FIX::CollRptStatus& aCollRptStatus )
    : Message(MsgType())
    {
      set(aCollRptID);
      set(aCollRptStatus);
    }

    FIELD_SET(*this, FIX::CollRptID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::CollRptStatus);
    FIELD_SET(*this, FIX::CollRptRejectReason);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,2376,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartyRoleQualifier);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
