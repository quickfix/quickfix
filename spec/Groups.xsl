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
 <xsl:output  method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#ifndef FIX_GROUPS
#define FIX_GROUPS

#include "Message.h"

namespace FIX
{
   <xsl:apply-templates/>
}
#endif // FIX_GROUPS
 </xsl:template>

 <xsl:template name="follow-groups1">
   <xsl:for-each select="group">
   <xsl:value-of select="../@name"/>_<xsl:value-of select="@name"/>
   {}
   <xsl:call-template name="follow-groups2"/>
   </xsl:for-each>
 </xsl:template>

 <xsl:template name="follow-groups2">
   <xsl:for-each select="group">
   <xsl:value-of select="../../@name"/>_<xsl:value-of select="@name"/>
   {}
   <xsl:call-template name="follow-groups3"/>
   </xsl:for-each>
 </xsl:template>

 <xsl:template name="follow-groups3">
   <xsl:for-each select="group">
   <xsl:value-of select="../../../@name"/>_<xsl:value-of select="@name"/>
   {}
   </xsl:for-each>
 </xsl:template>

 <xsl:template match="messages/message">
   <xsl:call-template name="follow-groups1"/>
 </xsl:template>

</xsl:stylesheet>
