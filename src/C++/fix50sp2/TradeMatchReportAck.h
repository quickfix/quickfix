#ifndef FIX50SP2_TRADEMATCHREPORTACK_H
#define FIX50SP2_TRADEMATCHREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class TradeMatchReportAck : public Message
  {
  public:
    TradeMatchReportAck() : Message(MsgType()) {}
    TradeMatchReportAck(const FIX::Message& m) : Message(m) {}
    TradeMatchReportAck(const Message& m) : Message(m) {}
    TradeMatchReportAck(const TradeMatchReportAck&) = default;
    TradeMatchReportAck(TradeMatchReportAck&&) = default;
    TradeMatchReportAck& operator=(const TradeMatchReportAck&) = default;
    TradeMatchReportAck& operator=(TradeMatchReportAck&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DD"); }

    TradeMatchReportAck(
      const FIX::TrdMatchID& aTrdMatchID,
      const FIX::TradeMatchAckStatus& aTradeMatchAckStatus )
    : Message(MsgType())
    {
      set(aTrdMatchID);
      set(aTradeMatchAckStatus);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::TrdMatchID);
    FIELD_SET(*this, FIX::TradeMatchAckStatus);
    FIELD_SET(*this, FIX::TradeMatchRejectReason);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
