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
del /q <xsl:call-template name="path"/>\No*.java
del /q <xsl:call-template name="path"/>\LinesOfText.java
del /q <xsl:call-template name="path"/>\.java
echo on
 </xsl:template>

 <xsl:template name="field">
 <xsl:param name = "file" /> 
echo   public void set(org.quickfix.field.<xsl:value-of select="@name"/> value) &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   { setField(value); } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   public org.quickfix.field.<xsl:value-of select="@name"/> get(org.quickfix.field.<xsl:value-of select="@name"/> value) throws FieldNotFound &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   { getField(value); return value; } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   public org.quickfix.field.<xsl:value-of select="@name"/> get<xsl:value-of select="@name"/>() throws FieldNotFound &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   { org.quickfix.field.<xsl:value-of select="@name"/> value = new org.quickfix.field.<xsl:value-of select="@name"/>(); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo     getField(value); return value; } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
 </xsl:template>
 
 <xsl:template match="fix/messages/message">
echo package org.quickfix.<xsl:call-template name="version"/>; &gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import org.quickfix.FieldNotFound; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import org.quickfix.Group; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo import org.quickfix.field.*; &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo public class <xsl:value-of select="@name"/> extends Message &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   public <xsl:value-of select="@name"/>() &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo     getHeader().setField(new MsgType("<xsl:value-of select="@msgtype"/>")); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
echo   } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
<xsl:call-template name="constructor-def"/>
<xsl:apply-templates/>
echo } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="@name"/>.java
 </xsl:template>  
 <xsl:template match="message/field">
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
<xsl:call-template name="field">
  <xsl:with-param name = "file" ><xsl:value-of select="../@name"/></xsl:with-param> 
</xsl:call-template>
REM
 </xsl:template>
<xsl:template match="group">
<xsl:variable name = "file"></xsl:variable>
<xsl:call-template name="group">
  <xsl:with-param name = "file" ><xsl:value-of select="../@name"/></xsl:with-param> 
</xsl:call-template>
 </xsl:template>

<xsl:template name="group-constructor-impl">
  <xsl:param name = "file" />
echo     new int[] { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
<xsl:apply-templates mode="group"><xsl:with-param name = "file" ><xsl:value-of select="../@name"/></xsl:with-param></xsl:apply-templates>
echo                0 } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
</xsl:template>
<xsl:template mode="group" match="group/field">
  <xsl:param name = "file" />
<xsl:variable name="name" select="@name"/>
  echo                <xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
</xsl:template>
<xsl:template mode="group" match="group/component">
  <xsl:param name = "file" />
<xsl:variable name="name" select="@name"/>
<xsl:for-each select="//fix/components/component[@name=$name]">
  <xsl:for-each select="field"><xsl:variable name="field_name" select="@name"/>
    echo              <xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>, &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
  </xsl:for-each>
</xsl:for-each>
</xsl:template>
 
<xsl:template name="group">
   <xsl:param name = "file" /> 
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\ &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo public static class <xsl:value-of select="@name"/> extends Group { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
echo   public <xsl:value-of select="@name"/>() { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
<xsl:variable name="name" select="@name"/>
<xsl:variable name="field_name" select="field/@name"/>
  <xsl:choose>
    <xsl:when test="string-length(field[1]/@name) > 0">
      echo     super(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>, &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
      <xsl:call-template name="group-constructor-impl"><xsl:with-param name="file"><xsl:value-of select="$file"/></xsl:with-param></xsl:call-template>echo ); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
    </xsl:when>
    <xsl:when test="string-length(component[1]/@name) > 0">
      <xsl:variable name="component_name" select="component[1]/@name"/>
      <xsl:variable name="component_field_name" select="//fix/components/component[@name=$component_name]/field[1]/@name"/>
      echo     super(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$component_field_name]/@number"/>, &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
      <xsl:call-template name="group-constructor-impl"><xsl:with-param name="file"><xsl:value-of select="$file"/></xsl:with-param></xsl:call-template>echo ); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
    </xsl:when>
  </xsl:choose>
echo   } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
<xsl:for-each select="field">
<xsl:call-template name="field">
  <xsl:with-param name = "file" ><xsl:value-of select="$file"/></xsl:with-param> 
</xsl:call-template>
type blankline.txt &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
</xsl:for-each>
<xsl:for-each select="group">
  <xsl:call-template name="group">
    <xsl:with-param name = "file" ><xsl:value-of select="$file"/></xsl:with-param> 
  </xsl:call-template>
</xsl:for-each>
<xsl:for-each select="component">
  <xsl:variable name="component_name" select="@name"/>
  <xsl:for-each select="//fix/components/component[@name=$component_name]/field">
  <xsl:call-template name="field">
    <xsl:with-param name = "file" ><xsl:value-of select="$file"/></xsl:with-param>
  </xsl:call-template></xsl:for-each>
  <xsl:for-each select="group"><xsl:call-template name="group"/></xsl:for-each>
</xsl:for-each>
echo } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="$file"/>.java
</xsl:template>

<xsl:template name="constructor-def">
 <xsl:for-each select="field[@required='Y']">
  <xsl:if test="(position()=1)">
echo   public <xsl:value-of select="../@name"/>( &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java</xsl:if>   
    echo     org.quickfix.field.<xsl:value-of select="@name"/> a<xsl:value-of select="@name"/><xsl:if test="(position()!=last())">, &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java</xsl:if>
  <xsl:if test="(position()=last())"> ) &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java<xsl:call-template name="constructor-impl"/>
  </xsl:if>
 </xsl:for-each>
</xsl:template>

<xsl:template name="constructor-impl">
  echo   { &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java 
    echo     getHeader().setField(new MsgType("<xsl:value-of select="../@msgtype"/>")); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
    <xsl:for-each select="../field[@required='Y']">
    echo     set(a<xsl:value-of select="@name"/>); &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java</xsl:for-each> 
  echo   } &gt;&gt; <xsl:call-template name="path"/>\<xsl:value-of select="../@name"/>.java
</xsl:template>

<xsl:template name="path">..\src\java\src\org\quickfix\<xsl:call-template name="version"/></xsl:template>

<xsl:template name="version">fix<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/></xsl:template>

</xsl:stylesheet>
