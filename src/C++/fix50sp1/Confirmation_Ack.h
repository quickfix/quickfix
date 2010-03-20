#ifndef FIX50_CONFIRMATION_ACK_H
#define FIX50_CONFIRMATION_ACK_H

#include "Message.h"

namespace FIX50
{

  class Confirmation_Ack : public Message
  {
  public:
    Confirmation_Ack() : Message(MsgType()) {}
    Confirmation_Ack(const FIX::Message& m) : Message(m) {}
    Confirmation_Ack(const Message& m) : Message(m) {}
    Confirmation_Ack(const Confirmation_Ack& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AU"); }

    Confirmation_Ack(
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
    FIELD_SET(*this, FIX::ConfirmRejReason);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
