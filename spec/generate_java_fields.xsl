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
 <xsl:output  method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="fix/header">
 </xsl:template>

 <xsl:template match="fix/trailer">
 </xsl:template>

 <xsl:template match="fix">
echo off
<xsl:apply-templates/>
echo on
 </xsl:template>

 <xsl:template match="fix/fields/field">
echo package quickfix.field; &gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import quickfix.<xsl:call-template name="get-field-type"/>Field; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import java.util.Date; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo public class <xsl:value-of select="@name"/> extends <xsl:call-template name="get-field-type"/>Field &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   public static final int FIELD = <xsl:value-of select="@number"/>; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
<xsl:call-template name="values"/>
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   public <xsl:value-of select="@name"/>() &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo     super(<xsl:value-of select="@number"/>);&gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   public <xsl:value-of select="@name"/>(<xsl:call-template name="get-type"/> data) &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo     super(<xsl:value-of select="@number"/>, data);&gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
 </xsl:template>

<xsl:template name="get-type">
 <xsl:variable name="name" select="@name"/>
   <xsl:choose>
     <xsl:when test="@type='STRING'">String</xsl:when>
     <xsl:when test="@type='CHAR'">char</xsl:when>
     <xsl:when test="@type='PRICE'">double</xsl:when>
     <xsl:when test="@type='INT'">int</xsl:when>
     <xsl:when test="@type='AMT'">double</xsl:when>
     <xsl:when test="@type='QTY'">double</xsl:when>
     <xsl:when test="@type='CURRENCY'">String</xsl:when>
     <xsl:when test="@type='UTCTIMESTAMP'">Date</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">Date</xsl:when>
     <xsl:when test="@type='UTCDATE'">Date</xsl:when>
     <xsl:when test="@type='UTCDATEONLY'">Date</xsl:when>
     <xsl:when test="@type='BOOLEAN'">boolean</xsl:when>
     <xsl:when test="@type='FLOAT'">double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">double</xsl:when>
     <xsl:when test="@type='NUMINGROUP'">int</xsl:when>
     <xsl:when test="@type='PERCENTAGE'">double</xsl:when>
     <xsl:when test="@type='SEQNUM'">int</xsl:when>
     <xsl:when test="@type='LENGTH'">int</xsl:when>
     <xsl:when test="@type='COUNTRY'">String</xsl:when>
     <xsl:otherwise>String</xsl:otherwise>
   </xsl:choose>
</xsl:template>

<xsl:template name="get-field-type">
 <xsl:variable name="name" select="@name"/>
   <xsl:choose>
     <xsl:when test="@type='STRING'">String</xsl:when>
     <xsl:when test="@type='CHAR'">Char</xsl:when>
     <xsl:when test="@type='PRICE'">Double</xsl:when>
     <xsl:when test="@type='INT'">Int</xsl:when>
     <xsl:when test="@type='AMT'">Double</xsl:when>
     <xsl:when test="@type='QTY'">Double</xsl:when>
     <xsl:when test="@type='CURRENCY'">String</xsl:when>
     <xsl:when test="@type='UTCTIMESTAMP'">UtcTimeStamp</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">UtcTimeOnly</xsl:when>
     <xsl:when test="@type='UTCDATE'">UtcDateOnly</xsl:when>
     <xsl:when test="@type='UTCDATEONLY'">UtcDateOnly</xsl:when>
     <xsl:when test="@type='BOOLEAN'">Boolean</xsl:when>
     <xsl:when test="@type='FLOAT'">Double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">Double</xsl:when>
     <xsl:when test="@type='NUMINGROUP'">Int</xsl:when>
     <xsl:when test="@type='PERCENTAGE'">Double</xsl:when>
     <xsl:when test="@type='SEQNUM'">Int</xsl:when>
     <xsl:when test="@type='LENGTH'">Int</xsl:when>
     <xsl:when test="@type='COUNTRY'">String</xsl:when>
     <xsl:otherwise>String</xsl:otherwise>
   </xsl:choose>
</xsl:template>

<xsl:template name="y-or-n-to-bool">
 <xsl:choose>
  <xsl:when test="@enum='Y'">true</xsl:when>
  <xsl:when test="@enum='N'">false</xsl:when>
 </xsl:choose>
</xsl:template>

<xsl:template name="values">
<xsl:for-each select="value">
<xsl:choose>
  <xsl:when test="../@type='STRING'">echo public static final String <xsl:value-of select="@description"/> = "<xsl:value-of select="@enum"/>"; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
  </xsl:when>
  <xsl:when test="../@type='BOOLEAN'">echo public static final boolean <xsl:value-of select="@description"/> = <xsl:call-template name="y-or-n-to-bool" />; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
  </xsl:when>
  <xsl:when test="../@type='INT'">echo public static final int <xsl:value-of select="@description"/> = <xsl:value-of select="@enum"/>; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
  </xsl:when>
  <xsl:otherwise>echo public static final char <xsl:value-of select="@description"/> = '<xsl:value-of select="@enum"/>'; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
  </xsl:otherwise>
</xsl:choose>
</xsl:for-each>

<xsl:if test="@name='SecurityType'">
<xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='OPTION'])"> 
echo public static final String OPTION = "OPT"; &gt;&gt; <xsl:call-template name="path"/>\SecurityType.java</xsl:if>
<xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='FUTURE'])"> 
echo public static final String FUTURE = "FUT"; &gt;&gt; <xsl:call-template name="path"/>\SecurityType.java</xsl:if>
</xsl:if>

</xsl:template>

<xsl:template name="path">..\src\java\src\quickfix\field</xsl:template>

<xsl:template name="version">fix<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/></xsl:template>

</xsl:stylesheet>
