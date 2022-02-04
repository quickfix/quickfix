#ifndef FIX50SP1_REGISTRATIONINSTRUCTIONSRESPONSE_H
#define FIX50SP1_REGISTRATIONINSTRUCTIONSRESPONSE_H

#include "Message.h"

namespace FIX50SP1
{

  class RegistrationInstructionsResponse : public Message
  {
  public:
    RegistrationInstructionsResponse() : Message(MsgType()) {}
    RegistrationInstructionsResponse(const FIX::Message& m) : Message(m) {}
    RegistrationInstructionsResponse(const Message& m) : Message(m) {}
    RegistrationInstructionsResponse(const RegistrationInstructionsResponse& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("p"); }

    RegistrationInstructionsResponse(
      const FIX::RegistID& aRegistID,
      const FIX::RegistTransType& aRegistTransType,
      const FIX::RegistRefID& aRegistRefID,
      const FIX::RegistStatus& aRegistStatus )
    : Message(MsgType())
    {
      set(aRegistID);
      set(aRegistTransType);
      set(aRegistRefID);
      set(aRegistStatus);
    }

    FIELD_SET(*this, FIX::RegistID);
    FIELD_SET(*this, FIX::RegistTransType);
    FIELD_SET(*this, FIX::RegistRefID);
    FIELD_SET(*this, FIX::ClOrdID);
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
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::RegistStatus);
    FIELD_SET(*this, FIX::RegistRejReasonCode);
    FIELD_SET(*this, FIX::RegistRejReasonText);
  };

}

#endif
