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
using System;

namespace QuickFix<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>
{
  public class MessageCracker <xsl:call-template name="base-class"/>
  {
  public new void onMessage( QuickFix.Message message, QuickFix.SessionID session )
    { throw new QuickFix.UnsupportedMessageType(); }
<xsl:call-template name="virtual-functions"/>
<xsl:call-template name="switch-statement"/>
  };
}

</xsl:template>

<xsl:template name="virtual-functions">
 <xsl:for-each select="//fix/messages/message"> public virtual void onMessage( <xsl:value-of select="@name"/> message, QuickFix.SessionID session ) 
 <xsl:if test="@name!='BusinessMessageReject'">   { throw new QuickFix.UnsupportedMessageType(); }
 </xsl:if>
 <xsl:if test="@name='BusinessMessageReject'">   {}
 </xsl:if>
</xsl:for-each>
</xsl:template>

<xsl:template name="switch-statement">

  public new void crack( QuickFix.Message message, 
                     QuickFix.SessionID sessionID )
  {
    QuickFix.MsgType msgType = new QuickFix.MsgType();
    message.getHeader().getField(msgType);
    String msgTypeValue = msgType.getValue();

    <xsl:for-each select="//fix/messages/message">
    <xsl:if test="position()!=1">
    else
    </xsl:if>if( msgTypeValue == "<xsl:value-of select="@msgtype"/>" )
      onMessage( (<xsl:value-of select="@name"/>)(message), sessionID );</xsl:for-each>
    else onMessage( message, sessionID );    
  }
</xsl:template>

<xsl:template name="base-class">
 <xsl:if test="//fix/@major='4'">
   <xsl:if test="//fix/@minor='1'">: QuickFix40.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='2'">: QuickFix41.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='3'">: QuickFix42.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='4'">: QuickFix43.MessageCracker</xsl:if>
 </xsl:if>
</xsl:template>

</xsl:stylesheet>
