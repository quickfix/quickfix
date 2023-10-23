#ifndef FIX42_TRADINGSESSIONSTATUSREQUEST_H
#define FIX42_TRADINGSESSIONSTATUSREQUEST_H

#include "Message.h"

namespace FIX42
{

  class TradingSessionStatusRequest : public Message
  {
  public:
    TradingSessionStatusRequest() : Message(MsgType()) {}
    TradingSessionStatusRequest(const FIX::Message& m) : Message(m) {}
    TradingSessionStatusRequest(const Message& m) : Message(m) {}
    TradingSessionStatusRequest(const TradingSessionStatusRequest&) = default;
    TradingSessionStatusRequest(TradingSessionStatusRequest&&) = default;
    TradingSessionStatusRequest& operator=(const TradingSessionStatusRequest&) = default;
    TradingSessionStatusRequest& operator=(TradingSessionStatusRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("g"); }

    TradingSessionStatusRequest(
      const FIX::TradSesReqID& aTradSesReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aTradSesReqID);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
