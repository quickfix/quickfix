#ifndef FIX40_ORDERSTATUSREQUEST_H
#define FIX40_ORDERSTATUSREQUEST_H

#include "Message.h"

namespace FIX40
{

  class OrderStatusRequest : public Message
  {
  public:
    OrderStatusRequest() : Message(MsgType()) {}
    OrderStatusRequest(const FIX::Message& m) : Message(m) {}
    OrderStatusRequest(const Message& m) : Message(m) {}
    OrderStatusRequest(const OrderStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("H"); }

    OrderStatusRequest(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(MsgType())
    {
      set(aClOrdID);
      set(aSymbol);
      set(aSide);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
  };

}

#endif
