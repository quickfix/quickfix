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

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#pragma once

#undef Yield
#undef DUPLICATE
#undef STRICT
#include "Field.h"
#include "DeprecatedFields.h"

namespace QuickFix
{
  <xsl:apply-templates/>
}

 </xsl:template>

 <xsl:template match="fix/fields/field">
  public __gc class <xsl:value-of select="@name"/> : public <xsl:call-template name="get-field-type"/>Field
  {
  public:
  <xsl:call-template name="values"/>
  
    <xsl:variable name="fieldType"><xsl:call-template name="get-field-type"/></xsl:variable>

    <xsl:value-of select="@name"/>() : <xsl:call-template name="get-field-type"/>Field(<xsl:value-of select="@number"/>) {}
    <xsl:value-of select="@name"/>(<xsl:call-template name="get-type"/> data) : <xsl:call-template name="get-field-type"/>Field(<xsl:value-of select="@number"/>, data) {}
    <xsl:if test="@type='UTCTIMESTAMP' or @type='UTCTIMEONLY'">
    <xsl:value-of select="@name"/>(<xsl:call-template name="get-type"/> data, bool showMilliseconds) : <xsl:call-template name="get-field-type"/>Field(<xsl:value-of select="@number"/>, data, showMilliseconds) {}
    </xsl:if>
  };
  <xsl:if test="@name='TotNoOrders'">
  public __gc class ListNoOrds : public IntField
  {
  public:
    ListNoOrds() : IntField(68) {}
    ListNoOrds(int data) : IntField(68, data) {}
  };
  </xsl:if>
 </xsl:template>

<xsl:template name="get-type">
 <xsl:variable name="name" select="@name"/>
   <xsl:choose>
     <xsl:when test="@type='STRING'">String*</xsl:when>
     <xsl:when test="@type='CHAR'">__wchar_t</xsl:when>
     <xsl:when test="@type='PRICE'">double</xsl:when>
     <xsl:when test="@type='INT'">int</xsl:when>
     <xsl:when test="@type='AMT'">double</xsl:when>
     <xsl:when test="@type='QTY'">double</xsl:when>
     <xsl:when test="@type='CURRENCY'">String*</xsl:when>
     <xsl:when test="@type='MULTIPLEVALUESTRING'">String*</xsl:when>
     <xsl:when test="@type='EXCHANGE'">String*</xsl:when>
     <xsl:when test="@type='UTCTIMESTAMP'">DateTime</xsl:when>
     <xsl:when test="@type='BOOLEAN'">bool</xsl:when>
     <xsl:when test="@type='LOCALMKTDATE'">String*</xsl:when>
     <xsl:when test="@type='DATA'">String*</xsl:when>
     <xsl:when test="@type='FLOAT'">double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">double</xsl:when>
     <xsl:when test="@type='MONTHYEAR'">String*</xsl:when>
     <xsl:when test="@type='DAYOFMONTH'">String*</xsl:when>
     <xsl:when test="@type='UTCDATE'">DateTime</xsl:when>
     <xsl:when test="@type='UTCDATEONLY'">DateTime</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">DateTime</xsl:when>
     <xsl:when test="@type='NUMINGROUP'">int</xsl:when>
     <xsl:when test="@type='PERCENTAGE'">double</xsl:when>
     <xsl:when test="@type='SEQNUM'">int</xsl:when>
     <xsl:when test="@type='LENGTH'">int</xsl:when>
     <xsl:when test="@type='COUNTRY'">String*</xsl:when>
     <xsl:otherwise>String*</xsl:otherwise>
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
     <xsl:when test="@type='MULTIPLEVALUESTRING'">String</xsl:when>
     <xsl:when test="@type='EXCHANGE'">String</xsl:when>
     <xsl:when test="@type='UTCTIMESTAMP'">UtcTimeStamp</xsl:when>
     <xsl:when test="@type='BOOLEAN'">Boolean</xsl:when>
     <xsl:when test="@type='LOCALMKTDATE'">String</xsl:when>
     <xsl:when test="@type='DATA'">String</xsl:when>
     <xsl:when test="@type='FLOAT'">Double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">Double</xsl:when>
     <xsl:when test="@type='MONTHYEAR'">String</xsl:when>
     <xsl:when test="@type='DAYOFMONTH'">String</xsl:when>
     <xsl:when test="@type='UTCDATE'">UtcDateOnly</xsl:when>
     <xsl:when test="@type='UTCDATEONLY'">UtcDateOnly</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">UtcTimeOnly</xsl:when>
     <xsl:when test="@type='NUMINGROUP'">Int</xsl:when>
     <xsl:when test="@type='PERCENTAGE'">Double</xsl:when>
     <xsl:when test="@type='SEQNUM'">Int</xsl:when>
     <xsl:when test="@type='LENGTH'">Int</xsl:when>
     <xsl:when test="@type='COUNTRY'">String</xsl:when>
     <xsl:otherwise>String</xsl:otherwise>
   </xsl:choose>
</xsl:template>

<xsl:template name="values">
<xsl:for-each select="value">
<xsl:choose>
  <xsl:when test="../@type='STRING'">static const String* <xsl:value-of select="@description"/> = "<xsl:value-of select="@enum"/>";
  </xsl:when>
  <xsl:when test="../@type='INT'">static const int <xsl:value-of select="@description"/> = <xsl:value-of select="@enum"/>;
  </xsl:when>
  <xsl:otherwise>static const __wchar_t <xsl:value-of select="@description"/> = '<xsl:value-of select="@enum"/>';
  </xsl:otherwise>
</xsl:choose>
</xsl:for-each>

<xsl:if test="@name='SecurityType'">
<xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='OPTION'])"> 
  static const String* OPTION = "OPT";</xsl:if>
<xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='FUTURE'])"> 
  static const String* FUTURE = "FUT";
  </xsl:if>
  </xsl:if>

</xsl:template>
    
</xsl:stylesheet>

