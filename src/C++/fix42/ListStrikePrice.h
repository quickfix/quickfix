#ifndef FIX42_LISTSTRIKEPRICE_H
#define FIX42_LISTSTRIKEPRICE_H

#include "Message.h"

namespace FIX42
{

  class ListStrikePrice : public Message
  {
  public:
    ListStrikePrice() : Message(MsgType()) {}
    ListStrikePrice(const FIX::Message& m) : Message(m) {}
    ListStrikePrice(const Message& m) : Message(m) {}
    ListStrikePrice(const ListStrikePrice& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("m"); }

    ListStrikePrice(
      const FIX::ListID& aListID,
      const FIX::TotNoStrikes& aTotNoStrikes )
    : Message(MsgType())
    {
      set(aListID);
      set(aTotNoStrikes);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::TotNoStrikes);
    FIELD_SET(*this, FIX::NoStrikes);
    class NoStrikes: public FIX::Group
    {
    public:
    NoStrikes() : FIX::Group(428,55,FIX::message_order(55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,140,11,54,44,15,58,354,355,0)) {}
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
      FIELD_SET(*this, FIX::PrevClosePx);
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
