<!--
*****************************************************************************
  Copyright (c) 2001-2014

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

 <xsl:variable name="lowercase" select="'abcdefghijklmnopqrstuvwxyz'" />
 <xsl:variable name="uppercase" select="'ABCDEfGHIJKLMNOPQRStUVWXYZ'" />
 <xsl:variable name="type" select="//fix/@type"/>
 <xsl:variable name="lowertype" select="translate($type, $uppercase, $lowercase)"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
using System;

<xsl:choose>
<xsl:when test="//fix/@servicepack='0'">
namespace Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>
</xsl:when>
<xsl:otherwise>
namespace Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>Sp<xsl:value-of select="//fix/@servicepack"/>
</xsl:otherwise>
</xsl:choose>
{

  public class MessageFactory : QuickFix.MessageFactory
  {
    public QuickFix.Message create( String beginString, String msgType ) {
    <xsl:call-template name="if-statement"/>
    <xsl:choose>
    <xsl:when test="//fix/@servicepack='0'">
    return new Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>.Message();
    </xsl:when>
    <xsl:otherwise>
    return new Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>Sp<xsl:value-of select="//fix/@servicepack"/>.Message();
    </xsl:otherwise>
    </xsl:choose>
    }
  };
}
  </xsl:template>

  <xsl:template name="if-statement">
   <xsl:for-each select="//fix/messages/message">
     if(msgType.Equals("<xsl:value-of select="@msgtype"/>")) {
      <xsl:choose>
      <xsl:when test="//fix/@servicepack='0'">
      return new Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>.<xsl:value-of select="@name"/>();
      </xsl:when>
      <xsl:otherwise>
      return new Quick<xsl:value-of select="$lowertype"/><xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>Sp<xsl:value-of select="//fix/@servicepack"/>.<xsl:value-of select="@name"/>();
      </xsl:otherwise>
      </xsl:choose>
     }
   </xsl:for-each>
  </xsl:template>
</xsl:stylesheet>
