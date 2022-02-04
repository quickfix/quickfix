#ifndef FIX40_QUOTE_H
#define FIX40_QUOTE_H

#include "Message.h"

namespace FIX40
{

  class Quote : public Message
  {
  public:
    Quote() : Message(MsgType()) {}
    Quote(const FIX::Message& m) : Message(m) {}
    Quote(const Message& m) : Message(m) {}
    Quote(const Quote& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("S"); }

    Quote(
      const FIX::QuoteID& aQuoteID,
      const FIX::Symbol& aSymbol,
      const FIX::BidPx& aBidPx )
    : Message(MsgType())
    {
      set(aQuoteID);
      set(aSymbol);
      set(aBidPx);
    }

    FIELD_SET(*this, FIX::QuoteReqID);
    FIELD_SET(*this, FIX::QuoteID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::BidPx);
    FIELD_SET(*this, FIX::OfferPx);
    FIELD_SET(*this, FIX::BidSize);
    FIELD_SET(*this, FIX::OfferSize);
    FIELD_SET(*this, FIX::ValidUntilTime);
  };

}

#endif
