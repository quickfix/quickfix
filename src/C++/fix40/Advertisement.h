#ifndef FIX40_ADVERTISEMENT_H
#define FIX40_ADVERTISEMENT_H

#include "Message.h"

namespace FIX40
{

  class Advertisement : public Message
  {
  public:
    Advertisement() : Message(MsgType()) {}
    Advertisement(const FIX::Message& m) : Message(m) {}
    Advertisement(const Message& m) : Message(m) {}
    Advertisement(const Advertisement& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("7"); }

    Advertisement(
      const FIX::AdvId& aAdvId,
      const FIX::AdvTransType& aAdvTransType,
      const FIX::Symbol& aSymbol,
      const FIX::AdvSide& aAdvSide,
      const FIX::Shares& aShares )
    : Message(MsgType())
    {
      set(aAdvId);
      set(aAdvTransType);
      set(aSymbol);
      set(aAdvSide);
      set(aShares);
    }

    FIELD_SET(*this, FIX::AdvId);
    FIELD_SET(*this, FIX::AdvTransType);
    FIELD_SET(*this, FIX::AdvRefID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::AdvSide);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
