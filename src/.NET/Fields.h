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

#include "Field.h"

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
  static const __wchar_t DO_NOT_INCREASE_DNI = 'E';
  static const __wchar_t DO_NOT_REDUCE_DNR = 'F';
  static const __wchar_t ALL_OR_NONE_AON = 'G';
  static const __wchar_t INSTITUTIONS_ONLY = 'I';
  static const __wchar_t LAST_PEG = 'L';
  static const __wchar_t MIDPRICE_PEG = 'M';
  static const __wchar_t NONNEGOTIABLE = 'N';
  static const __wchar_t OPENING_PEG = 'O';
  static const __wchar_t PRIMARY_PEG = 'R';
  static const __wchar_t SUSPEND = 'S';
  static const __wchar_t FIXED_PEG = 'T';
  static const __wchar_t CUSTOMER_DISPLAY_INSTRUCTION = 'U';
  static const __wchar_t NETTING = 'V';
  static const __wchar_t PEG_TO_VWAP = 'W';
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
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION = '1';
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK = '2';
  static const __wchar_t MANUAL_ORDER_BEST_EXECUTION = '3';
  HandlInst() : CharField(21) {}
    HandlInst(__wchar_t data) : CharField(21, data) {}
  };
  
  public __gc class IDSource : public StringField
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
  IDSource() : StringField(22) {}
    IDSource(String* data) : StringField(22, data) {}
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
  
  public __gc class IOIShares : public StringField
  {
  public:
  static const String* SMALL = "S";
  static const String* MEDIUM = "M";
  static const String* LARGE = "L";
  IOIShares() : StringField(27) {}
    IOIShares(String* data) : StringField(27, data) {}
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
  
  public __gc class LastShares : public DoubleField
  {
  public:
  LastShares() : DoubleField(32) {}
    LastShares(double data) : DoubleField(32, data) {}
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
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_B = 'B';
  static const __wchar_t PROGRAM_ORDER_NONINDEX_ARB_FOR_MEMBER_FIRMORG = 'C';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRMORG = 'D';
  static const __wchar_t REGISTERED_EQUITY_MARKET_MAKER_TRADES = 'E';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_F = 'F';
  static const __wchar_t SHORT_EXEMPT_TRANSACTION_H = 'H';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'J';
  static const __wchar_t PROGRAM_ORDER_NONINDEX_ARB_FOR_INDIVIDUAL_CUSTOMER = 'K';
  static const __wchar_t SHORT_EXEMPT_AFFILIATED = 'L';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER = 'M';
  static const __wchar_t PROGRAM_ORDER_NONINDEX_ARB_FOR_OTHER_MEMBER = 'N';
  static const __wchar_t COMPETING_DEALER_TRADES_O = 'O';
  static const __wchar_t PRINCIPAL = 'P';
  static const __wchar_t COMPETING_DEALER_TRADES_R = 'R';
  static const __wchar_t SPECIALIST_TRADES = 'S';
  static const __wchar_t COMPETING_DEALER_TRADES_T = 'T';
  static const __wchar_t PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY = 'U';
  static const __wchar_t ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER = 'W';
  static const __wchar_t SHORT_EXEMPT_NOT_AFFILIATED = 'X';
  static const __wchar_t PROGRAM_ORDER_NONINDEX_ARB_FOR_OTHER_AGENCY = 'Y';
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
  
  public __gc class SendingTime : public UtcTimeStampField
  {
  public:
  SendingTime() : UtcTimeStampField(52) {}
    SendingTime(DateTime data) : UtcTimeStampField(52, data) {}
  };
  
  public __gc class Shares : public DoubleField
  {
  public:
  Shares() : DoubleField(53) {}
    Shares(double data) : DoubleField(53, data) {}
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
  static const __wchar_t D = '7';
  static const __wchar_t CROSS = '8';
  static const __wchar_t CROSS_SHORT = '9';
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
  static const __wchar_t TPLUS2 = '3';
  static const __wchar_t TPLUS3 = '4';
  static const __wchar_t TPLUS4 = '5';
  static const __wchar_t FUTURE = '6';
  static const __wchar_t WHEN_ISSUED = '7';
  static const __wchar_t SELLERS_OPTION = '8';
  static const __wchar_t TPLUS5 = '9';
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
  
  public __gc class OpenClose : public CharField
  {
  public:
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';
  OpenClose() : CharField(77) {}
    OpenClose(__wchar_t data) : CharField(77, data) {}
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
  
  public __gc class AllocShares : public DoubleField
  {
  public:
  AllocShares() : DoubleField(80) {}
    AllocShares(double data) : DoubleField(80, data) {}
  };
  
  public __gc class ProcessCode : public CharField
  {
  public:
  static const __wchar_t REGULAR = '0';
  static const __wchar_t SOFT_DOLLAR = '1';
  static const __wchar_t STEPIN = '2';
  static const __wchar_t STEPOUT = '3';
  static const __wchar_t SOFTDOLLAR_STEPIN = '4';
  static const __wchar_t SOFTDOLLAR_STEPOUT = '5';
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
  static const int NONE_OTHER = 0;
  static const int PKCS = 1;
  static const int DES = 2;
  static const int PKCSDES = 3;
  static const int PGPDES = 4;
  static const int PGPDESMD5 = 5;
  static const int PEMDESMD5 = 6;
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
  static const int BROKER_OPTION = 2;
  static const int ALREADY_PENDING = 3;
  CxlRejReason() : IntField(102) {}
    CxlRejReason(int data) : IntField(102, data) {}
  };
  
  public __gc class OrdRejReason : public IntField
  {
  public:
  static const int BROKER_OPTION = 0;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int ORDER_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_ORDER = 5;
  static const int DUPLICATE_ORDER = 6;
  static const int DUPLICATE_VERBALYES = 7;
  static const int STALE_ORDER = 8;
  OrdRejReason() : IntField(103) {}
    OrdRejReason(int data) : IntField(103, data) {}
  };
  
  public __gc class IOIQualifier : public CharField
  {
  public:
  static const __wchar_t ALL_OR_NONE = 'A';
  static const __wchar_t AT_THE_CLOSE = 'C';
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
  static const __wchar_t INDICATION_WORKING_AWAY = 'W';
  static const __wchar_t CROSSING_OPPORTUNITY = 'X';
  static const __wchar_t AT_THE_MIDPOINT = 'Y';
  static const __wchar_t PREOPEN = 'Z';
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
  static const __wchar_t GAP_FILL_MESSAGE_MSGSEQNUM_FIELD_VALID = 'Y';
  static const __wchar_t SEQUENCE_RESET_IGNORE_MSGSEQNUM = 'N';
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
  static const __wchar_t YES_RESET_SEQUENCE_NUMBERS = 'Y';
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
  static const __wchar_t MULTIPLY = 'M';
  static const __wchar_t DIVIDE = 'D';
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
  static const __wchar_t BROKER = '1';
  static const __wchar_t INSTITUTION = '2';
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
  static const String* PHYSICAL = "PNY";
  static const String* PARTICIPANT_TRUST_COMPANY = "PTC";
  static const String* LOCAL_MARKET_SETTLE_LOCATION = "ISO";
  SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
  };
  
  public __gc class SecurityType : public StringField
  {
  public:
  static const String* BANKERS_ACCEPTANCE = "BA";
  static const String* CONVERTIBLE_BOND = "CB";
  static const String* CERTIFICATE_OF_DEPOSIT = "CD";
  static const String* COLLATERALIZE_MORTGAGE_OBLIGATION = "CMO";
  static const String* CORPORATE_BOND = "CORP";
  static const String* COMMERCIAL_PAPER = "CP";
  static const String* CORPORATE_PRIVATE_PLACEMENT = "CPP";
  static const String* COMMON_STOCK = "CS";
  static const String* FEDERAL_HOUSING_AUTHORITY = "FHA";
  static const String* FEDERAL_HOME_LOAN = "FHL";
  static const String* FEDERAL_NATIONAL_MORTGAGE_ASSOCIATION = "FN";
  static const String* FOREIGN_EXCHANGE_CONTRACT = "FOR";
  static const String* FUTURE = "FUT";
  static const String* GOVERNMENT_NATIONAL_MORTGAGE_ASSOCIATION = "GN";
  static const String* TREASURIES_PLUS_AGENCY_DEBENTURE = "GOVT";
  static const String* MUTUAL_FUND = "MF";
  static const String* MORTGAGE_INTEREST_ONLY = "MIO";
  static const String* MORTGAGE_PRINCIPAL_ONLY = "MPO";
  static const String* MORTGAGE_PRIVATE_PLACEMENT = "MPP";
  static const String* MISCELLANEOUS_PASSTHRU = "MPT";
  static const String* MUNICIPAL_BOND = "MUNI";
  static const String* NO_ISITC_SECURITY_TYPE = "NONE";
  static const String* OPTION = "OPT";
  static const String* PREFERRED_STOCK = "PS";
  static const String* REPURCHASE_AGREEMENT = "RP";
  static const String* REVERSE_REPURCHASE_AGREEMENT = "RVRP";
  static const String* STUDENT_LOAN_MARKETING_ASSOCIATION = "SL";
  static const String* TIME_DEPOSIT = "TD";
  static const String* US_TREASURY_BILL = "USTB";
  static const String* WARRANT = "WAR";
  static const String* CATS_TIGERS = "ZOO";
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
  static const int FX_NETTING = 0;
  static const int FX_SWAP = 1;
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
  
  public __gc class SpreadToBenchmark : public DoubleField
  {
  public:
  SpreadToBenchmark() : DoubleField(218) {}
    SpreadToBenchmark(double data) : DoubleField(218, data) {}
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
  
  public __gc class CouponRate : public DoubleField
  {
  public:
  CouponRate() : DoubleField(223) {}
    CouponRate(double data) : DoubleField(223, data) {}
  };
  
  public __gc class ContractMultiplier : public DoubleField
  {
  public:
  ContractMultiplier() : DoubleField(231) {}
    ContractMultiplier(double data) : DoubleField(231, data) {}
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
  static const __wchar_t DISABLE_PREVIOUS = '2';
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
  static const __wchar_t ZEROPLUS_TICK = '1';
  static const __wchar_t MINUS_TICK = '2';
  static const __wchar_t ZEROMINUS_TICK = '3';
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
  static const __wchar_t OPEN_ACTIVE = 'A';
  static const __wchar_t CLOSED_INACTIVE = 'B';
  static const __wchar_t EXCHANGE_BEST = 'C';
  static const __wchar_t CONSOLIDATED_BEST = 'D';
  static const __wchar_t LOCKED = 'E';
  static const __wchar_t CROSSED = 'F';
  static const __wchar_t DEPTH = 'G';
  static const __wchar_t FAST_TRADING = 'H';
  static const __wchar_t NONFIRM = 'I';
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
  static const __wchar_t OPENING_REOPENING_TRADE_DETAIL = 'E';
  static const __wchar_t INTRADAY_TRADE_DETAIL = 'F';
  static const __wchar_t RULE_127_TRADE = 'G';
  static const __wchar_t RULE_155_TRADE = 'H';
  static const __wchar_t SOLD_LAST = 'I';
  static const __wchar_t NEXT_DAY_TRADE = 'J';
  static const __wchar_t OPENED = 'K';
  static const __wchar_t SELLER = 'L';
  static const __wchar_t SOLD = 'M';
  static const __wchar_t STOPPED_STOCK = 'N';
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
  static const __wchar_t CANCELATION_TRADE_BUST = '0';
  static const __wchar_t ERROR = '1';
  DeleteReason() : CharField(285) {}
    DeleteReason(__wchar_t data) : CharField(285, data) {}
  };
  
  public __gc class OpenCloseSettleFlag : public CharField
  {
  public:
  static const __wchar_t DAILY_OPEN_CLOSE__SETTLEMENT_PRICE = '0';
  static const __wchar_t SESSION_OPEN_CLOSE__SETTLEMENT_PRICE = '1';
  static const __wchar_t DELIVERY_SETTLEMENT_PRICE = '2';
  OpenCloseSettleFlag() : CharField(286) {}
    OpenCloseSettleFlag(__wchar_t data) : CharField(286, data) {}
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
  
  public __gc class FinancialStatus : public CharField
  {
  public:
  static const __wchar_t BANKRUPT = '1';
  FinancialStatus() : CharField(291) {}
    FinancialStatus(__wchar_t data) : CharField(291, data) {}
  };
  
  public __gc class CorporateAction : public CharField
  {
  public:
  static const __wchar_t EXDIVIDEND = 'A';
  static const __wchar_t EXDISTRIBUTION = 'B';
  static const __wchar_t EXRIGHTS = 'C';
  static const __wchar_t NEW = 'D';
  static const __wchar_t EXINTEREST = 'E';
  CorporateAction() : CharField(292) {}
    CorporateAction(__wchar_t data) : CharField(292, data) {}
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
  
  public __gc class QuoteAckStatus : public IntField
  {
  public:
  QuoteAckStatus() : IntField(297) {}
    QuoteAckStatus(int data) : IntField(297, data) {}
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
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE = 2;
  static const int QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_QUOTE = 5;
  static const int DUPLICATE_QUOTE_7 = 6;
  static const int INVALID_PRICE = 8;
  static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
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
  QuoteRequestType() : IntField(303) {}
    QuoteRequestType(int data) : IntField(303, data) {}
  };
  
  public __gc class TotQuoteEntries : public IntField
  {
  public:
  TotQuoteEntries() : IntField(304) {}
    TotQuoteEntries(int data) : IntField(304, data) {}
  };
  
  public __gc class UnderlyingIDSource : public StringField
  {
  public:
  UnderlyingIDSource() : StringField(305) {}
    UnderlyingIDSource(String* data) : StringField(305, data) {}
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
  static const int NO_OPENNO_RESUME = 4;
  static const int PRICE_INDICATION = 5;
  static const int TRADING_RANGE_INDICATION = 6;
  static const int MARKET_IMBALANCE_BUY = 7;
  static const int MARKET_IMBALANCE_SELL = 8;
  static const int MARKET_ON_CLOSE_IMBALANCE_BUY = 9;
  static const int MARKET_ON_CLOSE_IMBALANCE_SELL = 10;
  static const int NO_MARKET_IMBALANCE = 12;
  static const int NO_MARKET_ON_CLOSE_IMBALANCE = 13;
  static const int ITS_PREOPENING = 14;
  static const int NEW_PRICE_INDICATION = 15;
  static const int TRADE_DISSEMINATION_TIME = 16;
  static const int READY_TO_TRADE = 17;
  static const int NOT_AVAILABLE_FOR_TRADING = 18;
  static const int NOT_TRADED_ON_THIS_MARKET = 19;
  static const int UNKNOWN_OR_INVALID = 20;
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
  static const int HALTED = 1;
  static const int OPEN = 2;
  static const int CLOSED = 3;
  static const int PREOPEN = 4;
  static const int PRECLOSE = 5;
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
  static const int INVALID_BIDASK_SPREAD = 7;
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
  static const int E = 11;
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
  static const int GT_RENEWAL_RESTATEMENT = 1;
  static const int VERBAL_CHANGE = 2;
  static const int REPRICING_OF_ORDER = 3;
  static const int BROKER_OPTION = 4;
  static const int PARTIAL_DECLINE_OF_ORDERQTY = 5;
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
  ListStatusType() : IntField(429) {}
    ListStatusType(int data) : IntField(429, data) {}
  };
  
  public __gc class NetGrossInd : public IntField
  {
  public:
  NetGrossInd() : IntField(430) {}
    NetGrossInd(int data) : IntField(430, data) {}
  };
  
  public __gc class ListOrderStatus : public IntField
  {
  public:
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
  ListExecInstType() : CharField(433) {}
    ListExecInstType(__wchar_t data) : CharField(433, data) {}
  };
  
  public __gc class CxlRejResponseTo : public CharField
  {
  public:
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
  
}

 