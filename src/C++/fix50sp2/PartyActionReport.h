#ifndef FIX50SP2_PARTYACTIONREPORT_H
#define FIX50SP2_PARTYACTIONREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyActionReport : public Message
  {
  public:
    PartyActionReport() : Message(MsgType()) {}
    PartyActionReport(const FIX::Message& m) : Message(m) {}
    PartyActionReport(const Message& m) : Message(m) {}
    PartyActionReport(const PartyActionReport&) = default;
    PartyActionReport(PartyActionReport&&) = default;
    PartyActionReport& operator=(const PartyActionReport&) = default;
    PartyActionReport& operator=(PartyActionReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DI"); }

    PartyActionReport(
      const FIX::PartyActionReportID& aPartyActionReportID,
      const FIX::PartyActionType& aPartyActionType,
      const FIX::PartyActionResponse& aPartyActionResponse )
    : Message(MsgType())
    {
      set(aPartyActionReportID);
      set(aPartyActionType);
      set(aPartyActionResponse);
    }

    FIELD_SET(*this, FIX::EffectiveBusinessDate);
    FIELD_SET(*this, FIX::PartyActionRequestID);
    FIELD_SET(*this, FIX::PartyActionReportID);
    FIELD_SET(*this, FIX::PartyActionType);
    FIELD_SET(*this, FIX::PartyActionResponse);
    FIELD_SET(*this, FIX::PartyActionRejectReason);
    FIELD_SET(*this, FIX::ApplTestMessageIndicator);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
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
    FIELD_SET(*this, FIX::NoRelatedPartyDetailID);
    class NoRelatedPartyDetailID: public FIX::Group
    {
    public:
    NoRelatedPartyDetailID() : FIX::Group(1562,1563,FIX::message_order(1563,1564,1565,1675,1566,1569,1514,0)) {}
      FIELD_SET(*this, FIX::RelatedPartyDetailID);
      FIELD_SET(*this, FIX::RelatedPartyDetailIDSource);
      FIELD_SET(*this, FIX::RelatedPartyDetailRole);
      FIELD_SET(*this, FIX::RelatedPartyDetailRoleQualifier);
      FIELD_SET(*this, FIX::NoRelatedPartyDetailSubIDs);
      class NoRelatedPartyDetailSubIDs: public FIX::Group
      {
      public:
      NoRelatedPartyDetailSubIDs() : FIX::Group(1566,1567,FIX::message_order(1567,1568,0)) {}
        FIELD_SET(*this, FIX::RelatedPartyDetailSubID);
        FIELD_SET(*this, FIX::RelatedPartyDetailSubIDType);
      };
      FIELD_SET(*this, FIX::NoRelatedPartyDetailAltID);
      class NoRelatedPartyDetailAltID: public FIX::Group
      {
      public:
      NoRelatedPartyDetailAltID() : FIX::Group(1569,1570,FIX::message_order(1570,1571,1572,0)) {}
        FIELD_SET(*this, FIX::RelatedPartyDetailAltID);
        FIELD_SET(*this, FIX::RelatedPartyDetailAltIDSource);
        FIELD_SET(*this, FIX::NoRelatedPartyDetailAltSubIDs);
        class NoRelatedPartyDetailAltSubIDs: public FIX::Group
        {
        public:
        NoRelatedPartyDetailAltSubIDs() : FIX::Group(1572,1573,FIX::message_order(1573,1574,0)) {}
          FIELD_SET(*this, FIX::RelatedPartyDetailAltSubID);
          FIELD_SET(*this, FIX::RelatedPartyDetailAltSubIDType);
        };
      };
      FIELD_SET(*this, FIX::NoPartyRelationships);
      class NoPartyRelationships: public FIX::Group
      {
      public:
      NoPartyRelationships() : FIX::Group(1514,1515,FIX::message_order(1515,0)) {}
        FIELD_SET(*this, FIX::PartyRelationship);
      };
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::CopyMsgIndicator);
  };

}

#endif
