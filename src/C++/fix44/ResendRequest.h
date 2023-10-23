#ifndef FIX44_RESENDREQUEST_H
#define FIX44_RESENDREQUEST_H

#include "Message.h"

namespace FIX44
{

  class ResendRequest : public Message
  {
  public:
    ResendRequest() : Message(MsgType()) {}
    ResendRequest(const FIX::Message& m) : Message(m) {}
    ResendRequest(const Message& m) : Message(m) {}
    ResendRequest(const ResendRequest&) = default;
    ResendRequest(ResendRequest&&) = default;
    ResendRequest& operator=(const ResendRequest&) = default;
    ResendRequest& operator=(ResendRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("2"); }

    ResendRequest(
      const FIX::BeginSeqNo& aBeginSeqNo,
      const FIX::EndSeqNo& aEndSeqNo )
    : Message(MsgType())
    {
      set(aBeginSeqNo);
      set(aEndSeqNo);
    }

    FIELD_SET(*this, FIX::BeginSeqNo);
    FIELD_SET(*this, FIX::EndSeqNo);
  };

}

#endif
