#ifndef FIX44_NETWORKSTATUSRESPONSE_H
#define FIX44_NETWORKSTATUSRESPONSE_H

#include "Message.h"

namespace FIX44
{

  class NetworkStatusResponse : public Message
  {
  public:
    NetworkStatusResponse() : Message(MsgType()) {}
    NetworkStatusResponse(const FIX::Message& m) : Message(m) {}
    NetworkStatusResponse(const Message& m) : Message(m) {}
    NetworkStatusResponse(const NetworkStatusResponse& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BD"); }

    NetworkStatusResponse(
      const FIX::NetworkStatusResponseType& aNetworkStatusResponseType )
    : Message(MsgType())
    {
      set(aNetworkStatusResponseType);
    }

    FIELD_SET(*this, FIX::NetworkStatusResponseType);
    FIELD_SET(*this, FIX::NetworkRequestID);
    FIELD_SET(*this, FIX::NetworkResponseID);
    FIELD_SET(*this, FIX::LastNetworkResponseID);
    FIELD_SET(*this, FIX::NoCompIDs);
    class NoCompIDs: public FIX::Group
    {
    public:
    NoCompIDs() : FIX::Group(936,930,FIX::message_order(930,931,283,284,928,929,0)) {}
      FIELD_SET(*this, FIX::RefCompID);
      FIELD_SET(*this, FIX::RefSubID);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
      FIELD_SET(*this, FIX::StatusValue);
      FIELD_SET(*this, FIX::StatusText);
    };
  };

}

#endif
