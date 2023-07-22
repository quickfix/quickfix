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
    TradingSessionListUpdateReport(const TradingSessionListUpdateReport&) = default;
    TradingSessionListUpdateReport(TradingSessionListUpdateReport&&) = default;
    TradingSessionListUpdateReport& operator=(const TradingSessionListUpdateReport&) = default;
    TradingSessionListUpdateReport& operator=(TradingSessionListUpdateReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("BS"); }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,1327,207,1301,1300,1326,338,339,325,340,567,341,342,343,344,345,387,60,58,354,355,0)) {}
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::TradSesUpdateAction);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::MarketID);
      FIELD_SET(*this, FIX::MarketSegmentID);
      FIELD_SET(*this, FIX::TradingSessionDesc);
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
      FIELD_SET(*this, FIX::NoOrdTypeRules);
      class NoOrdTypeRules: public FIX::Group
      {
      public:
      NoOrdTypeRules() : FIX::Group(1237,40,FIX::message_order(40,0)) {}
        FIELD_SET(*this, FIX::OrdType);
      };
      FIELD_SET(*this, FIX::NoTimeInForceRules);
      class NoTimeInForceRules: public FIX::Group
      {
      public:
      NoTimeInForceRules() : FIX::Group(1239,59,FIX::message_order(59,0)) {}
        FIELD_SET(*this, FIX::TimeInForce);
      };
      FIELD_SET(*this, FIX::NoExecInstRules);
      class NoExecInstRules: public FIX::Group
      {
      public:
      NoExecInstRules() : FIX::Group(1232,1308,FIX::message_order(1308,0)) {}
        FIELD_SET(*this, FIX::ExecInstValue);
      };
      FIELD_SET(*this, FIX::NoAuctionTypeRules);
      class NoAuctionTypeRules: public FIX::Group
      {
      public:
      NoAuctionTypeRules() : FIX::Group(2548,1803,FIX::message_order(1803,2549,0)) {}
        FIELD_SET(*this, FIX::AuctionType);
        FIELD_SET(*this, FIX::AuctionTypeProductComplex);
      };
      FIELD_SET(*this, FIX::NoMatchRules);
      class NoMatchRules: public FIX::Group
      {
      public:
      NoMatchRules() : FIX::Group(1235,1142,FIX::message_order(1142,574,2569,2570,0)) {}
        FIELD_SET(*this, FIX::MatchAlgorithm);
        FIELD_SET(*this, FIX::MatchType);
        FIELD_SET(*this, FIX::MatchRuleProductComplex);
        FIELD_SET(*this, FIX::CustomerPriority);
      };
      FIELD_SET(*this, FIX::NoMDFeedTypes);
      class NoMDFeedTypes: public FIX::Group
      {
      public:
      NoMDFeedTypes() : FIX::Group(1141,1022,FIX::message_order(1022,1683,264,2563,2564,2565,2566,1021,1173,2567,2568,0)) {}
        FIELD_SET(*this, FIX::MDFeedType);
        FIELD_SET(*this, FIX::MDSubFeedType);
        FIELD_SET(*this, FIX::MarketDepth);
        FIELD_SET(*this, FIX::MarketDepthTimeInterval);
        FIELD_SET(*this, FIX::MarketDepthTimeIntervalUnit);
        FIELD_SET(*this, FIX::MDRecoveryTimeInterval);
        FIELD_SET(*this, FIX::MDRecoveryTimeIntervalUnit);
        FIELD_SET(*this, FIX::MDBookType);
        FIELD_SET(*this, FIX::MDSubBookType);
        FIELD_SET(*this, FIX::PrimaryServiceLocationID);
        FIELD_SET(*this, FIX::SecondaryServiceLocationID);
      };
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
