#ifndef FIX50SP2_DERIVATIVESECURITYLISTREQUEST_H
#define FIX50SP2_DERIVATIVESECURITYLISTREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class DerivativeSecurityListRequest : public Message
  {
  public:
    DerivativeSecurityListRequest() : Message(MsgType()) {}
    DerivativeSecurityListRequest(const FIX::Message& m) : Message(m) {}
    DerivativeSecurityListRequest(const Message& m) : Message(m) {}
    DerivativeSecurityListRequest(const DerivativeSecurityListRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("z"); }

    DerivativeSecurityListRequest(
      const FIX::SecurityReqID& aSecurityReqID,
      const FIX::SecurityListRequestType& aSecurityListRequestType )
    : Message(MsgType())
    {
      set(aSecurityReqID);
      set(aSecurityListRequestType);
    }

    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::SecurityListRequestType);
    FIELD_SET(*this, FIX::UnderlyingSymbol);
    FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
    FIELD_SET(*this, FIX::UnderlyingSecurityID);
    FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
    FIELD_SET(*this, FIX::UnderlyingProduct);
    FIELD_SET(*this, FIX::UnderlyingCFICode);
    FIELD_SET(*this, FIX::UnderlyingSecurityType);
    FIELD_SET(*this, FIX::UnderlyingSecuritySubType);
    FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
    FIELD_SET(*this, FIX::UnderlyingMaturityDate);
    FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
    FIELD_SET(*this, FIX::UnderlyingIssueDate);
    FIELD_SET(*this, FIX::UnderlyingRepoCollateralSecurityType);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseTerm);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseRate);
    FIELD_SET(*this, FIX::UnderlyingFactor);
    FIELD_SET(*this, FIX::UnderlyingCreditRating);
    FIELD_SET(*this, FIX::UnderlyingInstrRegistry);
    FIELD_SET(*this, FIX::UnderlyingCountryOfIssue);
    FIELD_SET(*this, FIX::UnderlyingStateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::UnderlyingLocaleOfIssue);
    FIELD_SET(*this, FIX::UnderlyingRedemptionDate);
    FIELD_SET(*this, FIX::UnderlyingStrikePrice);
    FIELD_SET(*this, FIX::UnderlyingStrikeCurrency);
    FIELD_SET(*this, FIX::UnderlyingOptAttribute);
    FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
    FIELD_SET(*this, FIX::UnderlyingCouponRate);
    FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
    FIELD_SET(*this, FIX::UnderlyingIssuer);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
    FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::UnderlyingCPProgram);
    FIELD_SET(*this, FIX::UnderlyingCPRegType);
    FIELD_SET(*this, FIX::UnderlyingCurrency);
    FIELD_SET(*this, FIX::UnderlyingQty);
    FIELD_SET(*this, FIX::UnderlyingPx);
    FIELD_SET(*this, FIX::UnderlyingDirtyPrice);
    FIELD_SET(*this, FIX::UnderlyingEndPrice);
    FIELD_SET(*this, FIX::UnderlyingStartValue);
    FIELD_SET(*this, FIX::UnderlyingCurrentValue);
    FIELD_SET(*this, FIX::UnderlyingEndValue);
    FIELD_SET(*this, FIX::UnderlyingAllocationPercent);
    FIELD_SET(*this, FIX::UnderlyingSettlementType);
    FIELD_SET(*this, FIX::UnderlyingCashAmount);
    FIELD_SET(*this, FIX::UnderlyingCashType);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingTimeUnit);
    FIELD_SET(*this, FIX::UnderlyingCapValue);
    FIELD_SET(*this, FIX::UnderlyingSettlMethod);
    FIELD_SET(*this, FIX::UnderlyingAdjustedQuantity);
    FIELD_SET(*this, FIX::UnderlyingFXRate);
    FIELD_SET(*this, FIX::UnderlyingFXRateCalc);
    FIELD_SET(*this, FIX::UnderlyingMaturityTime);
    FIELD_SET(*this, FIX::UnderlyingPutOrCall);
    FIELD_SET(*this, FIX::UnderlyingExerciseStyle);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingContractMultiplierUnit);
    FIELD_SET(*this, FIX::UnderlyingFlowScheduleType);
    FIELD_SET(*this, FIX::UnderlyingRestructuringType);
    FIELD_SET(*this, FIX::UnderlyingSeniority);
    FIELD_SET(*this, FIX::UnderlyingNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::UnderlyingOriginalNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::UnderlyingAttachmentPoint);
    FIELD_SET(*this, FIX::UnderlyingDetachmentPoint);
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::DerivativeSymbol);
    FIELD_SET(*this, FIX::DerivativeSymbolSfx);
    FIELD_SET(*this, FIX::DerivativeSecurityID);
    FIELD_SET(*this, FIX::DerivativeSecurityIDSource);
    FIELD_SET(*this, FIX::DerivativeProduct);
    FIELD_SET(*this, FIX::DerivativeProductComplex);
    FIELD_SET(*this, FIX::DerivFlexProductEligibilityIndicator);
    FIELD_SET(*this, FIX::DerivativeSecurityGroup);
    FIELD_SET(*this, FIX::DerivativeCFICode);
    FIELD_SET(*this, FIX::DerivativeSecurityType);
    FIELD_SET(*this, FIX::DerivativeSecuritySubType);
    FIELD_SET(*this, FIX::DerivativeMaturityMonthYear);
    FIELD_SET(*this, FIX::DerivativeMaturityDate);
    FIELD_SET(*this, FIX::DerivativeMaturityTime);
    FIELD_SET(*this, FIX::DerivativeSettleOnOpenFlag);
    FIELD_SET(*this, FIX::DerivativeInstrmtAssignmentMethod);
    FIELD_SET(*this, FIX::DerivativeSecurityStatus);
    FIELD_SET(*this, FIX::DerivativeIssueDate);
    FIELD_SET(*this, FIX::DerivativeInstrRegistry);
    FIELD_SET(*this, FIX::DerivativeCountryOfIssue);
    FIELD_SET(*this, FIX::DerivativeStateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::DerivativeStrikePrice);
    FIELD_SET(*this, FIX::DerivativeLocaleOfIssue);
    FIELD_SET(*this, FIX::DerivativeStrikeCurrency);
    FIELD_SET(*this, FIX::DerivativeStrikeMultiplier);
    FIELD_SET(*this, FIX::DerivativeStrikeValue);
    FIELD_SET(*this, FIX::DerivativeOptAttribute);
    FIELD_SET(*this, FIX::DerivativeContractMultiplier);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrement);
    FIELD_SET(*this, FIX::DerivativeMinPriceIncrementAmount);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativeUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasure);
    FIELD_SET(*this, FIX::DerivativePriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::DerivativeExerciseStyle);
    FIELD_SET(*this, FIX::DerivativeOptPayAmount);
    FIELD_SET(*this, FIX::DerivativeTimeUnit);
    FIELD_SET(*this, FIX::DerivativeSecurityExchange);
    FIELD_SET(*this, FIX::DerivativePositionLimit);
    FIELD_SET(*this, FIX::DerivativeNTPositionLimit);
    FIELD_SET(*this, FIX::DerivativeIssuer);
    FIELD_SET(*this, FIX::DerivativeEncodedIssuerLen);
    FIELD_SET(*this, FIX::DerivativeEncodedIssuer);
    FIELD_SET(*this, FIX::DerivativeSecurityDesc);
    FIELD_SET(*this, FIX::DerivativeEncodedSecurityDescLen);
    FIELD_SET(*this, FIX::DerivativeEncodedSecurityDesc);
    FIELD_SET(*this, FIX::DerivativeContractSettlMonth);
    FIELD_SET(*this, FIX::DerivativeSettlMethod);
    FIELD_SET(*this, FIX::DerivativePriceQuoteMethod);
    FIELD_SET(*this, FIX::DerivativeValuationMethod);
    FIELD_SET(*this, FIX::DerivativeListMethod);
    FIELD_SET(*this, FIX::DerivativeCapPrice);
    FIELD_SET(*this, FIX::DerivativeFloorPrice);
    FIELD_SET(*this, FIX::DerivativePutOrCall);
    FIELD_SET(*this, FIX::DerivativeContractMultiplierUnit);
    FIELD_SET(*this, FIX::DerivativeFlowScheduleType);
  };

}

#endif
