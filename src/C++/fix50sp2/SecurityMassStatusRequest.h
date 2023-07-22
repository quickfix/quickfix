#ifndef FIX50SP2_SECURITYMASSSTATUSREQUEST_H
#define FIX50SP2_SECURITYMASSSTATUSREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class SecurityMassStatusRequest : public Message
  {
  public:
    SecurityMassStatusRequest() : Message(MsgType()) {}
    SecurityMassStatusRequest(const FIX::Message& m) : Message(m) {}
    SecurityMassStatusRequest(const Message& m) : Message(m) {}
    SecurityMassStatusRequest(const SecurityMassStatusRequest&) = default;
    SecurityMassStatusRequest(SecurityMassStatusRequest&&) = default;
    SecurityMassStatusRequest& operator=(const SecurityMassStatusRequest&) = default;
    SecurityMassStatusRequest& operator=(SecurityMassStatusRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CN"); }

    SecurityMassStatusRequest(
      const FIX::SecurityStatusReqID& aSecurityStatusReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aSecurityStatusReqID);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::SecurityStatusReqID);
    FIELD_SET(*this, FIX::InstrumentScopeSymbol);
    FIELD_SET(*this, FIX::InstrumentScopeSymbolSfx);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityID);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityIDSource);
    FIELD_SET(*this, FIX::NoInstrumentScopeSecurityAltID);
    class NoInstrumentScopeSecurityAltID: public FIX::Group
    {
    public:
    NoInstrumentScopeSecurityAltID() : FIX::Group(1540,1541,FIX::message_order(1541,1542,0)) {}
      FIELD_SET(*this, FIX::InstrumentScopeSecurityAltID);
      FIELD_SET(*this, FIX::InstrumentScopeSecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::InstrumentScopeProduct);
    FIELD_SET(*this, FIX::InstrumentScopeProductComplex);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityGroup);
    FIELD_SET(*this, FIX::InstrumentScopeCFICode);
    FIELD_SET(*this, FIX::InstrumentScopeUPICode);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityType);
    FIELD_SET(*this, FIX::InstrumentScopeSecuritySubType);
    FIELD_SET(*this, FIX::InstrumentScopeMaturityMonthYear);
    FIELD_SET(*this, FIX::InstrumentScopeMaturityTime);
    FIELD_SET(*this, FIX::InstrumentScopeRestructuringType);
    FIELD_SET(*this, FIX::InstrumentScopeSeniority);
    FIELD_SET(*this, FIX::InstrumentScopePutOrCall);
    FIELD_SET(*this, FIX::InstrumentScopeFlexibleIndicator);
    FIELD_SET(*this, FIX::InstrumentScopeCouponRate);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityExchange);
    FIELD_SET(*this, FIX::InstrumentScopeSecurityDesc);
    FIELD_SET(*this, FIX::InstrumentScopeEncodedSecurityDescLen);
    FIELD_SET(*this, FIX::InstrumentScopeEncodedSecurityDesc);
    FIELD_SET(*this, FIX::InstrumentScopeSettlType);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::SecurityListID);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
  };

}

#endif
