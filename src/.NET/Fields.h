#pragma once

#undef Yield
#undef DUPLICATE
#undef STRICT
#undef DIFFERENCE
#include "Field.h"
#include "DeprecatedFields.h"

namespace QuickFix
{
  public __gc class Account : public StringField
  {
  public:
    static const int FIELD = 1;
    Account() : StringField(1) {}
    Account(String* data) : StringField(1, data) {}
  };

  public __gc class AdvId : public StringField
  {
  public:
    static const int FIELD = 2;
    AdvId() : StringField(2) {}
    AdvId(String* data) : StringField(2, data) {}
  };

  public __gc class AdvRefID : public StringField
  {
  public:
    static const int FIELD = 3;
    AdvRefID() : StringField(3) {}
    AdvRefID(String* data) : StringField(3, data) {}
  };

  public __gc class AdvSide : public CharField
  {
  public:
    static const int FIELD = 4;
    static const __wchar_t BUY = 'B';
    static const __wchar_t SELL = 'S';
    static const __wchar_t TRADE = 'T';
    static const __wchar_t CROSS = 'X';
    AdvSide() : CharField(4) {}
    AdvSide(__wchar_t data) : CharField(4, data) {}
  };

  public __gc class AdvTransType : public StringField
  {
  public:
    static const int FIELD = 5;
    static const String* ADVCANCEL = "C";
    static const String* ADVNEW = "N";
    static const String* ADVREPLACE = "R";
    AdvTransType() : StringField(5) {}
    AdvTransType(String* data) : StringField(5, data) {}
  };

  public __gc class AvgPx : public DoubleField
  {
  public:
    static const int FIELD = 6;
    AvgPx() : DoubleField(6) {}
    AvgPx(double data) : DoubleField(6, data) {}
    AvgPx(double data, int decimalPadding) : DoubleField(6, data, decimalPadding) {}
  };

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

  public __gc class ClOrdID : public StringField
  {
  public:
    static const int FIELD = 11;
    ClOrdID() : StringField(11) {}
    ClOrdID(String* data) : StringField(11, data) {}
  };

  public __gc class Commission : public DoubleField
  {
  public:
    static const int FIELD = 12;
    Commission() : DoubleField(12) {}
    Commission(double data) : DoubleField(12, data) {}
    Commission(double data, int decimalPadding) : DoubleField(12, data, decimalPadding) {}
  };

  public __gc class CommType : public CharField
  {
  public:
    static const int FIELD = 13;
    static const __wchar_t PER_UNIT = '1';
    static const __wchar_t PERCENT = '2';
    static const __wchar_t ABSOLUTE = '3';
    static const __wchar_t PCTWAIVEDCSHDISC = '4';
    static const __wchar_t PCTWAIVEDENUNITS = '5';
    static const __wchar_t PERBOND = '6';
    CommType() : CharField(13) {}
    CommType(__wchar_t data) : CharField(13, data) {}
  };

  public __gc class CumQty : public DoubleField
  {
  public:
    static const int FIELD = 14;
    CumQty() : DoubleField(14) {}
    CumQty(double data) : DoubleField(14, data) {}
    CumQty(double data, int decimalPadding) : DoubleField(14, data, decimalPadding) {}
  };

  public __gc class Currency : public StringField
  {
  public:
    static const int FIELD = 15;
    Currency() : StringField(15) {}
    Currency(String* data) : StringField(15, data) {}
  };

  public __gc class EndSeqNo : public IntField
  {
  public:
    static const int FIELD = 16;
    EndSeqNo() : IntField(16) {}
    EndSeqNo(int data) : IntField(16, data) {}
  };

  public __gc class ExecID : public StringField
  {
  public:
    static const int FIELD = 17;
    ExecID() : StringField(17) {}
    ExecID(String* data) : StringField(17, data) {}
  };

  public __gc class ExecInst : public StringField
  {
  public:
    static const int FIELD = 18;
    static const __wchar_t STAYOFFER = '0';
    static const __wchar_t NOTHELD = '1';
    static const __wchar_t WORK = '2';
    static const __wchar_t GOALONG = '3';
    static const __wchar_t OVERDAY = '4';
    static const __wchar_t HELD = '5';
    static const __wchar_t PARTNOTINIT = '6';
    static const __wchar_t STRICTSCALE = '7';
    static const __wchar_t TRYTOSCALE = '8';
    static const __wchar_t STAYBID = '9';
    static const __wchar_t NOCROSS = 'A';
    static const __wchar_t TRAILSTOPPEG = 'a';
    static const __wchar_t OKCROSS = 'B';
    static const __wchar_t STRICTLIMIT = 'b';
    static const __wchar_t IGNOREPRICECHK = 'c';
    static const __wchar_t CALLFIRST = 'C';
    static const __wchar_t PEGTOLIMIT = 'd';
    static const __wchar_t PERCVOL = 'D';
    static const __wchar_t DNI = 'E';
    static const __wchar_t WORKTOSTRATEGY = 'e';
    static const __wchar_t DNR = 'F';
    static const __wchar_t AON = 'G';
    static const __wchar_t RESTATEONSYSFAIL = 'H';
    static const __wchar_t INSTITONLY = 'I';
    static const __wchar_t RESTATEONTRADINGHALT = 'J';
    static const __wchar_t CANCELONTRADINGHALT = 'K';
    static const __wchar_t LASTPEG = 'L';
    static const __wchar_t MIDPRCPEG = 'M';
    static const __wchar_t NONNEGO = 'N';
    static const __wchar_t OPENPEG = 'O';
    static const __wchar_t MARKPEG = 'P';
    static const __wchar_t CANCELONSYSFAIL = 'Q';
    static const __wchar_t PRIMPEG = 'R';
    static const __wchar_t SUSPEND = 'S';
    static const __wchar_t CUSTDISPINST = 'U';
    static const __wchar_t NETTING = 'V';
    static const __wchar_t PEGVWAP = 'W';
    static const __wchar_t TRADEALONG = 'X';
    static const __wchar_t TRYTOSTOP = 'Y';
    static const __wchar_t CXLIFNOTBEST = 'Z';
    ExecInst() : StringField(18) {}
    ExecInst(String* data) : StringField(18, data) {}
  };

  public __gc class ExecRefID : public StringField
  {
  public:
    static const int FIELD = 19;
    ExecRefID() : StringField(19) {}
    ExecRefID(String* data) : StringField(19, data) {}
  };

  public __gc class ExecTransType : public CharField
  {
  public:
    static const int FIELD = 20;
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
    static const int FIELD = 21;
    static const __wchar_t AUTOEXECPRIV = '1';
    static const __wchar_t AUTOEXECPUB = '2';
    static const __wchar_t MANUAL = '3';
    HandlInst() : CharField(21) {}
    HandlInst(__wchar_t data) : CharField(21, data) {}
  };

  public __gc class SecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 22;
    static const String* CUSIP = "1";
    static const String* SEDOL = "2";
    static const String* QUIK = "3";
    static const String* ISIN = "4";
    static const String* RIC = "5";
    static const String* ISOCURR = "6";
    static const String* ISOCOUNTRY = "7";
    static const String* EXCHSYMB = "8";
    static const String* CTA = "9";
    static const String* BLMBRG = "A";
    static const String* WERTPAPIER = "B";
    static const String* DUTCH = "C";
    static const String* VALOREN = "D";
    static const String* SICOVAM = "E";
    static const String* BELGIAN = "F";
    static const String* COMMON = "G";
    static const String* CLEARINGHOUSE = "H";
    static const String* FPML = "I";
    static const String* OPTIONPRICEREPORTINGAUTHORITY = "J";
    SecurityIDSource() : StringField(22) {}
    SecurityIDSource(String* data) : StringField(22, data) {}
  };

  public __gc class IOIID : public StringField
  {
  public:
    static const int FIELD = 23;
    IOIID() : StringField(23) {}
    IOIID(String* data) : StringField(23, data) {}
  };

  public __gc class IOIOthSvc : public CharField
  {
  public:
    static const int FIELD = 24;
    IOIOthSvc() : CharField(24) {}
    IOIOthSvc(__wchar_t data) : CharField(24, data) {}
  };

  public __gc class IOIQltyInd : public CharField
  {
  public:
    static const int FIELD = 25;
    static const __wchar_t HIGH = 'H';
    static const __wchar_t LOW = 'L';
    static const __wchar_t MEDIUM = 'M';
    IOIQltyInd() : CharField(25) {}
    IOIQltyInd(__wchar_t data) : CharField(25, data) {}
  };

  public __gc class IOIRefID : public StringField
  {
  public:
    static const int FIELD = 26;
    IOIRefID() : StringField(26) {}
    IOIRefID(String* data) : StringField(26, data) {}
  };

  public __gc class IOIQty : public StringField
  {
  public:
    static const int FIELD = 27;
    IOIQty() : StringField(27) {}
    IOIQty(String* data) : StringField(27, data) {}
  };

  public __gc class IOITransType : public CharField
  {
  public:
    static const int FIELD = 28;
    static const __wchar_t CANCEL = 'C';
    static const __wchar_t NEW = 'N';
    static const __wchar_t REPLACE = 'R';
    IOITransType() : CharField(28) {}
    IOITransType(__wchar_t data) : CharField(28, data) {}
  };

  public __gc class LastCapacity : public CharField
  {
  public:
    static const int FIELD = 29;
    static const __wchar_t A = '1';
    static const __wchar_t XA = '2';
    static const __wchar_t XP = '3';
    static const __wchar_t P = '4';
    LastCapacity() : CharField(29) {}
    LastCapacity(__wchar_t data) : CharField(29, data) {}
  };

  public __gc class LastMkt : public StringField
  {
  public:
    static const int FIELD = 30;
    LastMkt() : StringField(30) {}
    LastMkt(String* data) : StringField(30, data) {}
  };

  public __gc class LastPx : public DoubleField
  {
  public:
    static const int FIELD = 31;
    LastPx() : DoubleField(31) {}
    LastPx(double data) : DoubleField(31, data) {}
    LastPx(double data, int decimalPadding) : DoubleField(31, data, decimalPadding) {}
  };

  public __gc class LastQty : public DoubleField
  {
  public:
    static const int FIELD = 32;
    LastQty() : DoubleField(32) {}
    LastQty(double data) : DoubleField(32, data) {}
    LastQty(double data, int decimalPadding) : DoubleField(32, data, decimalPadding) {}
  };

  public __gc class NoLinesOfText : public IntField
  {
  public:
    static const int FIELD = 33;
    NoLinesOfText() : IntField(33) {}
    NoLinesOfText(int data) : IntField(33, data) {}
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
    static const String* TESTREQUEST = "1";
    static const String* RESENDREQUEST = "2";
    static const String* REJECT = "3";
    static const String* SEQUENCERESET = "4";
    static const String* LOGOUT = "5";
    static const String* IOI = "6";
    static const String* ADVERTISEMENT = "7";
    static const String* EXECUTIONREPORT = "8";
    static const String* ORDERCANCELREJECT = "9";
    static const String* QUOTESTATUSREQUEST = "a";
    static const String* LOGON = "A";
    static const String* DERIVATIVESECURITYLIST = "AA";
    static const String* NEWORDERMULTILEG = "AB";
    static const String* MULTILEGORDERCANCELREPLACE = "AC";
    static const String* TRADECAPTUREREPORTREQUEST = "AD";
    static const String* TRADECAPTUREREPORT = "AE";
    static const String* ORDERMASSSTATUSREQUEST = "AF";
    static const String* QUOTEREQUESTREJECT = "AG";
    static const String* RFQREQUEST = "AH";
    static const String* QUOTESTATUSREPORT = "AI";
    static const String* QUOTERESPONSE = "AJ";
    static const String* CONFIRMATION = "AK";
    static const String* POSITIONMAINTENANCEREQUEST = "AL";
    static const String* POSITIONMAINTENANCEREPORT = "AM";
    static const String* REQUESTFORPOSITIONS = "AN";
    static const String* REQUESTFORPOSITIONSACK = "AO";
    static const String* POSITIONREPORT = "AP";
    static const String* TRADECAPTUREREPORTREQUESTACK = "AQ";
    static const String* TRADECAPTUREREPORTACK = "AR";
    static const String* ALLOCATIONREPORT = "AS";
    static const String* ALLOCATIONREPORTACK = "AT";
    static const String* CONFIRMATIONACK = "AU";
    static const String* SETTLEMENTINSTRUCTIONREQUEST = "AV";
    static const String* ASSIGNMENTREPORT = "AW";
    static const String* COLLATERALREQUEST = "AX";
    static const String* COLLATERALASSIGNMENT = "AY";
    static const String* COLLATERALRESPONSE = "AZ";
    static const String* NEWS = "B";
    static const String* MASSQUOTEACKNOWLEDGEMENT = "b";
    static const String* COLLATERALREPORT = "BA";
    static const String* COLLATERALINQUIRY = "BB";
    static const String* NETWORKCOUNTERPARTYSYSTEMSTATUSREQUEST = "BC";
    static const String* NETWORKCOUNTERPARTYSYSTEMSTATUSRESPONSE = "BD";
    static const String* USERREQUEST = "BE";
    static const String* USERRESPONSE = "BF";
    static const String* COLLATERALINQUIRYACK = "BG";
    static const String* CONFIRMATIONREQUEST = "BH";
    static const String* EMAIL = "C";
    static const String* SECURITYDEFINITIONREQUEST = "c";
    static const String* SECURITYDEFINITION = "d";
    static const String* NEWORDERSINGLE = "D";
    static const String* SECURITYSTATUSREQUEST = "e";
    static const String* NEWORDERLIST = "E";
    static const String* ORDERCANCELREQUEST = "F";
    static const String* SECURITYSTATUS = "f";
    static const String* ORDERCANCELREPLACEREQUEST = "G";
    static const String* TRADINGSESSIONSTATUSREQUEST = "g";
    static const String* ORDERSTATUSREQUEST = "H";
    static const String* TRADINGSESSIONSTATUS = "h";
    static const String* MASSQUOTE = "i";
    static const String* BUSINESSMESSAGEREJECT = "j";
    static const String* ALLOCATIONINSTRUCTION = "J";
    static const String* BIDREQUEST = "k";
    static const String* LISTCANCELREQUEST = "K";
    static const String* BIDRESPONSE = "l";
    static const String* LISTEXECUTE = "L";
    static const String* LISTSTRIKEPRICE = "m";
    static const String* LISTSTATUSREQUEST = "M";
    static const String* XMLNONFIX = "n";
    static const String* LISTSTATUS = "N";
    static const String* REGISTRATIONINSTRUCTIONS = "o";
    static const String* REGISTRATIONINSTRUCTIONSRESPONSE = "p";
    static const String* ALLOCATIONINSTRUCTIONACK = "P";
    static const String* ORDERMASSCANCELREQUEST = "q";
    static const String* DONTKNOWTRADEDK = "Q";
    static const String* QUOTEREQUEST = "R";
    static const String* ORDERMASSCANCELREPORT = "r";
    static const String* QUOTE = "S";
    static const String* NEWORDERCROSS = "s";
    static const String* SETTLEMENTINSTRUCTIONS = "T";
    static const String* CROSSORDERCANCELREPLACEREQUEST = "t";
    static const String* CROSSORDERCANCELREQUEST = "u";
    static const String* MARKETDATAREQUEST = "V";
    static const String* SECURITYTYPEREQUEST = "v";
    static const String* SECURITYTYPES = "w";
    static const String* MARKETDATASNAPSHOTFULLREFRESH = "W";
    static const String* SECURITYLISTREQUEST = "x";
    static const String* MARKETDATAINCREMENTALREFRESH = "X";
    static const String* MARKETDATAREQUESTREJECT = "Y";
    static const String* SECURITYLIST = "y";
    static const String* QUOTECANCEL = "Z";
    static const String* DERIVATIVESECURITYLISTREQUEST = "z";
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

  public __gc class OrderID : public StringField
  {
  public:
    static const int FIELD = 37;
    OrderID() : StringField(37) {}
    OrderID(String* data) : StringField(37, data) {}
  };

  public __gc class OrderQty : public DoubleField
  {
  public:
    static const int FIELD = 38;
    OrderQty() : DoubleField(38) {}
    OrderQty(double data) : DoubleField(38, data) {}
    OrderQty(double data, int decimalPadding) : DoubleField(38, data, decimalPadding) {}
  };

  public __gc class OrdStatus : public CharField
  {
  public:
    static const int FIELD = 39;
    static const __wchar_t NEW = '0';
    static const __wchar_t PARTIAL = '1';
    static const __wchar_t FILLED = '2';
    static const __wchar_t DONE = '3';
    static const __wchar_t CANCELED = '4';
    static const __wchar_t PENDING_CANCEL = '6';
    static const __wchar_t STOPPED = '7';
    static const __wchar_t REJECTED = '8';
    static const __wchar_t SUSPENDED = '9';
    static const __wchar_t PENDINGNEW = 'A';
    static const __wchar_t CALCULATED = 'B';
    static const __wchar_t EXPIRED = 'C';
    static const __wchar_t ACCEPTBIDDING = 'D';
    static const __wchar_t PENDINGREP = 'E';
    OrdStatus() : CharField(39) {}
    OrdStatus(__wchar_t data) : CharField(39, data) {}
  };

  public __gc class OrdType : public CharField
  {
  public:
    static const int FIELD = 40;
    static const __wchar_t MARKET = '1';
    static const __wchar_t LIMIT = '2';
    static const __wchar_t STOP = '3';
    static const __wchar_t STOPLIMIT = '4';
    static const __wchar_t MARKETONCLOSE = '5';
    static const __wchar_t WITHORWITHOUT = '6';
    static const __wchar_t LIMITORBETTER = '7';
    static const __wchar_t LIMITWITHORWITHOUT = '8';
    static const __wchar_t ONBASIS = '9';
    static const __wchar_t ONCLOSE = 'A';
    static const __wchar_t LIMITONCLOSE = 'B';
    static const __wchar_t FOREXMARKET = 'C';
    static const __wchar_t PREVIOUSLYQUOTED = 'D';
    static const __wchar_t PREVIOUSLYINDICATED = 'E';
    static const __wchar_t FOREXLIMIT = 'F';
    static const __wchar_t FOREXSWAP = 'G';
    static const __wchar_t FOREXPREVIOUSLYQUOTED = 'H';
    static const __wchar_t FUNARI = 'I';
    static const __wchar_t MARKETIFTOUCHED = 'J';
    static const __wchar_t MARKETWITHLEFTOVERLIMIT = 'K';
    static const __wchar_t PREVIOUSFUNDVALUATIONPOINT = 'L';
    static const __wchar_t NEXTFUNDVALUATIONPOINT = 'M';
    static const __wchar_t PEGGED = 'P';
    OrdType() : CharField(40) {}
    OrdType(__wchar_t data) : CharField(40, data) {}
  };

  public __gc class OrigClOrdID : public StringField
  {
  public:
    static const int FIELD = 41;
    OrigClOrdID() : StringField(41) {}
    OrigClOrdID(String* data) : StringField(41, data) {}
  };

  public __gc class OrigTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 42;
    OrigTime() : UtcTimeStampField(42) {}
    OrigTime(DateTime data) : UtcTimeStampField(42, data) {}
  };

  public __gc class PossDupFlag : public BooleanField
  {
  public:
    static const int FIELD = 43;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PossDupFlag() : BooleanField(43) {}
    PossDupFlag(bool data) : BooleanField(43, data) {}
  };

  public __gc class Price : public DoubleField
  {
  public:
    static const int FIELD = 44;
    Price() : DoubleField(44) {}
    Price(double data) : DoubleField(44, data) {}
    Price(double data, int decimalPadding) : DoubleField(44, data, decimalPadding) {}
  };

  public __gc class RefSeqNum : public IntField
  {
  public:
    static const int FIELD = 45;
    RefSeqNum() : IntField(45) {}
    RefSeqNum(int data) : IntField(45, data) {}
  };

  public __gc class RelatdSym : public StringField
  {
  public:
    static const int FIELD = 46;
    RelatdSym() : StringField(46) {}
    RelatdSym(String* data) : StringField(46, data) {}
  };

  public __gc class Rule80A : public CharField
  {
  public:
    static const int FIELD = 47;
    static const __wchar_t AGENCYSINGLE = 'A';
    static const __wchar_t SHTEXTRANA = 'B';
    static const __wchar_t PRGNONINDEXARBMEM = 'C';
    static const __wchar_t PRGINDEXARBMEM = 'D';
    static const __wchar_t MARKETMAKER = 'E';
    static const __wchar_t SHTEXTRANW = 'F';
    static const __wchar_t SHTEXTRANI = 'H';
    static const __wchar_t INVINESTOR = 'I';
    static const __wchar_t PRGNONINDEXARBINV = 'J';
    static const __wchar_t PRGINDEXARBINV = 'K';
    static const __wchar_t SHTEXTRANMEM = 'L';
    static const __wchar_t PRGNONINDEXARBOTHMEM = 'M';
    static const __wchar_t PRGINDEXARBOTHMEM = 'N';
    static const __wchar_t COMPETINGDEALER = 'O';
    static const __wchar_t PRINCIPAL = 'P';
    static const __wchar_t COMPDEALER1 = 'R';
    static const __wchar_t SPECIALIST = 'S';
    static const __wchar_t COMPDEALER2 = 'T';
    static const __wchar_t PRGINDEXARBOTHAGN = 'U';
    static const __wchar_t ALLOTHERAGN = 'W';
    static const __wchar_t SHTEXTRANMEMWT = 'X';
    static const __wchar_t PRGNONINDEXARBOTHAGN = 'Y';
    static const __wchar_t SHTEXTRANNONMEM = 'Z';
    Rule80A() : CharField(47) {}
    Rule80A(__wchar_t data) : CharField(47, data) {}
  };

  public __gc class SecurityID : public StringField
  {
  public:
    static const int FIELD = 48;
    SecurityID() : StringField(48) {}
    SecurityID(String* data) : StringField(48, data) {}
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

  public __gc class SendingDate : public StringField
  {
  public:
    static const int FIELD = 51;
    SendingDate() : StringField(51) {}
    SendingDate(String* data) : StringField(51, data) {}
  };

  public __gc class SendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 52;
    SendingTime() : UtcTimeStampField(52) {}
    SendingTime(DateTime data) : UtcTimeStampField(52, data) {}
  };

  public __gc class Quantity : public DoubleField
  {
  public:
    static const int FIELD = 53;
    Quantity() : DoubleField(53) {}
    Quantity(double data) : DoubleField(53, data) {}
    Quantity(double data, int decimalPadding) : DoubleField(53, data, decimalPadding) {}
  };

  public __gc class Side : public CharField
  {
  public:
    static const int FIELD = 54;
    static const __wchar_t BUY = '1';
    static const __wchar_t SELL = '2';
    static const __wchar_t BUYMIN = '3';
    static const __wchar_t SELLPLUS = '4';
    static const __wchar_t SELLSHT = '5';
    static const __wchar_t SELLSHTEX = '6';
    static const __wchar_t UNDISC = '7';
    static const __wchar_t CROSS = '8';
    static const __wchar_t CROSSSHORT = '9';
    static const __wchar_t CROSSSHORTEX = 'A';
    static const __wchar_t ASDEFINED = 'B';
    static const __wchar_t OPPOSITE = 'C';
    static const __wchar_t SUBSCRIBE = 'D';
    static const __wchar_t REDEEM = 'E';
    static const __wchar_t LENDFINANCING = 'F';
    static const __wchar_t BORROWFINANCING = 'G';
    Side() : CharField(54) {}
    Side(__wchar_t data) : CharField(54, data) {}
  };

  public __gc class Symbol : public StringField
  {
  public:
    static const int FIELD = 55;
    Symbol() : StringField(55) {}
    Symbol(String* data) : StringField(55, data) {}
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

  public __gc class TimeInForce : public CharField
  {
  public:
    static const int FIELD = 59;
    static const __wchar_t DAY = '0';
    static const __wchar_t GOODTILLCANCEL = '1';
    static const __wchar_t ATTHEOPENING = '2';
    static const __wchar_t IMMEDIATEORCANCEL = '3';
    static const __wchar_t FILLORKILL = '4';
    static const __wchar_t GOODTILLCROSSING = '5';
    static const __wchar_t GOODTILLDATE = '6';
    static const __wchar_t ATTHECLOSE = '7';
    TimeInForce() : CharField(59) {}
    TimeInForce(__wchar_t data) : CharField(59, data) {}
  };

  public __gc class TransactTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 60;
    TransactTime() : UtcTimeStampField(60) {}
    TransactTime(DateTime data) : UtcTimeStampField(60, data) {}
  };

  public __gc class Urgency : public CharField
  {
  public:
    static const int FIELD = 61;
    static const __wchar_t NORMAL = '0';
    static const __wchar_t FLASH = '1';
    static const __wchar_t BACKGROUND = '2';
    Urgency() : CharField(61) {}
    Urgency(__wchar_t data) : CharField(61, data) {}
  };

  public __gc class ValidUntilTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 62;
    ValidUntilTime() : UtcTimeStampField(62) {}
    ValidUntilTime(DateTime data) : UtcTimeStampField(62, data) {}
  };

  public __gc class SettlType : public CharField
  {
  public:
    static const int FIELD = 63;
    static const __wchar_t REGULAR = '0';
    static const __wchar_t CASH = '1';
    static const __wchar_t NEXTDAY = '2';
    static const __wchar_t T2 = '3';
    static const __wchar_t T3 = '4';
    static const __wchar_t T4 = '5';
    static const __wchar_t FUTURE = '6';
    static const __wchar_t WHENISSUED = '7';
    static const __wchar_t T5 = '8';
    static const __wchar_t T1 = '9';
    SettlType() : CharField(63) {}
    SettlType(__wchar_t data) : CharField(63, data) {}
  };

  public __gc class SettlDate : public StringField
  {
  public:
    static const int FIELD = 64;
    SettlDate() : StringField(64) {}
    SettlDate(String* data) : StringField(64, data) {}
  };

  public __gc class SymbolSfx : public StringField
  {
  public:
    static const int FIELD = 65;
    static const String* EUCPLUMPSUMINTEREST = "CD";
    static const String* WHENISSUED = "WI";
    SymbolSfx() : StringField(65) {}
    SymbolSfx(String* data) : StringField(65, data) {}
  };

  public __gc class ListID : public StringField
  {
  public:
    static const int FIELD = 66;
    ListID() : StringField(66) {}
    ListID(String* data) : StringField(66, data) {}
  };

  public __gc class ListSeqNo : public IntField
  {
  public:
    static const int FIELD = 67;
    ListSeqNo() : IntField(67) {}
    ListSeqNo(int data) : IntField(67, data) {}
  };

  public __gc class TotNoOrders : public IntField
  {
  public:
    static const int FIELD = 68;
    TotNoOrders() : IntField(68) {}
    TotNoOrders(int data) : IntField(68, data) {}
  };
  public __gc class ListNoOrds : public IntField
  {
  public:
    static int FIELD = 68;
    ListNoOrds() : IntField(68) {}
    ListNoOrds(int data) : IntField(68, data) {}
  };

  public __gc class ListExecInst : public StringField
  {
  public:
    static const int FIELD = 69;
    ListExecInst() : StringField(69) {}
    ListExecInst(String* data) : StringField(69, data) {}
  };

  public __gc class AllocID : public StringField
  {
  public:
    static const int FIELD = 70;
    AllocID() : StringField(70) {}
    AllocID(String* data) : StringField(70, data) {}
  };

  public __gc class AllocTransType : public CharField
  {
  public:
    static const int FIELD = 71;
    static const __wchar_t NEW = '0';
    static const __wchar_t REPLACE = '1';
    static const __wchar_t CANCEL = '2';
    static const __wchar_t PRELIMINARY = '3';
    static const __wchar_t CALCULATED = '4';
    static const __wchar_t CALCULATEDWITHOUTPRELIMINARY = '5';
    AllocTransType() : CharField(71) {}
    AllocTransType(__wchar_t data) : CharField(71, data) {}
  };

  public __gc class RefAllocID : public StringField
  {
  public:
    static const int FIELD = 72;
    RefAllocID() : StringField(72) {}
    RefAllocID(String* data) : StringField(72, data) {}
  };

  public __gc class NoOrders : public IntField
  {
  public:
    static const int FIELD = 73;
    NoOrders() : IntField(73) {}
    NoOrders(int data) : IntField(73, data) {}
  };

  public __gc class AvgPxPrecision : public IntField
  {
  public:
    static const int FIELD = 74;
    AvgPxPrecision() : IntField(74) {}
    AvgPxPrecision(int data) : IntField(74, data) {}
  };

  public __gc class TradeDate : public StringField
  {
  public:
    static const int FIELD = 75;
    TradeDate() : StringField(75) {}
    TradeDate(String* data) : StringField(75, data) {}
  };

  public __gc class ExecBroker : public StringField
  {
  public:
    static const int FIELD = 76;
    ExecBroker() : StringField(76) {}
    ExecBroker(String* data) : StringField(76, data) {}
  };

  public __gc class PositionEffect : public CharField
  {
  public:
    static const int FIELD = 77;
    static const __wchar_t CLOSE = 'C';
    static const __wchar_t FIFO = 'F';
    static const __wchar_t OPEN = 'O';
    static const __wchar_t ROLLED = 'R';
    PositionEffect() : CharField(77) {}
    PositionEffect(__wchar_t data) : CharField(77, data) {}
  };

  public __gc class NoAllocs : public IntField
  {
  public:
    static const int FIELD = 78;
    NoAllocs() : IntField(78) {}
    NoAllocs(int data) : IntField(78, data) {}
  };

  public __gc class AllocAccount : public StringField
  {
  public:
    static const int FIELD = 79;
    AllocAccount() : StringField(79) {}
    AllocAccount(String* data) : StringField(79, data) {}
  };

  public __gc class AllocQty : public DoubleField
  {
  public:
    static const int FIELD = 80;
    AllocQty() : DoubleField(80) {}
    AllocQty(double data) : DoubleField(80, data) {}
    AllocQty(double data, int decimalPadding) : DoubleField(80, data, decimalPadding) {}
  };

  public __gc class ProcessCode : public CharField
  {
  public:
    static const int FIELD = 81;
    static const __wchar_t REGULAR = '0';
    static const __wchar_t SOFTDOLLAR = '1';
    static const __wchar_t STEPIN = '2';
    static const __wchar_t STEPOUT = '3';
    static const __wchar_t STEPINSOFT = '4';
    static const __wchar_t STEPOUTSOFT = '5';
    static const __wchar_t PLANSPONSOR = '6';
    ProcessCode() : CharField(81) {}
    ProcessCode(__wchar_t data) : CharField(81, data) {}
  };

  public __gc class NoRpts : public IntField
  {
  public:
    static const int FIELD = 82;
    NoRpts() : IntField(82) {}
    NoRpts(int data) : IntField(82, data) {}
  };

  public __gc class RptSeq : public IntField
  {
  public:
    static const int FIELD = 83;
    RptSeq() : IntField(83) {}
    RptSeq(int data) : IntField(83, data) {}
  };

  public __gc class CxlQty : public DoubleField
  {
  public:
    static const int FIELD = 84;
    CxlQty() : DoubleField(84) {}
    CxlQty(double data) : DoubleField(84, data) {}
    CxlQty(double data, int decimalPadding) : DoubleField(84, data, decimalPadding) {}
  };

  public __gc class NoDlvyInst : public IntField
  {
  public:
    static const int FIELD = 85;
    NoDlvyInst() : IntField(85) {}
    NoDlvyInst(int data) : IntField(85, data) {}
  };

  public __gc class DlvyInst : public StringField
  {
  public:
    static const int FIELD = 86;
    DlvyInst() : StringField(86) {}
    DlvyInst(String* data) : StringField(86, data) {}
  };

  public __gc class AllocStatus : public IntField
  {
  public:
    static const int FIELD = 87;
    static const int ACCEPTEDSUCCESSFULLYPROCESSED = 0;
    static const int BLOCKLEVELREJECT = 1;
    static const int ACCOUNTLEVELREJECT = 2;
    static const int RECEIVEDRECEIVEDNOTYETPROCESSED = 3;
    static const int INCOMPLETE = 4;
    static const int REJECTEDBYINTERMEDIARY = 5;
    AllocStatus() : IntField(87) {}
    AllocStatus(int data) : IntField(87, data) {}
  };

  public __gc class AllocRejCode : public IntField
  {
  public:
    static const int FIELD = 88;
    static const int UNKNOWNACCT = 0;
    static const int INCORRECTQTY = 1;
    static const int UNKNOWNORSTALEEXECID = 10;
    static const int MISMATCHEDDATA = 11;
    static const int UNKNOWNCLORDID = 12;
    static const int WAREHOUSEREQUESTREJECTED = 13;
    static const int INCORRECTAVGPRC = 2;
    static const int INCORRECTBRKMNC = 3;
    static const int COMMDIFF = 4;
    static const int UNKNOWNORDID = 5;
    static const int UNKNOWNLISTID = 6;
    static const int OTHER = 7;
    static const int INCORRECTALLOCATEDQUANTITY = 8;
    static const int CALCULATIONDIFFERENCE = 9;
    AllocRejCode() : IntField(88) {}
    AllocRejCode(int data) : IntField(88, data) {}
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

  public __gc class BrokerOfCredit : public StringField
  {
  public:
    static const int FIELD = 92;
    BrokerOfCredit() : StringField(92) {}
    BrokerOfCredit(String* data) : StringField(92, data) {}
  };

  public __gc class SignatureLength : public IntField
  {
  public:
    static const int FIELD = 93;
    SignatureLength() : IntField(93) {}
    SignatureLength(int data) : IntField(93, data) {}
  };

  public __gc class EmailType : public CharField
  {
  public:
    static const int FIELD = 94;
    static const __wchar_t NEW = '0';
    static const __wchar_t REPLY = '1';
    static const __wchar_t ADMINREPLY = '2';
    EmailType() : CharField(94) {}
    EmailType(__wchar_t data) : CharField(94, data) {}
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
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PossResend() : BooleanField(97) {}
    PossResend(bool data) : BooleanField(97, data) {}
  };

  public __gc class EncryptMethod : public IntField
  {
  public:
    static const int FIELD = 98;
    static const int NONEOTHER = 0;
    static const int PKCSPROPRIETARY = 1;
    static const int DESECBMODE = 2;
    static const int PKCSDESPROPRIETARY = 3;
    static const int PGPDESDEFUNCT = 4;
    static const int PGPDESMD5SEEAPPNOTEONFIXWEBSITE = 5;
    static const int PEMDESMD5SEEAPPNOTEONFIXWEBSITENAFORFIXMLNOTUSED = 6;
    EncryptMethod() : IntField(98) {}
    EncryptMethod(int data) : IntField(98, data) {}
  };

  public __gc class StopPx : public DoubleField
  {
  public:
    static const int FIELD = 99;
    StopPx() : DoubleField(99) {}
    StopPx(double data) : DoubleField(99, data) {}
    StopPx(double data, int decimalPadding) : DoubleField(99, data, decimalPadding) {}
  };

  public __gc class ExDestination : public StringField
  {
  public:
    static const int FIELD = 100;
    ExDestination() : StringField(100) {}
    ExDestination(String* data) : StringField(100, data) {}
  };

  public __gc class CxlRejReason : public IntField
  {
  public:
    static const int FIELD = 102;
    static const int TOOLATE = 0;
    static const int UNKNOWN = 1;
    static const int BROKEROPT = 2;
    static const int ALREADYPENDINGCXL = 3;
    static const int UNABLETOPROCESS = 4;
    static const int ORIGORDMODTIMEMISMATCH = 5;
    static const int DUPCLORDID = 6;
    static const int OTHER = 99;
    CxlRejReason() : IntField(102) {}
    CxlRejReason(int data) : IntField(102, data) {}
  };

  public __gc class OrdRejReason : public IntField
  {
  public:
    static const int FIELD = 103;
    static const int BROKEROPT = 0;
    static const int UNKNOWNSYM = 1;
    static const int INVINVID = 10;
    static const int UNSUPPORDERCHAR = 11;
    static const int SURVEILLENCE = 12;
    static const int INCORRECTQUANTITY = 13;
    static const int INCORRECTALLOCATEDQUANTITY = 14;
    static const int UNKNOWNACCOUNTS = 15;
    static const int EXCHCLOSED = 2;
    static const int EXCEEDSLIM = 3;
    static const int TOOLATE = 4;
    static const int UNKNOWN = 5;
    static const int DUPLICATE = 6;
    static const int DUPLICATEVERBAL = 7;
    static const int STALE = 8;
    static const int TRADEALONGREQ = 9;
    static const int OTHER = 99;
    OrdRejReason() : IntField(103) {}
    OrdRejReason(int data) : IntField(103, data) {}
  };

  public __gc class IOIQualifier : public CharField
  {
  public:
    static const int FIELD = 104;
    static const __wchar_t AON = 'A';
    static const __wchar_t MOC = 'B';
    static const __wchar_t ATCLOSE = 'C';
    static const __wchar_t VWAP = 'D';
    static const __wchar_t INTOUCH = 'I';
    static const __wchar_t LIMIT = 'L';
    static const __wchar_t MOREBEHIND = 'M';
    static const __wchar_t ATOPEN = 'O';
    static const __wchar_t TAKEPOSITION = 'P';
    static const __wchar_t ATMARKET = 'Q';
    static const __wchar_t READYTRADE = 'R';
    static const __wchar_t PORTSHOW = 'S';
    static const __wchar_t THROUGHDAY = 'T';
    static const __wchar_t VERSUS = 'V';
    static const __wchar_t INDWRKAWAY = 'W';
    static const __wchar_t CROSSOPP = 'X';
    static const __wchar_t ATMID = 'Y';
    static const __wchar_t PREOPEN = 'Z';
    IOIQualifier() : CharField(104) {}
    IOIQualifier(__wchar_t data) : CharField(104, data) {}
  };

  public __gc class WaveNo : public StringField
  {
  public:
    static const int FIELD = 105;
    WaveNo() : StringField(105) {}
    WaveNo(String* data) : StringField(105, data) {}
  };

  public __gc class Issuer : public StringField
  {
  public:
    static const int FIELD = 106;
    Issuer() : StringField(106) {}
    Issuer(String* data) : StringField(106, data) {}
  };

  public __gc class SecurityDesc : public StringField
  {
  public:
    static const int FIELD = 107;
    SecurityDesc() : StringField(107) {}
    SecurityDesc(String* data) : StringField(107, data) {}
  };

  public __gc class HeartBtInt : public IntField
  {
  public:
    static const int FIELD = 108;
    HeartBtInt() : IntField(108) {}
    HeartBtInt(int data) : IntField(108, data) {}
  };

  public __gc class ClientID : public StringField
  {
  public:
    static const int FIELD = 109;
    ClientID() : StringField(109) {}
    ClientID(String* data) : StringField(109, data) {}
  };

  public __gc class MinQty : public DoubleField
  {
  public:
    static const int FIELD = 110;
    MinQty() : DoubleField(110) {}
    MinQty(double data) : DoubleField(110, data) {}
    MinQty(double data, int decimalPadding) : DoubleField(110, data, decimalPadding) {}
  };

  public __gc class MaxFloor : public DoubleField
  {
  public:
    static const int FIELD = 111;
    MaxFloor() : DoubleField(111) {}
    MaxFloor(double data) : DoubleField(111, data) {}
    MaxFloor(double data, int decimalPadding) : DoubleField(111, data, decimalPadding) {}
  };

  public __gc class TestReqID : public StringField
  {
  public:
    static const int FIELD = 112;
    TestReqID() : StringField(112) {}
    TestReqID(String* data) : StringField(112, data) {}
  };

  public __gc class ReportToExch : public BooleanField
  {
  public:
    static const int FIELD = 113;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ReportToExch() : BooleanField(113) {}
    ReportToExch(bool data) : BooleanField(113, data) {}
  };

  public __gc class LocateReqd : public BooleanField
  {
  public:
    static const int FIELD = 114;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LocateReqd() : BooleanField(114) {}
    LocateReqd(bool data) : BooleanField(114, data) {}
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

  public __gc class QuoteID : public StringField
  {
  public:
    static const int FIELD = 117;
    QuoteID() : StringField(117) {}
    QuoteID(String* data) : StringField(117, data) {}
  };

  public __gc class NetMoney : public DoubleField
  {
  public:
    static const int FIELD = 118;
    NetMoney() : DoubleField(118) {}
    NetMoney(double data) : DoubleField(118, data) {}
    NetMoney(double data, int decimalPadding) : DoubleField(118, data, decimalPadding) {}
  };

  public __gc class SettlCurrAmt : public DoubleField
  {
  public:
    static const int FIELD = 119;
    SettlCurrAmt() : DoubleField(119) {}
    SettlCurrAmt(double data) : DoubleField(119, data) {}
    SettlCurrAmt(double data, int decimalPadding) : DoubleField(119, data, decimalPadding) {}
  };

  public __gc class SettlCurrency : public StringField
  {
  public:
    static const int FIELD = 120;
    SettlCurrency() : StringField(120) {}
    SettlCurrency(String* data) : StringField(120, data) {}
  };

  public __gc class ForexReq : public BooleanField
  {
  public:
    static const int FIELD = 121;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ForexReq() : BooleanField(121) {}
    ForexReq(bool data) : BooleanField(121, data) {}
  };

  public __gc class OrigSendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 122;
    OrigSendingTime() : UtcTimeStampField(122) {}
    OrigSendingTime(DateTime data) : UtcTimeStampField(122, data) {}
  };

  public __gc class GapFillFlag : public BooleanField
  {
  public:
    static const int FIELD = 123;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    GapFillFlag() : BooleanField(123) {}
    GapFillFlag(bool data) : BooleanField(123, data) {}
  };

  public __gc class NoExecs : public IntField
  {
  public:
    static const int FIELD = 124;
    NoExecs() : IntField(124) {}
    NoExecs(int data) : IntField(124, data) {}
  };

  public __gc class CxlType : public CharField
  {
  public:
    static const int FIELD = 125;
    CxlType() : CharField(125) {}
    CxlType(__wchar_t data) : CharField(125, data) {}
  };

  public __gc class ExpireTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 126;
    ExpireTime() : UtcTimeStampField(126) {}
    ExpireTime(DateTime data) : UtcTimeStampField(126, data) {}
  };

  public __gc class DKReason : public CharField
  {
  public:
    static const int FIELD = 127;
    static const __wchar_t UNKNOWNSYMBOL = 'A';
    static const __wchar_t WRONGSIDE = 'B';
    static const __wchar_t QUANTITYEXCEEDSORDER = 'C';
    static const __wchar_t NOMATCH = 'D';
    static const __wchar_t PRICEEXCEEDSLIMIT = 'E';
    static const __wchar_t CALCULATIONDIFFERENCE = 'F';
    static const __wchar_t OTHER = 'Z';
    DKReason() : CharField(127) {}
    DKReason(__wchar_t data) : CharField(127, data) {}
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

  public __gc class IOINaturalFlag : public BooleanField
  {
  public:
    static const int FIELD = 130;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    IOINaturalFlag() : BooleanField(130) {}
    IOINaturalFlag(bool data) : BooleanField(130, data) {}
  };

  public __gc class QuoteReqID : public StringField
  {
  public:
    static const int FIELD = 131;
    QuoteReqID() : StringField(131) {}
    QuoteReqID(String* data) : StringField(131, data) {}
  };

  public __gc class BidPx : public DoubleField
  {
  public:
    static const int FIELD = 132;
    BidPx() : DoubleField(132) {}
    BidPx(double data) : DoubleField(132, data) {}
    BidPx(double data, int decimalPadding) : DoubleField(132, data, decimalPadding) {}
  };

  public __gc class OfferPx : public DoubleField
  {
  public:
    static const int FIELD = 133;
    OfferPx() : DoubleField(133) {}
    OfferPx(double data) : DoubleField(133, data) {}
    OfferPx(double data, int decimalPadding) : DoubleField(133, data, decimalPadding) {}
  };

  public __gc class BidSize : public DoubleField
  {
  public:
    static const int FIELD = 134;
    BidSize() : DoubleField(134) {}
    BidSize(double data) : DoubleField(134, data) {}
    BidSize(double data, int decimalPadding) : DoubleField(134, data, decimalPadding) {}
  };

  public __gc class OfferSize : public DoubleField
  {
  public:
    static const int FIELD = 135;
    OfferSize() : DoubleField(135) {}
    OfferSize(double data) : DoubleField(135, data) {}
    OfferSize(double data, int decimalPadding) : DoubleField(135, data, decimalPadding) {}
  };

  public __gc class NoMiscFees : public IntField
  {
  public:
    static const int FIELD = 136;
    NoMiscFees() : IntField(136) {}
    NoMiscFees(int data) : IntField(136, data) {}
  };

  public __gc class MiscFeeAmt : public DoubleField
  {
  public:
    static const int FIELD = 137;
    MiscFeeAmt() : DoubleField(137) {}
    MiscFeeAmt(double data) : DoubleField(137, data) {}
    MiscFeeAmt(double data, int decimalPadding) : DoubleField(137, data, decimalPadding) {}
  };

  public __gc class MiscFeeCurr : public StringField
  {
  public:
    static const int FIELD = 138;
    MiscFeeCurr() : StringField(138) {}
    MiscFeeCurr(String* data) : StringField(138, data) {}
  };

  public __gc class MiscFeeType : public CharField
  {
  public:
    static const int FIELD = 139;
    static const __wchar_t REG = '1';
    static const __wchar_t TRANSACTION = '10';
    static const __wchar_t CONVERSION = '11';
    static const __wchar_t AGENT = '12';
    static const __wchar_t TAX = '2';
    static const __wchar_t LOCALCOMM = '3';
    static const __wchar_t EXCHFEE = '4';
    static const __wchar_t STAMP = '5';
    static const __wchar_t LEVY = '6';
    static const __wchar_t OTHER = '7';
    static const __wchar_t MARKUP = '8';
    static const __wchar_t CONSUMPTION = '9';
    MiscFeeType() : CharField(139) {}
    MiscFeeType(__wchar_t data) : CharField(139, data) {}
  };

  public __gc class PrevClosePx : public DoubleField
  {
  public:
    static const int FIELD = 140;
    PrevClosePx() : DoubleField(140) {}
    PrevClosePx(double data) : DoubleField(140, data) {}
    PrevClosePx(double data, int decimalPadding) : DoubleField(140, data, decimalPadding) {}
  };

  public __gc class ResetSeqNumFlag : public BooleanField
  {
  public:
    static const int FIELD = 141;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
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

  public __gc class NoRelatedSym : public IntField
  {
  public:
    static const int FIELD = 146;
    NoRelatedSym() : IntField(146) {}
    NoRelatedSym(int data) : IntField(146, data) {}
  };

  public __gc class Subject : public StringField
  {
  public:
    static const int FIELD = 147;
    Subject() : StringField(147) {}
    Subject(String* data) : StringField(147, data) {}
  };

  public __gc class Headline : public StringField
  {
  public:
    static const int FIELD = 148;
    Headline() : StringField(148) {}
    Headline(String* data) : StringField(148, data) {}
  };

  public __gc class URLLink : public StringField
  {
  public:
    static const int FIELD = 149;
    URLLink() : StringField(149) {}
    URLLink(String* data) : StringField(149, data) {}
  };

  public __gc class ExecType : public CharField
  {
  public:
    static const int FIELD = 150;
    static const __wchar_t NEW = '0';
    static const __wchar_t DONE = '3';
    static const __wchar_t CANCELED = '4';
    static const __wchar_t REPLACED = '5';
    static const __wchar_t PENDINGCXL = '6';
    static const __wchar_t STOPPED = '7';
    static const __wchar_t REJECTED = '8';
    static const __wchar_t SUSPENDED = '9';
    static const __wchar_t PENDINGNEW = 'A';
    static const __wchar_t CALCULATED = 'B';
    static const __wchar_t EXPIRED = 'C';
    static const __wchar_t RESTATED = 'D';
    static const __wchar_t PENDINGREPLACE = 'E';
    static const __wchar_t TRADE = 'F';
    static const __wchar_t TRADECORRECT = 'G';
    static const __wchar_t TRADECANCEL = 'H';
    static const __wchar_t ORDERSTATUS = 'I';
    ExecType() : CharField(150) {}
    ExecType(__wchar_t data) : CharField(150, data) {}
  };

  public __gc class LeavesQty : public DoubleField
  {
  public:
    static const int FIELD = 151;
    LeavesQty() : DoubleField(151) {}
    LeavesQty(double data) : DoubleField(151, data) {}
    LeavesQty(double data, int decimalPadding) : DoubleField(151, data, decimalPadding) {}
  };

  public __gc class CashOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 152;
    CashOrderQty() : DoubleField(152) {}
    CashOrderQty(double data) : DoubleField(152, data) {}
    CashOrderQty(double data, int decimalPadding) : DoubleField(152, data, decimalPadding) {}
  };

  public __gc class AllocAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 153;
    AllocAvgPx() : DoubleField(153) {}
    AllocAvgPx(double data) : DoubleField(153, data) {}
    AllocAvgPx(double data, int decimalPadding) : DoubleField(153, data, decimalPadding) {}
  };

  public __gc class AllocNetMoney : public DoubleField
  {
  public:
    static const int FIELD = 154;
    AllocNetMoney() : DoubleField(154) {}
    AllocNetMoney(double data) : DoubleField(154, data) {}
    AllocNetMoney(double data, int decimalPadding) : DoubleField(154, data, decimalPadding) {}
  };

  public __gc class SettlCurrFxRate : public DoubleField
  {
  public:
    static const int FIELD = 155;
    SettlCurrFxRate() : DoubleField(155) {}
    SettlCurrFxRate(double data) : DoubleField(155, data) {}
    SettlCurrFxRate(double data, int decimalPadding) : DoubleField(155, data, decimalPadding) {}
  };

  public __gc class SettlCurrFxRateCalc : public CharField
  {
  public:
    static const int FIELD = 156;
    static const __wchar_t MULTIPLY = 'M';
    static const __wchar_t DIVIDE = 'D';
    SettlCurrFxRateCalc() : CharField(156) {}
    SettlCurrFxRateCalc(__wchar_t data) : CharField(156, data) {}
  };

  public __gc class NumDaysInterest : public IntField
  {
  public:
    static const int FIELD = 157;
    NumDaysInterest() : IntField(157) {}
    NumDaysInterest(int data) : IntField(157, data) {}
  };

  public __gc class AccruedInterestRate : public DoubleField
  {
  public:
    static const int FIELD = 158;
    AccruedInterestRate() : DoubleField(158) {}
    AccruedInterestRate(double data) : DoubleField(158, data) {}
    AccruedInterestRate(double data, int decimalPadding) : DoubleField(158, data, decimalPadding) {}
  };

  public __gc class AccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 159;
    AccruedInterestAmt() : DoubleField(159) {}
    AccruedInterestAmt(double data) : DoubleField(159, data) {}
    AccruedInterestAmt(double data, int decimalPadding) : DoubleField(159, data, decimalPadding) {}
  };

  public __gc class SettlInstMode : public CharField
  {
  public:
    static const int FIELD = 160;
    static const __wchar_t DEFAULT = '0';
    static const __wchar_t SIPROVIDED = '1';
    static const __wchar_t ACCOUNTOVERRIDING = '2';
    static const __wchar_t ACCOUNTSTANDING = '3';
    static const __wchar_t CIVORDERSINGLEACCT = '4';
    static const __wchar_t REJECT = '5';
    SettlInstMode() : CharField(160) {}
    SettlInstMode(__wchar_t data) : CharField(160, data) {}
  };

  public __gc class AllocText : public StringField
  {
  public:
    static const int FIELD = 161;
    AllocText() : StringField(161) {}
    AllocText(String* data) : StringField(161, data) {}
  };

  public __gc class SettlInstID : public StringField
  {
  public:
    static const int FIELD = 162;
    SettlInstID() : StringField(162) {}
    SettlInstID(String* data) : StringField(162, data) {}
  };

  public __gc class SettlInstTransType : public CharField
  {
  public:
    static const int FIELD = 163;
    static const __wchar_t CANCEL = 'C';
    static const __wchar_t NEW = 'N';
    static const __wchar_t REPLACE = 'R';
    static const __wchar_t RESTATE = 'T';
    SettlInstTransType() : CharField(163) {}
    SettlInstTransType(__wchar_t data) : CharField(163, data) {}
  };

  public __gc class EmailThreadID : public StringField
  {
  public:
    static const int FIELD = 164;
    EmailThreadID() : StringField(164) {}
    EmailThreadID(String* data) : StringField(164, data) {}
  };

  public __gc class SettlInstSource : public CharField
  {
  public:
    static const int FIELD = 165;
    static const __wchar_t BROKERINSTR = '1';
    static const __wchar_t INSTINSTR = '2';
    static const __wchar_t INVESTORCIV = '3';
    SettlInstSource() : CharField(165) {}
    SettlInstSource(__wchar_t data) : CharField(165, data) {}
  };

  public __gc class SettlLocation : public StringField
  {
  public:
    static const int FIELD = 166;
    static const String* CEDEL = "CED";
    static const String* DEPOSITORYTRUSTCOMPANY = "DTC";
    static const String* EUROCLEAR = "EUR";
    static const String* FEDERALBOOKENTRY = "FED";
    static const String* LOCALMARKETSETTLELOCATION = "ISO_Country_Code";
    static const String* PHYSICAL = "PNY";
    static const String* PARTICIPANTTRUSTCOMPANY = "PTC";
    SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
  };

  public __gc class SecurityType : public StringField
  {
  public:
    static const int FIELD = 167;
    static const String* ASSETBACKEDSECURITIES = "ABS";
    static const String* AMENDEDRESTATED = "AMENDED";
    static const String* OTHERANTICIPATIONNOTESBANGANETC = "AN";
    static const String* BANKERSACCEPTANCE = "BA";
    static const String* BANKNOTES = "BN";
    static const String* BILLOFEXCHANGES = "BOX";
    static const String* BRADYBOND = "BRADY";
    static const String* BRIDGELOAN = "BRIDGE";
    static const String* BUYSELLBACK = "BUYSELL";
    static const String* CONVERTIBLEBOND = "CB";
    static const String* CERTIFICATEOFDEPOSIT = "CD";
    static const String* CALLLOANS = "CL";
    static const String* CORPMORTGAGEBACKEDSECURITIES = "CMBS";
    static const String* COLLATERALIZEDMORTGAGEOBLIGATION = "CMO";
    static const String* CERTIFICATEOFOBLIGATION = "COFO";
    static const String* CERTIFICATEOFPARTICIPATION = "COFP";
    static const String* CORPORATEBOND = "CORP";
    static const String* COMMERCIALPAPER = "CP";
    static const String* CORPORATEPRIVATEPLACEMENT = "CPP";
    static const String* COMMONSTOCK = "CS";
    static const String* DEFAULTED = "DEFLTED";
    static const String* DEBTORINPOSSESSION = "DINP";
    static const String* DEPOSITNOTES = "DN";
    static const String* DUALCURRENCY = "DUAL";
    static const String* EUROCERTIFICATEOFDEPOSIT = "EUCD";
    static const String* EUROCORPORATEBOND = "EUCORP";
    static const String* EUROCOMMERCIALPAPER = "EUCP";
    static const String* EUROSOVEREIGNS = "EUSOV";
    static const String* EUROSUPRANATIONALCOUPONS = "EUSUPRA";
    static const String* FEDERALAGENCYCOUPON = "FAC";
    static const String* FEDERALAGENCYDISCOUNTNOTE = "FADN";
    static const String* FOREIGNEXCHANGECONTRACT = "FOR";
    static const String* FORWARD = "FORWARD";
    static const String* FUTURE = "FUT";
    static const String* GENERALOBLIGATIONBONDS = "GO";
    static const String* IOETTEMORTGAGE = "IET";
    static const String* LETTEROFCREDIT = "LOFC";
    static const String* LIQUIDITYNOTE = "LQN";
    static const String* MATURED = "MATURED";
    static const String* MORTGAGEBACKEDSECURITIES = "MBS";
    static const String* MUTUALFUND = "MF";
    static const String* MORTGAGEINTERESTONLY = "MIO";
    static const String* MULTILEGINSTRUMENT = "MLEG";
    static const String* MORTGAGEPRINCIPALONLY = "MPO";
    static const String* MORTGAGEPRIVATEPLACEMENT = "MPP";
    static const String* MISCELLANEOUSPASSTHROUGH = "MPT";
    static const String* MANDATORYTENDER = "MT";
    static const String* MEDIUMTERMNOTES = "MTN";
    static const String* NOSECURITYTYPE = "NONE";
    static const String* OVERNIGHT = "ONITE";
    static const String* OPTION = "OPT";
    static const String* PRIVATEEXPORTFUNDING = "PEF";
    static const String* PFANDBRIEFE = "PFAND";
    static const String* PROMISSORYNOTE = "PN";
    static const String* PREFERREDSTOCK = "PS";
    static const String* PLAZOSFIJOS = "PZFJ";
    static const String* REVENUEANTICIPATIONNOTE = "RAN";
    static const String* REPLACED = "REPLACD";
    static const String* REPURCHASE = "REPO";
    static const String* RETIRED = "RETIRED";
    static const String* REVENUEBONDS = "REV";
    static const String* REVOLVERLOAN = "RVLV";
    static const String* REVOLVERTERMLOAN = "RVLVTRM";
    static const String* SECURITIESLOAN = "SECLOAN";
    static const String* SECURITIESPLEDGE = "SECPLEDGE";
    static const String* SPECIALASSESSMENT = "SPCLA";
    static const String* SPECIALOBLIGATION = "SPCLO";
    static const String* SPECIALTAX = "SPCLT";
    static const String* SHORTTERMLOANNOTE = "STN";
    static const String* STRUCTUREDNOTES = "STRUCT";
    static const String* USDSUPRANATIONALCOUPONS = "SUPRA";
    static const String* SWINGLINEFACILITY = "SWING";
    static const String* TAXANTICIPATIONNOTE = "TAN";
    static const String* TAXALLOCATION = "TAXA";
    static const String* TOBEANNOUNCED = "TBA";
    static const String* USTREASURYBILL = "TBILL";
    static const String* USTREASURYBOND = "TBOND";
    static const String* PRINCIPALSTRIPOFACALLABLEBONDORNOTE = "TCAL";
    static const String* TIMEDEPOSIT = "TD";
    static const String* TAXEXEMPTCOMMERCIALPAPER = "TECP";
    static const String* TERMLOAN = "TERM";
    static const String* INTERESTSTRIPFROMANYBONDORNOTE = "TINT";
    static const String* TREASURYINFLATIONPROTECTEDSECURITIES = "TIPS";
    static const String* USTREASURYNOTE = "TNOTE";
    static const String* PRINCIPALSTRIPFROMANONCALLABLEBONDORNOTE = "TPRN";
    static const String* TAXREVENUEANTICIPATIONNOTE = "TRAN";
    static const String* USTREASURYNOTEDEPRECATEDVALUEUSETNOTE = "UST";
    static const String* USTREASURYBILLDEPRECATEDVALUEUSETBILL = "USTB";
    static const String* VARIABLERATEDEMANDNOTE = "VRDN";
    static const String* WARRANT = "WAR";
    static const String* WITHDRAWN = "WITHDRN";
    static const String* WILDCARDENTRY = "WLD";
    static const String* EXTENDEDCOMMNOTE = "XCN";
    static const String* INDEXEDLINKED = "XLINKD";
    static const String* YANKEECORPORATEBOND = "YANK";
    static const String* YANKEECERTIFICATEOFDEPOSIT = "YCD";
    SecurityType() : StringField(167) {}
    SecurityType(String* data) : StringField(167, data) {}
  };

  public __gc class EffectiveTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 168;
    EffectiveTime() : UtcTimeStampField(168) {}
    EffectiveTime(DateTime data) : UtcTimeStampField(168, data) {}
  };

  public __gc class StandInstDbType : public IntField
  {
  public:
    static const int FIELD = 169;
    static const int OTHER = 0;
    static const int SID = 1;
    static const int ALERT = 2;
    static const int CUSTODIAN = 3;
    static const int ACCOUNTNET = 4;
    StandInstDbType() : IntField(169) {}
    StandInstDbType(int data) : IntField(169, data) {}
  };

  public __gc class StandInstDbName : public StringField
  {
  public:
    static const int FIELD = 170;
    StandInstDbName() : StringField(170) {}
    StandInstDbName(String* data) : StringField(170, data) {}
  };

  public __gc class StandInstDbID : public StringField
  {
  public:
    static const int FIELD = 171;
    StandInstDbID() : StringField(171) {}
    StandInstDbID(String* data) : StringField(171, data) {}
  };

  public __gc class SettlDeliveryType : public IntField
  {
  public:
    static const int FIELD = 172;
    SettlDeliveryType() : IntField(172) {}
    SettlDeliveryType(int data) : IntField(172, data) {}
  };

  public __gc class SettlDepositoryCode : public StringField
  {
  public:
    static const int FIELD = 173;
    SettlDepositoryCode() : StringField(173) {}
    SettlDepositoryCode(String* data) : StringField(173, data) {}
  };

  public __gc class SettlBrkrCode : public StringField
  {
  public:
    static const int FIELD = 174;
    SettlBrkrCode() : StringField(174) {}
    SettlBrkrCode(String* data) : StringField(174, data) {}
  };

  public __gc class SettlInstCode : public StringField
  {
  public:
    static const int FIELD = 175;
    SettlInstCode() : StringField(175) {}
    SettlInstCode(String* data) : StringField(175, data) {}
  };

  public __gc class SecuritySettlAgentName : public StringField
  {
  public:
    static const int FIELD = 176;
    SecuritySettlAgentName() : StringField(176) {}
    SecuritySettlAgentName(String* data) : StringField(176, data) {}
  };

  public __gc class SecuritySettlAgentCode : public StringField
  {
  public:
    static const int FIELD = 177;
    SecuritySettlAgentCode() : StringField(177) {}
    SecuritySettlAgentCode(String* data) : StringField(177, data) {}
  };

  public __gc class SecuritySettlAgentAcctNum : public StringField
  {
  public:
    static const int FIELD = 178;
    SecuritySettlAgentAcctNum() : StringField(178) {}
    SecuritySettlAgentAcctNum(String* data) : StringField(178, data) {}
  };

  public __gc class SecuritySettlAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 179;
    SecuritySettlAgentAcctName() : StringField(179) {}
    SecuritySettlAgentAcctName(String* data) : StringField(179, data) {}
  };

  public __gc class SecuritySettlAgentContactName : public StringField
  {
  public:
    static const int FIELD = 180;
    SecuritySettlAgentContactName() : StringField(180) {}
    SecuritySettlAgentContactName(String* data) : StringField(180, data) {}
  };

  public __gc class SecuritySettlAgentContactPhone : public StringField
  {
  public:
    static const int FIELD = 181;
    SecuritySettlAgentContactPhone() : StringField(181) {}
    SecuritySettlAgentContactPhone(String* data) : StringField(181, data) {}
  };

  public __gc class CashSettlAgentName : public StringField
  {
  public:
    static const int FIELD = 182;
    CashSettlAgentName() : StringField(182) {}
    CashSettlAgentName(String* data) : StringField(182, data) {}
  };

  public __gc class CashSettlAgentCode : public StringField
  {
  public:
    static const int FIELD = 183;
    CashSettlAgentCode() : StringField(183) {}
    CashSettlAgentCode(String* data) : StringField(183, data) {}
  };

  public __gc class CashSettlAgentAcctNum : public StringField
  {
  public:
    static const int FIELD = 184;
    CashSettlAgentAcctNum() : StringField(184) {}
    CashSettlAgentAcctNum(String* data) : StringField(184, data) {}
  };

  public __gc class CashSettlAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 185;
    CashSettlAgentAcctName() : StringField(185) {}
    CashSettlAgentAcctName(String* data) : StringField(185, data) {}
  };

  public __gc class CashSettlAgentContactName : public StringField
  {
  public:
    static const int FIELD = 186;
    CashSettlAgentContactName() : StringField(186) {}
    CashSettlAgentContactName(String* data) : StringField(186, data) {}
  };

  public __gc class CashSettlAgentContactPhone : public StringField
  {
  public:
    static const int FIELD = 187;
    CashSettlAgentContactPhone() : StringField(187) {}
    CashSettlAgentContactPhone(String* data) : StringField(187, data) {}
  };

  public __gc class BidSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 188;
    BidSpotRate() : DoubleField(188) {}
    BidSpotRate(double data) : DoubleField(188, data) {}
    BidSpotRate(double data, int decimalPadding) : DoubleField(188, data, decimalPadding) {}
  };

  public __gc class BidForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 189;
    BidForwardPoints() : DoubleField(189) {}
    BidForwardPoints(double data) : DoubleField(189, data) {}
    BidForwardPoints(double data, int decimalPadding) : DoubleField(189, data, decimalPadding) {}
  };

  public __gc class OfferSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 190;
    OfferSpotRate() : DoubleField(190) {}
    OfferSpotRate(double data) : DoubleField(190, data) {}
    OfferSpotRate(double data, int decimalPadding) : DoubleField(190, data, decimalPadding) {}
  };

  public __gc class OfferForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 191;
    OfferForwardPoints() : DoubleField(191) {}
    OfferForwardPoints(double data) : DoubleField(191, data) {}
    OfferForwardPoints(double data, int decimalPadding) : DoubleField(191, data, decimalPadding) {}
  };

  public __gc class OrderQty2 : public DoubleField
  {
  public:
    static const int FIELD = 192;
    OrderQty2() : DoubleField(192) {}
    OrderQty2(double data) : DoubleField(192, data) {}
    OrderQty2(double data, int decimalPadding) : DoubleField(192, data, decimalPadding) {}
  };

  public __gc class SettlDate2 : public StringField
  {
  public:
    static const int FIELD = 193;
    SettlDate2() : StringField(193) {}
    SettlDate2(String* data) : StringField(193, data) {}
  };

  public __gc class LastSpotRate : public DoubleField
  {
  public:
    static const int FIELD = 194;
    LastSpotRate() : DoubleField(194) {}
    LastSpotRate(double data) : DoubleField(194, data) {}
    LastSpotRate(double data, int decimalPadding) : DoubleField(194, data, decimalPadding) {}
  };

  public __gc class LastForwardPoints : public DoubleField
  {
  public:
    static const int FIELD = 195;
    LastForwardPoints() : DoubleField(195) {}
    LastForwardPoints(double data) : DoubleField(195, data) {}
    LastForwardPoints(double data, int decimalPadding) : DoubleField(195, data, decimalPadding) {}
  };

  public __gc class AllocLinkID : public StringField
  {
  public:
    static const int FIELD = 196;
    AllocLinkID() : StringField(196) {}
    AllocLinkID(String* data) : StringField(196, data) {}
  };

  public __gc class AllocLinkType : public IntField
  {
  public:
    static const int FIELD = 197;
    static const int FXNETTING = 0;
    static const int FXSWAP = 1;
    AllocLinkType() : IntField(197) {}
    AllocLinkType(int data) : IntField(197, data) {}
  };

  public __gc class SecondaryOrderID : public StringField
  {
  public:
    static const int FIELD = 198;
    SecondaryOrderID() : StringField(198) {}
    SecondaryOrderID(String* data) : StringField(198, data) {}
  };

  public __gc class NoIOIQualifiers : public IntField
  {
  public:
    static const int FIELD = 199;
    NoIOIQualifiers() : IntField(199) {}
    NoIOIQualifiers(int data) : IntField(199, data) {}
  };

  public __gc class MaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 200;
    MaturityMonthYear() : StringField(200) {}
    MaturityMonthYear(String* data) : StringField(200, data) {}
  };

  public __gc class PutOrCall : public IntField
  {
  public:
    static const int FIELD = 201;
    static const int PUT = 0;
    static const int CALL = 1;
    PutOrCall() : IntField(201) {}
    PutOrCall(int data) : IntField(201, data) {}
  };

  public __gc class StrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 202;
    StrikePrice() : DoubleField(202) {}
    StrikePrice(double data) : DoubleField(202, data) {}
    StrikePrice(double data, int decimalPadding) : DoubleField(202, data, decimalPadding) {}
  };

  public __gc class CoveredOrUncovered : public IntField
  {
  public:
    static const int FIELD = 203;
    static const int COVERED = 0;
    static const int UNCOVERED = 1;
    CoveredOrUncovered() : IntField(203) {}
    CoveredOrUncovered(int data) : IntField(203, data) {}
  };

  public __gc class CustomerOrFirm : public IntField
  {
  public:
    static const int FIELD = 204;
    static const int CUSTOMER = 0;
    static const int FIRM = 1;
    CustomerOrFirm() : IntField(204) {}
    CustomerOrFirm(int data) : IntField(204, data) {}
  };

  public __gc class MaturityDay : public StringField
  {
  public:
    static const int FIELD = 205;
    MaturityDay() : StringField(205) {}
    MaturityDay(String* data) : StringField(205, data) {}
  };

  public __gc class OptAttribute : public CharField
  {
  public:
    static const int FIELD = 206;
    OptAttribute() : CharField(206) {}
    OptAttribute(__wchar_t data) : CharField(206, data) {}
  };

  public __gc class SecurityExchange : public StringField
  {
  public:
    static const int FIELD = 207;
    SecurityExchange() : StringField(207) {}
    SecurityExchange(String* data) : StringField(207, data) {}
  };

  public __gc class NotifyBrokerOfCredit : public BooleanField
  {
  public:
    static const int FIELD = 208;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    NotifyBrokerOfCredit() : BooleanField(208) {}
    NotifyBrokerOfCredit(bool data) : BooleanField(208, data) {}
  };

  public __gc class AllocHandlInst : public IntField
  {
  public:
    static const int FIELD = 209;
    static const int MATCH = 1;
    static const int FORWARD = 2;
    static const int FORWARDMATCH = 3;
    AllocHandlInst() : IntField(209) {}
    AllocHandlInst(int data) : IntField(209, data) {}
  };

  public __gc class MaxShow : public DoubleField
  {
  public:
    static const int FIELD = 210;
    MaxShow() : DoubleField(210) {}
    MaxShow(double data) : DoubleField(210, data) {}
    MaxShow(double data, int decimalPadding) : DoubleField(210, data, decimalPadding) {}
  };

  public __gc class PegOffsetValue : public DoubleField
  {
  public:
    static const int FIELD = 211;
    PegOffsetValue() : DoubleField(211) {}
    PegOffsetValue(double data) : DoubleField(211, data) {}
    PegOffsetValue(double data, int decimalPadding) : DoubleField(211, data, decimalPadding) {}
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

  public __gc class SettlInstRefID : public StringField
  {
  public:
    static const int FIELD = 214;
    SettlInstRefID() : StringField(214) {}
    SettlInstRefID(String* data) : StringField(214, data) {}
  };

  public __gc class NoRoutingIDs : public IntField
  {
  public:
    static const int FIELD = 215;
    NoRoutingIDs() : IntField(215) {}
    NoRoutingIDs(int data) : IntField(215, data) {}
  };

  public __gc class RoutingType : public IntField
  {
  public:
    static const int FIELD = 216;
    static const int TARGETFIRM = 1;
    static const int TARGETLIST = 2;
    static const int BLOCKFIRM = 3;
    static const int BLOCKLIST = 4;
    RoutingType() : IntField(216) {}
    RoutingType(int data) : IntField(216, data) {}
  };

  public __gc class RoutingID : public StringField
  {
  public:
    static const int FIELD = 217;
    RoutingID() : StringField(217) {}
    RoutingID(String* data) : StringField(217, data) {}
  };

  public __gc class Spread : public DoubleField
  {
  public:
    static const int FIELD = 218;
    Spread() : DoubleField(218) {}
    Spread(double data) : DoubleField(218, data) {}
    Spread(double data, int decimalPadding) : DoubleField(218, data, decimalPadding) {}
  };

  public __gc class Benchmark : public CharField
  {
  public:
    static const int FIELD = 219;
    static const __wchar_t CURVE = '1';
    static const __wchar_t _5YR = '2';
    static const __wchar_t OLD5 = '3';
    static const __wchar_t _10YR = '4';
    static const __wchar_t OLD10 = '5';
    static const __wchar_t _30YR = '6';
    static const __wchar_t OLD30 = '7';
    static const __wchar_t _3MOLIBOR = '8';
    static const __wchar_t _6MOLIBOR = '9';
    Benchmark() : CharField(219) {}
    Benchmark(__wchar_t data) : CharField(219, data) {}
  };

  public __gc class BenchmarkCurveCurrency : public StringField
  {
  public:
    static const int FIELD = 220;
    BenchmarkCurveCurrency() : StringField(220) {}
    BenchmarkCurveCurrency(String* data) : StringField(220, data) {}
  };

  public __gc class BenchmarkCurveName : public StringField
  {
  public:
    static const int FIELD = 221;
    static const String* EONIA = "EONIA";
    static const String* EUREPO = "EUREPO";
    static const String* EURIBOR = "Euribor";
    static const String* FUTURESWAP = "FutureSWAP";
    static const String* LIBID = "LIBID";
    static const String* LIBOR = "LIBOR";
    static const String* MUNIAAA = "MuniAAA";
    static const String* OTHER = "OTHER";
    static const String* PFANDBRIEFE = "Pfandbriefe";
    static const String* SONIA = "SONIA";
    static const String* SWAP = "SWAP";
    static const String* TREASURY = "Treasury";
    BenchmarkCurveName() : StringField(221) {}
    BenchmarkCurveName(String* data) : StringField(221, data) {}
  };

  public __gc class BenchmarkCurvePoint : public StringField
  {
  public:
    static const int FIELD = 222;
    BenchmarkCurvePoint() : StringField(222) {}
    BenchmarkCurvePoint(String* data) : StringField(222, data) {}
  };

  public __gc class CouponRate : public DoubleField
  {
  public:
    static const int FIELD = 223;
    CouponRate() : DoubleField(223) {}
    CouponRate(double data) : DoubleField(223, data) {}
    CouponRate(double data, int decimalPadding) : DoubleField(223, data, decimalPadding) {}
  };

  public __gc class CouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 224;
    CouponPaymentDate() : StringField(224) {}
    CouponPaymentDate(String* data) : StringField(224, data) {}
  };

  public __gc class IssueDate : public StringField
  {
  public:
    static const int FIELD = 225;
    IssueDate() : StringField(225) {}
    IssueDate(String* data) : StringField(225, data) {}
  };

  public __gc class RepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 226;
    RepurchaseTerm() : IntField(226) {}
    RepurchaseTerm(int data) : IntField(226, data) {}
  };

  public __gc class RepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 227;
    RepurchaseRate() : DoubleField(227) {}
    RepurchaseRate(double data) : DoubleField(227, data) {}
    RepurchaseRate(double data, int decimalPadding) : DoubleField(227, data, decimalPadding) {}
  };

  public __gc class Factor : public DoubleField
  {
  public:
    static const int FIELD = 228;
    Factor() : DoubleField(228) {}
    Factor(double data) : DoubleField(228, data) {}
    Factor(double data, int decimalPadding) : DoubleField(228, data, decimalPadding) {}
  };

  public __gc class TradeOriginationDate : public StringField
  {
  public:
    static const int FIELD = 229;
    TradeOriginationDate() : StringField(229) {}
    TradeOriginationDate(String* data) : StringField(229, data) {}
  };

  public __gc class ExDate : public StringField
  {
  public:
    static const int FIELD = 230;
    ExDate() : StringField(230) {}
    ExDate(String* data) : StringField(230, data) {}
  };

  public __gc class ContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 231;
    ContractMultiplier() : DoubleField(231) {}
    ContractMultiplier(double data) : DoubleField(231, data) {}
    ContractMultiplier(double data, int decimalPadding) : DoubleField(231, data, decimalPadding) {}
  };

  public __gc class NoStipulations : public IntField
  {
  public:
    static const int FIELD = 232;
    NoStipulations() : IntField(232) {}
    NoStipulations(int data) : IntField(232, data) {}
  };

  public __gc class StipulationType : public StringField
  {
  public:
    static const int FIELD = 233;
    static const String* ABSOLUTEPREPAYMENTSPEED = "ABS";
    static const String* AMT = "AMT";
    static const String* AUTOREINVESTMENTATRATEORBETTER = "AUTOREINV";
    static const String* BANKQUALIFIED = "BANKQUAL";
    static const String* BARGAINCONDITIONS = "BGNCON";
    static const String* COUPONRANGE = "COUPON";
    static const String* CONSTANTPREPAYMENTPENALTY = "CPP";
    static const String* CONSTANTPREPAYMENTRATE = "CPR";
    static const String* CONSTANTPREPAYMENTYIELD = "CPY";
    static const String* ISOCURRENCYCODE = "CURRENCY";
    static const String* CUSTOMSTARTENDDATE = "CUSTOMDATE";
    static const String* GEOGRAPHICSANDRANGE = "GEOG";
    static const String* VALUATIONDISCOUNT = "HAIRCUT";
    static const String* FINALCPROFHOMEEQUITYPREPAYMENTCURVE = "HEP";
    static const String* INSURED = "INSURED";
    static const String* YEARORYEARMONTHOFISSUE = "ISSUE";
    static const String* ISSUERSTICKER = "ISSUER";
    static const String* ISSUESIZERANGE = "ISSUESIZE";
    static const String* LOOKBACKDAYS = "LOOKBACK";
    static const String* EXPLICITLOTIDENTIFIER = "LOT";
    static const String* LOTVARIANCEVALUEINPERCENTMAXIMUMOVERORUNDERALLOCATIONALLOWED = "LOTVAR";
    static const String* MATURITYYEARANDMONTH = "MAT";
    static const String* MATURITYRANGE = "MATURITY";
    static const String* MAXIMUMDENOMINATION = "MAXDNOM";
    static const String* MAXIMUMSUBSTITUTIONSREPO = "MAXSUBS";
    static const String* PERCENTOFMANUFACTUREDHOUSINGPREPAYMENTCURVE = "MHP";
    static const String* MINIMUMDENOMINATION = "MINDNOM";
    static const String* MINIMUMINCREMENT = "MININCR";
    static const String* MINIMUMQUANTITY = "MINQTY";
    static const String* MONTHLYPREPAYMENTRATE = "MPR";
    static const String* PAYMENTFREQUENCYCALENDAR = "PAYFREQ";
    static const String* NUMBEROFPIECES = "PIECES";
    static const String* POOLSMAXIMUM = "PMAX";
    static const String* POOLSMINIMUM = "PMIN";
    static const String* PERCENTOFPROSPECTUSPREPAYMENTCURVE = "PPC";
    static const String* POOLSPERLOT = "PPL";
    static const String* POOLSPERMILLION = "PPM";
    static const String* POOLSPERTRADE = "PPT";
    static const String* PRICERANGE = "PRICE";
    static const String* PRICINGFREQUENCY = "PRICEFREQ";
    static const String* PRODUCTIONYEAR = "PROD";
    static const String* CALLPROTECTION = "PROTECT";
    static const String* PERCENTOFBMAPREPAYMENTCURVE = "PSA";
    static const String* PURPOSE = "PURPOSE";
    static const String* BENCHMARKPRICESOURCE = "PXSOURCE";
    static const String* RATINGSOURCEANDRANGE = "RATING";
    static const String* TYPEOFREDEMPTIONVALUESARE = "REDEMPTION";
    static const String* RESTRICTED = "RESTRICTED";
    static const String* MARKETSECTOR = "SECTOR";
    static const String* SECURITYTYPEINCLUDEDOREXCLUDED = "SECTYPE";
    static const String* SINGLEMONTHLYMORTALITY = "SMM";
    static const String* STRUCTURE = "STRUCT";
    static const String* SUBSTITUTIONSFREQUENCYREPO = "SUBSFREQ";
    static const String* SUBSTITUTIONSLEFTREPO = "SUBSLEFT";
    static const String* FREEFORMTEXT = "TEXT";
    static const String* TRADEVARIANCEVALUEINPERCENTMAXIMUMOVERORUNDERALLOCATIONALLOWED = "TRDVAR";
    static const String* WEIGHTEDAVERAGECOUPON = "WAC";
    static const String* WEIGHTEDAVERAGELIFECOUPON = "WAL";
    static const String* WEIGHTEDAVERAGELOANAGE = "WALA";
    static const String* WEIGHTEDAVERAGEMATURITY = "WAM";
    static const String* WHOLEPOOL = "WHOLE";
    static const String* YIELDRANGE = "YIELD";
    StipulationType() : StringField(233) {}
    StipulationType(String* data) : StringField(233, data) {}
  };

  public __gc class StipulationValue : public StringField
  {
  public:
    static const int FIELD = 234;
    StipulationValue() : StringField(234) {}
    StipulationValue(String* data) : StringField(234, data) {}
  };

  public __gc class YieldType : public StringField
  {
  public:
    static const int FIELD = 235;
    static const String* AFTERTAXYIELD = "AFTERTAX";
    static const String* ANNUALYIELD = "ANNUAL";
    static const String* YIELDATISSUE = "ATISSUE";
    static const String* YIELDTOAVGMATURITY = "AVGMATURITY";
    static const String* BOOKYIELD = "BOOK";
    static const String* YIELDTONEXTCALL = "CALL";
    static const String* YIELDCHANGESINCECLOSE = "CHANGE";
    static const String* CLOSINGYIELD = "CLOSE";
    static const String* COMPOUNDYIELD = "COMPOUND";
    static const String* CURRENTYIELD = "CURRENT";
    static const String* GVNTEQUIVALENTYIELD = "GOVTEQUIV";
    static const String* TRUEGROSSYIELD = "GROSS";
    static const String* YIELDINFLATIONASSUMPTION = "INFLATION";
    static const String* INVFLOATERBONDYIELD = "INVERSEFLOATER";
    static const String* MOSTRECENTCLOSINGYIELD = "LASTCLOSE";
    static const String* CLOSINGYIELDMOSTRECENTMONTH = "LASTMONTH";
    static const String* CLOSINGYIELDMOSTRECENTQUARTER = "LASTQUARTER";
    static const String* CLOSINGYIELDMOSTRECENTYEAR = "LASTYEAR";
    static const String* YIELDTOLONGESTAVERAGELIFE = "LONGAVGLIFE";
    static const String* MARKTOMARKETYIELD = "MARK";
    static const String* YIELDTOMATURITY = "MATURITY";
    static const String* YIELDTONEXTREFUNDSINKING = "NEXTREFUND";
    static const String* OPENAVERAGEYIELD = "OPENAVG";
    static const String* PREVIOUSCLOSEYIELD = "PREVCLOSE";
    static const String* PROCEEDSYIELD = "PROCEEDS";
    static const String* YIELDTONEXTPUT = "PUT";
    static const String* SEMI = "SEMIANNUAL";
    static const String* YIELDTOSHORTESTAVERAGELIFE = "SHORTAVGLIFE";
    static const String* SIMPLEYIELD = "SIMPLE";
    static const String* TAXEQUIVALENTYIELD = "TAXEQUIV";
    static const String* YIELDTOTENDERDATE = "TENDER";
    static const String* TRUEYIELD = "TRUE";
    static const String* YIELDVALUEOF132 = "VALUE1_32";
    static const String* YIELDTOWORSTCONVENTION = "WORST";
    YieldType() : StringField(235) {}
    YieldType(String* data) : StringField(235, data) {}
  };

  public __gc class Yield : public DoubleField
  {
  public:
    static const int FIELD = 236;
    Yield() : DoubleField(236) {}
    Yield(double data) : DoubleField(236, data) {}
    Yield(double data, int decimalPadding) : DoubleField(236, data, decimalPadding) {}
  };

  public __gc class TotalTakedown : public DoubleField
  {
  public:
    static const int FIELD = 237;
    TotalTakedown() : DoubleField(237) {}
    TotalTakedown(double data) : DoubleField(237, data) {}
    TotalTakedown(double data, int decimalPadding) : DoubleField(237, data, decimalPadding) {}
  };

  public __gc class Concession : public DoubleField
  {
  public:
    static const int FIELD = 238;
    Concession() : DoubleField(238) {}
    Concession(double data) : DoubleField(238, data) {}
    Concession(double data, int decimalPadding) : DoubleField(238, data, decimalPadding) {}
  };

  public __gc class RepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 239;
    RepoCollateralSecurityType() : IntField(239) {}
    RepoCollateralSecurityType(int data) : IntField(239, data) {}
  };

  public __gc class RedemptionDate : public StringField
  {
  public:
    static const int FIELD = 240;
    RedemptionDate() : StringField(240) {}
    RedemptionDate(String* data) : StringField(240, data) {}
  };

  public __gc class UnderlyingCouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 241;
    UnderlyingCouponPaymentDate() : StringField(241) {}
    UnderlyingCouponPaymentDate(String* data) : StringField(241, data) {}
  };

  public __gc class UnderlyingIssueDate : public StringField
  {
  public:
    static const int FIELD = 242;
    UnderlyingIssueDate() : StringField(242) {}
    UnderlyingIssueDate(String* data) : StringField(242, data) {}
  };

  public __gc class UnderlyingRepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 243;
    UnderlyingRepoCollateralSecurityType() : IntField(243) {}
    UnderlyingRepoCollateralSecurityType(int data) : IntField(243, data) {}
  };

  public __gc class UnderlyingRepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 244;
    UnderlyingRepurchaseTerm() : IntField(244) {}
    UnderlyingRepurchaseTerm(int data) : IntField(244, data) {}
  };

  public __gc class UnderlyingRepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 245;
    UnderlyingRepurchaseRate() : DoubleField(245) {}
    UnderlyingRepurchaseRate(double data) : DoubleField(245, data) {}
    UnderlyingRepurchaseRate(double data, int decimalPadding) : DoubleField(245, data, decimalPadding) {}
  };

  public __gc class UnderlyingFactor : public DoubleField
  {
  public:
    static const int FIELD = 246;
    UnderlyingFactor() : DoubleField(246) {}
    UnderlyingFactor(double data) : DoubleField(246, data) {}
    UnderlyingFactor(double data, int decimalPadding) : DoubleField(246, data, decimalPadding) {}
  };

  public __gc class UnderlyingRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 247;
    UnderlyingRedemptionDate() : StringField(247) {}
    UnderlyingRedemptionDate(String* data) : StringField(247, data) {}
  };

  public __gc class LegCouponPaymentDate : public StringField
  {
  public:
    static const int FIELD = 248;
    LegCouponPaymentDate() : StringField(248) {}
    LegCouponPaymentDate(String* data) : StringField(248, data) {}
  };

  public __gc class LegIssueDate : public StringField
  {
  public:
    static const int FIELD = 249;
    LegIssueDate() : StringField(249) {}
    LegIssueDate(String* data) : StringField(249, data) {}
  };

  public __gc class LegRepoCollateralSecurityType : public IntField
  {
  public:
    static const int FIELD = 250;
    LegRepoCollateralSecurityType() : IntField(250) {}
    LegRepoCollateralSecurityType(int data) : IntField(250, data) {}
  };

  public __gc class LegRepurchaseTerm : public IntField
  {
  public:
    static const int FIELD = 251;
    LegRepurchaseTerm() : IntField(251) {}
    LegRepurchaseTerm(int data) : IntField(251, data) {}
  };

  public __gc class LegRepurchaseRate : public DoubleField
  {
  public:
    static const int FIELD = 252;
    LegRepurchaseRate() : DoubleField(252) {}
    LegRepurchaseRate(double data) : DoubleField(252, data) {}
    LegRepurchaseRate(double data, int decimalPadding) : DoubleField(252, data, decimalPadding) {}
  };

  public __gc class LegFactor : public DoubleField
  {
  public:
    static const int FIELD = 253;
    LegFactor() : DoubleField(253) {}
    LegFactor(double data) : DoubleField(253, data) {}
    LegFactor(double data, int decimalPadding) : DoubleField(253, data, decimalPadding) {}
  };

  public __gc class LegRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 254;
    LegRedemptionDate() : StringField(254) {}
    LegRedemptionDate(String* data) : StringField(254, data) {}
  };

  public __gc class CreditRating : public StringField
  {
  public:
    static const int FIELD = 255;
    CreditRating() : StringField(255) {}
    CreditRating(String* data) : StringField(255, data) {}
  };

  public __gc class UnderlyingCreditRating : public StringField
  {
  public:
    static const int FIELD = 256;
    UnderlyingCreditRating() : StringField(256) {}
    UnderlyingCreditRating(String* data) : StringField(256, data) {}
  };

  public __gc class LegCreditRating : public StringField
  {
  public:
    static const int FIELD = 257;
    LegCreditRating() : StringField(257) {}
    LegCreditRating(String* data) : StringField(257, data) {}
  };

  public __gc class TradedFlatSwitch : public BooleanField
  {
  public:
    static const int FIELD = 258;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    TradedFlatSwitch() : BooleanField(258) {}
    TradedFlatSwitch(bool data) : BooleanField(258, data) {}
  };

  public __gc class BasisFeatureDate : public StringField
  {
  public:
    static const int FIELD = 259;
    BasisFeatureDate() : StringField(259) {}
    BasisFeatureDate(String* data) : StringField(259, data) {}
  };

  public __gc class BasisFeaturePrice : public DoubleField
  {
  public:
    static const int FIELD = 260;
    BasisFeaturePrice() : DoubleField(260) {}
    BasisFeaturePrice(double data) : DoubleField(260, data) {}
    BasisFeaturePrice(double data, int decimalPadding) : DoubleField(260, data, decimalPadding) {}
  };

  public __gc class MDReqID : public StringField
  {
  public:
    static const int FIELD = 262;
    MDReqID() : StringField(262) {}
    MDReqID(String* data) : StringField(262, data) {}
  };

  public __gc class SubscriptionRequestType : public CharField
  {
  public:
    static const int FIELD = 263;
    static const __wchar_t SNAPSHOT = '0';
    static const __wchar_t SNAPSHOTUPDATE = '1';
    static const __wchar_t UNSUBSCRIBE = '2';
    SubscriptionRequestType() : CharField(263) {}
    SubscriptionRequestType(__wchar_t data) : CharField(263, data) {}
  };

  public __gc class MarketDepth : public IntField
  {
  public:
    static const int FIELD = 264;
    MarketDepth() : IntField(264) {}
    MarketDepth(int data) : IntField(264, data) {}
  };

  public __gc class MDUpdateType : public IntField
  {
  public:
    static const int FIELD = 265;
    static const int FULL = 0;
    static const int INCREMENTAL = 1;
    MDUpdateType() : IntField(265) {}
    MDUpdateType(int data) : IntField(265, data) {}
  };

  public __gc class AggregatedBook : public BooleanField
  {
  public:
    static const int FIELD = 266;
    AggregatedBook() : BooleanField(266) {}
    AggregatedBook(bool data) : BooleanField(266, data) {}
  };

  public __gc class NoMDEntryTypes : public IntField
  {
  public:
    static const int FIELD = 267;
    NoMDEntryTypes() : IntField(267) {}
    NoMDEntryTypes(int data) : IntField(267, data) {}
  };

  public __gc class NoMDEntries : public IntField
  {
  public:
    static const int FIELD = 268;
    NoMDEntries() : IntField(268) {}
    NoMDEntries(int data) : IntField(268, data) {}
  };

  public __gc class MDEntryType : public CharField
  {
  public:
    static const int FIELD = 269;
    static const __wchar_t BID = '0';
    static const __wchar_t OFFER = '1';
    static const __wchar_t TRADE = '2';
    static const __wchar_t INDEXVALUE = '3';
    static const __wchar_t OPENING = '4';
    static const __wchar_t CLOSING = '5';
    static const __wchar_t SETTLEMENT = '6';
    static const __wchar_t TRADINGHIGH = '7';
    static const __wchar_t TRADINGLOW = '8';
    static const __wchar_t TRADINGVWAP = '9';
    static const __wchar_t IMBALANCE = 'A';
    static const __wchar_t TRADEVOLUME = 'B';
    static const __wchar_t OPENINTEREST = 'C';
    MDEntryType() : CharField(269) {}
    MDEntryType(__wchar_t data) : CharField(269, data) {}
  };

  public __gc class MDEntryPx : public DoubleField
  {
  public:
    static const int FIELD = 270;
    MDEntryPx() : DoubleField(270) {}
    MDEntryPx(double data) : DoubleField(270, data) {}
    MDEntryPx(double data, int decimalPadding) : DoubleField(270, data, decimalPadding) {}
  };

  public __gc class MDEntrySize : public DoubleField
  {
  public:
    static const int FIELD = 271;
    MDEntrySize() : DoubleField(271) {}
    MDEntrySize(double data) : DoubleField(271, data) {}
    MDEntrySize(double data, int decimalPadding) : DoubleField(271, data, decimalPadding) {}
  };

  public __gc class MDEntryDate : public UtcDateOnlyField
  {
  public:
    static const int FIELD = 272;
    MDEntryDate() : UtcDateOnlyField(272) {}
    MDEntryDate(DateTime data) : UtcDateOnlyField(272, data) {}
  };

  public __gc class MDEntryTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 273;
    MDEntryTime() : UtcTimeOnlyField(273) {}
    MDEntryTime(DateTime data) : UtcTimeOnlyField(273, data) {}
    MDEntryTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(273, data, showMilliseconds) {}
  };

  public __gc class TickDirection : public CharField
  {
  public:
    static const int FIELD = 274;
    static const __wchar_t PLUS = '0';
    static const __wchar_t ZEROPLUS = '1';
    static const __wchar_t MINUS = '2';
    static const __wchar_t ZEROMINUS = '3';
    TickDirection() : CharField(274) {}
    TickDirection(__wchar_t data) : CharField(274, data) {}
  };

  public __gc class MDMkt : public StringField
  {
  public:
    static const int FIELD = 275;
    MDMkt() : StringField(275) {}
    MDMkt(String* data) : StringField(275, data) {}
  };

  public __gc class QuoteCondition : public StringField
  {
  public:
    static const int FIELD = 276;
    static const __wchar_t OPEN = 'A';
    static const __wchar_t CLOSED = 'B';
    static const __wchar_t EXCHBEST = 'C';
    static const __wchar_t CONSOLBEST = 'D';
    static const __wchar_t LOCKED = 'E';
    static const __wchar_t CROSSED = 'F';
    static const __wchar_t DEPTH = 'G';
    static const __wchar_t FAST = 'H';
    static const __wchar_t NONFIRM = 'I';
    QuoteCondition() : StringField(276) {}
    QuoteCondition(String* data) : StringField(276, data) {}
  };

  public __gc class TradeCondition : public StringField
  {
  public:
    static const int FIELD = 277;
    static const __wchar_t CASHMKT = 'A';
    static const __wchar_t AVGPX = 'B';
    static const __wchar_t CASHTRADE = 'C';
    static const __wchar_t NEXTDAY_D = 'D';
    static const __wchar_t OPENING = 'E';
    static const __wchar_t INTRADAY = 'F';
    static const __wchar_t RULE127 = 'G';
    static const __wchar_t RULE155 = 'H';
    static const __wchar_t SOLDLAST = 'I';
    static const __wchar_t NEXTDAY_J = 'J';
    static const __wchar_t OPENED = 'K';
    static const __wchar_t SELLER = 'L';
    static const __wchar_t SOLD = 'M';
    static const __wchar_t STOPPED = 'N';
    static const __wchar_t IMBALANCEMOREBUYERS = 'P';
    static const __wchar_t IMBALANCEMORESELLERS = 'Q';
    static const __wchar_t OPENINGPRICE = 'R';
    TradeCondition() : StringField(277) {}
    TradeCondition(String* data) : StringField(277, data) {}
  };

  public __gc class MDEntryID : public StringField
  {
  public:
    static const int FIELD = 278;
    MDEntryID() : StringField(278) {}
    MDEntryID(String* data) : StringField(278, data) {}
  };

  public __gc class MDUpdateAction : public CharField
  {
  public:
    static const int FIELD = 279;
    static const __wchar_t NEW = '0';
    static const __wchar_t CHANGE = '1';
    static const __wchar_t DELETE = '2';
    MDUpdateAction() : CharField(279) {}
    MDUpdateAction(__wchar_t data) : CharField(279, data) {}
  };

  public __gc class MDEntryRefID : public StringField
  {
  public:
    static const int FIELD = 280;
    MDEntryRefID() : StringField(280) {}
    MDEntryRefID(String* data) : StringField(280, data) {}
  };

  public __gc class MDReqRejReason : public CharField
  {
  public:
    static const int FIELD = 281;
    static const __wchar_t UNKNOWNSYM = '0';
    static const __wchar_t DUPID = '1';
    static const __wchar_t INSBAND = '2';
    static const __wchar_t INSPERM = '3';
    static const __wchar_t UNSUPPSUB = '4';
    static const __wchar_t UNSUPPMKTDEPTH = '5';
    static const __wchar_t UNSUPPMDUPDATE = '6';
    static const __wchar_t UNSUPPAGGBK = '7';
    static const __wchar_t UNSUPPENTRY = '8';
    static const __wchar_t UNSUPPTRDSESSIONID = '9';
    static const __wchar_t UNSUPPSCOPE = 'A';
    static const __wchar_t UNSUPPPOSITIONEFFECTSETTLEFLAG = 'B';
    static const __wchar_t UNSUPPMDIMPLICITDELETE = 'C';
    MDReqRejReason() : CharField(281) {}
    MDReqRejReason(__wchar_t data) : CharField(281, data) {}
  };

  public __gc class MDEntryOriginator : public StringField
  {
  public:
    static const int FIELD = 282;
    MDEntryOriginator() : StringField(282) {}
    MDEntryOriginator(String* data) : StringField(282, data) {}
  };

  public __gc class LocationID : public StringField
  {
  public:
    static const int FIELD = 283;
    LocationID() : StringField(283) {}
    LocationID(String* data) : StringField(283, data) {}
  };

  public __gc class DeskID : public StringField
  {
  public:
    static const int FIELD = 284;
    DeskID() : StringField(284) {}
    DeskID(String* data) : StringField(284, data) {}
  };

  public __gc class DeleteReason : public CharField
  {
  public:
    static const int FIELD = 285;
    static const __wchar_t CANCELTRADEBUST = '0';
    static const __wchar_t ERROR = '1';
    DeleteReason() : CharField(285) {}
    DeleteReason(__wchar_t data) : CharField(285, data) {}
  };

  public __gc class OpenCloseSettlFlag : public StringField
  {
  public:
    static const int FIELD = 286;
    static const __wchar_t DAILYOPEN = '0';
    static const __wchar_t SESSIONOPEN = '1';
    static const __wchar_t DELIVERYSETTLEMENT = '2';
    static const __wchar_t EXPECTEDENTRY = '3';
    static const __wchar_t ENTRYFROMPREVBUSINESSDAY = '4';
    static const __wchar_t THEORETICALPRICE = '5';
    OpenCloseSettlFlag() : StringField(286) {}
    OpenCloseSettlFlag(String* data) : StringField(286, data) {}
  };

  public __gc class SellerDays : public IntField
  {
  public:
    static const int FIELD = 287;
    SellerDays() : IntField(287) {}
    SellerDays(int data) : IntField(287, data) {}
  };

  public __gc class MDEntryBuyer : public StringField
  {
  public:
    static const int FIELD = 288;
    MDEntryBuyer() : StringField(288) {}
    MDEntryBuyer(String* data) : StringField(288, data) {}
  };

  public __gc class MDEntrySeller : public StringField
  {
  public:
    static const int FIELD = 289;
    MDEntrySeller() : StringField(289) {}
    MDEntrySeller(String* data) : StringField(289, data) {}
  };

  public __gc class MDEntryPositionNo : public IntField
  {
  public:
    static const int FIELD = 290;
    MDEntryPositionNo() : IntField(290) {}
    MDEntryPositionNo(int data) : IntField(290, data) {}
  };

  public __gc class FinancialStatus : public StringField
  {
  public:
    static const int FIELD = 291;
    static const __wchar_t BANKRUPT = '1';
    static const __wchar_t PENDINGDELISTING = '2';
    FinancialStatus() : StringField(291) {}
    FinancialStatus(String* data) : StringField(291, data) {}
  };

  public __gc class CorporateAction : public StringField
  {
  public:
    static const int FIELD = 292;
    static const __wchar_t EXDIVIDEND = 'A';
    static const __wchar_t EXDIST = 'B';
    static const __wchar_t EXRIGHTS = 'C';
    static const __wchar_t NEW = 'D';
    static const __wchar_t EXINTEREST = 'E';
    CorporateAction() : StringField(292) {}
    CorporateAction(String* data) : StringField(292, data) {}
  };

  public __gc class DefBidSize : public DoubleField
  {
  public:
    static const int FIELD = 293;
    DefBidSize() : DoubleField(293) {}
    DefBidSize(double data) : DoubleField(293, data) {}
    DefBidSize(double data, int decimalPadding) : DoubleField(293, data, decimalPadding) {}
  };

  public __gc class DefOfferSize : public DoubleField
  {
  public:
    static const int FIELD = 294;
    DefOfferSize() : DoubleField(294) {}
    DefOfferSize(double data) : DoubleField(294, data) {}
    DefOfferSize(double data, int decimalPadding) : DoubleField(294, data, decimalPadding) {}
  };

  public __gc class NoQuoteEntries : public IntField
  {
  public:
    static const int FIELD = 295;
    NoQuoteEntries() : IntField(295) {}
    NoQuoteEntries(int data) : IntField(295, data) {}
  };

  public __gc class NoQuoteSets : public IntField
  {
  public:
    static const int FIELD = 296;
    NoQuoteSets() : IntField(296) {}
    NoQuoteSets(int data) : IntField(296, data) {}
  };

  public __gc class QuoteStatus : public IntField
  {
  public:
    static const int FIELD = 297;
    static const int ACCPT = 0;
    static const int CXLSYM = 1;
    static const int PENDING = 10;
    static const int PASS = 11;
    static const int LOCKEDMARKETWARNING = 12;
    static const int CROSSMARKETWARNING = 13;
    static const int CANCELEDDUETOLOCKMARKET = 14;
    static const int CANCELEDDUETOCROSSMARKET = 15;
    static const int CXLSECTYPE = 2;
    static const int CXLUNDER = 3;
    static const int CXLALL = 4;
    static const int REJ = 5;
    static const int REMOVED = 6;
    static const int EXPIRED = 7;
    static const int QUERY = 8;
    static const int QUOTENOTFOUND = 9;
    QuoteStatus() : IntField(297) {}
    QuoteStatus(int data) : IntField(297, data) {}
  };

  public __gc class QuoteCancelType : public IntField
  {
  public:
    static const int FIELD = 298;
    static const int CXLSYM = 1;
    static const int CXLSECTYPE = 2;
    static const int CXLUNDER = 3;
    static const int CXLALL = 4;
    QuoteCancelType() : IntField(298) {}
    QuoteCancelType(int data) : IntField(298, data) {}
  };

  public __gc class QuoteEntryID : public StringField
  {
  public:
    static const int FIELD = 299;
    QuoteEntryID() : StringField(299) {}
    QuoteEntryID(String* data) : StringField(299, data) {}
  };

  public __gc class QuoteRejectReason : public IntField
  {
  public:
    static const int FIELD = 300;
    static const int UNKNSYM = 1;
    static const int EXCHCLSD = 2;
    static const int ORDEXLIM = 3;
    static const int TOOLATE = 4;
    static const int UNKNORD = 5;
    static const int DUPORD = 6;
    static const int INVSPREAD = 7;
    static const int INVPX = 8;
    static const int NOTAUTH = 9;
    static const int OTHER = 99;
    QuoteRejectReason() : IntField(300) {}
    QuoteRejectReason(int data) : IntField(300, data) {}
  };

  public __gc class QuoteResponseLevel : public IntField
  {
  public:
    static const int FIELD = 301;
    static const int NOACK = 0;
    static const int ACKNEG = 1;
    static const int ACKEACH = 2;
    QuoteResponseLevel() : IntField(301) {}
    QuoteResponseLevel(int data) : IntField(301, data) {}
  };

  public __gc class QuoteSetID : public StringField
  {
  public:
    static const int FIELD = 302;
    QuoteSetID() : StringField(302) {}
    QuoteSetID(String* data) : StringField(302, data) {}
  };

  public __gc class QuoteRequestType : public IntField
  {
  public:
    static const int FIELD = 303;
    static const int MAN = 1;
    static const int AUTO = 2;
    QuoteRequestType() : IntField(303) {}
    QuoteRequestType(int data) : IntField(303, data) {}
  };

  public __gc class TotNoQuoteEntries : public IntField
  {
  public:
    static const int FIELD = 304;
    TotNoQuoteEntries() : IntField(304) {}
    TotNoQuoteEntries(int data) : IntField(304, data) {}
  };

  public __gc class UnderlyingSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 305;
    UnderlyingSecurityIDSource() : StringField(305) {}
    UnderlyingSecurityIDSource(String* data) : StringField(305, data) {}
  };

  public __gc class UnderlyingIssuer : public StringField
  {
  public:
    static const int FIELD = 306;
    UnderlyingIssuer() : StringField(306) {}
    UnderlyingIssuer(String* data) : StringField(306, data) {}
  };

  public __gc class UnderlyingSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 307;
    UnderlyingSecurityDesc() : StringField(307) {}
    UnderlyingSecurityDesc(String* data) : StringField(307, data) {}
  };

  public __gc class UnderlyingSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 308;
    UnderlyingSecurityExchange() : StringField(308) {}
    UnderlyingSecurityExchange(String* data) : StringField(308, data) {}
  };

  public __gc class UnderlyingSecurityID : public StringField
  {
  public:
    static const int FIELD = 309;
    UnderlyingSecurityID() : StringField(309) {}
    UnderlyingSecurityID(String* data) : StringField(309, data) {}
  };

  public __gc class UnderlyingSecurityType : public StringField
  {
  public:
    static const int FIELD = 310;
    UnderlyingSecurityType() : StringField(310) {}
    UnderlyingSecurityType(String* data) : StringField(310, data) {}
  };

  public __gc class UnderlyingSymbol : public StringField
  {
  public:
    static const int FIELD = 311;
    UnderlyingSymbol() : StringField(311) {}
    UnderlyingSymbol(String* data) : StringField(311, data) {}
  };

  public __gc class UnderlyingSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 312;
    UnderlyingSymbolSfx() : StringField(312) {}
    UnderlyingSymbolSfx(String* data) : StringField(312, data) {}
  };

  public __gc class UnderlyingMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 313;
    UnderlyingMaturityMonthYear() : StringField(313) {}
    UnderlyingMaturityMonthYear(String* data) : StringField(313, data) {}
  };

  public __gc class UnderlyingMaturityDay : public StringField
  {
  public:
    static const int FIELD = 314;
    UnderlyingMaturityDay() : StringField(314) {}
    UnderlyingMaturityDay(String* data) : StringField(314, data) {}
  };

  public __gc class UnderlyingPutOrCall : public IntField
  {
  public:
    static const int FIELD = 315;
    UnderlyingPutOrCall() : IntField(315) {}
    UnderlyingPutOrCall(int data) : IntField(315, data) {}
  };

  public __gc class UnderlyingStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 316;
    UnderlyingStrikePrice() : DoubleField(316) {}
    UnderlyingStrikePrice(double data) : DoubleField(316, data) {}
    UnderlyingStrikePrice(double data, int decimalPadding) : DoubleField(316, data, decimalPadding) {}
  };

  public __gc class UnderlyingOptAttribute : public CharField
  {
  public:
    static const int FIELD = 317;
    UnderlyingOptAttribute() : CharField(317) {}
    UnderlyingOptAttribute(__wchar_t data) : CharField(317, data) {}
  };

  public __gc class UnderlyingCurrency : public StringField
  {
  public:
    static const int FIELD = 318;
    UnderlyingCurrency() : StringField(318) {}
    UnderlyingCurrency(String* data) : StringField(318, data) {}
  };

  public __gc class RatioQty : public DoubleField
  {
  public:
    static const int FIELD = 319;
    RatioQty() : DoubleField(319) {}
    RatioQty(double data) : DoubleField(319, data) {}
    RatioQty(double data, int decimalPadding) : DoubleField(319, data, decimalPadding) {}
  };

  public __gc class SecurityReqID : public StringField
  {
  public:
    static const int FIELD = 320;
    SecurityReqID() : StringField(320) {}
    SecurityReqID(String* data) : StringField(320, data) {}
  };

  public __gc class SecurityRequestType : public IntField
  {
  public:
    static const int FIELD = 321;
    static const int REQSECID = 0;
    static const int REQSECIDPROV = 1;
    static const int REQSECLISTTYPES = 2;
    static const int REQSECLIST = 3;
    SecurityRequestType() : IntField(321) {}
    SecurityRequestType(int data) : IntField(321, data) {}
  };

  public __gc class SecurityResponseID : public StringField
  {
  public:
    static const int FIELD = 322;
    SecurityResponseID() : StringField(322) {}
    SecurityResponseID(String* data) : StringField(322, data) {}
  };

  public __gc class SecurityResponseType : public IntField
  {
  public:
    static const int FIELD = 323;
    static const int ACCPTSECPROP = 1;
    static const int ACCPTSECPROPREV = 2;
    static const int SECLISTTYPESRET = 3;
    static const int SECLISTRET = 4;
    static const int REJSECPROP = 5;
    static const int NOMATCH = 6;
    SecurityResponseType() : IntField(323) {}
    SecurityResponseType(int data) : IntField(323, data) {}
  };

  public __gc class SecurityStatusReqID : public StringField
  {
  public:
    static const int FIELD = 324;
    SecurityStatusReqID() : StringField(324) {}
    SecurityStatusReqID(String* data) : StringField(324, data) {}
  };

  public __gc class UnsolicitedIndicator : public BooleanField
  {
  public:
    static const int FIELD = 325;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    UnsolicitedIndicator() : BooleanField(325) {}
    UnsolicitedIndicator(bool data) : BooleanField(325, data) {}
  };

  public __gc class SecurityTradingStatus : public IntField
  {
  public:
    static const int FIELD = 326;
    static const int OPENDELAY = 1;
    static const int MKTONCLSIMBSELL = 10;
    static const int NA = 11;
    static const int NOMKTIMB = 12;
    static const int NOMKTONCLSIMB = 13;
    static const int ITSPREOPN = 14;
    static const int NEWPXIND = 15;
    static const int TRDDISTIME = 16;
    static const int READY = 17;
    static const int NOTAVAIL = 18;
    static const int NOTTRADED = 19;
    static const int TRDHALT = 2;
    static const int UNKNOWN = 20;
    static const int PRE_OPEN = 21;
    static const int OPENINGROTATION = 22;
    static const int FASTMARKET = 23;
    static const int RESUME = 3;
    static const int NOOPEN = 4;
    static const int PXIND = 5;
    static const int TRDRNGIND = 6;
    static const int MKTIMBBUY = 7;
    static const int MKTBALSELL = 8;
    static const int MKTONCLSIMBBUY = 9;
    SecurityTradingStatus() : IntField(326) {}
    SecurityTradingStatus(int data) : IntField(326, data) {}
  };

  public __gc class HaltReason : public CharField
  {
  public:
    static const int FIELD = 327;
    static const __wchar_t NEWSDISS = 'D';
    static const __wchar_t ORDINFL = 'E';
    static const __wchar_t ORDIMB = 'I';
    static const __wchar_t ADDINFO = 'M';
    static const __wchar_t NEWSPEND = 'P';
    static const __wchar_t EQUIPCHANGE = 'X';
    HaltReason() : CharField(327) {}
    HaltReason(__wchar_t data) : CharField(327, data) {}
  };

  public __gc class InViewOfCommon : public BooleanField
  {
  public:
    static const int FIELD = 328;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    InViewOfCommon() : BooleanField(328) {}
    InViewOfCommon(bool data) : BooleanField(328, data) {}
  };

  public __gc class DueToRelated : public BooleanField
  {
  public:
    static const int FIELD = 329;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    DueToRelated() : BooleanField(329) {}
    DueToRelated(bool data) : BooleanField(329, data) {}
  };

  public __gc class BuyVolume : public DoubleField
  {
  public:
    static const int FIELD = 330;
    BuyVolume() : DoubleField(330) {}
    BuyVolume(double data) : DoubleField(330, data) {}
    BuyVolume(double data, int decimalPadding) : DoubleField(330, data, decimalPadding) {}
  };

  public __gc class SellVolume : public DoubleField
  {
  public:
    static const int FIELD = 331;
    SellVolume() : DoubleField(331) {}
    SellVolume(double data) : DoubleField(331, data) {}
    SellVolume(double data, int decimalPadding) : DoubleField(331, data, decimalPadding) {}
  };

  public __gc class HighPx : public DoubleField
  {
  public:
    static const int FIELD = 332;
    HighPx() : DoubleField(332) {}
    HighPx(double data) : DoubleField(332, data) {}
    HighPx(double data, int decimalPadding) : DoubleField(332, data, decimalPadding) {}
  };

  public __gc class LowPx : public DoubleField
  {
  public:
    static const int FIELD = 333;
    LowPx() : DoubleField(333) {}
    LowPx(double data) : DoubleField(333, data) {}
    LowPx(double data, int decimalPadding) : DoubleField(333, data, decimalPadding) {}
  };

  public __gc class Adjustment : public IntField
  {
  public:
    static const int FIELD = 334;
    static const int CANCEL = 1;
    static const int ERROR = 2;
    static const int CORRECTION = 3;
    Adjustment() : IntField(334) {}
    Adjustment(int data) : IntField(334, data) {}
  };

  public __gc class TradSesReqID : public StringField
  {
  public:
    static const int FIELD = 335;
    TradSesReqID() : StringField(335) {}
    TradSesReqID(String* data) : StringField(335, data) {}
  };

  public __gc class TradingSessionID : public StringField
  {
  public:
    static const int FIELD = 336;
    TradingSessionID() : StringField(336) {}
    TradingSessionID(String* data) : StringField(336, data) {}
  };

  public __gc class ContraTrader : public StringField
  {
  public:
    static const int FIELD = 337;
    ContraTrader() : StringField(337) {}
    ContraTrader(String* data) : StringField(337, data) {}
  };

  public __gc class TradSesMethod : public IntField
  {
  public:
    static const int FIELD = 338;
    static const int ELECTRONIC = 1;
    static const int OPENOUTCRY = 2;
    static const int TWOPARTY = 3;
    TradSesMethod() : IntField(338) {}
    TradSesMethod(int data) : IntField(338, data) {}
  };

  public __gc class TradSesMode : public IntField
  {
  public:
    static const int FIELD = 339;
    static const int TESTING = 1;
    static const int SIMULATED = 2;
    static const int PRODUCTION = 3;
    TradSesMode() : IntField(339) {}
    TradSesMode(int data) : IntField(339, data) {}
  };

  public __gc class TradSesStatus : public IntField
  {
  public:
    static const int FIELD = 340;
    static const int UNKNOWN = 0;
    static const int HALTED = 1;
    static const int OPEN = 2;
    static const int CLOSED = 3;
    static const int PREOPEN = 4;
    static const int PRECLOSE = 5;
    static const int REQREJ = 6;
    TradSesStatus() : IntField(340) {}
    TradSesStatus(int data) : IntField(340, data) {}
  };

  public __gc class TradSesStartTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 341;
    TradSesStartTime() : UtcTimeStampField(341) {}
    TradSesStartTime(DateTime data) : UtcTimeStampField(341, data) {}
  };

  public __gc class TradSesOpenTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 342;
    TradSesOpenTime() : UtcTimeStampField(342) {}
    TradSesOpenTime(DateTime data) : UtcTimeStampField(342, data) {}
  };

  public __gc class TradSesPreCloseTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 343;
    TradSesPreCloseTime() : UtcTimeStampField(343) {}
    TradSesPreCloseTime(DateTime data) : UtcTimeStampField(343, data) {}
  };

  public __gc class TradSesCloseTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 344;
    TradSesCloseTime() : UtcTimeStampField(344) {}
    TradSesCloseTime(DateTime data) : UtcTimeStampField(344, data) {}
  };

  public __gc class TradSesEndTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 345;
    TradSesEndTime() : UtcTimeStampField(345) {}
    TradSesEndTime(DateTime data) : UtcTimeStampField(345, data) {}
  };

  public __gc class NumberOfOrders : public IntField
  {
  public:
    static const int FIELD = 346;
    NumberOfOrders() : IntField(346) {}
    NumberOfOrders(int data) : IntField(346, data) {}
  };

  public __gc class MessageEncoding : public StringField
  {
  public:
    static const int FIELD = 347;
    MessageEncoding() : StringField(347) {}
    MessageEncoding(String* data) : StringField(347, data) {}
  };

  public __gc class EncodedIssuerLen : public IntField
  {
  public:
    static const int FIELD = 348;
    EncodedIssuerLen() : IntField(348) {}
    EncodedIssuerLen(int data) : IntField(348, data) {}
  };

  public __gc class EncodedIssuer : public StringField
  {
  public:
    static const int FIELD = 349;
    EncodedIssuer() : StringField(349) {}
    EncodedIssuer(String* data) : StringField(349, data) {}
  };

  public __gc class EncodedSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 350;
    EncodedSecurityDescLen() : IntField(350) {}
    EncodedSecurityDescLen(int data) : IntField(350, data) {}
  };

  public __gc class EncodedSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 351;
    EncodedSecurityDesc() : StringField(351) {}
    EncodedSecurityDesc(String* data) : StringField(351, data) {}
  };

  public __gc class EncodedListExecInstLen : public IntField
  {
  public:
    static const int FIELD = 352;
    EncodedListExecInstLen() : IntField(352) {}
    EncodedListExecInstLen(int data) : IntField(352, data) {}
  };

  public __gc class EncodedListExecInst : public StringField
  {
  public:
    static const int FIELD = 353;
    EncodedListExecInst() : StringField(353) {}
    EncodedListExecInst(String* data) : StringField(353, data) {}
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

  public __gc class EncodedSubjectLen : public IntField
  {
  public:
    static const int FIELD = 356;
    EncodedSubjectLen() : IntField(356) {}
    EncodedSubjectLen(int data) : IntField(356, data) {}
  };

  public __gc class EncodedSubject : public StringField
  {
  public:
    static const int FIELD = 357;
    EncodedSubject() : StringField(357) {}
    EncodedSubject(String* data) : StringField(357, data) {}
  };

  public __gc class EncodedHeadlineLen : public IntField
  {
  public:
    static const int FIELD = 358;
    EncodedHeadlineLen() : IntField(358) {}
    EncodedHeadlineLen(int data) : IntField(358, data) {}
  };

  public __gc class EncodedHeadline : public StringField
  {
  public:
    static const int FIELD = 359;
    EncodedHeadline() : StringField(359) {}
    EncodedHeadline(String* data) : StringField(359, data) {}
  };

  public __gc class EncodedAllocTextLen : public IntField
  {
  public:
    static const int FIELD = 360;
    EncodedAllocTextLen() : IntField(360) {}
    EncodedAllocTextLen(int data) : IntField(360, data) {}
  };

  public __gc class EncodedAllocText : public StringField
  {
  public:
    static const int FIELD = 361;
    EncodedAllocText() : StringField(361) {}
    EncodedAllocText(String* data) : StringField(361, data) {}
  };

  public __gc class EncodedUnderlyingIssuerLen : public IntField
  {
  public:
    static const int FIELD = 362;
    EncodedUnderlyingIssuerLen() : IntField(362) {}
    EncodedUnderlyingIssuerLen(int data) : IntField(362, data) {}
  };

  public __gc class EncodedUnderlyingIssuer : public StringField
  {
  public:
    static const int FIELD = 363;
    EncodedUnderlyingIssuer() : StringField(363) {}
    EncodedUnderlyingIssuer(String* data) : StringField(363, data) {}
  };

  public __gc class EncodedUnderlyingSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 364;
    EncodedUnderlyingSecurityDescLen() : IntField(364) {}
    EncodedUnderlyingSecurityDescLen(int data) : IntField(364, data) {}
  };

  public __gc class EncodedUnderlyingSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 365;
    EncodedUnderlyingSecurityDesc() : StringField(365) {}
    EncodedUnderlyingSecurityDesc(String* data) : StringField(365, data) {}
  };

  public __gc class AllocPrice : public DoubleField
  {
  public:
    static const int FIELD = 366;
    AllocPrice() : DoubleField(366) {}
    AllocPrice(double data) : DoubleField(366, data) {}
    AllocPrice(double data, int decimalPadding) : DoubleField(366, data, decimalPadding) {}
  };

  public __gc class QuoteSetValidUntilTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 367;
    QuoteSetValidUntilTime() : UtcTimeStampField(367) {}
    QuoteSetValidUntilTime(DateTime data) : UtcTimeStampField(367, data) {}
  };

  public __gc class QuoteEntryRejectReason : public IntField
  {
  public:
    static const int FIELD = 368;
    static const int UNKNWNSYM = 1;
    static const int EXCHCLSD = 2;
    static const int ORDEXCLIM = 3;
    static const int TOOLATE = 4;
    static const int UNKNORD = 5;
    static const int DUPORD = 6;
    static const int INVBIDASK = 7;
    static const int INVPX = 8;
    static const int NOTAUTH = 9;
    static const int OTHER = 99;
    QuoteEntryRejectReason() : IntField(368) {}
    QuoteEntryRejectReason(int data) : IntField(368, data) {}
  };

  public __gc class LastMsgSeqNumProcessed : public IntField
  {
  public:
    static const int FIELD = 369;
    LastMsgSeqNumProcessed() : IntField(369) {}
    LastMsgSeqNumProcessed(int data) : IntField(369, data) {}
  };

  public __gc class OnBehalfOfSendingTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 370;
    OnBehalfOfSendingTime() : UtcTimeStampField(370) {}
    OnBehalfOfSendingTime(DateTime data) : UtcTimeStampField(370, data) {}
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
    static const int INVALIDTAGNUMBER = 0;
    static const int REQUIREDTAGMISSING = 1;
    static const int SENDINGTIMEACCURACYPROBLEM = 10;
    static const int INVALIDMSGTYPE = 11;
    static const int XMLVALIDATIONERROR = 12;
    static const int TAGAPPEARSMORETHANONCE = 13;
    static const int TAGSPECIFIEDOUTOFREQUIREDORDER = 14;
    static const int REPEATINGGROUPFIELDSOUTOFORDER = 15;
    static const int INCORRECTNUMINGROUPCOUNTFORREPEATINGGROUP = 16;
    static const int NONDATAVALUEINCLUDESFIELDDELIMITERSOHCHARACTER = 17;
    static const int TAGNOTDEFINEDFORTHISMESSAGETYPE = 2;
    static const int UNDEFINEDTAG = 3;
    static const int TAGSPECIFIEDWITHOUTAVALUE = 4;
    static const int VALUEISINCORRECTOUTOFRANGEFORTHISTAG = 5;
    static const int INCORRECTDATAFORMATFORVALUE = 6;
    static const int DECRYPTIONPROBLEM = 7;
    static const int SIGNATUREPROBLEM = 8;
    static const int COMPIDPROBLEM = 9;
    static const int OTHER = 99;
    SessionRejectReason() : IntField(373) {}
    SessionRejectReason(int data) : IntField(373, data) {}
  };

  public __gc class BidRequestTransType : public CharField
  {
  public:
    static const int FIELD = 374;
    static const __wchar_t CANCEL = 'C';
    static const __wchar_t NO = 'N';
    BidRequestTransType() : CharField(374) {}
    BidRequestTransType(__wchar_t data) : CharField(374, data) {}
  };

  public __gc class ContraBroker : public StringField
  {
  public:
    static const int FIELD = 375;
    ContraBroker() : StringField(375) {}
    ContraBroker(String* data) : StringField(375, data) {}
  };

  public __gc class ComplianceID : public StringField
  {
  public:
    static const int FIELD = 376;
    ComplianceID() : StringField(376) {}
    ComplianceID(String* data) : StringField(376, data) {}
  };

  public __gc class SolicitedFlag : public BooleanField
  {
  public:
    static const int FIELD = 377;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    SolicitedFlag() : BooleanField(377) {}
    SolicitedFlag(bool data) : BooleanField(377, data) {}
  };

  public __gc class ExecRestatementReason : public IntField
  {
  public:
    static const int FIELD = 378;
    static const int GTCORPACT = 0;
    static const int GTRENEW = 1;
    static const int WAREHOUSERECAP = 10;
    static const int VERBAL = 2;
    static const int REPX = 3;
    static const int BRKROPT = 4;
    static const int PARTDEC = 5;
    static const int CXLTRADINGHALT = 6;
    static const int CXLSYSTEMFAILURE = 7;
    static const int MRKTOPTION = 8;
    static const int CANCELEDNOTBEST = 9;
    static const int OTHER = 99;
    ExecRestatementReason() : IntField(378) {}
    ExecRestatementReason(int data) : IntField(378, data) {}
  };

  public __gc class BusinessRejectRefID : public StringField
  {
  public:
    static const int FIELD = 379;
    BusinessRejectRefID() : StringField(379) {}
    BusinessRejectRefID(String* data) : StringField(379, data) {}
  };

  public __gc class BusinessRejectReason : public IntField
  {
  public:
    static const int FIELD = 380;
    static const int OTHER = 0;
    static const int UNKNID = 1;
    static const int UNKNSEC = 2;
    static const int UNKNMSGTYPE = 3;
    static const int APPNA = 4;
    static const int CONDFLDMISS = 5;
    static const int NOTAUTH = 6;
    static const int NODELIVTOFIRM = 7;
    BusinessRejectReason() : IntField(380) {}
    BusinessRejectReason(int data) : IntField(380, data) {}
  };

  public __gc class GrossTradeAmt : public DoubleField
  {
  public:
    static const int FIELD = 381;
    GrossTradeAmt() : DoubleField(381) {}
    GrossTradeAmt(double data) : DoubleField(381, data) {}
    GrossTradeAmt(double data, int decimalPadding) : DoubleField(381, data, decimalPadding) {}
  };

  public __gc class NoContraBrokers : public IntField
  {
  public:
    static const int FIELD = 382;
    NoContraBrokers() : IntField(382) {}
    NoContraBrokers(int data) : IntField(382, data) {}
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

  public __gc class NoTradingSessions : public IntField
  {
  public:
    static const int FIELD = 386;
    NoTradingSessions() : IntField(386) {}
    NoTradingSessions(int data) : IntField(386, data) {}
  };

  public __gc class TotalVolumeTraded : public DoubleField
  {
  public:
    static const int FIELD = 387;
    TotalVolumeTraded() : DoubleField(387) {}
    TotalVolumeTraded(double data) : DoubleField(387, data) {}
    TotalVolumeTraded(double data, int decimalPadding) : DoubleField(387, data, decimalPadding) {}
  };

  public __gc class DiscretionInst : public CharField
  {
  public:
    static const int FIELD = 388;
    static const __wchar_t RELDISPPX = '0';
    static const __wchar_t RELMKTPX = '1';
    static const __wchar_t RELPRIMPX = '2';
    static const __wchar_t RELLOCPRIMPX = '3';
    static const __wchar_t RELMIDPX = '4';
    static const __wchar_t RELLSTPX = '5';
    static const __wchar_t RELVWAP = '6';
    DiscretionInst() : CharField(388) {}
    DiscretionInst(__wchar_t data) : CharField(388, data) {}
  };

  public __gc class DiscretionOffsetValue : public DoubleField
  {
  public:
    static const int FIELD = 389;
    DiscretionOffsetValue() : DoubleField(389) {}
    DiscretionOffsetValue(double data) : DoubleField(389, data) {}
    DiscretionOffsetValue(double data, int decimalPadding) : DoubleField(389, data, decimalPadding) {}
  };

  public __gc class BidID : public StringField
  {
  public:
    static const int FIELD = 390;
    BidID() : StringField(390) {}
    BidID(String* data) : StringField(390, data) {}
  };

  public __gc class ClientBidID : public StringField
  {
  public:
    static const int FIELD = 391;
    ClientBidID() : StringField(391) {}
    ClientBidID(String* data) : StringField(391, data) {}
  };

  public __gc class ListName : public StringField
  {
  public:
    static const int FIELD = 392;
    ListName() : StringField(392) {}
    ListName(String* data) : StringField(392, data) {}
  };

  public __gc class TotNoRelatedSym : public IntField
  {
  public:
    static const int FIELD = 393;
    TotNoRelatedSym() : IntField(393) {}
    TotNoRelatedSym(int data) : IntField(393, data) {}
  };

  public __gc class BidType : public IntField
  {
  public:
    static const int FIELD = 394;
    static const int NONDISC = 1;
    static const int DISC = 2;
    static const int NOBID = 3;
    BidType() : IntField(394) {}
    BidType(int data) : IntField(394, data) {}
  };

  public __gc class NumTickets : public IntField
  {
  public:
    static const int FIELD = 395;
    NumTickets() : IntField(395) {}
    NumTickets(int data) : IntField(395, data) {}
  };

  public __gc class SideValue1 : public DoubleField
  {
  public:
    static const int FIELD = 396;
    SideValue1() : DoubleField(396) {}
    SideValue1(double data) : DoubleField(396, data) {}
    SideValue1(double data, int decimalPadding) : DoubleField(396, data, decimalPadding) {}
  };

  public __gc class SideValue2 : public DoubleField
  {
  public:
    static const int FIELD = 397;
    SideValue2() : DoubleField(397) {}
    SideValue2(double data) : DoubleField(397, data) {}
    SideValue2(double data, int decimalPadding) : DoubleField(397, data, decimalPadding) {}
  };

  public __gc class NoBidDescriptors : public IntField
  {
  public:
    static const int FIELD = 398;
    NoBidDescriptors() : IntField(398) {}
    NoBidDescriptors(int data) : IntField(398, data) {}
  };

  public __gc class BidDescriptorType : public IntField
  {
  public:
    static const int FIELD = 399;
    static const int SECTOR = 1;
    static const int COUNTRY = 2;
    static const int INDEX = 3;
    BidDescriptorType() : IntField(399) {}
    BidDescriptorType(int data) : IntField(399, data) {}
  };

  public __gc class BidDescriptor : public StringField
  {
  public:
    static const int FIELD = 400;
    BidDescriptor() : StringField(400) {}
    BidDescriptor(String* data) : StringField(400, data) {}
  };

  public __gc class SideValueInd : public IntField
  {
  public:
    static const int FIELD = 401;
    static const int SIDEVALUE1 = 1;
    static const int SIDEVALUE2 = 2;
    SideValueInd() : IntField(401) {}
    SideValueInd(int data) : IntField(401, data) {}
  };

  public __gc class LiquidityPctLow : public DoubleField
  {
  public:
    static const int FIELD = 402;
    LiquidityPctLow() : DoubleField(402) {}
    LiquidityPctLow(double data) : DoubleField(402, data) {}
    LiquidityPctLow(double data, int decimalPadding) : DoubleField(402, data, decimalPadding) {}
  };

  public __gc class LiquidityPctHigh : public DoubleField
  {
  public:
    static const int FIELD = 403;
    LiquidityPctHigh() : DoubleField(403) {}
    LiquidityPctHigh(double data) : DoubleField(403, data) {}
    LiquidityPctHigh(double data, int decimalPadding) : DoubleField(403, data, decimalPadding) {}
  };

  public __gc class LiquidityValue : public DoubleField
  {
  public:
    static const int FIELD = 404;
    LiquidityValue() : DoubleField(404) {}
    LiquidityValue(double data) : DoubleField(404, data) {}
    LiquidityValue(double data, int decimalPadding) : DoubleField(404, data, decimalPadding) {}
  };

  public __gc class EFPTrackingError : public DoubleField
  {
  public:
    static const int FIELD = 405;
    EFPTrackingError() : DoubleField(405) {}
    EFPTrackingError(double data) : DoubleField(405, data) {}
    EFPTrackingError(double data, int decimalPadding) : DoubleField(405, data, decimalPadding) {}
  };

  public __gc class FairValue : public DoubleField
  {
  public:
    static const int FIELD = 406;
    FairValue() : DoubleField(406) {}
    FairValue(double data) : DoubleField(406, data) {}
    FairValue(double data, int decimalPadding) : DoubleField(406, data, decimalPadding) {}
  };

  public __gc class OutsideIndexPct : public DoubleField
  {
  public:
    static const int FIELD = 407;
    OutsideIndexPct() : DoubleField(407) {}
    OutsideIndexPct(double data) : DoubleField(407, data) {}
    OutsideIndexPct(double data, int decimalPadding) : DoubleField(407, data, decimalPadding) {}
  };

  public __gc class ValueOfFutures : public DoubleField
  {
  public:
    static const int FIELD = 408;
    ValueOfFutures() : DoubleField(408) {}
    ValueOfFutures(double data) : DoubleField(408, data) {}
    ValueOfFutures(double data, int decimalPadding) : DoubleField(408, data, decimalPadding) {}
  };

  public __gc class LiquidityIndType : public IntField
  {
  public:
    static const int FIELD = 409;
    static const int _5DAY = 1;
    static const int _20DAY = 2;
    static const int NORMAL = 3;
    static const int OTHER = 4;
    LiquidityIndType() : IntField(409) {}
    LiquidityIndType(int data) : IntField(409, data) {}
  };

  public __gc class WtAverageLiquidity : public DoubleField
  {
  public:
    static const int FIELD = 410;
    WtAverageLiquidity() : DoubleField(410) {}
    WtAverageLiquidity(double data) : DoubleField(410, data) {}
    WtAverageLiquidity(double data, int decimalPadding) : DoubleField(410, data, decimalPadding) {}
  };

  public __gc class ExchangeForPhysical : public BooleanField
  {
  public:
    static const int FIELD = 411;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    ExchangeForPhysical() : BooleanField(411) {}
    ExchangeForPhysical(bool data) : BooleanField(411, data) {}
  };

  public __gc class OutMainCntryUIndex : public DoubleField
  {
  public:
    static const int FIELD = 412;
    OutMainCntryUIndex() : DoubleField(412) {}
    OutMainCntryUIndex(double data) : DoubleField(412, data) {}
    OutMainCntryUIndex(double data, int decimalPadding) : DoubleField(412, data, decimalPadding) {}
  };

  public __gc class CrossPercent : public DoubleField
  {
  public:
    static const int FIELD = 413;
    CrossPercent() : DoubleField(413) {}
    CrossPercent(double data) : DoubleField(413, data) {}
    CrossPercent(double data, int decimalPadding) : DoubleField(413, data, decimalPadding) {}
  };

  public __gc class ProgRptReqs : public IntField
  {
  public:
    static const int FIELD = 414;
    static const int BUYSIDE = 1;
    static const int SELLSIDE = 2;
    static const int REALTIME = 3;
    ProgRptReqs() : IntField(414) {}
    ProgRptReqs(int data) : IntField(414, data) {}
  };

  public __gc class ProgPeriodInterval : public IntField
  {
  public:
    static const int FIELD = 415;
    ProgPeriodInterval() : IntField(415) {}
    ProgPeriodInterval(int data) : IntField(415, data) {}
  };

  public __gc class IncTaxInd : public IntField
  {
  public:
    static const int FIELD = 416;
    static const int NET = 1;
    static const int GROSS = 2;
    IncTaxInd() : IntField(416) {}
    IncTaxInd(int data) : IntField(416, data) {}
  };

  public __gc class NumBidders : public IntField
  {
  public:
    static const int FIELD = 417;
    NumBidders() : IntField(417) {}
    NumBidders(int data) : IntField(417, data) {}
  };

  public __gc class BidTradeType : public CharField
  {
  public:
    static const int FIELD = 418;
    static const __wchar_t AGENCY = 'A';
    static const __wchar_t VWAPGUARANTEE = 'G';
    static const __wchar_t GUARANTEEDCLOSE = 'J';
    static const __wchar_t RISKTRADE = 'R';
    BidTradeType() : CharField(418) {}
    BidTradeType(__wchar_t data) : CharField(418, data) {}
  };

  public __gc class BasisPxType : public CharField
  {
  public:
    static const int FIELD = 419;
    static const __wchar_t CLSPXMORN = '2';
    static const __wchar_t CLSPX = '3';
    static const __wchar_t CURRPX = '4';
    static const __wchar_t SQ = '5';
    static const __wchar_t VWAPDAY = '6';
    static const __wchar_t VWAPMORN = '7';
    static const __wchar_t VWAPAFT = '8';
    static const __wchar_t VWAPDAYXYORI = '9';
    static const __wchar_t VWAPMORNXYORI = 'A';
    static const __wchar_t VWAPAFTXYORI = 'B';
    static const __wchar_t STRIKE = 'C';
    static const __wchar_t OPEN = 'D';
    static const __wchar_t OTHERS = 'Z';
    BasisPxType() : CharField(419) {}
    BasisPxType(__wchar_t data) : CharField(419, data) {}
  };

  public __gc class NoBidComponents : public IntField
  {
  public:
    static const int FIELD = 420;
    NoBidComponents() : IntField(420) {}
    NoBidComponents(int data) : IntField(420, data) {}
  };

  public __gc class Country : public StringField
  {
  public:
    static const int FIELD = 421;
    Country() : StringField(421) {}
    Country(String* data) : StringField(421, data) {}
  };

  public __gc class TotNoStrikes : public IntField
  {
  public:
    static const int FIELD = 422;
    TotNoStrikes() : IntField(422) {}
    TotNoStrikes(int data) : IntField(422, data) {}
  };

  public __gc class PriceType : public IntField
  {
  public:
    static const int FIELD = 423;
    static const int PCT = 1;
    static const int FIXEDCABINETTRADEPRICE = 10;
    static const int VARIABLECABINETTRADEPRICE = 11;
    static const int CPS = 2;
    static const int ABS = 3;
    static const int DISCOUNT = 4;
    static const int PREMIUM = 5;
    static const int SPREAD = 6;
    static const int TEDPRICE = 7;
    static const int TEDYIELD = 8;
    static const int YIELD = 9;
    PriceType() : IntField(423) {}
    PriceType(int data) : IntField(423, data) {}
  };

  public __gc class DayOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 424;
    DayOrderQty() : DoubleField(424) {}
    DayOrderQty(double data) : DoubleField(424, data) {}
    DayOrderQty(double data, int decimalPadding) : DoubleField(424, data, decimalPadding) {}
  };

  public __gc class DayCumQty : public DoubleField
  {
  public:
    static const int FIELD = 425;
    DayCumQty() : DoubleField(425) {}
    DayCumQty(double data) : DoubleField(425, data) {}
    DayCumQty(double data, int decimalPadding) : DoubleField(425, data, decimalPadding) {}
  };

  public __gc class DayAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 426;
    DayAvgPx() : DoubleField(426) {}
    DayAvgPx(double data) : DoubleField(426, data) {}
    DayAvgPx(double data, int decimalPadding) : DoubleField(426, data, decimalPadding) {}
  };

  public __gc class GTBookingInst : public IntField
  {
  public:
    static const int FIELD = 427;
    static const int BOOKALL = 0;
    static const int ACCUMUNTILFILL = 1;
    static const int ACCUMUNTILNOTIFY = 2;
    GTBookingInst() : IntField(427) {}
    GTBookingInst(int data) : IntField(427, data) {}
  };

  public __gc class NoStrikes : public IntField
  {
  public:
    static const int FIELD = 428;
    NoStrikes() : IntField(428) {}
    NoStrikes(int data) : IntField(428, data) {}
  };

  public __gc class ListStatusType : public IntField
  {
  public:
    static const int FIELD = 429;
    static const int ACK = 1;
    static const int RESP = 2;
    static const int TIMED = 3;
    static const int EXECSTART = 4;
    static const int ALLDONE = 5;
    static const int ALERT = 6;
    ListStatusType() : IntField(429) {}
    ListStatusType(int data) : IntField(429, data) {}
  };

  public __gc class NetGrossInd : public IntField
  {
  public:
    static const int FIELD = 430;
    static const int NET = 1;
    static const int GROSS = 2;
    NetGrossInd() : IntField(430) {}
    NetGrossInd(int data) : IntField(430, data) {}
  };

  public __gc class ListOrderStatus : public IntField
  {
  public:
    static const int FIELD = 431;
    static const int INBIDPROC = 1;
    static const int RECVFOREXEC = 2;
    static const int EXEC = 3;
    static const int CXL = 4;
    static const int ALERT = 5;
    static const int ALLDONE = 6;
    static const int REJ = 7;
    ListOrderStatus() : IntField(431) {}
    ListOrderStatus(int data) : IntField(431, data) {}
  };

  public __gc class ExpireDate : public StringField
  {
  public:
    static const int FIELD = 432;
    ExpireDate() : StringField(432) {}
    ExpireDate(String* data) : StringField(432, data) {}
  };

  public __gc class ListExecInstType : public CharField
  {
  public:
    static const int FIELD = 433;
    static const __wchar_t IMMED = '1';
    static const __wchar_t WAIT = '2';
    static const __wchar_t EXCHCIVSELL = '3';
    static const __wchar_t EXCHCIVBUYTOP = '4';
    static const __wchar_t EXCHCIVBUYWD = '5';
    ListExecInstType() : CharField(433) {}
    ListExecInstType(__wchar_t data) : CharField(433, data) {}
  };

  public __gc class CxlRejResponseTo : public CharField
  {
  public:
    static const int FIELD = 434;
    static const __wchar_t ORDCXLREQ = '1';
    static const __wchar_t ORDCXLREPREQ = '2';
    CxlRejResponseTo() : CharField(434) {}
    CxlRejResponseTo(__wchar_t data) : CharField(434, data) {}
  };

  public __gc class UnderlyingCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 435;
    UnderlyingCouponRate() : DoubleField(435) {}
    UnderlyingCouponRate(double data) : DoubleField(435, data) {}
    UnderlyingCouponRate(double data, int decimalPadding) : DoubleField(435, data, decimalPadding) {}
  };

  public __gc class UnderlyingContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 436;
    UnderlyingContractMultiplier() : DoubleField(436) {}
    UnderlyingContractMultiplier(double data) : DoubleField(436, data) {}
    UnderlyingContractMultiplier(double data, int decimalPadding) : DoubleField(436, data, decimalPadding) {}
  };

  public __gc class ContraTradeQty : public DoubleField
  {
  public:
    static const int FIELD = 437;
    ContraTradeQty() : DoubleField(437) {}
    ContraTradeQty(double data) : DoubleField(437, data) {}
    ContraTradeQty(double data, int decimalPadding) : DoubleField(437, data, decimalPadding) {}
  };

  public __gc class ContraTradeTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 438;
    ContraTradeTime() : UtcTimeStampField(438) {}
    ContraTradeTime(DateTime data) : UtcTimeStampField(438, data) {}
  };

  public __gc class ClearingFirm : public StringField
  {
  public:
    static const int FIELD = 439;
    ClearingFirm() : StringField(439) {}
    ClearingFirm(String* data) : StringField(439, data) {}
  };

  public __gc class ClearingAccount : public StringField
  {
  public:
    static const int FIELD = 440;
    ClearingAccount() : StringField(440) {}
    ClearingAccount(String* data) : StringField(440, data) {}
  };

  public __gc class LiquidityNumSecurities : public IntField
  {
  public:
    static const int FIELD = 441;
    LiquidityNumSecurities() : IntField(441) {}
    LiquidityNumSecurities(int data) : IntField(441, data) {}
  };

  public __gc class MultiLegReportingType : public CharField
  {
  public:
    static const int FIELD = 442;
    static const __wchar_t SINGLE = '1';
    static const __wchar_t INDIVLEG = '2';
    static const __wchar_t MULTILEG = '3';
    MultiLegReportingType() : CharField(442) {}
    MultiLegReportingType(__wchar_t data) : CharField(442, data) {}
  };

  public __gc class StrikeTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 443;
    StrikeTime() : UtcTimeStampField(443) {}
    StrikeTime(DateTime data) : UtcTimeStampField(443, data) {}
  };

  public __gc class ListStatusText : public StringField
  {
  public:
    static const int FIELD = 444;
    ListStatusText() : StringField(444) {}
    ListStatusText(String* data) : StringField(444, data) {}
  };

  public __gc class EncodedListStatusTextLen : public IntField
  {
  public:
    static const int FIELD = 445;
    EncodedListStatusTextLen() : IntField(445) {}
    EncodedListStatusTextLen(int data) : IntField(445, data) {}
  };

  public __gc class EncodedListStatusText : public StringField
  {
  public:
    static const int FIELD = 446;
    EncodedListStatusText() : StringField(446) {}
    EncodedListStatusText(String* data) : StringField(446, data) {}
  };

  public __gc class PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 447;
    static const __wchar_t KOREANINVESTORID = '1';
    static const __wchar_t TAIWANESEQUALIFIED = '2';
    static const __wchar_t TAIWANESETRADINGACCT = '3';
    static const __wchar_t MCDNUMBER = '4';
    static const __wchar_t CHINESEBSHARE = '5';
    static const __wchar_t UKNATIONALINSPENNUMBER = '6';
    static const __wchar_t USSOCIALSECURITY = '7';
    static const __wchar_t USEMPLOYERIDNUMBER = '8';
    static const __wchar_t AUSTRALIANBUSINESSNUMBER = '9';
    static const __wchar_t AUSTRALIANTAXFILENUMBER = 'A';
    static const __wchar_t BIC = 'B';
    static const __wchar_t ACCPTMARKETPART = 'C';
    static const __wchar_t PROPCODE = 'D';
    static const __wchar_t ISOCODE = 'E';
    static const __wchar_t SETTLENTLOC = 'F';
    static const __wchar_t MIC = 'G';
    static const __wchar_t CSDPARTCODE = 'H';
    static const __wchar_t DIRECTEDDEFINEDISITC = 'I';
    PartyIDSource() : CharField(447) {}
    PartyIDSource(__wchar_t data) : CharField(447, data) {}
  };

  public __gc class PartyID : public StringField
  {
  public:
    static const int FIELD = 448;
    PartyID() : StringField(448) {}
    PartyID(String* data) : StringField(448, data) {}
  };

  public __gc class TotalVolumeTradedDate : public UtcDateOnlyField
  {
  public:
    static const int FIELD = 449;
    TotalVolumeTradedDate() : UtcDateOnlyField(449) {}
    TotalVolumeTradedDate(DateTime data) : UtcDateOnlyField(449, data) {}
  };

  public __gc class TotalVolumeTradedTime : public UtcTimeOnlyField
  {
  public:
    static const int FIELD = 450;
    TotalVolumeTradedTime() : UtcTimeOnlyField(450) {}
    TotalVolumeTradedTime(DateTime data) : UtcTimeOnlyField(450, data) {}
    TotalVolumeTradedTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(450, data, showMilliseconds) {}
  };

  public __gc class NetChgPrevDay : public DoubleField
  {
  public:
    static const int FIELD = 451;
    NetChgPrevDay() : DoubleField(451) {}
    NetChgPrevDay(double data) : DoubleField(451, data) {}
    NetChgPrevDay(double data, int decimalPadding) : DoubleField(451, data, decimalPadding) {}
  };

  public __gc class PartyRole : public IntField
  {
  public:
    static const int FIELD = 452;
    static const int EXECUTINGFIRM = 1;
    static const int SETTLEMENTLOCATION = 10;
    static const int INITIATINGTRADER = 11;
    static const int EXECUTINGTRADER = 12;
    static const int ORDERORIGINATOR = 13;
    static const int GIVEUPCLEARINGFIRM = 14;
    static const int CORRESPONDANTCLEARINGFIRM = 15;
    static const int EXECUTINGSYSTEM = 16;
    static const int CONTRAFIRM = 17;
    static const int CONTRACLEARINGFIRM = 18;
    static const int SPONSORINGFIRM = 19;
    static const int BROKEROFCREDIT = 2;
    static const int UNDRCONTRAFIRM = 20;
    static const int CLEARINGORGANIZATION = 21;
    static const int EXCHANGE = 22;
    static const int CUSTOMERACCOUNT = 24;
    static const int CORRESPONDENTCLEARINGORGANIZATION = 25;
    static const int CORRESPONDENTBROKER = 26;
    static const int BUYERSELLERRECEIVERDELIVERER = 27;
    static const int CUSTODIAN = 28;
    static const int INTERMEDIARY = 29;
    static const int CLIENTID = 3;
    static const int AGENT = 30;
    static const int SUBCUSTODIAN = 31;
    static const int BENEFICIARY = 32;
    static const int INTERESTEDPARTY = 33;
    static const int REGULATORYBODY = 34;
    static const int LIQUIDITYPROVIDER = 35;
    static const int ENTERINGTRADER = 36;
    static const int CONTRATRADER = 37;
    static const int POSITIONACCOUNT = 38;
    static const int ALLOCENTITY = 39;
    static const int CLEARINGFIRM = 4;
    static const int INVESTORID = 5;
    static const int INTRODUCINGFIRM = 6;
    static const int ENTERINGFIRM = 7;
    static const int LOCATELENDINGFIRM = 8;
    static const int FUNDMANAGER = 9;
    PartyRole() : IntField(452) {}
    PartyRole(int data) : IntField(452, data) {}
  };

  public __gc class NoPartyIDs : public IntField
  {
  public:
    static const int FIELD = 453;
    NoPartyIDs() : IntField(453) {}
    NoPartyIDs(int data) : IntField(453, data) {}
  };

  public __gc class NoSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 454;
    NoSecurityAltID() : IntField(454) {}
    NoSecurityAltID(int data) : IntField(454, data) {}
  };

  public __gc class SecurityAltID : public StringField
  {
  public:
    static const int FIELD = 455;
    SecurityAltID() : StringField(455) {}
    SecurityAltID(String* data) : StringField(455, data) {}
  };

  public __gc class SecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 456;
    SecurityAltIDSource() : StringField(456) {}
    SecurityAltIDSource(String* data) : StringField(456, data) {}
  };

  public __gc class NoUnderlyingSecurityAltID : public IntField
  {
  public:
    static const int FIELD = 457;
    NoUnderlyingSecurityAltID() : IntField(457) {}
    NoUnderlyingSecurityAltID(int data) : IntField(457, data) {}
  };

  public __gc class UnderlyingSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 458;
    UnderlyingSecurityAltID() : StringField(458) {}
    UnderlyingSecurityAltID(String* data) : StringField(458, data) {}
  };

  public __gc class UnderlyingSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 459;
    UnderlyingSecurityAltIDSource() : StringField(459) {}
    UnderlyingSecurityAltIDSource(String* data) : StringField(459, data) {}
  };

  public __gc class Product : public IntField
  {
  public:
    static const int FIELD = 460;
    static const int AGENCY = 1;
    static const int MORTGAGE = 10;
    static const int MUNICIPAL = 11;
    static const int OTHER = 12;
    static const int FINANCING = 13;
    static const int COMMODITY = 2;
    static const int CORPORATE = 3;
    static const int CURRENCY = 4;
    static const int EQUITY = 5;
    static const int GOVERNMENT = 6;
    static const int INDEX = 7;
    static const int LOAN = 8;
    static const int MONEYMARKET = 9;
    Product() : IntField(460) {}
    Product(int data) : IntField(460, data) {}
  };

  public __gc class CFICode : public StringField
  {
  public:
    static const int FIELD = 461;
    CFICode() : StringField(461) {}
    CFICode(String* data) : StringField(461, data) {}
  };

  public __gc class UnderlyingProduct : public IntField
  {
  public:
    static const int FIELD = 462;
    UnderlyingProduct() : IntField(462) {}
    UnderlyingProduct(int data) : IntField(462, data) {}
  };

  public __gc class UnderlyingCFICode : public StringField
  {
  public:
    static const int FIELD = 463;
    UnderlyingCFICode() : StringField(463) {}
    UnderlyingCFICode(String* data) : StringField(463, data) {}
  };

  public __gc class TestMessageIndicator : public BooleanField
  {
  public:
    static const int FIELD = 464;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    TestMessageIndicator() : BooleanField(464) {}
    TestMessageIndicator(bool data) : BooleanField(464, data) {}
  };

  public __gc class QuantityType : public IntField
  {
  public:
    static const int FIELD = 465;
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
    static const int FIELD = 466;
    BookingRefID() : StringField(466) {}
    BookingRefID(String* data) : StringField(466, data) {}
  };

  public __gc class IndividualAllocID : public StringField
  {
  public:
    static const int FIELD = 467;
    IndividualAllocID() : StringField(467) {}
    IndividualAllocID(String* data) : StringField(467, data) {}
  };

  public __gc class RoundingDirection : public CharField
  {
  public:
    static const int FIELD = 468;
    static const __wchar_t ROUNDNEAREST = '0';
    static const __wchar_t ROUNDDOWN = '1';
    static const __wchar_t ROUNDUP = '2';
    RoundingDirection() : CharField(468) {}
    RoundingDirection(__wchar_t data) : CharField(468, data) {}
  };

  public __gc class RoundingModulus : public DoubleField
  {
  public:
    static const int FIELD = 469;
    RoundingModulus() : DoubleField(469) {}
    RoundingModulus(double data) : DoubleField(469, data) {}
    RoundingModulus(double data, int decimalPadding) : DoubleField(469, data, decimalPadding) {}
  };

  public __gc class CountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 470;
    CountryOfIssue() : StringField(470) {}
    CountryOfIssue(String* data) : StringField(470, data) {}
  };

  public __gc class StateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 471;
    StateOrProvinceOfIssue() : StringField(471) {}
    StateOrProvinceOfIssue(String* data) : StringField(471, data) {}
  };

  public __gc class LocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 472;
    LocaleOfIssue() : StringField(472) {}
    LocaleOfIssue(String* data) : StringField(472, data) {}
  };

  public __gc class NoRegistDtls : public IntField
  {
  public:
    static const int FIELD = 473;
    NoRegistDtls() : IntField(473) {}
    NoRegistDtls(int data) : IntField(473, data) {}
  };

  public __gc class MailingDtls : public StringField
  {
  public:
    static const int FIELD = 474;
    MailingDtls() : StringField(474) {}
    MailingDtls(String* data) : StringField(474, data) {}
  };

  public __gc class InvestorCountryOfResidence : public StringField
  {
  public:
    static const int FIELD = 475;
    InvestorCountryOfResidence() : StringField(475) {}
    InvestorCountryOfResidence(String* data) : StringField(475, data) {}
  };

  public __gc class PaymentRef : public StringField
  {
  public:
    static const int FIELD = 476;
    PaymentRef() : StringField(476) {}
    PaymentRef(String* data) : StringField(476, data) {}
  };

  public __gc class DistribPaymentMethod : public IntField
  {
  public:
    static const int FIELD = 477;
    static const int CREST = 1;
    static const int BPAY = 10;
    static const int HIGHVALUECLEARINGSYSTEMHVACS = 11;
    static const int REINVESTINFUND = 12;
    static const int NSCC = 2;
    static const int EUROCLEAR = 3;
    static const int CLEARSTREAM = 4;
    static const int CHEQUE = 5;
    static const int TELEGRAPHICTRANSFER = 6;
    static const int FEDWIRE = 7;
    static const int DIRECTCREDITBECSBACS = 8;
    static const int ACHCREDIT = 9;
    DistribPaymentMethod() : IntField(477) {}
    DistribPaymentMethod(int data) : IntField(477, data) {}
  };

  public __gc class CashDistribCurr : public StringField
  {
  public:
    static const int FIELD = 478;
    CashDistribCurr() : StringField(478) {}
    CashDistribCurr(String* data) : StringField(478, data) {}
  };

  public __gc class CommCurrency : public StringField
  {
  public:
    static const int FIELD = 479;
    CommCurrency() : StringField(479) {}
    CommCurrency(String* data) : StringField(479, data) {}
  };

  public __gc class CancellationRights : public CharField
  {
  public:
    static const int FIELD = 480;
    static const __wchar_t NOWAIVER = 'M';
    static const __wchar_t NOEXECONLY = 'N';
    static const __wchar_t NOINSTIT = 'O';
    static const __wchar_t YES = 'Y';
    CancellationRights() : CharField(480) {}
    CancellationRights(__wchar_t data) : CharField(480, data) {}
  };

  public __gc class MoneyLaunderingStatus : public CharField
  {
  public:
    static const int FIELD = 481;
    static const __wchar_t EXBELOWLIM = '1';
    static const __wchar_t EXCLIENTMONEYTYPE = '2';
    static const __wchar_t EXAUTHCREDIT = '3';
    static const __wchar_t NOTCHECKED = 'N';
    static const __wchar_t PASSED = 'Y';
    MoneyLaunderingStatus() : CharField(481) {}
    MoneyLaunderingStatus(__wchar_t data) : CharField(481, data) {}
  };

  public __gc class MailingInst : public StringField
  {
  public:
    static const int FIELD = 482;
    MailingInst() : StringField(482) {}
    MailingInst(String* data) : StringField(482, data) {}
  };

  public __gc class TransBkdTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 483;
    TransBkdTime() : UtcTimeStampField(483) {}
    TransBkdTime(DateTime data) : UtcTimeStampField(483, data) {}
  };

  public __gc class ExecPriceType : public CharField
  {
  public:
    static const int FIELD = 484;
    static const __wchar_t BIDPRICE = 'B';
    static const __wchar_t CREATIONPRICE = 'C';
    static const __wchar_t CREATIONPRICEADJPCT = 'D';
    static const __wchar_t CREATIONPRICEADJAMT = 'E';
    static const __wchar_t OFFERPRICE = 'O';
    static const __wchar_t OFFERPRICEMINUSADJPCT = 'P';
    static const __wchar_t OFFERPRICEMINUSADJAMT = 'Q';
    static const __wchar_t SINGLEPRICE = 'S';
    ExecPriceType() : CharField(484) {}
    ExecPriceType(__wchar_t data) : CharField(484, data) {}
  };

  public __gc class ExecPriceAdjustment : public DoubleField
  {
  public:
    static const int FIELD = 485;
    ExecPriceAdjustment() : DoubleField(485) {}
    ExecPriceAdjustment(double data) : DoubleField(485, data) {}
    ExecPriceAdjustment(double data, int decimalPadding) : DoubleField(485, data, decimalPadding) {}
  };

  public __gc class DateOfBirth : public StringField
  {
  public:
    static const int FIELD = 486;
    DateOfBirth() : StringField(486) {}
    DateOfBirth(String* data) : StringField(486, data) {}
  };

  public __gc class TradeReportTransType : public IntField
  {
  public:
    static const int FIELD = 487;
    static const int NEW = 0;
    static const int CANCEL = 1;
    static const int REPLACE = 2;
    static const int RELEASE = 3;
    static const int REVERSE = 4;
    TradeReportTransType() : IntField(487) {}
    TradeReportTransType(int data) : IntField(487, data) {}
  };

  public __gc class CardHolderName : public StringField
  {
  public:
    static const int FIELD = 488;
    CardHolderName() : StringField(488) {}
    CardHolderName(String* data) : StringField(488, data) {}
  };

  public __gc class CardNumber : public StringField
  {
  public:
    static const int FIELD = 489;
    CardNumber() : StringField(489) {}
    CardNumber(String* data) : StringField(489, data) {}
  };

  public __gc class CardExpDate : public StringField
  {
  public:
    static const int FIELD = 490;
    CardExpDate() : StringField(490) {}
    CardExpDate(String* data) : StringField(490, data) {}
  };

  public __gc class CardIssNum : public StringField
  {
  public:
    static const int FIELD = 491;
    CardIssNum() : StringField(491) {}
    CardIssNum(String* data) : StringField(491, data) {}
  };

  public __gc class PaymentMethod : public IntField
  {
  public:
    static const int FIELD = 492;
    static const int CREST = 1;
    static const int DIRECTCREDITBECS = 10;
    static const int CREDITCARD = 11;
    static const int ACHDEBIT = 12;
    static const int ACHCREDIT = 13;
    static const int BPAY = 14;
    static const int HIGHVALUECLEARINGSYSTEMHVACS = 15;
    static const int NSCC = 2;
    static const int EUROCLEAR = 3;
    static const int CLEARSTREAM = 4;
    static const int CHEQUE = 5;
    static const int TELEGRAPHICTRANSFER = 6;
    static const int FEDWIRE = 7;
    static const int DEBITCARD = 8;
    static const int DIRECTDEBITBECS = 9;
    PaymentMethod() : IntField(492) {}
    PaymentMethod(int data) : IntField(492, data) {}
  };

  public __gc class RegistAcctType : public StringField
  {
  public:
    static const int FIELD = 493;
    RegistAcctType() : StringField(493) {}
    RegistAcctType(String* data) : StringField(493, data) {}
  };

  public __gc class Designation : public StringField
  {
  public:
    static const int FIELD = 494;
    Designation() : StringField(494) {}
    Designation(String* data) : StringField(494, data) {}
  };

  public __gc class TaxAdvantageType : public IntField
  {
  public:
    static const int FIELD = 495;
    static const int NONE = 0;
    static const int MAXIISAUK = 1;
    static const int EMPLOYEECURRENTYEARUS = 10;
    static const int EMPLOYERPRIORYEARUS = 11;
    static const int EMPLOYERCURRENTYEARUS = 12;
    static const int NONFUNDPROTOTYPEIRAUS = 13;
    static const int NONFUNDQUALIFIEDPLANUS = 14;
    static const int DEFINEDCONTRIBUTIONPLANUS = 15;
    static const int INDIVIDUALRETIREMENTACCOUNTUS = 16;
    static const int INDIVIDUALRETIREMENTACCOUNTROLLOVERUS = 17;
    static const int KEOGHUS = 18;
    static const int PROFITSHARINGPLANUS = 19;
    static const int TESSAUK = 2;
    static const int _401KUS = 20;
    static const int SELFDIRECTEDIRAUS = 21;
    static const int _403BUS = 22;
    static const int _457US = 23;
    static const int ROTHIRAFUNDPROTOTYPEUS = 24;
    static const int ROTHIRANONPROTOTYPEUS = 25;
    static const int ROTHCONVERSIONIRAFUNDPROTOTYPEUS = 26;
    static const int ROTHCONVERSIONIRANONPROTOTYPEUS = 27;
    static const int EDUCATIONIRAFUNDPROTOTYPEUS = 28;
    static const int EDUCATIONIRANONPROTOTYPEUS = 29;
    static const int MINICASHISAUK = 3;
    static const int MINISTOCKSANDSHARESISAUK = 4;
    static const int MINIINSURANCEISAUK = 5;
    static const int CURRENTYEARPAYMENTUS = 6;
    static const int PRIORYEARPAYMENTUS = 7;
    static const int ASSETTRANSFERUS = 8;
    static const int EMPLOYEEPRIORYEARUS = 9;
    static const int OTHER = 999;
    TaxAdvantageType() : IntField(495) {}
    TaxAdvantageType(int data) : IntField(495, data) {}
  };

  public __gc class RegistRejReasonText : public StringField
  {
  public:
    static const int FIELD = 496;
    RegistRejReasonText() : StringField(496) {}
    RegistRejReasonText(String* data) : StringField(496, data) {}
  };

  public __gc class FundRenewWaiv : public CharField
  {
  public:
    static const int FIELD = 497;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    FundRenewWaiv() : CharField(497) {}
    FundRenewWaiv(__wchar_t data) : CharField(497, data) {}
  };

  public __gc class CashDistribAgentName : public StringField
  {
  public:
    static const int FIELD = 498;
    CashDistribAgentName() : StringField(498) {}
    CashDistribAgentName(String* data) : StringField(498, data) {}
  };

  public __gc class CashDistribAgentCode : public StringField
  {
  public:
    static const int FIELD = 499;
    CashDistribAgentCode() : StringField(499) {}
    CashDistribAgentCode(String* data) : StringField(499, data) {}
  };

  public __gc class CashDistribAgentAcctNumber : public StringField
  {
  public:
    static const int FIELD = 500;
    CashDistribAgentAcctNumber() : StringField(500) {}
    CashDistribAgentAcctNumber(String* data) : StringField(500, data) {}
  };

  public __gc class CashDistribPayRef : public StringField
  {
  public:
    static const int FIELD = 501;
    CashDistribPayRef() : StringField(501) {}
    CashDistribPayRef(String* data) : StringField(501, data) {}
  };

  public __gc class CashDistribAgentAcctName : public StringField
  {
  public:
    static const int FIELD = 502;
    CashDistribAgentAcctName() : StringField(502) {}
    CashDistribAgentAcctName(String* data) : StringField(502, data) {}
  };

  public __gc class CardStartDate : public StringField
  {
  public:
    static const int FIELD = 503;
    CardStartDate() : StringField(503) {}
    CardStartDate(String* data) : StringField(503, data) {}
  };

  public __gc class PaymentDate : public StringField
  {
  public:
    static const int FIELD = 504;
    PaymentDate() : StringField(504) {}
    PaymentDate(String* data) : StringField(504, data) {}
  };

  public __gc class PaymentRemitterID : public StringField
  {
  public:
    static const int FIELD = 505;
    PaymentRemitterID() : StringField(505) {}
    PaymentRemitterID(String* data) : StringField(505, data) {}
  };

  public __gc class RegistStatus : public CharField
  {
  public:
    static const int FIELD = 506;
    static const __wchar_t ACCEPTED = 'A';
    static const __wchar_t HELD = 'H';
    static const __wchar_t REMINDER_IE_REGISTRATION_INSTRUCTIONS_ARE_STILL_OUTSTANDING = 'N';
    static const __wchar_t REJECTED = 'R';
    RegistStatus() : CharField(506) {}
    RegistStatus(__wchar_t data) : CharField(506, data) {}
  };

  public __gc class RegistRejReasonCode : public IntField
  {
  public:
    static const int FIELD = 507;
    static const int INVALIDACCOUNTTYPE = 1;
    static const int INVALIDINVESTORIDSOURCE = 10;
    static const int INVALIDDATEOFBIRTH = 11;
    static const int INVALIDINVESTORCOUNTRYOFRESIDENCE = 12;
    static const int INVALIDNODISTRIBINSTNS = 13;
    static const int INVALIDDISTRIBPERCENTAGE = 14;
    static const int INVALIDDISTRIBPAYMENTMETHOD = 15;
    static const int INVALIDCASHDISTRIBAGENTACCTNAME = 16;
    static const int INVALIDCASHDISTRIBAGENTCODE = 17;
    static const int INVALIDCASHDISTRIBAGENTACCTNUM = 18;
    static const int INVALIDTAXEXEMPTTYPE = 2;
    static const int INVALIDOWNERSHIPTYPE = 3;
    static const int INVALIDNOREGDETLS = 4;
    static const int INVALIDREGSEQNO = 5;
    static const int INVALIDREGDTLS = 6;
    static const int INVALIDMAILINGDTLS = 7;
    static const int INVALIDMAILINGINST = 8;
    static const int INVALIDINVESTORID = 9;
    static const int OTHER = 99;
    RegistRejReasonCode() : IntField(507) {}
    RegistRejReasonCode(int data) : IntField(507, data) {}
  };

  public __gc class RegistRefID : public StringField
  {
  public:
    static const int FIELD = 508;
    RegistRefID() : StringField(508) {}
    RegistRefID(String* data) : StringField(508, data) {}
  };

  public __gc class RegistDtls : public StringField
  {
  public:
    static const int FIELD = 509;
    RegistDtls() : StringField(509) {}
    RegistDtls(String* data) : StringField(509, data) {}
  };

  public __gc class NoDistribInsts : public IntField
  {
  public:
    static const int FIELD = 510;
    NoDistribInsts() : IntField(510) {}
    NoDistribInsts(int data) : IntField(510, data) {}
  };

  public __gc class RegistEmail : public StringField
  {
  public:
    static const int FIELD = 511;
    RegistEmail() : StringField(511) {}
    RegistEmail(String* data) : StringField(511, data) {}
  };

  public __gc class DistribPercentage : public DoubleField
  {
  public:
    static const int FIELD = 512;
    DistribPercentage() : DoubleField(512) {}
    DistribPercentage(double data) : DoubleField(512, data) {}
    DistribPercentage(double data, int decimalPadding) : DoubleField(512, data, decimalPadding) {}
  };

  public __gc class RegistID : public StringField
  {
  public:
    static const int FIELD = 513;
    RegistID() : StringField(513) {}
    RegistID(String* data) : StringField(513, data) {}
  };

  public __gc class RegistTransType : public CharField
  {
  public:
    static const int FIELD = 514;
    static const __wchar_t NEW = '0';
    static const __wchar_t REPLACE = '1';
    static const __wchar_t CANCEL = '2';
    RegistTransType() : CharField(514) {}
    RegistTransType(__wchar_t data) : CharField(514, data) {}
  };

  public __gc class ExecValuationPoint : public UtcTimeStampField
  {
  public:
    static const int FIELD = 515;
    ExecValuationPoint() : UtcTimeStampField(515) {}
    ExecValuationPoint(DateTime data) : UtcTimeStampField(515, data) {}
  };

  public __gc class OrderPercent : public DoubleField
  {
  public:
    static const int FIELD = 516;
    OrderPercent() : DoubleField(516) {}
    OrderPercent(double data) : DoubleField(516, data) {}
    OrderPercent(double data, int decimalPadding) : DoubleField(516, data, decimalPadding) {}
  };

  public __gc class OwnershipType : public CharField
  {
  public:
    static const int FIELD = 517;
    static const __wchar_t JOINT_TRUSTEES = '2';
    static const __wchar_t JOINT_INVESTORS = 'J';
    static const __wchar_t TENANTS_IN_COMMON = 'T';
    OwnershipType() : CharField(517) {}
    OwnershipType(__wchar_t data) : CharField(517, data) {}
  };

  public __gc class NoContAmts : public IntField
  {
  public:
    static const int FIELD = 518;
    NoContAmts() : IntField(518) {}
    NoContAmts(int data) : IntField(518, data) {}
  };

  public __gc class ContAmtType : public IntField
  {
  public:
    static const int FIELD = 519;
    static const int COMMISSIONAMT = 1;
    static const int EXITCHARGEPCT = 10;
    static const int FUNDBASEDRENEWALCOMM = 11;
    static const int PROJECTEDFUNDVALUE = 12;
    static const int FUNDBASEDRENEWALCOMMAMTORD = 13;
    static const int FUNDBASEDRENEWALCOMMAMTPROJ = 14;
    static const int NETSETTLEMENTAMOUNT = 15;
    static const int COMMISSIONPCT = 2;
    static const int INITIALCHARGEAMT = 3;
    static const int INITIALCHARGEPCT = 4;
    static const int DISCOUNTAMT = 5;
    static const int DISCOUNTPCT = 6;
    static const int DILUTIONLEVYAMT = 7;
    static const int DILUTIONLEVYPCT = 8;
    static const int EXITCHARGEAMT = 9;
    ContAmtType() : IntField(519) {}
    ContAmtType(int data) : IntField(519, data) {}
  };

  public __gc class ContAmtValue : public DoubleField
  {
  public:
    static const int FIELD = 520;
    ContAmtValue() : DoubleField(520) {}
    ContAmtValue(double data) : DoubleField(520, data) {}
    ContAmtValue(double data, int decimalPadding) : DoubleField(520, data, decimalPadding) {}
  };

  public __gc class ContAmtCurr : public StringField
  {
  public:
    static const int FIELD = 521;
    ContAmtCurr() : StringField(521) {}
    ContAmtCurr(String* data) : StringField(521, data) {}
  };

  public __gc class OwnerType : public IntField
  {
  public:
    static const int FIELD = 522;
    static const int INDIVINVESTOR = 1;
    static const int NETWORKINGSUBACCT = 10;
    static const int NON_PROFITORG = 11;
    static const int CORPBODY = 12;
    static const int NOMINEE = 13;
    static const int PUBLICCOMPANY = 2;
    static const int PRIVATECOMPANY = 3;
    static const int INDIVTRUSTEE = 4;
    static const int COMPANYTRUSTEE = 5;
    static const int PENSIONPLAN = 6;
    static const int CUSTODIANMINORSACT = 7;
    static const int TRUSTS = 8;
    static const int FIDUCIARIES = 9;
    OwnerType() : IntField(522) {}
    OwnerType(int data) : IntField(522, data) {}
  };

  public __gc class PartySubID : public StringField
  {
  public:
    static const int FIELD = 523;
    PartySubID() : StringField(523) {}
    PartySubID(String* data) : StringField(523, data) {}
  };

  public __gc class NestedPartyID : public StringField
  {
  public:
    static const int FIELD = 524;
    NestedPartyID() : StringField(524) {}
    NestedPartyID(String* data) : StringField(524, data) {}
  };

  public __gc class NestedPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 525;
    NestedPartyIDSource() : CharField(525) {}
    NestedPartyIDSource(__wchar_t data) : CharField(525, data) {}
  };

  public __gc class SecondaryClOrdID : public StringField
  {
  public:
    static const int FIELD = 526;
    SecondaryClOrdID() : StringField(526) {}
    SecondaryClOrdID(String* data) : StringField(526, data) {}
  };

  public __gc class SecondaryExecID : public StringField
  {
  public:
    static const int FIELD = 527;
    SecondaryExecID() : StringField(527) {}
    SecondaryExecID(String* data) : StringField(527, data) {}
  };

  public __gc class OrderCapacity : public CharField
  {
  public:
    static const int FIELD = 528;
    static const __wchar_t AGENCY = 'A';
    static const __wchar_t PROPRIETARY = 'G';
    static const __wchar_t INDIVIDUAL = 'I';
    static const __wchar_t PRINCIPAL = 'P';
    static const __wchar_t RISKLESSPRINCIPAL = 'R';
    static const __wchar_t AGENTOTHERMEMBER = 'W';
    OrderCapacity() : CharField(528) {}
    OrderCapacity(__wchar_t data) : CharField(528, data) {}
  };

  public __gc class OrderRestrictions : public StringField
  {
  public:
    static const int FIELD = 529;
    static const __wchar_t PROGRAMTRADE = '1';
    static const __wchar_t INDEXARBITRAGE = '2';
    static const __wchar_t NON_INDEXARBITRAGE = '3';
    static const __wchar_t COMPETINGMARKETMAKER = '4';
    static const __wchar_t ACTMM = '5';
    static const __wchar_t ACTMMDERIV = '6';
    static const __wchar_t FORENTITY = '7';
    static const __wchar_t EXMRKTPART = '8';
    static const __wchar_t EXINTMRKTLINK = '9';
    static const __wchar_t RISKARB = 'A';
    OrderRestrictions() : StringField(529) {}
    OrderRestrictions(String* data) : StringField(529, data) {}
  };

  public __gc class MassCancelRequestType : public CharField
  {
  public:
    static const int FIELD = 530;
    static const __wchar_t CXLORDERSSECURITY = '1';
    static const __wchar_t CXLORDERSUNDERLYINGSECURITY = '2';
    static const __wchar_t CXLORDERSPRODUCT = '3';
    static const __wchar_t CXLORDERSCFICODE = '4';
    static const __wchar_t CXLORDERSSECURITYTYPE = '5';
    static const __wchar_t CXLORDERSTRDSESSION = '6';
    static const __wchar_t CXLALLORDERS = '7';
    MassCancelRequestType() : CharField(530) {}
    MassCancelRequestType(__wchar_t data) : CharField(530, data) {}
  };

  public __gc class MassCancelResponse : public CharField
  {
  public:
    static const int FIELD = 531;
    static const __wchar_t CXLREQREJ = '0';
    static const __wchar_t CXLORDERSSECURITY = '1';
    static const __wchar_t CXLORDERSUNDERLYINGSECURITY = '2';
    static const __wchar_t CXLORDERSPRODUCT = '3';
    static const __wchar_t CXLORDERSCFICODE = '4';
    static const __wchar_t CXLORDERSSECURITYTYPE = '5';
    static const __wchar_t CXLORDERSTRDSESSION = '6';
    static const __wchar_t CXLALLORDERS = '7';
    MassCancelResponse() : CharField(531) {}
    MassCancelResponse(__wchar_t data) : CharField(531, data) {}
  };

  public __gc class MassCancelRejectReason : public CharField
  {
  public:
    static const int FIELD = 532;
    static const __wchar_t MASSCXLNOTSUPPORTED = '0';
    static const __wchar_t INVALIDSECURITY = '1';
    static const __wchar_t INVALIDUNDERLYING = '2';
    static const __wchar_t INVALIDPRODUCT = '3';
    static const __wchar_t INVALIDCFICODE = '4';
    static const __wchar_t INVALIDSECURITYTYPE = '5';
    static const __wchar_t INVALIDTRDSESSION = '6';
    static const __wchar_t OTHER = '99';
    MassCancelRejectReason() : CharField(532) {}
    MassCancelRejectReason(__wchar_t data) : CharField(532, data) {}
  };

  public __gc class TotalAffectedOrders : public IntField
  {
  public:
    static const int FIELD = 533;
    TotalAffectedOrders() : IntField(533) {}
    TotalAffectedOrders(int data) : IntField(533, data) {}
  };

  public __gc class NoAffectedOrders : public IntField
  {
  public:
    static const int FIELD = 534;
    NoAffectedOrders() : IntField(534) {}
    NoAffectedOrders(int data) : IntField(534, data) {}
  };

  public __gc class AffectedOrderID : public StringField
  {
  public:
    static const int FIELD = 535;
    AffectedOrderID() : StringField(535) {}
    AffectedOrderID(String* data) : StringField(535, data) {}
  };

  public __gc class AffectedSecondaryOrderID : public StringField
  {
  public:
    static const int FIELD = 536;
    AffectedSecondaryOrderID() : StringField(536) {}
    AffectedSecondaryOrderID(String* data) : StringField(536, data) {}
  };

  public __gc class QuoteType : public IntField
  {
  public:
    static const int FIELD = 537;
    static const int INDICATIVE = 0;
    static const int TRADEABLE = 1;
    static const int RESTRICTEDTRADEABLE = 2;
    static const int COUNTER = 3;
    QuoteType() : IntField(537) {}
    QuoteType(int data) : IntField(537, data) {}
  };

  public __gc class NestedPartyRole : public IntField
  {
  public:
    static const int FIELD = 538;
    NestedPartyRole() : IntField(538) {}
    NestedPartyRole(int data) : IntField(538, data) {}
  };

  public __gc class NoNestedPartyIDs : public IntField
  {
  public:
    static const int FIELD = 539;
    NoNestedPartyIDs() : IntField(539) {}
    NoNestedPartyIDs(int data) : IntField(539, data) {}
  };

  public __gc class TotalAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 540;
    TotalAccruedInterestAmt() : DoubleField(540) {}
    TotalAccruedInterestAmt(double data) : DoubleField(540, data) {}
    TotalAccruedInterestAmt(double data, int decimalPadding) : DoubleField(540, data, decimalPadding) {}
  };

  public __gc class MaturityDate : public StringField
  {
  public:
    static const int FIELD = 541;
    MaturityDate() : StringField(541) {}
    MaturityDate(String* data) : StringField(541, data) {}
  };

  public __gc class UnderlyingMaturityDate : public StringField
  {
  public:
    static const int FIELD = 542;
    UnderlyingMaturityDate() : StringField(542) {}
    UnderlyingMaturityDate(String* data) : StringField(542, data) {}
  };

  public __gc class InstrRegistry : public StringField
  {
  public:
    static const int FIELD = 543;
    static const String* CUSTODIAN = "BIC";
    static const String* COUNTRY = "ISO";
    static const String* PHYSICAL = "ZZ";
    InstrRegistry() : StringField(543) {}
    InstrRegistry(String* data) : StringField(543, data) {}
  };

  public __gc class CashMargin : public CharField
  {
  public:
    static const int FIELD = 544;
    static const __wchar_t CASH = '1';
    static const __wchar_t MARGINOPEN = '2';
    static const __wchar_t MARGINCLOSE = '3';
    CashMargin() : CharField(544) {}
    CashMargin(__wchar_t data) : CharField(544, data) {}
  };

  public __gc class NestedPartySubID : public StringField
  {
  public:
    static const int FIELD = 545;
    NestedPartySubID() : StringField(545) {}
    NestedPartySubID(String* data) : StringField(545, data) {}
  };

  public __gc class Scope : public StringField
  {
  public:
    static const int FIELD = 546;
    static const __wchar_t LOCALMARKET = '1';
    static const __wchar_t NATIONAL = '2';
    static const __wchar_t GLOBAL = '3';
    Scope() : StringField(546) {}
    Scope(String* data) : StringField(546, data) {}
  };

  public __gc class MDImplicitDelete : public BooleanField
  {
  public:
    static const int FIELD = 547;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    MDImplicitDelete() : BooleanField(547) {}
    MDImplicitDelete(bool data) : BooleanField(547, data) {}
  };

  public __gc class CrossID : public StringField
  {
  public:
    static const int FIELD = 548;
    CrossID() : StringField(548) {}
    CrossID(String* data) : StringField(548, data) {}
  };

  public __gc class CrossType : public IntField
  {
  public:
    static const int FIELD = 549;
    static const int CROSSAON = 1;
    static const int CROSSIOC = 2;
    static const int CROSSONESIDE = 3;
    static const int CROSSSAMEPRICE = 4;
    CrossType() : IntField(549) {}
    CrossType(int data) : IntField(549, data) {}
  };

  public __gc class CrossPrioritization : public IntField
  {
  public:
    static const int FIELD = 550;
    static const int NONE = 0;
    static const int BUY_SIDE_PRIORITIZED = 1;
    static const int SELL_SIDE_PRIORITIZED = 2;
    CrossPrioritization() : IntField(550) {}
    CrossPrioritization(int data) : IntField(550, data) {}
  };

  public __gc class OrigCrossID : public StringField
  {
  public:
    static const int FIELD = 551;
    OrigCrossID() : StringField(551) {}
    OrigCrossID(String* data) : StringField(551, data) {}
  };

  public __gc class NoSides : public IntField
  {
  public:
    static const int FIELD = 552;
    static const __wchar_t ONESIDE = '1';
    static const __wchar_t BOTHSIDES = '2';
    NoSides() : IntField(552) {}
    NoSides(int data) : IntField(552, data) {}
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

  public __gc class NoLegs : public IntField
  {
  public:
    static const int FIELD = 555;
    NoLegs() : IntField(555) {}
    NoLegs(int data) : IntField(555, data) {}
  };

  public __gc class LegCurrency : public StringField
  {
  public:
    static const int FIELD = 556;
    LegCurrency() : StringField(556) {}
    LegCurrency(String* data) : StringField(556, data) {}
  };

  public __gc class TotNoSecurityTypes : public IntField
  {
  public:
    static const int FIELD = 557;
    TotNoSecurityTypes() : IntField(557) {}
    TotNoSecurityTypes(int data) : IntField(557, data) {}
  };

  public __gc class NoSecurityTypes : public IntField
  {
  public:
    static const int FIELD = 558;
    NoSecurityTypes() : IntField(558) {}
    NoSecurityTypes(int data) : IntField(558, data) {}
  };

  public __gc class SecurityListRequestType : public IntField
  {
  public:
    static const int FIELD = 559;
    static const int SYMBOL = 0;
    static const int SECURITYTYPECFICODE = 1;
    static const int PRODUCT = 2;
    static const int TRADINGSESSIONID = 3;
    static const int ALLSECURITIES = 4;
    SecurityListRequestType() : IntField(559) {}
    SecurityListRequestType(int data) : IntField(559, data) {}
  };

  public __gc class SecurityRequestResult : public IntField
  {
  public:
    static const int FIELD = 560;
    static const int VALIDREQ = 0;
    static const int INVALIDREQ = 1;
    static const int NOINSTRUMENTSFOUND = 2;
    static const int NOTAUTHORIZED = 3;
    static const int INSTRUMENTUNAVAILABLE = 4;
    static const int NOTSUPPORTED = 5;
    SecurityRequestResult() : IntField(560) {}
    SecurityRequestResult(int data) : IntField(560, data) {}
  };

  public __gc class RoundLot : public DoubleField
  {
  public:
    static const int FIELD = 561;
    RoundLot() : DoubleField(561) {}
    RoundLot(double data) : DoubleField(561, data) {}
    RoundLot(double data, int decimalPadding) : DoubleField(561, data, decimalPadding) {}
  };

  public __gc class MinTradeVol : public DoubleField
  {
  public:
    static const int FIELD = 562;
    MinTradeVol() : DoubleField(562) {}
    MinTradeVol(double data) : DoubleField(562, data) {}
    MinTradeVol(double data, int decimalPadding) : DoubleField(562, data, decimalPadding) {}
  };

  public __gc class MultiLegRptTypeReq : public IntField
  {
  public:
    static const int FIELD = 563;
    static const int REPORT_BY_MULITLEG_SECURITY_ONLY = 0;
    static const int REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = 1;
    static const int REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = 2;
    MultiLegRptTypeReq() : IntField(563) {}
    MultiLegRptTypeReq(int data) : IntField(563, data) {}
  };

  public __gc class LegPositionEffect : public CharField
  {
  public:
    static const int FIELD = 564;
    LegPositionEffect() : CharField(564) {}
    LegPositionEffect(__wchar_t data) : CharField(564, data) {}
  };

  public __gc class LegCoveredOrUncovered : public IntField
  {
  public:
    static const int FIELD = 565;
    LegCoveredOrUncovered() : IntField(565) {}
    LegCoveredOrUncovered(int data) : IntField(565, data) {}
  };

  public __gc class LegPrice : public DoubleField
  {
  public:
    static const int FIELD = 566;
    LegPrice() : DoubleField(566) {}
    LegPrice(double data) : DoubleField(566, data) {}
    LegPrice(double data, int decimalPadding) : DoubleField(566, data, decimalPadding) {}
  };

  public __gc class TradSesStatusRejReason : public IntField
  {
  public:
    static const int FIELD = 567;
    static const int UNKNOWNTRADINGSESSIONID = 1;
    static const int OTHER = 99;
    TradSesStatusRejReason() : IntField(567) {}
    TradSesStatusRejReason(int data) : IntField(567, data) {}
  };

  public __gc class TradeRequestID : public StringField
  {
  public:
    static const int FIELD = 568;
    TradeRequestID() : StringField(568) {}
    TradeRequestID(String* data) : StringField(568, data) {}
  };

  public __gc class TradeRequestType : public IntField
  {
  public:
    static const int FIELD = 569;
    static const int ALLTRADES = 0;
    static const int MATCHEDTRADES = 1;
    static const int UNMATCHEDTRADES = 2;
    static const int UNREPORTEDTRADES = 3;
    static const int ADVISORIESMATCH = 4;
    TradeRequestType() : IntField(569) {}
    TradeRequestType(int data) : IntField(569, data) {}
  };

  public __gc class PreviouslyReported : public BooleanField
  {
  public:
    static const int FIELD = 570;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PreviouslyReported() : BooleanField(570) {}
    PreviouslyReported(bool data) : BooleanField(570, data) {}
  };

  public __gc class TradeReportID : public StringField
  {
  public:
    static const int FIELD = 571;
    TradeReportID() : StringField(571) {}
    TradeReportID(String* data) : StringField(571, data) {}
  };

  public __gc class TradeReportRefID : public StringField
  {
  public:
    static const int FIELD = 572;
    TradeReportRefID() : StringField(572) {}
    TradeReportRefID(String* data) : StringField(572, data) {}
  };

  public __gc class MatchStatus : public CharField
  {
  public:
    static const int FIELD = 573;
    static const __wchar_t COMPMATAFF = '0';
    static const __wchar_t UNCOMPUNMATUNAFF = '1';
    static const __wchar_t ADVALERT = '2';
    MatchStatus() : CharField(573) {}
    MatchStatus(__wchar_t data) : CharField(573, data) {}
  };

  public __gc class MatchType : public StringField
  {
  public:
    static const int FIELD = 574;
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSFOURBADGESANDEXECUTIONTIME = "A1";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSFOURBADGES = "A2";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSTWOBADGESANDEXECUTIONTIME = "A3";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSTWOBADGES = "A4";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORPLUSEXECUTIONTIME = "A5";
    static const String* NASDAQACTM1MATCH = "ACTM1";
    static const String* NASDAQACTM2MATCH = "ACTM2";
    static const String* NASDAQACTACCEPTEDTRADE = "ACTM3";
    static const String* NASDAQACTDEFAULTTRADE = "ACTM4";
    static const String* NASDAQACTDEFAULTAFTERM2 = "ACTM5";
    static const String* NASDAQACTM6MATCH = "ACTM6";
    static const String* NASDAQNONACT = "ACTMT";
    static const String* COMPAREDRECORDSRESULTINGFROMSTAMPEDADVISORIESORSPECIALISTACCEPTSPAIROFFS = "AQ";
    static const String* EXACTMATCHONTRADEDATESTOCKSYMBOLQUANTITYPRICETRADETYPEANDSPECIALTRADEINDICATORMINUSBADGESANDTIMES = "M1";
    static const String* SUMMARIZEDMATCHMINUSBADGESANDTIMES = "M2";
    static const String* OCSLOCKEDIN = "MT";
    static const String* SUMMARIZEDMATCHUSINGA1 = "S1";
    static const String* SUMMARIZEDMATCHUSINGA2 = "S2";
    static const String* SUMMARIZEDMATCHUSINGA3 = "S3";
    static const String* SUMMARIZEDMATCHUSINGA4 = "S4";
    static const String* SUMMARIZEDMATCHUSINGA5 = "S5";
    MatchType() : StringField(574) {}
    MatchType(String* data) : StringField(574, data) {}
  };

  public __gc class OddLot : public BooleanField
  {
  public:
    static const int FIELD = 575;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    OddLot() : BooleanField(575) {}
    OddLot(bool data) : BooleanField(575, data) {}
  };

  public __gc class NoClearingInstructions : public IntField
  {
  public:
    static const int FIELD = 576;
    NoClearingInstructions() : IntField(576) {}
    NoClearingInstructions(int data) : IntField(576, data) {}
  };

  public __gc class ClearingInstruction : public IntField
  {
  public:
    static const int FIELD = 577;
    static const int PROCESSNORMALLY = 0;
    static const int EXCLUDEFROMALLNETTING = 1;
    static const int AUTOMATICGIVEUPMODETRADEGIVEUPTOTHEGIVEUPDESTINATIONNUMBERSPECIFIED = 10;
    static const int QUALIFIEDSERVICEREPRESENTATIVEQSR = 11;
    static const int CUSTOMERTRADE = 12;
    static const int SELFCLEARING = 13;
    static const int BILATERALNETTINGONLY = 2;
    static const int EXCLEARING = 3;
    static const int SPECIALTRADE = 4;
    static const int MULTILATERALNETTING = 5;
    static const int CLEARAGAINSTCENTRALCOUNTERPARTY = 6;
    static const int EXCLUDEFROMCENTRALCOUNTERPARTY = 7;
    static const int MANUALMODEPREPOSTINGANDORPREGIVEUP = 8;
    static const int AUTOMATICPOSTINGMODETRADEPOSTINGTOTHEPOSITIONACCOUNTNUMBERSPECIFIED = 9;
    ClearingInstruction() : IntField(577) {}
    ClearingInstruction(int data) : IntField(577, data) {}
  };

  public __gc class TradeInputSource : public StringField
  {
  public:
    static const int FIELD = 578;
    TradeInputSource() : StringField(578) {}
    TradeInputSource(String* data) : StringField(578, data) {}
  };

  public __gc class TradeInputDevice : public StringField
  {
  public:
    static const int FIELD = 579;
    TradeInputDevice() : StringField(579) {}
    TradeInputDevice(String* data) : StringField(579, data) {}
  };

  public __gc class NoDates : public IntField
  {
  public:
    static const int FIELD = 580;
    NoDates() : IntField(580) {}
    NoDates(int data) : IntField(580, data) {}
  };

  public __gc class AccountType : public IntField
  {
  public:
    static const int FIELD = 581;
    static const int ACCOUNTCUSTOMER = 1;
    static const int ACCOUNTNONCUSTOMER = 2;
    static const int HOUSETRADER = 3;
    static const int FLOORTRADER = 4;
    static const int ACCOUNTNONCUSTOMERCROSS = 6;
    static const int HOUSETRADERCROSS = 7;
    static const int JOINTBOACCT = 8;
    AccountType() : IntField(581) {}
    AccountType(int data) : IntField(581, data) {}
  };

  public __gc class CustOrderCapacity : public IntField
  {
  public:
    static const int FIELD = 582;
    static const int MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = 1;
    static const int CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = 2;
    static const int MEMBER_TRADING_FOR_ANOTHER_MEMBER = 3;
    static const int ALL_OTHER = 4;
    CustOrderCapacity() : IntField(582) {}
    CustOrderCapacity(int data) : IntField(582, data) {}
  };

  public __gc class ClOrdLinkID : public StringField
  {
  public:
    static const int FIELD = 583;
    ClOrdLinkID() : StringField(583) {}
    ClOrdLinkID(String* data) : StringField(583, data) {}
  };

  public __gc class MassStatusReqID : public StringField
  {
  public:
    static const int FIELD = 584;
    MassStatusReqID() : StringField(584) {}
    MassStatusReqID(String* data) : StringField(584, data) {}
  };

  public __gc class MassStatusReqType : public IntField
  {
  public:
    static const int FIELD = 585;
    static const int STATUSSECURITY = 1;
    static const int STATUSUNDERLYINGSECURITY = 2;
    static const int STATUSPRODUCT = 3;
    static const int STATUSCFICODE = 4;
    static const int STATUSSECURITYTYPE = 5;
    static const int STATUSTRDSESSION = 6;
    static const int STATUSALLORDERS = 7;
    static const int STATUSPARTYID = 8;
    MassStatusReqType() : IntField(585) {}
    MassStatusReqType(int data) : IntField(585, data) {}
  };

  public __gc class OrigOrdModTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 586;
    OrigOrdModTime() : UtcTimeStampField(586) {}
    OrigOrdModTime(DateTime data) : UtcTimeStampField(586, data) {}
  };

  public __gc class LegSettlType : public CharField
  {
  public:
    static const int FIELD = 587;
    LegSettlType() : CharField(587) {}
    LegSettlType(__wchar_t data) : CharField(587, data) {}
  };

  public __gc class LegSettlDate : public StringField
  {
  public:
    static const int FIELD = 588;
    LegSettlDate() : StringField(588) {}
    LegSettlDate(String* data) : StringField(588, data) {}
  };

  public __gc class DayBookingInst : public CharField
  {
  public:
    static const int FIELD = 589;
    static const __wchar_t CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR_AUTO = '0';
    static const __wchar_t SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING_SPEAK_FIRST = '1';
    static const __wchar_t ACCUMULATE = '2';
    DayBookingInst() : CharField(589) {}
    DayBookingInst(__wchar_t data) : CharField(589, data) {}
  };

  public __gc class BookingUnit : public CharField
  {
  public:
    static const int FIELD = 590;
    static const __wchar_t EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = '0';
    static const __wchar_t AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = '1';
    static const __wchar_t AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = '2';
    BookingUnit() : CharField(590) {}
    BookingUnit(__wchar_t data) : CharField(590, data) {}
  };

  public __gc class PreallocMethod : public CharField
  {
  public:
    static const int FIELD = 591;
    static const __wchar_t PRORATA = '0';
    static const __wchar_t DO_NOT_PRORATA_DISCUSS_FIRST = '1';
    PreallocMethod() : CharField(591) {}
    PreallocMethod(__wchar_t data) : CharField(591, data) {}
  };

  public __gc class UnderlyingCountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 592;
    UnderlyingCountryOfIssue() : StringField(592) {}
    UnderlyingCountryOfIssue(String* data) : StringField(592, data) {}
  };

  public __gc class UnderlyingStateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 593;
    UnderlyingStateOrProvinceOfIssue() : StringField(593) {}
    UnderlyingStateOrProvinceOfIssue(String* data) : StringField(593, data) {}
  };

  public __gc class UnderlyingLocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 594;
    UnderlyingLocaleOfIssue() : StringField(594) {}
    UnderlyingLocaleOfIssue(String* data) : StringField(594, data) {}
  };

  public __gc class UnderlyingInstrRegistry : public StringField
  {
  public:
    static const int FIELD = 595;
    UnderlyingInstrRegistry() : StringField(595) {}
    UnderlyingInstrRegistry(String* data) : StringField(595, data) {}
  };

  public __gc class LegCountryOfIssue : public StringField
  {
  public:
    static const int FIELD = 596;
    LegCountryOfIssue() : StringField(596) {}
    LegCountryOfIssue(String* data) : StringField(596, data) {}
  };

  public __gc class LegStateOrProvinceOfIssue : public StringField
  {
  public:
    static const int FIELD = 597;
    LegStateOrProvinceOfIssue() : StringField(597) {}
    LegStateOrProvinceOfIssue(String* data) : StringField(597, data) {}
  };

  public __gc class LegLocaleOfIssue : public StringField
  {
  public:
    static const int FIELD = 598;
    LegLocaleOfIssue() : StringField(598) {}
    LegLocaleOfIssue(String* data) : StringField(598, data) {}
  };

  public __gc class LegInstrRegistry : public StringField
  {
  public:
    static const int FIELD = 599;
    LegInstrRegistry() : StringField(599) {}
    LegInstrRegistry(String* data) : StringField(599, data) {}
  };

  public __gc class LegSymbol : public StringField
  {
  public:
    static const int FIELD = 600;
    LegSymbol() : StringField(600) {}
    LegSymbol(String* data) : StringField(600, data) {}
  };

  public __gc class LegSymbolSfx : public StringField
  {
  public:
    static const int FIELD = 601;
    LegSymbolSfx() : StringField(601) {}
    LegSymbolSfx(String* data) : StringField(601, data) {}
  };

  public __gc class LegSecurityID : public StringField
  {
  public:
    static const int FIELD = 602;
    LegSecurityID() : StringField(602) {}
    LegSecurityID(String* data) : StringField(602, data) {}
  };

  public __gc class LegSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 603;
    LegSecurityIDSource() : StringField(603) {}
    LegSecurityIDSource(String* data) : StringField(603, data) {}
  };

  public __gc class NoLegSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 604;
    NoLegSecurityAltID() : StringField(604) {}
    NoLegSecurityAltID(String* data) : StringField(604, data) {}
  };

  public __gc class LegSecurityAltID : public StringField
  {
  public:
    static const int FIELD = 605;
    LegSecurityAltID() : StringField(605) {}
    LegSecurityAltID(String* data) : StringField(605, data) {}
  };

  public __gc class LegSecurityAltIDSource : public StringField
  {
  public:
    static const int FIELD = 606;
    LegSecurityAltIDSource() : StringField(606) {}
    LegSecurityAltIDSource(String* data) : StringField(606, data) {}
  };

  public __gc class LegProduct : public IntField
  {
  public:
    static const int FIELD = 607;
    LegProduct() : IntField(607) {}
    LegProduct(int data) : IntField(607, data) {}
  };

  public __gc class LegCFICode : public StringField
  {
  public:
    static const int FIELD = 608;
    LegCFICode() : StringField(608) {}
    LegCFICode(String* data) : StringField(608, data) {}
  };

  public __gc class LegSecurityType : public StringField
  {
  public:
    static const int FIELD = 609;
    LegSecurityType() : StringField(609) {}
    LegSecurityType(String* data) : StringField(609, data) {}
  };

  public __gc class LegMaturityMonthYear : public StringField
  {
  public:
    static const int FIELD = 610;
    LegMaturityMonthYear() : StringField(610) {}
    LegMaturityMonthYear(String* data) : StringField(610, data) {}
  };

  public __gc class LegMaturityDate : public StringField
  {
  public:
    static const int FIELD = 611;
    LegMaturityDate() : StringField(611) {}
    LegMaturityDate(String* data) : StringField(611, data) {}
  };

  public __gc class LegStrikePrice : public DoubleField
  {
  public:
    static const int FIELD = 612;
    LegStrikePrice() : DoubleField(612) {}
    LegStrikePrice(double data) : DoubleField(612, data) {}
    LegStrikePrice(double data, int decimalPadding) : DoubleField(612, data, decimalPadding) {}
  };

  public __gc class LegOptAttribute : public CharField
  {
  public:
    static const int FIELD = 613;
    LegOptAttribute() : CharField(613) {}
    LegOptAttribute(__wchar_t data) : CharField(613, data) {}
  };

  public __gc class LegContractMultiplier : public DoubleField
  {
  public:
    static const int FIELD = 614;
    LegContractMultiplier() : DoubleField(614) {}
    LegContractMultiplier(double data) : DoubleField(614, data) {}
    LegContractMultiplier(double data, int decimalPadding) : DoubleField(614, data, decimalPadding) {}
  };

  public __gc class LegCouponRate : public DoubleField
  {
  public:
    static const int FIELD = 615;
    LegCouponRate() : DoubleField(615) {}
    LegCouponRate(double data) : DoubleField(615, data) {}
    LegCouponRate(double data, int decimalPadding) : DoubleField(615, data, decimalPadding) {}
  };

  public __gc class LegSecurityExchange : public StringField
  {
  public:
    static const int FIELD = 616;
    LegSecurityExchange() : StringField(616) {}
    LegSecurityExchange(String* data) : StringField(616, data) {}
  };

  public __gc class LegIssuer : public StringField
  {
  public:
    static const int FIELD = 617;
    LegIssuer() : StringField(617) {}
    LegIssuer(String* data) : StringField(617, data) {}
  };

  public __gc class EncodedLegIssuerLen : public IntField
  {
  public:
    static const int FIELD = 618;
    EncodedLegIssuerLen() : IntField(618) {}
    EncodedLegIssuerLen(int data) : IntField(618, data) {}
  };

  public __gc class EncodedLegIssuer : public StringField
  {
  public:
    static const int FIELD = 619;
    EncodedLegIssuer() : StringField(619) {}
    EncodedLegIssuer(String* data) : StringField(619, data) {}
  };

  public __gc class LegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 620;
    LegSecurityDesc() : StringField(620) {}
    LegSecurityDesc(String* data) : StringField(620, data) {}
  };

  public __gc class EncodedLegSecurityDescLen : public IntField
  {
  public:
    static const int FIELD = 621;
    EncodedLegSecurityDescLen() : IntField(621) {}
    EncodedLegSecurityDescLen(int data) : IntField(621, data) {}
  };

  public __gc class EncodedLegSecurityDesc : public StringField
  {
  public:
    static const int FIELD = 622;
    EncodedLegSecurityDesc() : StringField(622) {}
    EncodedLegSecurityDesc(String* data) : StringField(622, data) {}
  };

  public __gc class LegRatioQty : public DoubleField
  {
  public:
    static const int FIELD = 623;
    LegRatioQty() : DoubleField(623) {}
    LegRatioQty(double data) : DoubleField(623, data) {}
    LegRatioQty(double data, int decimalPadding) : DoubleField(623, data, decimalPadding) {}
  };

  public __gc class LegSide : public CharField
  {
  public:
    static const int FIELD = 624;
    LegSide() : CharField(624) {}
    LegSide(__wchar_t data) : CharField(624, data) {}
  };

  public __gc class TradingSessionSubID : public StringField
  {
  public:
    static const int FIELD = 625;
    TradingSessionSubID() : StringField(625) {}
    TradingSessionSubID(String* data) : StringField(625, data) {}
  };

  public __gc class AllocType : public IntField
  {
  public:
    static const int FIELD = 626;
    static const int BUYSIDECALC = 1;
    static const int BUYSIDEPRELIM = 2;
    static const int SELLSIDECALC = 3;
    static const int SELLSIDECALCWITHOUTPRELIM = 4;
    static const int BUYSIDEREADYTOBOOKSINGLE = 5;
    static const int BUYSIDEREADYTOBOOKCOMBINED = 6;
    static const int WAREHOUSEINSTRUCTION = 7;
    static const int REQUESTTOINTERMEDIARY = 8;
    AllocType() : IntField(626) {}
    AllocType(int data) : IntField(626, data) {}
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
  };

  public __gc class HopRefID : public IntField
  {
  public:
    static const int FIELD = 630;
    HopRefID() : IntField(630) {}
    HopRefID(int data) : IntField(630, data) {}
  };

  public __gc class MidPx : public DoubleField
  {
  public:
    static const int FIELD = 631;
    MidPx() : DoubleField(631) {}
    MidPx(double data) : DoubleField(631, data) {}
    MidPx(double data, int decimalPadding) : DoubleField(631, data, decimalPadding) {}
  };

  public __gc class BidYield : public DoubleField
  {
  public:
    static const int FIELD = 632;
    BidYield() : DoubleField(632) {}
    BidYield(double data) : DoubleField(632, data) {}
    BidYield(double data, int decimalPadding) : DoubleField(632, data, decimalPadding) {}
  };

  public __gc class MidYield : public DoubleField
  {
  public:
    static const int FIELD = 633;
    MidYield() : DoubleField(633) {}
    MidYield(double data) : DoubleField(633, data) {}
    MidYield(double data, int decimalPadding) : DoubleField(633, data, decimalPadding) {}
  };

  public __gc class OfferYield : public DoubleField
  {
  public:
    static const int FIELD = 634;
    OfferYield() : DoubleField(634) {}
    OfferYield(double data) : DoubleField(634, data) {}
    OfferYield(double data, int decimalPadding) : DoubleField(634, data, decimalPadding) {}
  };

  public __gc class ClearingFeeIndicator : public StringField
  {
  public:
    static const int FIELD = 635;
    static const String* _1STYEARDELEGATE = "1";
    static const String* _2NDYEARDELEGATE = "2";
    static const String* _3RDYEARDELEGATE = "3";
    static const String* _4THYEARDELEGATE = "4";
    static const String* _5THYEARDELEGATE = "5";
    static const String* _6THYEARDELEGATE = "9";
    static const String* CBOEMEMBER = "B";
    static const String* NONMEMBERCUSTOMER = "C";
    static const String* EQUITYCLEARINGMEMBER = "E";
    static const String* FULLASSOCIATEMEMBER = "F";
    static const String* _106H106J = "H";
    static const String* GIMIDEMCOMMEMBERSHIP = "I";
    static const String* LESSEE106F = "L";
    static const String* ALLOTHERS = "M";
    ClearingFeeIndicator() : StringField(635) {}
    ClearingFeeIndicator(String* data) : StringField(635, data) {}
  };

  public __gc class WorkingIndicator : public BooleanField
  {
  public:
    static const int FIELD = 636;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    WorkingIndicator() : BooleanField(636) {}
    WorkingIndicator(bool data) : BooleanField(636, data) {}
  };

  public __gc class LegLastPx : public DoubleField
  {
  public:
    static const int FIELD = 637;
    LegLastPx() : DoubleField(637) {}
    LegLastPx(double data) : DoubleField(637, data) {}
    LegLastPx(double data, int decimalPadding) : DoubleField(637, data, decimalPadding) {}
  };

  public __gc class PriorityIndicator : public IntField
  {
  public:
    static const int FIELD = 638;
    static const int PRIORITYUNCHANGED = 0;
    static const int LOSTPRIORITY = 1;
    PriorityIndicator() : IntField(638) {}
    PriorityIndicator(int data) : IntField(638, data) {}
  };

  public __gc class PriceImprovement : public DoubleField
  {
  public:
    static const int FIELD = 639;
    PriceImprovement() : DoubleField(639) {}
    PriceImprovement(double data) : DoubleField(639, data) {}
    PriceImprovement(double data, int decimalPadding) : DoubleField(639, data, decimalPadding) {}
  };

  public __gc class Price2 : public DoubleField
  {
  public:
    static const int FIELD = 640;
    Price2() : DoubleField(640) {}
    Price2(double data) : DoubleField(640, data) {}
    Price2(double data, int decimalPadding) : DoubleField(640, data, decimalPadding) {}
  };

  public __gc class LastForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 641;
    LastForwardPoints2() : DoubleField(641) {}
    LastForwardPoints2(double data) : DoubleField(641, data) {}
    LastForwardPoints2(double data, int decimalPadding) : DoubleField(641, data, decimalPadding) {}
  };

  public __gc class BidForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 642;
    BidForwardPoints2() : DoubleField(642) {}
    BidForwardPoints2(double data) : DoubleField(642, data) {}
    BidForwardPoints2(double data, int decimalPadding) : DoubleField(642, data, decimalPadding) {}
  };

  public __gc class OfferForwardPoints2 : public DoubleField
  {
  public:
    static const int FIELD = 643;
    OfferForwardPoints2() : DoubleField(643) {}
    OfferForwardPoints2(double data) : DoubleField(643, data) {}
    OfferForwardPoints2(double data, int decimalPadding) : DoubleField(643, data, decimalPadding) {}
  };

  public __gc class RFQReqID : public StringField
  {
  public:
    static const int FIELD = 644;
    RFQReqID() : StringField(644) {}
    RFQReqID(String* data) : StringField(644, data) {}
  };

  public __gc class MktBidPx : public DoubleField
  {
  public:
    static const int FIELD = 645;
    MktBidPx() : DoubleField(645) {}
    MktBidPx(double data) : DoubleField(645, data) {}
    MktBidPx(double data, int decimalPadding) : DoubleField(645, data, decimalPadding) {}
  };

  public __gc class MktOfferPx : public DoubleField
  {
  public:
    static const int FIELD = 646;
    MktOfferPx() : DoubleField(646) {}
    MktOfferPx(double data) : DoubleField(646, data) {}
    MktOfferPx(double data, int decimalPadding) : DoubleField(646, data, decimalPadding) {}
  };

  public __gc class MinBidSize : public DoubleField
  {
  public:
    static const int FIELD = 647;
    MinBidSize() : DoubleField(647) {}
    MinBidSize(double data) : DoubleField(647, data) {}
    MinBidSize(double data, int decimalPadding) : DoubleField(647, data, decimalPadding) {}
  };

  public __gc class MinOfferSize : public DoubleField
  {
  public:
    static const int FIELD = 648;
    MinOfferSize() : DoubleField(648) {}
    MinOfferSize(double data) : DoubleField(648, data) {}
    MinOfferSize(double data, int decimalPadding) : DoubleField(648, data, decimalPadding) {}
  };

  public __gc class QuoteStatusReqID : public StringField
  {
  public:
    static const int FIELD = 649;
    QuoteStatusReqID() : StringField(649) {}
    QuoteStatusReqID(String* data) : StringField(649, data) {}
  };

  public __gc class LegalConfirm : public BooleanField
  {
  public:
    static const int FIELD = 650;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LegalConfirm() : BooleanField(650) {}
    LegalConfirm(bool data) : BooleanField(650, data) {}
  };

  public __gc class UnderlyingLastPx : public DoubleField
  {
  public:
    static const int FIELD = 651;
    UnderlyingLastPx() : DoubleField(651) {}
    UnderlyingLastPx(double data) : DoubleField(651, data) {}
    UnderlyingLastPx(double data, int decimalPadding) : DoubleField(651, data, decimalPadding) {}
  };

  public __gc class UnderlyingLastQty : public DoubleField
  {
  public:
    static const int FIELD = 652;
    UnderlyingLastQty() : DoubleField(652) {}
    UnderlyingLastQty(double data) : DoubleField(652, data) {}
    UnderlyingLastQty(double data, int decimalPadding) : DoubleField(652, data, decimalPadding) {}
  };

  public __gc class SecDefStatus : public IntField
  {
  public:
    static const int FIELD = 653;
    static const int PENDINGAPPROVAL = 0;
    static const int APPROVEDACCEPTED = 1;
    static const int REJECTED = 2;
    static const int UNAUTHORIZEDREQUEST = 3;
    static const int INVALIDDEFINITIONREQUEST = 4;
    SecDefStatus() : IntField(653) {}
    SecDefStatus(int data) : IntField(653, data) {}
  };

  public __gc class LegRefID : public StringField
  {
  public:
    static const int FIELD = 654;
    LegRefID() : StringField(654) {}
    LegRefID(String* data) : StringField(654, data) {}
  };

  public __gc class ContraLegRefID : public StringField
  {
  public:
    static const int FIELD = 655;
    ContraLegRefID() : StringField(655) {}
    ContraLegRefID(String* data) : StringField(655, data) {}
  };

  public __gc class SettlCurrBidFxRate : public DoubleField
  {
  public:
    static const int FIELD = 656;
    SettlCurrBidFxRate() : DoubleField(656) {}
    SettlCurrBidFxRate(double data) : DoubleField(656, data) {}
    SettlCurrBidFxRate(double data, int decimalPadding) : DoubleField(656, data, decimalPadding) {}
  };

  public __gc class SettlCurrOfferFxRate : public DoubleField
  {
  public:
    static const int FIELD = 657;
    SettlCurrOfferFxRate() : DoubleField(657) {}
    SettlCurrOfferFxRate(double data) : DoubleField(657, data) {}
    SettlCurrOfferFxRate(double data, int decimalPadding) : DoubleField(657, data, decimalPadding) {}
  };

  public __gc class QuoteRequestRejectReason : public IntField
  {
  public:
    static const int FIELD = 658;
    static const int UNKNOWNSYM = 1;
    static const int PASS = 10;
    static const int EXCHANGECLOSED = 2;
    static const int QUOTEREQUESTEXLIMIT = 3;
    static const int TOOLATE = 4;
    static const int INVPRICE = 5;
    static const int NOTAUTHTOREQQUOTE = 6;
    static const int NOMATCHFORINQUIRY = 7;
    static const int NOMARKETFORINSTRUMENT = 8;
    static const int NOINVENTORY = 9;
    static const int OTHER = 99;
    QuoteRequestRejectReason() : IntField(658) {}
    QuoteRequestRejectReason(int data) : IntField(658, data) {}
  };

  public __gc class SideComplianceID : public StringField
  {
  public:
    static const int FIELD = 659;
    SideComplianceID() : StringField(659) {}
    SideComplianceID(String* data) : StringField(659, data) {}
  };

  public __gc class AcctIDSource : public IntField
  {
  public:
    static const int FIELD = 660;
    static const int BIC = 1;
    static const int SIDCODE = 2;
    static const int TFMGSPTA = 3;
    static const int OMGEOALERTID = 4;
    static const int DTCCCODE = 5;
    static const int OTHER = 99;
    AcctIDSource() : IntField(660) {}
    AcctIDSource(int data) : IntField(660, data) {}
  };

  public __gc class AllocAcctIDSource : public IntField
  {
  public:
    static const int FIELD = 661;
    AllocAcctIDSource() : IntField(661) {}
    AllocAcctIDSource(int data) : IntField(661, data) {}
  };

  public __gc class BenchmarkPrice : public DoubleField
  {
  public:
    static const int FIELD = 662;
    BenchmarkPrice() : DoubleField(662) {}
    BenchmarkPrice(double data) : DoubleField(662, data) {}
    BenchmarkPrice(double data, int decimalPadding) : DoubleField(662, data, decimalPadding) {}
  };

  public __gc class BenchmarkPriceType : public IntField
  {
  public:
    static const int FIELD = 663;
    BenchmarkPriceType() : IntField(663) {}
    BenchmarkPriceType(int data) : IntField(663, data) {}
  };

  public __gc class ConfirmID : public StringField
  {
  public:
    static const int FIELD = 664;
    ConfirmID() : StringField(664) {}
    ConfirmID(String* data) : StringField(664, data) {}
  };

  public __gc class ConfirmStatus : public IntField
  {
  public:
    static const int FIELD = 665;
    static const int RECEIVED = 1;
    static const int MISMATCHEDACCOUNT = 2;
    static const int MISSINGSETTLEMENTINSTRUCTIONS = 3;
    static const int CONFIRMED = 4;
    static const int REQUESTREJECTED = 5;
    ConfirmStatus() : IntField(665) {}
    ConfirmStatus(int data) : IntField(665, data) {}
  };

  public __gc class ConfirmTransType : public IntField
  {
  public:
    static const int FIELD = 666;
    static const int NEW = 0;
    static const int REPLACE = 1;
    static const int CANCEL = 2;
    ConfirmTransType() : IntField(666) {}
    ConfirmTransType(int data) : IntField(666, data) {}
  };

  public __gc class ContractSettlMonth : public StringField
  {
  public:
    static const int FIELD = 667;
    ContractSettlMonth() : StringField(667) {}
    ContractSettlMonth(String* data) : StringField(667, data) {}
  };

  public __gc class DeliveryForm : public IntField
  {
  public:
    static const int FIELD = 668;
    static const int BOOKENTRY = 1;
    static const int BEARER = 2;
    DeliveryForm() : IntField(668) {}
    DeliveryForm(int data) : IntField(668, data) {}
  };

  public __gc class LastParPx : public DoubleField
  {
  public:
    static const int FIELD = 669;
    LastParPx() : DoubleField(669) {}
    LastParPx(double data) : DoubleField(669, data) {}
    LastParPx(double data, int decimalPadding) : DoubleField(669, data, decimalPadding) {}
  };

  public __gc class NoLegAllocs : public IntField
  {
  public:
    static const int FIELD = 670;
    NoLegAllocs() : IntField(670) {}
    NoLegAllocs(int data) : IntField(670, data) {}
  };

  public __gc class LegAllocAccount : public StringField
  {
  public:
    static const int FIELD = 671;
    LegAllocAccount() : StringField(671) {}
    LegAllocAccount(String* data) : StringField(671, data) {}
  };

  public __gc class LegIndividualAllocID : public StringField
  {
  public:
    static const int FIELD = 672;
    LegIndividualAllocID() : StringField(672) {}
    LegIndividualAllocID(String* data) : StringField(672, data) {}
  };

  public __gc class LegAllocQty : public DoubleField
  {
  public:
    static const int FIELD = 673;
    LegAllocQty() : DoubleField(673) {}
    LegAllocQty(double data) : DoubleField(673, data) {}
    LegAllocQty(double data, int decimalPadding) : DoubleField(673, data, decimalPadding) {}
  };

  public __gc class LegAllocAcctIDSource : public StringField
  {
  public:
    static const int FIELD = 674;
    LegAllocAcctIDSource() : StringField(674) {}
    LegAllocAcctIDSource(String* data) : StringField(674, data) {}
  };

  public __gc class LegSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 675;
    LegSettlCurrency() : StringField(675) {}
    LegSettlCurrency(String* data) : StringField(675, data) {}
  };

  public __gc class LegBenchmarkCurveCurrency : public StringField
  {
  public:
    static const int FIELD = 676;
    LegBenchmarkCurveCurrency() : StringField(676) {}
    LegBenchmarkCurveCurrency(String* data) : StringField(676, data) {}
  };

  public __gc class LegBenchmarkCurveName : public StringField
  {
  public:
    static const int FIELD = 677;
    LegBenchmarkCurveName() : StringField(677) {}
    LegBenchmarkCurveName(String* data) : StringField(677, data) {}
  };

  public __gc class LegBenchmarkCurvePoint : public StringField
  {
  public:
    static const int FIELD = 678;
    LegBenchmarkCurvePoint() : StringField(678) {}
    LegBenchmarkCurvePoint(String* data) : StringField(678, data) {}
  };

  public __gc class LegBenchmarkPrice : public DoubleField
  {
  public:
    static const int FIELD = 679;
    LegBenchmarkPrice() : DoubleField(679) {}
    LegBenchmarkPrice(double data) : DoubleField(679, data) {}
    LegBenchmarkPrice(double data, int decimalPadding) : DoubleField(679, data, decimalPadding) {}
  };

  public __gc class LegBenchmarkPriceType : public IntField
  {
  public:
    static const int FIELD = 680;
    LegBenchmarkPriceType() : IntField(680) {}
    LegBenchmarkPriceType(int data) : IntField(680, data) {}
  };

  public __gc class LegBidPx : public DoubleField
  {
  public:
    static const int FIELD = 681;
    LegBidPx() : DoubleField(681) {}
    LegBidPx(double data) : DoubleField(681, data) {}
    LegBidPx(double data, int decimalPadding) : DoubleField(681, data, decimalPadding) {}
  };

  public __gc class LegIOIQty : public StringField
  {
  public:
    static const int FIELD = 682;
    LegIOIQty() : StringField(682) {}
    LegIOIQty(String* data) : StringField(682, data) {}
  };

  public __gc class NoLegStipulations : public IntField
  {
  public:
    static const int FIELD = 683;
    NoLegStipulations() : IntField(683) {}
    NoLegStipulations(int data) : IntField(683, data) {}
  };

  public __gc class LegOfferPx : public DoubleField
  {
  public:
    static const int FIELD = 684;
    LegOfferPx() : DoubleField(684) {}
    LegOfferPx(double data) : DoubleField(684, data) {}
    LegOfferPx(double data, int decimalPadding) : DoubleField(684, data, decimalPadding) {}
  };

  public __gc class LegOrderQty : public DoubleField
  {
  public:
    static const int FIELD = 685;
    LegOrderQty() : DoubleField(685) {}
    LegOrderQty(double data) : DoubleField(685, data) {}
    LegOrderQty(double data, int decimalPadding) : DoubleField(685, data, decimalPadding) {}
  };

  public __gc class LegPriceType : public IntField
  {
  public:
    static const int FIELD = 686;
    LegPriceType() : IntField(686) {}
    LegPriceType(int data) : IntField(686, data) {}
  };

  public __gc class LegQty : public DoubleField
  {
  public:
    static const int FIELD = 687;
    LegQty() : DoubleField(687) {}
    LegQty(double data) : DoubleField(687, data) {}
    LegQty(double data, int decimalPadding) : DoubleField(687, data, decimalPadding) {}
  };

  public __gc class LegStipulationType : public StringField
  {
  public:
    static const int FIELD = 688;
    LegStipulationType() : StringField(688) {}
    LegStipulationType(String* data) : StringField(688, data) {}
  };

  public __gc class LegStipulationValue : public StringField
  {
  public:
    static const int FIELD = 689;
    LegStipulationValue() : StringField(689) {}
    LegStipulationValue(String* data) : StringField(689, data) {}
  };

  public __gc class LegSwapType : public IntField
  {
  public:
    static const int FIELD = 690;
    static const int PARFORPAR = 1;
    static const int MODIFIEDDURATION = 2;
    static const int RISK = 4;
    static const int PROCEEDS = 5;
    LegSwapType() : IntField(690) {}
    LegSwapType(int data) : IntField(690, data) {}
  };

  public __gc class Pool : public StringField
  {
  public:
    static const int FIELD = 691;
    Pool() : StringField(691) {}
    Pool(String* data) : StringField(691, data) {}
  };

  public __gc class QuotePriceType : public IntField
  {
  public:
    static const int FIELD = 692;
    static const int PERCENT = 1;
    static const int YIELD = 10;
    static const int PERSHARE = 2;
    static const int FIXEDAMOUNT = 3;
    static const int DISCOUNT = 4;
    static const int PREMIUM = 5;
    static const int BASISPOINTSRELATIVETOBENCHMARK = 6;
    static const int TEDPRICE = 7;
    static const int TEDYIELD = 8;
    static const int YIELDSPREADSWAPS = 9;
    QuotePriceType() : IntField(692) {}
    QuotePriceType(int data) : IntField(692, data) {}
  };

  public __gc class QuoteRespID : public StringField
  {
  public:
    static const int FIELD = 693;
    QuoteRespID() : StringField(693) {}
    QuoteRespID(String* data) : StringField(693, data) {}
  };

  public __gc class QuoteRespType : public IntField
  {
  public:
    static const int FIELD = 694;
    static const int HITLIFT = 1;
    static const int COUNTER = 2;
    static const int EXPIRED = 3;
    static const int COVER = 4;
    static const int DONEAWAY = 5;
    static const int PASS = 6;
    QuoteRespType() : IntField(694) {}
    QuoteRespType(int data) : IntField(694, data) {}
  };

  public __gc class QuoteQualifier : public CharField
  {
  public:
    static const int FIELD = 695;
    QuoteQualifier() : CharField(695) {}
    QuoteQualifier(__wchar_t data) : CharField(695, data) {}
  };

  public __gc class YieldRedemptionDate : public StringField
  {
  public:
    static const int FIELD = 696;
    YieldRedemptionDate() : StringField(696) {}
    YieldRedemptionDate(String* data) : StringField(696, data) {}
  };

  public __gc class YieldRedemptionPrice : public DoubleField
  {
  public:
    static const int FIELD = 697;
    YieldRedemptionPrice() : DoubleField(697) {}
    YieldRedemptionPrice(double data) : DoubleField(697, data) {}
    YieldRedemptionPrice(double data, int decimalPadding) : DoubleField(697, data, decimalPadding) {}
  };

  public __gc class YieldRedemptionPriceType : public IntField
  {
  public:
    static const int FIELD = 698;
    YieldRedemptionPriceType() : IntField(698) {}
    YieldRedemptionPriceType(int data) : IntField(698, data) {}
  };

  public __gc class BenchmarkSecurityID : public StringField
  {
  public:
    static const int FIELD = 699;
    BenchmarkSecurityID() : StringField(699) {}
    BenchmarkSecurityID(String* data) : StringField(699, data) {}
  };

  public __gc class ReversalIndicator : public BooleanField
  {
  public:
    static const int FIELD = 700;
    ReversalIndicator() : BooleanField(700) {}
    ReversalIndicator(bool data) : BooleanField(700, data) {}
  };

  public __gc class YieldCalcDate : public StringField
  {
  public:
    static const int FIELD = 701;
    YieldCalcDate() : StringField(701) {}
    YieldCalcDate(String* data) : StringField(701, data) {}
  };

  public __gc class NoPositions : public IntField
  {
  public:
    static const int FIELD = 702;
    NoPositions() : IntField(702) {}
    NoPositions(int data) : IntField(702, data) {}
  };

  public __gc class PosType : public StringField
  {
  public:
    static const int FIELD = 703;
    static const String* ALLOCATIONTRADEQTY = "ALC";
    static const String* OPTIONASSIGNMENT = "AS";
    static const String* ASOFTRADEQTY = "ASF";
    static const String* DELIVERYQTY = "DLV";
    static const String* ELECTRONICTRADEQTY = "ETR";
    static const String* OPTIONEXERCISEQTY = "EX";
    static const String* ENDOFDAYQTY = "FIN";
    static const String* INTRASPREADQTY = "IAS";
    static const String* INTERSPREADQTY = "IES";
    static const String* ADJUSTMENTQTY = "PA";
    static const String* PITTRADEQTY = "PIT";
    static const String* STARTOFDAYQTY = "SOD";
    static const String* INTEGRALSPLIT = "SPL";
    static const String* TRANSACTIONFROMASSIGNMENT = "TA";
    static const String* TOTALTRANSACTIONQTY = "TOT";
    static const String* TRANSACTIONQUANTITY = "TQ";
    static const String* TRANSFERTRADEQTY = "TRF";
    static const String* TRANSACTIONFROMEXERCISE = "TX";
    static const String* CROSSMARGINQTY = "XM";
    PosType() : StringField(703) {}
    PosType(String* data) : StringField(703, data) {}
  };

  public __gc class LongQty : public DoubleField
  {
  public:
    static const int FIELD = 704;
    LongQty() : DoubleField(704) {}
    LongQty(double data) : DoubleField(704, data) {}
    LongQty(double data, int decimalPadding) : DoubleField(704, data, decimalPadding) {}
  };

  public __gc class ShortQty : public DoubleField
  {
  public:
    static const int FIELD = 705;
    ShortQty() : DoubleField(705) {}
    ShortQty(double data) : DoubleField(705, data) {}
    ShortQty(double data, int decimalPadding) : DoubleField(705, data, decimalPadding) {}
  };

  public __gc class PosQtyStatus : public IntField
  {
  public:
    static const int FIELD = 706;
    static const int SUBMITTED = 0;
    static const int ACCEPTED = 1;
    static const int REJECTED = 2;
    PosQtyStatus() : IntField(706) {}
    PosQtyStatus(int data) : IntField(706, data) {}
  };

  public __gc class PosAmtType : public StringField
  {
  public:
    static const int FIELD = 707;
    static const String* CASHAMOUNTCORPORATEEVENT = "CASH";
    static const String* CASHRESIDUALAMOUNT = "CRES";
    static const String* FINALMARKTOMARKETAMOUNT = "FMTM";
    static const String* INCREMENTALMARKTOMARKETAMOUNT = "IMTM";
    static const String* PREMIUMAMOUNT = "PREM";
    static const String* STARTOFDAYMARKTOMARKETAMOUNT = "SMTM";
    static const String* TRADEVARIATIONAMOUNT = "TVAR";
    static const String* VALUEADJUSTEDAMOUNT = "VADJ";
    PosAmtType() : StringField(707) {}
    PosAmtType(String* data) : StringField(707, data) {}
  };

  public __gc class PosAmt : public DoubleField
  {
  public:
    static const int FIELD = 708;
    PosAmt() : DoubleField(708) {}
    PosAmt(double data) : DoubleField(708, data) {}
    PosAmt(double data, int decimalPadding) : DoubleField(708, data, decimalPadding) {}
  };

  public __gc class PosTransType : public IntField
  {
  public:
    static const int FIELD = 709;
    static const int EXERCISE = 1;
    static const int DONOTEXERCISE = 2;
    static const int POSITIONADJUSTMENT = 3;
    static const int POSITIONCHANGESUBMISSIONMARGINDISPOSITION = 4;
    static const int PLEDGE = 5;
    PosTransType() : IntField(709) {}
    PosTransType(int data) : IntField(709, data) {}
  };

  public __gc class PosReqID : public StringField
  {
  public:
    static const int FIELD = 710;
    PosReqID() : StringField(710) {}
    PosReqID(String* data) : StringField(710, data) {}
  };

  public __gc class NoUnderlyings : public IntField
  {
  public:
    static const int FIELD = 711;
    NoUnderlyings() : IntField(711) {}
    NoUnderlyings(int data) : IntField(711, data) {}
  };

  public __gc class PosMaintAction : public IntField
  {
  public:
    static const int FIELD = 712;
    static const int NEW = 1;
    static const int REPLACE = 2;
    static const int CANCEL = 3;
    PosMaintAction() : IntField(712) {}
    PosMaintAction(int data) : IntField(712, data) {}
  };

  public __gc class OrigPosReqRefID : public StringField
  {
  public:
    static const int FIELD = 713;
    OrigPosReqRefID() : StringField(713) {}
    OrigPosReqRefID(String* data) : StringField(713, data) {}
  };

  public __gc class PosMaintRptRefID : public StringField
  {
  public:
    static const int FIELD = 714;
    PosMaintRptRefID() : StringField(714) {}
    PosMaintRptRefID(String* data) : StringField(714, data) {}
  };

  public __gc class ClearingBusinessDate : public StringField
  {
  public:
    static const int FIELD = 715;
    ClearingBusinessDate() : StringField(715) {}
    ClearingBusinessDate(String* data) : StringField(715, data) {}
  };

  public __gc class SettlSessID : public StringField
  {
  public:
    static const int FIELD = 716;
    SettlSessID() : StringField(716) {}
    SettlSessID(String* data) : StringField(716, data) {}
  };

  public __gc class SettlSessSubID : public StringField
  {
  public:
    static const int FIELD = 717;
    SettlSessSubID() : StringField(717) {}
    SettlSessSubID(String* data) : StringField(717, data) {}
  };

  public __gc class AdjustmentType : public IntField
  {
  public:
    static const int FIELD = 718;
    static const int PROCESSREQUESTASMARGINDISPOSITION = 0;
    static const int DELTAPLUS = 1;
    static const int DELTAMINUS = 2;
    static const int FINAL = 3;
    AdjustmentType() : IntField(718) {}
    AdjustmentType(int data) : IntField(718, data) {}
  };

  public __gc class ContraryInstructionIndicator : public BooleanField
  {
  public:
    static const int FIELD = 719;
    ContraryInstructionIndicator() : BooleanField(719) {}
    ContraryInstructionIndicator(bool data) : BooleanField(719, data) {}
  };

  public __gc class PriorSpreadIndicator : public BooleanField
  {
  public:
    static const int FIELD = 720;
    PriorSpreadIndicator() : BooleanField(720) {}
    PriorSpreadIndicator(bool data) : BooleanField(720, data) {}
  };

  public __gc class PosMaintRptID : public StringField
  {
  public:
    static const int FIELD = 721;
    PosMaintRptID() : StringField(721) {}
    PosMaintRptID(String* data) : StringField(721, data) {}
  };

  public __gc class PosMaintStatus : public IntField
  {
  public:
    static const int FIELD = 722;
    static const int ACCEPTED = 0;
    static const int ACCEPTEDWITHWARNINGS = 1;
    static const int REJECTED = 2;
    static const int COMPLETED = 3;
    static const int COMPLETEDWITHWARNINGS = 4;
    PosMaintStatus() : IntField(722) {}
    PosMaintStatus(int data) : IntField(722, data) {}
  };

  public __gc class PosMaintResult : public IntField
  {
  public:
    static const int FIELD = 723;
    static const int SUCCESSFULCOMPLETION = 0;
    static const int REJECTED = 1;
    static const int OTHER = 99;
    PosMaintResult() : IntField(723) {}
    PosMaintResult(int data) : IntField(723, data) {}
  };

  public __gc class PosReqType : public IntField
  {
  public:
    static const int FIELD = 724;
    static const int POSITIONS = 0;
    static const int TRADES = 1;
    static const int EXERCISES = 2;
    static const int ASSIGNMENTS = 3;
    PosReqType() : IntField(724) {}
    PosReqType(int data) : IntField(724, data) {}
  };

  public __gc class ResponseTransportType : public IntField
  {
  public:
    static const int FIELD = 725;
    static const int INBAND = 0;
    static const int OUTOFBAND = 1;
    ResponseTransportType() : IntField(725) {}
    ResponseTransportType(int data) : IntField(725, data) {}
  };

  public __gc class ResponseDestination : public StringField
  {
  public:
    static const int FIELD = 726;
    ResponseDestination() : StringField(726) {}
    ResponseDestination(String* data) : StringField(726, data) {}
  };

  public __gc class TotalNumPosReports : public IntField
  {
  public:
    static const int FIELD = 727;
    TotalNumPosReports() : IntField(727) {}
    TotalNumPosReports(int data) : IntField(727, data) {}
  };

  public __gc class PosReqResult : public IntField
  {
  public:
    static const int FIELD = 728;
    static const int VALIDREQUEST = 0;
    static const int INVALIDORUNSUPPORTEDREQUEST = 1;
    static const int NOPOSITIONSFOUNDTHATMATCHCRITERIA = 2;
    static const int NOTAUTHORIZEDTOREQUESTPOSITIONS = 3;
    static const int REQUESTFORPOSITIONNOTSUPPORTED = 4;
    static const int OTHER = 99;
    PosReqResult() : IntField(728) {}
    PosReqResult(int data) : IntField(728, data) {}
  };

  public __gc class PosReqStatus : public IntField
  {
  public:
    static const int FIELD = 729;
    static const int COMPLETED = 0;
    static const int COMPLETEDWITHWARNINGS = 1;
    static const int REJECTED = 2;
    PosReqStatus() : IntField(729) {}
    PosReqStatus(int data) : IntField(729, data) {}
  };

  public __gc class SettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 730;
    SettlPrice() : DoubleField(730) {}
    SettlPrice(double data) : DoubleField(730, data) {}
    SettlPrice(double data, int decimalPadding) : DoubleField(730, data, decimalPadding) {}
  };

  public __gc class SettlPriceType : public IntField
  {
  public:
    static const int FIELD = 731;
    static const int FINAL = 1;
    static const int THEORETICAL = 2;
    SettlPriceType() : IntField(731) {}
    SettlPriceType(int data) : IntField(731, data) {}
  };

  public __gc class UnderlyingSettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 732;
    UnderlyingSettlPrice() : DoubleField(732) {}
    UnderlyingSettlPrice(double data) : DoubleField(732, data) {}
    UnderlyingSettlPrice(double data, int decimalPadding) : DoubleField(732, data, decimalPadding) {}
  };

  public __gc class UnderlyingSettlPriceType : public IntField
  {
  public:
    static const int FIELD = 733;
    UnderlyingSettlPriceType() : IntField(733) {}
    UnderlyingSettlPriceType(int data) : IntField(733, data) {}
  };

  public __gc class PriorSettlPrice : public DoubleField
  {
  public:
    static const int FIELD = 734;
    PriorSettlPrice() : DoubleField(734) {}
    PriorSettlPrice(double data) : DoubleField(734, data) {}
    PriorSettlPrice(double data, int decimalPadding) : DoubleField(734, data, decimalPadding) {}
  };

  public __gc class NoQuoteQualifiers : public IntField
  {
  public:
    static const int FIELD = 735;
    NoQuoteQualifiers() : IntField(735) {}
    NoQuoteQualifiers(int data) : IntField(735, data) {}
  };

  public __gc class AllocSettlCurrency : public StringField
  {
  public:
    static const int FIELD = 736;
    AllocSettlCurrency() : StringField(736) {}
    AllocSettlCurrency(String* data) : StringField(736, data) {}
  };

  public __gc class AllocSettlCurrAmt : public DoubleField
  {
  public:
    static const int FIELD = 737;
    AllocSettlCurrAmt() : DoubleField(737) {}
    AllocSettlCurrAmt(double data) : DoubleField(737, data) {}
    AllocSettlCurrAmt(double data, int decimalPadding) : DoubleField(737, data, decimalPadding) {}
  };

  public __gc class InterestAtMaturity : public DoubleField
  {
  public:
    static const int FIELD = 738;
    InterestAtMaturity() : DoubleField(738) {}
    InterestAtMaturity(double data) : DoubleField(738, data) {}
    InterestAtMaturity(double data, int decimalPadding) : DoubleField(738, data, decimalPadding) {}
  };

  public __gc class LegDatedDate : public StringField
  {
  public:
    static const int FIELD = 739;
    LegDatedDate() : StringField(739) {}
    LegDatedDate(String* data) : StringField(739, data) {}
  };

  public __gc class LegPool : public StringField
  {
  public:
    static const int FIELD = 740;
    LegPool() : StringField(740) {}
    LegPool(String* data) : StringField(740, data) {}
  };

  public __gc class AllocInterestAtMaturity : public DoubleField
  {
  public:
    static const int FIELD = 741;
    AllocInterestAtMaturity() : DoubleField(741) {}
    AllocInterestAtMaturity(double data) : DoubleField(741, data) {}
    AllocInterestAtMaturity(double data, int decimalPadding) : DoubleField(741, data, decimalPadding) {}
  };

  public __gc class AllocAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 742;
    AllocAccruedInterestAmt() : DoubleField(742) {}
    AllocAccruedInterestAmt(double data) : DoubleField(742, data) {}
    AllocAccruedInterestAmt(double data, int decimalPadding) : DoubleField(742, data, decimalPadding) {}
  };

  public __gc class DeliveryDate : public StringField
  {
  public:
    static const int FIELD = 743;
    DeliveryDate() : StringField(743) {}
    DeliveryDate(String* data) : StringField(743, data) {}
  };

  public __gc class AssignmentMethod : public CharField
  {
  public:
    static const int FIELD = 744;
    static const __wchar_t PRORATA = 'P';
    static const __wchar_t RANDOM = 'R';
    AssignmentMethod() : CharField(744) {}
    AssignmentMethod(__wchar_t data) : CharField(744, data) {}
  };

  public __gc class AssignmentUnit : public DoubleField
  {
  public:
    static const int FIELD = 745;
    AssignmentUnit() : DoubleField(745) {}
    AssignmentUnit(double data) : DoubleField(745, data) {}
    AssignmentUnit(double data, int decimalPadding) : DoubleField(745, data, decimalPadding) {}
  };

  public __gc class OpenInterest : public DoubleField
  {
  public:
    static const int FIELD = 746;
    OpenInterest() : DoubleField(746) {}
    OpenInterest(double data) : DoubleField(746, data) {}
    OpenInterest(double data, int decimalPadding) : DoubleField(746, data, decimalPadding) {}
  };

  public __gc class ExerciseMethod : public CharField
  {
  public:
    static const int FIELD = 747;
    static const __wchar_t AUTOMATIC = 'A';
    static const __wchar_t MANUAL = 'M';
    ExerciseMethod() : CharField(747) {}
    ExerciseMethod(__wchar_t data) : CharField(747, data) {}
  };

  public __gc class TotNumTradeReports : public IntField
  {
  public:
    static const int FIELD = 748;
    TotNumTradeReports() : IntField(748) {}
    TotNumTradeReports(int data) : IntField(748, data) {}
  };

  public __gc class TradeRequestResult : public IntField
  {
  public:
    static const int FIELD = 749;
    static const int SUCCESSFUL = 0;
    static const int INVALIDORUNKNOWNINSTRUMENT = 1;
    static const int INVALIDTYPEOFTRADEREQUESTED = 2;
    static const int INVALIDPARTIES = 3;
    static const int INVALIDTRANSPORTTYPEREQUESTED = 4;
    static const int INVALIDDESTINATIONREQUESTED = 5;
    static const int TRADEREQUESTTYPENOTSUPPORTED = 8;
    static const int UNAUTHORIZEDFORTRADECAPTUREREPORTREQUEST = 9;
    static const int OTHER = 99;
    TradeRequestResult() : IntField(749) {}
    TradeRequestResult(int data) : IntField(749, data) {}
  };

  public __gc class TradeRequestStatus : public IntField
  {
  public:
    static const int FIELD = 750;
    static const int ACCEPTED = 0;
    static const int COMPLETED = 1;
    static const int REJECTED = 2;
    TradeRequestStatus() : IntField(750) {}
    TradeRequestStatus(int data) : IntField(750, data) {}
  };

  public __gc class TradeReportRejectReason : public IntField
  {
  public:
    static const int FIELD = 751;
    static const int SUCCESSFULDEFAULT = 0;
    static const int INVALIDPARTYINFORMATION = 1;
    static const int UNKNOWNINSTRUMENT = 2;
    static const int UNAUTHORIZEDTOREPORTTRADES = 3;
    static const int INVALIDTRADETYPE = 4;
    static const int OTHER = 99;
    TradeReportRejectReason() : IntField(751) {}
    TradeReportRejectReason(int data) : IntField(751, data) {}
  };

  public __gc class SideMultiLegReportingType : public IntField
  {
  public:
    static const int FIELD = 752;
    static const int SINGLESECURITY = 1;
    static const int INDIVIDUALLEGOFAMULTILEGSECURITY = 2;
    static const int MULTILEGSECURITY = 3;
    SideMultiLegReportingType() : IntField(752) {}
    SideMultiLegReportingType(int data) : IntField(752, data) {}
  };

  public __gc class NoPosAmt : public IntField
  {
  public:
    static const int FIELD = 753;
    NoPosAmt() : IntField(753) {}
    NoPosAmt(int data) : IntField(753, data) {}
  };

  public __gc class AutoAcceptIndicator : public BooleanField
  {
  public:
    static const int FIELD = 754;
    AutoAcceptIndicator() : BooleanField(754) {}
    AutoAcceptIndicator(bool data) : BooleanField(754, data) {}
  };

  public __gc class AllocReportID : public StringField
  {
  public:
    static const int FIELD = 755;
    AllocReportID() : StringField(755) {}
    AllocReportID(String* data) : StringField(755, data) {}
  };

  public __gc class NoNested2PartyIDs : public IntField
  {
  public:
    static const int FIELD = 756;
    NoNested2PartyIDs() : IntField(756) {}
    NoNested2PartyIDs(int data) : IntField(756, data) {}
  };

  public __gc class Nested2PartyID : public StringField
  {
  public:
    static const int FIELD = 757;
    Nested2PartyID() : StringField(757) {}
    Nested2PartyID(String* data) : StringField(757, data) {}
  };

  public __gc class Nested2PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 758;
    Nested2PartyIDSource() : CharField(758) {}
    Nested2PartyIDSource(__wchar_t data) : CharField(758, data) {}
  };

  public __gc class Nested2PartyRole : public IntField
  {
  public:
    static const int FIELD = 759;
    Nested2PartyRole() : IntField(759) {}
    Nested2PartyRole(int data) : IntField(759, data) {}
  };

  public __gc class Nested2PartySubID : public StringField
  {
  public:
    static const int FIELD = 760;
    Nested2PartySubID() : StringField(760) {}
    Nested2PartySubID(String* data) : StringField(760, data) {}
  };

  public __gc class BenchmarkSecurityIDSource : public StringField
  {
  public:
    static const int FIELD = 761;
    BenchmarkSecurityIDSource() : StringField(761) {}
    BenchmarkSecurityIDSource(String* data) : StringField(761, data) {}
  };

  public __gc class SecuritySubType : public StringField
  {
  public:
    static const int FIELD = 762;
    SecuritySubType() : StringField(762) {}
    SecuritySubType(String* data) : StringField(762, data) {}
  };

  public __gc class UnderlyingSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 763;
    UnderlyingSecuritySubType() : StringField(763) {}
    UnderlyingSecuritySubType(String* data) : StringField(763, data) {}
  };

  public __gc class LegSecuritySubType : public StringField
  {
  public:
    static const int FIELD = 764;
    LegSecuritySubType() : StringField(764) {}
    LegSecuritySubType(String* data) : StringField(764, data) {}
  };

  public __gc class AllowableOneSidednessPct : public DoubleField
  {
  public:
    static const int FIELD = 765;
    AllowableOneSidednessPct() : DoubleField(765) {}
    AllowableOneSidednessPct(double data) : DoubleField(765, data) {}
    AllowableOneSidednessPct(double data, int decimalPadding) : DoubleField(765, data, decimalPadding) {}
  };

  public __gc class AllowableOneSidednessValue : public DoubleField
  {
  public:
    static const int FIELD = 766;
    AllowableOneSidednessValue() : DoubleField(766) {}
    AllowableOneSidednessValue(double data) : DoubleField(766, data) {}
    AllowableOneSidednessValue(double data, int decimalPadding) : DoubleField(766, data, decimalPadding) {}
  };

  public __gc class AllowableOneSidednessCurr : public StringField
  {
  public:
    static const int FIELD = 767;
    AllowableOneSidednessCurr() : StringField(767) {}
    AllowableOneSidednessCurr(String* data) : StringField(767, data) {}
  };

  public __gc class NoTrdRegTimestamps : public IntField
  {
  public:
    static const int FIELD = 768;
    NoTrdRegTimestamps() : IntField(768) {}
    NoTrdRegTimestamps(int data) : IntField(768, data) {}
  };

  public __gc class TrdRegTimestamp : public UtcTimeStampField
  {
  public:
    static const int FIELD = 769;
    TrdRegTimestamp() : UtcTimeStampField(769) {}
    TrdRegTimestamp(DateTime data) : UtcTimeStampField(769, data) {}
  };

  public __gc class TrdRegTimestampType : public IntField
  {
  public:
    static const int FIELD = 770;
    static const int EXECUTIONTIME = 1;
    static const int TIMEIN = 2;
    static const int TIMEOUT = 3;
    static const int BROKERRECEIPT = 4;
    static const int BROKEREXECUTION = 5;
    TrdRegTimestampType() : IntField(770) {}
    TrdRegTimestampType(int data) : IntField(770, data) {}
  };

  public __gc class TrdRegTimestampOrigin : public StringField
  {
  public:
    static const int FIELD = 771;
    TrdRegTimestampOrigin() : StringField(771) {}
    TrdRegTimestampOrigin(String* data) : StringField(771, data) {}
  };

  public __gc class ConfirmRefID : public StringField
  {
  public:
    static const int FIELD = 772;
    ConfirmRefID() : StringField(772) {}
    ConfirmRefID(String* data) : StringField(772, data) {}
  };

  public __gc class ConfirmType : public IntField
  {
  public:
    static const int FIELD = 773;
    static const int STATUS = 1;
    static const int CONFIRMATION = 2;
    static const int CONFIRMATIONREQUESTREJECTED = 3;
    ConfirmType() : IntField(773) {}
    ConfirmType(int data) : IntField(773, data) {}
  };

  public __gc class ConfirmRejReason : public IntField
  {
  public:
    static const int FIELD = 774;
    static const int MISMATCHEDACCOUNT = 1;
    static const int MISSINGSETTLEMENTINSTRUCTIONS = 2;
    static const int OTHER = 99;
    ConfirmRejReason() : IntField(774) {}
    ConfirmRejReason(int data) : IntField(774, data) {}
  };

  public __gc class BookingType : public IntField
  {
  public:
    static const int FIELD = 775;
    static const int REGULARBOOKING = 0;
    static const int CFDCONTRACTFORDIFFERENCE = 1;
    static const int TOTALRETURNSWAP = 2;
    BookingType() : IntField(775) {}
    BookingType(int data) : IntField(775, data) {}
  };

  public __gc class IndividualAllocRejCode : public IntField
  {
  public:
    static const int FIELD = 776;
    IndividualAllocRejCode() : IntField(776) {}
    IndividualAllocRejCode(int data) : IntField(776, data) {}
  };

  public __gc class SettlInstMsgID : public StringField
  {
  public:
    static const int FIELD = 777;
    SettlInstMsgID() : StringField(777) {}
    SettlInstMsgID(String* data) : StringField(777, data) {}
  };

  public __gc class NoSettlInst : public IntField
  {
  public:
    static const int FIELD = 778;
    NoSettlInst() : IntField(778) {}
    NoSettlInst(int data) : IntField(778, data) {}
  };

  public __gc class LastUpdateTime : public UtcTimeStampField
  {
  public:
    static const int FIELD = 779;
    LastUpdateTime() : UtcTimeStampField(779) {}
    LastUpdateTime(DateTime data) : UtcTimeStampField(779, data) {}
  };

  public __gc class AllocSettlInstType : public IntField
  {
  public:
    static const int FIELD = 780;
    static const int USEDEFAULTINSTRUCTIONS = 0;
    static const int DERIVEFROMPARAMETERSPROVIDED = 1;
    static const int FULLDETAILSPROVIDED = 2;
    static const int SSIDBIDSPROVIDED = 3;
    static const int PHONEFORINSTRUCTIONS = 4;
    AllocSettlInstType() : IntField(780) {}
    AllocSettlInstType(int data) : IntField(780, data) {}
  };

  public __gc class NoSettlPartyIDs : public IntField
  {
  public:
    static const int FIELD = 781;
    NoSettlPartyIDs() : IntField(781) {}
    NoSettlPartyIDs(int data) : IntField(781, data) {}
  };

  public __gc class SettlPartyID : public StringField
  {
  public:
    static const int FIELD = 782;
    SettlPartyID() : StringField(782) {}
    SettlPartyID(String* data) : StringField(782, data) {}
  };

  public __gc class SettlPartyIDSource : public CharField
  {
  public:
    static const int FIELD = 783;
    SettlPartyIDSource() : CharField(783) {}
    SettlPartyIDSource(__wchar_t data) : CharField(783, data) {}
  };

  public __gc class SettlPartyRole : public IntField
  {
  public:
    static const int FIELD = 784;
    SettlPartyRole() : IntField(784) {}
    SettlPartyRole(int data) : IntField(784, data) {}
  };

  public __gc class SettlPartySubID : public StringField
  {
  public:
    static const int FIELD = 785;
    SettlPartySubID() : StringField(785) {}
    SettlPartySubID(String* data) : StringField(785, data) {}
  };

  public __gc class SettlPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 786;
    SettlPartySubIDType() : IntField(786) {}
    SettlPartySubIDType(int data) : IntField(786, data) {}
  };

  public __gc class DlvyInstType : public CharField
  {
  public:
    static const int FIELD = 787;
    static const __wchar_t CASH = 'C';
    static const __wchar_t SECURITIES = 'S';
    DlvyInstType() : CharField(787) {}
    DlvyInstType(__wchar_t data) : CharField(787, data) {}
  };

  public __gc class TerminationType : public IntField
  {
  public:
    static const int FIELD = 788;
    static const int OVERNIGHT = 1;
    static const int TERM = 2;
    static const int FLEXIBLE = 3;
    static const int OPEN = 4;
    TerminationType() : IntField(788) {}
    TerminationType(int data) : IntField(788, data) {}
  };

  public __gc class NextExpectedMsgSeqNum : public IntField
  {
  public:
    static const int FIELD = 789;
    NextExpectedMsgSeqNum() : IntField(789) {}
    NextExpectedMsgSeqNum(int data) : IntField(789, data) {}
  };

  public __gc class OrdStatusReqID : public StringField
  {
  public:
    static const int FIELD = 790;
    OrdStatusReqID() : StringField(790) {}
    OrdStatusReqID(String* data) : StringField(790, data) {}
  };

  public __gc class SettlInstReqID : public StringField
  {
  public:
    static const int FIELD = 791;
    SettlInstReqID() : StringField(791) {}
    SettlInstReqID(String* data) : StringField(791, data) {}
  };

  public __gc class SettlInstReqRejCode : public IntField
  {
  public:
    static const int FIELD = 792;
    static const int UNABLETOPROCESSREQUEST = 0;
    static const int UNKNOWNACCOUNT = 1;
    static const int NOMATCHINGSETTLEMENTINSTRUCTIONSFOUND = 2;
    static const int OTHER = 99;
    SettlInstReqRejCode() : IntField(792) {}
    SettlInstReqRejCode(int data) : IntField(792, data) {}
  };

  public __gc class SecondaryAllocID : public StringField
  {
  public:
    static const int FIELD = 793;
    SecondaryAllocID() : StringField(793) {}
    SecondaryAllocID(String* data) : StringField(793, data) {}
  };

  public __gc class AllocReportType : public IntField
  {
  public:
    static const int FIELD = 794;
    static const int SELLSIDECALCULATEDUSINGPRELIMINARY = 3;
    static const int SELLSIDECALCULATEDWITHOUTPRELIMINARY = 4;
    static const int WAREHOUSERECAP = 5;
    static const int REQUESTTOINTERMEDIARY = 8;
    AllocReportType() : IntField(794) {}
    AllocReportType(int data) : IntField(794, data) {}
  };

  public __gc class AllocReportRefID : public StringField
  {
  public:
    static const int FIELD = 795;
    AllocReportRefID() : StringField(795) {}
    AllocReportRefID(String* data) : StringField(795, data) {}
  };

  public __gc class AllocCancReplaceReason : public IntField
  {
  public:
    static const int FIELD = 796;
    static const int ORIGINALDETAILSINCORRECT = 1;
    static const int CHANGEINUNDERLYINGORDERDETAILS = 2;
    static const int OTHER = 99;
    AllocCancReplaceReason() : IntField(796) {}
    AllocCancReplaceReason(int data) : IntField(796, data) {}
  };

  public __gc class CopyMsgIndicator : public BooleanField
  {
  public:
    static const int FIELD = 797;
    CopyMsgIndicator() : BooleanField(797) {}
    CopyMsgIndicator(bool data) : BooleanField(797, data) {}
  };

  public __gc class AllocAccountType : public IntField
  {
  public:
    static const int FIELD = 798;
    static const int ACCOUNTISCARRIEDONCUSTOMERSIDEOFBOOKS = 1;
    static const int ACCOUNTISCARRIEDONNONCUSTOMERSIDEOFBOOKS = 2;
    static const int HOUSETRADER = 3;
    static const int FLOORTRADER = 4;
    static const int ACCOUNTISCARRIEDONNONCUSTOMERSIDEOFBOOKSANDISCROSSMARGINED = 6;
    static const int ACCOUNTISHOUSETRADERANDISCROSSMARGINED = 7;
    static const int JBO = 8;
    AllocAccountType() : IntField(798) {}
    AllocAccountType(int data) : IntField(798, data) {}
  };

  public __gc class OrderAvgPx : public DoubleField
  {
  public:
    static const int FIELD = 799;
    OrderAvgPx() : DoubleField(799) {}
    OrderAvgPx(double data) : DoubleField(799, data) {}
    OrderAvgPx(double data, int decimalPadding) : DoubleField(799, data, decimalPadding) {}
  };

  public __gc class OrderBookingQty : public DoubleField
  {
  public:
    static const int FIELD = 800;
    OrderBookingQty() : DoubleField(800) {}
    OrderBookingQty(double data) : DoubleField(800, data) {}
    OrderBookingQty(double data, int decimalPadding) : DoubleField(800, data, decimalPadding) {}
  };

  public __gc class NoSettlPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 801;
    NoSettlPartySubIDs() : IntField(801) {}
    NoSettlPartySubIDs(int data) : IntField(801, data) {}
  };

  public __gc class NoPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 802;
    NoPartySubIDs() : IntField(802) {}
    NoPartySubIDs(int data) : IntField(802, data) {}
  };

  public __gc class PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 803;
    static const int FIRM = 1;
    static const int SECURITIESACCOUNTNUMBER = 10;
    static const int REGISTRATIONNUMBER = 11;
    static const int REGISTEREDADDRESS_12 = 12;
    static const int REGULATORYSTATUS = 13;
    static const int REGISTRATIONNAME = 14;
    static const int CASHACCOUNT = 15;
    static const int BIC = 16;
    static const int CSDPARTICIPANTMEMBERCODE = 17;
    static const int REGISTEREDADDRESS_18 = 18;
    static const int FUNDACCOUNTNAME = 19;
    static const int PERSON = 2;
    static const int TELEXNUMBER = 20;
    static const int FAXNUMBER = 21;
    static const int SECURITIESACCOUNTNAME = 22;
    static const int CASHACCOUNTNAME = 23;
    static const int DEPARTMENT = 24;
    static const int LOCATIONDESK = 25;
    static const int POSITIONACCOUNTTYPE = 26;
    static const int SYSTEM = 3;
    static const int APPLICATION = 4;
    static const int RESERVEDANDAVAILABLEFORBILATERALLYAGREEDUPONUSERDEFINEDVALUES = 4000;
    static const int FULLLEGALNAMEOFFIRM = 5;
    static const int POSTALADDRESS = 6;
    static const int PHONENUMBER = 7;
    static const int EMAILADDRESS = 8;
    static const int CONTACTNAME = 9;
    PartySubIDType() : IntField(803) {}
    PartySubIDType(int data) : IntField(803, data) {}
  };

  public __gc class NoNestedPartySubIDs : public IntField
  {
  public:
    static const int FIELD = 804;
    NoNestedPartySubIDs() : IntField(804) {}
    NoNestedPartySubIDs(int data) : IntField(804, data) {}
  };

  public __gc class NestedPartySubIDType : public IntField
  {
  public:
    static const int FIELD = 805;
    NestedPartySubIDType() : IntField(805) {}
    NestedPartySubIDType(int data) : IntField(805, data) {}
  };

  public __gc class NoNested2PartySubIDs : public IntField
  {
  public:
    static const int FIELD = 806;
    NoNested2PartySubIDs() : IntField(806) {}
    NoNested2PartySubIDs(int data) : IntField(806, data) {}
  };

  public __gc class Nested2PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 807;
    Nested2PartySubIDType() : IntField(807) {}
    Nested2PartySubIDType(int data) : IntField(807, data) {}
  };

  public __gc class AllocIntermedReqType : public IntField
  {
  public:
    static const int FIELD = 808;
    static const int PENDINGACCEPT = 1;
    static const int PENDINGRELEASE = 2;
    static const int PENDINGREVERSAL = 3;
    static const int ACCEPT = 4;
    static const int BLOCKLEVELREJECT = 5;
    static const int ACCOUNTLEVELREJECT = 6;
    AllocIntermedReqType() : IntField(808) {}
    AllocIntermedReqType(int data) : IntField(808, data) {}
  };

  public __gc class UnderlyingPx : public DoubleField
  {
  public:
    static const int FIELD = 810;
    UnderlyingPx() : DoubleField(810) {}
    UnderlyingPx(double data) : DoubleField(810, data) {}
    UnderlyingPx(double data, int decimalPadding) : DoubleField(810, data, decimalPadding) {}
  };

  public __gc class PriceDelta : public DoubleField
  {
  public:
    static const int FIELD = 811;
    PriceDelta() : DoubleField(811) {}
    PriceDelta(double data) : DoubleField(811, data) {}
    PriceDelta(double data, int decimalPadding) : DoubleField(811, data, decimalPadding) {}
  };

  public __gc class ApplQueueMax : public IntField
  {
  public:
    static const int FIELD = 812;
    ApplQueueMax() : IntField(812) {}
    ApplQueueMax(int data) : IntField(812, data) {}
  };

  public __gc class ApplQueueDepth : public IntField
  {
  public:
    static const int FIELD = 813;
    ApplQueueDepth() : IntField(813) {}
    ApplQueueDepth(int data) : IntField(813, data) {}
  };

  public __gc class ApplQueueResolution : public IntField
  {
  public:
    static const int FIELD = 814;
    static const int NOACTIONTAKEN = 0;
    static const int QUEUEFLUSHED = 1;
    static const int OVERLAYLAST = 2;
    static const int ENDSESSION = 3;
    ApplQueueResolution() : IntField(814) {}
    ApplQueueResolution(int data) : IntField(814, data) {}
  };

  public __gc class ApplQueueAction : public IntField
  {
  public:
    static const int FIELD = 815;
    static const int NOACTIONTAKEN = 0;
    static const int QUEUEFLUSHED = 1;
    static const int OVERLAYLAST = 2;
    static const int ENDSESSION = 3;
    ApplQueueAction() : IntField(815) {}
    ApplQueueAction(int data) : IntField(815, data) {}
  };

  public __gc class NoAltMDSource : public IntField
  {
  public:
    static const int FIELD = 816;
    NoAltMDSource() : IntField(816) {}
    NoAltMDSource(int data) : IntField(816, data) {}
  };

  public __gc class AltMDSourceID : public StringField
  {
  public:
    static const int FIELD = 817;
    AltMDSourceID() : StringField(817) {}
    AltMDSourceID(String* data) : StringField(817, data) {}
  };

  public __gc class SecondaryTradeReportID : public StringField
  {
  public:
    static const int FIELD = 818;
    SecondaryTradeReportID() : StringField(818) {}
    SecondaryTradeReportID(String* data) : StringField(818, data) {}
  };

  public __gc class AvgPxIndicator : public IntField
  {
  public:
    static const int FIELD = 819;
    static const int NOAVERAGEPRICING = 0;
    static const int TRADEAVERAGEPRICEGROUP = 1;
    static const int LASTTRADEAVERAGEPRICEGROUP = 2;
    AvgPxIndicator() : IntField(819) {}
    AvgPxIndicator(int data) : IntField(819, data) {}
  };

  public __gc class TradeLinkID : public StringField
  {
  public:
    static const int FIELD = 820;
    TradeLinkID() : StringField(820) {}
    TradeLinkID(String* data) : StringField(820, data) {}
  };

  public __gc class OrderInputDevice : public StringField
  {
  public:
    static const int FIELD = 821;
    OrderInputDevice() : StringField(821) {}
    OrderInputDevice(String* data) : StringField(821, data) {}
  };

  public __gc class UnderlyingTradingSessionID : public StringField
  {
  public:
    static const int FIELD = 822;
    UnderlyingTradingSessionID() : StringField(822) {}
    UnderlyingTradingSessionID(String* data) : StringField(822, data) {}
  };

  public __gc class UnderlyingTradingSessionSubID : public StringField
  {
  public:
    static const int FIELD = 823;
    UnderlyingTradingSessionSubID() : StringField(823) {}
    UnderlyingTradingSessionSubID(String* data) : StringField(823, data) {}
  };

  public __gc class TradeLegRefID : public StringField
  {
  public:
    static const int FIELD = 824;
    TradeLegRefID() : StringField(824) {}
    TradeLegRefID(String* data) : StringField(824, data) {}
  };

  public __gc class ExchangeRule : public StringField
  {
  public:
    static const int FIELD = 825;
    ExchangeRule() : StringField(825) {}
    ExchangeRule(String* data) : StringField(825, data) {}
  };

  public __gc class TradeAllocIndicator : public IntField
  {
  public:
    static const int FIELD = 826;
    static const int ALLOCATIONNOTREQUIRED = 0;
    static const int ALLOCATIONREQUIREDALLOCATIONINFORMATIONNOTPROVIDED = 1;
    static const int USEALLOCATIONPROVIDEDWITHTHETRADE = 2;
    TradeAllocIndicator() : IntField(826) {}
    TradeAllocIndicator(int data) : IntField(826, data) {}
  };

  public __gc class ExpirationCycle : public IntField
  {
  public:
    static const int FIELD = 827;
    static const int EXPIREONTRADINGSESSIONCLOSE = 0;
    static const int EXPIREONTRADINGSESSIONOPEN = 1;
    ExpirationCycle() : IntField(827) {}
    ExpirationCycle(int data) : IntField(827, data) {}
  };

  public __gc class TrdType : public IntField
  {
  public:
    static const int FIELD = 828;
    static const int REGULARTRADE = 0;
    static const int BLOCKTRADE = 1;
    static const int AFTERHOURSTRADE = 10;
    static const int EFP = 2;
    static const int TRANSFER = 3;
    static const int LATETRADE = 4;
    static const int TTRADE = 5;
    static const int WEIGHTEDAVERAGEPRICETRADE = 6;
    static const int BUNCHEDTRADE = 7;
    static const int LATEBUNCHEDTRADE = 8;
    static const int PRIORREFERENCEPRICETRADE = 9;
    TrdType() : IntField(828) {}
    TrdType(int data) : IntField(828, data) {}
  };

  public __gc class TrdSubType : public IntField
  {
  public:
    static const int FIELD = 829;
    TrdSubType() : IntField(829) {}
    TrdSubType(int data) : IntField(829, data) {}
  };

  public __gc class TransferReason : public StringField
  {
  public:
    static const int FIELD = 830;
    TransferReason() : StringField(830) {}
    TransferReason(String* data) : StringField(830, data) {}
  };

  public __gc class AsgnReqID : public StringField
  {
  public:
    static const int FIELD = 831;
    AsgnReqID() : StringField(831) {}
    AsgnReqID(String* data) : StringField(831, data) {}
  };

  public __gc class TotNumAssignmentReports : public IntField
  {
  public:
    static const int FIELD = 832;
    TotNumAssignmentReports() : IntField(832) {}
    TotNumAssignmentReports(int data) : IntField(832, data) {}
  };

  public __gc class AsgnRptID : public StringField
  {
  public:
    static const int FIELD = 833;
    AsgnRptID() : StringField(833) {}
    AsgnRptID(String* data) : StringField(833, data) {}
  };

  public __gc class ThresholdAmount : public DoubleField
  {
  public:
    static const int FIELD = 834;
    ThresholdAmount() : DoubleField(834) {}
    ThresholdAmount(double data) : DoubleField(834, data) {}
    ThresholdAmount(double data, int decimalPadding) : DoubleField(834, data, decimalPadding) {}
  };

  public __gc class PegMoveType : public IntField
  {
  public:
    static const int FIELD = 835;
    static const int FLOATING = 0;
    static const int FIXED = 1;
    PegMoveType() : IntField(835) {}
    PegMoveType(int data) : IntField(835, data) {}
  };

  public __gc class PegOffsetType : public IntField
  {
  public:
    static const int FIELD = 836;
    static const int PRICE = 0;
    static const int BASISPOINTS = 1;
    static const int TICKS = 2;
    static const int PRICETIERLEVEL = 3;
    PegOffsetType() : IntField(836) {}
    PegOffsetType(int data) : IntField(836, data) {}
  };

  public __gc class PegLimitType : public IntField
  {
  public:
    static const int FIELD = 837;
    static const int ORBETTER = 0;
    static const int STRICT = 1;
    static const int ORWORSE = 2;
    PegLimitType() : IntField(837) {}
    PegLimitType(int data) : IntField(837, data) {}
  };

  public __gc class PegRoundDirection : public IntField
  {
  public:
    static const int FIELD = 838;
    static const int MOREAGGRESSIVE = 1;
    static const int MOREPASSIVE = 2;
    PegRoundDirection() : IntField(838) {}
    PegRoundDirection(int data) : IntField(838, data) {}
  };

  public __gc class PeggedPrice : public DoubleField
  {
  public:
    static const int FIELD = 839;
    PeggedPrice() : DoubleField(839) {}
    PeggedPrice(double data) : DoubleField(839, data) {}
    PeggedPrice(double data, int decimalPadding) : DoubleField(839, data, decimalPadding) {}
  };

  public __gc class PegScope : public IntField
  {
  public:
    static const int FIELD = 840;
    static const int LOCALEXCHANGEECNATS = 1;
    static const int NATIONAL = 2;
    static const int GLOBAL = 3;
    static const int NATIONALEXCLUDINGLOCAL = 4;
    PegScope() : IntField(840) {}
    PegScope(int data) : IntField(840, data) {}
  };

  public __gc class DiscretionMoveType : public IntField
  {
  public:
    static const int FIELD = 841;
    static const int FLOATING = 0;
    static const int FIXED = 1;
    DiscretionMoveType() : IntField(841) {}
    DiscretionMoveType(int data) : IntField(841, data) {}
  };

  public __gc class DiscretionOffsetType : public IntField
  {
  public:
    static const int FIELD = 842;
    static const int PRICE = 0;
    static const int BASISPOINTS = 1;
    static const int TICKS = 2;
    static const int PRICETIERLEVEL = 3;
    DiscretionOffsetType() : IntField(842) {}
    DiscretionOffsetType(int data) : IntField(842, data) {}
  };

  public __gc class DiscretionLimitType : public IntField
  {
  public:
    static const int FIELD = 843;
    static const int ORBETTER = 0;
    static const int STRICT = 1;
    static const int ORWORSE = 2;
    DiscretionLimitType() : IntField(843) {}
    DiscretionLimitType(int data) : IntField(843, data) {}
  };

  public __gc class DiscretionRoundDirection : public IntField
  {
  public:
    static const int FIELD = 844;
    static const int MOREAGGRESSIVE = 1;
    static const int MOREPASSIVE = 2;
    DiscretionRoundDirection() : IntField(844) {}
    DiscretionRoundDirection(int data) : IntField(844, data) {}
  };

  public __gc class DiscretionPrice : public DoubleField
  {
  public:
    static const int FIELD = 845;
    DiscretionPrice() : DoubleField(845) {}
    DiscretionPrice(double data) : DoubleField(845, data) {}
    DiscretionPrice(double data, int decimalPadding) : DoubleField(845, data, decimalPadding) {}
  };

  public __gc class DiscretionScope : public IntField
  {
  public:
    static const int FIELD = 846;
    static const int LOCALEXCHANGEECNATS = 1;
    static const int NATIONAL = 2;
    static const int GLOBAL = 3;
    static const int NATIONALEXCLUDINGLOCAL = 4;
    DiscretionScope() : IntField(846) {}
    DiscretionScope(int data) : IntField(846, data) {}
  };

  public __gc class TargetStrategy : public IntField
  {
  public:
    static const int FIELD = 847;
    static const int VWAP = 1;
    static const int RESERVEDANDAVAILABLEFORBILATERALLYAGREEDUPONUSERDEFINEDVALUES = 1000;
    static const int PARTICIPATE = 2;
    static const int MININIZEMARKETIMPACT = 3;
    TargetStrategy() : IntField(847) {}
    TargetStrategy(int data) : IntField(847, data) {}
  };

  public __gc class TargetStrategyParameters : public StringField
  {
  public:
    static const int FIELD = 848;
    TargetStrategyParameters() : StringField(848) {}
    TargetStrategyParameters(String* data) : StringField(848, data) {}
  };

  public __gc class ParticipationRate : public DoubleField
  {
  public:
    static const int FIELD = 849;
    ParticipationRate() : DoubleField(849) {}
    ParticipationRate(double data) : DoubleField(849, data) {}
    ParticipationRate(double data, int decimalPadding) : DoubleField(849, data, decimalPadding) {}
  };

  public __gc class TargetStrategyPerformance : public DoubleField
  {
  public:
    static const int FIELD = 850;
    TargetStrategyPerformance() : DoubleField(850) {}
    TargetStrategyPerformance(double data) : DoubleField(850, data) {}
    TargetStrategyPerformance(double data, int decimalPadding) : DoubleField(850, data, decimalPadding) {}
  };

  public __gc class LastLiquidityInd : public IntField
  {
  public:
    static const int FIELD = 851;
    static const int ADDEDLIQUIDITY = 1;
    static const int REMOVEDLIQUIDITY = 2;
    static const int LIQUIDITYROUTEDOUT = 3;
    LastLiquidityInd() : IntField(851) {}
    LastLiquidityInd(int data) : IntField(851, data) {}
  };

  public __gc class PublishTrdIndicator : public BooleanField
  {
  public:
    static const int FIELD = 852;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    PublishTrdIndicator() : BooleanField(852) {}
    PublishTrdIndicator(bool data) : BooleanField(852, data) {}
  };

  public __gc class ShortSaleReason : public IntField
  {
  public:
    static const int FIELD = 853;
    static const int DEALERSOLDSHORT = 0;
    static const int DEALERSOLDSHORTEXEMPT = 1;
    static const int SELLINGCUSTOMERSOLDSHORT = 2;
    static const int SELLINGCUSTOMERSOLDSHORTEXEMPT = 3;
    static const int QSRORAGUCONTRASIDESOLDSHORT = 4;
    static const int QSRORAGUCONTRASIDESOLDSHORTEXEMPT = 5;
    ShortSaleReason() : IntField(853) {}
    ShortSaleReason(int data) : IntField(853, data) {}
  };

  public __gc class QtyType : public IntField
  {
  public:
    static const int FIELD = 854;
    static const int UNITS = 0;
    static const int CONTRACTS = 1;
    QtyType() : IntField(854) {}
    QtyType(int data) : IntField(854, data) {}
  };

  public __gc class SecondaryTrdType : public IntField
  {
  public:
    static const int FIELD = 855;
    SecondaryTrdType() : IntField(855) {}
    SecondaryTrdType(int data) : IntField(855, data) {}
  };

  public __gc class TradeReportType : public IntField
  {
  public:
    static const int FIELD = 856;
    static const int SUBMIT = 0;
    static const int ALLEGED = 1;
    static const int ACCEPT = 2;
    static const int DECLINE = 3;
    static const int ADDENDUM = 4;
    static const int NOWAS = 5;
    static const int TRADEREPORTCANCEL = 6;
    static const int LOCKEDINTRADEBREAK = 7;
    TradeReportType() : IntField(856) {}
    TradeReportType(int data) : IntField(856, data) {}
  };

  public __gc class AllocNoOrdersType : public IntField
  {
  public:
    static const int FIELD = 857;
    static const int NOTSPECIFIED = 0;
    static const int EXPLICITLISTPROVIDED = 1;
    AllocNoOrdersType() : IntField(857) {}
    AllocNoOrdersType(int data) : IntField(857, data) {}
  };

  public __gc class SharedCommission : public DoubleField
  {
  public:
    static const int FIELD = 858;
    SharedCommission() : DoubleField(858) {}
    SharedCommission(double data) : DoubleField(858, data) {}
    SharedCommission(double data, int decimalPadding) : DoubleField(858, data, decimalPadding) {}
  };

  public __gc class ConfirmReqID : public StringField
  {
  public:
    static const int FIELD = 859;
    ConfirmReqID() : StringField(859) {}
    ConfirmReqID(String* data) : StringField(859, data) {}
  };

  public __gc class AvgParPx : public DoubleField
  {
  public:
    static const int FIELD = 860;
    AvgParPx() : DoubleField(860) {}
    AvgParPx(double data) : DoubleField(860, data) {}
    AvgParPx(double data, int decimalPadding) : DoubleField(860, data, decimalPadding) {}
  };

  public __gc class ReportedPx : public DoubleField
  {
  public:
    static const int FIELD = 861;
    ReportedPx() : DoubleField(861) {}
    ReportedPx(double data) : DoubleField(861, data) {}
    ReportedPx(double data, int decimalPadding) : DoubleField(861, data, decimalPadding) {}
  };

  public __gc class NoCapacities : public IntField
  {
  public:
    static const int FIELD = 862;
    NoCapacities() : IntField(862) {}
    NoCapacities(int data) : IntField(862, data) {}
  };

  public __gc class OrderCapacityQty : public DoubleField
  {
  public:
    static const int FIELD = 863;
    OrderCapacityQty() : DoubleField(863) {}
    OrderCapacityQty(double data) : DoubleField(863, data) {}
    OrderCapacityQty(double data, int decimalPadding) : DoubleField(863, data, decimalPadding) {}
  };

  public __gc class NoEvents : public IntField
  {
  public:
    static const int FIELD = 864;
    NoEvents() : IntField(864) {}
    NoEvents(int data) : IntField(864, data) {}
  };

  public __gc class EventType : public IntField
  {
  public:
    static const int FIELD = 865;
    static const int PUT = 1;
    static const int CALL = 2;
    static const int TENDER = 3;
    static const int SINKINGFUNDCALL = 4;
    static const int OTHER = 99;
    EventType() : IntField(865) {}
    EventType(int data) : IntField(865, data) {}
  };

  public __gc class EventDate : public StringField
  {
  public:
    static const int FIELD = 866;
    EventDate() : StringField(866) {}
    EventDate(String* data) : StringField(866, data) {}
  };

  public __gc class EventPx : public DoubleField
  {
  public:
    static const int FIELD = 867;
    EventPx() : DoubleField(867) {}
    EventPx(double data) : DoubleField(867, data) {}
    EventPx(double data, int decimalPadding) : DoubleField(867, data, decimalPadding) {}
  };

  public __gc class EventText : public StringField
  {
  public:
    static const int FIELD = 868;
    EventText() : StringField(868) {}
    EventText(String* data) : StringField(868, data) {}
  };

  public __gc class PctAtRisk : public DoubleField
  {
  public:
    static const int FIELD = 869;
    PctAtRisk() : DoubleField(869) {}
    PctAtRisk(double data) : DoubleField(869, data) {}
    PctAtRisk(double data, int decimalPadding) : DoubleField(869, data, decimalPadding) {}
  };

  public __gc class NoInstrAttrib : public IntField
  {
  public:
    static const int FIELD = 870;
    NoInstrAttrib() : IntField(870) {}
    NoInstrAttrib(int data) : IntField(870, data) {}
  };

  public __gc class InstrAttribType : public IntField
  {
  public:
    static const int FIELD = 871;
    static const int FLAT = 1;
    static const int ORIGINALISSUEDISCOUNT = 10;
    static const int CALLABLEPUTTABLE = 11;
    static const int ESCROWEDTOMATURITY = 12;
    static const int ESCROWEDTOREDEMPTIONDATE = 13;
    static const int PREREFUNDED = 14;
    static const int INDEFAULT = 15;
    static const int UNRATED = 16;
    static const int TAXABLE = 17;
    static const int INDEXED = 18;
    static const int SUBJECTTOALTERNATIVEMINIMUMTAX = 19;
    static const int ZEROCOUPON = 2;
    static const int ORIGINALISSUEDISCOUNTPRICE = 20;
    static const int CALLABLEBELOWMATURITYVALUE = 21;
    static const int CALLABLEWITHOUTNOTICEBYMAILTOHOLDERUNLESSREGISTERED = 22;
    static const int INTERESTBEARING = 3;
    static const int NOPERIODICPAYMENTS = 4;
    static const int VARIABLERATE = 5;
    static const int LESSFEEFORPUT = 6;
    static const int STEPPEDCOUPON = 7;
    static const int COUPONPERIOD = 8;
    static const int WHENISSUED = 9;
    static const int TEXT = 99;
    InstrAttribType() : IntField(871) {}
    InstrAttribType(int data) : IntField(871, data) {}
  };

  public __gc class InstrAttribValue : public StringField
  {
  public:
    static const int FIELD = 872;
    InstrAttribValue() : StringField(872) {}
    InstrAttribValue(String* data) : StringField(872, data) {}
  };

  public __gc class DatedDate : public StringField
  {
  public:
    static const int FIELD = 873;
    DatedDate() : StringField(873) {}
    DatedDate(String* data) : StringField(873, data) {}
  };

  public __gc class InterestAccrualDate : public StringField
  {
  public:
    static const int FIELD = 874;
    InterestAccrualDate() : StringField(874) {}
    InterestAccrualDate(String* data) : StringField(874, data) {}
  };

  public __gc class CPProgram : public IntField
  {
  public:
    static const int FIELD = 875;
    static const int _3A3 = 1;
    static const int _42 = 2;
    static const int OTHER = 99;
    CPProgram() : IntField(875) {}
    CPProgram(int data) : IntField(875, data) {}
  };

  public __gc class CPRegType : public StringField
  {
  public:
    static const int FIELD = 876;
    CPRegType() : StringField(876) {}
    CPRegType(String* data) : StringField(876, data) {}
  };

  public __gc class UnderlyingCPProgram : public StringField
  {
  public:
    static const int FIELD = 877;
    UnderlyingCPProgram() : StringField(877) {}
    UnderlyingCPProgram(String* data) : StringField(877, data) {}
  };

  public __gc class UnderlyingCPRegType : public StringField
  {
  public:
    static const int FIELD = 878;
    UnderlyingCPRegType() : StringField(878) {}
    UnderlyingCPRegType(String* data) : StringField(878, data) {}
  };

  public __gc class UnderlyingQty : public DoubleField
  {
  public:
    static const int FIELD = 879;
    UnderlyingQty() : DoubleField(879) {}
    UnderlyingQty(double data) : DoubleField(879, data) {}
    UnderlyingQty(double data, int decimalPadding) : DoubleField(879, data, decimalPadding) {}
  };

  public __gc class TrdMatchID : public StringField
  {
  public:
    static const int FIELD = 880;
    TrdMatchID() : StringField(880) {}
    TrdMatchID(String* data) : StringField(880, data) {}
  };

  public __gc class SecondaryTradeReportRefID : public StringField
  {
  public:
    static const int FIELD = 881;
    SecondaryTradeReportRefID() : StringField(881) {}
    SecondaryTradeReportRefID(String* data) : StringField(881, data) {}
  };

  public __gc class UnderlyingDirtyPrice : public DoubleField
  {
  public:
    static const int FIELD = 882;
    UnderlyingDirtyPrice() : DoubleField(882) {}
    UnderlyingDirtyPrice(double data) : DoubleField(882, data) {}
    UnderlyingDirtyPrice(double data, int decimalPadding) : DoubleField(882, data, decimalPadding) {}
  };

  public __gc class UnderlyingEndPrice : public DoubleField
  {
  public:
    static const int FIELD = 883;
    UnderlyingEndPrice() : DoubleField(883) {}
    UnderlyingEndPrice(double data) : DoubleField(883, data) {}
    UnderlyingEndPrice(double data, int decimalPadding) : DoubleField(883, data, decimalPadding) {}
  };

  public __gc class UnderlyingStartValue : public DoubleField
  {
  public:
    static const int FIELD = 884;
    UnderlyingStartValue() : DoubleField(884) {}
    UnderlyingStartValue(double data) : DoubleField(884, data) {}
    UnderlyingStartValue(double data, int decimalPadding) : DoubleField(884, data, decimalPadding) {}
  };

  public __gc class UnderlyingCurrentValue : public DoubleField
  {
  public:
    static const int FIELD = 885;
    UnderlyingCurrentValue() : DoubleField(885) {}
    UnderlyingCurrentValue(double data) : DoubleField(885, data) {}
    UnderlyingCurrentValue(double data, int decimalPadding) : DoubleField(885, data, decimalPadding) {}
  };

  public __gc class UnderlyingEndValue : public DoubleField
  {
  public:
    static const int FIELD = 886;
    UnderlyingEndValue() : DoubleField(886) {}
    UnderlyingEndValue(double data) : DoubleField(886, data) {}
    UnderlyingEndValue(double data, int decimalPadding) : DoubleField(886, data, decimalPadding) {}
  };

  public __gc class NoUnderlyingStips : public IntField
  {
  public:
    static const int FIELD = 887;
    NoUnderlyingStips() : IntField(887) {}
    NoUnderlyingStips(int data) : IntField(887, data) {}
  };

  public __gc class UnderlyingStipType : public StringField
  {
  public:
    static const int FIELD = 888;
    UnderlyingStipType() : StringField(888) {}
    UnderlyingStipType(String* data) : StringField(888, data) {}
  };

  public __gc class UnderlyingStipValue : public StringField
  {
  public:
    static const int FIELD = 889;
    UnderlyingStipValue() : StringField(889) {}
    UnderlyingStipValue(String* data) : StringField(889, data) {}
  };

  public __gc class MaturityNetMoney : public DoubleField
  {
  public:
    static const int FIELD = 890;
    MaturityNetMoney() : DoubleField(890) {}
    MaturityNetMoney(double data) : DoubleField(890, data) {}
    MaturityNetMoney(double data, int decimalPadding) : DoubleField(890, data, decimalPadding) {}
  };

  public __gc class MiscFeeBasis : public IntField
  {
  public:
    static const int FIELD = 891;
    static const int ABSOLUTE = 0;
    static const int PERUNIT = 1;
    static const int PERCENTAGE = 2;
    MiscFeeBasis() : IntField(891) {}
    MiscFeeBasis(int data) : IntField(891, data) {}
  };

  public __gc class TotNoAllocs : public IntField
  {
  public:
    static const int FIELD = 892;
    TotNoAllocs() : IntField(892) {}
    TotNoAllocs(int data) : IntField(892, data) {}
  };

  public __gc class LastFragment : public BooleanField
  {
  public:
    static const int FIELD = 893;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LastFragment() : BooleanField(893) {}
    LastFragment(bool data) : BooleanField(893, data) {}
  };

  public __gc class CollReqID : public StringField
  {
  public:
    static const int FIELD = 894;
    CollReqID() : StringField(894) {}
    CollReqID(String* data) : StringField(894, data) {}
  };

  public __gc class CollAsgnReason : public IntField
  {
  public:
    static const int FIELD = 895;
    static const int INITIAL = 0;
    static const int SCHEDULED = 1;
    static const int TIMEWARNING = 2;
    static const int MARGINDEFICIENCY = 3;
    static const int MARGINEXCESS = 4;
    static const int FORWARDCOLLATERALDEMAND = 5;
    static const int EVENTOFDEFAULT = 6;
    static const int ADVERSETAXEVENT = 7;
    CollAsgnReason() : IntField(895) {}
    CollAsgnReason(int data) : IntField(895, data) {}
  };

  public __gc class CollInquiryQualifier : public IntField
  {
  public:
    static const int FIELD = 896;
    static const int TRADEDATE = 0;
    static const int GCINSTRUMENT = 1;
    static const int COLLATERALINSTRUMENT = 2;
    static const int SUBSTITUTIONELIGIBLE = 3;
    static const int NOTASSIGNED = 4;
    static const int PARTIALLYASSIGNED = 5;
    static const int FULLYASSIGNED = 6;
    static const int OUTSTANDINGTRADES = 7;
    CollInquiryQualifier() : IntField(896) {}
    CollInquiryQualifier(int data) : IntField(896, data) {}
  };

  public __gc class NoTrades : public IntField
  {
  public:
    static const int FIELD = 897;
    NoTrades() : IntField(897) {}
    NoTrades(int data) : IntField(897, data) {}
  };

  public __gc class MarginRatio : public DoubleField
  {
  public:
    static const int FIELD = 898;
    MarginRatio() : DoubleField(898) {}
    MarginRatio(double data) : DoubleField(898, data) {}
    MarginRatio(double data, int decimalPadding) : DoubleField(898, data, decimalPadding) {}
  };

  public __gc class MarginExcess : public DoubleField
  {
  public:
    static const int FIELD = 899;
    MarginExcess() : DoubleField(899) {}
    MarginExcess(double data) : DoubleField(899, data) {}
    MarginExcess(double data, int decimalPadding) : DoubleField(899, data, decimalPadding) {}
  };

  public __gc class TotalNetValue : public DoubleField
  {
  public:
    static const int FIELD = 900;
    TotalNetValue() : DoubleField(900) {}
    TotalNetValue(double data) : DoubleField(900, data) {}
    TotalNetValue(double data, int decimalPadding) : DoubleField(900, data, decimalPadding) {}
  };

  public __gc class CashOutstanding : public DoubleField
  {
  public:
    static const int FIELD = 901;
    CashOutstanding() : DoubleField(901) {}
    CashOutstanding(double data) : DoubleField(901, data) {}
    CashOutstanding(double data, int decimalPadding) : DoubleField(901, data, decimalPadding) {}
  };

  public __gc class CollAsgnID : public StringField
  {
  public:
    static const int FIELD = 902;
    CollAsgnID() : StringField(902) {}
    CollAsgnID(String* data) : StringField(902, data) {}
  };

  public __gc class CollAsgnTransType : public IntField
  {
  public:
    static const int FIELD = 903;
    static const int NEW = 0;
    static const int REPLACE = 1;
    static const int CANCEL = 2;
    static const int RELEASE = 3;
    static const int REVERSE = 4;
    CollAsgnTransType() : IntField(903) {}
    CollAsgnTransType(int data) : IntField(903, data) {}
  };

  public __gc class CollRespID : public StringField
  {
  public:
    static const int FIELD = 904;
    CollRespID() : StringField(904) {}
    CollRespID(String* data) : StringField(904, data) {}
  };

  public __gc class CollAsgnRespType : public IntField
  {
  public:
    static const int FIELD = 905;
    static const int RECEIVED = 0;
    static const int ACCEPTED = 1;
    static const int DECLINED = 2;
    static const int REJECTED = 3;
    CollAsgnRespType() : IntField(905) {}
    CollAsgnRespType(int data) : IntField(905, data) {}
  };

  public __gc class CollAsgnRejectReason : public IntField
  {
  public:
    static const int FIELD = 906;
    static const int UNKNOWNDEAL = 0;
    static const int UNKNOWNORINVALIDINSTRUMENT = 1;
    static const int UNAUTHORIZEDTRANSACTION = 2;
    static const int INSUFFICIENTCOLLATERAL = 3;
    static const int INVALIDTYPEOFCOLLATERAL = 4;
    static const int EXCESSIVESUBSTITUTION = 5;
    static const int OTHER = 99;
    CollAsgnRejectReason() : IntField(906) {}
    CollAsgnRejectReason(int data) : IntField(906, data) {}
  };

  public __gc class CollAsgnRefID : public StringField
  {
  public:
    static const int FIELD = 907;
    CollAsgnRefID() : StringField(907) {}
    CollAsgnRefID(String* data) : StringField(907, data) {}
  };

  public __gc class CollRptID : public StringField
  {
  public:
    static const int FIELD = 908;
    CollRptID() : StringField(908) {}
    CollRptID(String* data) : StringField(908, data) {}
  };

  public __gc class CollInquiryID : public StringField
  {
  public:
    static const int FIELD = 909;
    CollInquiryID() : StringField(909) {}
    CollInquiryID(String* data) : StringField(909, data) {}
  };

  public __gc class CollStatus : public IntField
  {
  public:
    static const int FIELD = 910;
    static const int UNASSIGNED = 0;
    static const int PARTIALLYASSIGNED = 1;
    static const int ASSIGNMENTPROPOSED = 2;
    static const int ASSIGNEDACCEPTED = 3;
    static const int CHALLENGED = 4;
    CollStatus() : IntField(910) {}
    CollStatus(int data) : IntField(910, data) {}
  };

  public __gc class TotNumReports : public IntField
  {
  public:
    static const int FIELD = 911;
    TotNumReports() : IntField(911) {}
    TotNumReports(int data) : IntField(911, data) {}
  };

  public __gc class LastRptRequested : public BooleanField
  {
  public:
    static const int FIELD = 912;
    static const __wchar_t NO = 'N';
    static const __wchar_t YES = 'Y';
    LastRptRequested() : BooleanField(912) {}
    LastRptRequested(bool data) : BooleanField(912, data) {}
  };

  public __gc class AgreementDesc : public StringField
  {
  public:
    static const int FIELD = 913;
    AgreementDesc() : StringField(913) {}
    AgreementDesc(String* data) : StringField(913, data) {}
  };

  public __gc class AgreementID : public StringField
  {
  public:
    static const int FIELD = 914;
    AgreementID() : StringField(914) {}
    AgreementID(String* data) : StringField(914, data) {}
  };

  public __gc class AgreementDate : public StringField
  {
  public:
    static const int FIELD = 915;
    AgreementDate() : StringField(915) {}
    AgreementDate(String* data) : StringField(915, data) {}
  };

  public __gc class StartDate : public StringField
  {
  public:
    static const int FIELD = 916;
    StartDate() : StringField(916) {}
    StartDate(String* data) : StringField(916, data) {}
  };

  public __gc class EndDate : public StringField
  {
  public:
    static const int FIELD = 917;
    EndDate() : StringField(917) {}
    EndDate(String* data) : StringField(917, data) {}
  };

  public __gc class AgreementCurrency : public StringField
  {
  public:
    static const int FIELD = 918;
    AgreementCurrency() : StringField(918) {}
    AgreementCurrency(String* data) : StringField(918, data) {}
  };

  public __gc class DeliveryType : public IntField
  {
  public:
    static const int FIELD = 919;
    static const int VERSUSPAYMENT = 0;
    static const int FREE = 1;
    static const int TRIPARTY = 2;
    static const int HOLDINCUSTODY = 3;
    DeliveryType() : IntField(919) {}
    DeliveryType(int data) : IntField(919, data) {}
  };

  public __gc class EndAccruedInterestAmt : public DoubleField
  {
  public:
    static const int FIELD = 920;
    EndAccruedInterestAmt() : DoubleField(920) {}
    EndAccruedInterestAmt(double data) : DoubleField(920, data) {}
    EndAccruedInterestAmt(double data, int decimalPadding) : DoubleField(920, data, decimalPadding) {}
  };

  public __gc class StartCash : public DoubleField
  {
  public:
    static const int FIELD = 921;
    StartCash() : DoubleField(921) {}
    StartCash(double data) : DoubleField(921, data) {}
    StartCash(double data, int decimalPadding) : DoubleField(921, data, decimalPadding) {}
  };

  public __gc class EndCash : public DoubleField
  {
  public:
    static const int FIELD = 922;
    EndCash() : DoubleField(922) {}
    EndCash(double data) : DoubleField(922, data) {}
    EndCash(double data, int decimalPadding) : DoubleField(922, data, decimalPadding) {}
  };

  public __gc class UserRequestID : public StringField
  {
  public:
    static const int FIELD = 923;
    UserRequestID() : StringField(923) {}
    UserRequestID(String* data) : StringField(923, data) {}
  };

  public __gc class UserRequestType : public IntField
  {
  public:
    static const int FIELD = 924;
    static const int LOGONUSER = 1;
    static const int LOGOFFUSER = 2;
    static const int CHANGEPASSWORDFORUSER = 3;
    static const int REQUESTINDIVIDUALUSERSTATUS = 4;
    UserRequestType() : IntField(924) {}
    UserRequestType(int data) : IntField(924, data) {}
  };

  public __gc class NewPassword : public StringField
  {
  public:
    static const int FIELD = 925;
    NewPassword() : StringField(925) {}
    NewPassword(String* data) : StringField(925, data) {}
  };

  public __gc class UserStatus : public IntField
  {
  public:
    static const int FIELD = 926;
    static const int LOGGEDIN = 1;
    static const int NOTLOGGEDIN = 2;
    static const int USERNOTRECOGNISED = 3;
    static const int PASSWORDINCORRECT = 4;
    static const int PASSWORDCHANGED = 5;
    static const int OTHER = 6;
    UserStatus() : IntField(926) {}
    UserStatus(int data) : IntField(926, data) {}
  };

  public __gc class UserStatusText : public StringField
  {
  public:
    static const int FIELD = 927;
    UserStatusText() : StringField(927) {}
    UserStatusText(String* data) : StringField(927, data) {}
  };

  public __gc class StatusValue : public IntField
  {
  public:
    static const int FIELD = 928;
    static const int CONNECTED = 1;
    static const int NOTCONNECTEDDOWNEXPECTEDUP = 2;
    static const int NOTCONNECTEDDOWNEXPECTEDDOWN = 3;
    static const int INPROCESS = 4;
    StatusValue() : IntField(928) {}
    StatusValue(int data) : IntField(928, data) {}
  };

  public __gc class StatusText : public StringField
  {
  public:
    static const int FIELD = 929;
    StatusText() : StringField(929) {}
    StatusText(String* data) : StringField(929, data) {}
  };

  public __gc class RefCompID : public StringField
  {
  public:
    static const int FIELD = 930;
    RefCompID() : StringField(930) {}
    RefCompID(String* data) : StringField(930, data) {}
  };

  public __gc class RefSubID : public StringField
  {
  public:
    static const int FIELD = 931;
    RefSubID() : StringField(931) {}
    RefSubID(String* data) : StringField(931, data) {}
  };

  public __gc class NetworkResponseID : public StringField
  {
  public:
    static const int FIELD = 932;
    NetworkResponseID() : StringField(932) {}
    NetworkResponseID(String* data) : StringField(932, data) {}
  };

  public __gc class NetworkRequestID : public StringField
  {
  public:
    static const int FIELD = 933;
    NetworkRequestID() : StringField(933) {}
    NetworkRequestID(String* data) : StringField(933, data) {}
  };

  public __gc class LastNetworkResponseID : public StringField
  {
  public:
    static const int FIELD = 934;
    LastNetworkResponseID() : StringField(934) {}
    LastNetworkResponseID(String* data) : StringField(934, data) {}
  };

  public __gc class NetworkRequestType : public IntField
  {
  public:
    static const int FIELD = 935;
    static const int SNAPSHOT = 1;
    static const int SUBSCRIBE = 2;
    static const int STOPSUBSCRIBING = 4;
    static const int LEVELOFDETAIL = 8;
    NetworkRequestType() : IntField(935) {}
    NetworkRequestType(int data) : IntField(935, data) {}
  };

  public __gc class NoCompIDs : public IntField
  {
  public:
    static const int FIELD = 936;
    NoCompIDs() : IntField(936) {}
    NoCompIDs(int data) : IntField(936, data) {}
  };

  public __gc class NetworkStatusResponseType : public IntField
  {
  public:
    static const int FIELD = 937;
    static const int FULL = 1;
    static const int INCREMENTALUPDATE = 2;
    NetworkStatusResponseType() : IntField(937) {}
    NetworkStatusResponseType(int data) : IntField(937, data) {}
  };

  public __gc class NoCollInquiryQualifier : public IntField
  {
  public:
    static const int FIELD = 938;
    NoCollInquiryQualifier() : IntField(938) {}
    NoCollInquiryQualifier(int data) : IntField(938, data) {}
  };

  public __gc class TrdRptStatus : public IntField
  {
  public:
    static const int FIELD = 939;
    static const int ACCEPTED = 0;
    static const int REJECTED = 1;
    TrdRptStatus() : IntField(939) {}
    TrdRptStatus(int data) : IntField(939, data) {}
  };

  public __gc class AffirmStatus : public IntField
  {
  public:
    static const int FIELD = 940;
    static const int RECEIVED = 1;
    static const int CONFIRMREJECTED = 2;
    static const int AFFIRMED = 3;
    AffirmStatus() : IntField(940) {}
    AffirmStatus(int data) : IntField(940, data) {}
  };

  public __gc class UnderlyingStrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 941;
    UnderlyingStrikeCurrency() : StringField(941) {}
    UnderlyingStrikeCurrency(String* data) : StringField(941, data) {}
  };

  public __gc class LegStrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 942;
    LegStrikeCurrency() : StringField(942) {}
    LegStrikeCurrency(String* data) : StringField(942, data) {}
  };

  public __gc class TimeBracket : public StringField
  {
  public:
    static const int FIELD = 943;
    TimeBracket() : StringField(943) {}
    TimeBracket(String* data) : StringField(943, data) {}
  };

  public __gc class CollAction : public IntField
  {
  public:
    static const int FIELD = 944;
    static const int RETAIN = 0;
    static const int ADD = 1;
    static const int REMOVE = 2;
    CollAction() : IntField(944) {}
    CollAction(int data) : IntField(944, data) {}
  };

  public __gc class CollInquiryStatus : public IntField
  {
  public:
    static const int FIELD = 945;
    static const int ACCEPTED = 0;
    static const int ACCEPTEDWITHWARNINGS = 1;
    static const int COMPLETED = 2;
    static const int COMPLETEDWITHWARNINGS = 3;
    static const int REJECTED = 4;
    CollInquiryStatus() : IntField(945) {}
    CollInquiryStatus(int data) : IntField(945, data) {}
  };

  public __gc class CollInquiryResult : public IntField
  {
  public:
    static const int FIELD = 946;
    static const int SUCCESSFUL = 0;
    static const int INVALIDORUNKNOWNINSTRUMENT = 1;
    static const int INVALIDORUNKNOWNCOLLATERALTYPE = 2;
    static const int INVALIDPARTIES = 3;
    static const int INVALIDTRANSPORTTYPEREQUESTED = 4;
    static const int INVALIDDESTINATIONREQUESTED = 5;
    static const int NOCOLLATERALFOUNDFORTHETRADESPECIFIED = 6;
    static const int NOCOLLATERALFOUNDFORTHEORDERSPECIFIED = 7;
    static const int COLLATERALINQUIRYTYPENOTSUPPORTED = 8;
    static const int UNAUTHORIZEDFORCOLLATERALINQUIRY = 9;
    static const int OTHER = 99;
    CollInquiryResult() : IntField(946) {}
    CollInquiryResult(int data) : IntField(946, data) {}
  };

  public __gc class StrikeCurrency : public StringField
  {
  public:
    static const int FIELD = 947;
    StrikeCurrency() : StringField(947) {}
    StrikeCurrency(String* data) : StringField(947, data) {}
  };

  public __gc class NoNested3PartyIDs : public IntField
  {
  public:
    static const int FIELD = 948;
    NoNested3PartyIDs() : IntField(948) {}
    NoNested3PartyIDs(int data) : IntField(948, data) {}
  };

  public __gc class Nested3PartyID : public StringField
  {
  public:
    static const int FIELD = 949;
    Nested3PartyID() : StringField(949) {}
    Nested3PartyID(String* data) : StringField(949, data) {}
  };

  public __gc class Nested3PartyIDSource : public CharField
  {
  public:
    static const int FIELD = 950;
    Nested3PartyIDSource() : CharField(950) {}
    Nested3PartyIDSource(__wchar_t data) : CharField(950, data) {}
  };

  public __gc class Nested3PartyRole : public IntField
  {
  public:
    static const int FIELD = 951;
    Nested3PartyRole() : IntField(951) {}
    Nested3PartyRole(int data) : IntField(951, data) {}
  };

  public __gc class NoNested3PartySubIDs : public IntField
  {
  public:
    static const int FIELD = 952;
    NoNested3PartySubIDs() : IntField(952) {}
    NoNested3PartySubIDs(int data) : IntField(952, data) {}
  };

  public __gc class Nested3PartySubID : public StringField
  {
  public:
    static const int FIELD = 953;
    Nested3PartySubID() : StringField(953) {}
    Nested3PartySubID(String* data) : StringField(953, data) {}
  };

  public __gc class Nested3PartySubIDType : public IntField
  {
  public:
    static const int FIELD = 954;
    Nested3PartySubIDType() : IntField(954) {}
    Nested3PartySubIDType(int data) : IntField(954, data) {}
  };

  public __gc class LegContractSettlMonth : public StringField
  {
  public:
    static const int FIELD = 955;
    LegContractSettlMonth() : StringField(955) {}
    LegContractSettlMonth(String* data) : StringField(955, data) {}
  };

  public __gc class LegInterestAccrualDate : public StringField
  {
  public:
    static const int FIELD = 956;
    LegInterestAccrualDate() : StringField(956) {}
    LegInterestAccrualDate(String* data) : StringField(956, data) {}
  };

}
