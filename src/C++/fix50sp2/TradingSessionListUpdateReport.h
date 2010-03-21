#ifndef FIX50SP2_TRADINGSESSIONLISTUPDATEREPORT_H
#define FIX50SP2_TRADINGSESSIONLISTUPDATEREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class TradingSessionListUpdateReport : public Message
  {
  public:
    TradingSessionListUpdateReport() : Message(MsgType()) {}
    TradingSessionListUpdateReport(const FIX::Message& m) : Message(m) {}
    TradingSessionListUpdateReport(const Message& m) : Message(m) {}
    TradingSessionListUpdateReport(const TradingSessionListUpdateReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BS"); }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,207,338,339,325,340,567,341,342,343,344,345,387,58,354,355,1301,1300,1326,60,1327,0)) {}
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
      FIELD_SET(*this, FIX::MarketID);
      FIELD_SET(*this, FIX::MarketSegmentID);
      FIELD_SET(*this, FIX::TradingSessionDesc);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::TradSesUpdateAction);
    };
    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
  };

}

#endif
