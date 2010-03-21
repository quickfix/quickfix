#ifndef FIX50SP2_STREAMASSIGNMENTREQUEST_H
#define FIX50SP2_STREAMASSIGNMENTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class StreamAssignmentRequest : public Message
  {
  public:
    StreamAssignmentRequest() : Message(MsgType()) {}
    StreamAssignmentRequest(const FIX::Message& m) : Message(m) {}
    StreamAssignmentRequest(const Message& m) : Message(m) {}
    StreamAssignmentRequest(const StreamAssignmentRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("CC"); }

    StreamAssignmentRequest(
      const FIX::StreamAsgnReqID& aStreamAsgnReqID,
      const FIX::StreamAsgnReqType& aStreamAsgnReqType )
    : Message(MsgType())
    {
      set(aStreamAsgnReqID);
      set(aStreamAsgnReqType);
    }

    FIELD_SET(*this, FIX::StreamAsgnReqID);
    FIELD_SET(*this, FIX::StreamAsgnReqType);
    FIELD_SET(*this, FIX::NoAsgnReqs);
    class NoAsgnReqs: public FIX::Group
    {
    public:
    NoAsgnReqs() : FIX::Group(1499,453,FIX::message_order(453,146,0)) {}
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
      FIELD_SET(*this, FIX::NoRelatedSym);
      class NoRelatedSym: public FIX::Group
      {
      public:
      NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,965,966,1049,967,968,969,970,971,996,997,1079,1151,1146,1147,1227,1191,1192,1193,1194,1195,1196,1198,1199,1200,201,1244,1242,1197,1435,1439,1449,1450,1451,1452,1457,1458,1478,1479,1480,1481,1482,63,271,1500,0)) {}
        FIELD_SET(*this, FIX::Symbol);
        FIELD_SET(*this, FIX::SymbolSfx);
        FIELD_SET(*this, FIX::SecurityID);
        FIELD_SET(*this, FIX::SecurityIDSource);
        FIELD_SET(*this, FIX::Product);
        FIELD_SET(*this, FIX::CFICode);
        FIELD_SET(*this, FIX::SecurityType);
        FIELD_SET(*this, FIX::SecuritySubType);
        FIELD_SET(*this, FIX::MaturityMonthYear);
        FIELD_SET(*this, FIX::MaturityDate);
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
        FIELD_SET(*this, FIX::OptAttribute);
        FIELD_SET(*this, FIX::ContractMultiplier);
        FIELD_SET(*this, FIX::CouponRate);
        FIELD_SET(*this, FIX::SecurityExchange);
        FIELD_SET(*this, FIX::Issuer);
        FIELD_SET(*this, FIX::EncodedIssuerLen);
        FIELD_SET(*this, FIX::EncodedIssuer);
        FIELD_SET(*this, FIX::SecurityDesc);
        FIELD_SET(*this, FIX::EncodedSecurityDescLen);
        FIELD_SET(*this, FIX::EncodedSecurityDesc);
        FIELD_SET(*this, FIX::Pool);
        FIELD_SET(*this, FIX::ContractSettlMonth);
        FIELD_SET(*this, FIX::CPProgram);
        FIELD_SET(*this, FIX::CPRegType);
        FIELD_SET(*this, FIX::DatedDate);
        FIELD_SET(*this, FIX::InterestAccrualDate);
        FIELD_SET(*this, FIX::SecurityStatus);
        FIELD_SET(*this, FIX::SettleOnOpenFlag);
        FIELD_SET(*this, FIX::InstrmtAssignmentMethod);
        FIELD_SET(*this, FIX::StrikeMultiplier);
        FIELD_SET(*this, FIX::StrikeValue);
        FIELD_SET(*this, FIX::MinPriceIncrement);
        FIELD_SET(*this, FIX::PositionLimit);
        FIELD_SET(*this, FIX::NTPositionLimit);
        FIELD_SET(*this, FIX::UnitOfMeasure);
        FIELD_SET(*this, FIX::TimeUnit);
        FIELD_SET(*this, FIX::MaturityTime);
        FIELD_SET(*this, FIX::SecurityGroup);
        FIELD_SET(*this, FIX::MinPriceIncrementAmount);
        FIELD_SET(*this, FIX::UnitOfMeasureQty);
        FIELD_SET(*this, FIX::ProductComplex);
        FIELD_SET(*this, FIX::PriceUnitOfMeasure);
        FIELD_SET(*this, FIX::PriceUnitOfMeasureQty);
        FIELD_SET(*this, FIX::SettlMethod);
        FIELD_SET(*this, FIX::ExerciseStyle);
        FIELD_SET(*this, FIX::OptPayoutAmount);
        FIELD_SET(*this, FIX::PriceQuoteMethod);
        FIELD_SET(*this, FIX::ListMethod);
        FIELD_SET(*this, FIX::CapPrice);
        FIELD_SET(*this, FIX::FloorPrice);
        FIELD_SET(*this, FIX::PutOrCall);
        FIELD_SET(*this, FIX::FlexibleIndicator);
        FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
        FIELD_SET(*this, FIX::ValuationMethod);
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
        FIELD_SET(*this, FIX::SettlType);
        FIELD_SET(*this, FIX::MDEntrySize);
        FIELD_SET(*this, FIX::MDStreamID);
      };
    };
  };

}

#endif
