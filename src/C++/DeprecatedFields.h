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

#ifndef DEPRECATED_FIELDS_H
#define DEPRECATED_FIELDS_H

#include "Field.h"
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  DEFINE_STRING(IDSource);
  DEFINE_CHAR(IOIOthSvc);
  DEFINE_STRING(IOIShares);
  DEFINE_QTY(LastShares);
  DEFINE_STRING(RelatdSym);
  DEFINE_CHAR(Rule80A);
  DEFINE_QTY(Shares);
  DEFINE_CHAR(SettlmntTyp);
  DEFINE_LOCALMKTDATE(FutSettDate);
  DEFINE_INT(AvgPrxPrecision);
  DEFINE_STRING(ExecBroker);
  DEFINE_CHAR(OpenClose);
  DEFINE_INT(AllocShares);
  DEFINE_CHAR(DlvyInst);
  DEFINE_CHAR(BrokerOfCredit);
  DEFINE_STRING(ClientID);
  DEFINE_CHAR(CxlType);
  DEFINE_STRING(SettlLocation);
  DEFINE_STRING(SettlDepositoryCode);
  DEFINE_STRING(SettlBrkrCode);
  DEFINE_STRING(SettlInstCode);
  DEFINE_STRING(SecuritySettlAgentName);
  DEFINE_STRING(SecuritySettlAgentCode);
  DEFINE_STRING(SecuritySettlAgentAcctNum);
  DEFINE_STRING(SecuritySettlAgentAcctName);
  DEFINE_STRING(SecuritySettlAgentContactName);
  DEFINE_STRING(SecuritySettlAgentContactPhone);
  DEFINE_STRING(CashSettlAgentName);
  DEFINE_STRING(CashSettlAgentCode);
  DEFINE_STRING(CashSettlAgentAcctNum);
  DEFINE_STRING(CashSettlAgentAcctName);
  DEFINE_STRING(CashSettlAgentContactName);
  DEFINE_STRING(CashSettlAgentContactPhone);
  DEFINE_LOCALMKTDATE(FutSettDate2);
  DEFINE_INT(PutOrCall);
  DEFINE_INT(CustomerOrFirm);
  DEFINE_DAYOFMONTH(MaturityDay);
  DEFINE_PRICEOFFSET(PegDifference);
  DEFINE_PRICEOFFSET(SpreadToBenchmark);
  DEFINE_CHAR(Benchmark);
  DEFINE_STRING(OpenCloseSettleFlag);
  DEFINE_STRING(UnderlyingIDSource);
  DEFINE_INT(QuoteAckStatus);
  DEFINE_INT(TotQuoteEntries);
  DEFINE_DAYOFMONTH(UnderlyingMaturityDay);
  DEFINE_INT(UnderlyingPutOrCall);
  DEFINE_QTY(RatioQty);
  DEFINE_UTCTIMESTAMP(OnBehalfOfSendingTime);
  DEFINE_PRICEOFFSET(DiscretionOffset);
  DEFINE_INT(TotalNumSecurities);
  DEFINE_CHAR(TradeType);
  DEFINE_STRING(ClearingFirm);
  DEFINE_STRING(ClearingAccount);
  DEFINE_UTCDATE(TotalVolumeTradedDate);
  DEFINE_UTCTIMEONLY(TotalVolumeTradedTime);
  DEFINE_STRING(CardIssNo);
  DEFINE_STRING(RegistDetls);
  DEFINE_INT(TotalNumSecurityTypes);
  DEFINE_CHAR(LegSettlmntTyp);
  DEFINE_STRING(LegFutSettDate);
}

#endif
