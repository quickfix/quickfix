/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#ifndef FIX_DEPRECATED_VALUES_H
#define FIX_DEPRECATED_VALUES_H

#include <string>

namespace FIX
{
  const char ExecTransType_NEW = '0';
  const char ExecTransType_CANCEL = '1';
  const char ExecTransType_CORRECT = '2';
  const char ExecTransType_STATUS = '3';
  const std::string IDSource_CUSIP = "1";
  const std::string IDSource_SEDOL = "2";
  const std::string IDSource_QUIK = "3";
  const std::string IDSource_ISIN_NUMBER = "4";
  const std::string IDSource_RIC_CODE = "5";
  const std::string IDSource_ISO_CURRENCY_CODE = "6";
  const std::string IDSource_ISO_COUNTRY_CODE = "7";
  const std::string IDSource_EXCHANGE_SYMBOL = "8";
  const std::string IDSource_CONSOLIDATED_TAPE_ASSOCIATION = "9";
  const std::string IOIShares_SMALL = "S";
  const std::string IOIShares_MEDIUM = "M";
  const std::string IOIShares_LARGE = "L";
  const char Rule80A_AGENCY_SINGLE_ORDER = 'A';
  const char Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE = 'B';
  const char Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM = 'C';
  const char Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM = 'D';
  const char Rule80A_SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = 'E';
  const char Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE = 'F';
  const char Rule80A_SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE = 'H';
  const char Rule80A_INDIVIDUAL_INVESTOR = 'I';
  const char Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
  const char Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
  const char Rule80A_SHORT_EXEMPT_AFFILIATED = 'L';
  const char Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
  const char Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = 'N';
  const char Rule80A_PROPRIETARY_AFFILIATED = 'O';
  const char Rule80A_PRINCIPAL = 'P';
  const char Rule80A_TRANSACTIONS_NON_MEMBER = 'R';
  const char Rule80A_SPECIALIST_TRADES = 'S';
  const char Rule80A_TRANSACTIONS_UNAFFILIATED_MEMBER = 'T';
  const char Rule80A_PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
  const char Rule80A_ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
  const char Rule80A_SHORT_EXEMPT_NOT_AFFILIATED = 'X';
  const char Rule80A_PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = 'Y';
  const char Rule80A_SHORT_EXEMPT_NONMEMBER = 'Z';
  const char SettlmntTyp_REGULAR = '0';
  const char SettlmntTyp_CASH = '1';
  const char SettlmntTyp_NEXT_DAY = '2';
  const char SettlmntTyp_T_PLUS_2 = '3';
  const char SettlmntTyp_T_PLUS_3 = '4';
  const char SettlmntTyp_T_PLUS_4 = '5';
  const char SettlmntTyp_FUTURE = '6';
  const char SettlmntTyp_WHEN_AND_IF_ISSUED = '7';
  const char SettlmntTyp_SELLERS_OPTION = '8';
  const char SettlmntTyp_T_PLUS_5 = '9';
  const char SettlmntTyp_T_PLUS_1 = 'A';
  const char OpenClose_OPEN = 'O';
  const char OpenClose_CLOSE = 'C';
  const char CxlType_PARTIAL_CANCEL = 'P';
  const char CxlType_FULL_REMAINING_QUANTITY = 'F';
  const std::string SettlLocation_CEDEL = "CED";
  const std::string SettlLocation_DEPOSITORY_TRUST_COMPANY = "DTC";
  const std::string SettlLocation_EUROCLEAR = "EUR";
  const std::string SettlLocation_FEDERAL_BOOK_ENTRY = "FED";
  const std::string SettlLocation_PHYSICAL = "PED";
  const std::string SettlLocation_PARTICIPANT_TRUST_COMPANY_ISO_COUNTRY = "PTC";
  const int PutOrCall_PUT = 0;
  const int PutOrCall_CALL = 1;
  const int CustomerOrFirm_CUSTOMER = 0;
  const int CustomerOrFirm_FIRM = 1;
  const char Benchmark_CURVE = '1';
  const char Benchmark_FIVEYR = '2';
  const char Benchmark_OLD5 = '3';
  const char Benchmark_TENYR = '4';
  const char Benchmark_OLD10 = '5';
  const char Benchmark_THIRTYYR = '6';
  const char Benchmark_OLD30 = '7';
  const char Benchmark_THREEMOLIBOR = '8';
  const char Benchmark_SIXMOLIBOR = '9';
  const char OpenCloseSettleFlag_DAILY_OPEN = '0';
  const char OpenCloseSettleFlag_SESSION_OPEN = '1';
  const char OpenCloseSettleFlag_DELIVERY_SETTLEMENT_PRICE = '2';
  const char OpenCloseSettleFlag_EXPECTED_PRICE = '3';
  const char OpenCloseSettleFlag_PRICE_FROM_PREVIOUS_BUSINESS_DAY = '4';
}

#endif
