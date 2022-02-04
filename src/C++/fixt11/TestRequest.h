#ifndef FIXT11_TESTREQUEST_H
#define FIXT11_TESTREQUEST_H

#include "Message.h"

namespace FIXT11
{

  class TestRequest : public Message
  {
  public:
    TestRequest() : Message(MsgType()) {}
    TestRequest(const FIX::Message& m) : Message(m) {}
    TestRequest(const Message& m) : Message(m) {}
    TestRequest(const TestRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("1"); }

    TestRequest(
      const FIX::TestReqID& aTestReqID )
    : Message(MsgType())
    {
      set(aTestReqID);
    }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
