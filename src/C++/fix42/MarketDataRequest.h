#ifndef FIX42_MARKETDATAREQUEST_H
#define FIX42_MARKETDATAREQUEST_H

#include "Message.h"

namespace FIX42
{

  class MarketDataRequest : public Message
  {
  public:
    MarketDataRequest() : Message(MsgType()) {}
    MarketDataRequest(const FIX::Message& m) : Message(m) {}
    MarketDataRequest(const Message& m) : Message(m) {}
    MarketDataRequest(const MarketDataRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("V"); }

    MarketDataRequest(
      const FIX::MDReqID& aMDReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType,
      const FIX::MarketDepth& aMarketDepth )
    : Message(MsgType())
    {
      set(aMDReqID);
      set(aSubscriptionRequestType);
      set(aMarketDepth);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketDepth);
    FIELD_SET(*this, FIX::MDUpdateType);
    FIELD_SET(*this, FIX::AggregatedBook);
    FIELD_SET(*this, FIX::NoMDEntryTypes);
    class NoMDEntryTypes: public FIX::Group
    {
    public:
    NoMDEntryTypes() : FIX::Group(267,269,FIX::message_order(269,0)) {}
      FIELD_SET(*this, FIX::MDEntryType);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,336,0)) {}
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
      FIELD_SET(*this, FIX::TradingSessionID);
    };
  };

}

#endif
