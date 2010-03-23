#pragma once

#undef Yield
#undef DUPLICATE
#undef STRICT
#undef DIFFERENCE
#include "Field.h"

namespace QuickFix
{
  public __gc class RelatedPartyID : public StringField
  {
  public:
    static const int FIELD = 1563;
    RelatedPartyID() : StringField(1563) {}
    RelatedPartyID(String* data) : StringField(1563, data) {}
  };

  public __gc class MaxPriceLevels : public IntField
  {
  public:
    static const int FIELD = 1090;
    MaxPriceLevels() : IntField(1090) {}
    MaxPriceLevels(int data) : IntField(1090, data) {}
  };

  public __gc class DerivativeEncodedIssuer : public StringField
  {
  public:
    static const int FIELD = 1278;
    DerivativeEncodedIssuer() : StringField(1278) {}
    DerivativeEncodedIssuer(String* data) : StringField(1278, data) {}
  };

  public __gc class NoCompIDs : public IntField
  {
  public:
    static const int FIELD = 936;
    NoCompIDs() : IntField(936) {}
    NoCompIDs(int data) : IntField(936, data) {}
  };

  public __gc class SettlInstRefID : public StringField
  {
  public:
    static const int FIELD = 214;
    SettlInstRefID() : StringField(214) {}
    SettlInstRefID(String* data) : StringField(214, data) {}
  };

  public __gc class NestedPartyID : public StringField
  {
  public:
    static const int FIELD = 524;
    NestedPartyID() : StringField(524) {}
    NestedPartyID(String* data) : StringField(524, data) {}
  };

  public __gc class DetachmentPoint : public DoubleField
  {
  public:
    static const int FIELD = 1458;
    DetachmentPoint() : DoubleField(1458) {}
    DetachmentPoint(double data) : DoubleField(1458, data) {}
    DetachmentPoint(double data, int decimalPadding) : DoubleField(1458, data, decimalPadding) {}
  };

  public __gc class LateIndicator : public BooleanField
  {
  public:
    static const int FIELD = 978;
    LateIndicator() : BooleanField(978) {}
    LateIndicator(bool data) : BooleanField(978, data) {}
  };

  public __gc class RiskEncodedSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1621;
    RiskEncodedSecurityDesc() : StringField(1621) {}
    RiskEncodedSecurityDesc(String* data) : StringField(1621, data) {}
  };

  public __gc class RelationshipRiskSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 1601;
    RelationshipRiskSecuritySubType() : StringField(1601) {}
    RelationshipRiskSecuritySubType(String* data) : StringField(1601, data) {}
  };

  public __gc class SecurityListID : public StringField
  {
  public:
    static const int FIELD = 1465;
    SecurityListID() : StringField(1465) {}
    SecurityListID(String* data) : StringField(1465, data) {}
  };

  public __gc class DerivativeFlowScheduleType : public IntField
  {
  public:
    static const int FIELD = 1442;
    DerivativeFlowScheduleType() : IntField(1442) {}
    DerivativeFlowScheduleType(int data) : IntField(1442, data) {}
  };

  public __gc class EncodedSymbolLen : public IntField
  {
  public:
    static const int FIELD = 1359;
    EncodedSymbolLen() : IntField(1359) {}
    EncodedSymbolLen(int data) : IntField(1359, data) {}
  };

  public __gc class FlexibleIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1244;
    FlexibleIndicator() : BooleanField(1244) {}
    FlexibleIndicator(bool data) : BooleanField(1244, data) {}
  };

  public __gc class NoExecInstRules : public IntField
  {
  public:
    static const int FIELD = 1232;
    NoExecInstRules() : IntField(1232) {}
    NoExecInstRules(int data) : IntField(1232, data) {}
  };

  public __gc class SideTrdRegTimestamp : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1012;
    SideTrdRegTimestamp() : UtcTimeStampField(1012) {}
    SideTrdRegTimestamp(DateTime data) : UtcTimeStampField(1012, data) {}
  };

  public __gc class DeliveryForm : public IntField
  {
  public:
    static const int FIELD = 668;
    static const int BOOKENTRY = 1;
    static const int BEARER = 2;
    static const int BOOK_ENTRY = 1;
    DeliveryForm() : IntField(668) {}
    DeliveryForm(int data) : IntField(668, data) {}
  };

  public __gc class ExecRestatementReason : public IntField
  {
  public:
    static const int FIELD = 378;
    static const int GTRENEW = 1;
    static const int WAREHOUSE_RECAP = 10;
    static const int CANCELEDNOTBEST = 9;
    static const int CANCEL_ON_SYSTEM_FAILURE = 7;
    static const int CXLTRADINGHALT = 6;
    static const int PARTIAL_DECLINE_OF_ORDERQTY = 5;
    static const int GT_CORPORATE_ACTION = 0;
    static const int PEG_REFRESH = 11;
    static const int VERBAL = 2;
    static const int CANCELED_NOT_BEST = 9;
    static const int CANCEL_ON_TRADING_HALT = 6;
    static const int REPX = 3;
    static const int MRKTOPTION = 8;
    static const int VERBAL_CHANGE = 2;
    static const int PARTDEC = 5;
    static const int CXLSYSTEMFAILURE = 7;
    static const int GTCORPACT = 0;
    static const int OTHER = 99;
    static const int BROKER_OPTION = 4;
    static const int WAREHOUSERECAP = 10;
    static const int BRKROPT = 4;
    static const int REPRICING_OF_ORDER = 3;
    static const int MARKET = 8;
    static const int GT_RENEWAL = 1;
    ExecRestatementReason() : IntField(378) {}
    ExecRestatementReason(int data) : IntField(378, data) {}
  };

  public __gc class MidYield : public DoubleField
  {
  public:
    static const int FIELD = 633;
    MidYield() : DoubleField(633) {}
    MidYield(double data) : DoubleField(633, data) {}
    MidYield(double data, int decimalPadding) : DoubleField(633, data, decimalPadding) {}
  };

  public __gc class ContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 231;
    ContractMultiplier() : DoubleField(231) {}
    ContractMultiplier(double data) : DoubleField(231, data) {}
    ContractMultiplier(double data, int decimalPadding) : DoubleField(231, data, decimalPadding) {}
  };

  public __gc class PartyAltIDSource : public CharField
  {
  public:
    static const int FIELD = 1518;
    PartyAltIDSource() : CharField(1518) {}
    PartyAltIDSource(__wchar_t data) : CharField(1518, data) {}
  };

  public __gc class CcyAmt : public DoubleField
  {
  public:
    static const int FIELD = 1157;
    CcyAmt() : DoubleField(1157) {}
    CcyAmt(double data) : DoubleField(1157, data) {}
    CcyAmt(double data, int decimalPadding) : DoubleField(1157, data, decimalPadding) {}
  };

  public __gc class AllocIntermedReqType : public IntField
  {
  public:
    static const int FIELD = 808;
    static const int PENDING_RELEASE = 2;
    static const int PENDING_REVERSAL = 3;
    static const int ACCOUNTLEVELREJECT = 6;
    static const int PENDINGACCEPT = 1;
    static const int BLOCK_LEVEL_REJECT = 5;
    static const int ACCOUNT_LEVEL_REJECT = 6;
    static const int BLOCKLEVELREJECT = 5;
    static const int PENDING_ACCEPT = 1;
    static const int PENDINGREVERSAL = 3;
    static const int PENDINGRELEASE = 2;
    static const int ACCEPT = 4;
    AllocIntermedReqType() : IntField(808) {}
    AllocIntermedReqType(int data) : IntField(808, data) {}
  };

  public __gc class NoNested2PartyIDs : public IntField
  {
  public:
    static const int FIELD = 756;
    NoNested2PartyIDs() : IntField(756) {}
    NoNested2PartyIDs(int data) : IntField(756, data) {}
  };

  public __gc class UnderlyingIssuer : public StringField
  {
  public:
    static const int FIELD = 306;
    UnderlyingIssuer() : StringField(306) {}
    UnderlyingIssuer(String* data) : StringField(306, data) {}
  };

  public __gc class LegOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 685;
    LegOrderQty() : DoubleField(685) {}
    LegOrderQty(double data) : DoubleField(685, data) {}
    LegOrderQty(double data, int decimalPadding) : DoubleField(685, data, decimalPadding) {}
  };

  public __gc class MinTradeVol : public DoubleField
  {
  public:
    static const int FIELD = 562;
    MinTradeVol() : DoubleField(562) {}
    MinTradeVol(double data) : DoubleField(562, data) {}
    MinTradeVol(double data, int decimalPadding) : DoubleField(562, data, decimalPadding) {}
  };

  public __gc class SettlCurrAmt : public DoubleField
  {
  public:
    static const int FIELD = 119;
    SettlCurrAmt() : DoubleField(119) {}
    SettlCurrAmt(double data) : DoubleField(119, data) {}
    SettlCurrAmt(double data, int decimalPadding) : DoubleField(119, data, decimalPadding) {}
  };

  public __gc class DerivativeInstrumentPartyRole : public IntField
  {
  public:
    static const int FIELD = 1295;
    DerivativeInstrumentPartyRole() : IntField(1295) {}
    DerivativeInstrumentPartyRole(int data) : IntField(1295, data) {}
  };

  public __gc class YieldRedemptionPriceType : public IntField
  {
  public:
    static const int FIELD = 698;
    YieldRedemptionPriceType() : IntField(698) {}
    YieldRedemptionPriceType(int data) : IntField(698, data) {}
  };

  public __gc class NewsRefID : public StringField
  {
  public:
    static const int FIELD = 1476;
    NewsRefID() : StringField(1476) {}
    NewsRefID(String* data) : StringField(1476, data) {}
  };

  public __gc class SecurityListTypeSource : public IntField
  {
  public:
    static const int FIELD = 1471;
    static const int GICS = 3;
    static const int NAICS = 2;
    static const int ICB = 1;
    SecurityListTypeSource() : IntField(1471) {}
    SecurityListTypeSource(int data) : IntField(1471, data) {}
  };

  public __gc class ApplReqID : public StringField
  {
  public:
    static const int FIELD = 1346;
    ApplReqID() : StringField(1346) {}
    ApplReqID(String* data) : StringField(1346, data) {}
  };

  public __gc class DerivativeFuturesValuationMethod : public StringField
  {
  public:
    static const int FIELD = 1319;
    DerivativeFuturesValuationMethod() : StringField(1319) {}
    DerivativeFuturesValuationMethod(String* data) : StringField(1319, data) {}
  };

  public __gc class NoLegSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 604;
    NoLegSecurityAltID() : StringField(604) {}
    NoLegSecurityAltID(String* data) : StringField(604, data) {}
  };

  public __gc class DerivativeSecurityType : public StringField
  {
  public:
    static const int FIELD = 1249;
    DerivativeSecurityType() : StringField(1249) {}
    DerivativeSecurityType(String* data) : StringField(1249, data) {}
  };

  public __gc class CollInquiryQualifier : public IntField
  {
  public:
    static const int FIELD = 896;
    static const int PARTIALLY_ASSIGNED = 5;
    static const int OUTSTANDING_TRADES = 7;
    static const int SUBSTITUTIONELIGIBLE = 3;
    static const int TRADE_DATE = 0;
    static const int FULLYASSIGNED = 6;
    static const int SUBSTITUTION_ELIGIBLE = 3;
    static const int FULLY_ASSIGNED = 6;
    static const int NOTASSIGNED = 4;
    static const int GCINSTRUMENT = 1;
    static const int NOT_ASSIGNED = 4;
    static const int COLLATERAL_INSTRUMENT = 2;
    static const int OUTSTANDINGTRADES = 7;
    static const int TRADEDATE = 0;
    static const int GC_INSTRUMENT = 1;
    static const int PARTIALLYASSIGNED = 5;
    static const int COLLATERALINSTRUMENT = 2;
    CollInquiryQualifier() : IntField(896) {}
    CollInquiryQualifier(int data) : IntField(896, data) {}
  };

  public __gc class RawData : public StringField
  {
  public:
    static const int FIELD = 96;
    RawData() : StringField(96) {}
    RawData(String* data) : StringField(96, data) {}
  };

  public __gc class CashSettlAgentContactPhone : public StringField
  {
  public:
    static const int FIELD = 187;
    CashSettlAgentContactPhone() : StringField(187) {}
    CashSettlAgentContactPhone(String* data) : StringField(187, data) {}
  };

  public __gc class CreditRating : public StringField
  {
  public:
    static const int FIELD = 255;
    CreditRating() : StringField(255) {}
    CreditRating(String* data) : StringField(255, data) {}
  };

  public __gc class ContingencyType : public IntField
  {
  public:
    static const int FIELD = 1385;
    static const int ONE_UPDATES_THE_OTHER_4 = 4;
    static const int ONE_TRIGGERS_THE_OTHER = 2;
    static const int ONE_CANCELS_THE_OTHER = 1;
    static const int ONE_UPDATES_THE_OTHER_3 = 3;
    ContingencyType() : IntField(1385) {}
    ContingencyType(int data) : IntField(1385, data) {}
  };

  public __gc class StrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 947;
    StrikeCurrency() : StringField(947) {}
    StrikeCurrency(String* data) : StringField(947, data) {}
  };

  public __gc class TradeVolume : public DoubleField
  {
  public:
    static const int FIELD = 1020;
    TradeVolume() : DoubleField(1020) {}
    TradeVolume(double data) : DoubleField(1020, data) {}
    TradeVolume(double data, int decimalPadding) : DoubleField(1020, data, decimalPadding) {}
  };

  public __gc class SideTrdRegTimestampSrc : public StringField
  {
  public:
    static const int FIELD = 1014;
    SideTrdRegTimestampSrc() : StringField(1014) {}
    SideTrdRegTimestampSrc(String* data) : StringField(1014, data) {}
  };

  public __gc class DeliveryDate : public StringField
  {
  public:
    static const int FIELD = 743;
    DeliveryDate() : StringField(743) {}
    DeliveryDate(String* data) : StringField(743, data) {}
  };

  public __gc class EmailType : public CharField
  {
  public:
    static const int FIELD = 94;
    static const __wchar_t NEW = '0';
    static const __wchar_t REPLY = '1';
    static const __wchar_t ADMIN_REPLY = '2';
    static const __wchar_t ADMINREPLY = '2';
    EmailType() : CharField(94) {}
    EmailType(__wchar_t data) : CharField(94, data) {}
  };

  public __gc class EncodedListExecInst : public StringField
  {
  public:
    static const int FIELD = 353;
    EncodedListExecInst() : StringField(353) {}
    EncodedListExecInst(String* data) : StringField(353, data) {}
  };

  public __gc class ContraTradeTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 438;
    ContraTradeTime() : UtcTimeStampField(438) {}
    ContraTradeTime(DateTime data) : UtcTimeStampField(438, data) {}
  };

  public __gc class MaturityMonthYearIncrement : public IntField
  {
  public:
    static const int FIELD = 1229;
    MaturityMonthYearIncrement() : IntField(1229) {}
    MaturityMonthYearIncrement(int data) : IntField(1229, data) {}
  };

  public __gc class RootPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1118;
    RootPartyIDSource() : CharField(1118) {}
    RootPartyIDSource(__wchar_t data) : CharField(1118, data) {}
  };

  public __gc class UnderlyingCouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 241;
    UnderlyingCouponPaymentDate() : StringField(241) {}
    UnderlyingCouponPaymentDate(String* data) : StringField(241, data) {}
  };

  public __gc class BidYield : public DoubleField
  {
  public:
    static const int FIELD = 632;
    BidYield() : DoubleField(632) {}
    BidYield(double data) : DoubleField(632, data) {}
    BidYield(double data, int decimalPadding) : DoubleField(632, data, decimalPadding) {}
  };

  public __gc class IOIQltyInd : public CharField
  {
  public:
    static const int FIELD = 25;
    static const __wchar_t MEDIUM = 'M';
    static const __wchar_t HIGH = 'H';
    static const __wchar_t LOW = 'L';
    IOIQltyInd() : CharField(25) {}
    IOIQltyInd(__wchar_t data) : CharField(25, data) {}
  };

  public __gc class Issuer : public StringField
  {
  public:
    static const int FIELD = 106;
    Issuer() : StringField(106) {}
    Issuer(String* data) : StringField(106, data) {}
  };

  public __gc class CardNumber : public StringField
  {
  public:
    static const int FIELD = 489;
    CardNumber() : StringField(489) {}
    CardNumber(String* data) : StringField(489, data) {}
  };

  public __gc class NoRelatedPartyIDs : public IntField
  {
  public:
    static const int FIELD = 1562;
    NoRelatedPartyIDs() : IntField(1562) {}
    NoRelatedPartyIDs(int data) : IntField(1562, data) {}
  };

  public __gc class NoLegStipulations : public IntField
  {
  public:
    static const int FIELD = 683;
    NoLegStipulations() : IntField(683) {}
    NoLegStipulations(int data) : IntField(683, data) {}
  };

  public __gc class LegSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 616;
    LegSecurityExchange() : StringField(616) {}
    LegSecurityExchange(String* data) : StringField(616, data) {}
  };

  public __gc class CashOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 152;
    CashOrderQty() : DoubleField(152) {}
    CashOrderQty(double data) : DoubleField(152, data) {}
    CashOrderQty(double data, int decimalPadding) : DoubleField(152, data, decimalPadding) {}
  };

  public __gc class AccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 159;
    AccruedInterestAmt() : DoubleField(159) {}
    AccruedInterestAmt(double data) : DoubleField(159, data) {}
    AccruedInterestAmt(double data, int decimalPadding) : DoubleField(159, data, decimalPadding) {}
  };

  public __gc class MDEntrySeller : public StringField
  {
  public:
    static const int FIELD = 289;
    MDEntrySeller() : StringField(289) {}
    MDEntrySeller(String* data) : StringField(289, data) {}
  };

  public __gc class LegPrice : public DoubleField
  {
  public:
    static const int FIELD = 566;
    LegPrice() : DoubleField(566) {}
    LegPrice(double data) : DoubleField(566, data) {}
    LegPrice(double data, int decimalPadding) : DoubleField(566, data, decimalPadding) {}
  };

  public __gc class RelationshipRiskMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1603;
    RelationshipRiskMaturityTime() : StringField(1603) {}
    RelationshipRiskMaturityTime(String* data) : StringField(1603, data) {}
  };

  public __gc class DeliverToCompID : public StringField
  {
  public:
    static const int FIELD = 128;
    DeliverToCompID() : StringField(128) {}
    DeliverToCompID(String* data) : StringField(128, data) {}
  };

  public __gc class TargetLocationID : public StringField
  {
  public:
    static const int FIELD = 143;
    TargetLocationID() : StringField(143) {}
    TargetLocationID(String* data) : StringField(143, data) {}
  };

  public __gc class OfferForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 643;
    OfferForwardPoints2() : DoubleField(643) {}
    OfferForwardPoints2(double data) : DoubleField(643, data) {}
    OfferForwardPoints2(double data, int decimalPadding) : DoubleField(643, data, decimalPadding) {}
  };

  public __gc class RatioQty : public DoubleField
  {
  public:
    static const int FIELD = 319;
    RatioQty() : DoubleField(319) {}
    RatioQty(double data) : DoubleField(319, data) {}
    RatioQty(double data, int decimalPadding) : DoubleField(319, data, decimalPadding) {}
  };

  public __gc class MultiLegRptTypeReq : public IntField
  {
  public:
    static const int FIELD = 563;
    static const int REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = 2;
    static const int REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = 1;
    static const int REPORT_BY_MULITLEG_SECURITY_ONLY = 0;
    MultiLegRptTypeReq() : IntField(563) {}
    MultiLegRptTypeReq(int data) : IntField(563, data) {}
  };

  public __gc class AllocAccount : public StringField
  {
  public:
    static const int FIELD = 79;
    AllocAccount() : StringField(79) {}
    AllocAccount(String* data) : StringField(79, data) {}
  };

  public __gc class TotalVolumeTraded : public DoubleField
  {
  public:
    static const int FIELD = 387;
    TotalVolumeTraded() : DoubleField(387) {}
    TotalVolumeTraded(double data) : DoubleField(387, data) {}
    TotalVolumeTraded(double data, int decimalPadding) : DoubleField(387, data, decimalPadding) {}
  };

  public __gc class LinesOfText : public IntField
  {
  public:
    static const int FIELD = 33;
    LinesOfText() : IntField(33) {}
    LinesOfText(int data) : IntField(33, data) {}
  };

  public __gc class AccountType : public IntField
  {
  public:
    static const int FIELD = 581;
    static const int ACCOUNTCUSTOMER = 1;
    static const int HOUSE_TRADER = 3;
    static const int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_THE_BOOKS = 1;
    static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
    static const int FLOOR_TRADER = 4;
    static const int JOINT_BACK_OFFICE_ACCOUNT = 8;
    static const int HOUSETRADER = 3;
    static const int FLOORTRADER = 4;
    static const int ACCOUNTNONCUSTOMERCROSS = 6;
    static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
    static const int ACCOUNTNONCUSTOMER = 2;
    static const int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
    static const int HOUSETRADERCROSS = 7;
    static const int JOINTBOACCT = 8;
    static const int JOINT_BACKOFFICE_ACCOUNT = 8;
    static const int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
    AccountType() : IntField(581) {}
    AccountType(int data) : IntField(581, data) {}
  };

  public __gc class MDEntryPositionNo : public IntField
  {
  public:
    static const int FIELD = 290;
    MDEntryPositionNo() : IntField(290) {}
    MDEntryPositionNo(int data) : IntField(290, data) {}
  };

  public __gc class HaltReasonInt : public IntField
  {
  public:
    static const int FIELD = 327;
    static const int ADDITIONAL_INFORMATION = 3;
    static const int NEWS_PENDING = 4;
    static const int ORDER_INFLUX = 1;
    static const int NEWS_DISSEMINATION = 0;
    static const int EQUIPMENT_CHANGEOVER = 5;
    static const int ORDER_IMBALANCE = 2;
    HaltReasonInt() : IntField(327) {}
    HaltReasonInt(int data) : IntField(327, data) {}
  };

  public __gc class FutSettDate : public StringField
  {
  public:
    static const int FIELD = 64;
    FutSettDate() : StringField(64) {}
    FutSettDate(String* data) : StringField(64, data) {}
  };

  public __gc class SecurityDesc : public StringField
  {
  public:
    static const int FIELD = 107;
    SecurityDesc() : StringField(107) {}
    SecurityDesc(String* data) : StringField(107, data) {}
  };

  public __gc class MinQty : public DoubleField
  {
  public:
    static const int FIELD = 110;
    MinQty() : DoubleField(110) {}
    MinQty(double data) : DoubleField(110, data) {}
    MinQty(double data, int decimalPadding) : DoubleField(110, data, decimalPadding) {}
  };

  public __gc class SettlCurrency : public StringField
  {
  public:
    static const int FIELD = 120;
    SettlCurrency() : StringField(120) {}
    SettlCurrency(String* data) : StringField(120, data) {}
  };

  public __gc class PegOffsetValue : public DoubleField
  {
  public:
    static const int FIELD = 211;
    PegOffsetValue() : DoubleField(211) {}
    PegOffsetValue(double data) : DoubleField(211, data) {}
    PegOffsetValue(double data, int decimalPadding) : DoubleField(211, data, decimalPadding) {}
  };

  public __gc class DerivativeSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 1220;
    DerivativeSecurityAltIDSource() : StringField(1220) {}
    DerivativeSecurityAltIDSource(String* data) : StringField(1220, data) {}
  };

  public __gc class NoSettlPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 801;
    NoSettlPartySubIDs() : IntField(801) {}
    NoSettlPartySubIDs(int data) : IntField(801, data) {}
  };

  public __gc class AllocReportID : public StringField
  {
  public:
    static const int FIELD = 755;
    AllocReportID() : StringField(755) {}
    AllocReportID(String* data) : StringField(755, data) {}
  };

  public __gc class LegCFICode : public StringField
  {
  public:
    static const int FIELD = 608;
    LegCFICode() : StringField(608) {}
    LegCFICode(String* data) : StringField(608, data) {}
  };

  public __gc class LegFutSettDate : public StringField
  {
  public:
    static const int FIELD = 588;
    LegFutSettDate() : StringField(588) {}
    LegFutSettDate(String* data) : StringField(588, data) {}
  };

  public __gc class LegBenchmarkCurveName : public StringField
  {
  public:
    static const int FIELD = 677;
    LegBenchmarkCurveName() : StringField(677) {}
    LegBenchmarkCurveName(String* data) : StringField(677, data) {}
  };

  public __gc class ClearingFeeIndicator : public StringField
  {
  public:
    static const int FIELD = 635;
    static const String* _3RDYEARDELEGATE = "3";
    static const String* FULLASSOCIATEMEMBER = "F";
    static const String* _106H_AND_106J_FIRMS = "H";
    static const String* _4THYEARDELEGATE = "4";
    static const String* _5THYEARDELEGATE = "5";
    static const String* EQUITYCLEARINGMEMBER = "E";
    static const String* GIMIDEMCOMMEMBERSHIP = "I";
    static const String* _2NDYEARDELEGATE = "2";
    static const String* _1ST_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "1";
    static const String* _1STYEARDELEGATE = "1";
    static const String* _106H106J = "H";
    static const String* GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS = "I";
    static const String* _2ND_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "2";
    static const String* _4TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "4";
    static const String* _3RD_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "3";
    static const String* LESSEE_106F_EMPLOYEES = "L";
    static const String* _6THYEARDELEGATE = "9";
    static const String* NON_MEMBER_AND_CUSTOMER = "C";
    static const String* _5TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "5";
    static const String* FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS = "F";
    static const String* CBOE_MEMBER = "B";
    static const String* _1ST_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "1";
    static const String* _5TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "5";
    static const String* NONMEMBERCUSTOMER = "C";
    static const String* LESSEE_AND_106F_EMPLOYEES = "L";
    static const String* FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR = "F";
    static const String* _3RD_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "3";
    static const String* _2ND_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "2";
    static const String* CBOEMEMBER = "B";
    static const String* LESSEE106F = "L";
    static const String* ALLOTHERS = "M";
    static const String* EQUITY_MEMBER_AND_CLEARING_MEMBER = "E";
    static const String* ALL_OTHER_OWNERSHIP_TYPES = "M";
    static const String* _6TH_YEAR_AND_BEYOND_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT = "9";
    static const String* _4TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "4";
    static const String* _6TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "9";
    ClearingFeeIndicator() : StringField(635) {}
    ClearingFeeIndicator(String* data) : StringField(635, data) {}
  };

  public __gc class BrokerOfCredit : public StringField
  {
  public:
    static const int FIELD = 92;
    BrokerOfCredit() : StringField(92) {}
    BrokerOfCredit(String* data) : StringField(92, data) {}
  };

  public __gc class SecurityListRefID : public StringField
  {
  public:
    static const int FIELD = 1466;
    SecurityListRefID() : StringField(1466) {}
    SecurityListRefID(String* data) : StringField(1466, data) {}
  };

  public __gc class UnderlyingLegMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1405;
    UnderlyingLegMaturityTime() : StringField(1405) {}
    UnderlyingLegMaturityTime(String* data) : StringField(1405, data) {}
  };

  public __gc class NestedPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 805;
    NestedPartySubIDType() : IntField(805) {}
    NestedPartySubIDType(int data) : IntField(805, data) {}
  };

  public __gc class BidType : public IntField
  {
  public:
    static const int FIELD = 394;
    static const int DISCLOSED_STYLE = 2;
    static const int NONDISC = 1;
    static const int NO_BIDDING_PROCESS = 3;
    static const int DISC = 2;
    static const int DISCLOSED_SYTLE = 2;
    static const int NOBID = 3;
    static const int NON_DISCLOSED_STYLE = 1;
    BidType() : IntField(394) {}
    BidType(int data) : IntField(394, data) {}
  };

  public __gc class MDEntryRefID : public StringField
  {
  public:
    static const int FIELD = 280;
    MDEntryRefID() : StringField(280) {}
    MDEntryRefID(String* data) : StringField(280, data) {}
  };

  public __gc class UnderlyingUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1423;
    UnderlyingUnitOfMeasureQty() : DoubleField(1423) {}
    UnderlyingUnitOfMeasureQty(double data) : DoubleField(1423, data) {}
    UnderlyingUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1423, data, decimalPadding) {}
  };

  public __gc class UnderlyingLegMaturityDate : public StringField
  {
  public:
    static const int FIELD = 1345;
    UnderlyingLegMaturityDate() : StringField(1345) {}
    UnderlyingLegMaturityDate(String* data) : StringField(1345, data) {}
  };

  public __gc class StartTickPriceRange : public DoubleField
  {
  public:
    static const int FIELD = 1206;
    StartTickPriceRange() : DoubleField(1206) {}
    StartTickPriceRange(double data) : DoubleField(1206, data) {}
    StartTickPriceRange(double data, int decimalPadding) : DoubleField(1206, data, decimalPadding) {}
  };

  public __gc class LegContractSettlMonth : public StringField
  {
  public:
    static const int FIELD = 955;
    LegContractSettlMonth() : StringField(955) {}
    LegContractSettlMonth(String* data) : StringField(955, data) {}
  };

  public __gc class UnderlyingSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 307;
    UnderlyingSecurityDesc() : StringField(307) {}
    UnderlyingSecurityDesc(String* data) : StringField(307, data) {}
  };

  public __gc class CashDistribPayRef : public StringField
  {
  public:
    static const int FIELD = 501;
    CashDistribPayRef() : StringField(501) {}
    CashDistribPayRef(String* data) : StringField(501, data) {}
  };

  public __gc class QuotePriceType : public IntField
  {
  public:
    static const int FIELD = 692;
    static const int PER_SHARE = 2;
    static const int BASISPOINTSRELATIVETOBENCHMARK = 6;
    static const int TEDPRICE = 7;
    static const int PERSHARE = 2;
    static const int YIELD = 10;
    static const int FIXED_AMOUNT = 3;
    static const int TED_YIELD = 8;
    static const int PREMIUM = 5;
    static const int FIXEDAMOUNT = 3;
    static const int YIELDSPREADSWAPS = 9;
    static const int TEDYIELD = 8;
    static const int DISCOUNT = 4;
    static const int YIELD_SPREAD = 9;
    static const int TED_PRICE = 7;
    static const int PERCENT = 1;
    static const int SPREAD = 6;
    QuotePriceType() : IntField(692) {}
    QuotePriceType(int data) : IntField(692, data) {}
  };

  public __gc class EncodedAllocText : public StringField
  {
  public:
    static const int FIELD = 361;
    EncodedAllocText() : StringField(361) {}
    EncodedAllocText(String* data) : StringField(361, data) {}
  };

  public __gc class UnderlyingMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 313;
    UnderlyingMaturityMonthYear() : StringField(313) {}
    UnderlyingMaturityMonthYear(String* data) : StringField(313, data) {}
  };

  public __gc class RiskWarningLevelPercent : public DoubleField
  {
  public:
    static const int FIELD = 1560;
    RiskWarningLevelPercent() : DoubleField(1560) {}
    RiskWarningLevelPercent(double data) : DoubleField(1560, data) {}
    RiskWarningLevelPercent(double data, int decimalPadding) : DoubleField(1560, data, decimalPadding) {}
  };

  public __gc class UnderlyingOriginalNotionalPercentageOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 1456;
    UnderlyingOriginalNotionalPercentageOutstanding() : DoubleField(1456) {}
    UnderlyingOriginalNotionalPercentageOutstanding(double data) : DoubleField(1456, data) {}
    UnderlyingOriginalNotionalPercentageOutstanding(double data, int decimalPadding) : DoubleField(1456, data, decimalPadding) {}
  };

  public __gc class MultilegPriceMethod : public IntField
  {
  public:
    static const int FIELD = 1378;
    static const int CONTRACT_WEIGHTED_AVERAGE_PRICE = 4;
    static const int REVERSED_NET_PRICE = 1;
    static const int MULTIPLIED_PRICE = 5;
    static const int INDIVIDUAL = 3;
    static const int YIELD_DIFFERENCE = 2;
    static const int NET_PRICE = 0;
    MultilegPriceMethod() : IntField(1378) {}
    MultilegPriceMethod(int data) : IntField(1378, data) {}
  };

  public __gc class TotNoFills : public IntField
  {
  public:
    static const int FIELD = 1361;
    TotNoFills() : IntField(1361) {}
    TotNoFills(int data) : IntField(1361, data) {}
  };

  public __gc class DerivativeSettleOnOpenFlag : public StringField
  {
  public:
    static const int FIELD = 1254;
    DerivativeSettleOnOpenFlag() : StringField(1254) {}
    DerivativeSettleOnOpenFlag(String* data) : StringField(1254, data) {}
  };

  public __gc class UnderlyingRepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 244;
    UnderlyingRepurchaseTerm() : IntField(244) {}
    UnderlyingRepurchaseTerm(int data) : IntField(244, data) {}
  };

  public __gc class RiskWarningLevelName : public StringField
  {
  public:
    static const int FIELD = 1561;
    RiskWarningLevelName() : StringField(1561) {}
    RiskWarningLevelName(String* data) : StringField(1561, data) {}
  };

  public __gc class DerivativeCountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 1258;
    DerivativeCountryOfIssue() : StringField(1258) {}
    DerivativeCountryOfIssue(String* data) : StringField(1258, data) {}
  };

  public __gc class ListMethod : public IntField
  {
  public:
    static const int FIELD = 1198;
    static const int PRE_LISTED_ONLY = 0;
    static const int USER_REQUESTED = 1;
    ListMethod() : IntField(1198) {}
    ListMethod(int data) : IntField(1198, data) {}
  };

  public __gc class UnderlyingCPProgram : public StringField
  {
  public:
    static const int FIELD = 877;
    UnderlyingCPProgram() : StringField(877) {}
    UnderlyingCPProgram(String* data) : StringField(877, data) {}
  };

  public __gc class PriceDelta : public DoubleField
  {
  public:
    static const int FIELD = 811;
    PriceDelta() : DoubleField(811) {}
    PriceDelta(double data) : DoubleField(811, data) {}
    PriceDelta(double data, int decimalPadding) : DoubleField(811, data, decimalPadding) {}
  };

  public __gc class RefSeqNum : public IntField
  {
  public:
    static const int FIELD = 45;
    RefSeqNum() : IntField(45) {}
    RefSeqNum(int data) : IntField(45, data) {}
  };

  public __gc class AutoAcceptIndicator : public BooleanField
  {
  public:
    static const int FIELD = 754;
    AutoAcceptIndicator() : BooleanField(754) {}
    AutoAcceptIndicator(bool data) : BooleanField(754, data) {}
  };

  public __gc class MDImplicitDelete : public BooleanField
  {
  public:
    static const int FIELD = 547;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    MDImplicitDelete() : BooleanField(547) {}
    MDImplicitDelete(bool data) : BooleanField(547, data) {}
  };

  public __gc class NoStipulations : public IntField
  {
  public:
    static const int FIELD = 232;
    NoStipulations() : IntField(232) {}
    NoStipulations(int data) : IntField(232, data) {}
  };

  public __gc class ClearingBusinessDate : public StringField
  {
  public:
    static const int FIELD = 715;
    ClearingBusinessDate() : StringField(715) {}
    ClearingBusinessDate(String* data) : StringField(715, data) {}
  };

  public __gc class NoRelationshipRiskLimits : public IntField
  {
  public:
    static const int FIELD = 1582;
    NoRelationshipRiskLimits() : IntField(1582) {}
    NoRelationshipRiskLimits(int data) : IntField(1582, data) {}
  };

  public __gc class LocationID : public StringField
  {
  public:
    static const int FIELD = 283;
    LocationID() : StringField(283) {}
    LocationID(String* data) : StringField(283, data) {}
  };

  public __gc class Currency : public StringField
  {
  public:
    static const int FIELD = 15;
    Currency() : StringField(15) {}
    Currency(String* data) : StringField(15, data) {}
  };

  public __gc class RoutingType : public IntField
  {
  public:
    static const int FIELD = 216;
    static const int BLOCKLIST = 4;
    static const int TARGET_LIST = 2;
    static const int TARGET_FIRM = 1;
    static const int TARGETFIRM = 1;
    static const int TARGETLIST = 2;
    static const int BLOCK_LIST = 4;
    static const int BLOCK_FIRM = 3;
    static const int BLOCKFIRM = 3;
    RoutingType() : IntField(216) {}
    RoutingType(int data) : IntField(216, data) {}
  };

  public __gc class UnderlyingStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 316;
    UnderlyingStrikePrice() : DoubleField(316) {}
    UnderlyingStrikePrice(double data) : DoubleField(316, data) {}
    UnderlyingStrikePrice(double data, int decimalPadding) : DoubleField(316, data, decimalPadding) {}
  };

  public __gc class BidTradeType : public CharField
  {
  public:
    static const int FIELD = 418;
    static const __wchar_t RISKTRADE = 'R';
    static const __wchar_t VWAPGUARANTEE = 'G';
    static const __wchar_t AGENCY = 'A';
    static const __wchar_t GUARANTEEDCLOSE = 'J';
    static const __wchar_t VWAP_GUARANTEE = 'G';
    static const __wchar_t RISK_TRADE = 'R';
    static const __wchar_t GUARANTEED_CLOSE = 'J';
    BidTradeType() : CharField(418) {}
    BidTradeType(__wchar_t data) : CharField(418, data) {}
  };

  public __gc class RelationshipRiskInstrumentOperator : public IntField
  {
  public:
    static const int FIELD = 1588;
    RelationshipRiskInstrumentOperator() : IntField(1588) {}
    RelationshipRiskInstrumentOperator(int data) : IntField(1588, data) {}
  };

  public __gc class UnderlyingAttachmentPoint : public DoubleField
  {
  public:
    static const int FIELD = 1459;
    UnderlyingAttachmentPoint() : DoubleField(1459) {}
    UnderlyingAttachmentPoint(double data) : DoubleField(1459, data) {}
    UnderlyingAttachmentPoint(double data, int decimalPadding) : DoubleField(1459, data, decimalPadding) {}
  };

  public __gc class TotNoRejQuotes : public IntField
  {
  public:
    static const int FIELD = 1170;
    TotNoRejQuotes() : IntField(1170) {}
    TotNoRejQuotes(int data) : IntField(1170, data) {}
  };

  public __gc class OrdStatusReqID : public StringField
  {
  public:
    static const int FIELD = 790;
    OrdStatusReqID() : StringField(790) {}
    OrdStatusReqID(String* data) : StringField(790, data) {}
  };

  public __gc class SenderCompID : public StringField
  {
  public:
    static const int FIELD = 49;
    SenderCompID() : StringField(49) {}
    SenderCompID(String* data) : StringField(49, data) {}
  };

  public __gc class OrdRejReason : public IntField
  {
  public:
    static const int FIELD = 103;
    static const int INCORRECT_ALLOCATED_QUANTITY = 14;
    static const int DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER = 7;
    static const int DUPLICATEVERBAL = 7;
    static const int ORDER_EXCEEDS_LIMIT = 3;
    static const int EXCHANGE_CLOSED = 2;
    static const int DUPLICATE = 6;
    static const int SURVEILLENCE_OPTION = 12;
    static const int UNKNOWN_ORDER = 5;
    static const int INCORRECTALLOCATEDQUANTITY = 14;
    static const int TOOLATE = 4;
    static const int UNSUPPORTED_ORDER_CHARACTERISTIC = 11;
    static const int DUPLICATE_ORDER = 6;
    static const int TOO_LATE_TO_ENTER = 4;
    static const int INCORRECT_QUANTITY = 13;
    static const int UNKNOWNSYM = 1;
    static const int STALE = 8;
    static const int UNKNOWN_ACCOUNT = 15;
    static const int INVALID_PRICE_INCREMENT = 18;
    static const int BROKEROPT = 0;
    static const int EXCEEDSLIM = 3;
    static const int INVALID_INVESTOR_ID = 10;
    static const int UNKNOWN_SYMBOL = 1;
    static const int INCORRECTQUANTITY = 13;
    static const int UNKNOWNACCOUNTS = 15;
    static const int OTHER = 99;
    static const int BROKER = 0;
    static const int BROKER_OPTION = 0;
    static const int SURVEILLENCE = 12;
    static const int EXCHCLOSED = 2;
    static const int PRICE_EXCEEDS_CURRENT_PRICE_BAND = 16;
    static const int INVINVID = 10;
    static const int UNSUPPORDERCHAR = 11;
    static const int TRADEALONGREQ = 9;
    static const int UNKNOWN = 5;
    static const int TRADE_ALONG_REQUIRED = 9;
    static const int STALE_ORDER = 8;
    OrdRejReason() : IntField(103) {}
    OrdRejReason(int data) : IntField(103, data) {}
  };

  public __gc class MaturityMonthYearIncrementUnits : public IntField
  {
  public:
    static const int FIELD = 1302;
    static const int WEEKS = 2;
    static const int MONTHS = 0;
    static const int YEARS = 3;
    static const int DAYS = 1;
    MaturityMonthYearIncrementUnits() : IntField(1302) {}
    MaturityMonthYearIncrementUnits(int data) : IntField(1302, data) {}
  };

  public __gc class DisplayWhen : public CharField
  {
  public:
    static const int FIELD = 1083;
    static const __wchar_t EXHAUST = '2';
    static const __wchar_t IMMEDIATE = '1';
    DisplayWhen() : CharField(1083) {}
    DisplayWhen(__wchar_t data) : CharField(1083, data) {}
  };

  public __gc class ApplQueueAction : public IntField
  {
  public:
    static const int FIELD = 815;
    static const int END_SESSION = 3;
    static const int QUEUEFLUSHED = 1;
    static const int QUEUE_FLUSHED = 1;
    static const int ENDSESSION = 3;
    static const int OVERLAYLAST = 2;
    static const int OVERLAY_LAST = 2;
    static const int NOACTIONTAKEN = 0;
    static const int NO_ACTION_TAKEN = 0;
    ApplQueueAction() : IntField(815) {}
    ApplQueueAction(int data) : IntField(815, data) {}
  };

  public __gc class RegistTransType : public CharField
  {
  public:
    static const int FIELD = 514;
    static const __wchar_t REPLACE = '1';
    static const __wchar_t NEW = '0';
    static const __wchar_t CANCEL = '2';
    RegistTransType() : CharField(514) {}
    RegistTransType(__wchar_t data) : CharField(514, data) {}
  };

  public __gc class PaymentRemitterID : public StringField
  {
  public:
    static const int FIELD = 505;
    PaymentRemitterID() : StringField(505) {}
    PaymentRemitterID(String* data) : StringField(505, data) {}
  };

  public __gc class PriceType : public IntField
  {
  public:
    static const int FIELD = 423;
    static const int PRODUCT_TICKS_IN_HALFS = 13;
    static const int FIXEDCABINETTRADEPRICE = 10;
    static const int PER_SHARE = 2;
    static const int PCT = 1;
    static const int VARIABLECABINETTRADEPRICE = 11;
    static const int PRODUCT_TICKS_IN_FOURTHS = 14;
    static const int TEDPRICE = 7;
    static const int YIELD = 9;
    static const int TED_YIELD = 8;
    static const int PREMIUM = 5;
    static const int FIXED_AMOUNT = 3;
    static const int TEDYIELD = 8;
    static const int DISCOUNT = 4;
    static const int PRODUCT_TICKS_IN_SIXTY_FORTHS = 18;
    static const int PRODUCT_TICKS_IN_ONE_TWENTY_EIGHTS = 19;
    static const int CPS = 2;
    static const int PERCENTAGE = 1;
    static const int PRODUCT_TICKS_IN_EIGHTS = 15;
    static const int PRODUCT_TICKS_IN_THIRTY_SECONDS = 17;
    static const int ABS = 3;
    static const int VARIABLE_CABINET_TRADE_PRICE = 11;
    static const int PER_UNIT = 2;
    static const int PRODUCT_TICKS_IN_SIXTEENTHS = 16;
    static const int TED_PRICE = 7;
    static const int FIXED_CABINET_TRADE_PRICE = 10;
    static const int SPREAD = 6;
    static const int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6;
    PriceType() : IntField(423) {}
    PriceType(int data) : IntField(423, data) {}
  };

  public __gc class MarketReqID : public StringField
  {
  public:
    static const int FIELD = 1393;
    MarketReqID() : StringField(1393) {}
    MarketReqID(String* data) : StringField(1393, data) {}
  };

  public __gc class NoNestedInstrAttrib : public IntField
  {
  public:
    static const int FIELD = 1312;
    NoNestedInstrAttrib() : IntField(1312) {}
    NoNestedInstrAttrib(int data) : IntField(1312, data) {}
  };

  public __gc class SecuritySubType : public StringField
  {
  public:
    static const int FIELD = 762;
    SecuritySubType() : StringField(762) {}
    SecuritySubType(String* data) : StringField(762, data) {}
  };

  public __gc class ClOrdID : public StringField
  {
  public:
    static const int FIELD = 11;
    ClOrdID() : StringField(11) {}
    ClOrdID(String* data) : StringField(11, data) {}
  };

  public __gc class MaturityDay : public StringField
  {
  public:
    static const int FIELD = 205;
    MaturityDay() : StringField(205) {}
    MaturityDay(String* data) : StringField(205, data) {}
  };

  public __gc class UnderlyingSeniority : public StringField
  {
  public:
    static const int FIELD = 1454;
    UnderlyingSeniority() : StringField(1454) {}
    UnderlyingSeniority(String* data) : StringField(1454, data) {}
  };

  public __gc class MarketSegmentDesc : public StringField
  {
  public:
    static const int FIELD = 1396;
    MarketSegmentDesc() : StringField(1396) {}
    MarketSegmentDesc(String* data) : StringField(1396, data) {}
  };

  public __gc class NoMarketSegments : public IntField
  {
  public:
    static const int FIELD = 1310;
    NoMarketSegments() : IntField(1310) {}
    NoMarketSegments(int data) : IntField(1310, data) {}
  };

  public __gc class SettlObligMode : public IntField
  {
  public:
    static const int FIELD = 1159;
    static const int PRELIMINARY = 1;
    static const int FINAL = 2;
    SettlObligMode() : IntField(1159) {}
    SettlObligMode(int data) : IntField(1159, data) {}
  };

  public __gc class SecurityUpdateAction : public CharField
  {
  public:
    static const int FIELD = 980;
    static const __wchar_t DELETE = 'D';
    static const __wchar_t ADD = 'A';
    static const __wchar_t MODIFY = 'M';
    SecurityUpdateAction() : CharField(980) {}
    SecurityUpdateAction(__wchar_t data) : CharField(980, data) {}
  };

  public __gc class NetworkRequestType : public IntField
  {
  public:
    static const int FIELD = 935;
    static const int STOP_SUBSCRIBING = 4;
    static const int LEVELOFDETAIL = 8;
    static const int SUBSCRIBE = 2;
    static const int SNAPSHOT = 1;
    static const int STOPSUBSCRIBING = 4;
    static const int LEVEL_OF_DETAIL_THEN_NOCOMPIDS_BECOMES_REQUIRED = 8;
    NetworkRequestType() : IntField(935) {}
    NetworkRequestType(int data) : IntField(935, data) {}
  };

  public __gc class LiquidityPctLow : public DoubleField
  {
  public:
    static const int FIELD = 402;
    LiquidityPctLow() : DoubleField(402) {}
    LiquidityPctLow(double data) : DoubleField(402, data) {}
    LiquidityPctLow(double data, int decimalPadding) : DoubleField(402, data, decimalPadding) {}
  };

  public __gc class PartyRole : public IntField
  {
  public:
    static const int FIELD = 452;
    static const int TRADER_MNEMONIC = 53;
    static const int ACCEPTABLE_COUNTERPARTY = 56;
    static const int HOST_COMPETENT_AUTHORITY = 68;
    static const int CONTRATRADER = 37;
    static const int EXECUTINGFIRM = 1;
    static const int CUSTOMER_ACCOUNT = 24;
    static const int POSITIONACCOUNT = 38;
    static const int REPORT_ORIGINATOR = 62;
    static const int CONTRAFIRM = 17;
    static const int EXECUTION_VENUE = 73;
    static const int INTERMEDIARY = 29;
    static const int ORDER_ENTRY_OPERATOR_ID = 44;
    static const int INTRODUCING_BROKER = 60;
    static const int FOREIGN_FIRM = 46;
    static const int HOME_COMPETENT_AUTHORITY = 69;
    static const int EXECUTINGSYSTEM = 16;
    static const int SECONDARY_ACCOUNT_NUMBER = 45;
    static const int INVESTMENT_FIRM = 67;
    static const int CONTRA_CLEARING_FIRM = 18;
    static const int CONTRA_POSITION_ACCOUNT = 41;
    static const int SYSTEMATIC_INTERNALISER = 63;
    static const int EXCHANGE = 22;
    static const int INTERNAL_CARRY_ACCOUNT = 43;
    static const int LOCATE = 8;
    static const int CORRESPONDENTCLEARINGORGANIZATION = 25;
    static const int ORDER_ORIGINATION_TRADER = 11;
    static const int SUB_CUSTODIAN = 31;
    static const int ENTERING_UNIT = 58;
    static const int STEP_OUT_FIRM = 80;
    static const int COMPETENT_AUTHORITY_OF_THE_TRANSACTION = 71;
    static const int SENDER_LOCATION = 54;
    static const int REGULATED_MARKET = 65;
    static const int UNACCEPTABLE_SETTLING_COUNTERPARTY = 85;
    static const int SETTLEMENTLOCATION = 10;
    static const int COMPETENT_AUTHORITY_OF_THE_MOST_RELEVANT_MARKET_IN_TERMS_OF_LIQUIDITY = 70;
    static const int QUOTE_ORIGINATOR = 61;
    static const int CLEARING_ORGANIZATION = 21;
    static const int SESSION_ID = 55;
    static const int MARKET_MAKER = 66;
    static const int INTERESTED_PARTY = 33;
    static const int TRANSFER_TO_FIRM = 40;
    static const int CONTRA_TRADER = 37;
    static const int ENTERINGTRADER = 36;
    static const int ENTERING_TRADER = 36;
    static const int LARGE_TRADER_REPORTABLE_ACCOUNT = 52;
    static const int BENEFICIARY = 32;
    static const int CONTRA_INVESTOR_ID = 39;
    static const int FORIEGN_FIRM = 46;
    static const int SETTLEMENT_LOCATION = 10;
    static const int CLEARINGORGANIZATION = 21;
    static const int EXECUTING_SYSTEM = 16;
    static const int CLEARING_FIRM = 4;
    static const int PLEDGEE_ACCOUNT = 51;
    static const int CLIENT_ID = 3;
    static const int ENTERING_FIRM = 7;
    static const int ALLOCENTITY = 39;
    static const int INVESTOR_ID = 5;
    static const int CLEARINGFIRM = 4;
    static const int CORRESPONDANT_CLEARING_FIRM = 15;
    static const int SUBCUSTODIAN = 31;
    static const int BUYER_SELLER = 27;
    static const int CLEARING_ACCOUNT = 83;
    static const int ENTERINGFIRM = 7;
    static const int PRIME_BROKER_PROVIDING_GENERAL_TRADE_SERVICES = 79;
    static const int CORRESPONDENT_CLEARING_ORGANIZATION = 25;
    static const int ACCEPTABLE_SETTLING_COUNTERPARTY = 84;
    static const int CUSTOMERACCOUNT = 24;
    static const int MARKET_DATA_ENTRY_ORIGINATOR = 74;
    static const int INTRODUCINGFIRM = 6;
    static const int EXECUTING_UNIT = 59;
    static const int CENTRAL_REGISTRATION_DEPOSITORY = 82;
    static const int INTERESTEDPARTY = 33;
    static const int LOCATION_ID = 75;
    static const int ORDERORIGINATOR = 13;
    static const int CORRESPONDENT_BROKER = 26;
    static const int ASSET_MANAGER = 49;
    static const int MULTILATERAL_TRADING_FACILITY = 64;
    static const int SPONSORINGFIRM = 19;
    static const int ORDER_ORIGINATION_FIRM = 13;
    static const int CONTRA_EXCHANGE = 42;
    static const int INVESTORID = 5;
    static const int FUNDMANAGER = 9;
    static const int REGULATORYBODY = 34;
    static const int CONTRA_FIRM = 17;
    static const int BROKER_OF_CREDIT = 2;
    static const int LIQUIDITYPROVIDER = 35;
    static const int GIVEUPCLEARINGFIRM = 14;
    static const int CONTRACLEARINGFIRM = 18;
    static const int CLAIMING_ACCOUNT = 48;
    static const int INTRODUCING_FIRM = 6;
    static const int GIVEUP_CLEARING_FIRM = 14;
    static const int EXECUTINGTRADER = 12;
    static const int UNDERLYING_CONTRA_FIRM = 20;
    static const int EXECUTING_FIRM = 1;
    static const int AGENT = 30;
    static const int LIQUIDITY_PROVIDER = 35;
    static const int POSITION_ACCOUNT = 38;
    static const int BROKEROFCREDIT = 2;
    static const int THIRD_PARTY_ALLOCATION_FIRM = 47;
    static const int CLIENTID = 3;
    static const int PLEDGOR_ACCOUNT = 50;
    static const int REPORTING_INTERMEDIARY = 72;
    static const int EXECUTING_TRADER = 12;
    static const int CUSTODIAN = 28;
    static const int BROKERCLEARINGID = 81;
    static const int CORRESPONDENTBROKER = 26;
    static const int LOCATE_LENDING_FIRM = 8;
    static const int INITIATINGTRADER = 11;
    static const int REGULATORY_BODY = 34;
    static const int UNACCEPTABLE_COUNTERPARTY = 57;
    static const int CORRESPONDANTCLEARINGFIRM = 15;
    static const int FUND_MANAGER_CLIENT_ID = 9;
    static const int BUYERSELLERRECEIVERDELIVERER = 27;
    static const int DESK_ID = 76;
    static const int ALLOCATION_ENTITY = 78;
    static const int MARKET_DATA_MARKET = 77;
    static const int SPONSORING_FIRM = 19;
    static const int LOCATELENDINGFIRM = 8;
    static const int UNDRCONTRAFIRM = 20;
    PartyRole() : IntField(452) {}
    PartyRole(int data) : IntField(452, data) {}
  };

  public __gc class LegRatioQty : public DoubleField
  {
  public:
    static const int FIELD = 623;
    LegRatioQty() : DoubleField(623) {}
    LegRatioQty(double data) : DoubleField(623, data) {}
    LegRatioQty(double data, int decimalPadding) : DoubleField(623, data, decimalPadding) {}
  };

  public __gc class SettlCurrFxRate : public DoubleField
  {
  public:
    static const int FIELD = 155;
    SettlCurrFxRate() : DoubleField(155) {}
    SettlCurrFxRate(double data) : DoubleField(155, data) {}
    SettlCurrFxRate(double data, int decimalPadding) : DoubleField(155, data, decimalPadding) {}
  };

  public __gc class RelatedPartyRole : public IntField
  {
  public:
    static const int FIELD = 1565;
    RelatedPartyRole() : IntField(1565) {}
    RelatedPartyRole(int data) : IntField(1565, data) {}
  };

  public __gc class LegContractMultiplierUnit : public IntField
  {
  public:
    static const int FIELD = 1436;
    LegContractMultiplierUnit() : IntField(1436) {}
    LegContractMultiplierUnit(int data) : IntField(1436, data) {}
  };

  public __gc class SecureData : public StringField
  {
  public:
    static const int FIELD = 91;
    SecureData() : StringField(91) {}
    SecureData(String* data) : StringField(91, data) {}
  };

  public __gc class SenderLocationID : public StringField
  {
  public:
    static const int FIELD = 142;
    SenderLocationID() : StringField(142) {}
    SenderLocationID(String* data) : StringField(142, data) {}
  };

  public __gc class FirstPx : public DoubleField
  {
  public:
    static const int FIELD = 1025;
    FirstPx() : DoubleField(1025) {}
    FirstPx(double data) : DoubleField(1025, data) {}
    FirstPx(double data, int decimalPadding) : DoubleField(1025, data, decimalPadding) {}
  };

  public __gc class EncodedLegIssuer : public StringField
  {
  public:
    static const int FIELD = 619;
    EncodedLegIssuer() : StringField(619) {}
    EncodedLegIssuer(String* data) : StringField(619, data) {}
  };

  public __gc class AssignmentMethod : public CharField
  {
  public:
    static const int FIELD = 744;
    static const __wchar_t PRO_RATA = 'P';
    static const __wchar_t RANDOM = 'R';
    static const __wchar_t PRORATA = 'P';
    AssignmentMethod() : CharField(744) {}
    AssignmentMethod(__wchar_t data) : CharField(744, data) {}
  };

  public __gc class RoutingID : public StringField
  {
  public:
    static const int FIELD = 217;
    RoutingID() : StringField(217) {}
    RoutingID(String* data) : StringField(217, data) {}
  };

  public __gc class RelationshipRiskSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 1594;
    RelationshipRiskSecurityAltID() : StringField(1594) {}
    RelationshipRiskSecurityAltID(String* data) : StringField(1594, data) {}
  };

  public __gc class RelatedPartyAltID : public StringField
  {
  public:
    static const int FIELD = 1570;
    RelatedPartyAltID() : StringField(1570) {}
    RelatedPartyAltID(String* data) : StringField(1570, data) {}
  };

  public __gc class StrategyParameterType : public IntField
  {
  public:
    static const int FIELD = 959;
    static const int MONTHYEAR = 18;
    static const int TZTIMEONLY = 27;
    static const int PRICE = 8;
    static const int QTY = 7;
    static const int BOOLEAN = 13;
    static const int MULTIPLECHARVALUE = 15;
    static const int CHAR = 12;
    static const int NUMINGROUP = 3;
    static const int TAGNUM = 5;
    static const int COUNTRY = 25;
    static const int TENOR = 29;
    static const int LOCALMKTTIME = 21;
    static const int INT = 1;
    static const int LOCALMKTDATE = 21;
    static const int EXCHANGE = 17;
    static const int LANGUAGE = 26;
    static const int MONTH_YEAR = 18;
    static const int PERCENTAGE = 11;
    static const int LENGTH = 2;
    static const int TZTIMESTAMP = 28;
    static const int MULTIPLESTRINGVALUE = 24;
    static const int UTCTIMESTAMP = 19;
    static const int DATA = 23;
    static const int CURRENCY = 16;
    static const int STRING = 14;
    static const int AMT = 10;
    static const int FLOAT = 6;
    static const int UTCDATE = 22;
    static const int UTCTIMEONLY = 20;
    static const int SEQNUM = 4;
    static const int UTCDATEONLY = 22;
    static const int PRICEOFFSET = 9;
    StrategyParameterType() : IntField(959) {}
    StrategyParameterType(int data) : IntField(959, data) {}
  };

  public __gc class EncryptMethod : public IntField
  {
  public:
    static const int FIELD = 98;
    static const int PGP_DES_MD5 = 5;
    static const int PGPDESMD5SEEAPPNOTEONFIXWEBSITE = 5;
    static const int PKCS_DES = 3;
    static const int NONEOTHER = 0;
    static const int PKCSDESPROPRIETARY = 3;
    static const int PGPDESDEFUNCT = 4;
    static const int PEMDESMD5SEEAPPNOTEONFIXWEBSITENAFORFIXMLNOTUSED = 6;
    static const int PKCS = 1;
    static const int PGP_DES = 4;
    static const int NONE = 0;
    static const int DES = 2;
    static const int PKCSPROPRIETARY = 1;
    static const int NONE_OTHER = 0;
    static const int DESECBMODE = 2;
    static const int PEM_DES_MD5 = 6;
    EncryptMethod() : IntField(98) {}
    EncryptMethod(int data) : IntField(98, data) {}
  };

  public __gc class UnderlyingStateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 593;
    UnderlyingStateOrProvinceOfIssue() : StringField(593) {}
    UnderlyingStateOrProvinceOfIssue(String* data) : StringField(593, data) {}
  };

  public __gc class ApplNewSeqNum : public IntField
  {
  public:
    static const int FIELD = 1399;
    ApplNewSeqNum() : IntField(1399) {}
    ApplNewSeqNum(int data) : IntField(1399, data) {}
  };

  public __gc class DerivativeEncodedSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 1280;
    DerivativeEncodedSecurityDescLen() : IntField(1280) {}
    DerivativeEncodedSecurityDescLen(int data) : IntField(1280, data) {}
  };

  public __gc class TradingCurrency : public StringField
  {
  public:
    static const int FIELD = 1245;
    TradingCurrency() : StringField(1245) {}
    TradingCurrency(String* data) : StringField(1245, data) {}
  };

  public __gc class SecondaryHighLimitPrice : public DoubleField
  {
  public:
    static const int FIELD = 1230;
    SecondaryHighLimitPrice() : DoubleField(1230) {}
    SecondaryHighLimitPrice(double data) : DoubleField(1230, data) {}
    SecondaryHighLimitPrice(double data, int decimalPadding) : DoubleField(1230, data, decimalPadding) {}
  };

  public __gc class OrderAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 799;
    OrderAvgPx() : DoubleField(799) {}
    OrderAvgPx(double data) : DoubleField(799, data) {}
    OrderAvgPx(double data, int decimalPadding) : DoubleField(799, data, decimalPadding) {}
  };

  public __gc class PosAmtType : public StringField
  {
  public:
    static const int FIELD = 707;
    static const String* ACCRUED_COUPON_AMOUNT = "ACPN";
    static const String* PREMIUM_AMOUNT = "PREM";
    static const String* STARTOFDAYMARKTOMARKETAMOUNT = "SMTM";
    static const String* INCREMENTALMARKTOMARKETAMOUNT = "IMTM";
    static const String* CASHAMOUNTCORPORATEEVENT = "CASH";
    static const String* INCREMENTAL_COLLATERALIZED_MARK_TO_MARKET = "ICMTM";
    static const String* TOTAL_BANKED_AMOUNT = "BANK";
    static const String* FINAL_MARK_TO_MARKET_AMOUNT = "FMTM";
    static const String* SETTLEMENT_VALUE = "SETL";
    static const String* VALUEADJUSTEDAMOUNT = "VADJ";
    static const String* CASH_AMOUNT = "CASH";
    static const String* PREMIUMAMOUNT = "PREM";
    static const String* INITIAL_TRADE_COUPON_AMOUNT = "ICPN";
    static const String* INCREMENTAL_ACCRUED_COUPON = "IACPN";
    static const String* START_OF_DAY_MARK_TO_MARKET_AMOUNT = "SMTM";
    static const String* VALUE_ADJUSTED_AMOUNT = "VADJ";
    static const String* CASHRESIDUALAMOUNT = "CRES";
    static const String* COLLATERALIZED_MARK_TO_MARKET = "CMTM";
    static const String* CASH_RESIDUAL_AMOUNT = "CRES";
    static const String* COMPENSATION_AMOUNT = "DLV";
    static const String* TRADE_VARIATION_AMOUNT = "TVAR";
    static const String* TRADEVARIATIONAMOUNT = "TVAR";
    static const String* FINALMARKTOMARKETAMOUNT = "FMTM";
    static const String* COUPON_AMOUNT = "CPN";
    static const String* TOTAL_COLLATERALIZED_AMOUNT = "COLAT";
    static const String* INCREMENTAL_MARK_TO_MARKET_AMOUNT = "IMTM";
    PosAmtType() : StringField(707) {}
    PosAmtType(String* data) : StringField(707, data) {}
  };

  public __gc class ResetSeqNumFlag : public BooleanField
  {
  public:
    static const int FIELD = 141;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ResetSeqNumFlag() : BooleanField(141) {}
    ResetSeqNumFlag(bool data) : BooleanField(141, data) {}
  };

  public __gc class NoHops : public IntField
  {
  public:
    static const int FIELD = 627;
    NoHops() : IntField(627) {}
    NoHops(int data) : IntField(627, data) {}
  };

  public __gc class CollInquiryResult : public IntField
  {
  public:
    static const int FIELD = 946;
    static const int NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED = 7;
    static const int NOCOLLATERALFOUNDFORTHEORDERSPECIFIED = 7;
    static const int NOCOLLATERALFOUNDFORTHETRADESPECIFIED = 6;
    static const int INVALIDORUNKNOWNINSTRUMENT = 1;
    static const int INVALID_DESTINATION_REQUESTED = 5;
    static const int INVALIDORUNKNOWNCOLLATERALTYPE = 2;
    static const int UNAUTHORIZED_FOR_COLLATERAL_INQUIRY = 9;
    static const int INVALIDTRANSPORTTYPEREQUESTED = 4;
    static const int INVALIDPARTIES = 3;
    static const int INVALID_OR_UNKNOWN_COLLATERAL_TYPE = 2;
    static const int INVALIDDESTINATIONREQUESTED = 5;
    static const int SUCCESSFUL = 0;
    static const int INVALID_OR_UNKNOWN_INSTRUMENT = 1;
    static const int COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED = 8;
    static const int OTHER = 99;
    static const int UNAUTHORIZEDFORCOLLATERALINQUIRY = 9;
    static const int COLLATERALINQUIRYTYPENOTSUPPORTED = 8;
    static const int INVALID_PARTIES = 3;
    static const int INVALID_TRANSPORT_TYPE_REQUESTED = 4;
    static const int NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED = 6;
    CollInquiryResult() : IntField(946) {}
    CollInquiryResult(int data) : IntField(946, data) {}
  };

  public __gc class StartDate : public StringField
  {
  public:
    static const int FIELD = 916;
    StartDate() : StringField(916) {}
    StartDate(String* data) : StringField(916, data) {}
  };

  public __gc class CollAsgnRespType : public IntField
  {
  public:
    static const int FIELD = 905;
    static const int DECLINED = 2;
    static const int RECEIVED = 0;
    static const int REJECTED = 3;
    static const int ACCEPTED = 1;
    CollAsgnRespType() : IntField(905) {}
    CollAsgnRespType(int data) : IntField(905, data) {}
  };

  public __gc class OrderBookingQty : public DoubleField
  {
  public:
    static const int FIELD = 800;
    OrderBookingQty() : DoubleField(800) {}
    OrderBookingQty(double data) : DoubleField(800, data) {}
    OrderBookingQty(double data, int decimalPadding) : DoubleField(800, data, decimalPadding) {}
  };

  public __gc class NoQuoteQualifiers : public IntField
  {
  public:
    static const int FIELD = 735;
    NoQuoteQualifiers() : IntField(735) {}
    NoQuoteQualifiers(int data) : IntField(735, data) {}
  };

  public __gc class UnsolicitedIndicator : public BooleanField
  {
  public:
    static const int FIELD = 325;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    UnsolicitedIndicator() : BooleanField(325) {}
    UnsolicitedIndicator(bool data) : BooleanField(325, data) {}
  };

  public __gc class RefCstmApplVerID : public StringField
  {
  public:
    static const int FIELD = 1131;
    RefCstmApplVerID() : StringField(1131) {}
    RefCstmApplVerID(String* data) : StringField(1131, data) {}
  };

  public __gc class SideExecID : public StringField
  {
  public:
    static const int FIELD = 1427;
    SideExecID() : StringField(1427) {}
    SideExecID(String* data) : StringField(1427, data) {}
  };

  public __gc class RejectText : public StringField
  {
  public:
    static const int FIELD = 1328;
    RejectText() : StringField(1328) {}
    RejectText(String* data) : StringField(1328, data) {}
  };

  public __gc class ExchangeSpecialInstructions : public StringField
  {
  public:
    static const int FIELD = 1139;
    ExchangeSpecialInstructions() : StringField(1139) {}
    ExchangeSpecialInstructions(String* data) : StringField(1139, data) {}
  };

  public __gc class TradeID : public StringField
  {
  public:
    static const int FIELD = 1003;
    TradeID() : StringField(1003) {}
    TradeID(String* data) : StringField(1003, data) {}
  };

  public __gc class RndPx : public DoubleField
  {
  public:
    static const int FIELD = 991;
    RndPx() : DoubleField(991) {}
    RndPx(double data) : DoubleField(991, data) {}
    RndPx(double data, int decimalPadding) : DoubleField(991, data, decimalPadding) {}
  };

  public __gc class QuoteEntryRejectReason : public IntField
  {
  public:
    static const int FIELD = 368;
    static const int UNKNWNSYM = 1;
    static const int EXCHCLSD = 2;
    static const int EXHCNAGE = 2;
    static const int DUPORD = 6;
    static const int INVALID_PRICE = 8;
    static const int TOOLATE = 4;
    static const int INVBIDASK = 7;
    static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
    static const int TOO_LATE_TO_ENTER = 4;
    static const int QUOTE_EXCEEDS_LIMIT = 3;
    static const int ORDEXCLIM = 3;
    static const int UNKNORD = 5;
    static const int INVPX = 8;
    static const int EXCHANGE = 2;
    static const int UNKNOWN_SYMBOL = 1;
    static const int NOTAUTH = 9;
    static const int OTHER = 99;
    static const int INVALID_BID_ASK_SPREAD = 7;
    static const int UNKNOWN_QUOTE = 5;
    static const int DUPLICATE_QUOTE = 6;
    QuoteEntryRejectReason() : IntField(368) {}
    QuoteEntryRejectReason(int data) : IntField(368, data) {}
  };

  public __gc class OrderCapacity : public CharField
  {
  public:
    static const int FIELD = 528;
    static const __wchar_t PROPRIETARY = 'G';
    static const __wchar_t RISKLESS_PRINCIPAL = 'R';
    static const __wchar_t AGENT_FOR_OTHER_MEMBER = 'W';
    static const __wchar_t PRINCIPAL = 'P';
    static const __wchar_t AGENCY = 'A';
    static const __wchar_t INDIVIDUAL = 'I';
    static const __wchar_t AGENTOTHERMEMBER = 'W';
    static const __wchar_t RISKLESSPRINCIPAL = 'R';
    OrderCapacity() : CharField(528) {}
    OrderCapacity(__wchar_t data) : CharField(528, data) {}
  };

  public __gc class SideLastQty : public IntField
  {
  public:
    static const int FIELD = 1009;
    SideLastQty() : IntField(1009) {}
    SideLastQty(int data) : IntField(1009, data) {}
  };

  public __gc class DerivativeUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 1269;
    DerivativeUnitOfMeasure() : StringField(1269) {}
    DerivativeUnitOfMeasure(String* data) : StringField(1269, data) {}
  };

  public __gc class NoLegAllocs : public IntField
  {
  public:
    static const int FIELD = 670;
    NoLegAllocs() : IntField(670) {}
    NoLegAllocs(int data) : IntField(670, data) {}
  };

  public __gc class QuoteAckStatus : public IntField
  {
  public:
    static const int FIELD = 297;
    static const int CANCELED_FOR_UNDERLYING = 3;
    static const int CANCELED_ALL = 4;
    static const int CANCELED_FOR_SECURITY_TYPE = 2;
    static const int REJECTED = 5;
    static const int CANCELED_FOR_SYMBOL = 1;
    static const int ACCEPTED = 0;
    QuoteAckStatus() : IntField(297) {}
    QuoteAckStatus(int data) : IntField(297, data) {}
  };

  public __gc class SecondaryFirmTradeID : public StringField
  {
  public:
    static const int FIELD = 1042;
    SecondaryFirmTradeID() : StringField(1042) {}
    SecondaryFirmTradeID(String* data) : StringField(1042, data) {}
  };

  public __gc class UserRequestType : public IntField
  {
  public:
    static const int FIELD = 924;
    static const int CHANGE_PASSWORD_FOR_USER = 3;
    static const int CHANGEPASSWORDFORUSER = 3;
    static const int LOGOFFUSER = 2;
    static const int LOG_OFF_USER = 2;
    static const int REQUEST_INDIVIDUAL_USER_STATUS = 4;
    static const int REQUESTINDIVIDUALUSERSTATUS = 4;
    static const int LOGONUSER = 1;
    static const int LOG_ON_USER = 1;
    UserRequestType() : IntField(924) {}
    UserRequestType(int data) : IntField(924, data) {}
  };

  public __gc class SecondaryTrdType : public IntField
  {
  public:
    static const int FIELD = 855;
    SecondaryTrdType() : IntField(855) {}
    SecondaryTrdType(int data) : IntField(855, data) {}
  };

  public __gc class TradeReportTransType : public IntField
  {
  public:
    static const int FIELD = 487;
    static const int REPLACE = 2;
    static const int NEW = 0;
    static const int REVERSE = 4;
    static const int CANCEL = 1;
    static const int CANCEL_DUE_TO_BACK_OUT_OF_TRADE = 5;
    static const int RELEASE = 3;
    TradeReportTransType() : IntField(487) {}
    TradeReportTransType(int data) : IntField(487, data) {}
  };

  public __gc class AdvSide : public CharField
  {
  public:
    static const int FIELD = 4;
    static const __wchar_t CROSS = 'X';
    static const __wchar_t TRADE = 'T';
    static const __wchar_t BUY = 'B';
    static const __wchar_t SELL = 'S';
    AdvSide() : CharField(4) {}
    AdvSide(__wchar_t data) : CharField(4, data) {}
  };

  public __gc class RelatedContextPartySubID : public StringField
  {
  public:
    static const int FIELD = 1580;
    RelatedContextPartySubID() : StringField(1580) {}
    RelatedContextPartySubID(String* data) : StringField(1580, data) {}
  };

  public __gc class DerivativeSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 1250;
    DerivativeSecuritySubType() : StringField(1250) {}
    DerivativeSecuritySubType(String* data) : StringField(1250, data) {}
  };

  public __gc class TriggerTradingSessionSubID : public StringField
  {
  public:
    static const int FIELD = 1114;
    TriggerTradingSessionSubID() : StringField(1114) {}
    TriggerTradingSessionSubID(String* data) : StringField(1114, data) {}
  };

  public __gc class TradeLinkID : public StringField
  {
  public:
    static const int FIELD = 820;
    TradeLinkID() : StringField(820) {}
    TradeLinkID(String* data) : StringField(820, data) {}
  };

  public __gc class LegBenchmarkPrice : public DoubleField
  {
  public:
    static const int FIELD = 679;
    LegBenchmarkPrice() : DoubleField(679) {}
    LegBenchmarkPrice(double data) : DoubleField(679, data) {}
    LegBenchmarkPrice(double data, int decimalPadding) : DoubleField(679, data, decimalPadding) {}
  };

  public __gc class HopRefID : public IntField
  {
  public:
    static const int FIELD = 630;
    HopRefID() : IntField(630) {}
    HopRefID(int data) : IntField(630, data) {}
  };

  public __gc class Designation : public StringField
  {
  public:
    static const int FIELD = 494;
    Designation() : StringField(494) {}
    Designation(String* data) : StringField(494, data) {}
  };

  public __gc class TradeRequestID : public StringField
  {
  public:
    static const int FIELD = 568;
    TradeRequestID() : StringField(568) {}
    TradeRequestID(String* data) : StringField(568, data) {}
  };

  public __gc class RelationshipRiskLimitType : public IntField
  {
  public:
    static const int FIELD = 1583;
    RelationshipRiskLimitType() : IntField(1583) {}
    RelationshipRiskLimitType(int data) : IntField(1583, data) {}
  };

  public __gc class RiskSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1539;
    RiskSecurityIDSource() : StringField(1539) {}
    RiskSecurityIDSource(String* data) : StringField(1539, data) {}
  };

  public __gc class LegFlowScheduleType : public IntField
  {
  public:
    static const int FIELD = 1440;
    LegFlowScheduleType() : IntField(1440) {}
    LegFlowScheduleType(int data) : IntField(1440, data) {}
  };

  public __gc class LegPriceUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 1421;
    LegPriceUnitOfMeasure() : StringField(1421) {}
    LegPriceUnitOfMeasure(String* data) : StringField(1421, data) {}
  };

  public __gc class Nested4PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1416;
    Nested4PartyIDSource() : CharField(1416) {}
    Nested4PartyIDSource(__wchar_t data) : CharField(1416, data) {}
  };

  public __gc class CoveredOrUncovered : public IntField
  {
  public:
    static const int FIELD = 203;
    static const int COVERED = 0;
    static const int UNCOVERED = 1;
    CoveredOrUncovered() : IntField(203) {}
    CoveredOrUncovered(int data) : IntField(203, data) {}
  };

  public __gc class AcctIDSource : public IntField
  {
  public:
    static const int FIELD = 660;
    static const int TFMGSPTA = 3;
    static const int TFM = 3;
    static const int DTCCCODE = 5;
    static const int SIDCODE = 2;
    static const int OMGEOALERTID = 4;
    static const int BIC = 1;
    static const int OTHER = 99;
    static const int OMGEO = 4;
    static const int SID_CODE = 2;
    static const int DTCC_CODE = 5;
    AcctIDSource() : IntField(660) {}
    AcctIDSource(int data) : IntField(660, data) {}
  };

  public __gc class MktOfferPx : public DoubleField
  {
  public:
    static const int FIELD = 646;
    MktOfferPx() : DoubleField(646) {}
    MktOfferPx(double data) : DoubleField(646, data) {}
    MktOfferPx(double data, int decimalPadding) : DoubleField(646, data, decimalPadding) {}
  };

  public __gc class NoCapacities : public IntField
  {
  public:
    static const int FIELD = 862;
    NoCapacities() : IntField(862) {}
    NoCapacities(int data) : IntField(862, data) {}
  };

  public __gc class TradeRequestType : public IntField
  {
  public:
    static const int FIELD = 569;
    static const int UNMATCHED_TRADES_THAT_MATCH_CRITERIA = 2;
    static const int ALL_TRADES = 0;
    static const int MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST = 1;
    static const int UNREPORTEDTRADES = 3;
    static const int ALLTRADES = 0;
    static const int ADVISORIESMATCH = 4;
    static const int MATCHEDTRADES = 1;
    static const int UNMATCHEDTRADES = 2;
    static const int UNREPORTED_TRADES_THAT_MATCH_CRITERIA = 3;
    static const int ADVISORIES_THAT_MATCH_CRITERIA = 4;
    TradeRequestType() : IntField(569) {}
    TradeRequestType(int data) : IntField(569, data) {}
  };

  public __gc class NoNestedPartyIDs : public IntField
  {
  public:
    static const int FIELD = 539;
    NoNestedPartyIDs() : IntField(539) {}
    NoNestedPartyIDs(int data) : IntField(539, data) {}
  };

  public __gc class TradSesStatus : public IntField
  {
  public:
    static const int FIELD = 340;
    static const int PRECLOSE = 5;
    static const int HALTED = 1;
    static const int REQREJ = 6;
    static const int REQUEST_REJECTED = 6;
    static const int OPEN = 2;
    static const int PREOPEN = 4;
    static const int PRE_OPEN = 4;
    static const int UNKNOWN = 0;
    static const int PRE_CLOSE = 5;
    static const int CLOSED = 3;
    TradSesStatus() : IntField(340) {}
    TradSesStatus(int data) : IntField(340, data) {}
  };

  public __gc class UnderlyingNotionalPercentageOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 1455;
    UnderlyingNotionalPercentageOutstanding() : DoubleField(1455) {}
    UnderlyingNotionalPercentageOutstanding(double data) : DoubleField(1455, data) {}
    UnderlyingNotionalPercentageOutstanding(double data, int decimalPadding) : DoubleField(1455, data, decimalPadding) {}
  };

  public __gc class ApplLastSeqNum : public IntField
  {
  public:
    static const int FIELD = 1350;
    ApplLastSeqNum() : IntField(1350) {}
    ApplLastSeqNum(int data) : IntField(1350, data) {}
  };

  public __gc class PegPriceType : public IntField
  {
  public:
    static const int FIELD = 1094;
    static const int LAST_PEG = 1;
    static const int PRIMARY_PEG = 5;
    static const int OPENING_PEG = 3;
    static const int FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER = 6;
    static const int TRAILING_STOP_PEG = 8;
    static const int PEG_TO_LIMIT_PRICE = 9;
    static const int MID_PRICE_PEG = 2;
    static const int MARKET_PEG = 4;
    static const int PEG_TO_VWAP = 7;
    PegPriceType() : IntField(1094) {}
    PegPriceType(int data) : IntField(1094, data) {}
  };

  public __gc class StrategyParameterName : public StringField
  {
  public:
    static const int FIELD = 958;
    StrategyParameterName() : StringField(958) {}
    StrategyParameterName(String* data) : StringField(958, data) {}
  };

  public __gc class StreamAsgnRejReason : public IntField
  {
  public:
    static const int FIELD = 1502;
    static const int NO_AVAILABLE_STREAM = 3;
    static const int EXCEEDS_MAXIMUM_SIZE = 1;
    static const int UNKNOWN_CLIENT = 0;
    static const int UNKNOWN_OR_INVALID_CURRENCY_PAIR = 2;
    static const int OTHER = 99;
    StreamAsgnRejReason() : IntField(1502) {}
    StreamAsgnRejReason(int data) : IntField(1502, data) {}
  };

  public __gc class MatchIncrement : public DoubleField
  {
  public:
    static const int FIELD = 1089;
    MatchIncrement() : DoubleField(1089) {}
    MatchIncrement(double data) : DoubleField(1089, data) {}
    MatchIncrement(double data, int decimalPadding) : DoubleField(1089, data, decimalPadding) {}
  };

  public __gc class Nested3PartyRole : public IntField
  {
  public:
    static const int FIELD = 951;
    Nested3PartyRole() : IntField(951) {}
    Nested3PartyRole(int data) : IntField(951, data) {}
  };

  public __gc class UnderlyingPx : public DoubleField
  {
  public:
    static const int FIELD = 810;
    UnderlyingPx() : DoubleField(810) {}
    UnderlyingPx(double data) : DoubleField(810, data) {}
    UnderlyingPx(double data, int decimalPadding) : DoubleField(810, data, decimalPadding) {}
  };

  public __gc class PriceImprovement : public DoubleField
  {
  public:
    static const int FIELD = 639;
    PriceImprovement() : DoubleField(639) {}
    PriceImprovement(double data) : DoubleField(639, data) {}
    PriceImprovement(double data, int decimalPadding) : DoubleField(639, data, decimalPadding) {}
  };

  public __gc class ValuationMethod : public StringField
  {
  public:
    static const int FIELD = 1197;
    static const String* FUTURES_STYLE_WITH_AN_ATTACHED_CASH_ADJUSTMENT = "FUTDA";
    static const String* PREMIUM_STYLE = "EQTY";
    static const String* CDS_IN_DELIVERY = "CDSD";
    static const String* CDS_STYLE_COLLATERALIZATION_OF_MARKET_TO_MARKET_AND_COUPON = "CDS";
    static const String* FUTURES_STYLE_MARK_TO_MARKET = "FUT";
    ValuationMethod() : StringField(1197) {}
    ValuationMethod(String* data) : StringField(1197, data) {}
  };

  public __gc class DerivativeSecurityID : public StringField
  {
  public:
    static const int FIELD = 1216;
    DerivativeSecurityID() : StringField(1216) {}
    DerivativeSecurityID(String* data) : StringField(1216, data) {}
  };

  public __gc class NoExpiration : public IntField
  {
  public:
    static const int FIELD = 981;
    NoExpiration() : IntField(981) {}
    NoExpiration(int data) : IntField(981, data) {}
  };

  public __gc class TargetCompID : public StringField
  {
  public:
    static const int FIELD = 56;
    TargetCompID() : StringField(56) {}
    TargetCompID(String* data) : StringField(56, data) {}
  };

  public __gc class MDEntryBuyer : public StringField
  {
  public:
    static const int FIELD = 288;
    MDEntryBuyer() : StringField(288) {}
    MDEntryBuyer(String* data) : StringField(288, data) {}
  };

  public __gc class RelationshipRiskCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 1608;
    RelationshipRiskCouponRate() : DoubleField(1608) {}
    RelationshipRiskCouponRate(double data) : DoubleField(1608, data) {}
    RelationshipRiskCouponRate(double data, int decimalPadding) : DoubleField(1608, data, decimalPadding) {}
  };

  public __gc class NoDerivativeInstrumentPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1296;
    NoDerivativeInstrumentPartySubIDs() : IntField(1296) {}
    NoDerivativeInstrumentPartySubIDs(int data) : IntField(1296, data) {}
  };

  public __gc class NoMaturityRules : public IntField
  {
  public:
    static const int FIELD = 1236;
    NoMaturityRules() : IntField(1236) {}
    NoMaturityRules(int data) : IntField(1236, data) {}
  };

  public __gc class QuoteMsgID : public StringField
  {
  public:
    static const int FIELD = 1166;
    QuoteMsgID() : StringField(1166) {}
    QuoteMsgID(String* data) : StringField(1166, data) {}
  };

  public __gc class TriggerType : public CharField
  {
  public:
    static const int FIELD = 1100;
    static const __wchar_t SPECIFIED_TRADING_SESSION = '2';
    static const __wchar_t NEXT_AUCTION = '3';
    static const __wchar_t PRICE_MOVEMENT = '4';
    static const __wchar_t PARTIAL_EXECUTION = '1';
    TriggerType() : CharField(1100) {}
    TriggerType(__wchar_t data) : CharField(1100, data) {}
  };

  public __gc class PriceProtectionScope : public CharField
  {
  public:
    static const int FIELD = 1092;
    static const __wchar_t LOCAL = '1';
    static const __wchar_t NONE = '0';
    static const __wchar_t GLOBAL = '3';
    static const __wchar_t NATIONAL = '2';
    PriceProtectionScope() : CharField(1092) {}
    PriceProtectionScope(__wchar_t data) : CharField(1092, data) {}
  };

  public __gc class TotNumAssignmentReports : public IntField
  {
  public:
    static const int FIELD = 832;
    TotNumAssignmentReports() : IntField(832) {}
    TotNumAssignmentReports(int data) : IntField(832, data) {}
  };

  public __gc class ContraLegRefID : public StringField
  {
  public:
    static const int FIELD = 655;
    ContraLegRefID() : StringField(655) {}
    ContraLegRefID(String* data) : StringField(655, data) {}
  };

  public __gc class TradeReportRejectReason : public IntField
  {
  public:
    static const int FIELD = 751;
    static const int SUCCESSFULDEFAULT = 0;
    static const int UNAUTHORIZED_TO_REPORT_TRADES = 3;
    static const int SUCCESSFUL = 0;
    static const int INVALID_PARTY_ONFORMATION = 1;
    static const int UNKNOWN_INSTRUMENT = 2;
    static const int OTHER = 99;
    static const int INVALIDTRADETYPE = 4;
    static const int UNKNOWNINSTRUMENT = 2;
    static const int INVALID_TRADE_TYPE = 4;
    static const int UNAUTHORIZEDTOREPORTTRADES = 3;
    static const int INVALIDPARTYINFORMATION = 1;
    TradeReportRejectReason() : IntField(751) {}
    TradeReportRejectReason(int data) : IntField(751, data) {}
  };

  public __gc class TradeReportRefID : public StringField
  {
  public:
    static const int FIELD = 572;
    TradeReportRefID() : StringField(572) {}
    TradeReportRefID(String* data) : StringField(572, data) {}
  };

  public __gc class SecurityListType : public IntField
  {
  public:
    static const int FIELD = 1470;
    static const int NEWSPAPER_LIST = 4;
    static const int TRADING_LIST = 2;
    static const int INDUSTRY_CLASSIFICATION = 1;
    static const int MARKET = 3;
    SecurityListType() : IntField(1470) {}
    SecurityListType(int data) : IntField(1470, data) {}
  };

  public __gc class DerivativeSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1217;
    DerivativeSecurityIDSource() : StringField(1217) {}
    DerivativeSecurityIDSource(String* data) : StringField(1217, data) {}
  };

  public __gc class AssignmentUnit : public DoubleField
  {
  public:
    static const int FIELD = 745;
    AssignmentUnit() : DoubleField(745) {}
    AssignmentUnit(double data) : DoubleField(745, data) {}
    AssignmentUnit(double data, int decimalPadding) : DoubleField(745, data, decimalPadding) {}
  };

  public __gc class TradeReportID : public StringField
  {
  public:
    static const int FIELD = 571;
    TradeReportID() : StringField(571) {}
    TradeReportID(String* data) : StringField(571, data) {}
  };

  public __gc class NoRpts : public IntField
  {
  public:
    static const int FIELD = 82;
    NoRpts() : IntField(82) {}
    NoRpts(int data) : IntField(82, data) {}
  };

  public __gc class LegBenchmarkPriceType : public IntField
  {
  public:
    static const int FIELD = 680;
    LegBenchmarkPriceType() : IntField(680) {}
    LegBenchmarkPriceType(int data) : IntField(680, data) {}
  };

  public __gc class EncodedSubjectLen : public IntField
  {
  public:
    static const int FIELD = 356;
    EncodedSubjectLen() : IntField(356) {}
    EncodedSubjectLen(int data) : IntField(356, data) {}
  };

  public __gc class SecurityXML : public StringField
  {
  public:
    static const int FIELD = 1185;
    SecurityXML() : StringField(1185) {}
    SecurityXML(String* data) : StringField(1185, data) {}
  };

  public __gc class LegReportID : public StringField
  {
  public:
    static const int FIELD = 990;
    LegReportID() : StringField(990) {}
    LegReportID(String* data) : StringField(990, data) {}
  };

  public __gc class Nested3PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 954;
    Nested3PartySubIDType() : IntField(954) {}
    Nested3PartySubIDType(int data) : IntField(954, data) {}
  };

  public __gc class BenchmarkSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 761;
    BenchmarkSecurityIDSource() : StringField(761) {}
    BenchmarkSecurityIDSource(String* data) : StringField(761, data) {}
  };

  public __gc class QuoteRejectReason : public IntField
  {
  public:
    static const int FIELD = 300;
    static const int QUOTE_LOCKED = 11;
    static const int UNKNSYM = 1;
    static const int EXCHCLSD = 2;
    static const int DUPORD = 6;
    static const int INVALID_OR_UNKNOWN_ISSUER_OF_UNDERLYING_SECURITY = 13;
    static const int INVALID_PRICE = 8;
    static const int TOOLATE = 4;
    static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
    static const int TOO_LATE_TO_ENTER = 4;
    static const int UNKNORD = 5;
    static const int INVPX = 8;
    static const int EXCHANGE = 2;
    static const int INVSPREAD = 7;
    static const int UNKNOWN_SYMBOL = 1;
    static const int NOTAUTH = 9;
    static const int OTHER = 99;
    static const int INVALID_BID_ASK_SPREAD = 7;
    static const int UNKNOWN_QUOTE = 5;
    static const int INVALID_OR_UNKNOWN_SECURITY_ISSUER = 12;
    static const int ORDEXLIM = 3;
    static const int DUPLICATE_QUOTE = 6;
    static const int PRICE_EXCEEDS_CURRENT_PRICE_BAND = 10;
    static const int QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
    QuoteRejectReason() : IntField(300) {}
    QuoteRejectReason(int data) : IntField(300, data) {}
  };

  public __gc class HeartBtInt : public IntField
  {
  public:
    static const int FIELD = 108;
    HeartBtInt() : IntField(108) {}
    HeartBtInt(int data) : IntField(108, data) {}
  };

  public __gc class BidForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 189;
    BidForwardPoints() : DoubleField(189) {}
    BidForwardPoints(double data) : DoubleField(189, data) {}
    BidForwardPoints(double data, int decimalPadding) : DoubleField(189, data, decimalPadding) {}
  };

  public __gc class PossResend : public BooleanField
  {
  public:
    static const int FIELD = 97;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PossResend() : BooleanField(97) {}
    PossResend(bool data) : BooleanField(97, data) {}
  };

  public __gc class Symbol : public StringField
  {
  public:
    static const int FIELD = 55;
    Symbol() : StringField(55) {}
    Symbol(String* data) : StringField(55, data) {}
  };

  public __gc class EncodedUnderlyingSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 365;
    EncodedUnderlyingSecurityDesc() : StringField(365) {}
    EncodedUnderlyingSecurityDesc(String* data) : StringField(365, data) {}
  };

  public __gc class RelatedPartyAltSubIDType : public IntField
  {
  public:
    static const int FIELD = 1574;
    RelatedPartyAltSubIDType() : IntField(1574) {}
    RelatedPartyAltSubIDType(int data) : IntField(1574, data) {}
  };

  public __gc class MarketReportID : public StringField
  {
  public:
    static const int FIELD = 1394;
    MarketReportID() : StringField(1394) {}
    MarketReportID(String* data) : StringField(1394, data) {}
  };

  public __gc class DiscretionPrice : public DoubleField
  {
  public:
    static const int FIELD = 845;
    DiscretionPrice() : DoubleField(845) {}
    DiscretionPrice(double data) : DoubleField(845, data) {}
    DiscretionPrice(double data, int decimalPadding) : DoubleField(845, data, decimalPadding) {}
  };

  public __gc class ContAmtValue : public DoubleField
  {
  public:
    static const int FIELD = 520;
    ContAmtValue() : DoubleField(520) {}
    ContAmtValue(double data) : DoubleField(520, data) {}
    ContAmtValue(double data, int decimalPadding) : DoubleField(520, data, decimalPadding) {}
  };

  public __gc class QuantityType : public IntField
  {
  public:
    static const int FIELD = 465;
    static const int SHARES = 1;
    static const int CURRENTFACE = 3;
    static const int PAR = 8;
    static const int BONDS = 2;
    static const int ORIGINALFACE = 4;
    static const int CONTRACTS = 6;
    static const int OTHER = 7;
    static const int CURRENCY = 5;
    QuantityType() : IntField(465) {}
    QuantityType(int data) : IntField(465, data) {}
  };

  public __gc class ComplexEventPriceBoundaryMethod : public IntField
  {
  public:
    static const int FIELD = 1487;
    static const int GREATER_THAN_OR_EQUAL_TO_COMPLEXEVENTPRICE = 4;
    static const int EQUAL_TO_COMPLEXEVENTPRICE = 3;
    static const int LESS_THAN_COMPLEXEVENTPRICE = 1;
    static const int GREATER_THAN_COMPLEXEVENTPRICE = 5;
    static const int LESS_THAN_OR_EQUAL_TO_COMPLEXEVENTPRICE = 2;
    ComplexEventPriceBoundaryMethod() : IntField(1487) {}
    ComplexEventPriceBoundaryMethod(int data) : IntField(1487, data) {}
  };

  public __gc class ImpliedMarketIndicator : public IntField
  {
  public:
    static const int FIELD = 1144;
    static const int BOTH_IMPLIED_IN_AND_IMPLIED_OUT = 3;
    static const int NOT_IMPLIED = 0;
    static const int IMPLIED_OUT = 2;
    static const int IMPLIED_IN = 1;
    ImpliedMarketIndicator() : IntField(1144) {}
    ImpliedMarketIndicator(int data) : IntField(1144, data) {}
  };

  public __gc class AllocClearingFeeIndicator : public StringField
  {
  public:
    static const int FIELD = 1136;
    AllocClearingFeeIndicator() : StringField(1136) {}
    AllocClearingFeeIndicator(String* data) : StringField(1136, data) {}
  };

  public __gc class QuoteRequestType : public IntField
  {
  public:
    static const int FIELD = 303;
    static const int AUTOMATIC = 2;
    static const int MAN = 1;
    static const int AUTO = 2;
    static const int MANUAL = 1;
    QuoteRequestType() : IntField(303) {}
    QuoteRequestType(int data) : IntField(303, data) {}
  };

  public __gc class SecurityRequestResult : public IntField
  {
  public:
    static const int FIELD = 560;
    static const int INSTRUMENTUNAVAILABLE = 4;
    static const int NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA = 2;
    static const int NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA = 3;
    static const int INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE = 4;
    static const int VALID_REQUEST = 0;
    static const int VALIDREQ = 0;
    static const int NOINSTRUMENTSFOUND = 2;
    static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
    static const int NOTAUTHORIZED = 3;
    static const int NOTSUPPORTED = 5;
    static const int INVALIDREQ = 1;
    static const int REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED = 5;
    SecurityRequestResult() : IntField(560) {}
    SecurityRequestResult(int data) : IntField(560, data) {}
  };

  public __gc class OrderRestrictions : public StringField
  {
  public:
    static const int FIELD = 529;
    static const __wchar_t ISSUER_HOLDING = 'B';
    static const __wchar_t NON_INDEXARBITRAGE = '3';
    static const __wchar_t EXMRKTPART = '8';
    static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = '5';
    static const __wchar_t NON_ALGORITHMIC = 'D';
    static const __wchar_t EXTNERAL_INTER_CONNECTED_MARKET_LINKAGE = '9';
    static const __wchar_t NON_INDEX_ARBITRAGE = '3';
    static const __wchar_t ACTING_AS_MARKET_MAKER_OF_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SEUCIRTY = '6';
    static const __wchar_t PROGRAM_TRADE = '1';
    static const __wchar_t ISSUE_PRICE_STABILIZATION = 'C';
    static const __wchar_t INDEXARBITRAGE = '2';
    static const __wchar_t ACTMMDERIV = '6';
    static const __wchar_t FORENTITY = '7';
    static const __wchar_t CROSS = 'F';
    static const __wchar_t PROGRAMTRADE = '1';
    static const __wchar_t RISKARB = 'A';
    static const __wchar_t EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = '9';
    static const __wchar_t FOREIGN_ENTITY = '7';
    static const __wchar_t COMPETINGMARKETMAKER = '4';
    static const __wchar_t EXINTMRKTLINK = '9';
    static const __wchar_t INDEX_ARBITRAGE = '2';
    static const __wchar_t EXTERNAL_MARKET_PARTICIPANT = '8';
    static const __wchar_t ALGORITHMIC = 'E';
    static const __wchar_t ACTMM = '5';
    static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = '6';
    static const __wchar_t RISKLESS_ARBITRAGE = 'A';
    static const __wchar_t COMPETING_MARKET_MAKER = '4';
    OrderRestrictions() : StringField(529) {}
    OrderRestrictions(String* data) : StringField(529, data) {}
  };

  public __gc class NoSideTrdRegTS : public IntField
  {
  public:
    static const int FIELD = 1016;
    NoSideTrdRegTS() : IntField(1016) {}
    NoSideTrdRegTS(int data) : IntField(1016, data) {}
  };

  public __gc class Text : public StringField
  {
  public:
    static const int FIELD = 58;
    Text() : StringField(58) {}
    Text(String* data) : StringField(58, data) {}
  };

  public __gc class EncodedTextLen : public IntField
  {
  public:
    static const int FIELD = 354;
    EncodedTextLen() : IntField(354) {}
    EncodedTextLen(int data) : IntField(354, data) {}
  };

  public __gc class ListExecInstType : public CharField
  {
  public:
    static const int FIELD = 433;
    static const __wchar_t WAIT_FOR_EXECUT_INSTRUCTION = '2';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = '3';
    static const __wchar_t IMMED = '1';
    static const __wchar_t WAIT = '2';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = '5';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_3 = '3';
    static const __wchar_t IMMEDIATE = '1';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_4 = '4';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_5 = '5';
    static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = '4';
    static const __wchar_t EXCHCIVBUYTOP = '4';
    static const __wchar_t EXCHCIVBUYWD = '5';
    static const __wchar_t EXCHCIVSELL = '3';
    static const __wchar_t WAIT_FOR_EXECUTE_INSTRUCTION = '2';
    ListExecInstType() : CharField(433) {}
    ListExecInstType(__wchar_t data) : CharField(433, data) {}
  };

  public __gc class SecondaryOrderID : public StringField
  {
  public:
    static const int FIELD = 198;
    SecondaryOrderID() : StringField(198) {}
    SecondaryOrderID(String* data) : StringField(198, data) {}
  };

  public __gc class ExecBroker : public StringField
  {
  public:
    static const int FIELD = 76;
    ExecBroker() : StringField(76) {}
    ExecBroker(String* data) : StringField(76, data) {}
  };

  public __gc class RelationshipRiskEncodedSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 1618;
    RelationshipRiskEncodedSecurityDescLen() : IntField(1618) {}
    RelationshipRiskEncodedSecurityDescLen(int data) : IntField(1618, data) {}
  };

  public __gc class SecurityXMLLen : public IntField
  {
  public:
    static const int FIELD = 1184;
    SecurityXMLLen() : IntField(1184) {}
    SecurityXMLLen(int data) : IntField(1184, data) {}
  };

  public __gc class ApplSeqNum : public IntField
  {
  public:
    static const int FIELD = 1181;
    ApplSeqNum() : IntField(1181) {}
    ApplSeqNum(int data) : IntField(1181, data) {}
  };

  public __gc class MaxTradeVol : public DoubleField
  {
  public:
    static const int FIELD = 1140;
    MaxTradeVol() : DoubleField(1140) {}
    MaxTradeVol(double data) : DoubleField(1140, data) {}
    MaxTradeVol(double data, int decimalPadding) : DoubleField(1140, data, decimalPadding) {}
  };

  public __gc class OfferSwapPoints : public DoubleField
  {
  public:
    static const int FIELD = 1066;
    OfferSwapPoints() : DoubleField(1066) {}
    OfferSwapPoints(double data) : DoubleField(1066, data) {}
    OfferSwapPoints(double data, int decimalPadding) : DoubleField(1066, data, decimalPadding) {}
  };

  public __gc class SettlPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 786;
    SettlPartySubIDType() : IntField(786) {}
    SettlPartySubIDType(int data) : IntField(786, data) {}
  };

  public __gc class DistribPaymentMethod : public IntField
  {
  public:
    static const int FIELD = 477;
    static const int FED_WIRE = 7;
    static const int ACH_CREDIT = 9;
    static const int EUROCLEAR = 3;
    static const int TELEGRAPHICTRANSFER = 6;
    static const int ACHCREDIT = 9;
    static const int TELEGRAPHIC_TRANSFER = 6;
    static const int FEDWIRE = 7;
    static const int CHEQUE = 5;
    static const int DIRECT_CREDIT = 8;
    static const int CREST = 1;
    static const int BPAY = 10;
    static const int CLEARSTREAM = 4;
    static const int DIRECTCREDITBECSBACS = 8;
    static const int HIGHVALUECLEARINGSYSTEMHVACS = 11;
    static const int NSCC = 2;
    static const int HIGH_VALUE_CLEARING_SYSTEM_HVACS = 11;
    static const int REINVESTINFUND = 12;
    static const int REINVEST_IN_FUND = 12;
    DistribPaymentMethod() : IntField(477) {}
    DistribPaymentMethod(int data) : IntField(477, data) {}
  };

  public __gc class TotalAffectedOrders : public IntField
  {
  public:
    static const int FIELD = 533;
    TotalAffectedOrders() : IntField(533) {}
    TotalAffectedOrders(int data) : IntField(533, data) {}
  };

  public __gc class StrikeIncrement : public DoubleField
  {
  public:
    static const int FIELD = 1204;
    StrikeIncrement() : DoubleField(1204) {}
    StrikeIncrement(double data) : DoubleField(1204, data) {}
    StrikeIncrement(double data, int decimalPadding) : DoubleField(1204, data, decimalPadding) {}
  };

  public __gc class OrderHandlingInstSource : public IntField
  {
  public:
    static const int FIELD = 1032;
    static const int NASD_OATS = 1;
    OrderHandlingInstSource() : IntField(1032) {}
    OrderHandlingInstSource(int data) : IntField(1032, data) {}
  };

  public __gc class CopyMsgIndicator : public BooleanField
  {
  public:
    static const int FIELD = 797;
    CopyMsgIndicator() : BooleanField(797) {}
    CopyMsgIndicator(bool data) : BooleanField(797, data) {}
  };

  public __gc class NoDlvyInst : public IntField
  {
  public:
    static const int FIELD = 85;
    NoDlvyInst() : IntField(85) {}
    NoDlvyInst(int data) : IntField(85, data) {}
  };

  public __gc class QuoteEntryID : public StringField
  {
  public:
    static const int FIELD = 299;
    QuoteEntryID() : StringField(299) {}
    QuoteEntryID(String* data) : StringField(299, data) {}
  };

  public __gc class AffirmStatus : public IntField
  {
  public:
    static const int FIELD = 940;
    static const int CONFIRMREJECTED = 2;
    static const int CONFIRM_REJECTED_IE_NOT_AFFIRMED = 2;
    static const int AFFIRMED = 3;
    static const int RECEIVED = 1;
    AffirmStatus() : IntField(940) {}
    AffirmStatus(int data) : IntField(940, data) {}
  };

  public __gc class MailingInst : public StringField
  {
  public:
    static const int FIELD = 482;
    MailingInst() : StringField(482) {}
    MailingInst(String* data) : StringField(482, data) {}
  };

  public __gc class OfferSize : public DoubleField
  {
  public:
    static const int FIELD = 135;
    OfferSize() : DoubleField(135) {}
    OfferSize(double data) : DoubleField(135, data) {}
    OfferSize(double data, int decimalPadding) : DoubleField(135, data, decimalPadding) {}
  };

  public __gc class LegSecurityType : public StringField
  {
  public:
    static const int FIELD = 609;
    LegSecurityType() : StringField(609) {}
    LegSecurityType(String* data) : StringField(609, data) {}
  };

  public __gc class RiskLimitPlatform : public StringField
  {
  public:
    static const int FIELD = 1533;
    RiskLimitPlatform() : StringField(1533) {}
    RiskLimitPlatform(String* data) : StringField(1533, data) {}
  };

  public __gc class OrigCustOrderCapacity : public IntField
  {
  public:
    static const int FIELD = 1432;
    static const int CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = 2;
    static const int MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = 1;
    static const int MEMBER_TRADING_FOR_ANOTHER_MEMBER = 3;
    static const int ALL_OTHER = 4;
    OrigCustOrderCapacity() : IntField(1432) {}
    OrigCustOrderCapacity(int data) : IntField(1432, data) {}
  };

  public __gc class AllocMethod : public IntField
  {
  public:
    static const int FIELD = 1002;
    static const int GUARANTOR = 2;
    static const int AUTOMATIC = 1;
    static const int MANUAL = 3;
    AllocMethod() : IntField(1002) {}
    AllocMethod(int data) : IntField(1002, data) {}
  };

  public __gc class QuantityDate : public StringField
  {
  public:
    static const int FIELD = 976;
    QuantityDate() : StringField(976) {}
    QuantityDate(String* data) : StringField(976, data) {}
  };

  public __gc class TargetStrategyPerformance : public DoubleField
  {
  public:
    static const int FIELD = 850;
    TargetStrategyPerformance() : DoubleField(850) {}
    TargetStrategyPerformance(double data) : DoubleField(850, data) {}
    TargetStrategyPerformance(double data, int decimalPadding) : DoubleField(850, data, decimalPadding) {}
  };

  public __gc class CardExpDate : public StringField
  {
  public:
    static const int FIELD = 490;
    CardExpDate() : StringField(490) {}
    CardExpDate(String* data) : StringField(490, data) {}
  };

  public __gc class ConfirmID : public StringField
  {
  public:
    static const int FIELD = 664;
    ConfirmID() : StringField(664) {}
    ConfirmID(String* data) : StringField(664, data) {}
  };

  public __gc class StandInstDbName : public StringField
  {
  public:
    static const int FIELD = 170;
    StandInstDbName() : StringField(170) {}
    StandInstDbName(String* data) : StringField(170, data) {}
  };

  public __gc class DayOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 424;
    DayOrderQty() : DoubleField(424) {}
    DayOrderQty(double data) : DoubleField(424, data) {}
    DayOrderQty(double data, int decimalPadding) : DoubleField(424, data, decimalPadding) {}
  };

  public __gc class HighLimitPrice : public DoubleField
  {
  public:
    static const int FIELD = 1149;
    HighLimitPrice() : DoubleField(1149) {}
    HighLimitPrice(double data) : DoubleField(1149, data) {}
    HighLimitPrice(double data, int decimalPadding) : DoubleField(1149, data, decimalPadding) {}
  };

  public __gc class FirmTradeID : public StringField
  {
  public:
    static const int FIELD = 1041;
    FirmTradeID() : StringField(1041) {}
    FirmTradeID(String* data) : StringField(1041, data) {}
  };

  public __gc class SecondaryIndividualAllocID : public StringField
  {
  public:
    static const int FIELD = 989;
    SecondaryIndividualAllocID() : StringField(989) {}
    SecondaryIndividualAllocID(String* data) : StringField(989, data) {}
  };

  public __gc class AgreementDesc : public StringField
  {
  public:
    static const int FIELD = 913;
    AgreementDesc() : StringField(913) {}
    AgreementDesc(String* data) : StringField(913, data) {}
  };

  public __gc class MassCancelResponse : public CharField
  {
  public:
    static const int FIELD = 531;
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
    static const __wchar_t CANCEL_ORDERS_FOR_ISSUER_OF_UNDERLYING_SECURITY = 'C';
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY_GROUP = 'A';
    static const __wchar_t CXLORDERSSECURITYTYPE = '5';
    static const __wchar_t CXLORDERSUNDERLYINGSECURITY = '2';
    static const __wchar_t CXLORDERSTRDSESSION = '6';
    static const __wchar_t CXLALLORDERS = '7';
    static const __wchar_t CANCEL_ORDERS_FOR_A_MARKET = '8';
    static const __wchar_t CANCEL_ORDERS_FOR_A_MARKET_SEGMENT = '9';
    static const __wchar_t CXLREQREJ = '0';
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
    static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
    static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
    static const __wchar_t CXLORDERSSECURITY = '1';
    static const __wchar_t CXLORDERSPRODUCT = '3';
    static const __wchar_t CANCEL_ALL_ORDERS = '7';
    static const __wchar_t CANCEL_REQUEST_REJECTED = '0';
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITIES_ISSUER = 'B';
    static const __wchar_t CXLORDERSCFICODE = '4';
    static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
    static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
    MassCancelResponse() : CharField(531) {}
    MassCancelResponse(__wchar_t data) : CharField(531, data) {}
  };

  public __gc class LegSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 675;
    LegSettlCurrency() : StringField(675) {}
    LegSettlCurrency(String* data) : StringField(675, data) {}
  };

  public __gc class Commission : public DoubleField
  {
  public:
    static const int FIELD = 12;
    Commission() : DoubleField(12) {}
    Commission(double data) : DoubleField(12, data) {}
    Commission(double data, int decimalPadding) : DoubleField(12, data, decimalPadding) {}
  };

  public __gc class StreamAsgnReqType : public IntField
  {
  public:
    static const int FIELD = 1498;
    static const int STREAM_ASSIGNMENT_FOR_NEW_CUSTOMER = 1;
    static const int STREAM_ASSIGNMENT_FOR_EXISTING_CUSTOMER = 2;
    StreamAsgnReqType() : IntField(1498) {}
    StreamAsgnReqType(int data) : IntField(1498, data) {}
  };

  public __gc class BidSwapPoints : public DoubleField
  {
  public:
    static const int FIELD = 1065;
    BidSwapPoints() : DoubleField(1065) {}
    BidSwapPoints(double data) : DoubleField(1065, data) {}
    BidSwapPoints(double data, int decimalPadding) : DoubleField(1065, data, decimalPadding) {}
  };

  public __gc class NoSettlPartyIDs : public IntField
  {
  public:
    static const int FIELD = 781;
    NoSettlPartyIDs() : IntField(781) {}
    NoSettlPartyIDs(int data) : IntField(781, data) {}
  };

  public __gc class SymbolSfx : public StringField
  {
  public:
    static const int FIELD = 65;
    static const String* EUCP_WITH_LUMP_SUM_INTEREST_RATHER_THAN_DISCOUNT_PRICE = "CD";
    static const String* EUCPLUMPSUMINTEREST = "CD";
    static const String* WHENISSUED = "WI";
    static const String* WHEN_ISSUED_FOR_A_SECURITY_TO_BE_REISSUED_UNDER_AN_OLD_CUSIP_OR_ISIN = "WI";
    SymbolSfx() : StringField(65) {}
    SymbolSfx(String* data) : StringField(65, data) {}
  };

  public __gc class BusinessRejectRefID : public StringField
  {
  public:
    static const int FIELD = 379;
    BusinessRejectRefID() : StringField(379) {}
    BusinessRejectRefID(String* data) : StringField(379, data) {}
  };

  public __gc class Price2 : public DoubleField
  {
  public:
    static const int FIELD = 640;
    Price2() : DoubleField(640) {}
    Price2(double data) : DoubleField(640, data) {}
    Price2(double data, int decimalPadding) : DoubleField(640, data, decimalPadding) {}
  };

  public __gc class FillLiquidityInd : public IntField
  {
  public:
    static const int FIELD = 1443;
    FillLiquidityInd() : IntField(1443) {}
    FillLiquidityInd(int data) : IntField(1443, data) {}
  };

  public __gc class MassActionReportID : public StringField
  {
  public:
    static const int FIELD = 1369;
    MassActionReportID() : StringField(1369) {}
    MassActionReportID(String* data) : StringField(1369, data) {}
  };

  public __gc class DerivativeIssuer : public StringField
  {
  public:
    static const int FIELD = 1275;
    DerivativeIssuer() : StringField(1275) {}
    DerivativeIssuer(String* data) : StringField(1275, data) {}
  };

  public __gc class ExDestinationIDSource : public CharField
  {
  public:
    static const int FIELD = 1133;
    static const __wchar_t PROPRIETARY = 'D';
    static const __wchar_t GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C';
    static const __wchar_t BIC = 'B';
    static const __wchar_t MIC = 'G';
    static const __wchar_t ISO_COUNTRY_CODE = 'E';
    ExDestinationIDSource() : CharField(1133) {}
    ExDestinationIDSource(__wchar_t data) : CharField(1133, data) {}
  };

  public __gc class CollRespID : public StringField
  {
  public:
    static const int FIELD = 904;
    CollRespID() : StringField(904) {}
    CollRespID(String* data) : StringField(904, data) {}
  };

  public __gc class SecurityListRequestType : public IntField
  {
  public:
    static const int FIELD = 559;
    static const int ALLSECURITIES = 4;
    static const int MARKETID_OR_MARKETID_PLUS_MARKETSEGMENTID = 5;
    static const int SECURITYTYPECFICODE = 1;
    static const int SYMBOL = 0;
    static const int SECURITYTYPE_AND_OR_CFICODE = 1;
    static const int TRADINGSESSIONID = 3;
    static const int ALL_SECURITIES = 4;
    static const int PRODUCT = 2;
    SecurityListRequestType() : IntField(559) {}
    SecurityListRequestType(int data) : IntField(559, data) {}
  };

  public __gc class EncodedLegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 622;
    EncodedLegSecurityDesc() : StringField(622) {}
    EncodedLegSecurityDesc(String* data) : StringField(622, data) {}
  };

  public __gc class RelatedContextPartyRole : public IntField
  {
  public:
    static const int FIELD = 1578;
    RelatedContextPartyRole() : IntField(1578) {}
    RelatedContextPartyRole(int data) : IntField(1578, data) {}
  };

  public __gc class UnderlyingSettlementStatus : public StringField
  {
  public:
    static const int FIELD = 988;
    UnderlyingSettlementStatus() : StringField(988) {}
    UnderlyingSettlementStatus(String* data) : StringField(988, data) {}
  };

  public __gc class SecurityAltID : public StringField
  {
  public:
    static const int FIELD = 455;
    SecurityAltID() : StringField(455) {}
    SecurityAltID(String* data) : StringField(455, data) {}
  };

  public __gc class RegistRefID : public StringField
  {
  public:
    static const int FIELD = 508;
    RegistRefID() : StringField(508) {}
    RegistRefID(String* data) : StringField(508, data) {}
  };

  public __gc class RelationshipRiskFlexibleIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1607;
    RelationshipRiskFlexibleIndicator() : BooleanField(1607) {}
    RelationshipRiskFlexibleIndicator(bool data) : BooleanField(1607, data) {}
  };

  public __gc class DerivativePriceQuoteMethod : public StringField
  {
  public:
    static const int FIELD = 1318;
    DerivativePriceQuoteMethod() : StringField(1318) {}
    DerivativePriceQuoteMethod(String* data) : StringField(1318, data) {}
  };

  public __gc class RelationshipRiskProductComplex : public StringField
  {
  public:
    static const int FIELD = 1597;
    RelationshipRiskProductComplex() : StringField(1597) {}
    RelationshipRiskProductComplex(String* data) : StringField(1597, data) {}
  };

  public __gc class OrderDelay : public IntField
  {
  public:
    static const int FIELD = 1428;
    OrderDelay() : IntField(1428) {}
    OrderDelay(int data) : IntField(1428, data) {}
  };

  public __gc class NoNotAffectedOrders : public IntField
  {
  public:
    static const int FIELD = 1370;
    NoNotAffectedOrders() : IntField(1370) {}
    NoNotAffectedOrders(int data) : IntField(1370, data) {}
  };

  public __gc class Nested3PartyID : public StringField
  {
  public:
    static const int FIELD = 949;
    Nested3PartyID() : StringField(949) {}
    Nested3PartyID(String* data) : StringField(949, data) {}
  };

  public __gc class CollAsgnReason : public IntField
  {
  public:
    static const int FIELD = 895;
    static const int FORWARDCOLLATERALDEMAND = 5;
    static const int ADVERSETAXEVENT = 7;
    static const int MARGINDEFICIENCY = 3;
    static const int TIME_WARNING = 2;
    static const int TIMEWARNING = 2;
    static const int ADVERSE_TAX_EVENT = 7;
    static const int MARGINEXCESS = 4;
    static const int MARGIN_DEFICIENCY = 3;
    static const int SCHEDULED = 1;
    static const int INITIAL = 0;
    static const int FORWARD_COLLATERAL_DEMAND = 5;
    static const int EVENTOFDEFAULT = 6;
    static const int MARGIN_EXCESS = 4;
    static const int EVENT_OF_DEFAULT = 6;
    CollAsgnReason() : IntField(895) {}
    CollAsgnReason(int data) : IntField(895, data) {}
  };

  public __gc class TotalVolumeTradedTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 450;
    TotalVolumeTradedTime() : UtcTimeOnlyField(450) {}
    TotalVolumeTradedTime(DateTime data) : UtcTimeOnlyField(450, data) {}
    TotalVolumeTradedTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(450, data, showMilliseconds) {}
  };

  public __gc class SecurityExchange : public StringField
  {
  public:
    static const int FIELD = 207;
    SecurityExchange() : StringField(207) {}
    SecurityExchange(String* data) : StringField(207, data) {}
  };

  public __gc class SettlPriceType : public IntField
  {
  public:
    static const int FIELD = 731;
    static const int FINAL = 1;
    static const int THEORETICAL = 2;
    SettlPriceType() : IntField(731) {}
    SettlPriceType(int data) : IntField(731, data) {}
  };

  public __gc class UnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1147;
    UnitOfMeasureQty() : DoubleField(1147) {}
    UnitOfMeasureQty(double data) : DoubleField(1147, data) {}
    UnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1147, data, decimalPadding) {}
  };

  public __gc class UserRequestID : public StringField
  {
  public:
    static const int FIELD = 923;
    UserRequestID() : StringField(923) {}
    UserRequestID(String* data) : StringField(923, data) {}
  };

  public __gc class LastParPx : public DoubleField
  {
  public:
    static const int FIELD = 669;
    LastParPx() : DoubleField(669) {}
    LastParPx(double data) : DoubleField(669, data) {}
    LastParPx(double data, int decimalPadding) : DoubleField(669, data, decimalPadding) {}
  };

  public __gc class EndMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1226;
    EndMaturityMonthYear() : StringField(1226) {}
    EndMaturityMonthYear(String* data) : StringField(1226, data) {}
  };

  public __gc class DealingCapacity : public CharField
  {
  public:
    static const int FIELD = 1048;
    static const __wchar_t RISKLESS_PRINCIPAL = 'R';
    static const __wchar_t PRINCIPAL = 'P';
    static const __wchar_t AGENT = 'A';
    DealingCapacity() : CharField(1048) {}
    DealingCapacity(__wchar_t data) : CharField(1048, data) {}
  };

  public __gc class PrevClosePx : public DoubleField
  {
  public:
    static const int FIELD = 140;
    PrevClosePx() : DoubleField(140) {}
    PrevClosePx(double data) : DoubleField(140, data) {}
    PrevClosePx(double data, int decimalPadding) : DoubleField(140, data, decimalPadding) {}
  };

  public __gc class TradeInputDevice : public StringField
  {
  public:
    static const int FIELD = 579;
    TradeInputDevice() : StringField(579) {}
    TradeInputDevice(String* data) : StringField(579, data) {}
  };

  public __gc class DayCumQty : public DoubleField
  {
  public:
    static const int FIELD = 425;
    DayCumQty() : DoubleField(425) {}
    DayCumQty(double data) : DoubleField(425, data) {}
    DayCumQty(double data, int decimalPadding) : DoubleField(425, data, decimalPadding) {}
  };

  public __gc class SecuritySettlAgentAcctNum : public StringField
  {
  public:
    static const int FIELD = 178;
    SecuritySettlAgentAcctNum() : StringField(178) {}
    SecuritySettlAgentAcctNum(String* data) : StringField(178, data) {}
  };

  public __gc class LegCurrency : public StringField
  {
  public:
    static const int FIELD = 556;
    LegCurrency() : StringField(556) {}
    LegCurrency(String* data) : StringField(556, data) {}
  };

  public __gc class EncryptedNewPassword : public StringField
  {
  public:
    static const int FIELD = 1404;
    EncryptedNewPassword() : StringField(1404) {}
    EncryptedNewPassword(String* data) : StringField(1404, data) {}
  };

  public __gc class DerivativeMinPriceIncrementAmount : public DoubleField
  {
  public:
    static const int FIELD = 1268;
    DerivativeMinPriceIncrementAmount() : DoubleField(1268) {}
    DerivativeMinPriceIncrementAmount(double data) : DoubleField(1268, data) {}
    DerivativeMinPriceIncrementAmount(double data, int decimalPadding) : DoubleField(1268, data, decimalPadding) {}
  };

  public __gc class NoNested3PartySubIDs : public IntField
  {
  public:
    static const int FIELD = 952;
    NoNested3PartySubIDs() : IntField(952) {}
    NoNested3PartySubIDs(int data) : IntField(952, data) {}
  };

  public __gc class RefSubID : public StringField
  {
  public:
    static const int FIELD = 931;
    RefSubID() : StringField(931) {}
    RefSubID(String* data) : StringField(931, data) {}
  };

  public __gc class SettlPartyRole : public IntField
  {
  public:
    static const int FIELD = 784;
    SettlPartyRole() : IntField(784) {}
    SettlPartyRole(int data) : IntField(784, data) {}
  };

  public __gc class CashDistribAgentName : public StringField
  {
  public:
    static const int FIELD = 498;
    CashDistribAgentName() : StringField(498) {}
    CashDistribAgentName(String* data) : StringField(498, data) {}
  };

  public __gc class LegContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 614;
    LegContractMultiplier() : DoubleField(614) {}
    LegContractMultiplier(double data) : DoubleField(614, data) {}
    LegContractMultiplier(double data, int decimalPadding) : DoubleField(614, data, decimalPadding) {}
  };

  public __gc class ProgPeriodInterval : public IntField
  {
  public:
    static const int FIELD = 415;
    ProgPeriodInterval() : IntField(415) {}
    ProgPeriodInterval(int data) : IntField(415, data) {}
  };

  public __gc class LegSettlType : public CharField
  {
  public:
    static const int FIELD = 587;
    LegSettlType() : CharField(587) {}
    LegSettlType(__wchar_t data) : CharField(587, data) {}
  };

  public __gc class OnBehalfOfLocationID : public StringField
  {
  public:
    static const int FIELD = 144;
    OnBehalfOfLocationID() : StringField(144) {}
    OnBehalfOfLocationID(String* data) : StringField(144, data) {}
  };

  public __gc class OnBehalfOfSubID : public StringField
  {
  public:
    static const int FIELD = 116;
    OnBehalfOfSubID() : StringField(116) {}
    OnBehalfOfSubID(String* data) : StringField(116, data) {}
  };

  public __gc class RelationshipRiskLimitPlatform : public StringField
  {
  public:
    static const int FIELD = 1586;
    RelationshipRiskLimitPlatform() : StringField(1586) {}
    RelationshipRiskLimitPlatform(String* data) : StringField(1586, data) {}
  };

  public __gc class RelatedPartySubID : public StringField
  {
  public:
    static const int FIELD = 1567;
    RelatedPartySubID() : StringField(1567) {}
    RelatedPartySubID(String* data) : StringField(1567, data) {}
  };

  public __gc class ComplexEventEndTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 1496;
    ComplexEventEndTime() : UtcTimeOnlyField(1496) {}
    ComplexEventEndTime(DateTime data) : UtcTimeOnlyField(1496, data) {}
    ComplexEventEndTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(1496, data, showMilliseconds) {}
  };

  public __gc class RateSourceType : public IntField
  {
  public:
    static const int FIELD = 1447;
    static const int SECONDARY = 1;
    static const int PRIMARY = 0;
    RateSourceType() : IntField(1447) {}
    RateSourceType(int data) : IntField(1447, data) {}
  };

  public __gc class DerivativeStateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 1259;
    DerivativeStateOrProvinceOfIssue() : StringField(1259) {}
    DerivativeStateOrProvinceOfIssue(String* data) : StringField(1259, data) {}
  };

  public __gc class TradeLegRefID : public StringField
  {
  public:
    static const int FIELD = 824;
    TradeLegRefID() : StringField(824) {}
    TradeLegRefID(String* data) : StringField(824, data) {}
  };

  public __gc class RelSymTransactTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1504;
    RelSymTransactTime() : UtcTimeStampField(1504) {}
    RelSymTransactTime(DateTime data) : UtcTimeStampField(1504, data) {}
  };

  public __gc class NoComplexEventTimes : public IntField
  {
  public:
    static const int FIELD = 1494;
    NoComplexEventTimes() : IntField(1494) {}
    NoComplexEventTimes(int data) : IntField(1494, data) {}
  };

  public __gc class LegCalculatedCcyLastQty : public DoubleField
  {
  public:
    static const int FIELD = 1074;
    LegCalculatedCcyLastQty() : DoubleField(1074) {}
    LegCalculatedCcyLastQty(double data) : DoubleField(1074, data) {}
    LegCalculatedCcyLastQty(double data, int decimalPadding) : DoubleField(1074, data, decimalPadding) {}
  };

  public __gc class Nested3PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 950;
    Nested3PartyIDSource() : CharField(950) {}
    Nested3PartyIDSource(__wchar_t data) : CharField(950, data) {}
  };

  public __gc class DatedDate : public StringField
  {
  public:
    static const int FIELD = 873;
    DatedDate() : StringField(873) {}
    DatedDate(String* data) : StringField(873, data) {}
  };

  public __gc class SettlInstID : public StringField
  {
  public:
    static const int FIELD = 162;
    SettlInstID() : StringField(162) {}
    SettlInstID(String* data) : StringField(162, data) {}
  };

  public __gc class OpenInterest : public DoubleField
  {
  public:
    static const int FIELD = 746;
    OpenInterest() : DoubleField(746) {}
    OpenInterest(double data) : DoubleField(746, data) {}
    OpenInterest(double data, int decimalPadding) : DoubleField(746, data, decimalPadding) {}
  };

  public __gc class UnderlyingContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 436;
    UnderlyingContractMultiplier() : DoubleField(436) {}
    UnderlyingContractMultiplier(double data) : DoubleField(436, data) {}
    UnderlyingContractMultiplier(double data, int decimalPadding) : DoubleField(436, data, decimalPadding) {}
  };

  public __gc class TotQuoteEntries : public IntField
  {
  public:
    static const int FIELD = 304;
    TotQuoteEntries() : IntField(304) {}
    TotQuoteEntries(int data) : IntField(304, data) {}
  };

  public __gc class PartyAltSubID : public StringField
  {
  public:
    static const int FIELD = 1520;
    PartyAltSubID() : StringField(1520) {}
    PartyAltSubID(String* data) : StringField(1520, data) {}
  };

  public __gc class TotNoCxldQuotes : public IntField
  {
  public:
    static const int FIELD = 1168;
    TotNoCxldQuotes() : IntField(1168) {}
    TotNoCxldQuotes(int data) : IntField(1168, data) {}
  };

  public __gc class AggregatedBook : public BooleanField
  {
  public:
    static const int FIELD = 266;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    AggregatedBook() : BooleanField(266) {}
    AggregatedBook(bool data) : BooleanField(266, data) {}
  };

  public __gc class PaymentRef : public StringField
  {
  public:
    static const int FIELD = 476;
    PaymentRef() : StringField(476) {}
    PaymentRef(String* data) : StringField(476, data) {}
  };

  public __gc class PaymentDate : public StringField
  {
  public:
    static const int FIELD = 504;
    PaymentDate() : StringField(504) {}
    PaymentDate(String* data) : StringField(504, data) {}
  };

  public __gc class OrderPercent : public DoubleField
  {
  public:
    static const int FIELD = 516;
    OrderPercent() : DoubleField(516) {}
    OrderPercent(double data) : DoubleField(516, data) {}
    OrderPercent(double data, int decimalPadding) : DoubleField(516, data, decimalPadding) {}
  };

  public __gc class PosQtyStatus : public IntField
  {
  public:
    static const int FIELD = 706;
    static const int SUBMITTED = 0;
    static const int REJECTED = 2;
    static const int ACCEPTED = 1;
    PosQtyStatus() : IntField(706) {}
    PosQtyStatus(int data) : IntField(706, data) {}
  };

  public __gc class RiskRestructuringType : public StringField
  {
  public:
    static const int FIELD = 1551;
    RiskRestructuringType() : StringField(1551) {}
    RiskRestructuringType(String* data) : StringField(1551, data) {}
  };

  public __gc class NoNested4PartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1413;
    NoNested4PartySubIDs() : IntField(1413) {}
    NoNested4PartySubIDs(int data) : IntField(1413, data) {}
  };

  public __gc class PrivateQuote : public BooleanField
  {
  public:
    static const int FIELD = 1171;
    PrivateQuote() : BooleanField(1171) {}
    PrivateQuote(bool data) : BooleanField(1171, data) {}
  };

  public __gc class SecondaryTradeID : public StringField
  {
  public:
    static const int FIELD = 1040;
    SecondaryTradeID() : StringField(1040) {}
    SecondaryTradeID(String* data) : StringField(1040, data) {}
  };

  public __gc class SecuritySettlAgentContactPhone : public StringField
  {
  public:
    static const int FIELD = 181;
    SecuritySettlAgentContactPhone() : StringField(181) {}
    SecuritySettlAgentContactPhone(String* data) : StringField(181, data) {}
  };

  public __gc class EncodedMktSegmDescLen : public IntField
  {
  public:
    static const int FIELD = 1397;
    EncodedMktSegmDescLen() : IntField(1397) {}
    EncodedMktSegmDescLen(int data) : IntField(1397, data) {}
  };

  public __gc class SideCurrency : public StringField
  {
  public:
    static const int FIELD = 1154;
    SideCurrency() : StringField(1154) {}
    SideCurrency(String* data) : StringField(1154, data) {}
  };

  public __gc class LegQty : public DoubleField
  {
  public:
    static const int FIELD = 687;
    LegQty() : DoubleField(687) {}
    LegQty(double data) : DoubleField(687, data) {}
    LegQty(double data, int decimalPadding) : DoubleField(687, data, decimalPadding) {}
  };

  public __gc class MsgType : public StringField
  {
  public:
    static const int FIELD = 35;
    static const String* TradingSessionStatusRequest = "g";
    static const String* ListStatus = "N";
    static const String* Email = "C";
    static const String* ListExecute = "L";
    static const String* Confirmation = "AK";
    static const String* NewOrderMultileg = "AB";
    static const String* IndicationofInterest = "6";
    static const String* MarketDataIncrementalRefresh = "X";
    static const String* TradeCaptureReport = "AE";
    static const String* RequestForPositionsAck = "AO";
    static const String* StreamAssignmentRequest = "CC";
    static const String* SecurityListRequest = "x";
    static const String* CollateralReport = "BA";
    static const String* PositionMaintenanceReport = "AM";
    static const String* PositionReport = "AP";
    static const String* StreamAssignmentReportACK = "CE";
    static const String* UserRequest = "BE";
    static const String* PositionMaintenanceRequest = "AL";
    static const String* NetworkCounterpartySystemStatusResponse = "BD";
    static const String* NewOrderCross = "s";
    static const String* AdjustedPositionReport = "BL";
    static const String* Logon = "A";
    static const String* IOI = "6";
    static const String* ListStrikePrice = "m";
    static const String* BidRequest = "k";
    static const String* TradingSessionStatus = "h";
    static const String* RegistrationInstructionsResponse = "p";
    static const String* Advertisement = "7";
    static const String* MassQuote = "i";
    static const String* Logout = "5";
    static const String* AllocationReport = "AS";
    static const String* SecurityDefinitionUpdateReport = "BP";
    static const String* ListStatusRequest = "M";
    static const String* BusinessMessageReject = "j";
    static const String* ConfirmationAck = "AU";
    static const String* TestRequest = "1";
    static const String* SecurityList = "y";
    static const String* ListCancelRequest = "K";
    static const String* News = "B";
    static const String* TradingSessionListUpdateReport = "BS";
    static const String* Heartbeat = "0";
    static const String* QuoteAcknowledgement = "b";
    static const String* AllocationReportAck = "AT";
    static const String* ConfirmationRequest = "BH";
    static const String* OrderMassActionReport = "BZ";
    static const String* CollateralInquiry = "BB";
    static const String* SecurityTypeRequest = "v";
    static const String* NewOrderList = "E";
    static const String* ExecutionAcknowledgement = "BN";
    static const String* TradingSessionListRequest = "BI";
    static const String* SecurityTypes = "w";
    static const String* MarketDefinition = "BU";
    static const String* SequenceReset = "4";
    static const String* CollateralResponse = "AZ";
    static const String* MassQuoteAcknowledgement = "b";
    static const String* QuoteResponse = "AJ";
    static const String* QuoteStatusRequest = "a";
    static const String* QuoteCancel = "Z";
    static const String* ContraryIntentionReport = "BO";
    static const String* PartyDetailsListReport = "CG";
    static const String* PartyDetailsListRequest = "CF";
    static const String* CrossOrderCancelRequest = "u";
    static const String* NewOrderSingle = "D";
    static const String* DerivativeSecurityListRequest = "z";
    static const String* CollateralRequest = "AX";
    static const String* UserNotification = "CB";
    static const String* UserResponse = "BF";
    static const String* DontKnowTrade = "Q";
    static const String* TradeCaptureReportAck = "AR";
    static const String* ApplicationMessageRequest = "BW";
    static const String* MultilegOrderCancelReplace = "AC";
    static const String* OrderCancelReject = "9";
    static const String* ExecutionReport = "8";
    static const String* QuoteStatusReport = "AI";
    static const String* ResendRequest = "2";
    static const String* Quote = "S";
    static const String* SettlementInstructionRequest = "AV";
    static const String* SecurityListUpdateReport = "BK";
    static const String* AllocationInstructionAlert = "BM";
    static const String* TradeCaptureReportRequestAck = "AQ";
    static const String* AllocationInstruction = "J";
    static const String* Allocation = "J";
    static const String* ApplicationMessageReport = "BY";
    static const String* RegistrationInstructions = "o";
    static const String* SecurityDefinition = "d";
    static const String* SecurityDefinitionRequest = "c";
    static const String* SecurityStatus = "f";
    static const String* DerivativeSecurityList = "AA";
    static const String* NetworkCounterpartySystemStatusRequest = "BC";
    static const String* MarketDefinitionRequest = "BT";
    static const String* Reject = "3";
    static const String* DerivativeSecurityListUpdateReport = "BR";
    static const String* QuoteRequestReject = "AG";
    static const String* OrderMassStatusRequest = "AF";
    static const String* ApplicationMessageRequestAck = "BX";
    static const String* SecurityStatusRequest = "e";
    static const String* AllocationACK = "P";
    static const String* MarketDefinitionUpdateReport = "BV";
    static const String* CrossOrderCancelReplaceRequest = "t";
    static const String* OrderMassCancelReport = "r";
    static const String* AssignmentReport = "AW";
    static const String* BidResponse = "l";
    static const String* RequestForPositions = "AN";
    static const String* SettlementObligationReport = "BQ";
    static const String* OrderMassCancelRequest = "q";
    static const String* TradingSessionList = "BJ";
    static const String* OrderStatusRequest = "H";
    static const String* CollateralAssignment = "AY";
    static const String* StreamAssignmentReport = "CD";
    static const String* OrderMassActionRequest = "CA";
    static const String* AllocationAck = "P";
    static const String* QuoteRequest = "R";
    static const String* CollateralInquiryAck = "BG";
    static const String* MarketDataSnapshotFullRefresh = "W";
    static const String* SettlementInstructions = "T";
    static const String* OrderCancelReplaceRequest = "G";
    static const String* TradeCaptureReportRequest = "AD";
    static const String* RFQRequest = "AH";
    static const String* OrderCancelRequest = "F";
    static const String* MultilegOrderCancelReplaceRequest = "AC";
    static const String* AllocationInstructionAck = "P";
    static const String* MarketDataRequest = "V";
    static const String* MarketDataRequestReject = "Y";
    MsgType() : StringField(35) {}
    MsgType(String* data) : StringField(35, data) {}
  };

  public __gc class NoTradingSessions : public IntField
  {
  public:
    static const int FIELD = 386;
    NoTradingSessions() : IntField(386) {}
    NoTradingSessions(int data) : IntField(386, data) {}
  };

  public __gc class IOIid : public StringField
  {
  public:
    static const int FIELD = 23;
    IOIid() : StringField(23) {}
    IOIid(String* data) : StringField(23, data) {}
  };

  public __gc class MultiLegReportingType : public CharField
  {
  public:
    static const int FIELD = 442;
    static const __wchar_t SINGLE = '1';
    static const __wchar_t MULTILEG = '3';
    static const __wchar_t SINGLE_SECURITY = '1';
    static const __wchar_t MULTI_LEG_SECURITY = '3';
    static const __wchar_t INDIVLEG = '2';
    static const __wchar_t INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = '2';
    static const __wchar_t INDIVIDUAL_LEG_OF_A_MULTILEG_SECURITY = '2';
    MultiLegReportingType() : CharField(442) {}
    MultiLegReportingType(__wchar_t data) : CharField(442, data) {}
  };

  public __gc class IDSource : public StringField
  {
  public:
    static const int FIELD = 22;
    static const String* EXCHANGE_SYMBOL = "8";
    static const String* RIC_CODE = "5";
    static const String* ISO_CURRENCY_CODE = "6";
    static const String* ISIN_NUMBER = "4";
    static const String* SEDOL = "2";
    static const String* ISO_COUNTRY_CODE = "7";
    static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
    static const String* QUIK = "3";
    static const String* CUSIP = "1";
    IDSource() : StringField(22) {}
    IDSource(String* data) : StringField(22, data) {}
  };

  public __gc class LegStipulationType : public StringField
  {
  public:
    static const int FIELD = 688;
    LegStipulationType() : StringField(688) {}
    LegStipulationType(String* data) : StringField(688, data) {}
  };

  public __gc class DerivativeContractMultiplierUnit : public IntField
  {
  public:
    static const int FIELD = 1438;
    DerivativeContractMultiplierUnit() : IntField(1438) {}
    DerivativeContractMultiplierUnit(int data) : IntField(1438, data) {}
  };

  public __gc class MarketSegmentID : public StringField
  {
  public:
    static const int FIELD = 1300;
    MarketSegmentID() : StringField(1300) {}
    MarketSegmentID(String* data) : StringField(1300, data) {}
  };

  public __gc class OrdStatus : public CharField
  {
  public:
    static const int FIELD = 39;
    static const __wchar_t NEW = '0';
    static const __wchar_t CALCULATED = 'B';
    static const __wchar_t PENDINGNEW = 'A';
    static const __wchar_t PENDING_CANCEL = '6';
    static const __wchar_t PARTIAL = '1';
    static const __wchar_t PENDING_CANCEL_REPLACE = '6';
    static const __wchar_t PENDING_NEW = 'A';
    static const __wchar_t STOPPED = '7';
    static const __wchar_t FILLED = '2';
    static const __wchar_t PENDING_REPLACE = 'E';
    static const __wchar_t CANCELED = '4';
    static const __wchar_t ACCEPTED_FOR_BIDDING = 'D';
    static const __wchar_t SUSPENDED = '9';
    static const __wchar_t DONE = '3';
    static const __wchar_t REJECTED = '8';
    static const __wchar_t PARTIALLY_FILLED = '1';
    static const __wchar_t EXPIRED = 'C';
    static const __wchar_t REPLACED = '5';
    static const __wchar_t DONE_FOR_DAY = '3';
    static const __wchar_t ACCEPTBIDDING = 'D';
    static const __wchar_t PENDINGREP = 'E';
    OrdStatus() : CharField(39) {}
    OrdStatus(__wchar_t data) : CharField(39, data) {}
  };

  public __gc class MaturityDate : public StringField
  {
  public:
    static const int FIELD = 541;
    MaturityDate() : StringField(541) {}
    MaturityDate(String* data) : StringField(541, data) {}
  };

  public __gc class ApplTotalMessageCount : public IntField
  {
  public:
    static const int FIELD = 1349;
    ApplTotalMessageCount() : IntField(1349) {}
    ApplTotalMessageCount(int data) : IntField(1349, data) {}
  };

  public __gc class InstrumentPartySubID : public StringField
  {
  public:
    static const int FIELD = 1053;
    InstrumentPartySubID() : StringField(1053) {}
    InstrumentPartySubID(String* data) : StringField(1053, data) {}
  };

  public __gc class CustomerOrFirm : public IntField
  {
  public:
    static const int FIELD = 204;
    static const int FIRM = 1;
    static const int CUSTOMER = 0;
    CustomerOrFirm() : IntField(204) {}
    CustomerOrFirm(int data) : IntField(204, data) {}
  };

  public __gc class AdjustmentType : public IntField
  {
  public:
    static const int FIELD = 718;
    static const int DELTA_MINUS = 2;
    static const int DELTAPLUS = 1;
    static const int DELTA_PLUS = 1;
    static const int DELTAMINUS = 2;
    static const int FINAL = 3;
    static const int PROCESSREQUESTASMARGINDISPOSITION = 0;
    static const int PROCESS_REQUEST_AS_MARGIN_DISPOSITION = 0;
    AdjustmentType() : IntField(718) {}
    AdjustmentType(int data) : IntField(718, data) {}
  };

  public __gc class NoPartyAltSubIDs : public IntField
  {
  public:
    static const int FIELD = 1519;
    NoPartyAltSubIDs() : IntField(1519) {}
    NoPartyAltSubIDs(int data) : IntField(1519, data) {}
  };

  public __gc class UnderlyingInstrumentPartyID : public StringField
  {
  public:
    static const int FIELD = 1059;
    UnderlyingInstrumentPartyID() : StringField(1059) {}
    UnderlyingInstrumentPartyID(String* data) : StringField(1059, data) {}
  };

  public __gc class AsOfIndicator : public CharField
  {
  public:
    static const int FIELD = 1015;
    static const __wchar_t TRUE = '1';
    static const __wchar_t FALSE = '0';
    AsOfIndicator() : CharField(1015) {}
    AsOfIndicator(__wchar_t data) : CharField(1015, data) {}
  };

  public __gc class QuoteStatusReqID : public StringField
  {
  public:
    static const int FIELD = 649;
    QuoteStatusReqID() : StringField(649) {}
    QuoteStatusReqID(String* data) : StringField(649, data) {}
  };

  public __gc class LegPositionEffect : public CharField
  {
  public:
    static const int FIELD = 564;
    LegPositionEffect() : CharField(564) {}
    LegPositionEffect(__wchar_t data) : CharField(564, data) {}
  };

  public __gc class MDEntryPx : public DoubleField
  {
  public:
    static const int FIELD = 270;
    MDEntryPx() : DoubleField(270) {}
    MDEntryPx(double data) : DoubleField(270, data) {}
    MDEntryPx(double data, int decimalPadding) : DoubleField(270, data, decimalPadding) {}
  };

  public __gc class MassActionScope : public IntField
  {
  public:
    static const int FIELD = 1374;
    static const int ALL_ORDERS_FOR_A_MARKET_SEGMENT = 9;
    static const int ALL_ORDERS_FOR_A_MARKET = 8;
    static const int ALL_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2;
    static const int ALL_ORDERS = 7;
    static const int ALL_ORDERS_FOR_A_CFICODE = 4;
    static const int CANCEL_FOR_ISSUER_OF_UNDERLYING_SECURITY = 12;
    static const int ALL_ORDERS_FOR_A_SECURITY = 1;
    static const int ALL_ORDERS_FOR_A_TRADING_SESSION = 6;
    static const int CANCEL_FOR_SECURITY_ISSUER = 11;
    static const int ALL_ORDERS_FOR_A_SECURITY_GROUP = 10;
    static const int ALL_ORDERS_FOR_A_PRODUCT = 3;
    static const int ALL_ORDERS_FOR_A_SECURITYTYPE = 5;
    MassActionScope() : IntField(1374) {}
    MassActionScope(int data) : IntField(1374, data) {}
  };

  public __gc class ReportedPxDiff : public BooleanField
  {
  public:
    static const int FIELD = 1134;
    ReportedPxDiff() : BooleanField(1134) {}
    ReportedPxDiff(bool data) : BooleanField(1134, data) {}
  };

  public __gc class UnderlyingSettlementDate : public StringField
  {
  public:
    static const int FIELD = 987;
    UnderlyingSettlementDate() : StringField(987) {}
    UnderlyingSettlementDate(String* data) : StringField(987, data) {}
  };

  public __gc class NoNestedPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 804;
    NoNestedPartySubIDs() : IntField(804) {}
    NoNestedPartySubIDs(int data) : IntField(804, data) {}
  };

  public __gc class AllocReportRefID : public StringField
  {
  public:
    static const int FIELD = 795;
    AllocReportRefID() : StringField(795) {}
    AllocReportRefID(String* data) : StringField(795, data) {}
  };

  public __gc class Concession : public DoubleField
  {
  public:
    static const int FIELD = 238;
    Concession() : DoubleField(238) {}
    Concession(double data) : DoubleField(238, data) {}
    Concession(double data, int decimalPadding) : DoubleField(238, data, decimalPadding) {}
  };

  public __gc class EncodedSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 351;
    EncodedSecurityDesc() : StringField(351) {}
    EncodedSecurityDesc(String* data) : StringField(351, data) {}
  };

  public __gc class ExecRefID : public StringField
  {
  public:
    static const int FIELD = 19;
    ExecRefID() : StringField(19) {}
    ExecRefID(String* data) : StringField(19, data) {}
  };

  public __gc class VenueType : public CharField
  {
  public:
    static const int FIELD = 1430;
    static const __wchar_t PIT = 'P';
    static const __wchar_t EX_PIT = 'X';
    static const __wchar_t ELECTRONIC = 'E';
    VenueType() : CharField(1430) {}
    VenueType(__wchar_t data) : CharField(1430, data) {}
  };

  public __gc class MassActionType : public IntField
  {
  public:
    static const int FIELD = 1373;
    static const int CANCEL_ORDERS = 3;
    static const int RELEASE_ORDERS_FROM_SUSPENSION = 2;
    static const int SUSPEND_ORDERS = 1;
    MassActionType() : IntField(1373) {}
    MassActionType(int data) : IntField(1373, data) {}
  };

  public __gc class PosMaintResult : public IntField
  {
  public:
    static const int FIELD = 723;
    static const int SUCCESSFULCOMPLETION = 0;
    static const int SUCCESSFUL_COMPLETION = 0;
    static const int OTHER = 99;
    static const int REJECTED = 1;
    PosMaintResult() : IntField(723) {}
    PosMaintResult(int data) : IntField(723, data) {}
  };

  public __gc class IOIShares : public StringField
  {
  public:
    static const int FIELD = 27;
    static const String* MEDIUM = "M";
    static const String* LARGE = "L";
    static const String* SMALL = "S";
    IOIShares() : StringField(27) {}
    IOIShares(String* data) : StringField(27, data) {}
  };

  public __gc class BenchmarkSecurityID : public StringField
  {
  public:
    static const int FIELD = 699;
    BenchmarkSecurityID() : StringField(699) {}
    BenchmarkSecurityID(String* data) : StringField(699, data) {}
  };

  public __gc class LegLastQty : public DoubleField
  {
  public:
    static const int FIELD = 1418;
    LegLastQty() : DoubleField(1418) {}
    LegLastQty(double data) : DoubleField(1418, data) {}
    LegLastQty(double data, int decimalPadding) : DoubleField(1418, data, decimalPadding) {}
  };

  public __gc class AllocSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 736;
    AllocSettlCurrency() : StringField(736) {}
    AllocSettlCurrency(String* data) : StringField(736, data) {}
  };

  public __gc class LegCountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 596;
    LegCountryOfIssue() : StringField(596) {}
    LegCountryOfIssue(String* data) : StringField(596, data) {}
  };

  public __gc class DerivativeSecurityXML : public StringField
  {
  public:
    static const int FIELD = 1283;
    DerivativeSecurityXML() : StringField(1283) {}
    DerivativeSecurityXML(String* data) : StringField(1283, data) {}
  };

  public __gc class StrikeRuleID : public StringField
  {
  public:
    static const int FIELD = 1223;
    StrikeRuleID() : StringField(1223) {}
    StrikeRuleID(String* data) : StringField(1223, data) {}
  };

  public __gc class RefCompID : public StringField
  {
  public:
    static const int FIELD = 930;
    RefCompID() : StringField(930) {}
    RefCompID(String* data) : StringField(930, data) {}
  };

  public __gc class SettlCurrOfferFxRate : public DoubleField
  {
  public:
    static const int FIELD = 657;
    SettlCurrOfferFxRate() : DoubleField(657) {}
    SettlCurrOfferFxRate(double data) : DoubleField(657, data) {}
    SettlCurrOfferFxRate(double data, int decimalPadding) : DoubleField(657, data, decimalPadding) {}
  };

  public __gc class OfferYield : public DoubleField
  {
  public:
    static const int FIELD = 634;
    OfferYield() : DoubleField(634) {}
    OfferYield(double data) : DoubleField(634, data) {}
    OfferYield(double data, int decimalPadding) : DoubleField(634, data, decimalPadding) {}
  };

  public __gc class RelatedContextPartyID : public StringField
  {
  public:
    static const int FIELD = 1576;
    RelatedContextPartyID() : StringField(1576) {}
    RelatedContextPartyID(String* data) : StringField(1576, data) {}
  };

  public __gc class TargetPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1463;
    TargetPartyIDSource() : CharField(1463) {}
    TargetPartyIDSource(__wchar_t data) : CharField(1463, data) {}
  };

  public __gc class EncryptedNewPasswordLen : public IntField
  {
  public:
    static const int FIELD = 1403;
    EncryptedNewPasswordLen() : IntField(1403) {}
    EncryptedNewPasswordLen(int data) : IntField(1403, data) {}
  };

  public __gc class NoPositions : public IntField
  {
  public:
    static const int FIELD = 702;
    NoPositions() : IntField(702) {}
    NoPositions(int data) : IntField(702, data) {}
  };

  public __gc class TotalAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 540;
    TotalAccruedInterestAmt() : DoubleField(540) {}
    TotalAccruedInterestAmt(double data) : DoubleField(540, data) {}
    TotalAccruedInterestAmt(double data, int decimalPadding) : DoubleField(540, data, decimalPadding) {}
  };

  public __gc class UnderlyingOptAttribute : public CharField
  {
  public:
    static const int FIELD = 317;
    UnderlyingOptAttribute() : CharField(317) {}
    UnderlyingOptAttribute(__wchar_t data) : CharField(317, data) {}
  };

  public __gc class DerivativeInstrAttribValue : public StringField
  {
  public:
    static const int FIELD = 1314;
    DerivativeInstrAttribValue() : StringField(1314) {}
    DerivativeInstrAttribValue(String* data) : StringField(1314, data) {}
  };

  public __gc class InstrumentPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1050;
    InstrumentPartyIDSource() : CharField(1050) {}
    InstrumentPartyIDSource(__wchar_t data) : CharField(1050, data) {}
  };

  public __gc class PegOffsetType : public IntField
  {
  public:
    static const int FIELD = 836;
    static const int PRICE = 0;
    static const int BASISPOINTS = 1;
    static const int PRICE_TIER = 3;
    static const int TICKS = 2;
    static const int PRICETIERLEVEL = 3;
    static const int BASIS_POINTS = 1;
    PegOffsetType() : IntField(836) {}
    PegOffsetType(int data) : IntField(836, data) {}
  };

  public __gc class MassCancelRejectReason : public IntField
  {
  public:
    static const int FIELD = 532;
    static const int INVALID_OR_UNKOWN_MARKET_SEGMENT = 8;
    static const int INVALID_OR_UNKNOWN_SECURITY = 1;
    static const int INVALIDSECURITY = 1;
    static const int MASS_CANCEL_NOT_SUPPORTED = 0;
    static const int INVALID_OR_UNKNOWN_SECURITY_GROUP = 9;
    static const int INVALID_OR_UNKOWN_UNDERLYING_SECURITY = 2;
    static const int INVALIDPRODUCT = 3;
    static const int INVALID_OR_UNKNOWN_ISSUER_OF_UNDERLYING_SECURITY = 11;
    static const int INVALID_OR_UNKNOWN_SECURITYTYPE = 5;
    static const int INVALID_OR_UNKNOWN_CFICODE = 4;
    static const int INVALID_OR_UNKNOWN_TRADING_SESSION = 6;
    static const int INVALID_OR_UNKNOWN_MARKET = 7;
    static const int INVALID_OR_UNKNOWN_SECURITY_TYPE = 5;
    static const int INVALIDUNDERLYING = 2;
    static const int OTHER = 99;
    static const int INVALID_OR_UNKNOWN_SECURITY_ISSUER = 10;
    static const int INVALIDCFICODE = 4;
    static const int INVALIDSECURITYTYPE = 5;
    static const int INVALID_OR_UNKNOWN_PRODUCT = 3;
    static const int INVALID_OR_UNKNOWN_UNDERLYING = 2;
    static const int INVALIDTRDSESSION = 6;
    static const int MASSCXLNOTSUPPORTED = 0;
    MassCancelRejectReason() : IntField(532) {}
    MassCancelRejectReason(int data) : IntField(532, data) {}
  };

  public __gc class ResponseTransportType : public IntField
  {
  public:
    static const int FIELD = 725;
    static const int OUTOFBAND = 1;
    static const int INBAND = 0;
    static const int OUT_OF_BAND = 1;
    ResponseTransportType() : IntField(725) {}
    ResponseTransportType(int data) : IntField(725, data) {}
  };

  public __gc class LegSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 603;
    LegSecurityIDSource() : StringField(603) {}
    LegSecurityIDSource(String* data) : StringField(603, data) {}
  };

  public __gc class BasisFeaturePrice : public DoubleField
  {
  public:
    static const int FIELD = 260;
    BasisFeaturePrice() : DoubleField(260) {}
    BasisFeaturePrice(double data) : DoubleField(260, data) {}
    BasisFeaturePrice(double data, int decimalPadding) : DoubleField(260, data, decimalPadding) {}
  };

  public __gc class CouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 224;
    CouponPaymentDate() : StringField(224) {}
    CouponPaymentDate(String* data) : StringField(224, data) {}
  };

  public __gc class TradSesStatusRejReason : public IntField
  {
  public:
    static const int FIELD = 567;
    static const int UNKNOWN_OR_INVALID_TRADINGSESSIONID = 1;
    static const int UNKNOWNTRADINGSESSIONID = 1;
    static const int OTHER = 99;
    TradSesStatusRejReason() : IntField(567) {}
    TradSesStatusRejReason(int data) : IntField(567, data) {}
  };

  public __gc class UnderlyingDetachmentPoint : public DoubleField
  {
  public:
    static const int FIELD = 1460;
    UnderlyingDetachmentPoint() : DoubleField(1460) {}
    UnderlyingDetachmentPoint(double data) : DoubleField(1460, data) {}
    UnderlyingDetachmentPoint(double data, int decimalPadding) : DoubleField(1460, data, decimalPadding) {}
  };

  public __gc class MaturityRuleID : public StringField
  {
  public:
    static const int FIELD = 1222;
    MaturityRuleID() : StringField(1222) {}
    MaturityRuleID(String* data) : StringField(1222, data) {}
  };

  public __gc class UnderlyingRepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 243;
    UnderlyingRepoCollateralSecurityType() : IntField(243) {}
    UnderlyingRepoCollateralSecurityType(int data) : IntField(243, data) {}
  };

  public __gc class NoTimeInForceRules : public IntField
  {
  public:
    static const int FIELD = 1239;
    NoTimeInForceRules() : IntField(1239) {}
    NoTimeInForceRules(int data) : IntField(1239, data) {}
  };

  public __gc class NoRootPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1120;
    NoRootPartySubIDs() : IntField(1120) {}
    NoRootPartySubIDs(int data) : IntField(1120, data) {}
  };

  public __gc class DisplayMinIncr : public DoubleField
  {
  public:
    static const int FIELD = 1087;
    DisplayMinIncr() : DoubleField(1087) {}
    DisplayMinIncr(double data) : DoubleField(1087, data) {}
    DisplayMinIncr(double data, int decimalPadding) : DoubleField(1087, data, decimalPadding) {}
  };

  public __gc class TrdRegTimestampType : public IntField
  {
  public:
    static const int FIELD = 770;
    static const int EXECUTION_TIME = 1;
    static const int BROKEREXECUTION = 5;
    static const int BROKERRECEIPT = 4;
    static const int TIMEIN = 2;
    static const int TIME_IN = 2;
    static const int TIMEOUT = 3;
    static const int SUBMISSION_TO_CLEARING = 7;
    static const int BROKER_RECEIPT = 4;
    static const int DESK_RECEIPT = 6;
    static const int EXECUTIONTIME = 1;
    static const int BROKER_EXECUTION = 5;
    static const int TIME_OUT = 3;
    TrdRegTimestampType() : IntField(770) {}
    TrdRegTimestampType(int data) : IntField(770, data) {}
  };

  public __gc class LegProduct : public IntField
  {
  public:
    static const int FIELD = 607;
    LegProduct() : IntField(607) {}
    LegProduct(int data) : IntField(607, data) {}
  };

  public __gc class ApplVerID : public StringField
  {
  public:
    static const int FIELD = 1128;
    static const String* FIX50SP1 = "8";
    static const String* FIX27 = "0";
    static const String* FIX50SP2 = "9";
    static const String* FIX50 = "7";
    static const String* FIX40 = "2";
    static const String* FIX41 = "3";
    static const String* FIX30 = "1";
    static const String* FIX42 = "4";
    static const String* FIX43 = "5";
    static const String* FIX44 = "6";
    ApplVerID() : StringField(1128) {}
    ApplVerID(String* data) : StringField(1128, data) {}
  };

  public __gc class HandlInst : public CharField
  {
  public:
    static const int FIELD = 21;
    static const __wchar_t MANUAL_ORDER_BEST_EXECUTION = '3';
    static const __wchar_t AUTOEXECPUB = '2';
    static const __wchar_t AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION = '1';
    static const __wchar_t AUTOEXECPRIV = '1';
    static const __wchar_t AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK = '2';
    static const __wchar_t MANUAL = '3';
    HandlInst() : CharField(21) {}
    HandlInst(__wchar_t data) : CharField(21, data) {}
  };

  public __gc class ListUpdateAction : public CharField
  {
  public:
    static const int FIELD = 1324;
    ListUpdateAction() : CharField(1324) {}
    ListUpdateAction(__wchar_t data) : CharField(1324, data) {}
  };

  public __gc class NestedInstrAttribValue : public StringField
  {
  public:
    static const int FIELD = 1211;
    NestedInstrAttribValue() : StringField(1211) {}
    NestedInstrAttribValue(String* data) : StringField(1211, data) {}
  };

  public __gc class TradingSessionSubID : public StringField
  {
  public:
    static const int FIELD = 625;
    static const String* POST_TRADING = "5";
    static const String* INTRADAY_AUCTION = "6";
    static const String* PRE_TRADING = "1";
    static const String* QUIESCENT = "7";
    static const String* _3 = "3";
    static const String* OPENING_OR_OPENING_AUCTION = "2";
    static const String* CLOSING_OR_CLOSING_AUCTION = "4";
    TradingSessionSubID() : StringField(625) {}
    TradingSessionSubID(String* data) : StringField(625, data) {}
  };

  public __gc class RFQReqID : public StringField
  {
  public:
    static const int FIELD = 644;
    RFQReqID() : StringField(644) {}
    RFQReqID(String* data) : StringField(644, data) {}
  };

  public __gc class RelationshipRiskSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 1609;
    RelationshipRiskSecurityExchange() : StringField(1609) {}
    RelationshipRiskSecurityExchange(String* data) : StringField(1609, data) {}
  };

  public __gc class UnderlyingLegSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 1331;
    UnderlyingLegSymbolSfx() : StringField(1331) {}
    UnderlyingLegSymbolSfx(String* data) : StringField(1331, data) {}
  };

  public __gc class LiquidityNumSecurities : public IntField
  {
  public:
    static const int FIELD = 441;
    LiquidityNumSecurities() : IntField(441) {}
    LiquidityNumSecurities(int data) : IntField(441, data) {}
  };

  public __gc class NoMsgTypes : public IntField
  {
  public:
    static const int FIELD = 384;
    NoMsgTypes() : IntField(384) {}
    NoMsgTypes(int data) : IntField(384, data) {}
  };

  public __gc class TradSesStartTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 341;
    TradSesStartTime() : UtcTimeStampField(341) {}
    TradSesStartTime(DateTime data) : UtcTimeStampField(341, data) {}
  };

  public __gc class MDEntryType : public CharField
  {
  public:
    static const int FIELD = 269;
    static const __wchar_t SWAP_VALUE_FACTOR = 'S';
    static const __wchar_t OPEN_INTEREST = 'C';
    static const __wchar_t COMPOSITE_UNDERLYING_PRICE = 'D';
    static const __wchar_t SESSION_HIGH_BID = 'N';
    static const __wchar_t INDEXVALUE = '3';
    static const __wchar_t OPENINTEREST = 'C';
    static const __wchar_t CLOSING_PRICE = '5';
    static const __wchar_t PRIOR_SETTLE_PRICE = 'M';
    static const __wchar_t TRADING_SESSION_VWAP_PRICE = '9';
    static const __wchar_t TRADING_SESSION_LOW_PRICE = '8';
    static const __wchar_t SETTLE_HIGH_PRICE = 'K';
    static const __wchar_t IMBALANCE = 'A';
    static const __wchar_t FIXING_PRICE = 'W';
    static const __wchar_t CASH_RATE = 'X';
    static const __wchar_t CLOSING = '5';
    static const __wchar_t OPENING = '4';
    static const __wchar_t OPENING_PRICE = '4';
    static const __wchar_t TRADINGHIGH = '7';
    static const __wchar_t TRADEVOLUME = 'B';
    static const __wchar_t TRADE = '2';
    static const __wchar_t CUMULATIVE_VALUE_ADJUSTMENT_FOR_SHORT_POSITIONS = 'V';
    static const __wchar_t SIMULATED_SELL_PRICE = 'E';
    static const __wchar_t EMPTY_BOOK = 'J';
    static const __wchar_t AUCTION_CLEARING_PRICE = 'Q';
    static const __wchar_t BID = '0';
    static const __wchar_t RECOVERY_RATE_FOR_SHORT = 'a';
    static const __wchar_t SIMULATED_BUY_PRICE = 'F';
    static const __wchar_t EARLY_PRICES = 'P';
    static const __wchar_t TRADINGLOW = '8';
    static const __wchar_t TRADING_SESSION_HIGH_PRICE = '7';
    static const __wchar_t INDEX_VALUE = '3';
    static const __wchar_t RECOVERY_RATE_FOR_LONG = 'Z';
    static const __wchar_t DAILY_VALUE_ADJUSTMENT_FOR_LONG_POSITIONS = 'R';
    static const __wchar_t MID_PRICE = 'H';
    static const __wchar_t SETTLEMENT = '6';
    static const __wchar_t RECOVERY_RATE = 'Y';
    static const __wchar_t CUMULATIVE_VALUE_ADJUSTMENT_FOR_LONG_POSITIONS = 'T';
    static const __wchar_t DAILY_VALUE_ADJUSTMENT_FOR_SHORT_POSITIONS = 'U';
    static const __wchar_t TRADE_VOLUME = 'B';
    static const __wchar_t MARGIN_RATE = 'G';
    static const __wchar_t SETTLE_LOW_PRICE = 'L';
    static const __wchar_t SESSION_LOW_OFFER = 'O';
    static const __wchar_t TRADINGVWAP = '9';
    static const __wchar_t SETTLEMENT_PRICE = '6';
    static const __wchar_t OFFER = '1';
    MDEntryType() : CharField(269) {}
    MDEntryType(__wchar_t data) : CharField(269, data) {}
  };

  public __gc class AgreementCurrency : public StringField
  {
  public:
    static const int FIELD = 918;
    AgreementCurrency() : StringField(918) {}
    AgreementCurrency(String* data) : StringField(918, data) {}
  };

  public __gc class PegMoveType : public IntField
  {
  public:
    static const int FIELD = 835;
    static const int FLOATING = 0;
    static const int FIXED = 1;
    PegMoveType() : IntField(835) {}
    PegMoveType(int data) : IntField(835, data) {}
  };

  public __gc class AsgnReqID : public StringField
  {
  public:
    static const int FIELD = 831;
    AsgnReqID() : StringField(831) {}
    AsgnReqID(String* data) : StringField(831, data) {}
  };

  public __gc class PegDifference : public DoubleField
  {
  public:
    static const int FIELD = 211;
    PegDifference() : DoubleField(211) {}
    PegDifference(double data) : DoubleField(211, data) {}
    PegDifference(double data, int decimalPadding) : DoubleField(211, data, decimalPadding) {}
  };

  public __gc class Spread : public DoubleField
  {
  public:
    static const int FIELD = 218;
    Spread() : DoubleField(218) {}
    Spread(double data) : DoubleField(218, data) {}
    Spread(double data, int decimalPadding) : DoubleField(218, data, decimalPadding) {}
  };

  public __gc class EncodedAllocTextLen : public IntField
  {
  public:
    static const int FIELD = 360;
    EncodedAllocTextLen() : IntField(360) {}
    EncodedAllocTextLen(int data) : IntField(360, data) {}
  };

  public __gc class OutsideIndexPct : public DoubleField
  {
  public:
    static const int FIELD = 407;
    OutsideIndexPct() : DoubleField(407) {}
    OutsideIndexPct(double data) : DoubleField(407, data) {}
    OutsideIndexPct(double data, int decimalPadding) : DoubleField(407, data, decimalPadding) {}
  };

  public __gc class DerivFlexProductEligibilityIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1243;
    DerivFlexProductEligibilityIndicator() : BooleanField(1243) {}
    DerivFlexProductEligibilityIndicator(bool data) : BooleanField(1243, data) {}
  };

  public __gc class AvgPxIndicator : public IntField
  {
  public:
    static const int FIELD = 819;
    static const int NOAVERAGEPRICING = 0;
    static const int NO_AVERAGE_PRICING = 0;
    static const int LASTTRADEAVERAGEPRICEGROUP = 2;
    static const int TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 1;
    static const int TRADEAVERAGEPRICEGROUP = 1;
    static const int LAST_TRADE_IS_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 2;
    AvgPxIndicator() : IntField(819) {}
    AvgPxIndicator(int data) : IntField(819, data) {}
  };

  public __gc class NoIOIQualifiers : public IntField
  {
  public:
    static const int FIELD = 199;
    NoIOIQualifiers() : IntField(199) {}
    NoIOIQualifiers(int data) : IntField(199, data) {}
  };

  public __gc class CancellationRights : public CharField
  {
  public:
    static const int FIELD = 480;
    static const __wchar_t NO_WAIVER_AGREEMENT = 'M';
    static const __wchar_t NO_M = 'M';
    static const __wchar_t NO_N = 'N';
    static const __wchar_t NOINSTIT = 'O';
    static const __wchar_t NO_INSTITUTIONAL = 'O';
    static const __wchar_t YES = 'Y';
    static const __wchar_t NO_O = 'O';
    static const __wchar_t NOEXECONLY = 'N';
    static const __wchar_t NO_EXECUTION_ONLY = 'N';
    static const __wchar_t NOWAIVER = 'M';
    CancellationRights() : CharField(480) {}
    CancellationRights(__wchar_t data) : CharField(480, data) {}
  };

  public __gc class ListSeqNo : public IntField
  {
  public:
    static const int FIELD = 67;
    ListSeqNo() : IntField(67) {}
    ListSeqNo(int data) : IntField(67, data) {}
  };

  public __gc class CardIssNum : public StringField
  {
  public:
    static const int FIELD = 491;
    CardIssNum() : StringField(491) {}
    CardIssNum(String* data) : StringField(491, data) {}
  };

  public __gc class RiskCFICode : public StringField
  {
  public:
    static const int FIELD = 1546;
    RiskCFICode() : StringField(1546) {}
    RiskCFICode(String* data) : StringField(1546, data) {}
  };

  public __gc class EncodedMktSegmDesc : public StringField
  {
  public:
    static const int FIELD = 1398;
    EncodedMktSegmDesc() : StringField(1398) {}
    EncodedMktSegmDesc(String* data) : StringField(1398, data) {}
  };

  public __gc class DerivativeEventType : public IntField
  {
  public:
    static const int FIELD = 1287;
    DerivativeEventType() : IntField(1287) {}
    DerivativeEventType(int data) : IntField(1287, data) {}
  };

  public __gc class DerivativeMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1251;
    DerivativeMaturityMonthYear() : StringField(1251) {}
    DerivativeMaturityMonthYear(String* data) : StringField(1251, data) {}
  };

  public __gc class SideTradeReportID : public StringField
  {
  public:
    static const int FIELD = 1005;
    SideTradeReportID() : StringField(1005) {}
    SideTradeReportID(String* data) : StringField(1005, data) {}
  };

  public __gc class NoQuoteSets : public IntField
  {
  public:
    static const int FIELD = 296;
    NoQuoteSets() : IntField(296) {}
    NoQuoteSets(int data) : IntField(296, data) {}
  };

  public __gc class RelationshipRiskSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1610;
    RelationshipRiskSecurityDesc() : StringField(1610) {}
    RelationshipRiskSecurityDesc(String* data) : StringField(1610, data) {}
  };

  public __gc class Nested4PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1411;
    Nested4PartySubIDType() : IntField(1411) {}
    Nested4PartySubIDType(int data) : IntField(1411, data) {}
  };

  public __gc class FillPx : public DoubleField
  {
  public:
    static const int FIELD = 1364;
    FillPx() : DoubleField(1364) {}
    FillPx(double data) : DoubleField(1364, data) {}
    FillPx(double data, int decimalPadding) : DoubleField(1364, data, decimalPadding) {}
  };

  public __gc class StrikeExerciseStyle : public IntField
  {
  public:
    static const int FIELD = 1304;
    StrikeExerciseStyle() : IntField(1304) {}
    StrikeExerciseStyle(int data) : IntField(1304, data) {}
  };

  public __gc class DeskID : public StringField
  {
  public:
    static const int FIELD = 284;
    DeskID() : StringField(284) {}
    DeskID(String* data) : StringField(284, data) {}
  };

  public __gc class CrossPercent : public DoubleField
  {
  public:
    static const int FIELD = 413;
    CrossPercent() : DoubleField(413) {}
    CrossPercent(double data) : DoubleField(413, data) {}
    CrossPercent(double data, int decimalPadding) : DoubleField(413, data, decimalPadding) {}
  };

  public __gc class MaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 200;
    MaturityMonthYear() : StringField(200) {}
    MaturityMonthYear(String* data) : StringField(200, data) {}
  };

  public __gc class ComplexEventPrice : public DoubleField
  {
  public:
    static const int FIELD = 1486;
    ComplexEventPrice() : DoubleField(1486) {}
    ComplexEventPrice(double data) : DoubleField(1486, data) {}
    ComplexEventPrice(double data, int decimalPadding) : DoubleField(1486, data, decimalPadding) {}
  };

  public __gc class NoNewsRefIDs : public IntField
  {
  public:
    static const int FIELD = 1475;
    NoNewsRefIDs() : IntField(1475) {}
    NoNewsRefIDs(int data) : IntField(1475, data) {}
  };

  public __gc class UnderlyingCapValue : public DoubleField
  {
  public:
    static const int FIELD = 1038;
    UnderlyingCapValue() : DoubleField(1038) {}
    UnderlyingCapValue(double data) : DoubleField(1038, data) {}
    UnderlyingCapValue(double data, int decimalPadding) : DoubleField(1038, data, decimalPadding) {}
  };

  public __gc class CPRegType : public StringField
  {
  public:
    static const int FIELD = 876;
    CPRegType() : StringField(876) {}
    CPRegType(String* data) : StringField(876, data) {}
  };

  public __gc class CashDistribAgentCode : public StringField
  {
  public:
    static const int FIELD = 499;
    CashDistribAgentCode() : StringField(499) {}
    CashDistribAgentCode(String* data) : StringField(499, data) {}
  };

  public __gc class ExecPriceType : public CharField
  {
  public:
    static const int FIELD = 484;
    static const __wchar_t CREATIONPRICEADJAMT = 'E';
    static const __wchar_t CREATION_PRICE = 'C';
    static const __wchar_t CREATIONPRICE = 'C';
    static const __wchar_t SINGLEPRICE = 'S';
    static const __wchar_t CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT = 'D';
    static const __wchar_t OFFERPRICE = 'O';
    static const __wchar_t BIDPRICE = 'B';
    static const __wchar_t OFFER_PRICE_MINUS_ADJUSTMENT = 'P';
    static const __wchar_t CREATIONPRICEADJPCT = 'D';
    static const __wchar_t OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT = 'Q';
    static const __wchar_t OFFERPRICEMINUSADJAMT = 'Q';
    static const __wchar_t CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT = 'E';
    static const __wchar_t OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT = 'P';
    static const __wchar_t OFFERPRICEMINUSADJPCT = 'P';
    static const __wchar_t BID_PRICE = 'B';
    static const __wchar_t SINGLE_PRICE = 'S';
    static const __wchar_t CREATION_PRICE_PLUS_ADJUSTMENT = 'D';
    static const __wchar_t OFFER_PRICE = 'O';
    ExecPriceType() : CharField(484) {}
    ExecPriceType(__wchar_t data) : CharField(484, data) {}
  };

  public __gc class LegAllocID : public StringField
  {
  public:
    static const int FIELD = 1366;
    LegAllocID() : StringField(1366) {}
    LegAllocID(String* data) : StringField(1366, data) {}
  };

  public __gc class MDEntryTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 273;
    MDEntryTime() : UtcTimeOnlyField(273) {}
    MDEntryTime(DateTime data) : UtcTimeOnlyField(273, data) {}
    MDEntryTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(273, data, showMilliseconds) {}
  };

  public __gc class TotalNumSecurities : public IntField
  {
  public:
    static const int FIELD = 393;
    TotalNumSecurities() : IntField(393) {}
    TotalNumSecurities(int data) : IntField(393, data) {}
  };

  public __gc class AllocSettlInstType : public IntField
  {
  public:
    static const int FIELD = 780;
    static const int PHONEFORINSTRUCTIONS = 4;
    static const int SSIDBIDSPROVIDED = 3;
    static const int FULLDETAILSPROVIDED = 2;
    static const int USEDEFAULTINSTRUCTIONS = 0;
    static const int SSI_DB_IDS_PROVIDED = 3;
    static const int PHONE_FOR_INSTRUCTIONS = 4;
    static const int DERIVE_FROM_PARAMETERS_PROVIDED = 1;
    static const int FULL_DETAILS_PROVIDED = 2;
    static const int USE_DEFAULT_INSTRUCTIONS = 0;
    static const int DERIVEFROMPARAMETERSPROVIDED = 1;
    AllocSettlInstType() : IntField(780) {}
    AllocSettlInstType(int data) : IntField(780, data) {}
  };

  public __gc class TargetPartyID : public StringField
  {
  public:
    static const int FIELD = 1462;
    TargetPartyID() : StringField(1462) {}
    TargetPartyID(String* data) : StringField(1462, data) {}
  };

  public __gc class DerivativeStrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 1262;
    DerivativeStrikeCurrency() : StringField(1262) {}
    DerivativeStrikeCurrency(String* data) : StringField(1262, data) {}
  };

  public __gc class StatsType : public IntField
  {
  public:
    static const int FIELD = 1176;
    static const int AVERAGE_PRICE = 3;
    static const int HIGH = 2;
    static const int EXCHANGE_LAST = 1;
    static const int TURNOVER = 4;
    StatsType() : IntField(1176) {}
    StatsType(int data) : IntField(1176, data) {}
  };

  public __gc class ApplExtID : public IntField
  {
  public:
    static const int FIELD = 1156;
    ApplExtID() : IntField(1156) {}
    ApplExtID(int data) : IntField(1156, data) {}
  };

  public __gc class SettlementCycleNo : public IntField
  {
  public:
    static const int FIELD = 1153;
    SettlementCycleNo() : IntField(1153) {}
    SettlementCycleNo(int data) : IntField(1153, data) {}
  };

  public __gc class UnderlyingStrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 941;
    UnderlyingStrikeCurrency() : StringField(941) {}
    UnderlyingStrikeCurrency(String* data) : StringField(941, data) {}
  };

  public __gc class TradSesMode : public IntField
  {
  public:
    static const int FIELD = 339;
    static const int SIMULATED = 2;
    static const int PRODUCTION = 3;
    static const int TESTING = 1;
    TradSesMode() : IntField(339) {}
    TradSesMode(int data) : IntField(339, data) {}
  };

  public __gc class SettlInstSource : public CharField
  {
  public:
    static const int FIELD = 165;
    static const __wchar_t INSTITUTIONS_INSTRUCTIONS = '2';
    static const __wchar_t BROKERS_INSTRUCTIONS = '1';
    static const __wchar_t INVESTORCIV = '3';
    static const __wchar_t INVESTOR = '3';
    static const __wchar_t INSTINSTR = '2';
    static const __wchar_t BROKERINSTR = '1';
    SettlInstSource() : CharField(165) {}
    SettlInstSource(__wchar_t data) : CharField(165, data) {}
  };

  public __gc class PartyAltSubIDType : public IntField
  {
  public:
    static const int FIELD = 1521;
    PartyAltSubIDType() : IntField(1521) {}
    PartyAltSubIDType(int data) : IntField(1521, data) {}
  };

  public __gc class UnderlyingLegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1392;
    UnderlyingLegSecurityDesc() : StringField(1392) {}
    UnderlyingLegSecurityDesc(String* data) : StringField(1392, data) {}
  };

  public __gc class NoDerivativeInstrumentParties : public IntField
  {
  public:
    static const int FIELD = 1292;
    NoDerivativeInstrumentParties() : IntField(1292) {}
    NoDerivativeInstrumentParties(int data) : IntField(1292, data) {}
  };

  public __gc class DerivativeEventTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1289;
    DerivativeEventTime() : UtcTimeStampField(1289) {}
    DerivativeEventTime(DateTime data) : UtcTimeStampField(1289, data) {}
  };

  public __gc class TickIncrement : public DoubleField
  {
  public:
    static const int FIELD = 1208;
    TickIncrement() : DoubleField(1208) {}
    TickIncrement(double data) : DoubleField(1208, data) {}
    TickIncrement(double data, int decimalPadding) : DoubleField(1208, data, decimalPadding) {}
  };

  public __gc class UndlyInstrumentPartyID : public StringField
  {
  public:
    static const int FIELD = 1059;
    UndlyInstrumentPartyID() : StringField(1059) {}
    UndlyInstrumentPartyID(String* data) : StringField(1059, data) {}
  };

  public __gc class NoUndlyInstrumentParties : public IntField
  {
  public:
    static const int FIELD = 1058;
    NoUndlyInstrumentParties() : IntField(1058) {}
    NoUndlyInstrumentParties(int data) : IntField(1058, data) {}
  };

  public __gc class ExpType : public IntField
  {
  public:
    static const int FIELD = 982;
    static const int DIFFERENCE = 5;
    static const int FINAL_WILL_BE_EXERCISED = 3;
    static const int NON_AUTO_EXERCISE = 2;
    static const int CONTRARY_INTENTION = 4;
    static const int AUTO_EXERCISE = 1;
    ExpType() : IntField(982) {}
    ExpType(int data) : IntField(982, data) {}
  };

  public __gc class SecondaryClOrdID : public StringField
  {
  public:
    static const int FIELD = 526;
    SecondaryClOrdID() : StringField(526) {}
    SecondaryClOrdID(String* data) : StringField(526, data) {}
  };

  public __gc class SettlInstTransType : public CharField
  {
  public:
    static const int FIELD = 163;
    static const __wchar_t REPLACE = 'R';
    static const __wchar_t NEW = 'N';
    static const __wchar_t RESTATE = 'T';
    static const __wchar_t CANCEL = 'C';
    SettlInstTransType() : CharField(163) {}
    SettlInstTransType(__wchar_t data) : CharField(163, data) {}
  };

  public __gc class SideComplianceID : public StringField
  {
  public:
    static const int FIELD = 659;
    SideComplianceID() : StringField(659) {}
    SideComplianceID(String* data) : StringField(659, data) {}
  };

  public __gc class TradeRequestResult : public IntField
  {
  public:
    static const int FIELD = 749;
    static const int TRADEREQUESTTYPENOTSUPPORTED = 8;
    static const int INVALIDORUNKNOWNINSTRUMENT = 1;
    static const int INVALID_DESTINATION_REQUESTED = 5;
    static const int UNAUTHORIZED_ROR_TRADE_CAPTURE_REPORT_REQUEST = 9;
    static const int INVALIDTRANSPORTTYPEREQUESTED = 4;
    static const int INVALIDPARTIES = 3;
    static const int INVALIDDESTINATIONREQUESTED = 5;
    static const int SUCCESSFUL = 0;
    static const int INVALID_OR_UNKNOWN_INSTRUMENT = 1;
    static const int OTHER = 99;
    static const int INVALID_TYPE_OF_TRADE_REQUESTED = 2;
    static const int INVALID_PARTIES = 3;
    static const int UNAUTHORIZEDFORTRADECAPTUREREPORTREQUEST = 9;
    static const int NOT_AUTHORIZED = 9;
    static const int INVALID_TRANSPORT_TYPE_REQUESTED = 4;
    static const int INVALIDTYPEOFTRADEREQUESTED = 2;
    static const int TRADEREQUESTTYPE_NOT_SUPPORTED = 8;
    TradeRequestResult() : IntField(749) {}
    TradeRequestResult(int data) : IntField(749, data) {}
  };

  public __gc class OrigPosReqRefID : public StringField
  {
  public:
    static const int FIELD = 713;
    OrigPosReqRefID() : StringField(713) {}
    OrigPosReqRefID(String* data) : StringField(713, data) {}
  };

  public __gc class OrigCrossID : public StringField
  {
  public:
    static const int FIELD = 551;
    OrigCrossID() : StringField(551) {}
    OrigCrossID(String* data) : StringField(551, data) {}
  };

  public __gc class TradeInputSource : public StringField
  {
  public:
    static const int FIELD = 578;
    TradeInputSource() : StringField(578) {}
    TradeInputSource(String* data) : StringField(578, data) {}
  };

  public __gc class OrderQty2 : public DoubleField
  {
  public:
    static const int FIELD = 192;
    OrderQty2() : DoubleField(192) {}
    OrderQty2(double data) : DoubleField(192, data) {}
    OrderQty2(double data, int decimalPadding) : DoubleField(192, data, decimalPadding) {}
  };

  public __gc class TestMessageIndicator : public BooleanField
  {
  public:
    static const int FIELD = 464;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    TestMessageIndicator() : BooleanField(464) {}
    TestMessageIndicator(bool data) : BooleanField(464, data) {}
  };

  public __gc class ContextPartySubID : public StringField
  {
  public:
    static const int FIELD = 1527;
    ContextPartySubID() : StringField(1527) {}
    ContextPartySubID(String* data) : StringField(1527, data) {}
  };

  public __gc class DerivativeEventDate : public StringField
  {
  public:
    static const int FIELD = 1288;
    DerivativeEventDate() : StringField(1288) {}
    DerivativeEventDate(String* data) : StringField(1288, data) {}
  };

  public __gc class SideGrossTradeAmt : public DoubleField
  {
  public:
    static const int FIELD = 1072;
    SideGrossTradeAmt() : DoubleField(1072) {}
    SideGrossTradeAmt(double data) : DoubleField(1072, data) {}
    SideGrossTradeAmt(double data, int decimalPadding) : DoubleField(1072, data, decimalPadding) {}
  };

  public __gc class PeggedPrice : public DoubleField
  {
  public:
    static const int FIELD = 839;
    PeggedPrice() : DoubleField(839) {}
    PeggedPrice(double data) : DoubleField(839, data) {}
    PeggedPrice(double data, int decimalPadding) : DoubleField(839, data, decimalPadding) {}
  };

  public __gc class ExpirationCycle : public IntField
  {
  public:
    static const int FIELD = 827;
    static const int TRADING_ELIGIBILITY_EXPIRATION_SPECIFIED_IN_THE_DATE_AND_TIME_FIELDS_EVENTDATE = 2;
    static const int EXPIREONTRADINGSESSIONOPEN = 1;
    static const int EXPIRE_ON_TRADING_SESSION_CLOSE = 0;
    static const int EXPIRE_ON_TRADING_SESSION_OPEN = 1;
    static const int EXPIREONTRADINGSESSIONCLOSE = 0;
    ExpirationCycle() : IntField(827) {}
    ExpirationCycle(int data) : IntField(827, data) {}
  };

  public __gc class AllocCancReplaceReason : public IntField
  {
  public:
    static const int FIELD = 796;
    static const int ORIGINALDETAILSINCORRECT = 1;
    static const int CHANGE_IN_UNDERLYING_ORDER_DETAILS = 2;
    static const int OTHER = 99;
    static const int ORIGINAL_DETAILS_INCOMPLETE_INCORRECT = 1;
    static const int CHANGEINUNDERLYINGORDERDETAILS = 2;
    AllocCancReplaceReason() : IntField(796) {}
    AllocCancReplaceReason(int data) : IntField(796, data) {}
  };

  public __gc class CxlRejReason : public IntField
  {
  public:
    static const int FIELD = 102;
    static const int DUPLICATE_CLORDID = 6;
    static const int UNABLETOPROCESS = 4;
    static const int PRICE_EXCEEDS_CURRENT_PRICE = 7;
    static const int DUPCLORDID = 6;
    static const int DUPLICATE_CLORDID_RECEIVED = 6;
    static const int UNKNOWN_ORDER = 1;
    static const int TOO_LATE_TO_CANCEL = 0;
    static const int TOOLATE = 0;
    static const int ORIGORDMODTIME = 5;
    static const int INVALID_PRICE_INCREMENT = 18;
    static const int BROKEROPT = 2;
    static const int ALREADYPENDINGCXL = 3;
    static const int OTHER = 99;
    static const int BROKER = 2;
    static const int BROKER_OPTION = 2;
    static const int UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = 4;
    static const int ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS = 3;
    static const int PRICE_EXCEEDS_CURRENT_PRICE_BAND = 8;
    static const int ORIGORDMODTIMEMISMATCH = 5;
    static const int ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER = 5;
    static const int UNKNOWN = 1;
    CxlRejReason() : IntField(102) {}
    CxlRejReason(int data) : IntField(102, data) {}
  };

  public __gc class BeginString : public StringField
  {
  public:
    static const int FIELD = 8;
    BeginString() : StringField(8) {}
    BeginString(String* data) : StringField(8, data) {}
  };

  public __gc class DeliverToSubID : public StringField
  {
  public:
    static const int FIELD = 129;
    DeliverToSubID() : StringField(129) {}
    DeliverToSubID(String* data) : StringField(129, data) {}
  };

  public __gc class NoRelatedPartyAltIDs : public IntField
  {
  public:
    static const int FIELD = 1569;
    NoRelatedPartyAltIDs() : IntField(1569) {}
    NoRelatedPartyAltIDs(int data) : IntField(1569, data) {}
  };

  public __gc class RiskProductComplex : public StringField
  {
  public:
    static const int FIELD = 1544;
    RiskProductComplex() : StringField(1544) {}
    RiskProductComplex(String* data) : StringField(1544, data) {}
  };

  public __gc class LegPriceUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1422;
    LegPriceUnitOfMeasureQty() : DoubleField(1422) {}
    LegPriceUnitOfMeasureQty(double data) : DoubleField(1422, data) {}
    LegPriceUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1422, data, decimalPadding) {}
  };

  public __gc class NoCollInquiryQualifier : public IntField
  {
  public:
    static const int FIELD = 938;
    NoCollInquiryQualifier() : IntField(938) {}
    NoCollInquiryQualifier(int data) : IntField(938, data) {}
  };

  public __gc class OfferPx : public DoubleField
  {
  public:
    static const int FIELD = 133;
    OfferPx() : DoubleField(133) {}
    OfferPx(double data) : DoubleField(133, data) {}
    OfferPx(double data, int decimalPadding) : DoubleField(133, data, decimalPadding) {}
  };

  public __gc class TotalVolumeTradedDate : public UtcDateOnlyField
  {
  public:
    static const int FIELD = 449;
    TotalVolumeTradedDate() : UtcDateOnlyField(449) {}
    TotalVolumeTradedDate(DateTime data) : UtcDateOnlyField(449, data) {}
  };

  public __gc class NoContAmts : public IntField
  {
  public:
    static const int FIELD = 518;
    NoContAmts() : IntField(518) {}
    NoContAmts(int data) : IntField(518, data) {}
  };

  public __gc class MinOfferSize : public DoubleField
  {
  public:
    static const int FIELD = 648;
    MinOfferSize() : DoubleField(648) {}
    MinOfferSize(double data) : DoubleField(648, data) {}
    MinOfferSize(double data, int decimalPadding) : DoubleField(648, data, decimalPadding) {}
  };

  public __gc class AvgParPx : public DoubleField
  {
  public:
    static const int FIELD = 860;
    AvgParPx() : DoubleField(860) {}
    AvgParPx(double data) : DoubleField(860, data) {}
    AvgParPx(double data, int decimalPadding) : DoubleField(860, data, decimalPadding) {}
  };

  public __gc class LegFactor : public DoubleField
  {
  public:
    static const int FIELD = 253;
    LegFactor() : DoubleField(253) {}
    LegFactor(double data) : DoubleField(253, data) {}
    LegFactor(double data, int decimalPadding) : DoubleField(253, data, decimalPadding) {}
  };

  public __gc class RespondentType : public IntField
  {
  public:
    static const int FIELD = 1172;
    static const int SPECIFIED_MARKET_PARTICIPANTS = 2;
    static const int ALL_MARKET_MAKERS = 3;
    static const int ALL_MARKET_PARTICIPANTS = 1;
    static const int PRIMARY_MARKET_MAKER = 4;
    RespondentType() : IntField(1172) {}
    RespondentType(int data) : IntField(1172, data) {}
  };

  public __gc class DisplayLowQty : public DoubleField
  {
  public:
    static const int FIELD = 1085;
    DisplayLowQty() : DoubleField(1085) {}
    DisplayLowQty(double data) : DoubleField(1085, data) {}
    DisplayLowQty(double data, int decimalPadding) : DoubleField(1085, data, decimalPadding) {}
  };

  public __gc class DKReason : public CharField
  {
  public:
    static const int FIELD = 127;
    static const __wchar_t NO_MATCHING_ORDER = 'D';
    static const __wchar_t UNKNOWNSYMBOL = 'A';
    static const __wchar_t PRICE_EXCEEDS_LIMIT = 'E';
    static const __wchar_t QUANTITYEXCEEDSORDER = 'C';
    static const __wchar_t QUANTITY_EXCEEDS_ORDER = 'C';
    static const __wchar_t UNKNOWN_SYMBOL = 'A';
    static const __wchar_t OTHER = 'Z';
    static const __wchar_t WRONGSIDE = 'B';
    static const __wchar_t CALCULATIONDIFFERENCE = 'F';
    static const __wchar_t PRICEEXCEEDSLIMIT = 'E';
    static const __wchar_t WRONG_SIDE = 'B';
    static const __wchar_t CALCULATION_DIFFERENCE = 'F';
    static const __wchar_t NOMATCH = 'D';
    DKReason() : CharField(127) {}
    DKReason(__wchar_t data) : CharField(127, data) {}
  };

  public __gc class BenchmarkPrice : public DoubleField
  {
  public:
    static const int FIELD = 662;
    BenchmarkPrice() : DoubleField(662) {}
    BenchmarkPrice(double data) : DoubleField(662, data) {}
    BenchmarkPrice(double data, int decimalPadding) : DoubleField(662, data, decimalPadding) {}
  };

  public __gc class ListID : public StringField
  {
  public:
    static const int FIELD = 66;
    ListID() : StringField(66) {}
    ListID(String* data) : StringField(66, data) {}
  };

  public __gc class LegSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 605;
    LegSecurityAltID() : StringField(605) {}
    LegSecurityAltID(String* data) : StringField(605, data) {}
  };

  public __gc class PositionEffect : public CharField
  {
  public:
    static const int FIELD = 77;
    static const __wchar_t DEFAULT = 'D';
    static const __wchar_t CLOSE = 'C';
    static const __wchar_t CLOSE_BUT_NOTIFY_ON_OPEN = 'N';
    static const __wchar_t OPEN = 'O';
    static const __wchar_t FIFO = 'F';
    static const __wchar_t ROLLED = 'R';
    PositionEffect() : CharField(77) {}
    PositionEffect(__wchar_t data) : CharField(77, data) {}
  };

  public __gc class RelatedPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1568;
    RelatedPartySubIDType() : IntField(1568) {}
    RelatedPartySubIDType(int data) : IntField(1568, data) {}
  };

  public __gc class TriggerAction : public CharField
  {
  public:
    static const int FIELD = 1101;
    static const __wchar_t ACTIVATE = '1';
    static const __wchar_t MODIFY = '2';
    static const __wchar_t CANCEL = '3';
    TriggerAction() : CharField(1101) {}
    TriggerAction(__wchar_t data) : CharField(1101, data) {}
  };

  public __gc class RefOrderID : public StringField
  {
  public:
    static const int FIELD = 1080;
    RefOrderID() : StringField(1080) {}
    RefOrderID(String* data) : StringField(1080, data) {}
  };

  public __gc class ClearingInstruction : public IntField
  {
  public:
    static const int FIELD = 577;
    static const int BILATERALNETTINGONLY = 2;
    static const int SPECIALTRADE = 4;
    static const int EXCLUDE_FROM_ALL_NETTING = 1;
    static const int AUTOMATIC_POSTING_MODE = 9;
    static const int EXCLEARING = 3;
    static const int MULTILATERAL_NETTING = 5;
    static const int CLEARAGAINSTCENTRALCOUNTERPARTY = 6;
    static const int EXCLUDE_FROM_CENTRAL_COUNTERPARTY = 7;
    static const int AUTOMATIC_GIVE_UP_MODE = 10;
    static const int CUSTOMER_TRADE = 12;
    static const int AUTOMATICPOSTINGMODETRADEPOSTINGTOTHEPOSITIONACCOUNTNUMBERSPECIFIED = 9;
    static const int EX_CLEARING = 3;
    static const int QUALIFIEDSERVICEREPRESENTATIVEQSR = 11;
    static const int MULTILATERALNETTING = 5;
    static const int PROCESSNORMALLY = 0;
    static const int EXCLUDEFROMALLNETTING = 1;
    static const int SELFCLEARING = 13;
    static const int CLEAR_AGAINST_CENTRAL_COUNTERPARTY = 6;
    static const int BILATERAL_NETTING_ONLY = 2;
    static const int EXCLUDEFROMCENTRALCOUNTERPARTY = 7;
    static const int MANUALMODEPREPOSTINGANDORPREGIVEUP = 8;
    static const int CUSTOMERTRADE = 12;
    static const int PROCESS_NORMALLY = 0;
    static const int SPECIAL_TRADE = 4;
    static const int MANUAL_MODE = 8;
    static const int QUALIFIED_SERVICE_REPRESENTATIVE_QSR = 11;
    static const int AUTOMATICGIVEUPMODETRADEGIVEUPTOTHEGIVEUPDESTINATIONNUMBERSPECIFIED = 10;
    static const int SELF_CLEARING = 13;
    ClearingInstruction() : IntField(577) {}
    ClearingInstruction(int data) : IntField(577, data) {}
  };

  public __gc class SettlInstCode : public StringField
  {
  public:
    static const int FIELD = 175;
    SettlInstCode() : StringField(175) {}
    SettlInstCode(String* data) : StringField(175, data) {}
  };

  public __gc class NumDaysInterest : public IntField
  {
  public:
    static const int FIELD = 157;
    NumDaysInterest() : IntField(157) {}
    NumDaysInterest(int data) : IntField(157, data) {}
  };

  public __gc class OpenCloseSettlFlag : public StringField
  {
  public:
    static const int FIELD = 286;
    static const __wchar_t SESSION_OPEN = '1';
    static const __wchar_t EXPECTED_ENTRY = '3';
    static const __wchar_t THEORETICALPRICE = '5';
    static const __wchar_t ENTRYFROMPREVBUSINESSDAY = '4';
    static const __wchar_t DAILY_OPEN = '0';
    static const __wchar_t DAILYOPEN = '0';
    static const __wchar_t THEORETICAL_PRICE_VALUE = '5';
    static const __wchar_t DELIVERY_SETTLEMENT_ENTRY = '2';
    static const __wchar_t ENTRY_FROM_PREVIOUS_BUSINESS_DAY = '4';
    static const __wchar_t DELIVERYSETTLEMENT = '2';
    static const __wchar_t SESSIONOPEN = '1';
    static const __wchar_t EXPECTEDENTRY = '3';
    OpenCloseSettlFlag() : StringField(286) {}
    OpenCloseSettlFlag(String* data) : StringField(286, data) {}
  };

  public __gc class NoComplexEventDates : public IntField
  {
  public:
    static const int FIELD = 1491;
    NoComplexEventDates() : IntField(1491) {}
    NoComplexEventDates(int data) : IntField(1491, data) {}
  };

  public __gc class DerivativeEncodedIssuerLen : public IntField
  {
  public:
    static const int FIELD = 1277;
    DerivativeEncodedIssuerLen() : IntField(1277) {}
    DerivativeEncodedIssuerLen(int data) : IntField(1277, data) {}
  };

  public __gc class StrikeMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 967;
    StrikeMultiplier() : DoubleField(967) {}
    StrikeMultiplier(double data) : DoubleField(967, data) {}
    StrikeMultiplier(double data, int decimalPadding) : DoubleField(967, data, decimalPadding) {}
  };

  public __gc class DiscretionMoveType : public IntField
  {
  public:
    static const int FIELD = 841;
    static const int FLOATING = 0;
    static const int FIXED = 1;
    DiscretionMoveType() : IntField(841) {}
    DiscretionMoveType(int data) : IntField(841, data) {}
  };

  public __gc class ListNoOrds : public IntField
  {
  public:
    static const int FIELD = 68;
    ListNoOrds() : IntField(68) {}
    ListNoOrds(int data) : IntField(68, data) {}
  };

  public __gc class RelatedPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1564;
    RelatedPartyIDSource() : CharField(1564) {}
    RelatedPartyIDSource(__wchar_t data) : CharField(1564, data) {}
  };

  public __gc class PegSymbol : public StringField
  {
  public:
    static const int FIELD = 1098;
    PegSymbol() : StringField(1098) {}
    PegSymbol(String* data) : StringField(1098, data) {}
  };

  public __gc class DayAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 426;
    DayAvgPx() : DoubleField(426) {}
    DayAvgPx(double data) : DoubleField(426, data) {}
    DayAvgPx(double data, int decimalPadding) : DoubleField(426, data, decimalPadding) {}
  };

  public __gc class Headline : public StringField
  {
  public:
    static const int FIELD = 148;
    Headline() : StringField(148) {}
    Headline(String* data) : StringField(148, data) {}
  };

  public __gc class NestedPartySubID : public StringField
  {
  public:
    static const int FIELD = 545;
    NestedPartySubID() : StringField(545) {}
    NestedPartySubID(String* data) : StringField(545, data) {}
  };

  public __gc class CardIssNo : public StringField
  {
  public:
    static const int FIELD = 491;
    CardIssNo() : StringField(491) {}
    CardIssNo(String* data) : StringField(491, data) {}
  };

  public __gc class OptAttribute : public CharField
  {
  public:
    static const int FIELD = 206;
    OptAttribute() : CharField(206) {}
    OptAttribute(__wchar_t data) : CharField(206, data) {}
  };

  public __gc class LastForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 641;
    LastForwardPoints2() : DoubleField(641) {}
    LastForwardPoints2(double data) : DoubleField(641, data) {}
    LastForwardPoints2(double data, int decimalPadding) : DoubleField(641, data, decimalPadding) {}
  };

  public __gc class MDUpdateType : public IntField
  {
  public:
    static const int FIELD = 265;
    static const int INCREMENTAL_REFRESH = 1;
    static const int FULL_REFRESH = 0;
    static const int FULL = 0;
    static const int INCREMENTAL = 1;
    MDUpdateType() : IntField(265) {}
    MDUpdateType(int data) : IntField(265, data) {}
  };

  public __gc class TickDirection : public CharField
  {
  public:
    static const int FIELD = 274;
    static const __wchar_t MINUS_TICK = '2';
    static const __wchar_t ZERO_PLUS_TICK = '1';
    static const __wchar_t ZERO_MINUS_TICK = '3';
    static const __wchar_t PLUS_TICK = '0';
    static const __wchar_t PLUS = '0';
    static const __wchar_t ZEROPLUS = '1';
    static const __wchar_t MINUS = '2';
    static const __wchar_t ZEROMINUS = '3';
    TickDirection() : CharField(274) {}
    TickDirection(__wchar_t data) : CharField(274, data) {}
  };

  public __gc class LegRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 254;
    LegRedemptionDate() : StringField(254) {}
    LegRedemptionDate(String* data) : StringField(254, data) {}
  };

  public __gc class StrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 202;
    StrikePrice() : DoubleField(202) {}
    StrikePrice(double data) : DoubleField(202, data) {}
    StrikePrice(double data, int decimalPadding) : DoubleField(202, data, decimalPadding) {}
  };

  public __gc class EncodedIssuer : public StringField
  {
  public:
    static const int FIELD = 349;
    EncodedIssuer() : StringField(349) {}
    EncodedIssuer(String* data) : StringField(349, data) {}
  };

  public __gc class YieldType : public StringField
  {
  public:
    static const int FIELD = 235;
    static const String* MARK_TO_MARKET_YIELD = "MARK";
    static const String* CLOSING_YIELD_MOST_RECENT_QUARTER = "LASTQUARTER";
    static const String* YIELD_TO_MATURITY = "MATURITY";
    static const String* YIELDTOTENDERDATE = "TENDER";
    static const String* PREVIOUS_CLOSE_YIELD = "PREVCLOSE";
    static const String* COMPOUND_YIELD_THE_YIELD_OF_CERTAIN_JAPANESE_BONDS_BASED_ON_ITS_PRICE_CERTAIN_JAPANESE_BONDS_HAVE_IRREGULAR_FIRST_OR_LAST_COUPONS_AND_THE_YIELD_IS_CALCULATED_COMPOUND_FOR_THESE_IRREGULAR_PERIODS = "COMPOUND";
    static const String* YIELDTOSHORTESTAVERAGELIFE = "SHORTAVGLIFE";
    static const String* YIELD_AT_ISSUE = "ATISSUE";
    static const String* YIELD_TO_NEXT_REFUND = "NEXTREFUND";
    static const String* YIELDATISSUE = "ATISSUE";
    static const String* CLOSINGYIELD = "CLOSE";
    static const String* GVNTEQUIVALENTYIELD = "GOVTEQUIV";
    static const String* ANNUALYIELD = "ANNUAL";
    static const String* AFTER_TAX_YIELD = "AFTERTAX";
    static const String* GVNT_EQUIVALENT_YIELD = "GOVTEQUIV";
    static const String* YIELDCHANGESINCECLOSE = "CHANGE";
    static const String* YIELDTOMATURITY = "MATURITY";
    static const String* YIELD_TO_SHORTEST_AVERAGE_LIFE_SAME_AS_AVGLIFE_ABOVE = "SHORTAVGLIFE";
    static const String* YIELD_CHANGE_SINCE_CLOSE_THE_CHANGE_IN_THE_YIELD_SINCE_THE_PREVIOUS_DAYS_CLOSING_YIELD = "CHANGE";
    static const String* SEMI = "SEMIANNUAL";
    static const String* CURRENT_YIELD_ANNUAL_INTEREST_ON_A_BOND_DIVIDED_BY_THE_MARKET_VALUE_THE_ACTUAL_INCOME_RATE_OF_RETURN_AS_OPPOSED_TO_THE_COUPON_RATE_EXPRESSED_AS_A_PERCENTAGE = "CURRENT";
    static const String* CLOSING_YIELD_MOST_RECENT_YEAR = "LASTYEAR";
    static const String* YIELD_TO_NEXT_CALL = "CALL";
    static const String* YIELD_CHANGE_SINCE_CLOSE = "CHANGE";
    static const String* PROCEEDS_YIELD = "PROCEEDS";
    static const String* YIELD_TO_MATURITY_THE_YIELD_OF_A_BOND_TO_ITS_MATURITY_DATE = "MATURITY";
    static const String* TAX_EQUIVALENT_YIELD_THE_AFTER_TAX_YIELD_GROSSED_UP_BY_THE_MAXIMUM_FEDERAL_TAX_RATE_OF_396_FOR_COMPARISON_TO_TAXABLE_YIELDS = "TAXEQUIV";
    static const String* INVERSE_FLOATER_BOND_YIELD_INVERSE_FLOATER_SEMI_ANNUAL_BOND_EQUIVALENT_RATE = "INVERSEFLOATER";
    static const String* CURRENT_YIELD = "CURRENT";
    static const String* SIMPLEYIELD = "SIMPLE";
    static const String* TRUEGROSSYIELD = "GROSS";
    static const String* COMPOUND_YIELD = "COMPOUND";
    static const String* CLOSINGYIELDMOSTRECENTYEAR = "LASTYEAR";
    static const String* BOOK_YIELD_THE_YIELD_OF_A_SECURITY_CALCULATED_BY_USING_ITS_BOOK_VALUE_INSTEAD_OF_THE_CURRENT_MARKET_PRICE_THIS_TERM_IS_TYPICALLY_USED_IN_THE_US_DOMESTIC_MARKET = "BOOK";
    static const String* YIELD_TO_NEXT_PUT_THE_YIELD_TO_THE_DATE_AT_WHICH_THE_BOND_HOLDER_CAN_NEXT_PUT_THE_BOND_TO_THE_ISSUER = "PUT";
    static const String* GOVERNMENT_EQUIVALENT_YIELD_ASK_YIELD_BASED_ON_SEMI_ANNUAL_COUPONS_COMPOUNDING_IN_ALL_PERIODS_AND_ACTUAL_ACTUAL_CALENDAR = "GOVTEQUIV";
    static const String* YIELD_TO_TENDER_DATE_THE_YIELD_ON_A_MUNICIPAL_BOND_TO_ITS_MANDATORY_TENDER_DATE = "TENDER";
    static const String* YIELD_TO_AVG_MATURITY = "AVGMATURITY";
    static const String* YIELD_TO_TENDER_DATE = "TENDER";
    static const String* PROCEEDSYIELD = "PROCEEDS";
    static const String* OPEN_AVERAGE_YIELD_THE_AVERAGE_YIELD_OF_THE_RESPECTIVE_SECURITIES_IN_THE_PORTFOLIO = "OPENAVG";
    static const String* ANNUAL_YIELD = "ANNUAL";
    static const String* YIELD_TO_WORST = "WORST";
    static const String* BOOK_YIELD = "BOOK";
    static const String* YIELD_TO_NEXT_PUT = "PUT";
    static const String* CLOSING_YIELD_MOST_RECENT_MONTH_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_MONTHS_END = "LASTMONTH";
    static const String* CLOSING_YIELD_MOST_RECENT_YEAR_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_YEARS_END = "LASTYEAR";
    static const String* OPENAVERAGEYIELD = "OPENAVG";
    static const String* TRUE_YIELD = "TRUE";
    static const String* TAX_EQUIVALENT_YIELD = "TAXEQUIV";
    static const String* TRUE_GROSS_YIELD = "GROSS";
    static const String* INVERSE_FLOATER_BOND_YIELD = "INVERSEFLOATER";
    static const String* TRUE_YIELD_THE_YIELD_CALCULATED_WITH_COUPON_DATES_MOVED_FROM_A_WEEKEND_OR_HOLIDAY_TO_THE_NEXT_VALID_SETTLEMENT_DATE = "TRUE";
    static const String* SEMI_ANNUAL_YIELD_THE_YIELD_OF_A_BOND_WHOSE_COUPON_PAYMENTS_ARE_REINVESTED_SEMI_ANNUALLY = "SEMIANNUAL";
    static const String* AFTERTAXYIELD = "AFTERTAX";
    static const String* CLOSING_YIELD_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE = "CLOSE";
    static const String* YIELDTOWORSTCONVENTION = "WORST";
    static const String* PREVIOUS_CLOSE_YIELD_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE_1_DAY_AGO = "PREVCLOSE";
    static const String* COMPOUNDYIELD = "COMPOUND";
    static const String* YIELD_VALUE_OF_1_32_THE_AMOUNT_THAT_THE_YIELD_WILL_CHANGE_FOR_A_1_32ND_CHANGE_IN_PRICE = "VALUE1/32";
    static const String* YIELD_TO_LONGEST_AVERAGE = "LONGEST";
    static const String* PREVIOUSCLOSEYIELD = "PREVCLOSE";
    static const String* CLOSINGYIELDMOSTRECENTMONTH = "LASTMONTH";
    static const String* CLOSING_YIELD_MOST_RECENT_MONTH = "LASTMONTH";
    static const String* YIELD_TO_AVERAGE_LIFE_THE_YIELD_ASSUMING_THAT_ALL_SINKS = "AVGLIFE";
    static const String* CLOSING_YIELD_MOST_RECENT_QUARTER_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_QUARTERS_END = "LASTQUARTER";
    static const String* YIELD_TO_SHORTEST_AVERAGE = "SHORTEST";
    static const String* TAXEQUIVALENTYIELD = "TAXEQUIV";
    static const String* MOSTRECENTCLOSINGYIELD = "LASTCLOSE";
    static const String* MARKTOMARKETYIELD = "MARK";
    static const String* CURRENTYIELD = "CURRENT";
    static const String* OPEN_AVERAGE_YIELD = "OPENAVG";
    static const String* TRUE_GROSS_YIELD_YIELD_CALCULATED_USING_THE_PRICE_INCLUDING_ACCRUED_INTEREST_WHERE_COUPON_DATES_ARE_MOVED_FROM_HOLIDAYS_AND_WEEKENDS_TO_THE_NEXT_TRADING_DAY = "GROSS";
    static const String* YIELD_WITH_INFLATION_ASSUMPTION = "INFLATION";
    static const String* YIELDTONEXTREFUNDSINKING = "NEXTREFUND";
    static const String* PROCEEDS_YIELD_THE_CD_EQUIVALENT_YIELD_WHEN_THE_REMAINING_TIME_TO_MATURITY_IS_LESS_THAN_TWO_YEARS = "PROCEEDS";
    static const String* YIELD_TO_LONGEST_AVERAGE_LIFE_THE_YIELD_ASSUMING_ONLY_MANDATORY_SINKS_ARE_TAKEN_THIS_RESULTS_IN_A_LOWER_PAYDOWN_OF_DEBT_THE_YIELD_IS_THEN_CALCULATED_TO_THE_FINAL_PAYMENT_DATE = "LONGAVGLIFE";
    static const String* MARK_TO_MARKET_YIELD_AN_ADJUSTMENT_IN_THE_VALUATION_OF_A_SECURITIES_PORTFOLIO_TO_REFLECT_THE_CURRENT_MARKET_VALUES_OF_THE_RESPECTIVE_SECURITIES_IN_THE_PORTFOLIO = "MARK";
    static const String* SIMPLE_YIELD = "SIMPLE";
    static const String* YIELD_TO_AVERAGE_MATURITY = "AVGMATURITY";
    static const String* YIELD_TO_WORST_CONVENTION_THE_LOWEST_YIELD_TO_ALL_POSSIBLE_REDEMPTION_DATE_SCENARIOS = "WORST";
    static const String* YIELD_TO_NEXT_CALL_THE_YIELD_OF_A_BOND_TO_THE_NEXT_POSSIBLE_CALL_DATE = "CALL";
    static const String* YIELDTOAVGMATURITY = "AVGMATURITY";
    static const String* YIELDTOLONGESTAVERAGELIFE = "LONGAVGLIFE";
    static const String* ANNUAL_YIELD_THE_ANNUAL_INTEREST_OR_DIVIDEND_INCOME_AN_INVESTMENT_EARNS_EXPRESSED_AS_A_PERCENTAGE_OF_THE_INVESTMENTS_TOTAL_VALUE = "ANNUAL";
    static const String* SEMI_ANNUAL_YIELD = "SEMIANNUAL";
    static const String* MOST_RECENT_CLOSING_YIELD = "LASTCLOSE";
    static const String* YIELD_TO_SHORTEST_AVERAGE_LIFE = "SHORTAVGLIFE";
    static const String* CLOSING_YIELD = "CLOSE";
    static const String* YIELDINFLATIONASSUMPTION = "INFLATION";
    static const String* YIELD_WITH_INFLATION_ASSUMPTION_BASED_ON_PRICE_THE_RETURN_AN_INVESTOR_WOULD_REQUIRE_ON_A_NORMAL_BOND_THAT_WOULD_MAKE_THE_REAL_RETURN_EQUAL_TO_THAT_OF_THE_INFLATION_INDEXED_BOND_ASSUMING_A_CONSTANT_INFLATION_RATE = "INFLATION";
    static const String* TRUEYIELD = "TRUE";
    static const String* CLOSINGYIELDMOSTRECENTQUARTER = "LASTQUARTER";
    static const String* YIELD_VALUE_OF_1_32 = "VALUE1_32";
    static const String* YIELD_TO_LONGEST_AVERAGE_LIFE = "LONGAVGLIFE";
    static const String* INVFLOATERBONDYIELD = "INVERSEFLOATER";
    static const String* MOST_RECENT_CLOSING_YIELD_THE_LAST_AVAILABLE_YIELD_STORED_IN_HISTORY_COMPUTED_USING_PRICE = "LASTCLOSE";
    static const String* YIELDTONEXTPUT = "PUT";
    static const String* YIELDTONEXTCALL = "CALL";
    static const String* SIMPLE_YIELD_THE_YIELD_OF_A_BOND_ASSUMING_NO_REINVESTMENT_OF_COUPON_PAYMENTS = "SIMPLE";
    static const String* BOOKYIELD = "BOOK";
    static const String* YIELDVALUEOF132 = "VALUE1_32";
    YieldType() : StringField(235) {}
    YieldType(String* data) : StringField(235, data) {}
  };

  public __gc class TradingReferencePrice : public DoubleField
  {
  public:
    static const int FIELD = 1150;
    TradingReferencePrice() : DoubleField(1150) {}
    TradingReferencePrice(double data) : DoubleField(1150, data) {}
    TradingReferencePrice(double data, int decimalPadding) : DoubleField(1150, data, decimalPadding) {}
  };

  public __gc class MDEntrySpotRate : public DoubleField
  {
  public:
    static const int FIELD = 1026;
    MDEntrySpotRate() : DoubleField(1026) {}
    MDEntrySpotRate(double data) : DoubleField(1026, data) {}
    MDEntrySpotRate(double data, int decimalPadding) : DoubleField(1026, data, decimalPadding) {}
  };

  public __gc class ParticipationRate : public DoubleField
  {
  public:
    static const int FIELD = 849;
    ParticipationRate() : DoubleField(849) {}
    ParticipationRate(double data) : DoubleField(849, data) {}
    ParticipationRate(double data, int decimalPadding) : DoubleField(849, data, decimalPadding) {}
  };

  public __gc class PegScope : public IntField
  {
  public:
    static const int FIELD = 840;
    static const int NATIONAL_XXCLUDING_LOCAL = 4;
    static const int NATIONAL_EXCLUDING_LOCAL = 4;
    static const int LOCAL = 1;
    static const int NATIONALEXCLUDINGLOCAL = 4;
    static const int GLOBAL = 3;
    static const int NATIONAL = 2;
    static const int LOCALEXCHANGEECNATS = 1;
    PegScope() : IntField(840) {}
    PegScope(int data) : IntField(840, data) {}
  };

  public __gc class InterestAtMaturity : public DoubleField
  {
  public:
    static const int FIELD = 738;
    InterestAtMaturity() : DoubleField(738) {}
    InterestAtMaturity(double data) : DoubleField(738, data) {}
    InterestAtMaturity(double data, int decimalPadding) : DoubleField(738, data, decimalPadding) {}
  };

  public __gc class LegIndividualAllocID : public StringField
  {
  public:
    static const int FIELD = 672;
    LegIndividualAllocID() : StringField(672) {}
    LegIndividualAllocID(String* data) : StringField(672, data) {}
  };

  public __gc class AllowableOneSidednessValue : public DoubleField
  {
  public:
    static const int FIELD = 766;
    AllowableOneSidednessValue() : DoubleField(766) {}
    AllowableOneSidednessValue(double data) : DoubleField(766, data) {}
    AllowableOneSidednessValue(double data, int decimalPadding) : DoubleField(766, data, decimalPadding) {}
  };

  public __gc class CashSettlAgentName : public StringField
  {
  public:
    static const int FIELD = 182;
    CashSettlAgentName() : StringField(182) {}
    CashSettlAgentName(String* data) : StringField(182, data) {}
  };

  public __gc class ContraTradeQty : public DoubleField
  {
  public:
    static const int FIELD = 437;
    ContraTradeQty() : DoubleField(437) {}
    ContraTradeQty(double data) : DoubleField(437, data) {}
    ContraTradeQty(double data, int decimalPadding) : DoubleField(437, data, decimalPadding) {}
  };

  public __gc class LegMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1212;
    LegMaturityTime() : StringField(1212) {}
    LegMaturityTime(String* data) : StringField(1212, data) {}
  };

  public __gc class SettlDeliveryType : public IntField
  {
  public:
    static const int FIELD = 172;
    static const int TRI_PARTY = 2;
    static const int HOLD_IN_CUSTODY = 3;
    static const int FREE = 1;
    static const int VERSUS_PAYMENT_DELIVER = 0;
    static const int FREE_DELIVER = 1;
    static const int VERSUS_PAYMENT = 0;
    SettlDeliveryType() : IntField(172) {}
    SettlDeliveryType(int data) : IntField(172, data) {}
  };

  public __gc class SecondaryPriceLimitType : public IntField
  {
  public:
    static const int FIELD = 1305;
    SecondaryPriceLimitType() : IntField(1305) {}
    SecondaryPriceLimitType(int data) : IntField(1305, data) {}
  };

  public __gc class MidPx : public DoubleField
  {
  public:
    static const int FIELD = 631;
    MidPx() : DoubleField(631) {}
    MidPx(double data) : DoubleField(631, data) {}
    MidPx(double data, int decimalPadding) : DoubleField(631, data, decimalPadding) {}
  };

  public __gc class AvgPx : public DoubleField
  {
  public:
    static const int FIELD = 6;
    AvgPx() : DoubleField(6) {}
    AvgPx(double data) : DoubleField(6, data) {}
    AvgPx(double data, int decimalPadding) : DoubleField(6, data, decimalPadding) {}
  };

  public __gc class DiscretionLimitType : public IntField
  {
  public:
    static const int FIELD = 843;
    static const int STRICT = 1;
    static const int ORWORSE = 2;
    static const int OR_BETTER = 0;
    static const int OR_WORSE = 2;
    static const int ORBETTER = 0;
    DiscretionLimitType() : IntField(843) {}
    DiscretionLimitType(int data) : IntField(843, data) {}
  };

  public __gc class StrikeTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 443;
    StrikeTime() : UtcTimeStampField(443) {}
    StrikeTime(DateTime data) : UtcTimeStampField(443, data) {}
  };

  public __gc class SettlSessSubID : public StringField
  {
  public:
    static const int FIELD = 717;
    SettlSessSubID() : StringField(717) {}
    SettlSessSubID(String* data) : StringField(717, data) {}
  };

  public __gc class MailingDtls : public StringField
  {
  public:
    static const int FIELD = 474;
    MailingDtls() : StringField(474) {}
    MailingDtls(String* data) : StringField(474, data) {}
  };

  public __gc class BidID : public StringField
  {
  public:
    static const int FIELD = 390;
    BidID() : StringField(390) {}
    BidID(String* data) : StringField(390, data) {}
  };

  public __gc class PartyDetailsRequestResult : public IntField
  {
  public:
    static const int FIELD = 1511;
    static const int UNSUPPORTED_PARTYLISTRESPONSETYPE = 3;
    static const int PARTIES_OR_PARTY_DETAILS_DATA_TEMPORARILY_UNAVAILABLE = 5;
    static const int VALID_REQUEST = 0;
    static const int REQUEST_FOR_PARTIES_DATA_NOT_SUPPORTED = 6;
    static const int NO_PARTIES_OR_PARTY_DETAILS_FOUND_THAT_MATCH_SELECTION_CRITERIA = 2;
    static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
    static const int OTHER = 99;
    static const int NOT_AUTHORIZED_TO_RETRIEVE_PARTIES_OR_PARTY_DETAILS_DATA = 4;
    PartyDetailsRequestResult() : IntField(1511) {}
    PartyDetailsRequestResult(int data) : IntField(1511, data) {}
  };

  public __gc class ExerciseMethod : public CharField
  {
  public:
    static const int FIELD = 747;
    static const __wchar_t AUTOMATIC = 'A';
    static const __wchar_t MANUAL = 'M';
    ExerciseMethod() : CharField(747) {}
    ExerciseMethod(__wchar_t data) : CharField(747, data) {}
  };

  public __gc class CommCurrency : public StringField
  {
  public:
    static const int FIELD = 479;
    CommCurrency() : StringField(479) {}
    CommCurrency(String* data) : StringField(479, data) {}
  };

  public __gc class NoSettlOblig : public IntField
  {
  public:
    static const int FIELD = 1165;
    NoSettlOblig() : IntField(1165) {}
    NoSettlOblig(int data) : IntField(1165, data) {}
  };

  public __gc class MaxPriceVariation : public DoubleField
  {
  public:
    static const int FIELD = 1143;
    MaxPriceVariation() : DoubleField(1143) {}
    MaxPriceVariation(double data) : DoubleField(1143, data) {}
    MaxPriceVariation(double data, int decimalPadding) : DoubleField(1143, data, decimalPadding) {}
  };

  public __gc class WorkingIndicator : public BooleanField
  {
  public:
    static const int FIELD = 636;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    WorkingIndicator() : BooleanField(636) {}
    WorkingIndicator(bool data) : BooleanField(636, data) {}
  };

  public __gc class CashSettlAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 185;
    CashSettlAgentAcctName() : StringField(185) {}
    CashSettlAgentAcctName(String* data) : StringField(185, data) {}
  };

  public __gc class SellVolume : public DoubleField
  {
  public:
    static const int FIELD = 331;
    SellVolume() : DoubleField(331) {}
    SellVolume(double data) : DoubleField(331, data) {}
    SellVolume(double data, int decimalPadding) : DoubleField(331, data, decimalPadding) {}
  };

  public __gc class SideMultiLegReportingType : public IntField
  {
  public:
    static const int FIELD = 752;
    static const int INDIVIDUALLEGOFAMULTILEGSECURITY = 2;
    static const int SINGLE_SECURITY = 1;
    static const int MULTILEG_SECURITY = 3;
    static const int INDIVIDUAL_LEG_OF_A_MULTILEG_SECURITY = 2;
    static const int MULTILEGSECURITY = 3;
    static const int SINGLESECURITY = 1;
    SideMultiLegReportingType() : IntField(752) {}
    SideMultiLegReportingType(int data) : IntField(752, data) {}
  };

  public __gc class DerivativeEventText : public StringField
  {
  public:
    static const int FIELD = 1291;
    DerivativeEventText() : StringField(1291) {}
    DerivativeEventText(String* data) : StringField(1291, data) {}
  };

  public __gc class PegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1099;
    PegSecurityDesc() : StringField(1099) {}
    PegSecurityDesc(String* data) : StringField(1099, data) {}
  };

  public __gc class AllocCustomerCapacity : public StringField
  {
  public:
    static const int FIELD = 993;
    AllocCustomerCapacity() : StringField(993) {}
    AllocCustomerCapacity(String* data) : StringField(993, data) {}
  };

  public __gc class ConfirmRejReason : public IntField
  {
  public:
    static const int FIELD = 774;
    static const int MISSINGSETTLEMENTINSTRUCTIONS = 2;
    static const int MISSING_SETTLEMENT_INSTRUCTIONS = 2;
    static const int MISMATCHEDACCOUNT = 1;
    static const int MISMATCHED_ACCOUNT = 1;
    static const int OTHER = 99;
    ConfirmRejReason() : IntField(774) {}
    ConfirmRejReason(int data) : IntField(774, data) {}
  };

  public __gc class BidRequestTransType : public CharField
  {
  public:
    static const int FIELD = 374;
    static const __wchar_t NEW = 'N';
    static const __wchar_t NO = 'N';
    static const __wchar_t CANCEL = 'C';
    BidRequestTransType() : CharField(374) {}
    BidRequestTransType(__wchar_t data) : CharField(374, data) {}
  };

  public __gc class CashDistribAgentAcctNumber : public StringField
  {
  public:
    static const int FIELD = 500;
    CashDistribAgentAcctNumber() : StringField(500) {}
    CashDistribAgentAcctNumber(String* data) : StringField(500, data) {}
  };

  public __gc class LegExecInst : public StringField
  {
  public:
    static const int FIELD = 1384;
    LegExecInst() : StringField(1384) {}
    LegExecInst(String* data) : StringField(1384, data) {}
  };

  public __gc class CapPrice : public DoubleField
  {
  public:
    static const int FIELD = 1199;
    CapPrice() : DoubleField(1199) {}
    CapPrice(double data) : DoubleField(1199, data) {}
    CapPrice(double data, int decimalPadding) : DoubleField(1199, data, decimalPadding) {}
  };

  public __gc class LegRepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 251;
    LegRepurchaseTerm() : IntField(251) {}
    LegRepurchaseTerm(int data) : IntField(251, data) {}
  };

  public __gc class RegistAcctType : public StringField
  {
  public:
    static const int FIELD = 493;
    RegistAcctType() : StringField(493) {}
    RegistAcctType(String* data) : StringField(493, data) {}
  };

  public __gc class MassActionRejectReason : public IntField
  {
  public:
    static const int FIELD = 1376;
    static const int INVALID_OR_UNKNOWN_SECURITY = 1;
    static const int INVALID_OR_UNKNOWN_SECURITY_GROUP = 9;
    static const int INVALID_OR_UNKNOWN_ISSUER_OF_UNDERLYING_SECURITY = 11;
    static const int INVALID_OR_UNKNOWN_SECURITYTYPE = 5;
    static const int INVALID_OR_UNKNOWN_CFICODE = 4;
    static const int INVALID_OR_UNKNOWN_UNDERLYING_SECURITY = 2;
    static const int INVALID_OR_UNKNOWN_TRADING_SESSION = 6;
    static const int INVALID_OR_UNKNOWN_MARKET_SEGMENT = 8;
    static const int INVALID_OR_UNKNOWN_MARKET = 7;
    static const int MASS_ACTION_NOT_SUPPORTED = 0;
    static const int OTHER = 99;
    static const int INVALID_OR_UNKNOWN_SECURITY_ISSUER = 10;
    static const int INVALID_OR_UNKNOWN_PRODUCT = 3;
    MassActionRejectReason() : IntField(1376) {}
    MassActionRejectReason(int data) : IntField(1376, data) {}
  };

  public __gc class DerivativePutOrCall : public IntField
  {
  public:
    static const int FIELD = 1323;
    DerivativePutOrCall() : IntField(1323) {}
    DerivativePutOrCall(int data) : IntField(1323, data) {}
  };

  public __gc class StartMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1241;
    StartMaturityMonthYear() : StringField(1241) {}
    StartMaturityMonthYear(String* data) : StringField(1241, data) {}
  };

  public __gc class CollApplType : public IntField
  {
  public:
    static const int FIELD = 1043;
    static const int GENERAL = 1;
    static const int SPECIFIC_DEPOSIT = 0;
    CollApplType() : IntField(1043) {}
    CollApplType(int data) : IntField(1043, data) {}
  };

  public __gc class NoUnderlyingAmounts : public IntField
  {
  public:
    static const int FIELD = 984;
    NoUnderlyingAmounts() : IntField(984) {}
    NoUnderlyingAmounts(int data) : IntField(984, data) {}
  };

  public __gc class ConfirmType : public IntField
  {
  public:
    static const int FIELD = 773;
    static const int CONFIRMATION = 2;
    static const int CONFIRMATION_REQUEST_REJECTED = 3;
    static const int CONFIRMATIONREQUESTREJECTED = 3;
    static const int STATUS = 1;
    ConfirmType() : IntField(773) {}
    ConfirmType(int data) : IntField(773, data) {}
  };

  public __gc class LegMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 610;
    LegMaturityMonthYear() : StringField(610) {}
    LegMaturityMonthYear(String* data) : StringField(610, data) {}
  };

  public __gc class RelatdSym : public StringField
  {
  public:
    static const int FIELD = 46;
    RelatdSym() : StringField(46) {}
    RelatdSym(String* data) : StringField(46, data) {}
  };

  public __gc class RiskLimitAmount : public DoubleField
  {
  public:
    static const int FIELD = 1531;
    RiskLimitAmount() : DoubleField(1531) {}
    RiskLimitAmount(double data) : DoubleField(1531, data) {}
    RiskLimitAmount(double data, int decimalPadding) : DoubleField(1531, data, decimalPadding) {}
  };

  public __gc class UnderlyingLegSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 1338;
    UnderlyingLegSecuritySubType() : StringField(1338) {}
    UnderlyingLegSecuritySubType(String* data) : StringField(1338, data) {}
  };

  public __gc class NoUnderlyingSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 457;
    NoUnderlyingSecurityAltID() : IntField(457) {}
    NoUnderlyingSecurityAltID(int data) : IntField(457, data) {}
  };

  public __gc class RelationshipRiskCFICode : public StringField
  {
  public:
    static const int FIELD = 1599;
    RelationshipRiskCFICode() : StringField(1599) {}
    RelationshipRiskCFICode(String* data) : StringField(1599, data) {}
  };

  public __gc class NoRelatedPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1566;
    NoRelatedPartySubIDs() : IntField(1566) {}
    NoRelatedPartySubIDs(int data) : IntField(1566, data) {}
  };

  public __gc class RiskSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 1537;
    RiskSymbolSfx() : StringField(1537) {}
    RiskSymbolSfx(String* data) : StringField(1537, data) {}
  };

  public __gc class MDQuoteType : public IntField
  {
  public:
    static const int FIELD = 1070;
    static const int INDICATIVE = 0;
    static const int RESTRICTED_TRADEABLE = 2;
    static const int INDICATIVE_AND_TRADEABLE = 4;
    static const int TRADEABLE = 1;
    static const int COUNTER = 3;
    MDQuoteType() : IntField(1070) {}
    MDQuoteType(int data) : IntField(1070, data) {}
  };

  public __gc class QtyType : public IntField
  {
  public:
    static const int FIELD = 854;
    static const int CONTRACTS = 1;
    static const int UNITS_OF_MEASURE_PER_TIME_UNIT = 2;
    static const int UNITS = 0;
    QtyType() : IntField(854) {}
    QtyType(int data) : IntField(854, data) {}
  };

  public __gc class QuoteRespType : public IntField
  {
  public:
    static const int FIELD = 694;
    static const int END_TRADE = 7;
    static const int HITLIFT = 1;
    static const int HIT_LIFT = 1;
    static const int COVER = 4;
    static const int DONE_AWAY = 5;
    static const int DONEAWAY = 5;
    static const int TIMED_OUT = 8;
    static const int PASS = 6;
    static const int EXPIRED = 3;
    static const int COUNTER = 2;
    QuoteRespType() : IntField(694) {}
    QuoteRespType(int data) : IntField(694, data) {}
  };

  public __gc class IOINaturalFlag : public BooleanField
  {
  public:
    static const int FIELD = 130;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    IOINaturalFlag() : BooleanField(130) {}
    IOINaturalFlag(bool data) : BooleanField(130, data) {}
  };

  public __gc class BenchmarkCurvePoint : public StringField
  {
  public:
    static const int FIELD = 222;
    BenchmarkCurvePoint() : StringField(222) {}
    BenchmarkCurvePoint(String* data) : StringField(222, data) {}
  };

  public __gc class TradSesUpdateAction : public CharField
  {
  public:
    static const int FIELD = 1327;
    TradSesUpdateAction() : CharField(1327) {}
    TradSesUpdateAction(__wchar_t data) : CharField(1327, data) {}
  };

  public __gc class UnderlyingCashAmount : public DoubleField
  {
  public:
    static const int FIELD = 973;
    UnderlyingCashAmount() : DoubleField(973) {}
    UnderlyingCashAmount(double data) : DoubleField(973, data) {}
    UnderlyingCashAmount(double data, int decimalPadding) : DoubleField(973, data, decimalPadding) {}
  };

  public __gc class CollAsgnID : public StringField
  {
  public:
    static const int FIELD = 902;
    CollAsgnID() : StringField(902) {}
    CollAsgnID(String* data) : StringField(902, data) {}
  };

  public __gc class ExchangeRule : public StringField
  {
  public:
    static const int FIELD = 825;
    ExchangeRule() : StringField(825) {}
    ExchangeRule(String* data) : StringField(825, data) {}
  };

  public __gc class EncodedHeadline : public StringField
  {
  public:
    static const int FIELD = 359;
    EncodedHeadline() : StringField(359) {}
    EncodedHeadline(String* data) : StringField(359, data) {}
  };

  public __gc class RegistID : public StringField
  {
  public:
    static const int FIELD = 513;
    RegistID() : StringField(513) {}
    RegistID(String* data) : StringField(513, data) {}
  };

  public __gc class CrossID : public StringField
  {
  public:
    static const int FIELD = 548;
    CrossID() : StringField(548) {}
    CrossID(String* data) : StringField(548, data) {}
  };

  public __gc class NoExecs : public IntField
  {
  public:
    static const int FIELD = 124;
    NoExecs() : IntField(124) {}
    NoExecs(int data) : IntField(124, data) {}
  };

  public __gc class DerivativeSecurityGroup : public StringField
  {
  public:
    static const int FIELD = 1247;
    DerivativeSecurityGroup() : StringField(1247) {}
    DerivativeSecurityGroup(String* data) : StringField(1247, data) {}
  };

  public __gc class SecondaryDisplayQty : public DoubleField
  {
  public:
    static const int FIELD = 1082;
    SecondaryDisplayQty() : DoubleField(1082) {}
    SecondaryDisplayQty(double data) : DoubleField(1082, data) {}
    SecondaryDisplayQty(double data, int decimalPadding) : DoubleField(1082, data, decimalPadding) {}
  };

  public __gc class RefMsgType : public StringField
  {
  public:
    static const int FIELD = 372;
    RefMsgType() : StringField(372) {}
    RefMsgType(String* data) : StringField(372, data) {}
  };

  public __gc class StandInstDbID : public StringField
  {
  public:
    static const int FIELD = 171;
    StandInstDbID() : StringField(171) {}
    StandInstDbID(String* data) : StringField(171, data) {}
  };

  public __gc class EncodedLegSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 621;
    EncodedLegSecurityDescLen() : IntField(621) {}
    EncodedLegSecurityDescLen(int data) : IntField(621, data) {}
  };

  public __gc class DerivativeEventPx : public DoubleField
  {
  public:
    static const int FIELD = 1290;
    DerivativeEventPx() : DoubleField(1290) {}
    DerivativeEventPx(double data) : DoubleField(1290, data) {}
    DerivativeEventPx(double data, int decimalPadding) : DoubleField(1290, data, decimalPadding) {}
  };

  public __gc class SettlObligSource : public CharField
  {
  public:
    static const int FIELD = 1164;
    static const __wchar_t INSTRUCTIONS_OF_BROKER = '1';
    static const __wchar_t INVESTOR = '3';
    static const __wchar_t INSTRUCTIONS_FOR_INSTITUTION = '2';
    SettlObligSource() : CharField(1164) {}
    SettlObligSource(__wchar_t data) : CharField(1164, data) {}
  };

  public __gc class TrdSubType : public IntField
  {
  public:
    static const int FIELD = 829;
    static const int ON_HOURS_TRADE = 34;
    static const int INTERIM_PROTECTED_TRADE = 38;
    static const int K = 16;
    static const int LC = 17;
    static const int WN = 31;
    static const int CONVERTED_SWAP = 36;
    static const int B = 15;
    static const int M = 18;
    static const int RT = 28;
    static const int ONSET_DUE_TO_AN_ALLOCATION = 6;
    static const int CMTA = 0;
    static const int INTERNAL_TRANSFER_OR_ADJUSTMENT = 1;
    static const int DIFFERENTIAL_SPREAD = 7;
    static const int TRANSACTION_FROM_EXERCISE = 9;
    static const int TRANSACTION_FROM_ASSIGNMENT = 10;
    static const int N = 19;
    static const int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8;
    static const int NR = 21;
    static const int SW = 29;
    static const int OTC_QUOTE = 35;
    static const int ADVISORY_FOR_CONTRA_SIDE = 4;
    static const int OFFSET_DUE_TO_AN_ALLOCATION = 5;
    static const int P = 22;
    static const int CROSSED_TRADE = 37;
    static const int PA = 23;
    static const int EXTERNAL_TRANSFER_OR_TRANSFER_OF_ACCOUNT = 2;
    static const int R = 26;
    static const int RO = 27;
    static const int WT = 32;
    static const int OFF_HOURS_TRADE = 33;
    static const int REJECT_FOR_SUBMITTING_SIDE = 3;
    static const int ONSET_DUT_TO_AN_ALLOCATION = 6;
    static const int AI = 14;
    static const int PC = 24;
    static const int PN = 25;
    static const int LARGE_IN_SCALE = 39;
    static const int NM = 20;
    static const int T = 30;
    static const int ACATS = 11;
    TrdSubType() : IntField(829) {}
    TrdSubType(int data) : IntField(829, data) {}
  };

  public __gc class EncodedUnderlyingIssuerLen : public IntField
  {
  public:
    static const int FIELD = 362;
    EncodedUnderlyingIssuerLen() : IntField(362) {}
    EncodedUnderlyingIssuerLen(int data) : IntField(362, data) {}
  };

  public __gc class ExecTransType : public CharField
  {
  public:
    static const int FIELD = 20;
    static const __wchar_t NEW = '0';
    static const __wchar_t CORRECT = '2';
    static const __wchar_t CANCEL = '1';
    static const __wchar_t STATUS = '3';
    ExecTransType() : CharField(20) {}
    ExecTransType(__wchar_t data) : CharField(20, data) {}
  };

  public __gc class BeginSeqNo : public IntField
  {
  public:
    static const int FIELD = 7;
    BeginSeqNo() : IntField(7) {}
    BeginSeqNo(int data) : IntField(7, data) {}
  };

  public __gc class DayBookingInst : public CharField
  {
  public:
    static const int FIELD = 589;
    static const __wchar_t CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR = '0';
    static const __wchar_t ACCUMULATE = '2';
    static const __wchar_t SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING_SPEAK_FIRST = '1';
    static const __wchar_t CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR_AUTO = '0';
    static const __wchar_t SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING = '1';
    DayBookingInst() : CharField(589) {}
    DayBookingInst(__wchar_t data) : CharField(589, data) {}
  };

  public __gc class FlowScheduleType : public IntField
  {
  public:
    static const int FIELD = 1439;
    static const int NERC_EASTERN_OFF_PEAK = 0;
    static const int NERC_WESTERN_PEAK = 4;
    static const int NERC_EASTERN_PEAK = 3;
    static const int NERC_CALENDAR_ALL_DAYS_IN_MONTH = 2;
    static const int NERC_WESTERN_OFF_PEAK = 1;
    FlowScheduleType() : IntField(1439) {}
    FlowScheduleType(int data) : IntField(1439, data) {}
  };

  public __gc class MDOriginType : public IntField
  {
  public:
    static const int FIELD = 1024;
    static const int CROSS = 2;
    static const int OFF_BOOK = 1;
    static const int BOOK = 0;
    MDOriginType() : IntField(1024) {}
    MDOriginType(int data) : IntField(1024, data) {}
  };

  public __gc class CollInquiryStatus : public IntField
  {
  public:
    static const int FIELD = 945;
    static const int ACCEPTED_WITH_WARNINGS = 1;
    static const int COMPLETED = 2;
    static const int ACCEPTEDWITHWARNINGS = 1;
    static const int REJECTED = 4;
    static const int COMPLETEDWITHWARNINGS = 3;
    static const int ACCEPTED = 0;
    static const int COMPLETED_WITH_WARNINGS = 3;
    CollInquiryStatus() : IntField(945) {}
    CollInquiryStatus(int data) : IntField(945, data) {}
  };

  public __gc class NoInstrAttrib : public IntField
  {
  public:
    static const int FIELD = 870;
    NoInstrAttrib() : IntField(870) {}
    NoInstrAttrib(int data) : IntField(870, data) {}
  };

  public __gc class RegistEmail : public StringField
  {
  public:
    static const int FIELD = 511;
    RegistEmail() : StringField(511) {}
    RegistEmail(String* data) : StringField(511, data) {}
  };

  public __gc class StreamAsgnReqID : public StringField
  {
  public:
    static const int FIELD = 1497;
    StreamAsgnReqID() : StringField(1497) {}
    StreamAsgnReqID(String* data) : StringField(1497, data) {}
  };

  public __gc class CPProgram : public IntField
  {
  public:
    static const int FIELD = 875;
    static const int _3A3 = 1;
    static const int OTHER = 99;
    static const int _3 = 1;
    static const int _42 = 2;
    static const int _4 = 2;
    CPProgram() : IntField(875) {}
    CPProgram(int data) : IntField(875, data) {}
  };

  public __gc class ConfirmReqID : public StringField
  {
  public:
    static const int FIELD = 859;
    ConfirmReqID() : StringField(859) {}
    ConfirmReqID(String* data) : StringField(859, data) {}
  };

  public __gc class AltMDSourceID : public StringField
  {
  public:
    static const int FIELD = 817;
    AltMDSourceID() : StringField(817) {}
    AltMDSourceID(String* data) : StringField(817, data) {}
  };

  public __gc class NoOrders : public IntField
  {
  public:
    static const int FIELD = 73;
    NoOrders() : IntField(73) {}
    NoOrders(int data) : IntField(73, data) {}
  };

  public __gc class CashDistribAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 502;
    CashDistribAgentAcctName() : StringField(502) {}
    CashDistribAgentAcctName(String* data) : StringField(502, data) {}
  };

  public __gc class NoContextPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1526;
    NoContextPartySubIDs() : IntField(1526) {}
    NoContextPartySubIDs(int data) : IntField(1526, data) {}
  };

  public __gc class UndlyInstrumentPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1060;
    UndlyInstrumentPartyIDSource() : CharField(1060) {}
    UndlyInstrumentPartyIDSource(__wchar_t data) : CharField(1060, data) {}
  };

  public __gc class UnderlyingSettlMethod : public StringField
  {
  public:
    static const int FIELD = 1039;
    UnderlyingSettlMethod() : StringField(1039) {}
    UnderlyingSettlMethod(String* data) : StringField(1039, data) {}
  };

  public __gc class NoMDEntryTypes : public IntField
  {
  public:
    static const int FIELD = 267;
    NoMDEntryTypes() : IntField(267) {}
    NoMDEntryTypes(int data) : IntField(267, data) {}
  };

  public __gc class MDEntryForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 1027;
    MDEntryForwardPoints() : DoubleField(1027) {}
    MDEntryForwardPoints(double data) : DoubleField(1027, data) {}
    MDEntryForwardPoints(double data, int decimalPadding) : DoubleField(1027, data, decimalPadding) {}
  };

  public __gc class PosReqType : public IntField
  {
  public:
    static const int FIELD = 724;
    static const int POSITIONS = 0;
    static const int BACKOUT_MESSAGE = 5;
    static const int DELTA_POSITIONS = 6;
    static const int SETTLEMENT_ACTIVITY = 4;
    static const int TRADES = 1;
    static const int EXERCISES = 2;
    static const int ASSIGNMENTS = 3;
    PosReqType() : IntField(724) {}
    PosReqType(int data) : IntField(724, data) {}
  };

  public __gc class MassStatusReqType : public IntField
  {
  public:
    static const int FIELD = 585;
    static const int STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2;
    static const int STATUS_FOR_ORDERS_FOR_A_SECURITY = 1;
    static const int STATUSSECURITYTYPE = 5;
    static const int STATUS_FOR_ORDERS_FOR_A_CFICODE = 4;
    static const int STATUSTRDSESSION = 6;
    static const int STATUS_FOR_ORDERS_FOR_A_PARTYID = 8;
    static const int STATUS_FOR_SECURITY_ISSUER = 9;
    static const int STATUSCFICODE = 4;
    static const int STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = 6;
    static const int STATUSUNDERLYINGSECURITY = 2;
    static const int STATUSPARTYID = 8;
    static const int STATUS_FOR_ORDERS_FOR_A_PRODUCT = 3;
    static const int STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = 5;
    static const int STATUS_FOR_ALL_ORDERS = 7;
    static const int STATUS_FOR_ISSUER_OF_UNDERLYING_SECURITY = 10;
    static const int STATUSSECURITY = 1;
    static const int STATUSPRODUCT = 3;
    static const int STATUSALLORDERS = 7;
    MassStatusReqType() : IntField(585) {}
    MassStatusReqType(int data) : IntField(585, data) {}
  };

  public __gc class TradeOriginationDate : public StringField
  {
  public:
    static const int FIELD = 229;
    TradeOriginationDate() : StringField(229) {}
    TradeOriginationDate(String* data) : StringField(229, data) {}
  };

  public __gc class SettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 730;
    SettlPrice() : DoubleField(730) {}
    SettlPrice(double data) : DoubleField(730, data) {}
    SettlPrice(double data, int decimalPadding) : DoubleField(730, data, decimalPadding) {}
  };

  public __gc class SecuritySettlAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 179;
    SecuritySettlAgentAcctName() : StringField(179) {}
    SecuritySettlAgentAcctName(String* data) : StringField(179, data) {}
  };

  public __gc class RiskInstrumentMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 1558;
    RiskInstrumentMultiplier() : DoubleField(1558) {}
    RiskInstrumentMultiplier(double data) : DoubleField(1558, data) {}
    RiskInstrumentMultiplier(double data, int decimalPadding) : DoubleField(1558, data, decimalPadding) {}
  };

  public __gc class NoDerivativeEvents : public IntField
  {
  public:
    static const int FIELD = 1286;
    NoDerivativeEvents() : IntField(1286) {}
    NoDerivativeEvents(int data) : IntField(1286, data) {}
  };

  public __gc class UnderlyingEndPrice : public DoubleField
  {
  public:
    static const int FIELD = 883;
    UnderlyingEndPrice() : DoubleField(883) {}
    UnderlyingEndPrice(double data) : DoubleField(883, data) {}
    UnderlyingEndPrice(double data, int decimalPadding) : DoubleField(883, data, decimalPadding) {}
  };

  public __gc class SubscriptionRequestType : public CharField
  {
  public:
    static const int FIELD = 263;
    static const __wchar_t DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = '2';
    static const __wchar_t SNAPSHOT_PLUS_UPDATES = '1';
    static const __wchar_t SNAPSHOTUPDATE = '1';
    static const __wchar_t SNAPSHOT = '0';
    static const __wchar_t UNSUBSCRIBE = '2';
    SubscriptionRequestType() : CharField(263) {}
    SubscriptionRequestType(__wchar_t data) : CharField(263, data) {}
  };

  public __gc class TotalNumSecurityTypes : public IntField
  {
  public:
    static const int FIELD = 557;
    TotalNumSecurityTypes() : IntField(557) {}
    TotalNumSecurityTypes(int data) : IntField(557, data) {}
  };

  public __gc class NewsCategory : public IntField
  {
  public:
    static const int FIELD = 1473;
    static const int MARKETPLACE_NEWS = 1;
    static const int TECHNICAL_NEWS = 3;
    static const int COMPANY_NEWS = 0;
    static const int OTHER_NEWS = 99;
    static const int FINANCIAL_MARKET_NEWS = 2;
    NewsCategory() : IntField(1473) {}
    NewsCategory(int data) : IntField(1473, data) {}
  };

  public __gc class UnderlyingLegPutOrCall : public IntField
  {
  public:
    static const int FIELD = 1343;
    UnderlyingLegPutOrCall() : IntField(1343) {}
    UnderlyingLegPutOrCall(int data) : IntField(1343, data) {}
  };

  public __gc class URLLink : public StringField
  {
  public:
    static const int FIELD = 149;
    URLLink() : StringField(149) {}
    URLLink(String* data) : StringField(149, data) {}
  };

  public __gc class NoInstrumentPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1052;
    NoInstrumentPartySubIDs() : IntField(1052) {}
    NoInstrumentPartySubIDs(int data) : IntField(1052, data) {}
  };

  public __gc class UnderlyingCurrentValue : public DoubleField
  {
  public:
    static const int FIELD = 885;
    UnderlyingCurrentValue() : DoubleField(885) {}
    UnderlyingCurrentValue(double data) : DoubleField(885, data) {}
    UnderlyingCurrentValue(double data, int decimalPadding) : DoubleField(885, data, decimalPadding) {}
  };

  public __gc class InterestAccrualDate : public StringField
  {
  public:
    static const int FIELD = 874;
    InterestAccrualDate() : StringField(874) {}
    InterestAccrualDate(String* data) : StringField(874, data) {}
  };

  public __gc class FutSettDate2 : public StringField
  {
  public:
    static const int FIELD = 193;
    FutSettDate2() : StringField(193) {}
    FutSettDate2(String* data) : StringField(193, data) {}
  };

  public __gc class NoClearingInstructions : public IntField
  {
  public:
    static const int FIELD = 576;
    NoClearingInstructions() : IntField(576) {}
    NoClearingInstructions(int data) : IntField(576, data) {}
  };

  public __gc class UnderlyingCurrency : public StringField
  {
  public:
    static const int FIELD = 318;
    UnderlyingCurrency() : StringField(318) {}
    UnderlyingCurrency(String* data) : StringField(318, data) {}
  };

  public __gc class LegInterestAccrualDate : public StringField
  {
  public:
    static const int FIELD = 956;
    LegInterestAccrualDate() : StringField(956) {}
    LegInterestAccrualDate(String* data) : StringField(956, data) {}
  };

  public __gc class NewPassword : public StringField
  {
  public:
    static const int FIELD = 925;
    NewPassword() : StringField(925) {}
    NewPassword(String* data) : StringField(925, data) {}
  };

  public __gc class RedemptionDate : public StringField
  {
  public:
    static const int FIELD = 240;
    RedemptionDate() : StringField(240) {}
    RedemptionDate(String* data) : StringField(240, data) {}
  };

  public __gc class RefApplLastSeqNum : public IntField
  {
  public:
    static const int FIELD = 1357;
    RefApplLastSeqNum() : IntField(1357) {}
    RefApplLastSeqNum(int data) : IntField(1357, data) {}
  };

  public __gc class StartCash : public DoubleField
  {
  public:
    static const int FIELD = 921;
    StartCash() : DoubleField(921) {}
    StartCash(double data) : DoubleField(921, data) {}
    StartCash(double data, int decimalPadding) : DoubleField(921, data, decimalPadding) {}
  };

  public __gc class MaxMessageSize : public IntField
  {
  public:
    static const int FIELD = 383;
    MaxMessageSize() : IntField(383) {}
    MaxMessageSize(int data) : IntField(383, data) {}
  };

  public __gc class OfferForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 191;
    OfferForwardPoints() : DoubleField(191) {}
    OfferForwardPoints(double data) : DoubleField(191, data) {}
    OfferForwardPoints(double data, int decimalPadding) : DoubleField(191, data, decimalPadding) {}
  };

  public __gc class IOIQty : public StringField
  {
  public:
    static const int FIELD = 27;
    static const String* MEDIUM = "M";
    static const String* _1000000000 = "0";
    static const String* LARGE = "L";
    static const String* SMALL = "S";
    static const String* UNDISCLOSED_QUANTITY = "U";
    IOIQty() : StringField(27) {}
    IOIQty(String* data) : StringField(27, data) {}
  };

  public __gc class LastQty : public DoubleField
  {
  public:
    static const int FIELD = 32;
    LastQty() : DoubleField(32) {}
    LastQty(double data) : DoubleField(32, data) {}
    LastQty(double data, int decimalPadding) : DoubleField(32, data, decimalPadding) {}
  };

  public __gc class ApplResponseError : public IntField
  {
  public:
    static const int FIELD = 1354;
    static const int USER_NOT_AUTHORIZED_FOR_APPLICATION = 2;
    static const int APPLICATION_DOES_NOT_EXIST = 0;
    static const int MESSAGES_REQUESTED_ARE_NOT_AVAILABLE = 1;
    ApplResponseError() : IntField(1354) {}
    ApplResponseError(int data) : IntField(1354, data) {}
  };

  public __gc class UnderlyingLegSecurityType : public StringField
  {
  public:
    static const int FIELD = 1337;
    UnderlyingLegSecurityType() : StringField(1337) {}
    UnderlyingLegSecurityType(String* data) : StringField(1337, data) {}
  };

  public __gc class DerivativePriceUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 1315;
    DerivativePriceUnitOfMeasure() : StringField(1315) {}
    DerivativePriceUnitOfMeasure(String* data) : StringField(1315, data) {}
  };

  public __gc class TriggerPriceDirection : public CharField
  {
  public:
    static const int FIELD = 1109;
    static const __wchar_t TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_DOWN_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'D';
    static const __wchar_t TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_UP_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'U';
    TriggerPriceDirection() : CharField(1109) {}
    TriggerPriceDirection(__wchar_t data) : CharField(1109, data) {}
  };

  public __gc class PositionCurrency : public StringField
  {
  public:
    static const int FIELD = 1055;
    PositionCurrency() : StringField(1055) {}
    PositionCurrency(String* data) : StringField(1055, data) {}
  };

  public __gc class MessageEventSource : public StringField
  {
  public:
    static const int FIELD = 1011;
    MessageEventSource() : StringField(1011) {}
    MessageEventSource(String* data) : StringField(1011, data) {}
  };

  public __gc class CollInquiryID : public StringField
  {
  public:
    static const int FIELD = 909;
    CollInquiryID() : StringField(909) {}
    CollInquiryID(String* data) : StringField(909, data) {}
  };

  public __gc class UnderlyingStartValue : public DoubleField
  {
  public:
    static const int FIELD = 884;
    UnderlyingStartValue() : DoubleField(884) {}
    UnderlyingStartValue(double data) : DoubleField(884, data) {}
    UnderlyingStartValue(double data, int decimalPadding) : DoubleField(884, data, decimalPadding) {}
  };

  public __gc class LastLiquidityInd : public IntField
  {
  public:
    static const int FIELD = 851;
    static const int ADDEDLIQUIDITY = 1;
    static const int LIQUIDITY_ROUTED_OUT = 3;
    static const int LIQUIDITYROUTEDOUT = 3;
    static const int AUCTION = 4;
    static const int REMOVEDLIQUIDITY = 2;
    static const int ADDED_LIQUIDITY = 1;
    static const int REMOVED_LIQUIDITY = 2;
    LastLiquidityInd() : IntField(851) {}
    LastLiquidityInd(int data) : IntField(851, data) {}
  };

  public __gc class SecurityID : public StringField
  {
  public:
    static const int FIELD = 48;
    SecurityID() : StringField(48) {}
    SecurityID(String* data) : StringField(48, data) {}
  };

  public __gc class NoMDEntries : public IntField
  {
  public:
    static const int FIELD = 268;
    NoMDEntries() : IntField(268) {}
    NoMDEntries(int data) : IntField(268, data) {}
  };

  public __gc class NoPartyListResponseTypes : public IntField
  {
  public:
    static const int FIELD = 1506;
    NoPartyListResponseTypes() : IntField(1506) {}
    NoPartyListResponseTypes(int data) : IntField(1506, data) {}
  };

  public __gc class StrikePriceDeterminationMethod : public IntField
  {
  public:
    static const int FIELD = 1478;
    static const int STRIKE_SET_TO_AVERAGE_OF_UNDERLYING_SETTLEMENT_PRICE_ACROSS_THE_LIFE_OF_THE_OPTION = 3;
    static const int STRIKE_SET_AT_EXPIRATION_TO_UNDERLYING_OR_OTHER_VALUE = 2;
    static const int FIXED_STRIKE = 1;
    static const int STRIKE_SET_TO_OPTIMAL_VALUE = 4;
    StrikePriceDeterminationMethod() : IntField(1478) {}
    StrikePriceDeterminationMethod(int data) : IntField(1478, data) {}
  };

  public __gc class EndDate : public StringField
  {
  public:
    static const int FIELD = 917;
    EndDate() : StringField(917) {}
    EndDate(String* data) : StringField(917, data) {}
  };

  public __gc class CashOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 901;
    CashOutstanding() : DoubleField(901) {}
    CashOutstanding(double data) : DoubleField(901, data) {}
    CashOutstanding(double data, int decimalPadding) : DoubleField(901, data, decimalPadding) {}
  };

  public __gc class MDReqID : public StringField
  {
  public:
    static const int FIELD = 262;
    MDReqID() : StringField(262) {}
    MDReqID(String* data) : StringField(262, data) {}
  };

  public __gc class IOIRefID : public StringField
  {
  public:
    static const int FIELD = 26;
    IOIRefID() : StringField(26) {}
    IOIRefID(String* data) : StringField(26, data) {}
  };

  public __gc class NoContextPartyIDs : public IntField
  {
  public:
    static const int FIELD = 1522;
    NoContextPartyIDs() : IntField(1522) {}
    NoContextPartyIDs(int data) : IntField(1522, data) {}
  };

  public __gc class TargetStrategy : public IntField
  {
  public:
    static const int FIELD = 847;
    static const int MININIZEMARKETIMPACT = 3;
    static const int RESERVEDANDAVAILABLEFORBILATERALLYAGREEDUPONUSERDEFINEDVALUES = 1000;
    static const int PARTICIPATE = 2;
    static const int MININIZE_MARKET_IMPACT = 3;
    static const int VWAP = 1;
    TargetStrategy() : IntField(847) {}
    TargetStrategy(int data) : IntField(847, data) {}
  };

  public __gc class ConfirmRefID : public StringField
  {
  public:
    static const int FIELD = 772;
    ConfirmRefID() : StringField(772) {}
    ConfirmRefID(String* data) : StringField(772, data) {}
  };

  public __gc class SellerDays : public IntField
  {
  public:
    static const int FIELD = 287;
    SellerDays() : IntField(287) {}
    SellerDays(int data) : IntField(287, data) {}
  };

  public __gc class DueToRelated : public BooleanField
  {
  public:
    static const int FIELD = 329;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    DueToRelated() : BooleanField(329) {}
    DueToRelated(bool data) : BooleanField(329, data) {}
  };

  public __gc class SecondaryTradingReferencePrice : public DoubleField
  {
  public:
    static const int FIELD = 1240;
    SecondaryTradingReferencePrice() : DoubleField(1240) {}
    SecondaryTradingReferencePrice(double data) : DoubleField(1240, data) {}
    SecondaryTradingReferencePrice(double data, int decimalPadding) : DoubleField(1240, data, decimalPadding) {}
  };

  public __gc class NoMDFeedTypes : public IntField
  {
  public:
    static const int FIELD = 1141;
    NoMDFeedTypes() : IntField(1141) {}
    NoMDFeedTypes(int data) : IntField(1141, data) {}
  };

  public __gc class UnderlyingInstrumentPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1064;
    UnderlyingInstrumentPartySubIDType() : IntField(1064) {}
    UnderlyingInstrumentPartySubIDType(int data) : IntField(1064, data) {}
  };

  public __gc class TradSesCloseTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 344;
    TradSesCloseTime() : UtcTimeStampField(344) {}
    TradSesCloseTime(DateTime data) : UtcTimeStampField(344, data) {}
  };

  public __gc class ContractSettlMonth : public StringField
  {
  public:
    static const int FIELD = 667;
    ContractSettlMonth() : StringField(667) {}
    ContractSettlMonth(String* data) : StringField(667, data) {}
  };

  public __gc class DerivativeStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 1261;
    DerivativeStrikePrice() : DoubleField(1261) {}
    DerivativeStrikePrice(double data) : DoubleField(1261, data) {}
    DerivativeStrikePrice(double data, int decimalPadding) : DoubleField(1261, data, decimalPadding) {}
  };

  public __gc class TriggerSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1106;
    TriggerSecurityDesc() : StringField(1106) {}
    TriggerSecurityDesc(String* data) : StringField(1106, data) {}
  };

  public __gc class UnderlyingCashType : public StringField
  {
  public:
    static const int FIELD = 974;
    static const String* DIFF = "DIFF";
    static const String* FIXED = "FIXED";
    UnderlyingCashType() : StringField(974) {}
    UnderlyingCashType(String* data) : StringField(974, data) {}
  };

  public __gc class NoMiscFees : public IntField
  {
  public:
    static const int FIELD = 136;
    NoMiscFees() : IntField(136) {}
    NoMiscFees(int data) : IntField(136, data) {}
  };

  public __gc class CustOrderCapacity : public IntField
  {
  public:
    static const int FIELD = 582;
    static const int CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = 2;
    static const int MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = 1;
    static const int MEMBER_TRADING_FOR_ANOTHER_MEMBER = 3;
    static const int ALL_OTHER = 4;
    CustOrderCapacity() : IntField(582) {}
    CustOrderCapacity(int data) : IntField(582, data) {}
  };

  public __gc class RiskSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 1616;
    RiskSecurityExchange() : StringField(1616) {}
    RiskSecurityExchange(String* data) : StringField(1616, data) {}
  };

  public __gc class LegAllocSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 1367;
    LegAllocSettlCurrency() : StringField(1367) {}
    LegAllocSettlCurrency(String* data) : StringField(1367, data) {}
  };

  public __gc class UnderlyingAdjustedQuantity : public DoubleField
  {
  public:
    static const int FIELD = 1044;
    UnderlyingAdjustedQuantity() : DoubleField(1044) {}
    UnderlyingAdjustedQuantity(double data) : DoubleField(1044, data) {}
    UnderlyingAdjustedQuantity(double data, int decimalPadding) : DoubleField(1044, data, decimalPadding) {}
  };

  public __gc class OwnershipType : public CharField
  {
  public:
    static const int FIELD = 517;
    static const __wchar_t JOINT_TRUSTEES = '2';
    static const __wchar_t JOINT_INVESTORS = 'J';
    static const __wchar_t TENANTS_IN_COMMON = 'T';
    OwnershipType() : CharField(517) {}
    OwnershipType(__wchar_t data) : CharField(517, data) {}
  };

  public __gc class MaxShow : public DoubleField
  {
  public:
    static const int FIELD = 210;
    MaxShow() : DoubleField(210) {}
    MaxShow(double data) : DoubleField(210, data) {}
    MaxShow(double data, int decimalPadding) : DoubleField(210, data, decimalPadding) {}
  };

  public __gc class LegSecurityID : public StringField
  {
  public:
    static const int FIELD = 602;
    LegSecurityID() : StringField(602) {}
    LegSecurityID(String* data) : StringField(602, data) {}
  };

  public __gc class EncodedSymbol : public StringField
  {
  public:
    static const int FIELD = 1360;
    EncodedSymbol() : StringField(1360) {}
    EncodedSymbol(String* data) : StringField(1360, data) {}
  };

  public __gc class DerivativeSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1279;
    DerivativeSecurityDesc() : StringField(1279) {}
    DerivativeSecurityDesc(String* data) : StringField(1279, data) {}
  };

  public __gc class UnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 996;
    static const String* US_DOLLARS = "USD";
    static const String* TROY_OUNCES = "oz_tr";
    static const String* TONS = "tn";
    static const String* BILLION_CUBIC_FEET = "Bcf";
    static const String* ONE_MILLION_BTU = "MMBtu";
    static const String* MEGAWATT_HOURS = "MWh";
    static const String* MILLION_BARRELS = "MMbbl";
    static const String* GALLONS = "Gal";
    static const String* BARRELS = "Bbl";
    static const String* POUNDS = "lbs";
    static const String* METRIC_TONS = "t";
    static const String* ALLOWANCES = "Alw";
    static const String* BUSHELS = "Bu";
    UnitOfMeasure() : StringField(996) {}
    UnitOfMeasure(String* data) : StringField(996, data) {}
  };

  public __gc class SecDefStatus : public IntField
  {
  public:
    static const int FIELD = 653;
    static const int INVALID_DEFINITION_REQUEST = 4;
    static const int PENDING_APPROVAL = 0;
    static const int APPROVED = 1;
    static const int UNAUTHORIZEDREQUEST = 3;
    static const int PENDINGAPPROVAL = 0;
    static const int UNAUTHORIZED_REQUEST = 3;
    static const int INVALIDDEFINITIONREQUEST = 4;
    static const int APPROVEDACCEPTED = 1;
    static const int REJECTED = 2;
    SecDefStatus() : IntField(653) {}
    SecDefStatus(int data) : IntField(653, data) {}
  };

  public __gc class Quantity : public DoubleField
  {
  public:
    static const int FIELD = 53;
    Quantity() : DoubleField(53) {}
    Quantity(double data) : DoubleField(53, data) {}
    Quantity(double data, int decimalPadding) : DoubleField(53, data, decimalPadding) {}
  };

  public __gc class NewsID : public StringField
  {
  public:
    static const int FIELD = 1472;
    NewsID() : StringField(1472) {}
    NewsID(String* data) : StringField(1472, data) {}
  };

  public __gc class UndlyInstrumentPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1064;
    UndlyInstrumentPartySubIDType() : IntField(1064) {}
    UndlyInstrumentPartySubIDType(int data) : IntField(1064, data) {}
  };

  public __gc class SettleOnOpenFlag : public StringField
  {
  public:
    static const int FIELD = 966;
    SettleOnOpenFlag() : StringField(966) {}
    SettleOnOpenFlag(String* data) : StringField(966, data) {}
  };

  public __gc class LastUpdateTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 779;
    LastUpdateTime() : UtcTimeStampField(779) {}
    LastUpdateTime(DateTime data) : UtcTimeStampField(779, data) {}
  };

  public __gc class RepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 227;
    RepurchaseRate() : DoubleField(227) {}
    RepurchaseRate(double data) : DoubleField(227, data) {}
    RepurchaseRate(double data, int decimalPadding) : DoubleField(227, data, decimalPadding) {}
  };

  public __gc class RepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 226;
    RepurchaseTerm() : IntField(226) {}
    RepurchaseTerm(int data) : IntField(226, data) {}
  };

  public __gc class NestedPartyRole : public IntField
  {
  public:
    static const int FIELD = 538;
    NestedPartyRole() : IntField(538) {}
    NestedPartyRole(int data) : IntField(538, data) {}
  };

  public __gc class SecondaryExecID : public StringField
  {
  public:
    static const int FIELD = 527;
    SecondaryExecID() : StringField(527) {}
    SecondaryExecID(String* data) : StringField(527, data) {}
  };

  public __gc class Pool : public StringField
  {
  public:
    static const int FIELD = 691;
    Pool() : StringField(691) {}
    Pool(String* data) : StringField(691, data) {}
  };

  public __gc class NoTickRules : public IntField
  {
  public:
    static const int FIELD = 1205;
    NoTickRules() : IntField(1205) {}
    NoTickRules(int data) : IntField(1205, data) {}
  };

  public __gc class Volatility : public DoubleField
  {
  public:
    static const int FIELD = 1188;
    Volatility() : DoubleField(1188) {}
    Volatility(double data) : DoubleField(1188, data) {}
    Volatility(double data, int decimalPadding) : DoubleField(1188, data, decimalPadding) {}
  };

  public __gc class PctAtRisk : public DoubleField
  {
  public:
    static const int FIELD = 869;
    PctAtRisk() : DoubleField(869) {}
    PctAtRisk(double data) : DoubleField(869, data) {}
    PctAtRisk(double data, int decimalPadding) : DoubleField(869, data, decimalPadding) {}
  };

  public __gc class UnderlyingSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 308;
    UnderlyingSecurityExchange() : StringField(308) {}
    UnderlyingSecurityExchange(String* data) : StringField(308, data) {}
  };

  public __gc class LegStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 612;
    LegStrikePrice() : DoubleField(612) {}
    LegStrikePrice(double data) : DoubleField(612, data) {}
    LegStrikePrice(double data, int decimalPadding) : DoubleField(612, data, decimalPadding) {}
  };

  public __gc class SettlmntTyp : public CharField
  {
  public:
    static const int FIELD = 63;
    static const __wchar_t WHEN_AND_IF_ISSUED = '7';
    static const __wchar_t T_PLUS_1 = 'A';
    static const __wchar_t FUTURE = '6';
    static const __wchar_t SELLERS_OPTION = '8';
    static const __wchar_t T_PLUS_2 = '3';
    static const __wchar_t T_PLUS_3 = '4';
    static const __wchar_t T_PLUS_4 = '5';
    static const __wchar_t REGULAR = '0';
    static const __wchar_t T_PLUS_5 = '9';
    static const __wchar_t WHEN_ISSUED = '7';
    static const __wchar_t NEXT_DAY = '2';
    static const __wchar_t CASH = '1';
    SettlmntTyp() : CharField(63) {}
    SettlmntTyp(__wchar_t data) : CharField(63, data) {}
  };

  public __gc class TradePublishIndicator : public IntField
  {
  public:
    static const int FIELD = 1390;
    static const int DO_NOT_PUBLISH_TRADE = 0;
    static const int DEFERRED_PUBLICATION = 2;
    static const int PUBLISH_TRADE = 1;
    TradePublishIndicator() : IntField(1390) {}
    TradePublishIndicator(int data) : IntField(1390, data) {}
  };

  public __gc class ApplResponseType : public IntField
  {
  public:
    static const int FIELD = 1348;
    static const int MESSAGES_NOT_AVAILABLE = 2;
    static const int APPLICATION_DOES_NOT_EXIST = 1;
    static const int REQUEST_SUCCESSFULLY_PROCESSED = 0;
    ApplResponseType() : IntField(1348) {}
    ApplResponseType(int data) : IntField(1348, data) {}
  };

  public __gc class MDSubBookType : public IntField
  {
  public:
    static const int FIELD = 1173;
    MDSubBookType() : IntField(1173) {}
    MDSubBookType(int data) : IntField(1173, data) {}
  };

  public __gc class Username : public StringField
  {
  public:
    static const int FIELD = 553;
    Username() : StringField(553) {}
    Username(String* data) : StringField(553, data) {}
  };

  public __gc class StandInstDbType : public IntField
  {
  public:
    static const int FIELD = 169;
    static const int SID = 1;
    static const int DTC_SID = 1;
    static const int CUSTODIAN = 3;
    static const int ALERT = 2;
    static const int ACCOUNTNET = 4;
    static const int A_GLOBAL_CUSTODIAN = 3;
    static const int THOMSON_ALERT = 2;
    static const int OTHER = 0;
    StandInstDbType() : IntField(169) {}
    StandInstDbType(int data) : IntField(169, data) {}
  };

  public __gc class RelatedContextPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1577;
    RelatedContextPartyIDSource() : CharField(1577) {}
    RelatedContextPartyIDSource(__wchar_t data) : CharField(1577, data) {}
  };

  public __gc class QuoteEntryStatus : public IntField
  {
  public:
    static const int FIELD = 1167;
    static const int CROSS_MARKET_WARNING = 13;
    static const int LOCKED_MARKET_WARNING = 12;
    static const int CANCELED_DUE_TO_CROSS_MARKET = 15;
    static const int CANCELED_DUE_TO_LOCK_MARKET = 14;
    static const int REJECTED = 5;
    static const int EXPIRED = 7;
    static const int REMOVED_FROM_MARKET = 6;
    static const int ACCEPTED = 0;
    static const int ACTIVE = 16;
    QuoteEntryStatus() : IntField(1167) {}
    QuoteEntryStatus(int data) : IntField(1167, data) {}
  };

  public __gc class TriggerPriceType : public CharField
  {
  public:
    static const int FIELD = 1107;
    static const __wchar_t BEST_MID = '6';
    static const __wchar_t BEST_BID_OR_LAST_TRADE = '4';
    static const __wchar_t BEST_BID = '3';
    static const __wchar_t BEST_OFFER_OR_LAST_TRADE = '5';
    static const __wchar_t BEST_OFFER = '1';
    static const __wchar_t LAST_TRADE = '2';
    TriggerPriceType() : CharField(1107) {}
    TriggerPriceType(__wchar_t data) : CharField(1107, data) {}
  };

  public __gc class SideTrdSubTyp : public IntField
  {
  public:
    static const int FIELD = 1008;
    static const int EXTERNAL_TRANSFER = 2;
    static const int TRANSACTION_FROM_ASSIGNMENT = 10;
    static const int TRANSACTION_FROM_EXERCISE = 9;
    static const int DIFFERENTIAL_SPREAD = 7;
    static const int ONSET_DUE_TO_AN_ALLOCATION = 6;
    static const int REJECT_FOR_SUBMITTING_TRADE = 3;
    static const int CMTA = 0;
    static const int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8;
    static const int INTERNAL_TRANSFER = 1;
    static const int OFFSET_DUE_TO_AN_ALLOCATION = 5;
    static const int ADVISORY_FOR_CONTRA_SIDE = 4;
    SideTrdSubTyp() : IntField(1008) {}
    SideTrdSubTyp(int data) : IntField(1008, data) {}
  };

  public __gc class UnderlyingTradingSessionSubID : public StringField
  {
  public:
    static const int FIELD = 823;
    UnderlyingTradingSessionSubID() : StringField(823) {}
    UnderlyingTradingSessionSubID(String* data) : StringField(823, data) {}
  };

  public __gc class SettlInstReqRejCode : public IntField
  {
  public:
    static const int FIELD = 792;
    static const int UNABLE_TO_PROCESS_REQUEST = 0;
    static const int NOMATCHINGSETTLEMENTINSTRUCTIONSFOUND = 2;
    static const int UNKNOWNACCOUNT = 1;
    static const int UNABLETOPROCESSREQUEST = 0;
    static const int UNKNOWN_ACCOUNT = 1;
    static const int NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND = 2;
    static const int OTHER = 99;
    SettlInstReqRejCode() : IntField(792) {}
    SettlInstReqRejCode(int data) : IntField(792, data) {}
  };

  public __gc class MktBidPx : public DoubleField
  {
  public:
    static const int FIELD = 645;
    MktBidPx() : DoubleField(645) {}
    MktBidPx(double data) : DoubleField(645, data) {}
    MktBidPx(double data, int decimalPadding) : DoubleField(645, data, decimalPadding) {}
  };

  public __gc class UnderlyingLegSymbol : public StringField
  {
  public:
    static const int FIELD = 1330;
    UnderlyingLegSymbol() : StringField(1330) {}
    UnderlyingLegSymbol(String* data) : StringField(1330, data) {}
  };

  public __gc class StrikeValue : public DoubleField
  {
  public:
    static const int FIELD = 968;
    StrikeValue() : DoubleField(968) {}
    StrikeValue(double data) : DoubleField(968, data) {}
    StrikeValue(double data, int decimalPadding) : DoubleField(968, data, decimalPadding) {}
  };

  public __gc class Urgency : public CharField
  {
  public:
    static const int FIELD = 61;
    static const __wchar_t FLASH = '1';
    static const __wchar_t NORMAL = '0';
    static const __wchar_t BACKGROUND = '2';
    Urgency() : CharField(61) {}
    Urgency(__wchar_t data) : CharField(61, data) {}
  };

  public __gc class AllocID : public StringField
  {
  public:
    static const int FIELD = 70;
    AllocID() : StringField(70) {}
    AllocID(String* data) : StringField(70, data) {}
  };

  public __gc class NoPartyList : public IntField
  {
  public:
    static const int FIELD = 1513;
    NoPartyList() : IntField(1513) {}
    NoPartyList(int data) : IntField(1513, data) {}
  };

  public __gc class UnderlyingDeliveryAmount : public DoubleField
  {
  public:
    static const int FIELD = 1037;
    UnderlyingDeliveryAmount() : DoubleField(1037) {}
    UnderlyingDeliveryAmount(double data) : DoubleField(1037, data) {}
    UnderlyingDeliveryAmount(double data, int decimalPadding) : DoubleField(1037, data, decimalPadding) {}
  };

  public __gc class SideQty : public IntField
  {
  public:
    static const int FIELD = 1009;
    SideQty() : IntField(1009) {}
    SideQty(int data) : IntField(1009, data) {}
  };

  public __gc class CollAsgnTransType : public IntField
  {
  public:
    static const int FIELD = 903;
    static const int REPLACE = 1;
    static const int NEW = 0;
    static const int REVERSE = 4;
    static const int CANCEL = 2;
    static const int RELEASE = 3;
    CollAsgnTransType() : IntField(903) {}
    CollAsgnTransType(int data) : IntField(903, data) {}
  };

  public __gc class ThresholdAmount : public DoubleField
  {
  public:
    static const int FIELD = 834;
    ThresholdAmount() : DoubleField(834) {}
    ThresholdAmount(double data) : DoubleField(834, data) {}
    ThresholdAmount(double data, int decimalPadding) : DoubleField(834, data, decimalPadding) {}
  };

  public __gc class DefBidSize : public DoubleField
  {
  public:
    static const int FIELD = 293;
    DefBidSize() : DoubleField(293) {}
    DefBidSize(double data) : DoubleField(293, data) {}
    DefBidSize(double data, int decimalPadding) : DoubleField(293, data, decimalPadding) {}
  };

  public __gc class LegStateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 597;
    LegStateOrProvinceOfIssue() : StringField(597) {}
    LegStateOrProvinceOfIssue(String* data) : StringField(597, data) {}
  };

  public __gc class PaymentMethod : public IntField
  {
  public:
    static const int FIELD = 492;
    static const int FED_WIRE = 7;
    static const int ACHCREDIT = 13;
    static const int TELEGRAPHICTRANSFER = 6;
    static const int DIRECTDEBITBECS = 9;
    static const int EUROCLEAR = 3;
    static const int ACH_CREDIT = 13;
    static const int TELEGRAPHIC_TRANSFER = 6;
    static const int FEDWIRE = 7;
    static const int CREDITCARD = 11;
    static const int DIRECT_DEBIT = 9;
    static const int CREDIT_CARD = 11;
    static const int CHEQUE = 5;
    static const int DIRECT_CREDIT = 10;
    static const int CREST = 1;
    static const int HIGH_VALUE_CLEARING_SYSTEM = 15;
    static const int DEBITCARD = 8;
    static const int CLEARSTREAM = 4;
    static const int BPAY = 14;
    static const int HIGHVALUECLEARINGSYSTEMHVACS = 15;
    static const int NSCC = 2;
    static const int DEBIT_CARD = 8;
    static const int ACHDEBIT = 12;
    static const int DIRECTCREDITBECS = 10;
    static const int ACH_DEBIT = 12;
    PaymentMethod() : IntField(492) {}
    PaymentMethod(int data) : IntField(492, data) {}
  };

  public __gc class RiskCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 1555;
    RiskCouponRate() : DoubleField(1555) {}
    RiskCouponRate(double data) : DoubleField(1555, data) {}
    RiskCouponRate(double data, int decimalPadding) : DoubleField(1555, data, decimalPadding) {}
  };

  public __gc class UnderlyingLegOptAttribute : public CharField
  {
  public:
    static const int FIELD = 1391;
    UnderlyingLegOptAttribute() : CharField(1391) {}
    UnderlyingLegOptAttribute(__wchar_t data) : CharField(1391, data) {}
  };

  public __gc class LegVolatility : public DoubleField
  {
  public:
    static const int FIELD = 1379;
    LegVolatility() : DoubleField(1379) {}
    LegVolatility(double data) : DoubleField(1379, data) {}
    LegVolatility(double data, int decimalPadding) : DoubleField(1379, data, decimalPadding) {}
  };

  public __gc class DerivativeInstrAttribType : public IntField
  {
  public:
    static const int FIELD = 1313;
    DerivativeInstrAttribType() : IntField(1313) {}
    DerivativeInstrAttribType(int data) : IntField(1313, data) {}
  };

  public __gc class DerivativeUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1270;
    DerivativeUnitOfMeasureQty() : DoubleField(1270) {}
    DerivativeUnitOfMeasureQty(double data) : DoubleField(1270, data) {}
    DerivativeUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1270, data, decimalPadding) {}
  };

  public __gc class NoStatsIndicators : public IntField
  {
  public:
    static const int FIELD = 1175;
    NoStatsIndicators() : IntField(1175) {}
    NoStatsIndicators(int data) : IntField(1175, data) {}
  };

  public __gc class TriggerPriceTypeScope : public CharField
  {
  public:
    static const int FIELD = 1108;
    static const __wchar_t LOCAL = '1';
    static const __wchar_t NONE = '0';
    static const __wchar_t GLOBAL = '3';
    static const __wchar_t NATIONAL = '2';
    TriggerPriceTypeScope() : CharField(1108) {}
    TriggerPriceTypeScope(__wchar_t data) : CharField(1108, data) {}
  };

  public __gc class LastNetworkResponseID : public StringField
  {
  public:
    static const int FIELD = 934;
    LastNetworkResponseID() : StringField(934) {}
    LastNetworkResponseID(String* data) : StringField(934, data) {}
  };

  public __gc class UnderlyingSettlPriceType : public IntField
  {
  public:
    static const int FIELD = 733;
    UnderlyingSettlPriceType() : IntField(733) {}
    UnderlyingSettlPriceType(int data) : IntField(733, data) {}
  };

  public __gc class ApplReportID : public StringField
  {
  public:
    static const int FIELD = 1356;
    ApplReportID() : StringField(1356) {}
    ApplReportID(String* data) : StringField(1356, data) {}
  };

  public __gc class PegLimitType : public IntField
  {
  public:
    static const int FIELD = 837;
    static const int STRICT = 1;
    static const int ORWORSE = 2;
    static const int OR_BETTER = 0;
    static const int OR_WORSE = 2;
    static const int ORBETTER = 0;
    PegLimitType() : IntField(837) {}
    PegLimitType(int data) : IntField(837, data) {}
  };

  public __gc class ExecID : public StringField
  {
  public:
    static const int FIELD = 17;
    ExecID() : StringField(17) {}
    ExecID(String* data) : StringField(17, data) {}
  };

  public __gc class Side : public CharField
  {
  public:
    static const int FIELD = 54;
    static const __wchar_t BORROW = 'G';
    static const __wchar_t SELLPLUS = '4';
    static const __wchar_t BUY_MINUS = '3';
    static const __wchar_t BUYMIN = '3';
    static const __wchar_t ASDEFINED = 'B';
    static const __wchar_t SUBSCRIBE = 'D';
    static const __wchar_t CROSS_SHORT_EXEMPT = 'A';
    static const __wchar_t UNDISCLOSED = '7';
    static const __wchar_t SELLSHT = '5';
    static const __wchar_t SELLSHTEX = '6';
    static const __wchar_t CROSSSHORTEX = 'A';
    static const __wchar_t CROSS = '8';
    static const __wchar_t SELL_SHORT_EXEMPT = '6';
    static const __wchar_t UNDISC = '7';
    static const __wchar_t CROSSSHORT = '9';
    static const __wchar_t BORROWFINANCING = 'G';
    static const __wchar_t BUY = '1';
    static const __wchar_t CROSS_SHORT_EXXMPT = 'A';
    static const __wchar_t SELL = '2';
    static const __wchar_t LEND = 'F';
    static const __wchar_t SELL_SHORT = '5';
    static const __wchar_t OPPOSITE = 'C';
    static const __wchar_t CROSS_SHORT = '9';
    static const __wchar_t SELL_PLUS = '4';
    static const __wchar_t REDEEM = 'E';
    static const __wchar_t LENDFINANCING = 'F';
    static const __wchar_t AS_DEFINED = 'B';
    Side() : CharField(54) {}
    Side(__wchar_t data) : CharField(54, data) {}
  };

  public __gc class UnderlyingLastPx : public DoubleField
  {
  public:
    static const int FIELD = 651;
    UnderlyingLastPx() : DoubleField(651) {}
    UnderlyingLastPx(double data) : DoubleField(651, data) {}
    UnderlyingLastPx(double data, int decimalPadding) : DoubleField(651, data, decimalPadding) {}
  };

  public __gc class MarketDepth : public IntField
  {
  public:
    static const int FIELD = 264;
    MarketDepth() : IntField(264) {}
    MarketDepth(int data) : IntField(264, data) {}
  };

  public __gc class DiscretionOffset : public DoubleField
  {
  public:
    static const int FIELD = 389;
    DiscretionOffset() : DoubleField(389) {}
    DiscretionOffset(double data) : DoubleField(389, data) {}
    DiscretionOffset(double data, int decimalPadding) : DoubleField(389, data, decimalPadding) {}
  };

  public __gc class ContAmtType : public IntField
  {
  public:
    static const int FIELD = 519;
    static const int COMMISSIONAMT = 1;
    static const int FUNDBASEDRENEWALCOMM = 11;
    static const int INITIALCHARGEPCT = 4;
    static const int EXITCHARGEAMT = 9;
    static const int EXIT_CHARGE = 10;
    static const int DILUTION_LEVY_AMOUNT = 7;
    static const int DILUTION_LEVY_PERCENT = 8;
    static const int DISCOUNT_AMOUNT = 5;
    static const int COMMISSION = 2;
    static const int INITIAL_CHARGE_PERCENT = 4;
    static const int DILUTIONLEVYAMT = 7;
    static const int DILUTION_LEVY = 8;
    static const int COMMISSION_AMOUNT = 1;
    static const int NET_SETTLEMENT_AMOUNT = 15;
    static const int EXITCHARGEPCT = 10;
    static const int COMMISSIONPCT = 2;
    static const int FUND_BASED_RENEWAL_COMMISSION = 11;
    static const int DISCOUNT = 6;
    static const int FUNDBASEDRENEWALCOMMAMTORD = 13;
    static const int DISCOUNTPCT = 6;
    static const int FUND_BASED_RENEWAL_COMMISSION_AMOUNT_13 = 13;
    static const int EXIT_CHARGE_AMOUNT = 9;
    static const int INITIAL_CHARGE = 4;
    static const int EXIT_CHARGE_PERCENT = 10;
    static const int DISCOUNT_PERCENT = 6;
    static const int INITIALCHARGEAMT = 3;
    static const int DILUTIONLEVYPCT = 8;
    static const int FUND_BASED_RENEWAL_COMMISSION_AMOUNT_14 = 14;
    static const int FUNDBASEDRENEWALCOMMAMTPROJ = 14;
    static const int NETSETTLEMENTAMOUNT = 15;
    static const int PROJECTEDFUNDVALUE = 12;
    static const int DISCOUNTAMT = 5;
    static const int FUND_BASED_RENEWAL_COMMISSION_PERCENT = 11;
    static const int COMMISSION_PERCENT = 2;
    static const int PROJECTED_FUND_VALUE = 12;
    static const int INITIAL_CHARGE_AMOUNT = 3;
    ContAmtType() : IntField(519) {}
    ContAmtType(int data) : IntField(519, data) {}
  };

  public __gc class MiscFeeCurr : public StringField
  {
  public:
    static const int FIELD = 138;
    MiscFeeCurr() : StringField(138) {}
    MiscFeeCurr(String* data) : StringField(138, data) {}
  };

  public __gc class NoRiskLimits : public IntField
  {
  public:
    static const int FIELD = 1529;
    NoRiskLimits() : IntField(1529) {}
    NoRiskLimits(int data) : IntField(1529, data) {}
  };

  public __gc class AttachmentPoint : public DoubleField
  {
  public:
    static const int FIELD = 1457;
    AttachmentPoint() : DoubleField(1457) {}
    AttachmentPoint(double data) : DoubleField(1457, data) {}
    AttachmentPoint(double data, int decimalPadding) : DoubleField(1457, data, decimalPadding) {}
  };

  public __gc class OrderCategory : public CharField
  {
  public:
    static const int FIELD = 1115;
    static const __wchar_t IMPLIED_ORDER = '7';
    static const __wchar_t STREAMING_PRICE = '9';
    static const __wchar_t QUOTE_REQUEST = '6';
    static const __wchar_t CROSS_ORDER = '8';
    static const __wchar_t MULTILEG_ORDER = '4';
    static const __wchar_t PRIVATELY_NEGOTIATED_TRADE = '3';
    static const __wchar_t QUOTE = '2';
    static const __wchar_t ORDER = '1';
    static const __wchar_t LINKED_ORDER = '5';
    OrderCategory() : CharField(1115) {}
    OrderCategory(__wchar_t data) : CharField(1115, data) {}
  };

  public __gc class AdvTransType : public StringField
  {
  public:
    static const int FIELD = 5;
    static const String* REPLACE = "R";
    static const String* NEW = "N";
    static const String* ADVCANCEL = "C";
    static const String* ADVREPLACE = "R";
    static const String* ADVNEW = "N";
    static const String* CANCEL = "C";
    AdvTransType() : StringField(5) {}
    AdvTransType(String* data) : StringField(5, data) {}
  };

  public __gc class WtAverageLiquidity : public DoubleField
  {
  public:
    static const int FIELD = 410;
    WtAverageLiquidity() : DoubleField(410) {}
    WtAverageLiquidity(double data) : DoubleField(410, data) {}
    WtAverageLiquidity(double data, int decimalPadding) : DoubleField(410, data, decimalPadding) {}
  };

  public __gc class QuoteSetValidUntilTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 367;
    QuoteSetValidUntilTime() : UtcTimeStampField(367) {}
    QuoteSetValidUntilTime(DateTime data) : UtcTimeStampField(367, data) {}
  };

  public __gc class NoNested4PartyIDs : public IntField
  {
  public:
    static const int FIELD = 1414;
    NoNested4PartyIDs() : IntField(1414) {}
    NoNested4PartyIDs(int data) : IntField(1414, data) {}
  };

  public __gc class LegPutOrCall : public IntField
  {
  public:
    static const int FIELD = 1358;
    LegPutOrCall() : IntField(1358) {}
    LegPutOrCall(int data) : IntField(1358, data) {}
  };

  public __gc class UserStatusText : public StringField
  {
  public:
    static const int FIELD = 927;
    UserStatusText() : StringField(927) {}
    UserStatusText(String* data) : StringField(927, data) {}
  };

  public __gc class Nested2PartySubID : public StringField
  {
  public:
    static const int FIELD = 760;
    Nested2PartySubID() : StringField(760) {}
    Nested2PartySubID(String* data) : StringField(760, data) {}
  };

  public __gc class EFPTrackingError : public DoubleField
  {
  public:
    static const int FIELD = 405;
    EFPTrackingError() : DoubleField(405) {}
    EFPTrackingError(double data) : DoubleField(405, data) {}
    EFPTrackingError(double data, int decimalPadding) : DoubleField(405, data, decimalPadding) {}
  };

  public __gc class SideLiquidityInd : public IntField
  {
  public:
    static const int FIELD = 1444;
    SideLiquidityInd() : IntField(1444) {}
    SideLiquidityInd(int data) : IntField(1444, data) {}
  };

  public __gc class DerivativeMinPriceIncrement : public DoubleField
  {
  public:
    static const int FIELD = 1267;
    DerivativeMinPriceIncrement() : DoubleField(1267) {}
    DerivativeMinPriceIncrement(double data) : DoubleField(1267, data) {}
    DerivativeMinPriceIncrement(double data, int decimalPadding) : DoubleField(1267, data, decimalPadding) {}
  };

  public __gc class PublishTrdIndicator : public BooleanField
  {
  public:
    static const int FIELD = 852;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PublishTrdIndicator() : BooleanField(852) {}
    PublishTrdIndicator(bool data) : BooleanField(852, data) {}
  };

  public __gc class InvestorCountryOfResidence : public StringField
  {
  public:
    static const int FIELD = 475;
    InvestorCountryOfResidence() : StringField(475) {}
    InvestorCountryOfResidence(String* data) : StringField(475, data) {}
  };

  public __gc class SideReasonCd : public StringField
  {
  public:
    static const int FIELD = 1007;
    SideReasonCd() : StringField(1007) {}
    SideReasonCd(String* data) : StringField(1007, data) {}
  };

  public __gc class MinPriceIncrement : public DoubleField
  {
  public:
    static const int FIELD = 969;
    MinPriceIncrement() : DoubleField(969) {}
    MinPriceIncrement(double data) : DoubleField(969, data) {}
    MinPriceIncrement(double data, int decimalPadding) : DoubleField(969, data, decimalPadding) {}
  };

  public __gc class SecuritySettlAgentContactName : public StringField
  {
  public:
    static const int FIELD = 180;
    SecuritySettlAgentContactName() : StringField(180) {}
    SecuritySettlAgentContactName(String* data) : StringField(180, data) {}
  };

  public __gc class SecurityResponseType : public IntField
  {
  public:
    static const int FIELD = 323;
    static const int ACCPTSECPROPREV = 2;
    static const int SECLISTTYPESRET = 3;
    static const int LIST_OF_SECURITIES_RETURNED_PER_REQUEST = 4;
    static const int LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST = 3;
    static const int ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = 2;
    static const int ACCEPT_SECURITY_PROPOSAL_AS_IS = 1;
    static const int ACCPTSECPROP = 1;
    static const int REJECT_SECURITY_PROPOSAL = 5;
    static const int SECLISTRET = 4;
    static const int REJSECPROP = 5;
    static const int CAN_NOT_MATCH_SELECTION_CRITERIA = 6;
    static const int CANNOT_MATCH_SELECTION_CRITERIA = 6;
    static const int NOMATCH = 6;
    SecurityResponseType() : IntField(323) {}
    SecurityResponseType(int data) : IntField(323, data) {}
  };

  public __gc class LegBenchmarkCurvePoint : public StringField
  {
  public:
    static const int FIELD = 678;
    LegBenchmarkCurvePoint() : StringField(678) {}
    LegBenchmarkCurvePoint(String* data) : StringField(678, data) {}
  };

  public __gc class ClearingFirm : public StringField
  {
  public:
    static const int FIELD = 439;
    ClearingFirm() : StringField(439) {}
    ClearingFirm(String* data) : StringField(439, data) {}
  };

  public __gc class RelationshipRiskSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1592;
    RelationshipRiskSecurityIDSource() : StringField(1592) {}
    RelationshipRiskSecurityIDSource(String* data) : StringField(1592, data) {}
  };

  public __gc class SessionStatus : public IntField
  {
  public:
    static const int FIELD = 1409;
    static const int PASSWORD_EXPIRED = 8;
    static const int SESSION_LOGOUT_COMPLETE = 4;
    static const int INVALID_USERNAME_OR_PASSWORD = 5;
    static const int SESSION_ACTIVE = 0;
    static const int SESSION_PASSWORD_CHANGED = 1;
    static const int ACCOUNT_LOCKED = 6;
    static const int LOGONS_ARE_NOT_ALLOWED_AT_THIS_TIME = 7;
    static const int SESSION_PASSWORD_DUE_TO_EXPIRE = 2;
    static const int NEW_SESSION_PASSWORD_DOES_NOT_COMPLY_WITH_POLICY = 3;
    SessionStatus() : IntField(1409) {}
    SessionStatus(int data) : IntField(1409, data) {}
  };

  public __gc class TriggerSecurityID : public StringField
  {
  public:
    static const int FIELD = 1104;
    TriggerSecurityID() : StringField(1104) {}
    TriggerSecurityID(String* data) : StringField(1104, data) {}
  };

  public __gc class TotNoAllocs : public IntField
  {
  public:
    static const int FIELD = 892;
    TotNoAllocs() : IntField(892) {}
    TotNoAllocs(int data) : IntField(892, data) {}
  };

  public __gc class NoAltMDSource : public IntField
  {
  public:
    static const int FIELD = 816;
    NoAltMDSource() : IntField(816) {}
    NoAltMDSource(int data) : IntField(816, data) {}
  };

  public __gc class AllocAccountType : public IntField
  {
  public:
    static const int FIELD = 798;
    static const int JBO = 8;
    static const int HOUSE_TRADER = 3;
    static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
    static const int FLOOR_TRADER = 4;
    static const int ACCOUNTISHOUSETRADERANDISCROSSMARGINED = 7;
    static const int ACCOUNTISCARRIEDONCUSTOMERSIDEOFBOOKS = 1;
    static const int JOINT_BACK_OFFICE_ACCOUNT = 8;
    static const int ACCOUNTISCARRIEDONNONCUSTOMERSIDEOFBOOKSANDISCROSSMARGINED = 6;
    static const int HOUSETRADER = 3;
    static const int FLOORTRADER = 4;
    static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
    static const int ACCOUNT_IS_CARRIED_PN_CUSTOMER_SIDE_OF_BOOKS = 1;
    static const int ACCOUNTISCARRIEDONNONCUSTOMERSIDEOFBOOKS = 2;
    static const int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
    AllocAccountType() : IntField(798) {}
    AllocAccountType(int data) : IntField(798, data) {}
  };

  public __gc class LastPx : public DoubleField
  {
  public:
    static const int FIELD = 31;
    LastPx() : DoubleField(31) {}
    LastPx(double data) : DoubleField(31, data) {}
    LastPx(double data, int decimalPadding) : DoubleField(31, data, decimalPadding) {}
  };

  public __gc class AllocTransType : public CharField
  {
  public:
    static const int FIELD = 71;
    static const __wchar_t REPLACE = '1';
    static const __wchar_t NEW = '0';
    static const __wchar_t CALCULATED = '4';
    static const __wchar_t PRELIMINARY = '3';
    static const __wchar_t CALCULATEDWITHOUTPRELIMINARY = '5';
    static const __wchar_t CANCEL = '2';
    static const __wchar_t REVERSAL = '6';
    static const __wchar_t CALCULATED_WITHOUT_PRELIMINARY = '5';
    AllocTransType() : CharField(71) {}
    AllocTransType(__wchar_t data) : CharField(71, data) {}
  };

  public __gc class TotNoQuoteEntries : public IntField
  {
  public:
    static const int FIELD = 304;
    TotNoQuoteEntries() : IntField(304) {}
    TotNoQuoteEntries(int data) : IntField(304, data) {}
  };

  public __gc class MinBidSize : public DoubleField
  {
  public:
    static const int FIELD = 647;
    MinBidSize() : DoubleField(647) {}
    MinBidSize(double data) : DoubleField(647, data) {}
    MinBidSize(double data, int decimalPadding) : DoubleField(647, data, decimalPadding) {}
  };

  public __gc class SettlBrkrCode : public StringField
  {
  public:
    static const int FIELD = 174;
    SettlBrkrCode() : StringField(174) {}
    SettlBrkrCode(String* data) : StringField(174, data) {}
  };

  public __gc class CardHolderName : public StringField
  {
  public:
    static const int FIELD = 488;
    CardHolderName() : StringField(488) {}
    CardHolderName(String* data) : StringField(488, data) {}
  };

  public __gc class ExpirationQtyType : public IntField
  {
  public:
    static const int FIELD = 982;
    static const int DIFFERENCE = 5;
    static const int FINAL_WILL_BE_EXERCISED = 3;
    static const int NON_AUTO_EXERCISE = 2;
    static const int CONTRARY_INTENTION = 4;
    static const int AUTO_EXERCISE = 1;
    ExpirationQtyType() : IntField(982) {}
    ExpirationQtyType(int data) : IntField(982, data) {}
  };

  public __gc class EncodedUnderlyingSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 364;
    EncodedUnderlyingSecurityDescLen() : IntField(364) {}
    EncodedUnderlyingSecurityDescLen(int data) : IntField(364, data) {}
  };

  public __gc class QuoteReqID : public StringField
  {
  public:
    static const int FIELD = 131;
    QuoteReqID() : StringField(131) {}
    QuoteReqID(String* data) : StringField(131, data) {}
  };

  public __gc class NoRelatedPartyAltSubIDs : public IntField
  {
  public:
    static const int FIELD = 1572;
    NoRelatedPartyAltSubIDs() : IntField(1572) {}
    NoRelatedPartyAltSubIDs(int data) : IntField(1572, data) {}
  };

  public __gc class RiskProduct : public IntField
  {
  public:
    static const int FIELD = 1543;
    RiskProduct() : IntField(1543) {}
    RiskProduct(int data) : IntField(1543, data) {}
  };

  public __gc class RiskSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 1542;
    RiskSecurityAltIDSource() : StringField(1542) {}
    RiskSecurityAltIDSource(String* data) : StringField(1542, data) {}
  };

  public __gc class PriceUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 1191;
    PriceUnitOfMeasure() : StringField(1191) {}
    PriceUnitOfMeasure(String* data) : StringField(1191, data) {}
  };

  public __gc class TZTransactTime : public StringField
  {
  public:
    static const int FIELD = 1132;
    TZTransactTime() : StringField(1132) {}
    TZTransactTime(String* data) : StringField(1132, data) {}
  };

  public __gc class AllocHandlInst : public IntField
  {
  public:
    static const int FIELD = 209;
    static const int FORWARDMATCH = 3;
    static const int FORWARD_AND_MATCH = 3;
    static const int FORWARD = 2;
    static const int MATCH = 1;
    AllocHandlInst() : IntField(209) {}
    AllocHandlInst(int data) : IntField(209, data) {}
  };

  public __gc class UnderlyingInstrumentPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1060;
    UnderlyingInstrumentPartyIDSource() : CharField(1060) {}
    UnderlyingInstrumentPartyIDSource(__wchar_t data) : CharField(1060, data) {}
  };

  public __gc class CurrencyRatio : public DoubleField
  {
  public:
    static const int FIELD = 1382;
    CurrencyRatio() : DoubleField(1382) {}
    CurrencyRatio(double data) : DoubleField(1382, data) {}
    CurrencyRatio(double data, int decimalPadding) : DoubleField(1382, data, decimalPadding) {}
  };

  public __gc class RefreshQty : public DoubleField
  {
  public:
    static const int FIELD = 1088;
    RefreshQty() : DoubleField(1088) {}
    RefreshQty(double data) : DoubleField(1088, data) {}
    RefreshQty(double data, int decimalPadding) : DoubleField(1088, data, decimalPadding) {}
  };

  public __gc class TradeRequestStatus : public IntField
  {
  public:
    static const int FIELD = 750;
    static const int COMPLETED = 1;
    static const int REJECTED = 2;
    static const int ACCEPTED = 0;
    TradeRequestStatus() : IntField(750) {}
    TradeRequestStatus(int data) : IntField(750, data) {}
  };

  public __gc class TrdRepIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1389;
    TrdRepIndicator() : BooleanField(1389) {}
    TrdRepIndicator(bool data) : BooleanField(1389, data) {}
  };

  public __gc class MiscFeeAmt : public DoubleField
  {
  public:
    static const int FIELD = 137;
    MiscFeeAmt() : DoubleField(137) {}
    MiscFeeAmt(double data) : DoubleField(137, data) {}
    MiscFeeAmt(double data, int decimalPadding) : DoubleField(137, data, decimalPadding) {}
  };

  public __gc class TradSesOpenTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 342;
    TradSesOpenTime() : UtcTimeStampField(342) {}
    TradSesOpenTime(DateTime data) : UtcTimeStampField(342, data) {}
  };

  public __gc class PreallocMethod : public CharField
  {
  public:
    static const int FIELD = 591;
    static const __wchar_t DO_NOT_PRO_RATA_DISCUSS_FIRST = '1';
    static const __wchar_t PRO_RATA = '0';
    static const __wchar_t DO_NOT_PRORATA_DISCUSS_FIRST = '1';
    static const __wchar_t DO_NOT_PRO_RATA = '1';
    static const __wchar_t PRORATA = '0';
    PreallocMethod() : CharField(591) {}
    PreallocMethod(__wchar_t data) : CharField(591, data) {}
  };

  public __gc class TaxAdvantageType : public IntField
  {
  public:
    static const int FIELD = 495;
    static const int ROTHIRANONPROTOTYPEUS = 25;
    static const int INDIVIDUALRETIREMENTACCOUNTROLLOVERUS = 17;
    static const int PROFITSHARINGPLANUS = 19;
    static const int SELF_DIRECTED_IRA = 21;
    static const int _401 = 20;
    static const int EMPLOYER_11 = 11;
    static const int _457US = 23;
    static const int EMPLOYER_12 = 12;
    static const int MINI_CASH_ISA = 3;
    static const int MINI_STOCKS_AND_SHARES_ISA = 4;
    static const int ROTH_CONVERSION_IRA_26 = 26;
    static const int EMPLOYEE = 9;
    static const int SELFDIRECTEDIRAUS = 21;
    static const int _403 = 22;
    static const int NON_FUND_PROTOTYPE_IRA = 13;
    static const int NONFUNDPROTOTYPEIRAUS = 13;
    static const int ROTH_CONVERSION_IRA_27 = 27;
    static const int ROTHCONVERSIONIRANONPROTOTYPEUS = 27;
    static const int MINI_INSURANCE_ISA = 5;
    static const int ROTHCONVERSIONIRAFUNDPROTOTYPEUS = 26;
    static const int EDUCATIONIRAFUNDPROTOTYPEUS = 28;
    static const int MAXIISAUK = 1;
    static const int INDIVIDUAL_RETIREMENT_ACCOUNT_ROLLOVER = 17;
    static const int NONFUNDQUALIFIEDPLANUS = 14;
    static const int EMPLOYER_CURRENT_YEAR = 12;
    static const int PRIORYEARPAYMENTUS = 7;
    static const int TESSAUK = 2;
    static const int CURRENTYEARPAYMENTUS = 6;
    static const int EDUCATIONIRANONPROTOTYPEUS = 29;
    static const int INDIVIDUALRETIREMENTACCOUNTUS = 16;
    static const int KEOGHUS = 18;
    static const int EDUCATION_IRA_28 = 28;
    static const int PROFIT_SHARING_PLAN = 19;
    static const int NON_FUND_QUALIFIED_PLAN = 14;
    static const int ROTHIRAFUNDPROTOTYPEUS = 24;
    static const int EDUCATION_IRA_29 = 29;
    static const int EMPLOYEE_10 = 10;
    static const int EMPLOYEE_9 = 9;
    static const int EMPLOYEE_CURRENT_YEAR = 10;
    static const int MAXI_ISA = 1;
    static const int MINIINSURANCEISAUK = 5;
    static const int PRIOR_YEAR_PAYMENT = 7;
    static const int DEFINED_CONTRIBUTION_PLAN = 15;
    static const int _401K = 20;
    static const int _403BUS = 22;
    static const int MINICASHISAUK = 3;
    static const int ROTH_IRA_24 = 24;
    static const int MINISTOCKSANDSHARESISAUK = 4;
    static const int OTHER = 999;
    static const int EMPLOYERCURRENTYEARUS = 12;
    static const int ASSET_TRANSFER = 8;
    static const int ROTH_IRA_25 = 25;
    static const int KEOGH = 18;
    static const int DEFINEDCONTRIBUTIONPLANUS = 15;
    static const int _401KUS = 20;
    static const int TESSA = 2;
    static const int NONE_NOT_APPLICABLE = 0;
    static const int NONE = 0;
    static const int _457 = 23;
    static const int EMPLOYEEPRIORYEARUS = 9;
    static const int EMPLOYERPRIORYEARUS = 11;
    static const int EMPLOYER = 11;
    static const int EMPLOYEECURRENTYEARUS = 10;
    static const int INDIVIDUAL_RETIREMENT_ACCOUNT_16 = 16;
    static const int INDIVIDUAL_RETIREMENT_ACCOUNT = 16;
    static const int INDIVIDUAL_RETIREMENT_ACCOUNT_17 = 17;
    static const int CURRENT_YEAR_PAYMENT = 6;
    static const int ASSETTRANSFERUS = 8;
    TaxAdvantageType() : IntField(495) {}
    TaxAdvantageType(int data) : IntField(495, data) {}
  };

  public __gc class MessageEncoding : public StringField
  {
  public:
    static const int FIELD = 347;
    static const String* EUC_JP = "EUC-JP";
    static const String* SHIFT_JIS = "SHIFT_JIS";
    static const String* UTF_8 = "UTF-8";
    static const String* ISO_2022_JP = "ISO-2022-JP";
    MessageEncoding() : StringField(347) {}
    MessageEncoding(String* data) : StringField(347, data) {}
  };

  public __gc class RiskPutOrCall : public IntField
  {
  public:
    static const int FIELD = 1553;
    RiskPutOrCall() : IntField(1553) {}
    RiskPutOrCall(int data) : IntField(1553, data) {}
  };

  public __gc class RiskSecurityGroup : public StringField
  {
  public:
    static const int FIELD = 1545;
    RiskSecurityGroup() : StringField(1545) {}
    RiskSecurityGroup(String* data) : StringField(1545, data) {}
  };

  public __gc class NoPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 802;
    NoPartySubIDs() : IntField(802) {}
    NoPartySubIDs(int data) : IntField(802, data) {}
  };

  public __gc class SettlInstReqID : public StringField
  {
  public:
    static const int FIELD = 791;
    SettlInstReqID() : StringField(791) {}
    SettlInstReqID(String* data) : StringField(791, data) {}
  };

  public __gc class LegRepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 250;
    LegRepoCollateralSecurityType() : IntField(250) {}
    LegRepoCollateralSecurityType(int data) : IntField(250, data) {}
  };

  public __gc class AffectedSecondaryOrderID : public StringField
  {
  public:
    static const int FIELD = 536;
    AffectedSecondaryOrderID() : StringField(536) {}
    AffectedSecondaryOrderID(String* data) : StringField(536, data) {}
  };

  public __gc class RiskSymbol : public StringField
  {
  public:
    static const int FIELD = 1536;
    RiskSymbol() : StringField(1536) {}
    RiskSymbol(String* data) : StringField(1536, data) {}
  };

  public __gc class DerivativeMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1253;
    DerivativeMaturityTime() : StringField(1253) {}
    DerivativeMaturityTime(String* data) : StringField(1253, data) {}
  };

  public __gc class ExpireTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 126;
    ExpireTime() : UtcTimeStampField(126) {}
    ExpireTime(DateTime data) : UtcTimeStampField(126, data) {}
  };

  public __gc class UnderlyingFactor : public DoubleField
  {
  public:
    static const int FIELD = 246;
    UnderlyingFactor() : DoubleField(246) {}
    UnderlyingFactor(double data) : DoubleField(246, data) {}
    UnderlyingFactor(double data, int decimalPadding) : DoubleField(246, data, decimalPadding) {}
  };

  public __gc class OrigOrdModTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 586;
    OrigOrdModTime() : UtcTimeStampField(586) {}
    OrigOrdModTime(DateTime data) : UtcTimeStampField(586, data) {}
  };

  public __gc class NoTrdRepIndicators : public IntField
  {
  public:
    static const int FIELD = 1387;
    NoTrdRepIndicators() : IntField(1387) {}
    NoTrdRepIndicators(int data) : IntField(1387, data) {}
  };

  public __gc class DerivativeMaturityDate : public StringField
  {
  public:
    static const int FIELD = 1252;
    DerivativeMaturityDate() : StringField(1252) {}
    DerivativeMaturityDate(String* data) : StringField(1252, data) {}
  };

  public __gc class DerivativeCFICode : public StringField
  {
  public:
    static const int FIELD = 1248;
    DerivativeCFICode() : StringField(1248) {}
    DerivativeCFICode(String* data) : StringField(1248, data) {}
  };

  public __gc class Nested2PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 807;
    Nested2PartySubIDType() : IntField(807) {}
    Nested2PartySubIDType(int data) : IntField(807, data) {}
  };

  public __gc class LegIOIQty : public StringField
  {
  public:
    static const int FIELD = 682;
    LegIOIQty() : StringField(682) {}
    LegIOIQty(String* data) : StringField(682, data) {}
  };

  public __gc class ExpireDate : public StringField
  {
  public:
    static const int FIELD = 432;
    ExpireDate() : StringField(432) {}
    ExpireDate(String* data) : StringField(432, data) {}
  };

  public __gc class RiskSecurityType : public StringField
  {
  public:
    static const int FIELD = 1547;
    RiskSecurityType() : StringField(1547) {}
    RiskSecurityType(String* data) : StringField(1547, data) {}
  };

  public __gc class NoMatchRules : public IntField
  {
  public:
    static const int FIELD = 1235;
    NoMatchRules() : IntField(1235) {}
    NoMatchRules(int data) : IntField(1235, data) {}
  };

  public __gc class ApplEndSeqNum : public IntField
  {
  public:
    static const int FIELD = 1183;
    ApplEndSeqNum() : IntField(1183) {}
    ApplEndSeqNum(int data) : IntField(1183, data) {}
  };

  public __gc class EventPx : public DoubleField
  {
  public:
    static const int FIELD = 867;
    EventPx() : DoubleField(867) {}
    EventPx(double data) : DoubleField(867, data) {}
    EventPx(double data, int decimalPadding) : DoubleField(867, data, decimalPadding) {}
  };

  public __gc class AsgnRptID : public StringField
  {
  public:
    static const int FIELD = 833;
    AsgnRptID() : StringField(833) {}
    AsgnRptID(String* data) : StringField(833, data) {}
  };

  public __gc class TimeInForce : public CharField
  {
  public:
    static const int FIELD = 59;
    static const __wchar_t GOOD_TILL_CROSSING = '5';
    static const __wchar_t FILL_OR_KILL = '4';
    static const __wchar_t GOOD_TILL_DATE = '6';
    static const __wchar_t ATTHEOPENING = '2';
    static const __wchar_t FILLORKILL = '4';
    static const __wchar_t GOODTILLDATE = '6';
    static const __wchar_t GOODTILLCANCEL = '1';
    static const __wchar_t ATTHECLOSE = '7';
    static const __wchar_t GOOD_TILL_CANCEL = '1';
    static const __wchar_t DAY = '0';
    static const __wchar_t AT_CROSSING = '9';
    static const __wchar_t IMMEDIATEORCANCEL = '3';
    static const __wchar_t IMMEDIATE_OR_CANCEL = '3';
    static const __wchar_t GOODTILLCROSSING = '5';
    static const __wchar_t GOOD_THROUGH_CROSSING = '8';
    static const __wchar_t AT_THE_CLOSE = '7';
    static const __wchar_t AT_THE_OPENING = '2';
    TimeInForce() : CharField(59) {}
    TimeInForce(__wchar_t data) : CharField(59, data) {}
  };

  public __gc class LowPx : public DoubleField
  {
  public:
    static const int FIELD = 333;
    LowPx() : DoubleField(333) {}
    LowPx(double data) : DoubleField(333, data) {}
    LowPx(double data, int decimalPadding) : DoubleField(333, data, decimalPadding) {}
  };

  public __gc class IOIQualifier : public CharField
  {
  public:
    static const int FIELD = 104;
    static const __wchar_t AON = 'A';
    static const __wchar_t THROUGH_THE_DAY = 'T';
    static const __wchar_t INDIDCATION = 'W';
    static const __wchar_t MOC = 'B';
    static const __wchar_t READYTRADE = 'R';
    static const __wchar_t ATMID = 'Y';
    static const __wchar_t INDWRKAWAY = 'W';
    static const __wchar_t AT_THE_MARKET = 'Q';
    static const __wchar_t AT_THE_MIDPOINT = 'Y';
    static const __wchar_t CROSSING_OPPORTUNITY = 'X';
    static const __wchar_t CURRENT_QUOTE = 'Q';
    static const __wchar_t IN_TOUCH_WITH = 'I';
    static const __wchar_t ALL_OR_NONE = 'A';
    static const __wchar_t THROUGHDAY = 'T';
    static const __wchar_t TAKING_A_POSITION = 'P';
    static const __wchar_t AT_THE_OPEN = 'O';
    static const __wchar_t TAKEPOSITION = 'P';
    static const __wchar_t PORTFOLIO_SHOW_N = 'S';
    static const __wchar_t INTOUCH = 'I';
    static const __wchar_t MOREBEHIND = 'M';
    static const __wchar_t ATMARKET = 'Q';
    static const __wchar_t CROSSOPP = 'X';
    static const __wchar_t PREOPEN = 'Z';
    static const __wchar_t ATCLOSE = 'C';
    static const __wchar_t MARKET_ON_CLOSE = 'B';
    static const __wchar_t VERSUS = 'V';
    static const __wchar_t LIMIT = 'L';
    static const __wchar_t PORTFOLIO_SHOWN = 'S';
    static const __wchar_t READY_TO_TRADE = 'R';
    static const __wchar_t PRE_OPEN = 'Z';
    static const __wchar_t INDICATION = 'W';
    static const __wchar_t MORE_BEHIND = 'M';
    static const __wchar_t ATOPEN = 'O';
    static const __wchar_t VWAP = 'D';
    static const __wchar_t PORTSHOW = 'S';
    static const __wchar_t AT_THE_CLOSE = 'C';
    IOIQualifier() : CharField(104) {}
    IOIQualifier(__wchar_t data) : CharField(104, data) {}
  };

  public __gc class WaveNo : public StringField
  {
  public:
    static const int FIELD = 105;
    WaveNo() : StringField(105) {}
    WaveNo(String* data) : StringField(105, data) {}
  };

  public __gc class RiskSeniority : public StringField
  {
  public:
    static const int FIELD = 1552;
    RiskSeniority() : StringField(1552) {}
    RiskSeniority(String* data) : StringField(1552, data) {}
  };

  public __gc class StrikePriceBoundaryMethod : public IntField
  {
  public:
    static const int FIELD = 1479;
    static const int GREATER_THAN_OR_EQUAL_TO_UNDERLYING_PRICE_IS_IN_THE_MONEY = 4;
    static const int GREATER_THAN_UNDERLYING_IS_IN_THE_MONEY = 5;
    static const int LESS_THAN_OR_EQUAL_TO_THE_UNDERLYING_PRICE_IS_IN_THE_MONEY = 2;
    static const int LESS_THAN_UNDERLYING_PRICE_IS_IN_THE_MONEY = 1;
    static const int EQUAL_TO_THE_UNDERLYING_PRICE_IS_IN_THE_MONEY = 3;
    StrikePriceBoundaryMethod() : IntField(1479) {}
    StrikePriceBoundaryMethod(int data) : IntField(1479, data) {}
  };

  public __gc class DerivativeIssueDate : public StringField
  {
  public:
    static const int FIELD = 1276;
    DerivativeIssueDate() : StringField(1276) {}
    DerivativeIssueDate(String* data) : StringField(1276, data) {}
  };

  public __gc class MiscFeeType : public StringField
  {
  public:
    static const int FIELD = 139;
    static const String* CONVERSION = "11";
    static const String* CONSUMPTION_TAX = "9";
    static const String* LOCAL_COMMISSION = "3";
    static const String* TAX = "2";
    static const String* LOCALCOMM = "3";
    static const String* MARKUP = "8";
    static const String* SECURITY_LENDING = "14";
    static const String* PER_TRANSACTION = "10";
    static const String* REGULATORY = "1";
    static const String* EXCHFEE = "4";
    static const String* CONSUMPTION = "9";
    static const String* STAMP = "5";
    static const String* TRANSFER_FEE = "13";
    static const String* AGENT = "12";
    static const String* OTHER = "7";
    static const String* TRANSACTION = "10";
    static const String* REG = "1";
    static const String* EXCHANGE_FEES = "4";
    static const String* LEVY = "6";
    MiscFeeType() : StringField(139) {}
    MiscFeeType(String* data) : StringField(139, data) {}
  };

  public __gc class QuoteID : public StringField
  {
  public:
    static const int FIELD = 117;
    QuoteID() : StringField(117) {}
    QuoteID(String* data) : StringField(117, data) {}
  };

  public __gc class RiskFlexibleIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1554;
    RiskFlexibleIndicator() : BooleanField(1554) {}
    RiskFlexibleIndicator(bool data) : BooleanField(1554, data) {}
  };

  public __gc class DerivativeInstrumentPartyIDSource : public StringField
  {
  public:
    static const int FIELD = 1294;
    DerivativeInstrumentPartyIDSource() : StringField(1294) {}
    DerivativeInstrumentPartyIDSource(String* data) : StringField(1294, data) {}
  };

  public __gc class SettlObligID : public StringField
  {
  public:
    static const int FIELD = 1161;
    SettlObligID() : StringField(1161) {}
    SettlObligID(String* data) : StringField(1161, data) {}
  };

  public __gc class InstrAttribValue : public StringField
  {
  public:
    static const int FIELD = 872;
    InstrAttribValue() : StringField(872) {}
    InstrAttribValue(String* data) : StringField(872, data) {}
  };

  public __gc class LiquidityValue : public DoubleField
  {
  public:
    static const int FIELD = 404;
    LiquidityValue() : DoubleField(404) {}
    LiquidityValue(double data) : DoubleField(404, data) {}
    LiquidityValue(double data, int decimalPadding) : DoubleField(404, data, decimalPadding) {}
  };

  public __gc class SecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 22;
    static const String* CLEARING_HOUSE = "H";
    static const String* OPTION_PRICE_REPORTING_AUTHORITY = "J";
    static const String* EXCHANGE_SYMBOL = "8";
    static const String* SICOVAM = "E";
    static const String* ISDA_FPML_PRODUCT_SPECIFICATION = "I";
    static const String* ISDA_FPML_PRODUCT_URL = "K";
    static const String* RIC = "5";
    static const String* CLEARINGHOUSE = "H";
    static const String* FPML = "I";
    static const String* RIC_CODE = "5";
    static const String* ISOCURR = "6";
    static const String* ISO_CURRENCY_CODE = "6";
    static const String* COMMON = "G";
    static const String* VALOREN = "D";
    static const String* BELGIAN = "F";
    static const String* CTA = "9";
    static const String* ISIN_NUMBER = "4";
    static const String* ISIN = "4";
    static const String* ISOCOUNTRY = "7";
    static const String* SEDOL = "2";
    static const String* ISO_COUNTRY_CODE = "7";
    static const String* LETTER_OF_CREDIT = "L";
    static const String* BLOOMBERG_SYMBOL = "A";
    static const String* BLMBRG = "A";
    static const String* OPTIONPRICEREPORTINGAUTHORITY = "J";
    static const String* WERTPAPIER = "B";
    static const String* MARKETPLACE_ASSIGNED_IDENTIFIER = "M";
    static const String* EXCHSYMB = "8";
    static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
    static const String* DUTCH = "C";
    static const String* QUIK = "3";
    static const String* CUSIP = "1";
    SecurityIDSource() : StringField(22) {}
    SecurityIDSource(String* data) : StringField(22, data) {}
  };

  public __gc class NewsRefType : public IntField
  {
  public:
    static const int FIELD = 1477;
    static const int OTHER_LANGUAGE = 1;
    static const int COMPLIMENTARY = 2;
    static const int REPLACEMENT = 0;
    NewsRefType() : IntField(1477) {}
    NewsRefType(int data) : IntField(1477, data) {}
  };

  public __gc class NoOfLegUnderlyings : public IntField
  {
  public:
    static const int FIELD = 1342;
    NoOfLegUnderlyings() : IntField(1342) {}
    NoOfLegUnderlyings(int data) : IntField(1342, data) {}
  };

  public __gc class DerivativeEncodedSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1281;
    DerivativeEncodedSecurityDesc() : StringField(1281) {}
    DerivativeEncodedSecurityDesc(String* data) : StringField(1281, data) {}
  };

  public __gc class TriggerOrderType : public CharField
  {
  public:
    static const int FIELD = 1111;
    static const __wchar_t LIMIT = '2';
    static const __wchar_t MARKET = '1';
    TriggerOrderType() : CharField(1111) {}
    TriggerOrderType(__wchar_t data) : CharField(1111, data) {}
  };

  public __gc class UnderlyingDirtyPrice : public DoubleField
  {
  public:
    static const int FIELD = 882;
    UnderlyingDirtyPrice() : DoubleField(882) {}
    UnderlyingDirtyPrice(double data) : DoubleField(882, data) {}
    UnderlyingDirtyPrice(double data, int decimalPadding) : DoubleField(882, data, decimalPadding) {}
  };

  public __gc class CrossType : public IntField
  {
  public:
    static const int FIELD = 549;
    static const int CROSS_AON = 1;
    static const int CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE_ONE_SIDE_OF_THE_CROSS_IS_FULLY_EXECUTED = 3;
    static const int CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT_BOTH_SIDES_ARE_TREATED_IN_THE_SAME_MANNER_THIS_IS_EQUIVALENT_TO_AN_ALL_OR_NONE = 1;
    static const int CROSSAON = 1;
    static const int CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE = 4;
    static const int CROSS_ONE_SIDE = 3;
    static const int CROSS_SAME_PRICE = 4;
    static const int CROSSSAMEPRICE = 4;
    static const int CROSS_IOC = 2;
    static const int CROSSIOC = 2;
    static const int CROSSONESIDE = 3;
    static const int CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED_ONE_SIDE_IS_FULLY_EXECUTED_THE_OTHER_SIDE_IS_PARTIALLY_EXECUTED_WITH_THE_REMAINDER_BEING_CANCELLED_THIS_IS_EQUIVALENT_TO_AN_IMMEDIATE_OR_CANCEL_ON_THE_OTHER_SIDE = 2;
    CrossType() : IntField(549) {}
    CrossType(int data) : IntField(549, data) {}
  };

  public __gc class RepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 239;
    RepoCollateralSecurityType() : IntField(239) {}
    RepoCollateralSecurityType(int data) : IntField(239, data) {}
  };

  public __gc class Password : public StringField
  {
  public:
    static const int FIELD = 554;
    Password() : StringField(554) {}
    Password(String* data) : StringField(554, data) {}
  };

  public __gc class OpenCloseSettleFlag : public StringField
  {
  public:
    static const int FIELD = 286;
    static const __wchar_t SESSION_OPEN = '1';
    static const __wchar_t DAILY_OPEN = '0';
    static const __wchar_t EXPECTED_PRICE = '3';
    static const __wchar_t PRICE_FROM_PREVIOUS_BUSINESS_DAY = '4';
    static const __wchar_t DELIVERY_SETTLEMENT_PRICE = '2';
    OpenCloseSettleFlag() : StringField(286) {}
    OpenCloseSettleFlag(String* data) : StringField(286, data) {}
  };

  public __gc class Subject : public StringField
  {
  public:
    static const int FIELD = 147;
    Subject() : StringField(147) {}
    Subject(String* data) : StringField(147, data) {}
  };

  public __gc class RefApplReqID : public StringField
  {
  public:
    static const int FIELD = 1433;
    RefApplReqID() : StringField(1433) {}
    RefApplReqID(String* data) : StringField(1433, data) {}
  };

  public __gc class UnderlyingEndValue : public DoubleField
  {
  public:
    static const int FIELD = 886;
    UnderlyingEndValue() : DoubleField(886) {}
    UnderlyingEndValue(double data) : DoubleField(886, data) {}
    UnderlyingEndValue(double data, int decimalPadding) : DoubleField(886, data, decimalPadding) {}
  };

  public __gc class NewSeqNo : public IntField
  {
  public:
    static const int FIELD = 36;
    NewSeqNo() : IntField(36) {}
    NewSeqNo(int data) : IntField(36, data) {}
  };

  public __gc class OrigTradeHandlingInstr : public CharField
  {
  public:
    static const int FIELD = 1124;
    OrigTradeHandlingInstr() : CharField(1124) {}
    OrigTradeHandlingInstr(__wchar_t data) : CharField(1124, data) {}
  };

  public __gc class DisplayHighQty : public DoubleField
  {
  public:
    static const int FIELD = 1086;
    DisplayHighQty() : DoubleField(1086) {}
    DisplayHighQty(double data) : DoubleField(1086, data) {}
    DisplayHighQty(double data, int decimalPadding) : DoubleField(1086, data, decimalPadding) {}
  };

  public __gc class MDBookType : public IntField
  {
  public:
    static const int FIELD = 1021;
    static const int PRICE_DEPTH = 2;
    static const int ORDER_DEPTH = 3;
    static const int TOP_OF_BOOK = 1;
    MDBookType() : IntField(1021) {}
    MDBookType(int data) : IntField(1021, data) {}
  };

  public __gc class MarginExcess : public DoubleField
  {
  public:
    static const int FIELD = 899;
    MarginExcess() : DoubleField(899) {}
    MarginExcess(double data) : DoubleField(899, data) {}
    MarginExcess(double data, int decimalPadding) : DoubleField(899, data, decimalPadding) {}
  };

  public __gc class BasisPxType : public CharField
  {
  public:
    static const int FIELD = 419;
    static const __wchar_t VWAPAFT = '8';
    static const __wchar_t VWAP_THROUGH_A_DAY_EXCEPT_YORI = '9';
    static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION = '7';
    static const __wchar_t CLOSING_PRICE = '3';
    static const __wchar_t VWAP_THROUGH_A_DAY = '6';
    static const __wchar_t CLOSING_PRICE_AT_MORNINGN_SESSION = '2';
    static const __wchar_t VWAPDAY = '6';
    static const __wchar_t VWAPMORNXYORI = 'A';
    static const __wchar_t VWAPMORN = '7';
    static const __wchar_t VWAPDAYXYORI = '9';
    static const __wchar_t OTHERS = 'Z';
    static const __wchar_t OPEN = 'D';
    static const __wchar_t CURRPX = '4';
    static const __wchar_t VWAPAFTXYORI = 'B';
    static const __wchar_t CLOSING_PRICE_AT_MORNING_SESSION = '2';
    static const __wchar_t CLSPXMORN = '2';
    static const __wchar_t CURRENT_PRICE = '4';
    static const __wchar_t SQ = '5';
    static const __wchar_t CLSPX = '3';
    static const __wchar_t STRIKE = 'C';
    static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = 'B';
    static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = 'A';
    static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION = '8';
    BasisPxType() : CharField(419) {}
    BasisPxType(__wchar_t data) : CharField(419, data) {}
  };

  public __gc class DlvyInst : public StringField
  {
  public:
    static const int FIELD = 86;
    DlvyInst() : StringField(86) {}
    DlvyInst(String* data) : StringField(86, data) {}
  };

  public __gc class ComplianceID : public StringField
  {
  public:
    static const int FIELD = 376;
    ComplianceID() : StringField(376) {}
    ComplianceID(String* data) : StringField(376, data) {}
  };

  public __gc class EmailThreadID : public StringField
  {
  public:
    static const int FIELD = 164;
    EmailThreadID() : StringField(164) {}
    EmailThreadID(String* data) : StringField(164, data) {}
  };

  public __gc class ContAmtCurr : public StringField
  {
  public:
    static const int FIELD = 521;
    ContAmtCurr() : StringField(521) {}
    ContAmtCurr(String* data) : StringField(521, data) {}
  };

  public __gc class RelationshipRiskSecurityGroup : public StringField
  {
  public:
    static const int FIELD = 1598;
    RelationshipRiskSecurityGroup() : StringField(1598) {}
    RelationshipRiskSecurityGroup(String* data) : StringField(1598, data) {}
  };

  public __gc class ComplexEventType : public IntField
  {
  public:
    static const int FIELD = 1484;
    static const int ROLLING_BARRIER = 9;
    static const int UNDERLYING = 7;
    static const int KNOCK_OUT_UP = 5;
    static const int KNOCK_IN_UP = 3;
    static const int KOCK_IN_DOWN = 4;
    static const int TRIGGER = 2;
    static const int RESET_BARRIER = 8;
    static const int CAPPED = 1;
    static const int KNOCK_OUT_DOWN = 6;
    ComplexEventType() : IntField(1484) {}
    ComplexEventType(int data) : IntField(1484, data) {}
  };

  public __gc class MassActionResponse : public IntField
  {
  public:
    static const int FIELD = 1375;
    static const int REJECTED = 0;
    static const int ACCEPTED = 1;
    MassActionResponse() : IntField(1375) {}
    MassActionResponse(int data) : IntField(1375, data) {}
  };

  public __gc class UnderlyingIssueDate : public StringField
  {
  public:
    static const int FIELD = 242;
    UnderlyingIssueDate() : StringField(242) {}
    UnderlyingIssueDate(String* data) : StringField(242, data) {}
  };

  public __gc class SecurityRequestType : public IntField
  {
  public:
    static const int FIELD = 321;
    static const int MARKETID_OR_MARKETID_PLUS_MARKETSEGMENTID = 9;
    static const int REQUEST_LIST_SECURITY_TYPES = 2;
    static const int REQSECIDPROV = 1;
    static const int REQUEST_LIST_SECURITIES = 3;
    static const int REQSECID = 0;
    static const int SYMBOL = 4;
    static const int SECURITYTYPE_AND_OR_CFICODE = 5;
    static const int REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = 1;
    static const int REQSECLIST = 3;
    static const int TRADINGSESSIONID = 7;
    static const int PRODUCT = 6;
    static const int ALL_SECURITIES = 8;
    static const int REQSECLISTTYPES = 2;
    static const int REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = 0;
    SecurityRequestType() : IntField(321) {}
    SecurityRequestType(int data) : IntField(321, data) {}
  };

  public __gc class AllocInterestAtMaturity : public DoubleField
  {
  public:
    static const int FIELD = 741;
    AllocInterestAtMaturity() : DoubleField(741) {}
    AllocInterestAtMaturity(double data) : DoubleField(741, data) {}
    AllocInterestAtMaturity(double data, int decimalPadding) : DoubleField(741, data, decimalPadding) {}
  };

  public __gc class ListRejectReason : public IntField
  {
  public:
    static const int FIELD = 1386;
    static const int EXCHANGE_CLOSED = 2;
    static const int UNKNOWN_ORDER = 5;
    static const int UNSUPPORTED_ORDER_CHARACTERISTIC = 11;
    static const int DUPLICATE_ORDER = 6;
    static const int TOO_LATE_TO_ENTER = 4;
    static const int OTHER = 99;
    static const int BROKER = 0;
    ListRejectReason() : IntField(1386) {}
    ListRejectReason(int data) : IntField(1386, data) {}
  };

  public __gc class DeskType : public StringField
  {
  public:
    static const int FIELD = 1033;
    static const String* PROPRIETARY = "PR";
    static const String* ARBITRAGE = "AR";
    static const String* TRADING = "T";
    static const String* DERIVATIVES = "D";
    static const String* SALES = "S";
    static const String* INSTITUTIONAL = "IS";
    static const String* INTERNATIONAL = "IN";
    static const String* AGENCY = "A";
    static const String* PREFERRED_TRADING = "PF";
    static const String* OTHER = "O";
    static const String* PROGRAM_TRADING = "PT";
    DeskType() : StringField(1033) {}
    DeskType(String* data) : StringField(1033, data) {}
  };

  public __gc class SecondaryTradeReportID : public StringField
  {
  public:
    static const int FIELD = 818;
    SecondaryTradeReportID() : StringField(818) {}
    SecondaryTradeReportID(String* data) : StringField(818, data) {}
  };

  public __gc class SettlType : public StringField
  {
  public:
    static const int FIELD = 63;
    static const String* T4 = "5";
    static const String* T5 = "8";
    static const String* WHEN_AND_IF_ISSUED = "7";
    static const String* NEXTDAY = "2";
    static const String* FUTURE = "6";
    static const String* T_PLUS_2 = "3";
    static const String* SELLERS_OPTION = "8";
    static const String* BROKEN_DATE = "B";
    static const String* T_PLUS_3 = "4";
    static const String* T_PLUS_4 = "5";
    static const String* REGULAR = "0";
    static const String* NEXT_DAY = "2";
    static const String* T_PLUS_5 = "9";
    static const String* FX_SPOT_NEXT_SETTLEMENT = "C";
    static const String* T1 = "9";
    static const String* WHENISSUED = "7";
    static const String* T2 = "3";
    static const String* T3 = "4";
    static const String* CASH = "1";
    SettlType() : StringField(63) {}
    SettlType(String* data) : StringField(63, data) {}
  };

  public __gc class OpenClose : public CharField
  {
  public:
    static const int FIELD = 77;
    static const __wchar_t CLOSE = 'C';
    static const __wchar_t OPEN = 'O';
    OpenClose() : CharField(77) {}
    OpenClose(__wchar_t data) : CharField(77, data) {}
  };

  public __gc class ContractMultiplierUnit : public IntField
  {
  public:
    static const int FIELD = 1435;
    static const int SHARES = 0;
    static const int HOURS = 1;
    static const int DAYS = 2;
    ContractMultiplierUnit() : IntField(1435) {}
    ContractMultiplierUnit(int data) : IntField(1435, data) {}
  };

  public __gc class SecondaryLowLimitPrice : public DoubleField
  {
  public:
    static const int FIELD = 1221;
    SecondaryLowLimitPrice() : DoubleField(1221) {}
    SecondaryLowLimitPrice(double data) : DoubleField(1221, data) {}
    SecondaryLowLimitPrice(double data, int decimalPadding) : DoubleField(1221, data, decimalPadding) {}
  };

  public __gc class ExpQty : public DoubleField
  {
  public:
    static const int FIELD = 983;
    ExpQty() : DoubleField(983) {}
    ExpQty(double data) : DoubleField(983, data) {}
    ExpQty(double data, int decimalPadding) : DoubleField(983, data, decimalPadding) {}
  };

  public __gc class NetworkRequestID : public StringField
  {
  public:
    static const int FIELD = 933;
    NetworkRequestID() : StringField(933) {}
    NetworkRequestID(String* data) : StringField(933, data) {}
  };

  public __gc class TrdType : public IntField
  {
  public:
    static const int FIELD = 828;
    static const int VOLUME_WEIGHTED_AVERAGE_TRADE = 51;
    static const int LATE_TRADE = 4;
    static const int FUTURES_LARGE_ORDER_EXECUTION = 17;
    static const int EXCHANGE_OF_FUTURES_FOR_FUTURES = 18;
    static const int SPECIAL_EX_CAPITAL_REPAYMENTS = 35;
    static const int BLOCK_TRADE_38 = 38;
    static const int DELTA_NEUTRAL_TRANSACTION = 46;
    static const int CASH_SETTLEMENT = 29;
    static const int SPECIAL_CUM_CAPITAL_REPAYMENTS = 34;
    static const int SPECIAL_CUM_BONUS = 36;
    static const int BLOCK_TRADES = 40;
    static const int ALL_OR_NONE = 16;
    static const int OPTION_EXERCISE = 45;
    static const int FINANCING_TRANSACTION = 47;
    static const int TRANSFER = 3;
    static const int REGULAR_TRADE = 0;
    static const int TRADING_AT_SETTLEMENT = 15;
    static const int SPECIAL_EX_DIVIDEND = 26;
    static const int SPECIAL_EX_COUPON = 28;
    static const int SPECIAL_PRICE = 30;
    static const int SPECIAL_CUM_RIGHTS = 32;
    static const int SPECIAL_EX_BONUS = 37;
    static const int BLOCKTRADE = 1;
    static const int EXCHANGE_GRANTED_TRADE = 52;
    static const int EXCHANGE_BASIS_FACILITY = 55;
    static const int BLOCK_TRADE_1 = 1;
    static const int LATE_BUNCHED_TRADE = 8;
    static const int ERROR_TRADE = 24;
    static const int NAME_CHANGE = 41;
    static const int LATEBUNCHEDTRADE = 8;
    static const int EFP = 2;
    static const int NON_STANDARD_SETTLEMENT = 48;
    static const int PRIOR_REFERENCE_PRICE_TRADE = 9;
    static const int EXCHANGE_FOR_RISK = 11;
    static const int EXCHANGE_FOR_SWAP = 12;
    static const int EXCHANGE_OF_FUTURES_FOR = 13;
    static const int OPTION_INTERIM_TRADE = 19;
    static const int PRIVATELY_NEGOTIATED_TRADES = 22;
    static const int SUBSTITUTION_OF_FUTURES_FOR_FORWARDS = 23;
    static const int SPECIAL_CUM_DIVIDEND = 25;
    static const int GUARANTEED_DELIVERY = 31;
    static const int PROROGATION_SELL = 44;
    static const int WEIGHTEDAVERAGEPRICETRADE = 6;
    static const int PORTFOLIO_TRADE = 50;
    static const int WEIGHTED_AVERAGE_PRICE_TRADE = 6;
    static const int WORKED_PRINCIPAL_TRADE = 39;
    static const int PORTFOLIO_TRANSFER = 42;
    static const int T_TRADE = 5;
    static const int EXCHANGE_OF_OPTIONS_FOR_OPTIONS = 14;
    static const int SPECIAL_CUM_COUPON = 27;
    static const int BUNCHEDTRADE = 7;
    static const int TTRADE = 5;
    static const int OTC = 54;
    static const int AFTER_HOURS_TRADE = 10;
    static const int PRIORREFERENCEPRICETRADE = 9;
    static const int AFTERHOURSTRADE = 10;
    static const int DERIVATIVE_RELATED_TRANSACTION = 49;
    static const int REPURCHASE_AGREEMENT = 53;
    static const int SPECIAL_EX_RIGHTS = 33;
    static const int PROROGATION_BUY = 43;
    static const int BUNCHED_TRADE = 7;
    static const int OPTION_CABINET_TRADE = 20;
    static const int LATETRADE = 4;
    static const int REGULARTRADE = 0;
    TrdType() : IntField(828) {}
    TrdType(int data) : IntField(828, data) {}
  };

  public __gc class NoUnderlyings : public IntField
  {
  public:
    static const int FIELD = 711;
    NoUnderlyings() : IntField(711) {}
    NoUnderlyings(int data) : IntField(711, data) {}
  };

  public __gc class MDMkt : public StringField
  {
  public:
    static const int FIELD = 275;
    MDMkt() : StringField(275) {}
    MDMkt(String* data) : StringField(275, data) {}
  };

  public __gc class LastMkt : public StringField
  {
  public:
    static const int FIELD = 30;
    LastMkt() : StringField(30) {}
    LastMkt(String* data) : StringField(30, data) {}
  };

  public __gc class RestructuringType : public StringField
  {
  public:
    static const int FIELD = 1449;
    static const String* MODIFIED_MOD_RESTRUCTURING = "MM";
    static const String* FULL_RESTRUCTURING = "FR";
    static const String* NO_RESTRUCTURING_SPECIFIED = "XR";
    static const String* MODIFIED_RESTRUCTURING = "MR";
    RestructuringType() : StringField(1449) {}
    RestructuringType(String* data) : StringField(1449, data) {}
  };

  public __gc class NoStrikeRules : public IntField
  {
  public:
    static const int FIELD = 1201;
    NoStrikeRules() : IntField(1201) {}
    NoStrikeRules(int data) : IntField(1201, data) {}
  };

  public __gc class ListName : public StringField
  {
  public:
    static const int FIELD = 392;
    ListName() : StringField(392) {}
    ListName(String* data) : StringField(392, data) {}
  };

  public __gc class ProgRptReqs : public IntField
  {
  public:
    static const int FIELD = 414;
    static const int SELLSIDE = 2;
    static const int REALTIME = 3;
    static const int REAL_TIME_EXECUTION_REPORTS = 3;
    static const int BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = 1;
    static const int SELL_SIDE_PERIODICALLY_SENDS_STATUS_USING_LIST_STATUS_PERIOD_OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD = 2;
    static const int BUY_SIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUE_REQUEST = 1;
    static const int BUYSIDE = 1;
    static const int SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS_PERIOD_OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD = 2;
    ProgRptReqs() : IntField(414) {}
    ProgRptReqs(int data) : IntField(414, data) {}
  };

  public __gc class TradingSessionID : public StringField
  {
  public:
    static const int FIELD = 336;
    static const String* EVENING = "5";
    static const String* AFTER_HOURS = "6";
    static const String* HALFDAY = "2";
    static const String* DAY = "1";
    static const String* MORNING = "3";
    static const String* AFTERNOON = "4";
    TradingSessionID() : StringField(336) {}
    TradingSessionID(String* data) : StringField(336, data) {}
  };

  public __gc class ListOrderStatus : public IntField
  {
  public:
    static const int FIELD = 431;
    static const int RECVFOREXEC = 2;
    static const int CXL = 4;
    static const int REJ = 7;
    static const int CANCELING = 4;
    static const int REJECT = 7;
    static const int ALL_DONE = 6;
    static const int INBIDPROC = 1;
    static const int ALLDONE = 6;
    static const int IN_BIDDING_PROCESS = 1;
    static const int RECEIVED_FOR_EXECUTION = 2;
    static const int ALERT = 5;
    static const int RECEIVEDFOREXECUTION = 2;
    static const int INBIDDINGPROCESS = 1;
    static const int EXEC = 3;
    static const int CANCELLING = 4;
    static const int EXECUTING = 3;
    ListOrderStatus() : IntField(431) {}
    ListOrderStatus(int data) : IntField(431, data) {}
  };

  public __gc class RegistStatus : public CharField
  {
  public:
    static const int FIELD = 506;
    static const __wchar_t REJECT = 'R';
    static const __wchar_t REMINDER_IE_REGISTRATION_INSTRUCTIONS_ARE_STILL_OUTSTANDING = 'N';
    static const __wchar_t REJECTED = 'R';
    static const __wchar_t ACCEPTED = 'A';
    static const __wchar_t REMINDER = 'N';
    static const __wchar_t HELD = 'H';
    static const __wchar_t ACCEPT = 'A';
    RegistStatus() : CharField(506) {}
    RegistStatus(__wchar_t data) : CharField(506, data) {}
  };

  public __gc class PosAmt : public DoubleField
  {
  public:
    static const int FIELD = 708;
    PosAmt() : DoubleField(708) {}
    PosAmt(double data) : DoubleField(708, data) {}
    PosAmt(double data, int decimalPadding) : DoubleField(708, data, decimalPadding) {}
  };

  public __gc class UnderlyingPriceDeterminationMethod : public IntField
  {
  public:
    static const int FIELD = 1481;
    static const int OPTIMAL_VALUE = 3;
    static const int SPECIAL_REFERENCE = 2;
    static const int AVERAGE_VALUE = 4;
    static const int REGULAR = 1;
    UnderlyingPriceDeterminationMethod() : IntField(1481) {}
    UnderlyingPriceDeterminationMethod(int data) : IntField(1481, data) {}
  };

  public __gc class NoUnderlyingStips : public IntField
  {
  public:
    static const int FIELD = 887;
    NoUnderlyingStips() : IntField(887) {}
    NoUnderlyingStips(int data) : IntField(887, data) {}
  };

  public __gc class TradSesPreCloseTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 343;
    TradSesPreCloseTime() : UtcTimeStampField(343) {}
    TradSesPreCloseTime(DateTime data) : UtcTimeStampField(343, data) {}
  };

  public __gc class MassCancelRequestType : public CharField
  {
  public:
    static const int FIELD = 530;
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY_GROUP = 'A';
    static const __wchar_t CXLORDERSSECURITYTYPE = '5';
    static const __wchar_t CXLORDERSUNDERLYINGSECURITY = '2';
    static const __wchar_t CXLORDERSTRDSESSION = '6';
    static const __wchar_t CXLALLORDERS = '7';
    static const __wchar_t CANCEL_ORDERS_FOR_A_MARKET = '8';
    static const __wchar_t CANCEL_ORDERS_FOR_A_MARKET_SEGMENT = '9';
    static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
    static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
    static const __wchar_t CANCEL_FOR_ISSUER_OF_UNDERLYING_SECURITY = 'C';
    static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
    static const __wchar_t CXLORDERSSECURITY = '1';
    static const __wchar_t CXLORDERSPRODUCT = '3';
    static const __wchar_t CANCEL_ALL_ORDERS = '7';
    static const __wchar_t CANCEL_FOR_SECURITY_ISSUER = 'B';
    static const __wchar_t CXLORDERSCFICODE = '4';
    static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
    static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
    MassCancelRequestType() : CharField(530) {}
    MassCancelRequestType(__wchar_t data) : CharField(530, data) {}
  };

  public __gc class UnderlyingLegSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 1336;
    UnderlyingLegSecurityAltIDSource() : StringField(1336) {}
    UnderlyingLegSecurityAltIDSource(String* data) : StringField(1336, data) {}
  };

  public __gc class SettlPartyID : public StringField
  {
  public:
    static const int FIELD = 782;
    SettlPartyID() : StringField(782) {}
    SettlPartyID(String* data) : StringField(782, data) {}
  };

  public __gc class NoAffectedOrders : public IntField
  {
  public:
    static const int FIELD = 534;
    NoAffectedOrders() : IntField(534) {}
    NoAffectedOrders(int data) : IntField(534, data) {}
  };

  public __gc class CashSettlAgentAcctNum : public StringField
  {
  public:
    static const int FIELD = 184;
    CashSettlAgentAcctNum() : StringField(184) {}
    CashSettlAgentAcctNum(String* data) : StringField(184, data) {}
  };

  public __gc class UnderlyingLegMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1339;
    UnderlyingLegMaturityMonthYear() : StringField(1339) {}
    UnderlyingLegMaturityMonthYear(String* data) : StringField(1339, data) {}
  };

  public __gc class DerivativeSecurityListRequestType : public IntField
  {
  public:
    static const int FIELD = 1307;
    static const int MARKETID_OR_MARKETID_PLUS_MARKETSEGMENTID = 8;
    static const int UNDELYINGSYMBOL = 5;
    static const int UNDERLYING_PRODUCT = 7;
    static const int UNDERLYING_SECURITYTYPE_AND_OR_CFICODE = 6;
    static const int SECURITYTYPE_AND_OR_CFICODE = 1;
    static const int SYMBOL = 0;
    static const int TRADINGSESSIONID = 3;
    static const int ALL_SECURITIES = 4;
    static const int PRODUCT = 2;
    DerivativeSecurityListRequestType() : IntField(1307) {}
    DerivativeSecurityListRequestType(int data) : IntField(1307, data) {}
  };

  public __gc class NoLotTypeRules : public IntField
  {
  public:
    static const int FIELD = 1234;
    NoLotTypeRules() : IntField(1234) {}
    NoLotTypeRules(int data) : IntField(1234, data) {}
  };

  public __gc class NoDates : public IntField
  {
  public:
    static const int FIELD = 580;
    NoDates() : IntField(580) {}
    NoDates(int data) : IntField(580, data) {}
  };

  public __gc class CxlRejResponseTo : public CharField
  {
  public:
    static const int FIELD = 434;
    static const __wchar_t ORDCXLREPREQ = '2';
    static const __wchar_t ORDER_CANCEL_REQUEST = '1';
    static const __wchar_t ORDER_CANCEL_REPLACE_REQUEST = '2';
    static const __wchar_t ORDCXLREQ = '1';
    CxlRejResponseTo() : CharField(434) {}
    CxlRejResponseTo(__wchar_t data) : CharField(434, data) {}
  };

  public __gc class EffectiveTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 168;
    EffectiveTime() : UtcTimeStampField(168) {}
    EffectiveTime(DateTime data) : UtcTimeStampField(168, data) {}
  };

  public __gc class GrossTradeAmt : public DoubleField
  {
  public:
    static const int FIELD = 381;
    GrossTradeAmt() : DoubleField(381) {}
    GrossTradeAmt(double data) : DoubleField(381, data) {}
    GrossTradeAmt(double data, int decimalPadding) : DoubleField(381, data, decimalPadding) {}
  };

  public __gc class ContextPartyID : public StringField
  {
  public:
    static const int FIELD = 1523;
    ContextPartyID() : StringField(1523) {}
    ContextPartyID(String* data) : StringField(1523, data) {}
  };

  public __gc class SecurityListDesc : public StringField
  {
  public:
    static const int FIELD = 1467;
    SecurityListDesc() : StringField(1467) {}
    SecurityListDesc(String* data) : StringField(1467, data) {}
  };

  public __gc class NotAffectedOrderID : public StringField
  {
  public:
    static const int FIELD = 1371;
    NotAffectedOrderID() : StringField(1371) {}
    NotAffectedOrderID(String* data) : StringField(1371, data) {}
  };

  public __gc class DerivativeStrikeValue : public DoubleField
  {
  public:
    static const int FIELD = 1264;
    DerivativeStrikeValue() : DoubleField(1264) {}
    DerivativeStrikeValue(double data) : DoubleField(1264, data) {}
    DerivativeStrikeValue(double data, int decimalPadding) : DoubleField(1264, data, decimalPadding) {}
  };

  public __gc class NoPosAmt : public IntField
  {
  public:
    static const int FIELD = 753;
    NoPosAmt() : IntField(753) {}
    NoPosAmt(int data) : IntField(753, data) {}
  };

  public __gc class LegCreditRating : public StringField
  {
  public:
    static const int FIELD = 257;
    LegCreditRating() : StringField(257) {}
    LegCreditRating(String* data) : StringField(257, data) {}
  };

  public __gc class RelationshipRiskInstrumentSettlType : public StringField
  {
  public:
    static const int FIELD = 1611;
    RelationshipRiskInstrumentSettlType() : StringField(1611) {}
    RelationshipRiskInstrumentSettlType(String* data) : StringField(1611, data) {}
  };

  public __gc class BidForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 642;
    BidForwardPoints2() : DoubleField(642) {}
    BidForwardPoints2(double data) : DoubleField(642, data) {}
    BidForwardPoints2(double data, int decimalPadding) : DoubleField(642, data, decimalPadding) {}
  };

  public __gc class SettlDate : public StringField
  {
  public:
    static const int FIELD = 64;
    SettlDate() : StringField(64) {}
    SettlDate(String* data) : StringField(64, data) {}
  };

  public __gc class ClientID : public StringField
  {
  public:
    static const int FIELD = 109;
    ClientID() : StringField(109) {}
    ClientID(String* data) : StringField(109, data) {}
  };

  public __gc class QuoteCancelType : public IntField
  {
  public:
    static const int FIELD = 298;
    static const int CANCEL_BY_QUOTETYPE = 6;
    static const int CANCEL_FOR_ONE_OR_MORE_SECURITIES = 1;
    static const int CANCEL_QUOTE_SPECIFIED_IN_QUOTEID = 5;
    static const int CANCEL_FOR_UNDERLYING_SYMBOL = 3;
    static const int CXLUNDER = 3;
    static const int CANCEL_ALL_QUOTES = 4;
    static const int CXLSYM = 1;
    static const int CANCEL_FOR_UNDERLYING_SECURITY = 3;
    static const int CANCEL_FOR_ISSUER_OF_UNDERLYING_SECURITY = 8;
    static const int CANCEL_FOR_SECURITY_ISSUER = 7;
    static const int CXLSECTYPE = 2;
    static const int CANCEL_FOR_ALL_QUOTES = 4;
    static const int CXLALL = 4;
    static const int CANCEL_FOR_SECURITY_TYPE = 2;
    static const int CANCEL_FOR_SYMBOL = 1;
    QuoteCancelType() : IntField(298) {}
    QuoteCancelType(int data) : IntField(298, data) {}
  };

  public __gc class StipulationType : public StringField
  {
  public:
    static const int FIELD = 233;
    static const String* POOLS_PER_LOT = "PPL";
    static const String* MAXIMUM_LOAN_BALANCE = "MAXBAL";
    static const String* CONSTANTPREPAYMENTYIELD = "CPY";
    static const String* CUSTOM_START_END_DATE = "CUSTOMDATE";
    static const String* CALL_PROTECTION = "PROTECT";
    static const String* MATURITYYEARANDMONTH = "MAT";
    static const String* FINALCPROFHOMEEQUITYPREPAYMENTCURVE = "HEP";
    static const String* MATURITYRANGE = "MATURITY";
    static const String* COUPON_RANGE = "COUPON";
    static const String* PERCENTOFBMAPREPAYMENTCURVE = "PSA";
    static const String* SUBSTITUTIONSLEFTREPO = "SUBSLEFT";
    static const String* LOOKBACKDAYS = "LOOKBACK";
    static const String* CALLPROTECTION = "PROTECT";
    static const String* MAXIMUMSUBSTITUTIONSREPO = "MAXSUBS";
    static const String* YEARORYEARMONTHOFISSUE = "ISSUE";
    static const String* CONSTANTPREPAYMENTRATE = "CPR";
    static const String* ISSUE_SIZE_RANGE = "ISSUESIZE";
    static const String* WEIGHTEDAVERAGEMATURITY = "WAM";
    static const String* CONSTANT_PREPAYMENT_RATE = "CPR";
    static const String* PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE = "MHP";
    static const String* POOLSMINIMUM = "PMIN";
    static const String* FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE = "HEP";
    static const String* BROKERS_SALES_CREDIT = "BROKERCREDIT";
    static const String* ORDER_QUANTITY_INCREMENT = "ORDRINCR";
    static const String* REFERENCE_TO_ROLLING_OR_CLOSING_TRADE = "REFTRADE";
    static const String* AVAILABLE_OFFER_QUANTITY_TO_BE_SHOWN_TO_THE_STREET = "AVAILQTY";
    static const String* ISSUERS_TICKER = "ISSUER";
    static const String* ISOCURRENCYCODE = "CURRENCY";
    static const String* THE_MINIMUM_RESIDUAL_OFFER_QUANTITY = "LEAVEQTY";
    static const String* DISCOUNT_RATE = "DISCOUNT";
    static const String* VALUATIONDISCOUNT = "HAIRCUT";
    static const String* SINGLE_MONTHLY_MORTALITY = "SMM";
    static const String* LOT_VARIANCE = "LOTVAR";
    static const String* PERCENTOFMANUFACTUREDHOUSINGPREPAYMENTCURVE = "MHP";
    static const String* FREEFORMTEXT = "TEXT";
    static const String* WHOLE_POOL = "WHOLE";
    static const String* GEOGRAPHICS_AND_RANGE = "GEOG";
    static const String* INTEREST_OF_ROLLING_OR_CLOSING_TRADE = "REFINT";
    static const String* TRADEVARIANCEVALUEINPERCENTMAXIMUMOVERORUNDERALLOCATIONALLOWED = "TRDVAR";
    static const String* FREEFORM_TEXT = "TEXT";
    static const String* RATING_SOURCE_AND_RANGE = "RATING";
    static const String* OFFER_QUANTITY_TO_BE_SHOWN_TO_INTERNAL_BROKERS = "INTERNALQTY";
    static const String* OFFER_PRICE_TO_BE_SHOWN_TO_INTERNAL_BROKERS = "INTERNALPX";
    static const String* NUMBER_OF_PIECES = "PIECES";
    static const String* MINIMUM_INCREMENT = "MININCR";
    static const String* PRODUCTIONYEAR = "PROD";
    static const String* WEIGHTED_AVERAGE_MATURITY = "WAM";
    static const String* GEOGRAPHICS = "GEOG";
    static const String* MINIMUMQUANTITY = "MINQTY";
    static const String* POOL_IDENTIFIER = "POOL";
    static const String* MATURITY_YEAR_AND_MONTH = "MAT";
    static const String* PRICINGFREQUENCY = "PRICEFREQ";
    static const String* SECURITYTYPEINCLUDEDOREXCLUDED = "SECTYPE";
    static const String* EXPLICITLOTIDENTIFIER = "LOT";
    static const String* MAXIMUM_SUBSTITUTIONS = "MAXSUBS";
    static const String* PRIMARY_OR_SECONDARY_MARKET_INDICATOR = "PRIMARY";
    static const String* WEIGHTEDAVERAGELOANAGE = "WALA";
    static const String* BENCHMARK_PRICE_SOURCE = "PXSOURCE";
    static const String* MINIMUMDENOMINATION = "MINDNOM";
    static const String* YEAR_OR_YEAR_MONTH_OF_ISSUE = "ISSUE";
    static const String* PAYMENTFREQUENCYCALENDAR = "PAYFREQ";
    static const String* POOLS_MAXIMUM = "PMAX";
    static const String* SUBSTITUTIONS_FREQUENCY = "SUBSFREQ";
    static const String* BENCHMARKPRICESOURCE = "PXSOURCE";
    static const String* ABSOLUTEPREPAYMENTSPEED = "ABS";
    static const String* BANKQUALIFIED = "BANKQUAL";
    static const String* YIELDRANGE = "YIELD";
    static const String* BARGAINCONDITIONS = "BGNCON";
    static const String* MONTHLYPREPAYMENTRATE = "MPR";
    static const String* POOLSPERLOT = "PPL";
    static const String* CONSTANT_PREPAYMENT_YIELD = "CPY";
    static const String* MINIMUM_DENOMINATION = "MINDNOM";
    static const String* ALTERNATIVE_MINIMUM_TAX = "AMT";
    static const String* CUSTOMSTARTENDDATE = "CUSTOMDATE";
    static const String* TYPEOFREDEMPTIONVALUESARE = "REDEMPTION";
    static const String* PERCENT_OF_BMA_PREPAYMENT_CURVE = "PSA";
    static const String* NUMBEROFPIECES = "PIECES";
    static const String* AMT = "AMT";
    static const String* CONSTANTPREPAYMENTPENALTY = "CPP";
    static const String* MAXIMUM_ORDER_SIZE = "MAXORDQTY";
    static const String* AUTOREINVESTMENTATRATEORBETTER = "AUTOREINV";
    static const String* BARGAIN_CONDITIONS = "BGNCON";
    static const String* GEOGRAPHICSANDRANGE = "GEOG";
    static const String* LOTVARIANCEVALUEINPERCENTMAXIMUMOVERORUNDERALLOCATIONALLOWED = "LOTVAR";
    static const String* TYPE_OF_ROLL_TRADE = "ROLLTYPE";
    static const String* PRINCIPAL_OF_ROLLING_OR_CLOSING_TRADE = "REFPRIN";
    static const String* PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE = "PPC";
    static const String* WEIGHTED_AVERAGE_COUPON = "WAC";
    static const String* AUTO_REINVESTMENT_AT_RATE_OR_BETTER = "AUTOREINV";
    static const String* STRUCTURE = "STRUCT";
    static const String* WHOLEPOOL = "WHOLE";
    static const String* MARKET_SECTOR = "SECTOR";
    static const String* MATURITY_RANGE = "MATURITY";
    static const String* SECURITY_TYPE_INCLUDED_OR_EXCLUDED = "SECTYPE";
    static const String* POOLSPERMILLION = "PPM";
    static const String* TRADE_VARIANCE = "TRDVAR";
    static const String* ISSUERSTICKER = "ISSUER";
    static const String* PRICERANGE = "PRICE";
    static const String* LOOKBACK_DAYS = "LOOKBACK";
    static const String* OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE = "MHP";
    static const String* POOLS_PER_MILLION = "PPM";
    static const String* MINIMUMINCREMENT = "MININCR";
    static const String* MATURITY_YEAR = "MAT";
    static const String* RATINGSOURCEANDRANGE = "RATING";
    static const String* AVERAGE_LOAN_SIZE = "AVSIZE";
    static const String* PURPOSE = "PURPOSE";
    static const String* ISO_CURRENCY_CODE = "CURRENCY";
    static const String* RESTRICTED = "RESTRICTED";
    static const String* BROKER_SALES_CREDIT_OVERRIDE = "SALESCREDITOVR";
    static const String* WEIGHTED_AVERAGE_LIFE_COUPON = "WAL";
    static const String* WEIGHTEDAVERAGECOUPON = "WAC";
    static const String* OF_PROSPECTUS_PREPAYMENT_CURVE = "PPC";
    static const String* ISSUESIZERANGE = "ISSUESIZE";
    static const String* YEAR_OF_ISSUE = "ISSUE";
    static const String* WEIGHTEDAVERAGELIFECOUPON = "WAL";
    static const String* PAYMENT_FREQUENCY_CALENDAR = "PAYFREQ";
    static const String* TRADERS_CREDIT = "TRADERCREDIT";
    static const String* MINIMUM_QUANTITY = "MINQTY";
    static const String* SUBSTITUTIONS_LEFT = "SUBSLEFT";
    static const String* POOLS_PER_TRADE = "PPT";
    static const String* TYPE_OF_REDEMPTION = "REDEMPTION";
    static const String* CONSTANT_PREPAYMENT_PENALTY = "CPP";
    static const String* WEIGHTED_AVERAGE_LOAN_AGE = "WALA";
    static const String* PRICE_RANGE = "PRICE";
    static const String* SUBSTITUTIONSFREQUENCYREPO = "SUBSFREQ";
    static const String* PRODUCTION_YEAR = "PROD";
    static const String* SINGLEMONTHLYMORTALITY = "SMM";
    static const String* OF_BMA_PREPAYMENT_CURVE = "PSA";
    static const String* EXPLICIT_LOT_IDENTIFIER = "LOT";
    static const String* ABSOLUTE_PREPAYMENT_SPEED = "ABS";
    static const String* MAXIMUMDENOMINATION = "MAXDNOM";
    static const String* PERCENTOFPROSPECTUSPREPAYMENTCURVE = "PPC";
    static const String* VALUATION_DISCOUNT = "HAIRCUT";
    static const String* YIELD_TO_MATURITY = "YTM";
    static const String* WEIGHTED_AVERAGE_LIFE = "WAL";
    static const String* POOLSMAXIMUM = "PMAX";
    static const String* YIELD_RANGE = "YIELD";
    static const String* PRICING_FREQUENCY = "PRICEFREQ";
    static const String* POOLSPERTRADE = "PPT";
    static const String* MONTHLY_PREPAYMENT_RATE = "MPR";
    static const String* COUPONRANGE = "COUPON";
    static const String* MARKETSECTOR = "SECTOR";
    static const String* AVERAGE_FICO_SCORE = "AVFICO";
    static const String* INSURED = "INSURED";
    static const String* BANK_QUALIFIED = "BANKQUAL";
    StipulationType() : StringField(233) {}
    StipulationType(String* data) : StringField(233, data) {}
  };

  public __gc class OutMainCntryUIndex : public DoubleField
  {
  public:
    static const int FIELD = 412;
    OutMainCntryUIndex() : DoubleField(412) {}
    OutMainCntryUIndex(double data) : DoubleField(412, data) {}
    OutMainCntryUIndex(double data, int decimalPadding) : DoubleField(412, data, decimalPadding) {}
  };

  public __gc class LegSettlmntTyp : public CharField
  {
  public:
    static const int FIELD = 587;
    LegSettlmntTyp() : CharField(587) {}
    LegSettlmntTyp(__wchar_t data) : CharField(587, data) {}
  };

  public __gc class NoRelationshipRiskInstruments : public IntField
  {
  public:
    static const int FIELD = 1587;
    NoRelationshipRiskInstruments() : IntField(1587) {}
    NoRelationshipRiskInstruments(int data) : IntField(1587, data) {}
  };

  public __gc class DerivativeNTPositionLimit : public IntField
  {
  public:
    static const int FIELD = 1274;
    DerivativeNTPositionLimit() : IntField(1274) {}
    DerivativeNTPositionLimit(int data) : IntField(1274, data) {}
  };

  public __gc class PriceQuoteMethod : public StringField
  {
  public:
    static const int FIELD = 1196;
    static const String* STANDARD = "STD";
    static const String* PERCENT_OF_PAR = "PCTPAR";
    static const String* INDEX = "INX";
    static const String* INTEREST_RATE_INDEX = "INT";
    PriceQuoteMethod() : StringField(1196) {}
    PriceQuoteMethod(String* data) : StringField(1196, data) {}
  };

  public __gc class LowLimitPrice : public DoubleField
  {
  public:
    static const int FIELD = 1148;
    LowLimitPrice() : DoubleField(1148) {}
    LowLimitPrice(double data) : DoubleField(1148, data) {}
    LowLimitPrice(double data, int decimalPadding) : DoubleField(1148, data, decimalPadding) {}
  };

  public __gc class LegUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 999;
    LegUnitOfMeasure() : StringField(999) {}
    LegUnitOfMeasure(String* data) : StringField(999, data) {}
  };

  public __gc class SessionRejectReason : public IntField
  {
  public:
    static const int FIELD = 373;
    static const int REQUIREDTAGMISSING = 1;
    static const int TAGSPECIFIEDOUTOFREQUIREDORDER = 14;
    static const int NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
    static const int INVALIDTAGNUMBER = 0;
    static const int VALUEISINCORRECTOUTOFRANGEFORTHISTAG = 5;
    static const int COMPID_PROBLEM = 9;
    static const int SENDINGTIMEACCURACYPROBLEM = 10;
    static const int SIGNATURE_PROBLEM = 8;
    static const int TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
    static const int UNDEFINEDTAG = 3;
    static const int XML_VALIDATION_ERROR = 12;
    static const int NONDATAVALUEINCLUDESFIELDDELIMITERSOHCHARACTER = 17;
    static const int UNDEFINED_TAG = 3;
    static const int TAGAPPEARSMORETHANONCE = 13;
    static const int INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
    static const int REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
    static const int REQUIRED_TAG_MISSING = 1;
    static const int INVALIDMSGTYPE = 11;
    static const int XMLVALIDATIONERROR = 12;
    static const int REPEATINGGROUPFIELDSOUTOFORDER = 15;
    static const int INCORRECTNUMINGROUPCOUNTFORREPEATINGGROUP = 16;
    static const int TAGSPECIFIEDWITHOUTAVALUE = 4;
    static const int DECRYPTIONPROBLEM = 7;
    static const int INCORRECTDATAFORMATFORVALUE = 6;
    static const int OTHER = 99;
    static const int INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
    static const int TAG_APPEARS_MORE_THAN_ONCE = 13;
    static const int COMPIDPROBLEM = 9;
    static const int TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
    static const int SIGNATUREPROBLEM = 8;
    static const int DECRYPTION_PROBLEM = 7;
    static const int INVALID_TAG_NUMBER = 0;
    static const int TAGNOTDEFINEDFORTHISMESSAGETYPE = 2;
    static const int VALUE_IS_INCORRECT = 5;
    static const int TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
    static const int INVALID_MSGTYPE = 11;
    static const int SENDINGTIME_ACCURACY_PROBLEM = 10;
    SessionRejectReason() : IntField(373) {}
    SessionRejectReason(int data) : IntField(373, data) {}
  };

  public __gc class PartyDetailsListReportID : public StringField
  {
  public:
    static const int FIELD = 1510;
    PartyDetailsListReportID() : StringField(1510) {}
    PartyDetailsListReportID(String* data) : StringField(1510, data) {}
  };

  public __gc class DeliveryType : public IntField
  {
  public:
    static const int FIELD = 919;
    static const int TRI_PARTY = 2;
    static const int HOLD_IN_CUSTODY = 3;
    static const int FREE = 1;
    static const int HOLDINCUSTODY = 3;
    static const int VERSUSPAYMENT = 0;
    static const int VERSUS_PAYMENT_DELIVER = 0;
    static const int FREE_DELIVER = 1;
    static const int TRIPARTY = 2;
    DeliveryType() : IntField(919) {}
    DeliveryType(int data) : IntField(919, data) {}
  };

  public __gc class AllocPrice : public DoubleField
  {
  public:
    static const int FIELD = 366;
    AllocPrice() : DoubleField(366) {}
    AllocPrice(double data) : DoubleField(366, data) {}
    AllocPrice(double data, int decimalPadding) : DoubleField(366, data, decimalPadding) {}
  };

  public __gc class NoBidComponents : public IntField
  {
  public:
    static const int FIELD = 420;
    NoBidComponents() : IntField(420) {}
    NoBidComponents(int data) : IntField(420, data) {}
  };

  public __gc class QuoteQualifier : public CharField
  {
  public:
    static const int FIELD = 695;
    QuoteQualifier() : CharField(695) {}
    QuoteQualifier(__wchar_t data) : CharField(695, data) {}
  };

  public __gc class Scope : public StringField
  {
  public:
    static const int FIELD = 546;
    static const __wchar_t LOCAL = '1';
    static const __wchar_t LOCAL_MARKET = '1';
    static const __wchar_t GLOBAL = '3';
    static const __wchar_t NATIONAL = '2';
    static const __wchar_t LOCALMARKET = '1';
    Scope() : StringField(546) {}
    Scope(String* data) : StringField(546, data) {}
  };

  public __gc class NoSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 454;
    NoSecurityAltID() : IntField(454) {}
    NoSecurityAltID(int data) : IntField(454, data) {}
  };

  public __gc class RootPartySubID : public StringField
  {
  public:
    static const int FIELD = 1121;
    RootPartySubID() : StringField(1121) {}
    RootPartySubID(String* data) : StringField(1121, data) {}
  };

  public __gc class DeliverToLocationID : public StringField
  {
  public:
    static const int FIELD = 145;
    DeliverToLocationID() : StringField(145) {}
    DeliverToLocationID(String* data) : StringField(145, data) {}
  };

  public __gc class DeleteReason : public CharField
  {
  public:
    static const int FIELD = 285;
    static const __wchar_t CANCELLATION = '0';
    static const __wchar_t CANCELTRADEBUST = '0';
    static const __wchar_t CANCELATION = '0';
    static const __wchar_t ERROR = '1';
    DeleteReason() : CharField(285) {}
    DeleteReason(__wchar_t data) : CharField(285, data) {}
  };

  public __gc class BidSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 188;
    BidSpotRate() : DoubleField(188) {}
    BidSpotRate(double data) : DoubleField(188, data) {}
    BidSpotRate(double data, int decimalPadding) : DoubleField(188, data, decimalPadding) {}
  };

  public __gc class Nested4PartyID : public StringField
  {
  public:
    static const int FIELD = 1415;
    Nested4PartyID() : StringField(1415) {}
    Nested4PartyID(String* data) : StringField(1415, data) {}
  };

  public __gc class InViewOfCommon : public BooleanField
  {
  public:
    static const int FIELD = 328;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    InViewOfCommon() : BooleanField(328) {}
    InViewOfCommon(bool data) : BooleanField(328, data) {}
  };

  public __gc class UnderlyingSettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 732;
    UnderlyingSettlPrice() : DoubleField(732) {}
    UnderlyingSettlPrice(double data) : DoubleField(732, data) {}
    UnderlyingSettlPrice(double data, int decimalPadding) : DoubleField(732, data, decimalPadding) {}
  };

  public __gc class RegistRejReasonText : public StringField
  {
  public:
    static const int FIELD = 496;
    RegistRejReasonText() : StringField(496) {}
    RegistRejReasonText(String* data) : StringField(496, data) {}
  };

  public __gc class NoSides : public IntField
  {
  public:
    static const int FIELD = 552;
    static const __wchar_t BOTHSIDES = '2';
    static const __wchar_t ONESIDE = '1';
    static const __wchar_t ONE_SIDE = '1';
    static const __wchar_t BOTH_SIDES = '2';
    NoSides() : IntField(552) {}
    NoSides(int data) : IntField(552, data) {}
  };

  public __gc class LegAllocAccount : public StringField
  {
  public:
    static const int FIELD = 671;
    LegAllocAccount() : StringField(671) {}
    LegAllocAccount(String* data) : StringField(671, data) {}
  };

  public __gc class NoRelationshipRiskWarningLevels : public IntField
  {
  public:
    static const int FIELD = 1613;
    NoRelationshipRiskWarningLevels() : IntField(1613) {}
    NoRelationshipRiskWarningLevels(int data) : IntField(1613, data) {}
  };

  public __gc class RelationshipRiskProduct : public IntField
  {
  public:
    static const int FIELD = 1596;
    RelationshipRiskProduct() : IntField(1596) {}
    RelationshipRiskProduct(int data) : IntField(1596, data) {}
  };

  public __gc class LegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 620;
    LegSecurityDesc() : StringField(620) {}
    LegSecurityDesc(String* data) : StringField(620, data) {}
  };

  public __gc class ClOrdLinkID : public StringField
  {
  public:
    static const int FIELD = 583;
    ClOrdLinkID() : StringField(583) {}
    ClOrdLinkID(String* data) : StringField(583, data) {}
  };

  public __gc class OrigSendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 122;
    OrigSendingTime() : UtcTimeStampField(122) {}
    OrigSendingTime(DateTime data) : UtcTimeStampField(122, data) {}
  };

  public __gc class EncodedLegIssuerLen : public IntField
  {
  public:
    static const int FIELD = 618;
    EncodedLegIssuerLen() : IntField(618) {}
    EncodedLegIssuerLen(int data) : IntField(618, data) {}
  };

  public __gc class OrderID : public StringField
  {
  public:
    static const int FIELD = 37;
    OrderID() : StringField(37) {}
    OrderID(String* data) : StringField(37, data) {}
  };

  public __gc class SecurityType : public StringField
  {
  public:
    static const int FIELD = 167;
    static const String* TERM_LIQUIDITY_NOTE = "TLQN";
    static const String* TO_BE_ANNOUNCED = "TBA";
    static const String* REVERSE_REPURCHASE_AGREEMENT = "RVRP";
    static const String* BRADY_BOND = "BRADY";
    static const String* TREASURYINFLATIONPROTECTEDSECURITIES = "TIPS";
    static const String* CORP_MORTGAGE_BACKED_SECURITIES = "CMBS";
    static const String* CERTIFICATE_OF_PARTICIPATION = "COFP";
    static const String* BUY_SELLBACK = "BUYSELL";
    static const String* OPTIONS_ON_COMBO = "OOC";
    static const String* MULTILEG_INSTRUMENT = "MLEG";
    static const String* TAX_ALLOCATION = "TAXA";
    static const String* US_TREASURY_NOTE_BOND = "UST";
    static const String* REVENUE_ANTICIPATION_NOTE = "RAN";
    static const String* YANKEECERTIFICATEOFDEPOSIT = "YCD";
    static const String* MEDIUMTERMNOTES = "MTN";
    static const String* SPECIAL_TAX = "SPCLT";
    static const String* PRIVATE_EXPORT_FUNDING = "PEF";
    static const String* EUROCERTIFICATEOFDEPOSIT = "EUCD";
    static const String* SPECIAL_OBLIGATION = "SPCLO";
    static const String* FX_SWAP = "FXSWAP";
    static const String* REVOLVER_TERM_LOAN = "RVLVTRM";
    static const String* TAXEXEMPTCOMMERCIALPAPER = "TECP";
    static const String* REVOLVER_LOAN = "RVLV";
    static const String* CASH = "CASH";
    static const String* USTREASURYNOTEDEPRECATEDVALUEUSETNOTE = "UST";
    static const String* MISCELLANEOUS_PASS_THRU = "MPT";
    static const String* CONVERTIBLEBOND = "CB";
    static const String* VARIABLE_RATE_DEMAND_NOTE = "VRDN";
    static const String* MULTILEGINSTRUMENT = "MLEG";
    static const String* FEDERAL_AGENCY_DISCOUNT_NOTE = "FADN";
    static const String* SPECIALOBLIGATION = "SPCLO";
    static const String* CANADIAN_TREASURY_BILLS = "CTB";
    static const String* REVENUEANTICIPATIONNOTE = "RAN";
    static const String* CERTIFICATEOFOBLIGATION = "COFO";
    static const String* INDEXEDLINKED = "XLINKD";
    static const String* LETTER_OF_CREDIT = "LOFC";
    static const String* MANDATORYTENDER = "MT";
    static const String* USTREASURYBOND = "TBOND";
    static const String* TERMLOAN = "TERM";
    static const String* OPTIONS_ON_FUTURES = "OOF";
    static const String* PROMISSORYNOTE = "PN";
    static const String* DUAL_CURRENCY = "DUAL";
    static const String* WILDCARD_ENTRY = "WLD";
    static const String* BANK_DEPOSITORY_NOTE = "BDN";
    static const String* REPLACED = "REPLACD";
    static const String* MORTGAGE_PRINCIPAL_ONLY = "MPO";
    static const String* CANADIAN_TREASURY_NOTES = "CAN";
    static const String* USTREASURYBILLDEPRECATEDVALUEUSETBILL = "USTB";
    static const String* TOBEANNOUNCED = "TBA";
    static const String* SECURITIES_PLEDGE = "SECPLEDGE";
    static const String* YANKEE_CORPORATE_BOND = "YANK";
    static const String* FX_SPOT = "FXSPOT";
    static const String* LIQUIDITYNOTE = "LQN";
    static const String* OVERNIGHT = "ONITE";
    static const String* MORTGAGE_INTEREST_ONLY = "MIO";
    static const String* BRIDGELOAN = "BRIDGE";
    static const String* OTHER_ANTICIPATION_NOTES_BAN_GAN_ETC = "AN";
    static const String* EXTENDED_COMM_NOTE = "XCN";
    static const String* CERTIFICATEOFPARTICIPATION = "COFP";
    static const String* CATS_TIGERS_LIONS = "ZOO";
    static const String* FORWARD = "FORWARD";
    static const String* YANKEE_CERTIFICATE_OF_DEPOSIT = "YCD";
    static const String* PREFERRED_STOCK = "PS";
    static const String* US_TREASURY_BOND = "TBOND";
    static const String* TREASURY_INFLATION_PROTECTED_SECURITIES = "TIPS";
    static const String* BUYSELLBACK = "BUYSELL";
    static const String* OPTIONS_ON_PHYSICAL = "OOP";
    static const String* ASSETBACKEDSECURITIES = "ABS";
    static const String* NON_DELIVERABLE_FORWARD = "FXNDF";
    static const String* MORTGAGE_PRINCIPLE_ONLY = "MPO";
    static const String* MORTGAGE_IOETTE = "IET";
    static const String* USD_SUPRANATIONAL_COUPONS = "SUPRA";
    static const String* WARRANT = "WAR";
    static const String* FOREIGN_EXCHANGE_CONTRACT = "FOR";
    static const String* FOREIGNEXCHANGECONTRACT = "FOR";
    static const String* EURO_CORPORATE_FLOATING_RATE_NOTES = "EUFRN";
    static const String* SPECIAL_ASSESSMENT = "SPCLA";
    static const String* EUROSUPRANATIONALCOUPONS = "EUSUPRA";
    static const String* DEBTOR_IN_POSSESSION = "DINP";
    static const String* CANADIAN_MONEY_MARKETS = "CAMM";
    static const String* MORTGAGEPRINCIPALONLY = "MPO";
    static const String* USTREASURYNOTE = "TNOTE";
    static const String* DEBTORINPOSSESSION = "DINP";
    static const String* REVENUEBONDS = "REV";
    static const String* MORTGAGEINTERESTONLY = "MIO";
    static const String* DEPOSITNOTES = "DN";
    static const String* PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = "TCAL";
    static const String* MORTGAGEPRIVATEPLACEMENT = "MPP";
    static const String* NO_SECURITY_TYPE = "NONE";
    static const String* SPECIALASSESSMENT = "SPCLA";
    static const String* LETTEROFCREDIT = "LOFC";
    static const String* TAXALLOCATION = "TAXA";
    static const String* TAXABLE_MUNICIPAL_CP = "TMCP";
    static const String* OPTION = "OPT";
    static const String* NOSECURITYTYPE = "NONE";
    static const String* PROMISSORY_NOTE = "PN";
    static const String* COLLATERALIZEDMORTGAGEOBLIGATION = "CMO";
    static const String* DUALCURRENCY = "DUAL";
    static const String* CREDIT_DEFAULT_SWAP = "CDS";
    static const String* TAXANTICIPATIONNOTE = "TAN";
    static const String* MORTGAGE_PRIVATE_PLACEMENT = "MPP";
    static const String* GENERAL_OBLIGATION_BONDS = "GO";
    static const String* SHORTTERMLOANNOTE = "STN";
    static const String* COMMERCIAL_PAPER = "CP";
    static const String* MORTGAGE_BACKED_SECURITIES = "MBS";
    static const String* EURO_SOVEREIGNS = "EUSOV";
    static const String* TAX_REVENUE_ANTICIPATION_NOTE = "TRAN";
    static const String* PFANDBRIEFE = "PFAND";
    static const String* OTHER_ANTICIPATION_NOTES = "AN";
    static const String* TAX_EXEMPT_COMMERCIAL_PAPER = "TECP";
    static const String* PRIVATEEXPORTFUNDING = "PEF";
    static const String* OTHERANTICIPATIONNOTESBANGANETC = "AN";
    static const String* TAX_ANTICIPATION_NOTE = "TAN";
    static const String* TREASURY_BILL = "TB";
    static const String* PLAZOS_FIJOS = "PZFJ";
    static const String* EURO_COMMERCIAL_PAPER = "EUCP";
    static const String* MANDATORY_TENDER = "MT";
    static const String* COLLATERALIZED_MORTGAGE_OBLIGATION = "CMO";
    static const String* PREFERREDSTOCK = "PS";
    static const String* VARIABLERATEDEMANDNOTE = "VRDN";
    static const String* DEFAULTED = "DEFLTED";
    static const String* INDEXED_LINKED = "XLINKD";
    static const String* IOETTE_MORTGAGE = "IET";
    static const String* CERTIFICATE_OF_DEPOSIT = "CD";
    static const String* BILLOFEXCHANGES = "BOX";
    static const String* PRINCIPALSTRIPOFACALLABLEBONDORNOTE = "TCAL";
    static const String* EUROSOVEREIGNS = "EUSOV";
    static const String* TIME_DEPOSIT = "TD";
    static const String* CORPORATEBOND = "CORP";
    static const String* FX_FORWARD = "FXFWD";
    static const String* US_CORPORATE_FLOATING_RATE_NOTES = "FRN";
    static const String* US_TREASURY_NOTE_TNOTE = "TNOTE";
    static const String* MORTGAGEBACKEDSECURITIES = "MBS";
    static const String* DEPOSIT_NOTES = "DN";
    static const String* CORPORATEPRIVATEPLACEMENT = "CPP";
    static const String* FEDERAL_HOUSING_AUTHORITY = "FHA";
    static const String* MATURED = "MATURED";
    static const String* SWINGLINEFACILITY = "SWING";
    static const String* MULTI_LEG_INSTRUMENT = "MLEG";
    static const String* CANADIAN_PROVINCIAL_BONDS = "PROV";
    static const String* MEDIUM_TERM_NOTES = "MTN";
    static const String* RETIRED = "RETIRED";
    static const String* MUTUAL_FUND = "MF";
    static const String* SECURITIESPLEDGE = "SECPLEDGE";
    static const String* COMMERCIALPAPER = "CP";
    static const String* REPURCHASE_AGREEMENT = "RP";
    static const String* BILL_OF_EXCHANGES = "BOX";
    static const String* MUTUALFUND = "MF";
    static const String* COLLATERALIZE_MORTGAGE_OBLIGATION = "CMO";
    static const String* EXTENDEDCOMMNOTE = "XCN";
    static const String* FEDERAL_HOME_LOAN = "FHL";
    static const String* REVOLVERLOAN = "RVLV";
    static const String* PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = "TPRN";
    static const String* STRUCTURED_NOTES = "STRUCT";
    static const String* INTERESTSTRIPFROMANYBONDORNOTE = "TINT";
    static const String* CANADIAN_MORTGAGE_BONDS = "CMB";
    static const String* REPURCHASE = "REPO";
    static const String* AGENCY_POOLS = "POOL";
    static const String* EURO_CORPORATE_BOND = "EUCORP";
    static const String* SWING_LINE_FACILITY = "SWING";
    static const String* USDSUPRANATIONALCOUPONS = "SUPRA";
    static const String* REVOLVERTERMLOAN = "RVLVTRM";
    static const String* LIQUIDITY_NOTE = "LQN";
    static const String* MISCELLANEOUSPASSTHROUGH = "MPT";
    static const String* CONVERTIBLE_BOND = "CB";
    static const String* ASSET_BACKED_SECURITIES = "ABS";
    static const String* WILDCARDENTRY = "WLD";
    static const String* YANKEECORPORATEBOND = "YANK";
    static const String* TAXREVENUEANTICIPATIONNOTE = "TRAN";
    static const String* GOVERNMENT_NATIONAL_MORTGAGE_ASSOCIATION = "GN";
    static const String* BRADYBOND = "BRADY";
    static const String* USTREASURYBILL = "TBILL";
    static const String* STUDENT_LOAN_MARKETING_ASSOCIATION = "SL";
    static const String* EUROCORPORATEBOND = "EUCORP";
    static const String* FUTURE = "FUT";
    static const String* US_TREASURY_BILL_TBILL = "TBILL";
    static const String* TREASURIES_PLUS_AGENCY_DEBENTURE = "GOVT";
    static const String* EURO_CERTIFICATE_OF_DEPOSIT = "EUCD";
    static const String* BANKERS_ACCEPTANCE = "BA";
    static const String* AMENDEDRESTATED = "AMENDED";
    static const String* TERM_LOAN = "TERM";
    static const String* BANKNOTES = "BN";
    static const String* SHORT_TERM_LOAN_NOTE = "STN";
    static const String* AMENDED_RESTATED = "AMENDED";
    static const String* INTEREST_RATE_SWAP = "IRS";
    static const String* EUROCOMMERCIALPAPER = "EUCP";
    static const String* US_TREASURY_NOTE_UST = "UST";
    static const String* US_TREASURY_BILL_USTB = "USTB";
    static const String* FEDERAL_NATIONAL_MORTGAGE_ASSOCIATION = "FN";
    static const String* WITHDRAWN = "WITHDRN";
    static const String* CORPORATE_PRIVATE_PLACEMENT = "CPP";
    static const String* CERTIFICATE_OF_OBLIGATION = "COFO";
    static const String* INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = "TINT";
    static const String* STRUCTUREDNOTES = "STRUCT";
    static const String* BANKERSACCEPTANCE = "BA";
    static const String* NO_ISITC_SECURITY_TYPE = "NONE";
    static const String* CALLLOANS = "CL";
    static const String* MISCELLANEOUS_PASS_THROUGH = "MPT";
    static const String* FEDERAL_AGENCY_COUPON = "FAC";
    static const String* CORPORATE_BOND = "CORP";
    static const String* WILDCARD_ENTRY_FOR_USE_ON_SECURITY_DEFINITION_REQUEST = "?";
    static const String* CORPMORTGAGEBACKEDSECURITIES = "CMBS";
    static const String* EURO_SUPRANATIONAL_COUPONS = "EUSUPRA";
    static const String* CALL_LOANS = "CL";
    static const String* CERTIFICATEOFDEPOSIT = "CD";
    static const String* SECURED_LIQUIDITY_NOTE = "SLQN";
    static const String* TIMEDEPOSIT = "TD";
    static const String* BANK_NOTES = "BN";
    static const String* US_TREASURY_BILL = "USTB";
    static const String* GENERALOBLIGATIONBONDS = "GO";
    static const String* COMMONSTOCK = "CS";
    static const String* PLAZOSFIJOS = "PZFJ";
    static const String* SECURITIES_LOAN = "SECLOAN";
    static const String* SECURITIESLOAN = "SECLOAN";
    static const String* MUNICIPAL_BOND = "MUNI";
    static const String* REVENUE_BONDS = "REV";
    static const String* SPECIALTAX = "SPCLT";
    static const String* PRINCIPALSTRIPFROMANONCALLABLEBONDORNOTE = "TPRN";
    static const String* BRIDGE_LOAN = "BRIDGE";
    static const String* IOETTEMORTGAGE = "IET";
    static const String* FEDERALAGENCYCOUPON = "FAC";
    static const String* COMMON_STOCK = "CS";
    static const String* FEDERALAGENCYDISCOUNTNOTE = "FADN";
    SecurityType() : StringField(167) {}
    SecurityType(String* data) : StringField(167, data) {}
  };

  public __gc class RoundingDirection : public CharField
  {
  public:
    static const int FIELD = 468;
    static const __wchar_t ROUNDUP = '2';
    static const __wchar_t ROUND_DOWN = '1';
    static const __wchar_t ROUND_TO_NEAREST = '0';
    static const __wchar_t ROUND_UP = '2';
    static const __wchar_t ROUNDDOWN = '1';
    static const __wchar_t ROUNDNEAREST = '0';
    RoundingDirection() : CharField(468) {}
    RoundingDirection(__wchar_t data) : CharField(468, data) {}
  };

  public __gc class FillExecID : public StringField
  {
  public:
    static const int FIELD = 1363;
    FillExecID() : StringField(1363) {}
    FillExecID(String* data) : StringField(1363, data) {}
  };

  public __gc class NoEvents : public IntField
  {
  public:
    static const int FIELD = 864;
    NoEvents() : IntField(864) {}
    NoEvents(int data) : IntField(864, data) {}
  };

  public __gc class RoundLot : public DoubleField
  {
  public:
    static const int FIELD = 561;
    RoundLot() : DoubleField(561) {}
    RoundLot(double data) : DoubleField(561, data) {}
    RoundLot(double data, int decimalPadding) : DoubleField(561, data, decimalPadding) {}
  };

  public __gc class MDEntrySize : public DoubleField
  {
  public:
    static const int FIELD = 271;
    MDEntrySize() : DoubleField(271) {}
    MDEntrySize(double data) : DoubleField(271, data) {}
    MDEntrySize(double data, int decimalPadding) : DoubleField(271, data, decimalPadding) {}
  };

  public __gc class EncodedIssuerLen : public IntField
  {
  public:
    static const int FIELD = 348;
    EncodedIssuerLen() : IntField(348) {}
    EncodedIssuerLen(int data) : IntField(348, data) {}
  };

  public __gc class DerivativePriceUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1316;
    DerivativePriceUnitOfMeasureQty() : DoubleField(1316) {}
    DerivativePriceUnitOfMeasureQty(double data) : DoubleField(1316, data) {}
    DerivativePriceUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1316, data, decimalPadding) {}
  };

  public __gc class TimeUnit : public StringField
  {
  public:
    static const int FIELD = 997;
    static const String* MINUTE = "Min";
    static const String* WEEK = "Wk";
    static const String* SECOND = "S";
    static const String* MONTH = "Mo";
    static const String* HOUR = "H";
    static const String* DAY = "D";
    static const String* YEAR = "Yr";
    TimeUnit() : StringField(997) {}
    TimeUnit(String* data) : StringField(997, data) {}
  };

  public __gc class TotNoOrders : public IntField
  {
  public:
    static const int FIELD = 68;
    TotNoOrders() : IntField(68) {}
    TotNoOrders(int data) : IntField(68, data) {}
  };

  public __gc class PartyAltID : public StringField
  {
  public:
    static const int FIELD = 1517;
    PartyAltID() : StringField(1517) {}
    PartyAltID(String* data) : StringField(1517, data) {}
  };

  public __gc class LegSwapType : public IntField
  {
  public:
    static const int FIELD = 690;
    static const int MODIFIED_DURATION = 2;
    static const int PARFORPAR = 1;
    static const int RISK = 4;
    static const int PAR_FOR_PAR = 1;
    static const int MODIFIEDDURATION = 2;
    static const int PROCEEDS = 5;
    LegSwapType() : IntField(690) {}
    LegSwapType(int data) : IntField(690, data) {}
  };

  public __gc class IOITransType : public CharField
  {
  public:
    static const int FIELD = 28;
    static const __wchar_t REPLACE = 'R';
    static const __wchar_t NEW = 'N';
    static const __wchar_t CANCEL = 'C';
    IOITransType() : CharField(28) {}
    IOITransType(__wchar_t data) : CharField(28, data) {}
  };

  public __gc class RawDataLength : public IntField
  {
  public:
    static const int FIELD = 95;
    RawDataLength() : IntField(95) {}
    RawDataLength(int data) : IntField(95, data) {}
  };

  public __gc class UnderlyingSecurityType : public StringField
  {
  public:
    static const int FIELD = 310;
    UnderlyingSecurityType() : StringField(310) {}
    UnderlyingSecurityType(String* data) : StringField(310, data) {}
  };

  public __gc class UnderlyingLegSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 1335;
    UnderlyingLegSecurityAltID() : StringField(1335) {}
    UnderlyingLegSecurityAltID(String* data) : StringField(1335, data) {}
  };

  public __gc class SecurityReportID : public IntField
  {
  public:
    static const int FIELD = 964;
    SecurityReportID() : IntField(964) {}
    SecurityReportID(int data) : IntField(964, data) {}
  };

  public __gc class TotNumReports : public IntField
  {
  public:
    static const int FIELD = 911;
    TotNumReports() : IntField(911) {}
    TotNumReports(int data) : IntField(911, data) {}
  };

  public __gc class TotalNumPosReports : public IntField
  {
  public:
    static const int FIELD = 727;
    TotalNumPosReports() : IntField(727) {}
    TotalNumPosReports(int data) : IntField(727, data) {}
  };

  public __gc class SecurityReqID : public StringField
  {
  public:
    static const int FIELD = 320;
    SecurityReqID() : StringField(320) {}
    SecurityReqID(String* data) : StringField(320, data) {}
  };

  public __gc class PosReqResult : public IntField
  {
  public:
    static const int FIELD = 728;
    static const int REQUESTFORPOSITIONNOTSUPPORTED = 4;
    static const int VALID_REQUEST = 0;
    static const int NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA = 2;
    static const int NOT_AUTHORIZED_TO_REQUEST_POSITIONS = 3;
    static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
    static const int NOTAUTHORIZEDTOREQUESTPOSITIONS = 3;
    static const int OTHER = 99;
    static const int NOPOSITIONSFOUNDTHATMATCHCRITERIA = 2;
    static const int REQUEST_FOR_POSITION_NOT_SUPPORTED = 4;
    static const int INVALIDORUNSUPPORTEDREQUEST = 1;
    static const int VALIDREQUEST = 0;
    PosReqResult() : IntField(728) {}
    PosReqResult(int data) : IntField(728, data) {}
  };

  public __gc class LegOfferForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 1068;
    LegOfferForwardPoints() : DoubleField(1068) {}
    LegOfferForwardPoints(double data) : DoubleField(1068, data) {}
    LegOfferForwardPoints(double data, int decimalPadding) : DoubleField(1068, data, decimalPadding) {}
  };

  public __gc class AllowableOneSidednessCurr : public StringField
  {
  public:
    static const int FIELD = 767;
    AllowableOneSidednessCurr() : StringField(767) {}
    AllowableOneSidednessCurr(String* data) : StringField(767, data) {}
  };

  public __gc class AffectedOrderID : public StringField
  {
  public:
    static const int FIELD = 535;
    AffectedOrderID() : StringField(535) {}
    AffectedOrderID(String* data) : StringField(535, data) {}
  };

  public __gc class UnderlyingCountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 592;
    UnderlyingCountryOfIssue() : StringField(592) {}
    UnderlyingCountryOfIssue(String* data) : StringField(592, data) {}
  };

  public __gc class UnderlyingRepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 245;
    UnderlyingRepurchaseRate() : DoubleField(245) {}
    UnderlyingRepurchaseRate(double data) : DoubleField(245, data) {}
    UnderlyingRepurchaseRate(double data, int decimalPadding) : DoubleField(245, data, decimalPadding) {}
  };

  public __gc class LastMsgSeqNumProcessed : public IntField
  {
  public:
    static const int FIELD = 369;
    LastMsgSeqNumProcessed() : IntField(369) {}
    LastMsgSeqNumProcessed(int data) : IntField(369, data) {}
  };

  public __gc class UnderlyingCFICode : public StringField
  {
  public:
    static const int FIELD = 463;
    UnderlyingCFICode() : StringField(463) {}
    UnderlyingCFICode(String* data) : StringField(463, data) {}
  };

  public __gc class DerivativeOptAttribute : public CharField
  {
  public:
    static const int FIELD = 1265;
    DerivativeOptAttribute() : CharField(1265) {}
    DerivativeOptAttribute(__wchar_t data) : CharField(1265, data) {}
  };

  public __gc class PegSecurityID : public StringField
  {
  public:
    static const int FIELD = 1097;
    PegSecurityID() : StringField(1097) {}
    PegSecurityID(String* data) : StringField(1097, data) {}
  };

  public __gc class HostCrossID : public StringField
  {
  public:
    static const int FIELD = 961;
    HostCrossID() : StringField(961) {}
    HostCrossID(String* data) : StringField(961, data) {}
  };

  public __gc class ExecInstValue : public CharField
  {
  public:
    static const int FIELD = 1308;
    ExecInstValue() : CharField(1308) {}
    ExecInstValue(__wchar_t data) : CharField(1308, data) {}
  };

  public __gc class DerivativeOptPayAmount : public DoubleField
  {
  public:
    static const int FIELD = 1225;
    DerivativeOptPayAmount() : DoubleField(1225) {}
    DerivativeOptPayAmount(double data) : DoubleField(1225, data) {}
    DerivativeOptPayAmount(double data, int decimalPadding) : DoubleField(1225, data, decimalPadding) {}
  };

  public __gc class UnderlyingCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 435;
    UnderlyingCouponRate() : DoubleField(435) {}
    UnderlyingCouponRate(double data) : DoubleField(435, data) {}
    UnderlyingCouponRate(double data, int decimalPadding) : DoubleField(435, data, decimalPadding) {}
  };

  public __gc class SettlInstMode : public CharField
  {
  public:
    static const int FIELD = 160;
    static const __wchar_t ACCOUNTOVERRIDING = '2';
    static const __wchar_t REJECT = '5';
    static const __wchar_t DEFAULT = '0';
    static const __wchar_t REQUEST_REJECT = '5';
    static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING = '2';
    static const __wchar_t SIPROVIDED = '1';
    static const __wchar_t ACCOUNTSTANDING = '3';
    static const __wchar_t CIVORDERSINGLEACCT = '4';
    static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_STANDING = '3';
    static const __wchar_t SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = '4';
    static const __wchar_t STANDING_INSTRUCTIONS_PROVIDED = '1';
    SettlInstMode() : CharField(160) {}
    SettlInstMode(__wchar_t data) : CharField(160, data) {}
  };

  public __gc class SecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 456;
    SecurityAltIDSource() : StringField(456) {}
    SecurityAltIDSource(String* data) : StringField(456, data) {}
  };

  public __gc class PreviouslyReported : public BooleanField
  {
  public:
    static const int FIELD = 570;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PreviouslyReported() : BooleanField(570) {}
    PreviouslyReported(bool data) : BooleanField(570, data) {}
  };

  public __gc class ContextPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 1524;
    ContextPartyIDSource() : CharField(1524) {}
    ContextPartyIDSource(__wchar_t data) : CharField(1524, data) {}
  };

  public __gc class RptSys : public StringField
  {
  public:
    static const int FIELD = 1135;
    RptSys() : StringField(1135) {}
    RptSys(String* data) : StringField(1135, data) {}
  };

  public __gc class NoNested2PartySubIDs : public IntField
  {
  public:
    static const int FIELD = 806;
    NoNested2PartySubIDs() : IntField(806) {}
    NoNested2PartySubIDs(int data) : IntField(806, data) {}
  };

  public __gc class RefAllocID : public StringField
  {
  public:
    static const int FIELD = 72;
    RefAllocID() : StringField(72) {}
    RefAllocID(String* data) : StringField(72, data) {}
  };

  public __gc class DefOfferSize : public DoubleField
  {
  public:
    static const int FIELD = 294;
    DefOfferSize() : DoubleField(294) {}
    DefOfferSize(double data) : DoubleField(294, data) {}
    DefOfferSize(double data, int decimalPadding) : DoubleField(294, data, decimalPadding) {}
  };

  public __gc class ProductComplex : public StringField
  {
  public:
    static const int FIELD = 1227;
    ProductComplex() : StringField(1227) {}
    ProductComplex(String* data) : StringField(1227, data) {}
  };

  public __gc class CustOrderHandlingInst : public StringField
  {
  public:
    static const int FIELD = 1031;
    static const __wchar_t PEGGED = 'PEG';
    static const __wchar_t MARKET_ON_OPEN = 'MOO';
    static const __wchar_t SCALE = 'SCL';
    static const __wchar_t FILL_OR_KILL = 'FOK';
    static const __wchar_t ALL_OR_NONE = 'AON';
    static const __wchar_t NOT_HELD = 'NH';
    static const __wchar_t DIRECTED_ORDER = 'DIR';
    static const __wchar_t STOP_STOCK_TRANSACTION = 'S.W';
    static const __wchar_t OVER_THE_DAY = 'OVD';
    static const __wchar_t ADD_ON_ORDER = 'ADD';
    static const __wchar_t MARKET_AT_CLOSE = 'MAC';
    static const __wchar_t LIMIT_ON_OPEN = 'LOO';
    static const __wchar_t CASH_NOT_HELD = 'CNH';
    static const __wchar_t MARKET_ON_CLOSE = 'MOC';
    static const __wchar_t TIME_ORDER = 'TMO';
    static const __wchar_t LIMIT_ON_CLOSE = 'LOC';
    static const __wchar_t IMMEDIATE_OR_CANCEL = 'IOC';
    static const __wchar_t TRAILING_STOP = 'TS';
    static const __wchar_t WORK = 'WRK';
    static const __wchar_t RESERVE_SIZE_ORDER = 'RSV';
    static const __wchar_t MINIMUM_QUANTITY = 'MQT';
    static const __wchar_t MARKET_AT_OPEN = 'MAO';
    static const __wchar_t IMBALANCE_ONLY = 'IO';
    static const __wchar_t EXCHANGE_FOR_PHYSICAL_TRANSACTION = 'E.W';
    CustOrderHandlingInst() : StringField(1031) {}
    CustOrderHandlingInst(String* data) : StringField(1031, data) {}
  };

  public __gc class MDPriceLevel : public IntField
  {
  public:
    static const int FIELD = 1023;
    MDPriceLevel() : IntField(1023) {}
    MDPriceLevel(int data) : IntField(1023, data) {}
  };

  public __gc class LegOptionRatio : public DoubleField
  {
  public:
    static const int FIELD = 1017;
    LegOptionRatio() : DoubleField(1017) {}
    LegOptionRatio(double data) : DoubleField(1017, data) {}
    LegOptionRatio(double data, int decimalPadding) : DoubleField(1017, data, decimalPadding) {}
  };

  public __gc class SecurityStatus : public StringField
  {
  public:
    static const int FIELD = 965;
    static const String* INACTIVE = "2";
    static const String* ACTIVE = "1";
    SecurityStatus() : StringField(965) {}
    SecurityStatus(String* data) : StringField(965, data) {}
  };

  public __gc class LegRefID : public StringField
  {
  public:
    static const int FIELD = 654;
    LegRefID() : StringField(654) {}
    LegRefID(String* data) : StringField(654, data) {}
  };

  public __gc class DividendYield : public DoubleField
  {
  public:
    static const int FIELD = 1380;
    DividendYield() : DoubleField(1380) {}
    DividendYield(double data) : DoubleField(1380, data) {}
    DividendYield(double data, int decimalPadding) : DoubleField(1380, data, decimalPadding) {}
  };

  public __gc class DerivativeInstrumentPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1298;
    DerivativeInstrumentPartySubIDType() : IntField(1298) {}
    DerivativeInstrumentPartySubIDType(int data) : IntField(1298, data) {}
  };

  public __gc class EndStrikePxRange : public DoubleField
  {
  public:
    static const int FIELD = 1203;
    EndStrikePxRange() : DoubleField(1203) {}
    EndStrikePxRange(double data) : DoubleField(1203, data) {}
    EndStrikePxRange(double data, int decimalPadding) : DoubleField(1203, data, decimalPadding) {}
  };

  public __gc class DisplayQty : public DoubleField
  {
  public:
    static const int FIELD = 1138;
    DisplayQty() : DoubleField(1138) {}
    DisplayQty(double data) : DoubleField(1138, data) {}
    DisplayQty(double data, int decimalPadding) : DoubleField(1138, data, decimalPadding) {}
  };

  public __gc class LegSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 764;
    LegSecuritySubType() : StringField(764) {}
    LegSecuritySubType(String* data) : StringField(764, data) {}
  };

  public __gc class ProcessCode : public CharField
  {
  public:
    static const int FIELD = 81;
    static const __wchar_t SOFT_DOLLAR = '1';
    static const __wchar_t STEPOUTSOFT = '5';
    static const __wchar_t STEPOUT = '3';
    static const __wchar_t PLAN_SPONSOR = '6';
    static const __wchar_t STEP_IN = '2';
    static const __wchar_t STEPIN = '2';
    static const __wchar_t REGULAR = '0';
    static const __wchar_t SOFTDOLLAR = '1';
    static const __wchar_t PLANSPONSOR = '6';
    static const __wchar_t STEPINSOFT = '4';
    static const __wchar_t SOFT_DOLLAR_STEP_OUT = '5';
    static const __wchar_t STEP_OUT = '3';
    static const __wchar_t SOFT_DOLLAR_STEP_IN = '4';
    ProcessCode() : CharField(81) {}
    ProcessCode(__wchar_t data) : CharField(81, data) {}
  };

  public __gc class ExecInst : public StringField
  {
  public:
    static const int FIELD = 18;
    static const __wchar_t TRY_TO_STOP = 'Y';
    static const __wchar_t PEG_TO_LIMIT_PRICE = 'd';
    static const __wchar_t EXECUTE_AS_DURATION_NEUTRAL = 's';
    static const __wchar_t PARTICIPANT_DONT_INITIATE = '6';
    static const __wchar_t REINSTATE_ON_TRADING_HALT = 'J';
    static const __wchar_t NO_CROSS = 'A';
    static const __wchar_t PEGVWAP = 'W';
    static const __wchar_t STRICT_SCALE = '7';
    static const __wchar_t AON = 'G';
    static const __wchar_t TRAILING_STOP_PEG = 'a';
    static const __wchar_t TRAILSTOPPEG = 'a';
    static const __wchar_t MARKPEG = 'P';
    static const __wchar_t MIDPRCPEG = 'M';
    static const __wchar_t OKCROSS = 'B';
    static const __wchar_t EXECUTE_AS_FX_NEUTRAL = 't';
    static const __wchar_t CUSTDISPINST = 'U';
    static const __wchar_t IGNOREPRICECHK = 'c';
    static const __wchar_t STRICTLIMIT = 'b';
    static const __wchar_t WORKTOSTRATEGY = 'e';
    static const __wchar_t OK_TO_CROSS = 'B';
    static const __wchar_t SUSPEND_ON_SYSTEM_FAILURE = 'l';
    static const __wchar_t REINSTATE_ON_SYSTEM_FAILURE = 'H';
    static const __wchar_t GO_ALONG = '3';
    static const __wchar_t INSTITONLY = 'I';
    static const __wchar_t DO_NOT_INCREASE = 'E';
    static const __wchar_t SUSPEND = 'S';
    static const __wchar_t TRYTOSTOP = 'Y';
    static const __wchar_t FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER = 'T';
    static const __wchar_t SUSPEND_ON_TRADING_HALT = 'm';
    static const __wchar_t INTERMARKET_SWEEP = 'f';
    static const __wchar_t IGNORE_PRICE_VALIDITY_CHECKS = 'c';
    static const __wchar_t PARTICIPATE_DONT_INITIATE = '6';
    static const __wchar_t LASTPEG = 'L';
    static const __wchar_t PEG_TO_VWAP = 'W';
    static const __wchar_t PRIMARY_PEG = 'R';
    static const __wchar_t NONNEGO = 'N';
    static const __wchar_t BEST_EXECUTION = 'k';
    static const __wchar_t STAY_ON_BID_SIDE = '9';
    static const __wchar_t NOTHELD = '1';
    static const __wchar_t STRICTSCALE = '7';
    static const __wchar_t REINSTATE_ON_CONNECTION_LOSS = 'n';
    static const __wchar_t DNI = 'E';
    static const __wchar_t TRYTOSCALE = '8';
    static const __wchar_t PERCENT_OF_VOLUME = 'D';
    static const __wchar_t GOALONG = '3';
    static const __wchar_t WORK = '2';
    static const __wchar_t HELD = '5';
    static const __wchar_t NOCROSS = 'A';
    static const __wchar_t RELEASE_FROM_SUSPENSION = 'q';
    static const __wchar_t STRICT_LIMIT = 'b';
    static const __wchar_t OPENPEG = 'O';
    static const __wchar_t STAY_ON_BIDSIDE = '9';
    static const __wchar_t STAY_ON_OFFERSIDE = '0';
    static const __wchar_t OVER_THE_DAY = '4';
    static const __wchar_t RESTATEONTRADINGHALT = 'J';
    static const __wchar_t INSTITUTIONS_ONLY = 'I';
    static const __wchar_t NOT_HELD = '1';
    static const __wchar_t CANCELONTRADINGHALT = 'K';
    static const __wchar_t CANCELONSYSFAIL = 'Q';
    static const __wchar_t CANCEL_ON_SYSTEM_FAILURE = 'Q';
    static const __wchar_t MARKET_PEG = 'P';
    static const __wchar_t TRADEALONG = 'X';
    static const __wchar_t CALL_FIRST = 'C';
    static const __wchar_t PEGTOLIMIT = 'd';
    static const __wchar_t EXECUTE_AS_DELTA_NEUTRAL_USING_VOLATILITY_PROVIDED = 'r';
    static const __wchar_t SINGLE_EXECUTION_REQUESTED_FOR_BLOCK_TRADE = 'j';
    static const __wchar_t NON_NEGOTIABLE = 'N';
    static const __wchar_t TRY_TO_SCALE = '8';
    static const __wchar_t EXTERNAL_ROUTING_ALLOWED = 'g';
    static const __wchar_t WORK_TO_TARGET_STRATEGY = 'e';
    static const __wchar_t STAY_ON_OFFER_SIDE = '0';
    static const __wchar_t CUSTOMER_DISPLAY_INSTRUCTION = 'U';
    static const __wchar_t OVERDAY = '4';
    static const __wchar_t LAST_PEG = 'L';
    static const __wchar_t CALLFIRST = 'C';
    static const __wchar_t REINSTATE_ON_SYSTEM_FAILUE = 'H';
    static const __wchar_t DO_NOT_REDUCE = 'F';
    static const __wchar_t MID_PRICE_PEG = 'M';
    static const __wchar_t ALL_OR_NONE = 'G';
    static const __wchar_t OPENING_PEG = 'O';
    static const __wchar_t PERCVOL = 'D';
    static const __wchar_t SUSPEND_ON_CONNECTION_LOSS = 'p';
    static const __wchar_t CANCEL_ON_CONNECTION_LOSS = 'o';
    static const __wchar_t EXTERNAL_ROUTING_NOT_ALLOWED = 'h';
    static const __wchar_t CANCEL_IF_NOT_BEST = 'Z';
    static const __wchar_t PARTNOTINIT = '6';
    static const __wchar_t CXLIFNOTBEST = 'Z';
    static const __wchar_t NETTING = 'V';
    static const __wchar_t IMBALANCE_ONLY = 'i';
    static const __wchar_t CANCEL_ON_TRADING_HALT = 'K';
    static const __wchar_t TRADE_ALONG = 'X';
    static const __wchar_t DNR = 'F';
    static const __wchar_t STAYOFFER = '0';
    static const __wchar_t STAYBID = '9';
    static const __wchar_t RESTATEONSYSFAIL = 'H';
    static const __wchar_t PRIMPEG = 'R';
    ExecInst() : StringField(18) {}
    ExecInst(String* data) : StringField(18, data) {}
  };

  public __gc class TradSesEndTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 345;
    TradSesEndTime() : UtcTimeStampField(345) {}
    TradSesEndTime(DateTime data) : UtcTimeStampField(345, data) {}
  };

  public __gc class OrigTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 42;
    OrigTime() : UtcTimeStampField(42) {}
    OrigTime(DateTime data) : UtcTimeStampField(42, data) {}
  };

  public __gc class ExecValuationPoint : public UtcTimeStampField
  {
  public:
    static const int FIELD = 515;
    ExecValuationPoint() : UtcTimeStampField(515) {}
    ExecValuationPoint(DateTime data) : UtcTimeStampField(515, data) {}
  };

  public __gc class ExecType : public CharField
  {
  public:
    static const int FIELD = 150;
    static const __wchar_t REPLACE = '5';
    static const __wchar_t NEW = '0';
    static const __wchar_t CALCULATED = 'B';
    static const __wchar_t PENDINGNEW = 'A';
    static const __wchar_t ORDERSTATUS = 'I';
    static const __wchar_t PENDING_CANCEL = '6';
    static const __wchar_t TRADE_IN_A_CLEARING_HOLD = 'J';
    static const __wchar_t TRADE_HAS_BEEN_RELEASED_TO_CLEARING = 'K';
    static const __wchar_t ORDER_STATUS = 'I';
    static const __wchar_t PENDING_CANCEL_REPLACE = '6';
    static const __wchar_t PARTIAL_FILL = '1';
    static const __wchar_t PENDINGCXL = '6';
    static const __wchar_t PENDING_NEW = 'A';
    static const __wchar_t STOPPED = '7';
    static const __wchar_t CANCELED = '4';
    static const __wchar_t PENDING_REPLACE = 'E';
    static const __wchar_t TRADE = 'F';
    static const __wchar_t TRADE_CORRECT = 'G';
    static const __wchar_t PENDINGREPLACE = 'E';
    static const __wchar_t SUSPENDED = '9';
    static const __wchar_t FILL = '2';
    static const __wchar_t DONE = '3';
    static const __wchar_t RESTATED = 'D';
    static const __wchar_t REJECTED = '8';
    static const __wchar_t REPLACED = '5';
    static const __wchar_t EXPIRED = 'C';
    static const __wchar_t DONE_FOR_DAY = '3';
    static const __wchar_t TRIGGERED_OR_ACTIVATED_BY_SYSTEM = 'L';
    static const __wchar_t TRADECORRECT = 'G';
    static const __wchar_t TRADECANCEL = 'H';
    static const __wchar_t TRADE_CANCEL = 'H';
    static const __wchar_t CANCELLED = '4';
    ExecType() : CharField(150) {}
    ExecType(__wchar_t data) : CharField(150, data) {}
  };

  public __gc class NoRelatedContextPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1579;
    NoRelatedContextPartySubIDs() : IntField(1579) {}
    NoRelatedContextPartySubIDs(int data) : IntField(1579, data) {}
  };

  public __gc class Nested4PartyRole : public IntField
  {
  public:
    static const int FIELD = 1417;
    Nested4PartyRole() : IntField(1417) {}
    Nested4PartyRole(int data) : IntField(1417, data) {}
  };

  public __gc class MultilegModel : public IntField
  {
  public:
    static const int FIELD = 1377;
    static const int USER_DEFINED_MULTLEG_SECURITY = 1;
    static const int PREDEFINED_MULTILEG_SECURITY = 0;
    static const int USER_DEFINED_NON_SECURITIZED_MULTILEG = 2;
    MultilegModel() : IntField(1377) {}
    MultilegModel(int data) : IntField(1377, data) {}
  };

  public __gc class SecurityGroup : public StringField
  {
  public:
    static const int FIELD = 1151;
    SecurityGroup() : StringField(1151) {}
    SecurityGroup(String* data) : StringField(1151, data) {}
  };

  public __gc class EventType : public IntField
  {
  public:
    static const int FIELD = 865;
    static const int SWAP_NEXT_START_DATE = 11;
    static const int LAST_ELIGIBLE_TRADE_DATE = 7;
    static const int FIRST_DELIVERY_DATE = 13;
    static const int TENDER = 3;
    static const int INITIAL_INVENTORY_DUE_DATE = 15;
    static const int FIRST_INTENT_DATE = 17;
    static const int ACTIVATION = 5;
    static const int PUT = 1;
    static const int SWAP_START_DATE = 8;
    static const int SWAP_NEXT_ROLL_DATE = 12;
    static const int LAST_DELIVERY_DATE = 14;
    static const int POSITION_REMOVAL_DATE = 19;
    static const int SWAP_ROLL_DATE = 10;
    static const int FINAL_INVENTORY_DUE_DATE = 16;
    static const int OTHER = 99;
    static const int INACTIVIATION = 6;
    static const int SINKINGFUNDCALL = 4;
    static const int SWAP_END_DATE = 9;
    static const int LAST_INTENT_DATE = 18;
    static const int SINKING_FUND_CALL = 4;
    static const int CALL = 2;
    EventType() : IntField(865) {}
    EventType(int data) : IntField(865, data) {}
  };

  public __gc class TradeAllocIndicator : public IntField
  {
  public:
    static const int FIELD = 826;
    static const int ALLOCATIONREQUIREDALLOCATIONINFORMATIONNOTPROVIDED = 1;
    static const int ALLOCATION_REQUIRED = 1;
    static const int ALLOCATION_TO_CLAIM_ACCOUNT = 5;
    static const int USEALLOCATIONPROVIDEDWITHTHETRADE = 2;
    static const int ALLOCATION_FROM_EXECUTOR = 4;
    static const int USE_ALLOCATION_PROVIDED_WITH_THE_TRADE = 2;
    static const int ALLOCATIONNOTREQUIRED = 0;
    static const int ALLOCATION_NOT_REQUIRED = 0;
    static const int ALLOCATION_GIVE_UP_EXECUTOR = 3;
    TradeAllocIndicator() : IntField(826) {}
    TradeAllocIndicator(int data) : IntField(826, data) {}
  };

  public __gc class YieldCalcDate : public StringField
  {
  public:
    static const int FIELD = 701;
    YieldCalcDate() : StringField(701) {}
    YieldCalcDate(String* data) : StringField(701, data) {}
  };

  public __gc class ValueOfFutures : public DoubleField
  {
  public:
    static const int FIELD = 408;
    ValueOfFutures() : DoubleField(408) {}
    ValueOfFutures(double data) : DoubleField(408, data) {}
    ValueOfFutures(double data, int decimalPadding) : DoubleField(408, data, decimalPadding) {}
  };

  public __gc class LegSide : public CharField
  {
  public:
    static const int FIELD = 624;
    LegSide() : CharField(624) {}
    LegSide(__wchar_t data) : CharField(624, data) {}
  };

  public __gc class UserStatus : public IntField
  {
  public:
    static const int FIELD = 926;
    static const int NOT_LOGGED_IN = 2;
    static const int PASSWORD_INCORRECT = 4;
    static const int USERNOTRECOGNISED = 3;
    static const int LOGGED_IN = 1;
    static const int PASSWORDCHANGED = 5;
    static const int FORCED_USER_LOGOUT_BY_EXCHANGE = 7;
    static const int USER_NOT_RECOGNISED = 3;
    static const int NOTLOGGEDIN = 2;
    static const int PASSWORD_CHANGED = 5;
    static const int OTHER = 6;
    static const int LOGGEDIN = 1;
    static const int SESSION_SHUTDOWN_WARNING = 8;
    static const int PASSWORDINCORRECT = 4;
    UserStatus() : IntField(926) {}
    UserStatus(int data) : IntField(926, data) {}
  };

  public __gc class SideValue1 : public DoubleField
  {
  public:
    static const int FIELD = 396;
    SideValue1() : DoubleField(396) {}
    SideValue1(double data) : DoubleField(396, data) {}
    SideValue1(double data, int decimalPadding) : DoubleField(396, data, decimalPadding) {}
  };

  public __gc class CxlQty : public DoubleField
  {
  public:
    static const int FIELD = 84;
    CxlQty() : DoubleField(84) {}
    CxlQty(double data) : DoubleField(84, data) {}
    CxlQty(double data, int decimalPadding) : DoubleField(84, data, decimalPadding) {}
  };

  public __gc class SecurityResponseID : public StringField
  {
  public:
    static const int FIELD = 322;
    SecurityResponseID() : StringField(322) {}
    SecurityResponseID(String* data) : StringField(322, data) {}
  };

  public __gc class InstrRegistry : public StringField
  {
  public:
    static const int FIELD = 543;
    static const String* PHYSICAL = "ZZ";
    static const String* COUNTRY = "ISO";
    static const String* CUSTODIAN = "BIC";
    InstrRegistry() : StringField(543) {}
    InstrRegistry(String* data) : StringField(543, data) {}
  };

  public __gc class StreamAsgnRptID : public StringField
  {
  public:
    static const int FIELD = 1501;
    StreamAsgnRptID() : StringField(1501) {}
    StreamAsgnRptID(String* data) : StringField(1501, data) {}
  };

  public __gc class OrderDelayUnit : public IntField
  {
  public:
    static const int FIELD = 1429;
    static const int WEEKS = 13;
    static const int TENTHS_OF_A_SECOND = 1;
    static const int SECONDS = 0;
    static const int MONTHS = 14;
    static const int YEARS = 15;
    static const int NANOSECONDS = 5;
    static const int HUNDREDTHS_OF_A_SECOND = 2;
    static const int HOURS = 11;
    static const int MICROSECONDS = 4;
    static const int MINUTES = 10;
    static const int MILLISECONDS = 3;
    static const int DAYS = 12;
    OrderDelayUnit() : IntField(1429) {}
    OrderDelayUnit(int data) : IntField(1429, data) {}
  };

  public __gc class LegCurrencyRatio : public DoubleField
  {
  public:
    static const int FIELD = 1383;
    LegCurrencyRatio() : DoubleField(1383) {}
    LegCurrencyRatio(double data) : DoubleField(1383, data) {}
    LegCurrencyRatio(double data, int decimalPadding) : DoubleField(1383, data, decimalPadding) {}
  };

  public __gc class EndTickPriceRange : public DoubleField
  {
  public:
    static const int FIELD = 1207;
    EndTickPriceRange() : DoubleField(1207) {}
    EndTickPriceRange(double data) : DoubleField(1207, data) {}
    EndTickPriceRange(double data, int decimalPadding) : DoubleField(1207, data, decimalPadding) {}
  };

  public __gc class CollReqID : public StringField
  {
  public:
    static const int FIELD = 894;
    CollReqID() : StringField(894) {}
    CollReqID(String* data) : StringField(894, data) {}
  };

  public __gc class LegPool : public StringField
  {
  public:
    static const int FIELD = 740;
    LegPool() : StringField(740) {}
    LegPool(String* data) : StringField(740, data) {}
  };

  public __gc class ShortQty : public DoubleField
  {
  public:
    static const int FIELD = 705;
    ShortQty() : DoubleField(705) {}
    ShortQty(double data) : DoubleField(705, data) {}
    ShortQty(double data, int decimalPadding) : DoubleField(705, data, decimalPadding) {}
  };

  public __gc class SideValue2 : public DoubleField
  {
  public:
    static const int FIELD = 397;
    SideValue2() : DoubleField(397) {}
    SideValue2(double data) : DoubleField(397, data) {}
    SideValue2(double data, int decimalPadding) : DoubleField(397, data, decimalPadding) {}
  };

  public __gc class TradedFlatSwitch : public BooleanField
  {
  public:
    static const int FIELD = 258;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    TradedFlatSwitch() : BooleanField(258) {}
    TradedFlatSwitch(bool data) : BooleanField(258, data) {}
  };

  public __gc class MassStatusReqID : public StringField
  {
  public:
    static const int FIELD = 584;
    MassStatusReqID() : StringField(584) {}
    MassStatusReqID(String* data) : StringField(584, data) {}
  };

  public __gc class ComplexEventEndDate : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1493;
    ComplexEventEndDate() : UtcTimeStampField(1493) {}
    ComplexEventEndDate(DateTime data) : UtcTimeStampField(1493, data) {}
  };

  public __gc class MarketID : public StringField
  {
  public:
    static const int FIELD = 1301;
    MarketID() : StringField(1301) {}
    MarketID(String* data) : StringField(1301, data) {}
  };

  public __gc class OrigTradeDate : public StringField
  {
  public:
    static const int FIELD = 1125;
    OrigTradeDate() : StringField(1125) {}
    OrigTradeDate(String* data) : StringField(1125, data) {}
  };

  public __gc class PreTradeAnonymity : public BooleanField
  {
  public:
    static const int FIELD = 1091;
    PreTradeAnonymity() : BooleanField(1091) {}
    PreTradeAnonymity(bool data) : BooleanField(1091, data) {}
  };

  public __gc class TrdRptStatus : public IntField
  {
  public:
    static const int FIELD = 939;
    static const int ACCEPTED_WITH_ERRORS = 3;
    static const int REJECTED = 1;
    static const int ACCEPTED = 0;
    TrdRptStatus() : IntField(939) {}
    TrdRptStatus(int data) : IntField(939, data) {}
  };

  public __gc class DistribPercentage : public DoubleField
  {
  public:
    static const int FIELD = 512;
    DistribPercentage() : DoubleField(512) {}
    DistribPercentage(double data) : DoubleField(512, data) {}
    DistribPercentage(double data, int decimalPadding) : DoubleField(512, data, decimalPadding) {}
  };

  public __gc class QuoteStatus : public IntField
  {
  public:
    static const int FIELD = 297;
    static const int CANCELEDDUETOLOCKMARKET = 14;
    static const int REJ = 5;
    static const int PENDING = 10;
    static const int LOCKEDMARKETWARNING = 12;
    static const int CROSSMARKETWARNING = 13;
    static const int REMOVED = 6;
    static const int CXLUNDER = 3;
    static const int PENDING_END_TRADE = 19;
    static const int CROSS_MARKET_WARNING = 13;
    static const int QUOTENOTFOUND = 9;
    static const int CANCELED = 17;
    static const int LOCKED_MARKET_WARNING = 12;
    static const int CXLSYM = 1;
    static const int CANCELED_FOR_UNDERLYING = 3;
    static const int UNSOLICITED_QUOTE_REPLENISHMENT = 18;
    static const int TOO_LATE_TO_END = 20;
    static const int CANCELED_DUE_TO_LOCK_MARKET = 14;
    static const int CANCELED_DUE_TO_CROSS_MARKET = 15;
    static const int ACCPT = 0;
    static const int CANCELED_FOR_SECURITY_TYPE = 2;
    static const int CANCELED_ALL = 4;
    static const int PASS = 11;
    static const int CANCELEDDUETOCROSSMARKET = 15;
    static const int REJECTED = 5;
    static const int QUERY = 8;
    static const int CXLSECTYPE = 2;
    static const int ACCEPTED = 0;
    static const int EXPIRED = 7;
    static const int CANCELED_FOR_SYMBOL = 1;
    static const int REMOVED_FROM_MARKET = 6;
    static const int ACTIVE = 16;
    static const int CANCEL_FOR_SYMBOL = 1;
    static const int CXLALL = 4;
    static const int QUOTE_NOT_FOUND = 9;
    QuoteStatus() : IntField(297) {}
    QuoteStatus(int data) : IntField(297, data) {}
  };

  public __gc class ClearingAccount : public StringField
  {
  public:
    static const int FIELD = 440;
    ClearingAccount() : StringField(440) {}
    ClearingAccount(String* data) : StringField(440, data) {}
  };

  public __gc class TrdMatchID : public StringField
  {
  public:
    static const int FIELD = 880;
    TrdMatchID() : StringField(880) {}
    TrdMatchID(String* data) : StringField(880, data) {}
  };

  public __gc class OrderInputDevice : public StringField
  {
  public:
    static const int FIELD = 821;
    OrderInputDevice() : StringField(821) {}
    OrderInputDevice(String* data) : StringField(821, data) {}
  };

  public __gc class SolicitedFlag : public BooleanField
  {
  public:
    static const int FIELD = 377;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    SolicitedFlag() : BooleanField(377) {}
    SolicitedFlag(bool data) : BooleanField(377, data) {}
  };

  public __gc class TransactTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 60;
    TransactTime() : UtcTimeStampField(60) {}
    TransactTime(DateTime data) : UtcTimeStampField(60, data) {}
  };

  public __gc class RiskLimitType : public IntField
  {
  public:
    static const int FIELD = 1530;
    static const int GROSS_LIMIT = 1;
    static const int SHORT_LIMIT = 5;
    static const int LONG_LIMIT = 4;
    static const int NET_LIMIT = 2;
    static const int EXPOSURE = 3;
    RiskLimitType() : IntField(1530) {}
    RiskLimitType(int data) : IntField(1530, data) {}
  };

  public __gc class UnderlyingFlowScheduleType : public IntField
  {
  public:
    static const int FIELD = 1441;
    UnderlyingFlowScheduleType() : IntField(1441) {}
    UnderlyingFlowScheduleType(int data) : IntField(1441, data) {}
  };

  public __gc class UnderlyingStipValue : public StringField
  {
  public:
    static const int FIELD = 889;
    UnderlyingStipValue() : StringField(889) {}
    UnderlyingStipValue(String* data) : StringField(889, data) {}
  };

  public __gc class NextExpectedMsgSeqNum : public IntField
  {
  public:
    static const int FIELD = 789;
    NextExpectedMsgSeqNum() : IntField(789) {}
    NextExpectedMsgSeqNum(int data) : IntField(789, data) {}
  };

  public __gc class BenchmarkCurveCurrency : public StringField
  {
  public:
    static const int FIELD = 220;
    BenchmarkCurveCurrency() : StringField(220) {}
    BenchmarkCurveCurrency(String* data) : StringField(220, data) {}
  };

  public __gc class CFICode : public StringField
  {
  public:
    static const int FIELD = 461;
    CFICode() : StringField(461) {}
    CFICode(String* data) : StringField(461, data) {}
  };

  public __gc class Factor : public DoubleField
  {
  public:
    static const int FIELD = 228;
    Factor() : DoubleField(228) {}
    Factor(double data) : DoubleField(228, data) {}
    Factor(double data, int decimalPadding) : DoubleField(228, data, decimalPadding) {}
  };

  public __gc class LastShares : public DoubleField
  {
  public:
    static const int FIELD = 32;
    LastShares() : DoubleField(32) {}
    LastShares(double data) : DoubleField(32, data) {}
    LastShares(double data, int decimalPadding) : DoubleField(32, data, decimalPadding) {}
  };

  public __gc class RequestedPartyRole : public IntField
  {
  public:
    static const int FIELD = 1509;
    RequestedPartyRole() : IntField(1509) {}
    RequestedPartyRole(int data) : IntField(1509, data) {}
  };

  public __gc class EventTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1145;
    EventTime() : UtcTimeStampField(1145) {}
    EventTime(DateTime data) : UtcTimeStampField(1145, data) {}
  };

  public __gc class RootPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1122;
    RootPartySubIDType() : IntField(1122) {}
    RootPartySubIDType(int data) : IntField(1122, data) {}
  };

  public __gc class ShortSaleReason : public IntField
  {
  public:
    static const int FIELD = 853;
    static const int DEALER_SOLD_SHORT = 0;
    static const int DEALERSOLDSHORTEXEMPT = 1;
    static const int QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT = 5;
    static const int DEALERSOLDSHORT = 0;
    static const int SELLING_CUSTOMER_SOLD_SHORT = 2;
    static const int SELLING_CUSTOMER_SOLD_SHORT_EXEMPT = 3;
    static const int SELLINGCUSTOMERSOLDSHORT = 2;
    static const int SELLINGCUSTOMERSOLDSHORTEXEMPT = 3;
    static const int DEALER_SOLD_SHORT_EXEMPT = 1;
    static const int QSRORAGUCONTRASIDESOLDSHORT = 4;
    static const int QUALIFIED_SERVICE_REPRESENTATIVE = 4;
    static const int QSRORAGUCONTRASIDESOLDSHORTEXEMPT = 5;
    ShortSaleReason() : IntField(853) {}
    ShortSaleReason(int data) : IntField(853, data) {}
  };

  public __gc class XmlData : public StringField
  {
  public:
    static const int FIELD = 213;
    XmlData() : StringField(213) {}
    XmlData(String* data) : StringField(213, data) {}
  };

  public __gc class RelationshipRiskSeniority : public StringField
  {
  public:
    static const int FIELD = 1605;
    RelationshipRiskSeniority() : StringField(1605) {}
    RelationshipRiskSeniority(String* data) : StringField(1605, data) {}
  };

  public __gc class NoTargetPartyIDs : public IntField
  {
  public:
    static const int FIELD = 1461;
    NoTargetPartyIDs() : IntField(1461) {}
    NoTargetPartyIDs(int data) : IntField(1461, data) {}
  };

  public __gc class NoRootPartyIDs : public IntField
  {
  public:
    static const int FIELD = 1116;
    NoRootPartyIDs() : IntField(1116) {}
    NoRootPartyIDs(int data) : IntField(1116, data) {}
  };

  public __gc class EventDate : public StringField
  {
  public:
    static const int FIELD = 866;
    EventDate() : StringField(866) {}
    EventDate(String* data) : StringField(866, data) {}
  };

  public __gc class PegRoundDirection : public IntField
  {
  public:
    static const int FIELD = 838;
    static const int MOREPASSIVE = 2;
    static const int MOREAGGRESSIVE = 1;
    static const int MORE_AGGRESSIVE = 1;
    static const int MORE_PASSIVE = 2;
    PegRoundDirection() : IntField(838) {}
    PegRoundDirection(int data) : IntField(838, data) {}
  };

  public __gc class LegSettlDate : public StringField
  {
  public:
    static const int FIELD = 588;
    LegSettlDate() : StringField(588) {}
    LegSettlDate(String* data) : StringField(588, data) {}
  };

  public __gc class ModelType : public IntField
  {
  public:
    static const int FIELD = 1434;
    static const int PROPRIETARY = 1;
    static const int UTILITY_PROVIDED_STANDARD_MODEL = 0;
    ModelType() : IntField(1434) {}
    ModelType(int data) : IntField(1434, data) {}
  };

  public __gc class DefaultVerIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1410;
    DefaultVerIndicator() : BooleanField(1410) {}
    DefaultVerIndicator(bool data) : BooleanField(1410, data) {}
  };

  public __gc class FuturesValuationMethod : public StringField
  {
  public:
    static const int FIELD = 1197;
    static const String* FUTURES_STYLE_WITH_AN_ATTACHED_CASH_ADJUSTMENT = "FUTDA";
    static const String* PREMIUM_STYLE = "EQTY";
    static const String* FUTURES_STYLE_MARK_TO_MARKET = "FUT";
    FuturesValuationMethod() : StringField(1197) {}
    FuturesValuationMethod(String* data) : StringField(1197, data) {}
  };

  public __gc class SettlMethod : public CharField
  {
  public:
    static const int FIELD = 1193;
    static const __wchar_t CASH_SETTLEMENT_REQUIRED = 'C';
    static const __wchar_t PHYSICAL_SETTLEMENT_REQUIRED = 'P';
    SettlMethod() : CharField(1193) {}
    SettlMethod(__wchar_t data) : CharField(1193, data) {}
  };

  public __gc class UnderlyingFXRate : public DoubleField
  {
  public:
    static const int FIELD = 1045;
    UnderlyingFXRate() : DoubleField(1045) {}
    UnderlyingFXRate(double data) : DoubleField(1045, data) {}
    UnderlyingFXRate(double data, int decimalPadding) : DoubleField(1045, data, decimalPadding) {}
  };

  public __gc class ConfirmStatus : public IntField
  {
  public:
    static const int FIELD = 665;
    static const int CONFIRMED = 4;
    static const int REQUESTREJECTED = 5;
    static const int MISSINGSETTLEMENTINSTRUCTIONS = 3;
    static const int MISSING_SETTLEMENT_INSTRUCTIONS = 3;
    static const int REQUEST_REJECTED = 5;
    static const int MISMATCHEDACCOUNT = 2;
    static const int MISMATCHED_ACCOUNT = 2;
    static const int RECEIVED = 1;
    ConfirmStatus() : IntField(665) {}
    ConfirmStatus(int data) : IntField(665, data) {}
  };

  public __gc class LocateReqd : public BooleanField
  {
  public:
    static const int FIELD = 114;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LocateReqd() : BooleanField(114) {}
    LocateReqd(bool data) : BooleanField(114, data) {}
  };

  public __gc class PosMaintRptID : public StringField
  {
  public:
    static const int FIELD = 721;
    PosMaintRptID() : StringField(721) {}
    PosMaintRptID(String* data) : StringField(721, data) {}
  };

  public __gc class Adjustment : public IntField
  {
  public:
    static const int FIELD = 334;
    static const int CANCEL = 1;
    static const int CORRECTION = 3;
    static const int ERROR = 2;
    Adjustment() : IntField(334) {}
    Adjustment(int data) : IntField(334, data) {}
  };

  public __gc class StreamAsgnType : public IntField
  {
  public:
    static const int FIELD = 1617;
    static const int ASSIGNMENT = 1;
    static const int TERMINATE_UNASSIGN = 3;
    static const int REJECTED = 2;
    StreamAsgnType() : IntField(1617) {}
    StreamAsgnType(int data) : IntField(1617, data) {}
  };

  public __gc class LastRptRequested : public BooleanField
  {
  public:
    static const int FIELD = 912;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LastRptRequested() : BooleanField(912) {}
    LastRptRequested(bool data) : BooleanField(912, data) {}
  };

  public __gc class LocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 472;
    LocaleOfIssue() : StringField(472) {}
    LocaleOfIssue(String* data) : StringField(472, data) {}
  };

  public __gc class SenderSubID : public StringField
  {
  public:
    static const int FIELD = 50;
    SenderSubID() : StringField(50) {}
    SenderSubID(String* data) : StringField(50, data) {}
  };

  public __gc class HighPx : public DoubleField
  {
  public:
    static const int FIELD = 332;
    HighPx() : DoubleField(332) {}
    HighPx(double data) : DoubleField(332, data) {}
    HighPx(double data, int decimalPadding) : DoubleField(332, data, decimalPadding) {}
  };

  public __gc class AllocSettlCurrAmt : public DoubleField
  {
  public:
    static const int FIELD = 737;
    AllocSettlCurrAmt() : DoubleField(737) {}
    AllocSettlCurrAmt(double data) : DoubleField(737, data) {}
    AllocSettlCurrAmt(double data, int decimalPadding) : DoubleField(737, data, decimalPadding) {}
  };

  public __gc class ComplexEventPriceBoundaryPrecision : public DoubleField
  {
  public:
    static const int FIELD = 1488;
    ComplexEventPriceBoundaryPrecision() : DoubleField(1488) {}
    ComplexEventPriceBoundaryPrecision(double data) : DoubleField(1488, data) {}
    ComplexEventPriceBoundaryPrecision(double data, int decimalPadding) : DoubleField(1488, data, decimalPadding) {}
  };

  public __gc class InstrumentPartyRole : public IntField
  {
  public:
    static const int FIELD = 1051;
    InstrumentPartyRole() : IntField(1051) {}
    InstrumentPartyRole(int data) : IntField(1051, data) {}
  };

  public __gc class YieldRedemptionPrice : public DoubleField
  {
  public:
    static const int FIELD = 697;
    YieldRedemptionPrice() : DoubleField(697) {}
    YieldRedemptionPrice(double data) : DoubleField(697, data) {}
    YieldRedemptionPrice(double data, int decimalPadding) : DoubleField(697, data, decimalPadding) {}
  };

  public __gc class CumQty : public DoubleField
  {
  public:
    static const int FIELD = 14;
    CumQty() : DoubleField(14) {}
    CumQty(double data) : DoubleField(14, data) {}
    CumQty(double data, int decimalPadding) : DoubleField(14, data, decimalPadding) {}
  };

  public __gc class OrigClOrdID : public StringField
  {
  public:
    static const int FIELD = 41;
    OrigClOrdID() : StringField(41) {}
    OrigClOrdID(String* data) : StringField(41, data) {}
  };

  public __gc class SettlSessID : public StringField
  {
  public:
    static const int FIELD = 716;
    static const String* END_OF_DAY = "EOD";
    static const String* REGULAR_TRADING_HOURS = "RTH";
    static const String* ELECTRONIC_TRADING_HOURS = "ETH";
    static const String* INTRADAY = "ITD";
    SettlSessID() : StringField(716) {}
    SettlSessID(String* data) : StringField(716, data) {}
  };

  public __gc class ParentMktSegmID : public StringField
  {
  public:
    static const int FIELD = 1325;
    ParentMktSegmID() : StringField(1325) {}
    ParentMktSegmID(String* data) : StringField(1325, data) {}
  };

  public __gc class TradeReportType : public IntField
  {
  public:
    static const int FIELD = 856;
    static const int NO_WAS = 5;
    static const int ADDENDUM = 4;
    static const int _7 = 7;
    static const int PENDED = 10;
    static const int LOCKEDINTRADEBREAK = 7;
    static const int DEFAULTED = 8;
    static const int DECLINE = 3;
    static const int ALLEGED_NEW = 11;
    static const int ALLEGED_TRADE_REPORT_CANCEL = 14;
    static const int ALLEGED_15 = 15;
    static const int ALLEGED_ADDENDUM = 12;
    static const int ALLEGED = 1;
    static const int SUBMIT = 0;
    static const int NOWAS = 5;
    static const int ALLEGED_1 = 1;
    static const int INVALID_CMTA = 9;
    static const int TRADEREPORTCANCEL = 6;
    static const int TRADE_REPORT_CANCEL = 6;
    static const int ALLEGED_NO_WAS = 13;
    static const int ACCEPT = 2;
    TradeReportType() : IntField(856) {}
    TradeReportType(int data) : IntField(856, data) {}
  };

  public __gc class AvgPrxPrecision : public IntField
  {
  public:
    static const int FIELD = 74;
    AvgPrxPrecision() : IntField(74) {}
    AvgPrxPrecision(int data) : IntField(74, data) {}
  };

  public __gc class NoLegs : public IntField
  {
  public:
    static const int FIELD = 555;
    NoLegs() : IntField(555) {}
    NoLegs(int data) : IntField(555, data) {}
  };

  public __gc class UnderlyingSymbol : public StringField
  {
  public:
    static const int FIELD = 311;
    UnderlyingSymbol() : StringField(311) {}
    UnderlyingSymbol(String* data) : StringField(311, data) {}
  };

  public __gc class ExerciseStyle : public IntField
  {
  public:
    static const int FIELD = 1194;
    static const int AMERICAN = 1;
    static const int EUROPEAN = 0;
    static const int BERMUDA = 2;
    ExerciseStyle() : IntField(1194) {}
    ExerciseStyle(int data) : IntField(1194, data) {}
  };

  public __gc class HaltReasonChar : public CharField
  {
  public:
    static const int FIELD = 327;
    static const __wchar_t EQUIPCHANGE = 'X';
    static const __wchar_t ADDITIONAL_INFORMATION = 'M';
    static const __wchar_t ORDINFL = 'E';
    static const __wchar_t NEW_PENDING = 'P';
    static const __wchar_t NEWSDISS = 'D';
    static const __wchar_t NEWS_PENDING = 'P';
    static const __wchar_t ORDER_INFLUX = 'E';
    static const __wchar_t NEWS_DISSEMINATION = 'D';
    static const __wchar_t ADDINFO = 'M';
    static const __wchar_t ORDIMB = 'I';
    static const __wchar_t EQUIPMENT_CHANGEOVER = 'X';
    static const __wchar_t ORDER_IMBALANCE = 'I';
    static const __wchar_t NEWSPEND = 'P';
    HaltReasonChar() : CharField(327) {}
    HaltReasonChar(__wchar_t data) : CharField(327, data) {}
  };

  public __gc class ExDestination : public StringField
  {
  public:
    static const int FIELD = 100;
    static const __wchar_t POSIT = '4';
    static const __wchar_t NONE = '0';
    ExDestination() : StringField(100) {}
    ExDestination(String* data) : StringField(100, data) {}
  };

  public __gc class NoPartyRelationships : public IntField
  {
  public:
    static const int FIELD = 1514;
    NoPartyRelationships() : IntField(1514) {}
    NoPartyRelationships(int data) : IntField(1514, data) {}
  };

  public __gc class DerivativeInstrmtAssignmentMethod : public CharField
  {
  public:
    static const int FIELD = 1255;
    DerivativeInstrmtAssignmentMethod() : CharField(1255) {}
    DerivativeInstrmtAssignmentMethod(__wchar_t data) : CharField(1255, data) {}
  };

  public __gc class UnderlyingIDSource : public StringField
  {
  public:
    static const int FIELD = 305;
    UnderlyingIDSource() : StringField(305) {}
    UnderlyingIDSource(String* data) : StringField(305, data) {}
  };

  public __gc class AdvId : public StringField
  {
  public:
    static const int FIELD = 2;
    AdvId() : StringField(2) {}
    AdvId(String* data) : StringField(2, data) {}
  };

  public __gc class TransBkdTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 483;
    TransBkdTime() : UtcTimeStampField(483) {}
    TransBkdTime(DateTime data) : UtcTimeStampField(483, data) {}
  };

  public __gc class LegLastPx : public DoubleField
  {
  public:
    static const int FIELD = 637;
    LegLastPx() : DoubleField(637) {}
    LegLastPx(double data) : DoubleField(637, data) {}
    LegLastPx(double data, int decimalPadding) : DoubleField(637, data, decimalPadding) {}
  };

  public __gc class NoRiskWarningLevels : public IntField
  {
  public:
    static const int FIELD = 1559;
    NoRiskWarningLevels() : IntField(1559) {}
    NoRiskWarningLevels(int data) : IntField(1559, data) {}
  };

  public __gc class AllocReportType : public IntField
  {
  public:
    static const int FIELD = 794;
    static const int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
    static const int WAREHOUSE_RECAP = 5;
    static const int REJECT = 10;
    static const int REQUESTTOINTERMEDIARY = 8;
    static const int ACCEPT_PENDING = 11;
    static const int REQUEST_TO_INTERMEDIARY = 8;
    static const int COMPLETE = 12;
    static const int SELLSIDECALCULATEDUSINGPRELIMINARY = 3;
    static const int PRELIMINARY_REQUEST_TO_INTERMEDIARY = 2;
    static const int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
    static const int REVERSE_PENDING = 14;
    static const int WAREHOUSERECAP = 5;
    static const int ACCEPT = 9;
    static const int SELLSIDECALCULATEDWITHOUTPRELIMINARY = 4;
    AllocReportType() : IntField(794) {}
    AllocReportType(int data) : IntField(794, data) {}
  };

  public __gc class RegistDtls : public StringField
  {
  public:
    static const int FIELD = 509;
    RegistDtls() : StringField(509) {}
    RegistDtls(String* data) : StringField(509, data) {}
  };

  public __gc class AllocType : public IntField
  {
  public:
    static const int FIELD = 626;
    static const int BUYSIDEREADYTOBOOKSINGLE = 5;
    static const int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
    static const int CALCULATED = 1;
    static const int INCOMPLETE_GROUP = 12;
    static const int REVERSAL_PENDING = 14;
    static const int PRELIMINARY = 2;
    static const int REJECT = 10;
    static const int WAREHOUSEINSTRUCTION = 7;
    static const int BUYSIDEPRELIM = 2;
    static const int REQUESTTOINTERMEDIARY = 8;
    static const int ACCEPT_PENDING = 11;
    static const int BUYSIDEREADYTOBOOKCOMBINED = 6;
    static const int BUYSIDE_CALCULATED = 1;
    static const int REQUEST_TO_INTERMEDIARY = 8;
    static const int SELLSIDECALCWITHOUTPRELIM = 4;
    static const int BUYSIDE_READY_TO_BOOK_5 = 5;
    static const int BUYSIDE_READY_TO_BOOK_6 = 6;
    static const int COMPLETE_GROUP = 13;
    static const int BUYSIDECALC = 1;
    static const int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
    static const int READY_TO_BOOK = 5;
    static const int BUYSIDE_READY_TO_BOOK = 6;
    static const int WAREHOUSE_INSTRUCTION = 7;
    static const int BUYSIDE_PRELIMINARY = 2;
    static const int ACCEPT = 9;
    static const int SELLSIDECALC = 3;
    AllocType() : IntField(626) {}
    AllocType(int data) : IntField(626, data) {}
  };

  public __gc class QuoteRequestRejectReason : public IntField
  {
  public:
    static const int FIELD = 658;
    static const int INSUFFICIENT_CREDIT = 11;
    static const int NOMARKETFORINSTRUMENT = 8;
    static const int NOTAUTHTOREQQUOTE = 6;
    static const int NOT_AUTHORIZED_TO_REQUEST_QUOTE = 6;
    static const int QUOTEREQUESTEXLIMIT = 3;
    static const int INVALID_PRICE = 5;
    static const int EXCHANGECLOSED = 2;
    static const int TOOLATE = 4;
    static const int INVPRICE = 5;
    static const int NOMATCHFORINQUIRY = 7;
    static const int TOO_LATE_TO_ENTER = 4;
    static const int NO_MATCH_FOR_INQUIRY = 7;
    static const int UNKNOWNSYM = 1;
    static const int EXCHANGE = 2;
    static const int NO_MARKET_FOR_INSTRUMENT = 8;
    static const int UNKNOWN_SYMBOL = 1;
    static const int OTHER = 99;
    static const int PASS = 10;
    static const int NOINVENTORY = 9;
    static const int NO_INVENTORY = 9;
    static const int QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
    QuoteRequestRejectReason() : IntField(658) {}
    QuoteRequestRejectReason(int data) : IntField(658, data) {}
  };

  public __gc class UnderlyingUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 998;
    UnderlyingUnitOfMeasure() : StringField(998) {}
    UnderlyingUnitOfMeasure(String* data) : StringField(998, data) {}
  };

  public __gc class IndividualAllocID : public StringField
  {
  public:
    static const int FIELD = 467;
    IndividualAllocID() : StringField(467) {}
    IndividualAllocID(String* data) : StringField(467, data) {}
  };

  public __gc class LegOfferPx : public DoubleField
  {
  public:
    static const int FIELD = 684;
    LegOfferPx() : DoubleField(684) {}
    LegOfferPx(double data) : DoubleField(684, data) {}
    LegOfferPx(double data, int decimalPadding) : DoubleField(684, data, decimalPadding) {}
  };

  public __gc class LiquidityIndType : public IntField
  {
  public:
    static const int FIELD = 409;
    static const int _5DAY = 1;
    static const int NORMAL = 3;
    static const int _20_DAY_MOVING_AVERAGE = 2;
    static const int _5_DAY_MOVING_AVERAGE = 1;
    static const int _5DAY_MOVING_AVERAGE = 1;
    static const int NORMAL_MARKET_SIZE = 3;
    static const int OTHER = 4;
    static const int _20DAY = 2;
    LiquidityIndType() : IntField(409) {}
    LiquidityIndType(int data) : IntField(409, data) {}
  };

  public __gc class HopSendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 629;
    HopSendingTime() : UtcTimeStampField(629) {}
    HopSendingTime(DateTime data) : UtcTimeStampField(629, data) {}
  };

  public __gc class RelationshipRiskLimitAmount : public DoubleField
  {
  public:
    static const int FIELD = 1584;
    RelationshipRiskLimitAmount() : DoubleField(1584) {}
    RelationshipRiskLimitAmount(double data) : DoubleField(1584, data) {}
    RelationshipRiskLimitAmount(double data, int decimalPadding) : DoubleField(1584, data, decimalPadding) {}
  };

  public __gc class ApplResendFlag : public BooleanField
  {
  public:
    static const int FIELD = 1352;
    ApplResendFlag() : BooleanField(1352) {}
    ApplResendFlag(bool data) : BooleanField(1352, data) {}
  };

  public __gc class DerivativeCapPrice : public DoubleField
  {
  public:
    static const int FIELD = 1321;
    DerivativeCapPrice() : DoubleField(1321) {}
    DerivativeCapPrice(double data) : DoubleField(1321, data) {}
    DerivativeCapPrice(double data, int decimalPadding) : DoubleField(1321, data, decimalPadding) {}
  };

  public __gc class RiskSecurityID : public StringField
  {
  public:
    static const int FIELD = 1538;
    RiskSecurityID() : StringField(1538) {}
    RiskSecurityID(String* data) : StringField(1538, data) {}
  };

  public __gc class ComplexOptPayoutAmount : public DoubleField
  {
  public:
    static const int FIELD = 1485;
    ComplexOptPayoutAmount() : DoubleField(1485) {}
    ComplexOptPayoutAmount(double data) : DoubleField(1485, data) {}
    ComplexOptPayoutAmount(double data, int decimalPadding) : DoubleField(1485, data, decimalPadding) {}
  };

  public __gc class LanguageCode : public StringField
  {
  public:
    static const int FIELD = 1474;
    LanguageCode() : StringField(1474) {}
    LanguageCode(String* data) : StringField(1474, data) {}
  };

  public __gc class SettlObligRefID : public StringField
  {
  public:
    static const int FIELD = 1163;
    SettlObligRefID() : StringField(1163) {}
    SettlObligRefID(String* data) : StringField(1163, data) {}
  };

  public __gc class OrigTradeID : public StringField
  {
  public:
    static const int FIELD = 1126;
    OrigTradeID() : StringField(1126) {}
    OrigTradeID(String* data) : StringField(1126, data) {}
  };

  public __gc class UnderlyingCollectAmount : public DoubleField
  {
  public:
    static const int FIELD = 986;
    UnderlyingCollectAmount() : DoubleField(986) {}
    UnderlyingCollectAmount(double data) : DoubleField(986, data) {}
    UnderlyingCollectAmount(double data, int decimalPadding) : DoubleField(986, data, decimalPadding) {}
  };

  public __gc class StatusValue : public IntField
  {
  public:
    static const int FIELD = 928;
    static const int IN_PROCESS = 4;
    static const int NOTCONNECTEDDOWNEXPECTEDUP = 2;
    static const int NOT_CONNECTED_2 = 2;
    static const int NOTCONNECTEDDOWNEXPECTEDDOWN = 3;
    static const int CONNECTED = 1;
    static const int NOT_CONNECTED_3 = 3;
    static const int INPROCESS = 4;
    StatusValue() : IntField(928) {}
    StatusValue(int data) : IntField(928, data) {}
  };

  public __gc class OfferSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 190;
    OfferSpotRate() : DoubleField(190) {}
    OfferSpotRate(double data) : DoubleField(190, data) {}
    OfferSpotRate(double data, int decimalPadding) : DoubleField(190, data, decimalPadding) {}
  };

  public __gc class PosType : public StringField
  {
  public:
    static const int FIELD = 703;
    static const String* INTRA_SPREAD_QTY = "IAS";
    static const String* INTER_SPREAD_QTY = "IES";
    static const String* TRANSFER_TRADE_QTY = "TRF";
    static const String* EXCHANGE_FOR_PHYSICAL_QTY = "EP";
    static const String* TRANSFERTRADEQTY = "TRF";
    static const String* TRANSACTIONQUANTITY = "TQ";
    static const String* ADJUSTMENTQTY = "PA";
    static const String* START_OF_DAY_QTY = "SOD";
    static const String* ENDOFDAYQTY = "FIN";
    static const String* DELIVERY_QTY = "DLV";
    static const String* TRANSACTIONFROMEXERCISE = "TX";
    static const String* OPTIONEXERCISEQTY = "EX";
    static const String* DELIVERYQTY = "DLV";
    static const String* OPTION_ASSIGNMENT = "AS";
    static const String* PIT_TRADE_QTY = "PIT";
    static const String* TRANSACTION_FROM_ASSIGNMENT = "TA";
    static const String* TRANSACTION_FROM_EXERCISE = "TX";
    static const String* INTEGRALSPLIT = "SPL";
    static const String* ELECTRONICTRADEQTY = "ETR";
    static const String* AS_OF_TRADE_QTY = "ASF";
    static const String* ELECTRONIC_TRADE_QTY = "ETR";
    static const String* PITTRADEQTY = "PIT";
    static const String* OPTIONASSIGNMENT = "AS";
    static const String* SUCCESSION_EVENT_ADJUSTMENT = "SEA";
    static const String* OPTION_EXERCISE_QTY = "EX";
    static const String* TRANSACTION_QUANTITY = "TQ";
    static const String* NET_DELTA_QTY = "DLT";
    static const String* END_OF_DAY_QTY = "FIN";
    static const String* ADJUSTMENT_QTY = "PA";
    static const String* TOTAL_TRANSACTION_QTY = "TOT";
    static const String* DELIVERY_NOTICE_QTY = "DN";
    static const String* RECEIVE_QUANTITY = "RCV";
    static const String* ASOFTRADEQTY = "ASF";
    static const String* ALLOCATIONTRADEQTY = "ALC";
    static const String* CREDIT_EVENT_ADJUSTMENT = "CEA";
    static const String* PRIVATELY_NEGOTIATED_TRADE_QTY = "PNTN";
    static const String* CROSS_MARGIN_QTY = "XM";
    static const String* CORPORATE_ACTION_ADJUSTMENT = "CAA";
    static const String* TOTALTRANSACTIONQTY = "TOT";
    static const String* STARTOFDAYQTY = "SOD";
    static const String* INTEGRAL_SPLIT = "SPL";
    static const String* INTERSPREADQTY = "IES";
    static const String* INTRASPREADQTY = "IAS";
    static const String* ALLOCATION_TRADE_QTY = "ALC";
    static const String* CROSSMARGINQTY = "XM";
    static const String* TRANSACTIONFROMASSIGNMENT = "TA";
    PosType() : StringField(703) {}
    PosType(String* data) : StringField(703, data) {}
  };

  public __gc class UnderlyingRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 247;
    UnderlyingRedemptionDate() : StringField(247) {}
    UnderlyingRedemptionDate(String* data) : StringField(247, data) {}
  };

  public __gc class SettlDepositoryCode : public StringField
  {
  public:
    static const int FIELD = 173;
    SettlDepositoryCode() : StringField(173) {}
    SettlDepositoryCode(String* data) : StringField(173, data) {}
  };

  public __gc class StreamAsgnAckType : public IntField
  {
  public:
    static const int FIELD = 1503;
    static const int ASSIGNMENT_REJECTED = 1;
    static const int ASSIGNMENT_ACCEPTED = 0;
    StreamAsgnAckType() : IntField(1503) {}
    StreamAsgnAckType(int data) : IntField(1503, data) {}
  };

  public __gc class FloorPrice : public DoubleField
  {
  public:
    static const int FIELD = 1200;
    FloorPrice() : DoubleField(1200) {}
    FloorPrice(double data) : DoubleField(1200, data) {}
    FloorPrice(double data, int decimalPadding) : DoubleField(1200, data, decimalPadding) {}
  };

  public __gc class RiskMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1550;
    RiskMaturityTime() : StringField(1550) {}
    RiskMaturityTime(String* data) : StringField(1550, data) {}
  };

  public __gc class UnderlyingPriceUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1425;
    UnderlyingPriceUnitOfMeasureQty() : DoubleField(1425) {}
    UnderlyingPriceUnitOfMeasureQty(double data) : DoubleField(1425, data) {}
    UnderlyingPriceUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1425, data, decimalPadding) {}
  };

  public __gc class FeeMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 1329;
    FeeMultiplier() : DoubleField(1329) {}
    FeeMultiplier(double data) : DoubleField(1329, data) {}
    FeeMultiplier(double data, int decimalPadding) : DoubleField(1329, data, decimalPadding) {}
  };

  public __gc class UnderlyingMaturityTime : public StringField
  {
  public:
    static const int FIELD = 1213;
    UnderlyingMaturityTime() : StringField(1213) {}
    UnderlyingMaturityTime(String* data) : StringField(1213, data) {}
  };

  public __gc class ApplID : public StringField
  {
  public:
    static const int FIELD = 1180;
    ApplID() : StringField(1180) {}
    ApplID(String* data) : StringField(1180, data) {}
  };

  public __gc class LegGrossTradeAmt : public DoubleField
  {
  public:
    static const int FIELD = 1075;
    LegGrossTradeAmt() : DoubleField(1075) {}
    LegGrossTradeAmt(double data) : DoubleField(1075, data) {}
    LegGrossTradeAmt(double data, int decimalPadding) : DoubleField(1075, data, decimalPadding) {}
  };

  public __gc class MDEntryDate : public UtcDateOnlyField
  {
  public:
    static const int FIELD = 272;
    MDEntryDate() : UtcDateOnlyField(272) {}
    MDEntryDate(DateTime data) : UtcDateOnlyField(272, data) {}
  };

  public __gc class LegBenchmarkCurveCurrency : public StringField
  {
  public:
    static const int FIELD = 676;
    LegBenchmarkCurveCurrency() : StringField(676) {}
    LegBenchmarkCurveCurrency(String* data) : StringField(676, data) {}
  };

  public __gc class RiskInstrumentOperator : public IntField
  {
  public:
    static const int FIELD = 1535;
    static const int EXCLUDE = 2;
    static const int INCLUDE = 1;
    RiskInstrumentOperator() : IntField(1535) {}
    RiskInstrumentOperator(int data) : IntField(1535, data) {}
  };

  public __gc class OptPayoutAmount : public DoubleField
  {
  public:
    static const int FIELD = 1195;
    OptPayoutAmount() : DoubleField(1195) {}
    OptPayoutAmount(double data) : DoubleField(1195, data) {}
    OptPayoutAmount(double data, int decimalPadding) : DoubleField(1195, data, decimalPadding) {}
  };

  public __gc class MiscFeeBasis : public IntField
  {
  public:
    static const int FIELD = 891;
    static const int PERUNIT = 1;
    static const int ABSOLUTE = 0;
    static const int PERCENTAGE = 2;
    static const int PER_UNIT = 1;
    MiscFeeBasis() : IntField(891) {}
    MiscFeeBasis(int data) : IntField(891, data) {}
  };

  public __gc class ValidUntilTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 62;
    ValidUntilTime() : UtcTimeStampField(62) {}
    ValidUntilTime(DateTime data) : UtcTimeStampField(62, data) {}
  };

  public __gc class OrdType : public CharField
  {
  public:
    static const int FIELD = 40;
    static const __wchar_t FOREX_MARKET = 'C';
    static const __wchar_t FOREX_PREVIOUSLY_QUOTED = 'H';
    static const __wchar_t ONBASIS = '9';
    static const __wchar_t PREVIOUSLYINDICATED = 'E';
    static const __wchar_t PREVIOUS_FUND_VALUATION_POINT = 'L';
    static const __wchar_t PEGGED = 'P';
    static const __wchar_t LIMITONCLOSE = 'B';
    static const __wchar_t LIMIT_WITH_OR_WITHOUT = '8';
    static const __wchar_t STOP_LIMIT = '4';
    static const __wchar_t FOREX_SWAP = 'G';
    static const __wchar_t WITHORWITHOUT = '6';
    static const __wchar_t FOREXLIMIT = 'F';
    static const __wchar_t MARKET_WITH_LEFT_OVER_AS_LIMIT = 'K';
    static const __wchar_t PREVIOUSLYQUOTED = 'D';
    static const __wchar_t PREVIOUSLY_QUOTED = 'D';
    static const __wchar_t COUNTER_ORDER_SELECTION = 'Q';
    static const __wchar_t LIMITWITHORWITHOUT = '8';
    static const __wchar_t FOREXSWAP = 'G';
    static const __wchar_t MARKET_IF_TOUCHED = 'J';
    static const __wchar_t NEXT_FUND_VALUATION_POINT = 'M';
    static const __wchar_t FOREX_C = 'C';
    static const __wchar_t ON_CLOSE = 'A';
    static const __wchar_t STOP = '3';
    static const __wchar_t STOPLIMIT = '4';
    static const __wchar_t LIMITORBETTER = '7';
    static const __wchar_t ONCLOSE = 'A';
    static const __wchar_t FOREX_LIMIT = 'F';
    static const __wchar_t FOREXMARKET = 'C';
    static const __wchar_t FOREX = 'C';
    static const __wchar_t MARKETIFTOUCHED = 'J';
    static const __wchar_t FUNARI = 'I';
    static const __wchar_t FOREX_F = 'F';
    static const __wchar_t PREVIOUSLY_INDICATED = 'E';
    static const __wchar_t WITH_OR_WITHOUT = '6';
    static const __wchar_t MARKET_ON_CLOSE = '5';
    static const __wchar_t LIMIT = '2';
    static const __wchar_t MARKET_WITH_LEFTOVER_AS_LIMIT = 'K';
    static const __wchar_t FOREX_G = 'G';
    static const __wchar_t LIMIT_ON_CLOSE = 'B';
    static const __wchar_t MARKETONCLOSE = '5';
    static const __wchar_t PREVIOUSFUNDVALUATIONPOINT = 'L';
    static const __wchar_t NEXTFUNDVALUATIONPOINT = 'M';
    static const __wchar_t FOREX_H = 'H';
    static const __wchar_t FOREXPREVIOUSLYQUOTED = 'H';
    static const __wchar_t MARKETWITHLEFTOVERLIMIT = 'K';
    static const __wchar_t ON_BASIS = '9';
    static const __wchar_t LIMIT_OR_BETTER = '7';
    static const __wchar_t MARKET = '1';
    OrdType() : CharField(40) {}
    OrdType(__wchar_t data) : CharField(40, data) {}
  };

  public __gc class AdvRefID : public StringField
  {
  public:
    static const int FIELD = 3;
    AdvRefID() : StringField(3) {}
    AdvRefID(String* data) : StringField(3, data) {}
  };

  public __gc class HopCompID : public StringField
  {
  public:
    static const int FIELD = 628;
    HopCompID() : StringField(628) {}
    HopCompID(String* data) : StringField(628, data) {}
  };

  public __gc class PosMaintRptRefID : public StringField
  {
  public:
    static const int FIELD = 714;
    PosMaintRptRefID() : StringField(714) {}
    PosMaintRptRefID(String* data) : StringField(714, data) {}
  };

  public __gc class LegStipulationValue : public StringField
  {
  public:
    static const int FIELD = 689;
    LegStipulationValue() : StringField(689) {}
    LegStipulationValue(String* data) : StringField(689, data) {}
  };

  public __gc class MatchType : public StringField
  {
  public:
    static const int FIELD = 574;
    static const String* ACT_DEFAULT_AFTER_M2 = "M5";
    static const String* SUMMARIZEDMATCHUSINGA2 = "S2";
    static const String* COUNTER_ORDER_SELECTION_6 = "6";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND = "A4";
    static const String* SUMMARIZED_MATCH_USING_A4_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S4";
    static const String* NON_ACT = "MT";
    static const String* SUMMARIZEDMATCHUSINGA3 = "S3";
    static const String* SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED_S1 = "S1";
    static const String* SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES_ACT_M2_MATCH = "M2";
    static const String* SUMMARIZEDMATCHUSINGA4 = "S4";
    static const String* SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED_S2 = "S2";
    static const String* TWO_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT = "61";
    static const String* SUMMARIZEDMATCHUSINGA5 = "S5";
    static const String* NASDAQACTM2MATCH = "ACTM2";
    static const String* CROSS_AUCTION_5 = "5";
    static const String* ACT_M1_MATCH = "M1";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES = "A4";
    static const String* SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED_S3 = "S3";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSTWOBADGES = "A4";
    static const String* NASDAQACTDEFAULTAFTERM2 = "ACTM5";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSFOURBADGES = "A2";
    static const String* NASDAQACTM1MATCH = "ACTM1";
    static const String* CALL_AUCTION_7 = "7";
    static const String* CROSS_AUCTION_63 = "63";
    static const String* ISSUING_BUY_BACK_AUCTION = "8";
    static const String* SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED_S4 = "S4";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME = "A5";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSFOURBADGESANDEXECUTIONTIME = "A1";
    static const String* ONE_PARTY_TRADE_REPORT = "1";
    static const String* SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED_S5 = "S5";
    static const String* ACT_M2_MATCH = "M2";
    static const String* SUMMARIZEDMATCHMINUSBADGESANDTIMES = "M2";
    static const String* NASDAQACTDEFAULTTRADE = "ACTM4";
    static const String* CALL_AUCTION = "7";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES_ACT_M1_MATCH = "M1";
    static const String* ACT_ACCEPTED_TRADE = "M3";
    static const String* TWO_PARTY_TRADE_REPORT = "2";
    static const String* SUMMARIZED_MATCH_USING_A1_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIED = "S1";
    static const String* CONTINUOUS_AUTO_MATCH = "62";
    static const String* ONE_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT = "60";
    static const String* ACT_M6_MATCH = "M6";
    static const String* SUMMARIZED_MATCH_USING_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S5";
    static const String* ACT_DEFAULT_TRADE = "M4";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORMINUSBADGESANDTIMES = "M1";
    static const String* COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST = "AQ";
    static const String* AUTO_MATCH = "4";
    static const String* NASDAQACTM6MATCH = "ACTM6";
    static const String* OCSLOCKEDIN = "MT";
    static const String* COUNTER_ORDER_SELECTION = "6";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES = "A2";
    static const String* SUMMARIZED_MATCH_USING_A3_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S3";
    static const String* NASDAQACTACCEPTEDTRADE = "ACTM3";
    static const String* CALL_AUCTION_65 = "65";
    static const String* CROSS_AUCTION = "5";
    static const String* OCS_LOCKED_IN_NON_ACT = "MT";
    static const String* CONFIRMED_TRADE_REPORT = "3";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADETYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME = "A5";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSTWOBADGESANDEXECUTIONTIME = "A3";
    static const String* SUMMARIZED_MATCH_USING_A2_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S2";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSEXECUTIONTIME = "A5";
    static const String* NASDAQNONACT = "ACTMT";
    static const String* COMPAREDRECORDSRESULTINGFROMSTAMPEDADVISORIESORSPECIALISTACCEPTSPAIROFFS = "AQ";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3";
    static const String* COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS_PAIR_OFFS = "AQ";
    static const String* SUMMARIZEDMATCHUSINGA1 = "S1";
    static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1";
    static const String* COUNTER_ORDER_SELECTION_64 = "64";
    MatchType() : StringField(574) {}
    MatchType(String* data) : StringField(574, data) {}
  };

  public __gc class OptPayoutType : public IntField
  {
  public:
    static const int FIELD = 1482;
    static const int BINARY = 3;
    static const int VANILLA = 1;
    static const int CAPPED = 2;
    OptPayoutType() : IntField(1482) {}
    OptPayoutType(int data) : IntField(1482, data) {}
  };

  public __gc class UnderlyingPriceUnitOfMeasure : public StringField
  {
  public:
    static const int FIELD = 1424;
    UnderlyingPriceUnitOfMeasure() : StringField(1424) {}
    UnderlyingPriceUnitOfMeasure(String* data) : StringField(1424, data) {}
  };

  public __gc class MarketUpdateAction : public CharField
  {
  public:
    static const int FIELD = 1395;
    static const __wchar_t DELETE = 'D';
    static const __wchar_t ADD = 'A';
    static const __wchar_t MODIFY = 'M';
    MarketUpdateAction() : CharField(1395) {}
    MarketUpdateAction(__wchar_t data) : CharField(1395, data) {}
  };

  public __gc class CollAsgnRejectReason : public IntField
  {
  public:
    static const int FIELD = 906;
    static const int INVALIDTYPEOFCOLLATERAL = 4;
    static const int UNAUTHORIZED_TRANSACTION = 2;
    static const int UNKNOWN_OR_INVALID_INSTRUMENT = 1;
    static const int UNKNOWNDEAL = 0;
    static const int UNKNOWN_DEAL = 0;
    static const int UNAUTHORIZEDTRANSACTION = 2;
    static const int INVALID_TYPE_OF_COLLATERAL = 4;
    static const int INSUFFICIENTCOLLATERAL = 3;
    static const int UNKNOWNORINVALIDINSTRUMENT = 1;
    static const int EXCESSIVE_SUBSTITUTION = 5;
    static const int OTHER = 99;
    static const int INSUFFICIENT_COLLATERAL = 3;
    static const int EXCESSIVESUBSTITUTION = 5;
    CollAsgnRejectReason() : IntField(906) {}
    CollAsgnRejectReason(int data) : IntField(906, data) {}
  };

  public __gc class PeggedRefPrice : public DoubleField
  {
  public:
    static const int FIELD = 1095;
    PeggedRefPrice() : DoubleField(1095) {}
    PeggedRefPrice(double data) : DoubleField(1095, data) {}
    PeggedRefPrice(double data, int decimalPadding) : DoubleField(1095, data, decimalPadding) {}
  };

  public __gc class IndividualAllocType : public IntField
  {
  public:
    static const int FIELD = 992;
    static const int SUB_ALLOCATE = 1;
    static const int THIRD_PARTY_ALLOCATION = 2;
    IndividualAllocType() : IntField(992) {}
    IndividualAllocType(int data) : IntField(992, data) {}
  };

  public __gc class EndCash : public DoubleField
  {
  public:
    static const int FIELD = 922;
    EndCash() : DoubleField(922) {}
    EndCash(double data) : DoubleField(922, data) {}
    EndCash(double data, int decimalPadding) : DoubleField(922, data, decimalPadding) {}
  };

  public __gc class EventText : public StringField
  {
  public:
    static const int FIELD = 868;
    EventText() : StringField(868) {}
    EventText(String* data) : StringField(868, data) {}
  };

  public __gc class ExDate : public StringField
  {
  public:
    static const int FIELD = 230;
    ExDate() : StringField(230) {}
    ExDate(String* data) : StringField(230, data) {}
  };

  public __gc class NestedPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 525;
    NestedPartyIDSource() : CharField(525) {}
    NestedPartyIDSource(__wchar_t data) : CharField(525, data) {}
  };

  public __gc class GTBookingInst : public IntField
  {
  public:
    static const int FIELD = 427;
    static const int ACCUMUNTILFILL = 1;
    static const int ACCUMUNTILNOTIFY = 2;
    static const int BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = 0;
    static const int ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = 2;
    static const int ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = 1;
    static const int BOOKALL = 0;
    static const int ACCUMULATE_UNTIL_VERBALLLY_NOTIFIED_OTHERWISE = 2;
    static const int ACCUMULATE_EXECTUIONS_UNTIL_FORDER_IS_FILLED_OR_EXPIRES = 1;
    GTBookingInst() : IntField(427) {}
    GTBookingInst(int data) : IntField(427, data) {}
  };

  public __gc class DerivativeValuationMethod : public StringField
  {
  public:
    static const int FIELD = 1319;
    DerivativeValuationMethod() : StringField(1319) {}
    DerivativeValuationMethod(String* data) : StringField(1319, data) {}
  };

  public __gc class NumberOfOrders : public IntField
  {
  public:
    static const int FIELD = 346;
    NumberOfOrders() : IntField(346) {}
    NumberOfOrders(int data) : IntField(346, data) {}
  };

  public __gc class TrdRepPartyRole : public IntField
  {
  public:
    static const int FIELD = 1388;
    TrdRepPartyRole() : IntField(1388) {}
    TrdRepPartyRole(int data) : IntField(1388, data) {}
  };

  public __gc class TriggerPrice : public DoubleField
  {
  public:
    static const int FIELD = 1102;
    TriggerPrice() : DoubleField(1102) {}
    TriggerPrice(double data) : DoubleField(1102, data) {}
    TriggerPrice(double data, int decimalPadding) : DoubleField(1102, data, decimalPadding) {}
  };

  public __gc class MDReportID : public IntField
  {
  public:
    static const int FIELD = 963;
    MDReportID() : IntField(963) {}
    MDReportID(int data) : IntField(963, data) {}
  };

  public __gc class SecondaryAllocID : public StringField
  {
  public:
    static const int FIELD = 793;
    SecondaryAllocID() : StringField(793) {}
    SecondaryAllocID(String* data) : StringField(793, data) {}
  };

  public __gc class LeavesQty : public DoubleField
  {
  public:
    static const int FIELD = 151;
    LeavesQty() : DoubleField(151) {}
    LeavesQty(double data) : DoubleField(151, data) {}
    LeavesQty(double data, int decimalPadding) : DoubleField(151, data, decimalPadding) {}
  };

  public __gc class CardStartDate : public StringField
  {
  public:
    static const int FIELD = 503;
    CardStartDate() : StringField(503) {}
    CardStartDate(String* data) : StringField(503, data) {}
  };

  public __gc class LegCoveredOrUncovered : public IntField
  {
  public:
    static const int FIELD = 565;
    LegCoveredOrUncovered() : IntField(565) {}
    LegCoveredOrUncovered(int data) : IntField(565, data) {}
  };

  public __gc class PutOrCall : public IntField
  {
  public:
    static const int FIELD = 201;
    static const int PUT = 0;
    static const int CALL = 1;
    PutOrCall() : IntField(201) {}
    PutOrCall(int data) : IntField(201, data) {}
  };

  public __gc class MatchAlgorithm : public StringField
  {
  public:
    static const int FIELD = 1142;
    MatchAlgorithm() : StringField(1142) {}
    MatchAlgorithm(String* data) : StringField(1142, data) {}
  };

  public __gc class CalculatedCcyLastQty : public DoubleField
  {
  public:
    static const int FIELD = 1056;
    CalculatedCcyLastQty() : DoubleField(1056) {}
    CalculatedCcyLastQty(double data) : DoubleField(1056, data) {}
    CalculatedCcyLastQty(double data, int decimalPadding) : DoubleField(1056, data, decimalPadding) {}
  };

  public __gc class FundRenewWaiv : public CharField
  {
  public:
    static const int FIELD = 497;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    FundRenewWaiv() : CharField(497) {}
    FundRenewWaiv(__wchar_t data) : CharField(497, data) {}
  };

  public __gc class SecuritySettlAgentName : public StringField
  {
  public:
    static const int FIELD = 176;
    SecuritySettlAgentName() : StringField(176) {}
    SecuritySettlAgentName(String* data) : StringField(176, data) {}
  };

  public __gc class BidDescriptor : public StringField
  {
  public:
    static const int FIELD = 400;
    BidDescriptor() : StringField(400) {}
    BidDescriptor(String* data) : StringField(400, data) {}
  };

  public __gc class RelationshipRiskSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 1595;
    RelationshipRiskSecurityAltIDSource() : StringField(1595) {}
    RelationshipRiskSecurityAltIDSource(String* data) : StringField(1595, data) {}
  };

  public __gc class MDStreamID : public StringField
  {
  public:
    static const int FIELD = 1500;
    MDStreamID() : StringField(1500) {}
    MDStreamID(String* data) : StringField(1500, data) {}
  };

  public __gc class NoAsgnReqs : public IntField
  {
  public:
    static const int FIELD = 1499;
    NoAsgnReqs() : IntField(1499) {}
    NoAsgnReqs(int data) : IntField(1499, data) {}
  };

  public __gc class NotionalPercentageOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 1451;
    NotionalPercentageOutstanding() : DoubleField(1451) {}
    NotionalPercentageOutstanding(double data) : DoubleField(1451, data) {}
    NotionalPercentageOutstanding(double data, int decimalPadding) : DoubleField(1451, data, decimalPadding) {}
  };

  public __gc class NoSettlInst : public IntField
  {
  public:
    static const int FIELD = 778;
    NoSettlInst() : IntField(778) {}
    NoSettlInst(int data) : IntField(778, data) {}
  };

  public __gc class SettlInstMsgID : public StringField
  {
  public:
    static const int FIELD = 777;
    SettlInstMsgID() : StringField(777) {}
    SettlInstMsgID(String* data) : StringField(777, data) {}
  };

  public __gc class ForexReq : public BooleanField
  {
  public:
    static const int FIELD = 121;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ForexReq() : BooleanField(121) {}
    ForexReq(bool data) : BooleanField(121, data) {}
  };

  public __gc class TradSesReqID : public StringField
  {
  public:
    static const int FIELD = 335;
    TradSesReqID() : StringField(335) {}
    TradSesReqID(String* data) : StringField(335, data) {}
  };

  public __gc class UnderlyingLegStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 1340;
    UnderlyingLegStrikePrice() : DoubleField(1340) {}
    UnderlyingLegStrikePrice(double data) : DoubleField(1340, data) {}
    UnderlyingLegStrikePrice(double data, int decimalPadding) : DoubleField(1340, data, decimalPadding) {}
  };

  public __gc class TickRuleType : public IntField
  {
  public:
    static const int FIELD = 1209;
    static const int TRADED_AS_A_SPREAD_LEG = 3;
    static const int REGULAR = 0;
    static const int VARIABLE = 1;
    static const int SETTLED_AS_A_SPREAD_LEG = 4;
    static const int FIXED = 2;
    TickRuleType() : IntField(1209) {}
    TickRuleType(int data) : IntField(1209, data) {}
  };

  public __gc class InstrmtAssignmentMethod : public CharField
  {
  public:
    static const int FIELD = 1049;
    InstrmtAssignmentMethod() : CharField(1049) {}
    InstrmtAssignmentMethod(__wchar_t data) : CharField(1049, data) {}
  };

  public __gc class DiscretionOffsetType : public IntField
  {
  public:
    static const int FIELD = 842;
    static const int PRICE = 0;
    static const int BASISPOINTS = 1;
    static const int PRICE_TIER = 3;
    static const int TICKS = 2;
    static const int PRICETIERLEVEL = 3;
    static const int BASIS_POINTS = 1;
    DiscretionOffsetType() : IntField(842) {}
    DiscretionOffsetType(int data) : IntField(842, data) {}
  };

  public __gc class ConfirmTransType : public IntField
  {
  public:
    static const int FIELD = 666;
    static const int REPLACE = 1;
    static const int NEW = 0;
    static const int CANCEL = 2;
    ConfirmTransType() : IntField(666) {}
    ConfirmTransType(int data) : IntField(666, data) {}
  };

  public __gc class TotalTakedown : public DoubleField
  {
  public:
    static const int FIELD = 237;
    TotalTakedown() : DoubleField(237) {}
    TotalTakedown(double data) : DoubleField(237, data) {}
    TotalTakedown(double data, int decimalPadding) : DoubleField(237, data, decimalPadding) {}
  };

  public __gc class ResponseDestination : public StringField
  {
  public:
    static const int FIELD = 726;
    ResponseDestination() : StringField(726) {}
    ResponseDestination(String* data) : StringField(726, data) {}
  };

  public __gc class MDSecSizeType : public IntField
  {
  public:
    static const int FIELD = 1178;
    static const int CUSTOMER = 1;
    MDSecSizeType() : IntField(1178) {}
    MDSecSizeType(int data) : IntField(1178, data) {}
  };

  public __gc class InstrumentPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1054;
    InstrumentPartySubIDType() : IntField(1054) {}
    InstrumentPartySubIDType(int data) : IntField(1054, data) {}
  };

  public __gc class LegTimeUnit : public StringField
  {
  public:
    static const int FIELD = 1001;
    LegTimeUnit() : StringField(1001) {}
    LegTimeUnit(String* data) : StringField(1001, data) {}
  };

  public __gc class TransferReason : public StringField
  {
  public:
    static const int FIELD = 830;
    TransferReason() : StringField(830) {}
    TransferReason(String* data) : StringField(830, data) {}
  };

  public __gc class ApplQueueMax : public IntField
  {
  public:
    static const int FIELD = 812;
    ApplQueueMax() : IntField(812) {}
    ApplQueueMax(int data) : IntField(812, data) {}
  };

  public __gc class DiscretionOffsetValue : public DoubleField
  {
  public:
    static const int FIELD = 389;
    DiscretionOffsetValue() : DoubleField(389) {}
    DiscretionOffsetValue(double data) : DoubleField(389, data) {}
    DiscretionOffsetValue(double data, int decimalPadding) : DoubleField(389, data, decimalPadding) {}
  };

  public __gc class BookingRefID : public StringField
  {
  public:
    static const int FIELD = 466;
    BookingRefID() : StringField(466) {}
    BookingRefID(String* data) : StringField(466, data) {}
  };

  public __gc class LegBidPx : public DoubleField
  {
  public:
    static const int FIELD = 681;
    LegBidPx() : DoubleField(681) {}
    LegBidPx(double data) : DoubleField(681, data) {}
    LegBidPx(double data, int decimalPadding) : DoubleField(681, data, decimalPadding) {}
  };

  public __gc class ContextPartyRole : public IntField
  {
  public:
    static const int FIELD = 1525;
    ContextPartyRole() : IntField(1525) {}
    ContextPartyRole(int data) : IntField(1525, data) {}
  };

  public __gc class TradSesEvent : public IntField
  {
  public:
    static const int FIELD = 1368;
    static const int CHANGE_OF_TRADING_STATUS = 3;
    static const int CHANGE_OF_TRADING_SESSION = 1;
    static const int CHANGE_OF_TRADING_SUBSESSION = 2;
    static const int TRADING_RESUMES = 0;
    TradSesEvent() : IntField(1368) {}
    TradSesEvent(int data) : IntField(1368, data) {}
  };

  public __gc class DerivativeProduct : public IntField
  {
  public:
    static const int FIELD = 1246;
    DerivativeProduct() : IntField(1246) {}
    DerivativeProduct(int data) : IntField(1246, data) {}
  };

  public __gc class RootPartyRole : public IntField
  {
  public:
    static const int FIELD = 1119;
    RootPartyRole() : IntField(1119) {}
    RootPartyRole(int data) : IntField(1119, data) {}
  };

  public __gc class DlvyInstType : public CharField
  {
  public:
    static const int FIELD = 787;
    static const __wchar_t SECURITIES = 'S';
    static const __wchar_t CASH = 'C';
    DlvyInstType() : CharField(787) {}
    DlvyInstType(__wchar_t data) : CharField(787, data) {}
  };

  public __gc class NoLinesOfText : public IntField
  {
  public:
    static const int FIELD = 33;
    NoLinesOfText() : IntField(33) {}
    NoLinesOfText(int data) : IntField(33, data) {}
  };

  public __gc class PosReqID : public StringField
  {
  public:
    static const int FIELD = 710;
    PosReqID() : StringField(710) {}
    PosReqID(String* data) : StringField(710, data) {}
  };

  public __gc class LegSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 606;
    LegSecurityAltIDSource() : StringField(606) {}
    LegSecurityAltIDSource(String* data) : StringField(606, data) {}
  };

  public __gc class EncodedSubject : public StringField
  {
  public:
    static const int FIELD = 357;
    EncodedSubject() : StringField(357) {}
    EncodedSubject(String* data) : StringField(357, data) {}
  };

  public __gc class ContraBroker : public StringField
  {
  public:
    static const int FIELD = 375;
    ContraBroker() : StringField(375) {}
    ContraBroker(String* data) : StringField(375, data) {}
  };

  public __gc class TradeCondition : public StringField
  {
  public:
    static const int FIELD = 277;
    static const __wchar_t IMPLIED_TRADE = '1';
    static const __wchar_t CASHMKT = 'A';
    static const __wchar_t OPENING_PRICE = 'R';
    static const __wchar_t PRIOR_REFERENCE_PRICE = 'AK';
    static const __wchar_t CANCEL_LAST_ETH = 'l';
    static const __wchar_t SELLER = 'L';
    static const __wchar_t DISTRIBUTION = 'e';
    static const __wchar_t NEXT_DAY_TRADE = 'J';
    static const __wchar_t STRADDLE_ETH = 'AD';
    static const __wchar_t SPREAD = 'AA';
    static const __wchar_t OPENINGPRICE = 'R';
    static const __wchar_t CROSSED_AO = 'AO';
    static const __wchar_t SOLD_LAST_SALE = 'o';
    static const __wchar_t OPENED_SALE_ETH = 'r';
    static const __wchar_t REOPEN_ETH = 'x';
    static const __wchar_t SOLD_LAST_SALE_ETH = 'm';
    static const __wchar_t STOPPED_SOLD_LAST = 'AL';
    static const __wchar_t TRADES_RESULTING_FROM_INTERMARKET_SWEEP = 'Z';
    static const __wchar_t NEXTDAY_D = 'D';
    static const __wchar_t FORM_T = 'AR';
    static const __wchar_t ADJUSTED = 'y';
    static const __wchar_t CANCEL_ETH = 'i';
    static const __wchar_t OUT_OF_SEQUENCE_ETH = 'k';
    static const __wchar_t RULE127 = 'G';
    static const __wchar_t COMBO_ETH = 'AI';
    static const __wchar_t CANCEL_ONLY_ETH = 't';
    static const __wchar_t STRADDLE = 'AC';
    static const __wchar_t OUTSIDE_SPREAD = 'AV';
    static const __wchar_t BUNCHED_SALE = 'f';
    static const __wchar_t CANCEL_STOPPED = 'h';
    static const __wchar_t LATE_OPEN_ETH = 'u';
    static const __wchar_t OPENING_REOPENING_TRADE_DETAIL = 'E';
    static const __wchar_t CANCEL = '0';
    static const __wchar_t COMBO = 'AH';
    static const __wchar_t OPENING = 'E';
    static const __wchar_t ACQUISITION = 'c';
    static const __wchar_t OPENED = 'K';
    static const __wchar_t CANCEL_ONLY = 's';
    static const __wchar_t NEXT_DAY = 'D';
    static const __wchar_t BARGAIN_CONDITION = 'S';
    static const __wchar_t STOPPED = 'AE';
    static const __wchar_t CONVERTED_PRICE_INDICATOR = 'T';
    static const __wchar_t OFFICIAL_CLOSING_PRICE = 'AJ';
    static const __wchar_t ADJUSTED_ETH = 'z';
    static const __wchar_t AVGPX = 'B';
    static const __wchar_t RULE_155_TRADE = 'H';
    static const __wchar_t SOLDLAST = 'I';
    static const __wchar_t NEXTDAY_J = 'J';
    static const __wchar_t AUTOMATIC_EXECUTION = 'AQ';
    static const __wchar_t CROSSED_X = 'X';
    static const __wchar_t AUTO_EXECUTION_ETH = 'v';
    static const __wchar_t MULTILEG_TO_MULTILEG_TRADE = '4';
    static const __wchar_t OFFICAL_CLOSING_PRICE = 'AN';
    static const __wchar_t FINAL_PRICE_OF_SESSION = 'V';
    static const __wchar_t BASKET_INDEX = 'AS';
    static const __wchar_t TRADES_RESULTING_FROM_MANUAL_SLOW_QUOTE = 'Y';
    static const __wchar_t STOPPED_STOCK = 'N';
    static const __wchar_t MULT_ASSET_CLASS_MULTILEG_TRADE = '3';
    static const __wchar_t STOPPED_ETH = 'AF';
    static const __wchar_t REGULAR_ETH = 'AG';
    static const __wchar_t CANCEL_OPEN = 'p';
    static const __wchar_t CASH = 'A';
    static const __wchar_t CASHTRADE = 'C';
    static const __wchar_t RULE155 = 'H';
    static const __wchar_t CANCEL_STOPPED_ETH = 'j';
    static const __wchar_t VOLUME_ONLY = 'a';
    static const __wchar_t SPLIT_TRADE = 'g';
    static const __wchar_t STOPPED_OUT_OF_SEQUENCE = 'AM';
    static const __wchar_t CASH_TRADE = 'C';
    static const __wchar_t IMBALANCE_MORE_BUYERS = 'P';
    static const __wchar_t BUNCHED = 'd';
    static const __wchar_t INTRADAY = 'F';
    static const __wchar_t IMBALANCE_MORE_SELLERS = 'Q';
    static const __wchar_t INTRADAY_TRADE_DETAIL = 'F';
    static const __wchar_t RULE_127_TRADE = 'G';
    static const __wchar_t IMBALANCEMOREBUYERS = 'P';
    static const __wchar_t REOPEN = 'w';
    static const __wchar_t EX_PIT = 'W';
    static const __wchar_t CANCEL_LAST = 'n';
    static const __wchar_t DIRECT_PLUS = 'b';
    static const __wchar_t IMBALANCEMORESELLERS = 'Q';
    static const __wchar_t AVERAGE_PRICE_TRADE = 'B';
    static const __wchar_t SOLD_LAST = 'I';
    static const __wchar_t MARKETPLACE_ENTERED_TRADE = '2';
    static const __wchar_t SPREAD_ETH = 'AB';
    static const __wchar_t CANCEL_OPEN_ETH = 'q';
    static const __wchar_t EXCHANGE_LAST = 'U';
    static const __wchar_t FAST_MARKET = 'AP';
    static const __wchar_t BURST_BASKET = 'AT';
    static const __wchar_t SOLD = 'M';
    TradeCondition() : StringField(277) {}
    TradeCondition(String* data) : StringField(277, data) {}
  };

  public __gc class PartyID : public StringField
  {
  public:
    static const int FIELD = 448;
    PartyID() : StringField(448) {}
    PartyID(String* data) : StringField(448, data) {}
  };

  public __gc class MDEntryID : public StringField
  {
  public:
    static const int FIELD = 278;
    MDEntryID() : StringField(278) {}
    MDEntryID(String* data) : StringField(278, data) {}
  };

  public __gc class UnderlyingLegSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 1341;
    UnderlyingLegSecurityExchange() : StringField(1341) {}
    UnderlyingLegSecurityExchange(String* data) : StringField(1341, data) {}
  };

  public __gc class PriceLimitType : public IntField
  {
  public:
    static const int FIELD = 1306;
    static const int PRICE = 0;
    static const int TICKS = 1;
    static const int PERCENTAGE = 2;
    PriceLimitType() : IntField(1306) {}
    PriceLimitType(int data) : IntField(1306, data) {}
  };

  public __gc class TriggerSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1105;
    TriggerSecurityIDSource() : StringField(1105) {}
    TriggerSecurityIDSource(String* data) : StringField(1105, data) {}
  };

  public __gc class NoUndlyInstrumentPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 1062;
    NoUndlyInstrumentPartySubIDs() : IntField(1062) {}
    NoUndlyInstrumentPartySubIDs(int data) : IntField(1062, data) {}
  };

  public __gc class ClientBidID : public StringField
  {
  public:
    static const int FIELD = 391;
    ClientBidID() : StringField(391) {}
    ClientBidID(String* data) : StringField(391, data) {}
  };

  public __gc class NetChgPrevDay : public DoubleField
  {
  public:
    static const int FIELD = 451;
    NetChgPrevDay() : DoubleField(451) {}
    NetChgPrevDay(double data) : DoubleField(451, data) {}
    NetChgPrevDay(double data, int decimalPadding) : DoubleField(451, data, decimalPadding) {}
  };

  public __gc class DefaultApplVerID : public StringField
  {
  public:
    static const int FIELD = 1137;
    DefaultApplVerID() : StringField(1137) {}
    DefaultApplVerID(String* data) : StringField(1137, data) {}
  };

  public __gc class IOIID : public StringField
  {
  public:
    static const int FIELD = 23;
    IOIID() : StringField(23) {}
    IOIID(String* data) : StringField(23, data) {}
  };

  public __gc class SpreadToBenchmark : public DoubleField
  {
  public:
    static const int FIELD = 218;
    SpreadToBenchmark() : DoubleField(218) {}
    SpreadToBenchmark(double data) : DoubleField(218, data) {}
    SpreadToBenchmark(double data, int decimalPadding) : DoubleField(218, data, decimalPadding) {}
  };

  public __gc class CommType : public CharField
  {
  public:
    static const int FIELD = 13;
    static const __wchar_t PER_SHARE = '1';
    static const __wchar_t PCTWAIVEDCSHDISC = '4';
    static const __wchar_t ABSOLUTE = '3';
    static const __wchar_t PCTWAIVEDENUNITS = '5';
    static const __wchar_t PERBOND = '6';
    static const __wchar_t PER_BOND = '6';
    static const __wchar_t PERCENTAGE = '2';
    static const __wchar_t PERCENTAGE_WAIVED_4 = '4';
    static const __wchar_t POINTS_PER_BOND_OR_CONTRACT = '6';
    static const __wchar_t PERCENTAGE_WAIVED_5 = '5';
    static const __wchar_t PER_UNIT = '1';
    static const __wchar_t PERCENT = '2';
    static const __wchar_t _4 = '4';
    static const __wchar_t _5 = '5';
    CommType() : CharField(13) {}
    CommType(__wchar_t data) : CharField(13, data) {}
  };

  public __gc class RegistRejReasonCode : public IntField
  {
  public:
    static const int FIELD = 507;
    static const int INVALID_UNACCEPTABLE_NO_DISTRIB_INSTNS = 13;
    static const int INVALIDOWNERSHIPTYPE = 3;
    static const int INVALIDREGDTLS = 6;
    static const int INVALIDMAILINGDTLS = 7;
    static const int INVALID_UNACCEPTABLE_MAILING_DTLS = 7;
    static const int INVALID_UNACCEPTABLE_NO_REG_DETAILS = 4;
    static const int INVALID_UNACCEPTABLE_MAILING_INSTRUCTIONS = 8;
    static const int INVALIDINVESTORCOUNTRYOFRESIDENCE = 12;
    static const int INVALIDCASHDISTRIBAGENTCODE = 17;
    static const int INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE = 2;
    static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME = 16;
    static const int INVALID_UNACEEPTABLE_INVESTOR_ID_SOURCE = 10;
    static const int INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE = 10;
    static const int INVALIDDATEOFBIRTH = 11;
    static const int INVALIDDISTRIBPAYMENTMETHOD = 15;
    static const int INVALID_UNACCEPTABLE_DATE_OF_BIRTH = 11;
    static const int INVALIDNODISTRIBINSTNS = 13;
    static const int INVALIDCASHDISTRIBAGENTACCTNUM = 18;
    static const int INVALIDTAXEXEMPTTYPE = 2;
    static const int INVALIDMAILINGINST = 8;
    static const int INVALID_UNACCEPTABLE_MAILING_INST = 8;
    static const int INVALID_UNACCEPTABLE_NO_REG_DETLS = 4;
    static const int INVALIDACCOUNTTYPE = 1;
    static const int INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD = 15;
    static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE = 17;
    static const int INVALID_UNACCEPTABLE_REG_DETAILS = 6;
    static const int INVALIDREGSEQNO = 5;
    static const int OTHER = 99;
    static const int INVALIDDISTRIBPERCENTAGE = 14;
    static const int INVALID_UNACCEPTABLE_REG_DTLS = 6;
    static const int INVALID_UNACCEPTABLE_ACCOUNT_TYPE = 1;
    static const int INVALID_UNACCEPTABLE_MAILING_DETAILS = 7;
    static const int INVALIDINVESTORIDSOURCE = 10;
    static const int INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE = 12;
    static const int INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE = 14;
    static const int INVALIDCASHDISTRIBAGENTACCTNAME = 16;
    static const int INVALIDNOREGDETLS = 4;
    static const int INVALIDINVESTORID = 9;
    static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM = 18;
    static const int INVALID_UNACCEPTABLE_REG_SEQ_NO = 5;
    static const int INVALID_UNACCEPTABLE_INVESTOR_ID = 9;
    static const int INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = 3;
    static const int INVALID_UNACCEPTABLE_NODISTRIBINSTNS = 13;
    RegistRejReasonCode() : IntField(507) {}
    RegistRejReasonCode(int data) : IntField(507, data) {}
  };

  public __gc class RelationshipRiskEncodedSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1619;
    RelationshipRiskEncodedSecurityDesc() : StringField(1619) {}
    RelationshipRiskEncodedSecurityDesc(String* data) : StringField(1619, data) {}
  };

  public __gc class RelationshipRiskRestructuringType : public StringField
  {
  public:
    static const int FIELD = 1604;
    RelationshipRiskRestructuringType() : StringField(1604) {}
    RelationshipRiskRestructuringType(String* data) : StringField(1604, data) {}
  };

  public __gc class SideTimeInForce : public UtcTimeStampField
  {
  public:
    static const int FIELD = 962;
    SideTimeInForce() : UtcTimeStampField(962) {}
    SideTimeInForce(DateTime data) : UtcTimeStampField(962, data) {}
  };

  public __gc class TrdRegTimestamp : public UtcTimeStampField
  {
  public:
    static const int FIELD = 769;
    TrdRegTimestamp() : UtcTimeStampField(769) {}
    TrdRegTimestamp(DateTime data) : UtcTimeStampField(769, data) {}
  };

  public __gc class FinancialStatus : public StringField
  {
  public:
    static const int FIELD = 291;
    static const __wchar_t BANKRUPT = '1';
    static const __wchar_t PENDINGDELISTING = '2';
    static const __wchar_t RESTRICTED = '3';
    static const __wchar_t PENDING_DELISTING = '2';
    FinancialStatus() : StringField(291) {}
    FinancialStatus(String* data) : StringField(291, data) {}
  };

  public __gc class NoTrades : public IntField
  {
  public:
    static const int FIELD = 897;
    NoTrades() : IntField(897) {}
    NoTrades(int data) : IntField(897, data) {}
  };

  public __gc class LastFragment : public BooleanField
  {
  public:
    static const int FIELD = 893;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LastFragment() : BooleanField(893) {}
    LastFragment(bool data) : BooleanField(893, data) {}
  };

  public __gc class PartySubID : public StringField
  {
  public:
    static const int FIELD = 523;
    PartySubID() : StringField(523) {}
    PartySubID(String* data) : StringField(523, data) {}
  };

  public __gc class AllocQty : public DoubleField
  {
  public:
    static const int FIELD = 80;
    AllocQty() : DoubleField(80) {}
    AllocQty(double data) : DoubleField(80, data) {}
    AllocQty(double data, int decimalPadding) : DoubleField(80, data, decimalPadding) {}
  };

  public __gc class NotifyBrokerOfCredit : public BooleanField
  {
  public:
    static const int FIELD = 208;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    NotifyBrokerOfCredit() : BooleanField(208) {}
    NotifyBrokerOfCredit(bool data) : BooleanField(208, data) {}
  };

  public __gc class SideTrdRegTimestampType : public IntField
  {
  public:
    static const int FIELD = 1013;
    SideTrdRegTimestampType() : IntField(1013) {}
    SideTrdRegTimestampType(int data) : IntField(1013, data) {}
  };

  public __gc class AgreementDate : public StringField
  {
  public:
    static const int FIELD = 915;
    AgreementDate() : StringField(915) {}
    AgreementDate(String* data) : StringField(915, data) {}
  };

  public __gc class PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 803;
    static const int REGISTERED_ADDRESS_12 = 12;
    static const int CASH_ACCOUNT_NUMBER = 15;
    static const int FAX_NUMBER = 21;
    static const int CONTACTNAME = 9;
    static const int RESERVEDANDAVAILABLEFORBILATERALLYAGREEDUPONUSERDEFINEDVALUES = 4000;
    static const int DEPARTMENT = 24;
    static const int CONTACT_NAME = 9;
    static const int TELEXNUMBER = 20;
    static const int PERSON = 2;
    static const int FIRM = 1;
    static const int CASH_ACCOUNT_NAME = 23;
    static const int POSITION_ACCOUNT_TYPE = 26;
    static const int POSTAL_ADDRESS = 6;
    static const int SECURITY_LOCATE_ID = 27;
    static const int POSTALADDRESS = 6;
    static const int FUND_ACCOUNT_NAME = 19;
    static const int PROFESSIONAL_CLIENT = 30;
    static const int LOCATION = 31;
    static const int FULLLEGALNAMEOFFIRM = 5;
    static const int LOCATIONDESK = 25;
    static const int REGISTEREDADDRESS_12 = 12;
    static const int REGISTRATION_NUMBER = 11;
    static const int EMAILADDRESS = 8;
    static const int SYSTEM = 3;
    static const int SECURITIESACCOUNTNUMBER = 10;
    static const int REGULATORY_STATUS = 13;
    static const int CSD_PARTICIPANT_MEMBER_CODE = 17;
    static const int PHONENUMBER = 7;
    static const int CURRENCY_DELIVERY_IDENTIFIER = 33;
    static const int REGISTRATION_NAME = 14;
    static const int REGISTERED_ADDRESS_18 = 18;
    static const int TELEX_NUMBER = 20;
    static const int EMAIL_ADDRESS = 8;
    static const int FAXNUMBER = 21;
    static const int BIC = 16;
    static const int CASHACCOUNT = 15;
    static const int REGISTRATIONNUMBER = 11;
    static const int LOCATION_DESK = 25;
    static const int APPLICATION = 4;
    static const int CASHACCOUNTNAME = 23;
    static const int SECURITIES_ACCOUNT_NAME = 22;
    static const int PHONE_NUMBER = 7;
    static const int SECURITIESACCOUNTNAME = 22;
    static const int REGISTRATIONNAME = 14;
    static const int ELIGIBLE_COUNTERPARTY = 29;
    static const int REGISTEREDADDRESS_18 = 18;
    static const int SECURITIES_ACCOUNT_NUMBER = 10;
    static const int FULL_LEGAL_NAME_OF_FIRM = 5;
    static const int MARKET_MAKER = 28;
    static const int EXECUTION_VENUE = 32;
    static const int POSITIONACCOUNTTYPE = 26;
    static const int FUNDACCOUNTNAME = 19;
    static const int CSDPARTICIPANTMEMBERCODE = 17;
    static const int REGULATORYSTATUS = 13;
    PartySubIDType() : IntField(803) {}
    PartySubIDType(int data) : IntField(803, data) {}
  };

  public __gc class TotalNetValue : public DoubleField
  {
  public:
    static const int FIELD = 900;
    TotalNetValue() : DoubleField(900) {}
    TotalNetValue(double data) : DoubleField(900, data) {}
    TotalNetValue(double data, int decimalPadding) : DoubleField(900, data, decimalPadding) {}
  };

  public __gc class AllocNoOrdersType : public IntField
  {
  public:
    static const int FIELD = 857;
    static const int EXPLICIT_LIST_PROVIDED = 1;
    static const int NOTSPECIFIED = 0;
    static const int NOT_SPECIFIED = 0;
    static const int EXPLICITLISTPROVIDED = 1;
    AllocNoOrdersType() : IntField(857) {}
    AllocNoOrdersType(int data) : IntField(857, data) {}
  };

  public __gc class AllocLinkID : public StringField
  {
  public:
    static const int FIELD = 196;
    AllocLinkID() : StringField(196) {}
    AllocLinkID(String* data) : StringField(196, data) {}
  };

  public __gc class RoundingModulus : public DoubleField
  {
  public:
    static const int FIELD = 469;
    RoundingModulus() : DoubleField(469) {}
    RoundingModulus(double data) : DoubleField(469, data) {}
    RoundingModulus(double data, int decimalPadding) : DoubleField(469, data, decimalPadding) {}
  };

  public __gc class OnBehalfOfCompID : public StringField
  {
  public:
    static const int FIELD = 115;
    OnBehalfOfCompID() : StringField(115) {}
    OnBehalfOfCompID(String* data) : StringField(115, data) {}
  };

  public __gc class UnderlyingSecurityID : public StringField
  {
  public:
    static const int FIELD = 309;
    UnderlyingSecurityID() : StringField(309) {}
    UnderlyingSecurityID(String* data) : StringField(309, data) {}
  };

  public __gc class SettlObligMsgID : public StringField
  {
  public:
    static const int FIELD = 1160;
    SettlObligMsgID() : StringField(1160) {}
    SettlObligMsgID(String* data) : StringField(1160, data) {}
  };

  public __gc class PositionLimit : public IntField
  {
  public:
    static const int FIELD = 970;
    PositionLimit() : IntField(970) {}
    PositionLimit(int data) : IntField(970, data) {}
  };

  public __gc class SharedCommission : public DoubleField
  {
  public:
    static const int FIELD = 858;
    SharedCommission() : DoubleField(858) {}
    SharedCommission(double data) : DoubleField(858, data) {}
    SharedCommission(double data, int decimalPadding) : DoubleField(858, data, decimalPadding) {}
  };

  public __gc class AllowableOneSidednessPct : public DoubleField
  {
  public:
    static const int FIELD = 765;
    AllowableOneSidednessPct() : DoubleField(765) {}
    AllowableOneSidednessPct(double data) : DoubleField(765, data) {}
    AllowableOneSidednessPct(double data, int decimalPadding) : DoubleField(765, data, decimalPadding) {}
  };

  public __gc class AllocText : public StringField
  {
  public:
    static const int FIELD = 161;
    AllocText() : StringField(161) {}
    AllocText(String* data) : StringField(161, data) {}
  };

  public __gc class EndSeqNo : public IntField
  {
  public:
    static const int FIELD = 16;
    EndSeqNo() : IntField(16) {}
    EndSeqNo(int data) : IntField(16, data) {}
  };

  public __gc class NoPartyIDs : public IntField
  {
  public:
    static const int FIELD = 453;
    NoPartyIDs() : IntField(453) {}
    NoPartyIDs(int data) : IntField(453, data) {}
  };

  public __gc class NoContraBrokers : public IntField
  {
  public:
    static const int FIELD = 382;
    NoContraBrokers() : IntField(382) {}
    NoContraBrokers(int data) : IntField(382, data) {}
  };

  public __gc class AllocLinkType : public IntField
  {
  public:
    static const int FIELD = 197;
    static const int FX_SWAP = 1;
    static const int F_X_NETTING = 0;
    static const int FXNETTING = 0;
    static const int FX_NETTING = 0;
    static const int FXSWAP = 1;
    static const int F_X_SWAP = 1;
    AllocLinkType() : IntField(197) {}
    AllocLinkType(int data) : IntField(197, data) {}
  };

  public __gc class UnderlyingAllocationPercent : public DoubleField
  {
  public:
    static const int FIELD = 972;
    UnderlyingAllocationPercent() : DoubleField(972) {}
    UnderlyingAllocationPercent(double data) : DoubleField(972, data) {}
    UnderlyingAllocationPercent(double data, int decimalPadding) : DoubleField(972, data, decimalPadding) {}
  };

  public __gc class AllocAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 742;
    AllocAccruedInterestAmt() : DoubleField(742) {}
    AllocAccruedInterestAmt(double data) : DoubleField(742, data) {}
    AllocAccruedInterestAmt(double data, int decimalPadding) : DoubleField(742, data, decimalPadding) {}
  };

  public __gc class RiskSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 1548;
    RiskSecuritySubType() : StringField(1548) {}
    RiskSecuritySubType(String* data) : StringField(1548, data) {}
  };

  public __gc class EncodedSecurityListDesc : public StringField
  {
  public:
    static const int FIELD = 1469;
    EncodedSecurityListDesc() : StringField(1469) {}
    EncodedSecurityListDesc(String* data) : StringField(1469, data) {}
  };

  public __gc class EncryptedPasswordLen : public IntField
  {
  public:
    static const int FIELD = 1401;
    EncryptedPasswordLen() : IntField(1401) {}
    EncryptedPasswordLen(int data) : IntField(1401, data) {}
  };

  public __gc class LegDividendYield : public DoubleField
  {
  public:
    static const int FIELD = 1381;
    LegDividendYield() : DoubleField(1381) {}
    LegDividendYield(double data) : DoubleField(1381, data) {}
    LegDividendYield(double data, int decimalPadding) : DoubleField(1381, data, decimalPadding) {}
  };

  public __gc class RefreshIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1187;
    RefreshIndicator() : BooleanField(1187) {}
    RefreshIndicator(bool data) : BooleanField(1187, data) {}
  };

  public __gc class SideSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 1155;
    SideSettlCurrency() : StringField(1155) {}
    SideSettlCurrency(String* data) : StringField(1155, data) {}
  };

  public __gc class UnderlyingSettlementType : public IntField
  {
  public:
    static const int FIELD = 975;
    static const int T_PLUS_1 = 2;
    static const int T_PLUS_3 = 4;
    static const int T_PLUS_4 = 5;
    UnderlyingSettlementType() : IntField(975) {}
    UnderlyingSettlementType(int data) : IntField(975, data) {}
  };

  public __gc class OrderCapacityQty : public DoubleField
  {
  public:
    static const int FIELD = 863;
    OrderCapacityQty() : DoubleField(863) {}
    OrderCapacityQty(double data) : DoubleField(863, data) {}
    OrderCapacityQty(double data, int decimalPadding) : DoubleField(863, data, decimalPadding) {}
  };

  public __gc class LongQty : public DoubleField
  {
  public:
    static const int FIELD = 704;
    LongQty() : DoubleField(704) {}
    LongQty(double data) : DoubleField(704, data) {}
    LongQty(double data, int decimalPadding) : DoubleField(704, data, decimalPadding) {}
  };

  public __gc class NoPartyAltIDs : public IntField
  {
  public:
    static const int FIELD = 1516;
    NoPartyAltIDs() : IntField(1516) {}
    NoPartyAltIDs(int data) : IntField(1516, data) {}
  };

  public __gc class DerivativeSettlMethod : public CharField
  {
  public:
    static const int FIELD = 1317;
    DerivativeSettlMethod() : CharField(1317) {}
    DerivativeSettlMethod(__wchar_t data) : CharField(1317, data) {}
  };

  public __gc class TriggerTradingSessionID : public StringField
  {
  public:
    static const int FIELD = 1113;
    TriggerTradingSessionID() : StringField(1113) {}
    TriggerTradingSessionID(String* data) : StringField(1113, data) {}
  };

  public __gc class DisplayMethod : public CharField
  {
  public:
    static const int FIELD = 1084;
    static const __wchar_t NEW = '2';
    static const __wchar_t UNDISCLOSED = '4';
    static const __wchar_t RANDOM = '3';
    static const __wchar_t INITIAL = '1';
    DisplayMethod() : CharField(1084) {}
    DisplayMethod(__wchar_t data) : CharField(1084, data) {}
  };

  public __gc class RptSeq : public IntField
  {
  public:
    static const int FIELD = 83;
    RptSeq() : IntField(83) {}
    RptSeq(int data) : IntField(83, data) {}
  };

  public __gc class MDEntryOriginator : public StringField
  {
  public:
    static const int FIELD = 282;
    MDEntryOriginator() : StringField(282) {}
    MDEntryOriginator(String* data) : StringField(282, data) {}
  };

  public __gc class LegInstrRegistry : public StringField
  {
  public:
    static const int FIELD = 599;
    LegInstrRegistry() : StringField(599) {}
    LegInstrRegistry(String* data) : StringField(599, data) {}
  };

  public __gc class FillQty : public DoubleField
  {
  public:
    static const int FIELD = 1365;
    FillQty() : DoubleField(1365) {}
    FillQty(double data) : DoubleField(1365, data) {}
    FillQty(double data, int decimalPadding) : DoubleField(1365, data, decimalPadding) {}
  };

  public __gc class PegSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1096;
    PegSecurityIDSource() : StringField(1096) {}
    PegSecurityIDSource(String* data) : StringField(1096, data) {}
  };

  public __gc class MaturityTime : public StringField
  {
  public:
    static const int FIELD = 1079;
    MaturityTime() : StringField(1079) {}
    MaturityTime(String* data) : StringField(1079, data) {}
  };

  public __gc class MDFeedType : public StringField
  {
  public:
    static const int FIELD = 1022;
    MDFeedType() : StringField(1022) {}
    MDFeedType(String* data) : StringField(1022, data) {}
  };

  public __gc class CollStatus : public IntField
  {
  public:
    static const int FIELD = 910;
    static const int PARTIALLY_ASSIGNED = 1;
    static const int ASSIGNEDACCEPTED = 3;
    static const int ASSIGNMENT_PROPOSED = 2;
    static const int ASSIGNED = 3;
    static const int CHALLENGED = 4;
    static const int UNASSIGNED = 0;
    static const int ASSIGNMENTPROPOSED = 2;
    static const int PARTIALLYASSIGNED = 1;
    CollStatus() : IntField(910) {}
    CollStatus(int data) : IntField(910, data) {}
  };

  public __gc class UnderlyingSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 763;
    UnderlyingSecuritySubType() : StringField(763) {}
    UnderlyingSecuritySubType(String* data) : StringField(763, data) {}
  };

  public __gc class CstmApplVerID : public StringField
  {
  public:
    static const int FIELD = 1129;
    CstmApplVerID() : StringField(1129) {}
    CstmApplVerID(String* data) : StringField(1129, data) {}
  };

  public __gc class DefaultApplExtID : public IntField
  {
  public:
    static const int FIELD = 1407;
    DefaultApplExtID() : IntField(1407) {}
    DefaultApplExtID(int data) : IntField(1407, data) {}
  };

  public __gc class NoDerivativeSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 1218;
    NoDerivativeSecurityAltID() : IntField(1218) {}
    NoDerivativeSecurityAltID(int data) : IntField(1218, data) {}
  };

  public __gc class SideValueInd : public IntField
  {
  public:
    static const int FIELD = 401;
    static const int SIDEVALUE_2 = 2;
    static const int SIDEVALUE1 = 1;
    static const int SIDEVALUE2 = 2;
    static const int SIDE_VALUE_1 = 1;
    static const int SIDE_VALUE_2 = 2;
    SideValueInd() : IntField(401) {}
    SideValueInd(int data) : IntField(401, data) {}
  };

  public __gc class EncodedText : public StringField
  {
  public:
    static const int FIELD = 355;
    EncodedText() : StringField(355) {}
    EncodedText(String* data) : StringField(355, data) {}
  };

  public __gc class Account : public StringField
  {
  public:
    static const int FIELD = 1;
    Account() : StringField(1) {}
    Account(String* data) : StringField(1, data) {}
  };

  public __gc class TriggerNewPrice : public DoubleField
  {
  public:
    static const int FIELD = 1110;
    TriggerNewPrice() : DoubleField(1110) {}
    TriggerNewPrice(double data) : DoubleField(1110, data) {}
    TriggerNewPrice(double data, int decimalPadding) : DoubleField(1110, data, decimalPadding) {}
  };

  public __gc class UndlyInstrumentPartyRole : public IntField
  {
  public:
    static const int FIELD = 1061;
    UndlyInstrumentPartyRole() : IntField(1061) {}
    UndlyInstrumentPartyRole(int data) : IntField(1061, data) {}
  };

  public __gc class MsgDirection : public CharField
  {
  public:
    static const int FIELD = 385;
    static const __wchar_t RECEIVE = 'R';
    static const __wchar_t SEND = 'S';
    MsgDirection() : CharField(385) {}
    MsgDirection(__wchar_t data) : CharField(385, data) {}
  };

  public __gc class LegMaturityDate : public StringField
  {
  public:
    static const int FIELD = 611;
    LegMaturityDate() : StringField(611) {}
    LegMaturityDate(String* data) : StringField(611, data) {}
  };

  public __gc class UnderlyingContractMultiplierUnit : public IntField
  {
  public:
    static const int FIELD = 1437;
    UnderlyingContractMultiplierUnit() : IntField(1437) {}
    UnderlyingContractMultiplierUnit(int data) : IntField(1437, data) {}
  };

  public __gc class InputSource : public StringField
  {
  public:
    static const int FIELD = 979;
    InputSource() : StringField(979) {}
    InputSource(String* data) : StringField(979, data) {}
  };

  public __gc class MDUpdateAction : public CharField
  {
  public:
    static const int FIELD = 279;
    static const __wchar_t DELETE = '2';
    static const __wchar_t NEW = '0';
    static const __wchar_t DELETE_THRU = '3';
    static const __wchar_t DELETE_FROM = '4';
    static const __wchar_t OVERLAY = '5';
    static const __wchar_t CHANGE = '1';
    MDUpdateAction() : CharField(279) {}
    MDUpdateAction(__wchar_t data) : CharField(279, data) {}
  };

  public __gc class MatchStatus : public CharField
  {
  public:
    static const int FIELD = 573;
    static const __wchar_t ADVALERT = '2';
    static const __wchar_t UNCOMPARED_UNMATCHED_OR_UNAFFIRED = '1';
    static const __wchar_t COMPARED_MATCHED_OR_AFFIRMED = '0';
    static const __wchar_t ADVISORY_OR_ALERT = '2';
    static const __wchar_t UNCOMPUNMATUNAFF = '1';
    static const __wchar_t COMPMATAFF = '0';
    static const __wchar_t UNCOMPARED_UNMATCHED_OR_UNAFFIRMED = '1';
    MatchStatus() : CharField(573) {}
    MatchStatus(__wchar_t data) : CharField(573, data) {}
  };

  public __gc class RateSource : public IntField
  {
  public:
    static const int FIELD = 1446;
    static const int REUTERS = 1;
    static const int OTHER = 99;
    static const int BLOOMBERG = 0;
    static const int TELERATE = 2;
    RateSource() : IntField(1446) {}
    RateSource(int data) : IntField(1446, data) {}
  };

  public __gc class AllocPositionEffect : public CharField
  {
  public:
    static const int FIELD = 1047;
    static const __wchar_t CLOSE = 'C';
    static const __wchar_t FIFO = 'F';
    static const __wchar_t OPEN = 'O';
    static const __wchar_t ROLLED = 'R';
    AllocPositionEffect() : CharField(1047) {}
    AllocPositionEffect(__wchar_t data) : CharField(1047, data) {}
  };

  public __gc class PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 447;
    static const __wchar_t US_EMPLOYER_OR_TAX_ID_NUMBER = '8';
    static const __wchar_t PROPRIETARY = 'D';
    static const __wchar_t USEMPLOYERIDNUMBER = '8';
    static const __wchar_t ACCPTMARKETPART = 'C';
    static const __wchar_t CSDPARTCODE = 'H';
    static const __wchar_t AUSTRALIAN_TAX_FILE_NUMBER = 'A';
    static const __wchar_t KOREANINVESTORID = '1';
    static const __wchar_t GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C';
    static const __wchar_t AUSTRALIAN_BUSINESS_NUMBER = '9';
    static const __wchar_t US_EMPLOYER_IDENTIFICATION_NUMBER = '8';
    static const __wchar_t AUSTRALIANTAXFILENUMBER = 'A';
    static const __wchar_t TAIWANESE_TRADING_ACCOUNT = '3';
    static const __wchar_t TAIWANESE_TRADING_ACCT = '3';
    static const __wchar_t CHINESEBSHARE = '5';
    static const __wchar_t AUSTRALIANBUSINESSNUMBER = '9';
    static const __wchar_t MALAYSIAN_CENTRAL_DEPOSITORY = '4';
    static const __wchar_t US_SOCIAL_SECURITY_NUMBER = '7';
    static const __wchar_t TAIWANESEQUALIFIED = '2';
    static const __wchar_t USSOCIALSECURITY = '7';
    static const __wchar_t DIRECTEDDEFINEDISITC = 'I';
    static const __wchar_t UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER = '6';
    static const __wchar_t CSD_PARTICIPANT_MEMBER_CODE = 'H';
    static const __wchar_t DIRECTED_BROKER_THREE_CHARACTER_ACRONYM_AS_DEFINED_IN_ISITC_ETC_BEST_PRACTICE_GUIDELINES_DOCUMENT = 'I';
    static const __wchar_t TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII = '2';
    static const __wchar_t SETTLEMENT_ENTITY_LOCATION = 'F';
    static const __wchar_t PROPRIETARY_CUSTOM_CODE = 'D';
    static const __wchar_t UKNATIONALINSPENNUMBER = '6';
    static const __wchar_t BIC = 'B';
    static const __wchar_t CHINESE_INVESTOR_ID = '5';
    static const __wchar_t TAIWANESETRADINGACCT = '3';
    static const __wchar_t MIC = 'G';
    static const __wchar_t KOREAN_INVESTOR_ID = '1';
    static const __wchar_t ISO_COUNTRY_CODE = 'E';
    static const __wchar_t TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII_FID = '2';
    static const __wchar_t PROPCODE = 'D';
    static const __wchar_t ISOCODE = 'E';
    static const __wchar_t CHINESE_B_SHARE = '5';
    static const __wchar_t MCDNUMBER = '4';
    static const __wchar_t SETTLENTLOC = 'F';
    PartyIDSource() : CharField(447) {}
    PartyIDSource(__wchar_t data) : CharField(447, data) {}
  };

  public __gc class EncodedUnderlyingIssuer : public StringField
  {
  public:
    static const int FIELD = 363;
    EncodedUnderlyingIssuer() : StringField(363) {}
    EncodedUnderlyingIssuer(String* data) : StringField(363, data) {}
  };

  public __gc class NoRequestedPartyRoles : public IntField
  {
  public:
    static const int FIELD = 1508;
    NoRequestedPartyRoles() : IntField(1508) {}
    NoRequestedPartyRoles(int data) : IntField(1508, data) {}
  };

  public __gc class EncryptedPassword : public StringField
  {
  public:
    static const int FIELD = 1402;
    EncryptedPassword() : StringField(1402) {}
    EncryptedPassword(String* data) : StringField(1402, data) {}
  };

  public __gc class TriggerNewQty : public DoubleField
  {
  public:
    static const int FIELD = 1112;
    TriggerNewQty() : DoubleField(1112) {}
    TriggerNewQty(double data) : DoubleField(1112, data) {}
    TriggerNewQty(double data, int decimalPadding) : DoubleField(1112, data, decimalPadding) {}
  };

  public __gc class LegLastForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 1073;
    LegLastForwardPoints() : DoubleField(1073) {}
    LegLastForwardPoints(double data) : DoubleField(1073, data) {}
    LegLastForwardPoints(double data, int decimalPadding) : DoubleField(1073, data, decimalPadding) {}
  };

  public __gc class TotNumTradeReports : public IntField
  {
  public:
    static const int FIELD = 748;
    TotNumTradeReports() : IntField(748) {}
    TotNumTradeReports(int data) : IntField(748, data) {}
  };

  public __gc class RefApplVerID : public StringField
  {
  public:
    static const int FIELD = 1130;
    RefApplVerID() : StringField(1130) {}
    RefApplVerID(String* data) : StringField(1130, data) {}
  };

  public __gc class LastSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 194;
    LastSpotRate() : DoubleField(194) {}
    LastSpotRate(double data) : DoubleField(194, data) {}
    LastSpotRate(double data, int decimalPadding) : DoubleField(194, data, decimalPadding) {}
  };

  public __gc class Price : public DoubleField
  {
  public:
    static const int FIELD = 44;
    Price() : DoubleField(44) {}
    Price(double data) : DoubleField(44, data) {}
    Price(double data, int decimalPadding) : DoubleField(44, data, decimalPadding) {}
  };

  public __gc class UnderlyingSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 305;
    UnderlyingSecurityIDSource() : StringField(305) {}
    UnderlyingSecurityIDSource(String* data) : StringField(305, data) {}
  };

  public __gc class TotNoSecurityTypes : public IntField
  {
  public:
    static const int FIELD = 557;
    TotNoSecurityTypes() : IntField(557) {}
    TotNoSecurityTypes(int data) : IntField(557, data) {}
  };

  public __gc class RelationshipRiskInstrumentMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 1612;
    RelationshipRiskInstrumentMultiplier() : DoubleField(1612) {}
    RelationshipRiskInstrumentMultiplier(double data) : DoubleField(1612, data) {}
    RelationshipRiskInstrumentMultiplier(double data, int decimalPadding) : DoubleField(1612, data, decimalPadding) {}
  };

  public __gc class NoRiskInstruments : public IntField
  {
  public:
    static const int FIELD = 1534;
    NoRiskInstruments() : IntField(1534) {}
    NoRiskInstruments(int data) : IntField(1534, data) {}
  };

  public __gc class ReportedPx : public DoubleField
  {
  public:
    static const int FIELD = 861;
    ReportedPx() : DoubleField(861) {}
    ReportedPx(double data) : DoubleField(861, data) {}
    ReportedPx(double data, int decimalPadding) : DoubleField(861, data, decimalPadding) {}
  };

  public __gc class LegSymbol : public StringField
  {
  public:
    static const int FIELD = 600;
    LegSymbol() : StringField(600) {}
    LegSymbol(String* data) : StringField(600, data) {}
  };

  public __gc class LegIssuer : public StringField
  {
  public:
    static const int FIELD = 617;
    LegIssuer() : StringField(617) {}
    LegIssuer(String* data) : StringField(617, data) {}
  };

  public __gc class RegistDetls : public StringField
  {
  public:
    static const int FIELD = 509;
    RegistDetls() : StringField(509) {}
    RegistDetls(String* data) : StringField(509, data) {}
  };

  public __gc class UnderlyingLegSecurityID : public StringField
  {
  public:
    static const int FIELD = 1332;
    UnderlyingLegSecurityID() : StringField(1332) {}
    UnderlyingLegSecurityID(String* data) : StringField(1332, data) {}
  };

  public __gc class MinLotSize : public DoubleField
  {
  public:
    static const int FIELD = 1231;
    MinLotSize() : DoubleField(1231) {}
    MinLotSize(double data) : DoubleField(1231, data) {}
    MinLotSize(double data, int decimalPadding) : DoubleField(1231, data, decimalPadding) {}
  };

  public __gc class NumTickets : public IntField
  {
  public:
    static const int FIELD = 395;
    NumTickets() : IntField(395) {}
    NumTickets(int data) : IntField(395, data) {}
  };

  public __gc class LegLocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 598;
    LegLocaleOfIssue() : StringField(598) {}
    LegLocaleOfIssue(String* data) : StringField(598, data) {}
  };

  public __gc class ExchangeForPhysical : public BooleanField
  {
  public:
    static const int FIELD = 411;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ExchangeForPhysical() : BooleanField(411) {}
    ExchangeForPhysical(bool data) : BooleanField(411, data) {}
  };

  public __gc class SecurityTradingEvent : public IntField
  {
  public:
    static const int FIELD = 1174;
    static const int CHANGE_OF_SECURITY_TRADING_STATUS = 6;
    static const int CHANGE_OF_TRADING_SESSION = 4;
    static const int CHANGE_OF_SECURITY_STATUS = 6;
    static const int PRICE_VOLATILITY_INTERRUPTION = 3;
    static const int CHANGE_OF_BOOK_TYPE = 7;
    static const int CHANGE_OF_TRADING_SUBSESSION = 5;
    static const int CHANGE_OF_MARKET_DEPTH = 8;
    static const int TRADING_RESUMES = 2;
    static const int ORDER_IMBALANCE_AUCTION_IS_EXTENDED = 1;
    SecurityTradingEvent() : IntField(1174) {}
    SecurityTradingEvent(int data) : IntField(1174, data) {}
  };

  public __gc class MinPriceIncrementAmount : public DoubleField
  {
  public:
    static const int FIELD = 1146;
    MinPriceIncrementAmount() : DoubleField(1146) {}
    MinPriceIncrementAmount(double data) : DoubleField(1146, data) {}
    MinPriceIncrementAmount(double data, int decimalPadding) : DoubleField(1146, data, decimalPadding) {}
  };

  public __gc class UnderlyingPayAmount : public DoubleField
  {
  public:
    static const int FIELD = 985;
    UnderlyingPayAmount() : DoubleField(985) {}
    UnderlyingPayAmount(double data) : DoubleField(985, data) {}
    UnderlyingPayAmount(double data, int decimalPadding) : DoubleField(985, data, decimalPadding) {}
  };

  public __gc class SettlPartySubID : public StringField
  {
  public:
    static const int FIELD = 785;
    SettlPartySubID() : StringField(785) {}
    SettlPartySubID(String* data) : StringField(785, data) {}
  };

  public __gc class AllocNetMoney : public DoubleField
  {
  public:
    static const int FIELD = 154;
    AllocNetMoney() : DoubleField(154) {}
    AllocNetMoney(double data) : DoubleField(154, data) {}
    AllocNetMoney(double data, int decimalPadding) : DoubleField(154, data, decimalPadding) {}
  };

  public __gc class UnderlyingMaturityDay : public StringField
  {
  public:
    static const int FIELD = 314;
    UnderlyingMaturityDay() : StringField(314) {}
    UnderlyingMaturityDay(String* data) : StringField(314, data) {}
  };

  public __gc class NetworkResponseID : public StringField
  {
  public:
    static const int FIELD = 932;
    NetworkResponseID() : StringField(932) {}
    NetworkResponseID(String* data) : StringField(932, data) {}
  };

  public __gc class NumBidders : public IntField
  {
  public:
    static const int FIELD = 417;
    NumBidders() : IntField(417) {}
    NumBidders(int data) : IntField(417, data) {}
  };

  public __gc class AllocAcctIDSource : public IntField
  {
  public:
    static const int FIELD = 661;
    AllocAcctIDSource() : IntField(661) {}
    AllocAcctIDSource(int data) : IntField(661, data) {}
  };

  public __gc class AllocAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 153;
    AllocAvgPx() : DoubleField(153) {}
    AllocAvgPx(double data) : DoubleField(153, data) {}
    AllocAvgPx(double data, int decimalPadding) : DoubleField(153, data, decimalPadding) {}
  };

  public __gc class SecuritySettlAgentCode : public StringField
  {
  public:
    static const int FIELD = 177;
    SecuritySettlAgentCode() : StringField(177) {}
    SecuritySettlAgentCode(String* data) : StringField(177, data) {}
  };

  public __gc class NoDistribInsts : public IntField
  {
  public:
    static const int FIELD = 510;
    NoDistribInsts() : IntField(510) {}
    NoDistribInsts(int data) : IntField(510, data) {}
  };

  public __gc class CustDirectedOrder : public BooleanField
  {
  public:
    static const int FIELD = 1029;
    CustDirectedOrder() : BooleanField(1029) {}
    CustDirectedOrder(bool data) : BooleanField(1029, data) {}
  };

  public __gc class FairValue : public DoubleField
  {
  public:
    static const int FIELD = 406;
    FairValue() : DoubleField(406) {}
    FairValue(double data) : DoubleField(406, data) {}
    FairValue(double data, int decimalPadding) : DoubleField(406, data, decimalPadding) {}
  };

  public __gc class NoStrikes : public IntField
  {
  public:
    static const int FIELD = 428;
    NoStrikes() : IntField(428) {}
    NoStrikes(int data) : IntField(428, data) {}
  };

  public __gc class EncodedSecurityListDescLen : public IntField
  {
  public:
    static const int FIELD = 1468;
    EncodedSecurityListDescLen() : IntField(1468) {}
    EncodedSecurityListDescLen(int data) : IntField(1468, data) {}
  };

  public __gc class LegExerciseStyle : public IntField
  {
  public:
    static const int FIELD = 1420;
    LegExerciseStyle() : IntField(1420) {}
    LegExerciseStyle(int data) : IntField(1420, data) {}
  };

  public __gc class DerivativeSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 1215;
    DerivativeSymbolSfx() : StringField(1215) {}
    DerivativeSymbolSfx(String* data) : StringField(1215, data) {}
  };

  public __gc class NestedInstrAttribType : public IntField
  {
  public:
    static const int FIELD = 1210;
    NestedInstrAttribType() : IntField(1210) {}
    NestedInstrAttribType(int data) : IntField(1210, data) {}
  };

  public __gc class ContraTrader : public StringField
  {
  public:
    static const int FIELD = 337;
    ContraTrader() : StringField(337) {}
    ContraTrader(String* data) : StringField(337, data) {}
  };

  public __gc class RiskInstrumentSettlType : public StringField
  {
  public:
    static const int FIELD = 1557;
    RiskInstrumentSettlType() : StringField(1557) {}
    RiskInstrumentSettlType(String* data) : StringField(1557, data) {}
  };

  public __gc class MDSecSize : public DoubleField
  {
  public:
    static const int FIELD = 1179;
    MDSecSize() : DoubleField(1179) {}
    MDSecSize(double data) : DoubleField(1179, data) {}
    MDSecSize(double data, int decimalPadding) : DoubleField(1179, data, decimalPadding) {}
  };

  public __gc class NoOfSecSizes : public IntField
  {
  public:
    static const int FIELD = 1177;
    NoOfSecSizes() : IntField(1177) {}
    NoOfSecSizes(int data) : IntField(1177, data) {}
  };

  public __gc class CollAction : public IntField
  {
  public:
    static const int FIELD = 944;
    static const int ADD = 1;
    static const int REMOVE = 2;
    static const int RETAIN = 0;
    CollAction() : IntField(944) {}
    CollAction(int data) : IntField(944, data) {}
  };

  public __gc class UnderlyingLastQty : public DoubleField
  {
  public:
    static const int FIELD = 652;
    UnderlyingLastQty() : DoubleField(652) {}
    UnderlyingLastQty(double data) : DoubleField(652, data) {}
    UnderlyingLastQty(double data, int decimalPadding) : DoubleField(652, data, decimalPadding) {}
  };

  public __gc class PossDupFlag : public BooleanField
  {
  public:
    static const int FIELD = 43;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PossDupFlag() : BooleanField(43) {}
    PossDupFlag(bool data) : BooleanField(43, data) {}
  };

  public __gc class ListStatusType : public IntField
  {
  public:
    static const int FIELD = 429;
    static const int ALL_DONE = 5;
    static const int TIMED = 3;
    static const int RESP = 2;
    static const int EXECSTARTED = 4;
    static const int RESPONSE = 2;
    static const int ALLDONE = 5;
    static const int ALERT = 6;
    static const int ACK = 1;
    static const int EXEC_STARTED = 4;
    static const int EXECSTART = 4;
    ListStatusType() : IntField(429) {}
    ListStatusType(int data) : IntField(429, data) {}
  };

  public __gc class SideFillStationCd : public StringField
  {
  public:
    static const int FIELD = 1006;
    SideFillStationCd() : StringField(1006) {}
    SideFillStationCd(String* data) : StringField(1006, data) {}
  };

  public __gc class StatusText : public StringField
  {
  public:
    static const int FIELD = 929;
    StatusText() : StringField(929) {}
    StatusText(String* data) : StringField(929, data) {}
  };

  public __gc class BasisFeatureDate : public StringField
  {
  public:
    static const int FIELD = 259;
    BasisFeatureDate() : StringField(259) {}
    BasisFeatureDate(String* data) : StringField(259, data) {}
  };

  public __gc class XmlDataLen : public IntField
  {
  public:
    static const int FIELD = 212;
    XmlDataLen() : IntField(212) {}
    XmlDataLen(int data) : IntField(212, data) {}
  };

  public __gc class UnderlyingMaturityDate : public StringField
  {
  public:
    static const int FIELD = 542;
    UnderlyingMaturityDate() : StringField(542) {}
    UnderlyingMaturityDate(String* data) : StringField(542, data) {}
  };

  public __gc class GapFillFlag : public BooleanField
  {
  public:
    static const int FIELD = 123;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    GapFillFlag() : BooleanField(123) {}
    GapFillFlag(bool data) : BooleanField(123, data) {}
  };

  public __gc class RefApplExtID : public IntField
  {
  public:
    static const int FIELD = 1406;
    RefApplExtID() : IntField(1406) {}
    RefApplExtID(int data) : IntField(1406, data) {}
  };

  public __gc class RefApplID : public StringField
  {
  public:
    static const int FIELD = 1355;
    RefApplID() : StringField(1355) {}
    RefApplID(String* data) : StringField(1355, data) {}
  };

  public __gc class NoTradingSessionRules : public IntField
  {
  public:
    static const int FIELD = 1309;
    NoTradingSessionRules() : IntField(1309) {}
    NoTradingSessionRules(int data) : IntField(1309, data) {}
  };

  public __gc class SwapPoints : public DoubleField
  {
  public:
    static const int FIELD = 1069;
    SwapPoints() : DoubleField(1069) {}
    SwapPoints(double data) : DoubleField(1069, data) {}
    SwapPoints(double data, int decimalPadding) : DoubleField(1069, data, decimalPadding) {}
  };

  public __gc class TargetStrategyParameters : public StringField
  {
  public:
    static const int FIELD = 848;
    TargetStrategyParameters() : StringField(848) {}
    TargetStrategyParameters(String* data) : StringField(848, data) {}
  };

  public __gc class LastForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 195;
    LastForwardPoints() : DoubleField(195) {}
    LastForwardPoints(double data) : DoubleField(195, data) {}
    LastForwardPoints(double data, int decimalPadding) : DoubleField(195, data, decimalPadding) {}
  };

  public __gc class YieldRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 696;
    YieldRedemptionDate() : StringField(696) {}
    YieldRedemptionDate(String* data) : StringField(696, data) {}
  };

  public __gc class RelationshipRiskSecurityID : public StringField
  {
  public:
    static const int FIELD = 1591;
    RelationshipRiskSecurityID() : StringField(1591) {}
    RelationshipRiskSecurityID(String* data) : StringField(1591, data) {}
  };

  public __gc class NoSettlDetails : public IntField
  {
  public:
    static const int FIELD = 1158;
    NoSettlDetails() : IntField(1158) {}
    NoSettlDetails(int data) : IntField(1158, data) {}
  };

  public __gc class TradeHandlingInstr : public CharField
  {
  public:
    static const int FIELD = 1123;
    static const __wchar_t AUTOMATED_FLOOR_ORDER_ROUTING = '4';
    static const __wchar_t TWO_PARTY_REPORT = '1';
    static const __wchar_t ONE_PARTY_REPORT_FOR_MATCHING = '2';
    static const __wchar_t TRADE_CONFIRMATION = '0';
    static const __wchar_t ONE_PARTY_REPORT_FOR_PASS_THROUGH = '3';
    static const __wchar_t TWO_PARTY_REPORT_FOR_CLAIM = '5';
    TradeHandlingInstr() : CharField(1123) {}
    TradeHandlingInstr(__wchar_t data) : CharField(1123, data) {}
  };

  public __gc class CashSettlAgentCode : public StringField
  {
  public:
    static const int FIELD = 183;
    CashSettlAgentCode() : StringField(183) {}
    CashSettlAgentCode(String* data) : StringField(183, data) {}
  };

  public __gc class LegPriceType : public IntField
  {
  public:
    static const int FIELD = 686;
    LegPriceType() : IntField(686) {}
    LegPriceType(int data) : IntField(686, data) {}
  };

  public __gc class EncodedListExecInstLen : public IntField
  {
  public:
    static const int FIELD = 352;
    EncodedListExecInstLen() : IntField(352) {}
    EncodedListExecInstLen(int data) : IntField(352, data) {}
  };

  public __gc class TradSesMethod : public IntField
  {
  public:
    static const int FIELD = 338;
    static const int TWOPARTY = 3;
    static const int ELECTRONIC = 1;
    static const int OPENOUTCRY = 2;
    static const int TWO_PARTY = 3;
    static const int OPEN_OUTCRY = 2;
    TradSesMethod() : IntField(338) {}
    TradSesMethod(int data) : IntField(338, data) {}
  };

  public __gc class RiskLimitCurrency : public StringField
  {
  public:
    static const int FIELD = 1532;
    RiskLimitCurrency() : StringField(1532) {}
    RiskLimitCurrency(String* data) : StringField(1532, data) {}
  };

  public __gc class PartyDetailsListRequestID : public StringField
  {
  public:
    static const int FIELD = 1505;
    PartyDetailsListRequestID() : StringField(1505) {}
    PartyDetailsListRequestID(String* data) : StringField(1505, data) {}
  };

  public __gc class AgreementID : public StringField
  {
  public:
    static const int FIELD = 914;
    AgreementID() : StringField(914) {}
    AgreementID(String* data) : StringField(914, data) {}
  };

  public __gc class CashDistribCurr : public StringField
  {
  public:
    static const int FIELD = 478;
    CashDistribCurr() : StringField(478) {}
    CashDistribCurr(String* data) : StringField(478, data) {}
  };

  public __gc class BidPx : public DoubleField
  {
  public:
    static const int FIELD = 132;
    BidPx() : DoubleField(132) {}
    BidPx(double data) : DoubleField(132, data) {}
    BidPx(double data, int decimalPadding) : DoubleField(132, data, decimalPadding) {}
  };

  public __gc class TradeType : public CharField
  {
  public:
    static const int FIELD = 418;
    static const __wchar_t AGENCY = 'A';
    static const __wchar_t VWAP_GUARANTEE = 'G';
    static const __wchar_t RISK_TRADE = 'R';
    static const __wchar_t GUARANTEED_CLOSE = 'J';
    TradeType() : CharField(418) {}
    TradeType(__wchar_t data) : CharField(418, data) {}
  };

  public __gc class EncodedSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 350;
    EncodedSecurityDescLen() : IntField(350) {}
    EncodedSecurityDescLen(int data) : IntField(350, data) {}
  };

  public __gc class ComplexEventCondition : public IntField
  {
  public:
    static const int FIELD = 1490;
    static const int AND = 1;
    static const int OR = 2;
    ComplexEventCondition() : IntField(1490) {}
    ComplexEventCondition(int data) : IntField(1490, data) {}
  };

  public __gc class EncryptedPasswordMethod : public IntField
  {
  public:
    static const int FIELD = 1400;
    EncryptedPasswordMethod() : IntField(1400) {}
    EncryptedPasswordMethod(int data) : IntField(1400, data) {}
  };

  public __gc class DerivativeSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 1219;
    DerivativeSecurityAltID() : StringField(1219) {}
    DerivativeSecurityAltID(String* data) : StringField(1219, data) {}
  };

  public __gc class TotNoAccQuotes : public IntField
  {
  public:
    static const int FIELD = 1169;
    TotNoAccQuotes() : IntField(1169) {}
    TotNoAccQuotes(int data) : IntField(1169, data) {}
  };

  public __gc class TimeBracket : public StringField
  {
  public:
    static const int FIELD = 943;
    TimeBracket() : StringField(943) {}
    TimeBracket(String* data) : StringField(943, data) {}
  };

  public __gc class NoAllocs : public IntField
  {
  public:
    static const int FIELD = 78;
    NoAllocs() : IntField(78) {}
    NoAllocs(int data) : IntField(78, data) {}
  };

  public __gc class UnderlyingProduct : public IntField
  {
  public:
    static const int FIELD = 462;
    UnderlyingProduct() : IntField(462) {}
    UnderlyingProduct(int data) : IntField(462, data) {}
  };

  public __gc class BenchmarkCurveName : public StringField
  {
  public:
    static const int FIELD = 221;
    static const String* SONIA = "SONIA";
    static const String* MUNIAAA = "MuniAAA";
    static const String* LIBID = "LIBID";
    static const String* PFANDBRIEFE = "Pfandbriefe";
    static const String* EUREPO = "EUREPO";
    static const String* FUTURESWAP = "FutureSWAP";
    static const String* TREASURY = "Treasury";
    static const String* OTHER = "OTHER";
    static const String* EURIBOR = "Euribor";
    static const String* EONIA = "EONIA";
    static const String* LIBOR = "LIBOR";
    static const String* SWAP = "SWAP";
    BenchmarkCurveName() : StringField(221) {}
    BenchmarkCurveName(String* data) : StringField(221, data) {}
  };

  public __gc class UnderlyingSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 312;
    UnderlyingSymbolSfx() : StringField(312) {}
    UnderlyingSymbolSfx(String* data) : StringField(312, data) {}
  };

  public __gc class StrikePriceBoundaryPrecision : public DoubleField
  {
  public:
    static const int FIELD = 1480;
    StrikePriceBoundaryPrecision() : DoubleField(1480) {}
    StrikePriceBoundaryPrecision(double data) : DoubleField(1480, data) {}
    StrikePriceBoundaryPrecision(double data, int decimalPadding) : DoubleField(1480, data, decimalPadding) {}
  };

  public __gc class QuoteSetID : public StringField
  {
  public:
    static const int FIELD = 302;
    QuoteSetID() : StringField(302) {}
    QuoteSetID(String* data) : StringField(302, data) {}
  };

  public __gc class CashMargin : public CharField
  {
  public:
    static const int FIELD = 544;
    static const __wchar_t MARGINCLOSE = '3';
    static const __wchar_t MARGINOPEN = '2';
    static const __wchar_t MARGIN_CLOSE = '3';
    static const __wchar_t MARGIN_OPEN = '2';
    static const __wchar_t CASH = '1';
    CashMargin() : CharField(544) {}
    CashMargin(__wchar_t data) : CharField(544, data) {}
  };

  public __gc class SettlObligTransType : public CharField
  {
  public:
    static const int FIELD = 1162;
    static const __wchar_t REPLACE = 'R';
    static const __wchar_t NEW = 'N';
    static const __wchar_t RESTATE = 'T';
    static const __wchar_t CANCEL = 'C';
    SettlObligTransType() : CharField(1162) {}
    SettlObligTransType(__wchar_t data) : CharField(1162, data) {}
  };

  public __gc class LegNumber : public IntField
  {
  public:
    static const int FIELD = 1152;
    LegNumber() : IntField(1152) {}
    LegNumber(int data) : IntField(1152, data) {}
  };

  public __gc class DeskOrderHandlingInst : public StringField
  {
  public:
    static const int FIELD = 1035;
    static const __wchar_t PEGGED = 'PEG';
    static const __wchar_t MARKET_ON_OPEN = 'MOO';
    static const __wchar_t SCALE = 'SCL';
    static const __wchar_t FILL_OR_KILL = 'FOK';
    static const __wchar_t ALL_OR_NONE = 'AON';
    static const __wchar_t NOT_HELD = 'NH';
    static const __wchar_t DIRECTED_ORDER = 'DIR';
    static const __wchar_t STOP_STOCK_TRANSACTION = 'S.W';
    static const __wchar_t OVER_THE_DAY = 'OVD';
    static const __wchar_t ADD_ON_ORDER = 'ADD';
    static const __wchar_t MARKET_AT_CLOSE = 'MAC';
    static const __wchar_t LIMIT_ON_OPEN = 'LOO';
    static const __wchar_t CASH_NOT_HELD = 'CNH';
    static const __wchar_t MARKET_ON_CLOSE = 'MOC';
    static const __wchar_t TIME_ORDER = 'TMO';
    static const __wchar_t LIMIT_ON_CLOSE = 'LOC';
    static const __wchar_t IMMEDIATE_OR_CANCEL = 'IOC';
    static const __wchar_t TRAILING_STOP = 'TS';
    static const __wchar_t WORK = 'WRK';
    static const __wchar_t RESERVE_SIZE_ORDER = 'RSV';
    static const __wchar_t MINIMUM_QUANTITY = 'MQT';
    static const __wchar_t MARKET_AT_OPEN = 'MAO';
    static const __wchar_t IMBALANCE_ONLY = 'IO';
    static const __wchar_t EXCHANGE_FOR_PHYSICAL_TRANSACTION = 'E.W';
    DeskOrderHandlingInst() : StringField(1035) {}
    DeskOrderHandlingInst(String* data) : StringField(1035, data) {}
  };

  public __gc class SettlPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 783;
    SettlPartyIDSource() : CharField(783) {}
    SettlPartyIDSource(__wchar_t data) : CharField(783, data) {}
  };

  public __gc class PriorSettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 734;
    PriorSettlPrice() : DoubleField(734) {}
    PriorSettlPrice(double data) : DoubleField(734, data) {}
    PriorSettlPrice(double data, int decimalPadding) : DoubleField(734, data, decimalPadding) {}
  };

  public __gc class RelationshipRiskSecurityType : public StringField
  {
  public:
    static const int FIELD = 1600;
    RelationshipRiskSecurityType() : StringField(1600) {}
    RelationshipRiskSecurityType(String* data) : StringField(1600, data) {}
  };

  public __gc class NotAffOrigClOrdID : public StringField
  {
  public:
    static const int FIELD = 1372;
    NotAffOrigClOrdID() : StringField(1372) {}
    NotAffOrigClOrdID(String* data) : StringField(1372, data) {}
  };

  public __gc class TradingSessionDesc : public StringField
  {
  public:
    static const int FIELD = 1326;
    TradingSessionDesc() : StringField(1326) {}
    TradingSessionDesc(String* data) : StringField(1326, data) {}
  };

  public __gc class DerivativeFloorPrice : public DoubleField
  {
  public:
    static const int FIELD = 1322;
    DerivativeFloorPrice() : DoubleField(1322) {}
    DerivativeFloorPrice(double data) : DoubleField(1322, data) {}
    DerivativeFloorPrice(double data, int decimalPadding) : DoubleField(1322, data, decimalPadding) {}
  };

  public __gc class DerivativeSymbol : public StringField
  {
  public:
    static const int FIELD = 1214;
    DerivativeSymbol() : StringField(1214) {}
    DerivativeSymbol(String* data) : StringField(1214, data) {}
  };

  public __gc class RiskFreeRate : public DoubleField
  {
  public:
    static const int FIELD = 1190;
    RiskFreeRate() : DoubleField(1190) {}
    RiskFreeRate(double data) : DoubleField(1190, data) {}
    RiskFreeRate(double data, int decimalPadding) : DoubleField(1190, data, decimalPadding) {}
  };

  public __gc class PosTransType : public IntField
  {
  public:
    static const int FIELD = 709;
    static const int DO_NOT_EXERCISE = 2;
    static const int POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION = 4;
    static const int DONOTEXERCISE = 2;
    static const int LARGE_TRADER_SUBMISSION = 6;
    static const int POSITIONCHANGESUBMISSIONMARGINDISPOSITION = 4;
    static const int POSITIONADJUSTMENT = 3;
    static const int EXERCISE = 1;
    static const int POSITION_ADJUSTMENT = 3;
    static const int PLEDGE = 5;
    PosTransType() : IntField(709) {}
    PosTransType(int data) : IntField(709, data) {}
  };

  public __gc class MsgSeqNum : public IntField
  {
  public:
    static const int FIELD = 34;
    MsgSeqNum() : IntField(34) {}
    MsgSeqNum(int data) : IntField(34, data) {}
  };

  public __gc class Signature : public StringField
  {
  public:
    static const int FIELD = 89;
    Signature() : StringField(89) {}
    Signature(String* data) : StringField(89, data) {}
  };

  public __gc class Seniority : public StringField
  {
  public:
    static const int FIELD = 1450;
    static const String* SUBORDINATED = "SB";
    static const String* SENIOR_SECURED = "SD";
    static const String* SENIOR = "SR";
    Seniority() : StringField(1450) {}
    Seniority(String* data) : StringField(1450, data) {}
  };

  public __gc class NoRateSources : public IntField
  {
  public:
    static const int FIELD = 1445;
    NoRateSources() : IntField(1445) {}
    NoRateSources(int data) : IntField(1445, data) {}
  };

  public __gc class PriceUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1192;
    PriceUnitOfMeasureQty() : DoubleField(1192) {}
    PriceUnitOfMeasureQty(double data) : DoubleField(1192, data) {}
    PriceUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1192, data, decimalPadding) {}
  };

  public __gc class CollAsgnRefID : public StringField
  {
  public:
    static const int FIELD = 907;
    CollAsgnRefID() : StringField(907) {}
    CollAsgnRefID(String* data) : StringField(907, data) {}
  };

  public __gc class BuyVolume : public DoubleField
  {
  public:
    static const int FIELD = 330;
    BuyVolume() : DoubleField(330) {}
    BuyVolume(double data) : DoubleField(330, data) {}
    BuyVolume(double data, int decimalPadding) : DoubleField(330, data, decimalPadding) {}
  };

  public __gc class SettlCurrFxRateCalc : public CharField
  {
  public:
    static const int FIELD = 156;
    static const __wchar_t DIVIDE = 'D';
    static const __wchar_t MULTIPLY = 'M';
    SettlCurrFxRateCalc() : CharField(156) {}
    SettlCurrFxRateCalc(__wchar_t data) : CharField(156, data) {}
  };

  public __gc class PosMaintStatus : public IntField
  {
  public:
    static const int FIELD = 722;
    static const int ACCEPTED_WITH_WARNINGS = 1;
    static const int COMPLETED = 3;
    static const int ACCEPTEDWITHWARNINGS = 1;
    static const int COMPLETEDWITHWARNINGS = 4;
    static const int REJECTED = 2;
    static const int ACCEPTED = 0;
    static const int COMPLETED_WITH_WARNINGS = 4;
    PosMaintStatus() : IntField(722) {}
    PosMaintStatus(int data) : IntField(722, data) {}
  };

  public __gc class PriorSpreadIndicator : public BooleanField
  {
  public:
    static const int FIELD = 720;
    PriorSpreadIndicator() : BooleanField(720) {}
    PriorSpreadIndicator(bool data) : BooleanField(720, data) {}
  };

  public __gc class Benchmark : public CharField
  {
  public:
    static const int FIELD = 219;
    static const __wchar_t _6_MO_LIBOR = '9';
    static const __wchar_t OLD_5 = '3';
    static const __wchar_t OLD_30 = '7';
    static const __wchar_t _30YR = '6';
    static const __wchar_t _5YR = '2';
    static const __wchar_t _3_MO_LIBOR = '8';
    static const __wchar_t OLD_10 = '5';
    static const __wchar_t _6MOLIBOR = '9';
    static const __wchar_t _10YR = '4';
    static const __wchar_t CURVE = '1';
    static const __wchar_t _30_YR = '6';
    static const __wchar_t _10_YR = '4';
    static const __wchar_t _5_YR = '2';
    static const __wchar_t OLD30 = '7';
    static const __wchar_t OLD5 = '3';
    static const __wchar_t OLD10 = '5';
    static const __wchar_t _3MOLIBOR = '8';
    Benchmark() : CharField(219) {}
    Benchmark(__wchar_t data) : CharField(219, data) {}
  };

  public __gc class MaturityMonthYearFormat : public IntField
  {
  public:
    static const int FIELD = 1303;
    static const int YEARMONTHWEEK = 2;
    static const int YEARMONTHDAY = 1;
    static const int YEARMONTH_ONLY = 0;
    MaturityMonthYearFormat() : IntField(1303) {}
    MaturityMonthYearFormat(int data) : IntField(1303, data) {}
  };

  public __gc class UnderlyingTradingSessionID : public StringField
  {
  public:
    static const int FIELD = 822;
    UnderlyingTradingSessionID() : StringField(822) {}
    UnderlyingTradingSessionID(String* data) : StringField(822, data) {}
  };

  public __gc class TotNoRelatedSym : public IntField
  {
  public:
    static const int FIELD = 393;
    TotNoRelatedSym() : IntField(393) {}
    TotNoRelatedSym(int data) : IntField(393, data) {}
  };

  public __gc class StateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 471;
    StateOrProvinceOfIssue() : StringField(471) {}
    StateOrProvinceOfIssue(String* data) : StringField(471, data) {}
  };

  public __gc class RelatedPartyAltSubID : public StringField
  {
  public:
    static const int FIELD = 1573;
    RelatedPartyAltSubID() : StringField(1573) {}
    RelatedPartyAltSubID(String* data) : StringField(1573, data) {}
  };

  public __gc class DerivativeInstrRegistry : public StringField
  {
  public:
    static const int FIELD = 1257;
    DerivativeInstrRegistry() : StringField(1257) {}
    DerivativeInstrRegistry(String* data) : StringField(1257, data) {}
  };

  public __gc class LegBidForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 1067;
    LegBidForwardPoints() : DoubleField(1067) {}
    LegBidForwardPoints(double data) : DoubleField(1067, data) {}
    LegBidForwardPoints(double data, int decimalPadding) : DoubleField(1067, data, decimalPadding) {}
  };

  public __gc class ManualOrderIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1028;
    ManualOrderIndicator() : BooleanField(1028) {}
    ManualOrderIndicator(bool data) : BooleanField(1028, data) {}
  };

  public __gc class NetMoney : public DoubleField
  {
  public:
    static const int FIELD = 118;
    NetMoney() : DoubleField(118) {}
    NetMoney(double data) : DoubleField(118, data) {}
    NetMoney(double data, int decimalPadding) : DoubleField(118, data, decimalPadding) {}
  };

  public __gc class LegalConfirm : public BooleanField
  {
  public:
    static const int FIELD = 650;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LegalConfirm() : BooleanField(650) {}
    LegalConfirm(bool data) : BooleanField(650, data) {}
  };

  public __gc class CountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 470;
    CountryOfIssue() : StringField(470) {}
    CountryOfIssue(String* data) : StringField(470, data) {}
  };

  public __gc class ApplReportType : public IntField
  {
  public:
    static const int FIELD = 1426;
    static const int REPORTS_THAT_THE_LAST_MESSAGE_HAS_BEEN_SENT_FOR_THE_APPLIDS_REFER_TO_REFAPPLLASTSEQNUM = 1;
    static const int APPLICATION_MESSAGE_RE_SEND_COMPLETED = 3;
    static const int RESET_APPLSEQNUM_TO_NEW_VALUE_SPECIFIED_IN_APPLNEWSEQNUM = 0;
    static const int HEARTBEAT_MESSAGE_INDICATING_THAT_APPLICATION_IDENTIFIED_BY_REFAPPLID = 2;
    ApplReportType() : IntField(1426) {}
    ApplReportType(int data) : IntField(1426, data) {}
  };

  public __gc class RootPartyID : public StringField
  {
  public:
    static const int FIELD = 1117;
    RootPartyID() : StringField(1117) {}
    RootPartyID(String* data) : StringField(1117, data) {}
  };

  public __gc class UnderlyingQty : public DoubleField
  {
  public:
    static const int FIELD = 879;
    UnderlyingQty() : DoubleField(879) {}
    UnderlyingQty(double data) : DoubleField(879, data) {}
    UnderlyingQty(double data, int decimalPadding) : DoubleField(879, data, decimalPadding) {}
  };

  public __gc class ApplQueueDepth : public IntField
  {
  public:
    static const int FIELD = 813;
    ApplQueueDepth() : IntField(813) {}
    ApplQueueDepth(int data) : IntField(813, data) {}
  };

  public __gc class StopPx : public DoubleField
  {
  public:
    static const int FIELD = 99;
    StopPx() : DoubleField(99) {}
    StopPx(double data) : DoubleField(99, data) {}
    StopPx(double data, int decimalPadding) : DoubleField(99, data, decimalPadding) {}
  };

  public __gc class ReportToExch : public BooleanField
  {
  public:
    static const int FIELD = 113;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ReportToExch() : BooleanField(113) {}
    ReportToExch(bool data) : BooleanField(113, data) {}
  };

  public __gc class ContraryInstructionIndicator : public BooleanField
  {
  public:
    static const int FIELD = 719;
    ContraryInstructionIndicator() : BooleanField(719) {}
    ContraryInstructionIndicator(bool data) : BooleanField(719, data) {}
  };

  public __gc class EncodedListStatusTextLen : public IntField
  {
  public:
    static const int FIELD = 445;
    EncodedListStatusTextLen() : IntField(445) {}
    EncodedListStatusTextLen(int data) : IntField(445, data) {}
  };

  public __gc class DerivativeSecurityXMLSchema : public StringField
  {
  public:
    static const int FIELD = 1284;
    DerivativeSecurityXMLSchema() : StringField(1284) {}
    DerivativeSecurityXMLSchema(String* data) : StringField(1284, data) {}
  };

  public __gc class NoRelatedSym : public IntField
  {
  public:
    static const int FIELD = 146;
    NoRelatedSym() : IntField(146) {}
    NoRelatedSym(int data) : IntField(146, data) {}
  };

  public __gc class AllocRejCode : public IntField
  {
  public:
    static const int FIELD = 88;
    static const int INCORRECT_ALLOCATED_QUANTITY = 8;
    static const int UNKNOWNACCT = 0;
    static const int INCORRECTAVGPRC = 2;
    static const int UNKNOWN_ORDERID = 5;
    static const int WAREHOUSEREQUESTREJECTED = 13;
    static const int UNKNOWNORSTALEEXECID = 10;
    static const int WAREHOUSE_REQUEST_REJECTED = 13;
    static const int INCORRECT_AVERAGEG_PRICE = 2;
    static const int MISMATCHEDDATA = 11;
    static const int INCORRECTBRKMNC = 3;
    static const int UNKNOWNLISTID = 6;
    static const int OTHER_99 = 99;
    static const int INCORRECTALLOCATEDQUANTITY = 8;
    static const int UNKNOWN_LISTID = 6;
    static const int INCORRECT_QUANTITY = 1;
    static const int INCORRECT_AVERAGE_PRICE = 2;
    static const int UNKNOWN_ACCOUNT = 0;
    static const int UNKNOWN_OR_STALE_EXECID = 10;
    static const int OTHER = 7;
    static const int OTHER_7 = 7;
    static const int UNKNOWN_CLORDID = 12;
    static const int INCORRECTQTY = 1;
    static const int COMMDIFF = 4;
    static const int CALCULATIONDIFFERENCE = 9;
    static const int UNKNOWNCLORDID = 12;
    static const int UNKNOWNORDID = 5;
    static const int MISMATCHED_DATA = 11;
    static const int CALCULATION_DIFFERENCE = 9;
    static const int COMMISSION_DIFFERENCE = 4;
    static const int UNKNOWN_EXECUTING_BROKER_MNEMONIC = 3;
    AllocRejCode() : IntField(88) {}
    AllocRejCode(int data) : IntField(88, data) {}
  };

  public __gc class UnderlyingSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 458;
    UnderlyingSecurityAltID() : StringField(458) {}
    UnderlyingSecurityAltID(String* data) : StringField(458, data) {}
  };

  public __gc class NoRelationshipRiskSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 1593;
    NoRelationshipRiskSecurityAltID() : IntField(1593) {}
    NoRelationshipRiskSecurityAltID(int data) : IntField(1593, data) {}
  };

  public __gc class RefOrdIDReason : public IntField
  {
  public:
    static const int FIELD = 1431;
    static const int GTC_FROM_PREVIOUS_DAY = 0;
    static const int PARTIAL_FILL_REMAINING = 1;
    static const int ORDER_CHANGED = 2;
    RefOrdIDReason() : IntField(1431) {}
    RefOrdIDReason(int data) : IntField(1431, data) {}
  };

  public __gc class DerivativeInstrumentPartyID : public StringField
  {
  public:
    static const int FIELD = 1293;
    DerivativeInstrumentPartyID() : StringField(1293) {}
    DerivativeInstrumentPartyID(String* data) : StringField(1293, data) {}
  };

  public __gc class SecurityXMLSchema : public StringField
  {
  public:
    static const int FIELD = 1186;
    SecurityXMLSchema() : StringField(1186) {}
    SecurityXMLSchema(String* data) : StringField(1186, data) {}
  };

  public __gc class RefOrderIDSource : public CharField
  {
  public:
    static const int FIELD = 1081;
    static const __wchar_t SECONDARYORDERID = '0';
    static const __wchar_t ORDERID = '1';
    static const __wchar_t MDENTRYID = '2';
    static const __wchar_t ORIGINAL_ORDER_ID = '4';
    static const __wchar_t MENTRYID = '2';
    static const __wchar_t QUOTEENTRYID = '3';
    static const __wchar_t QUOTENTRYID = '3';
    static const __wchar_t ORDEID = '1';
    static const __wchar_t SECONDARYORDEID = '0';
    RefOrderIDSource() : CharField(1081) {}
    RefOrderIDSource(__wchar_t data) : CharField(1081, data) {}
  };

  public __gc class NTPositionLimit : public IntField
  {
  public:
    static const int FIELD = 971;
    NTPositionLimit() : IntField(971) {}
    NTPositionLimit(int data) : IntField(971, data) {}
  };

  public __gc class EndAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 920;
    EndAccruedInterestAmt() : DoubleField(920) {}
    EndAccruedInterestAmt(double data) : DoubleField(920, data) {}
    EndAccruedInterestAmt(double data, int decimalPadding) : DoubleField(920, data, decimalPadding) {}
  };

  public __gc class AccruedInterestRate : public DoubleField
  {
  public:
    static const int FIELD = 158;
    AccruedInterestRate() : DoubleField(158) {}
    AccruedInterestRate(double data) : DoubleField(158, data) {}
    AccruedInterestRate(double data, int decimalPadding) : DoubleField(158, data, decimalPadding) {}
  };

  public __gc class LastCapacity : public CharField
  {
  public:
    static const int FIELD = 29;
    static const __wchar_t A = '1';
    static const __wchar_t XP = '3';
    static const __wchar_t CROSS_AS_PRINCIPAL = '3';
    static const __wchar_t PRINCIPAL = '4';
    static const __wchar_t P = '4';
    static const __wchar_t CROSS_AS_AGENT = '2';
    static const __wchar_t AGENT = '1';
    static const __wchar_t XA = '2';
    LastCapacity() : CharField(29) {}
    LastCapacity(__wchar_t data) : CharField(29, data) {}
  };

  public __gc class RelationshipRiskLimitCurrency : public StringField
  {
  public:
    static const int FIELD = 1585;
    RelationshipRiskLimitCurrency() : StringField(1585) {}
    RelationshipRiskLimitCurrency(String* data) : StringField(1585, data) {}
  };

  public __gc class UnderlyingInstrumentPartySubID : public StringField
  {
  public:
    static const int FIELD = 1063;
    UnderlyingInstrumentPartySubID() : StringField(1063) {}
    UnderlyingInstrumentPartySubID(String* data) : StringField(1063, data) {}
  };

  public __gc class NoFills : public IntField
  {
  public:
    static const int FIELD = 1362;
    NoFills() : IntField(1362) {}
    NoFills(int data) : IntField(1362, data) {}
  };

  public __gc class NoOrdTypeRules : public IntField
  {
  public:
    static const int FIELD = 1237;
    NoOrdTypeRules() : IntField(1237) {}
    NoOrdTypeRules(int data) : IntField(1237, data) {}
  };

  public __gc class InstrumentPartyID : public StringField
  {
  public:
    static const int FIELD = 1019;
    InstrumentPartyID() : StringField(1019) {}
    InstrumentPartyID(String* data) : StringField(1019, data) {}
  };

  public __gc class MarginRatio : public DoubleField
  {
  public:
    static const int FIELD = 898;
    MarginRatio() : DoubleField(898) {}
    MarginRatio(double data) : DoubleField(898, data) {}
    MarginRatio(double data, int decimalPadding) : DoubleField(898, data, decimalPadding) {}
  };

  public __gc class RefTagID : public IntField
  {
  public:
    static const int FIELD = 371;
    RefTagID() : IntField(371) {}
    RefTagID(int data) : IntField(371, data) {}
  };

  public __gc class NoRoutingIDs : public IntField
  {
  public:
    static const int FIELD = 215;
    NoRoutingIDs() : IntField(215) {}
    NoRoutingIDs(int data) : IntField(215, data) {}
  };

  public __gc class CouponRate : public DoubleField
  {
  public:
    static const int FIELD = 223;
    CouponRate() : DoubleField(223) {}
    CouponRate(double data) : DoubleField(223, data) {}
    CouponRate(double data, int decimalPadding) : DoubleField(223, data, decimalPadding) {}
  };

  public __gc class NoApplIDs : public IntField
  {
  public:
    static const int FIELD = 1351;
    NoApplIDs() : IntField(1351) {}
    NoApplIDs(int data) : IntField(1351, data) {}
  };

  public __gc class DerivativeContractSettlMonth : public StringField
  {
  public:
    static const int FIELD = 1285;
    DerivativeContractSettlMonth() : StringField(1285) {}
    DerivativeContractSettlMonth(String* data) : StringField(1285, data) {}
  };

  public __gc class InstrAttribType : public IntField
  {
  public:
    static const int FIELD = 871;
    static const int INSTRUMENT_STRIKE_PRICE = 28;
    static const int IN_DEFAULT = 15;
    static const int COUPONPERIOD = 8;
    static const int ORIGINAL_ISSUE_DISCOUNT = 10;
    static const int PRE_REFUNDED = 14;
    static const int SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX = 19;
    static const int CALLABLEPUTTABLE = 11;
    static const int WHEN_AND_IF_ISSUED = 9;
    static const int STEPPEDCOUPON = 7;
    static const int UNRATED = 16;
    static const int CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED = 22;
    static const int STEPPED_COUPON = 7;
    static const int TEXT = 99;
    static const int ORIGINALISSUEDISCOUNTPRICE = 20;
    static const int ESCROWEDTOREDEMPTIONDATE = 13;
    static const int INSTRUMENT_DENOMINATOR = 25;
    static const int ESCROWED_TO_REDEMPTION_DATE = 13;
    static const int INTEREST_BEARING = 3;
    static const int TAXABLE = 17;
    static const int CALLABLE_PUTTABLE = 11;
    static const int CALLABLE_BELOW_MATURITY_VALUE = 21;
    static const int COUPON_PERIOD = 8;
    static const int LESSFEEFORPUT = 6;
    static const int INTERESTBEARING = 3;
    static const int PREREFUNDED = 14;
    static const int INSTRUMENT_PRICE_PRECISION = 27;
    static const int TRADEABLE_INDICATOR = 29;
    static const int ORIGINAL_ISSUE_DISCOUNT_PRICE_SUPPLY_PRICE_IN_THE_INSTRATTRIBVALUE = 20;
    static const int VARIABLE_RATE = 5;
    static const int WHENISSUED = 9;
    static const int ZEROCOUPON = 2;
    static const int SUBJECTTOALTERNATIVEMINIMUMTAX = 19;
    static const int ESCROWEDTOMATURITY = 12;
    static const int FLAT = 1;
    static const int TRADE_TYPE_ELIGIBILITY_DETAILS_FOR_SECURITY = 24;
    static const int INSTRUMENT_NUMERATOR = 26;
    static const int ESCROWED_TO_MATURITY = 12;
    static const int LESS_FEE_FOR_PUT = 6;
    static const int TEXT_SUPPLY_THE_TEXT_OF_THE_ATTRIBUTE_OR_DISCLAIMER_IN_THE_INSTRATTRIBVALUE = 99;
    static const int CALLABLEWITHOUTNOTICEBYMAILTOHOLDERUNLESSREGISTERED = 22;
    static const int INDEXED = 18;
    static const int INDEFAULT = 15;
    static const int ZERO_COUPON = 2;
    static const int NOPERIODICPAYMENTS = 4;
    static const int CALLABLEBELOWMATURITYVALUE = 21;
    static const int ORIGINALISSUEDISCOUNT = 10;
    static const int PRICE_TICK_RULES_FOR_SECURITY = 23;
    static const int NO_PERIODIC_PAYMENTS = 4;
    static const int VARIABLERATE = 5;
    InstrAttribType() : IntField(871) {}
    InstrAttribType(int data) : IntField(871, data) {}
  };

  public __gc class Product : public IntField
  {
  public:
    static const int FIELD = 460;
    static const int FINANCING = 13;
    static const int COMMODITY = 2;
    static const int EQUITY = 5;
    static const int CORPORATE = 3;
    static const int AGENCY = 1;
    static const int OTHER = 12;
    static const int MONEYMARKET = 9;
    static const int MORTGAGE = 10;
    static const int CURRENCY = 4;
    static const int INDEX = 7;
    static const int MUNICIPAL = 11;
    static const int LOAN = 8;
    static const int GOVERNMENT = 6;
    Product() : IntField(460) {}
    Product(int data) : IntField(460, data) {}
  };

  public __gc class AllocShares : public DoubleField
  {
  public:
    static const int FIELD = 80;
    AllocShares() : DoubleField(80) {}
    AllocShares(double data) : DoubleField(80, data) {}
    AllocShares(double data, int decimalPadding) : DoubleField(80, data, decimalPadding) {}
  };

  public __gc class NoQuoteEntries : public IntField
  {
  public:
    static const int FIELD = 295;
    NoQuoteEntries() : IntField(295) {}
    NoQuoteEntries(int data) : IntField(295, data) {}
  };

  public __gc class RelationshipRiskWarningLevelName : public StringField
  {
  public:
    static const int FIELD = 1615;
    RelationshipRiskWarningLevelName() : StringField(1615) {}
    RelationshipRiskWarningLevelName(String* data) : StringField(1615, data) {}
  };

  public __gc class DefaultCstmApplVerID : public StringField
  {
  public:
    static const int FIELD = 1408;
    DefaultCstmApplVerID() : StringField(1408) {}
    DefaultCstmApplVerID(String* data) : StringField(1408, data) {}
  };

  public __gc class DerivativeListMethod : public IntField
  {
  public:
    static const int FIELD = 1320;
    DerivativeListMethod() : IntField(1320) {}
    DerivativeListMethod(int data) : IntField(1320, data) {}
  };

  public __gc class DerivativeSecurityXMLLen : public IntField
  {
  public:
    static const int FIELD = 1282;
    DerivativeSecurityXMLLen() : IntField(1282) {}
    DerivativeSecurityXMLLen(int data) : IntField(1282, data) {}
  };

  public __gc class LegDatedDate : public StringField
  {
  public:
    static const int FIELD = 739;
    LegDatedDate() : StringField(739) {}
    LegDatedDate(String* data) : StringField(739, data) {}
  };

  public __gc class Nested2PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 758;
    Nested2PartyIDSource() : CharField(758) {}
    Nested2PartyIDSource(__wchar_t data) : CharField(758, data) {}
  };

  public __gc class UnderlyingInstrRegistry : public StringField
  {
  public:
    static const int FIELD = 595;
    UnderlyingInstrRegistry() : StringField(595) {}
    UnderlyingInstrRegistry(String* data) : StringField(595, data) {}
  };

  public __gc class IssueDate : public StringField
  {
  public:
    static const int FIELD = 225;
    IssueDate() : StringField(225) {}
    IssueDate(String* data) : StringField(225, data) {}
  };

  public __gc class SecurityTradingStatus : public IntField
  {
  public:
    static const int FIELD = 326;
    static const int NOMKTIMB = 12;
    static const int NOOPEN = 4;
    static const int FAST_MARKET = 23;
    static const int NO_OPEN_NO_RESUME = 4;
    static const int TRADING_HALT = 2;
    static const int NOT_AVAILABLE_FOR_TRADING = 18;
    static const int _11 = 11;
    static const int NO_OPEN = 4;
    static const int NOTTRADED = 19;
    static const int FASTMARKET = 23;
    static const int MKTBALSELL = 8;
    static const int NEWPXIND = 15;
    static const int TRDDISTIME = 16;
    static const int PXIND = 5;
    static const int CROSS = 25;
    static const int OPENINGROTATION = 22;
    static const int TRDRNGIND = 6;
    static const int RESUME = 3;
    static const int TRADE_DISSEMINATION_TIME = 16;
    static const int NO_MARKET_ON_CLOSE_IMBALANCE = 13;
    static const int POST_CLOSE = 26;
    static const int OPENDELAY = 1;
    static const int READY = 17;
    static const int MARKET_ON_CLOSE_IMBALANCE_BUY = 9;
    static const int NOTAVAIL = 18;
    static const int MARKET_IMBALANCE_SELL = 8;
    static const int OPENING_DELAY = 1;
    static const int MKTONCLSIMBSELL = 10;
    static const int NOT_TRADED_ON_THIS_MARKET = 19;
    static const int ITS_PRE_OPENING = 14;
    static const int PRE_CROSS = 24;
    static const int NA = 11;
    static const int NOMKTONCLSIMB = 13;
    static const int PRE_OPEN = 21;
    static const int MARKET_IMBALANCE_BUY = 7;
    static const int TRADING_RANGE_INDICATION = 6;
    static const int READY_TO_TRADE = 17;
    static const int NEW_PRICE_INDICATION = 15;
    static const int ITSPREOPN = 14;
    static const int TRDHALT = 2;
    static const int MKTONCLSIMBBUY = 9;
    static const int OPENING_ROTATION = 22;
    static const int PRICE_INDICATION = 5;
    static const int UNKNOWN_OR_INVALID = 20;
    static const int MARKET_ON_CLOSE_IMBALANCE_SELL = 10;
    static const int UNKNOWN = 20;
    static const int MKTIMBBUY = 7;
    static const int NO_MARKET_IMBALANCE = 12;
    SecurityTradingStatus() : IntField(326) {}
    SecurityTradingStatus(int data) : IntField(326, data) {}
  };

  public __gc class LegOptAttribute : public CharField
  {
  public:
    static const int FIELD = 613;
    LegOptAttribute() : CharField(613) {}
    LegOptAttribute(__wchar_t data) : CharField(613, data) {}
  };

  public __gc class MaxFloor : public DoubleField
  {
  public:
    static const int FIELD = 111;
    MaxFloor() : DoubleField(111) {}
    MaxFloor(double data) : DoubleField(111, data) {}
    MaxFloor(double data, int decimalPadding) : DoubleField(111, data, decimalPadding) {}
  };

  public __gc class DerivativeLocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 1260;
    DerivativeLocaleOfIssue() : StringField(1260) {}
    DerivativeLocaleOfIssue(String* data) : StringField(1260, data) {}
  };

  public __gc class OptPayAmount : public DoubleField
  {
  public:
    static const int FIELD = 1195;
    OptPayAmount() : DoubleField(1195) {}
    OptPayAmount(double data) : DoubleField(1195, data) {}
    OptPayAmount(double data, int decimalPadding) : DoubleField(1195, data, decimalPadding) {}
  };

  public __gc class UnderlyingStipType : public StringField
  {
  public:
    static const int FIELD = 888;
    UnderlyingStipType() : StringField(888) {}
    UnderlyingStipType(String* data) : StringField(888, data) {}
  };

  public __gc class Rule80A : public CharField
  {
  public:
    static const int FIELD = 47;
    static const __wchar_t PRGINDEXARBOTHMEM = 'N';
    static const __wchar_t TRANSACTIONS_FOR_THE_ACCOUNT_OF_A_NON_MEMBER_COMPETING_MARKET_MAKER = 'R';
    static const __wchar_t SPECIALIST_TRADES = 'S';
    static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
    static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM_ORG = 'D';
    static const __wchar_t SHTEXTRANI = 'H';
    static const __wchar_t SHTEXTRANMEMWT = 'X';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_F = 'F';
    static const __wchar_t COMPETING_DEALER_TRADES_O = 'O';
    static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
    static const __wchar_t AGENCY_ALGORITHMIC_PROGRAM_TRADING = 'K';
    static const __wchar_t SHTEXTRANMEM = 'L';
    static const __wchar_t PRGINDEXARBOTHAGN = 'U';
    static const __wchar_t PRGNONINDEXARBINV = 'J';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_H = 'H';
    static const __wchar_t PRINCIPAL = 'P';
    static const __wchar_t AGENCY_INDEX_ARBITRAGE = 'U';
    static const __wchar_t TRANSACTIONS_FOR_THE_ACCOUNT_OF_A_NON_MEMBER_COMPTING_MARKET_MAKER = 'R';
    static const __wchar_t SHTEXTRANA = 'B';
    static const __wchar_t SHTEXTRANW = 'F';
    static const __wchar_t PRGINDEXARBINV = 'K';
    static const __wchar_t COMPETING_DEALER_TRADES_R = 'R';
    static const __wchar_t INDIVIDUAL_INVESTOR_SINGLE_ORDER = 'I';
    static const __wchar_t PROPRIETARY_NON_ALGORITHMIC_PROGRAM_TRADE = 'C';
    static const __wchar_t AGENT_FOR_OTHER_MEMBER_NON_ALGORITHMIC_PROGRAM_TRADE = 'N';
    static const __wchar_t ALLOTHERAGN = 'W';
    static const __wchar_t PRGNONINDEXARBOTHAGN = 'Y';
    static const __wchar_t PROPRIETARY_TRANSACTIONS_FOR_COMPETING_MARKET_MAKER_THAT_IS_AFFILIATED_WITH_THE_CLEARING_MEMBER = 'O';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_NOT_AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE = 'X';
    static const __wchar_t AGENCYSINGLE = 'A';
    static const __wchar_t COMPETING_DEALER_TRADES_T = 'T';
    static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = 'N';
    static const __wchar_t PROPRIETARY_ALGORITHMIC_PROGRAM_TRADING = 'J';
    static const __wchar_t AGENCY_NON_ALGORITHMIC_PROGRAM_TRADE = 'Y';
    static const __wchar_t PRGNONINDEXARBMEM = 'C';
    static const __wchar_t PRGNONINDEXARBOTHMEM = 'M';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_NON_MEMBER_COMPETING_MARKET_MAKER = 'Z';
    static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = 'Y';
    static const __wchar_t ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
    static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM_ORG = 'C';
    static const __wchar_t PRGINDEXARBMEM = 'D';
    static const __wchar_t INVINESTOR = 'I';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = 'E';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_B = 'B';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE = 'L';
    static const __wchar_t AGENCY_SINGLE_ORDER = 'A';
    static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_AFFLIATED_WITH_THE_FIRM_CLEARING_THE_TRADE = 'L';
    static const __wchar_t COMPETINGDEALER = 'O';
    static const __wchar_t COMPDEALER1 = 'R';
    static const __wchar_t SHTEXTRANNONMEM = 'Z';
    static const __wchar_t TRANSACTIONS_FOR_THE_ACCOUNT_OF_AN_UNAFFILIATED_MEMBERS_COMPETING_MARKET_MAKER = 'T';
    static const __wchar_t REGISTERED_EQUITY_MARKET_MAKER_TRADES = 'E';
    static const __wchar_t MARKETMAKER = 'E';
    static const __wchar_t SPECIALIST = 'S';
    static const __wchar_t COMPDEALER2 = 'T';
    static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
    static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
    Rule80A() : CharField(47) {}
    Rule80A(__wchar_t data) : CharField(47, data) {}
  };

  public __gc class TotNoStrikes : public IntField
  {
  public:
    static const int FIELD = 422;
    TotNoStrikes() : IntField(422) {}
    TotNoStrikes(int data) : IntField(422, data) {}
  };

  public __gc class CorporateAction : public StringField
  {
  public:
    static const int FIELD = 292;
    static const __wchar_t MERGER_REORGANIZATION = 'M';
    static const __wchar_t SYMBOL_CONVERSION = 'T';
    static const __wchar_t NEW = 'D';
    static const __wchar_t SUCCESSION_EVENT = 'W';
    static const __wchar_t STOCK_DIVIDEND = 'G';
    static const __wchar_t REVERSE_STOCK_SPLIT = 'I';
    static const __wchar_t POSITION_CONSOLIDATION = 'K';
    static const __wchar_t SPINOFF = 'P';
    static const __wchar_t EXDIVIDEND = 'A';
    static const __wchar_t EX_INTEREST = 'E';
    static const __wchar_t LIQUIDATION_REORGANIZATION = 'L';
    static const __wchar_t CASH_DIVIDEND = 'F';
    static const __wchar_t STANDARD_INTEGER_STOCK_SPLIT = 'J';
    static const __wchar_t RIGHTS_OFFERING = 'N';
    static const __wchar_t SHAREHOLDER_MEETING = 'O';
    static const __wchar_t WARRANT = 'R';
    static const __wchar_t EXDIST = 'B';
    static const __wchar_t EX_RIGHTS = 'C';
    static const __wchar_t EX_DISTRIBUTION = 'B';
    static const __wchar_t EX_DIVIDEND = 'A';
    static const __wchar_t TENDER_OFFER = 'Q';
    static const __wchar_t SPECIAL_ACTION = 'S';
    static const __wchar_t EXINTEREST = 'E';
    static const __wchar_t NON_INTEGER_STOCK_SPLIT = 'H';
    static const __wchar_t CUSIP = 'U';
    static const __wchar_t LEAP_ROLLOVER = 'V';
    static const __wchar_t EXRIGHTS = 'C';
    CorporateAction() : StringField(292) {}
    CorporateAction(String* data) : StringField(292, data) {}
  };

  public __gc class TerminationType : public IntField
  {
  public:
    static const int FIELD = 788;
    static const int TERM = 2;
    static const int FLEXIBLE = 3;
    static const int OPEN = 4;
    static const int OVERNIGHT = 1;
    TerminationType() : IntField(788) {}
    TerminationType(int data) : IntField(788, data) {}
  };

  public __gc class LegCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 615;
    LegCouponRate() : DoubleField(615) {}
    LegCouponRate(double data) : DoubleField(615, data) {}
    LegCouponRate(double data, int decimalPadding) : DoubleField(615, data, decimalPadding) {}
  };

  public __gc class PosMaintAction : public IntField
  {
  public:
    static const int FIELD = 712;
    static const int REPLACE = 2;
    static const int NEW = 1;
    static const int REVERSE = 4;
    static const int CANCEL = 3;
    PosMaintAction() : IntField(712) {}
    PosMaintAction(int data) : IntField(712, data) {}
  };

  public __gc class NoSecurityTypes : public IntField
  {
  public:
    static const int FIELD = 558;
    NoSecurityTypes() : IntField(558) {}
    NoSecurityTypes(int data) : IntField(558, data) {}
  };

  public __gc class ComplexEventPriceTimeType : public IntField
  {
  public:
    static const int FIELD = 1489;
    static const int SPECIFIED_DATE_TIME = 3;
    static const int EXPIRATION = 1;
    static const int IMMEDIATE = 2;
    ComplexEventPriceTimeType() : IntField(1489) {}
    ComplexEventPriceTimeType(int data) : IntField(1489, data) {}
  };

  public __gc class LastSwapPoints : public DoubleField
  {
  public:
    static const int FIELD = 1071;
    LastSwapPoints() : DoubleField(1071) {}
    LastSwapPoints(double data) : DoubleField(1071, data) {}
    LastSwapPoints(double data, int decimalPadding) : DoubleField(1071, data, decimalPadding) {}
  };

  public __gc class UnderlyingFXRateCalc : public CharField
  {
  public:
    static const int FIELD = 1046;
    static const __wchar_t DIVIDE = 'D';
    static const __wchar_t MULTIPLY = 'M';
    UnderlyingFXRateCalc() : CharField(1046) {}
    UnderlyingFXRateCalc(__wchar_t data) : CharField(1046, data) {}
  };

  public __gc class ListStatusText : public StringField
  {
  public:
    static const int FIELD = 444;
    ListStatusText() : StringField(444) {}
    ListStatusText(String* data) : StringField(444, data) {}
  };

  public __gc class OddLot : public BooleanField
  {
  public:
    static const int FIELD = 575;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    OddLot() : BooleanField(575) {}
    OddLot(bool data) : BooleanField(575, data) {}
  };

  public __gc class BookingUnit : public CharField
  {
  public:
    static const int FIELD = 590;
    static const __wchar_t AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = '2';
    static const __wchar_t AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = '1';
    static const __wchar_t EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = '0';
    BookingUnit() : CharField(590) {}
    BookingUnit(__wchar_t data) : CharField(590, data) {}
  };

  public __gc class LegAllocAcctIDSource : public StringField
  {
  public:
    static const int FIELD = 674;
    LegAllocAcctIDSource() : StringField(674) {}
    LegAllocAcctIDSource(String* data) : StringField(674, data) {}
  };

  public __gc class OnBehalfOfSendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 370;
    OnBehalfOfSendingTime() : UtcTimeStampField(370) {}
    OnBehalfOfSendingTime(DateTime data) : UtcTimeStampField(370, data) {}
  };

  public __gc class AllocStatus : public IntField
  {
  public:
    static const int FIELD = 87;
    static const int REJECTED_BY_INTERMEDIARY = 5;
    static const int ACCEPTEDSUCCESSFULLYPROCESSED = 0;
    static const int ACCOUNTLEVELREJECT = 2;
    static const int BLOCK_LEVEL_REJECT = 1;
    static const int ACCOUNT_LEVEL_REJECT = 2;
    static const int INCOMPLETE = 4;
    static const int ALLOCATION_PENDING = 6;
    static const int BLOCKLEVELREJECT = 1;
    static const int REJECTEDBYINTERMEDIARY = 5;
    static const int RECEIVEDRECEIVEDNOTYETPROCESSED = 3;
    static const int REVERSED = 7;
    static const int RECEIVED = 3;
    static const int PARTIAL_ACCEPT = 2;
    static const int REJECTED = 1;
    static const int ACCEPTED = 0;
    AllocStatus() : IntField(87) {}
    AllocStatus(int data) : IntField(87, data) {}
  };

  public __gc class ReferencePage : public StringField
  {
  public:
    static const int FIELD = 1448;
    ReferencePage() : StringField(1448) {}
    ReferencePage(String* data) : StringField(1448, data) {}
  };

  public __gc class DerivativeExerciseStyle : public CharField
  {
  public:
    static const int FIELD = 1299;
    DerivativeExerciseStyle() : CharField(1299) {}
    DerivativeExerciseStyle(__wchar_t data) : CharField(1299, data) {}
  };

  public __gc class ApplBegSeqNum : public IntField
  {
  public:
    static const int FIELD = 1182;
    ApplBegSeqNum() : IntField(1182) {}
    ApplBegSeqNum(int data) : IntField(1182, data) {}
  };

  public __gc class CollRptID : public StringField
  {
  public:
    static const int FIELD = 908;
    CollRptID() : StringField(908) {}
    CollRptID(String* data) : StringField(908, data) {}
  };

  public __gc class IncTaxInd : public IntField
  {
  public:
    static const int FIELD = 416;
    static const int NET = 1;
    static const int GROSS = 2;
    IncTaxInd() : IntField(416) {}
    IncTaxInd(int data) : IntField(416, data) {}
  };

  public __gc class NoBidDescriptors : public IntField
  {
  public:
    static const int FIELD = 398;
    NoBidDescriptors() : IntField(398) {}
    NoBidDescriptors(int data) : IntField(398, data) {}
  };

  public __gc class LegCouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 248;
    LegCouponPaymentDate() : StringField(248) {}
    LegCouponPaymentDate(String* data) : StringField(248, data) {}
  };

  public __gc class TotNoPartyList : public IntField
  {
  public:
    static const int FIELD = 1512;
    TotNoPartyList() : IntField(1512) {}
    TotNoPartyList(int data) : IntField(1512, data) {}
  };

  public __gc class PartyListResponseType : public IntField
  {
  public:
    static const int FIELD = 1507;
    static const int RETURN_ONLY_PARTY_INFORMATION = 1;
    static const int RETURN_ALL_AVAILABLE_INFORMATION_ON_PARTIES_AND_RELATED_PARTIES = 0;
    static const int INCLUDE_RISK_LIMIT_INFORMATION = 3;
    static const int INCLUDE_INFORMATION_ON_RELATED_PARTIES = 2;
    PartyListResponseType() : IntField(1507) {}
    PartyListResponseType(int data) : IntField(1507, data) {}
  };

  public __gc class NoUnderlyingLegSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 1334;
    NoUnderlyingLegSecurityAltID() : IntField(1334) {}
    NoUnderlyingLegSecurityAltID(int data) : IntField(1334, data) {}
  };

  public __gc class ReversalIndicator : public BooleanField
  {
  public:
    static const int FIELD = 700;
    ReversalIndicator() : BooleanField(700) {}
    ReversalIndicator(bool data) : BooleanField(700, data) {}
  };

  public __gc class CheckSum : public StringField
  {
  public:
    static const int FIELD = 10;
    CheckSum() : StringField(10) {}
    CheckSum(String* data) : StringField(10, data) {}
  };

  public __gc class TargetSubID : public StringField
  {
  public:
    static const int FIELD = 57;
    TargetSubID() : StringField(57) {}
    TargetSubID(String* data) : StringField(57, data) {}
  };

  public __gc class PosReqStatus : public IntField
  {
  public:
    static const int FIELD = 729;
    static const int COMPLETED = 0;
    static const int REJECTED = 2;
    static const int COMPLETEDWITHWARNINGS = 1;
    static const int COMPLETED_WITH_WARNINGS = 1;
    PosReqStatus() : IntField(729) {}
    PosReqStatus(int data) : IntField(729, data) {}
  };

  public __gc class PriorityIndicator : public IntField
  {
  public:
    static const int FIELD = 638;
    static const int PRIORITY_UNCHANGED = 0;
    static const int PRIORITYUNCHANGED = 0;
    static const int LOSTPRIORITY = 1;
    static const int LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = 1;
    PriorityIndicator() : IntField(638) {}
    PriorityIndicator(int data) : IntField(638, data) {}
  };

  public __gc class ContextPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1528;
    ContextPartySubIDType() : IntField(1528) {}
    ContextPartySubIDType(int data) : IntField(1528, data) {}
  };

  public __gc class UnderlyingLegCFICode : public StringField
  {
  public:
    static const int FIELD = 1344;
    UnderlyingLegCFICode() : StringField(1344) {}
    UnderlyingLegCFICode(String* data) : StringField(1344, data) {}
  };

  public __gc class DerivativeTimeUnit : public StringField
  {
  public:
    static const int FIELD = 1271;
    DerivativeTimeUnit() : StringField(1271) {}
    DerivativeTimeUnit(String* data) : StringField(1271, data) {}
  };

  public __gc class NoNested3PartyIDs : public IntField
  {
  public:
    static const int FIELD = 948;
    NoNested3PartyIDs() : IntField(948) {}
    NoNested3PartyIDs(int data) : IntField(948, data) {}
  };

  public __gc class LiquidityPctHigh : public DoubleField
  {
  public:
    static const int FIELD = 403;
    LiquidityPctHigh() : DoubleField(403) {}
    LiquidityPctHigh(double data) : DoubleField(403, data) {}
    LiquidityPctHigh(double data, int decimalPadding) : DoubleField(403, data, decimalPadding) {}
  };

  public __gc class MoneyLaunderingStatus : public CharField
  {
  public:
    static const int FIELD = 481;
    static const __wchar_t NOTCHECKED = 'N';
    static const __wchar_t EXEMPT_BELOW_THE_LIMIT = '1';
    static const __wchar_t EXAUTHCREDIT = '3';
    static const __wchar_t EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION = '2';
    static const __wchar_t EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION = '3';
    static const __wchar_t NOT_CHECKED = 'N';
    static const __wchar_t PASSED = 'Y';
    static const __wchar_t EXEMPT_1 = '1';
    static const __wchar_t EXCLIENTMONEYTYPE = '2';
    static const __wchar_t EXEMPT_2 = '2';
    static const __wchar_t EXBELOWLIM = '1';
    static const __wchar_t EXEMPT_3 = '3';
    MoneyLaunderingStatus() : CharField(481) {}
    MoneyLaunderingStatus(__wchar_t data) : CharField(481, data) {}
  };

  public __gc class Nested4PartySubID : public StringField
  {
  public:
    static const int FIELD = 1412;
    Nested4PartySubID() : StringField(1412) {}
    Nested4PartySubID(String* data) : StringField(1412, data) {}
  };

  public __gc class DerivativeSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 1272;
    DerivativeSecurityExchange() : StringField(1272) {}
    DerivativeSecurityExchange(String* data) : StringField(1272, data) {}
  };

  public __gc class LotType : public CharField
  {
  public:
    static const int FIELD = 1093;
    static const __wchar_t ROUND_LOT_BASED_UPON_UNITOFMEASURE = '4';
    static const __wchar_t ROUND_LOT = '2';
    static const __wchar_t ODD_LOT = '1';
    static const __wchar_t BLOCK_LOT = '3';
    LotType() : CharField(1093) {}
    LotType(__wchar_t data) : CharField(1093, data) {}
  };

  public __gc class ContIntRptID : public StringField
  {
  public:
    static const int FIELD = 977;
    ContIntRptID() : StringField(977) {}
    ContIntRptID(String* data) : StringField(977, data) {}
  };

  public __gc class QuoteCondition : public StringField
  {
  public:
    static const int FIELD = 276;
    static const __wchar_t FLAT_CURVE = '7';
    static const __wchar_t REST_OF_BOOK_VWAP = '3';
    static const __wchar_t BETTER_PRICES_IN_CONDITIONAL_ORDERS = '4';
    static const __wchar_t TRADING_RANGE = 'Q';
    static const __wchar_t HALT_ETH = 'k';
    static const __wchar_t BID_OFFER_SPECIALIST = 'r';
    static const __wchar_t CONSOLBEST = 'D';
    static const __wchar_t CROSSED = 'F';
    static const __wchar_t NO_OPEN = 'b';
    static const __wchar_t HALT = 'j';
    static const __wchar_t PREOPENING_SAM = 'v';
    static const __wchar_t OPEN_SAM = 'x';
    static const __wchar_t RESERVED_SAM = '0';
    static const __wchar_t OUTRIGHT_PRICE = 'J';
    static const __wchar_t IMPLIED_PRICE = 'K';
    static const __wchar_t DEPTH_ON_OFFER = 'M';
    static const __wchar_t ADDITIONAL_INFO_DUE_TO_RELATED = 'V';
    static const __wchar_t REGULAR_ETH = 'c';
    static const __wchar_t ROTATION_ETH = 'i';
    static const __wchar_t NONFIRM = 'I';
    static const __wchar_t EXCHANGE_BEST = 'C';
    static const __wchar_t DEPTH_ON_BID = 'N';
    static const __wchar_t CLOSING = 'O';
    static const __wchar_t VIEW_OF_COMMON = 'X';
    static const __wchar_t FORBIDDEN_SAM = 't';
    static const __wchar_t LOCKED = 'E';
    static const __wchar_t ORDER_INFLUX = 'R';
    static const __wchar_t NEWS_PENDING = 'T';
    static const __wchar_t RESUME = 'W';
    static const __wchar_t TRADING_RESUME = 'n';
    static const __wchar_t OUT_OF_SEQUENCE = 'o';
    static const __wchar_t END_OF_DAY_SAM = 's';
    static const __wchar_t FROZEN_SAM = 'u';
    static const __wchar_t OPENING_SAM = 'w';
    static const __wchar_t MANUAL_SLOW_QUOTE = 'L';
    static const __wchar_t NEWS_DISSEMINATION = 'P';
    static const __wchar_t DUE_TO_RELATED = 'S';
    static const __wchar_t VOLUME_ALERT = 'Y';
    static const __wchar_t FAST_MARKET_ETH = 'f ';
    static const __wchar_t INACTIVE_ETH = 'g';
    static const __wchar_t DUE_TO_NEWS_DISSEMINATION = 'l';
    static const __wchar_t SURVEILLANCE_SAM = 'y';
    static const __wchar_t DEPTH = 'G';
    static const __wchar_t OPEN = 'A';
    static const __wchar_t AUTOMATIC_EXECUTION = 'd';
    static const __wchar_t DUE_TO_NEWS_PENDING = 'm';
    static const __wchar_t NO_ACTIVE_SAM = '1';
    static const __wchar_t OFFER_SPECIALIST = 'q';
    static const __wchar_t SUSPENDED_SAM = 'z';
    static const __wchar_t RESTRICTED = '2';
    static const __wchar_t NON_FIRM = 'I';
    static const __wchar_t CLOSED_INACTIVE = 'B';
    static const __wchar_t ADDITIONAL_INFO = 'U';
    static const __wchar_t EQUIPMENT_CHANGEOVER = 'a';
    static const __wchar_t EXCHBEST = 'C';
    static const __wchar_t FAST_TRADING = 'H';
    static const __wchar_t FULL_CURVE = '6';
    static const __wchar_t MEDIAN_PRICE = '5';
    static const __wchar_t OPEN_ACTIVE = 'A';
    static const __wchar_t ORDER_IMBALANCE = 'Z';
    static const __wchar_t AUTOMATIC_EXECUTION_ETH = 'e';
    static const __wchar_t ROTATION = 'h';
    static const __wchar_t BID_SPECIALIST = 'p';
    static const __wchar_t FAST = 'H';
    static const __wchar_t CONSOLIDATED_BEST = 'D';
    static const __wchar_t CLOSED = 'B';
    QuoteCondition() : StringField(276) {}
    QuoteCondition(String* data) : StringField(276, data) {}
  };

  public __gc class ComplexEventStartTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 1495;
    ComplexEventStartTime() : UtcTimeOnlyField(1495) {}
    ComplexEventStartTime(DateTime data) : UtcTimeOnlyField(1495, data) {}
    ComplexEventStartTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(1495, data, showMilliseconds) {}
  };

  public __gc class NoComplexEvents : public IntField
  {
  public:
    static const int FIELD = 1483;
    NoComplexEvents() : IntField(1483) {}
    NoComplexEvents(int data) : IntField(1483, data) {}
  };

  public __gc class DerivativeContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 1266;
    DerivativeContractMultiplier() : DoubleField(1266) {}
    DerivativeContractMultiplier(double data) : DoubleField(1266, data) {}
    DerivativeContractMultiplier(double data, int decimalPadding) : DoubleField(1266, data, decimalPadding) {}
  };

  public __gc class DerivativeSecurityStatus : public StringField
  {
  public:
    static const int FIELD = 1256;
    DerivativeSecurityStatus() : StringField(1256) {}
    DerivativeSecurityStatus(String* data) : StringField(1256, data) {}
  };

  public __gc class DerivativeProductComplex : public StringField
  {
  public:
    static const int FIELD = 1228;
    DerivativeProductComplex() : StringField(1228) {}
    DerivativeProductComplex(String* data) : StringField(1228, data) {}
  };

  public __gc class TriggerSymbol : public StringField
  {
  public:
    static const int FIELD = 1103;
    TriggerSymbol() : StringField(1103) {}
    TriggerSymbol(String* data) : StringField(1103, data) {}
  };

  public __gc class UnderlyingLocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 594;
    UnderlyingLocaleOfIssue() : StringField(594) {}
    UnderlyingLocaleOfIssue(String* data) : StringField(594, data) {}
  };

  public __gc class SendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 52;
    SendingTime() : UtcTimeStampField(52) {}
    SendingTime(DateTime data) : UtcTimeStampField(52, data) {}
  };

  public __gc class RelationshipRiskMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1602;
    RelationshipRiskMaturityMonthYear() : StringField(1602) {}
    RelationshipRiskMaturityMonthYear(String* data) : StringField(1602, data) {}
  };

  public __gc class RelatedPartyAltIDSource : public CharField
  {
  public:
    static const int FIELD = 1571;
    RelatedPartyAltIDSource() : CharField(1571) {}
    RelatedPartyAltIDSource(__wchar_t data) : CharField(1571, data) {}
  };

  public __gc class ComplexEventStartDate : public UtcTimeStampField
  {
  public:
    static const int FIELD = 1492;
    ComplexEventStartDate() : UtcTimeStampField(1492) {}
    ComplexEventStartDate(DateTime data) : UtcTimeStampField(1492, data) {}
  };

  public __gc class UnderlyingRestructuringType : public StringField
  {
  public:
    static const int FIELD = 1453;
    UnderlyingRestructuringType() : StringField(1453) {}
    UnderlyingRestructuringType(String* data) : StringField(1453, data) {}
  };

  public __gc class LegUnitOfMeasureQty : public DoubleField
  {
  public:
    static const int FIELD = 1224;
    LegUnitOfMeasureQty() : DoubleField(1224) {}
    LegUnitOfMeasureQty(double data) : DoubleField(1224, data) {}
    LegUnitOfMeasureQty(double data, int decimalPadding) : DoubleField(1224, data, decimalPadding) {}
  };

  public __gc class NoTrdRegTimestamps : public IntField
  {
  public:
    static const int FIELD = 768;
    NoTrdRegTimestamps() : IntField(768) {}
    NoTrdRegTimestamps(int data) : IntField(768, data) {}
  };

  public __gc class SendingDate : public StringField
  {
  public:
    static const int FIELD = 51;
    SendingDate() : StringField(51) {}
    SendingDate(String* data) : StringField(51, data) {}
  };

  public __gc class PartyRelationship : public IntField
  {
  public:
    static const int FIELD = 1515;
    static const int OWNED_BY_30 = 30;
    static const int PROVIDES_QUOTES_TO = 17;
    static const int POSTS_TRADES_TO = 14;
    static const int REGULATORY_OWNER_OF = 29;
    static const int SUBSIDIARY_OF = 28;
    static const int HAS_MEMBERS = 10;
    static const int ENTERS_TRADES_THROUGH = 16;
    static const int BENEFICIAL_OWNER_OF = 35;
    static const int OWNED_BY_34 = 34;
    static const int CONTROLS = 31;
    static const int REQUESTS_QUOTES_FROM = 18;
    static const int SPONSORS = 5;
    static const int CLEARS_THROUGH = 2;
    static const int OWNED_BY_36 = 36;
    static const int BROKERS_TRADES_THROUGH = 22;
    static const int INVESTS_THROUGH = 20;
    static const int PARTICIPANT_OF_MARKETPLACE = 12;
    static const int LEGAL = 33;
    static const int ENTERS_TRADES_FOR = 15;
    static const int CARRIES_POSITIONS_FOR = 13;
    static const int IS_GUARANTEED_BY = 8;
    static const int IS_CONTROLLED_BY = 32;
    static const int PROVIDES_TRADING_SERVICES_FOR = 23;
    static const int IS_ALSO = 0;
    static const int PARENT_FIRM_FOR = 27;
    static const int APPROVED_BY = 26;
    static const int APPROVES_OF = 25;
    static const int USES_TRADING_SERVICES_OF = 24;
    static const int PROVIDES_GUARANTEE_FOR = 7;
    static const int SPONSORED_THROUGH = 6;
    static const int TRADES_FOR = 3;
    static const int CLEARS_FOR = 1;
    static const int BROKERS_TRADES_FOR = 21;
    static const int INVESTS_FOR = 19;
    static const int PROVIDES_MARKETPLACE_FOR = 11;
    static const int MEMBER_OF = 9;
    static const int TRADES_THROUGH = 4;
    PartyRelationship() : IntField(1515) {}
    PartyRelationship(int data) : IntField(1515, data) {}
  };

  public __gc class TimeToExpiration : public DoubleField
  {
  public:
    static const int FIELD = 1189;
    TimeToExpiration() : DoubleField(1189) {}
    TimeToExpiration(double data) : DoubleField(1189, data) {}
    TimeToExpiration(double data, int decimalPadding) : DoubleField(1189, data, decimalPadding) {}
  };

  public __gc class LegAllocQty : public DoubleField
  {
  public:
    static const int FIELD = 673;
    LegAllocQty() : DoubleField(673) {}
    LegAllocQty(double data) : DoubleField(673, data) {}
    LegAllocQty(double data, int decimalPadding) : DoubleField(673, data, decimalPadding) {}
  };

  public __gc class SettlLocation : public StringField
  {
  public:
    static const int FIELD = 166;
    static const String* EUROCLEAR = "EUR";
    static const String* CEDEL = "CED";
    static const String* PARTICIPANT_TRUST_COMPANY = "PTC";
    static const String* PHYSICAL = "PNY";
    static const String* EURO_CLEAR = "EUR";
    static const String* FEDERALBOOKENTRY = "FED";
    static const String* PARTICIPANTTRUSTCOMPANY = "PTC";
    static const String* DEPOSITORY_TRUST_COMPANY = "DTC";
    static const String* DEPOSITORYTRUSTCOMPANY = "DTC";
    static const String* LOCAL_MARKET_SETTLE_LOCATION = "ISO_Country_Code";
    static const String* LOCALMARKETSETTLELOCATION = "ISO_Country_Code";
    static const String* FEDERAL_BOOK_ENTRY = "FED";
    SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
  };

  public __gc class UnderlyingExerciseStyle : public IntField
  {
  public:
    static const int FIELD = 1419;
    UnderlyingExerciseStyle() : IntField(1419) {}
    UnderlyingExerciseStyle(int data) : IntField(1419, data) {}
  };

  public __gc class CashSettlAgentContactName : public StringField
  {
  public:
    static const int FIELD = 186;
    CashSettlAgentContactName() : StringField(186) {}
    CashSettlAgentContactName(String* data) : StringField(186, data) {}
  };

  public __gc class LegRepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 252;
    LegRepurchaseRate() : DoubleField(252) {}
    LegRepurchaseRate(double data) : DoubleField(252, data) {}
    LegRepurchaseRate(double data, int decimalPadding) : DoubleField(252, data, decimalPadding) {}
  };

  public __gc class ApplResponseID : public StringField
  {
  public:
    static const int FIELD = 1353;
    ApplResponseID() : StringField(1353) {}
    ApplResponseID(String* data) : StringField(1353, data) {}
  };

  public __gc class NoDerivativeInstrAttrib : public IntField
  {
  public:
    static const int FIELD = 1311;
    NoDerivativeInstrAttrib() : IntField(1311) {}
    NoDerivativeInstrAttrib(int data) : IntField(1311, data) {}
  };

  public __gc class DerivativeStrikeMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 1263;
    DerivativeStrikeMultiplier() : DoubleField(1263) {}
    DerivativeStrikeMultiplier(double data) : DoubleField(1263, data) {}
    DerivativeStrikeMultiplier(double data, int decimalPadding) : DoubleField(1263, data, decimalPadding) {}
  };

  public __gc class LegStrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 942;
    LegStrikeCurrency() : StringField(942) {}
    LegStrikeCurrency(String* data) : StringField(942, data) {}
  };

  public __gc class SecurityStatusReqID : public StringField
  {
  public:
    static const int FIELD = 324;
    SecurityStatusReqID() : StringField(324) {}
    SecurityStatusReqID(String* data) : StringField(324, data) {}
  };

  public __gc class SecureDataLen : public IntField
  {
  public:
    static const int FIELD = 90;
    SecureDataLen() : IntField(90) {}
    SecureDataLen(int data) : IntField(90, data) {}
  };

  public __gc class DiscretionScope : public IntField
  {
  public:
    static const int FIELD = 846;
    static const int LOCAL = 1;
    static const int NATIONAL_EXCLUDING_LOCAL = 4;
    static const int NATIONALEXCLUDINGLOCAL = 4;
    static const int GLOBAL = 3;
    static const int NATIONAL = 2;
    static const int LOCALEXCHANGEECNATS = 1;
    DiscretionScope() : IntField(846) {}
    DiscretionScope(int data) : IntField(846, data) {}
  };

  public __gc class OwnerType : public IntField
  {
  public:
    static const int FIELD = 522;
    static const int NETWORKINGSUBACCT = 10;
    static const int PUBLIC_COMPANY = 2;
    static const int INDIVIDUAL_TRUSTEE = 4;
    static const int CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = 7;
    static const int INDIVIDUAL_INVESTOR = 1;
    static const int COMPANY_TRUSTEE = 5;
    static const int CORPBODY = 12;
    static const int INDIVTRUSTEE = 4;
    static const int PENSIONPLAN = 6;
    static const int PRIVATE_COMPANY = 3;
    static const int NETWORKING_SUB_ACCOUNT = 10;
    static const int NON_PROFITORG = 11;
    static const int PRIVATECOMPANY = 3;
    static const int PENSION_PLAN = 6;
    static const int COMPANYTRUSTEE = 5;
    static const int TRUSTS = 8;
    static const int FIDUCIARIES = 9;
    static const int INDIVINVESTOR = 1;
    static const int NON_PROFIT_ORGANIZATION = 11;
    static const int CORPORATE_BODY = 12;
    static const int PUBLICCOMPANY = 2;
    static const int CUSTODIANMINORSACT = 7;
    static const int NOMINEE = 13;
    OwnerType() : IntField(522) {}
    OwnerType(int data) : IntField(522, data) {}
  };

  public __gc class Shares : public DoubleField
  {
  public:
    static const int FIELD = 53;
    Shares() : DoubleField(53) {}
    Shares(double data) : DoubleField(53, data) {}
    Shares(double data, int decimalPadding) : DoubleField(53, data, decimalPadding) {}
  };

  public __gc class Yield : public DoubleField
  {
  public:
    static const int FIELD = 236;
    Yield() : DoubleField(236) {}
    Yield(double data) : DoubleField(236, data) {}
    Yield(double data, int decimalPadding) : DoubleField(236, data, decimalPadding) {}
  };

  public __gc class QuoteRespID : public StringField
  {
  public:
    static const int FIELD = 693;
    QuoteRespID() : StringField(693) {}
    QuoteRespID(String* data) : StringField(693, data) {}
  };

  public __gc class RiskMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 1549;
    RiskMaturityMonthYear() : StringField(1549) {}
    RiskMaturityMonthYear(String* data) : StringField(1549, data) {}
  };

  public __gc class Nested3PartySubID : public StringField
  {
  public:
    static const int FIELD = 953;
    Nested3PartySubID() : StringField(953) {}
    Nested3PartySubID(String* data) : StringField(953, data) {}
  };

  public __gc class ApplQueueResolution : public IntField
  {
  public:
    static const int FIELD = 814;
    static const int END_SESSION = 3;
    static const int QUEUEFLUSHED = 1;
    static const int QUEUE_FLUSHED = 1;
    static const int ENDSESSION = 3;
    static const int OVERLAYLAST = 2;
    static const int OVERLAY_LAST = 2;
    static const int NOACTIONTAKEN = 0;
    static const int NO_ACTION_TAKEN = 0;
    ApplQueueResolution() : IntField(814) {}
    ApplQueueResolution(int data) : IntField(814, data) {}
  };

  public __gc class TrdRegTimestampOrigin : public StringField
  {
  public:
    static const int FIELD = 771;
    TrdRegTimestampOrigin() : StringField(771) {}
    TrdRegTimestampOrigin(String* data) : StringField(771, data) {}
  };

  public __gc class Nested2PartyRole : public IntField
  {
  public:
    static const int FIELD = 759;
    Nested2PartyRole() : IntField(759) {}
    Nested2PartyRole(int data) : IntField(759, data) {}
  };

  public __gc class Nested2PartyID : public StringField
  {
  public:
    static const int FIELD = 757;
    Nested2PartyID() : StringField(757) {}
    Nested2PartyID(String* data) : StringField(757, data) {}
  };

  public __gc class BidSize : public DoubleField
  {
  public:
    static const int FIELD = 134;
    BidSize() : DoubleField(134) {}
    BidSize(double data) : DoubleField(134, data) {}
    BidSize(double data, int decimalPadding) : DoubleField(134, data, decimalPadding) {}
  };

  public __gc class LegSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 601;
    LegSymbolSfx() : StringField(601) {}
    LegSymbolSfx(String* data) : StringField(601, data) {}
  };

  public __gc class QuoteResponseLevel : public IntField
  {
  public:
    static const int FIELD = 301;
    static const int SUMMARY_ACKNOWLEDGEMENT = 3;
    static const int ACKEACH = 2;
    static const int ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES = 1;
    static const int ACKNEG = 1;
    static const int NOACK = 0;
    static const int ACKNOWLEDGE_EACH_QUOTE_MESSAGE = 2;
    static const int ACKNOWLEDGE_EACH_QUOTE_MESSAGES = 2;
    static const int NO_ACKNOWLEDGEMENT = 0;
    QuoteResponseLevel() : IntField(301) {}
    QuoteResponseLevel(int data) : IntField(301, data) {}
  };

  public __gc class BodyLength : public IntField
  {
  public:
    static const int FIELD = 9;
    BodyLength() : IntField(9) {}
    BodyLength(int data) : IntField(9, data) {}
  };

  public __gc class ListExecInst : public StringField
  {
  public:
    static const int FIELD = 69;
    ListExecInst() : StringField(69) {}
    ListExecInst(String* data) : StringField(69, data) {}
  };

  public __gc class ExecAckStatus : public CharField
  {
  public:
    static const int FIELD = 1036;
    static const __wchar_t RECEIVED_NOT_YET_PROCESSED = '0';
    static const __wchar_t DONT_KNOW = '2';
    static const __wchar_t ACCEPTED = '1';
    ExecAckStatus() : CharField(1036) {}
    ExecAckStatus(__wchar_t data) : CharField(1036, data) {}
  };

  public __gc class SettlDate2 : public StringField
  {
  public:
    static const int FIELD = 193;
    SettlDate2() : StringField(193) {}
    SettlDate2(String* data) : StringField(193, data) {}
  };

  public __gc class NetGrossInd : public IntField
  {
  public:
    static const int FIELD = 430;
    static const int NET = 1;
    static const int GROSS = 2;
    NetGrossInd() : IntField(430) {}
    NetGrossInd(int data) : IntField(430, data) {}
  };

  public __gc class UnderlyingSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 459;
    UnderlyingSecurityAltIDSource() : StringField(459) {}
    UnderlyingSecurityAltIDSource(String* data) : StringField(459, data) {}
  };

  public __gc class TestReqID : public StringField
  {
  public:
    static const int FIELD = 112;
    TestReqID() : StringField(112) {}
    TestReqID(String* data) : StringField(112, data) {}
  };

  public __gc class CxlType : public CharField
  {
  public:
    static const int FIELD = 125;
    static const __wchar_t PARTIAL_CANCEL = 'P';
    static const __wchar_t FULL_REMAINING_QUANTITY = 'F';
    CxlType() : CharField(125) {}
    CxlType(__wchar_t data) : CharField(125, data) {}
  };

  public __gc class UnderlyingCreditRating : public StringField
  {
  public:
    static const int FIELD = 256;
    UnderlyingCreditRating() : StringField(256) {}
    UnderlyingCreditRating(String* data) : StringField(256, data) {}
  };

  public __gc class AvgPxPrecision : public IntField
  {
  public:
    static const int FIELD = 74;
    AvgPxPrecision() : IntField(74) {}
    AvgPxPrecision(int data) : IntField(74, data) {}
  };

  public __gc class BenchmarkPriceType : public IntField
  {
  public:
    static const int FIELD = 663;
    BenchmarkPriceType() : IntField(663) {}
    BenchmarkPriceType(int data) : IntField(663, data) {}
  };

  public __gc class DeskTypeSource : public IntField
  {
  public:
    static const int FIELD = 1034;
    static const int NASD_OATS = 1;
    DeskTypeSource() : IntField(1034) {}
    DeskTypeSource(int data) : IntField(1034, data) {}
  };

  public __gc class DiscretionRoundDirection : public IntField
  {
  public:
    static const int FIELD = 844;
    static const int MOREPASSIVE = 2;
    static const int MOREAGGRESSIVE = 1;
    static const int MORE_AGGRESSIVE = 1;
    static const int MORE_PASSIVE = 2;
    DiscretionRoundDirection() : IntField(844) {}
    DiscretionRoundDirection(int data) : IntField(844, data) {}
  };

  public __gc class OrigSecondaryTradeID : public StringField
  {
  public:
    static const int FIELD = 1127;
    OrigSecondaryTradeID() : StringField(1127) {}
    OrigSecondaryTradeID(String* data) : StringField(1127, data) {}
  };

  public __gc class ReceivedDeptID : public StringField
  {
  public:
    static const int FIELD = 1030;
    ReceivedDeptID() : StringField(1030) {}
    ReceivedDeptID(String* data) : StringField(1030, data) {}
  };

  public __gc class MaturityNetMoney : public DoubleField
  {
  public:
    static const int FIELD = 890;
    MaturityNetMoney() : DoubleField(890) {}
    MaturityNetMoney(double data) : DoubleField(890, data) {}
    MaturityNetMoney(double data, int decimalPadding) : DoubleField(890, data, decimalPadding) {}
  };

  public __gc class BidDescriptorType : public IntField
  {
  public:
    static const int FIELD = 399;
    static const int COUNTRY = 2;
    static const int INDEX = 3;
    static const int SECTOR = 1;
    BidDescriptorType() : IntField(399) {}
    BidDescriptorType(int data) : IntField(399, data) {}
  };

  public __gc class RiskEncodedSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 1620;
    RiskEncodedSecurityDescLen() : IntField(1620) {}
    RiskEncodedSecurityDescLen(int data) : IntField(1620, data) {}
  };

  public __gc class RelationshipRiskSymbol : public StringField
  {
  public:
    static const int FIELD = 1589;
    RelationshipRiskSymbol() : StringField(1589) {}
    RelationshipRiskSymbol(String* data) : StringField(1589, data) {}
  };

  public __gc class NoRelatedContextPartyIDs : public IntField
  {
  public:
    static const int FIELD = 1575;
    NoRelatedContextPartyIDs() : IntField(1575) {}
    NoRelatedContextPartyIDs(int data) : IntField(1575, data) {}
  };

  public __gc class DerivativeInstrumentPartySubID : public StringField
  {
  public:
    static const int FIELD = 1297;
    DerivativeInstrumentPartySubID() : StringField(1297) {}
    DerivativeInstrumentPartySubID(String* data) : StringField(1297, data) {}
  };

  public __gc class NetworkStatusResponseType : public IntField
  {
  public:
    static const int FIELD = 937;
    static const int INCREMENTAL_UPDATE = 2;
    static const int INCREMENTALUPDATE = 2;
    static const int FULL = 1;
    NetworkStatusResponseType() : IntField(937) {}
    NetworkStatusResponseType(int data) : IntField(937, data) {}
  };

  public __gc class DateOfBirth : public StringField
  {
  public:
    static const int FIELD = 486;
    DateOfBirth() : StringField(486) {}
    DateOfBirth(String* data) : StringField(486, data) {}
  };

  public __gc class RelatedContextPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 1581;
    RelatedContextPartySubIDType() : IntField(1581) {}
    RelatedContextPartySubIDType(int data) : IntField(1581, data) {}
  };

  public __gc class StartStrikePxRange : public DoubleField
  {
  public:
    static const int FIELD = 1202;
    StartStrikePxRange() : DoubleField(1202) {}
    StartStrikePxRange(double data) : DoubleField(1202, data) {}
    StartStrikePxRange(double data, int decimalPadding) : DoubleField(1202, data, decimalPadding) {}
  };

  public __gc class UndlyInstrumentPartySubID : public StringField
  {
  public:
    static const int FIELD = 1063;
    UndlyInstrumentPartySubID() : StringField(1063) {}
    UndlyInstrumentPartySubID(String* data) : StringField(1063, data) {}
  };

  public __gc class SecondaryTradeReportRefID : public StringField
  {
  public:
    static const int FIELD = 881;
    SecondaryTradeReportRefID() : StringField(881) {}
    SecondaryTradeReportRefID(String* data) : StringField(881, data) {}
  };

  public __gc class UnderlyingCPRegType : public StringField
  {
  public:
    static const int FIELD = 878;
    UnderlyingCPRegType() : StringField(878) {}
    UnderlyingCPRegType(String* data) : StringField(878, data) {}
  };

  public __gc class SignatureLength : public IntField
  {
  public:
    static const int FIELD = 93;
    SignatureLength() : IntField(93) {}
    SignatureLength(int data) : IntField(93, data) {}
  };

  public __gc class OrderQty : public DoubleField
  {
  public:
    static const int FIELD = 38;
    OrderQty() : DoubleField(38) {}
    OrderQty(double data) : DoubleField(38, data) {}
    OrderQty(double data, int decimalPadding) : DoubleField(38, data, decimalPadding) {}
  };

  public __gc class RelationshipRiskWarningLevelPercent : public DoubleField
  {
  public:
    static const int FIELD = 1614;
    RelationshipRiskWarningLevelPercent() : DoubleField(1614) {}
    RelationshipRiskWarningLevelPercent(double data) : DoubleField(1614, data) {}
    RelationshipRiskWarningLevelPercent(double data, int decimalPadding) : DoubleField(1614, data, decimalPadding) {}
  };

  public __gc class OriginalNotionalPercentageOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 1452;
    OriginalNotionalPercentageOutstanding() : DoubleField(1452) {}
    OriginalNotionalPercentageOutstanding(double data) : DoubleField(1452, data) {}
    OriginalNotionalPercentageOutstanding(double data, int decimalPadding) : DoubleField(1452, data, decimalPadding) {}
  };

  public __gc class UnderlyingTimeUnit : public StringField
  {
  public:
    static const int FIELD = 1000;
    UnderlyingTimeUnit() : StringField(1000) {}
    UnderlyingTimeUnit(String* data) : StringField(1000, data) {}
  };

  public __gc class EncodedHeadlineLen : public IntField
  {
  public:
    static const int FIELD = 358;
    EncodedHeadlineLen() : IntField(358) {}
    EncodedHeadlineLen(int data) : IntField(358, data) {}
  };

  public __gc class NoRegistDtls : public IntField
  {
  public:
    static const int FIELD = 473;
    NoRegistDtls() : IntField(473) {}
    NoRegistDtls(int data) : IntField(473, data) {}
  };

  public __gc class StrategyParameterValue : public StringField
  {
  public:
    static const int FIELD = 960;
    StrategyParameterValue() : StringField(960) {}
    StrategyParameterValue(String* data) : StringField(960, data) {}
  };

  public __gc class RiskSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 1556;
    RiskSecurityDesc() : StringField(1556) {}
    RiskSecurityDesc(String* data) : StringField(1556, data) {}
  };

  public __gc class NoInstrumentParties : public IntField
  {
  public:
    static const int FIELD = 1018;
    NoInstrumentParties() : IntField(1018) {}
    NoInstrumentParties(int data) : IntField(1018, data) {}
  };

  public __gc class QuoteType : public IntField
  {
  public:
    static const int FIELD = 537;
    static const int INDICATIVE = 0;
    static const int RESTRICTEDTRADEABLE = 2;
    static const int RESTRICTED_TRADEABLE = 2;
    static const int TRADEABLE = 1;
    static const int COUNTER = 3;
    QuoteType() : IntField(537) {}
    QuoteType(int data) : IntField(537, data) {}
  };

  public __gc class NoRiskSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 1540;
    NoRiskSecurityAltID() : IntField(1540) {}
    NoRiskSecurityAltID(int data) : IntField(1540, data) {}
  };

  public __gc class NoStrategyParameters : public IntField
  {
  public:
    static const int FIELD = 957;
    NoStrategyParameters() : IntField(957) {}
    NoStrategyParameters(int data) : IntField(957, data) {}
  };

  public __gc class IndividualAllocRejCode : public IntField
  {
  public:
    static const int FIELD = 776;
    IndividualAllocRejCode() : IntField(776) {}
    IndividualAllocRejCode(int data) : IntField(776, data) {}
  };

  public __gc class DiscretionInst : public CharField
  {
  public:
    static const int FIELD = 388;
    static const __wchar_t RELVWAP = '6';
    static const __wchar_t RELLOCPRIMPX = '3';
    static const __wchar_t RELATED_TO_MARKET_PRICE = '1';
    static const __wchar_t RELMIDPX = '4';
    static const __wchar_t RELATED_TO_VWAP = '6';
    static const __wchar_t RELATED_TO_MIDPOINT_PRICE = '4';
    static const __wchar_t RELDISPPX = '0';
    static const __wchar_t RELATED_TO_DISPLAYED_PRICE = '0';
    static const __wchar_t RELATED_TO_PRIMARY_PRICE = '2';
    static const __wchar_t AVERAGE_PRICE_GUARANTEE = '7';
    static const __wchar_t RELMKTPX = '1';
    static const __wchar_t RELPRIMPX = '2';
    static const __wchar_t RELLSTPX = '5';
    static const __wchar_t RELATED_TO_LAST_TRADE_PRICE = '5';
    static const __wchar_t RELATED_TO_LOCAL_PRIMARY_PRICE = '3';
    DiscretionInst() : CharField(388) {}
    DiscretionInst(__wchar_t data) : CharField(388, data) {}
  };

  public __gc class RiskSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 1541;
    RiskSecurityAltID() : StringField(1541) {}
    RiskSecurityAltID(String* data) : StringField(1541, data) {}
  };

  public __gc class TargetPartyRole : public IntField
  {
  public:
    static const int FIELD = 1464;
    TargetPartyRole() : IntField(1464) {}
    TargetPartyRole(int data) : IntField(1464, data) {}
  };

  public __gc class CrossPrioritization : public IntField
  {
  public:
    static const int FIELD = 550;
    static const int BUY_SIDE_IS_PRIORITIZED = 1;
    static const int SELL_SIDE_IS_PRIORITIZED = 2;
    static const int BUY_SIDE_PRIORITIZED = 1;
    static const int SELL_SIDE_PRIORITIZED = 2;
    static const int NONE = 0;
    static const int SELLSIDE_PRIORITIZED = 2;
    static const int BUYSIDE_PRIORITIZED = 1;
    CrossPrioritization() : IntField(550) {}
    CrossPrioritization(int data) : IntField(550, data) {}
  };

  public __gc class EncodedListStatusText : public StringField
  {
  public:
    static const int FIELD = 446;
    EncodedListStatusText() : StringField(446) {}
    EncodedListStatusText(String* data) : StringField(446, data) {}
  };

  public __gc class IOIOthSvc : public CharField
  {
  public:
    static const int FIELD = 24;
    static const __wchar_t AUTEX = 'A';
    static const __wchar_t BRIDGE = 'B';
    IOIOthSvc() : CharField(24) {}
    IOIOthSvc(__wchar_t data) : CharField(24, data) {}
  };

  public __gc class LegIssueDate : public StringField
  {
  public:
    static const int FIELD = 249;
    LegIssueDate() : StringField(249) {}
    LegIssueDate(String* data) : StringField(249, data) {}
  };

  public __gc class MDReqRejReason : public CharField
  {
  public:
    static const int FIELD = 281;
    static const __wchar_t UNSUPPSUB = '4';
    static const __wchar_t UNSUPPORTED_MDENTRYTYPE = '8';
    static const __wchar_t INSUFFICIENT_CREDIT = 'D';
    static const __wchar_t UNSUPPMKTDEPTH = '5';
    static const __wchar_t UNSUPPENTRY = '8';
    static const __wchar_t INSUFFICIENT_BANDWIDTH = '2';
    static const __wchar_t UNSUPPORTED_SCOPE = 'A';
    static const __wchar_t UNSUPPMDIMPLICITDELETE = 'C';
    static const __wchar_t UNSUPPORTED_TRADINGSESSIONID = '9';
    static const __wchar_t UNKNOWNSYM = '0';
    static const __wchar_t UNSUPPMDUPDATE = '6';
    static const __wchar_t UNSUPPPOSITIONEFFECTSETTLEFLAG = 'B';
    static const __wchar_t DUPLICATE_MDREQID = '1';
    static const __wchar_t DUPID = '1';
    static const __wchar_t UNSUPPORTED_AGGREGATEDBOOK = '7';
    static const __wchar_t UNSUPPORTED_MDUPDATETYPE = '6';
    static const __wchar_t UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE = '4';
    static const __wchar_t UNKNOWN_SYMBOL = '0';
    static const __wchar_t INSBAND = '2';
    static const __wchar_t UNSUPPSCOPE = 'A';
    static const __wchar_t UNSUPPORTED_OPENCLOSESETTLEFLAG = 'B';
    static const __wchar_t UNSUPPORTED_MARKETDEPTH = '5';
    static const __wchar_t UNSUPPAGGBK = '7';
    static const __wchar_t INSUFFICIENT_PERMISSIONS = '3';
    static const __wchar_t INSPERM = '3';
    static const __wchar_t UNSUPPTRDSESSIONID = '9';
    static const __wchar_t UNSUPPORTED_MDIMPLICITDELETE = 'C';
    MDReqRejReason() : CharField(281) {}
    MDReqRejReason(__wchar_t data) : CharField(281, data) {}
  };

  public __gc class RelationshipRiskPutOrCall : public IntField
  {
  public:
    static const int FIELD = 1606;
    RelationshipRiskPutOrCall() : IntField(1606) {}
    RelationshipRiskPutOrCall(int data) : IntField(1606, data) {}
  };

  public __gc class ApplReqType : public IntField
  {
  public:
    static const int FIELD = 1347;
    static const int REQUEST_FOR_THE_LAST_APPLLASTSEQNUM_PUBLISHED_FOR_THE_SPECIFIED_APPLICATIONS = 2;
    static const int UNSUBSCRIBE_TO_THE_SPECIFIED_APPLICATIONS = 4;
    static const int CANCEL_RETRANSMISSION_AND_UNSUBSCRIBE_TO_THE_SPECIFIED_APPLICATIONS = 6;
    static const int SUBSCRIPTION_TO_THE_SPECIFIED_APPLICATIONS = 1;
    static const int RETRANSMISSION_OF_APPLICATION_MESSAGES_FOR_THE_SPECIFIED_APPLICATIONS = 0;
    static const int REQUEST_VALID_SET_OF_APPLICATIONS = 3;
    static const int CANCEL_RETRANSMISSION = 5;
    ApplReqType() : IntField(1347) {}
    ApplReqType(int data) : IntField(1347, data) {}
  };

  public __gc class Country : public StringField
  {
  public:
    static const int FIELD = 421;
    Country() : StringField(421) {}
    Country(String* data) : StringField(421, data) {}
  };

  public __gc class UnderlyingLegSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 1333;
    UnderlyingLegSecurityIDSource() : StringField(1333) {}
    UnderlyingLegSecurityIDSource(String* data) : StringField(1333, data) {}
  };

  public __gc class FlexProductEligibilityIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1242;
    FlexProductEligibilityIndicator() : BooleanField(1242) {}
    FlexProductEligibilityIndicator(bool data) : BooleanField(1242, data) {}
  };

  public __gc class AggressorIndicator : public BooleanField
  {
  public:
    static const int FIELD = 1057;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    AggressorIndicator() : BooleanField(1057) {}
    AggressorIndicator(bool data) : BooleanField(1057, data) {}
  };

  public __gc class ExecPriceAdjustment : public DoubleField
  {
  public:
    static const int FIELD = 485;
    ExecPriceAdjustment() : DoubleField(485) {}
    ExecPriceAdjustment(double data) : DoubleField(485, data) {}
    ExecPriceAdjustment(double data, int decimalPadding) : DoubleField(485, data, decimalPadding) {}
  };

  public __gc class BusinessRejectReason : public IntField
  {
  public:
    static const int FIELD = 380;
    static const int APPNA = 4;
    static const int UNKNOWN_SECURITY = 2;
    static const int UNKNMSGTYPE = 3;
    static const int CONDFLDMISS = 5;
    static const int UNKNID = 1;
    static const int APPLICATION_NOT_AVAILABLE = 4;
    static const int INVALID_PRICE_INCREMENT = 18;
    static const int DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME = 7;
    static const int CONDITIONALLY_REQUIRED_FIELD_MISSING = 5;
    static const int UNKNOWN_ID = 1;
    static const int NOTAUTH = 6;
    static const int NODELIVTOFIRM = 7;
    static const int OTHER = 0;
    static const int UNSUPPORTED_MESSAGE_TYPE = 3;
    static const int UNKNOWN_MESSAGE_TYPE = 3;
    static const int NOT_AUTHORIZED = 6;
    static const int UNKNSEC = 2;
    static const int UNKOWN_ID = 1;
    BusinessRejectReason() : IntField(380) {}
    BusinessRejectReason(int data) : IntField(380, data) {}
  };

  public __gc class TradeDate : public StringField
  {
  public:
    static const int FIELD = 75;
    TradeDate() : StringField(75) {}
    TradeDate(String* data) : StringField(75, data) {}
  };

  public __gc class UnderlyingPutOrCall : public IntField
  {
  public:
    static const int FIELD = 315;
    UnderlyingPutOrCall() : IntField(315) {}
    UnderlyingPutOrCall(int data) : IntField(315, data) {}
  };

  public __gc class RelationshipRiskSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 1590;
    RelationshipRiskSymbolSfx() : StringField(1590) {}
    RelationshipRiskSymbolSfx(String* data) : StringField(1590, data) {}
  };

  public __gc class UnderlyingInstrumentPartyRole : public IntField
  {
  public:
    static const int FIELD = 1061;
    UnderlyingInstrumentPartyRole() : IntField(1061) {}
    UnderlyingInstrumentPartyRole(int data) : IntField(1061, data) {}
  };

  public __gc class DerivativePositionLimit : public IntField
  {
  public:
    static const int FIELD = 1273;
    DerivativePositionLimit() : IntField(1273) {}
    DerivativePositionLimit(int data) : IntField(1273, data) {}
  };

  public __gc class TierCode : public StringField
  {
  public:
    static const int FIELD = 994;
    TierCode() : StringField(994) {}
    TierCode(String* data) : StringField(994, data) {}
  };

  public __gc class BookingType : public IntField
  {
  public:
    static const int FIELD = 775;
    static const int REGULAR_BOOKING = 0;
    static const int REGULARBOOKING = 0;
    static const int CFD = 1;
    static const int CFDCONTRACTFORDIFFERENCE = 1;
    static const int TOTALRETURNSWAP = 2;
    static const int TOTAL_RETURN_SWAP = 2;
    BookingType() : IntField(775) {}
    BookingType(int data) : IntField(775, data) {}
  };

  public __gc class StipulationValue : public StringField
  {
  public:
    static const int FIELD = 234;
    StipulationValue() : StringField(234) {}
    StipulationValue(String* data) : StringField(234, data) {}
  };

  public __gc class SettlCurrBidFxRate : public DoubleField
  {
  public:
    static const int FIELD = 656;
    SettlCurrBidFxRate() : DoubleField(656) {}
    SettlCurrBidFxRate(double data) : DoubleField(656, data) {}
    SettlCurrBidFxRate(double data, int decimalPadding) : DoubleField(656, data, decimalPadding) {}
  };

}
