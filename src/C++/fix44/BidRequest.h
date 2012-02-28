#ifndef FIX44_BIDREQUEST_H
#define FIX44_BIDREQUEST_H

#include "Message.h"

namespace FIX44
{

  class BidRequest : public Message
  {
  public:
    BidRequest() : Message(MsgType()) {}
    BidRequest(const FIX::Message& m) : Message(m) {}
    BidRequest(const Message& m) : Message(m) {}
    BidRequest(const BidRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("k"); }

    BidRequest(
      const FIX::ClientBidID& aClientBidID,
      const FIX::BidRequestTransType& aBidRequestTransType,
      const FIX::TotNoRelatedSym& aTotNoRelatedSym,
      const FIX::BidType& aBidType,
      const FIX::BidTradeType& aBidTradeType,
      const FIX::BasisPxType& aBasisPxType )
    : Message(MsgType())
    {
      set(aClientBidID);
      set(aBidRequestTransType);
      set(aTotNoRelatedSym);
      set(aBidType);
      set(aBidTradeType);
      set(aBasisPxType);
    }

    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::BidRequestTransType);
    FIELD_SET(*this, FIX::ListName);
    FIELD_SET(*this, FIX::TotNoRelatedSym);
    FIELD_SET(*this, FIX::BidType);
    FIELD_SET(*this, FIX::NumTickets);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::SideValue1);
    FIELD_SET(*this, FIX::SideValue2);
    FIELD_SET(*this, FIX::NoBidDescriptors);
    class NoBidDescriptors: public FIX::Group
    {
    public:
    NoBidDescriptors() : FIX::Group(398,399,FIX::message_order(399,400,401,404,441,402,403,405,406,407,408,0)) {}
      FIELD_SET(*this, FIX::BidDescriptorType);
      FIELD_SET(*this, FIX::BidDescriptor);
      FIELD_SET(*this, FIX::SideValueInd);
      FIELD_SET(*this, FIX::LiquidityValue);
      FIELD_SET(*this, FIX::LiquidityNumSecurities);
      FIELD_SET(*this, FIX::LiquidityPctLow);
      FIELD_SET(*this, FIX::LiquidityPctHigh);
      FIELD_SET(*this, FIX::EFPTrackingError);
      FIELD_SET(*this, FIX::FairValue);
      FIELD_SET(*this, FIX::OutsideIndexPct);
      FIELD_SET(*this, FIX::ValueOfFutures);
    };
    FIELD_SET(*this, FIX::NoBidComponents);
    class NoBidComponents: public FIX::Group
    {
    public:
    NoBidComponents() : FIX::Group(420,66,FIX::message_order(66,54,336,625,430,63,64,1,660,0)) {}
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::NetGrossInd);
      FIELD_SET(*this, FIX::SettlType);
      FIELD_SET(*this, FIX::SettlDate);
      FIELD_SET(*this, FIX::Account);
      FIELD_SET(*this, FIX::AcctIDSource);
    };
    FIELD_SET(*this, FIX::LiquidityIndType);
    FIELD_SET(*this, FIX::WtAverageLiquidity);
    FIELD_SET(*this, FIX::ExchangeForPhysical);
    FIELD_SET(*this, FIX::OutMainCntryUIndex);
    FIELD_SET(*this, FIX::CrossPercent);
    FIELD_SET(*this, FIX::ProgRptReqs);
    FIELD_SET(*this, FIX::ProgPeriodInterval);
    FIELD_SET(*this, FIX::IncTaxInd);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::NumBidders);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::BidTradeType);
    FIELD_SET(*this, FIX::BasisPxType);
    FIELD_SET(*this, FIX::StrikeTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
