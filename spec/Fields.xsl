<!--
*****************************************************************************
  Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.

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
 <xsl:output  method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#ifndef FIX_FIELDS_H
#define FIX_FIELDS_H

#include "DeprecatedFields.h"
#include "Field.h"

#undef Yield

namespace FIX
{
  <xsl:apply-templates/>
}
#endif //FIX_FIELDS_H&#013;
</xsl:template>

<xsl:template match="fields/field[@name='CheckSum']">
 DEFINE_CHECKSUM(CheckSum);</xsl:template>

<xsl:template match="fields/field[@name!='CheckSum']">
 DEFINE_<xsl:value-of select="@type"/>(<xsl:value-of select="@name"/>);<xsl:if test="@name='TotNoOrders'">
 DEFINE_<xsl:value-of select="@type"/>(ListNoOrds);</xsl:if></xsl:template>
    
</xsl:stylesheet>

