#ifndef FIX50SP2_POSITIONTRANSFERINSTRUCTIONACK_H
#define FIX50SP2_POSITIONTRANSFERINSTRUCTIONACK_H

#include "Message.h"

namespace FIX50SP2
{

  class PositionTransferInstructionAck : public Message
  {
  public:
    PositionTransferInstructionAck() : Message(MsgType()) {}
    PositionTransferInstructionAck(const FIX::Message& m) : Message(m) {}
    PositionTransferInstructionAck(const Message& m) : Message(m) {}
    PositionTransferInstructionAck(const PositionTransferInstructionAck&) = default;
    PositionTransferInstructionAck(PositionTransferInstructionAck&&) = default;
    PositionTransferInstructionAck& operator=(const PositionTransferInstructionAck&) = default;
    PositionTransferInstructionAck& operator=(PositionTransferInstructionAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DM"); }

    PositionTransferInstructionAck(
      const FIX::TransferInstructionID& aTransferInstructionID )
    : Message(MsgType())
    {
      set(aTransferInstructionID);
    }

    FIELD_SET(*this, FIX::TransferInstructionID);
    FIELD_SET(*this, FIX::TransferID);
    FIELD_SET(*this, FIX::TransferTransType);
    FIELD_SET(*this, FIX::TransferType);
    FIELD_SET(*this, FIX::TransferStatus);
    FIELD_SET(*this, FIX::TransferRejectReason);
    FIELD_SET(*this, FIX::TransferScope);
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
    FIELD_SET(*this, FIX::NoTargetPartyIDs);
    class NoTargetPartyIDs: public FIX::Group
    {
    public:
    NoTargetPartyIDs() : FIX::Group(1461,1462,FIX::message_order(1462,1463,1464,1818,2433,0)) {}
      FIELD_SET(*this, FIX::TargetPartyID);
      FIELD_SET(*this, FIX::TargetPartyIDSource);
      FIELD_SET(*this, FIX::TargetPartyRole);
      FIELD_SET(*this, FIX::TargetPartyRoleQualifier);
      FIELD_SET(*this, FIX::NoTargetPartySubIDs);
      class NoTargetPartySubIDs: public FIX::Group
      {
      public:
      NoTargetPartySubIDs() : FIX::Group(2433,2434,FIX::message_order(2434,2435,0)) {}
        FIELD_SET(*this, FIX::TargetPartySubID);
        FIELD_SET(*this, FIX::TargetPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
