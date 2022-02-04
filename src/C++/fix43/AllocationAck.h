#ifndef FIX43_ALLOCATIONACK_H
#define FIX43_ALLOCATIONACK_H

#include "Message.h"

namespace FIX43
{

  class AllocationAck : public Message
  {
  public:
    AllocationAck() : Message(MsgType()) {}
    AllocationAck(const FIX::Message& m) : Message(m) {}
    AllocationAck(const Message& m) : Message(m) {}
    AllocationAck(const AllocationAck& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("P"); }

    AllocationAck(
      const FIX::AllocID& aAllocID,
      const FIX::TradeDate& aTradeDate,
      const FIX::AllocStatus& aAllocStatus )
    : Message(MsgType())
    {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }

    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,523,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartySubID);
    };
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::LegalConfirm);
  };

}

#endif
