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
      ExecTransType = 20,
      IDSource = 22,
      IOIOthSvc = 24,
      IOIShares = 27,
      LastShares = 32,
      RelatdSym = 46,
      Rule80A = 47,
      Shares = 53,
      SettlmntTyp = 63,
      FutSettDate = 64,
      AvgPrxPrecision = 74,
      ExecBroker = 76,
      OpenClose = 77,
      AllocShares = 80,
      DlvyInst = 86,
      BrokerOfCredit = 92,
      ClientID = 109,
      CxlType = 125,
      SettlLocation = 166,
      SettlDepositoryCode = 173,
      SettlBrkrCode = 174,
      SettlInstCode = 175,
      SecuritySettlAgentName = 176,
      SecuritySettlAgentCode = 177,
      SecuritySettlAgentAcctNum = 178,
      SecuritySettlAgentAcctName = 179,
      SecuritySettlAgentContactName = 180,
      SecuritySettlAgentContactPhone = 181,
      CashSettlAgentName = 182,
      CashSettlAgentCode = 183,
      CashSettlAgentAcctNum = 184,
      CashSettlAgentAcctName = 185,
      CashSettlAgentContactName = 186,
      CashSettlAgentContactPhone = 187,
      FutSettDate2 = 193,
      PutOrCall = 201,
      CustomerOrFirm = 204,
      MaturityDay = 205,
      PegDifference = 211,
      SpreadToBenchmark = 218,
      Benchmark = 219,
      OpenCloseSettleFlag = 286,
      QuoteAckStatus = 297,
      TotQuoteEntries = 304,
      UnderlyingIDSource = 305,
      UnderlyingMaturityDay = 314,
      UnderlyingPutOrCall = 315,
      RatioQty = 319,
      OnBehalfOfSendingTime = 370,
      DiscretionOffset = 389,
      TotalNumSecurities = 393,
      TradeType = 418,
      ClearingFirm = 439,
      ClearingAccount = 440,
      TotalVolumeTradedDate = 449,
      TotalVolumeTradedTime = 450,
      CardIssNo = 491,
      RegistDetls = 509,
      TotalNumSecurityTypes = 557,
      LegSettlmntTyp = 587,
      LegFutSettDate = 588
    };
  }
}

#endif
