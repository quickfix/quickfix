#ifndef FIX50SP2_ALLOCATIONREPORTACK_H
#define FIX50SP2_ALLOCATIONREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class AllocationReportAck : public Message
  {
  public:
    AllocationReportAck() : Message(MsgType()) {}
    AllocationReportAck(const FIX::Message& m) : Message(m) {}
    AllocationReportAck(const Message& m) : Message(m) {}
    AllocationReportAck(const AllocationReportAck&) = default;
    AllocationReportAck(AllocationReportAck&&) = default;
    AllocationReportAck& operator=(const AllocationReportAck&) = default;
    AllocationReportAck& operator=(AllocationReportAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AT"); }

    AllocationReportAck(
      const FIX::AllocReportID& aAllocReportID )
    : Message(MsgType())
    {
      set(aAllocReportID);
    }

    FIELD_SET(*this, FIX::AllocReportID);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::AllocRequestID);
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::AvgPxIndicator);
    FIELD_SET(*this, FIX::Quantity);
    FIELD_SET(*this, FIX::AllocTransType);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::SecurityIDSource);
    FIELD_SET(*this, FIX::NoSecurityAltID);
    class NoSecurityAltID: public FIX::Group
    {
    public:
    NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,2957,0)) {}
      FIELD_SET(*this, FIX::SecurityAltID);
      FIELD_SET(*this, FIX::SecurityAltIDSource);
      FIELD_SET(*this, FIX::SymbolPositionNumber);
    };
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::ProductComplex);
    FIELD_SET(*this, FIX::SecurityGroup);
    FIELD_SET(*this, FIX::CFICode);
    FIELD_SET(*this, FIX::UPICode);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDate);
    FIELD_SET(*this, FIX::MaturityTime);
    FIELD_SET(*this, FIX::SettleOnOpenFlag);
    FIELD_SET(*this, FIX::InstrmtAssignmentMethod);
    FIELD_SET(*this, FIX::SecurityStatus);
    FIELD_SET(*this, FIX::CouponPaymentDate);
    FIELD_SET(*this, FIX::RestructuringType);
    FIELD_SET(*this, FIX::Seniority);
    FIELD_SET(*this, FIX::NotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::OriginalNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::AttachmentPoint);
    FIELD_SET(*this, FIX::DetachmentPoint);
    FIELD_SET(*this, FIX::ObligationType);
    FIELD_SET(*this, FIX::AssetGroup);
    FIELD_SET(*this, FIX::AssetClass);
    FIELD_SET(*this, FIX::AssetSubClass);
    FIELD_SET(*this, FIX::AssetType);
    FIELD_SET(*this, FIX::AssetSubType);
    FIELD_SET(*this, FIX::NoSecondaryAssetClasses);
    class NoSecondaryAssetClasses: public FIX::Group
    {
    public:
    NoSecondaryAssetClasses() : FIX::Group(1976,1977,FIX::message_order(1977,1978,1979,2741,0)) {}
      FIELD_SET(*this, FIX::SecondaryAssetClass);
      FIELD_SET(*this, FIX::SecondaryAssetSubClass);
      FIELD_SET(*this, FIX::SecondaryAssetType);
      FIELD_SET(*this, FIX::SecondaryAssetSubType);
    };
    FIELD_SET(*this, FIX::NoAssetAttributes);
    class NoAssetAttributes: public FIX::Group
    {
    public:
    NoAssetAttributes() : FIX::Group(2304,2305,FIX::message_order(2305,2306,2307,0)) {}
      FIELD_SET(*this, FIX::AssetAttributeType);
      FIELD_SET(*this, FIX::AssetAttributeValue);
      FIELD_SET(*this, FIX::AssetAttributeLimit);
    };
    FIELD_SET(*this, FIX::SwapClass);
    FIELD_SET(*this, FIX::SwapSubClass);
    FIELD_SET(*this, FIX::NthToDefault);
    FIELD_SET(*this, FIX::MthToDefault);
    FIELD_SET(*this, FIX::SettledEntityMatrixSource);
    FIELD_SET(*this, FIX::SettledEntityMatrixPublicationDate);
    FIELD_SET(*this, FIX::CouponType);
    FIELD_SET(*this, FIX::TotalIssuedAmount);
    FIELD_SET(*this, FIX::CouponFrequencyPeriod);
    FIELD_SET(*this, FIX::CouponFrequencyUnit);
    FIELD_SET(*this, FIX::CouponDayCount);
    FIELD_SET(*this, FIX::CouponOtherDayCount);
    FIELD_SET(*this, FIX::ConvertibleBondEquityID);
    FIELD_SET(*this, FIX::ConvertibleBondEquityIDSource);
    FIELD_SET(*this, FIX::ContractPriceRefMonth);
    FIELD_SET(*this, FIX::LienSeniority);
    FIELD_SET(*this, FIX::LoanFacility);
    FIELD_SET(*this, FIX::ReferenceEntityType);
    FIELD_SET(*this, FIX::IndexSeries);
    FIELD_SET(*this, FIX::IndexAnnexVersion);
    FIELD_SET(*this, FIX::IndexAnnexDate);
    FIELD_SET(*this, FIX::IndexAnnexSource);
    FIELD_SET(*this, FIX::SettlRateIndex);
    FIELD_SET(*this, FIX::SettlRateIndexLocation);
    FIELD_SET(*this, FIX::OptionExpirationDesc);
    FIELD_SET(*this, FIX::EncodedOptionExpirationDescLen);
    FIELD_SET(*this, FIX::EncodedOptionExpirationDesc);
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
    FIELD_SET(*this, FIX::OrigStrikePrice);
    FIELD_SET(*this, FIX::StrikePricePrecision);
    FIELD_SET(*this, FIX::StrikeCurrency);
    FIELD_SET(*this, FIX::StrikeCurrencyCodeSource);
    FIELD_SET(*this, FIX::StrikeMultiplier);
    FIELD_SET(*this, FIX::StrikeValue);
    FIELD_SET(*this, FIX::StrikeUnitOfMeasure);
    FIELD_SET(*this, FIX::StrikeIndex);
    FIELD_SET(*this, FIX::StrikeIndexCurvePoint);
    FIELD_SET(*this, FIX::StrikeIndexSpread);
    FIELD_SET(*this, FIX::StrikeIndexQuote);
    FIELD_SET(*this, FIX::StrikePriceDeterminationMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryPrecision);
    FIELD_SET(*this, FIX::UnderlyingPriceDeterminationMethod);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::ContractMultiplierUnit);
    FIELD_SET(*this, FIX::TradingUnitPeriodMultiplier);
    FIELD_SET(*this, FIX::FlowScheduleType);
    FIELD_SET(*this, FIX::MinPriceIncrement);
    FIELD_SET(*this, FIX::MinPriceIncrementAmount);
    FIELD_SET(*this, FIX::UnitOfMeasure);
    FIELD_SET(*this, FIX::UnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnitOfMeasureCurrency);
    FIELD_SET(*this, FIX::UnitOfMeasureCurrencyCodeSource);
    FIELD_SET(*this, FIX::PriceUnitOfMeasure);
    FIELD_SET(*this, FIX::PriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::PriceUnitOfMeasureCurrency);
    FIELD_SET(*this, FIX::PriceUnitOfMeasureCurrencyCodeSource);
    FIELD_SET(*this, FIX::SettlMethod);
    FIELD_SET(*this, FIX::SettlSubMethod);
    FIELD_SET(*this, FIX::ExerciseStyle);
    FIELD_SET(*this, FIX::OptPayoutType);
    FIELD_SET(*this, FIX::OptPayoutAmount);
    FIELD_SET(*this, FIX::ReturnTrigger);
    FIELD_SET(*this, FIX::PriceQuoteMethod);
    FIELD_SET(*this, FIX::ValuationMethod);
    FIELD_SET(*this, FIX::ValuationSource);
    FIELD_SET(*this, FIX::ValuationReferenceModel);
    FIELD_SET(*this, FIX::PriceQuoteCurrency);
    FIELD_SET(*this, FIX::PriceQuoteCurrencyCodeSource);
    FIELD_SET(*this, FIX::ListMethod);
    FIELD_SET(*this, FIX::CapPrice);
    FIELD_SET(*this, FIX::FloorPrice);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::InTheMoneyCondition);
    FIELD_SET(*this, FIX::ContraryInstructionEligibilityIndicator);
    FIELD_SET(*this, FIX::FlexibleIndicator);
    FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
    FIELD_SET(*this, FIX::BlockTradeEligibilityIndicator);
    FIELD_SET(*this, FIX::LowExercisePriceOptionIndicator);
    FIELD_SET(*this, FIX::TimeUnit);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::PositionLimit);
    FIELD_SET(*this, FIX::NTPositionLimit);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::FinancialInstrumentShortName);
    FIELD_SET(*this, FIX::FinancialInstrumentFullName);
    FIELD_SET(*this, FIX::EncodedFinancialInstrumentFullNameLen);
    FIELD_SET(*this, FIX::EncodedFinancialInstrumentFullName);
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
    NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,1145,1827,1826,2340,867,868,1578,1579,0)) {}
      FIELD_SET(*this, FIX::EventType);
      FIELD_SET(*this, FIX::EventDate);
      FIELD_SET(*this, FIX::EventTime);
      FIELD_SET(*this, FIX::EventTimeUnit);
      FIELD_SET(*this, FIX::EventTimePeriod);
      FIELD_SET(*this, FIX::EventMonthYear);
      FIELD_SET(*this, FIX::EventPx);
      FIELD_SET(*this, FIX::EventText);
      FIELD_SET(*this, FIX::EncodedEventTextLen);
      FIELD_SET(*this, FIX::EncodedEventText);
    };
    FIELD_SET(*this, FIX::DatedDate);
    FIELD_SET(*this, FIX::InterestAccrualDate);
    FIELD_SET(*this, FIX::NoInstrumentParties);
    class NoInstrumentParties: public FIX::Group
    {
    public:
    NoInstrumentParties() : FIX::Group(1018,1019,FIX::message_order(1019,1050,1051,2378,1052,0)) {}
      FIELD_SET(*this, FIX::InstrumentPartyID);
      FIELD_SET(*this, FIX::InstrumentPartyIDSource);
      FIELD_SET(*this, FIX::InstrumentPartyRole);
      FIELD_SET(*this, FIX::InstrumentPartyRoleQualifier);
      FIELD_SET(*this, FIX::NoInstrumentPartySubIDs);
      class NoInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoInstrumentPartySubIDs() : FIX::Group(1052,1053,FIX::message_order(1053,1054,0)) {}
        FIELD_SET(*this, FIX::InstrumentPartySubID);
        FIELD_SET(*this, FIX::InstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::ShortSaleRestriction);
    FIELD_SET(*this, FIX::NoComplexEvents);
    class NoComplexEvents: public FIX::Group
    {
    public:
    NoComplexEvents() : FIX::Group(1483,1484,FIX::message_order(1484,2117,2118,2119,1485,2120,2121,2122,2941,1486,2123,1487,1488,1489,1490,1491,2124,2942,2125,2943,2126,2127,2407,2408,2128,2129,2130,2131,2132,41013,41020,41021,41022,41023,41024,41025,41026,41027,41028,41010,2133,2134,2135,2136,2137,41029,40997,2597,2598,2599,2138,2139,0)) {}
      FIELD_SET(*this, FIX::ComplexEventType);
      FIELD_SET(*this, FIX::ComplexOptPayoutPaySide);
      FIELD_SET(*this, FIX::ComplexOptPayoutReceiveSide);
      FIELD_SET(*this, FIX::ComplexOptPayoutUnderlier);
      FIELD_SET(*this, FIX::ComplexOptPayoutAmount);
      FIELD_SET(*this, FIX::ComplexOptPayoutPercentage);
      FIELD_SET(*this, FIX::ComplexOptPayoutTime);
      FIELD_SET(*this, FIX::ComplexOptPayoutCurrency);
      FIELD_SET(*this, FIX::ComplexOptPayoutCurrencyCodeSource);
      FIELD_SET(*this, FIX::ComplexEventPrice);
      FIELD_SET(*this, FIX::ComplexEventPricePercentage);
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
      FIELD_SET(*this, FIX::ComplexEventCurrencyOne);
      FIELD_SET(*this, FIX::ComplexEventCurrencyOneCodeSource);
      FIELD_SET(*this, FIX::ComplexEventCurrencyTwo);
      FIELD_SET(*this, FIX::ComplexEventCurrencyTwoCodeSource);
      FIELD_SET(*this, FIX::ComplexEventQuoteBasis);
      FIELD_SET(*this, FIX::ComplexEventFixedFXRate);
      FIELD_SET(*this, FIX::ComplexEventSpotRate);
      FIELD_SET(*this, FIX::ComplexEventForwardPoints);
      FIELD_SET(*this, FIX::ComplexEventDeterminationMethod);
      FIELD_SET(*this, FIX::ComplexEventCalculationAgent);
      FIELD_SET(*this, FIX::ComplexEventStrikePrice);
      FIELD_SET(*this, FIX::ComplexEventStrikeFactor);
      FIELD_SET(*this, FIX::ComplexEventStrikeNumberOfOptions);
      FIELD_SET(*this, FIX::NoComplexEventRateSources);
      class NoComplexEventRateSources: public FIX::Group
      {
      public:
      NoComplexEventRateSources() : FIX::Group(41013,41014,FIX::message_order(41014,41015,41016,41017,0)) {}
        FIELD_SET(*this, FIX::ComplexEventRateSource);
        FIELD_SET(*this, FIX::ComplexEventRateSourceType);
        FIELD_SET(*this, FIX::ComplexEventReferencePage);
        FIELD_SET(*this, FIX::ComplexEventReferencePageHeading);
      };
      FIELD_SET(*this, FIX::ComplexEventDateUnadjusted);
      FIELD_SET(*this, FIX::ComplexEventDateRelativeTo);
      FIELD_SET(*this, FIX::ComplexEventDateOffsetPeriod);
      FIELD_SET(*this, FIX::ComplexEventDateOffsetUnit);
      FIELD_SET(*this, FIX::ComplexEventDateOffsetDayType);
      FIELD_SET(*this, FIX::ComplexEventDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoComplexEventDateBusinessCenters);
      class NoComplexEventDateBusinessCenters: public FIX::Group
      {
      public:
      NoComplexEventDateBusinessCenters() : FIX::Group(41018,41019,FIX::message_order(41019,0)) {}
        FIELD_SET(*this, FIX::ComplexEventDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ComplexEventDateAdjusted);
      FIELD_SET(*this, FIX::ComplexEventFixingTime);
      FIELD_SET(*this, FIX::ComplexEventFixingTimeBusinessCenter);
      FIELD_SET(*this, FIX::NoComplexEventPeriods);
      class NoComplexEventPeriods: public FIX::Group
      {
      public:
      NoComplexEventPeriods() : FIX::Group(41010,41011,FIX::message_order(41011,41012,41031,41007,40994,0)) {}
        FIELD_SET(*this, FIX::ComplexEventPeriodType);
        FIELD_SET(*this, FIX::ComplexEventBusinessCenter);
        FIELD_SET(*this, FIX::NoComplexEventSchedules);
        class NoComplexEventSchedules: public FIX::Group
        {
        public:
        NoComplexEventSchedules() : FIX::Group(41031,41032,FIX::message_order(41032,41033,41034,41035,41036,0)) {}
          FIELD_SET(*this, FIX::ComplexEventScheduleStartDate);
          FIELD_SET(*this, FIX::ComplexEventScheduleEndDate);
          FIELD_SET(*this, FIX::ComplexEventScheduleFrequencyPeriod);
          FIELD_SET(*this, FIX::ComplexEventScheduleFrequencyUnit);
          FIELD_SET(*this, FIX::ComplexEventScheduleRollConvention);
        };
        FIELD_SET(*this, FIX::NoComplexEventPeriodDateTimes);
        class NoComplexEventPeriodDateTimes: public FIX::Group
        {
        public:
        NoComplexEventPeriodDateTimes() : FIX::Group(41007,41008,FIX::message_order(41008,41009,0)) {}
          FIELD_SET(*this, FIX::ComplexEventPeriodDate);
          FIELD_SET(*this, FIX::ComplexEventPeriodTime);
        };
        FIELD_SET(*this, FIX::NoComplexEventAveragingObservations);
        class NoComplexEventAveragingObservations: public FIX::Group
        {
        public:
        NoComplexEventAveragingObservations() : FIX::Group(40994,40995,FIX::message_order(40995,40996,0)) {}
          FIELD_SET(*this, FIX::ComplexEventAveragingObservationNumber);
          FIELD_SET(*this, FIX::ComplexEventAveragingWeight);
        };
      };
      FIELD_SET(*this, FIX::ComplexEventCreditEventsXIDRef);
      FIELD_SET(*this, FIX::ComplexEventCreditEventNotifyingParty);
      FIELD_SET(*this, FIX::ComplexEventCreditEventBusinessCenter);
      FIELD_SET(*this, FIX::ComplexEventCreditEventStandardSources);
      FIELD_SET(*this, FIX::ComplexEventCreditEventMinimumSources);
      FIELD_SET(*this, FIX::NoComplexEventCreditEventSources);
      class NoComplexEventCreditEventSources: public FIX::Group
      {
      public:
      NoComplexEventCreditEventSources() : FIX::Group(41029,41030,FIX::message_order(41030,0)) {}
        FIELD_SET(*this, FIX::ComplexEventCreditEventSource);
      };
      FIELD_SET(*this, FIX::NoComplexEventCreditEvents);
      class NoComplexEventCreditEvents: public FIX::Group
      {
      public:
      NoComplexEventCreditEvents() : FIX::Group(40997,40998,FIX::message_order(40998,40999,41000,41001,41002,41003,41004,41005,0)) {}
        FIELD_SET(*this, FIX::ComplexEventCreditEventType);
        FIELD_SET(*this, FIX::ComplexEventCreditEventValue);
        FIELD_SET(*this, FIX::ComplexEventCreditEventCurrency);
        FIELD_SET(*this, FIX::ComplexEventCreditEventPeriod);
        FIELD_SET(*this, FIX::ComplexEventCreditEventUnit);
        FIELD_SET(*this, FIX::ComplexEventCreditEventDayType);
        FIELD_SET(*this, FIX::ComplexEventCreditEventRateSource);
        FIELD_SET(*this, FIX::NoComplexEventCreditEventQualifiers);
        class NoComplexEventCreditEventQualifiers: public FIX::Group
        {
        public:
        NoComplexEventCreditEventQualifiers() : FIX::Group(41005,41006,FIX::message_order(41006,0)) {}
          FIELD_SET(*this, FIX::ComplexEventCreditEventQualifier);
        };
      };
      FIELD_SET(*this, FIX::ComplexEventFuturesPriceValuation);
      FIELD_SET(*this, FIX::ComplexEventOptionsPriceValuation);
      FIELD_SET(*this, FIX::ComplexEventPVFinalPriceElectionFallback);
      FIELD_SET(*this, FIX::ComplexEventXID);
      FIELD_SET(*this, FIX::ComplexEventXIDRef);
    };
    FIELD_SET(*this, FIX::RefTickTableID);
    FIELD_SET(*this, FIX::StrategyType);
    FIELD_SET(*this, FIX::CommonPricingIndicator);
    FIELD_SET(*this, FIX::SettlDisruptionProvision);
    FIELD_SET(*this, FIX::DeliveryRouteOrCharter);
    FIELD_SET(*this, FIX::InstrumentRoundingDirection);
    FIELD_SET(*this, FIX::InstrumentRoundingPrecision);
    FIELD_SET(*this, FIX::InstrumentPricePrecision);
    FIELD_SET(*this, FIX::SecurityReferenceDataSupplement);
    FIELD_SET(*this, FIX::BusinessDayConvention);
    FIELD_SET(*this, FIX::NoBusinessCenters);
    class NoBusinessCenters: public FIX::Group
    {
    public:
    NoBusinessCenters() : FIX::Group(40278,40471,FIX::message_order(40471,0)) {}
      FIELD_SET(*this, FIX::BusinessCenter);
    };
    FIELD_SET(*this, FIX::DateRollConvention);
    FIELD_SET(*this, FIX::PricingDateUnadjusted);
    FIELD_SET(*this, FIX::PricingDateBusinessDayConvention);
    FIELD_SET(*this, FIX::NoPricingDateBusinessCenters);
    class NoPricingDateBusinessCenters: public FIX::Group
    {
    public:
    NoPricingDateBusinessCenters() : FIX::Group(41230,41231,FIX::message_order(41231,0)) {}
      FIELD_SET(*this, FIX::PricingDateBusinessCenter);
    };
    FIELD_SET(*this, FIX::PricingDateAdjusted);
    FIELD_SET(*this, FIX::PricingTime);
    FIELD_SET(*this, FIX::PricingTimeBusinessCenter);
    FIELD_SET(*this, FIX::MarketDisruptionProvision);
    FIELD_SET(*this, FIX::NoMarketDisruptionEvents);
    class NoMarketDisruptionEvents: public FIX::Group
    {
    public:
    NoMarketDisruptionEvents() : FIX::Group(41092,41093,FIX::message_order(41093,40991,0)) {}
      FIELD_SET(*this, FIX::MarketDisruptionEvent);
      FIELD_SET(*this, FIX::MarketDisruptionValue);
    };
    FIELD_SET(*this, FIX::MarketDisruptionFallbackProvision);
    FIELD_SET(*this, FIX::NoMarketDisruptionFallbacks);
    class NoMarketDisruptionFallbacks: public FIX::Group
    {
    public:
    NoMarketDisruptionFallbacks() : FIX::Group(41094,41095,FIX::message_order(41095,40992,0)) {}
      FIELD_SET(*this, FIX::MarketDisruptionFallbackType);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackValue);
    };
    FIELD_SET(*this, FIX::NoMarketDisruptionFallbackReferencePrices);
    class NoMarketDisruptionFallbackReferencePrices: public FIX::Group
    {
    public:
    NoMarketDisruptionFallbackReferencePrices() : FIX::Group(41096,41097,FIX::message_order(41097,41098,41099,41100,41101,41102,41103,41104,41105,0)) {}
      FIELD_SET(*this, FIX::MarketDisruptionFallbackUnderlierType);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackUnderlierSecurityID);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackUnderlierSecurityIDSource);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackUnderlierSecurityDesc);
      FIELD_SET(*this, FIX::EncodedMarketDisruptionFallbackUnderlierSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedMarketDisruptionFallbackUnderlierSecurityDesc);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackOpenUnits);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackBasketCurrency);
      FIELD_SET(*this, FIX::MarketDisruptionFallbackBasketDivisor);
    };
    FIELD_SET(*this, FIX::MarketDisruptionMaximumDays);
    FIELD_SET(*this, FIX::MarketDisruptionMaterialityPercentage);
    FIELD_SET(*this, FIX::MarketDisruptionMinimumFuturesContracts);
    FIELD_SET(*this, FIX::ExerciseDesc);
    FIELD_SET(*this, FIX::EncodedExerciseDescLen);
    FIELD_SET(*this, FIX::EncodedExerciseDesc);
    FIELD_SET(*this, FIX::AutomaticExerciseIndicator);
    FIELD_SET(*this, FIX::AutomaticExerciseThresholdRate);
    FIELD_SET(*this, FIX::ExerciseConfirmationMethod);
    FIELD_SET(*this, FIX::ManualNoticeBusinessCenter);
    FIELD_SET(*this, FIX::FallbackExerciseIndicator);
    FIELD_SET(*this, FIX::LimitedRightToConfirmIndicator);
    FIELD_SET(*this, FIX::ExerciseSplitTicketIndicator);
    FIELD_SET(*this, FIX::SettlMethodElectingPartySide);
    FIELD_SET(*this, FIX::SettlMethodElectionDateUnadjusted);
    FIELD_SET(*this, FIX::SettlMethodElectionDateBusinessDayConvention);
    FIELD_SET(*this, FIX::NoSettlMethodElectionDateBusinessCenters);
    class NoSettlMethodElectionDateBusinessCenters: public FIX::Group
    {
    public:
    NoSettlMethodElectionDateBusinessCenters() : FIX::Group(42775,42776,FIX::message_order(42776,0)) {}
      FIELD_SET(*this, FIX::SettlMethodElectionDateBusinessCenter);
    };
    FIELD_SET(*this, FIX::SettlMethodElectionDateRelativeTo);
    FIELD_SET(*this, FIX::SettlMethodElectionDateOffsetPeriod);
    FIELD_SET(*this, FIX::SettlMethodElectionDateOffsetUnit);
    FIELD_SET(*this, FIX::SettlMethodElectionDateOffsetDayType);
    FIELD_SET(*this, FIX::SettlMethodElectionDateAdjusted);
    FIELD_SET(*this, FIX::OptionExerciseBusinessDayConvention);
    FIELD_SET(*this, FIX::NoOptionExerciseBusinessCenters);
    class NoOptionExerciseBusinessCenters: public FIX::Group
    {
    public:
    NoOptionExerciseBusinessCenters() : FIX::Group(41116,41117,FIX::message_order(41117,0)) {}
      FIELD_SET(*this, FIX::OptionExerciseBusinessCenter);
    };
    FIELD_SET(*this, FIX::NoOptionExerciseDates);
    class NoOptionExerciseDates: public FIX::Group
    {
    public:
    NoOptionExerciseDates() : FIX::Group(41137,41138,FIX::message_order(41138,41139,0)) {}
      FIELD_SET(*this, FIX::OptionExerciseDate);
      FIELD_SET(*this, FIX::OptionExerciseDateType);
    };
    FIELD_SET(*this, FIX::OptionExerciseEarliestDateOffsetDayType);
    FIELD_SET(*this, FIX::OptionExerciseEarliestDateOffsetPeriod);
    FIELD_SET(*this, FIX::OptionExerciseEarliestDateOffsetUnit);
    FIELD_SET(*this, FIX::OptionExerciseFrequencyPeriod);
    FIELD_SET(*this, FIX::OptionExerciseFrequencyUnit);
    FIELD_SET(*this, FIX::OptionExerciseStartDateUnadjusted);
    FIELD_SET(*this, FIX::OptionExerciseStartDateRelativeTo);
    FIELD_SET(*this, FIX::OptionExerciseStartDateOffsetPeriod);
    FIELD_SET(*this, FIX::OptionExerciseStartDateOffsetUnit);
    FIELD_SET(*this, FIX::OptionExerciseStartDateOffsetDayType);
    FIELD_SET(*this, FIX::OptionExerciseStartDateAdjusted);
    FIELD_SET(*this, FIX::OptionExerciseSkip);
    FIELD_SET(*this, FIX::OptionExerciseNominationDeadline);
    FIELD_SET(*this, FIX::OptionExerciseFirstDateUnadjusted);
    FIELD_SET(*this, FIX::OptionExerciseLastDateUnadjusted);
    FIELD_SET(*this, FIX::OptionExerciseEarliestTime);
    FIELD_SET(*this, FIX::OptionExerciseLatestTime);
    FIELD_SET(*this, FIX::OptionExerciseTimeBusinessCenter);
    FIELD_SET(*this, FIX::OptionExerciseExpirationDateBusinessDayConvention);
    FIELD_SET(*this, FIX::NoOptionExerciseExpirationDateBusinessCenters);
    class NoOptionExerciseExpirationDateBusinessCenters: public FIX::Group
    {
    public:
    NoOptionExerciseExpirationDateBusinessCenters() : FIX::Group(41140,41141,FIX::message_order(41141,0)) {}
      FIELD_SET(*this, FIX::OptionExerciseExpirationDateBusinessCenter);
    };
    FIELD_SET(*this, FIX::NoOptionExerciseExpirationDates);
    class NoOptionExerciseExpirationDates: public FIX::Group
    {
    public:
    NoOptionExerciseExpirationDates() : FIX::Group(41152,41153,FIX::message_order(41153,41154,0)) {}
      FIELD_SET(*this, FIX::OptionExerciseExpirationDate);
      FIELD_SET(*this, FIX::OptionExerciseExpirationDateType);
    };
    FIELD_SET(*this, FIX::OptionExerciseExpirationDateRelativeTo);
    FIELD_SET(*this, FIX::OptionExerciseExpirationDateOffsetPeriod);
    FIELD_SET(*this, FIX::OptionExerciseExpirationDateOffsetUnit);
    FIELD_SET(*this, FIX::OptionExerciseExpirationFrequencyPeriod);
    FIELD_SET(*this, FIX::OptionExerciseExpirationFrequencyUnit);
    FIELD_SET(*this, FIX::OptionExerciseExpirationRollConvention);
    FIELD_SET(*this, FIX::OptionExerciseExpirationDateOffsetDayType);
    FIELD_SET(*this, FIX::OptionExerciseExpirationTime);
    FIELD_SET(*this, FIX::OptionExerciseExpirationTimeBusinessCenter);
    FIELD_SET(*this, FIX::MakeWholeDate);
    FIELD_SET(*this, FIX::MakeWholeAmount);
    FIELD_SET(*this, FIX::MakeWholeBenchmarkCurveName);
    FIELD_SET(*this, FIX::MakeWholeBenchmarkCurvePoint);
    FIELD_SET(*this, FIX::MakeWholeRecallSpread);
    FIELD_SET(*this, FIX::MakeWholeBenchmarkQuote);
    FIELD_SET(*this, FIX::MakeWholeInterpolationMethod);
    FIELD_SET(*this, FIX::NoStreams);
    class NoStreams: public FIX::Group
    {
    public:
    NoStreams() : FIX::Group(40049,40050,FIX::message_order(40050,41303,40051,42784,42785,40052,40053,41305,40054,40055,42786,42787,41306,41307,41308,41309,41310,41311,41251,41252,41253,41254,41255,41256,41257,42587,41258,41259,41260,41261,41262,41263,41264,41265,41266,41267,41268,41269,41270,41271,41272,41273,41274,41275,41276,40907,40908,40910,40911,40912,40913,40914,40065,40066,40068,40069,40070,40071,40072,41244,41245,40073,40075,40076,40078,40079,40080,40081,40082,40083,40084,41246,41247,41248,40738,40739,40740,42600,40741,40742,43106,40743,40744,40745,40746,40747,42601,42602,42603,42604,40748,40749,40750,41180,41181,41182,41183,41184,41185,41186,42605,40828,40872,41058,41059,41060,41061,41062,42192,42193,41063,41064,41065,41066,41067,41218,41068,41069,41070,41071,41072,41073,41074,41075,41076,41077,41078,41079,41080,43094,41037,40056,40982,40983,0)) {}
      FIELD_SET(*this, FIX::StreamType);
      FIELD_SET(*this, FIX::StreamXID);
      FIELD_SET(*this, FIX::StreamDesc);
      FIELD_SET(*this, FIX::StreamVersion);
      FIELD_SET(*this, FIX::StreamVersionEffectiveDate);
      FIELD_SET(*this, FIX::StreamPaySide);
      FIELD_SET(*this, FIX::StreamReceiveSide);
      FIELD_SET(*this, FIX::StreamNotionalXIDRef);
      FIELD_SET(*this, FIX::StreamNotional);
      FIELD_SET(*this, FIX::StreamCurrency);
      FIELD_SET(*this, FIX::StreamNotionalDeterminationMethod);
      FIELD_SET(*this, FIX::StreamNotionalAdjustments);
      FIELD_SET(*this, FIX::StreamNotionalFrequencyPeriod);
      FIELD_SET(*this, FIX::StreamNotionalFrequencyUnit);
      FIELD_SET(*this, FIX::StreamNotionalCommodityFrequency);
      FIELD_SET(*this, FIX::StreamNotionalUnitOfMeasure);
      FIELD_SET(*this, FIX::StreamTotalNotional);
      FIELD_SET(*this, FIX::StreamTotalNotionalUnitOfMeasure);
      FIELD_SET(*this, FIX::StreamCommodityBase);
      FIELD_SET(*this, FIX::StreamCommodityType);
      FIELD_SET(*this, FIX::StreamCommoditySecurityID);
      FIELD_SET(*this, FIX::StreamCommoditySecurityIDSource);
      FIELD_SET(*this, FIX::NoStreamCommodityAltIDs);
      class NoStreamCommodityAltIDs: public FIX::Group
      {
      public:
      NoStreamCommodityAltIDs() : FIX::Group(41277,41278,FIX::message_order(41278,41279,0)) {}
        FIELD_SET(*this, FIX::StreamCommodityAltID);
        FIELD_SET(*this, FIX::StreamCommodityAltIDSource);
      };
      FIELD_SET(*this, FIX::StreamCommodityDesc);
      FIELD_SET(*this, FIX::EncodedStreamCommodityDescLen);
      FIELD_SET(*this, FIX::EncodedStreamCommodityDesc);
      FIELD_SET(*this, FIX::StreamCommodityDeliveryPricingRegion);
      FIELD_SET(*this, FIX::NoStreamAssetAttributes);
      class NoStreamAssetAttributes: public FIX::Group
      {
      public:
      NoStreamAssetAttributes() : FIX::Group(41237,41238,FIX::message_order(41238,41239,41240,0)) {}
        FIELD_SET(*this, FIX::StreamAssetAttributeType);
        FIELD_SET(*this, FIX::StreamAssetAttributeValue);
        FIELD_SET(*this, FIX::StreamAssetAttributeLimit);
      };
      FIELD_SET(*this, FIX::StreamCommodityUnitOfMeasure);
      FIELD_SET(*this, FIX::StreamCommodityCurrency);
      FIELD_SET(*this, FIX::StreamCommodityExchange);
      FIELD_SET(*this, FIX::StreamCommodityRateSource);
      FIELD_SET(*this, FIX::StreamCommodityRateReferencePage);
      FIELD_SET(*this, FIX::StreamCommodityRateReferencePageHeading);
      FIELD_SET(*this, FIX::StreamDataProvider);
      FIELD_SET(*this, FIX::NoStreamCommodityDataSources);
      class NoStreamCommodityDataSources: public FIX::Group
      {
      public:
      NoStreamCommodityDataSources() : FIX::Group(41280,41281,FIX::message_order(41281,41282,0)) {}
        FIELD_SET(*this, FIX::StreamCommodityDataSourceID);
        FIELD_SET(*this, FIX::StreamCommodityDataSourceIDType);
      };
      FIELD_SET(*this, FIX::StreamCommodityPricingType);
      FIELD_SET(*this, FIX::StreamCommodityNearbySettlDayPeriod);
      FIELD_SET(*this, FIX::StreamCommodityNearbySettlDayUnit);
      FIELD_SET(*this, FIX::StreamCommoditySettlDateUnadjusted);
      FIELD_SET(*this, FIX::StreamCommoditySettlDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoStreamCommoditySettlBusinessCenters);
      class NoStreamCommoditySettlBusinessCenters: public FIX::Group
      {
      public:
      NoStreamCommoditySettlBusinessCenters() : FIX::Group(41249,41250,FIX::message_order(41250,0)) {}
        FIELD_SET(*this, FIX::StreamCommoditySettlBusinessCenter);
      };
      FIELD_SET(*this, FIX::StreamCommoditySettlDateAdjusted);
      FIELD_SET(*this, FIX::StreamCommoditySettlMonth);
      FIELD_SET(*this, FIX::StreamCommoditySettlDateRollPeriod);
      FIELD_SET(*this, FIX::StreamCommoditySettlDateRollUnit);
      FIELD_SET(*this, FIX::StreamCommoditySettlDayType);
      FIELD_SET(*this, FIX::NoStreamCommoditySettlPeriods);
      class NoStreamCommoditySettlPeriods: public FIX::Group
      {
      public:
      NoStreamCommoditySettlPeriods() : FIX::Group(41289,41290,FIX::message_order(41290,41291,41292,41293,41294,41295,41296,41297,41298,41299,41300,41283,41301,41302,0)) {}
        FIELD_SET(*this, FIX::StreamCommoditySettlCountry);
        FIELD_SET(*this, FIX::StreamCommoditySettlTimeZone);
        FIELD_SET(*this, FIX::StreamCommoditySettlFlowType);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodNotional);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodFrequencyPeriod);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodFrequencyUnit);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodPrice);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodPriceUnitOfMeasure);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodPriceCurrency);
        FIELD_SET(*this, FIX::StreamCommoditySettlHolidaysProcessingInstruction);
        FIELD_SET(*this, FIX::NoStreamCommoditySettlDays);
        class NoStreamCommoditySettlDays: public FIX::Group
        {
        public:
        NoStreamCommoditySettlDays() : FIX::Group(41283,41284,FIX::message_order(41284,41285,41286,0)) {}
          FIELD_SET(*this, FIX::StreamCommoditySettlDay);
          FIELD_SET(*this, FIX::StreamCommoditySettlTotalHours);
          FIELD_SET(*this, FIX::NoStreamCommoditySettlTimes);
          class NoStreamCommoditySettlTimes: public FIX::Group
          {
          public:
          NoStreamCommoditySettlTimes() : FIX::Group(41286,41287,FIX::message_order(41287,41288,41588,0)) {}
            FIELD_SET(*this, FIX::StreamCommoditySettlStart);
            FIELD_SET(*this, FIX::StreamCommoditySettlEnd);
            FIELD_SET(*this, FIX::StreamCommoditySettlTimeType);
          };
        };
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodXID);
        FIELD_SET(*this, FIX::StreamCommoditySettlPeriodXIDRef);
      };
      FIELD_SET(*this, FIX::StreamCommodityXID);
      FIELD_SET(*this, FIX::StreamCommodityXIDRef);
      FIELD_SET(*this, FIX::StreamEffectiveDateUnadjusted);
      FIELD_SET(*this, FIX::StreamEffectiveDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoStreamEffectiveDateBusinessCenters);
      class NoStreamEffectiveDateBusinessCenters: public FIX::Group
      {
      public:
      NoStreamEffectiveDateBusinessCenters() : FIX::Group(40960,40909,FIX::message_order(40909,0)) {}
        FIELD_SET(*this, FIX::StreamEffectiveDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::StreamEffectiveDateRelativeTo);
      FIELD_SET(*this, FIX::StreamEffectiveDateOffsetPeriod);
      FIELD_SET(*this, FIX::StreamEffectiveDateOffsetUnit);
      FIELD_SET(*this, FIX::StreamEffectiveDateOffsetDayType);
      FIELD_SET(*this, FIX::StreamEffectiveDateAdjusted);
      FIELD_SET(*this, FIX::StreamTerminationDateUnadjusted);
      FIELD_SET(*this, FIX::StreamTerminationDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoStreamTerminationDateBusinessCenters);
      class NoStreamTerminationDateBusinessCenters: public FIX::Group
      {
      public:
      NoStreamTerminationDateBusinessCenters() : FIX::Group(40961,40067,FIX::message_order(40067,0)) {}
        FIELD_SET(*this, FIX::StreamTerminationDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::StreamTerminationDateRelativeTo);
      FIELD_SET(*this, FIX::StreamTerminationDateOffsetPeriod);
      FIELD_SET(*this, FIX::StreamTerminationDateOffsetUnit);
      FIELD_SET(*this, FIX::StreamTerminationDateOffsetDayType);
      FIELD_SET(*this, FIX::StreamTerminationDateAdjusted);
      FIELD_SET(*this, FIX::StreamCalculationPeriodDatesXID);
      FIELD_SET(*this, FIX::StreamCalculationPeriodDatesXIDRef);
      FIELD_SET(*this, FIX::StreamCalculationPeriodBusinessDayConvention);
      FIELD_SET(*this, FIX::NoStreamCalculationPeriodBusinessCenters);
      class NoStreamCalculationPeriodBusinessCenters: public FIX::Group
      {
      public:
      NoStreamCalculationPeriodBusinessCenters() : FIX::Group(40958,40074,FIX::message_order(40074,0)) {}
        FIELD_SET(*this, FIX::StreamCalculationPeriodBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoStreamCalculationPeriodDates);
      class NoStreamCalculationPeriodDates: public FIX::Group
      {
      public:
      NoStreamCalculationPeriodDates() : FIX::Group(41241,41242,FIX::message_order(41242,41243,0)) {}
        FIELD_SET(*this, FIX::StreamCalculationPeriodDate);
        FIELD_SET(*this, FIX::StreamCalculationPeriodDateType);
      };
      FIELD_SET(*this, FIX::StreamFirstPeriodStartDateUnadjusted);
      FIELD_SET(*this, FIX::StreamFirstPeriodStartDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoStreamFirstPeriodStartDateBusinessCenters);
      class NoStreamFirstPeriodStartDateBusinessCenters: public FIX::Group
      {
      public:
      NoStreamFirstPeriodStartDateBusinessCenters() : FIX::Group(40959,40077,FIX::message_order(40077,0)) {}
        FIELD_SET(*this, FIX::StreamFirstPeriodStartDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::StreamFirstPeriodStartDateAdjusted);
      FIELD_SET(*this, FIX::StreamFirstRegularPeriodStartDateUnadjusted);
      FIELD_SET(*this, FIX::StreamFirstCompoundingPeriodEndDateUnadjusted);
      FIELD_SET(*this, FIX::StreamLastRegularPeriodEndDateUnadjusted);
      FIELD_SET(*this, FIX::StreamCalculationFrequencyPeriod);
      FIELD_SET(*this, FIX::StreamCalculationFrequencyUnit);
      FIELD_SET(*this, FIX::StreamCalculationRollConvention);
      FIELD_SET(*this, FIX::StreamCalculationBalanceOfFirstPeriod);
      FIELD_SET(*this, FIX::StreamCalculationCorrectionPeriod);
      FIELD_SET(*this, FIX::StreamCalculationCorrectionUnit);
      FIELD_SET(*this, FIX::PaymentStreamType);
      FIELD_SET(*this, FIX::PaymentStreamMarketRate);
      FIELD_SET(*this, FIX::PaymentStreamDelayIndicator);
      FIELD_SET(*this, FIX::PaymentStreamCashSettlIndicator);
      FIELD_SET(*this, FIX::PaymentStreamSettlCurrency);
      FIELD_SET(*this, FIX::PaymentStreamDayCount);
      FIELD_SET(*this, FIX::PaymentStreamOtherDayCount);
      FIELD_SET(*this, FIX::PaymentStreamAccrualDays);
      FIELD_SET(*this, FIX::PaymentStreamDiscountType);
      FIELD_SET(*this, FIX::PaymentStreamDiscountRate);
      FIELD_SET(*this, FIX::PaymentStreamDiscountRateDayCount);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingMethod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingXIDRef);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingSpread);
      FIELD_SET(*this, FIX::PaymentStreamInterpolationMethod);
      FIELD_SET(*this, FIX::PaymentStreamInterpolationPeriod);
      FIELD_SET(*this, FIX::PaymentStreamInitialPrincipalExchangeIndicator);
      FIELD_SET(*this, FIX::PaymentStreamInterimPrincipalExchangeIndicator);
      FIELD_SET(*this, FIX::PaymentStreamFinalPrincipalExchangeIndicator);
      FIELD_SET(*this, FIX::PaymentStreamFlatRateIndicator);
      FIELD_SET(*this, FIX::PaymentStreamFlatRateAmount);
      FIELD_SET(*this, FIX::PaymentStreamFlatRateCurrency);
      FIELD_SET(*this, FIX::PaymentStreamMaximumPaymentAmount);
      FIELD_SET(*this, FIX::PaymentStreamMaximumPaymentCurrency);
      FIELD_SET(*this, FIX::PaymentStreamMaximumTransactionAmount);
      FIELD_SET(*this, FIX::PaymentStreamMaximumTransactionCurrency);
      FIELD_SET(*this, FIX::PaymentStreamPaymentDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamPaymentDateBusinessCenters);
      class NoPaymentStreamPaymentDateBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamPaymentDateBusinessCenters() : FIX::Group(40947,40752,FIX::message_order(40752,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamPaymentDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoPaymentStreamPaymentDates);
      class NoPaymentStreamPaymentDates: public FIX::Group
      {
      public:
      NoPaymentStreamPaymentDates() : FIX::Group(41220,41221,FIX::message_order(41221,41222,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamPaymentDate);
        FIELD_SET(*this, FIX::PaymentStreamPaymentDateType);
      };
      FIELD_SET(*this, FIX::PaymentStreamPaymentFrequencyPeriod);
      FIELD_SET(*this, FIX::PaymentStreamPaymentFrequencyUnit);
      FIELD_SET(*this, FIX::PaymentStreamPaymentRollConvention);
      FIELD_SET(*this, FIX::PaymentStreamFirstPaymentDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamLastRegularPaymentDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamPaymentDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamPaymentDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamPaymentDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamPaymentDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamMasterAgreementPaymentDatesIndicator);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateOffsetfPeriod);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamFinalPricePaymentDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamResetDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamResetDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamResetDateBusinessCenters);
      class NoPaymentStreamResetDateBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamResetDateBusinessCenters() : FIX::Group(40948,40763,FIX::message_order(40763,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamResetDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::PaymentStreamResetFrequencyPeriod);
      FIELD_SET(*this, FIX::PaymentStreamResetFrequencyUnit);
      FIELD_SET(*this, FIX::PaymentStreamResetWeeklyRollConvention);
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamInitialFixingDateBusinessCenters);
      class NoPaymentStreamInitialFixingDateBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamInitialFixingDateBusinessCenters() : FIX::Group(40949,40769,FIX::message_order(40769,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamInitialFixingDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamFixingDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamFixingDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamFixingDateBusinessCenters);
      class NoPaymentStreamFixingDateBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamFixingDateBusinessCenters() : FIX::Group(40950,40776,FIX::message_order(40776,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamFixingDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::PaymentStreamFixingDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamFixingDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamFixingDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamFixingDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamRateCutoffDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamRateCutoffDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamRateCutoffDateOffsetDayType);
      FIELD_SET(*this, FIX::NoPaymentStreamFixingDates);
      class NoPaymentStreamFixingDates: public FIX::Group
      {
      public:
      NoPaymentStreamFixingDates() : FIX::Group(42660,42661,FIX::message_order(42661,42662,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamFixingDate);
        FIELD_SET(*this, FIX::PaymentStreamFixingDateType);
      };
      FIELD_SET(*this, FIX::PaymentStreamRate);
      FIELD_SET(*this, FIX::PaymentStreamFixedAmount);
      FIELD_SET(*this, FIX::PaymentStreamRateOrAmountCurrency);
      FIELD_SET(*this, FIX::PaymentStreamFixedAmountUnitOfMeasure);
      FIELD_SET(*this, FIX::PaymentStreamTotalFixedAmount);
      FIELD_SET(*this, FIX::PaymentStreamFutureValueNotional);
      FIELD_SET(*this, FIX::PaymentStreamFutureValueDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamWorldScaleRate);
      FIELD_SET(*this, FIX::PaymentStreamContractPrice);
      FIELD_SET(*this, FIX::PaymentStreamContractPriceCurrency);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexSource);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexID);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexIDSource);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexCurveUnit);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexCurvePeriod);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2Source);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2ID);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2IDSource);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2CurvePeriod);
      FIELD_SET(*this, FIX::PaymentStreamRateIndex2CurveUnit);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexLocation);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexLevel);
      FIELD_SET(*this, FIX::PaymentStreamRateIndexUnitOfMeasure);
      FIELD_SET(*this, FIX::PaymentStreamSettlLevel);
      FIELD_SET(*this, FIX::PaymentStreamReferenceLevel);
      FIELD_SET(*this, FIX::PaymentStreamReferenceLevelUnitOfMeasure);
      FIELD_SET(*this, FIX::PaymentStreamReferenceLevelEqualsZeroIndicator);
      FIELD_SET(*this, FIX::PaymentStreamRateMultiplier);
      FIELD_SET(*this, FIX::PaymentStreamRateSpread);
      FIELD_SET(*this, FIX::PaymentStreamRateSpreadCurrency);
      FIELD_SET(*this, FIX::PaymentStreamRateSpreadUnitOfMeasure);
      FIELD_SET(*this, FIX::PaymentStreamRateConversionFactor);
      FIELD_SET(*this, FIX::PaymentStreamRateSpreadType);
      FIELD_SET(*this, FIX::PaymentStreamRateSpreadPositionType);
      FIELD_SET(*this, FIX::PaymentStreamRateTreatment);
      FIELD_SET(*this, FIX::PaymentStreamCapRate);
      FIELD_SET(*this, FIX::PaymentStreamCapRateBuySide);
      FIELD_SET(*this, FIX::PaymentStreamCapRateSellSide);
      FIELD_SET(*this, FIX::PaymentStreamFloorRate);
      FIELD_SET(*this, FIX::PaymentStreamFloorRateBuySide);
      FIELD_SET(*this, FIX::PaymentStreamFloorRateSellSide);
      FIELD_SET(*this, FIX::PaymentStreamInitialRate);
      FIELD_SET(*this, FIX::PaymentStreamLastResetRate);
      FIELD_SET(*this, FIX::PaymentStreamFinalRate);
      FIELD_SET(*this, FIX::PaymentStreamFinalRateRoundingDirection);
      FIELD_SET(*this, FIX::PaymentStreamFinalRatePrecision);
      FIELD_SET(*this, FIX::PaymentStreamAveragingMethod);
      FIELD_SET(*this, FIX::PaymentStreamNegativeRateTreatment);
      FIELD_SET(*this, FIX::PaymentStreamCalculationLagPeriod);
      FIELD_SET(*this, FIX::PaymentStreamCalculationLagUnit);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamFirstObservationDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamPricingDayType);
      FIELD_SET(*this, FIX::PaymentStreamPricingDayDistribution);
      FIELD_SET(*this, FIX::PaymentStreamPricingDayCount);
      FIELD_SET(*this, FIX::PaymentStreamPricingBusinessCalendar);
      FIELD_SET(*this, FIX::PaymentStreamPricingBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamPricingBusinessCenters);
      class NoPaymentStreamPricingBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamPricingBusinessCenters() : FIX::Group(41192,41193,FIX::message_order(41193,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamPricingBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoPaymentStreamPricingDays);
      class NoPaymentStreamPricingDays: public FIX::Group
      {
      public:
      NoPaymentStreamPricingDays() : FIX::Group(41227,41228,FIX::message_order(41228,41229,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamPricingDayOfWeek);
        FIELD_SET(*this, FIX::PaymentStreamPricingDayNumber);
      };
      FIELD_SET(*this, FIX::NoPaymentStreamPricingDates);
      class NoPaymentStreamPricingDates: public FIX::Group
      {
      public:
      NoPaymentStreamPricingDates() : FIX::Group(41224,41225,FIX::message_order(41225,41226,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamPricingDate);
        FIELD_SET(*this, FIX::PaymentStreamPricingDateType);
      };
      FIELD_SET(*this, FIX::PaymentStreamInflationLagPeriod);
      FIELD_SET(*this, FIX::PaymentStreamInflationLagUnit);
      FIELD_SET(*this, FIX::PaymentStreamInflationLagDayType);
      FIELD_SET(*this, FIX::PaymentStreamInflationInterpolationMethod);
      FIELD_SET(*this, FIX::PaymentStreamInflationIndexSource);
      FIELD_SET(*this, FIX::PaymentStreamInflationPublicationSource);
      FIELD_SET(*this, FIX::PaymentStreamInflationInitialIndexLevel);
      FIELD_SET(*this, FIX::PaymentStreamInflationFallbackBondApplicable);
      FIELD_SET(*this, FIX::PaymentStreamFRADiscounting);
      FIELD_SET(*this, FIX::PaymentStreamUnderlierRefID);
      FIELD_SET(*this, FIX::PaymentStreamFormulaCurrency);
      FIELD_SET(*this, FIX::PaymentStreamFormulaCurrencyDeterminationMethod);
      FIELD_SET(*this, FIX::PaymentStreamFormulaReferenceAmount);
      FIELD_SET(*this, FIX::NoPaymentStreamFormulas);
      class NoPaymentStreamFormulas: public FIX::Group
      {
      public:
      NoPaymentStreamFormulas() : FIX::Group(42683,43109,FIX::message_order(43109,42684,42685,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamFormulaLength);
        FIELD_SET(*this, FIX::PaymentStreamFormula);
        FIELD_SET(*this, FIX::PaymentStreamFormulaDesc);
      };
      FIELD_SET(*this, FIX::PaymentStreamFormulaImageLength);
      FIELD_SET(*this, FIX::PaymentStreamFormulaImage);
      FIELD_SET(*this, FIX::DividendReinvestmentIndicator);
      FIELD_SET(*this, FIX::DividendEntitlementEvent);
      FIELD_SET(*this, FIX::DividendAmountType);
      FIELD_SET(*this, FIX::DividendUnderlierRefID);
      FIELD_SET(*this, FIX::NoDividendPeriods);
      class NoDividendPeriods: public FIX::Group
      {
      public:
      NoDividendPeriods() : FIX::Group(42274,42275,FIX::message_order(42275,42276,42277,42278,42279,42280,42294,42281,42282,42283,42284,42285,42286,42287,42288,42289,42290,42291,42292,42293,0)) {}
        FIELD_SET(*this, FIX::DividendPeriodSequence);
        FIELD_SET(*this, FIX::DividendPeriodStartDateUnadjusted);
        FIELD_SET(*this, FIX::DividendPeriodEndDateUnadjusted);
        FIELD_SET(*this, FIX::DividendPeriodUnderlierRefID);
        FIELD_SET(*this, FIX::DividendPeriodStrikePrice);
        FIELD_SET(*this, FIX::DividendPeriodBusinessDayConvention);
        FIELD_SET(*this, FIX::NoDividendPeriodBusinessCenters);
        class NoDividendPeriodBusinessCenters: public FIX::Group
        {
        public:
        NoDividendPeriodBusinessCenters() : FIX::Group(42294,42295,FIX::message_order(42295,0)) {}
          FIELD_SET(*this, FIX::DividendPeriodBusinessCenter);
        };
        FIELD_SET(*this, FIX::DividendPeriodValuationDateUnadjusted);
        FIELD_SET(*this, FIX::DividendPeriodValuationDateRelativeTo);
        FIELD_SET(*this, FIX::DividendPeriodValuationDateOffsetPeriod);
        FIELD_SET(*this, FIX::DividendPeriodValuationDateOffsetUnit);
        FIELD_SET(*this, FIX::DividendPeriodValuationDateOffsetDayType);
        FIELD_SET(*this, FIX::DividendPeriodValuationDateAdjusted);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::DividendPeriodPaymentDateAdjusted);
        FIELD_SET(*this, FIX::DividendPeriodXID);
      };
      FIELD_SET(*this, FIX::ExtraordinaryDividendPartySide);
      FIELD_SET(*this, FIX::ExtraordinaryDividendAmountType);
      FIELD_SET(*this, FIX::ExtraordinaryDividendCurrency);
      FIELD_SET(*this, FIX::ExtraordinaryDividendDeterminationMethod);
      FIELD_SET(*this, FIX::DividendFXTriggerDateRelativeTo);
      FIELD_SET(*this, FIX::DividendFXTriggerDateOffsetPeriod);
      FIELD_SET(*this, FIX::DividendFXTriggerDateOffsetUnit);
      FIELD_SET(*this, FIX::DividendFXTriggerDateOffsetDayType);
      FIELD_SET(*this, FIX::DividendFXTriggerDateUnadjusted);
      FIELD_SET(*this, FIX::DividendFXTriggerDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoDividendFXTriggerDateBusinessCenters);
      class NoDividendFXTriggerDateBusinessCenters: public FIX::Group
      {
      public:
      NoDividendFXTriggerDateBusinessCenters() : FIX::Group(42272,42273,FIX::message_order(42273,0)) {}
        FIELD_SET(*this, FIX::DividendFXTriggerDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::DividendFXTriggerDateAdjusted);
      FIELD_SET(*this, FIX::DividendFloatingRateIndex);
      FIELD_SET(*this, FIX::DividendFloatingRateIndexCurvePeriod);
      FIELD_SET(*this, FIX::DividendFloatingRateIndexCurveUnit);
      FIELD_SET(*this, FIX::DividendFloatingRateMultiplier);
      FIELD_SET(*this, FIX::DividendFloatingRateSpread);
      FIELD_SET(*this, FIX::DividendFloatingRateSpreadPositionType);
      FIELD_SET(*this, FIX::DividendFloatingRateTreatment);
      FIELD_SET(*this, FIX::DividendCapRate);
      FIELD_SET(*this, FIX::DividendCapRateBuySide);
      FIELD_SET(*this, FIX::DividendCapRateSellSide);
      FIELD_SET(*this, FIX::DividendFloorRate);
      FIELD_SET(*this, FIX::DividendFloorRateBuySide);
      FIELD_SET(*this, FIX::DividendFloorRateSellSide);
      FIELD_SET(*this, FIX::DividendInitialRate);
      FIELD_SET(*this, FIX::DividendFinalRateRoundingDirection);
      FIELD_SET(*this, FIX::DividendFinalRatePrecision);
      FIELD_SET(*this, FIX::DividendAveragingMethod);
      FIELD_SET(*this, FIX::DividendNegativeRateTreatment);
      FIELD_SET(*this, FIX::DividendAccrualFixedRate);
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateRelativeTo);
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateOffsetPeriod);
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateOffsetUnit);
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateOffsetDayType);
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateUnadjusted);
      FIELD_SET(*this, FIX::DividendAccrualPaymeentDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoDividendAccrualPaymentDateBusinessCenters);
      class NoDividendAccrualPaymentDateBusinessCenters: public FIX::Group
      {
      public:
      NoDividendAccrualPaymentDateBusinessCenters() : FIX::Group(42236,42237,FIX::message_order(42237,0)) {}
        FIELD_SET(*this, FIX::DividendAccrualPaymentDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::DividendAccrualPaymentDateAdjusted);
      FIELD_SET(*this, FIX::DividendCompoundingMethod);
      FIELD_SET(*this, FIX::DividendNumOfIndexUnits);
      FIELD_SET(*this, FIX::DividendCashPercentage);
      FIELD_SET(*this, FIX::DividendCashEquivalentPercentage);
      FIELD_SET(*this, FIX::NonCashDividendTreatment);
      FIELD_SET(*this, FIX::DividendComposition);
      FIELD_SET(*this, FIX::SpecialDividendsIndicator);
      FIELD_SET(*this, FIX::MaterialDividendsIndicator);
      FIELD_SET(*this, FIX::OptionsExchangeDividendsIndicator);
      FIELD_SET(*this, FIX::AdditionalDividendsIndicator);
      FIELD_SET(*this, FIX::AllDividendsIndicator);
      FIELD_SET(*this, FIX::ReturnRateNotionalReset);
      FIELD_SET(*this, FIX::NoReturnRates);
      class NoReturnRates: public FIX::Group
      {
      public:
      NoReturnRates() : FIX::Group(42735,42736,FIX::message_order(42736,42737,42738,42739,42740,42741,42765,42731,42742,42743,42744,42745,42746,42747,42748,42749,42750,42751,42752,42753,42761,42754,42755,42709,42756,42757,42758,42759,42760,0)) {}
        FIELD_SET(*this, FIX::ReturnRatePriceSequence);
        FIELD_SET(*this, FIX::ReturnRateCommissionBasis);
        FIELD_SET(*this, FIX::ReturnRateCommissionAmount);
        FIELD_SET(*this, FIX::ReturnRateCommissionCurrency);
        FIELD_SET(*this, FIX::ReturnRateTotalCommissionPerTrade);
        FIELD_SET(*this, FIX::ReturnRateDeterminationMethod);
        FIELD_SET(*this, FIX::NoReturnRatePrices);
        class NoReturnRatePrices: public FIX::Group
        {
        public:
        NoReturnRatePrices() : FIX::Group(42765,42766,FIX::message_order(42766,42767,42768,42769,0)) {}
          FIELD_SET(*this, FIX::ReturnRatePriceBasis);
          FIELD_SET(*this, FIX::ReturnRatePrice);
          FIELD_SET(*this, FIX::ReturnRatePriceCurrency);
          FIELD_SET(*this, FIX::ReturnRatePriceType);
        };
        FIELD_SET(*this, FIX::NoReturnRateFXConversions);
        class NoReturnRateFXConversions: public FIX::Group
        {
        public:
        NoReturnRateFXConversions() : FIX::Group(42731,42732,FIX::message_order(42732,42733,42734,0)) {}
          FIELD_SET(*this, FIX::ReturnRateFXCurrencySymbol);
          FIELD_SET(*this, FIX::ReturnRateFXRate);
          FIELD_SET(*this, FIX::ReturnRateFXRateCalc);
        };
        FIELD_SET(*this, FIX::ReturnRateAmountRelativeTo);
        FIELD_SET(*this, FIX::ReturnRateQuoteMeasureType);
        FIELD_SET(*this, FIX::ReturnRateQuoteUnits);
        FIELD_SET(*this, FIX::ReturnRateQuoteMethod);
        FIELD_SET(*this, FIX::ReturnRateQuoteCurrency);
        FIELD_SET(*this, FIX::ReturnRateQuoteCurrencyType);
        FIELD_SET(*this, FIX::ReturnRateQuoteTimeType);
        FIELD_SET(*this, FIX::ReturnRateQuoteTime);
        FIELD_SET(*this, FIX::ReturnRateQuoteDate);
        FIELD_SET(*this, FIX::ReturnRateQuoteExpirationTime);
        FIELD_SET(*this, FIX::ReturnRateQuoteBusinessCenter);
        FIELD_SET(*this, FIX::ReturnRateQuoteExchange);
        FIELD_SET(*this, FIX::NoReturnRateInformationSources);
        class NoReturnRateInformationSources: public FIX::Group
        {
        public:
        NoReturnRateInformationSources() : FIX::Group(42761,42762,FIX::message_order(42762,42763,42764,0)) {}
          FIELD_SET(*this, FIX::ReturnRateInformationSource);
          FIELD_SET(*this, FIX::ReturnRateReferencePage);
          FIELD_SET(*this, FIX::ReturnRateReferencePageHeading);
        };
        FIELD_SET(*this, FIX::ReturnRateQuotePricingModel);
        FIELD_SET(*this, FIX::ReturnRateCashFlowType);
        FIELD_SET(*this, FIX::NoReturnRateDates);
        class NoReturnRateDates: public FIX::Group
        {
        public:
        NoReturnRateDates() : FIX::Group(42709,42710,FIX::message_order(42710,42772,42711,42712,42713,42714,42715,42716,42717,42718,42719,42720,42721,42722,42723,42724,42725,42726,42727,42728,42729,42730,42770,0)) {}
          FIELD_SET(*this, FIX::ReturnRateDateMode);
          FIELD_SET(*this, FIX::NoReturnRateValuationDates);
          class NoReturnRateValuationDates: public FIX::Group
          {
          public:
          NoReturnRateValuationDates() : FIX::Group(42772,42773,FIX::message_order(42773,42774,0)) {}
            FIELD_SET(*this, FIX::ReturnRateValuationDate);
            FIELD_SET(*this, FIX::ReturnRateValuationDateType);
          };
          FIELD_SET(*this, FIX::ReturnRateValuationDateRelativeTo);
          FIELD_SET(*this, FIX::ReturnRateValuationDateOffsetPeriod);
          FIELD_SET(*this, FIX::ReturnRateValuationDateOffsetUnit);
          FIELD_SET(*this, FIX::ReturnRateValuationDateOffsetDayType);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateUnadjusted);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateRelativeTo);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateOffsetPeriod);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateOffsetUnit);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateOffsetDayType);
          FIELD_SET(*this, FIX::ReturnRateValuationStartDateAdjusted);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateUnadjusted);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateRelativeTo);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateOffsetPeriod);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateOffsetUnit);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateOffsetDayType);
          FIELD_SET(*this, FIX::ReturnRateValuationEndDateAdjusted);
          FIELD_SET(*this, FIX::ReturnRateValuationFrequencyPeriod);
          FIELD_SET(*this, FIX::ReturnRateValuationFrequencyUnit);
          FIELD_SET(*this, FIX::ReturnRateValuationFrequencyRollConvention);
          FIELD_SET(*this, FIX::ReturnRateValuationDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoReturnRateValuationDateBusinessCenters);
          class NoReturnRateValuationDateBusinessCenters: public FIX::Group
          {
          public:
          NoReturnRateValuationDateBusinessCenters() : FIX::Group(42770,42771,FIX::message_order(42771,0)) {}
            FIELD_SET(*this, FIX::ReturnRateValuationDateBusinessCenter);
          };
        };
        FIELD_SET(*this, FIX::ReturnRateValuationTimeType);
        FIELD_SET(*this, FIX::ReturnRateValuationTime);
        FIELD_SET(*this, FIX::ReturnRateValuationTimeBusinessCenter);
        FIELD_SET(*this, FIX::ReturnRateValuationPriceOption);
        FIELD_SET(*this, FIX::ReturnRateFinalPriceFallback);
      };
      FIELD_SET(*this, FIX::PaymentStreamLinkInitialLevel);
      FIELD_SET(*this, FIX::PaymentStreamLinkClosingLevelIndicator);
      FIELD_SET(*this, FIX::PaymentStreamLinkExpiringLevelIndicator);
      FIELD_SET(*this, FIX::PaymentStreamLinkEstimatedTradingDays);
      FIELD_SET(*this, FIX::PaymentStreamLinkStrikePrice);
      FIELD_SET(*this, FIX::PaymentStreamLinkStrikePriceType);
      FIELD_SET(*this, FIX::PaymentStreamLinkMaximumBoundary);
      FIELD_SET(*this, FIX::PaymentStreamLinkMinimumBoundary);
      FIELD_SET(*this, FIX::PaymentStreamLinkNumberOfDataSeries);
      FIELD_SET(*this, FIX::PaymentStreamVarianceUnadjustedCap);
      FIELD_SET(*this, FIX::PaymentStreamRealizedVarianceMethod);
      FIELD_SET(*this, FIX::PaymentStreamDaysAdjustmentIndicator);
      FIELD_SET(*this, FIX::PaymentStreamNearestExchangeContractRefID);
      FIELD_SET(*this, FIX::PaymentStreamVegaNotionalAmount);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFixedRate);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateIndex);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateIndexCurvePeriod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateIndexCurveUnit);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateMultiplier);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateSpread);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateSpreadPositionType);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRateTreatment);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingCapRate);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingCapRateBuySide);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingCapRateSellSide);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFloorRate);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFloorRateBuySide);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFloorRateSellSide);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingInitialRate);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFinalRateRoundingDirection);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFinalRatePrecision);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingAveragingMethod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingNegativeRateTreatment);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamCompoundingDatesBusinessCenters);
      class NoPaymentStreamCompoundingDatesBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamCompoundingDatesBusinessCenters() : FIX::Group(42620,42621,FIX::message_order(42621,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoPaymentStreamCompoundingDates);
      class NoPaymentStreamCompoundingDates: public FIX::Group
      {
      public:
      NoPaymentStreamCompoundingDates() : FIX::Group(42606,42607,FIX::message_order(42607,42608,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamCompoundingDate);
        FIELD_SET(*this, FIX::PaymentStreamCompoundingDateType);
      };
      FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingDatesOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingPeriodSkip);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingStartDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingEndDateAdjusted);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFrequencyPeriod);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingFrequencyUnit);
      FIELD_SET(*this, FIX::PaymentStreamCompoundingRollConvention);
      FIELD_SET(*this, FIX::PaymentStreamBoundsFirstDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamBoundsLastDateUnadjusted);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableRefCurrency);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesBusinessDayConvention);
      FIELD_SET(*this, FIX::NoPaymentStreamNonDeliverableFixingDatesBusinessCenters);
      class NoPaymentStreamNonDeliverableFixingDatesBusinessCenters: public FIX::Group
      {
      public:
      NoPaymentStreamNonDeliverableFixingDatesBusinessCenters() : FIX::Group(40946,40819,FIX::message_order(40819,0)) {}
        FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesBusinessCenter);
      };
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesRelativeTo);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesOffsetPeriod);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesOffsetUnit);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableFixingDatesOffsetDayType);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableSettlRateSource);
      FIELD_SET(*this, FIX::PaymentStreamNonDeliverableSettlReferencePage);
      FIELD_SET(*this, FIX::NoNonDeliverableFixingDates);
      class NoNonDeliverableFixingDates: public FIX::Group
      {
      public:
      NoNonDeliverableFixingDates() : FIX::Group(40825,40826,FIX::message_order(40826,40827,0)) {}
        FIELD_SET(*this, FIX::NonDeliverableFixingDate);
        FIELD_SET(*this, FIX::NonDeliverableFixingDateType);
      };
      FIELD_SET(*this, FIX::NoSettlRateFallbacks);
      class NoSettlRateFallbacks: public FIX::Group
      {
      public:
      NoSettlRateFallbacks() : FIX::Group(40085,40086,FIX::message_order(40086,40373,40655,40088,40089,0)) {}
        FIELD_SET(*this, FIX::SettlRatePostponementMaximumDays);
        FIELD_SET(*this, FIX::SettlRateFallbackRateSource);
        FIELD_SET(*this, FIX::SettlRateFallbackReferencePage);
        FIELD_SET(*this, FIX::SettlRatePostponementSurvey);
        FIELD_SET(*this, FIX::SettlRatePostponementCalculationAgent);
      };
      FIELD_SET(*this, FIX::NoPaymentSchedules);
      class NoPaymentSchedules: public FIX::Group
      {
      public:
      NoPaymentSchedules() : FIX::Group(40828,40829,FIX::message_order(40829,41164,41165,40830,40831,40832,40833,40834,40835,40836,40837,40838,40839,41166,41167,41168,41169,40840,40841,40842,40843,41170,41171,41172,41173,40844,40845,40846,40847,40848,40849,40868,40850,40851,40852,40853,40977,40855,40856,40857,41174,41175,40858,41161,41176,41177,41178,41179,40859,40860,40861,40862,40945,40864,40865,40866,40867,0)) {}
        FIELD_SET(*this, FIX::PaymentScheduleType);
        FIELD_SET(*this, FIX::PaymentScheduleXID);
        FIELD_SET(*this, FIX::PaymentScheduleXIDRef);
        FIELD_SET(*this, FIX::PaymentScheduleStubType);
        FIELD_SET(*this, FIX::PaymentScheduleStartDateUnadjusted);
        FIELD_SET(*this, FIX::PaymentScheduleEndDateUnadjusted);
        FIELD_SET(*this, FIX::PaymentSchedulePaySide);
        FIELD_SET(*this, FIX::PaymentScheduleReceiveSide);
        FIELD_SET(*this, FIX::PaymentScheduleNotional);
        FIELD_SET(*this, FIX::PaymentScheduleCurrency);
        FIELD_SET(*this, FIX::PaymentScheduleRate);
        FIELD_SET(*this, FIX::PaymentScheduleRateMultiplier);
        FIELD_SET(*this, FIX::PaymentScheduleRateSpread);
        FIELD_SET(*this, FIX::PaymentScheduleRateCurrency);
        FIELD_SET(*this, FIX::PaymentScheduleRateUnitOfMeasure);
        FIELD_SET(*this, FIX::PaymentScheduleRateConversionFactor);
        FIELD_SET(*this, FIX::PaymentScheduleRateSpreadType);
        FIELD_SET(*this, FIX::PaymentScheduleRateSpreadPositionType);
        FIELD_SET(*this, FIX::PaymentScheduleRateTreatment);
        FIELD_SET(*this, FIX::PaymentScheduleFixedAmount);
        FIELD_SET(*this, FIX::PaymentScheduleFixedCurrency);
        FIELD_SET(*this, FIX::PaymentScheduleSettlPeriodPrice);
        FIELD_SET(*this, FIX::PaymentScheduleSettlPeriodPriceCurrency);
        FIELD_SET(*this, FIX::PaymentScheduleSettlPeriodPriceUnitOfMeasure);
        FIELD_SET(*this, FIX::PaymentScheduleStepUnitOfMeasure);
        FIELD_SET(*this, FIX::PaymentScheduleStepFrequencyPeriod);
        FIELD_SET(*this, FIX::PaymentScheduleStepFrequencyUnit);
        FIELD_SET(*this, FIX::PaymentScheduleStepOffsetValue);
        FIELD_SET(*this, FIX::PaymentScheduleStepRate);
        FIELD_SET(*this, FIX::PaymentScheduleStepOffsetRate);
        FIELD_SET(*this, FIX::PaymentScheduleStepRelativeTo);
        FIELD_SET(*this, FIX::NoPaymentScheduleRateSources);
        class NoPaymentScheduleRateSources: public FIX::Group
        {
        public:
        NoPaymentScheduleRateSources() : FIX::Group(40868,40869,FIX::message_order(40869,40870,40871,0)) {}
          FIELD_SET(*this, FIX::PaymentScheduleRateSource);
          FIELD_SET(*this, FIX::PaymentScheduleRateSourceType);
          FIELD_SET(*this, FIX::PaymentScheduleReferencePage);
        };
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateUnadjusted);
        FIELD_SET(*this, FIX::PaymentScheduleWeight);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateRelativeTo);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoPaymentScheduleFixingDateBusinessCenters);
        class NoPaymentScheduleFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoPaymentScheduleFixingDateBusinessCenters() : FIX::Group(40977,40854,FIX::message_order(40854,0)) {}
          FIELD_SET(*this, FIX::PaymentScheduleFixingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateOffsetPeriod);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateOffsetUnit);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateOffsetDayType);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDayDistribution);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDayCount);
        FIELD_SET(*this, FIX::PaymentScheduleFixingDateAdjusted);
        FIELD_SET(*this, FIX::NoPaymentScheduleFixingDays);
        class NoPaymentScheduleFixingDays: public FIX::Group
        {
        public:
        NoPaymentScheduleFixingDays() : FIX::Group(41161,41162,FIX::message_order(41162,41163,0)) {}
          FIELD_SET(*this, FIX::PaymentScheduleFixingDayOfWeek);
          FIELD_SET(*this, FIX::PaymentScheduleFixingDayNumber);
        };
        FIELD_SET(*this, FIX::PaymentScheduleFixingLagPeriod);
        FIELD_SET(*this, FIX::PaymentScheduleFixingLagUnit);
        FIELD_SET(*this, FIX::PaymentScheduleFixingFirstObservationDateOffsetPeriod);
        FIELD_SET(*this, FIX::PaymentScheduleFixingFirstObservationDateOffsetUnit);
        FIELD_SET(*this, FIX::PaymentScheduleFixingTime);
        FIELD_SET(*this, FIX::PaymentScheduleFixingTimeBusinessCenter);
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangePaymentDateRelativeTo);
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDatesBusinessDayConvention);
        FIELD_SET(*this, FIX::NoPaymentScheduleInterimExchangeDateBusinessCenters);
        class NoPaymentScheduleInterimExchangeDateBusinessCenters: public FIX::Group
        {
        public:
        NoPaymentScheduleInterimExchangeDateBusinessCenters() : FIX::Group(40945,40863,FIX::message_order(40863,0)) {}
          FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDatesBusinessCenter);
        };
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDatesOffsetPeriod);
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDatesOffsetUnit);
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDatesOffsetDayType);
        FIELD_SET(*this, FIX::PaymentScheduleInterimExchangeDateAdjusted);
      };
      FIELD_SET(*this, FIX::NoPaymentStubs);
      class NoPaymentStubs: public FIX::Group
      {
      public:
      NoPaymentStubs() : FIX::Group(40872,40873,FIX::message_order(40873,40874,42698,42699,42700,42701,42702,42703,42704,42689,42690,42691,42692,42693,42694,42695,40875,40876,40877,40878,40879,40880,40881,40882,40883,40884,40885,40886,40887,40888,40889,40890,40891,40892,40893,40894,40895,40896,40897,40898,40899,40900,40901,0)) {}
        FIELD_SET(*this, FIX::PaymentStubType);
        FIELD_SET(*this, FIX::PaymentStubLength);
        FIELD_SET(*this, FIX::PaymentStubStartDateUnadjusted);
        FIELD_SET(*this, FIX::PaymentStubStartDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoPaymentStubStartDateBusinessCenters);
        class NoPaymentStubStartDateBusinessCenters: public FIX::Group
        {
        public:
        NoPaymentStubStartDateBusinessCenters() : FIX::Group(42705,42706,FIX::message_order(42706,0)) {}
          FIELD_SET(*this, FIX::PaymentStubStartDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::PaymentStubStartDateRelativeTo);
        FIELD_SET(*this, FIX::PaymentStubStartDateOffsetPeriod);
        FIELD_SET(*this, FIX::PaymentStubStartDateOffsetUnit);
        FIELD_SET(*this, FIX::PaymentStubStartDateOffsetDayType);
        FIELD_SET(*this, FIX::PaymentStubStartDateAdjusted);
        FIELD_SET(*this, FIX::PaymentStubEndDateUnadjusted);
        FIELD_SET(*this, FIX::PaymentStubEndDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoPaymentStubEndDateBusinessCenters);
        class NoPaymentStubEndDateBusinessCenters: public FIX::Group
        {
        public:
        NoPaymentStubEndDateBusinessCenters() : FIX::Group(42696,42697,FIX::message_order(42697,0)) {}
          FIELD_SET(*this, FIX::PaymentStubEndDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::PaymentStubEndDateRelativeTo);
        FIELD_SET(*this, FIX::PaymentStubEndDateOffsetPeriod);
        FIELD_SET(*this, FIX::PaymentStubEndDateOffsetUnit);
        FIELD_SET(*this, FIX::PaymentStubEndDateOffsetDayType);
        FIELD_SET(*this, FIX::PaymentStubEndDateAdjusted);
        FIELD_SET(*this, FIX::PaymentStubRate);
        FIELD_SET(*this, FIX::PaymentStubFixedAmount);
        FIELD_SET(*this, FIX::PaymentStubFixedCurrency);
        FIELD_SET(*this, FIX::PaymentStubIndex);
        FIELD_SET(*this, FIX::PaymentStubIndexSource);
        FIELD_SET(*this, FIX::PaymentStubIndexCurvePeriod);
        FIELD_SET(*this, FIX::PaymentStubIndexCurveUnit);
        FIELD_SET(*this, FIX::PaymentStubIndexRateMultiplier);
        FIELD_SET(*this, FIX::PaymentStubIndexRateSpread);
        FIELD_SET(*this, FIX::PaymentStubIndexRateSpreadPositionType);
        FIELD_SET(*this, FIX::PaymentStubIndexRateTreatment);
        FIELD_SET(*this, FIX::PaymentStubIndexCapRate);
        FIELD_SET(*this, FIX::PaymentStubIndexCapRateBuySide);
        FIELD_SET(*this, FIX::PaymentStubIndexCapRateSellSide);
        FIELD_SET(*this, FIX::PaymentStubIndexFloorRate);
        FIELD_SET(*this, FIX::PaymentStubIndexFloorRateBuySide);
        FIELD_SET(*this, FIX::PaymentStubIndexFloorRateSellSide);
        FIELD_SET(*this, FIX::PaymentStubIndex2);
        FIELD_SET(*this, FIX::PaymentStubIndex2Source);
        FIELD_SET(*this, FIX::PaymentStubIndex2CurvePeriod);
        FIELD_SET(*this, FIX::PaymentStubIndex2CurveUnit);
        FIELD_SET(*this, FIX::PaymentStubIndex2RateMultiplier);
        FIELD_SET(*this, FIX::PaymentStubIndex2RateSpread);
        FIELD_SET(*this, FIX::PaymentStubIndex2RateSpreadPositionType);
        FIELD_SET(*this, FIX::PaymentStubIndex2RateTreatment);
        FIELD_SET(*this, FIX::PaymentStubIndex2CapRate);
        FIELD_SET(*this, FIX::PaymentStubIndex2FloorRate);
      };
      FIELD_SET(*this, FIX::DeliveryStreamType);
      FIELD_SET(*this, FIX::NoDeliveryStreamCommoditySources);
      class NoDeliveryStreamCommoditySources: public FIX::Group
      {
      public:
      NoDeliveryStreamCommoditySources() : FIX::Group(41085,41086,FIX::message_order(41086,0)) {}
        FIELD_SET(*this, FIX::DeliveryStreamCommoditySource);
      };
      FIELD_SET(*this, FIX::DeliveryStreamPipeline);
      FIELD_SET(*this, FIX::DeliveryStreamEntryPoint);
      FIELD_SET(*this, FIX::DeliveryStreamWithdrawalPoint);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryPoint);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryPointSource);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryPointDesc);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryRestriction);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryContingency);
      FIELD_SET(*this, FIX::DeliveryStreamDeliveryContingentPartySide);
      FIELD_SET(*this, FIX::DeliveryStreamDeliverAtSourceIndicator);
      FIELD_SET(*this, FIX::DeliveryStreamRiskApportionment);
      FIELD_SET(*this, FIX::DeliveryStreamRiskApportionmentSource);
      FIELD_SET(*this, FIX::NoDeliveryStreamCycles);
      class NoDeliveryStreamCycles: public FIX::Group
      {
      public:
      NoDeliveryStreamCycles() : FIX::Group(41081,41082,FIX::message_order(41082,41083,41084,0)) {}
        FIELD_SET(*this, FIX::DeliveryStreamCycleDesc);
        FIELD_SET(*this, FIX::EncodedDeliveryStreamCycleDescLen);
        FIELD_SET(*this, FIX::EncodedDeliveryStreamCycleDesc);
      };
      FIELD_SET(*this, FIX::DeliveryStreamTitleTransferLocation);
      FIELD_SET(*this, FIX::DeliveryStreamTitleTransferCondition);
      FIELD_SET(*this, FIX::DeliveryStreamImporterOfRecord);
      FIELD_SET(*this, FIX::DeliveryStreamNegativeTolerance);
      FIELD_SET(*this, FIX::DeliveryStreamPositiveTolerance);
      FIELD_SET(*this, FIX::DeliveryStreamToleranceUnitOfMeasure);
      FIELD_SET(*this, FIX::DeliveryStreamToleranceType);
      FIELD_SET(*this, FIX::DeliveryStreamToleranceOptionSide);
      FIELD_SET(*this, FIX::DeliveryStreamTotalPositiveTolerance);
      FIELD_SET(*this, FIX::DeliveryStreamTotalNegativeTolerance);
      FIELD_SET(*this, FIX::DeliveryStreamNotionalConversionFactor);
      FIELD_SET(*this, FIX::DeliveryStreamTransportEquipment);
      FIELD_SET(*this, FIX::DeliveryStreamElectingPartySide);
      FIELD_SET(*this, FIX::DeliveryStreamRouteOrCharter);
      FIELD_SET(*this, FIX::NoDeliverySchedules);
      class NoDeliverySchedules: public FIX::Group
      {
      public:
      NoDeliverySchedules() : FIX::Group(41037,41038,FIX::message_order(41038,41039,41040,41041,41042,41043,41044,41045,41046,41047,41048,41049,41050,41051,0)) {}
        FIELD_SET(*this, FIX::DeliveryScheduleType);
        FIELD_SET(*this, FIX::DeliveryScheduleXID);
        FIELD_SET(*this, FIX::DeliveryScheduleNotional);
        FIELD_SET(*this, FIX::DeliveryScheduleNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::DeliveryScheduleNotionalCommodityFrequency);
        FIELD_SET(*this, FIX::DeliveryScheduleNegativeTolerance);
        FIELD_SET(*this, FIX::DeliverySchedulePositiveTolerance);
        FIELD_SET(*this, FIX::DeliveryScheduleToleranceUnitOfMeasure);
        FIELD_SET(*this, FIX::DeliveryScheduleToleranceType);
        FIELD_SET(*this, FIX::DeliveryScheduleSettlCountry);
        FIELD_SET(*this, FIX::DeliveryScheduleSettlTimeZone);
        FIELD_SET(*this, FIX::DeliveryScheduleSettlFlowType);
        FIELD_SET(*this, FIX::DeliveryScheduleSettlHolidaysProcessingInstruction);
        FIELD_SET(*this, FIX::NoDeliveryScheduleSettlDays);
        class NoDeliveryScheduleSettlDays: public FIX::Group
        {
        public:
        NoDeliveryScheduleSettlDays() : FIX::Group(41051,41052,FIX::message_order(41052,41053,41054,0)) {}
          FIELD_SET(*this, FIX::DeliveryScheduleSettlDay);
          FIELD_SET(*this, FIX::DeliveryScheduleSettlTotalHours);
          FIELD_SET(*this, FIX::NoDeliveryScheduleSettlTimes);
          class NoDeliveryScheduleSettlTimes: public FIX::Group
          {
          public:
          NoDeliveryScheduleSettlTimes() : FIX::Group(41054,41055,FIX::message_order(41055,41056,41057,0)) {}
            FIELD_SET(*this, FIX::DeliveryScheduleSettlStart);
            FIELD_SET(*this, FIX::DeliveryScheduleSettlEnd);
            FIELD_SET(*this, FIX::DeliveryScheduleSettlTimeType);
          };
        };
      };
      FIELD_SET(*this, FIX::StreamText);
      FIELD_SET(*this, FIX::EncodedStreamTextLen);
      FIELD_SET(*this, FIX::EncodedStreamText);
    };
    FIELD_SET(*this, FIX::NoProvisions);
    class NoProvisions: public FIX::Group
    {
    public:
    NoProvisions() : FIX::Group(40090,40091,FIX::message_order(40091,40092,40093,40957,40095,40096,40097,42707,42708,40098,40099,40100,40114,40115,40116,40118,40119,40120,40121,40122,40123,40125,40126,40127,40128,40129,40130,40131,40132,40133,40134,40135,40136,40137,40138,40139,40140,40141,40145,40146,40148,40149,40150,40151,40152,40153,40154,40155,40156,40158,40159,40160,40161,40162,40101,40102,40103,40104,40105,40106,40107,40163,40165,40166,40167,40168,40169,40170,40108,40109,40110,40111,40112,41406,40113,40986,40987,40174,0)) {}
      FIELD_SET(*this, FIX::ProvisionType);
      FIELD_SET(*this, FIX::ProvisionDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionDateBusinessCenters);
      class NoProvisionDateBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionDateBusinessCenters() : FIX::Group(40957,40094,FIX::message_order(40094,0)) {}
        FIELD_SET(*this, FIX::ProvisionDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ProvisionDateAdjusted);
      FIELD_SET(*this, FIX::ProvisionDateTenorPeriod);
      FIELD_SET(*this, FIX::ProvisionDateTenorUnit);
      FIELD_SET(*this, FIX::ProvisionBreakFeeElection);
      FIELD_SET(*this, FIX::ProvisionBreakFeeRate);
      FIELD_SET(*this, FIX::ProvisionCalculationAgent);
      FIELD_SET(*this, FIX::ProvisionOptionSinglePartyBuyerSide);
      FIELD_SET(*this, FIX::ProvisionOptionSinglePartySellerSide);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueTime);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueTimeBusinessCenter);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionCashSettlValueDateBusinessCenters);
      class NoProvisionCashSettlValueDateBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionCashSettlValueDateBusinessCenters() : FIX::Group(40953,40117,FIX::message_order(40117,0)) {}
        FIELD_SET(*this, FIX::ProvisionCashSettlValueDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateRelativeTo);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateOffsetDayType);
      FIELD_SET(*this, FIX::ProvisionCashSettlValueDateAdjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionOptionExerciseBusinessCenters);
      class NoProvisionOptionExerciseBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionOptionExerciseBusinessCenters() : FIX::Group(40954,40124,FIX::message_order(40124,0)) {}
        FIELD_SET(*this, FIX::ProvisionOptionExerciseBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoProvisionOptionExerciseFixedDates);
      class NoProvisionOptionExerciseFixedDates: public FIX::Group
      {
      public:
      NoProvisionOptionExerciseFixedDates() : FIX::Group(40142,40143,FIX::message_order(40143,40144,0)) {}
        FIELD_SET(*this, FIX::ProvisionOptionExerciseFixedDate);
        FIELD_SET(*this, FIX::ProvisionOptionExerciseFixedDateType);
      };
      FIELD_SET(*this, FIX::ProvisionOptionExerciseEarliestDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseEarliestDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseFrequencyPeriod);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseFrequencyUnit);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateRelativeTo);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateOffsetDayType);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStartDateAdjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExercisePeriodSkip);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseBoundsFirstDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseBoundsLastDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseEarliestTime);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseEarliestTimeBusinessCenter);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseLatestTime);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseLatestTimeBusinessCenter);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionOptionExpirationDateBusinessCenters);
      class NoProvisionOptionExpirationDateBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionOptionExpirationDateBusinessCenters() : FIX::Group(40955,40147,FIX::message_order(40147,0)) {}
        FIELD_SET(*this, FIX::ProvisionOptionExpirationDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateRelativeTo);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateOffsetDayType);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationDateAdjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationTime);
      FIELD_SET(*this, FIX::ProvisionOptionExpirationTimeBusinessCenter);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateUnadjusted);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionOptionRelevantUnderlyingDateBusinessCenters);
      class NoProvisionOptionRelevantUnderlyingDateBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionOptionRelevantUnderlyingDateBusinessCenters() : FIX::Group(40956,40157,FIX::message_order(40157,0)) {}
        FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateRelativeTo);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateOffsetDayType);
      FIELD_SET(*this, FIX::ProvisionOptionRelevantUnderlyingDateAdjusted);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseStyle);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseMultipleNotional);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseMinimumNotional);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseMaximumNotional);
      FIELD_SET(*this, FIX::ProvisionOptionMinimumNumber);
      FIELD_SET(*this, FIX::ProvisionOptionMaximumNumber);
      FIELD_SET(*this, FIX::ProvisionOptionExerciseConfirmation);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoProvisionCashSettlPaymentDateBusinessCenters);
      class NoProvisionCashSettlPaymentDateBusinessCenters: public FIX::Group
      {
      public:
      NoProvisionCashSettlPaymentDateBusinessCenters() : FIX::Group(40952,40164,FIX::message_order(40164,0)) {}
        FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateRelativeTo);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateOffsetPeriod);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateOffsetUnit);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateOffsetDayType);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateRangeFirst);
      FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateRangeLast);
      FIELD_SET(*this, FIX::NoProvisionCashSettlPaymentDates);
      class NoProvisionCashSettlPaymentDates: public FIX::Group
      {
      public:
      NoProvisionCashSettlPaymentDates() : FIX::Group(40171,40172,FIX::message_order(40172,40173,0)) {}
        FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDate);
        FIELD_SET(*this, FIX::ProvisionCashSettlPaymentDateType);
      };
      FIELD_SET(*this, FIX::ProvisionCashSettlMethod);
      FIELD_SET(*this, FIX::ProvisionCashSettlCurrency);
      FIELD_SET(*this, FIX::ProvisionCashSettlCurrency2);
      FIELD_SET(*this, FIX::ProvisionCashSettlQuoteType);
      FIELD_SET(*this, FIX::ProvisionCashSettlQuoteSource);
      FIELD_SET(*this, FIX::ProvisionCashSettlQuoteReferencePage);
      FIELD_SET(*this, FIX::ProvisionText);
      FIELD_SET(*this, FIX::EncodedProvisionTextLen);
      FIELD_SET(*this, FIX::EncodedProvisionText);
      FIELD_SET(*this, FIX::NoProvisionPartyIDs);
      class NoProvisionPartyIDs: public FIX::Group
      {
      public:
      NoProvisionPartyIDs() : FIX::Group(40174,40175,FIX::message_order(40175,40176,40177,2385,40178,0)) {}
        FIELD_SET(*this, FIX::ProvisionPartyID);
        FIELD_SET(*this, FIX::ProvisionPartyIDSource);
        FIELD_SET(*this, FIX::ProvisionPartyRole);
        FIELD_SET(*this, FIX::ProvisionPartyRoleQualifier);
        FIELD_SET(*this, FIX::NoProvisionPartySubIDs);
        class NoProvisionPartySubIDs: public FIX::Group
        {
        public:
        NoProvisionPartySubIDs() : FIX::Group(40178,40179,FIX::message_order(40179,40180,0)) {}
          FIELD_SET(*this, FIX::ProvisionPartySubID);
          FIELD_SET(*this, FIX::ProvisionPartySubIDType);
        };
      };
    };
    FIELD_SET(*this, FIX::NoAdditionalTerms);
    class NoAdditionalTerms: public FIX::Group
    {
    public:
    NoAdditionalTerms() : FIX::Group(40019,40020,FIX::message_order(40020,40021,40000,0)) {}
      FIELD_SET(*this, FIX::AdditionalTermConditionPrecedentBondIndicator);
      FIELD_SET(*this, FIX::AdditionalTermDiscrepancyClauseIndicator);
      FIELD_SET(*this, FIX::NoAdditionalTermBondRefs);
      class NoAdditionalTermBondRefs: public FIX::Group
      {
      public:
      NoAdditionalTermBondRefs() : FIX::Group(40000,40001,FIX::message_order(40001,40002,40003,40004,40005,40006,40007,40008,40009,40010,40011,40012,40013,40014,40015,40016,40017,40018,0)) {}
        FIELD_SET(*this, FIX::AdditionalTermBondSecurityID);
        FIELD_SET(*this, FIX::AdditionalTermBondSecurityIDSource);
        FIELD_SET(*this, FIX::AdditionalTermBondDesc);
        FIELD_SET(*this, FIX::EncodedAdditionalTermBondDescLen);
        FIELD_SET(*this, FIX::EncodedAdditionalTermBondDesc);
        FIELD_SET(*this, FIX::AdditionalTermBondCurrency);
        FIELD_SET(*this, FIX::AdditionalTermBondIssuer);
        FIELD_SET(*this, FIX::EncodedAdditionalTermBondIssuerLen);
        FIELD_SET(*this, FIX::EncodedAdditionalTermBondIssuer);
        FIELD_SET(*this, FIX::AdditionalTermBondSeniority);
        FIELD_SET(*this, FIX::AdditionalTermBondCouponType);
        FIELD_SET(*this, FIX::AdditionalTermBondCouponRate);
        FIELD_SET(*this, FIX::AdditionalTermBondMaturityDate);
        FIELD_SET(*this, FIX::AdditionalTermBondParValue);
        FIELD_SET(*this, FIX::AdditionalTermBondCurrentTotalIssuedAmount);
        FIELD_SET(*this, FIX::AdditionalTermBondCouponFrequencyPeriod);
        FIELD_SET(*this, FIX::AdditionalTermBondCouponFrequencyUnit);
        FIELD_SET(*this, FIX::AdditionalTermBondDayCount);
      };
    };
    FIELD_SET(*this, FIX::NoProtectionTerms);
    class NoProtectionTerms: public FIX::Group
    {
    public:
    NoProtectionTerms() : FIX::Group(40181,40182,FIX::message_order(40182,40183,40184,40185,40186,40187,40188,40951,40191,40201,40190,0)) {}
      FIELD_SET(*this, FIX::ProtectionTermNotional);
      FIELD_SET(*this, FIX::ProtectionTermCurrency);
      FIELD_SET(*this, FIX::ProtectionTermSellerNotifies);
      FIELD_SET(*this, FIX::ProtectionTermBuyerNotifies);
      FIELD_SET(*this, FIX::ProtectionTermEventBusinessCenter);
      FIELD_SET(*this, FIX::ProtectionTermStandardSources);
      FIELD_SET(*this, FIX::ProtectionTermEventMinimumSources);
      FIELD_SET(*this, FIX::NoProtectionTermEventNewsSources);
      class NoProtectionTermEventNewsSources: public FIX::Group
      {
      public:
      NoProtectionTermEventNewsSources() : FIX::Group(40951,40189,FIX::message_order(40189,0)) {}
        FIELD_SET(*this, FIX::ProtectionTermEventNewsSource);
      };
      FIELD_SET(*this, FIX::NoProtectionTermEvents);
      class NoProtectionTermEvents: public FIX::Group
      {
      public:
      NoProtectionTermEvents() : FIX::Group(40191,40192,FIX::message_order(40192,40193,40194,40195,40196,40197,40198,40199,0)) {}
        FIELD_SET(*this, FIX::ProtectionTermEventType);
        FIELD_SET(*this, FIX::ProtectionTermEventValue);
        FIELD_SET(*this, FIX::ProtectionTermEventCurrency);
        FIELD_SET(*this, FIX::ProtectionTermEventPeriod);
        FIELD_SET(*this, FIX::ProtectionTermEventUnit);
        FIELD_SET(*this, FIX::ProtectionTermEventDayType);
        FIELD_SET(*this, FIX::ProtectionTermEventRateSource);
        FIELD_SET(*this, FIX::NoProtectionTermEventQualifiers);
        class NoProtectionTermEventQualifiers: public FIX::Group
        {
        public:
        NoProtectionTermEventQualifiers() : FIX::Group(40199,40200,FIX::message_order(40200,0)) {}
          FIELD_SET(*this, FIX::ProtectionTermEventQualifier);
        };
      };
      FIELD_SET(*this, FIX::NoProtectionTermObligations);
      class NoProtectionTermObligations: public FIX::Group
      {
      public:
      NoProtectionTermObligations() : FIX::Group(40201,40202,FIX::message_order(40202,40203,0)) {}
        FIELD_SET(*this, FIX::ProtectionTermObligationType);
        FIELD_SET(*this, FIX::ProtectionTermObligationValue);
      };
      FIELD_SET(*this, FIX::ProtectionTermXID);
    };
    FIELD_SET(*this, FIX::NoCashSettlTerms);
    class NoCashSettlTerms: public FIX::Group
    {
    public:
    NoCashSettlTerms() : FIX::Group(40022,40023,FIX::message_order(40023,40024,40916,40917,40025,40026,40027,40028,40029,40030,40031,40277,42216,42217,40033,40034,42207,42208,42209,42210,42211,42212,42213,40035,40036,40037,40038,40039,0)) {}
      FIELD_SET(*this, FIX::CashSettlCurrency);
      FIELD_SET(*this, FIX::CashSettlValuationFirstBusinessDayOffset);
      FIELD_SET(*this, FIX::CashSettlValuationSubsequentBusinessDaysOffset);
      FIELD_SET(*this, FIX::CashSettlNumOfValuationDates);
      FIELD_SET(*this, FIX::CashSettlValuationTime);
      FIELD_SET(*this, FIX::CashSettlBusinessCenter);
      FIELD_SET(*this, FIX::CashSettlQuoteMethod);
      FIELD_SET(*this, FIX::CashSettlQuoteAmount);
      FIELD_SET(*this, FIX::CashSettlQuoteCurrency);
      FIELD_SET(*this, FIX::CashSettlMinimumQuoteAmount);
      FIELD_SET(*this, FIX::CashSettlMinimumQuoteCurrency);
      FIELD_SET(*this, FIX::NoCashSettlDealers);
      class NoCashSettlDealers: public FIX::Group
      {
      public:
      NoCashSettlDealers() : FIX::Group(40277,40032,FIX::message_order(40032,0)) {}
        FIELD_SET(*this, FIX::CashSettlDealer);
      };
      FIELD_SET(*this, FIX::CashSettlPriceSource);
      FIELD_SET(*this, FIX::CashSettlPriceDefault);
      FIELD_SET(*this, FIX::CashSettlBusinessDays);
      FIELD_SET(*this, FIX::CashSettlAmount);
      FIELD_SET(*this, FIX::CashSettlDateUnadjusted);
      FIELD_SET(*this, FIX::CashSettlDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoCashSettlDateBusinessCenters);
      class NoCashSettlDateBusinessCenters: public FIX::Group
      {
      public:
      NoCashSettlDateBusinessCenters() : FIX::Group(42214,42215,FIX::message_order(42215,0)) {}
        FIELD_SET(*this, FIX::CashSettlDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::CashSettlDateRelativeTo);
      FIELD_SET(*this, FIX::CashSettlDateOffsetPeriod);
      FIELD_SET(*this, FIX::CashSettlDateOffsetUnit);
      FIELD_SET(*this, FIX::CashSettlDateOffsetDayType);
      FIELD_SET(*this, FIX::CashSettlDateAdjusted);
      FIELD_SET(*this, FIX::CashSettlRecoveryFactor);
      FIELD_SET(*this, FIX::CashSettlFixedTermIndicator);
      FIELD_SET(*this, FIX::CashSettlAccruedInterestIndicator);
      FIELD_SET(*this, FIX::CashSettlValuationMethod);
      FIELD_SET(*this, FIX::CashSettlTermXID);
    };
    FIELD_SET(*this, FIX::NoPhysicalSettlTerms);
    class NoPhysicalSettlTerms: public FIX::Group
    {
    public:
    NoPhysicalSettlTerms() : FIX::Group(40204,40209,FIX::message_order(40209,40205,40206,40207,40208,0)) {}
      FIELD_SET(*this, FIX::NoPhysicalSettlDeliverableObligations);
      class NoPhysicalSettlDeliverableObligations: public FIX::Group
      {
      public:
      NoPhysicalSettlDeliverableObligations() : FIX::Group(40209,40210,FIX::message_order(40210,40211,0)) {}
        FIELD_SET(*this, FIX::PhysicalSettlDeliverableObligationType);
        FIELD_SET(*this, FIX::PhysicalSettlDeliverableObligationValue);
      };
      FIELD_SET(*this, FIX::PhysicalSettlCurrency);
      FIELD_SET(*this, FIX::PhysicalSettlBusinessDays);
      FIELD_SET(*this, FIX::PhysicalSettlMaximumBusinessDays);
      FIELD_SET(*this, FIX::PhysicalSettlTermXID);
    };
    FIELD_SET(*this, FIX::NoExtraordinaryEvents);
    class NoExtraordinaryEvents: public FIX::Group
    {
    public:
    NoExtraordinaryEvents() : FIX::Group(42296,42297,FIX::message_order(42297,42298,0)) {}
      FIELD_SET(*this, FIX::ExtraordinaryEventType);
      FIELD_SET(*this, FIX::ExtraordinaryEventValue);
    };
    FIELD_SET(*this, FIX::ExtraordinaryEventAdjustmentMethod);
    FIELD_SET(*this, FIX::ExchangeLookAlike);
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
    FIELD_SET(*this, FIX::SecondaryAllocID);
    FIELD_SET(*this, FIX::AllocGroupID);
    FIELD_SET(*this, FIX::FirmGroupID);
    FIELD_SET(*this, FIX::AvgPxGroupID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::AllocReportType);
    FIELD_SET(*this, FIX::AllocIntermedReqType);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::CustOrderHandlingInst);
    FIELD_SET(*this, FIX::OrderHandlingInstSource);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::NoRegulatoryTradeIDs);
    class NoRegulatoryTradeIDs: public FIX::Group
    {
    public:
    NoRegulatoryTradeIDs() : FIX::Group(1907,1903,FIX::message_order(1903,1905,1904,1906,2411,2397,0)) {}
      FIELD_SET(*this, FIX::RegulatoryTradeID);
      FIELD_SET(*this, FIX::RegulatoryTradeIDSource);
      FIELD_SET(*this, FIX::RegulatoryTradeIDEvent);
      FIELD_SET(*this, FIX::RegulatoryTradeIDType);
      FIELD_SET(*this, FIX::RegulatoryLegRefID);
      FIELD_SET(*this, FIX::RegulatoryTradeIDScope);
    };
    FIELD_SET(*this, FIX::NoAllocs);
    class NoAllocs: public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78,79,FIX::message_order(79,661,366,1047,467,1593,1729,1832,2727,1908,776,539,209,161,360,361,1732,1733,1734,989,993,992,80,2515,1752,1753,1754,1755,2770,2769,0)) {}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocAcctIDSource);
      FIELD_SET(*this, FIX::AllocPrice);
      FIELD_SET(*this, FIX::AllocPositionEffect);
      FIELD_SET(*this, FIX::IndividualAllocID);
      FIELD_SET(*this, FIX::ParentAllocID);
      FIELD_SET(*this, FIX::FirmMnemonic);
      FIELD_SET(*this, FIX::ClearedIndicator);
      FIELD_SET(*this, FIX::AllocLegRefID);
      FIELD_SET(*this, FIX::NoAllocRegulatoryTradeIDs);
      class NoAllocRegulatoryTradeIDs: public FIX::Group
      {
      public:
      NoAllocRegulatoryTradeIDs() : FIX::Group(1908,1909,FIX::message_order(1909,1910,1911,1912,2406,2399,0)) {}
        FIELD_SET(*this, FIX::AllocRegulatoryTradeID);
        FIELD_SET(*this, FIX::AllocRegulatoryTradeIDSource);
        FIELD_SET(*this, FIX::AllocRegulatoryTradeIDEvent);
        FIELD_SET(*this, FIX::AllocRegulatoryTradeIDType);
        FIELD_SET(*this, FIX::AllocRegulatoryLegRefID);
        FIELD_SET(*this, FIX::AllocRegulatoryTradeIDScope);
      };
      FIELD_SET(*this, FIX::IndividualAllocRejCode);
      FIELD_SET(*this, FIX::NoNestedPartyIDs);
      class NoNestedPartyIDs: public FIX::Group
      {
      public:
      NoNestedPartyIDs() : FIX::Group(539,524,FIX::message_order(524,525,538,2384,804,0)) {}
        FIELD_SET(*this, FIX::NestedPartyID);
        FIELD_SET(*this, FIX::NestedPartyIDSource);
        FIELD_SET(*this, FIX::NestedPartyRole);
        FIELD_SET(*this, FIX::NestedPartyRoleQualifier);
        FIELD_SET(*this, FIX::NoNestedPartySubIDs);
        class NoNestedPartySubIDs: public FIX::Group
        {
        public:
        NoNestedPartySubIDs() : FIX::Group(804,545,FIX::message_order(545,805,0)) {}
          FIELD_SET(*this, FIX::NestedPartySubID);
          FIELD_SET(*this, FIX::NestedPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::AllocHandlInst);
      FIELD_SET(*this, FIX::AllocText);
      FIELD_SET(*this, FIX::EncodedAllocTextLen);
      FIELD_SET(*this, FIX::EncodedAllocText);
      FIELD_SET(*this, FIX::FirmAllocText);
      FIELD_SET(*this, FIX::EncodedFirmAllocTextLen);
      FIELD_SET(*this, FIX::EncodedFirmAllocText);
      FIELD_SET(*this, FIX::SecondaryIndividualAllocID);
      FIELD_SET(*this, FIX::AllocCustomerCapacity);
      FIELD_SET(*this, FIX::IndividualAllocType);
      FIELD_SET(*this, FIX::AllocQty);
      FIELD_SET(*this, FIX::AllocCalculatedCcyQty);
      FIELD_SET(*this, FIX::CustodialLotID);
      FIELD_SET(*this, FIX::VersusPurchaseDate);
      FIELD_SET(*this, FIX::VersusPurchasePrice);
      FIELD_SET(*this, FIX::CurrentCostBasis);
      FIELD_SET(*this, FIX::AllocAvgPxGroupID);
      FIELD_SET(*this, FIX::AllocAvgPxIndicator);
    };
  };

}

#endif
