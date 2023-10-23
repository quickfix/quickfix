#ifndef FIX50SP2_PARTYENTITLEMENTSREPORT_H
#define FIX50SP2_PARTYENTITLEMENTSREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyEntitlementsReport : public Message
  {
  public:
    PartyEntitlementsReport() : Message(MsgType()) {}
    PartyEntitlementsReport(const FIX::Message& m) : Message(m) {}
    PartyEntitlementsReport(const Message& m) : Message(m) {}
    PartyEntitlementsReport(const PartyEntitlementsReport&) = default;
    PartyEntitlementsReport(PartyEntitlementsReport&&) = default;
    PartyEntitlementsReport& operator=(const PartyEntitlementsReport&) = default;
    PartyEntitlementsReport& operator=(PartyEntitlementsReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CV"); }

    PartyEntitlementsReport(
      const FIX::EntitlementReportID& aEntitlementReportID )
    : Message(MsgType())
    {
      set(aEntitlementReportID);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::EntitlementReportID);
    FIELD_SET(*this, FIX::EntitlementRequestID);
    FIELD_SET(*this, FIX::RequestResult);
    FIELD_SET(*this, FIX::TotNoParties);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET(*this, FIX::NoPartyEntitlements);
    class NoPartyEntitlements: public FIX::Group
    {
    public:
    NoPartyEntitlements() : FIX::Group(1772,1671,FIX::message_order(1671,1883,1773,0)) {}
      FIELD_SET(*this, FIX::NoPartyDetails);
      class NoPartyDetails: public FIX::Group
      {
      public:
      NoPartyDetails() : FIX::Group(1671,1691,FIX::message_order(1691,1692,1693,1674,1694,1516,1562,1672,0)) {}
        FIELD_SET(*this, FIX::PartyDetailID);
        FIELD_SET(*this, FIX::PartyDetailIDSource);
        FIELD_SET(*this, FIX::PartyDetailRole);
        FIELD_SET(*this, FIX::PartyDetailRoleQualifier);
        FIELD_SET(*this, FIX::NoPartyDetailSubIDs);
        class NoPartyDetailSubIDs: public FIX::Group
        {
        public:
        NoPartyDetailSubIDs() : FIX::Group(1694,1695,FIX::message_order(1695,1696,0)) {}
          FIELD_SET(*this, FIX::PartyDetailSubID);
          FIELD_SET(*this, FIX::PartyDetailSubIDType);
        };
        FIELD_SET(*this, FIX::NoPartyDetailAltID);
        class NoPartyDetailAltID: public FIX::Group
        {
        public:
        NoPartyDetailAltID() : FIX::Group(1516,1517,FIX::message_order(1517,1518,1519,0)) {}
          FIELD_SET(*this, FIX::PartyDetailAltID);
          FIELD_SET(*this, FIX::PartyDetailAltIDSource);
          FIELD_SET(*this, FIX::NoPartyDetailAltSubIDs);
          class NoPartyDetailAltSubIDs: public FIX::Group
          {
          public:
          NoPartyDetailAltSubIDs() : FIX::Group(1519,1520,FIX::message_order(1520,1521,0)) {}
            FIELD_SET(*this, FIX::PartyDetailAltSubID);
            FIELD_SET(*this, FIX::PartyDetailAltSubIDType);
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
        FIELD_SET(*this, FIX::PartyDetailStatus);
      };
      FIELD_SET(*this, FIX::EntitlementStatus);
      FIELD_SET(*this, FIX::NoEntitlements);
      class NoEntitlements: public FIX::Group
      {
      public:
      NoEntitlements() : FIX::Group(1773,1774,FIX::message_order(1774,1775,2402,1777,1776,1784,1656,1310,1782,1783,0)) {}
        FIELD_SET(*this, FIX::EntitlementIndicator);
        FIELD_SET(*this, FIX::EntitlementType);
        FIELD_SET(*this, FIX::EntitlementSubType);
        FIELD_SET(*this, FIX::NoEntitlementAttrib);
        class NoEntitlementAttrib: public FIX::Group
        {
        public:
        NoEntitlementAttrib() : FIX::Group(1777,1778,FIX::message_order(1778,1779,1780,1781,2940,0)) {}
          FIELD_SET(*this, FIX::EntitlementAttribType);
          FIELD_SET(*this, FIX::EntitlementAttribDatatype);
          FIELD_SET(*this, FIX::EntitlementAttribValue);
          FIELD_SET(*this, FIX::EntitlementAttribCurrency);
          FIELD_SET(*this, FIX::EntitlementAttribCurrencyCodeSource);
        };
        FIELD_SET(*this, FIX::EntitlementID);
        FIELD_SET(*this, FIX::EntitlementPlatform);
        FIELD_SET(*this, FIX::NoInstrumentScopes);
        class NoInstrumentScopes: public FIX::Group
        {
        public:
        NoInstrumentScopes() : FIX::Group(1656,1535,FIX::message_order(1535,1536,1537,1538,1539,1543,1544,1545,1546,2895,1547,1548,1549,1550,1551,1552,1553,1554,1555,1616,1556,1620,1621,1557,0)) {}
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
        };
        FIELD_SET(*this, FIX::NoMarketSegments);
        class NoMarketSegments: public FIX::Group
        {
        public:
        NoMarketSegments() : FIX::Group(1310,1301,FIX::message_order(1301,1300,0)) {}
          FIELD_SET(*this, FIX::MarketID);
          FIELD_SET(*this, FIX::MarketSegmentID);
        };
        FIELD_SET(*this, FIX::EntitlementStartDate);
        FIELD_SET(*this, FIX::EntitlementEndDate);
      };
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::RejectText);
    FIELD_SET(*this, FIX::EncodedRejectTextLen);
    FIELD_SET(*this, FIX::EncodedRejectText);
  };

}

#endif
