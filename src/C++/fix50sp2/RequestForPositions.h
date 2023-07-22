#ifndef FIX50SP2_REQUESTFORPOSITIONS_H
#define FIX50SP2_REQUESTFORPOSITIONS_H

#include "Message.h"

namespace FIX50SP2
{

  class RequestForPositions : public Message
  {
  public:
    RequestForPositions() : Message(MsgType()) {}
    RequestForPositions(const FIX::Message& m) : Message(m) {}
    RequestForPositions(const Message& m) : Message(m) {}
    RequestForPositions(const RequestForPositions&) = default;
    RequestForPositions(RequestForPositions&&) = default;
    RequestForPositions& operator=(const RequestForPositions&) = default;
    RequestForPositions& operator=(RequestForPositions&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AN"); }

    RequestForPositions(
      const FIX::PosReqID& aPosReqID,
      const FIX::PosReqType& aPosReqType,
      const FIX::ClearingBusinessDate& aClearingBusinessDate,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aPosReqID);
      set(aPosReqType);
      set(aClearingBusinessDate);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::PosReqID);
    FIELD_SET(*this, FIX::PosReqType);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::SettlCurrencyCodeSource);
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
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::AccountType);
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
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::CurrencyCodeSource);
    FIELD_SET(*this, FIX::NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,1788,607,1594,608,2893,609,764,610,611,1212,2146,2147,2148,248,2149,2150,2151,2152,2153,2154,2155,2348,2067,2068,2069,2739,2070,2156,2157,2158,2159,2160,2161,2162,2163,2164,2165,2880,2166,2167,2168,2169,2170,2171,2172,2173,2174,2175,2176,2177,2178,2179,2180,249,250,251,252,253,257,599,596,597,598,254,612,942,2908,2181,2182,2183,2184,2604,2185,2605,2186,2187,2188,2189,613,614,1436,2354,1440,2190,2191,999,1224,1720,2909,1421,1422,1721,2910,2192,1001,1420,2193,2194,2755,2195,2196,2197,2198,1528,2911,2199,2200,2201,2202,2203,615,616,2205,2206,617,618,619,2740,2717,2718,2719,620,621,622,2207,2208,623,624,556,2898,740,739,955,956,1358,2682,2686,1017,566,2209,2211,2212,2213,2754,2214,2215,2606,2607,2497,2498,2499,2496,2495,2953,2511,2510,2512,2509,2500,2502,2501,2503,2507,2505,2494,2493,2514,2513,2506,2504,2508,0)) {}
      FIELD_SET(*this, FIX::LegSymbol);
      FIELD_SET(*this, FIX::LegSymbolSfx);
      FIELD_SET(*this, FIX::LegSecurityID);
      FIELD_SET(*this, FIX::LegSecurityIDSource);
      FIELD_SET(*this, FIX::NoLegSecurityAltID);
      class NoLegSecurityAltID: public FIX::Group
      {
      public:
      NoLegSecurityAltID() : FIX::Group(604,605,FIX::message_order(605,606,2958,0)) {}
        FIELD_SET(*this, FIX::LegSecurityAltID);
        FIELD_SET(*this, FIX::LegSecurityAltIDSource);
        FIELD_SET(*this, FIX::LegSymbolPositionNumber);
      };
      FIELD_SET(*this, FIX::LegID);
      FIELD_SET(*this, FIX::LegProduct);
      FIELD_SET(*this, FIX::LegSecurityGroup);
      FIELD_SET(*this, FIX::LegCFICode);
      FIELD_SET(*this, FIX::LegUPICode);
      FIELD_SET(*this, FIX::LegSecurityType);
      FIELD_SET(*this, FIX::LegSecuritySubType);
      FIELD_SET(*this, FIX::LegMaturityMonthYear);
      FIELD_SET(*this, FIX::LegMaturityDate);
      FIELD_SET(*this, FIX::LegMaturityTime);
      FIELD_SET(*this, FIX::LegSettleOnOpenFlag);
      FIELD_SET(*this, FIX::LegInstrmtAssignmentMethod);
      FIELD_SET(*this, FIX::LegSecurityStatus);
      FIELD_SET(*this, FIX::LegCouponPaymentDate);
      FIELD_SET(*this, FIX::LegRestructuringType);
      FIELD_SET(*this, FIX::LegSeniority);
      FIELD_SET(*this, FIX::LegNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::LegOriginalNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::LegAttachmentPoint);
      FIELD_SET(*this, FIX::LegDetachmentPoint);
      FIELD_SET(*this, FIX::LegObligationType);
      FIELD_SET(*this, FIX::LegAssetGroup);
      FIELD_SET(*this, FIX::LegAssetClass);
      FIELD_SET(*this, FIX::LegAssetSubClass);
      FIELD_SET(*this, FIX::LegAssetType);
      FIELD_SET(*this, FIX::LegAssetSubType);
      FIELD_SET(*this, FIX::NoLegSecondaryAssetClasses);
      class NoLegSecondaryAssetClasses: public FIX::Group
      {
      public:
      NoLegSecondaryAssetClasses() : FIX::Group(2076,2077,FIX::message_order(2077,2078,2079,2743,0)) {}
        FIELD_SET(*this, FIX::LegSecondaryAssetClass);
        FIELD_SET(*this, FIX::LegSecondaryAssetSubClass);
        FIELD_SET(*this, FIX::LegSecondaryAssetType);
        FIELD_SET(*this, FIX::LegSecondaryAssetSubType);
      };
      FIELD_SET(*this, FIX::NoLegAssetAttributes);
      class NoLegAssetAttributes: public FIX::Group
      {
      public:
      NoLegAssetAttributes() : FIX::Group(2308,2309,FIX::message_order(2309,2310,2311,0)) {}
        FIELD_SET(*this, FIX::LegAssetAttributeType);
        FIELD_SET(*this, FIX::LegAssetAttributeValue);
        FIELD_SET(*this, FIX::LegAssetAttributeLimit);
      };
      FIELD_SET(*this, FIX::LegSwapClass);
      FIELD_SET(*this, FIX::LegSwapSubClass);
      FIELD_SET(*this, FIX::LegNthToDefault);
      FIELD_SET(*this, FIX::LegMthToDefault);
      FIELD_SET(*this, FIX::LegSettledEntityMatrixSource);
      FIELD_SET(*this, FIX::LegSettledEntityMatrixPublicationDate);
      FIELD_SET(*this, FIX::LegCouponType);
      FIELD_SET(*this, FIX::LegTotalIssuedAmount);
      FIELD_SET(*this, FIX::LegCouponFrequencyPeriod);
      FIELD_SET(*this, FIX::LegCouponFrequencyUnit);
      FIELD_SET(*this, FIX::LegCouponDayCount);
      FIELD_SET(*this, FIX::LegCouponOtherDayCount);
      FIELD_SET(*this, FIX::LegConvertibleBondEquityID);
      FIELD_SET(*this, FIX::LegConvertibleBondEquityIDSource);
      FIELD_SET(*this, FIX::LegContractPriceRefMonth);
      FIELD_SET(*this, FIX::LegLienSeniority);
      FIELD_SET(*this, FIX::LegLoanFacility);
      FIELD_SET(*this, FIX::LegReferenceEntityType);
      FIELD_SET(*this, FIX::LegIndexSeries);
      FIELD_SET(*this, FIX::LegIndexAnnexVersion);
      FIELD_SET(*this, FIX::LegIndexAnnexDate);
      FIELD_SET(*this, FIX::LegIndexAnnexSource);
      FIELD_SET(*this, FIX::LegSettlRateIndex);
      FIELD_SET(*this, FIX::LegSettlRateIndexLocation);
      FIELD_SET(*this, FIX::LegOptionExpirationDesc);
      FIELD_SET(*this, FIX::EncodedLegOptionExpirationDescLen);
      FIELD_SET(*this, FIX::EncodedLegOptionExpirationDesc);
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
      FIELD_SET(*this, FIX::LegStrikeCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegStrikeMultiplier);
      FIELD_SET(*this, FIX::LegStrikeValue);
      FIELD_SET(*this, FIX::LegStrikeUnitOfMeasure);
      FIELD_SET(*this, FIX::LegStrikeIndex);
      FIELD_SET(*this, FIX::LegStrikeIndexCurvePoint);
      FIELD_SET(*this, FIX::LegStrikeIndexSpread);
      FIELD_SET(*this, FIX::LegStrikeIndexQuote);
      FIELD_SET(*this, FIX::LegStrikePriceDeterminationMethod);
      FIELD_SET(*this, FIX::LegStrikePriceBoundaryMethod);
      FIELD_SET(*this, FIX::LegStrikePriceBoundaryPrecision);
      FIELD_SET(*this, FIX::LegUnderlyingPriceDeterminationMethod);
      FIELD_SET(*this, FIX::LegOptAttribute);
      FIELD_SET(*this, FIX::LegContractMultiplier);
      FIELD_SET(*this, FIX::LegContractMultiplierUnit);
      FIELD_SET(*this, FIX::LegTradingUnitPeriodMultiplier);
      FIELD_SET(*this, FIX::LegFlowScheduleType);
      FIELD_SET(*this, FIX::LegMinPriceIncrement);
      FIELD_SET(*this, FIX::LegMinPriceIncrementAmount);
      FIELD_SET(*this, FIX::LegUnitOfMeasure);
      FIELD_SET(*this, FIX::LegUnitOfMeasureQty);
      FIELD_SET(*this, FIX::LegUnitOfMeasureCurrency);
      FIELD_SET(*this, FIX::LegUnitOfMeasureCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegPriceUnitOfMeasure);
      FIELD_SET(*this, FIX::LegPriceUnitOfMeasureQty);
      FIELD_SET(*this, FIX::LegPriceUnitOfMeasureCurrency);
      FIELD_SET(*this, FIX::LegPriceUnitOfMeasureCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegSettlMethod);
      FIELD_SET(*this, FIX::LegTimeUnit);
      FIELD_SET(*this, FIX::LegExerciseStyle);
      FIELD_SET(*this, FIX::LegOptPayoutType);
      FIELD_SET(*this, FIX::LegOptPayoutAmount);
      FIELD_SET(*this, FIX::LegReturnTrigger);
      FIELD_SET(*this, FIX::LegPriceQuoteMethod);
      FIELD_SET(*this, FIX::LegValuationMethod);
      FIELD_SET(*this, FIX::LegValuationSource);
      FIELD_SET(*this, FIX::LegValuationReferenceModel);
      FIELD_SET(*this, FIX::LegPriceQuoteCurrency);
      FIELD_SET(*this, FIX::LegPriceQuoteCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegListMethod);
      FIELD_SET(*this, FIX::LegCapPrice);
      FIELD_SET(*this, FIX::LegFloorPrice);
      FIELD_SET(*this, FIX::LegFlexibleIndicator);
      FIELD_SET(*this, FIX::LegFlexProductEligibilityIndicator);
      FIELD_SET(*this, FIX::LegCouponRate);
      FIELD_SET(*this, FIX::LegSecurityExchange);
      FIELD_SET(*this, FIX::LegPositionLimit);
      FIELD_SET(*this, FIX::LegNTPositionLimit);
      FIELD_SET(*this, FIX::LegIssuer);
      FIELD_SET(*this, FIX::EncodedLegIssuerLen);
      FIELD_SET(*this, FIX::EncodedLegIssuer);
      FIELD_SET(*this, FIX::LegFinancialInstrumentShortName);
      FIELD_SET(*this, FIX::LegFinancialInstrumentFullName);
      FIELD_SET(*this, FIX::EncodedLegFinancialInstrumentFullNameLen);
      FIELD_SET(*this, FIX::EncodedLegFinancialInstrumentFullName);
      FIELD_SET(*this, FIX::LegSecurityDesc);
      FIELD_SET(*this, FIX::EncodedLegSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedLegSecurityDesc);
      FIELD_SET(*this, FIX::LegSecurityXMLLen);
      FIELD_SET(*this, FIX::LegSecurityXML);
      FIELD_SET(*this, FIX::LegSecurityXMLSchema);
      FIELD_SET(*this, FIX::LegCPProgram);
      FIELD_SET(*this, FIX::LegCPRegType);
      FIELD_SET(*this, FIX::LegRatioQty);
      FIELD_SET(*this, FIX::LegSide);
      FIELD_SET(*this, FIX::LegCurrency);
      FIELD_SET(*this, FIX::LegCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegPool);
      FIELD_SET(*this, FIX::LegDatedDate);
      FIELD_SET(*this, FIX::LegContractSettlMonth);
      FIELD_SET(*this, FIX::LegInterestAccrualDate);
      FIELD_SET(*this, FIX::LegPutOrCall);
      FIELD_SET(*this, FIX::LegInTheMoneyCondition);
      FIELD_SET(*this, FIX::LegContraryInstructionEligibilityIndicator);
      FIELD_SET(*this, FIX::LegOptionRatio);
      FIELD_SET(*this, FIX::LegPrice);
      FIELD_SET(*this, FIX::NoLegEvents);
      class NoLegEvents: public FIX::Group
      {
      public:
      NoLegEvents() : FIX::Group(2059,2060,FIX::message_order(2060,2061,2062,2063,2064,2341,2065,2066,2074,2075,0)) {}
        FIELD_SET(*this, FIX::LegEventType);
        FIELD_SET(*this, FIX::LegEventDate);
        FIELD_SET(*this, FIX::LegEventTime);
        FIELD_SET(*this, FIX::LegEventTimeUnit);
        FIELD_SET(*this, FIX::LegEventTimePeriod);
        FIELD_SET(*this, FIX::LegEventMonthYear);
        FIELD_SET(*this, FIX::LegEventPx);
        FIELD_SET(*this, FIX::LegEventText);
        FIELD_SET(*this, FIX::EncodedLegEventTextLen);
        FIELD_SET(*this, FIX::EncodedLegEventText);
      };
      FIELD_SET(*this, FIX::NoLegInstrumentParties);
      class NoLegInstrumentParties: public FIX::Group
      {
      public:
      NoLegInstrumentParties() : FIX::Group(2254,2255,FIX::message_order(2255,2256,2257,2379,2258,0)) {}
        FIELD_SET(*this, FIX::LegInstrumentPartyID);
        FIELD_SET(*this, FIX::LegInstrumentPartyIDSource);
        FIELD_SET(*this, FIX::LegInstrumentPartyRole);
        FIELD_SET(*this, FIX::LegInstrumentPartyRoleQualifier);
        FIELD_SET(*this, FIX::NoLegInstrumentPartySubIDs);
        class NoLegInstrumentPartySubIDs: public FIX::Group
        {
        public:
        NoLegInstrumentPartySubIDs() : FIX::Group(2258,2259,FIX::message_order(2259,2260,0)) {}
          FIELD_SET(*this, FIX::LegInstrumentPartySubID);
          FIELD_SET(*this, FIX::LegInstrumentPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::LegShortSaleRestriction);
      FIELD_SET(*this, FIX::NoLegComplexEvents);
      class NoLegComplexEvents: public FIX::Group
      {
      public:
      NoLegComplexEvents() : FIX::Group(2218,2219,FIX::message_order(2219,2220,2221,2222,2223,2224,2225,2226,2944,2227,2228,2229,2230,2231,2232,2250,2233,2945,2234,2946,2235,2236,2409,2410,2237,2238,2239,2240,2241,41382,41389,41390,41391,41392,41393,41394,41395,41396,41397,41379,2242,2243,2244,2245,2246,41398,41366,2608,2609,2610,2248,2249,0)) {}
        FIELD_SET(*this, FIX::LegComplexEventType);
        FIELD_SET(*this, FIX::LegComplexOptPayoutPaySide);
        FIELD_SET(*this, FIX::LegComplexOptPayoutReceiveSide);
        FIELD_SET(*this, FIX::LegComplexOptPayoutUnderlier);
        FIELD_SET(*this, FIX::LegComplexOptPayoutAmount);
        FIELD_SET(*this, FIX::LegComplexOptPayoutPercentage);
        FIELD_SET(*this, FIX::LegComplexOptPayoutTime);
        FIELD_SET(*this, FIX::LegComplexOptPayoutCurrency);
        FIELD_SET(*this, FIX::LegComplexOptPayoutCurrencyCodeSource);
        FIELD_SET(*this, FIX::LegComplexEventPrice);
        FIELD_SET(*this, FIX::LegComplexEventPricePercentage);
        FIELD_SET(*this, FIX::LegComplexEventPriceBoundaryMethod);
        FIELD_SET(*this, FIX::LegComplexEventPriceBoundaryPrecision);
        FIELD_SET(*this, FIX::LegComplexEventPriceTimeType);
        FIELD_SET(*this, FIX::LegComplexEventCondition);
        FIELD_SET(*this, FIX::NoLegComplexEventDates);
        class NoLegComplexEventDates: public FIX::Group
        {
        public:
        NoLegComplexEventDates() : FIX::Group(2250,2251,FIX::message_order(2251,2252,2253,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventStartDate);
          FIELD_SET(*this, FIX::LegComplexEventEndDate);
          FIELD_SET(*this, FIX::NoLegComplexEventTimes);
          class NoLegComplexEventTimes: public FIX::Group
          {
          public:
          NoLegComplexEventTimes() : FIX::Group(2253,2204,FIX::message_order(2204,2247,0)) {}
            FIELD_SET(*this, FIX::LegComplexEventStartTime);
            FIELD_SET(*this, FIX::LegComplexEventEndTime);
          };
        };
        FIELD_SET(*this, FIX::LegComplexEventCurrencyOne);
        FIELD_SET(*this, FIX::LegComplexEventCurrencyOneCodeSource);
        FIELD_SET(*this, FIX::LegComplexEventCurrencyTwo);
        FIELD_SET(*this, FIX::LegComplexEventCurrencyTwoCodeSource);
        FIELD_SET(*this, FIX::LegComplexEventQuoteBasis);
        FIELD_SET(*this, FIX::LegComplexEventFixedFXRate);
        FIELD_SET(*this, FIX::LegComplexEventSpotRate);
        FIELD_SET(*this, FIX::LegComplexEventForwardPoints);
        FIELD_SET(*this, FIX::LegComplexEventDeterminationMethod);
        FIELD_SET(*this, FIX::LegComplexEventCalculationAgent);
        FIELD_SET(*this, FIX::LegComplexEventStrikePrice);
        FIELD_SET(*this, FIX::LegComplexEventStrikeFactor);
        FIELD_SET(*this, FIX::LegComplexEventStrikeNumberOfOptions);
        FIELD_SET(*this, FIX::NoLegComplexEventRateSources);
        class NoLegComplexEventRateSources: public FIX::Group
        {
        public:
        NoLegComplexEventRateSources() : FIX::Group(41382,41383,FIX::message_order(41383,41384,41385,41386,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventRateSource);
          FIELD_SET(*this, FIX::LegComplexEventRateSourceType);
          FIELD_SET(*this, FIX::LegComplexEventReferencePage);
          FIELD_SET(*this, FIX::LegComplexEvenReferencePageHeading);
        };
        FIELD_SET(*this, FIX::LegComplexEventDateUnadjusted);
        FIELD_SET(*this, FIX::LegComplexEventDateRelativeTo);
        FIELD_SET(*this, FIX::LegComplexEventDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegComplexEventDateOffsetUnit);
        FIELD_SET(*this, FIX::LegComplexEventDateOffsetDayType);
        FIELD_SET(*this, FIX::LegComplexEventDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegComplexEventDateBusinessCenters);
        class NoLegComplexEventDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegComplexEventDateBusinessCenters() : FIX::Group(41387,41388,FIX::message_order(41388,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegComplexEventDateAdjusted);
        FIELD_SET(*this, FIX::LegComplexEventFixingTime);
        FIELD_SET(*this, FIX::LegComplexEventFixingTimeBusinessCenter);
        FIELD_SET(*this, FIX::NoLegComplexEventPeriods);
        class NoLegComplexEventPeriods: public FIX::Group
        {
        public:
        NoLegComplexEventPeriods() : FIX::Group(41379,41380,FIX::message_order(41380,41381,41400,41376,41363,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventPeriodType);
          FIELD_SET(*this, FIX::LegComplexEventBusinessCenter);
          FIELD_SET(*this, FIX::NoLegComplexEventSchedules);
          class NoLegComplexEventSchedules: public FIX::Group
          {
          public:
          NoLegComplexEventSchedules() : FIX::Group(41400,41401,FIX::message_order(41401,41402,41403,41404,41405,0)) {}
            FIELD_SET(*this, FIX::LegComplexEventScheduleStartDate);
            FIELD_SET(*this, FIX::LegComplexEventScheduleEndDate);
            FIELD_SET(*this, FIX::LegComplexEventScheduleFrequencyPeriod);
            FIELD_SET(*this, FIX::LegComplexEventScheduleFrequencyUnit);
            FIELD_SET(*this, FIX::LegComplexEventScheduleRollConvention);
          };
          FIELD_SET(*this, FIX::NoLegComplexEventPeriodDateTimes);
          class NoLegComplexEventPeriodDateTimes: public FIX::Group
          {
          public:
          NoLegComplexEventPeriodDateTimes() : FIX::Group(41376,41377,FIX::message_order(41377,41378,0)) {}
            FIELD_SET(*this, FIX::LegComplexEventPeriodDate);
            FIELD_SET(*this, FIX::LegComplexEventPeriodTime);
          };
          FIELD_SET(*this, FIX::NoLegComplexEventAveragingObservations);
          class NoLegComplexEventAveragingObservations: public FIX::Group
          {
          public:
          NoLegComplexEventAveragingObservations() : FIX::Group(41363,41364,FIX::message_order(41364,41365,0)) {}
            FIELD_SET(*this, FIX::LegComplexEventAveragingObservationNumber);
            FIELD_SET(*this, FIX::LegComplexEventAveragingWeight);
          };
        };
        FIELD_SET(*this, FIX::LegComplexEventCreditEventsXIDRef);
        FIELD_SET(*this, FIX::LegComplexEventCreditEventNotifyingParty);
        FIELD_SET(*this, FIX::LegComplexEventCreditEventBusinessCenter);
        FIELD_SET(*this, FIX::LegComplexEventCreditEventStandardSources);
        FIELD_SET(*this, FIX::LegComplexEventCreditEventMinimumSources);
        FIELD_SET(*this, FIX::NoLegComplexEventCreditEventSources);
        class NoLegComplexEventCreditEventSources: public FIX::Group
        {
        public:
        NoLegComplexEventCreditEventSources() : FIX::Group(41398,41399,FIX::message_order(41399,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventCreditEventSource);
        };
        FIELD_SET(*this, FIX::NoLegComplexEventCreditEvents);
        class NoLegComplexEventCreditEvents: public FIX::Group
        {
        public:
        NoLegComplexEventCreditEvents() : FIX::Group(41366,41367,FIX::message_order(41367,41368,41369,41370,41371,41372,41373,41374,0)) {}
          FIELD_SET(*this, FIX::LegComplexEventCreditEventType);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventValue);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventCurrency);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventPeriod);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventUnit);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventDayType);
          FIELD_SET(*this, FIX::LegComplexEventCreditEventRateSource);
          FIELD_SET(*this, FIX::NoLegComplexEventCreditEventQualifiers);
          class NoLegComplexEventCreditEventQualifiers: public FIX::Group
          {
          public:
          NoLegComplexEventCreditEventQualifiers() : FIX::Group(41374,41375,FIX::message_order(41375,0)) {}
            FIELD_SET(*this, FIX::LegComplexEventCreditEventQualifier);
          };
        };
        FIELD_SET(*this, FIX::LegComplexEventFuturesPriceValuation);
        FIELD_SET(*this, FIX::LegComplexEventOptionsPriceValuation);
        FIELD_SET(*this, FIX::LegComplexEventPVFinalPriceElectionFallback);
        FIELD_SET(*this, FIX::LegComplexEventXID);
        FIELD_SET(*this, FIX::LegComplexEventXIDRef);
      };
      FIELD_SET(*this, FIX::LegStrategyType);
      FIELD_SET(*this, FIX::LegCommonPricingIndicator);
      FIELD_SET(*this, FIX::LegSettlDisruptionProvision);
      FIELD_SET(*this, FIX::LegDeliveryRouteOrCharter);
      FIELD_SET(*this, FIX::LegInstrumentRoundingDirection);
      FIELD_SET(*this, FIX::LegInstrumentRoundingPrecision);
      FIELD_SET(*this, FIX::LegBusinessDayConvention);
      FIELD_SET(*this, FIX::NoLegBusinessCenters);
      class NoLegBusinessCenters: public FIX::Group
      {
      public:
      NoLegBusinessCenters() : FIX::Group(40923,40924,FIX::message_order(40924,0)) {}
        FIELD_SET(*this, FIX::LegBusinessCenter);
      };
      FIELD_SET(*this, FIX::LegDateRollConvention);
      FIELD_SET(*this, FIX::LegPricingDateUnadjusted);
      FIELD_SET(*this, FIX::LegPricingDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoLegPricingDateBusinessCenters);
      class NoLegPricingDateBusinessCenters: public FIX::Group
      {
      public:
      NoLegPricingDateBusinessCenters() : FIX::Group(41607,41608,FIX::message_order(41608,0)) {}
        FIELD_SET(*this, FIX::LegPricingDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::LegPricingDateAdjusted);
      FIELD_SET(*this, FIX::LegPricingTime);
      FIELD_SET(*this, FIX::LegPricingTimeBusinessCenter);
      FIELD_SET(*this, FIX::LegMarketDisruptionProvision);
      FIELD_SET(*this, FIX::NoLegMarketDisruptionEvents);
      class NoLegMarketDisruptionEvents: public FIX::Group
      {
      public:
      NoLegMarketDisruptionEvents() : FIX::Group(41467,41468,FIX::message_order(41468,40223,0)) {}
        FIELD_SET(*this, FIX::LegMarketDisruptionEvent);
        FIELD_SET(*this, FIX::LegMarketDisruptionValue);
      };
      FIELD_SET(*this, FIX::LegMarketDisruptionFallbackProvision);
      FIELD_SET(*this, FIX::NoLegMarketDisruptionFallbacks);
      class NoLegMarketDisruptionFallbacks: public FIX::Group
      {
      public:
      NoLegMarketDisruptionFallbacks() : FIX::Group(41469,41470,FIX::message_order(41470,40990,0)) {}
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackType);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackValue);
      };
      FIELD_SET(*this, FIX::NoLegMarketDisruptionFallbackReferencePrices);
      class NoLegMarketDisruptionFallbackReferencePrices: public FIX::Group
      {
      public:
      NoLegMarketDisruptionFallbackReferencePrices() : FIX::Group(41471,41472,FIX::message_order(41472,41473,41474,41475,41476,41477,41478,41479,41480,0)) {}
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackUnderlierType);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackUnderlierSecurityID);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackUnderlierSecurityIDSource);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackUnderlierSecurityDesc);
        FIELD_SET(*this, FIX::EncodedLegMarketDisruptionFallbackUnderlierSecurityDescLen);
        FIELD_SET(*this, FIX::EncodedLegMarketDisruptionFallbackUnderlierSecurityDesc);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackOpenUnits);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackBasketCurrency);
        FIELD_SET(*this, FIX::LegMarketDisruptionFallbackBasketDivisor);
      };
      FIELD_SET(*this, FIX::LegMarketDisruptionMaximumDays);
      FIELD_SET(*this, FIX::LegMarketDisruptionMaterialityPercentage);
      FIELD_SET(*this, FIX::LegMarketDisruptionMinimumFuturesContracts);
      FIELD_SET(*this, FIX::LegExerciseDesc);
      FIELD_SET(*this, FIX::EncodedLegExerciseDescLen);
      FIELD_SET(*this, FIX::EncodedLegExerciseDesc);
      FIELD_SET(*this, FIX::LegAutomaticExerciseIndicator);
      FIELD_SET(*this, FIX::LegAutomaticExerciseThresholdRate);
      FIELD_SET(*this, FIX::LegExerciseConfirmationMethod);
      FIELD_SET(*this, FIX::LegManualNoticeBusinessCenter);
      FIELD_SET(*this, FIX::LegFallbackExerciseIndicator);
      FIELD_SET(*this, FIX::LegLimitRightToConfirmIndicator);
      FIELD_SET(*this, FIX::LegExerciseSplitTicketIndicator);
      FIELD_SET(*this, FIX::LegSettlMethodElectingPartySide);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateUnadjusted);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoLegSettlMethodElectionDateBusinessCenters);
      class NoLegSettlMethodElectionDateBusinessCenters: public FIX::Group
      {
      public:
      NoLegSettlMethodElectionDateBusinessCenters() : FIX::Group(42581,42582,FIX::message_order(42582,0)) {}
        FIELD_SET(*this, FIX::LegSettlMethodElectionDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateRelativeTo);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateOffsetPeriod);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateOffsetUnit);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateOffsetDayType);
      FIELD_SET(*this, FIX::LegSettlMethodElectionDateAdjusted);
      FIELD_SET(*this, FIX::LegOptionExerciseBusinessDayConvention);
      FIELD_SET(*this, FIX::NoLegOptionExerciseBusinessCenters);
      class NoLegOptionExerciseBusinessCenters: public FIX::Group
      {
      public:
      NoLegOptionExerciseBusinessCenters() : FIX::Group(41491,41492,FIX::message_order(41492,0)) {}
        FIELD_SET(*this, FIX::LegOptionExerciseBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoLegOptionExerciseDates);
      class NoLegOptionExerciseDates: public FIX::Group
      {
      public:
      NoLegOptionExerciseDates() : FIX::Group(41512,41513,FIX::message_order(41513,41514,0)) {}
        FIELD_SET(*this, FIX::LegOptionExerciseDate);
        FIELD_SET(*this, FIX::LegOptionExerciseDateType);
      };
      FIELD_SET(*this, FIX::LegOptionExerciseEarliestDateOffsetDayType);
      FIELD_SET(*this, FIX::LegOptionExerciseEarliestDateOffsetPeriod);
      FIELD_SET(*this, FIX::LegOptionExerciseEarliestDateOffsetUnit);
      FIELD_SET(*this, FIX::LegOptionExerciseFrequencyPeriod);
      FIELD_SET(*this, FIX::LegOptionExerciseFrequencyUnit);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateUnadjusted);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateRelativeTo);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateOffsetPeriod);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateOffsetUnit);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateOffsetDayType);
      FIELD_SET(*this, FIX::LegOptionExerciseStartDateAdjusted);
      FIELD_SET(*this, FIX::LegOptionExerciseSkip);
      FIELD_SET(*this, FIX::LegOptionExerciseNominationDeadline);
      FIELD_SET(*this, FIX::LegOptionExerciseFirstDateUnadjusted);
      FIELD_SET(*this, FIX::LegOptionExerciseLastDateUnadjusted);
      FIELD_SET(*this, FIX::LegOptionExerciseEarliestTime);
      FIELD_SET(*this, FIX::LegOptionExerciseLatestTime);
      FIELD_SET(*this, FIX::LegOptionExerciseTimeBusinessCenter);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoLegOptionExerciseExpirationDateBusinessCenters);
      class NoLegOptionExerciseExpirationDateBusinessCenters: public FIX::Group
      {
      public:
      NoLegOptionExerciseExpirationDateBusinessCenters() : FIX::Group(41515,41516,FIX::message_order(41516,0)) {}
        FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoLegOptionExerciseExpirationDates);
      class NoLegOptionExerciseExpirationDates: public FIX::Group
      {
      public:
      NoLegOptionExerciseExpirationDates() : FIX::Group(41527,41528,FIX::message_order(41528,41529,0)) {}
        FIELD_SET(*this, FIX::LegOptionExerciseExpirationDate);
        FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateType);
      };
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateRelativeTo);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateOffsetPeriod);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateOffsetUnit);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationFrequencyPeriod);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationFrequencyUnit);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationRollConvention);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationDateOffsetDayType);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationTime);
      FIELD_SET(*this, FIX::LegOptionExerciseExpirationTimeBusinessCenter);
      FIELD_SET(*this, FIX::LegMakeWholeDate);
      FIELD_SET(*this, FIX::LegMakeWholeAmount);
      FIELD_SET(*this, FIX::LegMakeWholeBenchmarkCurveName);
      FIELD_SET(*this, FIX::LegMakeWholeBenchmarkCurvePoint);
      FIELD_SET(*this, FIX::LegMakeWholeRecallSpread);
      FIELD_SET(*this, FIX::LegMakeWholeBenchmarkQuote);
      FIELD_SET(*this, FIX::LegMakeWholeInterpolationMethod);
      FIELD_SET(*this, FIX::NoLegStreams);
      class NoLegStreams: public FIX::Group
      {
      public:
      NoLegStreams() : FIX::Group(40241,40242,FIX::message_order(40242,41700,40243,42583,42584,40244,40245,41702,40246,40247,42585,42586,41703,41704,41705,41706,41707,41708,41648,41649,41650,41651,41652,41653,41654,42588,41655,41656,41657,41658,41659,41660,41661,41662,41663,41664,41665,41666,41667,41668,41669,41670,41671,41672,41673,40249,40250,40252,40253,40254,40255,40256,40257,40258,40260,40261,40262,40263,40264,41641,41642,40265,40267,40268,40270,40271,40272,40273,40274,40275,40276,41643,41644,41645,40279,40280,40281,42399,40282,40283,43108,40284,40285,40286,40287,40288,42400,42401,42402,42403,40289,40290,40291,41549,41550,41551,41552,41553,41554,41555,42404,40374,40418,41429,41430,41431,41432,41433,42194,42195,41434,41435,41436,41437,41438,41219,41439,41440,41441,41442,41443,41444,41445,41446,41447,41448,41449,41450,41451,43095,41408,40248,40978,40979,0)) {}
        FIELD_SET(*this, FIX::LegStreamType);
        FIELD_SET(*this, FIX::LegStreamXID);
        FIELD_SET(*this, FIX::LegStreamDesc);
        FIELD_SET(*this, FIX::LegStreamVersion);
        FIELD_SET(*this, FIX::LegStreamVersionEffectiveDate);
        FIELD_SET(*this, FIX::LegStreamPaySide);
        FIELD_SET(*this, FIX::LegStreamReceiveSide);
        FIELD_SET(*this, FIX::LegStreamNotionalXIDRef);
        FIELD_SET(*this, FIX::LegStreamNotional);
        FIELD_SET(*this, FIX::LegStreamCurrency);
        FIELD_SET(*this, FIX::LegStreamNotionalDeterminationMethod);
        FIELD_SET(*this, FIX::LegStreamNotionalAdjustments);
        FIELD_SET(*this, FIX::LegStreamNotionalFrequencyPeriod);
        FIELD_SET(*this, FIX::LegStreamNotionalFrequencyUnit);
        FIELD_SET(*this, FIX::LegStreamNotionalCommodityFrequency);
        FIELD_SET(*this, FIX::LegStreamNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::LegStreamTotalNotional);
        FIELD_SET(*this, FIX::LegStreamTotalNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::LegStreamCommodityBase);
        FIELD_SET(*this, FIX::LegStreamCommodityType);
        FIELD_SET(*this, FIX::LegStreamCommoditySecurityID);
        FIELD_SET(*this, FIX::LegStreamCommoditySecurityIDSource);
        FIELD_SET(*this, FIX::NoLegStreamCommodityAltIDs);
        class NoLegStreamCommodityAltIDs: public FIX::Group
        {
        public:
        NoLegStreamCommodityAltIDs() : FIX::Group(41674,41675,FIX::message_order(41675,41676,0)) {}
          FIELD_SET(*this, FIX::LegStreamCommodityAltID);
          FIELD_SET(*this, FIX::LegStreamCommodityAltIDSource);
        };
        FIELD_SET(*this, FIX::LegStreamCommodityDesc);
        FIELD_SET(*this, FIX::EncodedLegStreamCommodityDescLen);
        FIELD_SET(*this, FIX::EncodedLegStreamCommodityDesc);
        FIELD_SET(*this, FIX::LegStreamCommodityDeliveryPricingRegion);
        FIELD_SET(*this, FIX::NoLegStreamAssetAttributes);
        class NoLegStreamAssetAttributes: public FIX::Group
        {
        public:
        NoLegStreamAssetAttributes() : FIX::Group(41452,41453,FIX::message_order(41453,41454,41455,0)) {}
          FIELD_SET(*this, FIX::LegStreamAssetAttributeType);
          FIELD_SET(*this, FIX::LegStreamAssetAttributeValue);
          FIELD_SET(*this, FIX::LegStreamAssetAttributeLimit);
        };
        FIELD_SET(*this, FIX::LegStreamCommodityUnitOfMeasure);
        FIELD_SET(*this, FIX::LegStreamCommodityCurrency);
        FIELD_SET(*this, FIX::LegStreamCommodityExchange);
        FIELD_SET(*this, FIX::LegStreamCommodityRateSource);
        FIELD_SET(*this, FIX::LegStreamCommodityRateReferencePage);
        FIELD_SET(*this, FIX::LegStreamCommodityRateReferencePageHeading);
        FIELD_SET(*this, FIX::LegStreamDataProvider);
        FIELD_SET(*this, FIX::NoLegStreamCommodityDataSources);
        class NoLegStreamCommodityDataSources: public FIX::Group
        {
        public:
        NoLegStreamCommodityDataSources() : FIX::Group(41677,41678,FIX::message_order(41678,41679,0)) {}
          FIELD_SET(*this, FIX::LegStreamCommodityDataSourceID);
          FIELD_SET(*this, FIX::LegStreamCommodityDataSourceIDType);
        };
        FIELD_SET(*this, FIX::LegStreamCommodityPricingType);
        FIELD_SET(*this, FIX::LegStreamCommodityNearbySettlDayPeriod);
        FIELD_SET(*this, FIX::LegStreamCommodityNearbySettlDayUnit);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegStreamCommoditySettlBusinessCenters);
        class NoLegStreamCommoditySettlBusinessCenters: public FIX::Group
        {
        public:
        NoLegStreamCommoditySettlBusinessCenters() : FIX::Group(41646,41647,FIX::message_order(41647,0)) {}
          FIELD_SET(*this, FIX::LegStreamCommoditySettlBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDateAdjusted);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlMonth);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDateRollPeriod);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDateRollUnit);
        FIELD_SET(*this, FIX::LegStreamCommoditySettlDayType);
        FIELD_SET(*this, FIX::NoLegStreamCommoditySettlPeriods);
        class NoLegStreamCommoditySettlPeriods: public FIX::Group
        {
        public:
        NoLegStreamCommoditySettlPeriods() : FIX::Group(41686,41687,FIX::message_order(41687,41688,41689,41690,41691,41692,41693,41694,41695,41696,41697,41680,41698,41699,0)) {}
          FIELD_SET(*this, FIX::LegStreamCommoditySettlCountry);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlTimeZone);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlFlowType);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodNotional);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodNotionalUnitOfMeasure);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodFrequencyPeriod);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodFrequencyUnit);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodPrice);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodPriceUnitOfMeasure);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodPriceCurrency);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlHolidaysProcessingInstruction);
          FIELD_SET(*this, FIX::NoLegStreamCommoditySettlDays);
          class NoLegStreamCommoditySettlDays: public FIX::Group
          {
          public:
          NoLegStreamCommoditySettlDays() : FIX::Group(41680,41681,FIX::message_order(41681,41682,41683,0)) {}
            FIELD_SET(*this, FIX::LegStreamCommoditySettlDay);
            FIELD_SET(*this, FIX::LegStreamCommoditySettlTotalHours);
            FIELD_SET(*this, FIX::NoLegStreamCommoditySettlTimes);
            class NoLegStreamCommoditySettlTimes: public FIX::Group
            {
            public:
            NoLegStreamCommoditySettlTimes() : FIX::Group(41683,41684,FIX::message_order(41684,41685,41935,0)) {}
              FIELD_SET(*this, FIX::LegStreamCommoditySettlStart);
              FIELD_SET(*this, FIX::LegStreamCommoditySettlEnd);
              FIELD_SET(*this, FIX::LegStreamCommoditySettlTimeType);
            };
          };
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodXID);
          FIELD_SET(*this, FIX::LegStreamCommoditySettlPeriodXIDRef);
        };
        FIELD_SET(*this, FIX::LegStreamCommodityXID);
        FIELD_SET(*this, FIX::LegStreamCommodityXIDRef);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegStreamEffectiveDateBusinessCenters);
        class NoLegStreamEffectiveDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegStreamEffectiveDateBusinessCenters() : FIX::Group(40942,40251,FIX::message_order(40251,0)) {}
          FIELD_SET(*this, FIX::LegStreamEffectiveDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegStreamEffectiveDateRelativeTo);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateOffsetUnit);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateOffsetDayType);
        FIELD_SET(*this, FIX::LegStreamEffectiveDateAdjusted);
        FIELD_SET(*this, FIX::LegStreamTerminationDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamTerminationDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegStreamTerminationDateBusinessCenters);
        class NoLegStreamTerminationDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegStreamTerminationDateBusinessCenters() : FIX::Group(40943,40259,FIX::message_order(40259,0)) {}
          FIELD_SET(*this, FIX::LegStreamTerminationDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegStreamTerminationDateRelativeTo);
        FIELD_SET(*this, FIX::LegStreamTerminationDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegStreamTerminationDateOffsetUnit);
        FIELD_SET(*this, FIX::LegStreamTerminationDateOffsetDayType);
        FIELD_SET(*this, FIX::LegStreamTerminationDateAdjusted);
        FIELD_SET(*this, FIX::LegStreamCalculationPeriodDatesXID);
        FIELD_SET(*this, FIX::LegStreamCalculationPeriodDatesXIDRef);
        FIELD_SET(*this, FIX::LegStreamCalculationPeriodBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegStreamCalculationPeriodBusinessCenters);
        class NoLegStreamCalculationPeriodBusinessCenters: public FIX::Group
        {
        public:
        NoLegStreamCalculationPeriodBusinessCenters() : FIX::Group(40940,40266,FIX::message_order(40266,0)) {}
          FIELD_SET(*this, FIX::LegStreamCalculationPeriodBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoLegStreamCalculationPeriodDates);
        class NoLegStreamCalculationPeriodDates: public FIX::Group
        {
        public:
        NoLegStreamCalculationPeriodDates() : FIX::Group(41638,41639,FIX::message_order(41639,41640,0)) {}
          FIELD_SET(*this, FIX::LegStreamCalculationPeriodDate);
          FIELD_SET(*this, FIX::LegStreamCalculationPeriodDateType);
        };
        FIELD_SET(*this, FIX::LegStreamFirstPeriodStartDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamFirstPeriodStartDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegStreamFirstPeriodStartDateBusinessCenters);
        class NoLegStreamFirstPeriodStartDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegStreamFirstPeriodStartDateBusinessCenters() : FIX::Group(40941,40269,FIX::message_order(40269,0)) {}
          FIELD_SET(*this, FIX::LegStreamFirstPeriodStartDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegStreamFirstPeriodStartDateAdjusted);
        FIELD_SET(*this, FIX::LegStreamFirstRegularPeriodStartDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamFirstCompoundingPeriodEndDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamLastRegularPeriodEndDateUnadjusted);
        FIELD_SET(*this, FIX::LegStreamCalculationFrequencyPeriod);
        FIELD_SET(*this, FIX::LegStreamCalculationFrequencyUnit);
        FIELD_SET(*this, FIX::LegStreamCalculationRollConvention);
        FIELD_SET(*this, FIX::LegStreamCalculationBalanceOfFirstPeriod);
        FIELD_SET(*this, FIX::LegStreamCalculationCorrectionPeriod);
        FIELD_SET(*this, FIX::LegStreamCalculationCorrectionUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamType);
        FIELD_SET(*this, FIX::LegPaymentStreamMarketRate);
        FIELD_SET(*this, FIX::LegPaymentStreamDelayIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamCashSettlIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamSettlCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamDayCount);
        FIELD_SET(*this, FIX::LegPaymentStreamOtherDayCount);
        FIELD_SET(*this, FIX::LegPaymentStreamAccrualDays);
        FIELD_SET(*this, FIX::LegPaymentStreamDiscountType);
        FIELD_SET(*this, FIX::LegPaymentStreamDiscountRate);
        FIELD_SET(*this, FIX::LegPaymentStreamDiscountRateDayCount);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingXIDRef);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingSpread);
        FIELD_SET(*this, FIX::LegPaymentStreamInterpolationMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamInterpolationPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamInterimPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamFlatRateIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamFlatRateAmount);
        FIELD_SET(*this, FIX::LegPaymentStreamFlatRateCurrency);
        FIELD_SET(*this, FIX::LegStreamMaximumPaymentAmount);
        FIELD_SET(*this, FIX::LegStreamMaximumPaymentCurrency);
        FIELD_SET(*this, FIX::LegStreamMaximumTransactionAmount);
        FIELD_SET(*this, FIX::LegStreamMaximumTransactionCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamPaymentDateBusinessCenters);
        class NoLegPaymentStreamPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamPaymentDateBusinessCenters() : FIX::Group(40930,40293,FIX::message_order(40293,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoLegPaymentStreamPaymentDates);
        class NoLegPaymentStreamPaymentDates: public FIX::Group
        {
        public:
        NoLegPaymentStreamPaymentDates() : FIX::Group(41589,41590,FIX::message_order(41590,41591,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamPaymentDate);
          FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateType);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentFrequencyPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentFrequencyUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentRollConvention);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamLastRegularPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamMasterAgreementPaymentDatesIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalPricePaymentDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamResetDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamResetDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamResetDateBusinessCenters);
        class NoLegPaymentStreamResetDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamResetDateBusinessCenters() : FIX::Group(40931,40305,FIX::message_order(40305,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamResetDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamResetFrequencyPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamResetFrequencyUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamResetWeeklyRollConvention);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamInitialFixingDateBusinessCenters);
        class NoLegPaymentStreamInitialFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamInitialFixingDateBusinessCenters() : FIX::Group(40932,40311,FIX::message_order(40311,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialFixingDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamFixingDateBusinessCenters);
        class NoLegPaymentStreamFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamFixingDateBusinessCenters() : FIX::Group(40933,40318,FIX::message_order(40318,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamFixingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamFixingDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamRateCutoffDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamRateCutoffDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamRateCutoffDateOffsetDayType);
        FIELD_SET(*this, FIX::NoLegPaymentStreamFixingDates);
        class NoLegPaymentStreamFixingDates: public FIX::Group
        {
        public:
        NoLegPaymentStreamFixingDates() : FIX::Group(42459,42460,FIX::message_order(42460,42461,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamFixingDate);
          FIELD_SET(*this, FIX::LegPaymentStreamFixingDateType);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamRate);
        FIELD_SET(*this, FIX::LegPaymentStreamFixedAmount);
        FIELD_SET(*this, FIX::LegPaymentStreamRateOrAmountCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamFixedAmountUnitOfMeasure);
        FIELD_SET(*this, FIX::LegPaymentStreamTotalFixedAmount);
        FIELD_SET(*this, FIX::LegPaymentStreamFutureValueNotional);
        FIELD_SET(*this, FIX::LegPaymentStreamFutureValueDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamWorldScaleRate);
        FIELD_SET(*this, FIX::LegPaymentStreamContractPrice);
        FIELD_SET(*this, FIX::LegPaymentStreamContractPriceCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexSource);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexID);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexIDSource);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexCurveUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2Source);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2ID);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2IDSource);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2CurveUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndex2CurvePeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexLocation);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexLevel);
        FIELD_SET(*this, FIX::LegPaymentStreamRateIndexUnitOfMeasure);
        FIELD_SET(*this, FIX::LegPaymentStreamSettlLevel);
        FIELD_SET(*this, FIX::LegPaymentStreamReferenceLevel);
        FIELD_SET(*this, FIX::LegPaymentStreamReferenceLevelUnitOfMeasure);
        FIELD_SET(*this, FIX::LegPaymentStreamReferenceLevelEqualsZeroIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamRateMultiplier);
        FIELD_SET(*this, FIX::LegPaymentStreamRateSpread);
        FIELD_SET(*this, FIX::LegPaymentStreamRateSpreadCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamRateSpreadUnitOfMeasure);
        FIELD_SET(*this, FIX::LegPaymentStreamRateConversionFactor);
        FIELD_SET(*this, FIX::LegPaymentStreamRateSpreadType);
        FIELD_SET(*this, FIX::LegPaymentStreamRateSpreadPositionType);
        FIELD_SET(*this, FIX::LegPaymentStreamRateTreatment);
        FIELD_SET(*this, FIX::LegPaymentStreamCapRate);
        FIELD_SET(*this, FIX::LegPaymentStreamCapRateBuySide);
        FIELD_SET(*this, FIX::LegPaymentStreamCapRateSellSide);
        FIELD_SET(*this, FIX::LegPaymentStreamFloorRate);
        FIELD_SET(*this, FIX::LegPaymentStreamFloorRateBuySide);
        FIELD_SET(*this, FIX::LegPaymentStreamFloorRateSellSide);
        FIELD_SET(*this, FIX::LegPaymentStreamInitialRate);
        FIELD_SET(*this, FIX::LegPaymentStreamLastResetRate);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalRate);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::LegPaymentStreamFinalRatePrecision);
        FIELD_SET(*this, FIX::LegPaymentStreamAveragingMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamNegativeRateTreatment);
        FIELD_SET(*this, FIX::LegPaymentStreamCalculationLagPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCalculationLagUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamFirstObservationDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamPricingDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamPricingDayDistribution);
        FIELD_SET(*this, FIX::LegPaymentStreamPricingDayCount);
        FIELD_SET(*this, FIX::LegPaymentStreamPricingBusinessCalendar);
        FIELD_SET(*this, FIX::LegPaymentStreamPricingBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamPricingBusinessCenters);
        class NoLegPaymentStreamPricingBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamPricingBusinessCenters() : FIX::Group(41561,41562,FIX::message_order(41562,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamPricingBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoLegPaymentStreamPricingDays);
        class NoLegPaymentStreamPricingDays: public FIX::Group
        {
        public:
        NoLegPaymentStreamPricingDays() : FIX::Group(41596,41597,FIX::message_order(41597,41598,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamPricingDayOfWeek);
          FIELD_SET(*this, FIX::LegPaymentStreamPricingDayNumber);
        };
        FIELD_SET(*this, FIX::NoLegPaymentStreamPricingDates);
        class NoLegPaymentStreamPricingDates: public FIX::Group
        {
        public:
        NoLegPaymentStreamPricingDates() : FIX::Group(41593,41594,FIX::message_order(41594,41595,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamPricingDate);
          FIELD_SET(*this, FIX::LegPaymentStreamPricingDateType);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamInflationLagPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationLagUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationLagDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationInterpolationMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationIndexSource);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationPublicationSource);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationInitialIndexLevel);
        FIELD_SET(*this, FIX::LegPaymentStreamInflationFallbackBondApplicable);
        FIELD_SET(*this, FIX::LegPaymentStreamFRADiscounting);
        FIELD_SET(*this, FIX::LegPaymentStreamUnderlierRefID);
        FIELD_SET(*this, FIX::LegPaymentStreamFormulaCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamFormulaCurrencyDeterminationMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamFormulaReferenceAmount);
        FIELD_SET(*this, FIX::NoLegPaymentStreamFormulas);
        class NoLegPaymentStreamFormulas: public FIX::Group
        {
        public:
        NoLegPaymentStreamFormulas() : FIX::Group(42485,43110,FIX::message_order(43110,42486,42487,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamFormulaLength);
          FIELD_SET(*this, FIX::LegPaymentStreamFormula);
          FIELD_SET(*this, FIX::LegPaymentStreamFormulaDesc);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamFormulaImageLength);
        FIELD_SET(*this, FIX::LegPaymentStreamFormulaImage);
        FIELD_SET(*this, FIX::LegDividendReinvestmentIndicator);
        FIELD_SET(*this, FIX::LegDividendEntitlementEvent);
        FIELD_SET(*this, FIX::LegDividendAmountType);
        FIELD_SET(*this, FIX::LegDividendUnderlierRefID);
        FIELD_SET(*this, FIX::NoLegDividendPeriods);
        class NoLegDividendPeriods: public FIX::Group
        {
        public:
        NoLegDividendPeriods() : FIX::Group(42366,42367,FIX::message_order(42367,42368,42369,42370,42371,42372,42386,42373,42374,42375,42376,42377,42378,42379,42380,42381,42382,42383,42384,42385,0)) {}
          FIELD_SET(*this, FIX::LegDividendPeriodSequence);
          FIELD_SET(*this, FIX::LegDividendPeriodStartDateUnadjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodEndDateUnadjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodUnderlierRefID);
          FIELD_SET(*this, FIX::LegDividendPeriodStrikePrice);
          FIELD_SET(*this, FIX::LegDividendPeriodBusinessDayConvention);
          FIELD_SET(*this, FIX::NoLegDividendPeriodBusinessCenters);
          class NoLegDividendPeriodBusinessCenters: public FIX::Group
          {
          public:
          NoLegDividendPeriodBusinessCenters() : FIX::Group(42386,42387,FIX::message_order(42387,0)) {}
            FIELD_SET(*this, FIX::LegDividendPeriodBusinessCenter);
          };
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateUnadjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateRelativeTo);
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateOffsetUnit);
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateOffsetDayType);
          FIELD_SET(*this, FIX::LegDividendPeriodValuationDateAdjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateUnadjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateRelativeTo);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateOffsetUnit);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateOffsetDayType);
          FIELD_SET(*this, FIX::LegDividendPeriodPaymentDateAdjusted);
          FIELD_SET(*this, FIX::LegDividendPeriodXID);
        };
        FIELD_SET(*this, FIX::LegExtraordinaryDividendPartySide);
        FIELD_SET(*this, FIX::LegExtraordinaryDividendAmountType);
        FIELD_SET(*this, FIX::LegExtraordinaryDividendCurrency);
        FIELD_SET(*this, FIX::LegExtraordinaryDividendDeterminationMethod);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateRelativeTo);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateOffsetUnit);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateOffsetDayType);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateUnadjusted);
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegDividendFXTriggerDateBusinessCenters);
        class NoLegDividendFXTriggerDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegDividendFXTriggerDateBusinessCenters() : FIX::Group(42364,42365,FIX::message_order(42365,0)) {}
          FIELD_SET(*this, FIX::LegDividendFXTriggerDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegDividendFXTriggerDateAdjusted);
        FIELD_SET(*this, FIX::LegDividendFloatingRateIndex);
        FIELD_SET(*this, FIX::LegDividendFloatingRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::LegDividendFloatingRateIndexCurveUnit);
        FIELD_SET(*this, FIX::LegDividendFloatingRateMultiplier);
        FIELD_SET(*this, FIX::LegDividendFloatingRateSpread);
        FIELD_SET(*this, FIX::LegDividendFloatingRateSpreadPositionType);
        FIELD_SET(*this, FIX::LegDividendFloatingRateTreatment);
        FIELD_SET(*this, FIX::LegDividendCapRate);
        FIELD_SET(*this, FIX::LegDividendCapRateBuySide);
        FIELD_SET(*this, FIX::LegDividendCapRateSellSide);
        FIELD_SET(*this, FIX::LegDividendFloorRate);
        FIELD_SET(*this, FIX::LegDividendFloorRateBuySide);
        FIELD_SET(*this, FIX::LegDividendFloorRateSellSide);
        FIELD_SET(*this, FIX::LegDividendInitialRate);
        FIELD_SET(*this, FIX::LegDividendFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::LegDividendFinalRatePrecision);
        FIELD_SET(*this, FIX::LegDividendAveragingMethod);
        FIELD_SET(*this, FIX::LegDividendNegativeRateTreatment);
        FIELD_SET(*this, FIX::LegDividendAccrualFixedRate);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegDividendAccrualPaymentDateBusinessCenters);
        class NoLegDividendAccrualPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegDividendAccrualPaymentDateBusinessCenters() : FIX::Group(42310,42311,FIX::message_order(42311,0)) {}
          FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegDividendAccrualPaymentDateAdjusted);
        FIELD_SET(*this, FIX::LegDividendCompoundingMethod);
        FIELD_SET(*this, FIX::LegDividendNumOfIndexUnits);
        FIELD_SET(*this, FIX::LegDividendCashPercentage);
        FIELD_SET(*this, FIX::LegDividendCashEquivalentPercentage);
        FIELD_SET(*this, FIX::LegNonCashDividendTreatment);
        FIELD_SET(*this, FIX::LegDividendComposition);
        FIELD_SET(*this, FIX::LegSpecialDividendsIndicator);
        FIELD_SET(*this, FIX::LegMaterialDividendsIndicator);
        FIELD_SET(*this, FIX::LegOptionsExchangeDividendsIndicator);
        FIELD_SET(*this, FIX::LegAdditionalDividendsIndicator);
        FIELD_SET(*this, FIX::LegAllDividendsIndicator);
        FIELD_SET(*this, FIX::LegReturnRateNotionalReset);
        FIELD_SET(*this, FIX::NoLegReturnRates);
        class NoLegReturnRates: public FIX::Group
        {
        public:
        NoLegReturnRates() : FIX::Group(42534,42535,FIX::message_order(42535,42536,42537,42538,42539,42540,42564,42530,42541,42542,42543,42544,42545,42546,42547,42548,42549,42550,42551,42552,42560,42553,42554,42508,42555,42556,42557,42558,42559,0)) {}
          FIELD_SET(*this, FIX::LegReturnRatePriceSequence);
          FIELD_SET(*this, FIX::LegReturnRateCommissionBasis);
          FIELD_SET(*this, FIX::LegReturnRateCommissionAmount);
          FIELD_SET(*this, FIX::LegReturnRateCommissionCurrency);
          FIELD_SET(*this, FIX::LegReturnRateTotalCommissionPerTrade);
          FIELD_SET(*this, FIX::LegReturnRateDeterminationMethod);
          FIELD_SET(*this, FIX::NoLegReturnRatePrices);
          class NoLegReturnRatePrices: public FIX::Group
          {
          public:
          NoLegReturnRatePrices() : FIX::Group(42564,42565,FIX::message_order(42565,42566,42567,42568,0)) {}
            FIELD_SET(*this, FIX::LegReturnRatePriceBasis);
            FIELD_SET(*this, FIX::LegReturnRatePrice);
            FIELD_SET(*this, FIX::LegReturnRatePriceCurrency);
            FIELD_SET(*this, FIX::LegReturnRatePriceType);
          };
          FIELD_SET(*this, FIX::NoLegReturnRateFXConversions);
          class NoLegReturnRateFXConversions: public FIX::Group
          {
          public:
          NoLegReturnRateFXConversions() : FIX::Group(42530,42531,FIX::message_order(42531,42532,42533,0)) {}
            FIELD_SET(*this, FIX::LegReturnRateFXCurrencySymbol);
            FIELD_SET(*this, FIX::LegReturnRateFXRate);
            FIELD_SET(*this, FIX::LegReturnRateFXRateCalc);
          };
          FIELD_SET(*this, FIX::LegReturnRateAmountRelativeTo);
          FIELD_SET(*this, FIX::LegReturnRateQuoteMeasureType);
          FIELD_SET(*this, FIX::LegReturnRateQuoteUnits);
          FIELD_SET(*this, FIX::LegReturnRateQuoteMethod);
          FIELD_SET(*this, FIX::LegReturnRateQuoteCurrency);
          FIELD_SET(*this, FIX::LegReturnRateQuoteCurrencyType);
          FIELD_SET(*this, FIX::LegReturnRateQuoteTimeType);
          FIELD_SET(*this, FIX::LegReturnRateQuoteTime);
          FIELD_SET(*this, FIX::LegReturnRateQuoteDate);
          FIELD_SET(*this, FIX::LegReturnRateQuoteExpirationTime);
          FIELD_SET(*this, FIX::LegReturnRateQuoteBusinessCenter);
          FIELD_SET(*this, FIX::LegReturnRateQuoteExchange);
          FIELD_SET(*this, FIX::NoLegReturnRateInformationSources);
          class NoLegReturnRateInformationSources: public FIX::Group
          {
          public:
          NoLegReturnRateInformationSources() : FIX::Group(42560,42561,FIX::message_order(42561,42562,42563,0)) {}
            FIELD_SET(*this, FIX::LegReturnRateInformationSource);
            FIELD_SET(*this, FIX::LegReturnRateReferencePage);
            FIELD_SET(*this, FIX::LegReturnRateReferencePageHeading);
          };
          FIELD_SET(*this, FIX::LegReturnRateQuotePricingModel);
          FIELD_SET(*this, FIX::LegReturnRateCashFlowType);
          FIELD_SET(*this, FIX::NoLegReturnRateDates);
          class NoLegReturnRateDates: public FIX::Group
          {
          public:
          NoLegReturnRateDates() : FIX::Group(42508,42509,FIX::message_order(42509,42571,42510,42511,42512,42513,42514,42515,42516,42517,42518,42519,42520,42521,42522,42523,42524,42525,42526,42527,42528,42529,42569,0)) {}
            FIELD_SET(*this, FIX::LegReturnRateDateMode);
            FIELD_SET(*this, FIX::NoLegReturnRateValuationDates);
            class NoLegReturnRateValuationDates: public FIX::Group
            {
            public:
            NoLegReturnRateValuationDates() : FIX::Group(42571,42572,FIX::message_order(42572,42573,0)) {}
              FIELD_SET(*this, FIX::LegReturnRateValuationDate);
              FIELD_SET(*this, FIX::LegReturnRateValuationDateType);
            };
            FIELD_SET(*this, FIX::LegReturnRateValuationDateRelativeTo);
            FIELD_SET(*this, FIX::LegReturnRateValuationDateOffsetPeriod);
            FIELD_SET(*this, FIX::LegReturnRateValuationDateOffsetUnit);
            FIELD_SET(*this, FIX::LegReturnRateValuationDateOffsetDayType);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateUnadjusted);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateRelativeTo);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateOffsetPeriod);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateOffsetUnit);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateOffsetDayType);
            FIELD_SET(*this, FIX::LegReturnRateValuationStartDateAdjusted);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateUnadjusted);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateRelativeTo);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateOffsetPeriod);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateOffsetUnit);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateOffsetDayType);
            FIELD_SET(*this, FIX::LegReturnRateValuationEndDateAdjusted);
            FIELD_SET(*this, FIX::LegReturnRateValuationFrequencyPeriod);
            FIELD_SET(*this, FIX::LegReturnRateValuationFrequencyUnit);
            FIELD_SET(*this, FIX::LegReturnRateValuationFrequencyRollConvention);
            FIELD_SET(*this, FIX::LegReturnRateValuationDateBusinessDayConvention);
            FIELD_SET(*this, FIX::NoLegReturnRateValuationDateBusinessCenters);
            class NoLegReturnRateValuationDateBusinessCenters: public FIX::Group
            {
            public:
            NoLegReturnRateValuationDateBusinessCenters() : FIX::Group(42569,42570,FIX::message_order(42570,0)) {}
              FIELD_SET(*this, FIX::LegReturnRateValuationDateBusinessCenter);
            };
          };
          FIELD_SET(*this, FIX::LegReturnRateValuationTimeType);
          FIELD_SET(*this, FIX::LegReturnRateValuationTime);
          FIELD_SET(*this, FIX::LegReturnRateValuationTimeBusinessCenter);
          FIELD_SET(*this, FIX::LegReturnRateValuationPriceOption);
          FIELD_SET(*this, FIX::LegReturnRateFinalPriceFallback);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamLinkInitialLevel);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkClosingLevelIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkExpiringLevelIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkEstimatedTradingDays);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkStrikePrice);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkStrikePriceType);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkMaximumBoundary);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkMinimumBoundary);
        FIELD_SET(*this, FIX::LegPaymentStreamLinkNumberOfDataSeries);
        FIELD_SET(*this, FIX::LegPaymentStreamVarianceUnadjustedCap);
        FIELD_SET(*this, FIX::LegPaymentStreamRealizedVarianceMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamDaysAdjustmentIndicator);
        FIELD_SET(*this, FIX::LegPaymentStreamNearestExchangeContractRefID);
        FIELD_SET(*this, FIX::LegPaymentStreamVegaNotionalAmount);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFixedRate);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateIndex);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateIndexCurveUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateMultiplier);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateSpread);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateSpreadPositionType);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRateTreatment);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingCapRate);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingCapRateBuySide);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingCapRateSellSide);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFloorRate);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFloorRateBuySide);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFloorRateSellSide);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingInitialRate);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFinalRatePrecision);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingAveragingMethod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingNegativeRateTreatment);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamCompoundingDatesBusinessCenters);
        class NoLegPaymentStreamCompoundingDatesBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamCompoundingDatesBusinessCenters() : FIX::Group(42419,42420,FIX::message_order(42420,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoLegPaymentStreamCompoundingDates);
        class NoLegPaymentStreamCompoundingDates: public FIX::Group
        {
        public:
        NoLegPaymentStreamCompoundingDates() : FIX::Group(42405,42406,FIX::message_order(42406,42407,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDate);
          FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDateType);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingDatesOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingPeriodSkip);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingStartDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingEndDateAdjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFrequencyPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingFrequencyUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamCompoundingRollConvention);
        FIELD_SET(*this, FIX::LegPaymentStreamBoundsFirstDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamBoundsLastDateUnadjusted);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableRefCurrency);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegPaymentStreamNonDeliverableFixingDateBusinessCenters);
        class NoLegPaymentStreamNonDeliverableFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegPaymentStreamNonDeliverableFixingDateBusinessCenters() : FIX::Group(40929,40361,FIX::message_order(40361,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesRelativeTo);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesOffsetPeriod);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesOffsetUnit);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableFixingDatesOffsetDayType);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableSettlRateSource);
        FIELD_SET(*this, FIX::LegPaymentStreamNonDeliverableSettlReferencePage);
        FIELD_SET(*this, FIX::NoLegNonDeliverableFixingDates);
        class NoLegNonDeliverableFixingDates: public FIX::Group
        {
        public:
        NoLegNonDeliverableFixingDates() : FIX::Group(40367,40368,FIX::message_order(40368,40369,0)) {}
          FIELD_SET(*this, FIX::LegNonDeliverableFixingDate);
          FIELD_SET(*this, FIX::LegNonDeliverableFixingDateType);
        };
        FIELD_SET(*this, FIX::NoLegSettlRateFallbacks);
        class NoLegSettlRateFallbacks: public FIX::Group
        {
        public:
        NoLegSettlRateFallbacks() : FIX::Group(40902,40903,FIX::message_order(40903,40366,40370,40905,40906,0)) {}
          FIELD_SET(*this, FIX::LegSettlRatePostponementMaximumDays);
          FIELD_SET(*this, FIX::LegSettlRateFallbackRateSource);
          FIELD_SET(*this, FIX::LegSettlRateFallbackReferencePage);
          FIELD_SET(*this, FIX::LegSettlRatePostponementSurvey);
          FIELD_SET(*this, FIX::LegSettlRatePostponementCalculationAgent);
        };
        FIELD_SET(*this, FIX::NoLegPaymentSchedules);
        class NoLegPaymentSchedules: public FIX::Group
        {
        public:
        NoLegPaymentSchedules() : FIX::Group(40374,40375,FIX::message_order(40375,41533,41534,40376,40377,40378,40379,40380,40381,40382,40383,40384,40385,41535,41536,41537,41538,40386,40387,40388,40389,41539,41540,41541,41542,40390,40391,40392,40393,40394,40395,40414,40396,40397,40398,40399,40927,40401,40402,40403,41543,41544,40404,41530,41545,41546,41547,41548,40405,40406,40407,40408,40928,40410,40411,40412,40413,0)) {}
          FIELD_SET(*this, FIX::LegPaymentScheduleType);
          FIELD_SET(*this, FIX::LegPaymentScheduleXID);
          FIELD_SET(*this, FIX::LegPaymentScheduleXIDRef);
          FIELD_SET(*this, FIX::LegPaymentScheduleStubType);
          FIELD_SET(*this, FIX::LegPaymentScheduleStartDateUnadjusted);
          FIELD_SET(*this, FIX::LegPaymentScheduleEndDateUnadjusted);
          FIELD_SET(*this, FIX::LegPaymentSchedulePaySide);
          FIELD_SET(*this, FIX::LegPaymentScheduleReceiveSide);
          FIELD_SET(*this, FIX::LegPaymentScheduleNotional);
          FIELD_SET(*this, FIX::LegPaymentScheduleCurrency);
          FIELD_SET(*this, FIX::LegPaymentScheduleRate);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateMultiplier);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateSpread);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateCurrency);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateUnitOfMeasure);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateConversionFactor);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateSpreadType);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateSpreadPositionType);
          FIELD_SET(*this, FIX::LegPaymentScheduleRateTreatment);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixedAmount);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixedCurrency);
          FIELD_SET(*this, FIX::LegPaymentScheduleSettlPeriodPrice);
          FIELD_SET(*this, FIX::LegPaymentScheduleSettlPeriodPriceCurrency);
          FIELD_SET(*this, FIX::LegPaymentScheduleSettlPeriodPriceUnitOfMeasure);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepUnitOfMeasure);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepFrequencyPeriod);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepFrequencyUnit);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepOffsetValue);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepRate);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepOffsetRate);
          FIELD_SET(*this, FIX::LegPaymentScheduleStepRelativeTo);
          FIELD_SET(*this, FIX::NoLegPaymentScheduleRateSources);
          class NoLegPaymentScheduleRateSources: public FIX::Group
          {
          public:
          NoLegPaymentScheduleRateSources() : FIX::Group(40414,40415,FIX::message_order(40415,40416,40417,0)) {}
            FIELD_SET(*this, FIX::LegPaymentScheduleRateSource);
            FIELD_SET(*this, FIX::LegPaymentScheduleRateSourceType);
            FIELD_SET(*this, FIX::LegPaymentScheduleReferencePage);
          };
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateUnadjusted);
          FIELD_SET(*this, FIX::LegPaymentScheduleWeight);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateRelativeTo);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoLegPaymentScheduleFixingDateBusinessCenters);
          class NoLegPaymentScheduleFixingDateBusinessCenters: public FIX::Group
          {
          public:
          NoLegPaymentScheduleFixingDateBusinessCenters() : FIX::Group(40927,40400,FIX::message_order(40400,0)) {}
            FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateOffsetUnit);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateOffsetDayType);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDayDistribution);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDayCount);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingDateAdjusted);
          FIELD_SET(*this, FIX::NoLegPaymentScheduleFixingDays);
          class NoLegPaymentScheduleFixingDays: public FIX::Group
          {
          public:
          NoLegPaymentScheduleFixingDays() : FIX::Group(41530,41531,FIX::message_order(41531,41532,0)) {}
            FIELD_SET(*this, FIX::LegPaymentScheduleFixingDayOfWeek);
            FIELD_SET(*this, FIX::LegPaymentScheduleFixingDayNumber);
          };
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingLagPeriod);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingLagUnit);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingFirstObservationDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingFirstObservationDateOffsetUnit);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingTime);
          FIELD_SET(*this, FIX::LegPaymentScheduleFixingTimeBusinessCenter);
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangePaymentDateRelativeTo);
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDatesBusinessDayConvention);
          FIELD_SET(*this, FIX::NoLegPaymentScheduleInterimExchangeDateBusinessCenters);
          class NoLegPaymentScheduleInterimExchangeDateBusinessCenters: public FIX::Group
          {
          public:
          NoLegPaymentScheduleInterimExchangeDateBusinessCenters() : FIX::Group(40928,40409,FIX::message_order(40409,0)) {}
            FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDatesBusinessCenter);
          };
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDatesOffsetPeriod);
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDatesOffsetUnit);
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDatesOffsetDayType);
          FIELD_SET(*this, FIX::LegPaymentScheduleInterimExchangeDateAdjusted);
        };
        FIELD_SET(*this, FIX::NoLegPaymentStubs);
        class NoLegPaymentStubs: public FIX::Group
        {
        public:
        NoLegPaymentStubs() : FIX::Group(40418,40419,FIX::message_order(40419,40420,42497,42498,42499,42500,42501,42502,42503,42488,42489,42490,42491,42492,42493,42494,40421,40422,40423,40424,40425,40426,40427,40428,40429,40430,40431,40432,40433,40434,40435,40436,40437,40438,40439,40440,40441,40442,40443,40444,40445,40446,40447,0)) {}
          FIELD_SET(*this, FIX::LegPaymentStubType);
          FIELD_SET(*this, FIX::LegPaymentStubLength);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateUnadjusted);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoLegPaymentStubStartDateBusinessCenters);
          class NoLegPaymentStubStartDateBusinessCenters: public FIX::Group
          {
          public:
          NoLegPaymentStubStartDateBusinessCenters() : FIX::Group(42504,42505,FIX::message_order(42505,0)) {}
            FIELD_SET(*this, FIX::LegPaymentStubStartDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::LegPaymentStubStartDateRelativeTo);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateOffsetUnit);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateOffsetDayType);
          FIELD_SET(*this, FIX::LegPaymentStubStartDateAdjusted);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateUnadjusted);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoLegPaymentStubEndDateBusinessCenters);
          class NoLegPaymentStubEndDateBusinessCenters: public FIX::Group
          {
          public:
          NoLegPaymentStubEndDateBusinessCenters() : FIX::Group(42495,42496,FIX::message_order(42496,0)) {}
            FIELD_SET(*this, FIX::LegPaymentStubEndDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::LegPaymentStubEndDateRelativeTo);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateOffsetPeriod);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateOffsetUnit);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateOffsetDayType);
          FIELD_SET(*this, FIX::LegPaymentStubEndDateAdjusted);
          FIELD_SET(*this, FIX::LegPaymentStubRate);
          FIELD_SET(*this, FIX::LegPaymentStubFixedAmount);
          FIELD_SET(*this, FIX::LegPaymentStubFixedCurrency);
          FIELD_SET(*this, FIX::LegPaymentStubIndex);
          FIELD_SET(*this, FIX::LegPaymentStubIndexSource);
          FIELD_SET(*this, FIX::LegPaymentStubIndexCurvePeriod);
          FIELD_SET(*this, FIX::LegPaymentStubIndexCurveUnit);
          FIELD_SET(*this, FIX::LegPaymentStubIndexRateMultiplier);
          FIELD_SET(*this, FIX::LegPaymentStubIndexRateSpread);
          FIELD_SET(*this, FIX::LegPaymentStubIndexRateSpreadPositionType);
          FIELD_SET(*this, FIX::LegPaymentStubIndexRateTreatment);
          FIELD_SET(*this, FIX::LegPaymentStubIndexCapRate);
          FIELD_SET(*this, FIX::LegPaymentStubIndexCapRateBuySide);
          FIELD_SET(*this, FIX::LegPaymentStubIndexCapRateSellSide);
          FIELD_SET(*this, FIX::LegPaymentStubIndexFloorRate);
          FIELD_SET(*this, FIX::LegPaymentStubIndexFloorRateBuySide);
          FIELD_SET(*this, FIX::LegPaymentStubIndexFloorRateSellSide);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2Source);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2CurvePeriod);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2CurveUnit);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2RateMultiplier);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2RateSpread);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2RateSpreadPositionType);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2RateTreatment);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2CapRate);
          FIELD_SET(*this, FIX::LegPaymentStubIndex2FloorRate);
        };
        FIELD_SET(*this, FIX::LegDeliveryStreamType);
        FIELD_SET(*this, FIX::NoLegDeliveryStreamCommoditySources);
        class NoLegDeliveryStreamCommoditySources: public FIX::Group
        {
        public:
        NoLegDeliveryStreamCommoditySources() : FIX::Group(41460,41461,FIX::message_order(41461,0)) {}
          FIELD_SET(*this, FIX::LegDeliveryStreamCommoditySource);
        };
        FIELD_SET(*this, FIX::LegDeliveryStreamPipeline);
        FIELD_SET(*this, FIX::LegDeliveryStreamEntryPoint);
        FIELD_SET(*this, FIX::LegDeliveryStreamWithdrawalPoint);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryPoint);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryPointSource);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryPointDesc);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryRestriction);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryContingency);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliveryContingentPartySide);
        FIELD_SET(*this, FIX::LegDeliveryStreamDeliverAtSourceIndicator);
        FIELD_SET(*this, FIX::LegDeliveryStreamRiskApportionment);
        FIELD_SET(*this, FIX::LegDeliveryStreamRiskApportionmentSource);
        FIELD_SET(*this, FIX::NoLegDeliveryStreamCycles);
        class NoLegDeliveryStreamCycles: public FIX::Group
        {
        public:
        NoLegDeliveryStreamCycles() : FIX::Group(41456,41457,FIX::message_order(41457,41458,41459,0)) {}
          FIELD_SET(*this, FIX::LegDeliveryStreamCycleDesc);
          FIELD_SET(*this, FIX::EncodedLegDeliveryStreamCycleDescLen);
          FIELD_SET(*this, FIX::EncodedLegDeliveryStreamCycleDesc);
        };
        FIELD_SET(*this, FIX::LegDeliveryStreamTitleTransferLocation);
        FIELD_SET(*this, FIX::LegDeliveryStreamTitleTransferCondition);
        FIELD_SET(*this, FIX::LegDeliveryStreamImporterOfRecord);
        FIELD_SET(*this, FIX::LegDeliveryStreamNegativeTolerance);
        FIELD_SET(*this, FIX::LegDeliveryStreamPositiveTolerance);
        FIELD_SET(*this, FIX::LegDeliveryStreamToleranceUnitOfMeasure);
        FIELD_SET(*this, FIX::LegDeliveryStreamToleranceType);
        FIELD_SET(*this, FIX::LegDeliveryStreamToleranceOptionSide);
        FIELD_SET(*this, FIX::LegDeliveryStreamTotalPositiveTolerance);
        FIELD_SET(*this, FIX::LegDeliveryStreamTotalNegativeTolerance);
        FIELD_SET(*this, FIX::LegDeliveryStreamNotionalConversionFactor);
        FIELD_SET(*this, FIX::LegDeliveryStreamTransportEquipment);
        FIELD_SET(*this, FIX::LegDeliveryStreamElectingPartySide);
        FIELD_SET(*this, FIX::LegDeliveryStreamRouteOrCharter);
        FIELD_SET(*this, FIX::NoLegDeliverySchedules);
        class NoLegDeliverySchedules: public FIX::Group
        {
        public:
        NoLegDeliverySchedules() : FIX::Group(41408,41409,FIX::message_order(41409,41410,41411,41412,41413,41414,41415,41416,41417,41418,41419,41420,41421,41422,0)) {}
          FIELD_SET(*this, FIX::LegDeliveryScheduleType);
          FIELD_SET(*this, FIX::LegDeliveryScheduleXID);
          FIELD_SET(*this, FIX::LegDeliveryScheduleNotional);
          FIELD_SET(*this, FIX::LegDeliveryScheduleNotionalUnitOfMeasure);
          FIELD_SET(*this, FIX::LegDeliveryScheduleNotionalCommodityFrequency);
          FIELD_SET(*this, FIX::LegDeliveryScheduleNegativeTolerance);
          FIELD_SET(*this, FIX::LegDeliverySchedulePositiveTolerance);
          FIELD_SET(*this, FIX::LegDeliveryScheduleToleranceUnitOfMeasure);
          FIELD_SET(*this, FIX::LegDeliveryScheduleToleranceType);
          FIELD_SET(*this, FIX::LegDeliveryScheduleSettlCountry);
          FIELD_SET(*this, FIX::LegDeliveryScheduleSettlTimeZone);
          FIELD_SET(*this, FIX::LegDeliveryScheduleSettlFlowType);
          FIELD_SET(*this, FIX::LegDeliveryScheduleSettlHolidaysProcessingInstruction);
          FIELD_SET(*this, FIX::NoLegDeliveryScheduleSettlDays);
          class NoLegDeliveryScheduleSettlDays: public FIX::Group
          {
          public:
          NoLegDeliveryScheduleSettlDays() : FIX::Group(41422,41423,FIX::message_order(41423,41424,41425,0)) {}
            FIELD_SET(*this, FIX::LegDeliveryScheduleSettlDay);
            FIELD_SET(*this, FIX::LegDeliveryScheduleSettlTotalHours);
            FIELD_SET(*this, FIX::NoLegDeliveryScheduleSettlTimes);
            class NoLegDeliveryScheduleSettlTimes: public FIX::Group
            {
            public:
            NoLegDeliveryScheduleSettlTimes() : FIX::Group(41425,41426,FIX::message_order(41426,41427,41428,0)) {}
              FIELD_SET(*this, FIX::LegDeliveryScheduleSettlStart);
              FIELD_SET(*this, FIX::LegDeliveryScheduleSettlEnd);
              FIELD_SET(*this, FIX::LegDeliveryScheduleSettlTimeType);
            };
          };
        };
        FIELD_SET(*this, FIX::LegStreamText);
        FIELD_SET(*this, FIX::EncodedLegStreamTextLen);
        FIELD_SET(*this, FIX::EncodedLegStreamText);
      };
      FIELD_SET(*this, FIX::NoLegProvisions);
      class NoLegProvisions: public FIX::Group
      {
      public:
      NoLegProvisions() : FIX::Group(40448,40449,FIX::message_order(40449,40450,40451,40939,40453,40454,40455,42506,42507,40456,40457,40458,40524,40525,40526,40528,40529,40530,40531,40532,40476,40478,40479,40480,40481,40482,40483,40484,40485,40486,40487,40488,40489,40490,40491,40492,40493,40494,40498,40499,40501,40502,40503,40504,40505,40506,40507,40508,40509,40511,40512,40513,40514,40515,40459,40460,40461,40462,40463,40464,40465,40516,40518,40519,40520,40521,40522,40523,40466,40467,40468,40469,40470,41407,40472,40980,40981,40533,0)) {}
        FIELD_SET(*this, FIX::LegProvisionType);
        FIELD_SET(*this, FIX::LegProvisionDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionDateBusinessCenters);
        class NoLegProvisionDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionDateBusinessCenters() : FIX::Group(40939,40452,FIX::message_order(40452,0)) {}
          FIELD_SET(*this, FIX::LegProvisionDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegProvisionDateAdjusted);
        FIELD_SET(*this, FIX::LegProvisionDateTenorPeriod);
        FIELD_SET(*this, FIX::LegProvisionDateTenorUnit);
        FIELD_SET(*this, FIX::LegProvisionBreakFeeElection);
        FIELD_SET(*this, FIX::LegProvisionBreakFeeRate);
        FIELD_SET(*this, FIX::LegProvisionCalculationAgent);
        FIELD_SET(*this, FIX::LegProvisionOptionSinglePartyBuyerSide);
        FIELD_SET(*this, FIX::LegProvisionOptionSinglePartySellerSide);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueTime);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueTimeBusinessCenter);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionCashSettlValueDateBusinessCenters);
        class NoLegProvisionCashSettlValueDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionCashSettlValueDateBusinessCenters() : FIX::Group(40935,40527,FIX::message_order(40527,0)) {}
          FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateRelativeTo);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateOffsetDayType);
        FIELD_SET(*this, FIX::LegProvisionCashSettlValueDateAdjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionOptionExerciseBusinessCenters);
        class NoLegProvisionOptionExerciseBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionOptionExerciseBusinessCenters() : FIX::Group(40936,40477,FIX::message_order(40477,0)) {}
          FIELD_SET(*this, FIX::LegProvisionOptionExerciseBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoLegProvisionOptionExerciseFixedDates);
        class NoLegProvisionOptionExerciseFixedDates: public FIX::Group
        {
        public:
        NoLegProvisionOptionExerciseFixedDates() : FIX::Group(40495,40496,FIX::message_order(40496,40497,0)) {}
          FIELD_SET(*this, FIX::LegProvisionOptionExerciseFixedDate);
          FIELD_SET(*this, FIX::LegProvisionOptionExerciseFixedDateType);
        };
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseEarliestDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseEarliestDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseFrequencyPeriod);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseFrequencyUnit);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateRelativeTo);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateOffsetDayType);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStartDateAdjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExercisePeriodSkip);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseBoundsFirstDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseBoundsLastDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseEarliestTime);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseEarliestTimeBusinessCenter);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseLatestTime);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseLatestTimeBusinessCenter);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionOptionExpirationDateBusinessCenters);
        class NoLegProvisionOptionExpirationDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionOptionExpirationDateBusinessCenters() : FIX::Group(40937,40500,FIX::message_order(40500,0)) {}
          FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateRelativeTo);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateOffsetDayType);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationDateAdjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationTime);
        FIELD_SET(*this, FIX::LegProvisionOptionExpirationTimeBusinessCenter);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateUnadjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionOptionRelevantUnderlyingDateBusinessCenters);
        class NoLegProvisionOptionRelevantUnderlyingDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionOptionRelevantUnderlyingDateBusinessCenters() : FIX::Group(40938,40510,FIX::message_order(40510,0)) {}
          FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateRelativeTo);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateOffsetDayType);
        FIELD_SET(*this, FIX::LegProvisionOptionRelevantUnderlyingDateAdjusted);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseStyle);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseMultipleNotional);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseMinimumNotional);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseMaximumNotional);
        FIELD_SET(*this, FIX::LegProvisionOptionMinimumNumber);
        FIELD_SET(*this, FIX::LegProvisionOptionMaximumNumber);
        FIELD_SET(*this, FIX::LegProvisionOptionExerciseConfirmation);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegProvisionCashSettlPaymentDateBusinessCenters);
        class NoLegProvisionCashSettlPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegProvisionCashSettlPaymentDateBusinessCenters() : FIX::Group(40934,40517,FIX::message_order(40517,0)) {}
          FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateRangeFirst);
        FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateRangeLast);
        FIELD_SET(*this, FIX::NoLegProvisionCashSettlPaymentDates);
        class NoLegProvisionCashSettlPaymentDates: public FIX::Group
        {
        public:
        NoLegProvisionCashSettlPaymentDates() : FIX::Group(40473,40474,FIX::message_order(40474,40475,0)) {}
          FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDate);
          FIELD_SET(*this, FIX::LegProvisionCashSettlPaymentDateType);
        };
        FIELD_SET(*this, FIX::LegProvisionCashSettlMethod);
        FIELD_SET(*this, FIX::LegProvisionCashSettlCurrency);
        FIELD_SET(*this, FIX::LegProvisionCashSettlCurrency2);
        FIELD_SET(*this, FIX::LegProvisionCashSettlQuoteType);
        FIELD_SET(*this, FIX::LegProvisionCashSettlQuoteSource);
        FIELD_SET(*this, FIX::LegProvisionCashSettlQuoteReferencePage);
        FIELD_SET(*this, FIX::LegProvisionText);
        FIELD_SET(*this, FIX::EncodedLegProvisionTextLen);
        FIELD_SET(*this, FIX::EncodedLegProvisionText);
        FIELD_SET(*this, FIX::NoLegProvisionPartyIDs);
        class NoLegProvisionPartyIDs: public FIX::Group
        {
        public:
        NoLegProvisionPartyIDs() : FIX::Group(40533,40534,FIX::message_order(40534,40535,40536,2380,40537,0)) {}
          FIELD_SET(*this, FIX::LegProvisionPartyID);
          FIELD_SET(*this, FIX::LegProvisionPartyIDSource);
          FIELD_SET(*this, FIX::LegProvisionPartyRole);
          FIELD_SET(*this, FIX::LegProvisionPartyRoleQualifier);
          FIELD_SET(*this, FIX::NoLegProvisionPartySubIDs);
          class NoLegProvisionPartySubIDs: public FIX::Group
          {
          public:
          NoLegProvisionPartySubIDs() : FIX::Group(40537,40538,FIX::message_order(40538,40539,0)) {}
            FIELD_SET(*this, FIX::LegProvisionPartySubID);
            FIELD_SET(*this, FIX::LegProvisionPartySubIDType);
          };
        };
      };
      FIELD_SET(*this, FIX::NoLegAdditionalTerms);
      class NoLegAdditionalTerms: public FIX::Group
      {
      public:
      NoLegAdditionalTerms() : FIX::Group(41335,41336,FIX::message_order(41336,41337,41316,0)) {}
        FIELD_SET(*this, FIX::LegAdditionalTermConditionPrecedentBondIndicator);
        FIELD_SET(*this, FIX::LegAdditionalTermDiscrepancyClauseIndicator);
        FIELD_SET(*this, FIX::NoLegAdditionalTermBondRefs);
        class NoLegAdditionalTermBondRefs: public FIX::Group
        {
        public:
        NoLegAdditionalTermBondRefs() : FIX::Group(41316,41317,FIX::message_order(41317,41318,41319,41320,41321,41322,41323,41324,41325,41326,41327,41328,41329,41330,41331,41332,41333,41334,0)) {}
          FIELD_SET(*this, FIX::LegAdditionalTermBondSecurityID);
          FIELD_SET(*this, FIX::LegAdditionalTermBondSecurityIDSource);
          FIELD_SET(*this, FIX::LegAdditionalTermBondDesc);
          FIELD_SET(*this, FIX::EncodedLegAdditionalTermBondDescLen);
          FIELD_SET(*this, FIX::EncodedLegAdditionalTermBondDesc);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCurrency);
          FIELD_SET(*this, FIX::LegAdditionalTermBondIssuer);
          FIELD_SET(*this, FIX::EncodedLegAdditionalTermBondIssuerLen);
          FIELD_SET(*this, FIX::EncodedLegAdditionalTermBondIssuer);
          FIELD_SET(*this, FIX::LegAdditionalTermBondSeniority);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCouponType);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCouponRate);
          FIELD_SET(*this, FIX::LegAdditionalTermBondMaturityDate);
          FIELD_SET(*this, FIX::LegAdditionalTermBondParValue);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCurrentTotalIssuedAmount);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCouponFrequencyPeriod);
          FIELD_SET(*this, FIX::LegAdditionalTermBondCouponFrequencyUnit);
          FIELD_SET(*this, FIX::LegAdditionalTermBondDayCount);
        };
      };
      FIELD_SET(*this, FIX::NoLegProtectionTerms);
      class NoLegProtectionTerms: public FIX::Group
      {
      public:
      NoLegProtectionTerms() : FIX::Group(41616,41618,FIX::message_order(41618,41619,41620,41621,41622,41623,41624,41614,41625,41635,41617,0)) {}
        FIELD_SET(*this, FIX::LegProtectionTermNotional);
        FIELD_SET(*this, FIX::LegProtectionTermCurrency);
        FIELD_SET(*this, FIX::LegProtectionTermSellerNotifies);
        FIELD_SET(*this, FIX::LegProtectionTermBuyerNotifies);
        FIELD_SET(*this, FIX::LegProtectionTermEventBusinessCenter);
        FIELD_SET(*this, FIX::LegProtectionTermStandardSources);
        FIELD_SET(*this, FIX::LegProtectionTermEventMinimumSources);
        FIELD_SET(*this, FIX::NoLegProtectionTermEventNewsSources);
        class NoLegProtectionTermEventNewsSources: public FIX::Group
        {
        public:
        NoLegProtectionTermEventNewsSources() : FIX::Group(41614,41615,FIX::message_order(41615,0)) {}
          FIELD_SET(*this, FIX::LegProtectionTermEventNewsSource);
        };
        FIELD_SET(*this, FIX::NoLegProtectionTermEvents);
        class NoLegProtectionTermEvents: public FIX::Group
        {
        public:
        NoLegProtectionTermEvents() : FIX::Group(41625,41626,FIX::message_order(41626,41627,41628,41629,41630,41631,41632,41633,0)) {}
          FIELD_SET(*this, FIX::LegProtectionTermEventType);
          FIELD_SET(*this, FIX::LegProtectionTermEventValue);
          FIELD_SET(*this, FIX::LegProtectionTermEventCurrency);
          FIELD_SET(*this, FIX::LegProtectionTermEventPeriod);
          FIELD_SET(*this, FIX::LegProtectionTermEventUnit);
          FIELD_SET(*this, FIX::LegProtectionTermEventDayType);
          FIELD_SET(*this, FIX::LegProtectionTermEventRateSource);
          FIELD_SET(*this, FIX::NoLegProtectionTermEventQualifiers);
          class NoLegProtectionTermEventQualifiers: public FIX::Group
          {
          public:
          NoLegProtectionTermEventQualifiers() : FIX::Group(41633,41634,FIX::message_order(41634,0)) {}
            FIELD_SET(*this, FIX::LegProtectionTermEventQualifier);
          };
        };
        FIELD_SET(*this, FIX::NoLegProtectionTermObligations);
        class NoLegProtectionTermObligations: public FIX::Group
        {
        public:
        NoLegProtectionTermObligations() : FIX::Group(41635,41636,FIX::message_order(41636,41637,0)) {}
          FIELD_SET(*this, FIX::LegProtectionTermObligationType);
          FIELD_SET(*this, FIX::LegProtectionTermObligationValue);
        };
        FIELD_SET(*this, FIX::LegProtectionTermXID);
      };
      FIELD_SET(*this, FIX::NoLegCashSettlTerms);
      class NoLegCashSettlTerms: public FIX::Group
      {
      public:
      NoLegCashSettlTerms() : FIX::Group(41344,41345,FIX::message_order(41345,41346,41347,41348,41349,41350,41351,41352,41353,41354,41355,41342,42308,42309,41356,41357,42299,42300,42301,42302,42303,42304,42305,41358,41359,41360,41361,41362,0)) {}
        FIELD_SET(*this, FIX::LegCashSettlCurrency);
        FIELD_SET(*this, FIX::LegCasSettlValuationFirstBusinessDayOffset);
        FIELD_SET(*this, FIX::LegCashSettlValuationSubsequentBusinessDaysOffset);
        FIELD_SET(*this, FIX::LegCashSettlNumOfValuationDates);
        FIELD_SET(*this, FIX::LegCashSettlValuationTime);
        FIELD_SET(*this, FIX::LegCashSettlBusinessCenter);
        FIELD_SET(*this, FIX::LegCashSettlQuoteMethod);
        FIELD_SET(*this, FIX::LegCashSettlQuoteAmount);
        FIELD_SET(*this, FIX::LegCashSettlQuoteCurrency);
        FIELD_SET(*this, FIX::LegCashSettlMinimumQuoteAmount);
        FIELD_SET(*this, FIX::LegCashSettlMinimumQuoteCurrency);
        FIELD_SET(*this, FIX::NoLegCashSettlDealers);
        class NoLegCashSettlDealers: public FIX::Group
        {
        public:
        NoLegCashSettlDealers() : FIX::Group(41342,41343,FIX::message_order(41343,0)) {}
          FIELD_SET(*this, FIX::LegCashSettlDealer);
        };
        FIELD_SET(*this, FIX::LegCashSettlPriceSource);
        FIELD_SET(*this, FIX::LegCashSettlPriceDefault);
        FIELD_SET(*this, FIX::LegCashSettlBusinessDays);
        FIELD_SET(*this, FIX::LegCashSettlAmount);
        FIELD_SET(*this, FIX::LegCashSettlDateUnadjusted);
        FIELD_SET(*this, FIX::LegCashSettlDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoLegCashSettlDateBusinessCenters);
        class NoLegCashSettlDateBusinessCenters: public FIX::Group
        {
        public:
        NoLegCashSettlDateBusinessCenters() : FIX::Group(42306,42307,FIX::message_order(42307,0)) {}
          FIELD_SET(*this, FIX::LegCashSettlDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::LegCashSettlDateRelativeTo);
        FIELD_SET(*this, FIX::LegCashSettlDateOffsetPeriod);
        FIELD_SET(*this, FIX::LegCashSettlDateOffsetUnit);
        FIELD_SET(*this, FIX::LegCashSettlDateOffsetDayType);
        FIELD_SET(*this, FIX::LegCashSettlDateAdjusted);
        FIELD_SET(*this, FIX::LegCashSettlRecoveryFactor);
        FIELD_SET(*this, FIX::LegCashSettlFixedTermIndicator);
        FIELD_SET(*this, FIX::LegCashSettlAccruedInterestIndicator);
        FIELD_SET(*this, FIX::LegCashSettlValuationMethod);
        FIELD_SET(*this, FIX::LegCashSettlTermXID);
      };
      FIELD_SET(*this, FIX::NoLegPhysicalSettlTerms);
      class NoLegPhysicalSettlTerms: public FIX::Group
      {
      public:
      NoLegPhysicalSettlTerms() : FIX::Group(41599,41604,FIX::message_order(41604,41601,41602,41603,41600,0)) {}
        FIELD_SET(*this, FIX::NoLegPhysicalSettlDeliverableObligations);
        class NoLegPhysicalSettlDeliverableObligations: public FIX::Group
        {
        public:
        NoLegPhysicalSettlDeliverableObligations() : FIX::Group(41604,41605,FIX::message_order(41605,41606,0)) {}
          FIELD_SET(*this, FIX::LegPhysicalSettlDeliverableObligationType);
          FIELD_SET(*this, FIX::LegPhysicalSettlDeliverableObligationValue);
        };
        FIELD_SET(*this, FIX::LegPhysicalSettlCurency);
        FIELD_SET(*this, FIX::LegPhysicalSettlBusinessDays);
        FIELD_SET(*this, FIX::LegPhysicalSettlMaximumBusinessDays);
        FIELD_SET(*this, FIX::LegPhysicalSettlTermXID);
      };
      FIELD_SET(*this, FIX::NoLegExtraordinaryEvents);
      class NoLegExtraordinaryEvents: public FIX::Group
      {
      public:
      NoLegExtraordinaryEvents() : FIX::Group(42388,42389,FIX::message_order(42389,42390,0)) {}
        FIELD_SET(*this, FIX::LegExtraordinaryEventType);
        FIELD_SET(*this, FIX::LegExtraordinaryEventValue);
      };
      FIELD_SET(*this, FIX::LegExtraordinaryEventAdjustmentMethod);
      FIELD_SET(*this, FIX::LegExchangeLookAlike);
      FIELD_SET(*this, FIX::LegAgreementDesc);
      FIELD_SET(*this, FIX::LegAgreementID);
      FIELD_SET(*this, FIX::LegAgreementVersion);
      FIELD_SET(*this, FIX::LegAgreementDate);
      FIELD_SET(*this, FIX::LegAgreementCurrency);
      FIELD_SET(*this, FIX::LegAgreementCurrencyCodeSource);
      FIELD_SET(*this, FIX::LegMasterConfirmationDesc);
      FIELD_SET(*this, FIX::LegMasterConfirmationDate);
      FIELD_SET(*this, FIX::LegMasterConfirmationAnnexDesc);
      FIELD_SET(*this, FIX::LegMasterConfirmationAnnexDate);
      FIELD_SET(*this, FIX::LegBrokerConfirmationDesc);
      FIELD_SET(*this, FIX::NoLegContractualDefinitions);
      class NoLegContractualDefinitions: public FIX::Group
      {
      public:
      NoLegContractualDefinitions() : FIX::Group(42198,42199,FIX::message_order(42199,0)) {}
        FIELD_SET(*this, FIX::LegContractualDefinition);
      };
      FIELD_SET(*this, FIX::NoLegFinancingTermSupplements);
      class NoLegFinancingTermSupplements: public FIX::Group
      {
      public:
      NoLegFinancingTermSupplements() : FIX::Group(42200,42201,FIX::message_order(42201,42202,0)) {}
        FIELD_SET(*this, FIX::LegFinancingTermSupplementDesc);
        FIELD_SET(*this, FIX::LegFinancingTermSupplementDate);
      };
      FIELD_SET(*this, FIX::NoLegContractualMatrices);
      class NoLegContractualMatrices: public FIX::Group
      {
      public:
      NoLegContractualMatrices() : FIX::Group(42203,42204,FIX::message_order(42204,42205,42206,0)) {}
        FIELD_SET(*this, FIX::LegContractualMatrixSource);
        FIELD_SET(*this, FIX::LegContractualMatrixDate);
        FIELD_SET(*this, FIX::LegContractualMatrixTerm);
      };
      FIELD_SET(*this, FIX::LegCreditSupportAgreementDesc);
      FIELD_SET(*this, FIX::LegCreditSupportAgreementDate);
      FIELD_SET(*this, FIX::LegCreditSupportAgreementID);
      FIELD_SET(*this, FIX::LegGoverningLaw);
      FIELD_SET(*this, FIX::LegDocumentationText);
      FIELD_SET(*this, FIX::EncodedLegDocumentationTextLen);
      FIELD_SET(*this, FIX::EncodedLegDocumentationText);
      FIELD_SET(*this, FIX::LegTerminationType);
      FIELD_SET(*this, FIX::LegStartDate);
      FIELD_SET(*this, FIX::LegEndDate);
      FIELD_SET(*this, FIX::LegDeliveryType);
      FIELD_SET(*this, FIX::LegMarginRatio);
    };
    FIELD_SET(*this, FIX::NoUnderlyings);
    class NoUnderlyings: public FIX::Group
    {
    public:
    NoUnderlyings() : FIX::Group(711,311,FIX::message_order(311,312,309,305,2874,462,463,2894,310,763,313,542,1213,1837,241,1453,1454,2614,2615,2921,2616,2617,2619,1455,1456,1459,1460,242,243,244,245,246,256,595,592,593,594,247,316,941,2917,317,436,1437,2363,1441,998,1423,1718,2918,1424,1425,1719,2919,1000,1419,1526,2920,435,308,306,362,363,2742,2720,2721,2722,2723,2724,307,364,365,877,878,972,318,2916,879,975,973,974,810,882,883,884,885,886,2885,2886,1044,1045,1046,1038,1039,315,2683,2687,1988,1989,1990,1991,1992,1993,2881,1994,1995,1996,1997,2620,2621,1998,1999,2000,2003,2004,2005,2006,2284,2285,2286,2287,2288,2007,2008,2009,2010,2011,2012,2491,2013,2014,2015,2744,2016,2289,2017,2018,2019,2020,2021,2022,2290,2622,2291,2623,2292,2023,2024,2025,2026,2027,2028,2029,2757,2030,2031,2293,2294,2032,2033,2034,2035,2036,2037,2038,2039,2040,2041,2042,2043,2044,41314,41315,2295,2296,2297,2756,2298,2299,2624,2625,2626,2627,2628,2629,2630,2631,0)) {}
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
      FIELD_SET(*this, FIX::NoUnderlyingSecurityAltID);
      class NoUnderlyingSecurityAltID: public FIX::Group
      {
      public:
      NoUnderlyingSecurityAltID() : FIX::Group(457,458,FIX::message_order(458,459,2959,0)) {}
        FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
        FIELD_SET(*this, FIX::UnderlyingSecurityAltIDSource);
        FIELD_SET(*this, FIX::UnderlyingSymbolPositionNumber);
      };
      FIELD_SET(*this, FIX::UnderlyingID);
      FIELD_SET(*this, FIX::UnderlyingProduct);
      FIELD_SET(*this, FIX::UnderlyingSecurityXMLLen);
      FIELD_SET(*this, FIX::UnderlyingSecurityXML);
      FIELD_SET(*this, FIX::UnderlyingSecurityXMLSchema);
      FIELD_SET(*this, FIX::UnderlyingCFICode);
      FIELD_SET(*this, FIX::UnderlyingUPICode);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingSecuritySubType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingMaturityDate);
      FIELD_SET(*this, FIX::UnderlyingMaturityTime);
      FIELD_SET(*this, FIX::UnderlyingContractPriceRefMonth);
      FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
      FIELD_SET(*this, FIX::UnderlyingRestructuringType);
      FIELD_SET(*this, FIX::UnderlyingSeniority);
      FIELD_SET(*this, FIX::UnderlyingNotional);
      FIELD_SET(*this, FIX::UnderlyingNotionalCurrency);
      FIELD_SET(*this, FIX::UnderlyingNotionalCurrencyCodeSource);
      FIELD_SET(*this, FIX::UnderlyingNotionalDeterminationMethod);
      FIELD_SET(*this, FIX::UnderlyingNotionalAdjustments);
      FIELD_SET(*this, FIX::UnderlyingNotionalXIDRef);
      FIELD_SET(*this, FIX::UnderlyingNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::UnderlyingOriginalNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::UnderlyingAttachmentPoint);
      FIELD_SET(*this, FIX::UnderlyingDetachmentPoint);
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
      FIELD_SET(*this, FIX::UnderlyingStrikeCurrencyCodeSource);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
      FIELD_SET(*this, FIX::UnderlyingContractMultiplierUnit);
      FIELD_SET(*this, FIX::UnderlyingTradingUnitPeriodMultiplier);
      FIELD_SET(*this, FIX::UnderlyingFlowScheduleType);
      FIELD_SET(*this, FIX::UnderlyingUnitOfMeasure);
      FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureQty);
      FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureCurrency);
      FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureCurrencyCodeSource);
      FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasure);
      FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureQty);
      FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureCurrency);
      FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureCurrencyCodeSource);
      FIELD_SET(*this, FIX::UnderlyingTimeUnit);
      FIELD_SET(*this, FIX::UnderlyingExerciseStyle);
      FIELD_SET(*this, FIX::UnderlyingPriceQuoteCurrency);
      FIELD_SET(*this, FIX::UnderlyingPriceQuoteCurrencyCodeSource);
      FIELD_SET(*this, FIX::UnderlyingCouponRate);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingIssuer);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
      FIELD_SET(*this, FIX::UnderlyingFinancialInstrumentShortName);
      FIELD_SET(*this, FIX::UnderlyingFinancialInstrumentFullName);
      FIELD_SET(*this, FIX::EncodedUnderlyingFinancialInstrumentFullNameLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingFinancialInstrumentFullName);
      FIELD_SET(*this, FIX::UnderlyingIndexCurveUnit);
      FIELD_SET(*this, FIX::UnderlyingIndexCurvePeriod);
      FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
      FIELD_SET(*this, FIX::UnderlyingCPProgram);
      FIELD_SET(*this, FIX::UnderlyingCPRegType);
      FIELD_SET(*this, FIX::UnderlyingAllocationPercent);
      FIELD_SET(*this, FIX::UnderlyingCurrency);
      FIELD_SET(*this, FIX::UnderlyingCurrencyCodeSource);
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
      FIELD_SET(*this, FIX::UnderlyingAccruedInterestAmt);
      FIELD_SET(*this, FIX::UnderlyingNumDaysInterest);
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
      NoUndlyInstrumentParties() : FIX::Group(1058,1059,FIX::message_order(1059,1060,1061,2391,1062,0)) {}
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyID);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyIDSource);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyRole);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartyRoleQualifier);
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
      FIELD_SET(*this, FIX::UnderlyingInTheMoneyCondition);
      FIELD_SET(*this, FIX::UnderlyingContraryInstructionEligibilityIndicator);
      FIELD_SET(*this, FIX::UnderlyingConstituentWeight);
      FIELD_SET(*this, FIX::UnderlyingCouponType);
      FIELD_SET(*this, FIX::UnderlyingTotalIssuedAmount);
      FIELD_SET(*this, FIX::UnderlyingCouponFrequencyPeriod);
      FIELD_SET(*this, FIX::UnderlyingCouponFrequencyUnit);
      FIELD_SET(*this, FIX::UnderlyingCouponDayCount);
      FIELD_SET(*this, FIX::UnderlyingCouponOtherDayCount);
      FIELD_SET(*this, FIX::UnderlyingObligationID);
      FIELD_SET(*this, FIX::UnderlyingObligationIDSource);
      FIELD_SET(*this, FIX::UnderlyingEquityID);
      FIELD_SET(*this, FIX::UnderlyingEquityIDSource);
      FIELD_SET(*this, FIX::UnderlyingFutureID);
      FIELD_SET(*this, FIX::UnderlyingFutureIDSource);
      FIELD_SET(*this, FIX::NoUnderlyingEvents);
      class NoUnderlyingEvents: public FIX::Group
      {
      public:
      NoUnderlyingEvents() : FIX::Group(1981,1982,FIX::message_order(1982,1983,1984,1985,1986,2342,1987,2071,2072,2073,0)) {}
        FIELD_SET(*this, FIX::UnderlyingEventType);
        FIELD_SET(*this, FIX::UnderlyingEventDate);
        FIELD_SET(*this, FIX::UnderlyingEventTime);
        FIELD_SET(*this, FIX::UnderlyingEventTimeUnit);
        FIELD_SET(*this, FIX::UnderlyingEventTimePeriod);
        FIELD_SET(*this, FIX::UnderlyingEventMonthYear);
        FIELD_SET(*this, FIX::UnderlyingEventPx);
        FIELD_SET(*this, FIX::UnderlyingEventText);
        FIELD_SET(*this, FIX::EncodedUnderlyingEventTextLen);
        FIELD_SET(*this, FIX::EncodedUnderlyingEventText);
      };
      FIELD_SET(*this, FIX::UnderlyingLienSeniority);
      FIELD_SET(*this, FIX::UnderlyingLoanFacility);
      FIELD_SET(*this, FIX::UnderlyingReferenceEntityType);
      FIELD_SET(*this, FIX::UnderlyingIndexSeries);
      FIELD_SET(*this, FIX::UnderlyingIndexAnnexVersion);
      FIELD_SET(*this, FIX::UnderlyingIndexAnnexDate);
      FIELD_SET(*this, FIX::UnderlyingIndexAnnexSource);
      FIELD_SET(*this, FIX::UnderlyingSettlRateIndex);
      FIELD_SET(*this, FIX::UnderlyingSettlRateIndexLocation);
      FIELD_SET(*this, FIX::UnderlyingOptionExpirationDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingOptionExpirationDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingOptionExpirationDesc);
      FIELD_SET(*this, FIX::UnderlyingProductComplex);
      FIELD_SET(*this, FIX::UnderlyingSecurityGroup);
      FIELD_SET(*this, FIX::UnderlyingSettleOnOpenFlag);
      FIELD_SET(*this, FIX::UnderlyingAssignmentMethod);
      FIELD_SET(*this, FIX::UnderlyingSecurityStatus);
      FIELD_SET(*this, FIX::UnderlyingObligationType);
      FIELD_SET(*this, FIX::UnderlyingAssetGroup);
      FIELD_SET(*this, FIX::UnderlyingAssetClass);
      FIELD_SET(*this, FIX::UnderlyingAssetSubClass);
      FIELD_SET(*this, FIX::UnderlyingAssetType);
      FIELD_SET(*this, FIX::UnderlyingAssetSubType);
      FIELD_SET(*this, FIX::NoUnderlyingSecondaryAssetClasses);
      class NoUnderlyingSecondaryAssetClasses: public FIX::Group
      {
      public:
      NoUnderlyingSecondaryAssetClasses() : FIX::Group(2080,2081,FIX::message_order(2081,2082,2083,2745,0)) {}
        FIELD_SET(*this, FIX::UnderlyingSecondaryAssetClass);
        FIELD_SET(*this, FIX::UnderlyingSecondaryAssetSubClass);
        FIELD_SET(*this, FIX::UnderlyingSecondaryAssetType);
        FIELD_SET(*this, FIX::UnderlyingSecondaryAssetSubType);
      };
      FIELD_SET(*this, FIX::NoUnderlyingAssetAttributes);
      class NoUnderlyingAssetAttributes: public FIX::Group
      {
      public:
      NoUnderlyingAssetAttributes() : FIX::Group(2312,2313,FIX::message_order(2313,2314,2315,0)) {}
        FIELD_SET(*this, FIX::UnderlyingAssetAttributeType);
        FIELD_SET(*this, FIX::UnderlyingAssetAttributeValue);
        FIELD_SET(*this, FIX::UnderlyingAssetAttributeLimit);
      };
      FIELD_SET(*this, FIX::UnderlyingSwapClass);
      FIELD_SET(*this, FIX::UnderlyingSwapSubClass);
      FIELD_SET(*this, FIX::UnderlyingNthToDefault);
      FIELD_SET(*this, FIX::UnderlyingMthToDefault);
      FIELD_SET(*this, FIX::UnderlyingSettledEntityMatrixSource);
      FIELD_SET(*this, FIX::UnderlyingSettledEntityMatrixPublicationDate);
      FIELD_SET(*this, FIX::UnderlyingStrikeMultiplier);
      FIELD_SET(*this, FIX::UnderlyingStrikeValue);
      FIELD_SET(*this, FIX::UnderlyingStrikeUnitOfMeasure);
      FIELD_SET(*this, FIX::UnderlyingStrikeIndexCurvePoint);
      FIELD_SET(*this, FIX::UnderlyingStrikeIndex);
      FIELD_SET(*this, FIX::UnderlyingStrikeIndexQuote);
      FIELD_SET(*this, FIX::UnderlyingStrikeIndexSpread);
      FIELD_SET(*this, FIX::UnderlyingStrikePriceDeterminationMethod);
      FIELD_SET(*this, FIX::UnderlyingStrikePriceBoundaryMethod);
      FIELD_SET(*this, FIX::UnderlyingStrikePriceBoundaryPrecision);
      FIELD_SET(*this, FIX::UnderlyingMinPriceIncrement);
      FIELD_SET(*this, FIX::UnderlyingMinPriceIncrementAmount);
      FIELD_SET(*this, FIX::UnderlyingOptPayoutType);
      FIELD_SET(*this, FIX::UnderlyingOptPayoutAmount);
      FIELD_SET(*this, FIX::UnderlyingReturnTrigger);
      FIELD_SET(*this, FIX::UnderlyingPriceQuoteMethod);
      FIELD_SET(*this, FIX::UnderlyingValuationMethod);
      FIELD_SET(*this, FIX::UnderlyingValuationSource);
      FIELD_SET(*this, FIX::UnderlyingValuationReferenceModel);
      FIELD_SET(*this, FIX::UnderlyingListMethod);
      FIELD_SET(*this, FIX::UnderlyingCapPrice);
      FIELD_SET(*this, FIX::UnderlyingFloorPrice);
      FIELD_SET(*this, FIX::UnderlyingFlexibleIndicator);
      FIELD_SET(*this, FIX::UnderlyingFlexProductEligibilityIndicator);
      FIELD_SET(*this, FIX::UnderlyingPositionLimit);
      FIELD_SET(*this, FIX::UnderlyingNTPositionLimit);
      FIELD_SET(*this, FIX::UnderlyingPool);
      FIELD_SET(*this, FIX::UnderlyingContractSettlMonth);
      FIELD_SET(*this, FIX::UnderlyingDatedDate);
      FIELD_SET(*this, FIX::UnderlyingInterestAccrualDate);
      FIELD_SET(*this, FIX::UnderlyingShortSaleRestriction);
      FIELD_SET(*this, FIX::UnderlyingRefTickTableID);
      FIELD_SET(*this, FIX::UnderlyingProtectionTermXIDRef);
      FIELD_SET(*this, FIX::UnderlyingSettlTermXIDRef);
      FIELD_SET(*this, FIX::NoUnderlyingComplexEvents);
      class NoUnderlyingComplexEvents: public FIX::Group
      {
      public:
      NoUnderlyingComplexEvents() : FIX::Group(2045,2046,FIX::message_order(2046,2261,2262,2263,2047,2264,2265,2266,2947,2048,2267,2049,2050,2051,2052,2053,2268,2948,2269,2949,2270,2271,2419,2420,2272,2273,2274,2275,2276,41732,41739,41740,41741,41742,41743,41744,41745,41746,41747,41729,2277,2278,2279,2280,2281,41748,41716,2611,2612,2613,2282,2283,0)) {}
        FIELD_SET(*this, FIX::UnderlyingComplexEventType);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutPaySide);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutReceiveSide);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutUnderlier);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutAmount);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutPercentage);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutTime);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutCurrency);
        FIELD_SET(*this, FIX::UnderlyingComplexOptPayoutCurrencyCodeSource);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPrice);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPricePercentage);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPriceBoundaryMethod);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPriceBoundaryPrecision);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPriceTimeType);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCondition);
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventDates);
        class NoUnderlyingComplexEventDates: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventDates() : FIX::Group(2053,2054,FIX::message_order(2054,2055,2056,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventStartDate);
          FIELD_SET(*this, FIX::UnderlyingComplexEventEndDate);
          FIELD_SET(*this, FIX::NoUnderlyingComplexEventTimes);
          class NoUnderlyingComplexEventTimes: public FIX::Group
          {
          public:
          NoUnderlyingComplexEventTimes() : FIX::Group(2056,2057,FIX::message_order(2057,2058,0)) {}
            FIELD_SET(*this, FIX::UnderlyingComplexEventStartTime);
            FIELD_SET(*this, FIX::UnderlyingComplexEventEndTime);
          };
        };
        FIELD_SET(*this, FIX::UnderlyingComplexEventCurrencyOne);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCurrencyOneCodeSource);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCurrencyTwo);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCurrencyTwoCodeSource);
        FIELD_SET(*this, FIX::UnderlyingComplexEventQuoteBasis);
        FIELD_SET(*this, FIX::UnderlyingComplexEventFixedFXRate);
        FIELD_SET(*this, FIX::UnderlyingComplexEventSpotRate);
        FIELD_SET(*this, FIX::UnderlyingComplexEventForwardPoints);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDeterminationMethod);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCalculationAgent);
        FIELD_SET(*this, FIX::UnderlyingComplexEventStrikePrice);
        FIELD_SET(*this, FIX::UnderlyingComplexEventStrikeFactor);
        FIELD_SET(*this, FIX::UnderlyingComplexEventStrikeNumberOfOptions);
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventRateSources);
        class NoUnderlyingComplexEventRateSources: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventRateSources() : FIX::Group(41732,41733,FIX::message_order(41733,41734,41735,41736,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventRateSource);
          FIELD_SET(*this, FIX::UnderlyingComplexEventRateSourceType);
          FIELD_SET(*this, FIX::UnderlyingComplexEventReferencePage);
          FIELD_SET(*this, FIX::UnderlyingComplexEventReferencePageHeading);
        };
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventDateBusinessCenters);
        class NoUnderlyingComplexEventDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventDateBusinessCenters() : FIX::Group(41737,41738,FIX::message_order(41738,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingComplexEventDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingComplexEventFixingTime);
        FIELD_SET(*this, FIX::UnderlyingComplexEventFixingTimeBusinessCenter);
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventPeriods);
        class NoUnderlyingComplexEventPeriods: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventPeriods() : FIX::Group(41729,41730,FIX::message_order(41730,41731,41750,41726,41713,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventPeriodType);
          FIELD_SET(*this, FIX::UnderlyingComplexEventBusinessCenter);
          FIELD_SET(*this, FIX::NoUnderlyingComplexEventSchedules);
          class NoUnderlyingComplexEventSchedules: public FIX::Group
          {
          public:
          NoUnderlyingComplexEventSchedules() : FIX::Group(41750,41751,FIX::message_order(41751,41752,41753,41754,41755,0)) {}
            FIELD_SET(*this, FIX::UnderlyingComplexEventScheduleStartDate);
            FIELD_SET(*this, FIX::UnderlyingComplexEventScheduleEndDate);
            FIELD_SET(*this, FIX::UnderlyingComplexEventScheduleFrequencyPeriod);
            FIELD_SET(*this, FIX::UnderlyingComplexEventScheduleFrequencyUnit);
            FIELD_SET(*this, FIX::UnderlyingComplexEventScheduleRollConvention);
          };
          FIELD_SET(*this, FIX::NoUnderlyingComplexEventPeriodDateTimes);
          class NoUnderlyingComplexEventPeriodDateTimes: public FIX::Group
          {
          public:
          NoUnderlyingComplexEventPeriodDateTimes() : FIX::Group(41726,41727,FIX::message_order(41727,41728,0)) {}
            FIELD_SET(*this, FIX::UnderlyingComplexEventPeriodDate);
            FIELD_SET(*this, FIX::UnderlyingComplexEventPeriodTime);
          };
          FIELD_SET(*this, FIX::NoUnderlyingComplexEventAveragingObservations);
          class NoUnderlyingComplexEventAveragingObservations: public FIX::Group
          {
          public:
          NoUnderlyingComplexEventAveragingObservations() : FIX::Group(41713,41714,FIX::message_order(41714,41715,0)) {}
            FIELD_SET(*this, FIX::UnderlyingComplexEventAveragingObservationNumber);
            FIELD_SET(*this, FIX::UnderlyingComplexEventAveragingWeight);
          };
        };
        FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventsXIDRef);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventNotifyingParty);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventStandardSources);
        FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventMinimumSources);
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventCreditEventSources);
        class NoUnderlyingComplexEventCreditEventSources: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventCreditEventSources() : FIX::Group(41748,41749,FIX::message_order(41749,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventSource);
        };
        FIELD_SET(*this, FIX::NoUnderlyingComplexEventCreditEvents);
        class NoUnderlyingComplexEventCreditEvents: public FIX::Group
        {
        public:
        NoUnderlyingComplexEventCreditEvents() : FIX::Group(41716,41717,FIX::message_order(41717,41718,41719,41720,41721,41722,41723,41724,0)) {}
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventType);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventValue);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventCurrency);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventPeriod);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventUnit);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventDayType);
          FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventRateSource);
          FIELD_SET(*this, FIX::NoUnderlyingComplexEventCreditEventQualifiers);
          class NoUnderlyingComplexEventCreditEventQualifiers: public FIX::Group
          {
          public:
          NoUnderlyingComplexEventCreditEventQualifiers() : FIX::Group(41724,41725,FIX::message_order(41725,0)) {}
            FIELD_SET(*this, FIX::UnderlyingComplexEventCreditEventQualifier);
          };
        };
        FIELD_SET(*this, FIX::UnderlyingComplexEventFuturesPriceValuation);
        FIELD_SET(*this, FIX::UnderlyingComplexEventOptionsPriceValuation);
        FIELD_SET(*this, FIX::UnderlyingComplexEventPVFinalPriceElectionFallback);
        FIELD_SET(*this, FIX::UnderlyingComplexEventXID);
        FIELD_SET(*this, FIX::UnderlyingComplexEventXIDRef);
      };
      FIELD_SET(*this, FIX::UnderlyingStrategyType);
      FIELD_SET(*this, FIX::UnderlyingCommonPricingIndicator);
      FIELD_SET(*this, FIX::UnderlyingSettlDisruptionProvision);
      FIELD_SET(*this, FIX::UnderlyingDeliveryRouteOrCharter);
      FIELD_SET(*this, FIX::UnderlyingInstrumentRoundingDirection);
      FIELD_SET(*this, FIX::UnderlyingInstrumentRoundingPrecision);
      FIELD_SET(*this, FIX::UnderlyingBusinessDayConvention);
      FIELD_SET(*this, FIX::NoUnderlyingBusinessCenters);
      class NoUnderlyingBusinessCenters: public FIX::Group
      {
      public:
      NoUnderlyingBusinessCenters() : FIX::Group(40962,40963,FIX::message_order(40963,0)) {}
        FIELD_SET(*this, FIX::UnderlyingBusinessCenter);
      };
      FIELD_SET(*this, FIX::UnderlyingDateRollConvention);
      FIELD_SET(*this, FIX::UnderlyingPricingDateUnadjusted);
      FIELD_SET(*this, FIX::UnderlyingPricingDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoUnderlyingPricingDateBusinessCenters);
      class NoUnderlyingPricingDateBusinessCenters: public FIX::Group
      {
      public:
      NoUnderlyingPricingDateBusinessCenters() : FIX::Group(41947,41948,FIX::message_order(41948,0)) {}
        FIELD_SET(*this, FIX::UnderlyingPricingDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::UnderlyingPricingDateAdjusted);
      FIELD_SET(*this, FIX::UnderlyingPricingTime);
      FIELD_SET(*this, FIX::UnderlyingPricingTimeBusinessCenter);
      FIELD_SET(*this, FIX::UnderlyingMarketDisruptionProvision);
      FIELD_SET(*this, FIX::NoUnderlyingMarketDisruptionEvents);
      class NoUnderlyingMarketDisruptionEvents: public FIX::Group
      {
      public:
      NoUnderlyingMarketDisruptionEvents() : FIX::Group(41864,41865,FIX::message_order(41865,41338,0)) {}
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionEvent);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionValue);
      };
      FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackProvision);
      FIELD_SET(*this, FIX::NoUnderlyingMarketDisruptionFallbacks);
      class NoUnderlyingMarketDisruptionFallbacks: public FIX::Group
      {
      public:
      NoUnderlyingMarketDisruptionFallbacks() : FIX::Group(41866,41867,FIX::message_order(41867,41339,0)) {}
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackType);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackValue);
      };
      FIELD_SET(*this, FIX::NoUnderlyingMarketDisruptionFallbackReferencePrices);
      class NoUnderlyingMarketDisruptionFallbackReferencePrices: public FIX::Group
      {
      public:
      NoUnderlyingMarketDisruptionFallbackReferencePrices() : FIX::Group(41868,41869,FIX::message_order(41869,41870,41871,41872,41873,41874,41875,41876,41877,0)) {}
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackUnderlierType);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackUnderlierSecurityID);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackUnderlierSecurityIDSource);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackUnderlierSecurityDesc);
        FIELD_SET(*this, FIX::EncodedUnderlyingMarketDisruptionFallbackUnderlierSecDescLen);
        FIELD_SET(*this, FIX::EncodedUnderlyingMarketDisruptionFallbackUnderlierSecurityDesc);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackOpenUnits);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackBasketCurrency);
        FIELD_SET(*this, FIX::UnderlyingMarketDisruptionFallbackBasketDivisor);
      };
      FIELD_SET(*this, FIX::UnderlyingMarketDisruptionMaximumDays);
      FIELD_SET(*this, FIX::UnderlyingMarketDisruptionMaterialityPercentage);
      FIELD_SET(*this, FIX::UnderlyingMarketDisruptionMinimumFuturesContracts);
      FIELD_SET(*this, FIX::UnderlyingExerciseDesc);
      FIELD_SET(*this, FIX::EncodedUnderlyingExerciseDescLen);
      FIELD_SET(*this, FIX::EncodedUnderlyingExerciseDesc);
      FIELD_SET(*this, FIX::UnderlyingAutomaticExerciseIndicator);
      FIELD_SET(*this, FIX::UnderlyingAutomaticExerciseThresholdRate);
      FIELD_SET(*this, FIX::UnderlyingExerciseConfirmationMethod);
      FIELD_SET(*this, FIX::UnderlyingManualNoticeBusinessCenter);
      FIELD_SET(*this, FIX::UnderlyingFallbackExerciseIndicator);
      FIELD_SET(*this, FIX::UnderlyingLimitedRightToConfirmIndicator);
      FIELD_SET(*this, FIX::UnderlyingExerciseSplitTicketIndicator);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectingPartySide);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateUnadjusted);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoUnderlyingSettlMethodElectionDateBusinessCenters);
      class NoUnderlyingSettlMethodElectionDateBusinessCenters: public FIX::Group
      {
      public:
      NoUnderlyingSettlMethodElectionDateBusinessCenters() : FIX::Group(43074,43075,FIX::message_order(43075,0)) {}
        FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateRelativeTo);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateOffsetPeriod);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateOffsetUnit);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateOffsetDayType);
      FIELD_SET(*this, FIX::UnderlyingSettlMethodElectionDateAdjusted);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseBusinessDayConvention);
      FIELD_SET(*this, FIX::NoUnderlyingOptionExerciseBusinessCenters);
      class NoUnderlyingOptionExerciseBusinessCenters: public FIX::Group
      {
      public:
      NoUnderlyingOptionExerciseBusinessCenters() : FIX::Group(41820,41821,FIX::message_order(41821,0)) {}
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoUnderlyingOptionExerciseDates);
      class NoUnderlyingOptionExerciseDates: public FIX::Group
      {
      public:
      NoUnderlyingOptionExerciseDates() : FIX::Group(41841,41842,FIX::message_order(41842,41843,0)) {}
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseDate);
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseDateType);
      };
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseEarliestDateOffsetDayType);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseEarliestDateOffsetPeriod);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseEarliestDateOffsetUnit);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseFrequencyPeriod);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseFrequencyUnit);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateUnadjusted);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateRelativeTo);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateOffsetPeriod);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateOffsetUnit);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateOffsetDayType);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseStartDateAdjusted);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseSkip);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseNominationDeadline);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseFirstDateUnadjusted);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseLastDateUnadjusted);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseEarliestTime);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseLatestTime);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseTimeBusinessCenter);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateBusinessDayConvention);
      FIELD_SET(*this, FIX::NoUnderlyingOptionExerciseExpirationDateBusinessCenters);
      class NoUnderlyingOptionExerciseExpirationDateBusinessCenters: public FIX::Group
      {
      public:
      NoUnderlyingOptionExerciseExpirationDateBusinessCenters() : FIX::Group(41844,41845,FIX::message_order(41845,0)) {}
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateBusinessCenter);
      };
      FIELD_SET(*this, FIX::NoUnderlyingOptionExerciseExpirationDates);
      class NoUnderlyingOptionExerciseExpirationDates: public FIX::Group
      {
      public:
      NoUnderlyingOptionExerciseExpirationDates() : FIX::Group(41856,41857,FIX::message_order(41857,41858,0)) {}
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDate);
        FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateType);
      };
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateRelativeTo);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateOffsetPeriod);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateOffsetUnit);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationFrequencyPeriod);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationFrequencyUnit);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationRollConvention);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationDateOffsetDayType);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationTime);
      FIELD_SET(*this, FIX::UnderlyingOptionExerciseExpirationTimeBusinessCenter);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeDate);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeAmount);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeBenchmarkCurveName);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeBenchmarkCurvePoint);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeRecallSpread);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeBenchmarkQuote);
      FIELD_SET(*this, FIX::UnderlyingMakeWholeInterpolationMethod);
      FIELD_SET(*this, FIX::NoUnderlyingStreams);
      class NoUnderlyingStreams: public FIX::Group
      {
      public:
      NoUnderlyingStreams() : FIX::Group(40540,40541,FIX::message_order(40541,42016,40542,43083,43084,40543,40544,42018,40545,40546,43085,43086,42019,42020,42021,42022,42023,42024,41964,41965,41966,41967,41968,41969,41970,42589,41971,41972,41973,41974,41975,41976,41977,41978,41979,41980,41981,41982,41983,41984,41985,41986,41987,41988,41989,40057,40058,40060,40061,40062,40063,40064,40548,40549,40551,40552,40553,40554,40555,41957,41958,40556,40558,40559,40561,40562,40563,40564,40565,40566,40567,41959,41960,41961,40568,40569,40570,42895,40571,40572,43107,40573,40574,40575,40576,40577,42896,42897,42898,42899,40578,40579,40580,41897,41898,41899,41900,41901,41902,41903,42900,40664,40708,41777,41778,41779,41780,41781,42196,42197,41782,41783,41784,41785,41786,41587,41787,41788,41789,41790,41791,41792,41793,41794,41795,41796,41797,41798,41799,43096,41756,40547,40988,40989,0)) {}
        FIELD_SET(*this, FIX::UnderlyingStreamType);
        FIELD_SET(*this, FIX::UnderlyingStreamXID);
        FIELD_SET(*this, FIX::UnderlyingStreamDesc);
        FIELD_SET(*this, FIX::UnderlyingStreamVersion);
        FIELD_SET(*this, FIX::UnderlyingStreamVersionEffectiveDate);
        FIELD_SET(*this, FIX::UnderlyingStreamPaySide);
        FIELD_SET(*this, FIX::UnderlyingStreamReceiveSide);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalXIDRef);
        FIELD_SET(*this, FIX::UnderlyingStreamNotional);
        FIELD_SET(*this, FIX::UnderlyingStreamCurrency);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalDeterminationMethod);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalAdjustments);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalCommodityFrequency);
        FIELD_SET(*this, FIX::UnderlyingStreamNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingStreamTotalNotional);
        FIELD_SET(*this, FIX::UnderlyingStreamTotalNotionalUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityBase);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityType);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySecurityID);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySecurityIDSource);
        FIELD_SET(*this, FIX::NoUnderlyingStreamCommodityAltIDs);
        class NoUnderlyingStreamCommodityAltIDs: public FIX::Group
        {
        public:
        NoUnderlyingStreamCommodityAltIDs() : FIX::Group(41990,41991,FIX::message_order(41991,41992,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCommodityAltID);
          FIELD_SET(*this, FIX::UnderlyingStreamCommodityAltIDSource);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityDesc);
        FIELD_SET(*this, FIX::EncodedUnderlyingStreamCommodityDescLen);
        FIELD_SET(*this, FIX::EncodedUnderlyingStreamCommodityDesc);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityDeliveryPricingRegion);
        FIELD_SET(*this, FIX::NoUnderlyingStreamAssetAttributes);
        class NoUnderlyingStreamAssetAttributes: public FIX::Group
        {
        public:
        NoUnderlyingStreamAssetAttributes() : FIX::Group(41800,41801,FIX::message_order(41801,41802,41803,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamAssetAttributeType);
          FIELD_SET(*this, FIX::UnderlyingStreamAssetAttributeValue);
          FIELD_SET(*this, FIX::UnderlyingStreamAssetAttributeLimit);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityCurrency);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityExchange);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityRateSource);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityRateReferencePage);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityRateReferencePageHeading);
        FIELD_SET(*this, FIX::UnderlyingStreamDataProvider);
        FIELD_SET(*this, FIX::NoUnderlyingStreamCommodityDataSources);
        class NoUnderlyingStreamCommodityDataSources: public FIX::Group
        {
        public:
        NoUnderlyingStreamCommodityDataSources() : FIX::Group(41993,41994,FIX::message_order(41994,41995,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCommodityDataSourceID);
          FIELD_SET(*this, FIX::UnderlyingStreamCommodityDataSourceIDType);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityPricingType);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityNearbySettlDayPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityNearbySettlDayUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingStreamCommoditySettlBusinessCenters);
        class NoUnderlyingStreamCommoditySettlBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingStreamCommoditySettlBusinessCenters() : FIX::Group(41962,41963,FIX::message_order(41963,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlMonth);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDateRollPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDateRollUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDayType);
        FIELD_SET(*this, FIX::NoUnderlyingStreamCommoditySettlPeriods);
        class NoUnderlyingStreamCommoditySettlPeriods: public FIX::Group
        {
        public:
        NoUnderlyingStreamCommoditySettlPeriods() : FIX::Group(42002,42003,FIX::message_order(42003,42004,42005,42006,42007,42008,42009,42010,42011,42012,42013,41996,42014,42015,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlCountry);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlTimeZone);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlFlowType);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodNotional);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodNotionalUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodFrequencyPeriod);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodFrequencyUnit);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodPrice);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodPriceUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodPriceCurrency);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlHolidaysProcessingInstruction);
          FIELD_SET(*this, FIX::NoUnderlyingStreamCommoditySettlDays);
          class NoUnderlyingStreamCommoditySettlDays: public FIX::Group
          {
          public:
          NoUnderlyingStreamCommoditySettlDays() : FIX::Group(41996,41997,FIX::message_order(41997,41998,41999,0)) {}
            FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlDay);
            FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlTotalHours);
            FIELD_SET(*this, FIX::NoUnderlyingStreamCommoditySettlTimes);
            class NoUnderlyingStreamCommoditySettlTimes: public FIX::Group
            {
            public:
            NoUnderlyingStreamCommoditySettlTimes() : FIX::Group(41999,42000,FIX::message_order(42000,42001,41936,0)) {}
              FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlStart);
              FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlEnd);
              FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlTimeType);
            };
          };
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodXID);
          FIELD_SET(*this, FIX::UnderlyingStreamCommoditySettlPeriodXIDRef);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityXID);
        FIELD_SET(*this, FIX::UnderlyingStreamCommodityXIDRef);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingStreamEffectiveDateBusinessCenters);
        class NoUnderlyingStreamEffectiveDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingStreamEffectiveDateBusinessCenters() : FIX::Group(40975,40059,FIX::message_order(40059,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingStreamEffectiveDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingStreamTerminationDateBusinessCenters);
        class NoUnderlyingStreamTerminationDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingStreamTerminationDateBusinessCenters() : FIX::Group(40976,40550,FIX::message_order(40550,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingStreamTerminationDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodDatesXID);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodDatesXIDRef);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingStreamCalculationPeriodBusinessCenters);
        class NoUnderlyingStreamCalculationPeriodBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingStreamCalculationPeriodBusinessCenters() : FIX::Group(40973,40557,FIX::message_order(40557,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoUnderlyingStreamCalculationPeriodDates);
        class NoUnderlyingStreamCalculationPeriodDates: public FIX::Group
        {
        public:
        NoUnderlyingStreamCalculationPeriodDates() : FIX::Group(41954,41955,FIX::message_order(41955,41956,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodDate);
          FIELD_SET(*this, FIX::UnderlyingStreamCalculationPeriodDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamFirstPeriodStartDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamFirstPeriodStartDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingStreamFirstPeriodStartDateBusinessCenters);
        class NoUnderlyingStreamFirstPeriodStartDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingStreamFirstPeriodStartDateBusinessCenters() : FIX::Group(40974,40560,FIX::message_order(40560,0)) {}
          FIELD_SET(*this, FIX::UnderlyingStreamFirstPeriodStartDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingStreamFirstPeriodStartDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamFirstRegularPeriodStartDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamFirstCompoundingPeriodEndDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamLastRegularPeriodEndDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationRollConvention);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationBalanceOfFirstPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationCorrectionPeriod);
        FIELD_SET(*this, FIX::UnderlyingStreamCalculationCorrectionUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMarketRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDelayIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCashSettlIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamSettlCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDayCount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamOtherDayCount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamAccrualDays);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDiscountType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDiscountRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDiscountRateDayCount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingXIDRef);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingSpread);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInterpolationMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInterpolationPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInterimPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPrincipalExchangeIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFlatRateIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFlatRateAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFlatRateCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMaximumPaymentAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMaximumPaymentCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMaximumTransactionAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMaximumTransactionCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamPaymentDateBusinessCenters);
        class NoUnderlyingPaymentStreamPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamPaymentDateBusinessCenters() : FIX::Group(40969,40582,FIX::message_order(40582,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamPaymentDates);
        class NoUnderlyingPaymentStreamPaymentDates: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamPaymentDates() : FIX::Group(41937,41938,FIX::message_order(41938,41939,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentRollConvention);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLastRegularPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamMasterAgreementPaymentDatesIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalPricePaymentDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamResetDateBusinessCenters);
        class NoUnderlyingPaymentStreamResetDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamResetDateBusinessCenters() : FIX::Group(40970,40594,FIX::message_order(40594,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamResetWeeklyRollConvention);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamInitialFixingDateBusinessCenters);
        class NoUnderlyingPaymentStreamInitialFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamInitialFixingDateBusinessCenters() : FIX::Group(40971,40600,FIX::message_order(40600,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialFixingDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamFixingDateBusinessCenters);
        class NoUnderlyingPaymentStreamFixingDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamFixingDateBusinessCenters() : FIX::Group(40972,40607,FIX::message_order(40607,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateCutoffDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateCutoffDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateCutoffDateOffsetDayType);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamFixingDates);
        class NoUnderlyingPaymentStreamFixingDates: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamFixingDates() : FIX::Group(42955,42956,FIX::message_order(42956,42957,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixingDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixedAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateOrAmountCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFixedAmountUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamTotalFixedAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFutureValueNotional);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFutureValueDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamWorldScaleRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamContractPrice);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamContractPriceCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexID);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexIDSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexCurveUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2Source);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2ID);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2IDSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2CurveUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndex2CurvePeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexLocation);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexLevel);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateIndexUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamSettlLevel);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamReferenceLevel);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamReferenceLevelUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamReferenceLevelEqualsZeroIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateMultiplier);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateSpread);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateSpreadCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateSpreadUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateConversionFactor);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateSpreadType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateSpreadPositionType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCapRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCapRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCapRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFloorRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFloorRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFloorRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInitialRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLastResetRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFinalRatePrecision);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamAveragingMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNegativeRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCalculationLagPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCalculationLagUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFirstObservationDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDayDistribution);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDayCount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingBusinessCalendar);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamPricingBusinessCenters);
        class NoUnderlyingPaymentStreamPricingBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamPricingBusinessCenters() : FIX::Group(41909,41910,FIX::message_order(41910,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamPricingDays);
        class NoUnderlyingPaymentStreamPricingDays: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamPricingDays() : FIX::Group(41944,41945,FIX::message_order(41945,41946,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDayOfWeek);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDayNumber);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamPricingDates);
        class NoUnderlyingPaymentStreamPricingDates: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamPricingDates() : FIX::Group(41941,41942,FIX::message_order(41942,41943,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamPricingDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationLagPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationLagUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationLagDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationInterpolationMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationIndexSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationPublicationSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationInitialIndexLevel);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamInflationFallbackBondApplicable);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFRADiscounting);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamUnderlierRefID);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaCurrencyDeterminationMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaReferenceAmount);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamFormulas);
        class NoUnderlyingPaymentStreamFormulas: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamFormulas() : FIX::Group(42981,43111,FIX::message_order(43111,42982,42983,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaLength);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormula);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaDesc);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaImageLength);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamFormulaImage);
        FIELD_SET(*this, FIX::UnderlyingDividendReinvestmentIndicator);
        FIELD_SET(*this, FIX::UnderlyingDividendEntitlementEvent);
        FIELD_SET(*this, FIX::UnderlyingDividendAmountType);
        FIELD_SET(*this, FIX::UnderlyingDividendUnderlierRefID);
        FIELD_SET(*this, FIX::NoUnderlyingDividendPeriods);
        class NoUnderlyingDividendPeriods: public FIX::Group
        {
        public:
        NoUnderlyingDividendPeriods() : FIX::Group(42862,42863,FIX::message_order(42863,42864,42865,42866,42867,42868,42882,42869,42870,42871,42872,42873,42874,42875,42876,42877,42878,42879,42880,42881,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodSequence);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodStartDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodEndDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodUnderlierRefID);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodStrikePrice);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodBusinessDayConvention);
          FIELD_SET(*this, FIX::NoUnderlyingDividendPeriodBusinessCenters);
          class NoUnderlyingDividendPeriodBusinessCenters: public FIX::Group
          {
          public:
          NoUnderlyingDividendPeriodBusinessCenters() : FIX::Group(42882,42883,FIX::message_order(42883,0)) {}
            FIELD_SET(*this, FIX::UnderlyingDividendPeriodBusinessCenter);
          };
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodValuationDateAdjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodPaymentDateAdjusted);
          FIELD_SET(*this, FIX::UnderlyingDividendPeriodXID);
        };
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryDividendPartySide);
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryDividendAmountType);
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryDividendCurrency);
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryDividendDeterminationMethod);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingDividendFXTriggerDateBusinessCenters);
        class NoUnderlyingDividendFXTriggerDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingDividendFXTriggerDateBusinessCenters() : FIX::Group(42853,42854,FIX::message_order(42854,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingDividendFXTriggerDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateIndex);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateIndexCurveUnit);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateMultiplier);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateSpread);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateSpreadPositionType);
        FIELD_SET(*this, FIX::UnderlyingDividendFloatingRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingDividendCapRate);
        FIELD_SET(*this, FIX::UnderlyingDividendCapRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingDividendCapRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingDividendFloorRate);
        FIELD_SET(*this, FIX::UnderlyingDividendFloorRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingDividendFloorRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingDividendInitialRate);
        FIELD_SET(*this, FIX::UnderlyingDividendFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::UnderlyingDividendFinalRatePrecision);
        FIELD_SET(*this, FIX::UnderlyingDividendAveragingMethod);
        FIELD_SET(*this, FIX::UnderlyingDividendNegativeRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualFixedRate);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingDividendAccrualPaymentDateBusinessCenters);
        class NoUnderlyingDividendAccrualPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingDividendAccrualPaymentDateBusinessCenters() : FIX::Group(42799,42800,FIX::message_order(42800,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingDividendAccrualPaymentDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingDividendCompoundingMethod);
        FIELD_SET(*this, FIX::UnderlyingDividendNumOfIndexUnits);
        FIELD_SET(*this, FIX::UnderlyingDividendCashPercentage);
        FIELD_SET(*this, FIX::UnderlyingDividendCashEquivalentPercentage);
        FIELD_SET(*this, FIX::UnderlyingNonCashDividendTreatment);
        FIELD_SET(*this, FIX::UnderlyingDividendComposition);
        FIELD_SET(*this, FIX::UnderlyingSpecialDividendsIndicator);
        FIELD_SET(*this, FIX::UnderlyingMaterialDividendsIndicator);
        FIELD_SET(*this, FIX::UnderlyingOptionsExchangeDividendsIndicator);
        FIELD_SET(*this, FIX::UnderlyingAdditionalDividendsIndicator);
        FIELD_SET(*this, FIX::UnderlyingAllDividendsIndicator);
        FIELD_SET(*this, FIX::UnderlyingReturnRateNotionalReset);
        FIELD_SET(*this, FIX::NoUnderlyingReturnRates);
        class NoUnderlyingReturnRates: public FIX::Group
        {
        public:
        NoUnderlyingReturnRates() : FIX::Group(43034,43035,FIX::message_order(43035,43036,43037,43038,43039,43040,43064,43030,43041,43042,43043,43044,43045,43046,43047,43048,43049,43050,43051,43052,43060,43053,43054,43008,43055,43056,43057,43058,43059,0)) {}
          FIELD_SET(*this, FIX::UnderlyingReturnRatePriceSequence);
          FIELD_SET(*this, FIX::UnderlyingReturnRateCommissionBasis);
          FIELD_SET(*this, FIX::UnderlyingReturnRateCommissionAmount);
          FIELD_SET(*this, FIX::UnderlyingReturnRateCommissionCurrency);
          FIELD_SET(*this, FIX::UnderlyingReturnRateTotalCommissionPerTrade);
          FIELD_SET(*this, FIX::UnderlyingReturnRateDeterminationMethod);
          FIELD_SET(*this, FIX::NoUnderlyingReturnRatePrices);
          class NoUnderlyingReturnRatePrices: public FIX::Group
          {
          public:
          NoUnderlyingReturnRatePrices() : FIX::Group(43064,43065,FIX::message_order(43065,43066,43067,43068,0)) {}
            FIELD_SET(*this, FIX::UnderlyingReturnRatePriceBasis);
            FIELD_SET(*this, FIX::UnderlyingReturnRatePrice);
            FIELD_SET(*this, FIX::UnderlyingReturnRatePriceCurrency);
            FIELD_SET(*this, FIX::UnderlyingReturnRatePriceType);
          };
          FIELD_SET(*this, FIX::NoUnderlyingReturnRateFXConversions);
          class NoUnderlyingReturnRateFXConversions: public FIX::Group
          {
          public:
          NoUnderlyingReturnRateFXConversions() : FIX::Group(43030,43031,FIX::message_order(43031,43032,43033,0)) {}
            FIELD_SET(*this, FIX::UnderlyingReturnRateFXCurrencySymbol);
            FIELD_SET(*this, FIX::UnderlyingReturnRateFXRate);
            FIELD_SET(*this, FIX::UnderlyingReturnRateFXRateCalc);
          };
          FIELD_SET(*this, FIX::UnderlyingReturnRateAmountRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteMeasureType);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteUnits);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteMethod);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteCurrency);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteCurrencyType);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteTimeType);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteTime);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteDate);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteExpirationTime);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteBusinessCenter);
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuoteExchange);
          FIELD_SET(*this, FIX::NoUnderlyingReturnRateInformationSources);
          class NoUnderlyingReturnRateInformationSources: public FIX::Group
          {
          public:
          NoUnderlyingReturnRateInformationSources() : FIX::Group(43060,43061,FIX::message_order(43061,43062,43063,0)) {}
            FIELD_SET(*this, FIX::UnderlyingReturnRateInformationSource);
            FIELD_SET(*this, FIX::UnderlyingReturnRateReferencePage);
            FIELD_SET(*this, FIX::UnderlyingReturnRateReferencePageHeading);
          };
          FIELD_SET(*this, FIX::UnderlyingReturnRateQuotePricingModel);
          FIELD_SET(*this, FIX::UnderlyingReturnRateCashFlowType);
          FIELD_SET(*this, FIX::NoUnderlyingReturnRateDates);
          class NoUnderlyingReturnRateDates: public FIX::Group
          {
          public:
          NoUnderlyingReturnRateDates() : FIX::Group(43008,43009,FIX::message_order(43009,43071,43010,43011,43012,43013,43014,43015,43016,43017,43018,43019,43020,43021,43022,43023,43024,43025,43026,43027,43028,43029,43069,0)) {}
            FIELD_SET(*this, FIX::UnderlyingReturnRateDateMode);
            FIELD_SET(*this, FIX::NoUnderlyingReturnRateValuationDates);
            class NoUnderlyingReturnRateValuationDates: public FIX::Group
            {
            public:
            NoUnderlyingReturnRateValuationDates() : FIX::Group(43071,43072,FIX::message_order(43072,43073,0)) {}
              FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDate);
              FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateType);
            };
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateRelativeTo);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateOffsetPeriod);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateOffsetUnit);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateOffsetDayType);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateUnadjusted);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateRelativeTo);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateOffsetPeriod);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateOffsetUnit);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateOffsetDayType);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationStartDateAdjusted);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateUnadjusted);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateRelativeTo);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateOffsetPeriod);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateOffsetUnit);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateOffsetDayType);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationEndDateAdjusted);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationFrequencyPeriod);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationFrequencyUnit);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationFrequencyRollConvention);
            FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateBusinessDayConvention);
            FIELD_SET(*this, FIX::NoUnderlyingReturnRateValuationDateBusinessCenters);
            class NoUnderlyingReturnRateValuationDateBusinessCenters: public FIX::Group
            {
            public:
            NoUnderlyingReturnRateValuationDateBusinessCenters() : FIX::Group(43069,43070,FIX::message_order(43070,0)) {}
              FIELD_SET(*this, FIX::UnderlyingReturnRateValuationDateBusinessCenter);
            };
          };
          FIELD_SET(*this, FIX::UnderlyingReturnRateValuationTimeType);
          FIELD_SET(*this, FIX::UnderlyingReturnRateValuationTime);
          FIELD_SET(*this, FIX::UnderlyingReturnRateValuationTimeBusinessCenter);
          FIELD_SET(*this, FIX::UnderlyingReturnRateValuationPriceOption);
          FIELD_SET(*this, FIX::UnderlyingReturnRateFinalPriceFallback);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkInitialLevel);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkClosingLevelIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkExpiringLevelIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkEstimatedTradingDays);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkStrikePrice);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkStrikePriceType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkMaximumBoundary);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkMinimumBoundary);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamLinkNumberOfDataSeries);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamVarianceUnadjustedCap);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamRealizedVarianceMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamDaysAdjustmentIndicator);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNearestExchangeContractRefID);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamVegaNotionalAmount);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFixedRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateIndex);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateIndexCurvePeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateIndexCurveUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateMultiplier);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateSpread);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateSpreadPositionType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingCapRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingCapRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingCapRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFloorRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFloorRateBuySide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFloorRateSellSide);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingInitialRate);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFinalRateRoundingDirection);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFinalRatePrecision);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingAveragingMethod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingNegativeRateTreatment);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamCompoundingDatesBusinessCenters);
        class NoUnderlyingPaymentStreamCompoundingDatesBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamCompoundingDatesBusinessCenters() : FIX::Group(42915,42916,FIX::message_order(42916,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamCompoundingDates);
        class NoUnderlyingPaymentStreamCompoundingDates: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamCompoundingDates() : FIX::Group(42901,42902,FIX::message_order(42902,42903,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingDatesOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingPeriodSkip);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingStartDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingEndDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamCompoundingRollConvention);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamBoundsFirstDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamBoundsLastDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableRefCurrency);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesBizDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStreamNonDeliverableFixingDatesBizCenters);
        class NoUnderlyingPaymentStreamNonDeliverableFixingDatesBizCenters: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStreamNonDeliverableFixingDatesBizCenters() : FIX::Group(40968,40650,FIX::message_order(40650,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableFixingDatesOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableSettlRateSource);
        FIELD_SET(*this, FIX::UnderlyingPaymentStreamNonDeliverableSettlReferencePage);
        FIELD_SET(*this, FIX::NoUnderlyingNonDeliverableFixingDates);
        class NoUnderlyingNonDeliverableFixingDates: public FIX::Group
        {
        public:
        NoUnderlyingNonDeliverableFixingDates() : FIX::Group(40656,40657,FIX::message_order(40657,40658,0)) {}
          FIELD_SET(*this, FIX::UnderlyingNonDeliverableFixingDate);
          FIELD_SET(*this, FIX::UnderlyingNonDeliverableFixingDateType);
        };
        FIELD_SET(*this, FIX::NoUnderlyingSettlRateFallbacks);
        class NoUnderlyingSettlRateFallbacks: public FIX::Group
        {
        public:
        NoUnderlyingSettlRateFallbacks() : FIX::Group(40659,40660,FIX::message_order(40660,40904,40915,40662,40663,0)) {}
          FIELD_SET(*this, FIX::UnderlyingSettlRatePostponementMaximumDays);
          FIELD_SET(*this, FIX::UnderlyingSettlRateFallbackRateSource);
          FIELD_SET(*this, FIX::UnderlyingSettlRateFallbackReferencePage);
          FIELD_SET(*this, FIX::UnderlyingSettlRatePostponementSurvey);
          FIELD_SET(*this, FIX::UnderlyingSettlRatePostponementCalculationAgent);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentSchedules);
        class NoUnderlyingPaymentSchedules: public FIX::Group
        {
        public:
        NoUnderlyingPaymentSchedules() : FIX::Group(40664,40665,FIX::message_order(40665,41881,41882,40666,40667,40668,40669,40670,40671,40672,40673,40674,40675,41883,41884,41885,41886,40676,40677,40678,40679,41887,41888,41889,41890,40680,40681,40682,40683,40684,40685,40704,40686,40687,40688,40689,40966,40691,40692,40693,41891,41892,40694,41878,41893,41894,41895,41896,40695,40696,40697,40698,40967,40700,40701,40702,40703,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleXID);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleXIDRef);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStubType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStartDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleEndDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentSchedulePaySide);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleReceiveSide);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleNotional);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleCurrency);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateMultiplier);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateSpread);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateCurrency);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateConversionFactor);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateSpreadType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateSpreadPositionType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateTreatment);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixedAmount);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixedCurrency);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleSettlPeriodPrice);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleSettlPeriodPriceCurrency);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleSettlPeriodPriceUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepFrequencyPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepFrequencyUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepOffsetValue);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepOffsetRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleStepRelativeTo);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentScheduleRateSources);
          class NoUnderlyingPaymentScheduleRateSources: public FIX::Group
          {
          public:
          NoUnderlyingPaymentScheduleRateSources() : FIX::Group(40704,40705,FIX::message_order(40705,40706,40707,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateSource);
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleRateSourceType);
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleReferencePage);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleWeight);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateBusinessDayCnvtn);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentScheduleFixingDateBusinessCenters);
          class NoUnderlyingPaymentScheduleFixingDateBusinessCenters: public FIX::Group
          {
          public:
          NoUnderlyingPaymentScheduleFixingDateBusinessCenters() : FIX::Group(40966,40690,FIX::message_order(40690,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDayDistribution);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDayCount);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDateAdjusted);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentScheduleFixingDays);
          class NoUnderlyingPaymentScheduleFixingDays: public FIX::Group
          {
          public:
          NoUnderlyingPaymentScheduleFixingDays() : FIX::Group(41878,41879,FIX::message_order(41879,41880,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDayOfWeek);
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingDayNumber);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingLagPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingLagUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingFirstObservationDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingFirstObservationDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingTime);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleFixingTimeBusinessCenter);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangePaymentDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDatesBizDayConvention);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentScheduleInterimExchangeDateBusinessCenters);
          class NoUnderlyingPaymentScheduleInterimExchangeDateBusinessCenters: public FIX::Group
          {
          public:
          NoUnderlyingPaymentScheduleInterimExchangeDateBusinessCenters() : FIX::Group(40967,40699,FIX::message_order(40699,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDatesBusinessCenter);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDatesOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDatesOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDatesOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingPaymentScheduleInterimExchangeDateAdjusted);
        };
        FIELD_SET(*this, FIX::NoUnderlyingPaymentStubs);
        class NoUnderlyingPaymentStubs: public FIX::Group
        {
        public:
        NoUnderlyingPaymentStubs() : FIX::Group(40708,40709,FIX::message_order(40709,40710,42993,42994,42995,42996,42997,42998,42999,42984,42985,42986,42987,42988,42989,42990,40711,40712,40713,40714,40715,40716,40717,40718,40719,40720,40721,40722,40723,40724,40725,40726,40727,40728,40729,40730,40731,40732,40733,40734,40735,40736,40737,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPaymentStubType);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubLength);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentStubStartDateBusinessCenters);
          class NoUnderlyingPaymentStubStartDateBusinessCenters: public FIX::Group
          {
          public:
          NoUnderlyingPaymentStubStartDateBusinessCenters() : FIX::Group(43000,43001,FIX::message_order(43001,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubStartDateAdjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateUnadjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateBusinessDayConvention);
          FIELD_SET(*this, FIX::NoUnderlyingPaymentStubEndDateBusinessCenters);
          class NoUnderlyingPaymentStubEndDateBusinessCenters: public FIX::Group
          {
          public:
          NoUnderlyingPaymentStubEndDateBusinessCenters() : FIX::Group(42991,42992,FIX::message_order(42992,0)) {}
            FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateBusinessCenter);
          };
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateRelativeTo);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateOffsetPeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateOffsetUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateOffsetDayType);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubEndDateAdjusted);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubFixedAmount);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubFixedCurrency);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexSource);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexCurvePeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexCurveUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexRateMultiplier);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexRateSpread);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexRateSpreadPositionType);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexRateTreatment);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexCapRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexCapRateBuySide);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexCapRateSellSide);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexFloorRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexFloorRateBuySide);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndexFloorRateSellSide);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2Source);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2CurvePeriod);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2CurveUnit);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2RateMultiplier);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2RateSpread);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2RateSpreadPositionType);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2RateTreatment);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2CapRate);
          FIELD_SET(*this, FIX::UnderlyingPaymentStubIndex2FloorRate);
        };
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamType);
        FIELD_SET(*this, FIX::NoUnderlyingDeliveryStreamCommoditySources);
        class NoUnderlyingDeliveryStreamCommoditySources: public FIX::Group
        {
        public:
        NoUnderlyingDeliveryStreamCommoditySources() : FIX::Group(41808,41809,FIX::message_order(41809,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDeliveryStreamCommoditySource);
        };
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamPipeline);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamEntryPoint);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamWithdrawalPoint);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryPoint);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryPointSource);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryPointDesc);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryRestriction);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryContingency);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliveryContingentPartySide);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamDeliverAtSourceIndicator);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamRiskApportionment);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamRiskApportionmentSource);
        FIELD_SET(*this, FIX::NoUnderlyingDeliveryStreamCycles);
        class NoUnderlyingDeliveryStreamCycles: public FIX::Group
        {
        public:
        NoUnderlyingDeliveryStreamCycles() : FIX::Group(41804,41805,FIX::message_order(41805,41806,41807,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDeliveryStreamCycleDesc);
          FIELD_SET(*this, FIX::EncodedUnderlyingDeliveryStreamCycleDescLen);
          FIELD_SET(*this, FIX::EncodedUnderlyingDeliveryStreamCycleDesc);
        };
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamTitleTransferLocation);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamTitleTransferCondition);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamImporterOfRecord);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamNegativeTolerance);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamPositiveTolerance);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamToleranceUnitOfMeasure);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamToleranceType);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamToleranceOptionSide);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamTotalPositiveTolerance);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamTotalNegativeTolerance);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamNotionalConversionFactor);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamTransportEquipment);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamElectingPartySide);
        FIELD_SET(*this, FIX::UnderlyingDeliveryStreamRouteOrCharter);
        FIELD_SET(*this, FIX::NoUnderlyingDeliverySchedules);
        class NoUnderlyingDeliverySchedules: public FIX::Group
        {
        public:
        NoUnderlyingDeliverySchedules() : FIX::Group(41756,41757,FIX::message_order(41757,41758,41759,41760,41761,41762,41763,41764,41765,41766,41767,41768,41769,41770,0)) {}
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleType);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleXID);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleNotional);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleNotionalUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleNotionalCommodityFrequency);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleNegativeTolerance);
          FIELD_SET(*this, FIX::UnderlyingDeliverySchedulePositiveTolerance);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleToleranceUnitOfMeasure);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleToleranceType);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlCountry);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlTimeZone);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlFlowType);
          FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlHolidaysProcessingInstruction);
          FIELD_SET(*this, FIX::NoUnderlyingDeliveryScheduleSettlDays);
          class NoUnderlyingDeliveryScheduleSettlDays: public FIX::Group
          {
          public:
          NoUnderlyingDeliveryScheduleSettlDays() : FIX::Group(41770,41771,FIX::message_order(41771,41772,41773,0)) {}
            FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlDay);
            FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlTotalHours);
            FIELD_SET(*this, FIX::NoUnderlyingDeliveryScheduleSettlTimes);
            class NoUnderlyingDeliveryScheduleSettlTimes: public FIX::Group
            {
            public:
            NoUnderlyingDeliveryScheduleSettlTimes() : FIX::Group(41773,41774,FIX::message_order(41774,41775,41776,0)) {}
              FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlStart);
              FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlEnd);
              FIELD_SET(*this, FIX::UnderlyingDeliveryScheduleSettlTimeType);
            };
          };
        };
        FIELD_SET(*this, FIX::UnderlyingStreamText);
        FIELD_SET(*this, FIX::EncodedUnderlyingStreamTextLen);
        FIELD_SET(*this, FIX::EncodedUnderlyingStreamText);
      };
      FIELD_SET(*this, FIX::NoUnderlyingProvisions);
      class NoUnderlyingProvisions: public FIX::Group
      {
      public:
      NoUnderlyingProvisions() : FIX::Group(42149,42150,FIX::message_order(42150,42151,42152,42190,42153,42154,42155,43002,43003,42156,42157,42158,42104,42105,42106,42107,42108,42109,42110,42111,42115,42116,42117,42118,42119,42120,42121,42122,42123,42124,42125,42126,42127,42128,42129,42130,42131,42132,42133,42134,42135,42136,42137,42138,42139,42140,42141,42142,42143,42144,42145,42146,42147,42148,42159,42160,42161,42162,42163,42164,42165,42092,42093,42094,42095,42096,42097,42098,42166,42167,42168,42169,42102,42103,42170,42171,42172,42173,0)) {}
        FIELD_SET(*this, FIX::UnderlyingProvisionType);
        FIELD_SET(*this, FIX::UnderlyingProvisionDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionDateBusinessCenters);
        class NoUnderlyingProvisionDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionDateBusinessCenters() : FIX::Group(42190,42191,FIX::message_order(42191,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionDateTenorPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionDateTenorUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionBreakFeeElection);
        FIELD_SET(*this, FIX::UnderlyingProvisionBreakFeeRate);
        FIELD_SET(*this, FIX::UnderlyingProvisionCalculationAgent);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionSinglePartyBuyerSide);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionSinglePartySellerSide);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueTime);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueTimeBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionCashSettlValueDateBusinessCenters);
        class NoUnderlyingProvisionCashSettlValueDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionCashSettlValueDateBusinessCenters() : FIX::Group(42182,42183,FIX::message_order(42183,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlValueDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionOptionExerciseBusinessCenters);
        class NoUnderlyingProvisionOptionExerciseBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionOptionExerciseBusinessCenters() : FIX::Group(42184,42185,FIX::message_order(42185,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseBusinessCenter);
        };
        FIELD_SET(*this, FIX::NoUnderlyingProvisionOptionExerciseFixedDates);
        class NoUnderlyingProvisionOptionExerciseFixedDates: public FIX::Group
        {
        public:
        NoUnderlyingProvisionOptionExerciseFixedDates() : FIX::Group(42112,42113,FIX::message_order(42113,42114,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseFixedDate);
          FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseFixedDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseEarliestDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseEarliestDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseFrequencyPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseFrequencyUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStartDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExercisePeriodSkip);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseBoundsFirstDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseBoundsLastDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseEarliestTime);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseEarliestTimeBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseLatestTime);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseLatestTimeBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionOptionExpirationDateBusinessCenters);
        class NoUnderlyingProvisionOptionExpirationDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionOptionExpirationDateBusinessCenters() : FIX::Group(42186,42187,FIX::message_order(42187,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationTime);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExpirationTimeBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateBizDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionOptionRelevantUnderlyingDateBusinessCenters);
        class NoUnderlyingProvisionOptionRelevantUnderlyingDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionOptionRelevantUnderlyingDateBusinessCenters() : FIX::Group(42188,42189,FIX::message_order(42189,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionRelevantUnderlyingDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseStyle);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseMultipleNotional);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseMinimumNotional);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseMaximumNotional);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionMinimumNumber);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionMaximumNumber);
        FIELD_SET(*this, FIX::UnderlyingProvisionOptionExerciseConfirmation);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionCashSettlPaymentDateBusinessCenters);
        class NoUnderlyingProvisionCashSettlPaymentDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingProvisionCashSettlPaymentDateBusinessCenters() : FIX::Group(42180,42181,FIX::message_order(42181,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateRangeFirst);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateRangeLast);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionCashSettlPaymentDates);
        class NoUnderlyingProvisionCashSettlPaymentDates: public FIX::Group
        {
        public:
        NoUnderlyingProvisionCashSettlPaymentDates() : FIX::Group(42099,42100,FIX::message_order(42100,42101,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDate);
          FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlPaymentDateType);
        };
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlMethod);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlCurrency);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlCurrency2);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlQuoteType);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlQuoteSource);
        FIELD_SET(*this, FIX::UnderlyingProvisionCashSettlQuoteReferencePage);
        FIELD_SET(*this, FIX::UnderlyingProvisionText);
        FIELD_SET(*this, FIX::EncodedUnderlyingProvisionTextLen);
        FIELD_SET(*this, FIX::EncodedUnderlyingProvisionText);
        FIELD_SET(*this, FIX::NoUnderlyingProvisionPartyIDs);
        class NoUnderlyingProvisionPartyIDs: public FIX::Group
        {
        public:
        NoUnderlyingProvisionPartyIDs() : FIX::Group(42173,42174,FIX::message_order(42174,42175,42176,40918,42177,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProvisionPartyID);
          FIELD_SET(*this, FIX::UnderlyingProvisionPartyIDSource);
          FIELD_SET(*this, FIX::UnderlyingProvisionPartyRole);
          FIELD_SET(*this, FIX::UnderlyingProvisionPartyRoleQualifier);
          FIELD_SET(*this, FIX::NoUnderlyingProvisionPartySubIDs);
          class NoUnderlyingProvisionPartySubIDs: public FIX::Group
          {
          public:
          NoUnderlyingProvisionPartySubIDs() : FIX::Group(42177,42178,FIX::message_order(42178,42179,0)) {}
            FIELD_SET(*this, FIX::UnderlyingProvisionPartySubID);
            FIELD_SET(*this, FIX::UnderlyingProvisionPartySubIDType);
          };
        };
      };
      FIELD_SET(*this, FIX::NoUnderlyingAdditionalTerms);
      class NoUnderlyingAdditionalTerms: public FIX::Group
      {
      public:
      NoUnderlyingAdditionalTerms() : FIX::Group(42036,42037,FIX::message_order(42037,42038,41340,0)) {}
        FIELD_SET(*this, FIX::UnderlyingAdditionalTermConditionPrecedentBondIndicator);
        FIELD_SET(*this, FIX::UnderlyingAdditionalTermDiscrepancyClauseIndicator);
        FIELD_SET(*this, FIX::NoUnderlyingAdditionalTermBondRefs);
        class NoUnderlyingAdditionalTermBondRefs: public FIX::Group
        {
        public:
        NoUnderlyingAdditionalTermBondRefs() : FIX::Group(41340,41341,FIX::message_order(41341,41701,41709,41710,41711,41712,42017,42025,42026,42027,42028,42029,42030,42031,42032,42033,42034,42035,0)) {}
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondSecurityID);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondSecurityIDSource);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondDesc);
          FIELD_SET(*this, FIX::EncodedUnderlyingAdditionalTermBondDescLen);
          FIELD_SET(*this, FIX::EncodedUnderlyingAdditionalTermBondDesc);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCurrency);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondIssuer);
          FIELD_SET(*this, FIX::EncodedUnderlyingAdditionalTermBondIssuerLen);
          FIELD_SET(*this, FIX::EncodedUnderlyingAdditionalTermBondIssuer);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondSeniority);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCouponType);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCouponRate);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondMaturityDate);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondParValue);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCurrentTotalIssuedAmount);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCouponFrequencyPeriod);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondCouponFrequencyUnit);
          FIELD_SET(*this, FIX::UnderlyingAdditionalTermBondDayCount);
        };
      };
      FIELD_SET(*this, FIX::NoUnderlyingProtectionTerms);
      class NoUnderlyingProtectionTerms: public FIX::Group
      {
      public:
      NoUnderlyingProtectionTerms() : FIX::Group(42068,42069,FIX::message_order(42069,42070,42071,42072,42073,42074,42075,42090,42077,42087,42076,0)) {}
        FIELD_SET(*this, FIX::UnderlyingProtectionTermNotional);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermCurrency);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermSellerNotifies);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermBuyerNotifies);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermEventBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermStandardSources);
        FIELD_SET(*this, FIX::UnderlyingProtectionTermEventMinimumSources);
        FIELD_SET(*this, FIX::NoUnderlyingProtectionTermEventNewsSources);
        class NoUnderlyingProtectionTermEventNewsSources: public FIX::Group
        {
        public:
        NoUnderlyingProtectionTermEventNewsSources() : FIX::Group(42090,42091,FIX::message_order(42091,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventNewsSource);
        };
        FIELD_SET(*this, FIX::NoUnderlyingProtectionTermEvents);
        class NoUnderlyingProtectionTermEvents: public FIX::Group
        {
        public:
        NoUnderlyingProtectionTermEvents() : FIX::Group(42077,42078,FIX::message_order(42078,42079,42080,42081,42082,42083,42084,42085,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventType);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventValue);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventCurrency);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventPeriod);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventUnit);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventDayType);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermEventRateSource);
          FIELD_SET(*this, FIX::NoUnderlyingProtectionTermEventQualifiers);
          class NoUnderlyingProtectionTermEventQualifiers: public FIX::Group
          {
          public:
          NoUnderlyingProtectionTermEventQualifiers() : FIX::Group(42085,42086,FIX::message_order(42086,0)) {}
            FIELD_SET(*this, FIX::UnderlyingProtectionTermEventQualifier);
          };
        };
        FIELD_SET(*this, FIX::NoUnderlyingProtectionTermObligations);
        class NoUnderlyingProtectionTermObligations: public FIX::Group
        {
        public:
        NoUnderlyingProtectionTermObligations() : FIX::Group(42087,42088,FIX::message_order(42088,42089,0)) {}
          FIELD_SET(*this, FIX::UnderlyingProtectionTermObligationType);
          FIELD_SET(*this, FIX::UnderlyingProtectionTermObligationValue);
        };
        FIELD_SET(*this, FIX::UnderlyingProtectionTermXID);
      };
      FIELD_SET(*this, FIX::NoUnderlyingCashSettlTerms);
      class NoUnderlyingCashSettlTerms: public FIX::Group
      {
      public:
      NoUnderlyingCashSettlTerms() : FIX::Group(42041,42042,FIX::message_order(42042,42043,42044,42045,42046,42047,42048,42049,42050,42051,42052,42039,42797,42798,42053,42054,42790,42791,42792,42793,42794,42795,42796,42055,42056,42057,42058,42059,0)) {}
        FIELD_SET(*this, FIX::UnderlyingCashSettlCurrency);
        FIELD_SET(*this, FIX::UnderlyingCashSettlValuationFirstBusinessDayOffset);
        FIELD_SET(*this, FIX::UnderlyingCashSettlValuationSubsequentBusinessDaysOffset);
        FIELD_SET(*this, FIX::UnderlyingCashSettlNumOfValuationDates);
        FIELD_SET(*this, FIX::UnderlyingCashSettlValuationTime);
        FIELD_SET(*this, FIX::UnderlyingCashSettlBusinessCenter);
        FIELD_SET(*this, FIX::UnderlyingCashSettlQuoteMethod);
        FIELD_SET(*this, FIX::UnderlyingCashSettlQuoteAmount);
        FIELD_SET(*this, FIX::UnderlyingCashSettlQuoteCurrency);
        FIELD_SET(*this, FIX::UnderlyingCashSettlMinimumQuoteAmount);
        FIELD_SET(*this, FIX::UnderlyingCashSettlMinimumQuoteCurrency);
        FIELD_SET(*this, FIX::NoUnderlyingCashSettlDealers);
        class NoUnderlyingCashSettlDealers: public FIX::Group
        {
        public:
        NoUnderlyingCashSettlDealers() : FIX::Group(42039,42040,FIX::message_order(42040,0)) {}
          FIELD_SET(*this, FIX::UnderlyingCashSettlDealer);
        };
        FIELD_SET(*this, FIX::UnderlyingCashSettlPriceSource);
        FIELD_SET(*this, FIX::UnderlyingCashSettlPriceDefault);
        FIELD_SET(*this, FIX::UnderlyingCashSettlBusinessDays);
        FIELD_SET(*this, FIX::UnderlyingCashSettlAmount);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateUnadjusted);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateBusinessDayConvention);
        FIELD_SET(*this, FIX::NoUnderlyingCashSettlDateBusinessCenters);
        class NoUnderlyingCashSettlDateBusinessCenters: public FIX::Group
        {
        public:
        NoUnderlyingCashSettlDateBusinessCenters() : FIX::Group(42788,42789,FIX::message_order(42789,0)) {}
          FIELD_SET(*this, FIX::UnderlyingCashSettlDateBusinessCenter);
        };
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateRelativeTo);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateOffsetPeriod);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateOffsetUnit);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateOffsetDayType);
        FIELD_SET(*this, FIX::UnderlyingCashSettlDateAdjusted);
        FIELD_SET(*this, FIX::UnderlyingCashSettlRecoveryFactor);
        FIELD_SET(*this, FIX::UnderlyingCashSettlFixedTermIndicator);
        FIELD_SET(*this, FIX::UnderlyingCashSettlAccruedInterestIndicator);
        FIELD_SET(*this, FIX::UnderlyingCashSettlValuationMethod);
        FIELD_SET(*this, FIX::UnderlyingCashSettlTermXID);
      };
      FIELD_SET(*this, FIX::NoUnderlyingPhysicalSettlTerms);
      class NoUnderlyingPhysicalSettlTerms: public FIX::Group
      {
      public:
      NoUnderlyingPhysicalSettlTerms() : FIX::Group(42060,42065,FIX::message_order(42065,42061,42062,42063,42064,0)) {}
        FIELD_SET(*this, FIX::NoUnderlyingPhysicalSettlDeliverableObligations);
        class NoUnderlyingPhysicalSettlDeliverableObligations: public FIX::Group
        {
        public:
        NoUnderlyingPhysicalSettlDeliverableObligations() : FIX::Group(42065,42066,FIX::message_order(42066,42067,0)) {}
          FIELD_SET(*this, FIX::UnderlyingPhysicalSettlDeliverableObligationType);
          FIELD_SET(*this, FIX::UnderlyingPhysicalSettlDeliverableObligationValue);
        };
        FIELD_SET(*this, FIX::UnderlyingPhysicalSettlCurrency);
        FIELD_SET(*this, FIX::UnderlyingPhysicalSettlBusinessDays);
        FIELD_SET(*this, FIX::UnderlyingPhysicalSettlMaximumBusinessDays);
        FIELD_SET(*this, FIX::UnderlyingPhysicalSettlTermXID);
      };
      FIELD_SET(*this, FIX::UnderlyingRateSpreadInitialValue);
      FIELD_SET(*this, FIX::NoUnderlyingRateSpreadSteps);
      class NoUnderlyingRateSpreadSteps: public FIX::Group
      {
      public:
      NoUnderlyingRateSpreadSteps() : FIX::Group(43005,43006,FIX::message_order(43006,43007,0)) {}
        FIELD_SET(*this, FIX::UnderlyingRateSpreadStepDate);
        FIELD_SET(*this, FIX::UnderlyingRateSpreadStepValue);
      };
      FIELD_SET(*this, FIX::UnderlyingDividendPayoutRatio);
      FIELD_SET(*this, FIX::UnderlyingDividendPayoutConditions);
      FIELD_SET(*this, FIX::NoUnderlyingDividendPayments);
      class NoUnderlyingDividendPayments: public FIX::Group
      {
      public:
      NoUnderlyingDividendPayments() : FIX::Group(42855,42856,FIX::message_order(42856,42857,42858,42859,0)) {}
        FIELD_SET(*this, FIX::UnderlyingDividendPaymentDate);
        FIELD_SET(*this, FIX::UnderlyingDividendPaymentAmount);
        FIELD_SET(*this, FIX::UnderlyingDividendPaymentCurrency);
        FIELD_SET(*this, FIX::UnderlyingDividendAccruedInterest);
      };
      FIELD_SET(*this, FIX::NoUnderlyingExtraordinaryEvents);
      class NoUnderlyingExtraordinaryEvents: public FIX::Group
      {
      public:
      NoUnderlyingExtraordinaryEvents() : FIX::Group(42884,42885,FIX::message_order(42885,42886,0)) {}
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryEventType);
        FIELD_SET(*this, FIX::UnderlyingExtraordinaryEventValue);
      };
      FIELD_SET(*this, FIX::UnderlyingExtraordinaryEventAdjustmentMethod);
      FIELD_SET(*this, FIX::UnderlyingExchangeLookAlike);
      FIELD_SET(*this, FIX::UnderlyingAverageVolumeLimitationPercentage);
      FIELD_SET(*this, FIX::UnderlyingAverageVolumeLimitationPeriodDays);
      FIELD_SET(*this, FIX::UnderlyingDepositoryReceiptIndicator);
      FIELD_SET(*this, FIX::UnderlyingOpenUnits);
      FIELD_SET(*this, FIX::UnderlyingBasketDivisor);
      FIELD_SET(*this, FIX::UnderlyingInstrumentXID);
    };
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::SettlDate);
    FIELD_SET(*this, FIX::SettlSessID);
    FIELD_SET(*this, FIX::SettlSessSubID);
    FIELD_SET(*this, FIX::NoTradingSessions);
    class NoTradingSessions: public FIX::Group
    {
    public:
    NoTradingSessions() : FIX::Group(386,336,FIX::message_order(336,625,0)) {}
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ResponseTransportType);
    FIELD_SET(*this, FIX::ResponseDestination);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
