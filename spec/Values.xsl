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
#ifndef FIX_VALUES_H
#define FIX_VALUES_H

#include "DeprecatedValues.h"
#include &lt;string>

namespace FIX
{
  const char BeginString_FIX44[] = "FIX.4.4";
  const char BeginString_FIX43[] = "FIX.4.3";
  const char BeginString_FIX42[] = "FIX.4.2";
  const char BeginString_FIX41[] = "FIX.4.1";
  const char BeginString_FIX40[] = "FIX.4.0";
  <xsl:apply-templates/>
  <xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='OPTION'])"> 
  const char SecurityType_OPTION[] = "OPT";</xsl:if>
  <xsl:if test="not(/fix/fields/field[@name='SecurityType']/value[@description='FUTURE'])"> 
  const char SecurityType_FUTURE[] = "FUT";</xsl:if>
  const char SessionRejectReason_INVALID_TAG_NUMBER_TEXT[] = "Invalid tag number";
  const char SessionRejectReason_REQUIRED_TAG_MISSING_TEXT[] = "Required tag missing";
  const char SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT[] = "Tag not defined for this message type";
  const char SessionRejectReason_UNDEFINED_TAG_TEXT[] = "Undefined Tag";
  const char SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT[] = "Tag specified without a value";
  const char SessionRejectReason_VALUE_IS_INCORRECT_TEXT[] = "Value is incorrect (out of range) for this tag";
  const char SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT[] = "Incorrect data format for value";
  const char SessionRejectReason_DECRYPTION_PROBLEM_TEXT[] = "Decryption problem";
  const char SessionRejectReason_SIGNATURE_PROBLEM_TEXT[] = "Signature problem";
  const char SessionRejectReason_COMPID_PROBLEM_TEXT[] = "CompID problem";
  const char SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT[] = "SendingTime accuracy problem";
  const char SessionRejectReason_INVALID_MSGTYPE_TEXT[] = "Invalid MsgType";
  const char SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE_TEXT[] = "Tag appears more than once";
  const char SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT[] = "Tag specified out of required order";
  const char SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP_TEXT[] = "Incorrect NumInGroup count for repeating group";
}
#endif //FIX_VALUES_H&#013;
</xsl:template>
 
<xsl:template match="fix/fields/field/value">
<xsl:choose>
  <xsl:when test="../@type='INT'">
 const int <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/> = <xsl:value-of select="@enum"/>;</xsl:when>
  <xsl:when test="../@type='STRING'">
 const char <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/>[] = "<xsl:value-of select="@enum"/>";</xsl:when>
  <xsl:otherwise>
 const char <xsl:value-of select="../@name"/>_<xsl:value-of select="@description"/> = '<xsl:value-of select="@enum"/>';</xsl:otherwise>
</xsl:choose>
</xsl:template>
 
<xsl:template match="fix/messages/message">
 const char MsgType_<xsl:value-of select="@name"/>[] = "<xsl:value-of select="@msgtype"/>";</xsl:template>

</xsl:stylesheet>
