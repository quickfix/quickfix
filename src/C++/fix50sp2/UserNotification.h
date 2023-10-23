#ifndef FIX50SP2_USERNOTIFICATION_H
#define FIX50SP2_USERNOTIFICATION_H

#include "Message.h"

namespace FIX50SP2
{

  class UserNotification : public Message
  {
  public:
    UserNotification() : Message(MsgType()) {}
    UserNotification(const FIX::Message& m) : Message(m) {}
    UserNotification(const Message& m) : Message(m) {}
    UserNotification(const UserNotification&) = default;
    UserNotification(UserNotification&&) = default;
    UserNotification& operator=(const UserNotification&) = default;
    UserNotification& operator=(UserNotification&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CB"); }

    UserNotification(
      const FIX::UserStatus& aUserStatus )
    : Message(MsgType())
    {
      set(aUserStatus);
    }

    FIELD_SET(*this, FIX::NoUsernames);
    class NoUsernames: public FIX::Group
    {
    public:
    NoUsernames() : FIX::Group(809,553,FIX::message_order(553,0)) {}
      FIELD_SET(*this, FIX::Username);
    };
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
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
