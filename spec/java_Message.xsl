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

import quickfix.FieldNotFound;
import quickfix.field.*;

public class Message extends quickfix.Message
{
  public Message() {
    super();
    header = new Header();
    trailer = new Trailer();
    getHeader().setField(new BeginString("FIX.<xsl:value-of select="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"));
  }
  
  public class Header extends quickfix.Message.Header {
<xsl:call-template name="if-statement"/>
  }
}

</xsl:template>

<xsl:template name="if-statement">
<xsl:for-each select="//fix/header/field">
    public void set(<xsl:value-of select="@name"/> value) { 
      super.setField(value);
    }
    <xsl:value-of select="@name"/> get(<xsl:value-of select="@name"/> value) throws FieldNotFound{
      super.getField(value);
      return value;
    }
 </xsl:for-each>
</xsl:template>

</xsl:stylesheet>

