#ifndef FIX50SP2_ALLOCATIONINSTRUCTIONALERTREQUEST_H
#define FIX50SP2_ALLOCATIONINSTRUCTIONALERTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class AllocationInstructionAlertRequest : public Message
  {
  public:
    AllocationInstructionAlertRequest() : Message(MsgType()) {}
    AllocationInstructionAlertRequest(const FIX::Message& m) : Message(m) {}
    AllocationInstructionAlertRequest(const Message& m) : Message(m) {}
    AllocationInstructionAlertRequest(const AllocationInstructionAlertRequest&) = default;
    AllocationInstructionAlertRequest(AllocationInstructionAlertRequest&&) = default;
    AllocationInstructionAlertRequest& operator=(const AllocationInstructionAlertRequest&) = default;
    AllocationInstructionAlertRequest& operator=(AllocationInstructionAlertRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DU"); }

    FIELD_SET(*this, FIX::AllocRequestID);
    FIELD_SET(*this, FIX::AllocGroupID);
    FIELD_SET(*this, FIX::AvgPxGroupID);
    FIELD_SET(*this, FIX::TradeDate);
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
  };

}

#endif
