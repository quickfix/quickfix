#ifndef FIX50SP2_ACCOUNTSUMMARYREPORT_H
#define FIX50SP2_ACCOUNTSUMMARYREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class AccountSummaryReport : public Message
  {
  public:
    AccountSummaryReport() : Message(MsgType()) {}
    AccountSummaryReport(const FIX::Message& m) : Message(m) {}
    AccountSummaryReport(const Message& m) : Message(m) {}
    AccountSummaryReport(const AccountSummaryReport&) = default;
    AccountSummaryReport(AccountSummaryReport&&) = default;
    AccountSummaryReport& operator=(const AccountSummaryReport&) = default;
    AccountSummaryReport& operator=(AccountSummaryReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CQ"); }

    AccountSummaryReport(
      const FIX::AccountSummaryReportID& aAccountSummaryReportID,
      const FIX::ClearingBusinessDate& aClearingBusinessDate )
    : Message(MsgType())
    {
      set(aAccountSummaryReportID);
      set(aClearingBusinessDate);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::AccountSummaryReportID);
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TotalNetValue);
    FIELD_SET(*this, FIX::MarginExcess);
    FIELD_SET(*this, FIX::SettlSessID);
    FIELD_SET(*this, FIX::SettlSessSubID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::NoSettlementAmounts);
    class NoSettlementAmounts: public FIX::Group
    {
    public:
    NoSettlementAmounts() : FIX::Group(1700,1701,FIX::message_order(1701,1702,2903,0)) {}
      FIELD_SET(*this, FIX::SettlementAmount);
      FIELD_SET(*this, FIX::SettlementAmountCurrency);
      FIELD_SET(*this, FIX::SettlementAmountCurrencyCodeSource);
    };
    FIELD_SET(*this, FIX::NoMarginAmt);
    class NoMarginAmt: public FIX::Group
    {
    public:
    NoMarginAmt() : FIX::Group(1643,1645,FIX::message_order(1645,1644,1646,2088,2089,1714,1715,2851,0)) {}
      FIELD_SET(*this, FIX::MarginAmt);
      FIELD_SET(*this, FIX::MarginAmtType);
      FIELD_SET(*this, FIX::MarginAmtCcy);
      FIELD_SET(*this, FIX::MarginAmtFXRate);
      FIELD_SET(*this, FIX::MarginAmtFXRateCalc);
      FIELD_SET(*this, FIX::MarginAmountMarketSegmentID);
      FIELD_SET(*this, FIX::MarginAmountMarketID);
      FIELD_SET(*this, FIX::MarginDirection);
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
    FIELD_SET(*this, FIX::NoCollateralAmounts);
    class NoCollateralAmounts: public FIX::Group
    {
    public:
    NoCollateralAmounts() : FIX::Group(1703,1704,FIX::message_order(1704,1705,2929,2632,2090,2091,1706,2092,2093,1902,2350,2690,2689,2840,2845,2841,0)) {}
      FIELD_SET(*this, FIX::CurrentCollateralAmount);
      FIELD_SET(*this, FIX::CollateralCurrency);
      FIELD_SET(*this, FIX::CollateralCurrencyCodeSource);
      FIELD_SET(*this, FIX::CollateralAmountType);
      FIELD_SET(*this, FIX::CollateralFXRate);
      FIELD_SET(*this, FIX::CollateralFXRateCalc);
      FIELD_SET(*this, FIX::CollateralType);
      FIELD_SET(*this, FIX::CollateralAmountMarketSegmentID);
      FIELD_SET(*this, FIX::CollateralAmountMarketID);
      FIELD_SET(*this, FIX::HaircutIndicator);
      FIELD_SET(*this, FIX::CollateralPortfolioID);
      FIELD_SET(*this, FIX::CollateralPercentOverage);
      FIELD_SET(*this, FIX::CollateralMarketPrice);
      FIELD_SET(*this, FIX::CollateralReinvestmentRate);
      FIELD_SET(*this, FIX::NoCollateralReinvestments);
      class NoCollateralReinvestments: public FIX::Group
      {
      public:
      NoCollateralReinvestments() : FIX::Group(2845,2844,FIX::message_order(2844,2842,2843,2931,0)) {}
        FIELD_SET(*this, FIX::CollateralReinvestmentType);
        FIELD_SET(*this, FIX::CollateralReinvestmentAmount);
        FIELD_SET(*this, FIX::CollateralReinvestmentCurrency);
        FIELD_SET(*this, FIX::CollateralReinvestmentCurrencyCodeSource);
      };
      FIELD_SET(*this, FIX::UnderlyingRefID);
    };
    FIELD_SET(*this, FIX::NoPayCollects);
    class NoPayCollects: public FIX::Group
    {
    public:
    NoPayCollects() : FIX::Group(1707,1708,FIX::message_order(1708,1709,2955,2094,2095,1710,1711,1712,1713,0)) {}
      FIELD_SET(*this, FIX::PayCollectType);
      FIELD_SET(*this, FIX::PayCollectCurrency);
      FIELD_SET(*this, FIX::PayCollectCurrencyCodeSource);
      FIELD_SET(*this, FIX::PayCollectFXRate);
      FIELD_SET(*this, FIX::PayCollectFXRateCalc);
      FIELD_SET(*this, FIX::PayAmount);
      FIELD_SET(*this, FIX::CollectAmount);
      FIELD_SET(*this, FIX::PayCollectMarketSegmentID);
      FIELD_SET(*this, FIX::PayCollectMarketID);
    };
    FIELD_SET(*this, FIX::NoPosAmt);
    class NoPosAmt: public FIX::Group
    {
    public:
    NoPosAmt() : FIX::Group(753,707,FIX::message_order(707,708,2096,1055,2937,2097,2098,1585,2099,2100,2876,2877,0)) {}
      FIELD_SET(*this, FIX::PosAmtType);
      FIELD_SET(*this, FIX::PosAmt);
      FIELD_SET(*this, FIX::PosAmtStreamDesc);
      FIELD_SET(*this, FIX::PositionCurrency);
      FIELD_SET(*this, FIX::PositionCurrencyCodeSource);
      FIELD_SET(*this, FIX::PositionFXRate);
      FIELD_SET(*this, FIX::PositionFXRateCalc);
      FIELD_SET(*this, FIX::PosAmtReason);
      FIELD_SET(*this, FIX::PosAmtMarketSegmentID);
      FIELD_SET(*this, FIX::PosAmtMarketID);
      FIELD_SET(*this, FIX::PosAmtPrice);
      FIELD_SET(*this, FIX::PosAmtPriceType);
    };
  };

}

#endif
