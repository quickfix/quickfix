#ifndef FIX50SP2_SETTLEMENTOBLIGATIONREPORT_H
#define FIX50SP2_SETTLEMENTOBLIGATIONREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class SettlementObligationReport : public Message
  {
  public:
    SettlementObligationReport() : Message(MsgType()) {}
    SettlementObligationReport(const FIX::Message& m) : Message(m) {}
    SettlementObligationReport(const Message& m) : Message(m) {}
    SettlementObligationReport(const SettlementObligationReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BQ"); }

    SettlementObligationReport(
      const FIX::SettlObligMsgID& aSettlObligMsgID,
      const FIX::SettlObligMode& aSettlObligMode )
    : Message(MsgType())
    {
      set(aSettlObligMsgID);
      set(aSettlObligMode);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::ClearingBusinessDate);
    FIELD_SET(*this, FIX::SettlementCycleNo);
    FIELD_SET(*this, FIX::SettlObligMsgID);
    FIELD_SET(*this, FIX::SettlObligMode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::NoSettlOblig);
    class NoSettlOblig: public FIX::Group
    {
    public:
    NoSettlOblig() : FIX::Group(1165,430,FIX::message_order(430,1161,1162,1163,1157,119,15,120,155,64,55,65,48,22,460,1227,1151,461,167,762,200,541,1079,966,1049,965,224,225,239,226,227,228,255,543,470,471,472,240,202,947,967,968,206,231,969,1146,996,1147,1191,1192,1193,1194,1195,1196,1197,1198,1199,1200,201,1244,1242,997,223,207,970,971,106,348,349,107,350,351,691,667,875,876,873,874,1435,1439,1449,1450,1451,1452,1457,1458,1478,1479,1480,1481,1482,453,168,126,779,1158,0)) {}
      FIELD_SET(*this, FIX::NetGrossInd);
      FIELD_SET(*this, FIX::SettlObligID);
      FIELD_SET(*this, FIX::SettlObligTransType);
      FIELD_SET(*this, FIX::SettlObligRefID);
      FIELD_SET(*this, FIX::CcyAmt);
      FIELD_SET(*this, FIX::SettlCurrAmt);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::SettlCurrency);
      FIELD_SET(*this, FIX::SettlCurrFxRate);
      FIELD_SET(*this, FIX::SettlDate);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::SecurityIDSource);
      FIELD_SET(*this, FIX::NoSecurityAltID);
      class NoSecurityAltID: public FIX::Group
      {
      public:
      NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
        FIELD_SET(*this, FIX::SecurityAltID);
        FIELD_SET(*this, FIX::SecurityAltIDSource);
      };
      FIELD_SET(*this, FIX::Product);
      FIELD_SET(*this, FIX::ProductComplex);
      FIELD_SET(*this, FIX::SecurityGroup);
      FIELD_SET(*this, FIX::CFICode);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::SecuritySubType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDate);
      FIELD_SET(*this, FIX::MaturityTime);
      FIELD_SET(*this, FIX::SettleOnOpenFlag);
      FIELD_SET(*this, FIX::InstrmtAssignmentMethod);
      FIELD_SET(*this, FIX::SecurityStatus);
      FIELD_SET(*this, FIX::CouponPaymentDate);
      FIELD_SET(*this, FIX::IssueDate);
      FIELD_SET(*this, FIX::RepoCollateralSecurityType);
      FIELD_SET(*this, FIX::RepurchaseTerm);
      FIELD_SET(*this, FIX::RepurchaseRate);
      FIELD_SET(*this, FIX::Factor);
      FIELD_SET(*this, FIX::CreditRating);
      FIELD_SET(*this, FIX::InstrRegistry);
      FIELD_SET(*this, FIX::CountryOfIssue);
      FIELD_SET(*this, FIX::StateOrProvinceOfIssue);
      FIELD_SET(*this, FIX::LocaleOfIssue);
      FIELD_SET(*this, FIX::RedemptionDate);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::StrikeCurrency);
      FIELD_SET(*this, FIX::StrikeMultiplier);
      FIELD_SET(*this, FIX::StrikeValue);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::MinPriceIncrement);
      FIELD_SET(*this, FIX::MinPriceIncrementAmount);
      FIELD_SET(*this, FIX::UnitOfMeasure);
      FIELD_SET(*this, FIX::UnitOfMeasureQty);
      FIELD_SET(*this, FIX::PriceUnitOfMeasure);
      FIELD_SET(*this, FIX::PriceUnitOfMeasureQty);
      FIELD_SET(*this, FIX::SettlMethod);
      FIELD_SET(*this, FIX::ExerciseStyle);
      FIELD_SET(*this, FIX::OptPayoutAmount);
      FIELD_SET(*this, FIX::PriceQuoteMethod);
      FIELD_SET(*this, FIX::ValuationMethod);
      FIELD_SET(*this, FIX::ListMethod);
      FIELD_SET(*this, FIX::CapPrice);
      FIELD_SET(*this, FIX::FloorPrice);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::FlexibleIndicator);
      FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
      FIELD_SET(*this, FIX::TimeUnit);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::PositionLimit);
      FIELD_SET(*this, FIX::NTPositionLimit);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
      FIELD_SET(*this, FIX::SecurityXMLLen);
      FIELD_SET(*this, FIX::SecurityXML);
      FIELD_SET(*this, FIX::SecurityXMLSchema);
      FIELD_SET(*this, FIX::Pool);
      FIELD_SET(*this, FIX::ContractSettlMonth);
      FIELD_SET(*this, FIX::CPProgram);
      FIELD_SET(*this, FIX::CPRegType);
      FIELD_SET(*this, FIX::NoEvents);
      class NoEvents: public FIX::Group
      {
      public:
      NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,1145,867,868,0)) {}
        FIELD_SET(*this, FIX::EventType);
        FIELD_SET(*this, FIX::EventDate);
        FIELD_SET(*this, FIX::EventTime);
        FIELD_SET(*this, FIX::EventPx);
        FIELD_SET(*this, FIX::EventText);
      };
      FIELD_SET(*this, FIX::DatedDate);
      FIELD_SET(*this, FIX::InterestAccrualDate);
      FIELD_SET(*this, FIX::NoInstrumentParties);
      class NoInstrumentParties: public FIX::Group
      {
      public:
      NoInstrumentParties() : FIX::Group(1018,1019,FIX::message_order(1019,1050,1051,1052,0)) {}
        FIELD_SET(*this, FIX::InstrumentPartyID);
        FIELD_SET(*this, FIX::InstrumentPartyIDSource);
        FIELD_SET(*this, FIX::InstrumentPartyRole);
        FIELD_SET(*this, FIX::NoInstrumentPartySubIDs);
        class NoInstrumentPartySubIDs: public FIX::Group
        {
        public:
        NoInstrumentPartySubIDs() : FIX::Group(1052,1053,FIX::message_order(1053,1054,0)) {}
          FIELD_SET(*this, FIX::InstrumentPartySubID);
          FIELD_SET(*this, FIX::InstrumentPartySubIDType);
        };
      };
      FIELD_SET(*this, FIX::ContractMultiplierUnit);
      FIELD_SET(*this, FIX::FlowScheduleType);
      FIELD_SET(*this, FIX::RestructuringType);
      FIELD_SET(*this, FIX::Seniority);
      FIELD_SET(*this, FIX::NotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::OriginalNotionalPercentageOutstanding);
      FIELD_SET(*this, FIX::AttachmentPoint);
      FIELD_SET(*this, FIX::DetachmentPoint);
      FIELD_SET(*this, FIX::StrikePriceDeterminationMethod);
      FIELD_SET(*this, FIX::StrikePriceBoundaryMethod);
      FIELD_SET(*this, FIX::StrikePriceBoundaryPrecision);
      FIELD_SET(*this, FIX::UnderlyingPriceDeterminationMethod);
      FIELD_SET(*this, FIX::OptPayoutType);
      FIELD_SET(*this, FIX::NoComplexEvents);
      class NoComplexEvents: public FIX::Group
      {
      public:
      NoComplexEvents() : FIX::Group(1483,1484,FIX::message_order(1484,1485,1486,1487,1488,1489,1490,1491,0)) {}
        FIELD_SET(*this, FIX::ComplexEventType);
        FIELD_SET(*this, FIX::ComplexOptPayoutAmount);
        FIELD_SET(*this, FIX::ComplexEventPrice);
        FIELD_SET(*this, FIX::ComplexEventPriceBoundaryMethod);
        FIELD_SET(*this, FIX::ComplexEventPriceBoundaryPrecision);
        FIELD_SET(*this, FIX::ComplexEventPriceTimeType);
        FIELD_SET(*this, FIX::ComplexEventCondition);
        FIELD_SET(*this, FIX::NoComplexEventDates);
        class NoComplexEventDates: public FIX::Group
        {
        public:
        NoComplexEventDates() : FIX::Group(1491,1492,FIX::message_order(1492,1493,1494,0)) {}
          FIELD_SET(*this, FIX::ComplexEventStartDate);
          FIELD_SET(*this, FIX::ComplexEventEndDate);
          FIELD_SET(*this, FIX::NoComplexEventTimes);
          class NoComplexEventTimes: public FIX::Group
          {
          public:
          NoComplexEventTimes() : FIX::Group(1494,1495,FIX::message_order(1495,1496,0)) {}
            FIELD_SET(*this, FIX::ComplexEventStartTime);
            FIELD_SET(*this, FIX::ComplexEventEndTime);
          };
        };
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
      FIELD_SET(*this, FIX::EffectiveTime);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::LastUpdateTime);
      FIELD_SET(*this, FIX::NoSettlDetails);
      class NoSettlDetails: public FIX::Group
      {
      public:
      NoSettlDetails() : FIX::Group(1158,1164,FIX::message_order(1164,781,0)) {}
        FIELD_SET(*this, FIX::SettlObligSource);
        FIELD_SET(*this, FIX::NoSettlPartyIDs);
        class NoSettlPartyIDs: public FIX::Group
        {
        public:
        NoSettlPartyIDs() : FIX::Group(781,782,FIX::message_order(782,783,784,801,0)) {}
          FIELD_SET(*this, FIX::SettlPartyID);
          FIELD_SET(*this, FIX::SettlPartyIDSource);
          FIELD_SET(*this, FIX::SettlPartyRole);
          FIELD_SET(*this, FIX::NoSettlPartySubIDs);
          class NoSettlPartySubIDs: public FIX::Group
          {
          public:
          NoSettlPartySubIDs() : FIX::Group(801,785,FIX::message_order(785,786,0)) {}
            FIELD_SET(*this, FIX::SettlPartySubID);
            FIELD_SET(*this, FIX::SettlPartySubIDType);
          };
        };
      };
    };
  };

}

#endif
