<!--
*****************************************************************************
  Copyright (c) quickfixengine.org  All rights reserved.

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
#ifndef <xsl:value-of select="//fix/@type"/>_FIELDNUMBERS_H
#define <xsl:value-of select="//fix/@type"/>_FIELDNUMBERS_H

#include &lt;iostream&gt;
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  namespace FIELD
  {
    <xsl:apply-templates/>
  }
}

#endif //<xsl:value-of select="//fix/@type"/>_FIELDNUMBERS_H

</xsl:template>
<xsl:template match="fields/field[position()=1]">
     const int <xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>;
</xsl:template>
<xsl:template match="fields/field[position()!=1]">
     const int <xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>;
</xsl:template>
<xsl:template match="fields/field[@name='TotNoOrders']">
     const int <xsl:value-of select="@name"/> = <xsl:value-of select="@number"/>;
     const int ListNoOrds = <xsl:value-of select="@number"/>;
</xsl:template>
</xsl:stylesheet>
