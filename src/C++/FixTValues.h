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

namespace FIX
{
  
 const char MsgType_Heartbeat[] = "0";
 const char MsgType_TestRequest[] = "1";
 const char MsgType_ResendRequest[] = "2";
 const char MsgType_Reject[] = "3";
 const char MsgType_SequenceReset[] = "4";
 const char MsgType_Logout[] = "5";
 const char MsgType_Logon[] = "A";
 const char MsgType_HEARTBEAT[] = "0";
 const char MsgType_TEST_REQUEST[] = "1";
 const char MsgType_RESEND_REQUEST[] = "2";
 const char MsgType_REJECT[] = "3";
 const char MsgType_SEQUENCE_RESET[] = "4";
 const char MsgType_LOGOUT[] = "5";
 const char MsgType_INDICATION_OF_INTEREST[] = "6";
 const char MsgType_ADVERTISEMENT[] = "7";
 const char MsgType_EXECUTION_REPORT[] = "8";
 const char MsgType_ORDER_CANCEL_REJECT[] = "9";
 const char MsgType_LOGON[] = "A";
 const char MsgType_NEWS[] = "B";
 const char MsgType_EMAIL[] = "C";
 const char MsgType_ORDER_SINGLE[] = "D";
 const char MsgType_ORDER_LIST[] = "E";
 const char MsgType_ORDER_CANCEL_REQUEST[] = "F";
 const char MsgType_ORDER_CANCEL_REPLACE_REQUEST[] = "G";
 const char MsgType_ORDER_STATUS_REQUEST[] = "H";
 const char MsgType_ALLOCATION_INSTRUCTION[] = "J";
 const char MsgType_LIST_CANCEL_REQUEST[] = "K";
 const char MsgType_LIST_EXECUTE[] = "L";
 const char MsgType_LIST_STATUS_REQUEST[] = "M";
 const char MsgType_LIST_STATUS[] = "N";
 const char MsgType_ALLOCATION_INSTRUCTION_ACK[] = "P";
 const char MsgType_DONT_KNOW_TRADE[] = "Q";
 const char MsgType_QUOTE_REQUEST[] = "R";
 const char MsgType_QUOTE[] = "S";
 const char MsgType_SETTLEMENT_INSTRUCTIONS[] = "T";
 const char MsgType_MARKET_DATA_REQUEST[] = "V";
 const char MsgType_MARKET_DATA_SNAPSHOT_FULL_REFRESH[] = "W";
 const char MsgType_MARKET_DATA_INCREMENTAL_REFRESH[] = "X";
 const char MsgType_MARKET_DATA_REQUEST_REJECT[] = "Y";
 const char MsgType_QUOTE_CANCEL[] = "Z";
 const char MsgType_QUOTE_STATUS_REQUEST[] = "a";
 const char MsgType_MASS_QUOTE_ACKNOWLEDGEMENT[] = "b";
 const char MsgType_SECURITY_DEFINITION_REQUEST[] = "c";
 const char MsgType_SECURITY_DEFINITION[] = "d";
 const char MsgType_SECURITY_STATUS_REQUEST[] = "e";
 const char MsgType_SECURITY_STATUS[] = "f";
 const char MsgType_TRADING_SESSION_STATUS_REQUEST[] = "g";
 const char MsgType_TRADING_SESSION_STATUS[] = "h";
 const char MsgType_MASS_QUOTE[] = "i";
 const char MsgType_BUSINESS_MESSAGE_REJECT[] = "j";
 const char MsgType_BID_REQUEST[] = "k";
 const char MsgType_BID_RESPONSE[] = "l";
 const char MsgType_LIST_STRIKE_PRICE[] = "m";
 const char MsgType_XML_MESSAGE[] = "n";
 const char MsgType_REGISTRATION_INSTRUCTIONS[] = "o";
 const char MsgType_REGISTRATION_INSTRUCTIONS_RESPONSE[] = "p";
 const char MsgType_ORDER_MASS_CANCEL_REQUEST[] = "q";
 const char MsgType_ORDER_MASS_CANCEL_REPORT[] = "r";
 const char MsgType_NEW_ORDER_CROSS[] = "s";
 const char MsgType_CROSS_ORDER_CANCEL_REPLACE_REQUEST[] = "t";
 const char MsgType_CROSS_ORDER_CANCEL_REQUEST[] = "u";
 const char MsgType_SECURITY_TYPE_REQUEST[] = "v";
 const char MsgType_SECURITY_TYPES[] = "w";
 const char MsgType_SECURITY_LIST_REQUEST[] = "x";
 const char MsgType_SECURITY_LIST[] = "y";
 const char MsgType_DERIVATIVE_SECURITY_LIST_REQUEST[] = "z";
 const char MsgType_DERIVATIVE_SECURITY_LIST[] = "AA";
 const char MsgType_NEW_ORDER_MULTILEG[] = "AB";
 const char MsgType_MULTILEG_ORDER_CANCEL_REPLACE[] = "AC";
 const char MsgType_TRADE_CAPTURE_REPORT_REQUEST[] = "AD";
 const char MsgType_TRADE_CAPTURE_REPORT[] = "AE";
 const char MsgType_ORDER_MASS_STATUS_REQUEST[] = "AF";
 const char MsgType_QUOTE_REQUEST_REJECT[] = "AG";
 const char MsgType_RFQ_REQUEST[] = "AH";
 const char MsgType_QUOTE_STATUS_REPORT[] = "AI";
 const char MsgType_QUOTE_RESPONSE[] = "AJ";
 const char MsgType_CONFIRMATION[] = "AK";
 const char MsgType_POSITION_MAINTENANCE_REQUEST[] = "AL";
 const char MsgType_POSITION_MAINTENANCE_REPORT[] = "AM";
 const char MsgType_REQUEST_FOR_POSITIONS[] = "AN";
 const char MsgType_REQUEST_FOR_POSITIONS_ACK[] = "AO";
 const char MsgType_POSITION_REPORT[] = "AP";
 const char MsgType_TRADE_CAPTURE_REPORT_REQUEST_ACK[] = "AQ";
 const char MsgType_TRADE_CAPTURE_REPORT_ACK[] = "AR";
 const char MsgType_ALLOCATION_REPORT[] = "AS";
 const char MsgType_ALLOCATION_REPORT_ACK[] = "AT";
 const char MsgType_CONFIRMATION_ACK[] = "AU";
 const char MsgType_SETTLEMENT_INSTRUCTION_REQUEST[] = "AV";
 const char MsgType_ASSIGNMENT_REPORT[] = "AW";
 const char MsgType_COLLATERAL_REQUEST[] = "AX";
 const char MsgType_COLLATERAL_ASSIGNMENT[] = "AY";
 const char MsgType_COLLATERAL_RESPONSE[] = "AZ";
 const char MsgType_COLLATERAL_REPORT[] = "BA";
 const char MsgType_COLLATERAL_INQUIRY[] = "BB";
 const char MsgType_NETWORK_STATUS_REQUEST[] = "BC";
 const char MsgType_NETWORK_STATUS_RESPONSE[] = "BD";
 const char MsgType_USER_REQUEST[] = "BE";
 const char MsgType_USER_RESPONSE[] = "BF";
 const char MsgType_COLLATERAL_INQUIRY_ACK[] = "BG";
 const char MsgType_CONFIRMATION_REQUEST[] = "BH";
 const char MsgType_TRADING_SESSION_LIST_REQUEST[] = "BI";
 const char MsgType_TRADING_SESSION_LIST[] = "BJ";
 const char MsgType_SECURITY_LIST_UPDATE_REPORT[] = "BK";
 const char MsgType_ADJUSTED_POSITION_REPORT[] = "BL";
 const char MsgType_ALLOCATION_INSTRUCTION_ALERT[] = "BM";
 const char MsgType_EXECUTION_ACKNOWLEDGEMENT[] = "BN";
 const char MsgType_CONTRARY_INTENTION_REPORT[] = "BO";
 const char MsgType_SECURITY_DEFINITION_UPDATE_REPORT[] = "BP";
 const int EncryptMethod_NONE_OTHER = 0;
 const int EncryptMethod_PKCS = 1;
 const int EncryptMethod_DES = 2;
 const int EncryptMethod_PKCS_DES = 3;
 const int EncryptMethod_PGP_DES = 4;
 const int EncryptMethod_PGP_DES_MD5 = 5;
 const int EncryptMethod_PEM_DES_MD5 = 6;
 const char MessageEncoding_ISO_2022_JP[] = "ISO-2022-JP";
 const char MessageEncoding_EUC_JP[] = "EUC-JP";
 const char MessageEncoding_SHIFT_JIS[] = "SHIFT_JIS";
 const char MessageEncoding_UTF_8[] = "UTF-8";
 const int SessionRejectReason_INVALID_TAG_NUMBER = 0;
 const int SessionRejectReason_REQUIRED_TAG_MISSING = 1;
 const int SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM = 10;
 const int SessionRejectReason_INVALID_MSGTYPE = 11;
 const int SessionRejectReason_XML_VALIDATION_ERROR = 12;
 const int SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE = 13;
 const int SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
 const int SessionRejectReason_REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
 const int SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
 const int SessionRejectReason_NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
 const int SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
 const int SessionRejectReason_UNDEFINED_TAG = 3;
 const int SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
 const int SessionRejectReason_VALUE_IS_INCORRECT = 5;
 const int SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
 const int SessionRejectReason_DECRYPTION_PROBLEM = 7;
 const int SessionRejectReason_SIGNATURE_PROBLEM = 8;
 const int SessionRejectReason_COMPID_PROBLEM = 9;
 const int SessionRejectReason_OTHER = 99;
 const char MsgDirection_RECEIVE = 'R';
 const char MsgDirection_SEND = 'S';
 const char ApplVerID_FIX27[] = "0";
 const char ApplVerID_FIX30[] = "1";
 const char ApplVerID_FIX40[] = "2";
 const char ApplVerID_FIX41[] = "3";
 const char ApplVerID_FIX42[] = "4";
 const char ApplVerID_FIX43[] = "5";
 const char ApplVerID_FIX44[] = "6";
 const char ApplVerID_FIX50[] = "7";
 const char ApplVerID_FIX50SP1[] = "8";
 const char ApplVerID_FIX50SP2[] = "9";
}
#endif //FIXT_VALUES_H
