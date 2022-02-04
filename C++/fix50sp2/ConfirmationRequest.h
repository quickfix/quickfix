#ifndef FIX50SP2_CONFIRMATIONREQUEST_H
#define FIX50SP2_CONFIRMATIONREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class ConfirmationRequest : public Message
  {
  public:
    ConfirmationRequest() : Message(MsgType()) {}
    ConfirmationRequest(const FIX::Message& m) : Message(m) {}
    ConfirmationRequest(const Message& m) : Message(m) {}
    ConfirmationRequest(const ConfirmationRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BH"); }

    ConfirmationRequest(
      const FIX::ConfirmReqID& aConfirmReqID,
      const FIX::ConfirmType& aConfirmType,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aConfirmReqID);
      set(aConfirmType);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::ConfirmReqID);
    FIELD_SET(*this, FIX::ConfirmType);
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,37,198,526,66,756,38,799,800,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::SecondaryOrderID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::NoNested2PartyIDs);
      class NoNested2PartyIDs: public FIX::Group
      {
      public:
      NoNested2PartyIDs() : FIX::Group(756,757,FIX::message_order(757,758,759,806,0)) {}
        FIELD_SET(*this, FIX::Nested2PartyID);
        FIELD_SET(*this, FIX::Nested2PartyIDSource);
        FIELD_SET(*this, FIX::Nested2PartyRole);
        FIELD_SET(*this, FIX::NoNested2PartySubIDs);
        class NoNested2PartySubIDs: public FIX::Group
        {
        public:
        NoNested2PartySubIDs() : FIX::Group(806,760,FIX::message_order(760,807,0)) {}
          FIELD_SET(*this, FIX::Nested2PartySubID);
          FIELD_SET(*this, FIX::Nested2PartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::OrderAvgPx);
      FIELD_SET(*this, FIX::OrderBookingQty);
    };
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::SecondaryAllocID);
    FIELD_SET(*this, FIX::IndividualAllocID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocAccount);
    FIELD_SET(*this, FIX::AllocAcctIDSource);
    FIELD_SET(*this, FIX::AllocAccountType);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
