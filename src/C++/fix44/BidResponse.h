#ifndef FIX44_BIDRESPONSE_H
#define FIX44_BIDRESPONSE_H

#include "Message.h"

namespace FIX44
{

  class BidResponse : public Message
  {
  public:
    BidResponse() : Message(MsgType()) {}
    BidResponse(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("l"); }

    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::NoBidComponents);
    class NoBidComponents: public FIX::Group
    {
    public:
    NoBidComponents() : FIX::Group(420,66,FIX::message_order(38,152,516,468,469,66,421,54,44,423,406,430,63,64,336,625,58,354,355,0)) {}
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::OrderPercent);
      FIELD_SET(*this, FIX::RoundingDirection);
      FIELD_SET(*this, FIX::RoundingModulus);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::Country);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::PriceType);
      FIELD_SET(*this, FIX::FairValue);
      FIELD_SET(*this, FIX::NetGrossInd);
      FIELD_SET(*this, FIX::SettlType);
      FIELD_SET(*this, FIX::SettlDate);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
