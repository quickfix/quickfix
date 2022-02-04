#ifndef FIX50SP2_MARKETDEFINITIONREQUEST_H
#define FIX50SP2_MARKETDEFINITIONREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class MarketDefinitionRequest : public Message
  {
  public:
    MarketDefinitionRequest() : Message(MsgType()) {}
    MarketDefinitionRequest(const FIX::Message& m) : Message(m) {}
    MarketDefinitionRequest(const Message& m) : Message(m) {}
    MarketDefinitionRequest(const MarketDefinitionRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BT"); }

    MarketDefinitionRequest(
      const FIX::MarketReqID& aMarketReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aMarketReqID);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::MarketReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::ParentMktSegmID);
  };

}

#endif
