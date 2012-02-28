#ifndef FIX50SP2_TRADINGSESSIONLISTREQUEST_H
#define FIX50SP2_TRADINGSESSIONLISTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class TradingSessionListRequest : public Message
  {
  public:
    TradingSessionListRequest() : Message(MsgType()) {}
    TradingSessionListRequest(const FIX::Message& m) : Message(m) {}
    TradingSessionListRequest(const Message& m) : Message(m) {}
    TradingSessionListRequest(const TradingSessionListRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BI"); }

    TradingSessionListRequest(
      const FIX::TradSesReqID& aTradSesReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aTradSesReqID);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
