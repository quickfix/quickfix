#ifndef FIX40_LISTSTATUSREQUEST_H
#define FIX40_LISTSTATUSREQUEST_H

#include "Message.h"

namespace FIX40
{

  class ListStatusRequest : public Message
  {
  public:
    ListStatusRequest() : Message(MsgType()) {}
    ListStatusRequest(const FIX::Message& m) : Message(m) {}
    ListStatusRequest(const Message& m) : Message(m) {}
    ListStatusRequest(const ListStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("M"); }

    ListStatusRequest(
      const FIX::ListID& aListID )
    : Message(MsgType())
    {
      set(aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
