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
echo package org.quickfix.field; &gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import org.quickfix.<xsl:call-template name="get-field-type"/>Field; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import java.util.Date; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo public class <xsl:value-of select="@name"/> extends <xsl:call-template name="get-field-type"/>Field &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
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
     <xsl:when test="@type='BOOLEAN'">boolean</xsl:when>
     <xsl:when test="@type='FLOAT'">double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">double</xsl:when>
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
     <xsl:when test="@type='UTCDATE'">UtcDate</xsl:when>
     <xsl:when test="@type='BOOLEAN'">Boolean</xsl:when>
     <xsl:when test="@type='FLOAT'">Double</xsl:when>
     <xsl:when test="@type='PRICEOFFSET'">Double</xsl:when>
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
</xsl:template>

<xsl:template name="path">..\src\java\src\org\quickfix\field</xsl:template>

<xsl:template name="version">fix<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/></xsl:template>

</xsl:stylesheet>
