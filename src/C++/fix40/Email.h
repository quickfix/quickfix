#ifndef FIX40_EMAIL_H
#define FIX40_EMAIL_H

#include "Message.h"

namespace FIX40
{

  class Email : public Message
  {
  public:
    Email() : Message(MsgType()) {}
    Email(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("C"); }

    Email(
      const FIX::EmailType& aEmailType )
    : Message(MsgType())
    {
      set(aEmailType);
    }

    FIELD_SET(*this, FIX::EmailType);
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::RelatdSym);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::LinesOfText);
    class LinesOfText: public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33,58,FIX::message_order(58,0)) {}
      FIELD_SET(*this, FIX::Text);
    };
  };

}

#endif
