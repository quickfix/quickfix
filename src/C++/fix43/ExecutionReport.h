#ifndef FIX43_EXECUTIONREPORT_H
#define FIX43_EXECUTIONREPORT_H

#include "Message.h"

namespace FIX43
{

  class ExecutionReport : public Message
  {
  public:
    ExecutionReport() : Message(MsgType()) {}
    ExecutionReport(const FIX::Message& m) : Message(m) {}
    ExecutionReport(const Message& m) : Message(m) {}
    ExecutionReport(const ExecutionReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("8"); }

    ExecutionReport(
      const FIX::OrderID& aOrderID,
      const FIX::ExecID& aExecID,
      const FIX::ExecType& aExecType,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::Side& aSide,
      const FIX::LeavesQty& aLeavesQty,
      const FIX::CumQty& aCumQty,
      const FIX::AvgPx& aAvgPx )
    : Message(MsgType())
    {
      set(aOrderID);
      set(aExecID);
      set(aExecType);
      set(aOrdStatus);
      set(aSide);
      set(aLeavesQty);
      set(aCumQty);
      set(aAvgPx);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::SecondaryClOrdID);
    FIELD_SET(*this, FIX::SecondaryExecID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClOrdLinkID);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,523,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartySubID);
    };
    FIELD_SET(*this, FIX::TradeOriginationDate);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CrossID);
    FIELD_SET(*this, FIX::OrigCrossID);
    FIELD_SET(*this, FIX::CrossType);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::ExecRefID);
    FIELD_SET(*this, FIX::ExecType);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::WorkingIndicator);
    FIELD_SET(*this, FIX::OrdRejReason);
    FIELD_SET(*this, FIX::ExecRestatementReason);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AccountType);
    FIELD_SET(*this, FIX::DayBookingInst);
    FIELD_SET(*this, FIX::BookingUnit);
    FIELD_SET(*this, FIX::PreallocMethod);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::CashMargin);
    FIELD_SET(*this, FIX::ClearingFeeIndicator);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::SecurityIDSource);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::CFICode);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDate);
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
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::NoSecurityAltID);
    class NoSecurityAltID: public FIX::Group
    {
    public:
    NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
      FIELD_SET(*this, FIX::SecurityAltID);
      FIELD_SET(*this, FIX::SecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::NoStipulations);
    class NoStipulations: public FIX::Group
    {
    public:
    NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
      FIELD_SET(*this, FIX::StipulationType);
      FIELD_SET(*this, FIX::StipulationValue);
    };
    FIELD_SET(*this, FIX::QuantityType);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::OrderPercent);
    FIELD_SET(*this, FIX::RoundingDirection);
    FIELD_SET(*this, FIX::RoundingModulus);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::PegDifference);
    FIELD_SET(*this, FIX::DiscretionInst);
    FIELD_SET(*this, FIX::DiscretionOffset);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::SolicitedFlag);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::ExpireDate);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::OrderCapacity);
    FIELD_SET(*this, FIX::OrderRestrictions);
    FIELD_SET(*this, FIX::CustOrderCapacity);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::LastQty);
    FIELD_SET(*this, FIX::UnderlyingLastQty);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::UnderlyingLastPx);
    FIELD_SET(*this, FIX::LastSpotRate);
    FIELD_SET(*this, FIX::LastForwardPoints);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::LastCapacity);
    FIELD_SET(*this, FIX::LeavesQty);
    FIELD_SET(*this, FIX::CumQty);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::DayOrderQty);
    FIELD_SET(*this, FIX::DayCumQty);
    FIELD_SET(*this, FIX::DayAvgPx);
    FIELD_SET(*this, FIX::GTBookingInst);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ReportToExch);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::CommCurrency);
    FIELD_SET(*this, FIX::FundRenewWaiv);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::YieldType);
    FIELD_SET(*this, FIX::Yield);
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET(*this, FIX::NumDaysInterest);
    FIELD_SET(*this, FIX::ExDate);
    FIELD_SET(*this, FIX::AccruedInterestRate);
    FIELD_SET(*this, FIX::AccruedInterestAmt);
    FIELD_SET(*this, FIX::TradedFlatSwitch);
    FIELD_SET(*this, FIX::BasisFeatureDate);
    FIELD_SET(*this, FIX::BasisFeaturePrice);
    FIELD_SET(*this, FIX::Concession);
    FIELD_SET(*this, FIX::TotalTakedown);
    FIELD_SET(*this, FIX::NetMoney);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::SettlCurrFxRate);
    FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::PositionEffect);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::LastForwardPoints2);
    FIELD_SET(*this, FIX::MultiLegReportingType);
    FIELD_SET(*this, FIX::CancellationRights);
    FIELD_SET(*this, FIX::MoneyLaunderingStatus);
    FIELD_SET(*this, FIX::RegistID);
    FIELD_SET(*this, FIX::Designation);
    FIELD_SET(*this, FIX::TransBkdTime);
    FIELD_SET(*this, FIX::ExecValuationPoint);
    FIELD_SET(*this, FIX::ExecPriceType);
    FIELD_SET(*this, FIX::ExecPriceAdjustment);
    FIELD_SET(*this, FIX::PriorityIndicator);
    FIELD_SET(*this, FIX::PriceImprovement);
    FIELD_SET(*this, FIX::NoContraBrokers);
    class NoContraBrokers: public FIX::Group
    {
    public:
    NoContraBrokers() : FIX::Group(382,375,FIX::message_order(375,337,437,438,655,0)) {}
      FIELD_SET(*this, FIX::ContraBroker);
      FIELD_SET(*this, FIX::ContraTrader);
      FIELD_SET(*this, FIX::ContraTradeQty);
      FIELD_SET(*this, FIX::ContraTradeTime);
      FIELD_SET(*this, FIX::ContraLegRefID);
    };
    FIELD_SET(*this, FIX::NoContAmts);
    class NoContAmts: public FIX::Group
    {
    public:
    NoContAmts() : FIX::Group(518,519,FIX::message_order(519,520,521,0)) {}
      FIELD_SET(*this, FIX::ContAmtType);
      FIELD_SET(*this, FIX::ContAmtValue);
      FIELD_SET(*this, FIX::ContAmtCurr);
    };
    FIELD_SET(*this, FIX::NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,604,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,564,565,539,654,566,587,588,637,0)) {}
      FIELD_SET(*this, FIX::LegSymbol);
      FIELD_SET(*this, FIX::LegSymbolSfx);
      FIELD_SET(*this, FIX::LegSecurityID);
      FIELD_SET(*this, FIX::LegSecurityIDSource);
      FIELD_SET(*this, FIX::LegProduct);
      FIELD_SET(*this, FIX::LegCFICode);
      FIELD_SET(*this, FIX::LegSecurityType);
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
      FIELD_SET(*this, FIX::LegOptAttribute);
      FIELD_SET(*this, FIX::LegContractMultiplier);
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
      FIELD_SET(*this, FIX::NoLegSecurityAltID);
      class NoLegSecurityAltID: public FIX::Group
      {
      public:
      NoLegSecurityAltID() : FIX::Group(604,605,FIX::message_order(605,606,0)) {}
        FIELD_SET(*this, FIX::LegSecurityAltID);
        FIELD_SET(*this, FIX::LegSecurityAltIDSource);
      };
      FIELD_SET(*this, FIX::LegPositionEffect);
      FIELD_SET(*this, FIX::LegCoveredOrUncovered);
      FIELD_SET(*this, FIX::NoNestedPartyIDs);
      class NoNestedPartyIDs: public FIX::Group
      {
      public:
      NoNestedPartyIDs() : FIX::Group(539,524,FIX::message_order(524,525,538,545,0)) {}
        FIELD_SET(*this, FIX::NestedPartyID);
        FIELD_SET(*this, FIX::NestedPartyIDSource);
        FIELD_SET(*this, FIX::NestedPartyRole);
        FIELD_SET(*this, FIX::NestedPartySubID);
      };
      FIELD_SET(*this, FIX::LegRefID);
      FIELD_SET(*this, FIX::LegPrice);
      FIELD_SET(*this, FIX::LegSettlmntTyp);
      FIELD_SET(*this, FIX::LegFutSettDate);
      FIELD_SET(*this, FIX::LegLastPx);
    };
  };

}

#endif
