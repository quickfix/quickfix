<!--
*****************************************************************************
  Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.

  This file is part of the QuickFIX FIX Engine

  This file may be distributed under the terms of the quickfixengine.org
  license as defined by quickfixengine.org and appearing in the file
  LICENSE included in the packaging of this file.

  This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
  WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

  See http://www.quickfixengine.org/LICENSE for licensing information.

  Contact ask@quickfixengine.org if any conditions of this licensing are
  not clear to you.
*****************************************************************************
-->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
 <xsl:output method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#ifndef FIX_FIELDNUMBERS_H
#define FIX_FIELDNUMBERS_H

#include &lt;iostream&gt;
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  namespace FIELD
  {
    enum Field
    {
      <xsl:apply-templates/>
      ,FIX40_LastField = PrevClosePx
      ,FIX41_LastField = PegDifference
      ,FIX42_LastField = EncodedListStatusText
      ,FIX43_LastField = SideComplianceID
      ,FIX44_LastField = LegInterestAccrualDate
    };

    const int NormalMin = 1;
    const int NormalMax = 4999;
    const int UserMin = 5000;
    const int UserMax = 9999;
    const int InternalMin = 10000;
  }

  inline std::istream&amp; operator>> (std::istream&amp; stream, FIELD::Field&amp; field)
  {
    int fieldInteger;
    stream >> fieldInteger;
    field = static_cast&lt;FIELD::Field>(fieldInteger);
    return stream;
  }
}

#endif //FIX_FIELDNUMBERS_H&#013;
</xsl:template>
<xsl:template match="fields/field[position()=1]">
     <xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>
</xsl:template>
<xsl:template match="fields/field[position()!=1]">
     ,<xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>
</xsl:template>
<xsl:template match="fields/field[@name='TotNoOrders']">
     ,<xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>
     ,ListNoOrds = <xsl:value-of select="@number"/>
</xsl:template>
</xsl:stylesheet>
