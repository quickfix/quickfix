#ifndef FIXT11_HEARTBEAT_H
#define FIXT11_HEARTBEAT_H

#include "Message.h"

namespace FIXT11
{

  class Heartbeat : public Message
  {
  public:
    Heartbeat() : Message(MsgType()) {}
    Heartbeat(const FIX::Message& m) : Message(m) {}
    Heartbeat(const Message& m) : Message(m) {}
    Heartbeat(const Heartbeat&) = default;
    Heartbeat(Heartbeat&&) = default;
    Heartbeat& operator=(const Heartbeat&) = default;
    Heartbeat& operator=(Heartbeat&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("0"); }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
