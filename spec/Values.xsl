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
#ifndef FIX_VALUES_H
#define FIX_VALUES_H

#include "DeprecatedValues.h"
#include &lt;string>

namespace FIX
{
  const char BeginString_FIX43[] = "FIX.4.3";
  const char BeginString_FIX42[] = "FIX.4.2";
  const char BeginString_FIX41[] = "FIX.4.1";
  const char BeginString_FIX40[] = "FIX.4.0";
  <xsl:apply-templates/>
  <xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='OPTION'])"> 
  const std::string SecurityType_OPTION = "OPT";</xsl:if>
  <xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='FUTURE'])"> 
  const std::string SecurityType_FUTURE = "FUT";</xsl:if>
  const std::string SessionRejectReason_INVALID_TAG_NUMBER_TEXT = "Invalid tag number";
  const std::string SessionRejectReason_REQUIRED_TAG_MISSING_TEXT = "Required tag missing";
  const std::string SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT = "Tag not defined for this message type";
  const std::string SessionRejectReason_UNDEFINED_TAG_TEXT = "Undefined Tag";
  const std::string SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT = "Tag specified without a value";
  const std::string SessionRejectReason_VALUE_IS_INCORRECT_TEXT = "Value is incorrect (out of range) for this tag";
  const std::string SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT = "Incorrect data format for value";
  const std::string SessionRejectReason_DECRYPTION_PROBLEM_TEXT = "Decryption problem";
  const std::string SessionRejectReason_SIGNATURE_PROBLEM_TEXT = "Signature problem";
  const std::string SessionRejectReason_COMPID_PROBLEM_TEXT = "CompID problem";
  const std::string SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT = "SendingTime accuracy problem";
  const std::string SessionRejectReason_INVALID_MSGTYPE_TEXT = "Invalid MsgType";
  const std::string SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT = "Tag specified out of required order";
}
#endif //FIX_VALUES_H&#013;
</xsl:template>
 
<xsl:template match="fix/fields/field/value">
<xsl:choose>
  <xsl:when test="../@type='INT'">
 const int <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/> = <xsl:value-of select="@enum"/>;</xsl:when>
  <xsl:when test="../@type='STRING'">
 const std::string <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/> = "<xsl:value-of select="@enum"/>";</xsl:when>
  <xsl:otherwise>
 const char <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/> = '<xsl:value-of select="@enum"/>';</xsl:otherwise>
</xsl:choose>
</xsl:template>
 
<xsl:template match="fix/messages/message">
 const char MsgType_<xsl:value-of select="@name"/>[] = "<xsl:value-of select="@msgtype"/>";</xsl:template>

</xsl:stylesheet>