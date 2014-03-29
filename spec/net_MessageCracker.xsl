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
  public class MessageCracker <xsl:call-template name="base-class"/>
  {
  <xsl:choose>
    <xsl:when test="//fix/@major='4' and //fix/@minor='0'">
    public void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    </xsl:when>
    <xsl:otherwise>
    public new void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    </xsl:otherwise>
  </xsl:choose>
    { throw new QuickFix.UnsupportedMessageType(); }
<xsl:call-template name="virtual-functions"/>
<xsl:call-template name="switch-statement"/>
  };
}

</xsl:template>

<xsl:template name="virtual-functions">
 <xsl:for-each select="//fix/messages/message"> public virtual void onMessage( <xsl:value-of select="@name"/> message, QuickFix.SessionID session ) 
 <xsl:if test="@msgcat='app' and @name!='BusinessMessageReject'">   { throw new QuickFix.UnsupportedMessageType(); }
 </xsl:if>
 <xsl:if test="@msgcat='app' and @name='BusinessMessageReject'">   {}
 </xsl:if>
 <xsl:if test="@msgcat='admin'">   {}
 </xsl:if>
</xsl:for-each>
</xsl:template>

<xsl:template name="switch-statement">
  <xsl:choose>
    <xsl:when test="//fix/@major='4' and //fix/@minor='0'">
    public void crack( QuickFix.Message message, QuickFix.SessionID sessionID )
    </xsl:when>
    <xsl:otherwise>
    public new void crack( QuickFix.Message message, QuickFix.SessionID sessionID )
    </xsl:otherwise>
  </xsl:choose>
  {
    <xsl:for-each select="//fix/messages/message">
    <xsl:if test="position()!=1">
    else
    </xsl:if>if( message is <xsl:value-of select="@name"/> )
      onMessage( (<xsl:value-of select="@name"/>)(message), sessionID );</xsl:for-each>
    else onMessage( message, sessionID );    
  }
</xsl:template>

<xsl:template name="base-class">
  <xsl:if test="//fix/@type='FIX'">
    <xsl:if test="//fix/@major='4'">
      <xsl:if test="//fix/@minor='1'">: QuickFix40.MessageCracker</xsl:if>
      <xsl:if test="//fix/@minor='2'">: QuickFix41.MessageCracker</xsl:if>
      <xsl:if test="//fix/@minor='3'">: QuickFix42.MessageCracker</xsl:if>
      <xsl:if test="//fix/@minor='4'">: QuickFix43.MessageCracker</xsl:if>
    </xsl:if>
    <xsl:if test="//fix/@major='5'">
      <xsl:if test="//fix/@minor='0'">
        <xsl:if test="//fix/@servicepack='0'">: QuickFix44.MessageCracker</xsl:if>
        <xsl:if test="//fix/@servicepack='1'">: QuickFix50.MessageCracker</xsl:if>
        <xsl:if test="//fix/@servicepack='2'">: QuickFix50Sp1.MessageCracker</xsl:if>
      </xsl:if>
    </xsl:if>
  </xsl:if>
  <xsl:if test="//fix/@type='FIXT'">
    <xsl:if test="//fix/@major='1'">
      <xsl:if test="//fix/@minor='1'">: QuickFix50Sp2.MessageCracker</xsl:if>
    </xsl:if>
  </xsl:if>
</xsl:template>

</xsl:stylesheet>
