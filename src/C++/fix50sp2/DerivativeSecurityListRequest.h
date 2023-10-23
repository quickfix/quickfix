#ifndef FIX50SP2_DERIVATIVESECURITYLISTREQUEST_H
#define FIX50SP2_DERIVATIVESECURITYLISTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class DerivativeSecurityListRequest : public Message
  {
  public:
    DerivativeSecurityListRequest() : Message(MsgType()) {}
    DerivativeSecurityListRequest(const FIX::Message& m) : Message(m) {}
    DerivativeSecurityListRequest(const Message& m) : Message(m) {}
    DerivativeSecurityListRequest(const DerivativeSecurityListRequest&) = default;
    DerivativeSecurityListRequest(DerivativeSecurityListRequest&&) = default;
    DerivativeSecurityListRequest& operator=(const DerivativeSecurityListRequest&) = default;
    DerivativeSecurityListRequest& operator=(DerivativeSecurityListRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("z"); }

    DerivativeSecurityListRequest(
      const FIX::SecurityReqID& aSecurityReqID,
      const FIX::SecurityListRequestType& aSecurityListRequestType )
    : Message(MsgType())
    {
      set(aSecurityReqID);
      set(aSecurityListRequestType);
    }

    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityListRequestType);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
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
    FIELD_SET(*this, FIX::DerivativeUPICode);
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
    FIELD_SET(*this, FIX::DerivativeStrikeCurrencyCodeSource);
    FIELD_SET(*this, FIX::DerivativeStrikeMultiplier);
    FIELD_SET(*this, FIX::DerivativeStrikeValue);
    FIELD_SET(*this, FIX::DerivativeOptAttribute);
    FIELD_SET(*this, FIX::DerivativeContractMultiplier);
    FIELD_SET(*this, FIX::DerivativeContractMultiplierUnit);
    FIELD_SET(*this, FIX::DerivativeFlowScheduleType);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrement);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrementAmount);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasureCurrency);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasureCurrencyCodeSource);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasureCurrency);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasureCurrencyCodeSource);
    FIELD_SET(*this, FIX::DerivativeSettlMethod);
    FIELD_SET(*this, FIX::DerivativePriceQuoteMethod);
    FIELD_SET(*this, FIX::DerivativeValuationMethod);
    FIELD_SET(*this, FIX::DerivativePriceQuoteCurrency);
    FIELD_SET(*this, FIX::DerivativePriceQuoteCurrencyCodeSource);
    FIELD_SET(*this, FIX::DerivativeListMethod);
    FIELD_SET(*this, FIX::DerivativeCapPrice);
    FIELD_SET(*this, FIX::DerivativeFloorPrice);
    FIELD_SET(*this, FIX::DerivativePutOrCall);
    FIELD_SET(*this, FIX::DerivativeInTheMoneyCondition);
    FIELD_SET(*this, FIX::DerivativeContraryInstructionEligibilityIndicator);
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
    NoDerivativeInstrumentParties() : FIX::Group(1292,1293,FIX::message_order(1293,1294,1295,2377,1296,0)) {}
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyID);
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyIDSource);
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyRole);
      FIELD_SET(*this, FIX::DerivativeInstrumentPartyRoleQualifier);
      FIELD_SET(*this, FIX::NoDerivativeInstrumentPartySubIDs);
      class NoDerivativeInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoDerivativeInstrumentPartySubIDs() : FIX::Group(1296,1297,FIX::message_order(1297,1298,0)) {}
        FIELD_SET(*this, FIX::DerivativeInstrumentPartySubID);
        FIELD_SET(*this, FIX::DerivativeInstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::CurrencyCodeSource);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
