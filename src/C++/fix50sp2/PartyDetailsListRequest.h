#ifndef FIX50SP2_PARTYDETAILSLISTREQUEST_H
#define FIX50SP2_PARTYDETAILSLISTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyDetailsListRequest : public Message
  {
  public:
    PartyDetailsListRequest() : Message(MsgType()) {}
    PartyDetailsListRequest(const FIX::Message& m) : Message(m) {}
    PartyDetailsListRequest(const Message& m) : Message(m) {}
    PartyDetailsListRequest(const PartyDetailsListRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("CF"); }

    PartyDetailsListRequest(
      const FIX::PartyDetailsListRequestID& aPartyDetailsListRequestID )
    : Message(MsgType())
    {
      set(aPartyDetailsListRequestID);
    }

    FIELD_SET(*this, FIX::PartyDetailsListRequestID);
    FIELD_SET(*this, FIX::NoPartyListResponseTypes);
    class NoPartyListResponseTypes: public FIX::Group
    {
    public:
    NoPartyListResponseTypes() : FIX::Group(1506,1507,FIX::message_order(1507,0)) {}
      FIELD_SET(*this, FIX::PartyListResponseType);
    };
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::NoRequestedPartyRoles);
    class NoRequestedPartyRoles: public FIX::Group
    {
    public:
    NoRequestedPartyRoles() : FIX::Group(1508,1509,FIX::message_order(1509,0)) {}
      FIELD_SET(*this, FIX::RequestedPartyRole);
    };
    FIELD_SET(*this, FIX::NoPartyRelationships);
    class NoPartyRelationships: public FIX::Group
    {
    public:
    NoPartyRelationships() : FIX::Group(1514,1515,FIX::message_order(1515,0)) {}
      FIELD_SET(*this, FIX::PartyRelationship);
    };
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
