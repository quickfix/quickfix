#ifndef FIX50_NEWORDERLIST_H
#define FIX50_NEWORDERLIST_H

#include "Message.h"

namespace FIX50
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
      const FIX::BidType& aBidType,
      const FIX::TotNoOrders& aTotNoOrders )
    : Message(MsgType())
    {
      set(aListID);
      set(aBidType);
      set(aTotNoOrders);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::ProgRptReqs);
    FIELD_SET(*this, FIX::BidType);
    FIELD_SET(*this, FIX::ProgPeriodInterval);
    FIELD_SET(*this, FIX::CancellationRights);
    FIELD_SET(*this, FIX::MoneyLaunderingStatus);
    FIELD_SET(*this, FIX::RegistID);
    FIELD_SET(*this, FIX::ListExecInstType);
    FIELD_SET(*this, FIX::ListExecInst);
    FIELD_SET(*this, FIX::EncodedListExecInstLen);
    FIELD_SET(*this, FIX::EncodedListExecInst);
    FIELD_SET(*this, FIX::AllowableOneSidednessPct);
    FIELD_SET(*this, FIX::AllowableOneSidednessValue);
    FIELD_SET(*this, FIX::AllowableOneSidednessCurr);
    FIELD_SET(*this, FIX::TotNoOrders);
    FIELD_SET(*this, FIX::LastFragment);
