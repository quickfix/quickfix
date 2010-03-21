#ifndef FIX50SP2_MARKETDEFINITIONUPDATEREPORT_H
#define FIX50SP2_MARKETDEFINITIONUPDATEREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class MarketDefinitionUpdateReport : public Message
  {
  public:
    MarketDefinitionUpdateReport() : Message(MsgType()) {}
    MarketDefinitionUpdateReport(const FIX::Message& m) : Message(m) {}
    MarketDefinitionUpdateReport(const Message& m) : Message(m) {}
    MarketDefinitionUpdateReport(const MarketDefinitionUpdateReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BV"); }

    MarketDefinitionUpdateReport(
      const FIX::MarketReportID& aMarketReportID,
      const FIX::MarketID& aMarketID )
    : Message(MsgType())
    {
      set(aMarketReportID);
      set(aMarketID);
    }

    FIELD_SET(*this, FIX::MarketReportID);
    FIELD_SET(*this, FIX::MarketReqID);
    FIELD_SET(*this, FIX::MarketUpdateAction);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::MarketSegmentDesc);
    FIELD_SET(*this, FIX::EncodedMktSegmDescLen);
    FIELD_SET(*this, FIX::EncodedMktSegmDesc);
    FIELD_SET(*this, FIX::ParentMktSegmID);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ExpirationCycle);
    FIELD_SET(*this, FIX::MinTradeVol);
    FIELD_SET(*this, FIX::MaxTradeVol);
    FIELD_SET(*this, FIX::MaxPriceVariation);
    FIELD_SET(*this, FIX::ImpliedMarketIndicator);
    FIELD_SET(*this, FIX::TradingCurrency);
    FIELD_SET(*this, FIX::RoundLot);
    FIELD_SET(*this, FIX::MultilegModel);
    FIELD_SET(*this, FIX::MultilegPriceMethod);
    FIELD_SET(*this, FIX::PriceType);
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
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
  };

}

#endif
