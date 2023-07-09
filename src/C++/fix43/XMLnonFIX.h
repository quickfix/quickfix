#ifndef FIX43_XMLNONFIX_H
#define FIX43_XMLNONFIX_H

#include "Message.h"

namespace FIX43
{

  class XMLnonFIX : public Message
  {
  public:
    XMLnonFIX() : Message(MsgType()) {}
    XMLnonFIX(const FIX::Message& m) : Message(m) {}
    XMLnonFIX(const Message& m) : Message(m) {}
    XMLnonFIX(const XMLnonFIX&) = default;
    XMLnonFIX(XMLnonFIX&&) = default;
    XMLnonFIX& operator=(const XMLnonFIX&) = default;
    XMLnonFIX& operator=(XMLnonFIX&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("n"); }

  };

}

#endif
