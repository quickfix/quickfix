#ifndef FIX50SP2_TRADECAPTUREREPORT_H
#define FIX50SP2_TRADECAPTUREREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class TradeCaptureReport : public Message
  {
  public:
    TradeCaptureReport() : Message(MsgType()) {}
    TradeCaptureReport(const FIX::Message& m) : Message(m) {}
    TradeCaptureReport(const Message& m) : Message(m) {}
    TradeCaptureReport(const TradeCaptureReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AE"); }

    TradeCaptureReport(
      const FIX::LastQty& aLastQty,
      const FIX::LastPx& aLastPx )
    : Message(MsgType())
    {
      set(aLastQty);
      set(aLastPx);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::TradeReportID);
    FIELD_SET(*this, FIX::TradeID);
    FIELD_SET(*this, FIX::SecondaryTradeID);
    FIELD_SET(*this, FIX::FirmTradeID);
    FIELD_SET(*this, FIX::SecondaryFirmTradeID);
    FIELD_SET(*this, FIX::TradeReportTransType);
    FIELD_SET(*this, FIX::TradeReportType);
    FIELD_SET(*this, FIX::TrdRptStatus);
    FIELD_SET(*this, FIX::TradeRequestID);
    FIELD_SET(*this, FIX::TrdType);
    FIELD_SET(*this, FIX::TrdSubType);
    FIELD_SET(*this, FIX::SecondaryTrdType);
    FIELD_SET(*this, FIX::TradeHandlingInstr);
    FIELD_SET(*this, FIX::OrigTradeHandlingInstr);
    FIELD_SET(*this, FIX::OrigTradeDate);
    FIELD_SET(*this, FIX::OrigTradeID);
    FIELD_SET(*this, FIX::OrigSecondaryTradeID);
    FIELD_SET(*this, FIX::TransferReason);
    FIELD_SET(*this, FIX::ExecType);
    FIELD_SET(*this, FIX::TotNumTradeReports);
    FIELD_SET(*this, FIX::LastRptRequested);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::TradeReportRefID);
    FIELD_SET(*this, FIX::SecondaryTradeReportRefID);
    FIELD_SET(*this, FIX::SecondaryTradeReportID);
    FIELD_SET(*this, FIX::TradeLinkID);
    FIELD_SET(*this, FIX::TrdMatchID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::SecondaryExecID);
    FIELD_SET(*this, FIX::ExecRestatementReason);
    FIELD_SET(*this, FIX::PreviouslyReported);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::NoRootPartyIDs);
    class NoRootPartyIDs: public FIX::Group
    {
    public:
    NoRootPartyIDs() : FIX::Group(1116,1117,FIX::message_order(1117,1118,1119,1120,0)) {}
      FIELD_SET(*this, FIX::RootPartyID);
      FIELD_SET(*this, FIX::RootPartyIDSource);
      FIELD_SET(*this, FIX::RootPartyRole);
      FIELD_SET(*this, FIX::NoRootPartySubIDs);
      class NoRootPartySubIDs: public FIX::Group
      {
      public:
      NoRootPartySubIDs() : FIX::Group(1120,1121,FIX::message_order(1121,1122,0)) {}
        FIELD_SET(*this, FIX::RootPartySubID);
        FIELD_SET(*this, FIX::RootPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::AsOfIndicator);
    FIELD_SET(*this, FIX::SettlSessID);
    FIELD_SET(*this, FIX::SettlSessSubID);
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
    FIELD_SET(*this, FIX::OptPayoutAmount);
    FIELD_SET(*this, FIX::PriceQuoteMethod);
    FIELD_SET(*this, FIX::ValuationMethod);
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
    FIELD_SET(*this, FIX::ContractMultiplierUnit);
    FIELD_SET(*this, FIX::FlowScheduleType);
    FIELD_SET(*this, FIX::RestructuringType);
    FIELD_SET(*this, FIX::Seniority);
    FIELD_SET(*this, FIX::NotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::OriginalNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::AttachmentPoint);
    FIELD_SET(*this, FIX::DetachmentPoint);
    FIELD_SET(*this, FIX::StrikePriceDeterminationMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryPrecision);
    FIELD_SET(*this, FIX::UnderlyingPriceDeterminationMethod);
    FIELD_SET(*this, FIX::OptPayoutType);
    FIELD_SET(*this, FIX::NoComplexEvents);
    class NoComplexEvents: public FIX::Group
    {
    public:
    NoComplexEvents() : FIX::Group(1483,1484,FIX::message_order(1484,1485,1486,1487,1488,1489,1490,1491,0)) {}
      FIELD_SET(*this, FIX::ComplexEventType);
      FIELD_SET(*this, FIX::ComplexOptPayoutAmount);
      FIELD_SET(*this, FIX::ComplexEventPrice);
      FIELD_SET(*this, FIX::ComplexEventPriceBoundaryMethod);
      FIELD_SET(*this, FIX::ComplexEventPriceBoundaryPrecision);
      FIELD_SET(*this, FIX::ComplexEventPriceTimeType);
      FIELD_SET(*this, FIX::ComplexEventCondition);
      FIELD_SET(*this, FIX::NoComplexEventDates);
      class NoComplexEventDates: public FIX::Group
      {
      public:
      NoComplexEventDates() : FIX::Group(1491,1492,FIX::message_order(1492,1493,1494,0)) {}
        FIELD_SET(*this, FIX::ComplexEventStartDate);
        FIELD_SET(*this, FIX::ComplexEventEndDate);
        FIELD_SET(*this, FIX::NoComplexEventTimes);
        class NoComplexEventTimes: public FIX::Group
        {
        public:
        NoComplexEventTimes() : FIX::Group(1494,1495,FIX::message_order(1495,1496,0)) {}
          FIELD_SET(*this, FIX::ComplexEventStartTime);
          FIELD_SET(*this, FIX::ComplexEventEndTime);
        };
      };
    };
    FIELD_SET(*this, FIX::AgreementDesc);
    FIELD_SET(*this, FIX::AgreementID);
    FIELD_SET(*this, FIX::AgreementDate);
    FIELD_SET(*this, FIX::AgreementCurrency);
    FIELD_SET(*this, FIX::TerminationType);
    FIELD_SET(*this, FIX::StartDate);
    FIELD_SET(*this, FIX::EndDate);
    FIELD_SET(*this, FIX::DeliveryType);
    FIELD_SET(*this, FIX::MarginRatio);
    FIELD_SET(*this, FIX::QtyType);
    FIELD_SET(*this, FIX::YieldType);
    FIELD_SET(*this, FIX::Yield);
    FIELD_SET(*this, FIX::YieldCalcDate);
    FIELD_SET(*this, FIX::YieldRedemptionDate);
    FIELD_SET(*this, FIX::YieldRedemptionPrice);
    FIELD_SET(*this, FIX::YieldRedemptionPriceType);
    FIELD_SET(*this, FIX::NoUnderlyings);
    class NoUnderlyings: public FIX::Group
    {
    public:
    NoUnderlyings() : FIX::Group(711,311,FIX::message_order(311,312,309,305,462,463,310,763,313,542,1213,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,998,1423,1424,1425,1000,1419,435,308,306,362,363,307,364,365,877,878,972,318,879,975,973,974,810,882,883,884,885,886,1044,1045,1046,1038,1039,315,1437,1441,1453,1454,1455,1456,1459,1460,0)) {}
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
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyID);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyIDSource);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyRole);
        FIELD_SET(*this, FIX::NoUndlyInstrumentPartySubIDs);
        class NoUndlyInstrumentPartySubIDs: public FIX::Group
        {
        public:
        NoUndlyInstrumentPartySubIDs() : FIX::Group(1062,1063,FIX::message_order(1063,1064,0)) {}
          FIELD_SET(*this, FIX::UnderlyingInstrumentPartySubID);
          FIELD_SET(*this, FIX::UnderlyingInstrumentPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::UnderlyingSettlMethod);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplierUnit);
      FIELD_SET(*this, FIX::UnderlyingFlowScheduleType);
      FIELD_SET(*this, FIX::UnderlyingRestructuringType);
      FIELD_SET(*this, FIX::UnderlyingSeniority);
      FIELD_SET(*this, FIX::UnderlyingNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::UnderlyingOriginalNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::UnderlyingAttachmentPoint);
      FIELD_SET(*this, FIX::UnderlyingDetachmentPoint);
    };
    FIELD_SET(*this, FIX::UnderlyingTradingSessionID);
    FIELD_SET(*this, FIX::UnderlyingTradingSessionSubID);
    FIELD_SET(*this, FIX::LastQty);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::CalculatedCcyLastQty);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::LastParPx);
    FIELD_SET(*this, FIX::LastSpotRate);
    FIELD_SET(*this, FIX::LastForwardPoints);
    FIELD_SET(*this, FIX::LastSwapPoints);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::BenchmarkPrice);
    FIELD_SET(*this, FIX::BenchmarkPriceType);
    FIELD_SET(*this, FIX::BenchmarkSecurityID);
    FIELD_SET(*this, FIX::BenchmarkSecurityIDSource);
    FIELD_SET(*this, FIX::AvgPxIndicator);
    FIELD_SET(*this, FIX::NoPosAmt);
    class NoPosAmt: public FIX::Group
    {
    public:
    NoPosAmt() : FIX::Group(753,707,FIX::message_order(707,708,1055,0)) {}
      FIELD_SET(*this, FIX::PosAmtType);
      FIELD_SET(*this, FIX::PosAmt);
      FIELD_SET(*this, FIX::PositionCurrency);
    };
    FIELD_SET(*this, FIX::MultiLegReportingType);
    FIELD_SET(*this, FIX::TradeLegRefID);
    FIELD_SET(*this, FIX::NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,607,608,609,764,610,611,1212,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,999,1224,1421,1422,1001,1420,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,1358,1017,1436,1440,687,690,990,1152,683,564,565,539,654,587,588,637,675,1073,1074,1075,1379,1381,1383,1384,1418,1342,0)) {}
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
      FIELD_SET(*this, FIX::LegContractMultiplierUnit);
      FIELD_SET(*this, FIX::LegFlowScheduleType);
      FIELD_SET(*this, FIX::LegQty);
      FIELD_SET(*this, FIX::LegSwapType);
      FIELD_SET(*this, FIX::LegReportID);
      FIELD_SET(*this, FIX::LegNumber);
      FIELD_SET(*this, FIX::NoLegStipulations);
      class NoLegStipulations: public FIX::Group
      {
      public:
      NoLegStipulations() : FIX::Group(683,688,FIX::message_order(688,689,0)) {}
        FIELD_SET(*this, FIX::LegStipulationType);
        FIELD_SET(*this, FIX::LegStipulationValue);
      };
      FIELD_SET(*this, FIX::LegPositionEffect);
      FIELD_SET(*this, FIX::LegCoveredOrUncovered);
      FIELD_SET(*this, FIX::NoNestedPartyIDs);
      class NoNestedPartyIDs: public FIX::Group
      {
      public:
      NoNestedPartyIDs() : FIX::Group(539,524,FIX::message_order(524,525,538,804,0)) {}
        FIELD_SET(*this, FIX::NestedPartyID);
        FIELD_SET(*this, FIX::NestedPartyIDSource);
        FIELD_SET(*this, FIX::NestedPartyRole);
        FIELD_SET(*this, FIX::NoNestedPartySubIDs);
        class NoNestedPartySubIDs: public FIX::Group
        {
        public:
        NoNestedPartySubIDs() : FIX::Group(804,545,FIX::message_order(545,805,0)) {}
          FIELD_SET(*this, FIX::NestedPartySubID);
          FIELD_SET(*this, FIX::NestedPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::LegRefID);
      FIELD_SET(*this, FIX::LegSettlType);
      FIELD_SET(*this, FIX::LegSettlDate);
      FIELD_SET(*this, FIX::LegLastPx);
      FIELD_SET(*this, FIX::LegSettlCurrency);
      FIELD_SET(*this, FIX::LegLastForwardPoints);
      FIELD_SET(*this, FIX::LegCalculatedCcyLastQty);
      FIELD_SET(*this, FIX::LegGrossTradeAmt);
      FIELD_SET(*this, FIX::LegVolatility);
      FIELD_SET(*this, FIX::LegDividendYield);
      FIELD_SET(*this, FIX::LegCurrencyRatio);
      FIELD_SET(*this, FIX::LegExecInst);
      FIELD_SET(*this, FIX::LegLastQty);
      FIELD_SET(*this, FIX::NoOfLegUnderlyings);
      class NoOfLegUnderlyings: public FIX::Group
      {
      public:
      NoOfLegUnderlyings() : FIX::Group(1342,1330,FIX::message_order(1330,1331,1332,1333,1344,1337,1338,1339,1345,1405,1340,1391,1343,1341,1392,0)) {}
        FIELD_SET(*this, FIX::UnderlyingLegSymbol);
        FIELD_SET(*this, FIX::UnderlyingLegSymbolSfx);
        FIELD_SET(*this, FIX::UnderlyingLegSecurityID);
        FIELD_SET(*this, FIX::UnderlyingLegSecurityIDSource);
        FIELD_SET(*this, FIX::NoUnderlyingLegSecurityAltID);
        class NoUnderlyingLegSecurityAltID: public FIX::Group
        {
        public:
        NoUnderlyingLegSecurityAltID() : FIX::Group(1334,1335,FIX::message_order(1335,1336,0)) {}
          FIELD_SET(*this, FIX::UnderlyingLegSecurityAltID);
          FIELD_SET(*this, FIX::UnderlyingLegSecurityAltIDSource);
        };
        FIELD_SET(*this, FIX::UnderlyingLegCFICode);
        FIELD_SET(*this, FIX::UnderlyingLegSecurityType);
        FIELD_SET(*this, FIX::UnderlyingLegSecuritySubType);
        FIELD_SET(*this, FIX::UnderlyingLegMaturityMonthYear);
        FIELD_SET(*this, FIX::UnderlyingLegMaturityDate);
        FIELD_SET(*this, FIX::UnderlyingLegMaturityTime);
        FIELD_SET(*this, FIX::UnderlyingLegStrikePrice);
        FIELD_SET(*this, FIX::UnderlyingLegOptAttribute);
        FIELD_SET(*this, FIX::UnderlyingLegPutOrCall);
        FIELD_SET(*this, FIX::UnderlyingLegSecurityExchange);
        FIELD_SET(*this, FIX::UnderlyingLegSecurityDesc);
      };
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::NoTrdRegTimestamps);
    class NoTrdRegTimestamps: public FIX::Group
    {
    public:
    NoTrdRegTimestamps() : FIX::Group(768,769,FIX::message_order(769,770,771,1033,1034,1035,0)) {}
      FIELD_SET(*this, FIX::TrdRegTimestamp);
      FIELD_SET(*this, FIX::TrdRegTimestampType);
      FIELD_SET(*this, FIX::TrdRegTimestampOrigin);
      FIELD_SET(*this, FIX::DeskType);
      FIELD_SET(*this, FIX::DeskTypeSource);
      FIELD_SET(*this, FIX::DeskOrderHandlingInst);
    };
    FIELD_SET(*this, FIX::SettlType);
    FIELD_SET(*this, FIX::SettlDate);
    FIELD_SET(*this, FIX::UnderlyingSettlementDate);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::MatchType);
    FIELD_SET(*this, FIX::NoSides);
    class NoSides: public FIX::Group
    {
    public:
    NoSides() : FIX::Group(552,54,FIX::message_order(54,1009,1005,1006,1007,83,1008,430,1154,1155,453,1,660,581,81,575,576,578,579,376,377,582,336,625,943,12,13,479,497,157,230,158,159,738,920,921,922,238,237,118,119,155,156,77,58,354,355,752,518,232,136,825,826,591,70,78,1016,1158,1072,1057,1139,1115,37,198,11,526,66,1080,1081,1431,40,44,99,18,39,151,14,59,126,528,529,1432,821,1093,483,586,775,1427,1428,1429,1444,0)) {}
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::SideLastQty);
      FIELD_SET(*this, FIX::SideTradeReportID);
      FIELD_SET(*this, FIX::SideFillStationCd);
      FIELD_SET(*this, FIX::SideReasonCd);
      FIELD_SET(*this, FIX::RptSeq);
      FIELD_SET(*this, FIX::SideTrdSubTyp);
      FIELD_SET(*this, FIX::NetGrossInd);
      FIELD_SET(*this, FIX::SideCurrency);
      FIELD_SET(*this, FIX::SideSettlCurrency);
      FIELD_SET(*this, FIX::NoPartyIDs);
      class NoPartyIDs: public FIX::Group
      {
      public:
      NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
        FIELD_SET(*this, FIX::PartyID);
        FIELD_SET(*this, FIX::PartyIDSource);
        FIELD_SET(*this, FIX::PartyRole);
        FIELD_SET(*this, FIX::NoPartySubIDs);
        class NoPartySubIDs: public FIX::Group
        {
        public:
        NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
          FIELD_SET(*this, FIX::PartySubID);
          FIELD_SET(*this, FIX::PartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::Account);
      FIELD_SET(*this, FIX::AcctIDSource);
      FIELD_SET(*this, FIX::AccountType);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET(*this, FIX::OddLot);
      FIELD_SET(*this, FIX::NoClearingInstructions);
      class NoClearingInstructions: public FIX::Group
      {
      public:
      NoClearingInstructions() : FIX::Group(576,577,FIX::message_order(577,0)) {}
        FIELD_SET(*this, FIX::ClearingInstruction);
      };
      FIELD_SET(*this, FIX::TradeInputSource);
      FIELD_SET(*this, FIX::TradeInputDevice);
      FIELD_SET(*this, FIX::ComplianceID);
      FIELD_SET(*this, FIX::SolicitedFlag);
      FIELD_SET(*this, FIX::CustOrderCapacity);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::TimeBracket);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET(*this, FIX::CommCurrency);
      FIELD_SET(*this, FIX::FundRenewWaiv);
      FIELD_SET(*this, FIX::NumDaysInterest);
      FIELD_SET(*this, FIX::ExDate);
      FIELD_SET(*this, FIX::AccruedInterestRate);
      FIELD_SET(*this, FIX::AccruedInterestAmt);
      FIELD_SET(*this, FIX::InterestAtMaturity);
      FIELD_SET(*this, FIX::EndAccruedInterestAmt);
      FIELD_SET(*this, FIX::StartCash);
      FIELD_SET(*this, FIX::EndCash);
      FIELD_SET(*this, FIX::Concession);
      FIELD_SET(*this, FIX::TotalTakedown);
      FIELD_SET(*this, FIX::NetMoney);
      FIELD_SET(*this, FIX::SettlCurrAmt);
      FIELD_SET(*this, FIX::SettlCurrFxRate);
      FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
      FIELD_SET(*this, FIX::PositionEffect);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
      FIELD_SET(*this, FIX::SideMultiLegReportingType);
      FIELD_SET(*this, FIX::NoContAmts);
      class NoContAmts: public FIX::Group
      {
      public:
      NoContAmts() : FIX::Group(518,519,FIX::message_order(519,520,521,0)) {}
        FIELD_SET(*this, FIX::ContAmtType);
        FIELD_SET(*this, FIX::ContAmtValue);
        FIELD_SET(*this, FIX::ContAmtCurr);
      };
      FIELD_SET(*this, FIX::NoStipulations);
      class NoStipulations: public FIX::Group
      {
      public:
      NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
        FIELD_SET(*this, FIX::StipulationType);
        FIELD_SET(*this, FIX::StipulationValue);
      };
      FIELD_SET(*this, FIX::NoMiscFees);
      class NoMiscFees: public FIX::Group
      {
      public:
      NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,138,139,891,0)) {}
        FIELD_SET(*this, FIX::MiscFeeAmt);
        FIELD_SET(*this, FIX::MiscFeeCurr);
        FIELD_SET(*this, FIX::MiscFeeType);
        FIELD_SET(*this, FIX::MiscFeeBasis);
      };
      FIELD_SET(*this, FIX::ExchangeRule);
      FIELD_SET(*this, FIX::TradeAllocIndicator);
      FIELD_SET(*this, FIX::PreallocMethod);
      FIELD_SET(*this, FIX::AllocID);
      FIELD_SET(*this, FIX::NoAllocs);
      class NoAllocs: public FIX::Group
      {
      public:
      NoAllocs() : FIX::Group(78,79,FIX::message_order(79,661,736,467,756,80,993,1002,989,1136,0)) {}
        FIELD_SET(*this, FIX::AllocAccount);
        FIELD_SET(*this, FIX::AllocAcctIDSource);
        FIELD_SET(*this, FIX::AllocSettlCurrency);
        FIELD_SET(*this, FIX::IndividualAllocID);
        FIELD_SET(*this, FIX::NoNested2PartyIDs);
        class NoNested2PartyIDs: public FIX::Group
        {
        public:
        NoNested2PartyIDs() : FIX::Group(756,757,FIX::message_order(757,758,759,806,0)) {}
          FIELD_SET(*this, FIX::Nested2PartyID);
          FIELD_SET(*this, FIX::Nested2PartyIDSource);
          FIELD_SET(*this, FIX::Nested2PartyRole);
          FIELD_SET(*this, FIX::NoNested2PartySubIDs);
          class NoNested2PartySubIDs: public FIX::Group
          {
          public:
          NoNested2PartySubIDs() : FIX::Group(806,760,FIX::message_order(760,807,0)) {}
            FIELD_SET(*this, FIX::Nested2PartySubID);
            FIELD_SET(*this, FIX::Nested2PartySubIDType);
          };
        };
        FIELD_SET(*this, FIX::AllocQty);
        FIELD_SET(*this, FIX::AllocCustomerCapacity);
        FIELD_SET(*this, FIX::AllocMethod);
        FIELD_SET(*this, FIX::SecondaryIndividualAllocID);
        FIELD_SET(*this, FIX::AllocClearingFeeIndicator);
      };
      FIELD_SET(*this, FIX::NoSideTrdRegTS);
      class NoSideTrdRegTS: public FIX::Group
      {
      public:
      NoSideTrdRegTS() : FIX::Group(1016,1012,FIX::message_order(1012,1013,1014,0)) {}
        FIELD_SET(*this, FIX::SideTrdRegTimestamp);
        FIELD_SET(*this, FIX::SideTrdRegTimestampType);
        FIELD_SET(*this, FIX::SideTrdRegTimestampSrc);
      };
      FIELD_SET(*this, FIX::NoSettlDetails);
      class NoSettlDetails: public FIX::Group
      {
      public:
      NoSettlDetails() : FIX::Group(1158,1164,FIX::message_order(1164,781,0)) {}
        FIELD_SET(*this, FIX::SettlObligSource);
        FIELD_SET(*this, FIX::NoSettlPartyIDs);
        class NoSettlPartyIDs: public FIX::Group
        {
        public:
        NoSettlPartyIDs() : FIX::Group(781,782,FIX::message_order(782,783,784,801,0)) {}
          FIELD_SET(*this, FIX::SettlPartyID);
          FIELD_SET(*this, FIX::SettlPartyIDSource);
          FIELD_SET(*this, FIX::SettlPartyRole);
          FIELD_SET(*this, FIX::NoSettlPartySubIDs);
          class NoSettlPartySubIDs: public FIX::Group
          {
          public:
          NoSettlPartySubIDs() : FIX::Group(801,785,FIX::message_order(785,786,0)) {}
            FIELD_SET(*this, FIX::SettlPartySubID);
            FIELD_SET(*this, FIX::SettlPartySubIDType);
          };
        };
      };
      FIELD_SET(*this, FIX::SideGrossTradeAmt);
      FIELD_SET(*this, FIX::AggressorIndicator);
      FIELD_SET(*this, FIX::ExchangeSpecialInstructions);
      FIELD_SET(*this, FIX::OrderCategory);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::SecondaryOrderID);
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::RefOrderID);
      FIELD_SET(*this, FIX::RefOrderIDSource);
      FIELD_SET(*this, FIX::RefOrdIDReason);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::StopPx);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::OrdStatus);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::OrderPercent);
      FIELD_SET(*this, FIX::RoundingDirection);
      FIELD_SET(*this, FIX::RoundingModulus);
      FIELD_SET(*this, FIX::LeavesQty);
      FIELD_SET(*this, FIX::CumQty);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::DisplayQty);
      FIELD_SET(*this, FIX::SecondaryDisplayQty);
      FIELD_SET(*this, FIX::DisplayWhen);
      FIELD_SET(*this, FIX::DisplayMethod);
      FIELD_SET(*this, FIX::DisplayLowQty);
      FIELD_SET(*this, FIX::DisplayHighQty);
      FIELD_SET(*this, FIX::DisplayMinIncr);
      FIELD_SET(*this, FIX::RefreshQty);
      FIELD_SET(*this, FIX::OrderCapacity);
      FIELD_SET(*this, FIX::OrderRestrictions);
      FIELD_SET(*this, FIX::OrigCustOrderCapacity);
      FIELD_SET(*this, FIX::OrderInputDevice);
      FIELD_SET(*this, FIX::LotType);
      FIELD_SET(*this, FIX::TransBkdTime);
      FIELD_SET(*this, FIX::OrigOrdModTime);
      FIELD_SET(*this, FIX::BookingType);
      FIELD_SET(*this, FIX::SideExecID);
      FIELD_SET(*this, FIX::OrderDelay);
      FIELD_SET(*this, FIX::OrderDelayUnit);
      FIELD_SET(*this, FIX::SideLiquidityInd);
    };
    FIELD_SET(*this, FIX::Volatility);
    FIELD_SET(*this, FIX::DividendYield);
    FIELD_SET(*this, FIX::RiskFreeRate);
    FIELD_SET(*this, FIX::CurrencyRatio);
    FIELD_SET(*this, FIX::CopyMsgIndicator);
    FIELD_SET(*this, FIX::NoTrdRepIndicators);
    class NoTrdRepIndicators: public FIX::Group
    {
    public:
    NoTrdRepIndicators() : FIX::Group(1387,1388,FIX::message_order(1388,1389,0)) {}
      FIELD_SET(*this, FIX::TrdRepPartyRole);
      FIELD_SET(*this, FIX::TrdRepIndicator);
    };
    FIELD_SET(*this, FIX::PublishTrdIndicator);
    FIELD_SET(*this, FIX::TradePublishIndicator);
    FIELD_SET(*this, FIX::ShortSaleReason);
    FIELD_SET(*this, FIX::TierCode);
    FIELD_SET(*this, FIX::MessageEventSource);
    FIELD_SET(*this, FIX::LastUpdateTime);
    FIELD_SET(*this, FIX::RndPx);
    FIELD_SET(*this, FIX::TZTransactTime);
    FIELD_SET(*this, FIX::ReportedPxDiff);
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::FeeMultiplier);
    FIELD_SET(*this, FIX::VenueType);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::MarketID);
  };

}

#endif
