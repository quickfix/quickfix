#ifndef FIX50_MARKETDATAREQUESTREJECT_H
#define FIX50_MARKETDATAREQUESTREJECT_H

#include "Message.h"

namespace FIX50
{

  class MarketDataRequestReject : public Message
  {
  public:
    MarketDataRequestReject() : Message(MsgType()) {}
    MarketDataRequestReject(const FIX::Message& m) : Message(m) {}
    MarketDataRequestReject(const Message& m) : Message(m) {}
    MarketDataRequestReject(const MarketDataRequestReject&) = default;
    MarketDataRequestReject(MarketDataRequestReject&&) = default;
    MarketDataRequestReject& operator=(const MarketDataRequestReject&) = default;
    MarketDataRequestReject& operator=(MarketDataRequestReject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("Y"); }

    MarketDataRequestReject(
      const FIX::MDReqID& aMDReqID )
    : Message(MsgType())
    {
      set(aMDReqID);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::MDReqRejReason);
    FIELD_SET(*this, FIX::NoAltMDSource);
    class NoAltMDSource: public FIX::Group
    {
    public:
    NoAltMDSource() : FIX::Group(816,817,FIX::message_order(817,0)) {}
      FIELD_SET(*this, FIX::AltMDSourceID);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
