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
      IDSource = 22,
      IOIShares = 27,
      LastShares = 32,
      RelatedSym = 46,
      Rule80A = 47,
      Shares = 53,
      SettlmntTyp = 63,
      FutSettDate = 64,
      ExecBroker = 76,
      OpenClose = 77,
      AllocShares = 80,
      ClientID = 109,
      FutSettDate2 = 193,
      PutOrCall = 201,
      CustomerOrFirm = 204,
      MaturityDay = 205,
      PegDifference = 211,
      SpreadToBenchmark = 218,
      QuoteAckStatus = 297,
      TotQuoteEntries = 304,
      UnderlyingIDSource = 305,
      UnderlyingMaturityDay = 314,
      UnderlyingPutOrCall = 315,
      RatioQty = 319,
      OnBehalfOfSendingTime = 370,
      DiscretionOffset = 389,
      TotalNumSecurities = 393,
      ClearingFirm = 439,
      ClearingAccount = 440
    };
  }
}

#endif
