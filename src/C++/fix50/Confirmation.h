#ifndef FIX50_CONFIRMATION_H
#define FIX50_CONFIRMATION_H

#include "Message.h"

namespace FIX50
{

  class Confirmation : public Message
  {
  public:
    Confirmation() : Message(MsgType()) {}
    Confirmation(const FIX::Message& m) : Message(m) {}
    Confirmation(const Message& m) : Message(m) {}
    Confirmation(const Confirmation&) = default;
    Confirmation(Confirmation&&) = default;
    Confirmation& operator=(const Confirmation&) = default;
    Confirmation& operator=(Confirmation&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AK"); }

    Confirmation(
      const FIX::ConfirmID& aConfirmID,
      const FIX::ConfirmTransType& aConfirmTransType,
      const FIX::ConfirmType& aConfirmType,
      const FIX::ConfirmStatus& aConfirmStatus,
      const FIX::TransactTime& aTransactTime,
      const FIX::TradeDate& aTradeDate,
      const FIX::AllocQty& aAllocQty,
      const FIX::Side& aSide,
      const FIX::AllocAccount& aAllocAccount,
      const FIX::AvgPx& aAvgPx,
      const FIX::GrossTradeAmt& aGrossTradeAmt,
      const FIX::NetMoney& aNetMoney )
    : Message(MsgType())
    {
      set(aConfirmID);
      set(aConfirmTransType);
      set(aConfirmType);
      set(aConfirmStatus);
      set(aTransactTime);
      set(aTradeDate);
      set(aAllocQty);
      set(aSide);
      set(aAllocAccount);
      set(aAvgPx);
      set(aGrossTradeAmt);
      set(aNetMoney);
    }

    FIELD_SET(*this, FIX::ConfirmID);
    FIELD_SET(*this, FIX::ConfirmRefID);
    FIELD_SET(*this, FIX::ConfirmReqID);
    FIELD_SET(*this, FIX::ConfirmTransType);
    FIELD_SET(*this, FIX::ConfirmType);
    FIELD_SET(*this, FIX::CopyMsgIndicator);
    FIELD_SET(*this, FIX::LegalConfirm);
    FIELD_SET(*this, FIX::ConfirmStatus);
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
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,37,198,526,66,756,38,799,800,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::SecondaryOrderID);
      FIELD_SET(*this, FIX::SecondaryClOrdID);
      FIELD_SET(*this, FIX::ListID);
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
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::OrderAvgPx);
      FIELD_SET(*this, FIX::OrderBookingQty);
    };
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::SecondaryAllocID);
    FIELD_SET(*this, FIX::IndividualAllocID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::TradeDate);
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
    FIELD_SET(*this, FIX::NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,999,1001,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,1017,566,0)) {}
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
    };
    FIELD_SET(*this, FIX::YieldType);
    FIELD_SET(*this, FIX::Yield);
    FIELD_SET(*this, FIX::YieldCalcDate);
    FIELD_SET(*this, FIX::YieldRedemptionDate);
    FIELD_SET(*this, FIX::YieldRedemptionPrice);
    FIELD_SET(*this, FIX::YieldRedemptionPriceType);
    FIELD_SET(*this, FIX::AllocQty);
    FIELD_SET(*this, FIX::QtyType);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::NoCapacities);
    class NoCapacities: public FIX::Group
    {
    public:
    NoCapacities() : FIX::Group(862,528,FIX::message_order(528,529,863,0)) {}
      FIELD_SET(*this, FIX::OrderCapacity);
      FIELD_SET(*this, FIX::OrderRestrictions);
      FIELD_SET(*this, FIX::OrderCapacityQty);
    };
    FIELD_SET(*this, FIX::AllocAccount);
    FIELD_SET(*this, FIX::AllocAcctIDSource);
    FIELD_SET(*this, FIX::AllocAccountType);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::AvgPxPrecision);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::AvgParPx);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::BenchmarkPrice);
    FIELD_SET(*this, FIX::BenchmarkPriceType);
    FIELD_SET(*this, FIX::BenchmarkSecurityID);
    FIELD_SET(*this, FIX::BenchmarkSecurityIDSource);
    FIELD_SET(*this, FIX::ReportedPx);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::ProcessCode);
    FIELD_SET(*this, FIX::GrossTradeAmt);
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
    FIELD_SET(*this, FIX::MaturityNetMoney);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::SettlCurrFxRate);
    FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
    FIELD_SET(*this, FIX::SettlType);
    FIELD_SET(*this, FIX::SettlDate);
    FIELD_SET(*this, FIX::SettlDeliveryType);
    FIELD_SET(*this, FIX::StandInstDbType);
    FIELD_SET(*this, FIX::StandInstDbName);
    FIELD_SET(*this, FIX::StandInstDbID);
    FIELD_SET(*this, FIX::NoDlvyInst);
    class NoDlvyInst: public FIX::Group
    {
    public:
    NoDlvyInst() : FIX::Group(85,165,FIX::message_order(165,787,781,0)) {}
      FIELD_SET(*this, FIX::SettlInstSource);
      FIELD_SET(*this, FIX::DlvyInstType);
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
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::CommCurrency);
    FIELD_SET(*this, FIX::FundRenewWaiv);
    FIELD_SET(*this, FIX::SharedCommission);
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
  };

}

#endif
