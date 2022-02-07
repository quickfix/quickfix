/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2014
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

#ifndef FIX_FIELDNUMBERS_BASE_H
#define FIX_FIELDNUMBERS_BASE_H

#include <iostream>
#include "FixFieldNumbers.h"

namespace FIX
{
  namespace FIELD
  {
    const int FIX40_LastField = PrevClosePx;
    const int FIX41_LastField = PegDifference;
    const int FIX42_LastField = EncodedListStatusText;
    const int FIX43_LastField = SideComplianceID;
    const int FIX44_LastField = LegInterestAccrualDate;
    const int FIX50_LastField = ExchangeSpecialInstructions;
    const int NormalMin = 1;
    const int NormalMax = 4999;
    const int UserMin = 5000;
    const int UserMax = 9999;
    const int InternalMin = 10000;
  }
}

#endif //FIX_FIELDNUMBERS_BASE_H
