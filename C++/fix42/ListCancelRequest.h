#ifndef FIX42_LISTCANCELREQUEST_H
#define FIX42_LISTCANCELREQUEST_H

#include "Message.h"

namespace FIX42
{

  class ListCancelRequest : public Message
  {
  public:
    ListCancelRequest() : Message(MsgType()) {}
    ListCancelRequest(const FIX::Message& m) : Message(m) {}
    ListCancelRequest(const Message& m) : Message(m) {}
    ListCancelRequest(const ListCancelRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("K"); }

    ListCancelRequest(
      const FIX::ListID& aListID,
      const FIX::TransactTime& aTransactTime )
    : Message(MsgType())
    {
      set(aListID);
      set(aTransactTime);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
