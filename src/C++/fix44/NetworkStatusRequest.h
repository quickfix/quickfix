#ifndef FIX44_NETWORKSTATUSREQUEST_H
#define FIX44_NETWORKSTATUSREQUEST_H

#include "Message.h"

namespace FIX44
{

  class NetworkStatusRequest : public Message
  {
  public:
    NetworkStatusRequest() : Message(MsgType()) {}
    NetworkStatusRequest(const FIX::Message& m) : Message(m) {}
    NetworkStatusRequest(const Message& m) : Message(m) {}
    NetworkStatusRequest(const NetworkStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BC"); }

    NetworkStatusRequest(
      const FIX::NetworkRequestType& aNetworkRequestType,
      const FIX::NetworkRequestID& aNetworkRequestID )
    : Message(MsgType())
    {
      set(aNetworkRequestType);
      set(aNetworkRequestID);
    }

    FIELD_SET(*this, FIX::NetworkRequestType);
    FIELD_SET(*this, FIX::NetworkRequestID);
    FIELD_SET(*this, FIX::NoCompIDs);
    class NoCompIDs: public FIX::Group
    {
    public:
    NoCompIDs() : FIX::Group(936,930,FIX::message_order(930,931,283,284,0)) {}
      FIELD_SET(*this, FIX::RefCompID);
      FIELD_SET(*this, FIX::RefSubID);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
    };
  };

}

#endif
