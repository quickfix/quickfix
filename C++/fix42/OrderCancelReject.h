#ifndef FIX42_ORDERCANCELREJECT_H
#define FIX42_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX42
{

  class OrderCancelReject : public Message
  {
  public:
    OrderCancelReject() : Message(MsgType()) {}
    OrderCancelReject(const FIX::Message& m) : Message(m) {}
    OrderCancelReject(const Message& m) : Message(m) {}
    OrderCancelReject(const OrderCancelReject& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("9"); }

    OrderCancelReject(
      const FIX::OrderID& aOrderID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::CxlRejResponseTo& aCxlRejResponseTo )
    : Message(MsgType())
    {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
      set(aCxlRejResponseTo);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::CxlRejResponseTo);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
