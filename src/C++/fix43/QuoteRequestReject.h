#ifndef FIX43_QUOTEREQUESTREJECT_H
#define FIX43_QUOTEREQUESTREJECT_H

#include "Message.h"

namespace FIX43
{

  class QuoteRequestReject : public Message
  {
  public:
    QuoteRequestReject() : Message(MsgType()) {}
    QuoteRequestReject(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AG"); }

    QuoteRequestReject(
      const FIX::QuoteReqID& aQuoteReqID,
      const FIX::QuoteRequestRejectReason& aQuoteRequestRejectReason )
    : Message(MsgType())
    {
      set(aQuoteReqID);
      set(aQuoteRequestRejectReason);
    }

    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::RFQReqID);
    FIELD_SET(*this, FIX::QuoteRequestRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,140,FIX::message_order(140,303,537,336,625,229,54,465,38,152,63,64,40,193,192,126,60,15,218,220,221,222,423,44,640,235,236,0)) {}
      FIELD_SET(*this, FIX::PrevClosePx);
      FIELD_SET(*this, FIX::QuoteRequestType);
      FIELD_SET(*this, FIX::QuoteType);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::TradingSessionSubID);
      FIELD_SET(*this, FIX::TradeOriginationDate);
      FIELD_SET(*this, FIX::NoStipulations);
      class NoStipulations: public FIX::Group
      {
      public:
      NoStipulations() : FIX::Group(232,233,FIX::message_order(233,234,0)) {}
        FIELD_SET(*this, FIX::StipulationType);
        FIELD_SET(*this, FIX::StipulationValue);
      };
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::QuantityType);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::SettlmntTyp);
      FIELD_SET(*this, FIX::FutSettDate);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::FutSettDate2);
      FIELD_SET(*this, FIX::OrderQty2);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::Spread);
      FIELD_SET(*this, FIX::BenchmarkCurveCurrency);
      FIELD_SET(*this, FIX::BenchmarkCurveName);
      FIELD_SET(*this, FIX::BenchmarkCurvePoint);
      FIELD_SET(*this, FIX::PriceType);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::Price2);
      FIELD_SET(*this, FIX::YieldType);
      FIELD_SET(*this, FIX::Yield);
    };
  };

}

#endif
