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
package quickfix.fix<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>;

import quickfix.*;
import quickfix.field.*;

public class MessageCracker <xsl:call-template name="base-class"/>
{
public void onMessage( quickfix.Message message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
  { throw new UnsupportedMessageType(); }
<xsl:call-template name="virtual-functions"/>
<xsl:call-template name="switch-statement"/>
  };


</xsl:template>

<xsl:template name="virtual-functions">
 <xsl:for-each select="//fix/messages/message"> public void onMessage( <xsl:value-of select="@name"/> message, SessionID sessionID ) throws FieldNotFound, UnsupportedMessageType, IncorrectTagValue
 <xsl:if test="@msgcat='app' and @name!='BusinessMessageReject'">   { throw new UnsupportedMessageType(); }
 </xsl:if>
 <xsl:if test="@msgcat='app' and @name='BusinessMessageReject'">   {}
 </xsl:if>
 <xsl:if test="@msgcat='admin'">   {}
 </xsl:if>
</xsl:for-each>
</xsl:template>

<xsl:template name="switch-statement">
  public void crack( quickfix.Message message, SessionID sessionID )
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  { crack<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>((Message)message, sessionID); }

  public void crack<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>( Message message, SessionID sessionID ) 
    throws UnsupportedMessageType, FieldNotFound, IncorrectTagValue
  {
    MsgType msgType = new MsgType();
    message.getHeader().getField(msgType);
    String msgTypeValue = msgType.getValue();

    <xsl:for-each select="//fix/messages/message">
    <xsl:if test="position()!=1">
    else
    </xsl:if>if( msgTypeValue.equals("<xsl:value-of select="@msgtype"/>") )
      onMessage( (<xsl:value-of select="@name"/>)message, sessionID );</xsl:for-each>
    else onMessage( message, sessionID );
  }
</xsl:template>

<xsl:template name="base-class">
 <xsl:if test="//fix/@major='4'">
   <xsl:if test="//fix/@minor='1'">extends quickfix.fix40.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='2'">extends quickfix.fix41.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='3'">extends quickfix.fix42.MessageCracker</xsl:if>
   <xsl:if test="//fix/@minor='4'">extends quickfix.fix43.MessageCracker</xsl:if>
 </xsl:if>
</xsl:template>

</xsl:stylesheet>
