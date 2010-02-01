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

  public __gc class OpenClose : public CharField
  {
  public:
  static const int FIELD = 77;
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';
  OpenClose() : CharField(77) {}
    OpenClose(char data) : CharField(77, data) {}
  };

  public __gc class AllocShares : public DoubleField
  {
  public:
  static const int FIELD = 80;
  AllocShares() : DoubleField(80) {}
    AllocShares(double data) : DoubleField(80, data) {}
  };

  public __gc class FutSettDate2 : public StringField
  {
  public:
  static const int FIELD = 193;
  FutSettDate2() : StringField(193) {}
    FutSettDate2(String* data) : StringField(193, data) {}
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

  public __gc class LinesOfText : public IntField
  {
  public:
  static const int FIELD = 33;
  LinesOfText() : IntField(33) {}
    LinesOfText(int data) : IntField(33, data) {}    
  };
}
