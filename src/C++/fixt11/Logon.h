#ifndef FIXT11_LOGON_H
#define FIXT11_LOGON_H

#include "Message.h"

namespace FIXT11
{

  class Logon : public Message
  {
  public:
    Logon() : Message(MsgType()) {}
    Logon(const FIX::Message& m) : Message(m) {}
    Logon(const Message& m) : Message(m) {}
    Logon(const Logon&) = default;
    Logon(Logon&&) = default;
    Logon& operator=(const Logon&) = default;
    Logon& operator=(Logon&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("A"); }

    Logon(
      const FIX::EncryptMethod& aEncryptMethod,
      const FIX::HeartBtInt& aHeartBtInt,
      const FIX::DefaultApplVerID& aDefaultApplVerID )
    : Message(MsgType())
    {
      set(aEncryptMethod);
      set(aHeartBtInt);
      set(aDefaultApplVerID);
    }

    FIELD_SET(*this, FIX::EncryptMethod);
    FIELD_SET(*this, FIX::HeartBtInt);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::ResetSeqNumFlag);
    FIELD_SET(*this, FIX::NextExpectedMsgSeqNum);
    FIELD_SET(*this, FIX::MaxMessageSize);
    FIELD_SET(*this, FIX::TestMessageIndicator);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::Password);
    FIELD_SET(*this, FIX::NewPassword);
    FIELD_SET(*this, FIX::EncryptedPasswordMethod);
    FIELD_SET(*this, FIX::EncryptedPasswordLen);
    FIELD_SET(*this, FIX::EncryptedPassword);
    FIELD_SET(*this, FIX::EncryptedNewPasswordLen);
    FIELD_SET(*this, FIX::EncryptedNewPassword);
    FIELD_SET(*this, FIX::SessionStatus);
    FIELD_SET(*this, FIX::DefaultApplVerID);
    FIELD_SET(*this, FIX::DefaultApplExtID);
    FIELD_SET(*this, FIX::DefaultCstmApplVerID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
