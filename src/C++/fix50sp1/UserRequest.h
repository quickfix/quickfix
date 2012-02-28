#ifndef FIX50SP1_USERREQUEST_H
#define FIX50SP1_USERREQUEST_H

#include "Message.h"

namespace FIX50SP1
{

  class UserRequest : public Message
  {
  public:
    UserRequest() : Message(MsgType()) {}
    UserRequest(const FIX::Message& m) : Message(m) {}
    UserRequest(const Message& m) : Message(m) {}
    UserRequest(const UserRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BE"); }

    UserRequest(
      const FIX::UserRequestID& aUserRequestID,
      const FIX::UserRequestType& aUserRequestType,
      const FIX::Username& aUsername )
    : Message(MsgType())
    {
      set(aUserRequestID);
      set(aUserRequestType);
      set(aUsername);
    }

    FIELD_SET(*this, FIX::UserRequestID);
    FIELD_SET(*this, FIX::UserRequestType);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::Password);
    FIELD_SET(*this, FIX::NewPassword);
    FIELD_SET(*this, FIX::EncryptedPasswordMethod);
    FIELD_SET(*this, FIX::EncryptedPasswordLen);
    FIELD_SET(*this, FIX::EncryptedPassword);
    FIELD_SET(*this, FIX::EncryptedNewPasswordLen);
    FIELD_SET(*this, FIX::EncryptedNewPassword);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
  };

}

#endif
