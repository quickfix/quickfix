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

#ifndef DEPRECATED_FIELD_NUMBERS_H
#define DEPRECATED_FIELD_NUMBERS_H

namespace FIX
{
  namespace FIELD
  {
    enum DeprecatedField
    {
      IDSource = 22,
      IOIOthSvc = 24,
      IOIShares = 27,
      LastShares = 32,
      LinesOfText = 33,
      RelatdSym = 46,
      Rule80A = 47,
      Shares = 53,
      SettlmntTyp = 63,
      FutSettDate = 64,
      AvgPrxPrecision = 74,
      OpenClose = 77,
      AllocShares = 80,
      FutSettDate2 = 193,
      PegDifference = 211,
      SpreadToBenchmark = 218,
      OpenCloseSettleFlag = 286,
      QuoteAckStatus = 297,
      TotQuoteEntries = 304,
      UnderlyingIDSource = 305,
      DiscretionOffset = 389,
      TotalNumSecurities = 393,
      TradeType = 418,
      CardIssNo = 491,
      RegistDetls = 509,
      TotalNumSecurityTypes = 557,
      LegSettlmntTyp = 587,
      LegFutSettDate = 588
    };
  }
}

#endif
