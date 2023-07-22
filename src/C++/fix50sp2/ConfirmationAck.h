#ifndef FIX50SP2_CONFIRMATIONACK_H
#define FIX50SP2_CONFIRMATIONACK_H

#include "Message.h"

namespace FIX50SP2
{

  class ConfirmationAck : public Message
  {
  public:
    ConfirmationAck() : Message(MsgType()) {}
    ConfirmationAck(const FIX::Message& m) : Message(m) {}
    ConfirmationAck(const Message& m) : Message(m) {}
    ConfirmationAck(const ConfirmationAck&) = default;
    ConfirmationAck(ConfirmationAck&&) = default;
    ConfirmationAck& operator=(const ConfirmationAck&) = default;
    ConfirmationAck& operator=(ConfirmationAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AU"); }

    ConfirmationAck(
      const FIX::ConfirmID& aConfirmID,
      const FIX::TradeDate& aTradeDate,
      const FIX::TransactTime& aTransactTime,
      const FIX::AffirmStatus& aAffirmStatus )
    : Message(MsgType())
    {
      set(aConfirmID);
      set(aTradeDate);
      set(aTransactTime);
      set(aAffirmStatus);
    }

    FIELD_SET(*this, FIX::ConfirmID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AffirmStatus);
    FIELD_SET(*this, FIX::NoRegulatoryTradeIDs);
    class NoRegulatoryTradeIDs: public FIX::Group
    {
    public:
    NoRegulatoryTradeIDs() : FIX::Group(1907,1903,FIX::message_order(1903,1905,1904,1906,2411,2397,0)) {}
      FIELD_SET(*this, FIX::RegulatoryTradeID);
      FIELD_SET(*this, FIX::RegulatoryTradeIDSource);
      FIELD_SET(*this, FIX::RegulatoryTradeIDEvent);
      FIELD_SET(*this, FIX::RegulatoryTradeIDType);
      FIELD_SET(*this, FIX::RegulatoryLegRefID);
      FIELD_SET(*this, FIX::RegulatoryTradeIDScope);
    };
    FIELD_SET(*this, FIX::TradeConfirmationReferenceID);
    FIELD_SET(*this, FIX::ConfirmRejReason);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::NoMatchExceptions);
    class NoMatchExceptions: public FIX::Group
    {
    public:
    NoMatchExceptions() : FIX::Group(2772,2773,FIX::message_order(2773,2774,2775,2776,2777,2778,2779,2780,2797,2798,0)) {}
      FIELD_SET(*this, FIX::MatchExceptionType);
      FIELD_SET(*this, FIX::MatchExceptionElementType);
      FIELD_SET(*this, FIX::MatchExceptionElementName);
      FIELD_SET(*this, FIX::MatchExceptionAllocValue);
      FIELD_SET(*this, FIX::MatchExceptionConfirmValue);
      FIELD_SET(*this, FIX::MatchExceptionToleranceValue);
      FIELD_SET(*this, FIX::MatchExceptionToleranceValueType);
      FIELD_SET(*this, FIX::MatchExceptionText);
      FIELD_SET(*this, FIX::EncodedMatchExceptionTextLen);
      FIELD_SET(*this, FIX::EncodedMatchExceptionText);
    };
    FIELD_SET(*this, FIX::NoMatchingDataPoints);
    class NoMatchingDataPoints: public FIX::Group
    {
    public:
    NoMatchingDataPoints() : FIX::Group(2781,2782,FIX::message_order(2782,2783,2784,2785,0)) {}
      FIELD_SET(*this, FIX::MatchingDataPointIndicator);
      FIELD_SET(*this, FIX::MatchingDataPointValue);
      FIELD_SET(*this, FIX::MatchingDataPointType);
      FIELD_SET(*this, FIX::MatchingDataPointName);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
