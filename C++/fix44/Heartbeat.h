#ifndef FIX44_HEARTBEAT_H
#define FIX44_HEARTBEAT_H

#include "Message.h"

namespace FIX44
{

  class Heartbeat : public Message
  {
  public:
    Heartbeat() : Message(MsgType()) {}
    Heartbeat(const FIX::Message& m) : Message(m) {}
    Heartbeat(const Message& m) : Message(m) {}
    Heartbeat(const Heartbeat& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("0"); }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
