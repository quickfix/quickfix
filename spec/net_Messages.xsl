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
 <xsl:output method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */<xsl:copy-of select=
   "document('../LICENSE.xml')"/>
#pragma once

#include "Message.h"
#include "Group.h"
#include "Fields.h"
<xsl:apply-templates/>
}

 </xsl:template>

 <xsl:template match="fix">
namespace Fix<xsl:value-of select="@major"/><xsl:value-of select="@minor"/>
{<xsl:apply-templates/></xsl:template>

 <xsl:template match="header">
  public __gc class Header : public Fix::Message::Header
  {
  public:
    Header(Fix::Message* message) : Fix::Message::Header(message) {}
    <xsl:apply-templates/>
  };</xsl:template>
 
 <xsl:template match="trailer">
  
  public __gc class Trailer : public Fix::Message::Trailer
  {
  public:
    Trailer(Fix::Message* message) : Fix::Message::Trailer(message) {}
    <xsl:apply-templates/>
  };</xsl:template>

 <xsl:template match="messages">
  
  public __gc class Message : public Fix::Message
  {
  public: 
    Message() : Fix::Message(new Fix::BeginString("FIX.<xsl:value-of select
      ="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    Message( Fix::MsgType* msgType ) 
    : Fix::Message(
      new Fix::BeginString("FIX.<xsl:value-of select
      ="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"),msgType ) 
      { 
        m_header = new Header(this); 
        m_trailer = new Trailer(this);
      }

    Header* getHeader() { return dynamic_cast&lt;Header*&gt;(Fix::Message::getHeader()); }
  };<xsl:apply-templates/></xsl:template>

 <xsl:template match="messages/message">
  <xsl:if test="(position()!=2)">
  };</xsl:if>

  public __gc class <xsl:value-of select="@name"/> : public Message
  {
  public: 
    <xsl:value-of select="@name"/>() : Message(MsgType()) {}
    static Fix::MsgType* MsgType() { return new Fix::MsgType("<xsl:value-of select="@msgtype"/>"); }
  <xsl:call-template name="constructor-def"/>
  <xsl:apply-templates/>
  </xsl:template>

  <xsl:template name="constructor-def">
   <xsl:for-each select="field[@required='Y']">
    <xsl:if test="(position()=1)">  //
    <xsl:value-of select="../@name"/>(</xsl:if>
      Fix::<xsl:value-of select="@name"/>* a<xsl:value-of select=
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
  
  <xsl:template name="group">
  
    __gc class <xsl:value-of select="@name"/> : public Fix::Group
    {
    public:
      <xsl:value-of select="@name"/>() : Group(<xsl:value-of select="@number"/>, <xsl:value-of select="field/@number"/>) {}
      <xsl:for-each select="field">
      void set(Fix::<xsl:value-of select="@name"/>* value)
      { setField(value); }
      Fix::<xsl:value-of select="@name"/>* get(Fix::<xsl:value-of select="@name"/>* value) throw(Fix::FieldNotFound*)
      { getField(value); return value; }
      Fix::<xsl:value-of select="@name"/>* get<xsl:value-of select="@name"/>() throw(Fix::FieldNotFound*)
      { Fix::<xsl:value-of select="@name"/>* value = new Fix::<xsl:value-of select="@name"/>();
        getField(value); return value; }
      </xsl:for-each>
      <xsl:for-each select="group"><xsl:call-template name="group"/></xsl:for-each>      
    };</xsl:template>

 <xsl:template match="header/field">
    void set(Fix::<xsl:value-of select="@name"/>* value)
    { setField(value); }
    Fix::<xsl:value-of select="@name"/>* get(Fix::<xsl:value-of select="@name"/>* value) throw(Fix::FieldNotFound*)
    { getField(value); return value; }
    Fix::<xsl:value-of select="@name"/>* get<xsl:value-of select="@name"/>() throw(Fix::FieldNotFound*)
    { Fix::<xsl:value-of select="@name"/>* value = new Fix::<xsl:value-of select="@name"/>();
      getField(value); return value; }
 </xsl:template>
 <xsl:template match="trailer/field">
    void set(Fix::<xsl:value-of select="@name"/>* value)
    { setField(value); }
    Fix::<xsl:value-of select="@name"/>* get(Fix::<xsl:value-of select="@name"/>* value) throw(Fix::FieldNotFound*)
    { getField(value); return value; }
    Fix::<xsl:value-of select="@name"/>* get<xsl:value-of select="@name"/>() throw(Fix::FieldNotFound*)
    { Fix::<xsl:value-of select="@name"/>* value = new Fix::<xsl:value-of select="@name"/>();
      getField(value); return value; }
 </xsl:template>
 <xsl:template match="messages/message/field">
    void set(Fix::<xsl:value-of select="@name"/>* value)
    { setField(value); }
    Fix::<xsl:value-of select="@name"/>* get(Fix::<xsl:value-of select="@name"/>* value) throw(Fix::FieldNotFound*)
    { getField(value); return value; }
    Fix::<xsl:value-of select="@name"/>* get<xsl:value-of select="@name"/>() throw(Fix::FieldNotFound*)
    { Fix::<xsl:value-of select="@name"/>* value = new Fix::<xsl:value-of select="@name"/>();
      getField(value); return value; }
 </xsl:template>
 <xsl:template match="group">
     <xsl:call-template name="group"/>
 </xsl:template>

 <xsl:template match="fields">
  };</xsl:template>

</xsl:stylesheet>
