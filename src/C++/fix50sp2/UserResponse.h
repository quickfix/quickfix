#ifndef FIX50SP2_USERRESPONSE_H
#define FIX50SP2_USERRESPONSE_H

#include "Message.h"

namespace FIX50SP2
{

  class UserResponse : public Message
  {
  public:
    UserResponse() : Message(MsgType()) {}
    UserResponse(const FIX::Message& m) : Message(m) {}
    UserResponse(const Message& m) : Message(m) {}
    UserResponse(const UserResponse&) = default;
    UserResponse(UserResponse&&) = default;
    UserResponse& operator=(const UserResponse&) = default;
    UserResponse& operator=(UserResponse&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("BF"); }

    UserResponse(
      const FIX::UserRequestID& aUserRequestID,
      const FIX::Username& aUsername )
    : Message(MsgType())
    {
      set(aUserRequestID);
      set(aUsername);
    }

    FIELD_SET(*this, FIX::UserRequestID);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::UserStatus);
    FIELD_SET(*this, FIX::NoThrottles);
    class NoThrottles: public FIX::Group
    {
    public:
    NoThrottles() : FIX::Group(1610,1611,FIX::message_order(1611,1612,1613,1614,1615,1618,0)) {}
      FIELD_SET(*this, FIX::ThrottleAction);
      FIELD_SET(*this, FIX::ThrottleType);
      FIELD_SET(*this, FIX::ThrottleNoMsgs);
      FIELD_SET(*this, FIX::ThrottleTimeInterval);
      FIELD_SET(*this, FIX::ThrottleTimeUnit);
      FIELD_SET(*this, FIX::NoThrottleMsgType);
      class NoThrottleMsgType: public FIX::Group
      {
      public:
      NoThrottleMsgType() : FIX::Group(1618,1619,FIX::message_order(1619,0)) {}
        FIELD_SET(*this, FIX::ThrottleMsgType);
      };
    };
    FIELD_SET(*this, FIX::UserStatusText);
  };

}

#endif
