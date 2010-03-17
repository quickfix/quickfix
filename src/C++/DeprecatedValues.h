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

#ifndef FIX_DEPRECATED_VALUES_H
#define FIX_DEPRECATED_VALUES_H

namespace FIX
{

  const char IDSource_CUSIP[] = "1";
  const char IDSource_SEDOL[] = "2";
  const char IDSource_QUIK[] = "3";
  const char IDSource_ISIN_NUMBER[] = "4";
  const char IDSource_RIC_CODE[] = "5";
  const char IDSource_ISO_CURRENCY_CODE[] = "6";
  const char IDSource_ISO_COUNTRY_CODE[] = "7";
  const char IDSource_EXCHANGE_SYMBOL[] = "8";
  const char IDSource_CONSOLIDATED_TAPE_ASSOCIATION[] = "9";
  const char IOIShares_SMALL[] = "S";
  const char IOIShares_MEDIUM[] = "M";
  const char IOIShares_LARGE[] = "L";
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
  const char ExecType_PARTIAL_FILL = '1';
  const char ExecType_FILL = '2';
  const char OpenCloseSettleFlag_DAILY_OPEN = '0';
  const char OpenCloseSettleFlag_SESSION_OPEN = '1';
  const char OpenCloseSettleFlag_DELIVERY_SETTLEMENT_PRICE = '2';
  const char OpenCloseSettleFlag_EXPECTED_PRICE = '3';
  const char OpenCloseSettleFlag_PRICE_FROM_PREVIOUS_BUSINESS_DAY = '4';
}

#endif
