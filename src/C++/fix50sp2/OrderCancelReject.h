#ifndef FIX50SP2_ORDERCANCELREJECT_H
#define FIX50SP2_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX50SP2
{

  class OrderCancelReject : public Message
  {
  public:
    OrderCancelReject() : Message(MsgType()) {}
    OrderCancelReject(const FIX::Message& m) : Message(m) {}
    OrderCancelReject(const Message& m) : Message(m) {}
    OrderCancelReject(const OrderCancelReject&) = default;
    OrderCancelReject(OrderCancelReject&&) = default;
    OrderCancelReject& operator=(const OrderCancelReject&) = default;
    OrderCancelReject& operator=(OrderCancelReject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("9"); }

    OrderCancelReject(
      const FIX::OrderID& aOrderID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::CxlRejResponseTo& aCxlRejResponseTo )
    : Message(MsgType())
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrdStatus);
      set(aCxlRejResponseTo);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::OrderRequestID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::SecondaryClOrdID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClOrdLinkID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::WorkingIndicator);
    FIELD_SET(*this, FIX::OrigOrdModTime);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::AccountType);
    FIELD_SET(*this, FIX::TradeOriginationDate);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::CxlRejResponseTo);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::ExDestinationIDSource);
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
