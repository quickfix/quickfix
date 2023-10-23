#ifndef FIX41_ORDERCANCELREJECT_H
#define FIX41_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX41
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
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::OrdStatus& aOrdStatus )
    : Message(MsgType())
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
