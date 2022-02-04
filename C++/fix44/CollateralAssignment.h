#ifndef FIX44_COLLATERALASSIGNMENT_H
#define FIX44_COLLATERALASSIGNMENT_H

#include "Message.h"

namespace FIX44
{

  class CollateralAssignment : public Message
  {
  public:
    CollateralAssignment() : Message(MsgType()) {}
    CollateralAssignment(const FIX::Message& m) : Message(m) {}
    CollateralAssignment(const Message& m) : Message(m) {}
    CollateralAssignment(const CollateralAssignment& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AY"); }

    CollateralAssignment(
      const FIX::CollAsgnID& aCollAsgnID,
      const FIX::CollAsgnReason& aCollAsgnReason,
      const FIX::CollAsgnTransType& aCollAsgnTransType,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aCollAsgnID);
      set(aCollAsgnReason);
      set(aCollAsgnTransType);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::CollAsgnID);
    FIELD_SET(*this, FIX::CollReqID);
    FIELD_SET(*this, FIX::CollAsgnReason);
    FIELD_SET(*this, FIX::CollAsgnTransType);
    FIELD_SET(*this, FIX::CollAsgnRefID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ExpireTime);
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
    FIELD_SET(*this, FIX::AccountType);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::SecondaryClOrdID);
    FIELD_SET(*this, FIX::NoExecs);
    class NoExecs: public FIX::Group
    {
    public:
    NoExecs() : FIX::Group(124,17,FIX::message_order(17,0)) {}
      FIELD_SET(*this, FIX::ExecID);
    };
    FIELD_SET(*this, FIX::NoTrades);
    class NoTrades: public FIX::Group
    {
    public:
    NoTrades() : FIX::Group(897,571,FIX::message_order(571,818,0)) {}
      FIELD_SET(*this, FIX::TradeReportID);
      FIELD_SET(*this, FIX::SecondaryTradeReportID);
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
    FIELD_SET(*this, FIX::PutOrCall);
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
    FIELD_SET(*this, FIX::AgreementDesc);
    FIELD_SET(*this, FIX::AgreementID);
    FIELD_SET(*this, FIX::AgreementDate);
    FIELD_SET(*this, FIX::AgreementCurrency);
    FIELD_SET(*this, FIX::TerminationType);
    FIELD_SET(*this, FIX::StartDate);
    FIELD_SET(*this, FIX::EndDate);
    FIELD_SET(*this, FIX::DeliveryType);
    FIELD_SET(*this, FIX::MarginRatio);
    FIELD_SET(*this, FIX::SettlDate);
    FIELD_SET(*this, FIX::Quantity);
    FIELD_SET(*this, FIX::QtyType);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::NoLegs);
    class NoLegs: public FIX::Group
    {
    public:
    NoLegs() : FIX::Group(555,600,FIX::message_order(600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,0)) {}
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
    };
    FIELD_SET(*this, FIX::NoUnderlyings);
    class NoUnderlyings: public FIX::Group
    {
    public:
    NoUnderlyings() : FIX::Group(711,311,FIX::message_order(311,312,309,305,462,463,310,763,313,542,315,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,944,0)) {}
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
      FIELD_SET(*this, FIX::UnderlyingCurrency);
      FIELD_SET(*this, FIX::UnderlyingQty);
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
      FIELD_SET(*this, FIX::CollAction);
    };
    FIELD_SET(*this, FIX::MarginExcess);
    FIELD_SET(*this, FIX::TotalNetValue);
    FIELD_SET(*this, FIX::CashOutstanding);
    FIELD_SET(*this, FIX::NoTrdRegTimestamps);
    class NoTrdRegTimestamps: public FIX::Group
    {
    public:
    NoTrdRegTimestamps() : FIX::Group(768,769,FIX::message_order(769,770,771,0)) {}
      FIELD_SET(*this, FIX::TrdRegTimestamp);
      FIELD_SET(*this, FIX::TrdRegTimestampType);
      FIELD_SET(*this, FIX::TrdRegTimestampOrigin);
    };
    FIELD_SET(*this, FIX::Side);
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
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::PriceType);
    FIELD_SET(*this, FIX::AccruedInterestAmt);
    FIELD_SET(*this, FIX::EndAccruedInterestAmt);
    FIELD_SET(*this, FIX::StartCash);
    FIELD_SET(*this, FIX::EndCash);
    FIELD_SET(*this, FIX::Spread);
    FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
    FIELD_SET(*this, FIX::BenchmarkCurveName);
    FIELD_SET(*this, FIX::BenchmarkCurvePoint);
    FIELD_SET(*this, FIX::BenchmarkPrice);
    FIELD_SET(*this, FIX::BenchmarkPriceType);
    FIELD_SET(*this, FIX::BenchmarkSecurityID);
    FIELD_SET(*this, FIX::BenchmarkSecurityIDSource);
    FIELD_SET(*this, FIX::NoStipulations);
    class NoStipulations: public FIX::Group
    {
    public:
    NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
      FIELD_SET(*this, FIX::StipulationType);
      FIELD_SET(*this, FIX::StipulationValue);
    };
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
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SettlSessID);
    FIELD_SET(*this, FIX::SettlSessSubID);
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
