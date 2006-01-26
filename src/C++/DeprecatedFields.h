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

#ifndef DEPRECATED_FIELDS_H
#define DEPRECATED_FIELDS_H

#include "Field.h"
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  DEFINE_CHAR(ExecTransType);
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
  DEFINE_STRING(BrokerOfCredit);
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
