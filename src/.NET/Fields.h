/* -*- C++ -*- */
/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#pragma once

#undef Yield
#include "Field.h"
#include "DeprecatedFields.h"

namespace Fix
{
  
  public __gc class Account : public StringField
  {
  public:
  Account() : StringField(1) {}
    Account(String* data) : StringField(1, data) {}
  };
  
  public __gc class AdvId : public StringField
  {
  public:
  AdvId() : StringField(2) {}
    AdvId(String* data) : StringField(2, data) {}
  };
  
  public __gc class AdvRefID : public StringField
  {
  public:
  AdvRefID() : StringField(3) {}
    AdvRefID(String* data) : StringField(3, data) {}
  };
  
  public __gc class AdvSide : public CharField
  {
  public:
  static const __wchar_t BUY = 'B';
  static const __wchar_t SELL = 'S';
  static const __wchar_t CROSS = 'X';
  static const __wchar_t TRADE = 'T';
  AdvSide() : CharField(4) {}
    AdvSide(__wchar_t data) : CharField(4, data) {}
  };
  
  public __gc class AdvTransType : public StringField
  {
  public:
  static const String* NEW = "N";
  static const String* CANCEL = "C";
  static const String* REPLACE = "R";
  AdvTransType() : StringField(5) {}
    AdvTransType(String* data) : StringField(5, data) {}
  };
  
  public __gc class AvgPx : public DoubleField
  {
  public:
  AvgPx() : DoubleField(6) {}
    AvgPx(double data) : DoubleField(6, data) {}
  };
  
  public __gc class BeginSeqNo : public IntField
  {
  public:
  BeginSeqNo() : IntField(7) {}
    BeginSeqNo(int data) : IntField(7, data) {}
  };
  
  public __gc class BeginString : public StringField
  {
  public:
  BeginString() : StringField(8) {}
    BeginString(String* data) : StringField(8, data) {}
  };
  
  public __gc class BodyLength : public IntField
  {
  public:
  BodyLength() : IntField(9) {}
    BodyLength(int data) : IntField(9, data) {}
  };
  
  public __gc class CheckSum : public StringField
  {
  public:
  CheckSum() : StringField(10) {}
    CheckSum(String* data) : StringField(10, data) {}
  };
  
  public __gc class ClOrdID : public StringField
  {
  public:
  ClOrdID() : StringField(11) {}
    ClOrdID(String* data) : StringField(11, data) {}
  };
  
  public __gc class Commission : public DoubleField
  {
  public:
  Commission() : DoubleField(12) {}
    Commission(double data) : DoubleField(12, data) {}
  };
  
  public __gc class CommType : public CharField
  {
  public:
  static const __wchar_t PER_SHARE = '1';
  static const __wchar_t PERCENTAGE = '2';
  static const __wchar_t ABSOLUTE = '3';
  static const __wchar_t PERCENTAGE_WAIVED_CASH_DISCOUNT = '4';
  static const __wchar_t PERCENTAGE_WAIVED_ENHANCED_UNITS = '5';
  static const __wchar_t PER_BOND = '6';
  CommType() : CharField(13) {}
    CommType(__wchar_t data) : CharField(13, data) {}
  };
  
  public __gc class CumQty : public DoubleField
  {
  public:
  CumQty() : DoubleField(14) {}
    CumQty(double data) : DoubleField(14, data) {}
  };
  
  public __gc class Currency : public DoubleField
  {
  public:
  Currency() : DoubleField(15) {}
    Currency(double data) : DoubleField(15, data) {}
  };
  
  public __gc class EndSeqNo : public IntField
  {
  public:
  EndSeqNo() : IntField(16) {}
    EndSeqNo(int data) : IntField(16, data) {}
  };
  
  public __gc class ExecID : public StringField
  {
  public:
  ExecID() : StringField(17) {}
    ExecID(String* data) : StringField(17, data) {}
  };
  
  public __gc class ExecInst : public StringField
  {
  public:
  static const __wchar_t NOT_HELD = '1';
  static const __wchar_t WORK = '2';
  static const __wchar_t GO_ALONG = '3';
  static const __wchar_t OVER_THE_DAY = '4';
  static const __wchar_t HELD = '5';
  static const __wchar_t PARTICIPATE_DONT_INITIATE = '6';
  static const __wchar_t STRICT_SCALE = '7';
  static const __wchar_t TRY_TO_SCALE = '8';
  static const __wchar_t STAY_ON_BIDSIDE = '9';
  static const __wchar_t STAY_ON_OFFERSIDE = '0';
  static const __wchar_t NO_CROSS = 'A';
  static const __wchar_t OK_TO_CROSS = 'B';
  static const __wchar_t CALL_FIRST = 'C';
  static const __wchar_t PERCENT_OF_VOLUME = 'D';
  static const __wchar_t DO_NOT_INCREASE = 'E';
  static const __wchar_t DO_NOT_REDUCE = 'F';
  static const __wchar_t ALL_OR_NONE = 'G';
  static const __wchar_t REINSTATE_ON_SYSTEM_FAILURE = 'H';
  static const __wchar_t INSTITUTIONS_ONLY = 'I';
  static const __wchar_t REINSTATE_ON_TRADING_HALT = 'J';
  static const __wchar_t CANCEL_ON_TRADING_HALT = 'K';
  static const __wchar_t LAST_PEG = 'L';
  static const __wchar_t MID_PRICE_PEG = 'M';
  static const __wchar_t NON_NEGOTIABLE = 'N';
  static const __wchar_t OPENING_PEG = 'O';
  static const __wchar_t MARKET_PEG = 'P';
  static const __wchar_t CANCEL_ON_SYSTEM_FAILURE = 'Q';
  static const __wchar_t PRIMARY_PEG = 'R';
  static const __wchar_t SUSPEND = 'S';
  static const __wchar_t FIXED_PEG = 'T';
  static const __wchar_t CUSTOMER_DISPLAY_INSTRUCTION = 'U';
  static const __wchar_t NETTING = 'V';
  static const __wchar_t PEG_TO_VWAP = 'W';
  static const __wchar_t TRADE_ALONG = 'X';
  static const __wchar_t TRY_TO_STOP = 'Y';
  ExecInst() : StringField(18) {}
    ExecInst(String* data) : StringField(18, data) {}
  };
  
  public __gc class ExecRefID : public StringField
  {
  public:
  ExecRefID() : StringField(19) {}
    ExecRefID(String* data) : StringField(19, data) {}
  };
  
  public __gc class ExecTransType : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t CANCEL = '1';
  static const __wchar_t CORRECT = '2';
  static const __wchar_t STATUS = '3';
  ExecTransType() : CharField(20) {}
    ExecTransType(__wchar_t data) : CharField(20, data) {}
  };
  
  public __gc class HandlInst : public CharField
  {
  public:
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PRIVATE = '1';
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PUBLIC = '2';
  static const __wchar_t MANUAL_ORDER = '3';
  HandlInst() : CharField(21) {}
    HandlInst(__wchar_t data) : CharField(21, data) {}
  };
  
  public __gc class SecurityIDSource : public StringField
  {
  public:
  static const String* CUSIP = "1";
  static const String* SEDOL = "2";
  static const String* QUIK = "3";
  static const String* ISIN_NUMBER = "4";
  static const String* RIC_CODE = "5";
  static const String* ISO_CURRENCY_CODE = "6";
  static const String* ISO_COUNTRY_CODE = "7";
  static const String* EXCHANGE_SYMBOL = "8";
  static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
  static const String* BLOOMBERG_SYMBOL = "A";
  static const String* WERTPAPIER = "B";
  static const String* DUTCH = "C";
  static const String* VALOREN = "D";
  static const String* SICOVAM = "E";
  static const String* BELGIAN = "F";
  static const String* COMMON = "G";
  SecurityIDSource() : StringField(22) {}
    SecurityIDSource(String* data) : StringField(22, data) {}
  };
  
  public __gc class IOIid : public StringField
  {
  public:
  IOIid() : StringField(23) {}
    IOIid(String* data) : StringField(23, data) {}
  };
  
  public __gc class IOIOthSvc : public CharField
  {
  public:
  IOIOthSvc() : CharField(24) {}
    IOIOthSvc(__wchar_t data) : CharField(24, data) {}
  };
  
  public __gc class IOIQltyInd : public CharField
  {
  public:
  static const __wchar_t LOW = 'L';
  static const __wchar_t MEDIUM = 'M';
  static const __wchar_t HIGH = 'H';
  IOIQltyInd() : CharField(25) {}
    IOIQltyInd(__wchar_t data) : CharField(25, data) {}
  };
  
  public __gc class IOIRefID : public StringField
  {
  public:
  IOIRefID() : StringField(26) {}
    IOIRefID(String* data) : StringField(26, data) {}
  };
  
  public __gc class IOIQty : public StringField
  {
  public:
  static const String* SMALL = "S";
  static const String* MEDIUM = "M";
  static const String* LARGE = "L";
  IOIQty() : StringField(27) {}
    IOIQty(String* data) : StringField(27, data) {}
  };
  
  public __gc class IOITransType : public CharField
  {
  public:
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t REPLACE = 'R';
  IOITransType() : CharField(28) {}
    IOITransType(__wchar_t data) : CharField(28, data) {}
  };
  
  public __gc class LastCapacity : public CharField
  {
  public:
  static const __wchar_t AGENT = '1';
  static const __wchar_t CROSS_AS_AGENT = '2';
  static const __wchar_t CROSS_AS_PRINCIPAL = '3';
  static const __wchar_t PRINCIPAL = '4';
  LastCapacity() : CharField(29) {}
    LastCapacity(__wchar_t data) : CharField(29, data) {}
  };
  
  public __gc class LastMkt : public StringField
  {
  public:
  LastMkt() : StringField(30) {}
    LastMkt(String* data) : StringField(30, data) {}
  };
  
  public __gc class LastPx : public DoubleField
  {
  public:
  LastPx() : DoubleField(31) {}
    LastPx(double data) : DoubleField(31, data) {}
  };
  
  public __gc class LastQty : public DoubleField
  {
  public:
  LastQty() : DoubleField(32) {}
    LastQty(double data) : DoubleField(32, data) {}
  };
  
  public __gc class LinesOfText : public IntField
  {
  public:
  LinesOfText() : IntField(33) {}
    LinesOfText(int data) : IntField(33, data) {}
  };
  
  public __gc class MsgSeqNum : public IntField
  {
  public:
  MsgSeqNum() : IntField(34) {}
    MsgSeqNum(int data) : IntField(34, data) {}
  };
  
  public __gc class MsgType : public StringField
  {
  public:
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
  static const String* ORDER_CANCEL = "G";
  static const String* ORDER_STATUS_REQUEST = "H";
  static const String* ALLOCATION = "J";
  static const String* LIST_CANCEL_REQUEST = "K";
  static const String* LIST_EXECUTE = "L";
  static const String* LIST_STATUS_REQUEST = "M";
  static const String* LIST_STATUS = "N";
  static const String* ALLOCATION_ACK = "P";
  static const String* DONT_KNOW_TRADE = "Q";
  static const String* QUOTE_REQUEST = "R";
  static const String* QUOTE = "S";
  static const String* SETTLEMENT_INSTRUCTIONS = "T";
  static const String* MARKET_DATA_REQUEST = "V";
  static const String* MARKET_DATA_SNAPSHOT = "W";
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
  static const String* CROSS_ORDER_CANCEL = "t";
  static const String* CROSS_ORDER_CANCEL_REQUEST = "u";
  static const String* SECURITY_TYPE_REQUEST = "v";
  static const String* SECURITY_TYPES = "w";
  static const String* SECURITY_LIST_REQUEST = "x";
  static const String* SECURITY_LIST = "y";
  static const String* DERIVATIVE_SECURITY_LIST_REQUEST = "z";
  static const String* DERIVATIVE_SECURITY_LIST = "AA";
  static const String* NEW_ORDER_MULTILEG = "AB";
  static const String* MULTILEG_ORDER_CANCEL = "AC";
  static const String* TRADE_CAPTURE_REPORT_REQUEST = "AD";
  static const String* TRADE_CAPTURE_REPORT = "AE";
  static const String* ORDER_MASS_STATUS_REQUEST = "AF";
  static const String* QUOTE_REQUEST_REJECT = "AG";
  static const String* RFQ_REQUEST = "AH";
  static const String* QUOTE_STATUS_REPORT = "AI";
  MsgType() : StringField(35) {}
    MsgType(String* data) : StringField(35, data) {}
  };
  
  public __gc class NewSeqNo : public IntField
  {
  public:
  NewSeqNo() : IntField(36) {}
    NewSeqNo(int data) : IntField(36, data) {}
  };
  
  public __gc class OrderID : public StringField
  {
  public:
  OrderID() : StringField(37) {}
    OrderID(String* data) : StringField(37, data) {}
  };
  
  public __gc class OrderQty : public DoubleField
  {
  public:
  OrderQty() : DoubleField(38) {}
    OrderQty(double data) : DoubleField(38, data) {}
  };
  
  public __gc class OrdStatus : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t PARTIALLY_FILLED = '1';
  static const __wchar_t FILLED = '2';
  static const __wchar_t DONE_FOR_DAY = '3';
  static const __wchar_t CANCELED = '4';
  static const __wchar_t REPLACED = '5';
  static const __wchar_t PENDING_CANCEL = '6';
  static const __wchar_t STOPPED = '7';
  static const __wchar_t REJECTED = '8';
  static const __wchar_t SUSPENDED = '9';
  static const __wchar_t PENDING_NEW = 'A';
  static const __wchar_t CALCULATED = 'B';
  static const __wchar_t EXPIRED = 'C';
  static const __wchar_t ACCEPTED_FOR_BIDDING = 'D';
  static const __wchar_t PENDING_REPLACE = 'E';
  OrdStatus() : CharField(39) {}
    OrdStatus(__wchar_t data) : CharField(39, data) {}
  };
  
  public __gc class OrdType : public CharField
  {
  public:
  static const __wchar_t MARKET = '1';
  static const __wchar_t LIMIT = '2';
  static const __wchar_t STOP = '3';
  static const __wchar_t STOP_LIMIT = '4';
  static const __wchar_t MARKET_ON_CLOSE = '5';
  static const __wchar_t WITH_OR_WITHOUT = '6';
  static const __wchar_t LIMIT_OR_BETTER = '7';
  static const __wchar_t LIMIT_WITH_OR_WITHOUT = '8';
  static const __wchar_t ON_BASIS = '9';
  static const __wchar_t ON_CLOSE = 'A';
  static const __wchar_t LIMIT_ON_CLOSE = 'B';
  static const __wchar_t FOREX_MARKET = 'C';
  static const __wchar_t PREVIOUSLY_QUOTED = 'D';
  static const __wchar_t PREVIOUSLY_INDICATED = 'E';
  static const __wchar_t FOREX_LIMIT = 'F';
  static const __wchar_t FOREX_SWAP = 'G';
  static const __wchar_t FOREX_PREVIOUSLY_QUOTED = 'H';
  static const __wchar_t FUNARI = 'I';
  static const __wchar_t MARKET_IF_TOUCHED = 'J';
  static const __wchar_t MARKET_WITH_LEFTOVER_AS_LIMIT = 'K';
  static const __wchar_t PREVIOUS_FUND_VALUATION_POINT = 'L';
  static const __wchar_t NEXT_FUND_VALUATION_POINT = 'M';
  static const __wchar_t PEGGED = 'P';
  OrdType() : CharField(40) {}
    OrdType(__wchar_t data) : CharField(40, data) {}
  };
  
  public __gc class OrigClOrdID : public StringField
  {
  public:
  OrigClOrdID() : StringField(41) {}
    OrigClOrdID(String* data) : StringField(41, data) {}
  };
  
  public __gc class OrigTime : public UtcTimeStampField
  {
  public:
  OrigTime() : UtcTimeStampField(42) {}
    OrigTime(DateTime data) : UtcTimeStampField(42, data) {}
  };
  
  public __gc class PossDupFlag : public StringField
  {
  public:
  static const __wchar_t POSSIBLE_DUPLICATE = 'Y';
  static const __wchar_t ORIGINAL_TRANSMISSION = 'N';
  PossDupFlag() : StringField(43) {}
    PossDupFlag(String* data) : StringField(43, data) {}
  };
  
  public __gc class Price : public DoubleField
  {
  public:
  Price() : DoubleField(44) {}
    Price(double data) : DoubleField(44, data) {}
  };
  
  public __gc class RefSeqNum : public IntField
  {
  public:
  RefSeqNum() : IntField(45) {}
    RefSeqNum(int data) : IntField(45, data) {}
  };
  
  public __gc class RelatdSym : public StringField
  {
  public:
  RelatdSym() : StringField(46) {}
    RelatdSym(String* data) : StringField(46, data) {}
  };
  
  public __gc class Rule80A : public CharField
  {
  public:
  static const __wchar_t AGENCY_SINGLE_ORDER = 'A';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_A_TYPE = 'B';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM = 'C';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM = 'D';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL = 'E';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_W_TYPE = 'F';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_REFER_TO_I_TYPE = 'H';
  static const __wchar_t INDIVIDUAL_INVESTOR = 'I';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
  static const __wchar_t SHORT_EXEMPT_AFFILIATED = 'L';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER = 'N';
  static const __wchar_t PROPRIETARY_AFFILIATED = 'O';
  static const __wchar_t PRINCIPAL = 'P';
  static const __wchar_t TRANSACTIONS_NON_MEMBER = 'R';
  static const __wchar_t SPECIALIST_TRADES = 'S';
  static const __wchar_t TRANSACTIONS_UNAFFILIATED_MEMBER = 'T';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
  static const __wchar_t ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
  static const __wchar_t SHORT_EXEMPT_NOT_AFFILIATED = 'X';
  static const __wchar_t PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY = 'Y';
  static const __wchar_t SHORT_EXEMPT_NONMEMBER = 'Z';
  Rule80A() : CharField(47) {}
    Rule80A(__wchar_t data) : CharField(47, data) {}
  };
  
  public __gc class SecurityID : public StringField
  {
  public:
  SecurityID() : StringField(48) {}
    SecurityID(String* data) : StringField(48, data) {}
  };
  
  public __gc class SenderCompID : public StringField
  {
  public:
  SenderCompID() : StringField(49) {}
    SenderCompID(String* data) : StringField(49, data) {}
  };
  
  public __gc class SenderSubID : public StringField
  {
  public:
  SenderSubID() : StringField(50) {}
    SenderSubID(String* data) : StringField(50, data) {}
  };
  
  public __gc class SendingDate : public StringField
  {
  public:
  SendingDate() : StringField(51) {}
    SendingDate(String* data) : StringField(51, data) {}
  };
  
  public __gc class SendingTime : public UtcTimeStampField
  {
  public:
  SendingTime() : UtcTimeStampField(52) {}
    SendingTime(DateTime data) : UtcTimeStampField(52, data) {}
  };
  
  public __gc class Quantity : public DoubleField
  {
  public:
  Quantity() : DoubleField(53) {}
    Quantity(double data) : DoubleField(53, data) {}
  };
  
  public __gc class Side : public CharField
  {
  public:
  static const __wchar_t BUY = '1';
  static const __wchar_t SELL = '2';
  static const __wchar_t BUY_MINUS = '3';
  static const __wchar_t SELL_PLUS = '4';
  static const __wchar_t SELL_SHORT = '5';
  static const __wchar_t SELL_SHORT_EXEMPT = '6';
  static const __wchar_t UNDISCLOSED = '7';
  static const __wchar_t CROSS = '8';
  static const __wchar_t CROSS_SHORT = '9';
  static const __wchar_t CROSS_SHORT_EXEMPT = 'A';
  static const __wchar_t AS_DEFINED = 'B';
  static const __wchar_t OPPOSITE = 'C';
  Side() : CharField(54) {}
    Side(__wchar_t data) : CharField(54, data) {}
  };
  
  public __gc class Symbol : public StringField
  {
  public:
  Symbol() : StringField(55) {}
    Symbol(String* data) : StringField(55, data) {}
  };
  
  public __gc class TargetCompID : public StringField
  {
  public:
  TargetCompID() : StringField(56) {}
    TargetCompID(String* data) : StringField(56, data) {}
  };
  
  public __gc class TargetSubID : public StringField
  {
  public:
  TargetSubID() : StringField(57) {}
    TargetSubID(String* data) : StringField(57, data) {}
  };
  
  public __gc class Text : public StringField
  {
  public:
  Text() : StringField(58) {}
    Text(String* data) : StringField(58, data) {}
  };
  
  public __gc class TimeInForce : public CharField
  {
  public:
  static const __wchar_t DAY = '0';
  static const __wchar_t GOOD_TILL_CANCEL = '1';
  static const __wchar_t AT_THE_OPENING = '2';
  static const __wchar_t IMMEDIATE_OR_CANCEL = '3';
  static const __wchar_t FILL_OR_KILL = '4';
  static const __wchar_t GOOD_TILL_CROSSING = '5';
  static const __wchar_t GOOD_TILL_DATE = '6';
  static const __wchar_t AT_THE_CLOSE = '7';
  TimeInForce() : CharField(59) {}
    TimeInForce(__wchar_t data) : CharField(59, data) {}
  };
  
  public __gc class TransactTime : public UtcTimeStampField
  {
  public:
  TransactTime() : UtcTimeStampField(60) {}
    TransactTime(DateTime data) : UtcTimeStampField(60, data) {}
  };
  
  public __gc class Urgency : public CharField
  {
  public:
  static const __wchar_t NORMAL = '0';
  static const __wchar_t FLASH = '1';
  static const __wchar_t BACKGROUND = '2';
  Urgency() : CharField(61) {}
    Urgency(__wchar_t data) : CharField(61, data) {}
  };
  
  public __gc class ValidUntilTime : public UtcTimeStampField
  {
  public:
  ValidUntilTime() : UtcTimeStampField(62) {}
    ValidUntilTime(DateTime data) : UtcTimeStampField(62, data) {}
  };
  
  public __gc class SettlmntTyp : public CharField
  {
  public:
  static const __wchar_t REGULAR = '0';
  static const __wchar_t CASH = '1';
  static const __wchar_t NEXT_DAY = '2';
  static const __wchar_t T_PLUS_2 = '3';
  static const __wchar_t T_PLUS_3 = '4';
  static const __wchar_t T_PLUS_4 = '5';
  static const __wchar_t FUTURE = '6';
  static const __wchar_t WHEN_AND_IF_ISSUED = '7';
  static const __wchar_t SELLERS_OPTION = '8';
  static const __wchar_t T_PLUS_5 = '9';
  static const __wchar_t T_PLUS_1 = 'A';
  SettlmntTyp() : CharField(63) {}
    SettlmntTyp(__wchar_t data) : CharField(63, data) {}
  };
  
  public __gc class FutSettDate : public StringField
  {
  public:
  FutSettDate() : StringField(64) {}
    FutSettDate(String* data) : StringField(64, data) {}
  };
  
  public __gc class SymbolSfx : public StringField
  {
  public:
  SymbolSfx() : StringField(65) {}
    SymbolSfx(String* data) : StringField(65, data) {}
  };
  
  public __gc class ListID : public StringField
  {
  public:
  ListID() : StringField(66) {}
    ListID(String* data) : StringField(66, data) {}
  };
  
  public __gc class ListSeqNo : public IntField
  {
  public:
  ListSeqNo() : IntField(67) {}
    ListSeqNo(int data) : IntField(67, data) {}
  };
  
  public __gc class TotNoOrders : public IntField
  {
  public:
  TotNoOrders() : IntField(68) {}
    TotNoOrders(int data) : IntField(68, data) {}
  };
  
  public __gc class ListNoOrds : public IntField
  {
  public:
    ListNoOrds() : IntField(68) {}
    ListNoOrds(int data) : IntField(68, data) {}
  };
  
  public __gc class ListExecInst : public StringField
  {
  public:
  ListExecInst() : StringField(69) {}
    ListExecInst(String* data) : StringField(69, data) {}
  };
  
  public __gc class AllocID : public StringField
  {
  public:
  AllocID() : StringField(70) {}
    AllocID(String* data) : StringField(70, data) {}
  };
  
  public __gc class AllocTransType : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLACE = '1';
  static const __wchar_t CANCEL = '2';
  static const __wchar_t PRELIMINARY = '3';
  static const __wchar_t CALCULATED = '4';
  static const __wchar_t CALCULATED_WITHOUT_PRELIMINARY = '5';
  AllocTransType() : CharField(71) {}
    AllocTransType(__wchar_t data) : CharField(71, data) {}
  };
  
  public __gc class RefAllocID : public StringField
  {
  public:
  RefAllocID() : StringField(72) {}
    RefAllocID(String* data) : StringField(72, data) {}
  };
  
  public __gc class NoOrders : public IntField
  {
  public:
  NoOrders() : IntField(73) {}
    NoOrders(int data) : IntField(73, data) {}
  };
  
  public __gc class AvgPrxPrecision : public IntField
  {
  public:
  AvgPrxPrecision() : IntField(74) {}
    AvgPrxPrecision(int data) : IntField(74, data) {}
  };
  
  public __gc class TradeDate : public StringField
  {
  public:
  TradeDate() : StringField(75) {}
    TradeDate(String* data) : StringField(75, data) {}
  };
  
  public __gc class ExecBroker : public StringField
  {
  public:
  ExecBroker() : StringField(76) {}
    ExecBroker(String* data) : StringField(76, data) {}
  };
  
  public __gc class PositionEffect : public CharField
  {
  public:
  PositionEffect() : CharField(77) {}
    PositionEffect(__wchar_t data) : CharField(77, data) {}
  };
  
  public __gc class NoAllocs : public IntField
  {
  public:
  NoAllocs() : IntField(78) {}
    NoAllocs(int data) : IntField(78, data) {}
  };
  
  public __gc class AllocAccount : public StringField
  {
  public:
  AllocAccount() : StringField(79) {}
    AllocAccount(String* data) : StringField(79, data) {}
  };
  
  public __gc class AllocQty : public DoubleField
  {
  public:
  AllocQty() : DoubleField(80) {}
    AllocQty(double data) : DoubleField(80, data) {}
  };
  
  public __gc class ProcessCode : public CharField
  {
  public:
  static const __wchar_t REGULAR = '0';
  static const __wchar_t SOFT_DOLLAR = '1';
  static const __wchar_t STEP_IN = '2';
  static const __wchar_t STEP_OUT = '3';
  static const __wchar_t SOFT_DOLLAR_STEP_IN = '4';
  static const __wchar_t SOFT_DOLLAR_STEP_OUT = '5';
  static const __wchar_t PLAN_SPONSOR = '6';
  ProcessCode() : CharField(81) {}
    ProcessCode(__wchar_t data) : CharField(81, data) {}
  };
  
  public __gc class NoRpts : public IntField
  {
  public:
  NoRpts() : IntField(82) {}
    NoRpts(int data) : IntField(82, data) {}
  };
  
  public __gc class RptSeq : public IntField
  {
  public:
  RptSeq() : IntField(83) {}
    RptSeq(int data) : IntField(83, data) {}
  };
  
  public __gc class CxlQty : public DoubleField
  {
  public:
  CxlQty() : DoubleField(84) {}
    CxlQty(double data) : DoubleField(84, data) {}
  };
  
  public __gc class NoDlvyInst : public IntField
  {
  public:
  NoDlvyInst() : IntField(85) {}
    NoDlvyInst(int data) : IntField(85, data) {}
  };
  
  public __gc class DlvyInst : public StringField
  {
  public:
  DlvyInst() : StringField(86) {}
    DlvyInst(String* data) : StringField(86, data) {}
  };
  
  public __gc class AllocStatus : public IntField
  {
  public:
  static const int ACCEPTED = 0;
  static const int REJECTED = 1;
  static const int PARTIAL_ACCEPT = 2;
  static const int RECEIVED = 3;
  AllocStatus() : IntField(87) {}
    AllocStatus(int data) : IntField(87, data) {}
  };
  
  public __gc class AllocRejCode : public IntField
  {
  public:
  static const int UNKNOWN_ACCOUNT = 0;
  static const int INCORRECT_QUANTITY = 1;
  static const int INCORRECT_AVERAGE_PRICE = 2;
  static const int UNKNOWN_EXECUTING_BROKER_MNEMONIC = 3;
  static const int COMMISSION_DIFFERENCE = 4;
  static const int UNKNOWN_ORDERID = 5;
  static const int UNKNOWN_LISTID = 6;
  static const int OTHER = 7;
  AllocRejCode() : IntField(88) {}
    AllocRejCode(int data) : IntField(88, data) {}
  };
  
  public __gc class Signature : public StringField
  {
  public:
  Signature() : StringField(89) {}
    Signature(String* data) : StringField(89, data) {}
  };
  
  public __gc class SecureDataLen : public IntField
  {
  public:
  SecureDataLen() : IntField(90) {}
    SecureDataLen(int data) : IntField(90, data) {}
  };
  
  public __gc class SecureData : public StringField
  {
  public:
  SecureData() : StringField(91) {}
    SecureData(String* data) : StringField(91, data) {}
  };
  
  public __gc class BrokerOfCredit : public StringField
  {
  public:
  BrokerOfCredit() : StringField(92) {}
    BrokerOfCredit(String* data) : StringField(92, data) {}
  };
  
  public __gc class SignatureLength : public IntField
  {
  public:
  SignatureLength() : IntField(93) {}
    SignatureLength(int data) : IntField(93, data) {}
  };
  
  public __gc class EmailType : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLY = '1';
  static const __wchar_t ADMIN_REPLY = '2';
  EmailType() : CharField(94) {}
    EmailType(__wchar_t data) : CharField(94, data) {}
  };
  
  public __gc class RawDataLength : public IntField
  {
  public:
  RawDataLength() : IntField(95) {}
    RawDataLength(int data) : IntField(95, data) {}
  };
  
  public __gc class RawData : public StringField
  {
  public:
  RawData() : StringField(96) {}
    RawData(String* data) : StringField(96, data) {}
  };
  
  public __gc class PossResend : public StringField
  {
  public:
  PossResend() : StringField(97) {}
    PossResend(String* data) : StringField(97, data) {}
  };
  
  public __gc class EncryptMethod : public IntField
  {
  public:
  static const int NONE = 0;
  static const int PKCS_PROPRIETARY = 1;
  static const int DES = 2;
  static const int PKCS_DES = 3;
  static const int PGP_DES = 4;
  static const int PGP_DES_MD5 = 5;
  static const int PEM = 6;
  EncryptMethod() : IntField(98) {}
    EncryptMethod(int data) : IntField(98, data) {}
  };
  
  public __gc class StopPx : public DoubleField
  {
  public:
  StopPx() : DoubleField(99) {}
    StopPx(double data) : DoubleField(99, data) {}
  };
  
  public __gc class ExDestination : public StringField
  {
  public:
  ExDestination() : StringField(100) {}
    ExDestination(String* data) : StringField(100, data) {}
  };
  
  public __gc class CxlRejReason : public IntField
  {
  public:
  static const int TOO_LATE_TO_CANCEL = 0;
  static const int UNKNOWN_ORDER = 1;
  static const int BROKER = 2;
  static const int ALREADY_PENDING = 3;
  static const int UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = 4;
  static const int ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER = 5;
  static const int DUPLICATE_CLORDID_RECEIVED = 6;
  CxlRejReason() : IntField(102) {}
    CxlRejReason(int data) : IntField(102, data) {}
  };
  
  public __gc class OrdRejReason : public IntField
  {
  public:
  static const int BROKER = 0;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int ORDER_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_ORDER = 5;
  static const int DUPLICATE_ORDER = 6;
  static const int DUPLICATE_VERBAL = 7;
  static const int STALE_ORDER = 8;
  static const int TRADE_ALONG_REQUIRED = 9;
  static const int INVALID_INVESTOR_ID = 10;
  static const int UNSUPPORTED_ORDER_CHARACTERISTIC = 11;
  static const int SURVEILLENCE_OPTION = 12;
  OrdRejReason() : IntField(103) {}
    OrdRejReason(int data) : IntField(103, data) {}
  };
  
  public __gc class IOIQualifier : public CharField
  {
  public:
  static const __wchar_t ALL_OR_NONE = 'A';
  static const __wchar_t MARKET_ON_CLOSE = 'B';
  static const __wchar_t AT_THE_CLOSE = 'C';
  static const __wchar_t VWAP = 'D';
  static const __wchar_t IN_TOUCH_WITH = 'I';
  static const __wchar_t LIMIT = 'L';
  static const __wchar_t MORE_BEHIND = 'M';
  static const __wchar_t AT_THE_OPEN = 'O';
  static const __wchar_t TAKING_A_POSITION = 'P';
  static const __wchar_t AT_THE_MARKET = 'Q';
  static const __wchar_t READY_TO_TRADE = 'R';
  static const __wchar_t PORTFOLIO_SHOWN = 'S';
  static const __wchar_t THROUGH_THE_DAY = 'T';
  static const __wchar_t VERSUS = 'V';
  static const __wchar_t INDICATION = 'W';
  static const __wchar_t CROSSING_OPPORTUNITY = 'X';
  static const __wchar_t AT_THE_MIDPOINT = 'Y';
  static const __wchar_t PRE_OPEN = 'Z';
  IOIQualifier() : CharField(104) {}
    IOIQualifier(__wchar_t data) : CharField(104, data) {}
  };
  
  public __gc class WaveNo : public StringField
  {
  public:
  WaveNo() : StringField(105) {}
    WaveNo(String* data) : StringField(105, data) {}
  };
  
  public __gc class Issuer : public StringField
  {
  public:
  Issuer() : StringField(106) {}
    Issuer(String* data) : StringField(106, data) {}
  };
  
  public __gc class SecurityDesc : public StringField
  {
  public:
  SecurityDesc() : StringField(107) {}
    SecurityDesc(String* data) : StringField(107, data) {}
  };
  
  public __gc class HeartBtInt : public IntField
  {
  public:
  HeartBtInt() : IntField(108) {}
    HeartBtInt(int data) : IntField(108, data) {}
  };
  
  public __gc class ClientID : public StringField
  {
  public:
  ClientID() : StringField(109) {}
    ClientID(String* data) : StringField(109, data) {}
  };
  
  public __gc class MinQty : public DoubleField
  {
  public:
  MinQty() : DoubleField(110) {}
    MinQty(double data) : DoubleField(110, data) {}
  };
  
  public __gc class MaxFloor : public DoubleField
  {
  public:
  MaxFloor() : DoubleField(111) {}
    MaxFloor(double data) : DoubleField(111, data) {}
  };
  
  public __gc class TestReqID : public StringField
  {
  public:
  TestReqID() : StringField(112) {}
    TestReqID(String* data) : StringField(112, data) {}
  };
  
  public __gc class ReportToExch : public StringField
  {
  public:
  static const __wchar_t YES = 'Y';
  static const __wchar_t NO = 'N';
  ReportToExch() : StringField(113) {}
    ReportToExch(String* data) : StringField(113, data) {}
  };
  
  public __gc class LocateReqd : public StringField
  {
  public:
  static const __wchar_t YES = 'Y';
  static const __wchar_t NO = 'N';
  LocateReqd() : StringField(114) {}
    LocateReqd(String* data) : StringField(114, data) {}
  };
  
  public __gc class OnBehalfOfCompID : public StringField
  {
  public:
  OnBehalfOfCompID() : StringField(115) {}
    OnBehalfOfCompID(String* data) : StringField(115, data) {}
  };
  
  public __gc class OnBehalfOfSubID : public StringField
  {
  public:
  OnBehalfOfSubID() : StringField(116) {}
    OnBehalfOfSubID(String* data) : StringField(116, data) {}
  };
  
  public __gc class QuoteID : public StringField
  {
  public:
  QuoteID() : StringField(117) {}
    QuoteID(String* data) : StringField(117, data) {}
  };
  
  public __gc class NetMoney : public DoubleField
  {
  public:
  NetMoney() : DoubleField(118) {}
    NetMoney(double data) : DoubleField(118, data) {}
  };
  
  public __gc class SettlCurrAmt : public DoubleField
  {
  public:
  SettlCurrAmt() : DoubleField(119) {}
    SettlCurrAmt(double data) : DoubleField(119, data) {}
  };
  
  public __gc class SettlCurrency : public DoubleField
  {
  public:
  SettlCurrency() : DoubleField(120) {}
    SettlCurrency(double data) : DoubleField(120, data) {}
  };
  
  public __gc class ForexReq : public StringField
  {
  public:
  static const __wchar_t YES = 'Y';
  static const __wchar_t NO = 'N';
  ForexReq() : StringField(121) {}
    ForexReq(String* data) : StringField(121, data) {}
  };
  
  public __gc class OrigSendingTime : public UtcTimeStampField
  {
  public:
  OrigSendingTime() : UtcTimeStampField(122) {}
    OrigSendingTime(DateTime data) : UtcTimeStampField(122, data) {}
  };
  
  public __gc class GapFillFlag : public StringField
  {
  public:
  static const __wchar_t GAP_FILL_MESSAGE = 'Y';
  static const __wchar_t SEQUENCE_RESET = 'N';
  GapFillFlag() : StringField(123) {}
    GapFillFlag(String* data) : StringField(123, data) {}
  };
  
  public __gc class NoExecs : public IntField
  {
  public:
  NoExecs() : IntField(124) {}
    NoExecs(int data) : IntField(124, data) {}
  };
  
  public __gc class CxlType : public CharField
  {
  public:
  CxlType() : CharField(125) {}
    CxlType(__wchar_t data) : CharField(125, data) {}
  };
  
  public __gc class ExpireTime : public UtcTimeStampField
  {
  public:
  ExpireTime() : UtcTimeStampField(126) {}
    ExpireTime(DateTime data) : UtcTimeStampField(126, data) {}
  };
  
  public __gc class DKReason : public CharField
  {
  public:
  static const __wchar_t UNKNOWN_SYMBOL = 'A';
  static const __wchar_t WRONG_SIDE = 'B';
  static const __wchar_t QUANTITY_EXCEEDS_ORDER = 'C';
  static const __wchar_t NO_MATCHING_ORDER = 'D';
  static const __wchar_t PRICE_EXCEEDS_LIMIT = 'E';
  static const __wchar_t OTHER = 'Z';
  DKReason() : CharField(127) {}
    DKReason(__wchar_t data) : CharField(127, data) {}
  };
  
  public __gc class DeliverToCompID : public StringField
  {
  public:
  DeliverToCompID() : StringField(128) {}
    DeliverToCompID(String* data) : StringField(128, data) {}
  };
  
  public __gc class DeliverToSubID : public StringField
  {
  public:
  DeliverToSubID() : StringField(129) {}
    DeliverToSubID(String* data) : StringField(129, data) {}
  };
  
  public __gc class IOINaturalFlag : public StringField
  {
  public:
  static const __wchar_t NATURAL = 'Y';
  static const __wchar_t NOT_NATURAL = 'N';
  IOINaturalFlag() : StringField(130) {}
    IOINaturalFlag(String* data) : StringField(130, data) {}
  };
  
  public __gc class QuoteReqID : public StringField
  {
  public:
  QuoteReqID() : StringField(131) {}
    QuoteReqID(String* data) : StringField(131, data) {}
  };
  
  public __gc class BidPx : public DoubleField
  {
  public:
  BidPx() : DoubleField(132) {}
    BidPx(double data) : DoubleField(132, data) {}
  };
  
  public __gc class OfferPx : public DoubleField
  {
  public:
  OfferPx() : DoubleField(133) {}
    OfferPx(double data) : DoubleField(133, data) {}
  };
  
  public __gc class BidSize : public DoubleField
  {
  public:
  BidSize() : DoubleField(134) {}
    BidSize(double data) : DoubleField(134, data) {}
  };
  
  public __gc class OfferSize : public DoubleField
  {
  public:
  OfferSize() : DoubleField(135) {}
    OfferSize(double data) : DoubleField(135, data) {}
  };
  
  public __gc class NoMiscFees : public IntField
  {
  public:
  NoMiscFees() : IntField(136) {}
    NoMiscFees(int data) : IntField(136, data) {}
  };
  
  public __gc class MiscFeeAmt : public DoubleField
  {
  public:
  MiscFeeAmt() : DoubleField(137) {}
    MiscFeeAmt(double data) : DoubleField(137, data) {}
  };
  
  public __gc class MiscFeeCurr : public DoubleField
  {
  public:
  MiscFeeCurr() : DoubleField(138) {}
    MiscFeeCurr(double data) : DoubleField(138, data) {}
  };
  
  public __gc class MiscFeeType : public CharField
  {
  public:
  static const __wchar_t REGULATORY = '1';
  static const __wchar_t TAX = '2';
  static const __wchar_t LOCAL_COMMISSION = '3';
  static const __wchar_t EXCHANGE_FEES = '4';
  static const __wchar_t STAMP = '5';
  static const __wchar_t LEVY = '6';
  static const __wchar_t OTHER = '7';
  static const __wchar_t MARKUP = '8';
  static const __wchar_t CONSUMPTION_TAX = '9';
  MiscFeeType() : CharField(139) {}
    MiscFeeType(__wchar_t data) : CharField(139, data) {}
  };
  
  public __gc class PrevClosePx : public DoubleField
  {
  public:
  PrevClosePx() : DoubleField(140) {}
    PrevClosePx(double data) : DoubleField(140, data) {}
  };
  
  public __gc class ResetSeqNumFlag : public StringField
  {
  public:
  static const __wchar_t YES = 'Y';
  static const __wchar_t NO = 'N';
  ResetSeqNumFlag() : StringField(141) {}
    ResetSeqNumFlag(String* data) : StringField(141, data) {}
  };
  
  public __gc class SenderLocationID : public StringField
  {
  public:
  SenderLocationID() : StringField(142) {}
    SenderLocationID(String* data) : StringField(142, data) {}
  };
  
  public __gc class TargetLocationID : public StringField
  {
  public:
  TargetLocationID() : StringField(143) {}
    TargetLocationID(String* data) : StringField(143, data) {}
  };
  
  public __gc class OnBehalfOfLocationID : public StringField
  {
  public:
  OnBehalfOfLocationID() : StringField(144) {}
    OnBehalfOfLocationID(String* data) : StringField(144, data) {}
  };
  
  public __gc class DeliverToLocationID : public StringField
  {
  public:
  DeliverToLocationID() : StringField(145) {}
    DeliverToLocationID(String* data) : StringField(145, data) {}
  };
  
  public __gc class NoRelatedSym : public IntField
  {
  public:
  NoRelatedSym() : IntField(146) {}
    NoRelatedSym(int data) : IntField(146, data) {}
  };
  
  public __gc class Subject : public StringField
  {
  public:
  Subject() : StringField(147) {}
    Subject(String* data) : StringField(147, data) {}
  };
  
  public __gc class Headline : public StringField
  {
  public:
  Headline() : StringField(148) {}
    Headline(String* data) : StringField(148, data) {}
  };
  
  public __gc class URLLink : public StringField
  {
  public:
  URLLink() : StringField(149) {}
    URLLink(String* data) : StringField(149, data) {}
  };
  
  public __gc class ExecType : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t PARTIAL_FILL = '1';
  static const __wchar_t FILL = '2';
  static const __wchar_t DONE_FOR_DAY = '3';
  static const __wchar_t CANCELED = '4';
  static const __wchar_t REPLACE = '5';
  static const __wchar_t PENDING_CANCEL = '6';
  static const __wchar_t STOPPED = '7';
  static const __wchar_t REJECTED = '8';
  static const __wchar_t SUSPENDED = '9';
  static const __wchar_t PENDING_NEW = 'A';
  static const __wchar_t CALCULATED = 'B';
  static const __wchar_t EXPIRED = 'C';
  static const __wchar_t RESTATED = 'D';
  static const __wchar_t PENDING_REPLACE = 'E';
  static const __wchar_t TRADE = 'F';
  static const __wchar_t TRADE_CORRECT = 'G';
  static const __wchar_t TRADE_CANCEL = 'H';
  static const __wchar_t ORDER_STATUS = 'I';
  ExecType() : CharField(150) {}
    ExecType(__wchar_t data) : CharField(150, data) {}
  };
  
  public __gc class LeavesQty : public DoubleField
  {
  public:
  LeavesQty() : DoubleField(151) {}
    LeavesQty(double data) : DoubleField(151, data) {}
  };
  
  public __gc class CashOrderQty : public DoubleField
  {
  public:
  CashOrderQty() : DoubleField(152) {}
    CashOrderQty(double data) : DoubleField(152, data) {}
  };
  
  public __gc class AllocAvgPx : public DoubleField
  {
  public:
  AllocAvgPx() : DoubleField(153) {}
    AllocAvgPx(double data) : DoubleField(153, data) {}
  };
  
  public __gc class AllocNetMoney : public DoubleField
  {
  public:
  AllocNetMoney() : DoubleField(154) {}
    AllocNetMoney(double data) : DoubleField(154, data) {}
  };
  
  public __gc class SettlCurrFxRate : public DoubleField
  {
  public:
  SettlCurrFxRate() : DoubleField(155) {}
    SettlCurrFxRate(double data) : DoubleField(155, data) {}
  };
  
  public __gc class SettlCurrFxRateCalc : public CharField
  {
  public:
  SettlCurrFxRateCalc() : CharField(156) {}
    SettlCurrFxRateCalc(__wchar_t data) : CharField(156, data) {}
  };
  
  public __gc class NumDaysInterest : public IntField
  {
  public:
  NumDaysInterest() : IntField(157) {}
    NumDaysInterest(int data) : IntField(157, data) {}
  };
  
  public __gc class AccruedInterestRate : public DoubleField
  {
  public:
  AccruedInterestRate() : DoubleField(158) {}
    AccruedInterestRate(double data) : DoubleField(158, data) {}
  };
  
  public __gc class AccruedInterestAmt : public DoubleField
  {
  public:
  AccruedInterestAmt() : DoubleField(159) {}
    AccruedInterestAmt(double data) : DoubleField(159, data) {}
  };
  
  public __gc class SettlInstMode : public CharField
  {
  public:
  static const __wchar_t DEFAULT = '0';
  static const __wchar_t STANDING_INSTRUCTIONS_PROVIDED = '1';
  static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING = '2';
  static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_STANDING = '3';
  static const __wchar_t SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = '4';
  SettlInstMode() : CharField(160) {}
    SettlInstMode(__wchar_t data) : CharField(160, data) {}
  };
  
  public __gc class AllocText : public StringField
  {
  public:
  AllocText() : StringField(161) {}
    AllocText(String* data) : StringField(161, data) {}
  };
  
  public __gc class SettlInstID : public StringField
  {
  public:
  SettlInstID() : StringField(162) {}
    SettlInstID(String* data) : StringField(162, data) {}
  };
  
  public __gc class SettlInstTransType : public CharField
  {
  public:
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t REPLACE = 'R';
  SettlInstTransType() : CharField(163) {}
    SettlInstTransType(__wchar_t data) : CharField(163, data) {}
  };
  
  public __gc class EmailThreadID : public StringField
  {
  public:
  EmailThreadID() : StringField(164) {}
    EmailThreadID(String* data) : StringField(164, data) {}
  };
  
  public __gc class SettlInstSource : public CharField
  {
  public:
  static const __wchar_t BROKERS_INSTRUCTIONS = '1';
  static const __wchar_t INSTITUTIONS_INSTRUCTIONS = '2';
  static const __wchar_t INVESTOR = '3';
  SettlInstSource() : CharField(165) {}
    SettlInstSource(__wchar_t data) : CharField(165, data) {}
  };
  
  public __gc class SettlLocation : public StringField
  {
  public:
  static const String* CEDEL = "CED";
  static const String* DEPOSITORY_TRUST_COMPANY = "DTC";
  static const String* EUROCLEAR = "EUR";
  static const String* FEDERAL_BOOK_ENTRY = "FED";
  static const String* PHYSICAL = "PED";
  static const String* PARTICIPANT_TRUST_COMPANY_ISO_COUNTRY = "PTC";
  SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
  };
  
  public __gc class SecurityType : public StringField
  {
  public:
  static const String* CORPORATE_BOND = "CORP";
  static const String* CORPORATE_PRIVATE_PLACEMENT = "CPP";
  static const String* CONVERTABLE_BOND = "CB";
  static const String* DUAL_CURRENCY = "DUAL";
  static const String* INDEX_LINKED = "XLINKD";
  static const String* STRUCTURED_NOTES = "STRUCT";
  static const String* YANKEE_CORPORATE_BOND = "YANK";
  static const String* FOREIGN_EXCHANGE_CONTRACT = "FOR";
  static const String* COMMON_STOCK = "CS";
  static const String* PREFERED_STOCK = "PS";
  static const String* BRADY_BOND = "BRADY";
  static const String* US_TREASURY_BOND = "TBOND";
  static const String* INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = "TINT";
  static const String* TREASURY_INFLATION_PROTECTED_SECURITIES = "TIPS";
  static const String* PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = "TCAL";
  static const String* PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = "TPRN";
  static const String* US_TREASURY_NOTE_BOND = "UST";
  static const String* US_TREASURY_BILL = "USTB";
  static const String* TERM_LOAN = "TERM";
  static const String* REVOLVER_LOAN = "RVLV";
  static const String* REVOLVER_TERM_LOAN = "RVLVTRM";
  static const String* BRIDGE_LOAN = "BRIDGE";
  static const String* LETTER_OF_CREDIT = "LOFC";
  static const String* SWING_LINE_FACILITY = "SWING";
  static const String* DEBTOR_IN_POSSESSION = "DINP";
  static const String* DEFAULTED = "DEFLTED";
  static const String* WITHDRAWN = "WITHDRN";
  static const String* REPLACED = "REPLACD";
  static const String* MATURED = "MATURED";
  static const String* AMENDED_AND_RESTATED = "AMENDED";
  static const String* RETIRED = "RETIRED";
  static const String* BANKERS_ACCEPTANCE = "BA";
  static const String* BANK_NOTES = "BN";
  static const String* BILL_OF_EXCHANGES = "BOX";
  static const String* CERTIFICATE_OF_DEPOSIT = "CD";
  static const String* CALL_LOANS = "CL";
  static const String* COMMERCIAL_PAPER = "CP";
  static const String* DEPOSIT_NOTES = "DP";
  static const String* LIQUIDITY_NOTES = "LQN";
  static const String* MEDIUM_TERM_NOTES = "MTN";
  static const String* OVERNITE = "ONITE";
  static const String* PROMISSORY_NOTES = "PN";
  static const String* PLAZOS_FIJOS = "PZFJ";
  static const String* REPURCHASE_AGREEMENT = "RP";
  static const String* REVERSE_REPURCHASE_AGREEMENT = "RVRP";
  static const String* SHORT_TERM_LOAN_NOTE = "STN";
  static const String* TIME_DEPOSIT = "TD";
  static const String* EXTENDED_COMM_NOTE = "XCN";
  static const String* AGENCY_POOLS = "POOL";
  static const String* ASSET_BACKED_SECURITIES = "ABS";
  static const String* CORP_MORTGAGE_BACKED_SECURITIES = "CMBS";
  static const String* COLLATERALIZED_MORTGAGE_OBLIGATION = "CMO";
  static const String* IOETTE_MORTGAGE = "IET";
  static const String* MORTGAGE_BACKED_SECURITIES = "MBS";
  static const String* MORTGAGE_INTEREST_ONLY = "MIO";
  static const String* MORTGAGE_PRINCIPAL_ONLY = "MPO";
  static const String* MORTGAGE_PRIVATE_PLACEMENT = "MPP";
  static const String* MISCELLANEOUS_PASS_THROUGH = "MPT";
  static const String* OTHER_ANTICIPATION_NOTES = "AN";
  static const String* CERTIFICATE_OF_OBLIGATION = "COFO";
  static const String* CERTIFICATE_OF_PARTICIPATION = "COFP";
  static const String* GENERAL_OBLIGATION_BONDS = "GO";
  static const String* MANDATORY_TENDER = "MT";
  static const String* REVENUE_ANTICIPATION_NOTE = "RAN";
  static const String* REVENUE_BONDS = "REV";
  static const String* SPECIAL_ASSESSMENT = "SPCLA";
  static const String* SPECIAL_OBLIGATION = "SPCLO";
  static const String* SPECIAL_TAX = "SPCLT";
  static const String* TAX_ANTICIPATION_NOTE = "TAN";
  static const String* TAX_ALLOCATION = "TAXA";
  static const String* TAX_EXEMPT_COMMERCIAL_PAPER = "TECP";
  static const String* TAX_AND_REVENUE_ANTICIPATION_NOTE = "TRAN";
  static const String* VARIABLE_RATE_DEMAND_NOTE = "VRDN";
  static const String* WARRANT = "WAR";
  static const String* MUTUAL_FUND = "MF";
  static const String* MULTI_LEG_INSTRUMENT = "MLEG";
  static const String* NO_SECURITY_TYPE = "NONE";
  static const String* WILDCARD = "?";
  SecurityType() : StringField(167) {}
    SecurityType(String* data) : StringField(167, data) {}
  };
  
  public __gc class EffectiveTime : public UtcTimeStampField
  {
  public:
  EffectiveTime() : UtcTimeStampField(168) {}
    EffectiveTime(DateTime data) : UtcTimeStampField(168, data) {}
  };
  
  public __gc class StandInstDbType : public IntField
  {
  public:
  static const int OTHER = 0;
  static const int DTC_SID = 1;
  static const int THOMSON_ALERT = 2;
  static const int A_GLOBAL_CUSTODIAN = 3;
  StandInstDbType() : IntField(169) {}
    StandInstDbType(int data) : IntField(169, data) {}
  };
  
  public __gc class StandInstDbName : public StringField
  {
  public:
  StandInstDbName() : StringField(170) {}
    StandInstDbName(String* data) : StringField(170, data) {}
  };
  
  public __gc class StandInstDbID : public StringField
  {
  public:
  StandInstDbID() : StringField(171) {}
    StandInstDbID(String* data) : StringField(171, data) {}
  };
  
  public __gc class SettlDeliveryType : public IntField
  {
  public:
  SettlDeliveryType() : IntField(172) {}
    SettlDeliveryType(int data) : IntField(172, data) {}
  };
  
  public __gc class SettlDepositoryCode : public StringField
  {
  public:
  SettlDepositoryCode() : StringField(173) {}
    SettlDepositoryCode(String* data) : StringField(173, data) {}
  };
  
  public __gc class SettlBrkrCode : public StringField
  {
  public:
  SettlBrkrCode() : StringField(174) {}
    SettlBrkrCode(String* data) : StringField(174, data) {}
  };
  
  public __gc class SettlInstCode : public StringField
  {
  public:
  SettlInstCode() : StringField(175) {}
    SettlInstCode(String* data) : StringField(175, data) {}
  };
  
  public __gc class SecuritySettlAgentName : public StringField
  {
  public:
  SecuritySettlAgentName() : StringField(176) {}
    SecuritySettlAgentName(String* data) : StringField(176, data) {}
  };
  
  public __gc class SecuritySettlAgentCode : public StringField
  {
  public:
  SecuritySettlAgentCode() : StringField(177) {}
    SecuritySettlAgentCode(String* data) : StringField(177, data) {}
  };
  
  public __gc class SecuritySettlAgentAcctNum : public StringField
  {
  public:
  SecuritySettlAgentAcctNum() : StringField(178) {}
    SecuritySettlAgentAcctNum(String* data) : StringField(178, data) {}
  };
  
  public __gc class SecuritySettlAgentAcctName : public StringField
  {
  public:
  SecuritySettlAgentAcctName() : StringField(179) {}
    SecuritySettlAgentAcctName(String* data) : StringField(179, data) {}
  };
  
  public __gc class SecuritySettlAgentContactName : public StringField
  {
  public:
  SecuritySettlAgentContactName() : StringField(180) {}
    SecuritySettlAgentContactName(String* data) : StringField(180, data) {}
  };
  
  public __gc class SecuritySettlAgentContactPhone : public StringField
  {
  public:
  SecuritySettlAgentContactPhone() : StringField(181) {}
    SecuritySettlAgentContactPhone(String* data) : StringField(181, data) {}
  };
  
  public __gc class CashSettlAgentName : public StringField
  {
  public:
  CashSettlAgentName() : StringField(182) {}
    CashSettlAgentName(String* data) : StringField(182, data) {}
  };
  
  public __gc class CashSettlAgentCode : public StringField
  {
  public:
  CashSettlAgentCode() : StringField(183) {}
    CashSettlAgentCode(String* data) : StringField(183, data) {}
  };
  
  public __gc class CashSettlAgentAcctNum : public StringField
  {
  public:
  CashSettlAgentAcctNum() : StringField(184) {}
    CashSettlAgentAcctNum(String* data) : StringField(184, data) {}
  };
  
  public __gc class CashSettlAgentAcctName : public StringField
  {
  public:
  CashSettlAgentAcctName() : StringField(185) {}
    CashSettlAgentAcctName(String* data) : StringField(185, data) {}
  };
  
  public __gc class CashSettlAgentContactName : public StringField
  {
  public:
  CashSettlAgentContactName() : StringField(186) {}
    CashSettlAgentContactName(String* data) : StringField(186, data) {}
  };
  
  public __gc class CashSettlAgentContactPhone : public StringField
  {
  public:
  CashSettlAgentContactPhone() : StringField(187) {}
    CashSettlAgentContactPhone(String* data) : StringField(187, data) {}
  };
  
  public __gc class BidSpotRate : public DoubleField
  {
  public:
  BidSpotRate() : DoubleField(188) {}
    BidSpotRate(double data) : DoubleField(188, data) {}
  };
  
  public __gc class BidForwardPoints : public DoubleField
  {
  public:
  BidForwardPoints() : DoubleField(189) {}
    BidForwardPoints(double data) : DoubleField(189, data) {}
  };
  
  public __gc class OfferSpotRate : public DoubleField
  {
  public:
  OfferSpotRate() : DoubleField(190) {}
    OfferSpotRate(double data) : DoubleField(190, data) {}
  };
  
  public __gc class OfferForwardPoints : public DoubleField
  {
  public:
  OfferForwardPoints() : DoubleField(191) {}
    OfferForwardPoints(double data) : DoubleField(191, data) {}
  };
  
  public __gc class OrderQty2 : public DoubleField
  {
  public:
  OrderQty2() : DoubleField(192) {}
    OrderQty2(double data) : DoubleField(192, data) {}
  };
  
  public __gc class FutSettDate2 : public StringField
  {
  public:
  FutSettDate2() : StringField(193) {}
    FutSettDate2(String* data) : StringField(193, data) {}
  };
  
  public __gc class LastSpotRate : public DoubleField
  {
  public:
  LastSpotRate() : DoubleField(194) {}
    LastSpotRate(double data) : DoubleField(194, data) {}
  };
  
  public __gc class LastForwardPoints : public DoubleField
  {
  public:
  LastForwardPoints() : DoubleField(195) {}
    LastForwardPoints(double data) : DoubleField(195, data) {}
  };
  
  public __gc class AllocLinkID : public StringField
  {
  public:
  AllocLinkID() : StringField(196) {}
    AllocLinkID(String* data) : StringField(196, data) {}
  };
  
  public __gc class AllocLinkType : public IntField
  {
  public:
  static const int F_X_NETTING = 0;
  static const int F_X_SWAP = 1;
  AllocLinkType() : IntField(197) {}
    AllocLinkType(int data) : IntField(197, data) {}
  };
  
  public __gc class SecondaryOrderID : public StringField
  {
  public:
  SecondaryOrderID() : StringField(198) {}
    SecondaryOrderID(String* data) : StringField(198, data) {}
  };
  
  public __gc class NoIOIQualifiers : public IntField
  {
  public:
  NoIOIQualifiers() : IntField(199) {}
    NoIOIQualifiers(int data) : IntField(199, data) {}
  };
  
  public __gc class MaturityMonthYear : public StringField
  {
  public:
  MaturityMonthYear() : StringField(200) {}
    MaturityMonthYear(String* data) : StringField(200, data) {}
  };
  
  public __gc class PutOrCall : public IntField
  {
  public:
  static const int PUT = 0;
  static const int CALL = 1;
  PutOrCall() : IntField(201) {}
    PutOrCall(int data) : IntField(201, data) {}
  };
  
  public __gc class StrikePrice : public DoubleField
  {
  public:
  StrikePrice() : DoubleField(202) {}
    StrikePrice(double data) : DoubleField(202, data) {}
  };
  
  public __gc class CoveredOrUncovered : public IntField
  {
  public:
  static const int COVERED = 0;
  static const int UNCOVERED = 1;
  CoveredOrUncovered() : IntField(203) {}
    CoveredOrUncovered(int data) : IntField(203, data) {}
  };
  
  public __gc class CustomerOrFirm : public IntField
  {
  public:
  static const int CUSTOMER = 0;
  static const int FIRM = 1;
  CustomerOrFirm() : IntField(204) {}
    CustomerOrFirm(int data) : IntField(204, data) {}
  };
  
  public __gc class MaturityDay : public StringField
  {
  public:
  MaturityDay() : StringField(205) {}
    MaturityDay(String* data) : StringField(205, data) {}
  };
  
  public __gc class OptAttribute : public CharField
  {
  public:
  OptAttribute() : CharField(206) {}
    OptAttribute(__wchar_t data) : CharField(206, data) {}
  };
  
  public __gc class SecurityExchange : public StringField
  {
  public:
  SecurityExchange() : StringField(207) {}
    SecurityExchange(String* data) : StringField(207, data) {}
  };
  
  public __gc class NotifyBrokerOfCredit : public StringField
  {
  public:
  static const __wchar_t DETAILS_SHOULD_BE_COMMUNICATED = 'Y';
  static const __wchar_t DETAILS_SHOULD_NOT_BE_COMMUNICATED = 'N';
  NotifyBrokerOfCredit() : StringField(208) {}
    NotifyBrokerOfCredit(String* data) : StringField(208, data) {}
  };
  
  public __gc class AllocHandlInst : public IntField
  {
  public:
  static const int MATCH = 1;
  static const int FORWARD = 2;
  static const int FORWARD_AND_MATCH = 3;
  AllocHandlInst() : IntField(209) {}
    AllocHandlInst(int data) : IntField(209, data) {}
  };
  
  public __gc class MaxShow : public DoubleField
  {
  public:
  MaxShow() : DoubleField(210) {}
    MaxShow(double data) : DoubleField(210, data) {}
  };
  
  public __gc class PegDifference : public DoubleField
  {
  public:
  PegDifference() : DoubleField(211) {}
    PegDifference(double data) : DoubleField(211, data) {}
  };
  
  public __gc class XmlDataLen : public IntField
  {
  public:
  XmlDataLen() : IntField(212) {}
    XmlDataLen(int data) : IntField(212, data) {}
  };
  
  public __gc class XmlData : public StringField
  {
  public:
  XmlData() : StringField(213) {}
    XmlData(String* data) : StringField(213, data) {}
  };
  
  public __gc class SettlInstRefID : public StringField
  {
  public:
  SettlInstRefID() : StringField(214) {}
    SettlInstRefID(String* data) : StringField(214, data) {}
  };
  
  public __gc class NoRoutingIDs : public IntField
  {
  public:
  NoRoutingIDs() : IntField(215) {}
    NoRoutingIDs(int data) : IntField(215, data) {}
  };
  
  public __gc class RoutingType : public IntField
  {
  public:
  static const int TARGET_FIRM = 1;
  static const int TARGET_LIST = 2;
  static const int BLOCK_FIRM = 3;
  static const int BLOCK_LIST = 4;
  RoutingType() : IntField(216) {}
    RoutingType(int data) : IntField(216, data) {}
  };
  
  public __gc class RoutingID : public StringField
  {
  public:
  RoutingID() : StringField(217) {}
    RoutingID(String* data) : StringField(217, data) {}
  };
  
  public __gc class Spread : public DoubleField
  {
  public:
  Spread() : DoubleField(218) {}
    Spread(double data) : DoubleField(218, data) {}
  };
  
  public __gc class Benchmark : public CharField
  {
  public:
  static const __wchar_t CURVE = '1';
  static const __wchar_t FIVEYR = '2';
  static const __wchar_t OLD5 = '3';
  static const __wchar_t TENYR = '4';
  static const __wchar_t OLD10 = '5';
  static const __wchar_t THIRTYYR = '6';
  static const __wchar_t OLD30 = '7';
  static const __wchar_t THREEMOLIBOR = '8';
  static const __wchar_t SIXMOLIBOR = '9';
  Benchmark() : CharField(219) {}
    Benchmark(__wchar_t data) : CharField(219, data) {}
  };
  
  public __gc class BenchmarkCurveCurrency : public DoubleField
  {
  public:
  BenchmarkCurveCurrency() : DoubleField(220) {}
    BenchmarkCurveCurrency(double data) : DoubleField(220, data) {}
  };
  
  public __gc class BenchmarkCurveName : public StringField
  {
  public:
  BenchmarkCurveName() : StringField(221) {}
    BenchmarkCurveName(String* data) : StringField(221, data) {}
  };
  
  public __gc class BenchmarkCurvePoint : public StringField
  {
  public:
  BenchmarkCurvePoint() : StringField(222) {}
    BenchmarkCurvePoint(String* data) : StringField(222, data) {}
  };
  
  public __gc class CouponRate : public DoubleField
  {
  public:
  CouponRate() : DoubleField(223) {}
    CouponRate(double data) : DoubleField(223, data) {}
  };
  
  public __gc class CouponPaymentDate : public UtcDateField
  {
  public:
  CouponPaymentDate() : UtcDateField(224) {}
    CouponPaymentDate(DateTime data) : UtcDateField(224, data) {}
  };
  
  public __gc class IssueDate : public UtcDateField
  {
  public:
  IssueDate() : UtcDateField(225) {}
    IssueDate(DateTime data) : UtcDateField(225, data) {}
  };
  
  public __gc class RepurchaseTerm : public IntField
  {
  public:
  RepurchaseTerm() : IntField(226) {}
    RepurchaseTerm(int data) : IntField(226, data) {}
  };
  
  public __gc class RepurchaseRate : public DoubleField
  {
  public:
  RepurchaseRate() : DoubleField(227) {}
    RepurchaseRate(double data) : DoubleField(227, data) {}
  };
  
  public __gc class Factor : public DoubleField
  {
  public:
  Factor() : DoubleField(228) {}
    Factor(double data) : DoubleField(228, data) {}
  };
  
  public __gc class TradeOriginationDate : public UtcDateField
  {
  public:
  TradeOriginationDate() : UtcDateField(229) {}
    TradeOriginationDate(DateTime data) : UtcDateField(229, data) {}
  };
  
  public __gc class ExDate : public UtcDateField
  {
  public:
  ExDate() : UtcDateField(230) {}
    ExDate(DateTime data) : UtcDateField(230, data) {}
  };
  
  public __gc class ContractMultiplier : public DoubleField
  {
  public:
  ContractMultiplier() : DoubleField(231) {}
    ContractMultiplier(double data) : DoubleField(231, data) {}
  };
  
  public __gc class NoStipulations : public IntField
  {
  public:
  NoStipulations() : IntField(232) {}
    NoStipulations(int data) : IntField(232, data) {}
  };
  
  public __gc class StipulationType : public StringField
  {
  public:
  StipulationType() : StringField(233) {}
    StipulationType(String* data) : StringField(233, data) {}
  };
  
  public __gc class StipulationValue : public StringField
  {
  public:
  StipulationValue() : StringField(234) {}
    StipulationValue(String* data) : StringField(234, data) {}
  };
  
  public __gc class YieldType : public StringField
  {
  public:
  static const String* AFTER_TAX_YIELD = "AFTERTAX";
  static const String* ANNUAL_YIELD = "ANNUAL";
  static const String* YIELD_AT_ISSUE = "ATISSUE";
  static const String* YIELD_TO_AVERAGE_LIFE = "AVGLIFE";
  static const String* YIELD_TO_AVERAGE_MATURITY = "AVGMATURITY";
  static const String* BOOK_YIELD = "BOOK";
  static const String* YIELD_TO_NEXT_CALL = "CALL";
  static const String* YIELD_CHANGE_SINCE_CLOSE = "CHANGE";
  static const String* CLOSING_YIELD = "CLOSE";
  static const String* COMPOUND_YIELD = "COMPOUND";
  static const String* CURRENT_YIELD = "CURRENT";
  static const String* TRUE_GROSS_YIELD = "GROSS";
  static const String* GOVERNMENT_EQUIVALENT_YIELD = "GOVTEQUIV";
  static const String* YIELD_WITH_INFLATION_ASSUMPTION = "INFLATION";
  static const String* INVERSE_FLOATER_BOND_YIELD = "INVERSEFLOATER";
  static const String* MOST_RECENT_CLOSING_YIELD = "LASTCLOSE";
  static const String* CLOSING_YIELD_MOST_RECENT_MONTH = "LASTMONTH";
  static const String* CLOSING_YIELD_MOST_RECENT_QUARTER = "LASTQUARTER";
  static const String* CLOSING_YIELD_MOST_RECENT_YEAR = "LASTYEAR";
  static const String* YIELD_TO_LONGEST_AVERAGE_LIFE = "LONGAVGLIFE";
  static const String* YIELD_TO_LONGEST_AVERAGE = "LONGEST";
  static const String* MARK_TO_MARKET_YIELD = "MARK";
  static const String* YIELD_TO_MATURITY = "MATURITY";
  static const String* YIELD_TO_NEXT_REFUND = "NEXTREFUND";
  static const String* OPEN_AVERAGE_YIELD = "OPENAVG";
  static const String* YIELD_TO_NEXT_PUT = "PUT";
  static const String* PREVIOUS_CLOSE_YIELD = "PREVCLOSE";
  static const String* PROCEEDS_YIELD = "PROCEEDS";
  static const String* SEMI_ANNUAL_YIELD = "SEMIANNUAL";
  static const String* YIELD_TO_SHORTEST_AVERAGE_LIFE = "SHORTAVGLIFE";
  static const String* YIELD_TO_SHORTEST_AVERAGE = "SHORTEST";
  static const String* SIMPLE_YIELD = "SIMPLE";
  static const String* TAX_EQUIVALENT_YIELD = "TAXEQUIV";
  static const String* YIELD_TO_TENDER_DATE = "TENDER";
  static const String* TRUE_YIELD = "TRUE";
  static const String* YIELD_TO_WORST_CONVENTION = "WORST";
  YieldType() : StringField(235) {}
    YieldType(String* data) : StringField(235, data) {}
  };
  
  public __gc class Yield : public DoubleField
  {
  public:
  Yield() : DoubleField(236) {}
    Yield(double data) : DoubleField(236, data) {}
  };
  
  public __gc class TotalTakedown : public DoubleField
  {
  public:
  TotalTakedown() : DoubleField(237) {}
    TotalTakedown(double data) : DoubleField(237, data) {}
  };
  
  public __gc class Concession : public DoubleField
  {
  public:
  Concession() : DoubleField(238) {}
    Concession(double data) : DoubleField(238, data) {}
  };
  
  public __gc class RepoCollateralSecurityType : public IntField
  {
  public:
  RepoCollateralSecurityType() : IntField(239) {}
    RepoCollateralSecurityType(int data) : IntField(239, data) {}
  };
  
  public __gc class RedemptionDate : public UtcDateField
  {
  public:
  RedemptionDate() : UtcDateField(240) {}
    RedemptionDate(DateTime data) : UtcDateField(240, data) {}
  };
  
  public __gc class UnderlyingCouponPaymentDate : public UtcDateField
  {
  public:
  UnderlyingCouponPaymentDate() : UtcDateField(241) {}
    UnderlyingCouponPaymentDate(DateTime data) : UtcDateField(241, data) {}
  };
  
  public __gc class UnderlyingIssueDate : public UtcDateField
  {
  public:
  UnderlyingIssueDate() : UtcDateField(242) {}
    UnderlyingIssueDate(DateTime data) : UtcDateField(242, data) {}
  };
  
  public __gc class UnderlyingRepoCollateralSecurityType : public IntField
  {
  public:
  UnderlyingRepoCollateralSecurityType() : IntField(243) {}
    UnderlyingRepoCollateralSecurityType(int data) : IntField(243, data) {}
  };
  
  public __gc class UnderlyingRepurchaseTerm : public IntField
  {
  public:
  UnderlyingRepurchaseTerm() : IntField(244) {}
    UnderlyingRepurchaseTerm(int data) : IntField(244, data) {}
  };
  
  public __gc class UnderlyingRepurchaseRate : public DoubleField
  {
  public:
  UnderlyingRepurchaseRate() : DoubleField(245) {}
    UnderlyingRepurchaseRate(double data) : DoubleField(245, data) {}
  };
  
  public __gc class UnderlyingFactor : public DoubleField
  {
  public:
  UnderlyingFactor() : DoubleField(246) {}
    UnderlyingFactor(double data) : DoubleField(246, data) {}
  };
  
  public __gc class UnderlyingRedemptionDate : public UtcDateField
  {
  public:
  UnderlyingRedemptionDate() : UtcDateField(247) {}
    UnderlyingRedemptionDate(DateTime data) : UtcDateField(247, data) {}
  };
  
  public __gc class LegCouponPaymentDate : public UtcDateField
  {
  public:
  LegCouponPaymentDate() : UtcDateField(248) {}
    LegCouponPaymentDate(DateTime data) : UtcDateField(248, data) {}
  };
  
  public __gc class LegIssueDate : public UtcDateField
  {
  public:
  LegIssueDate() : UtcDateField(249) {}
    LegIssueDate(DateTime data) : UtcDateField(249, data) {}
  };
  
  public __gc class LegRepoCollateralSecurityType : public IntField
  {
  public:
  LegRepoCollateralSecurityType() : IntField(250) {}
    LegRepoCollateralSecurityType(int data) : IntField(250, data) {}
  };
  
  public __gc class LegRepurchaseTerm : public IntField
  {
  public:
  LegRepurchaseTerm() : IntField(251) {}
    LegRepurchaseTerm(int data) : IntField(251, data) {}
  };
  
  public __gc class LegRepurchaseRate : public DoubleField
  {
  public:
  LegRepurchaseRate() : DoubleField(252) {}
    LegRepurchaseRate(double data) : DoubleField(252, data) {}
  };
  
  public __gc class LegFactor : public DoubleField
  {
  public:
  LegFactor() : DoubleField(253) {}
    LegFactor(double data) : DoubleField(253, data) {}
  };
  
  public __gc class LegRedemptionDate : public UtcDateField
  {
  public:
  LegRedemptionDate() : UtcDateField(254) {}
    LegRedemptionDate(DateTime data) : UtcDateField(254, data) {}
  };
  
  public __gc class CreditRating : public StringField
  {
  public:
  CreditRating() : StringField(255) {}
    CreditRating(String* data) : StringField(255, data) {}
  };
  
  public __gc class UnderlyingCreditRating : public StringField
  {
  public:
  UnderlyingCreditRating() : StringField(256) {}
    UnderlyingCreditRating(String* data) : StringField(256, data) {}
  };
  
  public __gc class LegCreditRating : public StringField
  {
  public:
  LegCreditRating() : StringField(257) {}
    LegCreditRating(String* data) : StringField(257, data) {}
  };
  
  public __gc class TradedFlatSwitch : public StringField
  {
  public:
  TradedFlatSwitch() : StringField(258) {}
    TradedFlatSwitch(String* data) : StringField(258, data) {}
  };
  
  public __gc class BasisFeatureDate : public UtcDateField
  {
  public:
  BasisFeatureDate() : UtcDateField(259) {}
    BasisFeatureDate(DateTime data) : UtcDateField(259, data) {}
  };
  
  public __gc class BasisFeaturePrice : public DoubleField
  {
  public:
  BasisFeaturePrice() : DoubleField(260) {}
    BasisFeaturePrice(double data) : DoubleField(260, data) {}
  };
  
  public __gc class MDReqID : public StringField
  {
  public:
  MDReqID() : StringField(262) {}
    MDReqID(String* data) : StringField(262, data) {}
  };
  
  public __gc class SubscriptionRequestType : public CharField
  {
  public:
  static const __wchar_t SNAPSHOT = '0';
  static const __wchar_t SNAPSHOT_PLUS_UPDATES = '1';
  static const __wchar_t DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = '2';
  SubscriptionRequestType() : CharField(263) {}
    SubscriptionRequestType(__wchar_t data) : CharField(263, data) {}
  };
  
  public __gc class MarketDepth : public IntField
  {
  public:
  static const int FULL_BOOK = 0;
  static const int TOP_OF_BOOK = 1;
  MarketDepth() : IntField(264) {}
    MarketDepth(int data) : IntField(264, data) {}
  };
  
  public __gc class MDUpdateType : public IntField
  {
  public:
  static const int FULL_REFRESH = 0;
  static const int INCREMENTAL_REFRESH = 1;
  MDUpdateType() : IntField(265) {}
    MDUpdateType(int data) : IntField(265, data) {}
  };
  
  public __gc class AggregatedBook : public StringField
  {
  public:
  static const __wchar_t ONE_BOOK_ENTRY_PER_SIDE_PER_PRICE = 'Y';
  static const __wchar_t MULTIPLE_ENTRIES_PER_SIDE_PER_PRICE_ALLOWED = 'N';
  AggregatedBook() : StringField(266) {}
    AggregatedBook(String* data) : StringField(266, data) {}
  };
  
  public __gc class NoMDEntryTypes : public IntField
  {
  public:
  NoMDEntryTypes() : IntField(267) {}
    NoMDEntryTypes(int data) : IntField(267, data) {}
  };
  
  public __gc class NoMDEntries : public IntField
  {
  public:
  NoMDEntries() : IntField(268) {}
    NoMDEntries(int data) : IntField(268, data) {}
  };
  
  public __gc class MDEntryType : public CharField
  {
  public:
  static const __wchar_t BID = '0';
  static const __wchar_t OFFER = '1';
  static const __wchar_t TRADE = '2';
  static const __wchar_t INDEX_VALUE = '3';
  static const __wchar_t OPENING_PRICE = '4';
  static const __wchar_t CLOSING_PRICE = '5';
  static const __wchar_t SETTLEMENT_PRICE = '6';
  static const __wchar_t TRADING_SESSION_HIGH_PRICE = '7';
  static const __wchar_t TRADING_SESSION_LOW_PRICE = '8';
  static const __wchar_t TRADING_SESSION_VWAP_PRICE = '9';
  static const __wchar_t IMBALANCE = 'A';
  MDEntryType() : CharField(269) {}
    MDEntryType(__wchar_t data) : CharField(269, data) {}
  };
  
  public __gc class MDEntryPx : public DoubleField
  {
  public:
  MDEntryPx() : DoubleField(270) {}
    MDEntryPx(double data) : DoubleField(270, data) {}
  };
  
  public __gc class MDEntrySize : public DoubleField
  {
  public:
  MDEntrySize() : DoubleField(271) {}
    MDEntrySize(double data) : DoubleField(271, data) {}
  };
  
  public __gc class MDEntryDate : public UtcDateField
  {
  public:
  MDEntryDate() : UtcDateField(272) {}
    MDEntryDate(DateTime data) : UtcDateField(272, data) {}
  };
  
  public __gc class MDEntryTime : public UtcTimeOnlyField
  {
  public:
  MDEntryTime() : UtcTimeOnlyField(273) {}
    MDEntryTime(DateTime data) : UtcTimeOnlyField(273, data) {}
  };
  
  public __gc class TickDirection : public CharField
  {
  public:
  static const __wchar_t PLUS_TICK = '0';
  static const __wchar_t ZERO_PLUS_TICK = '1';
  static const __wchar_t MINUS_TICK = '2';
  static const __wchar_t ZERO_MINUS_TICK = '3';
  TickDirection() : CharField(274) {}
    TickDirection(__wchar_t data) : CharField(274, data) {}
  };
  
  public __gc class MDMkt : public StringField
  {
  public:
  MDMkt() : StringField(275) {}
    MDMkt(String* data) : StringField(275, data) {}
  };
  
  public __gc class QuoteCondition : public StringField
  {
  public:
  static const __wchar_t OPEN = 'A';
  static const __wchar_t CLOSED = 'B';
  static const __wchar_t EXCHANGE_BEST = 'C';
  static const __wchar_t CONSOLIDATED_BEST = 'D';
  static const __wchar_t LOCKED = 'E';
  static const __wchar_t CROSSED = 'F';
  static const __wchar_t DEPTH = 'G';
  static const __wchar_t FAST_TRADING = 'H';
  static const __wchar_t NON_FIRM = 'I';
  QuoteCondition() : StringField(276) {}
    QuoteCondition(String* data) : StringField(276, data) {}
  };
  
  public __gc class TradeCondition : public StringField
  {
  public:
  static const __wchar_t CASH = 'A';
  static const __wchar_t AVERAGE_PRICE_TRADE = 'B';
  static const __wchar_t CASH_TRADE = 'C';
  static const __wchar_t NEXT_DAY = 'D';
  static const __wchar_t OPENING = 'E';
  static const __wchar_t INTRADAY_TRADE_DETAIL = 'F';
  static const __wchar_t RULE_127_TRADE = 'G';
  static const __wchar_t RULE_155_TRADE = 'H';
  static const __wchar_t SOLD_LAST = 'I';
  static const __wchar_t NEXT_DAY_TRADE = 'J';
  static const __wchar_t OPENED = 'K';
  static const __wchar_t SELLER = 'L';
  static const __wchar_t SOLD = 'M';
  static const __wchar_t STOPPED_STOCK = 'N';
  static const __wchar_t IMBALANCE_MORE_BUYERS = 'P';
  static const __wchar_t IMBALANCE_MORE_SELLERS = 'Q';
  static const __wchar_t OPENING_PRICE = 'R';
  TradeCondition() : StringField(277) {}
    TradeCondition(String* data) : StringField(277, data) {}
  };
  
  public __gc class MDEntryID : public StringField
  {
  public:
  MDEntryID() : StringField(278) {}
    MDEntryID(String* data) : StringField(278, data) {}
  };
  
  public __gc class MDUpdateAction : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t CHANGE = '1';
  static const __wchar_t DELETE = '2';
  MDUpdateAction() : CharField(279) {}
    MDUpdateAction(__wchar_t data) : CharField(279, data) {}
  };
  
  public __gc class MDEntryRefID : public StringField
  {
  public:
  MDEntryRefID() : StringField(280) {}
    MDEntryRefID(String* data) : StringField(280, data) {}
  };
  
  public __gc class MDReqRejReason : public CharField
  {
  public:
  static const __wchar_t UNKNOWN_SYMBOL = '0';
  static const __wchar_t DUPLICATE_MDREQID = '1';
  static const __wchar_t INSUFFICIENT_BANDWIDTH = '2';
  static const __wchar_t INSUFFICIENT_PERMISSIONS = '3';
  static const __wchar_t UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE = '4';
  static const __wchar_t UNSUPPORTED_MARKETDEPTH = '5';
  static const __wchar_t UNSUPPORTED_MDUPDATETYPE = '6';
  static const __wchar_t UNSUPPORTED_AGGREGATEDBOOK = '7';
  static const __wchar_t UNSUPPORTED_MDENTRYTYPE = '8';
  static const __wchar_t UNSUPPORTED_TRADINGSESSIONID = '9';
  static const __wchar_t UNSUPPORTED_SCOPE = 'A';
  static const __wchar_t UNSUPPORTED_OPENCLOSESETTLEFLAG = 'B';
  static const __wchar_t UNSUPPORTED_MDIMPLICITDELETE = 'C';
  MDReqRejReason() : CharField(281) {}
    MDReqRejReason(__wchar_t data) : CharField(281, data) {}
  };
  
  public __gc class MDEntryOriginator : public StringField
  {
  public:
  MDEntryOriginator() : StringField(282) {}
    MDEntryOriginator(String* data) : StringField(282, data) {}
  };
  
  public __gc class LocationID : public StringField
  {
  public:
  LocationID() : StringField(283) {}
    LocationID(String* data) : StringField(283, data) {}
  };
  
  public __gc class DeskID : public StringField
  {
  public:
  DeskID() : StringField(284) {}
    DeskID(String* data) : StringField(284, data) {}
  };
  
  public __gc class DeleteReason : public CharField
  {
  public:
  static const __wchar_t CANCELATION = '0';
  static const __wchar_t ERROR = '1';
  DeleteReason() : CharField(285) {}
    DeleteReason(__wchar_t data) : CharField(285, data) {}
  };
  
  public __gc class OpenCloseSettleFlag : public StringField
  {
  public:
  static const __wchar_t DAILY_OPEN = '0';
  static const __wchar_t SESSION_OPEN = '1';
  static const __wchar_t DELIVERY_SETTLEMENT_PRICE = '2';
  static const __wchar_t EXPECTED_PRICE = '3';
  static const __wchar_t PRICE_FROM_PREVIOUS_BUSINESS_DAY = '4';
  OpenCloseSettleFlag() : StringField(286) {}
    OpenCloseSettleFlag(String* data) : StringField(286, data) {}
  };
  
  public __gc class SellerDays : public IntField
  {
  public:
  SellerDays() : IntField(287) {}
    SellerDays(int data) : IntField(287, data) {}
  };
  
  public __gc class MDEntryBuyer : public StringField
  {
  public:
  MDEntryBuyer() : StringField(288) {}
    MDEntryBuyer(String* data) : StringField(288, data) {}
  };
  
  public __gc class MDEntrySeller : public StringField
  {
  public:
  MDEntrySeller() : StringField(289) {}
    MDEntrySeller(String* data) : StringField(289, data) {}
  };
  
  public __gc class MDEntryPositionNo : public IntField
  {
  public:
  MDEntryPositionNo() : IntField(290) {}
    MDEntryPositionNo(int data) : IntField(290, data) {}
  };
  
  public __gc class FinancialStatus : public StringField
  {
  public:
  static const __wchar_t BANKRUPT = '1';
  static const __wchar_t PENDING_DELISTING = '2';
  FinancialStatus() : StringField(291) {}
    FinancialStatus(String* data) : StringField(291, data) {}
  };
  
  public __gc class CorporateAction : public StringField
  {
  public:
  static const __wchar_t EX_DIVIDEND = 'A';
  static const __wchar_t EX_DISTRIBUTION = 'B';
  static const __wchar_t EX_RIGHTS = 'C';
  static const __wchar_t NEW = 'D';
  static const __wchar_t EX_INTEREST = 'E';
  CorporateAction() : StringField(292) {}
    CorporateAction(String* data) : StringField(292, data) {}
  };
  
  public __gc class DefBidSize : public DoubleField
  {
  public:
  DefBidSize() : DoubleField(293) {}
    DefBidSize(double data) : DoubleField(293, data) {}
  };
  
  public __gc class DefOfferSize : public DoubleField
  {
  public:
  DefOfferSize() : DoubleField(294) {}
    DefOfferSize(double data) : DoubleField(294, data) {}
  };
  
  public __gc class NoQuoteEntries : public IntField
  {
  public:
  NoQuoteEntries() : IntField(295) {}
    NoQuoteEntries(int data) : IntField(295, data) {}
  };
  
  public __gc class NoQuoteSets : public IntField
  {
  public:
  NoQuoteSets() : IntField(296) {}
    NoQuoteSets(int data) : IntField(296, data) {}
  };
  
  public __gc class QuoteStatus : public IntField
  {
  public:
  static const int ACCEPTED = 0;
  static const int CANCELED_FOR_SYMBOL = 1;
  static const int CANCELED_FOR_SECURITY_TYPE = 2;
  static const int CANCELED_FOR_UNDERLYING = 3;
  static const int CANCELED_ALL = 4;
  static const int REJECTED = 5;
  static const int REMOVED_FROM_MARKET = 6;
  static const int EXPIRED = 7;
  static const int QUERY = 8;
  static const int QUOTE_NOT_FOUND = 9;
  static const int PENDING = 10;
  QuoteStatus() : IntField(297) {}
    QuoteStatus(int data) : IntField(297, data) {}
  };
  
  public __gc class QuoteCancelType : public IntField
  {
  public:
  QuoteCancelType() : IntField(298) {}
    QuoteCancelType(int data) : IntField(298, data) {}
  };
  
  public __gc class QuoteEntryID : public StringField
  {
  public:
  QuoteEntryID() : StringField(299) {}
    QuoteEntryID(String* data) : StringField(299, data) {}
  };
  
  public __gc class QuoteRejectReason : public IntField
  {
  public:
  QuoteRejectReason() : IntField(300) {}
    QuoteRejectReason(int data) : IntField(300, data) {}
  };
  
  public __gc class QuoteResponseLevel : public IntField
  {
  public:
  QuoteResponseLevel() : IntField(301) {}
    QuoteResponseLevel(int data) : IntField(301, data) {}
  };
  
  public __gc class QuoteSetID : public StringField
  {
  public:
  QuoteSetID() : StringField(302) {}
    QuoteSetID(String* data) : StringField(302, data) {}
  };
  
  public __gc class QuoteRequestType : public IntField
  {
  public:
  static const int MANUAL = 1;
  static const int AUTOMATIC = 2;
  QuoteRequestType() : IntField(303) {}
    QuoteRequestType(int data) : IntField(303, data) {}
  };
  
  public __gc class TotQuoteEntries : public IntField
  {
  public:
  TotQuoteEntries() : IntField(304) {}
    TotQuoteEntries(int data) : IntField(304, data) {}
  };
  
  public __gc class UnderlyingSecurityIDSource : public StringField
  {
  public:
  UnderlyingSecurityIDSource() : StringField(305) {}
    UnderlyingSecurityIDSource(String* data) : StringField(305, data) {}
  };
  
  public __gc class UnderlyingIssuer : public StringField
  {
  public:
  UnderlyingIssuer() : StringField(306) {}
    UnderlyingIssuer(String* data) : StringField(306, data) {}
  };
  
  public __gc class UnderlyingSecurityDesc : public StringField
  {
  public:
  UnderlyingSecurityDesc() : StringField(307) {}
    UnderlyingSecurityDesc(String* data) : StringField(307, data) {}
  };
  
  public __gc class UnderlyingSecurityExchange : public StringField
  {
  public:
  UnderlyingSecurityExchange() : StringField(308) {}
    UnderlyingSecurityExchange(String* data) : StringField(308, data) {}
  };
  
  public __gc class UnderlyingSecurityID : public StringField
  {
  public:
  UnderlyingSecurityID() : StringField(309) {}
    UnderlyingSecurityID(String* data) : StringField(309, data) {}
  };
  
  public __gc class UnderlyingSecurityType : public StringField
  {
  public:
  UnderlyingSecurityType() : StringField(310) {}
    UnderlyingSecurityType(String* data) : StringField(310, data) {}
  };
  
  public __gc class UnderlyingSymbol : public StringField
  {
  public:
  UnderlyingSymbol() : StringField(311) {}
    UnderlyingSymbol(String* data) : StringField(311, data) {}
  };
  
  public __gc class UnderlyingSymbolSfx : public StringField
  {
  public:
  UnderlyingSymbolSfx() : StringField(312) {}
    UnderlyingSymbolSfx(String* data) : StringField(312, data) {}
  };
  
  public __gc class UnderlyingMaturityMonthYear : public StringField
  {
  public:
  UnderlyingMaturityMonthYear() : StringField(313) {}
    UnderlyingMaturityMonthYear(String* data) : StringField(313, data) {}
  };
  
  public __gc class UnderlyingMaturityDay : public StringField
  {
  public:
  UnderlyingMaturityDay() : StringField(314) {}
    UnderlyingMaturityDay(String* data) : StringField(314, data) {}
  };
  
  public __gc class UnderlyingPutOrCall : public IntField
  {
  public:
  UnderlyingPutOrCall() : IntField(315) {}
    UnderlyingPutOrCall(int data) : IntField(315, data) {}
  };
  
  public __gc class UnderlyingStrikePrice : public DoubleField
  {
  public:
  UnderlyingStrikePrice() : DoubleField(316) {}
    UnderlyingStrikePrice(double data) : DoubleField(316, data) {}
  };
  
  public __gc class UnderlyingOptAttribute : public CharField
  {
  public:
  UnderlyingOptAttribute() : CharField(317) {}
    UnderlyingOptAttribute(__wchar_t data) : CharField(317, data) {}
  };
  
  public __gc class UnderlyingCurrency : public DoubleField
  {
  public:
  UnderlyingCurrency() : DoubleField(318) {}
    UnderlyingCurrency(double data) : DoubleField(318, data) {}
  };
  
  public __gc class RatioQty : public DoubleField
  {
  public:
  RatioQty() : DoubleField(319) {}
    RatioQty(double data) : DoubleField(319, data) {}
  };
  
  public __gc class SecurityReqID : public StringField
  {
  public:
  SecurityReqID() : StringField(320) {}
    SecurityReqID(String* data) : StringField(320, data) {}
  };
  
  public __gc class SecurityRequestType : public IntField
  {
  public:
  static const int REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = 0;
  static const int REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = 1;
  static const int REQUEST_LIST_SECURITY_TYPES = 2;
  static const int REQUEST_LIST_SECURITIES = 3;
  SecurityRequestType() : IntField(321) {}
    SecurityRequestType(int data) : IntField(321, data) {}
  };
  
  public __gc class SecurityResponseID : public StringField
  {
  public:
  SecurityResponseID() : StringField(322) {}
    SecurityResponseID(String* data) : StringField(322, data) {}
  };
  
  public __gc class SecurityResponseType : public IntField
  {
  public:
  static const int ACCEPT_SECURITY_PROPOSAL_AS_IS = 1;
  static const int ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = 2;
  static const int LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST = 3;
  static const int LIST_OF_SECURITIES_RETURNED_PER_REQUEST = 4;
  static const int REJECT_SECURITY_PROPOSAL = 5;
  static const int CAN_NOT_MATCH_SELECTION_CRITERIA = 6;
  SecurityResponseType() : IntField(323) {}
    SecurityResponseType(int data) : IntField(323, data) {}
  };
  
  public __gc class SecurityStatusReqID : public StringField
  {
  public:
  SecurityStatusReqID() : StringField(324) {}
    SecurityStatusReqID(String* data) : StringField(324, data) {}
  };
  
  public __gc class UnsolicitedIndicator : public StringField
  {
  public:
  static const __wchar_t MESSAGE_IS_BEING_SENT_UNSOLICITED = 'Y';
  static const __wchar_t MESSAGE_IS_BEING_SENT_AS_A_RESULT_OF_A_PRIOR_REQUEST = 'N';
  UnsolicitedIndicator() : StringField(325) {}
    UnsolicitedIndicator(String* data) : StringField(325, data) {}
  };
  
  public __gc class SecurityTradingStatus : public IntField
  {
  public:
  static const int OPENING_DELAY = 1;
  static const int TRADING_HALT = 2;
  static const int RESUME = 3;
  static const int NO_OPEN = 4;
  static const int PRICE_INDICATION = 5;
  static const int TRADING_RANGE_INDICATION = 6;
  static const int MARKET_IMBALANCE_BUY = 7;
  static const int MARKET_IMBALANCE_SELL = 8;
  static const int MARKET_ON_CLOSE_IMBALANCE_BUY = 9;
  static const int MARKET_ON_CLOSE_IMBALANCE_SELL = 10;
  static const int NO_MARKET_IMBALANCE = 12;
  static const int NO_MARKET_ON_CLOSE_IMBALANCE = 13;
  static const int ITS_PRE_OPENING = 14;
  static const int NEW_PRICE_INDICATION = 15;
  static const int TRADE_DISSEMINATION_TIME = 16;
  static const int READY_TO_TRADE = 17;
  static const int NOT_AVAILABLE_FOR_TRADING = 18;
  static const int NOT_TRADED_ON_THIS_MARKET = 19;
  static const int UNKNOWN_OR_INVALID = 20;
  static const int PRE_OPEN = 21;
  static const int OPENING_ROTATION = 22;
  static const int FAST_MARKET = 23;
  SecurityTradingStatus() : IntField(326) {}
    SecurityTradingStatus(int data) : IntField(326, data) {}
  };
  
  public __gc class HaltReason : public CharField
  {
  public:
  static const __wchar_t ORDER_IMBALANCE = 'I';
  static const __wchar_t EQUIPMENT_CHANGEOVER = 'X';
  static const __wchar_t NEWS_PENDING = 'P';
  static const __wchar_t NEWS_DISSEMINATION = 'D';
  static const __wchar_t ORDER_INFLUX = 'E';
  static const __wchar_t ADDITIONAL_INFORMATION = 'M';
  HaltReason() : CharField(327) {}
    HaltReason(__wchar_t data) : CharField(327, data) {}
  };
  
  public __gc class InViewOfCommon : public StringField
  {
  public:
  static const __wchar_t HALT_WAS_DUE_TO_COMMON_STOCK_BEING_HALTED = 'Y';
  static const __wchar_t HALT_WAS_NOT_RELATED_TO_A_HALT_OF_THE_COMMON_STOCK = 'N';
  InViewOfCommon() : StringField(328) {}
    InViewOfCommon(String* data) : StringField(328, data) {}
  };
  
  public __gc class DueToRelated : public StringField
  {
  public:
  static const __wchar_t HALT_WAS_DUE_TO_RELATED_SECURITY_BEING_HALTED = 'Y';
  static const __wchar_t HALT_WAS_NOT_RELATED_TO_A_HALT_OF_THE_RELATED_SECURITY = 'N';
  DueToRelated() : StringField(329) {}
    DueToRelated(String* data) : StringField(329, data) {}
  };
  
  public __gc class BuyVolume : public DoubleField
  {
  public:
  BuyVolume() : DoubleField(330) {}
    BuyVolume(double data) : DoubleField(330, data) {}
  };
  
  public __gc class SellVolume : public DoubleField
  {
  public:
  SellVolume() : DoubleField(331) {}
    SellVolume(double data) : DoubleField(331, data) {}
  };
  
  public __gc class HighPx : public DoubleField
  {
  public:
  HighPx() : DoubleField(332) {}
    HighPx(double data) : DoubleField(332, data) {}
  };
  
  public __gc class LowPx : public DoubleField
  {
  public:
  LowPx() : DoubleField(333) {}
    LowPx(double data) : DoubleField(333, data) {}
  };
  
  public __gc class Adjustment : public IntField
  {
  public:
  static const int CANCEL = 1;
  static const int ERROR = 2;
  static const int CORRECTION = 3;
  Adjustment() : IntField(334) {}
    Adjustment(int data) : IntField(334, data) {}
  };
  
  public __gc class TradSesReqID : public StringField
  {
  public:
  TradSesReqID() : StringField(335) {}
    TradSesReqID(String* data) : StringField(335, data) {}
  };
  
  public __gc class TradingSessionID : public StringField
  {
  public:
  TradingSessionID() : StringField(336) {}
    TradingSessionID(String* data) : StringField(336, data) {}
  };
  
  public __gc class ContraTrader : public StringField
  {
  public:
  ContraTrader() : StringField(337) {}
    ContraTrader(String* data) : StringField(337, data) {}
  };
  
  public __gc class TradSesMethod : public IntField
  {
  public:
  static const int ELECTRONIC = 1;
  static const int OPEN_OUTCRY = 2;
  static const int TWO_PARTY = 3;
  TradSesMethod() : IntField(338) {}
    TradSesMethod(int data) : IntField(338, data) {}
  };
  
  public __gc class TradSesMode : public IntField
  {
  public:
  static const int TESTING = 1;
  static const int SIMULATED = 2;
  static const int PRODUCTION = 3;
  TradSesMode() : IntField(339) {}
    TradSesMode(int data) : IntField(339, data) {}
  };
  
  public __gc class TradSesStatus : public IntField
  {
  public:
  static const int UNKNOWN = 0;
  static const int HALTED = 1;
  static const int OPEN = 2;
  static const int CLOSED = 3;
  static const int PRE_OPEN = 4;
  static const int PRE_CLOSE = 5;
  static const int REQUEST_REJECTED = 6;
  TradSesStatus() : IntField(340) {}
    TradSesStatus(int data) : IntField(340, data) {}
  };
  
  public __gc class TradSesStartTime : public UtcTimeStampField
  {
  public:
  TradSesStartTime() : UtcTimeStampField(341) {}
    TradSesStartTime(DateTime data) : UtcTimeStampField(341, data) {}
  };
  
  public __gc class TradSesOpenTime : public UtcTimeStampField
  {
  public:
  TradSesOpenTime() : UtcTimeStampField(342) {}
    TradSesOpenTime(DateTime data) : UtcTimeStampField(342, data) {}
  };
  
  public __gc class TradSesPreCloseTime : public UtcTimeStampField
  {
  public:
  TradSesPreCloseTime() : UtcTimeStampField(343) {}
    TradSesPreCloseTime(DateTime data) : UtcTimeStampField(343, data) {}
  };
  
  public __gc class TradSesCloseTime : public UtcTimeStampField
  {
  public:
  TradSesCloseTime() : UtcTimeStampField(344) {}
    TradSesCloseTime(DateTime data) : UtcTimeStampField(344, data) {}
  };
  
  public __gc class TradSesEndTime : public UtcTimeStampField
  {
  public:
  TradSesEndTime() : UtcTimeStampField(345) {}
    TradSesEndTime(DateTime data) : UtcTimeStampField(345, data) {}
  };
  
  public __gc class NumberOfOrders : public IntField
  {
  public:
  NumberOfOrders() : IntField(346) {}
    NumberOfOrders(int data) : IntField(346, data) {}
  };
  
  public __gc class MessageEncoding : public StringField
  {
  public:
  MessageEncoding() : StringField(347) {}
    MessageEncoding(String* data) : StringField(347, data) {}
  };
  
  public __gc class EncodedIssuerLen : public IntField
  {
  public:
  EncodedIssuerLen() : IntField(348) {}
    EncodedIssuerLen(int data) : IntField(348, data) {}
  };
  
  public __gc class EncodedIssuer : public StringField
  {
  public:
  EncodedIssuer() : StringField(349) {}
    EncodedIssuer(String* data) : StringField(349, data) {}
  };
  
  public __gc class EncodedSecurityDescLen : public IntField
  {
  public:
  EncodedSecurityDescLen() : IntField(350) {}
    EncodedSecurityDescLen(int data) : IntField(350, data) {}
  };
  
  public __gc class EncodedSecurityDesc : public StringField
  {
  public:
  EncodedSecurityDesc() : StringField(351) {}
    EncodedSecurityDesc(String* data) : StringField(351, data) {}
  };
  
  public __gc class EncodedListExecInstLen : public IntField
  {
  public:
  EncodedListExecInstLen() : IntField(352) {}
    EncodedListExecInstLen(int data) : IntField(352, data) {}
  };
  
  public __gc class EncodedListExecInst : public StringField
  {
  public:
  EncodedListExecInst() : StringField(353) {}
    EncodedListExecInst(String* data) : StringField(353, data) {}
  };
  
  public __gc class EncodedTextLen : public IntField
  {
  public:
  EncodedTextLen() : IntField(354) {}
    EncodedTextLen(int data) : IntField(354, data) {}
  };
  
  public __gc class EncodedText : public StringField
  {
  public:
  EncodedText() : StringField(355) {}
    EncodedText(String* data) : StringField(355, data) {}
  };
  
  public __gc class EncodedSubjectLen : public IntField
  {
  public:
  EncodedSubjectLen() : IntField(356) {}
    EncodedSubjectLen(int data) : IntField(356, data) {}
  };
  
  public __gc class EncodedSubject : public StringField
  {
  public:
  EncodedSubject() : StringField(357) {}
    EncodedSubject(String* data) : StringField(357, data) {}
  };
  
  public __gc class EncodedHeadlineLen : public IntField
  {
  public:
  EncodedHeadlineLen() : IntField(358) {}
    EncodedHeadlineLen(int data) : IntField(358, data) {}
  };
  
  public __gc class EncodedHeadline : public StringField
  {
  public:
  EncodedHeadline() : StringField(359) {}
    EncodedHeadline(String* data) : StringField(359, data) {}
  };
  
  public __gc class EncodedAllocTextLen : public IntField
  {
  public:
  EncodedAllocTextLen() : IntField(360) {}
    EncodedAllocTextLen(int data) : IntField(360, data) {}
  };
  
  public __gc class EncodedAllocText : public StringField
  {
  public:
  EncodedAllocText() : StringField(361) {}
    EncodedAllocText(String* data) : StringField(361, data) {}
  };
  
  public __gc class EncodedUnderlyingIssuerLen : public IntField
  {
  public:
  EncodedUnderlyingIssuerLen() : IntField(362) {}
    EncodedUnderlyingIssuerLen(int data) : IntField(362, data) {}
  };
  
  public __gc class EncodedUnderlyingIssuer : public StringField
  {
  public:
  EncodedUnderlyingIssuer() : StringField(363) {}
    EncodedUnderlyingIssuer(String* data) : StringField(363, data) {}
  };
  
  public __gc class EncodedUnderlyingSecurityDescLen : public IntField
  {
  public:
  EncodedUnderlyingSecurityDescLen() : IntField(364) {}
    EncodedUnderlyingSecurityDescLen(int data) : IntField(364, data) {}
  };
  
  public __gc class EncodedUnderlyingSecurityDesc : public StringField
  {
  public:
  EncodedUnderlyingSecurityDesc() : StringField(365) {}
    EncodedUnderlyingSecurityDesc(String* data) : StringField(365, data) {}
  };
  
  public __gc class AllocPrice : public DoubleField
  {
  public:
  AllocPrice() : DoubleField(366) {}
    AllocPrice(double data) : DoubleField(366, data) {}
  };
  
  public __gc class QuoteSetValidUntilTime : public UtcTimeStampField
  {
  public:
  QuoteSetValidUntilTime() : UtcTimeStampField(367) {}
    QuoteSetValidUntilTime(DateTime data) : UtcTimeStampField(367, data) {}
  };
  
  public __gc class QuoteEntryRejectReason : public IntField
  {
  public:
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE = 2;
  static const int QUOTE_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_QUOTE = 5;
  static const int DUPLICATE_QUOTE = 6;
  static const int INVALID_BID = 7;
  static const int INVALID_PRICE = 8;
  static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
  QuoteEntryRejectReason() : IntField(368) {}
    QuoteEntryRejectReason(int data) : IntField(368, data) {}
  };
  
  public __gc class LastMsgSeqNumProcessed : public IntField
  {
  public:
  LastMsgSeqNumProcessed() : IntField(369) {}
    LastMsgSeqNumProcessed(int data) : IntField(369, data) {}
  };
  
  public __gc class OnBehalfOfSendingTime : public UtcTimeStampField
  {
  public:
  OnBehalfOfSendingTime() : UtcTimeStampField(370) {}
    OnBehalfOfSendingTime(DateTime data) : UtcTimeStampField(370, data) {}
  };
  
  public __gc class RefTagID : public IntField
  {
  public:
  RefTagID() : IntField(371) {}
    RefTagID(int data) : IntField(371, data) {}
  };
  
  public __gc class RefMsgType : public StringField
  {
  public:
  RefMsgType() : StringField(372) {}
    RefMsgType(String* data) : StringField(372, data) {}
  };
  
  public __gc class SessionRejectReason : public IntField
  {
  public:
  static const int INVALID_TAG_NUMBER = 0;
  static const int REQUIRED_TAG_MISSING = 1;
  static const int TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE = 2;
  static const int UNDEFINED_TAG = 3;
  static const int TAG_SPECIFIED_WITHOUT_A_VALUE = 4;
  static const int VALUE_IS_INCORRECT = 5;
  static const int INCORRECT_DATA_FORMAT_FOR_VALUE = 6;
  static const int DECRYPTION_PROBLEM = 7;
  static const int SIGNATURE_PROBLEM = 8;
  static const int COMPID_PROBLEM = 9;
  static const int SENDINGTIME_ACCURACY_PROBLEM = 10;
  static const int INVALID_MSGTYPE = 11;
  static const int XML_VALIDATION_ERROR = 12;
  static const int TAG_APPEARS_MORE_THAN_ONCE = 13;
  static const int TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER = 14;
  static const int REPEATING_GROUP_FIELDS_OUT_OF_ORDER = 15;
  static const int INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP = 16;
  static const int NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER = 17;
  SessionRejectReason() : IntField(373) {}
    SessionRejectReason(int data) : IntField(373, data) {}
  };
  
  public __gc class BidRequestTransType : public CharField
  {
  public:
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  BidRequestTransType() : CharField(374) {}
    BidRequestTransType(__wchar_t data) : CharField(374, data) {}
  };
  
  public __gc class ContraBroker : public StringField
  {
  public:
  ContraBroker() : StringField(375) {}
    ContraBroker(String* data) : StringField(375, data) {}
  };
  
  public __gc class ComplianceID : public StringField
  {
  public:
  ComplianceID() : StringField(376) {}
    ComplianceID(String* data) : StringField(376, data) {}
  };
  
  public __gc class SolicitedFlag : public StringField
  {
  public:
  static const __wchar_t WAS_SOLCITIED = 'Y';
  static const __wchar_t WAS_NOT_SOLICITED = 'N';
  SolicitedFlag() : StringField(377) {}
    SolicitedFlag(String* data) : StringField(377, data) {}
  };
  
  public __gc class ExecRestatementReason : public IntField
  {
  public:
  static const int GT_CORPORATE_ACTION = 0;
  static const int GT_RENEWAL = 1;
  static const int VERBAL_CHANGE = 2;
  static const int REPRICING_OF_ORDER = 3;
  static const int BROKER_OPTION = 4;
  static const int PARTIAL_DECLINE_OF_ORDERQTY = 5;
  static const int CANCEL_ON_TRADING_HALT = 6;
  static const int CANCEL_ON_SYSTEM_FAILURE = 7;
  static const int MARKET = 8;
  ExecRestatementReason() : IntField(378) {}
    ExecRestatementReason(int data) : IntField(378, data) {}
  };
  
  public __gc class BusinessRejectRefID : public StringField
  {
  public:
  BusinessRejectRefID() : StringField(379) {}
    BusinessRejectRefID(String* data) : StringField(379, data) {}
  };
  
  public __gc class BusinessRejectReason : public IntField
  {
  public:
  static const int OTHER = 0;
  static const int UNKOWN_ID = 1;
  static const int UNKNOWN_SECURITY = 2;
  static const int UNSUPPORTED_MESSAGE_TYPE = 3;
  static const int APPLICATION_NOT_AVAILABLE = 4;
  static const int CONDITIONALLY_REQUIRED_FIELD_MISSING = 5;
  static const int NOT_AUTHORIZED = 6;
  static const int DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME = 7;
  BusinessRejectReason() : IntField(380) {}
    BusinessRejectReason(int data) : IntField(380, data) {}
  };
  
  public __gc class GrossTradeAmt : public DoubleField
  {
  public:
  GrossTradeAmt() : DoubleField(381) {}
    GrossTradeAmt(double data) : DoubleField(381, data) {}
  };
  
  public __gc class NoContraBrokers : public IntField
  {
  public:
  NoContraBrokers() : IntField(382) {}
    NoContraBrokers(int data) : IntField(382, data) {}
  };
  
  public __gc class MaxMessageSize : public IntField
  {
  public:
  MaxMessageSize() : IntField(383) {}
    MaxMessageSize(int data) : IntField(383, data) {}
  };
  
  public __gc class NoMsgTypes : public IntField
  {
  public:
  NoMsgTypes() : IntField(384) {}
    NoMsgTypes(int data) : IntField(384, data) {}
  };
  
  public __gc class MsgDirection : public CharField
  {
  public:
  static const __wchar_t SEND = 'S';
  static const __wchar_t RECEIVE = 'R';
  MsgDirection() : CharField(385) {}
    MsgDirection(__wchar_t data) : CharField(385, data) {}
  };
  
  public __gc class NoTradingSessions : public IntField
  {
  public:
  NoTradingSessions() : IntField(386) {}
    NoTradingSessions(int data) : IntField(386, data) {}
  };
  
  public __gc class TotalVolumeTraded : public DoubleField
  {
  public:
  TotalVolumeTraded() : DoubleField(387) {}
    TotalVolumeTraded(double data) : DoubleField(387, data) {}
  };
  
  public __gc class DiscretionInst : public CharField
  {
  public:
  static const __wchar_t RELATED_TO_DISPLAYED_PRICE = '0';
  static const __wchar_t RELATED_TO_MARKET_PRICE = '1';
  static const __wchar_t RELATED_TO_PRIMARY_PRICE = '2';
  static const __wchar_t RELATED_TO_LOCAL_PRIMARY_PRICE = '3';
  static const __wchar_t RELATED_TO_MIDPOINT_PRICE = '4';
  static const __wchar_t RELATED_TO_LAST_TRADE_PRICE = '5';
  DiscretionInst() : CharField(388) {}
    DiscretionInst(__wchar_t data) : CharField(388, data) {}
  };
  
  public __gc class DiscretionOffset : public DoubleField
  {
  public:
  DiscretionOffset() : DoubleField(389) {}
    DiscretionOffset(double data) : DoubleField(389, data) {}
  };
  
  public __gc class BidID : public StringField
  {
  public:
  BidID() : StringField(390) {}
    BidID(String* data) : StringField(390, data) {}
  };
  
  public __gc class ClientBidID : public StringField
  {
  public:
  ClientBidID() : StringField(391) {}
    ClientBidID(String* data) : StringField(391, data) {}
  };
  
  public __gc class ListName : public StringField
  {
  public:
  ListName() : StringField(392) {}
    ListName(String* data) : StringField(392, data) {}
  };
  
  public __gc class TotalNumSecurities : public IntField
  {
  public:
  TotalNumSecurities() : IntField(393) {}
    TotalNumSecurities(int data) : IntField(393, data) {}
  };
  
  public __gc class BidType : public IntField
  {
  public:
  static const int NON_DISCLOSED_STYLE = 1;
  static const int DISCLOSED_STYLE = 2;
  static const int NO_BIDDING_PROCESS = 3;
  BidType() : IntField(394) {}
    BidType(int data) : IntField(394, data) {}
  };
  
  public __gc class NumTickets : public IntField
  {
  public:
  NumTickets() : IntField(395) {}
    NumTickets(int data) : IntField(395, data) {}
  };
  
  public __gc class SideValue1 : public DoubleField
  {
  public:
  SideValue1() : DoubleField(396) {}
    SideValue1(double data) : DoubleField(396, data) {}
  };
  
  public __gc class SideValue2 : public DoubleField
  {
  public:
  SideValue2() : DoubleField(397) {}
    SideValue2(double data) : DoubleField(397, data) {}
  };
  
  public __gc class NoBidDescriptors : public IntField
  {
  public:
  NoBidDescriptors() : IntField(398) {}
    NoBidDescriptors(int data) : IntField(398, data) {}
  };
  
  public __gc class BidDescriptorType : public IntField
  {
  public:
  static const int SECTOR = 1;
  static const int COUNTRY = 2;
  static const int INDEX = 3;
  BidDescriptorType() : IntField(399) {}
    BidDescriptorType(int data) : IntField(399, data) {}
  };
  
  public __gc class BidDescriptor : public StringField
  {
  public:
  BidDescriptor() : StringField(400) {}
    BidDescriptor(String* data) : StringField(400, data) {}
  };
  
  public __gc class SideValueInd : public IntField
  {
  public:
  static const int SIDEVALUE1 = 1;
  static const int SIDEVALUE_2 = 2;
  SideValueInd() : IntField(401) {}
    SideValueInd(int data) : IntField(401, data) {}
  };
  
  public __gc class LiquidityPctLow : public DoubleField
  {
  public:
  LiquidityPctLow() : DoubleField(402) {}
    LiquidityPctLow(double data) : DoubleField(402, data) {}
  };
  
  public __gc class LiquidityPctHigh : public DoubleField
  {
  public:
  LiquidityPctHigh() : DoubleField(403) {}
    LiquidityPctHigh(double data) : DoubleField(403, data) {}
  };
  
  public __gc class LiquidityValue : public DoubleField
  {
  public:
  LiquidityValue() : DoubleField(404) {}
    LiquidityValue(double data) : DoubleField(404, data) {}
  };
  
  public __gc class EFPTrackingError : public DoubleField
  {
  public:
  EFPTrackingError() : DoubleField(405) {}
    EFPTrackingError(double data) : DoubleField(405, data) {}
  };
  
  public __gc class FairValue : public DoubleField
  {
  public:
  FairValue() : DoubleField(406) {}
    FairValue(double data) : DoubleField(406, data) {}
  };
  
  public __gc class OutsideIndexPct : public DoubleField
  {
  public:
  OutsideIndexPct() : DoubleField(407) {}
    OutsideIndexPct(double data) : DoubleField(407, data) {}
  };
  
  public __gc class ValueOfFutures : public DoubleField
  {
  public:
  ValueOfFutures() : DoubleField(408) {}
    ValueOfFutures(double data) : DoubleField(408, data) {}
  };
  
  public __gc class LiquidityIndType : public IntField
  {
  public:
  static const int FIVEDAY_MOVING_AVERAGE = 1;
  static const int TWENTYDAY_MOVING_AVERAGE = 2;
  static const int NORMAL_MARKET_SIZE = 3;
  static const int OTHER = 4;
  LiquidityIndType() : IntField(409) {}
    LiquidityIndType(int data) : IntField(409, data) {}
  };
  
  public __gc class WtAverageLiquidity : public DoubleField
  {
  public:
  WtAverageLiquidity() : DoubleField(410) {}
    WtAverageLiquidity(double data) : DoubleField(410, data) {}
  };
  
  public __gc class ExchangeForPhysical : public StringField
  {
  public:
  static const __wchar_t TRUE = 'Y';
  static const __wchar_t FALSE = 'N';
  ExchangeForPhysical() : StringField(411) {}
    ExchangeForPhysical(String* data) : StringField(411, data) {}
  };
  
  public __gc class OutMainCntryUIndex : public DoubleField
  {
  public:
  OutMainCntryUIndex() : DoubleField(412) {}
    OutMainCntryUIndex(double data) : DoubleField(412, data) {}
  };
  
  public __gc class CrossPercent : public DoubleField
  {
  public:
  CrossPercent() : DoubleField(413) {}
    CrossPercent(double data) : DoubleField(413, data) {}
  };
  
  public __gc class ProgRptReqs : public IntField
  {
  public:
  static const int BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = 1;
  static const int SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS = 2;
  static const int REAL_TIME_EXECUTION_REPORTS = 3;
  ProgRptReqs() : IntField(414) {}
    ProgRptReqs(int data) : IntField(414, data) {}
  };
  
  public __gc class ProgPeriodInterval : public IntField
  {
  public:
  ProgPeriodInterval() : IntField(415) {}
    ProgPeriodInterval(int data) : IntField(415, data) {}
  };
  
  public __gc class IncTaxInd : public IntField
  {
  public:
  static const int NET = 1;
  static const int GROSS = 2;
  IncTaxInd() : IntField(416) {}
    IncTaxInd(int data) : IntField(416, data) {}
  };
  
  public __gc class NumBidders : public IntField
  {
  public:
  NumBidders() : IntField(417) {}
    NumBidders(int data) : IntField(417, data) {}
  };
  
  public __gc class TradeType : public CharField
  {
  public:
  TradeType() : CharField(418) {}
    TradeType(__wchar_t data) : CharField(418, data) {}
  };
  
  public __gc class BasisPxType : public CharField
  {
  public:
  static const __wchar_t CLOSING_PRICE_AT_MORNING_SESSION = '2';
  static const __wchar_t CLOSING_PRICE = '3';
  static const __wchar_t CURRENT_PRICE = '4';
  static const __wchar_t SQ = '5';
  static const __wchar_t VWAP_THROUGH_A_DAY = '6';
  static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION = '7';
  static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION = '8';
  static const __wchar_t VWAP_THROUGH_A_DAY_EXCEPT_YORI = '9';
  static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = 'A';
  static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = 'B';
  static const __wchar_t STRIKE = 'C';
  static const __wchar_t OPEN = 'D';
  static const __wchar_t OTHERS = 'Z';
  BasisPxType() : CharField(419) {}
    BasisPxType(__wchar_t data) : CharField(419, data) {}
  };
  
  public __gc class NoBidComponents : public IntField
  {
  public:
  NoBidComponents() : IntField(420) {}
    NoBidComponents(int data) : IntField(420, data) {}
  };
  
  public __gc class Country : public StringField
  {
  public:
  Country() : StringField(421) {}
    Country(String* data) : StringField(421, data) {}
  };
  
  public __gc class TotNoStrikes : public IntField
  {
  public:
  TotNoStrikes() : IntField(422) {}
    TotNoStrikes(int data) : IntField(422, data) {}
  };
  
  public __gc class PriceType : public IntField
  {
  public:
  static const int PERCENTAGE = 1;
  static const int PER_SHARE = 2;
  static const int FIXED_AMOUNT = 3;
  static const int DISCOUNT = 4;
  static const int PREMIUM = 5;
  static const int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6;
  static const int TED_PRICE = 7;
  static const int TED_YIELD = 8;
  PriceType() : IntField(423) {}
    PriceType(int data) : IntField(423, data) {}
  };
  
  public __gc class DayOrderQty : public DoubleField
  {
  public:
  DayOrderQty() : DoubleField(424) {}
    DayOrderQty(double data) : DoubleField(424, data) {}
  };
  
  public __gc class DayCumQty : public DoubleField
  {
  public:
  DayCumQty() : DoubleField(425) {}
    DayCumQty(double data) : DoubleField(425, data) {}
  };
  
  public __gc class DayAvgPx : public DoubleField
  {
  public:
  DayAvgPx() : DoubleField(426) {}
    DayAvgPx(double data) : DoubleField(426, data) {}
  };
  
  public __gc class GTBookingInst : public IntField
  {
  public:
  static const int BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = 0;
  static const int ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = 1;
  static const int ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = 2;
  GTBookingInst() : IntField(427) {}
    GTBookingInst(int data) : IntField(427, data) {}
  };
  
  public __gc class NoStrikes : public IntField
  {
  public:
  NoStrikes() : IntField(428) {}
    NoStrikes(int data) : IntField(428, data) {}
  };
  
  public __gc class ListStatusType : public IntField
  {
  public:
  static const int ACK = 1;
  static const int RESPONSE = 2;
  static const int TIMED = 3;
  static const int EXECSTARTED = 4;
  static const int ALLDONE = 5;
  static const int ALERT = 6;
  ListStatusType() : IntField(429) {}
    ListStatusType(int data) : IntField(429, data) {}
  };
  
  public __gc class NetGrossInd : public IntField
  {
  public:
  static const int NET = 1;
  static const int GROSS = 2;
  NetGrossInd() : IntField(430) {}
    NetGrossInd(int data) : IntField(430, data) {}
  };
  
  public __gc class ListOrderStatus : public IntField
  {
  public:
  static const int INBIDDINGPROCESS = 1;
  static const int RECEIVEDFOREXECUTION = 2;
  static const int EXECUTING = 3;
  static const int CANCELING = 4;
  static const int ALERT = 5;
  static const int ALL_DONE = 6;
  static const int REJECT = 7;
  ListOrderStatus() : IntField(431) {}
    ListOrderStatus(int data) : IntField(431, data) {}
  };
  
  public __gc class ExpireDate : public StringField
  {
  public:
  ExpireDate() : StringField(432) {}
    ExpireDate(String* data) : StringField(432, data) {}
  };
  
  public __gc class ListExecInstType : public CharField
  {
  public:
  static const __wchar_t IMMEDIATE = '1';
  static const __wchar_t WAIT_FOR_EXECUTE_INSTRUCTION = '2';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = '3';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = '4';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = '5';
  ListExecInstType() : CharField(433) {}
    ListExecInstType(__wchar_t data) : CharField(433, data) {}
  };
  
  public __gc class CxlRejResponseTo : public CharField
  {
  public:
  static const __wchar_t ORDER_CANCEL_REQUEST = '1';
  static const __wchar_t ORDER_CANCEL = '2';
  CxlRejResponseTo() : CharField(434) {}
    CxlRejResponseTo(__wchar_t data) : CharField(434, data) {}
  };
  
  public __gc class UnderlyingCouponRate : public DoubleField
  {
  public:
  UnderlyingCouponRate() : DoubleField(435) {}
    UnderlyingCouponRate(double data) : DoubleField(435, data) {}
  };
  
  public __gc class UnderlyingContractMultiplier : public DoubleField
  {
  public:
  UnderlyingContractMultiplier() : DoubleField(436) {}
    UnderlyingContractMultiplier(double data) : DoubleField(436, data) {}
  };
  
  public __gc class ContraTradeQty : public DoubleField
  {
  public:
  ContraTradeQty() : DoubleField(437) {}
    ContraTradeQty(double data) : DoubleField(437, data) {}
  };
  
  public __gc class ContraTradeTime : public UtcTimeStampField
  {
  public:
  ContraTradeTime() : UtcTimeStampField(438) {}
    ContraTradeTime(DateTime data) : UtcTimeStampField(438, data) {}
  };
  
  public __gc class ClearingFirm : public StringField
  {
  public:
  ClearingFirm() : StringField(439) {}
    ClearingFirm(String* data) : StringField(439, data) {}
  };
  
  public __gc class ClearingAccount : public StringField
  {
  public:
  ClearingAccount() : StringField(440) {}
    ClearingAccount(String* data) : StringField(440, data) {}
  };
  
  public __gc class LiquidityNumSecurities : public IntField
  {
  public:
  LiquidityNumSecurities() : IntField(441) {}
    LiquidityNumSecurities(int data) : IntField(441, data) {}
  };
  
  public __gc class MultiLegReportingType : public CharField
  {
  public:
  MultiLegReportingType() : CharField(442) {}
    MultiLegReportingType(__wchar_t data) : CharField(442, data) {}
  };
  
  public __gc class StrikeTime : public UtcTimeStampField
  {
  public:
  StrikeTime() : UtcTimeStampField(443) {}
    StrikeTime(DateTime data) : UtcTimeStampField(443, data) {}
  };
  
  public __gc class ListStatusText : public StringField
  {
  public:
  ListStatusText() : StringField(444) {}
    ListStatusText(String* data) : StringField(444, data) {}
  };
  
  public __gc class EncodedListStatusTextLen : public IntField
  {
  public:
  EncodedListStatusTextLen() : IntField(445) {}
    EncodedListStatusTextLen(int data) : IntField(445, data) {}
  };
  
  public __gc class EncodedListStatusText : public StringField
  {
  public:
  EncodedListStatusText() : StringField(446) {}
    EncodedListStatusText(String* data) : StringField(446, data) {}
  };
  
  public __gc class PartyIDSource : public CharField
  {
  public:
  static const __wchar_t BIC = 'B';
  static const __wchar_t GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C';
  static const __wchar_t PROPRIETARY = 'D';
  static const __wchar_t ISO_COUNTRY_CODE = 'E';
  static const __wchar_t SETTLEMENT_ENTITY_LOCATION = 'F';
  static const __wchar_t ISO_COUNTRY_CODE_ = 'E';
  static const __wchar_t KOREAN_INVESTOR_ID = '1';
  static const __wchar_t TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII = '2';
  static const __wchar_t TAIWANESE_TRADING_ACCOUNT = '3';
  static const __wchar_t MALAYSIAN_CENTRAL_DEPOSITORY = '4';
  static const __wchar_t CHINESE_B_SHARE = '5';
  static const __wchar_t UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER = '6';
  static const __wchar_t US_SOCIAL_SECURITY_NUMBER = '7';
  static const __wchar_t US_EMPLOYER_IDENTIFICATION_NUMBER = '8';
  static const __wchar_t AUSTRALIAN_BUSINESS_NUMBER = '9';
  static const __wchar_t AUSTRALIAN_TAX_FILE_NUMBER = 'A';
  PartyIDSource() : CharField(447) {}
    PartyIDSource(__wchar_t data) : CharField(447, data) {}
  };
  
  public __gc class PartyID : public StringField
  {
  public:
  PartyID() : StringField(448) {}
    PartyID(String* data) : StringField(448, data) {}
  };
  
  public __gc class TotalVolumeTradedDate : public UtcDateField
  {
  public:
  TotalVolumeTradedDate() : UtcDateField(449) {}
    TotalVolumeTradedDate(DateTime data) : UtcDateField(449, data) {}
  };
  
  public __gc class TotalVolumeTradedTime : public UtcTimeOnlyField
  {
  public:
  TotalVolumeTradedTime() : UtcTimeOnlyField(450) {}
    TotalVolumeTradedTime(DateTime data) : UtcTimeOnlyField(450, data) {}
  };
  
  public __gc class NetChgPrevDay : public DoubleField
  {
  public:
  NetChgPrevDay() : DoubleField(451) {}
    NetChgPrevDay(double data) : DoubleField(451, data) {}
  };
  
  public __gc class PartyRole : public IntField
  {
  public:
  static const int EXECUTING_FIRM = 1;
  static const int BROKER_OF_CREDIT = 2;
  static const int CLIENT_ID = 3;
  static const int CLEARING_FIRM = 4;
  static const int INVESTOR_ID = 5;
  static const int INTRODUCING_FIRM = 6;
  static const int ENTERING_FIRM = 7;
  static const int LOCATE = 8;
  static const int FUND_MANAGER_CLIENT_ID = 9;
  static const int SETTLEMENT_LOCATION = 10;
  static const int ORDER_ORIGINATION_TRADER = 11;
  static const int EXECUTING_TRADER = 12;
  static const int ORDER_ORIGINATION_FIRM = 13;
  static const int GIVEUP_CLEARING_FIRM = 14;
  static const int CORRESPONDANT_CLEARING_FIRM = 15;
  static const int EXECUTING_SYSTEM = 16;
  static const int CONTRA_FIRM = 17;
  static const int CONTRA_CLEARING_FIRM = 18;
  static const int SPONSORING_FIRM = 19;
  static const int UNDERLYING_CONTRA_FIRM = 20;
  PartyRole() : IntField(452) {}
    PartyRole(int data) : IntField(452, data) {}
  };
  
  public __gc class NoPartyIDs : public IntField
  {
  public:
  NoPartyIDs() : IntField(453) {}
    NoPartyIDs(int data) : IntField(453, data) {}
  };
  
  public __gc class NoSecurityAltID : public IntField
  {
  public:
  NoSecurityAltID() : IntField(454) {}
    NoSecurityAltID(int data) : IntField(454, data) {}
  };
  
  public __gc class SecurityAltID : public StringField
  {
  public:
  SecurityAltID() : StringField(455) {}
    SecurityAltID(String* data) : StringField(455, data) {}
  };
  
  public __gc class SecurityAltIDSource : public StringField
  {
  public:
  SecurityAltIDSource() : StringField(456) {}
    SecurityAltIDSource(String* data) : StringField(456, data) {}
  };
  
  public __gc class NoUnderlyingSecurityAltID : public IntField
  {
  public:
  NoUnderlyingSecurityAltID() : IntField(457) {}
    NoUnderlyingSecurityAltID(int data) : IntField(457, data) {}
  };
  
  public __gc class UnderlyingSecurityAltID : public StringField
  {
  public:
  UnderlyingSecurityAltID() : StringField(458) {}
    UnderlyingSecurityAltID(String* data) : StringField(458, data) {}
  };
  
  public __gc class UnderlyingSecurityAltIDSource : public StringField
  {
  public:
  UnderlyingSecurityAltIDSource() : StringField(459) {}
    UnderlyingSecurityAltIDSource(String* data) : StringField(459, data) {}
  };
  
  public __gc class Product : public IntField
  {
  public:
  static const int AGENCY = 1;
  static const int COMMODITY = 2;
  static const int CORPORATE = 3;
  static const int CURRENCY = 4;
  static const int EQUITY = 5;
  static const int GOVERNMENT = 6;
  static const int INDEX = 7;
  static const int LOAN = 8;
  static const int MONEYMARKET = 9;
  static const int MORTGAGE = 10;
  static const int MUNICIPAL = 11;
  static const int OTHER = 12;
  Product() : IntField(460) {}
    Product(int data) : IntField(460, data) {}
  };
  
  public __gc class CFICode : public StringField
  {
  public:
  CFICode() : StringField(461) {}
    CFICode(String* data) : StringField(461, data) {}
  };
  
  public __gc class UnderlyingProduct : public IntField
  {
  public:
  UnderlyingProduct() : IntField(462) {}
    UnderlyingProduct(int data) : IntField(462, data) {}
  };
  
  public __gc class UnderlyingCFICode : public StringField
  {
  public:
  UnderlyingCFICode() : StringField(463) {}
    UnderlyingCFICode(String* data) : StringField(463, data) {}
  };
  
  public __gc class TestMessageIndicator : public StringField
  {
  public:
  static const __wchar_t TRUE = 'Y';
  static const __wchar_t FALSE = 'N';
  TestMessageIndicator() : StringField(464) {}
    TestMessageIndicator(String* data) : StringField(464, data) {}
  };
  
  public __gc class QuantityType : public IntField
  {
  public:
  static const int SHARES = 1;
  static const int BONDS = 2;
  static const int CURRENTFACE = 3;
  static const int ORIGINALFACE = 4;
  static const int CURRENCY = 5;
  static const int CONTRACTS = 6;
  static const int OTHER = 7;
  static const int PAR = 8;
  QuantityType() : IntField(465) {}
    QuantityType(int data) : IntField(465, data) {}
  };
  
  public __gc class BookingRefID : public StringField
  {
  public:
  BookingRefID() : StringField(466) {}
    BookingRefID(String* data) : StringField(466, data) {}
  };
  
  public __gc class IndividualAllocID : public StringField
  {
  public:
  IndividualAllocID() : StringField(467) {}
    IndividualAllocID(String* data) : StringField(467, data) {}
  };
  
  public __gc class RoundingDirection : public CharField
  {
  public:
  RoundingDirection() : CharField(468) {}
    RoundingDirection(__wchar_t data) : CharField(468, data) {}
  };
  
  public __gc class RoundingModulus : public DoubleField
  {
  public:
  RoundingModulus() : DoubleField(469) {}
    RoundingModulus(double data) : DoubleField(469, data) {}
  };
  
  public __gc class CountryOfIssue : public StringField
  {
  public:
  CountryOfIssue() : StringField(470) {}
    CountryOfIssue(String* data) : StringField(470, data) {}
  };
  
  public __gc class StateOrProvinceOfIssue : public StringField
  {
  public:
  StateOrProvinceOfIssue() : StringField(471) {}
    StateOrProvinceOfIssue(String* data) : StringField(471, data) {}
  };
  
  public __gc class LocaleOfIssue : public StringField
  {
  public:
  LocaleOfIssue() : StringField(472) {}
    LocaleOfIssue(String* data) : StringField(472, data) {}
  };
  
  public __gc class NoRegistDtls : public IntField
  {
  public:
  NoRegistDtls() : IntField(473) {}
    NoRegistDtls(int data) : IntField(473, data) {}
  };
  
  public __gc class MailingDtls : public StringField
  {
  public:
  MailingDtls() : StringField(474) {}
    MailingDtls(String* data) : StringField(474, data) {}
  };
  
  public __gc class InvestorCountryOfResidence : public StringField
  {
  public:
  InvestorCountryOfResidence() : StringField(475) {}
    InvestorCountryOfResidence(String* data) : StringField(475, data) {}
  };
  
  public __gc class PaymentRef : public StringField
  {
  public:
  PaymentRef() : StringField(476) {}
    PaymentRef(String* data) : StringField(476, data) {}
  };
  
  public __gc class DistribPaymentMethod : public IntField
  {
  public:
  DistribPaymentMethod() : IntField(477) {}
    DistribPaymentMethod(int data) : IntField(477, data) {}
  };
  
  public __gc class CashDistribCurr : public DoubleField
  {
  public:
  CashDistribCurr() : DoubleField(478) {}
    CashDistribCurr(double data) : DoubleField(478, data) {}
  };
  
  public __gc class CommCurrency : public DoubleField
  {
  public:
  CommCurrency() : DoubleField(479) {}
    CommCurrency(double data) : DoubleField(479, data) {}
  };
  
  public __gc class CancellationRights : public CharField
  {
  public:
  CancellationRights() : CharField(480) {}
    CancellationRights(__wchar_t data) : CharField(480, data) {}
  };
  
  public __gc class MoneyLaunderingStatus : public CharField
  {
  public:
  static const __wchar_t PASSED = 'Y';
  static const __wchar_t NOT_CHECKED = 'N';
  static const __wchar_t EXEMPT_BELOW_THE_LIMIT = '1';
  static const __wchar_t EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION = '2';
  static const __wchar_t EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION = '3';
  MoneyLaunderingStatus() : CharField(481) {}
    MoneyLaunderingStatus(__wchar_t data) : CharField(481, data) {}
  };
  
  public __gc class MailingInst : public StringField
  {
  public:
  MailingInst() : StringField(482) {}
    MailingInst(String* data) : StringField(482, data) {}
  };
  
  public __gc class TransBkdTime : public UtcTimeStampField
  {
  public:
  TransBkdTime() : UtcTimeStampField(483) {}
    TransBkdTime(DateTime data) : UtcTimeStampField(483, data) {}
  };
  
  public __gc class ExecPriceType : public CharField
  {
  public:
  ExecPriceType() : CharField(484) {}
    ExecPriceType(__wchar_t data) : CharField(484, data) {}
  };
  
  public __gc class ExecPriceAdjustment : public DoubleField
  {
  public:
  ExecPriceAdjustment() : DoubleField(485) {}
    ExecPriceAdjustment(double data) : DoubleField(485, data) {}
  };
  
  public __gc class DateOfBirth : public StringField
  {
  public:
  DateOfBirth() : StringField(486) {}
    DateOfBirth(String* data) : StringField(486, data) {}
  };
  
  public __gc class TradeReportTransType : public CharField
  {
  public:
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t REPLACE = 'R';
  TradeReportTransType() : CharField(487) {}
    TradeReportTransType(__wchar_t data) : CharField(487, data) {}
  };
  
  public __gc class CardHolderName : public StringField
  {
  public:
  CardHolderName() : StringField(488) {}
    CardHolderName(String* data) : StringField(488, data) {}
  };
  
  public __gc class CardNumber : public StringField
  {
  public:
  CardNumber() : StringField(489) {}
    CardNumber(String* data) : StringField(489, data) {}
  };
  
  public __gc class CardExpDate : public StringField
  {
  public:
  CardExpDate() : StringField(490) {}
    CardExpDate(String* data) : StringField(490, data) {}
  };
  
  public __gc class CardIssNo : public StringField
  {
  public:
  CardIssNo() : StringField(491) {}
    CardIssNo(String* data) : StringField(491, data) {}
  };
  
  public __gc class PaymentMethod : public IntField
  {
  public:
  PaymentMethod() : IntField(492) {}
    PaymentMethod(int data) : IntField(492, data) {}
  };
  
  public __gc class RegistAcctType : public StringField
  {
  public:
  RegistAcctType() : StringField(493) {}
    RegistAcctType(String* data) : StringField(493, data) {}
  };
  
  public __gc class Designation : public StringField
  {
  public:
  Designation() : StringField(494) {}
    Designation(String* data) : StringField(494, data) {}
  };
  
  public __gc class TaxAdvantageType : public IntField
  {
  public:
  TaxAdvantageType() : IntField(495) {}
    TaxAdvantageType(int data) : IntField(495, data) {}
  };
  
  public __gc class RegistRejReasonText : public StringField
  {
  public:
  RegistRejReasonText() : StringField(496) {}
    RegistRejReasonText(String* data) : StringField(496, data) {}
  };
  
  public __gc class FundRenewWaiv : public CharField
  {
  public:
  FundRenewWaiv() : CharField(497) {}
    FundRenewWaiv(__wchar_t data) : CharField(497, data) {}
  };
  
  public __gc class CashDistribAgentName : public StringField
  {
  public:
  CashDistribAgentName() : StringField(498) {}
    CashDistribAgentName(String* data) : StringField(498, data) {}
  };
  
  public __gc class CashDistribAgentCode : public StringField
  {
  public:
  CashDistribAgentCode() : StringField(499) {}
    CashDistribAgentCode(String* data) : StringField(499, data) {}
  };
  
  public __gc class CashDistribAgentAcctNumber : public StringField
  {
  public:
  CashDistribAgentAcctNumber() : StringField(500) {}
    CashDistribAgentAcctNumber(String* data) : StringField(500, data) {}
  };
  
  public __gc class CashDistribPayRef : public StringField
  {
  public:
  CashDistribPayRef() : StringField(501) {}
    CashDistribPayRef(String* data) : StringField(501, data) {}
  };
  
  public __gc class CashDistribAgentAcctName : public StringField
  {
  public:
  CashDistribAgentAcctName() : StringField(502) {}
    CashDistribAgentAcctName(String* data) : StringField(502, data) {}
  };
  
  public __gc class CardStartDate : public StringField
  {
  public:
  CardStartDate() : StringField(503) {}
    CardStartDate(String* data) : StringField(503, data) {}
  };
  
  public __gc class PaymentDate : public StringField
  {
  public:
  PaymentDate() : StringField(504) {}
    PaymentDate(String* data) : StringField(504, data) {}
  };
  
  public __gc class PaymentRemitterID : public StringField
  {
  public:
  PaymentRemitterID() : StringField(505) {}
    PaymentRemitterID(String* data) : StringField(505, data) {}
  };
  
  public __gc class RegistStatus : public CharField
  {
  public:
  RegistStatus() : CharField(506) {}
    RegistStatus(__wchar_t data) : CharField(506, data) {}
  };
  
  public __gc class RegistRejReasonCode : public IntField
  {
  public:
  RegistRejReasonCode() : IntField(507) {}
    RegistRejReasonCode(int data) : IntField(507, data) {}
  };
  
  public __gc class RegistRefID : public StringField
  {
  public:
  RegistRefID() : StringField(508) {}
    RegistRefID(String* data) : StringField(508, data) {}
  };
  
  public __gc class RegistDetls : public StringField
  {
  public:
  RegistDetls() : StringField(509) {}
    RegistDetls(String* data) : StringField(509, data) {}
  };
  
  public __gc class NoDistribInsts : public IntField
  {
  public:
  NoDistribInsts() : IntField(510) {}
    NoDistribInsts(int data) : IntField(510, data) {}
  };
  
  public __gc class RegistEmail : public StringField
  {
  public:
  RegistEmail() : StringField(511) {}
    RegistEmail(String* data) : StringField(511, data) {}
  };
  
  public __gc class DistribPercentage : public DoubleField
  {
  public:
  DistribPercentage() : DoubleField(512) {}
    DistribPercentage(double data) : DoubleField(512, data) {}
  };
  
  public __gc class RegistID : public StringField
  {
  public:
  RegistID() : StringField(513) {}
    RegistID(String* data) : StringField(513, data) {}
  };
  
  public __gc class RegistTransType : public CharField
  {
  public:
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLACE = '1';
  static const __wchar_t CANCEL = '2';
  RegistTransType() : CharField(514) {}
    RegistTransType(__wchar_t data) : CharField(514, data) {}
  };
  
  public __gc class ExecValuationPoint : public UtcTimeStampField
  {
  public:
  ExecValuationPoint() : UtcTimeStampField(515) {}
    ExecValuationPoint(DateTime data) : UtcTimeStampField(515, data) {}
  };
  
  public __gc class OrderPercent : public DoubleField
  {
  public:
  OrderPercent() : DoubleField(516) {}
    OrderPercent(double data) : DoubleField(516, data) {}
  };
  
  public __gc class OwnershipType : public CharField
  {
  public:
  OwnershipType() : CharField(517) {}
    OwnershipType(__wchar_t data) : CharField(517, data) {}
  };
  
  public __gc class NoContAmts : public IntField
  {
  public:
  NoContAmts() : IntField(518) {}
    NoContAmts(int data) : IntField(518, data) {}
  };
  
  public __gc class ContAmtType : public IntField
  {
  public:
  ContAmtType() : IntField(519) {}
    ContAmtType(int data) : IntField(519, data) {}
  };
  
  public __gc class ContAmtValue : public DoubleField
  {
  public:
  ContAmtValue() : DoubleField(520) {}
    ContAmtValue(double data) : DoubleField(520, data) {}
  };
  
  public __gc class ContAmtCurr : public DoubleField
  {
  public:
  ContAmtCurr() : DoubleField(521) {}
    ContAmtCurr(double data) : DoubleField(521, data) {}
  };
  
  public __gc class OwnerType : public IntField
  {
  public:
  static const int INDIVIDUAL_INVESTOR = 1;
  static const int PUBLIC_COMPANY = 2;
  static const int PRIVATE_COMPANY = 3;
  static const int INDIVIDUAL_TRUSTEE = 4;
  static const int COMPANY_TRUSTEE = 5;
  static const int PENSION_PLAN = 6;
  static const int CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = 7;
  static const int TRUSTS = 8;
  static const int FIDUCIARIES = 9;
  static const int NETWORKING_SUB_ACCOUNT = 10;
  static const int NON_PROFIT_ORGANIZATION = 11;
  static const int CORPORATE_BODY = 12;
  static const int NOMINEE = 13;
  OwnerType() : IntField(522) {}
    OwnerType(int data) : IntField(522, data) {}
  };
  
  public __gc class PartySubID : public StringField
  {
  public:
  PartySubID() : StringField(523) {}
    PartySubID(String* data) : StringField(523, data) {}
  };
  
  public __gc class NestedPartyID : public StringField
  {
  public:
  NestedPartyID() : StringField(524) {}
    NestedPartyID(String* data) : StringField(524, data) {}
  };
  
  public __gc class NestedPartyIDSource : public CharField
  {
  public:
  NestedPartyIDSource() : CharField(525) {}
    NestedPartyIDSource(__wchar_t data) : CharField(525, data) {}
  };
  
  public __gc class SecondaryClOrdID : public StringField
  {
  public:
  SecondaryClOrdID() : StringField(526) {}
    SecondaryClOrdID(String* data) : StringField(526, data) {}
  };
  
  public __gc class SecondaryExecID : public StringField
  {
  public:
  SecondaryExecID() : StringField(527) {}
    SecondaryExecID(String* data) : StringField(527, data) {}
  };
  
  public __gc class OrderCapacity : public CharField
  {
  public:
  static const __wchar_t AGENCY = 'A';
  static const __wchar_t PROPRIETARY = 'G';
  static const __wchar_t INDIVIDUAL = 'I';
  static const __wchar_t PRINCIPAL = 'P';
  static const __wchar_t RISKLESS_PRINCIPAL = 'R';
  static const __wchar_t AGENT_FOR_OTHER_MEMBER = 'W';
  OrderCapacity() : CharField(528) {}
    OrderCapacity(__wchar_t data) : CharField(528, data) {}
  };
  
  public __gc class OrderRestrictions : public StringField
  {
  public:
  static const __wchar_t PROGRAM_TRADE = '1';
  static const __wchar_t INDEX_ARBITRAGE = '2';
  static const __wchar_t NON_INDEX_ARBITRAGE = '3';
  static const __wchar_t COMPETING_MARKET_MAKER = '4';
  static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = '5';
  static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = '6';
  static const __wchar_t FOREIGN_ENTITY = '7';
  static const __wchar_t EXTERNAL_MARKET_PARTICIPANT = '8';
  static const __wchar_t EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = '9';
  static const __wchar_t RISKLESS_ARBITRAGE = 'A';
  OrderRestrictions() : StringField(529) {}
    OrderRestrictions(String* data) : StringField(529, data) {}
  };
  
  public __gc class MassCancelRequestType : public CharField
  {
  public:
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
  static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
  static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
  static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
  static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
  static const __wchar_t CANCEL_ALL_ORDERS = '7';
  MassCancelRequestType() : CharField(530) {}
    MassCancelRequestType(__wchar_t data) : CharField(530, data) {}
  };
  
  public __gc class MassCancelResponse : public CharField
  {
  public:
  static const __wchar_t CANCEL_REQUEST_REJECTED = '0';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
  static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
  static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
  static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
  static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
  static const __wchar_t CANCEL_ALL_ORDERS = '7';
  MassCancelResponse() : CharField(531) {}
    MassCancelResponse(__wchar_t data) : CharField(531, data) {}
  };
  
  public __gc class MassCancelRejectReason : public CharField
  {
  public:
  MassCancelRejectReason() : CharField(532) {}
    MassCancelRejectReason(__wchar_t data) : CharField(532, data) {}
  };
  
  public __gc class TotalAffectedOrders : public IntField
  {
  public:
  TotalAffectedOrders() : IntField(533) {}
    TotalAffectedOrders(int data) : IntField(533, data) {}
  };
  
  public __gc class NoAffectedOrders : public IntField
  {
  public:
  NoAffectedOrders() : IntField(534) {}
    NoAffectedOrders(int data) : IntField(534, data) {}
  };
  
  public __gc class AffectedOrderID : public StringField
  {
  public:
  AffectedOrderID() : StringField(535) {}
    AffectedOrderID(String* data) : StringField(535, data) {}
  };
  
  public __gc class AffectedSecondaryOrderID : public StringField
  {
  public:
  AffectedSecondaryOrderID() : StringField(536) {}
    AffectedSecondaryOrderID(String* data) : StringField(536, data) {}
  };
  
  public __gc class QuoteType : public IntField
  {
  public:
  static const int INDICATIVE = 0;
  static const int TRADEABLE = 1;
  static const int RESTRICTED_TRADEABLE = 2;
  QuoteType() : IntField(537) {}
    QuoteType(int data) : IntField(537, data) {}
  };
  
  public __gc class NestedPartyRole : public IntField
  {
  public:
  NestedPartyRole() : IntField(538) {}
    NestedPartyRole(int data) : IntField(538, data) {}
  };
  
  public __gc class NoNestedPartyIDs : public IntField
  {
  public:
  NoNestedPartyIDs() : IntField(539) {}
    NoNestedPartyIDs(int data) : IntField(539, data) {}
  };
  
  public __gc class TotalAccruedInterestAmt : public DoubleField
  {
  public:
  TotalAccruedInterestAmt() : DoubleField(540) {}
    TotalAccruedInterestAmt(double data) : DoubleField(540, data) {}
  };
  
  public __gc class MaturityDate : public StringField
  {
  public:
  MaturityDate() : StringField(541) {}
    MaturityDate(String* data) : StringField(541, data) {}
  };
  
  public __gc class UnderlyingMaturityDate : public StringField
  {
  public:
  UnderlyingMaturityDate() : StringField(542) {}
    UnderlyingMaturityDate(String* data) : StringField(542, data) {}
  };
  
  public __gc class InstrRegistry : public StringField
  {
  public:
  static const String* COUNTRY_IN_WHICH_REGISTRY_IS_KEPT = "Code";
  static const String* PHYSICAL_OR_BEARER = "ZZ";
  InstrRegistry() : StringField(543) {}
    InstrRegistry(String* data) : StringField(543, data) {}
  };
  
  public __gc class CashMargin : public CharField
  {
  public:
  static const __wchar_t CASH = '1';
  static const __wchar_t MARGIN_OPEN = '2';
  static const __wchar_t MARGIN_CLOSE = '3';
  CashMargin() : CharField(544) {}
    CashMargin(__wchar_t data) : CharField(544, data) {}
  };
  
  public __gc class NestedPartySubID : public StringField
  {
  public:
  NestedPartySubID() : StringField(545) {}
    NestedPartySubID(String* data) : StringField(545, data) {}
  };
  
  public __gc class Scope : public StringField
  {
  public:
  static const __wchar_t LOCAL = '1';
  static const __wchar_t NATIONAL = '2';
  static const __wchar_t GLOBAL = '3';
  Scope() : StringField(546) {}
    Scope(String* data) : StringField(546, data) {}
  };
  
  public __gc class MDImplicitDelete : public StringField
  {
  public:
  static const __wchar_t CLIENT_DELETES_BIDS = 'Y';
  static const __wchar_t SERVER_DELETES_BIDS = 'N';
  MDImplicitDelete() : StringField(547) {}
    MDImplicitDelete(String* data) : StringField(547, data) {}
  };
  
  public __gc class CrossID : public StringField
  {
  public:
  CrossID() : StringField(548) {}
    CrossID(String* data) : StringField(548, data) {}
  };
  
  public __gc class CrossType : public IntField
  {
  public:
  static const int CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT = 1;
  static const int CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED = 2;
  static const int CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE = 3;
  static const int CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE = 4;
  CrossType() : IntField(549) {}
    CrossType(int data) : IntField(549, data) {}
  };
  
  public __gc class CrossPrioritization : public IntField
  {
  public:
  CrossPrioritization() : IntField(550) {}
    CrossPrioritization(int data) : IntField(550, data) {}
  };
  
  public __gc class OrigCrossID : public StringField
  {
  public:
  OrigCrossID() : StringField(551) {}
    OrigCrossID(String* data) : StringField(551, data) {}
  };
  
  public __gc class NoSides : public IntField
  {
  public:
  static const __wchar_t ONE_SIDE = '1';
  static const __wchar_t BOTH_SIDES = '2';
  NoSides() : IntField(552) {}
    NoSides(int data) : IntField(552, data) {}
  };
  
  public __gc class Username : public StringField
  {
  public:
  Username() : StringField(553) {}
    Username(String* data) : StringField(553, data) {}
  };
  
  public __gc class Password : public StringField
  {
  public:
  Password() : StringField(554) {}
    Password(String* data) : StringField(554, data) {}
  };
  
  public __gc class NoLegs : public IntField
  {
  public:
  NoLegs() : IntField(555) {}
    NoLegs(int data) : IntField(555, data) {}
  };
  
  public __gc class LegCurrency : public DoubleField
  {
  public:
  LegCurrency() : DoubleField(556) {}
    LegCurrency(double data) : DoubleField(556, data) {}
  };
  
  public __gc class TotalNumSecurityTypes : public IntField
  {
  public:
  TotalNumSecurityTypes() : IntField(557) {}
    TotalNumSecurityTypes(int data) : IntField(557, data) {}
  };
  
  public __gc class NoSecurityTypes : public IntField
  {
  public:
  NoSecurityTypes() : IntField(558) {}
    NoSecurityTypes(int data) : IntField(558, data) {}
  };
  
  public __gc class SecurityListRequestType : public IntField
  {
  public:
  static const int SYMBOL = 0;
  static const int SECURITYTYPE_AND = 1;
  static const int PRODUCT = 2;
  static const int TRADINGSESSIONID = 3;
  static const int ALL_SECURITIES = 4;
  SecurityListRequestType() : IntField(559) {}
    SecurityListRequestType(int data) : IntField(559, data) {}
  };
  
  public __gc class SecurityRequestResult : public IntField
  {
  public:
  static const int VALID_REQUEST = 0;
  static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
  static const int NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA = 2;
  static const int NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA = 3;
  static const int INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE = 4;
  static const int REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED = 5;
  SecurityRequestResult() : IntField(560) {}
    SecurityRequestResult(int data) : IntField(560, data) {}
  };
  
  public __gc class RoundLot : public DoubleField
  {
  public:
  RoundLot() : DoubleField(561) {}
    RoundLot(double data) : DoubleField(561, data) {}
  };
  
  public __gc class MinTradeVol : public DoubleField
  {
  public:
  MinTradeVol() : DoubleField(562) {}
    MinTradeVol(double data) : DoubleField(562, data) {}
  };
  
  public __gc class MultiLegRptTypeReq : public IntField
  {
  public:
  MultiLegRptTypeReq() : IntField(563) {}
    MultiLegRptTypeReq(int data) : IntField(563, data) {}
  };
  
  public __gc class LegPositionEffect : public CharField
  {
  public:
  LegPositionEffect() : CharField(564) {}
    LegPositionEffect(__wchar_t data) : CharField(564, data) {}
  };
  
  public __gc class LegCoveredOrUncovered : public IntField
  {
  public:
  LegCoveredOrUncovered() : IntField(565) {}
    LegCoveredOrUncovered(int data) : IntField(565, data) {}
  };
  
  public __gc class LegPrice : public DoubleField
  {
  public:
  LegPrice() : DoubleField(566) {}
    LegPrice(double data) : DoubleField(566, data) {}
  };
  
  public __gc class TradSesStatusRejReason : public IntField
  {
  public:
  static const int UNKNOWN_OR_INVALID_TRADINGSESSIONID = 1;
  TradSesStatusRejReason() : IntField(567) {}
    TradSesStatusRejReason(int data) : IntField(567, data) {}
  };
  
  public __gc class TradeRequestID : public StringField
  {
  public:
  TradeRequestID() : StringField(568) {}
    TradeRequestID(String* data) : StringField(568, data) {}
  };
  
  public __gc class TradeRequestType : public IntField
  {
  public:
  static const int ALL_TRADES = 0;
  static const int MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST = 1;
  static const int UNMATCHED_TRADES_THAT_MATCH_CRITERIA = 2;
  static const int UNREPORTED_TRADES_THAT_MATCH_CRITERIA = 3;
  static const int ADVISORIES_THAT_MATCH_CRITERIA = 4;
  TradeRequestType() : IntField(569) {}
    TradeRequestType(int data) : IntField(569, data) {}
  };
  
  public __gc class PreviouslyReported : public StringField
  {
  public:
  static const __wchar_t PREVIOUSLY_REPORTED_TO_COUNTERPARTY = 'Y';
  static const __wchar_t NOT_REPORTED_TO_COUNTERPARTY = 'N';
  PreviouslyReported() : StringField(570) {}
    PreviouslyReported(String* data) : StringField(570, data) {}
  };
  
  public __gc class TradeReportID : public StringField
  {
  public:
  TradeReportID() : StringField(571) {}
    TradeReportID(String* data) : StringField(571, data) {}
  };
  
  public __gc class TradeReportRefID : public StringField
  {
  public:
  TradeReportRefID() : StringField(572) {}
    TradeReportRefID(String* data) : StringField(572, data) {}
  };
  
  public __gc class MatchStatus : public CharField
  {
  public:
  static const __wchar_t COMPARED = '0';
  static const __wchar_t UNCOMPARED = '1';
  static const __wchar_t ADVISORY_OR_ALERT = '2';
  MatchStatus() : CharField(573) {}
    MatchStatus(__wchar_t data) : CharField(573, data) {}
  };
  
  public __gc class MatchType : public StringField
  {
  public:
  static const String* EXACT_MATCH_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1";
  static const String* EXACT_MATCH_PLUS_FOUR_BADGES = "A2";
  static const String* EXACT_MATCH_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3";
  static const String* EXACT_MATCH_PLUS_TWO_BADGES = "A4";
  static const String* EXACT_MATCH_PLUS_EXECUTION_TIME = "A5";
  static const String* COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS = "AQ";
  static const String* SUMMARIZED_MATCH_USING_A1_TO_A5 = "S5";
  static const String* EXACT_MATCH_MINUS_BADGES_AND_EXECUTION_TIME = "M1";
  static const String* SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES = "M2";
  static const String* OCS_LOCKED_IN = "MT";
  static const String* ACT_M1_MATCH = "M1";
  static const String* ACT_M2_MATCH = "M2";
  static const String* ACT_ACCEPTED_TRADE = "M3";
  static const String* ACT_DEFAULT_TRADE = "M4";
  static const String* ACT_DEFAULT_AFTER_M2 = "M5";
  static const String* ACT_M6_MATCH = "M6";
  static const String* NON_ACT = "MT";
  MatchType() : StringField(574) {}
    MatchType(String* data) : StringField(574, data) {}
  };
  
  public __gc class OddLot : public StringField
  {
  public:
  OddLot() : StringField(575) {}
    OddLot(String* data) : StringField(575, data) {}
  };
  
  public __gc class NoClearingInstructions : public IntField
  {
  public:
  NoClearingInstructions() : IntField(576) {}
    NoClearingInstructions(int data) : IntField(576, data) {}
  };
  
  public __gc class ClearingInstruction : public IntField
  {
  public:
  static const int PROCESS_NORMALLY = 0;
  static const int EXCLUDE_FROM_ALL_NETTING = 1;
  static const int BILATERAL_NETTING_ONLY = 2;
  static const int EX_CLEARING = 3;
  static const int SPECIAL_TRADE = 4;
  static const int MULTILATERAL_NETTING = 5;
  static const int CLEAR_AGAINST_CENTRAL_COUNTERPARTY = 6;
  static const int EXCLUDE_FROM_CENTRAL_COUNTERPARTY = 7;
  static const int MANUAL_MODE = 8;
  static const int AUTOMATIC_POSTING_MODE = 9;
  static const int AUTOMATIC_GIVE_UP_MODE = 10;
  ClearingInstruction() : IntField(577) {}
    ClearingInstruction(int data) : IntField(577, data) {}
  };
  
  public __gc class TradeInputSource : public StringField
  {
  public:
  TradeInputSource() : StringField(578) {}
    TradeInputSource(String* data) : StringField(578, data) {}
  };
  
  public __gc class TradeInputDevice : public StringField
  {
  public:
  TradeInputDevice() : StringField(579) {}
    TradeInputDevice(String* data) : StringField(579, data) {}
  };
  
  public __gc class NoDates : public IntField
  {
  public:
  NoDates() : IntField(580) {}
    NoDates(int data) : IntField(580, data) {}
  };
  
  public __gc class AccountType : public IntField
  {
  public:
  static const int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
  static const int HOUSE_TRADER = 3;
  static const int FLOOR_TRADER = 4;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
  static const int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
  static const int JOINT_BACKOFFICE_ACCOUNT = 8;
  AccountType() : IntField(581) {}
    AccountType(int data) : IntField(581, data) {}
  };
  
  public __gc class CustOrderCapacity : public IntField
  {
  public:
  CustOrderCapacity() : IntField(582) {}
    CustOrderCapacity(int data) : IntField(582, data) {}
  };
  
  public __gc class ClOrdLinkID : public StringField
  {
  public:
  ClOrdLinkID() : StringField(583) {}
    ClOrdLinkID(String* data) : StringField(583, data) {}
  };
  
  public __gc class MassStatusReqID : public StringField
  {
  public:
  MassStatusReqID() : StringField(584) {}
    MassStatusReqID(String* data) : StringField(584, data) {}
  };
  
  public __gc class MassStatusReqType : public IntField
  {
  public:
  static const int STATUS_FOR_ORDERS_FOR_A_SECURITY = 1;
  static const int STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2;
  static const int STATUS_FOR_ORDERS_FOR_A_PRODUCT = 3;
  static const int STATUS_FOR_ORDERS_FOR_A_CFICODE = 4;
  static const int STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = 5;
  static const int STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = 6;
  static const int STATUS_FOR_ALL_ORDERS = 7;
  static const int STATUS_FOR_ORDERS_FOR_A_PARTYID = 8;
  MassStatusReqType() : IntField(585) {}
    MassStatusReqType(int data) : IntField(585, data) {}
  };
  
  public __gc class OrigOrdModTime : public UtcTimeStampField
  {
  public:
  OrigOrdModTime() : UtcTimeStampField(586) {}
    OrigOrdModTime(DateTime data) : UtcTimeStampField(586, data) {}
  };
  
  public __gc class LegSettlmntTyp : public CharField
  {
  public:
  LegSettlmntTyp() : CharField(587) {}
    LegSettlmntTyp(__wchar_t data) : CharField(587, data) {}
  };
  
  public __gc class LegFutSettDate : public StringField
  {
  public:
  LegFutSettDate() : StringField(588) {}
    LegFutSettDate(String* data) : StringField(588, data) {}
  };
  
  public __gc class DayBookingInst : public CharField
  {
  public:
  DayBookingInst() : CharField(589) {}
    DayBookingInst(__wchar_t data) : CharField(589, data) {}
  };
  
  public __gc class BookingUnit : public CharField
  {
  public:
  BookingUnit() : CharField(590) {}
    BookingUnit(__wchar_t data) : CharField(590, data) {}
  };
  
  public __gc class PreallocMethod : public CharField
  {
  public:
  PreallocMethod() : CharField(591) {}
    PreallocMethod(__wchar_t data) : CharField(591, data) {}
  };
  
  public __gc class UnderlyingCountryOfIssue : public StringField
  {
  public:
  UnderlyingCountryOfIssue() : StringField(592) {}
    UnderlyingCountryOfIssue(String* data) : StringField(592, data) {}
  };
  
  public __gc class UnderlyingStateOrProvinceOfIssue : public StringField
  {
  public:
  UnderlyingStateOrProvinceOfIssue() : StringField(593) {}
    UnderlyingStateOrProvinceOfIssue(String* data) : StringField(593, data) {}
  };
  
  public __gc class UnderlyingLocaleOfIssue : public StringField
  {
  public:
  UnderlyingLocaleOfIssue() : StringField(594) {}
    UnderlyingLocaleOfIssue(String* data) : StringField(594, data) {}
  };
  
  public __gc class UnderlyingInstrRegistry : public StringField
  {
  public:
  UnderlyingInstrRegistry() : StringField(595) {}
    UnderlyingInstrRegistry(String* data) : StringField(595, data) {}
  };
  
  public __gc class LegCountryOfIssue : public StringField
  {
  public:
  LegCountryOfIssue() : StringField(596) {}
    LegCountryOfIssue(String* data) : StringField(596, data) {}
  };
  
  public __gc class LegStateOrProvinceOfIssue : public StringField
  {
  public:
  LegStateOrProvinceOfIssue() : StringField(597) {}
    LegStateOrProvinceOfIssue(String* data) : StringField(597, data) {}
  };
  
  public __gc class LegLocaleOfIssue : public StringField
  {
  public:
  LegLocaleOfIssue() : StringField(598) {}
    LegLocaleOfIssue(String* data) : StringField(598, data) {}
  };
  
  public __gc class LegInstrRegistry : public StringField
  {
  public:
  LegInstrRegistry() : StringField(599) {}
    LegInstrRegistry(String* data) : StringField(599, data) {}
  };
  
  public __gc class LegSymbol : public StringField
  {
  public:
  LegSymbol() : StringField(600) {}
    LegSymbol(String* data) : StringField(600, data) {}
  };
  
  public __gc class LegSymbolSfx : public StringField
  {
  public:
  LegSymbolSfx() : StringField(601) {}
    LegSymbolSfx(String* data) : StringField(601, data) {}
  };
  
  public __gc class LegSecurityID : public StringField
  {
  public:
  LegSecurityID() : StringField(602) {}
    LegSecurityID(String* data) : StringField(602, data) {}
  };
  
  public __gc class LegSecurityIDSource : public StringField
  {
  public:
  LegSecurityIDSource() : StringField(603) {}
    LegSecurityIDSource(String* data) : StringField(603, data) {}
  };
  
  public __gc class NoLegSecurityAltID : public StringField
  {
  public:
  NoLegSecurityAltID() : StringField(604) {}
    NoLegSecurityAltID(String* data) : StringField(604, data) {}
  };
  
  public __gc class LegSecurityAltID : public StringField
  {
  public:
  LegSecurityAltID() : StringField(605) {}
    LegSecurityAltID(String* data) : StringField(605, data) {}
  };
  
  public __gc class LegSecurityAltIDSource : public StringField
  {
  public:
  LegSecurityAltIDSource() : StringField(606) {}
    LegSecurityAltIDSource(String* data) : StringField(606, data) {}
  };
  
  public __gc class LegProduct : public IntField
  {
  public:
  LegProduct() : IntField(607) {}
    LegProduct(int data) : IntField(607, data) {}
  };
  
  public __gc class LegCFICode : public StringField
  {
  public:
  LegCFICode() : StringField(608) {}
    LegCFICode(String* data) : StringField(608, data) {}
  };
  
  public __gc class LegSecurityType : public StringField
  {
  public:
  LegSecurityType() : StringField(609) {}
    LegSecurityType(String* data) : StringField(609, data) {}
  };
  
  public __gc class LegMaturityMonthYear : public StringField
  {
  public:
  LegMaturityMonthYear() : StringField(610) {}
    LegMaturityMonthYear(String* data) : StringField(610, data) {}
  };
  
  public __gc class LegMaturityDate : public StringField
  {
  public:
  LegMaturityDate() : StringField(611) {}
    LegMaturityDate(String* data) : StringField(611, data) {}
  };
  
  public __gc class LegStrikePrice : public DoubleField
  {
  public:
  LegStrikePrice() : DoubleField(612) {}
    LegStrikePrice(double data) : DoubleField(612, data) {}
  };
  
  public __gc class LegOptAttribute : public CharField
  {
  public:
  LegOptAttribute() : CharField(613) {}
    LegOptAttribute(__wchar_t data) : CharField(613, data) {}
  };
  
  public __gc class LegContractMultiplier : public DoubleField
  {
  public:
  LegContractMultiplier() : DoubleField(614) {}
    LegContractMultiplier(double data) : DoubleField(614, data) {}
  };
  
  public __gc class LegCouponRate : public DoubleField
  {
  public:
  LegCouponRate() : DoubleField(615) {}
    LegCouponRate(double data) : DoubleField(615, data) {}
  };
  
  public __gc class LegSecurityExchange : public StringField
  {
  public:
  LegSecurityExchange() : StringField(616) {}
    LegSecurityExchange(String* data) : StringField(616, data) {}
  };
  
  public __gc class LegIssuer : public StringField
  {
  public:
  LegIssuer() : StringField(617) {}
    LegIssuer(String* data) : StringField(617, data) {}
  };
  
  public __gc class EncodedLegIssuerLen : public IntField
  {
  public:
  EncodedLegIssuerLen() : IntField(618) {}
    EncodedLegIssuerLen(int data) : IntField(618, data) {}
  };
  
  public __gc class EncodedLegIssuer : public StringField
  {
  public:
  EncodedLegIssuer() : StringField(619) {}
    EncodedLegIssuer(String* data) : StringField(619, data) {}
  };
  
  public __gc class LegSecurityDesc : public StringField
  {
  public:
  LegSecurityDesc() : StringField(620) {}
    LegSecurityDesc(String* data) : StringField(620, data) {}
  };
  
  public __gc class EncodedLegSecurityDescLen : public IntField
  {
  public:
  EncodedLegSecurityDescLen() : IntField(621) {}
    EncodedLegSecurityDescLen(int data) : IntField(621, data) {}
  };
  
  public __gc class EncodedLegSecurityDesc : public StringField
  {
  public:
  EncodedLegSecurityDesc() : StringField(622) {}
    EncodedLegSecurityDesc(String* data) : StringField(622, data) {}
  };
  
  public __gc class LegRatioQty : public DoubleField
  {
  public:
  LegRatioQty() : DoubleField(623) {}
    LegRatioQty(double data) : DoubleField(623, data) {}
  };
  
  public __gc class LegSide : public CharField
  {
  public:
  LegSide() : CharField(624) {}
    LegSide(__wchar_t data) : CharField(624, data) {}
  };
  
  public __gc class TradingSessionSubID : public StringField
  {
  public:
  TradingSessionSubID() : StringField(625) {}
    TradingSessionSubID(String* data) : StringField(625, data) {}
  };
  
  public __gc class AllocType : public IntField
  {
  public:
  static const int BUYSIDE_CALCULATED = 1;
  static const int BUYSIDE_PRELIMINARY = 2;
  static const int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
  static const int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
  static const int BUYSIDE_READY_TO_BOOK_SINGLE_ORDER = 5;
  static const int BUYSIDE_READY_TO_BOOK_COMBINED_SET_OF_ORDERS = 6;
  AllocType() : IntField(626) {}
    AllocType(int data) : IntField(626, data) {}
  };
  
  public __gc class NoHops : public IntField
  {
  public:
  NoHops() : IntField(627) {}
    NoHops(int data) : IntField(627, data) {}
  };
  
  public __gc class HopCompID : public StringField
  {
  public:
  HopCompID() : StringField(628) {}
    HopCompID(String* data) : StringField(628, data) {}
  };
  
  public __gc class HopSendingTime : public UtcTimeStampField
  {
  public:
  HopSendingTime() : UtcTimeStampField(629) {}
    HopSendingTime(DateTime data) : UtcTimeStampField(629, data) {}
  };
  
  public __gc class HopRefID : public IntField
  {
  public:
  HopRefID() : IntField(630) {}
    HopRefID(int data) : IntField(630, data) {}
  };
  
  public __gc class MidPx : public DoubleField
  {
  public:
  MidPx() : DoubleField(631) {}
    MidPx(double data) : DoubleField(631, data) {}
  };
  
  public __gc class BidYield : public DoubleField
  {
  public:
  BidYield() : DoubleField(632) {}
    BidYield(double data) : DoubleField(632, data) {}
  };
  
  public __gc class MidYield : public DoubleField
  {
  public:
  MidYield() : DoubleField(633) {}
    MidYield(double data) : DoubleField(633, data) {}
  };
  
  public __gc class OfferYield : public DoubleField
  {
  public:
  OfferYield() : DoubleField(634) {}
    OfferYield(double data) : DoubleField(634, data) {}
  };
  
  public __gc class ClearingFeeIndicator : public StringField
  {
  public:
  ClearingFeeIndicator() : StringField(635) {}
    ClearingFeeIndicator(String* data) : StringField(635, data) {}
  };
  
  public __gc class WorkingIndicator : public StringField
  {
  public:
  static const __wchar_t ORDER_IS_CURRENTLY_BEING_WORKED = 'Y';
  static const __wchar_t ORDER_HAS_BEEN_ACCEPTED_BUT_NOT_YET_IN_A_WORKING_STATE = 'N';
  WorkingIndicator() : StringField(636) {}
    WorkingIndicator(String* data) : StringField(636, data) {}
  };
  
  public __gc class LegLastPx : public DoubleField
  {
  public:
  LegLastPx() : DoubleField(637) {}
    LegLastPx(double data) : DoubleField(637, data) {}
  };
  
  public __gc class PriorityIndicator : public IntField
  {
  public:
  static const int PRIORITY_UNCHANGED = 0;
  static const int LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = 1;
  PriorityIndicator() : IntField(638) {}
    PriorityIndicator(int data) : IntField(638, data) {}
  };
  
  public __gc class PriceImprovement : public DoubleField
  {
  public:
  PriceImprovement() : DoubleField(639) {}
    PriceImprovement(double data) : DoubleField(639, data) {}
  };
  
  public __gc class Price2 : public DoubleField
  {
  public:
  Price2() : DoubleField(640) {}
    Price2(double data) : DoubleField(640, data) {}
  };
  
  public __gc class LastForwardPoints2 : public DoubleField
  {
  public:
  LastForwardPoints2() : DoubleField(641) {}
    LastForwardPoints2(double data) : DoubleField(641, data) {}
  };
  
  public __gc class BidForwardPoints2 : public DoubleField
  {
  public:
  BidForwardPoints2() : DoubleField(642) {}
    BidForwardPoints2(double data) : DoubleField(642, data) {}
  };
  
  public __gc class OfferForwardPoints2 : public DoubleField
  {
  public:
  OfferForwardPoints2() : DoubleField(643) {}
    OfferForwardPoints2(double data) : DoubleField(643, data) {}
  };
  
  public __gc class RFQReqID : public StringField
  {
  public:
  RFQReqID() : StringField(644) {}
    RFQReqID(String* data) : StringField(644, data) {}
  };
  
  public __gc class MktBidPx : public DoubleField
  {
  public:
  MktBidPx() : DoubleField(645) {}
    MktBidPx(double data) : DoubleField(645, data) {}
  };
  
  public __gc class MktOfferPx : public DoubleField
  {
  public:
  MktOfferPx() : DoubleField(646) {}
    MktOfferPx(double data) : DoubleField(646, data) {}
  };
  
  public __gc class MinBidSize : public DoubleField
  {
  public:
  MinBidSize() : DoubleField(647) {}
    MinBidSize(double data) : DoubleField(647, data) {}
  };
  
  public __gc class MinOfferSize : public DoubleField
  {
  public:
  MinOfferSize() : DoubleField(648) {}
    MinOfferSize(double data) : DoubleField(648, data) {}
  };
  
  public __gc class QuoteStatusReqID : public StringField
  {
  public:
  QuoteStatusReqID() : StringField(649) {}
    QuoteStatusReqID(String* data) : StringField(649, data) {}
  };
  
  public __gc class LegalConfirm : public StringField
  {
  public:
  static const __wchar_t LEGAL_CONFIRM = 'Y';
  static const __wchar_t DOES_NOT_CONSTITUTE_A_LEGAL_CONFIRM = 'N';
  LegalConfirm() : StringField(650) {}
    LegalConfirm(String* data) : StringField(650, data) {}
  };
  
  public __gc class UnderlyingLastPx : public DoubleField
  {
  public:
  UnderlyingLastPx() : DoubleField(651) {}
    UnderlyingLastPx(double data) : DoubleField(651, data) {}
  };
  
  public __gc class UnderlyingLastQty : public DoubleField
  {
  public:
  UnderlyingLastQty() : DoubleField(652) {}
    UnderlyingLastQty(double data) : DoubleField(652, data) {}
  };
  
  public __gc class SecDefStatus : public IntField
  {
  public:
  static const int PENDING_APPROVAL = 0;
  static const int APPROVED = 1;
  static const int REJECTED = 2;
  static const int UNAUTHORIZED_REQUEST = 3;
  static const int INVALID_DEFINITION_REQUEST = 4;
  SecDefStatus() : IntField(653) {}
    SecDefStatus(int data) : IntField(653, data) {}
  };
  
  public __gc class LegRefID : public StringField
  {
  public:
  LegRefID() : StringField(654) {}
    LegRefID(String* data) : StringField(654, data) {}
  };
  
  public __gc class ContraLegRefID : public StringField
  {
  public:
  ContraLegRefID() : StringField(655) {}
    ContraLegRefID(String* data) : StringField(655, data) {}
  };
  
  public __gc class SettlCurrBidFxRate : public DoubleField
  {
  public:
  SettlCurrBidFxRate() : DoubleField(656) {}
    SettlCurrBidFxRate(double data) : DoubleField(656, data) {}
  };
  
  public __gc class SettlCurrOfferFxRate : public DoubleField
  {
  public:
  SettlCurrOfferFxRate() : DoubleField(657) {}
    SettlCurrOfferFxRate(double data) : DoubleField(657, data) {}
  };
  
  public __gc class QuoteRequestRejectReason : public IntField
  {
  public:
  QuoteRequestRejectReason() : IntField(658) {}
    QuoteRequestRejectReason(int data) : IntField(658, data) {}
  };
  
  public __gc class SideComplianceID : public StringField
  {
  public:
  SideComplianceID() : StringField(659) {}
    SideComplianceID(String* data) : StringField(659, data) {}
  };
  
}

 