/* -*- C++ -*- */
/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifndef FIX_DEPRECATED_VALUES_H
#define FIX_DEPRECATED_VALUES_H

#include <string>

namespace FIX
{
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
