#ifndef FIX44_LOGOUT_H
#define FIX44_LOGOUT_H

#include "Message.h"

namespace FIX44
{

  class Logout : public Message
  {
  public:
    Logout() : Message(MsgType()) {}
    Logout(const FIX::Message& m) : Message(m) {}
    Logout(const Message& m) : Message(m) {}
    Logout(const Logout&) = default;
    Logout(Logout&&) = default;
    Logout& operator=(const Logout&) = default;
    Logout& operator=(Logout&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("5"); }

    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
