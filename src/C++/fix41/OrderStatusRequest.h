#ifndef FIX41_ORDERSTATUSREQUEST_H
#define FIX41_ORDERSTATUSREQUEST_H

#include "Message.h"

namespace FIX41
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
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
  };

}

#endif
