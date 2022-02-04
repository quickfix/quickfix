#ifndef FIX40_ORDERCANCELREQUEST_H
#define FIX40_ORDERCANCELREQUEST_H

#include "Message.h"

namespace FIX40
{

  class OrderCancelRequest : public Message
  {
  public:
    OrderCancelRequest() : Message(MsgType()) {}
    OrderCancelRequest(const FIX::Message& m) : Message(m) {}
    OrderCancelRequest(const Message& m) : Message(m) {}
    OrderCancelRequest(const OrderCancelRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("F"); }

    OrderCancelRequest(
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::CxlType& aCxlType,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty )
    : Message(MsgType())
    {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aCxlType);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
    }

    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlType);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
