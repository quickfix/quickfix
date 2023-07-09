#ifndef FIX43_SETTLEMENTINSTRUCTIONS_H
#define FIX43_SETTLEMENTINSTRUCTIONS_H

#include "Message.h"

namespace FIX43
{

  class SettlementInstructions : public Message
  {
  public:
    SettlementInstructions() : Message(MsgType()) {}
    SettlementInstructions(const FIX::Message& m) : Message(m) {}
    SettlementInstructions(const Message& m) : Message(m) {}
    SettlementInstructions(const SettlementInstructions&) = default;
    SettlementInstructions(SettlementInstructions&&) = default;
    SettlementInstructions& operator=(const SettlementInstructions&) = default;
    SettlementInstructions& operator=(SettlementInstructions&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("T"); }

    SettlementInstructions(
      const FIX::SettlInstID& aSettlInstID,
      const FIX::SettlInstTransType& aSettlInstTransType,
      const FIX::SettlInstRefID& aSettlInstRefID,
      const FIX::SettlInstMode& aSettlInstMode,
      const FIX::SettlInstSource& aSettlInstSource,
      const FIX::AllocAccount& aAllocAccount,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aSettlInstID);
      set(aSettlInstTransType);
      set(aSettlInstRefID);
      set(aSettlInstMode);
      set(aSettlInstSource);
      set(aAllocAccount);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::SettlInstID);
    FIELD_SET(*this, FIX::SettlInstTransType);
    FIELD_SET(*this, FIX::SettlInstRefID);
    FIELD_SET(*this, FIX::SettlInstMode);
    FIELD_SET(*this, FIX::SettlInstSource);
    FIELD_SET(*this, FIX::AllocAccount);
    FIELD_SET(*this, FIX::IndividualAllocID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::TransactTime);
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
    FIELD_SET(*this, FIX::StandInstDbType);
    FIELD_SET(*this, FIX::StandInstDbName);
    FIELD_SET(*this, FIX::StandInstDbID);
    FIELD_SET(*this, FIX::SettlDeliveryType);
    FIELD_SET(*this, FIX::SettlDepositoryCode);
    FIELD_SET(*this, FIX::SettlBrkrCode);
    FIELD_SET(*this, FIX::SettlInstCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentName);
    FIELD_SET(*this, FIX::SecuritySettlAgentCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctNum);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactPhone);
    FIELD_SET(*this, FIX::CashSettlAgentName);
    FIELD_SET(*this, FIX::CashSettlAgentCode);
    FIELD_SET(*this, FIX::CashSettlAgentAcctNum);
    FIELD_SET(*this, FIX::CashSettlAgentAcctName);
    FIELD_SET(*this, FIX::CashSettlAgentContactName);
    FIELD_SET(*this, FIX::CashSettlAgentContactPhone);
    FIELD_SET(*this, FIX::PaymentMethod);
    FIELD_SET(*this, FIX::PaymentRef);
    FIELD_SET(*this, FIX::CardHolderName);
    FIELD_SET(*this, FIX::CardNumber);
    FIELD_SET(*this, FIX::CardStartDate);
    FIELD_SET(*this, FIX::CardExpDate);
    FIELD_SET(*this, FIX::CardIssNo);
    FIELD_SET(*this, FIX::PaymentDate);
    FIELD_SET(*this, FIX::PaymentRemitterID);
  };

}

#endif
