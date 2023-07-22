#ifndef FIX50SP2_PARTYDETAILSLISTUPDATEREPORT_H
#define FIX50SP2_PARTYDETAILSLISTUPDATEREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class PartyDetailsListUpdateReport : public Message
  {
  public:
    PartyDetailsListUpdateReport() : Message(MsgType()) {}
    PartyDetailsListUpdateReport(const FIX::Message& m) : Message(m) {}
    PartyDetailsListUpdateReport(const Message& m) : Message(m) {}
    PartyDetailsListUpdateReport(const PartyDetailsListUpdateReport&) = default;
    PartyDetailsListUpdateReport(PartyDetailsListUpdateReport&&) = default;
    PartyDetailsListUpdateReport& operator=(const PartyDetailsListUpdateReport&) = default;
    PartyDetailsListUpdateReport& operator=(PartyDetailsListUpdateReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("CK"); }

    PartyDetailsListUpdateReport(
      const FIX::PartyDetailsListReportID& aPartyDetailsListReportID )
    : Message(MsgType())
    {
      set(aPartyDetailsListReportID);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::PartyDetailsListReportID);
    FIELD_SET(*this, FIX::PartyDetailsListRequestID);
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
    FIELD_SET(*this, FIX::NoPartyUpdates);
    class NoPartyUpdates: public FIX::Group
    {
    public:
    NoPartyUpdates() : FIX::Group(1676,1324,FIX::message_order(1324,1671,0)) {}
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
    };
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
