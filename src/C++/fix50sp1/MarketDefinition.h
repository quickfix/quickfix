#ifndef FIX50SP1_MARKETDEFINITION_H
#define FIX50SP1_MARKETDEFINITION_H

#include "Message.h"

namespace FIX50SP1
{

  class MarketDefinition : public Message
  {
  public:
    MarketDefinition() : Message(MsgType()) {}
    MarketDefinition(const FIX::Message& m) : Message(m) {}
    MarketDefinition(const Message& m) : Message(m) {}
    MarketDefinition(const MarketDefinition& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BU"); }

    MarketDefinition(
      const FIX::MarketReportID& aMarketReportID,
      const FIX::MarketID& aMarketID )
    : Message(MsgType())
    {
      set(aMarketReportID);
      set(aMarketID);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::MarketReportID);
    FIELD_SET(*this, FIX::MarketReqID);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::MarketSegmentDesc);
    FIELD_SET(*this, FIX::EncodedMktSegmDescLen);
    FIELD_SET(*this, FIX::EncodedMktSegmDesc);
    FIELD_SET(*this, FIX::ParentMktSegmID);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::NoTickRules);
    class NoTickRules: public FIX::Group
    {
    public:
    NoTickRules() : FIX::Group(1205,1206,FIX::message_order(1206,1207,1208,1209,0)) {}
      FIELD_SET(*this, FIX::StartTickPriceRange);
      FIELD_SET(*this, FIX::EndTickPriceRange);
      FIELD_SET(*this, FIX::TickIncrement);
      FIELD_SET(*this, FIX::TickRuleType);
    };
    FIELD_SET(*this, FIX::NoLotTypeRules);
    class NoLotTypeRules: public FIX::Group
    {
    public:
    NoLotTypeRules() : FIX::Group(1234,1093,FIX::message_order(1093,1231,0)) {}
      FIELD_SET(*this, FIX::LotType);
      FIELD_SET(*this, FIX::MinLotSize);
    };
    FIELD_SET(*this, FIX::PriceLimitType);
    FIELD_SET(*this, FIX::LowLimitPrice);
    FIELD_SET(*this, FIX::HighLimitPrice);
    FIELD_SET(*this, FIX::TradingReferencePrice);
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
  };

}

#endif
