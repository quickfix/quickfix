#ifndef FIX43_TRADINGSESSIONSTATUS_H
#define FIX43_TRADINGSESSIONSTATUS_H

#include "Message.h"

namespace FIX43
{

  class TradingSessionStatus : public Message
  {
  public:
    TradingSessionStatus() : Message(MsgType()) {}
    TradingSessionStatus(const FIX::Message& m) : Message(m) {}
    TradingSessionStatus(const Message& m) : Message(m) {}
    TradingSessionStatus(const TradingSessionStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("h"); }

    TradingSessionStatus(
      const FIX::TradingSessionID& aTradingSessionID,
      const FIX::TradSesStatus& aTradSesStatus )
    : Message(MsgType())
    {
      set(aTradingSessionID);
      set(aTradSesStatus);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::TradSesStatus);
    FIELD_SET(*this, FIX::TradSesStatusRejReason);
    FIELD_SET(*this, FIX::TradSesStartTime);
    FIELD_SET(*this, FIX::TradSesOpenTime);
    FIELD_SET(*this, FIX::TradSesPreCloseTime);
    FIELD_SET(*this, FIX::TradSesCloseTime);
    FIELD_SET(*this, FIX::TradSesEndTime);
    FIELD_SET(*this, FIX::TotalVolumeTraded);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
