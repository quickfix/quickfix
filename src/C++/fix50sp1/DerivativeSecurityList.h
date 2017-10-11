#ifndef FIX50SP1_DERIVATIVESECURITYLIST_H
#define FIX50SP1_DERIVATIVESECURITYLIST_H

#include "Message.h"

namespace FIX50SP1
{

  class DerivativeSecurityList : public Message
  {
  public:
    DerivativeSecurityList() : Message(MsgType()) {}
    DerivativeSecurityList(const FIX::Message& m) : Message(m) {}
    DerivativeSecurityList(const Message& m) : Message(m) {}
    DerivativeSecurityList(const DerivativeSecurityList& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AA"); }

    DerivativeSecurityList(
      const FIX::SecurityResponseID& aSecurityResponseID )
    : Message(MsgType())
    {
      set(aSecurityResponseID);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityResponseID);
    FIELD_SET(*this, FIX::SecurityRequestResult);
    FIELD_SET(*this, FIX::UnderlyingSymbol);
    FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
    FIELD_SET(*this, FIX::UnderlyingSecurityID);
    FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
    FIELD_SET(*this, FIX::NoUnderlyingSecurityAltID);
    class NoUnderlyingSecurityAltID: public FIX::Group
    {
    public:
    NoUnderlyingSecurityAltID() : FIX::Group(457,458,FIX::message_order(458,459,0)) {}
      FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
      FIELD_SET(*this, FIX::UnderlyingSecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::UnderlyingProduct);
    FIELD_SET(*this, FIX::UnderlyingCFICode);
    FIELD_SET(*this, FIX::UnderlyingSecurityType);
    FIELD_SET(*this, FIX::UnderlyingSecuritySubType);
    FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
    FIELD_SET(*this, FIX::UnderlyingMaturityDate);
    FIELD_SET(*this, FIX::UnderlyingMaturityTime);
    FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
    FIELD_SET(*this, FIX::UnderlyingIssueDate);
    FIELD_SET(*this, FIX::UnderlyingRepoCollateralSecurityType);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseTerm);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseRate);
    FIELD_SET(*this, FIX::UnderlyingFactor);
    FIELD_SET(*this, FIX::UnderlyingCreditRating);
    FIELD_SET(*this, FIX::UnderlyingInstrRegistry);
    FIELD_SET(*this, FIX::UnderlyingCountryOfIssue);
    FIELD_SET(*this, FIX::UnderlyingStateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::UnderlyingLocaleOfIssue);
    FIELD_SET(*this, FIX::UnderlyingRedemptionDate);
    FIELD_SET(*this, FIX::UnderlyingStrikePrice);
    FIELD_SET(*this, FIX::UnderlyingStrikeCurrency);
    FIELD_SET(*this, FIX::UnderlyingOptAttribute);
    FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingTimeUnit);
    FIELD_SET(*this, FIX::UnderlyingExerciseStyle);
    FIELD_SET(*this, FIX::UnderlyingCouponRate);
    FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
    FIELD_SET(*this, FIX::UnderlyingIssuer);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
    FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::UnderlyingCPProgram);
    FIELD_SET(*this, FIX::UnderlyingCPRegType);
    FIELD_SET(*this, FIX::UnderlyingAllocationPercent);
    FIELD_SET(*this, FIX::UnderlyingCurrency);
    FIELD_SET(*this, FIX::UnderlyingQty);
    FIELD_SET(*this, FIX::UnderlyingSettlementType);
    FIELD_SET(*this, FIX::UnderlyingCashAmount);
    FIELD_SET(*this, FIX::UnderlyingCashType);
    FIELD_SET(*this, FIX::UnderlyingPx);
    FIELD_SET(*this, FIX::UnderlyingDirtyPrice);
    FIELD_SET(*this, FIX::UnderlyingEndPrice);
    FIELD_SET(*this, FIX::UnderlyingStartValue);
    FIELD_SET(*this, FIX::UnderlyingCurrentValue);
    FIELD_SET(*this, FIX::UnderlyingEndValue);
    FIELD_SET(*this, FIX::NoUnderlyingStips);
    class NoUnderlyingStips: public FIX::Group
    {
    public:
    NoUnderlyingStips() : FIX::Group(887,888,FIX::message_order(888,889,0)) {}
      FIELD_SET(*this, FIX::UnderlyingStipType);
      FIELD_SET(*this, FIX::UnderlyingStipValue);
    };
    FIELD_SET(*this, FIX::UnderlyingAdjustedQuantity);
    FIELD_SET(*this, FIX::UnderlyingFXRate);
    FIELD_SET(*this, FIX::UnderlyingFXRateCalc);
    FIELD_SET(*this, FIX::UnderlyingCapValue);
    FIELD_SET(*this, FIX::NoUndlyInstrumentParties);
    class NoUndlyInstrumentParties: public FIX::Group
    {
    public:
    NoUndlyInstrumentParties() : FIX::Group(1058,1059,FIX::message_order(1059,1060,1061,1062,0)) {}
      FIELD_SET(*this, FIX::UndlyInstrumentPartyID);
      FIELD_SET(*this, FIX::UndlyInstrumentPartyIDSource);
      FIELD_SET(*this, FIX::UndlyInstrumentPartyRole);
      FIELD_SET(*this, FIX::NoUndlyInstrumentPartySubIDs);
      class NoUndlyInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoUndlyInstrumentPartySubIDs() : FIX::Group(1062,1063,FIX::message_order(1063,1064,0)) {}
        FIELD_SET(*this, FIX::UndlyInstrumentPartySubID);
        FIELD_SET(*this, FIX::UndlyInstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::UnderlyingSettlMethod);
    FIELD_SET(*this, FIX::UnderlyingPutOrCall);
    FIELD_SET(*this, FIX::DerivativeSymbol);
    FIELD_SET(*this, FIX::DerivativeSymbolSfx);
    FIELD_SET(*this, FIX::DerivativeSecurityID);
    FIELD_SET(*this, FIX::DerivativeSecurityIDSource);
    FIELD_SET(*this, FIX::NoDerivativeSecurityAltID);
    class NoDerivativeSecurityAltID: public FIX::Group
    {
    public:
    NoDerivativeSecurityAltID() : FIX::Group(1218,1219,FIX::message_order(1219,1220,0)) {}
      FIELD_SET(*this, FIX::DerivativeSecurityAltID);
      FIELD_SET(*this, FIX::DerivativeSecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::DerivativeProduct);
    FIELD_SET(*this, FIX::DerivativeProductComplex);
    FIELD_SET(*this, FIX::DerivFlexProductEligibilityIndicator);
    FIELD_SET(*this, FIX::DerivativeSecurityGroup);
    FIELD_SET(*this, FIX::DerivativeCFICode);
    FIELD_SET(*this, FIX::DerivativeSecurityType);
    FIELD_SET(*this, FIX::DerivativeSecuritySubType);
    FIELD_SET(*this, FIX::DerivativeMaturityMonthYear);
    FIELD_SET(*this, FIX::DerivativeMaturityDate);
    FIELD_SET(*this, FIX::DerivativeMaturityTime);
    FIELD_SET(*this, FIX::DerivativeSettleOnOpenFlag);
    FIELD_SET(*this, FIX::DerivativeInstrmtAssignmentMethod);
    FIELD_SET(*this, FIX::DerivativeSecurityStatus);
    FIELD_SET(*this, FIX::DerivativeIssueDate);
    FIELD_SET(*this, FIX::DerivativeInstrRegistry);
    FIELD_SET(*this, FIX::DerivativeCountryOfIssue);
    FIELD_SET(*this, FIX::DerivativeStateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::DerivativeLocaleOfIssue);
    FIELD_SET(*this, FIX::DerivativeStrikePrice);
    FIELD_SET(*this, FIX::DerivativeStrikeCurrency);
    FIELD_SET(*this, FIX::DerivativeStrikeMultiplier);
    FIELD_SET(*this, FIX::DerivativeStrikeValue);
    FIELD_SET(*this, FIX::DerivativeOptAttribute);
    FIELD_SET(*this, FIX::DerivativeContractMultiplier);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrement);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrementAmount);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativeSettlMethod);
    FIELD_SET(*this, FIX::DerivativePriceQuoteMethod);
    FIELD_SET(*this, FIX::DerivativeFuturesValuationMethod);
    FIELD_SET(*this, FIX::DerivativeListMethod);
    FIELD_SET(*this, FIX::DerivativeCapPrice);
    FIELD_SET(*this, FIX::DerivativeFloorPrice);
    FIELD_SET(*this, FIX::DerivativePutOrCall);
    FIELD_SET(*this, FIX::DerivativeExerciseStyle);
    FIELD_SET(*this, FIX::DerivativeOptPayAmount);
    FIELD_SET(*this, FIX::DerivativeTimeUnit);
    FIELD_SET(*this, FIX::DerivativeSecurityExchange);
    FIELD_SET(*this, FIX::DerivativePositionLimit);
    FIELD_SET(*this, FIX::DerivativeNTPositionLimit);
    FIELD_SET(*this, FIX::DerivativeIssuer);
    FIELD_SET(*this, FIX::DerivativeEncodedIssuerLen);
    FIELD_SET(*this, FIX::DerivativeEncodedIssuer);
    FIELD_SET(*this, FIX::DerivativeSecurityDesc);
    FIELD_SET(*this, FIX::DerivativeEncodedSecurityDescLen);
    FIELD_SET(*this, FIX::DerivativeEncodedSecurityDesc);
    FIELD_SET(*this, FIX::DerivativeSecurityXMLLen);
    FIELD_SET(*this, FIX::DerivativeSecurityXML);
    FIELD_SET(*this, FIX::DerivativeSecurityXMLSchema);
    FIELD_SET(*this, FIX::DerivativeContractSettlMonth);
    FIELD_SET(*this, FIX::NoDerivativeEvents);
    class NoDerivativeEvents: public FIX::Group
    {
    public:
    NoDerivativeEvents() : FIX::Group(1286,1287,FIX::message_order(1287,1288,1289,1290,1291,0)) {}
      FIELD_SET(*this, FIX::DerivativeEventType);
      FIELD_SET(*this, FIX::DerivativeEventDate);
      FIELD_SET(*this, FIX::DerivativeEventTime);
      FIELD_SET(*this, FIX::DerivativeEventPx);
      FIELD_SET(*this, FIX::DerivativeEventText);
    };
    FIELD_SET(*this, FIX::NoDerivativeInstrumentParties);
    class NoDerivativeInstrumentParties: public FIX::Group
    {
    public:
    NoDerivativeInstrumentParties() : FIX::Group(1292,1293,FIX::message_order(1293,1294,1295,1296,0)) {}
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyID);
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyIDSource);
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyRole);
      FIELD_SET(*this, FIX::NoDerivativeInstrumentPartySubIDs);
      class NoDerivativeInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoDerivativeInstrumentPartySubIDs() : FIX::Group(1296,1297,FIX::message_order(1297,1298,0)) {}
        FIELD_SET(*this, FIX::DerivativeInstrumentPartySubID);
        FIELD_SET(*this, FIX::DerivativeInstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::NoDerivativeInstrAttrib);
    class NoDerivativeInstrAttrib: public FIX::Group
    {
    public:
    NoDerivativeInstrAttrib() : FIX::Group(1311,1313,FIX::message_order(1313,1314,0)) {}
      FIELD_SET(*this, FIX::DerivativeInstrAttribType);
      FIELD_SET(*this, FIX::DerivativeInstrAttribValue);
    };
    FIELD_SET(*this, FIX::NoMarketSegments);
    class NoMarketSegments: public FIX::Group
    {
    public:
    NoMarketSegments() : FIX::Group(1310,1301,FIX::message_order(1301,1300,1201,0)) {}
      FIELD_SET(*this, FIX::MarketID);
      FIELD_SET(*this, FIX::MarketSegmentID);
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
      FIELD_SET(*this, FIX::NoTradingSessionRules);
      class NoTradingSessionRules: public FIX::Group
      {
      public:
      NoTradingSessionRules() : FIX::Group(1309,336,FIX::message_order(336,625,0)) {}
        FIELD_SET(*this, FIX::TradingSessionID);
        FIELD_SET(*this, FIX::TradingSessionSubID);
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
        FIELD_SET(*this, FIX::NoMatchRules);
        class NoMatchRules: public FIX::Group
        {
        public:
        NoMatchRules() : FIX::Group(1235,1142,FIX::message_order(1142,574,0)) {}
          FIELD_SET(*this, FIX::MatchAlgorithm);
          FIELD_SET(*this, FIX::MatchType);
        };
        FIELD_SET(*this, FIX::NoMDFeedTypes);
        class NoMDFeedTypes: public FIX::Group
        {
        public:
        NoMDFeedTypes() : FIX::Group(1141,1022,FIX::message_order(1022,264,1021,0)) {}
          FIELD_SET(*this, FIX::MDFeedType);
          FIELD_SET(*this, FIX::MarketDepth);
          FIELD_SET(*this, FIX::MDBookType);
        };
      };
      FIELD_SET(*this, FIX::NoNestedInstrAttrib);
      class NoNestedInstrAttrib: public FIX::Group
      {
      public:
      NoNestedInstrAttrib() : FIX::Group(1312,1210,FIX::message_order(1210,1211,0)) {}
        FIELD_SET(*this, FIX::NestedInstrAttribType);
        FIELD_SET(*this, FIX::NestedInstrAttribValue);
      };
      FIELD_SET(*this, FIX::NoStrikeRules);
      class NoStrikeRules: public FIX::Group
      {
      public:
      NoStrikeRules() : FIX::Group(1201,1223,FIX::message_order(1223,1202,1203,1204,1304,1236,0)) {}
        FIELD_SET(*this, FIX::StrikeRuleID);
        FIELD_SET(*this, FIX::StartStrikePxRange);
        FIELD_SET(*this, FIX::EndStrikePxRange);
        FIELD_SET(*this, FIX::StrikeIncrement);
        FIELD_SET(*this, FIX::StrikeExerciseStyle);
        FIELD_SET(*this, FIX::NoMaturityRules);
        class NoMaturityRules: public FIX::Group
        {
        public:
        NoMaturityRules() : FIX::Group(1236,1222,FIX::message_order(1222,1303,1302,1241,1226,1229,0)) {}
          FIELD_SET(*this, FIX::MaturityRuleID);
          FIELD_SET(*this, FIX::MaturityMonthYearFormat);
          FIELD_SET(*this, FIX::MaturityMonthYearIncrementUnits);
          FIELD_SET(*this, FIX::StartMaturityMonthYear);
          FIELD_SET(*this, FIX::EndMaturityMonthYear);
          FIELD_SET(*this, FIX::MaturityMonthYearIncrement);
        };
      };
    };
    FIELD_SET(*this, FIX::TotNoRelatedSym);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,65,48,22,460,1227,1151,461,167,762,200,541,1079,966,1049,965,224,225,239,226,227,228,255,543,470,471,472,240,202,947,967,968,206,231,969,1146,996,1147,1191,1192,1193,1194,1195,1196,1197,1198,1199,1200,201,1244,1242,997,223,207,970,971,106,348,349,107,350,351,691,667,875,876,873,874,1305,1221,1230,1240,15,292,668,869,555,58,354,355,0)) {}
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::SecurityIDSource);
      FIELD_SET(*this, FIX::NoSecurityAltID);
      class NoSecurityAltID: public FIX::Group
      {
      public:
      NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
        FIELD_SET(*this, FIX::SecurityAltID);
        FIELD_SET(*this, FIX::SecurityAltIDSource);
      };
      FIELD_SET(*this, FIX::Product);
      FIELD_SET(*this, FIX::ProductComplex);
      FIELD_SET(*this, FIX::SecurityGroup);
      FIELD_SET(*this, FIX::CFICode);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::SecuritySubType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDate);
      FIELD_SET(*this, FIX::MaturityTime);
      FIELD_SET(*this, FIX::SettleOnOpenFlag);
      FIELD_SET(*this, FIX::InstrmtAssignmentMethod);
      FIELD_SET(*this, FIX::SecurityStatus);
      FIELD_SET(*this, FIX::CouponPaymentDate);
      FIELD_SET(*this, FIX::IssueDate);
      FIELD_SET(*this, FIX::RepoCollateralSecurityType);
      FIELD_SET(*this, FIX::RepurchaseTerm);
      FIELD_SET(*this, FIX::RepurchaseRate);
      FIELD_SET(*this, FIX::Factor);
      FIELD_SET(*this, FIX::CreditRating);
      FIELD_SET(*this, FIX::InstrRegistry);
      FIELD_SET(*this, FIX::CountryOfIssue);
      FIELD_SET(*this, FIX::StateOrProvinceOfIssue);
      FIELD_SET(*this, FIX::LocaleOfIssue);
      FIELD_SET(*this, FIX::RedemptionDate);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::StrikeCurrency);
      FIELD_SET(*this, FIX::StrikeMultiplier);
      FIELD_SET(*this, FIX::StrikeValue);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::MinPriceIncrement);
      FIELD_SET(*this, FIX::MinPriceIncrementAmount);
      FIELD_SET(*this, FIX::UnitOfMeasure);
      FIELD_SET(*this, FIX::UnitOfMeasureQty);
      FIELD_SET(*this, FIX::PriceUnitOfMeasure);
      FIELD_SET(*this, FIX::PriceUnitOfMeasureQty);
      FIELD_SET(*this, FIX::SettlMethod);
      FIELD_SET(*this, FIX::ExerciseStyle);
      FIELD_SET(*this, FIX::OptPayAmount);
      FIELD_SET(*this, FIX::PriceQuoteMethod);
      FIELD_SET(*this, FIX::FuturesValuationMethod);
      FIELD_SET(*this, FIX::ListMethod);
      FIELD_SET(*this, FIX::CapPrice);
      FIELD_SET(*this, FIX::FloorPrice);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::FlexibleIndicator);
      FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
      FIELD_SET(*this, FIX::TimeUnit);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::PositionLimit);
      FIELD_SET(*this, FIX::NTPositionLimit);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::SecurityXMLLen);
      FIELD_SET(*this, FIX::SecurityXML);
      FIELD_SET(*this, FIX::SecurityXMLSchema);
      FIELD_SET(*this, FIX::Pool);
      FIELD_SET(*this, FIX::ContractSettlMonth);
      FIELD_SET(*this, FIX::CPProgram);
      FIELD_SET(*this, FIX::CPRegType);
      FIELD_SET(*this, FIX::NoEvents);
      class NoEvents: public FIX::Group
      {
      public:
      NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,1145,867,868,0)) {}
        FIELD_SET(*this, FIX::EventType);
        FIELD_SET(*this, FIX::EventDate);
        FIELD_SET(*this, FIX::EventTime);
        FIELD_SET(*this, FIX::EventPx);
        FIELD_SET(*this, FIX::EventText);
      };
      FIELD_SET(*this, FIX::DatedDate);
      FIELD_SET(*this, FIX::InterestAccrualDate);
      FIELD_SET(*this, FIX::NoInstrumentParties);
      class NoInstrumentParties: public FIX::Group
      {
      public:
      NoInstrumentParties() : FIX::Group(1018,1019,FIX::message_order(1019,1050,1051,1052,0)) {}
        FIELD_SET(*this, FIX::InstrumentPartyID);
        FIELD_SET(*this, FIX::InstrumentPartyIDSource);
        FIELD_SET(*this, FIX::InstrumentPartyRole);
        FIELD_SET(*this, FIX::NoInstrumentPartySubIDs);
        class NoInstrumentPartySubIDs: public FIX::Group
        {
        public:
        NoInstrumentPartySubIDs() : FIX::Group(1052,1053,FIX::message_order(1053,1054,0)) {}
          FIELD_SET(*this, FIX::InstrumentPartySubID);
          FIELD_SET(*this, FIX::InstrumentPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::SecondaryPriceLimitType);
      FIELD_SET(*this, FIX::SecondaryLowLimitPrice);
      FIELD_SET(*this, FIX::SecondaryHighLimitPrice);
      FIELD_SET(*this, FIX::SecondaryTradingReferencePrice);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::CorporateAction);
      FIELD_SET(*this, FIX::DeliveryForm);
      FIELD_SET(*this, FIX::PctAtRisk);
      FIELD_SET(*this, FIX::NoInstrAttrib);
      class NoInstrAttrib: public FIX::Group
      {
      public:
      NoInstrAttrib() : FIX::Group(870,871,FIX::message_order(871,872,0)) {}
        FIELD_SET(*this, FIX::InstrAttribType);
        FIELD_SET(*this, FIX::InstrAttribValue);
      };
      FIELD_SET(*this, FIX::NoLegs);
      class NoLegs: public FIX::Group
      {
      public:
      NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,607,608,609,764,610,611,1212,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,999,1224,1421,1422,1001,1420,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,1358,1017,0)) {}
        FIELD_SET(*this, FIX::LegSymbol);
        FIELD_SET(*this, FIX::LegSymbolSfx);
        FIELD_SET(*this, FIX::LegSecurityID);
        FIELD_SET(*this, FIX::LegSecurityIDSource);
        FIELD_SET(*this, FIX::NoLegSecurityAltID);
        class NoLegSecurityAltID: public FIX::Group
        {
        public:
        NoLegSecurityAltID() : FIX::Group(604,605,FIX::message_order(605,606,0)) {}
          FIELD_SET(*this, FIX::LegSecurityAltID);
          FIELD_SET(*this, FIX::LegSecurityAltIDSource);
        };
        FIELD_SET(*this, FIX::LegProduct);
        FIELD_SET(*this, FIX::LegCFICode);
        FIELD_SET(*this, FIX::LegSecurityType);
        FIELD_SET(*this, FIX::LegSecuritySubType);
        FIELD_SET(*this, FIX::LegMaturityMonthYear);
        FIELD_SET(*this, FIX::LegMaturityDate);
        FIELD_SET(*this, FIX::LegMaturityTime);
        FIELD_SET(*this, FIX::LegCouponPaymentDate);
        FIELD_SET(*this, FIX::LegIssueDate);
        FIELD_SET(*this, FIX::LegRepoCollateralSecurityType);
        FIELD_SET(*this, FIX::LegRepurchaseTerm);
        FIELD_SET(*this, FIX::LegRepurchaseRate);
        FIELD_SET(*this, FIX::LegFactor);
        FIELD_SET(*this, FIX::LegCreditRating);
        FIELD_SET(*this, FIX::LegInstrRegistry);
        FIELD_SET(*this, FIX::LegCountryOfIssue);
        FIELD_SET(*this, FIX::LegStateOrProvinceOfIssue);
        FIELD_SET(*this, FIX::LegLocaleOfIssue);
        FIELD_SET(*this, FIX::LegRedemptionDate);
        FIELD_SET(*this, FIX::LegStrikePrice);
        FIELD_SET(*this, FIX::LegStrikeCurrency);
        FIELD_SET(*this, FIX::LegOptAttribute);
        FIELD_SET(*this, FIX::LegContractMultiplier);
        FIELD_SET(*this, FIX::LegUnitOfMeasure);
        FIELD_SET(*this, FIX::LegUnitOfMeasureQty);
        FIELD_SET(*this, FIX::LegPriceUnitOfMeasure);
        FIELD_SET(*this, FIX::LegPriceUnitOfMeasureQty);
        FIELD_SET(*this, FIX::LegTimeUnit);
        FIELD_SET(*this, FIX::LegExerciseStyle);
        FIELD_SET(*this, FIX::LegCouponRate);
        FIELD_SET(*this, FIX::LegSecurityExchange);
        FIELD_SET(*this, FIX::LegIssuer);
        FIELD_SET(*this, FIX::EncodedLegIssuerLen);
        FIELD_SET(*this, FIX::EncodedLegIssuer);
        FIELD_SET(*this, FIX::LegSecurityDesc);
        FIELD_SET(*this, FIX::EncodedLegSecurityDescLen);
        FIELD_SET(*this, FIX::EncodedLegSecurityDesc);
        FIELD_SET(*this, FIX::LegRatioQty);
        FIELD_SET(*this, FIX::LegSide);
        FIELD_SET(*this, FIX::LegCurrency);
        FIELD_SET(*this, FIX::LegPool);
        FIELD_SET(*this, FIX::LegDatedDate);
        FIELD_SET(*this, FIX::LegContractSettlMonth);
        FIELD_SET(*this, FIX::LegInterestAccrualDate);
        FIELD_SET(*this, FIX::LegPutOrCall);
        FIELD_SET(*this, FIX::LegOptionRatio);
      };
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
