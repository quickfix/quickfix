#ifndef FIX40_NEWORDERLIST_H
#define FIX40_NEWORDERLIST_H

#include "Message.h"

namespace FIX40
{

  class NewOrderList : public Message
  {
  public:
    NewOrderList() : Message(MsgType()) {}
    NewOrderList(const FIX::Message& m) : Message(m) {}
    NewOrderList(const Message& m) : Message(m) {}
    NewOrderList(const NewOrderList& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("E"); }

    NewOrderList(
      const FIX::ListID& aListID,
      const FIX::ListSeqNo& aListSeqNo,
      const FIX::ListNoOrds& aListNoOrds,
      const FIX::ClOrdID& aClOrdID,
      const FIX::HandlInst& aHandlInst,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::OrdType& aOrdType )
    : Message(MsgType())
    {
      set(aListID);
      set(aListSeqNo);
      set(aListNoOrds);
      set(aClOrdID);
      set(aHandlInst);
      set(aSymbol);
      set(aSide);
      set(aOrderQty);
      set(aOrdType);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::ListSeqNo);
    FIELD_SET(*this, FIX::ListNoOrds);
    FIELD_SET(*this, FIX::ListExecInst);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::ProcessCode);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::PrevClosePx);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::LocateReqd);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
