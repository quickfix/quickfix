#ifndef FIX42_EXECUTIONREPORT_H
#define FIX42_EXECUTIONREPORT_H

#include "Message.h"

namespace FIX42
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
      const FIX::ExecTransType& aExecTransType,
      const FIX::ExecType& aExecType,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::LeavesQty& aLeavesQty,
      const FIX::CumQty& aCumQty,
      const FIX::AvgPx& aAvgPx )
    : Message(MsgType())
    {
      set(aOrderID);
      set(aExecID);
      set(aExecTransType);
      set(aExecType);
      set(aOrdStatus);
      set(aSymbol);
      set(aSide);
      set(aLeavesQty);
      set(aCumQty);
      set(aAvgPx);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::ExecTransType);
    FIELD_SET(*this, FIX::ExecRefID);
    FIELD_SET(*this, FIX::ExecType);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::OrdRejReason);
    FIELD_SET(*this, FIX::ExecRestatementReason);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
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
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::OrdType);
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
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::LastSpotRate);
    FIELD_SET(*this, FIX::LastForwardPoints);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
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
    FIELD_SET(*this, FIX::GrossTradeAmt);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::SettlCurrFxRate);
    FIELD_SET(*this, FIX::SettlCurrFxRateCalc);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::FutSettDate2);
    FIELD_SET(*this, FIX::OrderQty2);
    FIELD_SET(*this, FIX::ClearingFirm);
    FIELD_SET(*this, FIX::ClearingAccount);
    FIELD_SET(*this, FIX::MultiLegReportingType);
    FIELD_SET(*this, FIX::NoContraBrokers);
    class NoContraBrokers: public FIX::Group
    {
    public:
    NoContraBrokers() : FIX::Group(382,375,FIX::message_order(375,337,437,438,0)) {}
      FIELD_SET(*this, FIX::ContraBroker);
      FIELD_SET(*this, FIX::ContraTrader);
      FIELD_SET(*this, FIX::ContraTradeQty);
      FIELD_SET(*this, FIX::ContraTradeTime);
    };
  };

}

#endif
