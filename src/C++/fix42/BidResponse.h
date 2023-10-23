#ifndef FIX42_BIDRESPONSE_H
#define FIX42_BIDRESPONSE_H

#include "Message.h"

namespace FIX42
{

  class BidResponse : public Message
  {
  public:
    BidResponse() : Message(MsgType()) {}
    BidResponse(const FIX::Message& m) : Message(m) {}
    BidResponse(const Message& m) : Message(m) {}
    BidResponse(const BidResponse&) = default;
    BidResponse(BidResponse&&) = default;
    BidResponse& operator=(const BidResponse&) = default;
    BidResponse& operator=(BidResponse&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("l"); }

    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::NoBidComponents);
    class NoBidComponents: public FIX::Group
    {
    public:
    NoBidComponents() : FIX::Group(420,12,FIX::message_order(12,13,66,421,54,44,423,406,430,63,64,336,58,354,355,0)) {}
      FIELD_SET(*this, FIX::Commission);
      FIELD_SET(*this, FIX::CommType);
      FIELD_SET(*this, FIX::ListID);
      FIELD_SET(*this, FIX::Country);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::PriceType);
      FIELD_SET(*this, FIX::FairValue);
      FIELD_SET(*this, FIX::NetGrossInd);
      FIELD_SET(*this, FIX::SettlmntTyp);
      FIELD_SET(*this, FIX::FutSettDate);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
