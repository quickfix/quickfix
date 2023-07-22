#ifndef FIX50SP2_PARTYRISKLIMITSREQUEST_H
#define FIX50SP2_PARTYRISKLIMITSREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyRiskLimitsRequest : public Message
  {
  public:
    PartyRiskLimitsRequest() : Message(MsgType()) {}
    PartyRiskLimitsRequest(const FIX::Message& m) : Message(m) {}
    PartyRiskLimitsRequest(const Message& m) : Message(m) {}
    PartyRiskLimitsRequest(const PartyRiskLimitsRequest&) = default;
    PartyRiskLimitsRequest(PartyRiskLimitsRequest&&) = default;
    PartyRiskLimitsRequest& operator=(const PartyRiskLimitsRequest&) = default;
    PartyRiskLimitsRequest& operator=(PartyRiskLimitsRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CL"); }

    PartyRiskLimitsRequest(
      const FIX::RiskLimitRequestID& aRiskLimitRequestID )
    : Message(MsgType())
    {
      set(aRiskLimitRequestID);
    }

    FIELD_SET(*this, FIX::RiskLimitRequestID);
    FIELD_SET(*this, FIX::RiskLimitRequestType);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::NoRequestingPartyIDs);
    class NoRequestingPartyIDs: public FIX::Group
    {
    public:
    NoRequestingPartyIDs() : FIX::Group(1657,1658,FIX::message_order(1658,1659,1660,2338,1661,0)) {}
      FIELD_SET(*this, FIX::RequestingPartyID);
      FIELD_SET(*this, FIX::RequestingPartyIDSource);
      FIELD_SET(*this, FIX::RequestingPartyRole);
      FIELD_SET(*this, FIX::RequestingPartyRoleQualifier);
      FIELD_SET(*this, FIX::NoRequestingPartySubIDs);
      class NoRequestingPartySubIDs: public FIX::Group
      {
      public:
      NoRequestingPartySubIDs() : FIX::Group(1661,1662,FIX::message_order(1662,1663,0)) {}
        FIELD_SET(*this, FIX::RequestingPartySubID);
        FIELD_SET(*this, FIX::RequestingPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,2376,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartyRoleQualifier);
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
    NoRequestedPartyRoles() : FIX::Group(1508,1509,FIX::message_order(1509,2386,0)) {}
      FIELD_SET(*this, FIX::RequestedPartyRole);
      FIELD_SET(*this, FIX::RequestedPartyRoleQualifier);
    };
    FIELD_SET(*this, FIX::NoRequestedRiskLimitType);
    class NoRequestedRiskLimitType: public FIX::Group
    {
    public:
    NoRequestedRiskLimitType() : FIX::Group(1668,1530,FIX::message_order(1530,0)) {}
      FIELD_SET(*this, FIX::RiskLimitType);
    };
    FIELD_SET(*this, FIX::RiskLimitPlatform);
    FIELD_SET(*this, FIX::NoRiskInstrumentScopes);
    class NoRiskInstrumentScopes: public FIX::Group
    {
    public:
    NoRiskInstrumentScopes() : FIX::Group(1534,1535,FIX::message_order(1535,1536,1537,1538,1539,1543,1544,1545,1546,2895,1547,1548,1549,1550,1551,1552,1553,1554,1555,1616,1556,1620,1621,1557,1558,0)) {}
      FIELD_SET(*this, FIX::InstrumentScopeOperator);
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
      FIELD_SET(*this, FIX::RiskInstrumentMultiplier);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
