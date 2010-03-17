#ifndef FIX40_ALLOCATION_H
#define FIX40_ALLOCATION_H

#include "Message.h"

namespace FIX40
{

  class Allocation : public Message
  {
  public:
    Allocation() : Message(MsgType()) {}
    Allocation(const FIX::Message& m) : Message(m) {}
    Allocation(const Message& m) : Message(m) {}
    Allocation(const Allocation& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("J"); }

    Allocation(
      const FIX::AllocID& aAllocID,
      const FIX::AllocTransType& aAllocTransType,
      const FIX::Side& aSide,
      const FIX::Symbol& aSymbol,
      const FIX::Shares& aShares,
      const FIX::AvgPx& aAvgPx,
      const FIX::TradeDate& aTradeDate )
    : Message(MsgType())
    {
      set(aAllocID);
      set(aAllocTransType);
      set(aSide);
      set(aSymbol);
      set(aShares);
      set(aAvgPx);
      set(aTradeDate);
    }

    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::AllocTransType);
    FIELD_SET(*this, FIX::RefAllocID);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::AvgPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::AvgPrxPrecision);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::NetMoney);
    FIELD_SET(*this, FIX::SettlCurrAmt);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,37,66,105,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::WaveNo);
    };
    FIELD_SET(*this, FIX::NoExecs);
    class NoExecs: public FIX::Group
    {
    public:
    NoExecs() : FIX::Group(124,17,FIX::message_order(17,32,31,30,0)) {}
      FIELD_SET(*this, FIX::ExecID);
      FIELD_SET(*this, FIX::LastShares);
      FIELD_SET(*this, FIX::LastPx);
      FIELD_SET(*this, FIX::LastMkt);
    };
    FIELD_SET(*this, FIX::NoMiscFees);
    class NoMiscFees: public FIX::Group
    {
    public:
    NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,138,139,0)) {}
      FIELD_SET(*this, FIX::MiscFeeAmt);
      FIELD_SET(*this, FIX::MiscFeeCurr);
      FIELD_SET(*this, FIX::MiscFeeType);
    };
    FIELD_SET(*this, FIX::NoAllocs);
    class NoAllocs: public FIX::Group
    {
    public:
    NoAllocs() : FIX::Group(78,79,FIX::message_order(79,80,81,76,109,12,13,85,92,86,0)) {}
      FIELD_SET(*this, FIX::AllocAccount);
      FIELD_SET(*this, FIX::AllocShares);
      FIELD_SET(*this, FIX::ProcessCode);
      FIELD_SET(*this, FIX::ExecBroker);
      FIELD_SET(*this, FIX::ClientID);
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET(*this, FIX::NoDlvyInst);
      FIELD_SET(*this, FIX::BrokerOfCredit);
      FIELD_SET(*this, FIX::DlvyInst);
    };
  };

}

#endif
