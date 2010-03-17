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
  DEFINE_STRING(IDSource);
  DEFINE_STRING(IOIid);
  DEFINE_STRING(IOIShares);
  DEFINE_QTY(LastShares);
  DEFINE_QTY(Shares);
  DEFINE_CHAR(SettlmntTyp);
  DEFINE_LOCALMKTDATE(FutSettDate);
  DEFINE_INT(AvgPrxPrecision);
  DEFINE_CHAR(OpenClose);
  DEFINE_QTY(AllocShares);
  DEFINE_LOCALMKTDATE(FutSettDate2);
  DEFINE_PRICEOFFSET(PegDifference);
  DEFINE_PRICEOFFSET(SpreadToBenchmark);
  DEFINE_STRING(OpenCloseSettleFlag);
  DEFINE_STRING(UnderlyingIDSource);
  DEFINE_INT(QuoteAckStatus);
  DEFINE_INT(TotQuoteEntries);
  DEFINE_PRICEOFFSET(DiscretionOffset);
  DEFINE_INT(TotalNumSecurities);
  DEFINE_CHAR(TradeType);
  DEFINE_STRING(CardIssNo);
  DEFINE_STRING(RegistDetls);
  DEFINE_INT(TotalNumSecurityTypes);
  DEFINE_CHAR(LegSettlmntTyp);
  DEFINE_STRING(LegFutSettDate);
  DEFINE_NUMINGROUP(LinesOfText);
}

#endif
