#ifndef FIX42_MARKETDATAREQUESTREJECT_H
#define FIX42_MARKETDATAREQUESTREJECT_H

#include "Message.h"

namespace FIX42
{

  class MarketDataRequestReject : public Message
  {
  public:
    MarketDataRequestReject() : Message(MsgType()) {}
    MarketDataRequestReject(const FIX::Message& m) : Message(m) {}
    MarketDataRequestReject(const Message& m) : Message(m) {}
    MarketDataRequestReject(const MarketDataRequestReject& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Y"); }

    MarketDataRequestReject(
      const FIX::MDReqID& aMDReqID )
    : Message(MsgType())
    {
      set(aMDReqID);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::MDReqRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
