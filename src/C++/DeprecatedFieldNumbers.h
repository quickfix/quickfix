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
    const int IDSource = 22;
    const int IOIid = 23;
    const int IOIShares = 27;
    const int LastShares = 32;
    const int LinesOfText = 33;
    const int Shares = 53;
    const int SettlmntTyp = 63;
    const int FutSettDate = 64;
    const int AvgPrxPrecision = 74;
    const int OpenClose = 77;
    const int AllocShares = 80;
    const int FutSettDate2 = 193;
    const int PegDifference = 211;
    const int SpreadToBenchmark = 218;
    const int OpenCloseSettleFlag = 286;
    const int QuoteAckStatus = 297;
    const int TotQuoteEntries = 304;
    const int UnderlyingIDSource = 305;
    const int DiscretionOffset = 389;
    const int TotalNumSecurities = 393;
    const int TradeType = 418;
    const int CardIssNo = 491;
    const int RegistDetls = 509;
    const int TotalNumSecurityTypes = 557;
    const int LegSettlmntTyp = 587;
    const int LegFutSettDate = 588;
  }
}

#endif
