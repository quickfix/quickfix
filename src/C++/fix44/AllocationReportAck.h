#ifndef FIX44_ALLOCATIONREPORTACK_H
#define FIX44_ALLOCATIONREPORTACK_H

#include "Message.h"

namespace FIX44
{

  class AllocationReportAck : public Message
  {
  public:
    AllocationReportAck() : Message(MsgType()) {}
    AllocationReportAck(const FIX::Message& m) : Message(m) {}
    AllocationReportAck(const Message& m) : Message(m) {}
    AllocationReportAck(const AllocationReportAck&) = default;
    AllocationReportAck(AllocationReportAck&&) = default;
    AllocationReportAck& operator=(const AllocationReportAck&) = default;
    AllocationReportAck& operator=(AllocationReportAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AT"); }

    AllocationReportAck(
      const FIX::AllocReportID& aAllocReportID,
      const FIX::AllocID& aAllocID,
      const FIX::TransactTime& aTransactTime,
      const FIX::AllocStatus& aAllocStatus )
    : Message(MsgType())
    {
      set(aAllocReportID);
      set(aAllocID);
      set(aTransactTime);
      set(aAllocStatus);
    }

    FIELD_SET(*this, FIX::AllocReportID);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::SecondaryAllocID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::AllocReportType);
    FIELD_SET(*this, FIX::AllocIntermedReqType);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::NoAllocs);
    class NoAllocs: public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78,79,FIX::message_order(79,661,366,467,776,161,360,361,0)) {}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocAcctIDSource);
      FIELD_SET(*this, FIX::AllocPrice);
      FIELD_SET(*this, FIX::IndividualAllocID);
      FIELD_SET(*this, FIX::IndividualAllocRejCode);
      FIELD_SET(*this, FIX::AllocText);
      FIELD_SET(*this, FIX::EncodedAllocTextLen);
      FIELD_SET(*this, FIX::EncodedAllocText);
    };
  };

}

#endif
