/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#pragma once

#include "Field.h"

namespace QuickFix
{
  public __gc class ExecTransType : public CharField
  {
  public:
  static const int FIELD = 20;
  static const __wchar_t NEW = '0';
  static const __wchar_t CANCEL = '1';
  static const __wchar_t CORRECT = '2';
  static const __wchar_t STATUS = '3';
  ExecTransType() : CharField(20) {}
    ExecTransType(__wchar_t data) : CharField(20, data) {}
  };

  public __gc class IDSource : public StringField
  {
  public:
  static const int FIELD = 22;
  static const String* CUSIP = "1";
  static const String* SEDOL = "2";
  static const String* QUIK = "3";
  static const String* ISIN_NUMBER = "4";
  static const String* RIC_CODE = "5";
  static const String* ISO_CURRENCY_CODE = "6";
  static const String* ISO_COUNTRY_CODE = "7";
  static const String* EXCHANGE_SYMBOL = "8";
  static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
  IDSource() : StringField(22) {}
    IDSource(String* data) : StringField(22, data) {}
  };

  public __gc class IOIOthSvc : public CharField
  {
  public:
  static const int FIELD = 24;
  IOIOthSvc() : CharField(24) {}
    IOIOthSvc(char data) : CharField(24, data) {}
  };

  public __gc class IOIShares : public StringField
  {
  public:
  static const int FIELD = 27;
  static const String* SMALL = "S";
  static const String* MEDIUM = "M";
  static const String* LARGE = "L";
  IOIShares() : StringField(27) {}
    IOIShares(String* data) : StringField(27, data) {}
  };

  public __gc class LastShares : public DoubleField
  {
  public:
  static const int FIELD = 32;
  LastShares() : DoubleField(32) {}
    LastShares(double data) : DoubleField(32, data) {}
  };

  public __gc class RelatdSym : public StringField
  {
  public:
  static const int FIELD = 46;
  RelatdSym() : StringField(46) {}
    RelatdSym(String* data) : StringField(46, data) {}
  };

  public __gc class Rule80A : public CharField
  {
  public:
  static const int FIELD = 47;
  static const __wchar_t AGENCY_SINGLE_ORDER = 'A';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE = 'B';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM = 'C';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM = 'D';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = 'E';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE = 'F';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE = 'H';
  static const __wchar_t INDIVIDUAL_INVESTOR = 'I';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
  static const __wchar_t SHORT_EXEMPT_AFFILIATED = 'L';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = 'N';
  static const __wchar_t PROPRIETARY_AFFILIATED = 'O';
  static const __wchar_t PRINCIPAL = 'P';
  static const __wchar_t TRANSACTIONS_NON_MEMBER = 'R';
  static const __wchar_t SPECIALIST_TRADES = 'S';
  static const __wchar_t TRANSACTIONS_UNAFFILIATED_MEMBER = 'T';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
  static const __wchar_t ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
  static const __wchar_t SHORT_EXEMPT_NOT_AFFILIATED = 'X';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = 'Y';
  static const __wchar_t SHORT_EXEMPT_NONMEMBER = 'Z';
  Rule80A() : CharField(47) {}
    Rule80A(__wchar_t data) : CharField(47, data) {}
  };

  public __gc class Shares : public DoubleField
  {
  public:
  static const int FIELD = 53;
  Shares() : DoubleField(53) {}
  Shares(double data) : DoubleField(53, data) {}
  };

  public __gc class SettlmntTyp : public CharField
  {
  public:
  static const int FIELD = 63;
  static const __wchar_t REGULAR = '0';
  static const __wchar_t CASH = '1';
  static const __wchar_t NEXT_DAY = '2';
  static const __wchar_t T_PLUS_2 = '3';
  static const __wchar_t T_PLUS_3 = '4';
  static const __wchar_t T_PLUS_4 = '5';
  static const __wchar_t FUTURE = '6';
  static const __wchar_t WHEN_AND_IF_ISSUED = '7';
  static const __wchar_t SELLERS_OPTION = '8';
  static const __wchar_t T_PLUS_5 = '9';
  static const __wchar_t T_PLUS_1 = 'A';
  SettlmntTyp() : CharField(63) {}
    SettlmntTyp(__wchar_t data) : CharField(63, data) {}
  };

  public __gc class FutSettDate : public StringField
  {
  public:
  static const int FIELD = 64;
  FutSettDate() : StringField(64) {}
    FutSettDate(String* data) : StringField(64, data) {}
  };

  public __gc class AvgPrxPrecision : public IntField
  {
  public:
  static const int FIELD = 74;
  AvgPrxPrecision() : IntField(74) {}
    AvgPrxPrecision(int data) : IntField(74, data) {}
  };

  public __gc class ExecBroker : public StringField
  {
  public:
  static const int FIELD = 76;
  ExecBroker() : StringField(76) {}
    ExecBroker(String* data) : StringField(76, data) {}
  };

  public __gc class OpenClose : public CharField
  {
  public:
  static const int FIELD = 77;
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';
  OpenClose() : CharField(77) {}
    OpenClose(char data) : CharField(77, data) {}
  };

  public __gc class AllocShares : public IntField
  {
  public:
  static const int FIELD = 80;
  AllocShares() : IntField(80) {}
    AllocShares(int data) : IntField(80, data) {}
  };

  public __gc class DlvyInst : public CharField
  {
  public:
  static const int FIELD = 86;
  DlvyInst() : CharField(86) {}
    DlvyInst(__wchar_t data) : CharField(86, data) {}
  };

  public __gc class BrokerOfCredit : public StringField
  {
  public:
  static const int FIELD = 92;
  BrokerOfCredit() : StringField(92) {}
    BrokerOfCredit(String* data) : StringField(92, data) {}
  };

  public __gc class ClientID : public StringField
  {
  public:
  static const int FIELD = 109;
  ClientID() : StringField(109) {}
    ClientID(String* data) : StringField(109, data) {}
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

  public __gc class SettlLocation : public StringField
  {
  public:
  static const int FIELD = 166;
  static const String* CEDEL = "CED";
  static const String* DEPOSITORY_TRUST_COMPANY = "DTC";
  static const String* EUROCLEAR = "EUR";
  static const String* FEDERAL_BOOK_ENTRY = "FED";
  static const String* PHYSICAL = "PED";
  static const String* PARTICIPANT_TRUST_COMPANY_ISO_COUNTRY = "PTC";
  SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
  };

  public __gc class SettlDepositoryCode : public StringField
  {
  public:
  static const int FIELD = 173;
  SettlDepositoryCode() : StringField(173) {}
    SettlDepositoryCode(String* data) : StringField(173, data) {}
  };

  public __gc class SettlBrkrCode : public StringField
  {
  public:
  static const int FIELD = 174;
  SettlBrkrCode() : StringField(174) {}
    SettlBrkrCode(String* data) : StringField(174, data) {}
  };

  public __gc class SettlInstCode : public StringField
  {
  public:
  static const int FIELD = 175;
  SettlInstCode() : StringField(175) {}
    SettlInstCode(String* data) : StringField(175, data) {}
  };

  public __gc class SecuritySettlAgentName : public StringField
  {
  public:
  static const int FIELD = 176;
  SecuritySettlAgentName() : StringField(176) {}
    SecuritySettlAgentName(String* data) : StringField(176, data) {}
  };

  public __gc class SecuritySettlAgentCode : public StringField
  {
  public:
  static const int FIELD = 177;
  SecuritySettlAgentCode() : StringField(177) {}
    SecuritySettlAgentCode(String* data) : StringField(177, data) {}
  };

  public __gc class SecuritySettlAgentAcctNum : public StringField
  {
  public:
 static const int FIELD = 178;
  SecuritySettlAgentAcctNum() : StringField(178) {}
    SecuritySettlAgentAcctNum(String* data) : StringField(178, data) {}
  };

  public __gc class SecuritySettlAgentAcctName : public StringField
  {
  public:
  static const int FIELD = 179;
  SecuritySettlAgentAcctName() : StringField(179) {}
    SecuritySettlAgentAcctName(String* data) : StringField(179, data) {}
  };

  public __gc class SecuritySettlAgentContactName : public StringField
  {
  public:
  static const int FIELD = 180;
  SecuritySettlAgentContactName() : StringField(180) {}
    SecuritySettlAgentContactName(String* data) : StringField(180, data) {}
  };

  public __gc class SecuritySettlAgentContactPhone : public StringField
  {
  public:
  static const int FIELD = 181;
  SecuritySettlAgentContactPhone() : StringField(181) {}
    SecuritySettlAgentContactPhone(String* data) : StringField(181, data) {}
  };

  public __gc class CashSettlAgentName : public StringField
  {
  public:
  static const int FIELD = 182;
  CashSettlAgentName() : StringField(182) {}
    CashSettlAgentName(String* data) : StringField(182, data) {}
  };

  public __gc class CashSettlAgentCode : public StringField
  {
  public:
  static const int FIELD = 183;
  CashSettlAgentCode() : StringField(183) {}
    CashSettlAgentCode(String* data) : StringField(183, data) {}
  };

  public __gc class CashSettlAgentAcctNum : public StringField
  {
  public:
  static const int FIELD = 184;
  CashSettlAgentAcctNum() : StringField(184) {}
    CashSettlAgentAcctNum(String* data) : StringField(184, data) {}
  };

  public __gc class CashSettlAgentAcctName : public StringField
  {
  public:
  static const int FIELD = 185;
  CashSettlAgentAcctName() : StringField(185) {}
    CashSettlAgentAcctName(String* data) : StringField(185, data) {}
  };

  public __gc class CashSettlAgentContactName : public StringField
  {
  public:
  static const int FIELD = 186;
  CashSettlAgentContactName() : StringField(186) {}
    CashSettlAgentContactName(String* data) : StringField(186, data) {}
  };

  public __gc class CashSettlAgentContactPhone : public StringField
  {
  public:
  static const int FIELD = 187;
  CashSettlAgentContactPhone() : StringField(187) {}
    CashSettlAgentContactPhone(String* data) : StringField(187, data) {}
  };

  public __gc class FutSettDate2 : public StringField
  {
  public:
  static const int FIELD = 193;
  FutSettDate2() : StringField(193) {}
    FutSettDate2(String* data) : StringField(193, data) {}
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

  public __gc class CustomerOrFirm : public IntField
  {
  public:
  static const int FIELD = 204;
  static const int CUSTOMER = 0;
  static const int FIRM = 1;
  CustomerOrFirm() : IntField(204) {}
    CustomerOrFirm(int data) : IntField(204, data) {}
  };

  public __gc class MaturityDay : public StringField
  {
  public:
  static const int FIELD = 205;
  MaturityDay() : StringField(205) {}
    MaturityDay(String* data) : StringField(205, data) {}
  };

  public __gc class PegDifference : public DoubleField
  {
  public:
  static const int FIELD = 211;
  PegDifference() : DoubleField(211) {}
    PegDifference(double data) : DoubleField(211, data) {}
  };

  public __gc class SpreadToBenchmark : public IntField
  {
  public:
  static const int FIELD = 218;
  SpreadToBenchmark() : IntField(218) {}
    SpreadToBenchmark(int data) : IntField(218, data) {}
  };

  public __gc class Benchmark : public CharField
  {
  public:
  static const int FIELD = 219;
  static const __wchar_t CURVE = '1';
  static const __wchar_t FIVEYR = '2';
  static const __wchar_t OLD5 = '3';
  static const __wchar_t TENYR = '4';
  static const __wchar_t OLD10 = '5';
  static const __wchar_t THIRTYYR = '6';
  static const __wchar_t OLD30 = '7';
  static const __wchar_t THREEMOLIBOR = '8';
  static const __wchar_t SIXMOLIBOR = '9';
  Benchmark() : CharField(219) {}
    Benchmark(__wchar_t data) : CharField(219, data) {}
  };

  public __gc class UnderlyingIDSource : public IntField
  {
  public:
  static const int FIELD = 305;
  UnderlyingIDSource() : IntField(305) {}
    UnderlyingIDSource(int data) : IntField(305, data) {}
  };

  public __gc class OpenCloseSettleFlag : public StringField
  {
  public:
  static const int FIELD = 286;
  static const __wchar_t DAILY_OPEN = '0';
  static const __wchar_t SESSION_OPEN = '1';
  static const __wchar_t DELIVERY_SETTLEMENT_PRICE = '2';
  static const __wchar_t EXPECTED_PRICE = '3';
  static const __wchar_t PRICE_FROM_PREVIOUS_BUSINESS_DAY = '4';
  OpenCloseSettleFlag() : StringField(286) {}
    OpenCloseSettleFlag(String* data) : StringField(286, data) {}
  };

  public __gc class QuoteAckStatus : public IntField
  {
  public:
  static const int FIELD = 297;
  QuoteAckStatus() : IntField(297) {}
    QuoteAckStatus(int data) : IntField(297, data) {}
  };

  public __gc class TotQuoteEntries : public IntField
  {
  public:
  static const int FIELD = 304;
  TotQuoteEntries() : IntField(304) {}
    TotQuoteEntries(int data) : IntField(304, data) {}
  };

  public __gc class UnderlyingMaturityDay : public StringField
  {
  public:
  static const int FIELD = 314;
  UnderlyingMaturityDay() : StringField(314) {}
    UnderlyingMaturityDay(String* data) : StringField(314, data) {}
  };

  public __gc class UnderlyingPutOrCall : public IntField
  {
  public:
  static const int FIELD = 315;
  UnderlyingPutOrCall() : IntField(315) {}
    UnderlyingPutOrCall(int data) : IntField(315, data) {}
  };

  public __gc class RatioQty : public DoubleField
  {
  public:
  static const int FIELD = 319;
  RatioQty() : DoubleField(319) {}
    RatioQty(double data) : DoubleField(319, data) {}
  };

  public __gc class OnBehalfOfSendingTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 370;
  OnBehalfOfSendingTime() : UtcTimeStampField(370) {}
    OnBehalfOfSendingTime(DateTime data) : UtcTimeStampField(370, data) {}
  };

  public __gc class DiscretionOffset : public DoubleField
  {
  public:
  static const int FIELD = 389;
  DiscretionOffset() : DoubleField(389) {}
    DiscretionOffset(double data) : DoubleField(389, data) {}
  };

  public __gc class TotalNumSecurities : public IntField
  {
  public:
  static const int FIELD = 393;
  TotalNumSecurities() : IntField(393) {}
    TotalNumSecurities(int data) : IntField(393, data) {}
  };

  public __gc class TradeType : public CharField
  {
  public:
  static const int FIELD = 418;
  TradeType() : CharField(418) {}
    TradeType(__wchar_t data) : CharField(418, data) {}
  };

  public __gc class ClearingFirm : public StringField
  {
  public:
  static const int FIELD = 439;
  ClearingFirm() : StringField(439) {}
    ClearingFirm(String* data) : StringField(439, data) {}
  };

  public __gc class ClearingAccount : public StringField
  {
  public:
  static const int FIELD = 440;
  ClearingAccount() : StringField(440) {}
    ClearingAccount(String* data) : StringField(440, data) {}
  };

  public __gc class TotalVolumeTradedDate : public UtcDateField
  {
  public:
  static const int FIELD = 449;
  TotalVolumeTradedDate() : UtcDateField(449) {}
    TotalVolumeTradedDate(DateTime data) : UtcDateField(449, data) {}
  };

  public __gc class TotalVolumeTradedTime : public UtcTimeOnlyField
  {
  public:
  static const int FIELD = 450;
  TotalVolumeTradedTime() : UtcTimeOnlyField(450) {}
    TotalVolumeTradedTime(DateTime data) : UtcTimeOnlyField(450, data) {}
  };

  public __gc class CardIssNo : public StringField
  {
  public:
  static const int FIELD = 491;
  CardIssNo() : StringField(491) {}
    CardIssNo(String* data) : StringField(491, data) {}
  };

  public __gc class RegistDetls : public StringField
  {
  public:
  static const int FIELD = 509;
  RegistDetls() : StringField(509) {}
    RegistDetls(String* data) : StringField(509, data) {}
  };

  public __gc class TotalNumSecurityTypes : public IntField
  {
  public:
  static const int FIELD = 557;
  TotalNumSecurityTypes() : IntField(557) {}
    TotalNumSecurityTypes(int data) : IntField(557, data) {}
  };

  public __gc class LegSettlmntTyp : public CharField
  {
  public:
  static const int FIELD = 587;
  LegSettlmntTyp() : CharField(587) {}
    LegSettlmntTyp(__wchar_t data) : CharField(587, data) {}
  };

  public __gc class LegFutSettDate : public StringField
  {
  public:
  static const int FIELD = 588;
  LegFutSettDate() : StringField(588) {}
    LegFutSettDate(String* data) : StringField(588, data) {}
  };
}
