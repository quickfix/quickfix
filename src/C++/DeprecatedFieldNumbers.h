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
