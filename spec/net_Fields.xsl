<!--
  ====================================================================
  The QuickFIX Software License, Version 1.0
 
  Copyright (c) 2001 ThoughtWorks, Inc.  All rights
  reserved.
 
  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:
 
  1. Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
 
  2. Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
 
  3. The end-user documentation included with the redistribution,
     if any, must include the following acknowledgment:
        "This product includes software developed by
         ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
     Alternately, this acknowledgment may appear in the software itself,
     if and wherever such third-party acknowledgments normally appear.
 
  4. The names "QuickFIX" and "ThoughtWorks, Inc." must
     not be used to endorse or promote products derived from this
     software without prior written permission. For written
     permission, please contact quickfix-users@lists.sourceforge.net.
 
  5. Products derived from this software may not be called "QuickFIX",
     nor may "QuickFIX" appear in their name, without prior written
     permission of ThoughtWorks, Inc.
 
  THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
  WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
  ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
  USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
  OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  SUCH DAMAGE.
  ====================================================================
 -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
 <xsl:output  method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */<xsl:copy-of select
   ="document('../LICENSE.xml')"/>
#pragma once

#undef Yield
#include "Field.h"
#include "DeprecatedFields.h"

namespace Fix
{
  <xsl:apply-templates/>
}

 </xsl:template>

 <xsl:template match="fix/fields/field">
  public __gc class <xsl:value-of select="@name"/> : public <xsl:call-template name="get-field-type"/>Field
  {
  public:
  <xsl:call-template name="values"/>
  
    <xsl:value-of select="@name"/>() : <xsl:call-template name="get-field-type"/>Field(<xsl:value-of select="@number"/>) {}
    <xsl:value-of select="@name"/>(<xsl:call-template name="get-type"/> data) : <xsl:call-template name="get-field-type"/>Field(<xsl:value-of select="@number"/>, data) {}
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
     <xsl:when test="@type='UTCTIMESTAMP'">DateTime</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">DateTime</xsl:when>
     <xsl:when test="@type='UTCDATE'">DateTime</xsl:when>
     <xsl:when test="@type='BOOL'">bool</xsl:when>
     <xsl:when test="@type='FLOAT'">double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">double</xsl:when>
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
     <xsl:when test="@type='UTCTIMESTAMP'">UtcTimeStamp</xsl:when>
     <xsl:when test="@type='UTCTIMEONLY'">UtcTimeOnly</xsl:when>
     <xsl:when test="@type='UTCDATE'">UtcDate</xsl:when>
     <xsl:when test="@type='BOOL'">Bool</xsl:when>
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
</xsl:template>
    
</xsl:stylesheet>

