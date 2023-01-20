#ifndef FIX41_LISTSTATUSREQUEST_H
#define FIX41_LISTSTATUSREQUEST_H

#include "Message.h"

namespace FIX41
{

  class ListStatusRequest : public Message
  {
  public:
    ListStatusRequest() : Message(MsgType()) {}
    ListStatusRequest(const FIX::Message& m) : Message(m) {}
    ListStatusRequest(const Message& m) : Message(m) {}
    ListStatusRequest(const ListStatusRequest&) = default;
    ListStatusRequest(ListStatusRequest&&) = default;
    ListStatusRequest& operator=(const ListStatusRequest&) = default;
    ListStatusRequest& operator=(ListStatusRequest&&) = default;
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
