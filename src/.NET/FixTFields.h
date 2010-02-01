/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#pragma once

#undef Yield
#undef DUPLICATE
#undef STRICT
#undef DIFFERENCE
#include "Field.h"
#include "DeprecatedFields.h"

namespace QuickFix
{
  
  public __gc class BeginSeqNo : public IntField
  {
  public:
  static const int FIELD = 7;
  BeginSeqNo() : IntField(7) {}
    BeginSeqNo(int data) : IntField(7, data) {}
    
  };
  
  public __gc class BeginString : public StringField
  {
  public:
  static const int FIELD = 8;
  BeginString() : StringField(8) {}
    BeginString(String* data) : StringField(8, data) {}
    
  };
  
  public __gc class BodyLength : public IntField
  {
  public:
  static const int FIELD = 9;
  BodyLength() : IntField(9) {}
    BodyLength(int data) : IntField(9, data) {}
    
  };
  
  public __gc class CheckSum : public StringField
  {
  public:
  static const int FIELD = 10;
  CheckSum() : StringField(10) {}
    CheckSum(String* data) : StringField(10, data) {}
    
  };
  
  public __gc class EndSeqNo : public IntField
  {
  public:
  static const int FIELD = 16;
  EndSeqNo() : IntField(16) {}
    EndSeqNo(int data) : IntField(16, data) {}
    
  };
  
  public __gc class MsgSeqNum : public IntField
  {
  public:
  static const int FIELD = 34;
  MsgSeqNum() : IntField(34) {}
    MsgSeqNum(int data) : IntField(34, data) {}
    
  };
  
  public __gc class MsgType : public StringField
  {
  public:
  static const int FIELD = 35;
  static const String* HEARTBEAT = "0";
  static const String* TEST_REQUEST = "1";
  static const String* RESEND_REQUEST = "2";
  static const String* REJECT = "3";
  static const String* SEQUENCE_RESET = "4";
  static const String* LOGOUT = "5";
  static const String* INDICATION_OF_INTEREST = "6";
  static const String* ADVERTISEMENT = "7";
  static const String* EXECUTION_REPORT = "8";
  static const String* ORDER_CANCEL_REJECT = "9";
  static const String* LOGON = "A";
  static const String* NEWS = "B";
  static const String* EMAIL = "C";
  static const String* ORDER_SINGLE = "D";
  static const String* ORDER_LIST = "E";
  static const String* ORDER_CANCEL_REQUEST = "F";
  static const String* ORDER_CANCEL_REPLACE_REQUEST = "G";
  static const String* ORDER_STATUS_REQUEST = "H";
  static const String* ALLOCATION_INSTRUCTION = "J";
  static const String* LIST_CANCEL_REQUEST = "K";
  static const String* LIST_EXECUTE = "L";
  static const String* LIST_STATUS_REQUEST = "M";
  static const String* LIST_STATUS = "N";
  static const String* ALLOCATION_INSTRUCTION_ACK = "P";
  static const String* DONT_KNOW_TRADE = "Q";
  static const String* QUOTE_REQUEST = "R";
  static const String* QUOTE = "S";
  static const String* SETTLEMENT_INSTRUCTIONS = "T";
  static const String* MARKET_DATA_REQUEST = "V";
  static const String* MARKET_DATA_SNAPSHOT_FULL_REFRESH = "W";
  static const String* MARKET_DATA_INCREMENTAL_REFRESH = "X";
  static const String* MARKET_DATA_REQUEST_REJECT = "Y";
  static const String* QUOTE_CANCEL = "Z";
  static const String* QUOTE_STATUS_REQUEST = "a";
  static const String* MASS_QUOTE_ACKNOWLEDGEMENT = "b";
  static const String* SECURITY_DEFINITION_REQUEST = "c";
  static const String* SECURITY_DEFINITION = "d";
  static const String* SECURITY_STATUS_REQUEST = "e";
  static const String* SECURITY_STATUS = "f";
  static const String* TRADING_SESSION_STATUS_REQUEST = "g";
  static const String* TRADING_SESSION_STATUS = "h";
  static const String* MASS_QUOTE = "i";
  static const String* BUSINESS_MESSAGE_REJECT = "j";
  static const String* BID_REQUEST = "k";
  static const String* BID_RESPONSE = "l";
  static const String* LIST_STRIKE_PRICE = "m";
  static const String* XML_MESSAGE = "n";
  static const String* REGISTRATION_INSTRUCTIONS = "o";
  static const String* REGISTRATION_INSTRUCTIONS_RESPONSE = "p";
  static const String* ORDER_MASS_CANCEL_REQUEST = "q";
  static const String* ORDER_MASS_CANCEL_REPORT = "r";
  static const String* NEW_ORDER_CROSS = "s";
  static const String* CROSS_ORDER_CANCEL_REPLACE_REQUEST = "t";
  static const String* CROSS_ORDER_CANCEL_REQUEST = "u";
  static const String* SECURITY_TYPE_REQUEST = "v";
  static const String* SECURITY_TYPES = "w";
  static const String* SECURITY_LIST_REQUEST = "x";
  static const String* SECURITY_LIST = "y";
  static const String* DERIVATIVE_SECURITY_LIST_REQUEST = "z";
  static const String* DERIVATIVE_SECURITY_LIST = "AA";
  static const String* NEW_ORDER_MULTILEG = "AB";
  static const String* MULTILEG_ORDER_CANCEL_REPLACE = "AC";
  static const String* TRADE_CAPTURE_REPORT_REQUEST = "AD";
  static const String* TRADE_CAPTURE_REPORT = "AE";
  static const String* ORDER_MASS_STATUS_REQUEST = "AF";
  static const String* QUOTE_REQUEST_REJECT = "AG";
  static const String* RFQ_REQUEST = "AH";
  static const String* QUOTE_STATUS_REPORT = "AI";
  static const String* QUOTE_RESPONSE = "AJ";
  static const String* CONFIRMATION = "AK";
  static const String* POSITION_MAINTENANCE_REQUEST = "AL";
  static const String* POSITION_MAINTENANCE_REPORT = "AM";
  static const String* REQUEST_FOR_POSITIONS = "AN";
  static const String* REQUEST_FOR_POSITIONS_ACK = "AO";
  static const String* POSITION_REPORT = "AP";
  static const String* TRADE_CAPTURE_REPORT_REQUEST_ACK = "AQ";
  static const String* TRADE_CAPTURE_REPORT_ACK = "AR";
  static const String* ALLOCATION_REPORT = "AS";
  static const String* ALLOCATION_REPORT_ACK = "AT";
  static const String* CONFIRMATION_ACK = "AU";
  static const String* SETTLEMENT_INSTRUCTION_REQUEST = "AV";
  static const String* ASSIGNMENT_REPORT = "AW";
  static const String* COLLATERAL_REQUEST = "AX";
  static const String* COLLATERAL_ASSIGNMENT = "AY";
  static const String* COLLATERAL_RESPONSE = "AZ";
  static const String* COLLATERAL_REPORT = "BA";
  static const String* COLLATERAL_INQUIRY = "BB";
  static const String* NETWORK_STATUS_REQUEST = "BC";
  static const String* NETWORK_STATUS_RESPONSE = "BD";
  static const String* USER_REQUEST = "BE";
  static const String* USER_RESPONSE = "BF";
  static const String* COLLATERAL_INQUIRY_ACK = "BG";
  static const String* CONFIRMATION_REQUEST = "BH";
  static const String* TRADING_SESSION_LIST_REQUEST = "BI";
  static const String* TRADING_SESSION_LIST = "BJ";
  static const String* SECURITY_LIST_UPDATE_REPORT = "BK";
  static const String* ADJUSTED_POSITION_REPORT = "BL";
  static const String* ALLOCATION_INSTRUCTION_ALERT = "BM";
  static const String* EXECUTION_ACKNOWLEDGEMENT = "BN";
  static const String* CONTRARY_INTENTION_REPORT = "BO";
  static const String* SECURITY_DEFINITION_UPDATE_REPORT = "BP";
  MsgType() : StringField(35) {}
    MsgType(String* data) : StringField(35, data) {}
    
  };
  
  public __gc class NewSeqNo : public IntField
  {
  public:
  static const int FIELD = 36;
  NewSeqNo() : IntField(36) {}
    NewSeqNo(int data) : IntField(36, data) {}
    
  };
  
  public __gc class PossDupFlag : public BooleanField
  {
  public:
  static const int FIELD = 43;
  PossDupFlag() : BooleanField(43) {}
    PossDupFlag(bool data) : BooleanField(43, data) {}
    
  };
  
  public __gc class RefSeqNum : public IntField
  {
  public:
  static const int FIELD = 45;
  RefSeqNum() : IntField(45) {}
    RefSeqNum(int data) : IntField(45, data) {}
    
  };
  
  public __gc class SenderCompID : public StringField
  {
  public:
  static const int FIELD = 49;
  SenderCompID() : StringField(49) {}
    SenderCompID(String* data) : StringField(49, data) {}
    
  };
  
  public __gc class SenderSubID : public StringField
  {
  public:
  static const int FIELD = 50;
  SenderSubID() : StringField(50) {}
    SenderSubID(String* data) : StringField(50, data) {}
    
  };
  
  public __gc class SendingTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 52;
  SendingTime() : UtcTimeStampField(52) {}
    SendingTime(DateTime data) : UtcTimeStampField(52, data) {}
    SendingTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(52, data, showMilliseconds) {}
    
  };
  
  public __gc class TargetCompID : public StringField
  {
  public:
  static const int FIELD = 56;
  TargetCompID() : StringField(56) {}
    TargetCompID(String* data) : StringField(56, data) {}
    
  };
  
  public __gc class TargetSubID : public StringField
  {
  public:
  static const int FIELD = 57;
  TargetSubID() : StringField(57) {}
    TargetSubID(String* data) : StringField(57, data) {}
    
  };
  
  public __gc class Text : public StringField
  {
  public:
  static const int FIELD = 58;
  Text() : StringField(58) {}
    Text(String* data) : StringField(58, data) {}
    
  };
  
  public __gc class Signature : public StringField
  {
  public:
  static const int FIELD = 89;
  Signature() : StringField(89) {}
    Signature(String* data) : StringField(89, data) {}
    
  };
  
  public __gc class SecureDataLen : public IntField
  {
  public:
  static const int FIELD = 90;
  SecureDataLen() : IntField(90) {}
    SecureDataLen(int data) : IntField(90, data) {}
    
  };
  
  public __gc class SecureData : public StringField
  {
  public:
  static const int FIELD = 91;
  SecureData() : StringField(91) {}
    SecureData(String* data) : StringField(91, data) {}
    
  };
  
  public __gc class SignatureLength : public IntField
  {
  public:
  static const int FIELD = 93;
  SignatureLength() : IntField(93) {}
    SignatureLength(int data) : IntField(93, data) {}
    
  };
  
  public __gc class RawDataLength : public IntField
  {
  public:
  static const int FIELD = 95;
  RawDataLength() : IntField(95) {}
    RawDataLength(int data) : IntField(95, data) {}
    
  };
  
  public __gc class RawData : public StringField
  {
  public:
  static const int FIELD = 96;
  RawData() : StringField(96) {}
    RawData(String* data) : StringField(96, data) {}
    
  };
  
  public __gc class PossResend : public BooleanField
  {
  public:
  static const int FIELD = 97;
  PossResend() : BooleanField(97) {}
    PossResend(bool data) : BooleanField(97, data) {}
    
  };
  
  public __gc class EncryptMethod : public IntField
  {
  public:
  static const int FIELD = 98;
  static const int NONE_OTHER = 0;
  static const int PKCS = 1;
  static const int DES = 2;
  static const int PKCS_DES = 3;
  static const int PGP_DES = 4;
  static const int PGP_DES_MD5 = 5;
  static const int PEM_DES_MD5 = 6;
  EncryptMethod() : IntField(98) {}
    EncryptMethod(int data) : IntField(98, data) {}
    
  };
  
  public __gc class HeartBtInt : public IntField
  {
  public:
  static const int FIELD = 108;
  HeartBtInt() : IntField(108) {}
    HeartBtInt(int data) : IntField(108, data) {}
    
  };
  
  public __gc class TestReqID : public StringField
  {
  public:
  static const int FIELD = 112;
  TestReqID() : StringField(112) {}
    TestReqID(String* data) : StringField(112, data) {}
    
  };
  
  public __gc class OnBehalfOfCompID : public StringField
  {
  public:
  static const int FIELD = 115;
  OnBehalfOfCompID() : StringField(115) {}
    OnBehalfOfCompID(String* data) : StringField(115, data) {}
    
  };
  
  public __gc class OnBehalfOfSubID : public StringField
  {
  public:
  static const int FIELD = 116;
  OnBehalfOfSubID() : StringField(116) {}
    OnBehalfOfSubID(String* data) : StringField(116, data) {}
    
  };
  
  public __gc class OrigSendingTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 122;
  OrigSendingTime() : UtcTimeStampField(122) {}
    OrigSendingTime(DateTime data) : UtcTimeStampField(122, data) {}
    OrigSendingTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(122, data, showMilliseconds) {}
    
  };
  
  public __gc class GapFillFlag : public BooleanField
  {
  public:
  static const int FIELD = 123;
  GapFillFlag() : BooleanField(123) {}
    GapFillFlag(bool data) : BooleanField(123, data) {}
    
  };
  
  public __gc class DeliverToCompID : public StringField
  {
  public:
  static const int FIELD = 128;
  DeliverToCompID() : StringField(128) {}
    DeliverToCompID(String* data) : StringField(128, data) {}
    
  };
  
  public __gc class DeliverToSubID : public StringField
  {
  public:
  static const int FIELD = 129;
  DeliverToSubID() : StringField(129) {}
    DeliverToSubID(String* data) : StringField(129, data) {}
    
  };
  
  public __gc class ResetSeqNumFlag : public BooleanField
  {
  public:
  static const int FIELD = 141;
  ResetSeqNumFlag() : BooleanField(141) {}
    ResetSeqNumFlag(bool data) : BooleanField(141, data) {}
    
  };
  
  public __gc class SenderLocationID : public StringField
  {
  public:
  static const int FIELD = 142;
  SenderLocationID() : StringField(142) {}
    SenderLocationID(String* data) : StringField(142, data) {}
    
  };
  
  public __gc class TargetLocationID : public StringField
  {
  public:
  static const int FIELD = 143;
  TargetLocationID() : StringField(143) {}
    TargetLocationID(String* data) : StringField(143, data) {}
    
  };
  
  public __gc class OnBehalfOfLocationID : public StringField
  {
  public:
  static const int FIELD = 144;
  OnBehalfOfLocationID() : StringField(144) {}
    OnBehalfOfLocationID(String* data) : StringField(144, data) {}
    
  };
  
  public __gc class DeliverToLocationID : public StringField
  {
  public:
  static const int FIELD = 145;
  DeliverToLocationID() : StringField(145) {}
    DeliverToLocationID(String* data) : StringField(145, data) {}
    
  };
  
  public __gc class XmlDataLen : public IntField
  {
  public:
  static const int FIELD = 212;
  XmlDataLen() : IntField(212) {}
    XmlDataLen(int data) : IntField(212, data) {}
    
  };
  
  public __gc class XmlData : public StringField
  {
  public:
  static const int FIELD = 213;
  XmlData() : StringField(213) {}
    XmlData(String* data) : StringField(213, data) {}
    
  };
  
  public __gc class MessageEncoding : public StringField
  {
  public:
  static const int FIELD = 347;
  static const String* ISO_2022_JP = "ISO-2022-JP";
  static const String* EUC_JP = "EUC-JP";
  static const String* SHIFT_JIS = "SHIFT_JIS";
  static const String* UTF_8 = "UTF-8";
  MessageEncoding() : StringField(347) {}
    MessageEncoding(String* data) : StringField(347, data) {}
    
  };
  
  public __gc class EncodedTextLen : public IntField
  {
  public:
  static const int FIELD = 354;
  EncodedTextLen() : IntField(354) {}
    EncodedTextLen(int data) : IntField(354, data) {}
    
  };
  
  public __gc class EncodedText : public StringField
  {
  public:
  static const int FIELD = 355;
  EncodedText() : StringField(355) {}
    EncodedText(String* data) : StringField(355, data) {}
    
  };
  
  public __gc class LastMsgSeqNumProcessed : public IntField
  {
  public:
  static const int FIELD = 369;
  LastMsgSeqNumProcessed() : IntField(369) {}
    LastMsgSeqNumProcessed(int data) : IntField(369, data) {}
    
  };
  
  public __gc class RefTagID : public IntField
  {
  public:
  static const int FIELD = 371;
  RefTagID() : IntField(371) {}
    RefTagID(int data) : IntField(371, data) {}
    
  };
  
  public __gc class RefMsgType : public StringField
  {
  public:
  static const int FIELD = 372;
  RefMsgType() : StringField(372) {}
    RefMsgType(String* data) : StringField(372, data) {}
    
  };
  
  public __gc class SessionRejectReason : public IntField
  {
  public:
  static const int FIELD = 373;
  static const int INVALID_TAG_NUMBER = 0;
  static const int REQUIRED_TAG_MISSING = 1;
  static const int SENDINGTIME_ACCURACY_PROBLEM = 10;
  static const int INVALID_MSGTYPE = 11;
  static const int XML_VALIDATION_ERROR = 12;
  static const int TAG_APPEARS_MORE_THAN_ONCE = 13;
  static const int TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
  static const int REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
  static const int INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
  static const int NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
  static const int TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
  static const int UNDEFINED_TAG = 3;
  static const int TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
  static const int VALUE_IS_INCORRECT = 5;
  static const int INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
  static const int DECRYPTION_PROBLEM = 7;
  static const int SIGNATURE_PROBLEM = 8;
  static const int COMPID_PROBLEM = 9;
  static const int OTHER = 99;
  SessionRejectReason() : IntField(373) {}
    SessionRejectReason(int data) : IntField(373, data) {}
    
  };
  
  public __gc class MaxMessageSize : public IntField
  {
  public:
  static const int FIELD = 383;
  MaxMessageSize() : IntField(383) {}
    MaxMessageSize(int data) : IntField(383, data) {}
    
  };
  
  public __gc class NoMsgTypes : public IntField
  {
  public:
  static const int FIELD = 384;
  NoMsgTypes() : IntField(384) {}
    NoMsgTypes(int data) : IntField(384, data) {}
    
  };
  
  public __gc class MsgDirection : public CharField
  {
  public:
  static const int FIELD = 385;
  static const __wchar_t RECEIVE = 'R';
  static const __wchar_t SEND = 'S';
  MsgDirection() : CharField(385) {}
    MsgDirection(__wchar_t data) : CharField(385, data) {}
    
  };
  
  public __gc class TestMessageIndicator : public BooleanField
  {
  public:
  static const int FIELD = 464;
  TestMessageIndicator() : BooleanField(464) {}
    TestMessageIndicator(bool data) : BooleanField(464, data) {}
    
  };
  
  public __gc class Username : public StringField
  {
  public:
  static const int FIELD = 553;
  Username() : StringField(553) {}
    Username(String* data) : StringField(553, data) {}
    
  };
  
  public __gc class Password : public StringField
  {
  public:
  static const int FIELD = 554;
  Password() : StringField(554) {}
    Password(String* data) : StringField(554, data) {}
    
  };
  
  public __gc class NoHops : public IntField
  {
  public:
  static const int FIELD = 627;
  NoHops() : IntField(627) {}
    NoHops(int data) : IntField(627, data) {}
    
  };
  
  public __gc class HopCompID : public StringField
  {
  public:
  static const int FIELD = 628;
  HopCompID() : StringField(628) {}
    HopCompID(String* data) : StringField(628, data) {}
    
  };
  
  public __gc class HopSendingTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 629;
  HopSendingTime() : UtcTimeStampField(629) {}
    HopSendingTime(DateTime data) : UtcTimeStampField(629, data) {}
    HopSendingTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(629, data, showMilliseconds) {}
    
  };
  
  public __gc class HopRefID : public IntField
  {
  public:
  static const int FIELD = 630;
  HopRefID() : IntField(630) {}
    HopRefID(int data) : IntField(630, data) {}
    
  };
  
  public __gc class NextExpectedMsgSeqNum : public IntField
  {
  public:
  static const int FIELD = 789;
  NextExpectedMsgSeqNum() : IntField(789) {}
    NextExpectedMsgSeqNum(int data) : IntField(789, data) {}
    
  };
  
  public __gc class ApplVerID : public StringField
  {
  public:
  static const int FIELD = 1128;
  static const String* FIX27 = "0";
  static const String* FIX30 = "1";
  static const String* FIX40 = "2";
  static const String* FIX41 = "3";
  static const String* FIX42 = "4";
  static const String* FIX43 = "5";
  static const String* FIX44 = "6";
  static const String* FIX50 = "7";
  ApplVerID() : StringField(1128) {}
    ApplVerID(String* data) : StringField(1128, data) {}
    
  };
  
  public __gc class CstmApplVerID : public StringField
  {
  public:
  static const int FIELD = 1129;
  CstmApplVerID() : StringField(1129) {}
    CstmApplVerID(String* data) : StringField(1129, data) {}
    
  };
  
  public __gc class RefApplVerID : public StringField
  {
  public:
  static const int FIELD = 1130;
  RefApplVerID() : StringField(1130) {}
    RefApplVerID(String* data) : StringField(1130, data) {}
    
  };
  
  public __gc class RefCstmApplVerID : public StringField
  {
  public:
  static const int FIELD = 1131;
  RefCstmApplVerID() : StringField(1131) {}
    RefCstmApplVerID(String* data) : StringField(1131, data) {}
    
  };
  
  public __gc class DefaultApplVerID : public StringField
  {
  public:
  static const int FIELD = 1137;
  DefaultApplVerID() : StringField(1137) {}
    DefaultApplVerID(String* data) : StringField(1137, data) {}
    
  };
  
}

 