#ifndef FIX50_TRADINGSESSIONLIST_H
#define FIX50_TRADINGSESSIONLIST_H

#include "Message.h"

namespace FIX50
{

  class TradingSessionList : public Message
  {
  public:
    TradingSessionList() : Message(MsgType()) {}
    TradingSessionList(const FIX::Message& m) : Message(m) {}
    TradingSessionList(const Message& m) : Message(m) {}
    TradingSessionList(const TradingSessionList& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BJ"); }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,207,338,339,325,340,567,341,342,343,344,345,387,58,354,355,0)) {}
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::SecurityExchange);
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
  };

}

#endif
