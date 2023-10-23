#ifndef FIX50SP2_MARKETDEFINITION_H
#define FIX50SP2_MARKETDEFINITION_H

#include "Message.h"

namespace FIX50SP2
{

  class MarketDefinition : public Message
  {
  public:
    MarketDefinition() : Message(MsgType()) {}
    MarketDefinition(const FIX::Message& m) : Message(m) {}
    MarketDefinition(const Message& m) : Message(m) {}
    MarketDefinition(const MarketDefinition&) = default;
    MarketDefinition(MarketDefinition&&) = default;
    MarketDefinition& operator=(const MarketDefinition&) = default;
    MarketDefinition& operator=(MarketDefinition&&) = default;
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
    FIELD_SET(*this, FIX::MarketSegmentStatus);
    FIELD_SET(*this, FIX::MarketSegmentType);
    FIELD_SET(*this, FIX::MarketSegmentSubType);
    FIELD_SET(*this, FIX::NoInstrumentScopes);
    class NoInstrumentScopes: public FIX::Group
    {
    public:
    NoInstrumentScopes() : FIX::Group(1656,1535,FIX::message_order(1535,1536,1537,1538,1539,1543,1544,1545,1546,2895,1547,1548,1549,1550,1551,1552,1553,1554,1555,1616,1556,1620,1621,1557,0)) {}
      FIELD_SET(*this, FIX::InstrumentScopeOperator);
      FIELD_SET(*this, FIX::InstrumentScopeSymbol);
      FIELD_SET(*this, FIX::InstrumentScopeSymbolSfx);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityID);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityIDSource);
      FIELD_SET(*this, FIX::NoInstrumentScopeSecurityAltID);
      class NoInstrumentScopeSecurityAltID: public FIX::Group
      {
      public:
      NoInstrumentScopeSecurityAltID() : FIX::Group(1540,1541,FIX::message_order(1541,1542,0)) {}
        FIELD_SET(*this, FIX::InstrumentScopeSecurityAltID);
        FIELD_SET(*this, FIX::InstrumentScopeSecurityAltIDSource);
      };
      FIELD_SET(*this, FIX::InstrumentScopeProduct);
      FIELD_SET(*this, FIX::InstrumentScopeProductComplex);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityGroup);
      FIELD_SET(*this, FIX::InstrumentScopeCFICode);
      FIELD_SET(*this, FIX::InstrumentScopeUPICode);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityType);
      FIELD_SET(*this, FIX::InstrumentScopeSecuritySubType);
      FIELD_SET(*this, FIX::InstrumentScopeMaturityMonthYear);
      FIELD_SET(*this, FIX::InstrumentScopeMaturityTime);
      FIELD_SET(*this, FIX::InstrumentScopeRestructuringType);
      FIELD_SET(*this, FIX::InstrumentScopeSeniority);
      FIELD_SET(*this, FIX::InstrumentScopePutOrCall);
      FIELD_SET(*this, FIX::InstrumentScopeFlexibleIndicator);
      FIELD_SET(*this, FIX::InstrumentScopeCouponRate);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityExchange);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityDesc);
      FIELD_SET(*this, FIX::InstrumentScopeEncodedSecurityDescLen);
      FIELD_SET(*this, FIX::InstrumentScopeEncodedSecurityDesc);
      FIELD_SET(*this, FIX::InstrumentScopeSettlType);
    };
    FIELD_SET(*this, FIX::NoRelatedMarketSegments);
    class NoRelatedMarketSegments: public FIX::Group
    {
    public:
    NoRelatedMarketSegments() : FIX::Group(2545,2546,FIX::message_order(2546,2547,0)) {}
      FIELD_SET(*this, FIX::RelatedMarketSegmentID);
      FIELD_SET(*this, FIX::MarketSegmentRelationship);
    };
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::CurrencyCodeSource);
    FIELD_SET(*this, FIX::NoTickRules);
    class NoTickRules: public FIX::Group
    {
    public:
    NoTickRules() : FIX::Group(1205,1206,FIX::message_order(1206,1207,1208,1209,2571,1830,1831,0)) {}
      FIELD_SET(*this, FIX::StartTickPriceRange);
      FIELD_SET(*this, FIX::EndTickPriceRange);
      FIELD_SET(*this, FIX::TickIncrement);
      FIELD_SET(*this, FIX::TickRuleType);
      FIELD_SET(*this, FIX::TickRuleProductComplex);
      FIELD_SET(*this, FIX::SettlPriceIncrement);
      FIELD_SET(*this, FIX::SettlPriceSecondaryIncrement);
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
    FIELD_SET(*this, FIX::NoPriceRangeRules);
    class NoPriceRangeRules: public FIX::Group
    {
    public:
    NoPriceRangeRules() : FIX::Group(2550,2551,FIX::message_order(2551,2552,2553,2554,2556,2555,0)) {}
      FIELD_SET(*this, FIX::StartPriceRange);
      FIELD_SET(*this, FIX::EndPriceRange);
      FIELD_SET(*this, FIX::PriceRangeValue);
      FIELD_SET(*this, FIX::PriceRangePercentage);
      FIELD_SET(*this, FIX::PriceRangeRuleID);
      FIELD_SET(*this, FIX::PriceRangeProductComplex);
    };
    FIELD_SET(*this, FIX::NoQuoteSizeRules);
    class NoQuoteSizeRules: public FIX::Group
    {
    public:
    NoQuoteSizeRules() : FIX::Group(2558,647,FIX::message_order(647,648,2447,0)) {}
      FIELD_SET(*this, FIX::MinBidSize);
      FIELD_SET(*this, FIX::MinOfferSize);
      FIELD_SET(*this, FIX::FastMarketIndicator);
    };
    FIELD_SET(*this, FIX::ExpirationCycle);
    FIELD_SET(*this, FIX::TradeVolType);
    FIELD_SET(*this, FIX::MinTradeVol);
    FIELD_SET(*this, FIX::MaxTradeVol);
    FIELD_SET(*this, FIX::MaxPriceVariation);
    FIELD_SET(*this, FIX::ImpliedMarketIndicator);
    FIELD_SET(*this, FIX::TradingCurrency);
    FIELD_SET(*this, FIX::TradingCurrencyCodeSource);
    FIELD_SET(*this, FIX::RoundLot);
    FIELD_SET(*this, FIX::MultilegModel);
    FIELD_SET(*this, FIX::MultilegPriceMethod);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::FastMarketPercentage);
    FIELD_SET(*this, FIX::QuoteSideIndicator);
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
    FIELD_SET(*this, FIX::NoFlexProductEligibilities);
    class NoFlexProductEligibilities: public FIX::Group
    {
    public:
    NoFlexProductEligibilities() : FIX::Group(2560,1242,FIX::message_order(1242,2561,0)) {}
      FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
      FIELD_SET(*this, FIX::FlexProductEligibilityComplex);
    };
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,2376,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartyRoleQualifier);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::NoMiscFees);
    class NoMiscFees: public FIX::Group
    {
    public:
    NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,138,139,2712,2633,891,2216,2217,2713,0)) {}
      FIELD_SET(*this, FIX::MiscFeeAmt);
      FIELD_SET(*this, FIX::MiscFeeCurr);
      FIELD_SET(*this, FIX::MiscFeeType);
      FIELD_SET(*this, FIX::MiscFeeQualifier);
      FIELD_SET(*this, FIX::NoMiscFeeSubTypes);
      class NoMiscFeeSubTypes: public FIX::Group
      {
      public:
      NoMiscFeeSubTypes() : FIX::Group(2633,2634,FIX::message_order(2634,2635,2636,2637,2638,0)) {}
        FIELD_SET(*this, FIX::MiscFeeSubType);
        FIELD_SET(*this, FIX::MiscFeeSubTypeAmt);
        FIELD_SET(*this, FIX::MiscFeeSubTypeDesc);
        FIELD_SET(*this, FIX::EncodedMiscFeeSubTypeDescLen);
        FIELD_SET(*this, FIX::EncodedMiscFeeSubTypeDesc);
      };
      FIELD_SET(*this, FIX::MiscFeeBasis);
      FIELD_SET(*this, FIX::MiscFeeRate);
      FIELD_SET(*this, FIX::MiscFeeAmountDue);
      FIELD_SET(*this, FIX::MiscFeeDesc);
    };
    FIELD_SET(*this, FIX::EffectiveBusinessDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
