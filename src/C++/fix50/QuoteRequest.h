#ifndef FIX50_QUOTEREQUEST_H
#define FIX50_QUOTEREQUEST_H

#include "Message.h"

namespace FIX50
{

  class QuoteRequest : public Message
  {
  public:
    QuoteRequest() : Message(MsgType()) {}
    QuoteRequest(const FIX::Message& m) : Message(m) {}
    QuoteRequest(const Message& m) : Message(m) {}
    QuoteRequest(const QuoteRequest&) = default;
    QuoteRequest(QuoteRequest&&) = default;
    QuoteRequest& operator=(const QuoteRequest&) = default;
    QuoteRequest& operator=(QuoteRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("R"); }

    QuoteRequest(
      const FIX::QuoteReqID& aQuoteReqID )
    : Message(MsgType())
    {
      set(aQuoteReqID);
    }

    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::RFQReqID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrderCapacity);
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,65,48,22,460,461,167,762,200,541,1079,201,966,1049,965,224,225,239,226,227,228,255,543,470,471,472,240,202,947,967,968,206,231,969,996,997,223,207,970,971,106,348,349,107,350,351,691,667,875,876,873,874,913,914,915,918,788,916,917,919,898,711,140,303,537,336,625,229,54,854,38,152,516,468,469,63,64,193,192,15,232,1,660,581,555,735,692,40,62,126,60,218,220,221,222,662,663,699,761,423,44,640,235,236,701,696,697,698,453,0)) {}
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
      FIELD_SET(*this, FIX::CFICode);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::SecuritySubType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDate);
      FIELD_SET(*this, FIX::MaturityTime);
      FIELD_SET(*this, FIX::PutOrCall);
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
      FIELD_SET(*this, FIX::UnitofMeasure);
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
      FIELD_SET(*this, FIX::Pool);
      FIELD_SET(*this, FIX::ContractSettlMonth);
      FIELD_SET(*this, FIX::CPProgram);
      FIELD_SET(*this, FIX::CPRegType);
      FIELD_SET(*this, FIX::NoEvents);
      class NoEvents: public FIX::Group
      {
      public:
      NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,867,868,0)) {}
        FIELD_SET(*this, FIX::EventType);
        FIELD_SET(*this, FIX::EventDate);
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
      FIELD_SET(*this, FIX::AgreementDesc);
      FIELD_SET(*this, FIX::AgreementID);
      FIELD_SET(*this, FIX::AgreementDate);
      FIELD_SET(*this, FIX::AgreementCurrency);
      FIELD_SET(*this, FIX::TerminationType);
      FIELD_SET(*this, FIX::StartDate);
      FIELD_SET(*this, FIX::EndDate);
      FIELD_SET(*this, FIX::DeliveryType);
      FIELD_SET(*this, FIX::MarginRatio);
      FIELD_SET(*this, FIX::NoUnderlyings);
      class NoUnderlyings: public FIX::Group
      {
      public:
      NoUnderlyings() : FIX::Group(711,311,FIX::message_order(311,312,309,305,462,463,310,763,313,542,315,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,998,1000,435,308,306,362,363,307,364,365,877,878,972,318,879,975,973,974,810,882,883,884,885,886,1044,1045,1046,1038,1039,0)) {}
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
        FIELD_SET(*this, FIX::UnderlyingPutOrCall);
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
        FIELD_SET(*this, FIX::UnderlyingUnitofMeasure);
        FIELD_SET(*this, FIX::UnderlyingTimeUnit);
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
      };
      FIELD_SET(*this, FIX::PrevClosePx);
      FIELD_SET(*this, FIX::QuoteRequestType);
      FIELD_SET(*this, FIX::QuoteType);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::TradeOriginationDate);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::QtyType);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::OrderPercent);
      FIELD_SET(*this, FIX::RoundingDirection);
      FIELD_SET(*this, FIX::RoundingModulus);
      FIELD_SET(*this, FIX::SettlType);
      FIELD_SET(*this, FIX::SettlDate);
      FIELD_SET(*this, FIX::SettlDate2);
      FIELD_SET(*this, FIX::OrderQty2);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::NoStipulations);
      class NoStipulations: public FIX::Group
      {
      public:
      NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
        FIELD_SET(*this, FIX::StipulationType);
        FIELD_SET(*this, FIX::StipulationValue);
      };
      FIELD_SET(*this, FIX::Account);
      FIELD_SET(*this, FIX::AcctIDSource);
      FIELD_SET(*this, FIX::AccountType);
      FIELD_SET(*this, FIX::NoLegs);
      class NoLegs: public FIX::Group
      {
      public:
      NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,999,1001,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,1017,566,1017,566,687,685,690,587,588,683,539,676,677,678,679,680,654,0)) {}
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
        FIELD_SET(*this, FIX::LegUnitofMeasure);
        FIELD_SET(*this, FIX::LegTimeUnit);
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
        FIELD_SET(*this, FIX::LegOptionRatio);
        FIELD_SET(*this, FIX::LegPrice);
        FIELD_SET(*this, FIX::LegOptionRatio);
        FIELD_SET(*this, FIX::LegPrice);
        FIELD_SET(*this, FIX::LegQty);
        FIELD_SET(*this, FIX::LegOrderQty);
        FIELD_SET(*this, FIX::LegSwapType);
        FIELD_SET(*this, FIX::LegSettlType);
        FIELD_SET(*this, FIX::LegSettlDate);
        FIELD_SET(*this, FIX::NoLegStipulations);
        class NoLegStipulations: public FIX::Group
        {
        public:
        NoLegStipulations() : FIX::Group(683,688,FIX::message_order(688,689,0)) {}
          FIELD_SET(*this, FIX::LegStipulationType);
          FIELD_SET(*this, FIX::LegStipulationValue);
        };
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
        FIELD_SET(*this, FIX::LegBenchmarkCurveCurrency);
        FIELD_SET(*this, FIX::LegBenchmarkCurveName);
        FIELD_SET(*this, FIX::LegBenchmarkCurvePoint);
        FIELD_SET(*this, FIX::LegBenchmarkPrice);
        FIELD_SET(*this, FIX::LegBenchmarkPriceType);
        FIELD_SET(*this, FIX::LegRefID);
      };
      FIELD_SET(*this, FIX::NoQuoteQualifiers);
      class NoQuoteQualifiers: public FIX::Group
      {
      public:
      NoQuoteQualifiers() : FIX::Group(735,695,FIX::message_order(695,0)) {}
        FIELD_SET(*this, FIX::QuoteQualifier);
      };
      FIELD_SET(*this, FIX::QuotePriceType);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::ValidUntilTime);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::Spread);
      FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
      FIELD_SET(*this, FIX::BenchmarkCurveName);
      FIELD_SET(*this, FIX::BenchmarkCurvePoint);
      FIELD_SET(*this, FIX::BenchmarkPrice);
      FIELD_SET(*this, FIX::BenchmarkPriceType);
      FIELD_SET(*this, FIX::BenchmarkSecurityID);
      FIELD_SET(*this, FIX::BenchmarkSecurityIDSource);
      FIELD_SET(*this, FIX::PriceType);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::Price2);
      FIELD_SET(*this, FIX::YieldType);
      FIELD_SET(*this, FIX::Yield);
      FIELD_SET(*this, FIX::YieldCalcDate);
      FIELD_SET(*this, FIX::YieldRedemptionDate);
      FIELD_SET(*this, FIX::YieldRedemptionPrice);
      FIELD_SET(*this, FIX::YieldRedemptionPriceType);
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
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
