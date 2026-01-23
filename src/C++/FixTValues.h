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

#ifndef FIXT_VALUES_H
#define FIXT_VALUES_H

#include <string>

namespace FIX {

const char PossDupFlag_NO = 'N';
const char PossDupFlag_YES = 'Y';
const char PossResend_NO = 'N';
const char PossResend_YES = 'Y';
const int EncryptMethod_NONE_OTHER = 0;
const int EncryptMethod_PKCS = 1;
const int EncryptMethod_DES = 2;
const int EncryptMethod_PKCSDES = 3;
const int EncryptMethod_PGPDES = 4;
const int EncryptMethod_PGPDESMD5 = 5;
const int EncryptMethod_PEMDESMD5 = 6;
const char GapFillFlag_NO = 'N';
const char GapFillFlag_YES = 'Y';
const char ResetSeqNumFlag_NO = 'N';
const char ResetSeqNumFlag_YES = 'Y';
const int SessionRejectReason_INVALID_TAG_NUMBER = 0;
const int SessionRejectReason_REQUIRED_TAG_MISSING = 1;
const int SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
const int SessionRejectReason_UNDEFINED_TAG = 3;
const int SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
const int SessionRejectReason_VALUE_IS_INCORRECT = 5;
const int SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
const int SessionRejectReason_DECRYPTION_PROBLEM = 7;
const int SessionRejectReason_SIGNATURE_PROBLEM = 8;
const int SessionRejectReason_COMPID_PROBLEM = 9;
const int SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM = 10;
const int SessionRejectReason_INVALID_MSGTYPE = 11;
const int SessionRejectReason_XML_VALIDATION_ERROR = 12;
const int SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE = 13;
const int SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
const int SessionRejectReason_REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
const int SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
const int SessionRejectReason_NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
const int SessionRejectReason_INVALID_UNSUPPORTED_APPLICATION_VERSION = 18;
const int SessionRejectReason_OTHER = 99;
const char TestMessageIndicator_NO = 'N';
const char TestMessageIndicator_YES = 'Y';
const char ApplVerID_FIX27[] = "0";
const char ApplVerID_FIX30[] = "1";
const char ApplVerID_FIX40[] = "2";
const char ApplVerID_FIX41[] = "3";
const char ApplVerID_FIX42[] = "4";
const char ApplVerID_FIX43[] = "5";
const char ApplVerID_FIX44[] = "6";
const char ApplVerID_FIX50[] = "7";
const char ApplVerID_FIX50_SP1[] = "8";
const char ApplVerID_FIX50_SP2[] = "9";
const int SessionStatus_SESSION_ACTIVE = 0;
const int SessionStatus_SESSION_PASSWORD_CHANGED = 1;
const int SessionStatus_SESSION_PASSWORD_DUE_TO_EXPIRE = 2;
const int SessionStatus_NEW_SESSION_PASSWORD_DOES_NOT_COMPLY_WITH_POLICY = 3;
const int SessionStatus_SESSION_LOGOUT_COMPLETE = 4;
const int SessionStatus_INVALID_USERNAME_OR_PASSWORD = 5;
const int SessionStatus_ACCOUNT_LOCKED = 6;
const int SessionStatus_LOGONS_ARE_NOT_ALLOWED_AT_THIS_TIME = 7;
const int SessionStatus_PASSWORD_EXPIRED = 8;
} // namespace FIX
#endif // FIXT_VALUES_H
