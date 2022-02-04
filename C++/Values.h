/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_VALUES_BASE_H
#define FIX_VALUES_BASE_H

#include "FixValues.h"
#include <string>

namespace FIX
{
  const char BeginString_FIXT11[] = "FIXT.1.1";
  const char BeginString_FIX50[] = "FIX.5.0";
  const char BeginString_FIX44[] = "FIX.4.4";
  const char BeginString_FIX43[] = "FIX.4.3";
  const char BeginString_FIX42[] = "FIX.4.2";
  const char BeginString_FIX41[] = "FIX.4.1";
  const char BeginString_FIX40[] = "FIX.4.0";

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
  const char BusinessRejectReason_OTHER_TEXT[] = "Other";
  const char BusinessRejectReason_UNKNOWN_ID_TEXT[] = "Unknown ID";
  const char BusinessRejectReason_UNKNOWN_SECURITY_TEXT[] = "Unknown Security";
  const char BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE_TEXT[] = "Unsupported Message Type";
  const char BusinessRejectReason_APPLICATION_NOT_AVAILABLE_TEXT[] = "Application Not Available";
  const char BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING_TEXT[] = "Conditionally Required Field Missing";
  const char BusinessRejectReason_NOT_AUTHORIZED_TEXT[] = "Not Authorized";
  const char BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME_TEXT[] = "Deliver to firm not available at this time";
}
#endif //FIX_VALUES_BASE_H
