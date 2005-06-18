<!--
*****************************************************************************
  Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.

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
 <xsl:output method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#pragma once

#include "Message.h"
#include "Group.h"
#include "Fields.h"
#include "DeprecatedFields.h"
<xsl:apply-templates/>
}

 </xsl:template>

 <xsl:template match="fix">
namespace QuickFix<xsl:value-of select="@major"/><xsl:value-of select="@minor"/>
{<xsl:apply-templates/></xsl:template>

 <xsl:template match="header">
  public __gc class Header : public QuickFix::Message::Header
  {
  public:
    Header(QuickFix::Message* message) : QuickFix::Message::Header(message) {}
    <xsl:apply-templates/>
  };</xsl:template>
 
 <xsl:template match="trailer">
  
  public __gc class Trailer : public QuickFix::Message::Trailer
  {
  public:
    Trailer(QuickFix::Message* message) : QuickFix::Message::Trailer(message) {}
    <xsl:apply-templates/>
  };</xsl:template>

 <xsl:template match="messages">
  
  public __gc class Message : public QuickFix::Message
  {
  public: 
    Message() : QuickFix::Message(new QuickFix::BeginString("FIX.<xsl:value-of select
      ="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( QuickFix::MsgType* msgType ) 
    : QuickFix::Message(
      new QuickFix::BeginString("FIX.<xsl:value-of select
      ="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"),msgType ) 
      { 
        m_header = new Header(this); 
        m_trailer = new Trailer(this);
      }

    Header* getHeader() { return dynamic_cast&lt;Header*&gt;(QuickFix::Message::getHeader()); }
  };<xsl:apply-templates/></xsl:template>

 <xsl:template match="messages/message">
  <xsl:if test="(position()!=2)">
  };</xsl:if>

  public __gc class <xsl:value-of select="@name"/> : public Message
  {
  public: 
    <xsl:value-of select="@name"/>() : Message(MsgType()) {}
    static QuickFix::MsgType* MsgType() { return new QuickFix::MsgType("<xsl:value-of select="@msgtype"/>"); }
  <xsl:call-template name="constructor-def"/>
  <xsl:apply-templates/>
  </xsl:template>

  <xsl:template name="constructor-def">
   <xsl:for-each select="field[@required='Y']">
    <xsl:if test="(position()=1)">  //
    <xsl:value-of select="../@name"/>(</xsl:if>
      QuickFix::<xsl:value-of select="@name"/>* a<xsl:value-of select=
      "@name"/>
    <xsl:if test="(position()!=last())">,</xsl:if>
    <xsl:if test="(position()=last())"> )
    : Message(MsgType())
    <xsl:call-template name="constructor-impl"/>
    </xsl:if>
   </xsl:for-each>
  </xsl:template>

  <xsl:template name="constructor-impl">
    {<xsl:for-each select="../field[@required='Y']">
      set(a<xsl:value-of select="@name"/>);</xsl:for-each>
    }
  </xsl:template>
  
  <xsl:template name="group-constructor-impl">static int message_order __gc[] = {<xsl:apply-templates mode="group"/>0};</xsl:template>    
  <xsl:template mode="group" match="group/field"><xsl:variable name="name" select="@name"/><xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>,</xsl:template>
  <xsl:template mode="group" match="group/component"><xsl:variable name="name" select="@name"/><xsl:for-each select="//fix/components/component[@name=$name]"><xsl:for-each select="field"><xsl:variable name="field_name" select="@name"/><xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>,</xsl:for-each></xsl:for-each></xsl:template>
  
  <xsl:template name="group">
    NET_FIELD_SET(<xsl:value-of select="@name"/>);
    __gc class <xsl:value-of select="@name"/> : public QuickFix::Group
    {
    public:
      <xsl:variable name="name" select="@name"/>
      <xsl:variable name="field_name" select="field/@name"/>
      <xsl:choose>
        <xsl:when test="string-length(field[1]/@name) > 0">
          <xsl:value-of select="@name"/>() : Group(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>, message_order ) {}
        </xsl:when>
        <xsl:when test="string-length(component[1]/@name) > 0">
	  <xsl:variable name="component_name" select="component[1]/@name"/>
          <xsl:variable name="component_field_name" select="//fix/components/component[@name=$component_name]/field[1]/@name"/>
          <xsl:value-of select="@name"/>() : Group(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$component_field_name]/@number"/>, message_order ) {}
        </xsl:when>
      </xsl:choose>
      <xsl:call-template name="group-constructor-impl"/>
      <xsl:for-each select="field">
      NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:for-each>
      <xsl:for-each select="group"><xsl:call-template name="group"/></xsl:for-each>
      <xsl:for-each select="component">
        <xsl:variable name="component_name" select="@name"/>
        <xsl:for-each select="//fix/components/component[@name=$component_name]/field">
          NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:for-each>
        <xsl:for-each select="//fix/components/component[@name=$component_name]/group">
	  <xsl:call-template name="group"/>
        </xsl:for-each>
      </xsl:for-each>
    };</xsl:template>

 <xsl:template match="header/field">
    NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:template>
 <xsl:template match="trailer/field">
    NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:template>
 <xsl:template match="messages/message/field">
    NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:template>
 <xsl:template match="messages/message/component">
   <xsl:variable name="name" select="@name"/>
   <xsl:for-each select="//fix/components/component[@name=$name]/field">   
    NET_FIELD_SET(<xsl:value-of select="@name"/>);</xsl:for-each>      
   <xsl:for-each select="//fix/components/component[@name=$name]/group">
     <xsl:call-template name="group"/>
   </xsl:for-each>
 </xsl:template>
 <xsl:template match="component/group"></xsl:template>
 <xsl:template match="group">
     <xsl:call-template name="group"/>
 </xsl:template>

 <xsl:template match="fields">
  };</xsl:template>

</xsl:stylesheet>
