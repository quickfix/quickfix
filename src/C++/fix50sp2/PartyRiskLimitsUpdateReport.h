#ifndef FIX50SP2_PARTYRISKLIMITSUPDATEREPORT_H
#define FIX50SP2_PARTYRISKLIMITSUPDATEREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyRiskLimitsUpdateReport : public Message
  {
  public:
    PartyRiskLimitsUpdateReport() : Message(MsgType()) {}
    PartyRiskLimitsUpdateReport(const FIX::Message& m) : Message(m) {}
    PartyRiskLimitsUpdateReport(const Message& m) : Message(m) {}
    PartyRiskLimitsUpdateReport(const PartyRiskLimitsUpdateReport&) = default;
    PartyRiskLimitsUpdateReport(PartyRiskLimitsUpdateReport&&) = default;
    PartyRiskLimitsUpdateReport& operator=(const PartyRiskLimitsUpdateReport&) = default;
    PartyRiskLimitsUpdateReport& operator=(PartyRiskLimitsUpdateReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CR"); }

    PartyRiskLimitsUpdateReport(
      const FIX::RiskLimitReportID& aRiskLimitReportID )
    : Message(MsgType())
    {
      set(aRiskLimitReportID);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::RiskLimitReportID);
    FIELD_SET(*this, FIX::RiskLimitRequestID);
    FIELD_SET(*this, FIX::RiskLimitRequestType);
    FIELD_SET(*this, FIX::TotNoParties);
    FIELD_SET(*this, FIX::LastFragment);
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
    FIELD_SET(*this, FIX::NoPartyRiskLimits);
    class NoPartyRiskLimits: public FIX::Group
    {
    public:
    NoPartyRiskLimits() : FIX::Group(1677,1324,FIX::message_order(1324,1671,1669,1670,2339,2355,0)) {}
      FIELD_SET(*this, FIX::ListUpdateAction);
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
      FIELD_SET(*this, FIX::NoRiskLimits);
      class NoRiskLimits: public FIX::Group
      {
      public:
      NoRiskLimits() : FIX::Group(1669,1529,FIX::message_order(1529,1534,0)) {}
        FIELD_SET(*this, FIX::NoRiskLimitTypes);
        class NoRiskLimitTypes: public FIX::Group
        {
        public:
        NoRiskLimitTypes() : FIX::Group(1529,1530,FIX::message_order(1530,1531,1767,1766,1765,1532,2939,1533,2336,2337,1559,0)) {}
          FIELD_SET(*this, FIX::RiskLimitType);
          FIELD_SET(*this, FIX::RiskLimitAmount);
          FIELD_SET(*this, FIX::RiskLimitAction);
          FIELD_SET(*this, FIX::RiskLimitUtilizationAmount);
          FIELD_SET(*this, FIX::RiskLimitUtilizationPercent);
          FIELD_SET(*this, FIX::RiskLimitCurrency);
          FIELD_SET(*this, FIX::RiskLimitCurrencyCodeSource);
          FIELD_SET(*this, FIX::RiskLimitPlatform);
          FIELD_SET(*this, FIX::RiskLimitVelocityPeriod);
          FIELD_SET(*this, FIX::RiskLimitVelocityUnit);
          FIELD_SET(*this, FIX::NoRiskWarningLevels);
          class NoRiskWarningLevels: public FIX::Group
          {
          public:
          NoRiskWarningLevels() : FIX::Group(1559,1769,FIX::message_order(1769,1560,1768,1561,0)) {}
            FIELD_SET(*this, FIX::RiskWarningLevelAction);
            FIELD_SET(*this, FIX::RiskWarningLevelPercent);
            FIELD_SET(*this, FIX::RiskWarningLevelAmount);
            FIELD_SET(*this, FIX::RiskWarningLevelName);
          };
        };
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
      };
      FIELD_SET(*this, FIX::RiskLimitID);
      FIELD_SET(*this, FIX::RiskLimitCheckModelType);
      FIELD_SET(*this, FIX::PartyRiskLimitStatus);
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
