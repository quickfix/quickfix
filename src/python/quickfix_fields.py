import quickfix


class BeginSeqNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BeginSeqNo, self).__init__(7)
        else:
            super(BeginSeqNo, self).__init__(7, data)


class BeginString(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BeginString, self).__init__(8)
        else:
            super(BeginString, self).__init__(8, data)


class BodyLength(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BodyLength, self).__init__(9)
        else:
            super(BodyLength, self).__init__(9, data)


class CheckSum(quickfix.CheckSumField):
    def __init__(self, data=None):
        if data is None:
            super(CheckSum, self).__init__(10)
        else:
            super(CheckSum, self).__init__(10, data)


class EndSeqNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EndSeqNo, self).__init__(16)
        else:
            super(EndSeqNo, self).__init__(16, data)


class MsgSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MsgSeqNum, self).__init__(34)
        else:
            super(MsgSeqNum, self).__init__(34, data)


class MsgType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MsgType, self).__init__(35)
        else:
            super(MsgType, self).__init__(35, data)


class NewSeqNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NewSeqNo, self).__init__(36)
        else:
            super(NewSeqNo, self).__init__(36, data)


class PossDupFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PossDupFlag, self).__init__(43)
        else:
            super(PossDupFlag, self).__init__(43, data)


class RefSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RefSeqNum, self).__init__(45)
        else:
            super(RefSeqNum, self).__init__(45, data)


class SenderCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SenderCompID, self).__init__(49)
        else:
            super(SenderCompID, self).__init__(49, data)


class SenderSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SenderSubID, self).__init__(50)
        else:
            super(SenderSubID, self).__init__(50, data)


class SendingTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(SendingTime, self).__init__(52)
        else:
            super(SendingTime, self).__init__(52, data)


class TargetCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TargetCompID, self).__init__(56)
        else:
            super(TargetCompID, self).__init__(56, data)


class TargetSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TargetSubID, self).__init__(57)
        else:
            super(TargetSubID, self).__init__(57, data)


class Text(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Text, self).__init__(58)
        else:
            super(Text, self).__init__(58, data)


class Signature(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Signature, self).__init__(89)
        else:
            super(Signature, self).__init__(89, data)


class SecureDataLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecureDataLen, self).__init__(90)
        else:
            super(SecureDataLen, self).__init__(90, data)


class SecureData(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecureData, self).__init__(91)
        else:
            super(SecureData, self).__init__(91, data)


class SignatureLength(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SignatureLength, self).__init__(93)
        else:
            super(SignatureLength, self).__init__(93, data)


class RawDataLength(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RawDataLength, self).__init__(95)
        else:
            super(RawDataLength, self).__init__(95, data)


class RawData(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RawData, self).__init__(96)
        else:
            super(RawData, self).__init__(96, data)


class PossResend(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PossResend, self).__init__(97)
        else:
            super(PossResend, self).__init__(97, data)


class EncryptMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptMethod, self).__init__(98)
        else:
            super(EncryptMethod, self).__init__(98, data)


class HeartBtInt(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(HeartBtInt, self).__init__(108)
        else:
            super(HeartBtInt, self).__init__(108, data)


class TestReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TestReqID, self).__init__(112)
        else:
            super(TestReqID, self).__init__(112, data)


class OnBehalfOfCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OnBehalfOfCompID, self).__init__(115)
        else:
            super(OnBehalfOfCompID, self).__init__(115, data)


class OnBehalfOfSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OnBehalfOfSubID, self).__init__(116)
        else:
            super(OnBehalfOfSubID, self).__init__(116, data)


class OrigSendingTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(OrigSendingTime, self).__init__(122)
        else:
            super(OrigSendingTime, self).__init__(122, data)


class GapFillFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(GapFillFlag, self).__init__(123)
        else:
            super(GapFillFlag, self).__init__(123, data)


class DeliverToCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeliverToCompID, self).__init__(128)
        else:
            super(DeliverToCompID, self).__init__(128, data)


class DeliverToSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeliverToSubID, self).__init__(129)
        else:
            super(DeliverToSubID, self).__init__(129, data)


class ResetSeqNumFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ResetSeqNumFlag, self).__init__(141)
        else:
            super(ResetSeqNumFlag, self).__init__(141, data)


class SenderLocationID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SenderLocationID, self).__init__(142)
        else:
            super(SenderLocationID, self).__init__(142, data)


class TargetLocationID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TargetLocationID, self).__init__(143)
        else:
            super(TargetLocationID, self).__init__(143, data)


class OnBehalfOfLocationID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OnBehalfOfLocationID, self).__init__(144)
        else:
            super(OnBehalfOfLocationID, self).__init__(144, data)


class DeliverToLocationID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeliverToLocationID, self).__init__(145)
        else:
            super(DeliverToLocationID, self).__init__(145, data)


class XmlDataLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(XmlDataLen, self).__init__(212)
        else:
            super(XmlDataLen, self).__init__(212, data)


class XmlData(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(XmlData, self).__init__(213)
        else:
            super(XmlData, self).__init__(213, data)


class MessageEncoding(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MessageEncoding, self).__init__(347)
        else:
            super(MessageEncoding, self).__init__(347, data)


class EncodedTextLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedTextLen, self).__init__(354)
        else:
            super(EncodedTextLen, self).__init__(354, data)


class EncodedText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedText, self).__init__(355)
        else:
            super(EncodedText, self).__init__(355, data)


class LastMsgSeqNumProcessed(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LastMsgSeqNumProcessed, self).__init__(369)
        else:
            super(LastMsgSeqNumProcessed, self).__init__(369, data)


class RefTagID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RefTagID, self).__init__(371)
        else:
            super(RefTagID, self).__init__(371, data)


class RefMsgType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefMsgType, self).__init__(372)
        else:
            super(RefMsgType, self).__init__(372, data)


class SessionRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SessionRejectReason, self).__init__(373)
        else:
            super(SessionRejectReason, self).__init__(373, data)


class MaxMessageSize(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MaxMessageSize, self).__init__(383)
        else:
            super(MaxMessageSize, self).__init__(383, data)


class NoMsgTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMsgTypes, self).__init__(384)
        else:
            super(NoMsgTypes, self).__init__(384, data)


class MsgDirection(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MsgDirection, self).__init__(385)
        else:
            super(MsgDirection, self).__init__(385, data)


class TestMessageIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(TestMessageIndicator, self).__init__(464)
        else:
            super(TestMessageIndicator, self).__init__(464, data)


class Username(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Username, self).__init__(553)
        else:
            super(Username, self).__init__(553, data)


class Password(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Password, self).__init__(554)
        else:
            super(Password, self).__init__(554, data)


class NoHops(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoHops, self).__init__(627)
        else:
            super(NoHops, self).__init__(627, data)


class HopCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(HopCompID, self).__init__(628)
        else:
            super(HopCompID, self).__init__(628, data)


class HopSendingTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(HopSendingTime, self).__init__(629)
        else:
            super(HopSendingTime, self).__init__(629, data)


class HopRefID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(HopRefID, self).__init__(630)
        else:
            super(HopRefID, self).__init__(630, data)


class NextExpectedMsgSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NextExpectedMsgSeqNum, self).__init__(789)
        else:
            super(NextExpectedMsgSeqNum, self).__init__(789, data)


class ApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ApplVerID, self).__init__(1128)
        else:
            super(ApplVerID, self).__init__(1128, data)


class CstmApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CstmApplVerID, self).__init__(1129)
        else:
            super(CstmApplVerID, self).__init__(1129, data)


class RefApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefApplVerID, self).__init__(1130)
        else:
            super(RefApplVerID, self).__init__(1130, data)


class RefCstmApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefCstmApplVerID, self).__init__(1131)
        else:
            super(RefCstmApplVerID, self).__init__(1131, data)


class DefaultApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DefaultApplVerID, self).__init__(1137)
        else:
            super(DefaultApplVerID, self).__init__(1137, data)


class Account(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Account, self).__init__(1)
        else:
            super(Account, self).__init__(1, data)


class AdvId(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AdvId, self).__init__(2)
        else:
            super(AdvId, self).__init__(2, data)


class AdvRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AdvRefID, self).__init__(3)
        else:
            super(AdvRefID, self).__init__(3, data)


class AdvSide(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(AdvSide, self).__init__(4)
        else:
            super(AdvSide, self).__init__(4, data)


class AdvTransType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AdvTransType, self).__init__(5)
        else:
            super(AdvTransType, self).__init__(5, data)


class AvgPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AvgPx, self).__init__(6)
        else:
            super(AvgPx, self).__init__(6, data)


class ClOrdID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClOrdID, self).__init__(11)
        else:
            super(ClOrdID, self).__init__(11, data)


class Commission(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Commission, self).__init__(12)
        else:
            super(Commission, self).__init__(12, data)


class CommType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(CommType, self).__init__(13)
        else:
            super(CommType, self).__init__(13, data)


class CumQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CumQty, self).__init__(14)
        else:
            super(CumQty, self).__init__(14, data)


class Currency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Currency, self).__init__(15)
        else:
            super(Currency, self).__init__(15, data)


class ExecID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExecID, self).__init__(17)
        else:
            super(ExecID, self).__init__(17, data)


class ExecInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExecInst, self).__init__(18)
        else:
            super(ExecInst, self).__init__(18, data)


class ExecRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExecRefID, self).__init__(19)
        else:
            super(ExecRefID, self).__init__(19, data)


class ExecTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExecTransType, self).__init__(20)
        else:
            super(ExecTransType, self).__init__(20, data)


class HandlInst(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(HandlInst, self).__init__(21)
        else:
            super(HandlInst, self).__init__(21, data)


class IDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IDSource, self).__init__(22)
        else:
            super(IDSource, self).__init__(22, data)


class IOIid(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IOIid, self).__init__(23)
        else:
            super(IOIid, self).__init__(23, data)


class IOIOthSvc(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(IOIOthSvc, self).__init__(24)
        else:
            super(IOIOthSvc, self).__init__(24, data)


class IOIQltyInd(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(IOIQltyInd, self).__init__(25)
        else:
            super(IOIQltyInd, self).__init__(25, data)


class IOIRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IOIRefID, self).__init__(26)
        else:
            super(IOIRefID, self).__init__(26, data)


class IOIShares(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IOIShares, self).__init__(27)
        else:
            super(IOIShares, self).__init__(27, data)


class IOITransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(IOITransType, self).__init__(28)
        else:
            super(IOITransType, self).__init__(28, data)


class LastCapacity(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LastCapacity, self).__init__(29)
        else:
            super(LastCapacity, self).__init__(29, data)


class LastMkt(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LastMkt, self).__init__(30)
        else:
            super(LastMkt, self).__init__(30, data)


class LastPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastPx, self).__init__(31)
        else:
            super(LastPx, self).__init__(31, data)


class LastShares(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastShares, self).__init__(32)
        else:
            super(LastShares, self).__init__(32, data)


class LinesOfText(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LinesOfText, self).__init__(33)
        else:
            super(LinesOfText, self).__init__(33, data)


class OrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrderID, self).__init__(37)
        else:
            super(OrderID, self).__init__(37, data)


class OrderQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderQty, self).__init__(38)
        else:
            super(OrderQty, self).__init__(38, data)


class OrdStatus(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OrdStatus, self).__init__(39)
        else:
            super(OrdStatus, self).__init__(39, data)


class OrdType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OrdType, self).__init__(40)
        else:
            super(OrdType, self).__init__(40, data)


class OrigClOrdID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigClOrdID, self).__init__(41)
        else:
            super(OrigClOrdID, self).__init__(41, data)


class OrigTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(OrigTime, self).__init__(42)
        else:
            super(OrigTime, self).__init__(42, data)


class Price(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Price, self).__init__(44)
        else:
            super(Price, self).__init__(44, data)


class RelatdSym(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RelatdSym, self).__init__(46)
        else:
            super(RelatdSym, self).__init__(46, data)


class Rule80A(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Rule80A, self).__init__(47)
        else:
            super(Rule80A, self).__init__(47, data)


class SecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityID, self).__init__(48)
        else:
            super(SecurityID, self).__init__(48, data)


class Shares(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Shares, self).__init__(53)
        else:
            super(Shares, self).__init__(53, data)


class Side(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Side, self).__init__(54)
        else:
            super(Side, self).__init__(54, data)


class Symbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Symbol, self).__init__(55)
        else:
            super(Symbol, self).__init__(55, data)


class TimeInForce(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TimeInForce, self).__init__(59)
        else:
            super(TimeInForce, self).__init__(59, data)


class TransactTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TransactTime, self).__init__(60)
        else:
            super(TransactTime, self).__init__(60, data)


class Urgency(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Urgency, self).__init__(61)
        else:
            super(Urgency, self).__init__(61, data)


class ValidUntilTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ValidUntilTime, self).__init__(62)
        else:
            super(ValidUntilTime, self).__init__(62, data)


class SettlmntTyp(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlmntTyp, self).__init__(63)
        else:
            super(SettlmntTyp, self).__init__(63, data)


class FutSettDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FutSettDate, self).__init__(64)
        else:
            super(FutSettDate, self).__init__(64, data)


class SymbolSfx(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SymbolSfx, self).__init__(65)
        else:
            super(SymbolSfx, self).__init__(65, data)


class ListID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ListID, self).__init__(66)
        else:
            super(ListID, self).__init__(66, data)


class ListSeqNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListSeqNo, self).__init__(67)
        else:
            super(ListSeqNo, self).__init__(67, data)


class ListNoOrds(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListNoOrds, self).__init__(68)
        else:
            super(ListNoOrds, self).__init__(68, data)


class ListExecInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ListExecInst, self).__init__(69)
        else:
            super(ListExecInst, self).__init__(69, data)


class AllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocID, self).__init__(70)
        else:
            super(AllocID, self).__init__(70, data)


class AllocTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(AllocTransType, self).__init__(71)
        else:
            super(AllocTransType, self).__init__(71, data)


class RefAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefAllocID, self).__init__(72)
        else:
            super(RefAllocID, self).__init__(72, data)


class NoOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoOrders, self).__init__(73)
        else:
            super(NoOrders, self).__init__(73, data)


class AvgPrxPrecision(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AvgPrxPrecision, self).__init__(74)
        else:
            super(AvgPrxPrecision, self).__init__(74, data)


class TradeDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeDate, self).__init__(75)
        else:
            super(TradeDate, self).__init__(75, data)


class ExecBroker(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExecBroker, self).__init__(76)
        else:
            super(ExecBroker, self).__init__(76, data)


class OpenClose(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OpenClose, self).__init__(77)
        else:
            super(OpenClose, self).__init__(77, data)


class NoAllocs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoAllocs, self).__init__(78)
        else:
            super(NoAllocs, self).__init__(78, data)


class AllocAccount(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocAccount, self).__init__(79)
        else:
            super(AllocAccount, self).__init__(79, data)


class AllocShares(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocShares, self).__init__(80)
        else:
            super(AllocShares, self).__init__(80, data)


class ProcessCode(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ProcessCode, self).__init__(81)
        else:
            super(ProcessCode, self).__init__(81, data)


class NoRpts(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRpts, self).__init__(82)
        else:
            super(NoRpts, self).__init__(82, data)


class RptSeq(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RptSeq, self).__init__(83)
        else:
            super(RptSeq, self).__init__(83, data)


class CxlQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CxlQty, self).__init__(84)
        else:
            super(CxlQty, self).__init__(84, data)


class NoDlvyInst(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDlvyInst, self).__init__(85)
        else:
            super(NoDlvyInst, self).__init__(85, data)


class DlvyInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DlvyInst, self).__init__(86)
        else:
            super(DlvyInst, self).__init__(86, data)


class AllocStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocStatus, self).__init__(87)
        else:
            super(AllocStatus, self).__init__(87, data)


class AllocRejCode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocRejCode, self).__init__(88)
        else:
            super(AllocRejCode, self).__init__(88, data)


class BrokerOfCredit(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BrokerOfCredit, self).__init__(92)
        else:
            super(BrokerOfCredit, self).__init__(92, data)


class EmailType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(EmailType, self).__init__(94)
        else:
            super(EmailType, self).__init__(94, data)


class StopPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StopPx, self).__init__(99)
        else:
            super(StopPx, self).__init__(99, data)


class ExDestination(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExDestination, self).__init__(100)
        else:
            super(ExDestination, self).__init__(100, data)


class CxlRejReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CxlRejReason, self).__init__(102)
        else:
            super(CxlRejReason, self).__init__(102, data)


class OrdRejReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OrdRejReason, self).__init__(103)
        else:
            super(OrdRejReason, self).__init__(103, data)


class IOIQualifier(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(IOIQualifier, self).__init__(104)
        else:
            super(IOIQualifier, self).__init__(104, data)


class WaveNo(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(WaveNo, self).__init__(105)
        else:
            super(WaveNo, self).__init__(105, data)


class Issuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Issuer, self).__init__(106)
        else:
            super(Issuer, self).__init__(106, data)


class SecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityDesc, self).__init__(107)
        else:
            super(SecurityDesc, self).__init__(107, data)


class ClientID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClientID, self).__init__(109)
        else:
            super(ClientID, self).__init__(109, data)


class MinQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinQty, self).__init__(110)
        else:
            super(MinQty, self).__init__(110, data)


class MaxFloor(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MaxFloor, self).__init__(111)
        else:
            super(MaxFloor, self).__init__(111, data)


class ReportToExch(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ReportToExch, self).__init__(113)
        else:
            super(ReportToExch, self).__init__(113, data)


class LocateReqd(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(LocateReqd, self).__init__(114)
        else:
            super(LocateReqd, self).__init__(114, data)


class QuoteID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteID, self).__init__(117)
        else:
            super(QuoteID, self).__init__(117, data)


class NetMoney(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(NetMoney, self).__init__(118)
        else:
            super(NetMoney, self).__init__(118, data)


class SettlCurrAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrAmt, self).__init__(119)
        else:
            super(SettlCurrAmt, self).__init__(119, data)


class SettlCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrency, self).__init__(120)
        else:
            super(SettlCurrency, self).__init__(120, data)


class ForexReq(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ForexReq, self).__init__(121)
        else:
            super(ForexReq, self).__init__(121, data)


class NoExecs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoExecs, self).__init__(124)
        else:
            super(NoExecs, self).__init__(124, data)


class CxlType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(CxlType, self).__init__(125)
        else:
            super(CxlType, self).__init__(125, data)


class ExpireTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ExpireTime, self).__init__(126)
        else:
            super(ExpireTime, self).__init__(126, data)


class DKReason(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DKReason, self).__init__(127)
        else:
            super(DKReason, self).__init__(127, data)


class IOINaturalFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(IOINaturalFlag, self).__init__(130)
        else:
            super(IOINaturalFlag, self).__init__(130, data)


class QuoteReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteReqID, self).__init__(131)
        else:
            super(QuoteReqID, self).__init__(131, data)


class BidPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidPx, self).__init__(132)
        else:
            super(BidPx, self).__init__(132, data)


class OfferPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferPx, self).__init__(133)
        else:
            super(OfferPx, self).__init__(133, data)


class BidSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidSize, self).__init__(134)
        else:
            super(BidSize, self).__init__(134, data)


class OfferSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferSize, self).__init__(135)
        else:
            super(OfferSize, self).__init__(135, data)


class NoMiscFees(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMiscFees, self).__init__(136)
        else:
            super(NoMiscFees, self).__init__(136, data)


class MiscFeeAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MiscFeeAmt, self).__init__(137)
        else:
            super(MiscFeeAmt, self).__init__(137, data)


class MiscFeeCurr(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MiscFeeCurr, self).__init__(138)
        else:
            super(MiscFeeCurr, self).__init__(138, data)


class MiscFeeType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MiscFeeType, self).__init__(139)
        else:
            super(MiscFeeType, self).__init__(139, data)


class PrevClosePx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PrevClosePx, self).__init__(140)
        else:
            super(PrevClosePx, self).__init__(140, data)


class NoRelatedSym(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRelatedSym, self).__init__(146)
        else:
            super(NoRelatedSym, self).__init__(146, data)


class Subject(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Subject, self).__init__(147)
        else:
            super(Subject, self).__init__(147, data)


class Headline(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Headline, self).__init__(148)
        else:
            super(Headline, self).__init__(148, data)


class URLLink(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(URLLink, self).__init__(149)
        else:
            super(URLLink, self).__init__(149, data)


class ExecType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExecType, self).__init__(150)
        else:
            super(ExecType, self).__init__(150, data)


class LeavesQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LeavesQty, self).__init__(151)
        else:
            super(LeavesQty, self).__init__(151, data)


class CashOrderQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CashOrderQty, self).__init__(152)
        else:
            super(CashOrderQty, self).__init__(152, data)


class AllocAvgPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocAvgPx, self).__init__(153)
        else:
            super(AllocAvgPx, self).__init__(153, data)


class AllocNetMoney(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocNetMoney, self).__init__(154)
        else:
            super(AllocNetMoney, self).__init__(154, data)


class SettlCurrFxRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrFxRate, self).__init__(155)
        else:
            super(SettlCurrFxRate, self).__init__(155, data)


class SettlCurrFxRateCalc(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrFxRateCalc, self).__init__(156)
        else:
            super(SettlCurrFxRateCalc, self).__init__(156, data)


class NumDaysInterest(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NumDaysInterest, self).__init__(157)
        else:
            super(NumDaysInterest, self).__init__(157, data)


class AccruedInterestRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AccruedInterestRate, self).__init__(158)
        else:
            super(AccruedInterestRate, self).__init__(158, data)


class AccruedInterestAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AccruedInterestAmt, self).__init__(159)
        else:
            super(AccruedInterestAmt, self).__init__(159, data)


class SettlInstMode(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstMode, self).__init__(160)
        else:
            super(SettlInstMode, self).__init__(160, data)


class AllocText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocText, self).__init__(161)
        else:
            super(AllocText, self).__init__(161, data)


class SettlInstID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstID, self).__init__(162)
        else:
            super(SettlInstID, self).__init__(162, data)


class SettlInstTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstTransType, self).__init__(163)
        else:
            super(SettlInstTransType, self).__init__(163, data)


class EmailThreadID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EmailThreadID, self).__init__(164)
        else:
            super(EmailThreadID, self).__init__(164, data)


class SettlInstSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstSource, self).__init__(165)
        else:
            super(SettlInstSource, self).__init__(165, data)


class SettlLocation(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlLocation, self).__init__(166)
        else:
            super(SettlLocation, self).__init__(166, data)


class SecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityType, self).__init__(167)
        else:
            super(SecurityType, self).__init__(167, data)


class EffectiveTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(EffectiveTime, self).__init__(168)
        else:
            super(EffectiveTime, self).__init__(168, data)


class StandInstDbType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StandInstDbType, self).__init__(169)
        else:
            super(StandInstDbType, self).__init__(169, data)


class StandInstDbName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StandInstDbName, self).__init__(170)
        else:
            super(StandInstDbName, self).__init__(170, data)


class StandInstDbID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StandInstDbID, self).__init__(171)
        else:
            super(StandInstDbID, self).__init__(171, data)


class SettlDeliveryType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlDeliveryType, self).__init__(172)
        else:
            super(SettlDeliveryType, self).__init__(172, data)


class SettlDepositoryCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlDepositoryCode, self).__init__(173)
        else:
            super(SettlDepositoryCode, self).__init__(173, data)


class SettlBrkrCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlBrkrCode, self).__init__(174)
        else:
            super(SettlBrkrCode, self).__init__(174, data)


class SettlInstCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstCode, self).__init__(175)
        else:
            super(SettlInstCode, self).__init__(175, data)


class SecuritySettlAgentName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentName, self).__init__(176)
        else:
            super(SecuritySettlAgentName, self).__init__(176, data)


class SecuritySettlAgentCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentCode, self).__init__(177)
        else:
            super(SecuritySettlAgentCode, self).__init__(177, data)


class SecuritySettlAgentAcctNum(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentAcctNum, self).__init__(178)
        else:
            super(SecuritySettlAgentAcctNum, self).__init__(178, data)


class SecuritySettlAgentAcctName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentAcctName, self).__init__(179)
        else:
            super(SecuritySettlAgentAcctName, self).__init__(179, data)


class SecuritySettlAgentContactName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentContactName, self).__init__(180)
        else:
            super(SecuritySettlAgentContactName, self).__init__(180, data)


class SecuritySettlAgentContactPhone(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySettlAgentContactPhone, self).__init__(181)
        else:
            super(SecuritySettlAgentContactPhone, self).__init__(181, data)


class CashSettlAgentName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentName, self).__init__(182)
        else:
            super(CashSettlAgentName, self).__init__(182, data)


class CashSettlAgentCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentCode, self).__init__(183)
        else:
            super(CashSettlAgentCode, self).__init__(183, data)


class CashSettlAgentAcctNum(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentAcctNum, self).__init__(184)
        else:
            super(CashSettlAgentAcctNum, self).__init__(184, data)


class CashSettlAgentAcctName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentAcctName, self).__init__(185)
        else:
            super(CashSettlAgentAcctName, self).__init__(185, data)


class CashSettlAgentContactName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentContactName, self).__init__(186)
        else:
            super(CashSettlAgentContactName, self).__init__(186, data)


class CashSettlAgentContactPhone(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashSettlAgentContactPhone, self).__init__(187)
        else:
            super(CashSettlAgentContactPhone, self).__init__(187, data)


class BidSpotRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidSpotRate, self).__init__(188)
        else:
            super(BidSpotRate, self).__init__(188, data)


class BidForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidForwardPoints, self).__init__(189)
        else:
            super(BidForwardPoints, self).__init__(189, data)


class OfferSpotRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferSpotRate, self).__init__(190)
        else:
            super(OfferSpotRate, self).__init__(190, data)


class OfferForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferForwardPoints, self).__init__(191)
        else:
            super(OfferForwardPoints, self).__init__(191, data)


class OrderQty2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderQty2, self).__init__(192)
        else:
            super(OrderQty2, self).__init__(192, data)


class FutSettDate2(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FutSettDate2, self).__init__(193)
        else:
            super(FutSettDate2, self).__init__(193, data)


class LastSpotRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastSpotRate, self).__init__(194)
        else:
            super(LastSpotRate, self).__init__(194, data)


class LastForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastForwardPoints, self).__init__(195)
        else:
            super(LastForwardPoints, self).__init__(195, data)


class AllocLinkID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocLinkID, self).__init__(196)
        else:
            super(AllocLinkID, self).__init__(196, data)


class AllocLinkType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocLinkType, self).__init__(197)
        else:
            super(AllocLinkType, self).__init__(197, data)


class SecondaryOrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryOrderID, self).__init__(198)
        else:
            super(SecondaryOrderID, self).__init__(198, data)


class NoIOIQualifiers(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoIOIQualifiers, self).__init__(199)
        else:
            super(NoIOIQualifiers, self).__init__(199, data)


class MaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityMonthYear, self).__init__(200)
        else:
            super(MaturityMonthYear, self).__init__(200, data)


class PutOrCall(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PutOrCall, self).__init__(201)
        else:
            super(PutOrCall, self).__init__(201, data)


class StrikePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StrikePrice, self).__init__(202)
        else:
            super(StrikePrice, self).__init__(202, data)


class CoveredOrUncovered(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CoveredOrUncovered, self).__init__(203)
        else:
            super(CoveredOrUncovered, self).__init__(203, data)


class CustomerOrFirm(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CustomerOrFirm, self).__init__(204)
        else:
            super(CustomerOrFirm, self).__init__(204, data)


class MaturityDay(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityDay, self).__init__(205)
        else:
            super(MaturityDay, self).__init__(205, data)


class OptAttribute(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OptAttribute, self).__init__(206)
        else:
            super(OptAttribute, self).__init__(206, data)


class SecurityExchange(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityExchange, self).__init__(207)
        else:
            super(SecurityExchange, self).__init__(207, data)


class NotifyBrokerOfCredit(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(NotifyBrokerOfCredit, self).__init__(208)
        else:
            super(NotifyBrokerOfCredit, self).__init__(208, data)


class AllocHandlInst(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocHandlInst, self).__init__(209)
        else:
            super(AllocHandlInst, self).__init__(209, data)


class MaxShow(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MaxShow, self).__init__(210)
        else:
            super(MaxShow, self).__init__(210, data)


class PegDifference(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PegDifference, self).__init__(211)
        else:
            super(PegDifference, self).__init__(211, data)


class SendingDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SendingDate, self).__init__(51)
        else:
            super(SendingDate, self).__init__(51, data)


class TotNoOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoOrders, self).__init__(68)
        else:
            super(TotNoOrders, self).__init__(68, data)


class SettlInstRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstRefID, self).__init__(214)
        else:
            super(SettlInstRefID, self).__init__(214, data)


class NoRoutingIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRoutingIDs, self).__init__(215)
        else:
            super(NoRoutingIDs, self).__init__(215, data)


class RoutingType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RoutingType, self).__init__(216)
        else:
            super(RoutingType, self).__init__(216, data)


class RoutingID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RoutingID, self).__init__(217)
        else:
            super(RoutingID, self).__init__(217, data)


class SpreadToBenchmark(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SpreadToBenchmark, self).__init__(218)
        else:
            super(SpreadToBenchmark, self).__init__(218, data)


class Benchmark(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Benchmark, self).__init__(219)
        else:
            super(Benchmark, self).__init__(219, data)


class CouponRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CouponRate, self).__init__(223)
        else:
            super(CouponRate, self).__init__(223, data)


class ContractMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ContractMultiplier, self).__init__(231)
        else:
            super(ContractMultiplier, self).__init__(231, data)


class MDReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDReqID, self).__init__(262)
        else:
            super(MDReqID, self).__init__(262, data)


class SubscriptionRequestType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SubscriptionRequestType, self).__init__(263)
        else:
            super(SubscriptionRequestType, self).__init__(263, data)


class MarketDepth(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MarketDepth, self).__init__(264)
        else:
            super(MarketDepth, self).__init__(264, data)


class MDUpdateType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDUpdateType, self).__init__(265)
        else:
            super(MDUpdateType, self).__init__(265, data)


class AggregatedBook(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(AggregatedBook, self).__init__(266)
        else:
            super(AggregatedBook, self).__init__(266, data)


class NoMDEntryTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMDEntryTypes, self).__init__(267)
        else:
            super(NoMDEntryTypes, self).__init__(267, data)


class NoMDEntries(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMDEntries, self).__init__(268)
        else:
            super(NoMDEntries, self).__init__(268, data)


class MDEntryType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryType, self).__init__(269)
        else:
            super(MDEntryType, self).__init__(269, data)


class MDEntryPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryPx, self).__init__(270)
        else:
            super(MDEntryPx, self).__init__(270, data)


class MDEntrySize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntrySize, self).__init__(271)
        else:
            super(MDEntrySize, self).__init__(271, data)


class MDEntryDate(quickfix.UtcDateField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryDate, self).__init__(272)
        else:
            super(MDEntryDate, self).__init__(272, data)


class MDEntryTime(quickfix.UtcTimeOnlyField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryTime, self).__init__(273)
        else:
            super(MDEntryTime, self).__init__(273, data)


class TickDirection(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TickDirection, self).__init__(274)
        else:
            super(TickDirection, self).__init__(274, data)


class MDMkt(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDMkt, self).__init__(275)
        else:
            super(MDMkt, self).__init__(275, data)


class QuoteCondition(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteCondition, self).__init__(276)
        else:
            super(QuoteCondition, self).__init__(276, data)


class TradeCondition(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeCondition, self).__init__(277)
        else:
            super(TradeCondition, self).__init__(277, data)


class MDEntryID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryID, self).__init__(278)
        else:
            super(MDEntryID, self).__init__(278, data)


class MDUpdateAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MDUpdateAction, self).__init__(279)
        else:
            super(MDUpdateAction, self).__init__(279, data)


class MDEntryRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryRefID, self).__init__(280)
        else:
            super(MDEntryRefID, self).__init__(280, data)


class MDReqRejReason(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MDReqRejReason, self).__init__(281)
        else:
            super(MDReqRejReason, self).__init__(281, data)


class MDEntryOriginator(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryOriginator, self).__init__(282)
        else:
            super(MDEntryOriginator, self).__init__(282, data)


class LocationID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LocationID, self).__init__(283)
        else:
            super(LocationID, self).__init__(283, data)


class DeskID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeskID, self).__init__(284)
        else:
            super(DeskID, self).__init__(284, data)


class DeleteReason(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DeleteReason, self).__init__(285)
        else:
            super(DeleteReason, self).__init__(285, data)


class OpenCloseSettleFlag(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OpenCloseSettleFlag, self).__init__(286)
        else:
            super(OpenCloseSettleFlag, self).__init__(286, data)


class SellerDays(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SellerDays, self).__init__(287)
        else:
            super(SellerDays, self).__init__(287, data)


class MDEntryBuyer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryBuyer, self).__init__(288)
        else:
            super(MDEntryBuyer, self).__init__(288, data)


class MDEntrySeller(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntrySeller, self).__init__(289)
        else:
            super(MDEntrySeller, self).__init__(289, data)


class MDEntryPositionNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryPositionNo, self).__init__(290)
        else:
            super(MDEntryPositionNo, self).__init__(290, data)


class FinancialStatus(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FinancialStatus, self).__init__(291)
        else:
            super(FinancialStatus, self).__init__(291, data)


class CorporateAction(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CorporateAction, self).__init__(292)
        else:
            super(CorporateAction, self).__init__(292, data)


class DefBidSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DefBidSize, self).__init__(293)
        else:
            super(DefBidSize, self).__init__(293, data)


class DefOfferSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DefOfferSize, self).__init__(294)
        else:
            super(DefOfferSize, self).__init__(294, data)


class NoQuoteEntries(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoQuoteEntries, self).__init__(295)
        else:
            super(NoQuoteEntries, self).__init__(295, data)


class NoQuoteSets(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoQuoteSets, self).__init__(296)
        else:
            super(NoQuoteSets, self).__init__(296, data)


class QuoteAckStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteAckStatus, self).__init__(297)
        else:
            super(QuoteAckStatus, self).__init__(297, data)


class QuoteCancelType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteCancelType, self).__init__(298)
        else:
            super(QuoteCancelType, self).__init__(298, data)


class QuoteEntryID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteEntryID, self).__init__(299)
        else:
            super(QuoteEntryID, self).__init__(299, data)


class QuoteRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteRejectReason, self).__init__(300)
        else:
            super(QuoteRejectReason, self).__init__(300, data)


class QuoteResponseLevel(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteResponseLevel, self).__init__(301)
        else:
            super(QuoteResponseLevel, self).__init__(301, data)


class QuoteSetID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteSetID, self).__init__(302)
        else:
            super(QuoteSetID, self).__init__(302, data)


class QuoteRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteRequestType, self).__init__(303)
        else:
            super(QuoteRequestType, self).__init__(303, data)


class TotQuoteEntries(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotQuoteEntries, self).__init__(304)
        else:
            super(TotQuoteEntries, self).__init__(304, data)


class UnderlyingIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingIDSource, self).__init__(305)
        else:
            super(UnderlyingIDSource, self).__init__(305, data)


class UnderlyingIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingIssuer, self).__init__(306)
        else:
            super(UnderlyingIssuer, self).__init__(306, data)


class UnderlyingSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityDesc, self).__init__(307)
        else:
            super(UnderlyingSecurityDesc, self).__init__(307, data)


class UnderlyingSecurityExchange(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityExchange, self).__init__(308)
        else:
            super(UnderlyingSecurityExchange, self).__init__(308, data)


class UnderlyingSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityID, self).__init__(309)
        else:
            super(UnderlyingSecurityID, self).__init__(309, data)


class UnderlyingSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityType, self).__init__(310)
        else:
            super(UnderlyingSecurityType, self).__init__(310, data)


class UnderlyingSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSymbol, self).__init__(311)
        else:
            super(UnderlyingSymbol, self).__init__(311, data)


class UnderlyingSymbolSfx(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSymbolSfx, self).__init__(312)
        else:
            super(UnderlyingSymbolSfx, self).__init__(312, data)


class UnderlyingMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingMaturityMonthYear, self).__init__(313)
        else:
            super(UnderlyingMaturityMonthYear, self).__init__(313, data)


class UnderlyingMaturityDay(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingMaturityDay, self).__init__(314)
        else:
            super(UnderlyingMaturityDay, self).__init__(314, data)


class UnderlyingPutOrCall(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPutOrCall, self).__init__(315)
        else:
            super(UnderlyingPutOrCall, self).__init__(315, data)


class UnderlyingStrikePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStrikePrice, self).__init__(316)
        else:
            super(UnderlyingStrikePrice, self).__init__(316, data)


class UnderlyingOptAttribute(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingOptAttribute, self).__init__(317)
        else:
            super(UnderlyingOptAttribute, self).__init__(317, data)


class UnderlyingCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCurrency, self).__init__(318)
        else:
            super(UnderlyingCurrency, self).__init__(318, data)


class RatioQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RatioQty, self).__init__(319)
        else:
            super(RatioQty, self).__init__(319, data)


class SecurityReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityReqID, self).__init__(320)
        else:
            super(SecurityReqID, self).__init__(320, data)


class SecurityRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityRequestType, self).__init__(321)
        else:
            super(SecurityRequestType, self).__init__(321, data)


class SecurityResponseID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityResponseID, self).__init__(322)
        else:
            super(SecurityResponseID, self).__init__(322, data)


class SecurityResponseType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityResponseType, self).__init__(323)
        else:
            super(SecurityResponseType, self).__init__(323, data)


class SecurityStatusReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityStatusReqID, self).__init__(324)
        else:
            super(SecurityStatusReqID, self).__init__(324, data)


class UnsolicitedIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(UnsolicitedIndicator, self).__init__(325)
        else:
            super(UnsolicitedIndicator, self).__init__(325, data)


class SecurityTradingStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityTradingStatus, self).__init__(326)
        else:
            super(SecurityTradingStatus, self).__init__(326, data)


class HaltReasonChar(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(HaltReasonChar, self).__init__(327)
        else:
            super(HaltReasonChar, self).__init__(327, data)


class InViewOfCommon(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(InViewOfCommon, self).__init__(328)
        else:
            super(InViewOfCommon, self).__init__(328, data)


class DueToRelated(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(DueToRelated, self).__init__(329)
        else:
            super(DueToRelated, self).__init__(329, data)


class BuyVolume(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BuyVolume, self).__init__(330)
        else:
            super(BuyVolume, self).__init__(330, data)


class SellVolume(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SellVolume, self).__init__(331)
        else:
            super(SellVolume, self).__init__(331, data)


class HighPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(HighPx, self).__init__(332)
        else:
            super(HighPx, self).__init__(332, data)


class LowPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LowPx, self).__init__(333)
        else:
            super(LowPx, self).__init__(333, data)


class Adjustment(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Adjustment, self).__init__(334)
        else:
            super(Adjustment, self).__init__(334, data)


class TradSesReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesReqID, self).__init__(335)
        else:
            super(TradSesReqID, self).__init__(335, data)


class TradingSessionID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradingSessionID, self).__init__(336)
        else:
            super(TradingSessionID, self).__init__(336, data)


class ContraTrader(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContraTrader, self).__init__(337)
        else:
            super(ContraTrader, self).__init__(337, data)


class TradSesMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesMethod, self).__init__(338)
        else:
            super(TradSesMethod, self).__init__(338, data)


class TradSesMode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesMode, self).__init__(339)
        else:
            super(TradSesMode, self).__init__(339, data)


class TradSesStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesStatus, self).__init__(340)
        else:
            super(TradSesStatus, self).__init__(340, data)


class TradSesStartTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesStartTime, self).__init__(341)
        else:
            super(TradSesStartTime, self).__init__(341, data)


class TradSesOpenTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesOpenTime, self).__init__(342)
        else:
            super(TradSesOpenTime, self).__init__(342, data)


class TradSesPreCloseTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesPreCloseTime, self).__init__(343)
        else:
            super(TradSesPreCloseTime, self).__init__(343, data)


class TradSesCloseTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesCloseTime, self).__init__(344)
        else:
            super(TradSesCloseTime, self).__init__(344, data)


class TradSesEndTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesEndTime, self).__init__(345)
        else:
            super(TradSesEndTime, self).__init__(345, data)


class NumberOfOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NumberOfOrders, self).__init__(346)
        else:
            super(NumberOfOrders, self).__init__(346, data)


class EncodedIssuerLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedIssuerLen, self).__init__(348)
        else:
            super(EncodedIssuerLen, self).__init__(348, data)


class EncodedIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedIssuer, self).__init__(349)
        else:
            super(EncodedIssuer, self).__init__(349, data)


class EncodedSecurityDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSecurityDescLen, self).__init__(350)
        else:
            super(EncodedSecurityDescLen, self).__init__(350, data)


class EncodedSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSecurityDesc, self).__init__(351)
        else:
            super(EncodedSecurityDesc, self).__init__(351, data)


class EncodedListExecInstLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedListExecInstLen, self).__init__(352)
        else:
            super(EncodedListExecInstLen, self).__init__(352, data)


class EncodedListExecInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedListExecInst, self).__init__(353)
        else:
            super(EncodedListExecInst, self).__init__(353, data)


class EncodedSubjectLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSubjectLen, self).__init__(356)
        else:
            super(EncodedSubjectLen, self).__init__(356, data)


class EncodedSubject(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSubject, self).__init__(357)
        else:
            super(EncodedSubject, self).__init__(357, data)


class EncodedHeadlineLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedHeadlineLen, self).__init__(358)
        else:
            super(EncodedHeadlineLen, self).__init__(358, data)


class EncodedHeadline(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedHeadline, self).__init__(359)
        else:
            super(EncodedHeadline, self).__init__(359, data)


class EncodedAllocTextLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedAllocTextLen, self).__init__(360)
        else:
            super(EncodedAllocTextLen, self).__init__(360, data)


class EncodedAllocText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedAllocText, self).__init__(361)
        else:
            super(EncodedAllocText, self).__init__(361, data)


class EncodedUnderlyingIssuerLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedUnderlyingIssuerLen, self).__init__(362)
        else:
            super(EncodedUnderlyingIssuerLen, self).__init__(362, data)


class EncodedUnderlyingIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedUnderlyingIssuer, self).__init__(363)
        else:
            super(EncodedUnderlyingIssuer, self).__init__(363, data)


class EncodedUnderlyingSecurityDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedUnderlyingSecurityDescLen, self).__init__(364)
        else:
            super(EncodedUnderlyingSecurityDescLen, self).__init__(364, data)


class EncodedUnderlyingSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedUnderlyingSecurityDesc, self).__init__(365)
        else:
            super(EncodedUnderlyingSecurityDesc, self).__init__(365, data)


class AllocPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocPrice, self).__init__(366)
        else:
            super(AllocPrice, self).__init__(366, data)


class QuoteSetValidUntilTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteSetValidUntilTime, self).__init__(367)
        else:
            super(QuoteSetValidUntilTime, self).__init__(367, data)


class QuoteEntryRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteEntryRejectReason, self).__init__(368)
        else:
            super(QuoteEntryRejectReason, self).__init__(368, data)


class OnBehalfOfSendingTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(OnBehalfOfSendingTime, self).__init__(370)
        else:
            super(OnBehalfOfSendingTime, self).__init__(370, data)


class BidRequestTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(BidRequestTransType, self).__init__(374)
        else:
            super(BidRequestTransType, self).__init__(374, data)


class ContraBroker(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContraBroker, self).__init__(375)
        else:
            super(ContraBroker, self).__init__(375, data)


class ComplianceID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ComplianceID, self).__init__(376)
        else:
            super(ComplianceID, self).__init__(376, data)


class SolicitedFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(SolicitedFlag, self).__init__(377)
        else:
            super(SolicitedFlag, self).__init__(377, data)


class ExecRestatementReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ExecRestatementReason, self).__init__(378)
        else:
            super(ExecRestatementReason, self).__init__(378, data)


class BusinessRejectRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BusinessRejectRefID, self).__init__(379)
        else:
            super(BusinessRejectRefID, self).__init__(379, data)


class BusinessRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BusinessRejectReason, self).__init__(380)
        else:
            super(BusinessRejectReason, self).__init__(380, data)


class GrossTradeAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(GrossTradeAmt, self).__init__(381)
        else:
            super(GrossTradeAmt, self).__init__(381, data)


class NoContraBrokers(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoContraBrokers, self).__init__(382)
        else:
            super(NoContraBrokers, self).__init__(382, data)


class NoTradingSessions(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTradingSessions, self).__init__(386)
        else:
            super(NoTradingSessions, self).__init__(386, data)


class TotalVolumeTraded(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TotalVolumeTraded, self).__init__(387)
        else:
            super(TotalVolumeTraded, self).__init__(387, data)


class DiscretionInst(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionInst, self).__init__(388)
        else:
            super(DiscretionInst, self).__init__(388, data)


class DiscretionOffset(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionOffset, self).__init__(389)
        else:
            super(DiscretionOffset, self).__init__(389, data)


class BidID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BidID, self).__init__(390)
        else:
            super(BidID, self).__init__(390, data)


class ClientBidID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClientBidID, self).__init__(391)
        else:
            super(ClientBidID, self).__init__(391, data)


class ListName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ListName, self).__init__(392)
        else:
            super(ListName, self).__init__(392, data)


class TotalNumSecurities(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotalNumSecurities, self).__init__(393)
        else:
            super(TotalNumSecurities, self).__init__(393, data)


class BidType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BidType, self).__init__(394)
        else:
            super(BidType, self).__init__(394, data)


class NumTickets(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NumTickets, self).__init__(395)
        else:
            super(NumTickets, self).__init__(395, data)


class SideValue1(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SideValue1, self).__init__(396)
        else:
            super(SideValue1, self).__init__(396, data)


class SideValue2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SideValue2, self).__init__(397)
        else:
            super(SideValue2, self).__init__(397, data)


class NoBidDescriptors(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoBidDescriptors, self).__init__(398)
        else:
            super(NoBidDescriptors, self).__init__(398, data)


class BidDescriptorType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BidDescriptorType, self).__init__(399)
        else:
            super(BidDescriptorType, self).__init__(399, data)


class BidDescriptor(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BidDescriptor, self).__init__(400)
        else:
            super(BidDescriptor, self).__init__(400, data)


class SideValueInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideValueInd, self).__init__(401)
        else:
            super(SideValueInd, self).__init__(401, data)


class LiquidityPctLow(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LiquidityPctLow, self).__init__(402)
        else:
            super(LiquidityPctLow, self).__init__(402, data)


class LiquidityPctHigh(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LiquidityPctHigh, self).__init__(403)
        else:
            super(LiquidityPctHigh, self).__init__(403, data)


class LiquidityValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LiquidityValue, self).__init__(404)
        else:
            super(LiquidityValue, self).__init__(404, data)


class EFPTrackingError(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EFPTrackingError, self).__init__(405)
        else:
            super(EFPTrackingError, self).__init__(405, data)


class FairValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FairValue, self).__init__(406)
        else:
            super(FairValue, self).__init__(406, data)


class OutsideIndexPct(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OutsideIndexPct, self).__init__(407)
        else:
            super(OutsideIndexPct, self).__init__(407, data)


class ValueOfFutures(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ValueOfFutures, self).__init__(408)
        else:
            super(ValueOfFutures, self).__init__(408, data)


class LiquidityIndType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LiquidityIndType, self).__init__(409)
        else:
            super(LiquidityIndType, self).__init__(409, data)


class WtAverageLiquidity(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(WtAverageLiquidity, self).__init__(410)
        else:
            super(WtAverageLiquidity, self).__init__(410, data)


class ExchangeForPhysical(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ExchangeForPhysical, self).__init__(411)
        else:
            super(ExchangeForPhysical, self).__init__(411, data)


class OutMainCntryUIndex(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OutMainCntryUIndex, self).__init__(412)
        else:
            super(OutMainCntryUIndex, self).__init__(412, data)


class CrossPercent(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CrossPercent, self).__init__(413)
        else:
            super(CrossPercent, self).__init__(413, data)


class ProgRptReqs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ProgRptReqs, self).__init__(414)
        else:
            super(ProgRptReqs, self).__init__(414, data)


class ProgPeriodInterval(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ProgPeriodInterval, self).__init__(415)
        else:
            super(ProgPeriodInterval, self).__init__(415, data)


class IncTaxInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(IncTaxInd, self).__init__(416)
        else:
            super(IncTaxInd, self).__init__(416, data)


class NumBidders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NumBidders, self).__init__(417)
        else:
            super(NumBidders, self).__init__(417, data)


class TradeType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TradeType, self).__init__(418)
        else:
            super(TradeType, self).__init__(418, data)


class BasisPxType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(BasisPxType, self).__init__(419)
        else:
            super(BasisPxType, self).__init__(419, data)


class NoBidComponents(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoBidComponents, self).__init__(420)
        else:
            super(NoBidComponents, self).__init__(420, data)


class Country(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Country, self).__init__(421)
        else:
            super(Country, self).__init__(421, data)


class TotNoStrikes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoStrikes, self).__init__(422)
        else:
            super(TotNoStrikes, self).__init__(422, data)


class PriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PriceType, self).__init__(423)
        else:
            super(PriceType, self).__init__(423, data)


class DayOrderQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DayOrderQty, self).__init__(424)
        else:
            super(DayOrderQty, self).__init__(424, data)


class DayCumQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DayCumQty, self).__init__(425)
        else:
            super(DayCumQty, self).__init__(425, data)


class DayAvgPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DayAvgPx, self).__init__(426)
        else:
            super(DayAvgPx, self).__init__(426, data)


class GTBookingInst(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(GTBookingInst, self).__init__(427)
        else:
            super(GTBookingInst, self).__init__(427, data)


class NoStrikes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoStrikes, self).__init__(428)
        else:
            super(NoStrikes, self).__init__(428, data)


class ListStatusType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListStatusType, self).__init__(429)
        else:
            super(ListStatusType, self).__init__(429, data)


class NetGrossInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NetGrossInd, self).__init__(430)
        else:
            super(NetGrossInd, self).__init__(430, data)


class ListOrderStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListOrderStatus, self).__init__(431)
        else:
            super(ListOrderStatus, self).__init__(431, data)


class ExpireDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExpireDate, self).__init__(432)
        else:
            super(ExpireDate, self).__init__(432, data)


class ListExecInstType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ListExecInstType, self).__init__(433)
        else:
            super(ListExecInstType, self).__init__(433, data)


class CxlRejResponseTo(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(CxlRejResponseTo, self).__init__(434)
        else:
            super(CxlRejResponseTo, self).__init__(434, data)


class UnderlyingCouponRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCouponRate, self).__init__(435)
        else:
            super(UnderlyingCouponRate, self).__init__(435, data)


class UnderlyingContractMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingContractMultiplier, self).__init__(436)
        else:
            super(UnderlyingContractMultiplier, self).__init__(436, data)


class ContraTradeQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ContraTradeQty, self).__init__(437)
        else:
            super(ContraTradeQty, self).__init__(437, data)


class ContraTradeTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ContraTradeTime, self).__init__(438)
        else:
            super(ContraTradeTime, self).__init__(438, data)


class ClearingFirm(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClearingFirm, self).__init__(439)
        else:
            super(ClearingFirm, self).__init__(439, data)


class ClearingAccount(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClearingAccount, self).__init__(440)
        else:
            super(ClearingAccount, self).__init__(440, data)


class LiquidityNumSecurities(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LiquidityNumSecurities, self).__init__(441)
        else:
            super(LiquidityNumSecurities, self).__init__(441, data)


class MultiLegReportingType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MultiLegReportingType, self).__init__(442)
        else:
            super(MultiLegReportingType, self).__init__(442, data)


class StrikeTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeTime, self).__init__(443)
        else:
            super(StrikeTime, self).__init__(443, data)


class ListStatusText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ListStatusText, self).__init__(444)
        else:
            super(ListStatusText, self).__init__(444, data)


class EncodedListStatusTextLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedListStatusTextLen, self).__init__(445)
        else:
            super(EncodedListStatusTextLen, self).__init__(445, data)


class EncodedListStatusText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedListStatusText, self).__init__(446)
        else:
            super(EncodedListStatusText, self).__init__(446, data)


class SecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityIDSource, self).__init__(22)
        else:
            super(SecurityIDSource, self).__init__(22, data)


class IOIQty(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IOIQty, self).__init__(27)
        else:
            super(IOIQty, self).__init__(27, data)


class LastQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastQty, self).__init__(32)
        else:
            super(LastQty, self).__init__(32, data)


class Quantity(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Quantity, self).__init__(53)
        else:
            super(Quantity, self).__init__(53, data)


class PositionEffect(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(PositionEffect, self).__init__(77)
        else:
            super(PositionEffect, self).__init__(77, data)


class AllocQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocQty, self).__init__(80)
        else:
            super(AllocQty, self).__init__(80, data)


class Spread(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Spread, self).__init__(218)
        else:
            super(Spread, self).__init__(218, data)


class BenchmarkCurveCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkCurveCurrency, self).__init__(220)
        else:
            super(BenchmarkCurveCurrency, self).__init__(220, data)


class BenchmarkCurveName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkCurveName, self).__init__(221)
        else:
            super(BenchmarkCurveName, self).__init__(221, data)


class BenchmarkCurvePoint(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkCurvePoint, self).__init__(222)
        else:
            super(BenchmarkCurvePoint, self).__init__(222, data)


class CouponPaymentDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CouponPaymentDate, self).__init__(224)
        else:
            super(CouponPaymentDate, self).__init__(224, data)


class IssueDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IssueDate, self).__init__(225)
        else:
            super(IssueDate, self).__init__(225, data)


class RepurchaseTerm(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RepurchaseTerm, self).__init__(226)
        else:
            super(RepurchaseTerm, self).__init__(226, data)


class RepurchaseRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RepurchaseRate, self).__init__(227)
        else:
            super(RepurchaseRate, self).__init__(227, data)


class Factor(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Factor, self).__init__(228)
        else:
            super(Factor, self).__init__(228, data)


class TradeOriginationDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeOriginationDate, self).__init__(229)
        else:
            super(TradeOriginationDate, self).__init__(229, data)


class ExDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExDate, self).__init__(230)
        else:
            super(ExDate, self).__init__(230, data)


class NoStipulations(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoStipulations, self).__init__(232)
        else:
            super(NoStipulations, self).__init__(232, data)


class StipulationType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StipulationType, self).__init__(233)
        else:
            super(StipulationType, self).__init__(233, data)


class StipulationValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StipulationValue, self).__init__(234)
        else:
            super(StipulationValue, self).__init__(234, data)


class YieldType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(YieldType, self).__init__(235)
        else:
            super(YieldType, self).__init__(235, data)


class Yield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Yield, self).__init__(236)
        else:
            super(Yield, self).__init__(236, data)


class TotalTakedown(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TotalTakedown, self).__init__(237)
        else:
            super(TotalTakedown, self).__init__(237, data)


class Concession(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Concession, self).__init__(238)
        else:
            super(Concession, self).__init__(238, data)


class RepoCollateralSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RepoCollateralSecurityType, self).__init__(239)
        else:
            super(RepoCollateralSecurityType, self).__init__(239, data)


class RedemptionDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RedemptionDate, self).__init__(240)
        else:
            super(RedemptionDate, self).__init__(240, data)


class UnderlyingCouponPaymentDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCouponPaymentDate, self).__init__(241)
        else:
            super(UnderlyingCouponPaymentDate, self).__init__(241, data)


class UnderlyingIssueDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingIssueDate, self).__init__(242)
        else:
            super(UnderlyingIssueDate, self).__init__(242, data)


class UnderlyingRepoCollateralSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingRepoCollateralSecurityType, self).__init__(243)
        else:
            super(UnderlyingRepoCollateralSecurityType, self).__init__(243, data)


class UnderlyingRepurchaseTerm(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingRepurchaseTerm, self).__init__(244)
        else:
            super(UnderlyingRepurchaseTerm, self).__init__(244, data)


class UnderlyingRepurchaseRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingRepurchaseRate, self).__init__(245)
        else:
            super(UnderlyingRepurchaseRate, self).__init__(245, data)


class UnderlyingFactor(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingFactor, self).__init__(246)
        else:
            super(UnderlyingFactor, self).__init__(246, data)


class UnderlyingRedemptionDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingRedemptionDate, self).__init__(247)
        else:
            super(UnderlyingRedemptionDate, self).__init__(247, data)


class LegCouponPaymentDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegCouponPaymentDate, self).__init__(248)
        else:
            super(LegCouponPaymentDate, self).__init__(248, data)


class LegIssueDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegIssueDate, self).__init__(249)
        else:
            super(LegIssueDate, self).__init__(249, data)


class LegRepoCollateralSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegRepoCollateralSecurityType, self).__init__(250)
        else:
            super(LegRepoCollateralSecurityType, self).__init__(250, data)


class LegRepurchaseTerm(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegRepurchaseTerm, self).__init__(251)
        else:
            super(LegRepurchaseTerm, self).__init__(251, data)


class LegRepurchaseRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegRepurchaseRate, self).__init__(252)
        else:
            super(LegRepurchaseRate, self).__init__(252, data)


class LegFactor(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegFactor, self).__init__(253)
        else:
            super(LegFactor, self).__init__(253, data)


class LegRedemptionDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegRedemptionDate, self).__init__(254)
        else:
            super(LegRedemptionDate, self).__init__(254, data)


class CreditRating(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CreditRating, self).__init__(255)
        else:
            super(CreditRating, self).__init__(255, data)


class UnderlyingCreditRating(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCreditRating, self).__init__(256)
        else:
            super(UnderlyingCreditRating, self).__init__(256, data)


class LegCreditRating(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegCreditRating, self).__init__(257)
        else:
            super(LegCreditRating, self).__init__(257, data)


class TradedFlatSwitch(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(TradedFlatSwitch, self).__init__(258)
        else:
            super(TradedFlatSwitch, self).__init__(258, data)


class BasisFeatureDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BasisFeatureDate, self).__init__(259)
        else:
            super(BasisFeatureDate, self).__init__(259, data)


class BasisFeaturePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BasisFeaturePrice, self).__init__(260)
        else:
            super(BasisFeaturePrice, self).__init__(260, data)


class QuoteStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteStatus, self).__init__(297)
        else:
            super(QuoteStatus, self).__init__(297, data)


class UnderlyingSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityIDSource, self).__init__(305)
        else:
            super(UnderlyingSecurityIDSource, self).__init__(305, data)


class PartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(PartyIDSource, self).__init__(447)
        else:
            super(PartyIDSource, self).__init__(447, data)


class PartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PartyID, self).__init__(448)
        else:
            super(PartyID, self).__init__(448, data)


class TotalVolumeTradedDate(quickfix.UtcDateField):
    def __init__(self, data=None):
        if data is None:
            super(TotalVolumeTradedDate, self).__init__(449)
        else:
            super(TotalVolumeTradedDate, self).__init__(449, data)


class TotalVolumeTradedTime(quickfix.UtcTimeOnlyField):
    def __init__(self, data=None):
        if data is None:
            super(TotalVolumeTradedTime, self).__init__(450)
        else:
            super(TotalVolumeTradedTime, self).__init__(450, data)


class NetChgPrevDay(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(NetChgPrevDay, self).__init__(451)
        else:
            super(NetChgPrevDay, self).__init__(451, data)


class PartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PartyRole, self).__init__(452)
        else:
            super(PartyRole, self).__init__(452, data)


class NoPartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoPartyIDs, self).__init__(453)
        else:
            super(NoPartyIDs, self).__init__(453, data)


class NoSecurityAltID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSecurityAltID, self).__init__(454)
        else:
            super(NoSecurityAltID, self).__init__(454, data)


class SecurityAltID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityAltID, self).__init__(455)
        else:
            super(SecurityAltID, self).__init__(455, data)


class SecurityAltIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityAltIDSource, self).__init__(456)
        else:
            super(SecurityAltIDSource, self).__init__(456, data)


class NoUnderlyingSecurityAltID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUnderlyingSecurityAltID, self).__init__(457)
        else:
            super(NoUnderlyingSecurityAltID, self).__init__(457, data)


class UnderlyingSecurityAltID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityAltID, self).__init__(458)
        else:
            super(UnderlyingSecurityAltID, self).__init__(458, data)


class UnderlyingSecurityAltIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecurityAltIDSource, self).__init__(459)
        else:
            super(UnderlyingSecurityAltIDSource, self).__init__(459, data)


class Product(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Product, self).__init__(460)
        else:
            super(Product, self).__init__(460, data)


class CFICode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CFICode, self).__init__(461)
        else:
            super(CFICode, self).__init__(461, data)


class UnderlyingProduct(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingProduct, self).__init__(462)
        else:
            super(UnderlyingProduct, self).__init__(462, data)


class UnderlyingCFICode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCFICode, self).__init__(463)
        else:
            super(UnderlyingCFICode, self).__init__(463, data)


class QuantityType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuantityType, self).__init__(465)
        else:
            super(QuantityType, self).__init__(465, data)


class BookingRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BookingRefID, self).__init__(466)
        else:
            super(BookingRefID, self).__init__(466, data)


class IndividualAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IndividualAllocID, self).__init__(467)
        else:
            super(IndividualAllocID, self).__init__(467, data)


class RoundingDirection(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(RoundingDirection, self).__init__(468)
        else:
            super(RoundingDirection, self).__init__(468, data)


class RoundingModulus(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RoundingModulus, self).__init__(469)
        else:
            super(RoundingModulus, self).__init__(469, data)


class CountryOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CountryOfIssue, self).__init__(470)
        else:
            super(CountryOfIssue, self).__init__(470, data)


class StateOrProvinceOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StateOrProvinceOfIssue, self).__init__(471)
        else:
            super(StateOrProvinceOfIssue, self).__init__(471, data)


class LocaleOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LocaleOfIssue, self).__init__(472)
        else:
            super(LocaleOfIssue, self).__init__(472, data)


class NoRegistDtls(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRegistDtls, self).__init__(473)
        else:
            super(NoRegistDtls, self).__init__(473, data)


class MailingDtls(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MailingDtls, self).__init__(474)
        else:
            super(MailingDtls, self).__init__(474, data)


class InvestorCountryOfResidence(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InvestorCountryOfResidence, self).__init__(475)
        else:
            super(InvestorCountryOfResidence, self).__init__(475, data)


class PaymentRef(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PaymentRef, self).__init__(476)
        else:
            super(PaymentRef, self).__init__(476, data)


class DistribPaymentMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DistribPaymentMethod, self).__init__(477)
        else:
            super(DistribPaymentMethod, self).__init__(477, data)


class CashDistribCurr(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribCurr, self).__init__(478)
        else:
            super(CashDistribCurr, self).__init__(478, data)


class CommCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CommCurrency, self).__init__(479)
        else:
            super(CommCurrency, self).__init__(479, data)


class CancellationRights(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(CancellationRights, self).__init__(480)
        else:
            super(CancellationRights, self).__init__(480, data)


class MoneyLaunderingStatus(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MoneyLaunderingStatus, self).__init__(481)
        else:
            super(MoneyLaunderingStatus, self).__init__(481, data)


class MailingInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MailingInst, self).__init__(482)
        else:
            super(MailingInst, self).__init__(482, data)


class TransBkdTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TransBkdTime, self).__init__(483)
        else:
            super(TransBkdTime, self).__init__(483, data)


class ExecPriceType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExecPriceType, self).__init__(484)
        else:
            super(ExecPriceType, self).__init__(484, data)


class ExecPriceAdjustment(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ExecPriceAdjustment, self).__init__(485)
        else:
            super(ExecPriceAdjustment, self).__init__(485, data)


class DateOfBirth(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DateOfBirth, self).__init__(486)
        else:
            super(DateOfBirth, self).__init__(486, data)


class TradeReportTransType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeReportTransType, self).__init__(487)
        else:
            super(TradeReportTransType, self).__init__(487, data)


class CardHolderName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardHolderName, self).__init__(488)
        else:
            super(CardHolderName, self).__init__(488, data)


class CardNumber(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardNumber, self).__init__(489)
        else:
            super(CardNumber, self).__init__(489, data)


class CardExpDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardExpDate, self).__init__(490)
        else:
            super(CardExpDate, self).__init__(490, data)


class CardIssNo(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardIssNo, self).__init__(491)
        else:
            super(CardIssNo, self).__init__(491, data)


class PaymentMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PaymentMethod, self).__init__(492)
        else:
            super(PaymentMethod, self).__init__(492, data)


class RegistAcctType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistAcctType, self).__init__(493)
        else:
            super(RegistAcctType, self).__init__(493, data)


class Designation(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Designation, self).__init__(494)
        else:
            super(Designation, self).__init__(494, data)


class TaxAdvantageType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TaxAdvantageType, self).__init__(495)
        else:
            super(TaxAdvantageType, self).__init__(495, data)


class RegistRejReasonText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistRejReasonText, self).__init__(496)
        else:
            super(RegistRejReasonText, self).__init__(496, data)


class FundRenewWaiv(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(FundRenewWaiv, self).__init__(497)
        else:
            super(FundRenewWaiv, self).__init__(497, data)


class CashDistribAgentName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribAgentName, self).__init__(498)
        else:
            super(CashDistribAgentName, self).__init__(498, data)


class CashDistribAgentCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribAgentCode, self).__init__(499)
        else:
            super(CashDistribAgentCode, self).__init__(499, data)


class CashDistribAgentAcctNumber(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribAgentAcctNumber, self).__init__(500)
        else:
            super(CashDistribAgentAcctNumber, self).__init__(500, data)


class CashDistribPayRef(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribPayRef, self).__init__(501)
        else:
            super(CashDistribPayRef, self).__init__(501, data)


class CardStartDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardStartDate, self).__init__(503)
        else:
            super(CardStartDate, self).__init__(503, data)


class PaymentDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PaymentDate, self).__init__(504)
        else:
            super(PaymentDate, self).__init__(504, data)


class PaymentRemitterID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PaymentRemitterID, self).__init__(505)
        else:
            super(PaymentRemitterID, self).__init__(505, data)


class RegistStatus(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(RegistStatus, self).__init__(506)
        else:
            super(RegistStatus, self).__init__(506, data)


class RegistRejReasonCode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RegistRejReasonCode, self).__init__(507)
        else:
            super(RegistRejReasonCode, self).__init__(507, data)


class RegistRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistRefID, self).__init__(508)
        else:
            super(RegistRefID, self).__init__(508, data)


class RegistDetls(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistDetls, self).__init__(509)
        else:
            super(RegistDetls, self).__init__(509, data)


class NoDistribInsts(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDistribInsts, self).__init__(510)
        else:
            super(NoDistribInsts, self).__init__(510, data)


class RegistEmail(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistEmail, self).__init__(511)
        else:
            super(RegistEmail, self).__init__(511, data)


class DistribPercentage(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DistribPercentage, self).__init__(512)
        else:
            super(DistribPercentage, self).__init__(512, data)


class RegistID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistID, self).__init__(513)
        else:
            super(RegistID, self).__init__(513, data)


class RegistTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(RegistTransType, self).__init__(514)
        else:
            super(RegistTransType, self).__init__(514, data)


class ExecValuationPoint(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ExecValuationPoint, self).__init__(515)
        else:
            super(ExecValuationPoint, self).__init__(515, data)


class OrderPercent(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderPercent, self).__init__(516)
        else:
            super(OrderPercent, self).__init__(516, data)


class OwnershipType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OwnershipType, self).__init__(517)
        else:
            super(OwnershipType, self).__init__(517, data)


class NoContAmts(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoContAmts, self).__init__(518)
        else:
            super(NoContAmts, self).__init__(518, data)


class ContAmtType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ContAmtType, self).__init__(519)
        else:
            super(ContAmtType, self).__init__(519, data)


class ContAmtValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ContAmtValue, self).__init__(520)
        else:
            super(ContAmtValue, self).__init__(520, data)


class ContAmtCurr(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContAmtCurr, self).__init__(521)
        else:
            super(ContAmtCurr, self).__init__(521, data)


class OwnerType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OwnerType, self).__init__(522)
        else:
            super(OwnerType, self).__init__(522, data)


class PartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PartySubID, self).__init__(523)
        else:
            super(PartySubID, self).__init__(523, data)


class NestedPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NestedPartyID, self).__init__(524)
        else:
            super(NestedPartyID, self).__init__(524, data)


class NestedPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(NestedPartyIDSource, self).__init__(525)
        else:
            super(NestedPartyIDSource, self).__init__(525, data)


class SecondaryClOrdID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryClOrdID, self).__init__(526)
        else:
            super(SecondaryClOrdID, self).__init__(526, data)


class SecondaryExecID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryExecID, self).__init__(527)
        else:
            super(SecondaryExecID, self).__init__(527, data)


class OrderCapacity(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OrderCapacity, self).__init__(528)
        else:
            super(OrderCapacity, self).__init__(528, data)


class OrderRestrictions(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrderRestrictions, self).__init__(529)
        else:
            super(OrderRestrictions, self).__init__(529, data)


class MassCancelRequestType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MassCancelRequestType, self).__init__(530)
        else:
            super(MassCancelRequestType, self).__init__(530, data)


class MassCancelResponse(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MassCancelResponse, self).__init__(531)
        else:
            super(MassCancelResponse, self).__init__(531, data)


class MassCancelRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassCancelRejectReason, self).__init__(532)
        else:
            super(MassCancelRejectReason, self).__init__(532, data)


class TotalAffectedOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotalAffectedOrders, self).__init__(533)
        else:
            super(TotalAffectedOrders, self).__init__(533, data)


class NoAffectedOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoAffectedOrders, self).__init__(534)
        else:
            super(NoAffectedOrders, self).__init__(534, data)


class AffectedOrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AffectedOrderID, self).__init__(535)
        else:
            super(AffectedOrderID, self).__init__(535, data)


class AffectedSecondaryOrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AffectedSecondaryOrderID, self).__init__(536)
        else:
            super(AffectedSecondaryOrderID, self).__init__(536, data)


class QuoteType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteType, self).__init__(537)
        else:
            super(QuoteType, self).__init__(537, data)


class NestedPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NestedPartyRole, self).__init__(538)
        else:
            super(NestedPartyRole, self).__init__(538, data)


class NoNestedPartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNestedPartyIDs, self).__init__(539)
        else:
            super(NoNestedPartyIDs, self).__init__(539, data)


class TotalAccruedInterestAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TotalAccruedInterestAmt, self).__init__(540)
        else:
            super(TotalAccruedInterestAmt, self).__init__(540, data)


class MaturityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityDate, self).__init__(541)
        else:
            super(MaturityDate, self).__init__(541, data)


class UnderlyingMaturityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingMaturityDate, self).__init__(542)
        else:
            super(UnderlyingMaturityDate, self).__init__(542, data)


class InstrRegistry(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InstrRegistry, self).__init__(543)
        else:
            super(InstrRegistry, self).__init__(543, data)


class CashMargin(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(CashMargin, self).__init__(544)
        else:
            super(CashMargin, self).__init__(544, data)


class NestedPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NestedPartySubID, self).__init__(545)
        else:
            super(NestedPartySubID, self).__init__(545, data)


class Scope(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Scope, self).__init__(546)
        else:
            super(Scope, self).__init__(546, data)


class MDImplicitDelete(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(MDImplicitDelete, self).__init__(547)
        else:
            super(MDImplicitDelete, self).__init__(547, data)


class CrossID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CrossID, self).__init__(548)
        else:
            super(CrossID, self).__init__(548, data)


class CrossType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CrossType, self).__init__(549)
        else:
            super(CrossType, self).__init__(549, data)


class CrossPrioritization(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CrossPrioritization, self).__init__(550)
        else:
            super(CrossPrioritization, self).__init__(550, data)


class OrigCrossID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigCrossID, self).__init__(551)
        else:
            super(OrigCrossID, self).__init__(551, data)


class NoSides(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSides, self).__init__(552)
        else:
            super(NoSides, self).__init__(552, data)


class NoLegs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLegs, self).__init__(555)
        else:
            super(NoLegs, self).__init__(555, data)


class LegCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegCurrency, self).__init__(556)
        else:
            super(LegCurrency, self).__init__(556, data)


class TotalNumSecurityTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotalNumSecurityTypes, self).__init__(557)
        else:
            super(TotalNumSecurityTypes, self).__init__(557, data)


class NoSecurityTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSecurityTypes, self).__init__(558)
        else:
            super(NoSecurityTypes, self).__init__(558, data)


class SecurityListRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListRequestType, self).__init__(559)
        else:
            super(SecurityListRequestType, self).__init__(559, data)


class SecurityRequestResult(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityRequestResult, self).__init__(560)
        else:
            super(SecurityRequestResult, self).__init__(560, data)


class RoundLot(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RoundLot, self).__init__(561)
        else:
            super(RoundLot, self).__init__(561, data)


class MinTradeVol(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinTradeVol, self).__init__(562)
        else:
            super(MinTradeVol, self).__init__(562, data)


class MultiLegRptTypeReq(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MultiLegRptTypeReq, self).__init__(563)
        else:
            super(MultiLegRptTypeReq, self).__init__(563, data)


class LegPositionEffect(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LegPositionEffect, self).__init__(564)
        else:
            super(LegPositionEffect, self).__init__(564, data)


class LegCoveredOrUncovered(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegCoveredOrUncovered, self).__init__(565)
        else:
            super(LegCoveredOrUncovered, self).__init__(565, data)


class LegPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegPrice, self).__init__(566)
        else:
            super(LegPrice, self).__init__(566, data)


class TradSesStatusRejReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesStatusRejReason, self).__init__(567)
        else:
            super(TradSesStatusRejReason, self).__init__(567, data)


class TradeRequestID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeRequestID, self).__init__(568)
        else:
            super(TradeRequestID, self).__init__(568, data)


class TradeRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeRequestType, self).__init__(569)
        else:
            super(TradeRequestType, self).__init__(569, data)


class PreviouslyReported(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PreviouslyReported, self).__init__(570)
        else:
            super(PreviouslyReported, self).__init__(570, data)


class TradeReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeReportID, self).__init__(571)
        else:
            super(TradeReportID, self).__init__(571, data)


class TradeReportRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeReportRefID, self).__init__(572)
        else:
            super(TradeReportRefID, self).__init__(572, data)


class MatchStatus(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MatchStatus, self).__init__(573)
        else:
            super(MatchStatus, self).__init__(573, data)


class MatchType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MatchType, self).__init__(574)
        else:
            super(MatchType, self).__init__(574, data)


class OddLot(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(OddLot, self).__init__(575)
        else:
            super(OddLot, self).__init__(575, data)


class NoClearingInstructions(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoClearingInstructions, self).__init__(576)
        else:
            super(NoClearingInstructions, self).__init__(576, data)


class ClearingInstruction(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ClearingInstruction, self).__init__(577)
        else:
            super(ClearingInstruction, self).__init__(577, data)


class TradeInputSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeInputSource, self).__init__(578)
        else:
            super(TradeInputSource, self).__init__(578, data)


class TradeInputDevice(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeInputDevice, self).__init__(579)
        else:
            super(TradeInputDevice, self).__init__(579, data)


class NoDates(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDates, self).__init__(580)
        else:
            super(NoDates, self).__init__(580, data)


class AccountType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AccountType, self).__init__(581)
        else:
            super(AccountType, self).__init__(581, data)


class CustOrderCapacity(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CustOrderCapacity, self).__init__(582)
        else:
            super(CustOrderCapacity, self).__init__(582, data)


class ClOrdLinkID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClOrdLinkID, self).__init__(583)
        else:
            super(ClOrdLinkID, self).__init__(583, data)


class MassStatusReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MassStatusReqID, self).__init__(584)
        else:
            super(MassStatusReqID, self).__init__(584, data)


class MassStatusReqType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassStatusReqType, self).__init__(585)
        else:
            super(MassStatusReqType, self).__init__(585, data)


class OrigOrdModTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(OrigOrdModTime, self).__init__(586)
        else:
            super(OrigOrdModTime, self).__init__(586, data)


class LegSettlmntTyp(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LegSettlmntTyp, self).__init__(587)
        else:
            super(LegSettlmntTyp, self).__init__(587, data)


class LegFutSettDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegFutSettDate, self).__init__(588)
        else:
            super(LegFutSettDate, self).__init__(588, data)


class DayBookingInst(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DayBookingInst, self).__init__(589)
        else:
            super(DayBookingInst, self).__init__(589, data)


class BookingUnit(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(BookingUnit, self).__init__(590)
        else:
            super(BookingUnit, self).__init__(590, data)


class PreallocMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(PreallocMethod, self).__init__(591)
        else:
            super(PreallocMethod, self).__init__(591, data)


class UnderlyingCountryOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCountryOfIssue, self).__init__(592)
        else:
            super(UnderlyingCountryOfIssue, self).__init__(592, data)


class UnderlyingStateOrProvinceOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStateOrProvinceOfIssue, self).__init__(593)
        else:
            super(UnderlyingStateOrProvinceOfIssue, self).__init__(593, data)


class UnderlyingLocaleOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLocaleOfIssue, self).__init__(594)
        else:
            super(UnderlyingLocaleOfIssue, self).__init__(594, data)


class UnderlyingInstrRegistry(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrRegistry, self).__init__(595)
        else:
            super(UnderlyingInstrRegistry, self).__init__(595, data)


class LegCountryOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegCountryOfIssue, self).__init__(596)
        else:
            super(LegCountryOfIssue, self).__init__(596, data)


class LegStateOrProvinceOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegStateOrProvinceOfIssue, self).__init__(597)
        else:
            super(LegStateOrProvinceOfIssue, self).__init__(597, data)


class LegLocaleOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegLocaleOfIssue, self).__init__(598)
        else:
            super(LegLocaleOfIssue, self).__init__(598, data)


class LegInstrRegistry(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegInstrRegistry, self).__init__(599)
        else:
            super(LegInstrRegistry, self).__init__(599, data)


class LegSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSymbol, self).__init__(600)
        else:
            super(LegSymbol, self).__init__(600, data)


class LegSymbolSfx(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSymbolSfx, self).__init__(601)
        else:
            super(LegSymbolSfx, self).__init__(601, data)


class LegSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityID, self).__init__(602)
        else:
            super(LegSecurityID, self).__init__(602, data)


class LegSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityIDSource, self).__init__(603)
        else:
            super(LegSecurityIDSource, self).__init__(603, data)


class NoLegSecurityAltID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLegSecurityAltID, self).__init__(604)
        else:
            super(NoLegSecurityAltID, self).__init__(604, data)


class LegSecurityAltID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityAltID, self).__init__(605)
        else:
            super(LegSecurityAltID, self).__init__(605, data)


class LegSecurityAltIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityAltIDSource, self).__init__(606)
        else:
            super(LegSecurityAltIDSource, self).__init__(606, data)


class LegProduct(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegProduct, self).__init__(607)
        else:
            super(LegProduct, self).__init__(607, data)


class LegCFICode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegCFICode, self).__init__(608)
        else:
            super(LegCFICode, self).__init__(608, data)


class LegSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityType, self).__init__(609)
        else:
            super(LegSecurityType, self).__init__(609, data)


class LegMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegMaturityMonthYear, self).__init__(610)
        else:
            super(LegMaturityMonthYear, self).__init__(610, data)


class LegMaturityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegMaturityDate, self).__init__(611)
        else:
            super(LegMaturityDate, self).__init__(611, data)


class LegStrikePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegStrikePrice, self).__init__(612)
        else:
            super(LegStrikePrice, self).__init__(612, data)


class LegOptAttribute(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LegOptAttribute, self).__init__(613)
        else:
            super(LegOptAttribute, self).__init__(613, data)


class LegContractMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegContractMultiplier, self).__init__(614)
        else:
            super(LegContractMultiplier, self).__init__(614, data)


class LegCouponRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegCouponRate, self).__init__(615)
        else:
            super(LegCouponRate, self).__init__(615, data)


class LegSecurityExchange(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityExchange, self).__init__(616)
        else:
            super(LegSecurityExchange, self).__init__(616, data)


class LegIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegIssuer, self).__init__(617)
        else:
            super(LegIssuer, self).__init__(617, data)


class EncodedLegIssuerLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedLegIssuerLen, self).__init__(618)
        else:
            super(EncodedLegIssuerLen, self).__init__(618, data)


class EncodedLegIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedLegIssuer, self).__init__(619)
        else:
            super(EncodedLegIssuer, self).__init__(619, data)


class LegSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecurityDesc, self).__init__(620)
        else:
            super(LegSecurityDesc, self).__init__(620, data)


class EncodedLegSecurityDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedLegSecurityDescLen, self).__init__(621)
        else:
            super(EncodedLegSecurityDescLen, self).__init__(621, data)


class EncodedLegSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedLegSecurityDesc, self).__init__(622)
        else:
            super(EncodedLegSecurityDesc, self).__init__(622, data)


class LegRatioQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegRatioQty, self).__init__(623)
        else:
            super(LegRatioQty, self).__init__(623, data)


class LegSide(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LegSide, self).__init__(624)
        else:
            super(LegSide, self).__init__(624, data)


class TradingSessionSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradingSessionSubID, self).__init__(625)
        else:
            super(TradingSessionSubID, self).__init__(625, data)


class AllocType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocType, self).__init__(626)
        else:
            super(AllocType, self).__init__(626, data)


class MidPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MidPx, self).__init__(631)
        else:
            super(MidPx, self).__init__(631, data)


class BidYield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidYield, self).__init__(632)
        else:
            super(BidYield, self).__init__(632, data)


class MidYield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MidYield, self).__init__(633)
        else:
            super(MidYield, self).__init__(633, data)


class OfferYield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferYield, self).__init__(634)
        else:
            super(OfferYield, self).__init__(634, data)


class ClearingFeeIndicator(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClearingFeeIndicator, self).__init__(635)
        else:
            super(ClearingFeeIndicator, self).__init__(635, data)


class WorkingIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(WorkingIndicator, self).__init__(636)
        else:
            super(WorkingIndicator, self).__init__(636, data)


class LegLastPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegLastPx, self).__init__(637)
        else:
            super(LegLastPx, self).__init__(637, data)


class PriorityIndicator(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PriorityIndicator, self).__init__(638)
        else:
            super(PriorityIndicator, self).__init__(638, data)


class PriceImprovement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PriceImprovement, self).__init__(639)
        else:
            super(PriceImprovement, self).__init__(639, data)


class Price2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Price2, self).__init__(640)
        else:
            super(Price2, self).__init__(640, data)


class LastForwardPoints2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastForwardPoints2, self).__init__(641)
        else:
            super(LastForwardPoints2, self).__init__(641, data)


class BidForwardPoints2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidForwardPoints2, self).__init__(642)
        else:
            super(BidForwardPoints2, self).__init__(642, data)


class OfferForwardPoints2(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferForwardPoints2, self).__init__(643)
        else:
            super(OfferForwardPoints2, self).__init__(643, data)


class RFQReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RFQReqID, self).__init__(644)
        else:
            super(RFQReqID, self).__init__(644, data)


class MktBidPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MktBidPx, self).__init__(645)
        else:
            super(MktBidPx, self).__init__(645, data)


class MktOfferPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MktOfferPx, self).__init__(646)
        else:
            super(MktOfferPx, self).__init__(646, data)


class MinBidSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinBidSize, self).__init__(647)
        else:
            super(MinBidSize, self).__init__(647, data)


class MinOfferSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinOfferSize, self).__init__(648)
        else:
            super(MinOfferSize, self).__init__(648, data)


class QuoteStatusReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteStatusReqID, self).__init__(649)
        else:
            super(QuoteStatusReqID, self).__init__(649, data)


class LegalConfirm(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(LegalConfirm, self).__init__(650)
        else:
            super(LegalConfirm, self).__init__(650, data)


class UnderlyingLastPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLastPx, self).__init__(651)
        else:
            super(UnderlyingLastPx, self).__init__(651, data)


class UnderlyingLastQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLastQty, self).__init__(652)
        else:
            super(UnderlyingLastQty, self).__init__(652, data)


class LegRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegRefID, self).__init__(654)
        else:
            super(LegRefID, self).__init__(654, data)


class ContraLegRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContraLegRefID, self).__init__(655)
        else:
            super(ContraLegRefID, self).__init__(655, data)


class SettlCurrBidFxRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrBidFxRate, self).__init__(656)
        else:
            super(SettlCurrBidFxRate, self).__init__(656, data)


class SettlCurrOfferFxRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SettlCurrOfferFxRate, self).__init__(657)
        else:
            super(SettlCurrOfferFxRate, self).__init__(657, data)


class QuoteRequestRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteRequestRejectReason, self).__init__(658)
        else:
            super(QuoteRequestRejectReason, self).__init__(658, data)


class SideComplianceID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideComplianceID, self).__init__(659)
        else:
            super(SideComplianceID, self).__init__(659, data)


class IOIID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(IOIID, self).__init__(23)
        else:
            super(IOIID, self).__init__(23, data)


class NoLinesOfText(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLinesOfText, self).__init__(33)
        else:
            super(NoLinesOfText, self).__init__(33, data)


class SettlType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlType, self).__init__(63)
        else:
            super(SettlType, self).__init__(63, data)


class SettlDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlDate, self).__init__(64)
        else:
            super(SettlDate, self).__init__(64, data)


class AvgPxPrecision(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AvgPxPrecision, self).__init__(74)
        else:
            super(AvgPxPrecision, self).__init__(74, data)


class SettlDate2(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlDate2, self).__init__(193)
        else:
            super(SettlDate2, self).__init__(193, data)


class PegOffsetValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PegOffsetValue, self).__init__(211)
        else:
            super(PegOffsetValue, self).__init__(211, data)


class OpenCloseSettlFlag(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OpenCloseSettlFlag, self).__init__(286)
        else:
            super(OpenCloseSettlFlag, self).__init__(286, data)


class TotNoQuoteEntries(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoQuoteEntries, self).__init__(304)
        else:
            super(TotNoQuoteEntries, self).__init__(304, data)


class DiscretionOffsetValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionOffsetValue, self).__init__(389)
        else:
            super(DiscretionOffsetValue, self).__init__(389, data)


class TotNoRelatedSym(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoRelatedSym, self).__init__(393)
        else:
            super(TotNoRelatedSym, self).__init__(393, data)


class BidTradeType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(BidTradeType, self).__init__(418)
        else:
            super(BidTradeType, self).__init__(418, data)


class CardIssNum(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CardIssNum, self).__init__(491)
        else:
            super(CardIssNum, self).__init__(491, data)


class CashDistribAgentAcctName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CashDistribAgentAcctName, self).__init__(502)
        else:
            super(CashDistribAgentAcctName, self).__init__(502, data)


class RegistDtls(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RegistDtls, self).__init__(509)
        else:
            super(RegistDtls, self).__init__(509, data)


class TotNoSecurityTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoSecurityTypes, self).__init__(557)
        else:
            super(TotNoSecurityTypes, self).__init__(557, data)


class LegSettlType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LegSettlType, self).__init__(587)
        else:
            super(LegSettlType, self).__init__(587, data)


class LegSettlDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSettlDate, self).__init__(588)
        else:
            super(LegSettlDate, self).__init__(588, data)


class AcctIDSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AcctIDSource, self).__init__(660)
        else:
            super(AcctIDSource, self).__init__(660, data)


class AllocAcctIDSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocAcctIDSource, self).__init__(661)
        else:
            super(AllocAcctIDSource, self).__init__(661, data)


class BenchmarkPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkPrice, self).__init__(662)
        else:
            super(BenchmarkPrice, self).__init__(662, data)


class BenchmarkPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkPriceType, self).__init__(663)
        else:
            super(BenchmarkPriceType, self).__init__(663, data)


class ConfirmID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmID, self).__init__(664)
        else:
            super(ConfirmID, self).__init__(664, data)


class ConfirmStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmStatus, self).__init__(665)
        else:
            super(ConfirmStatus, self).__init__(665, data)


class ConfirmTransType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmTransType, self).__init__(666)
        else:
            super(ConfirmTransType, self).__init__(666, data)


class ContractSettlMonth(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContractSettlMonth, self).__init__(667)
        else:
            super(ContractSettlMonth, self).__init__(667, data)


class DeliveryForm(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DeliveryForm, self).__init__(668)
        else:
            super(DeliveryForm, self).__init__(668, data)


class LastParPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastParPx, self).__init__(669)
        else:
            super(LastParPx, self).__init__(669, data)


class NoLegAllocs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLegAllocs, self).__init__(670)
        else:
            super(NoLegAllocs, self).__init__(670, data)


class LegAllocAccount(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegAllocAccount, self).__init__(671)
        else:
            super(LegAllocAccount, self).__init__(671, data)


class LegIndividualAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegIndividualAllocID, self).__init__(672)
        else:
            super(LegIndividualAllocID, self).__init__(672, data)


class LegAllocQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegAllocQty, self).__init__(673)
        else:
            super(LegAllocQty, self).__init__(673, data)


class LegAllocAcctIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegAllocAcctIDSource, self).__init__(674)
        else:
            super(LegAllocAcctIDSource, self).__init__(674, data)


class LegSettlCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSettlCurrency, self).__init__(675)
        else:
            super(LegSettlCurrency, self).__init__(675, data)


class LegBenchmarkCurveCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegBenchmarkCurveCurrency, self).__init__(676)
        else:
            super(LegBenchmarkCurveCurrency, self).__init__(676, data)


class LegBenchmarkCurveName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegBenchmarkCurveName, self).__init__(677)
        else:
            super(LegBenchmarkCurveName, self).__init__(677, data)


class LegBenchmarkCurvePoint(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegBenchmarkCurvePoint, self).__init__(678)
        else:
            super(LegBenchmarkCurvePoint, self).__init__(678, data)


class LegBenchmarkPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegBenchmarkPrice, self).__init__(679)
        else:
            super(LegBenchmarkPrice, self).__init__(679, data)


class LegBenchmarkPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegBenchmarkPriceType, self).__init__(680)
        else:
            super(LegBenchmarkPriceType, self).__init__(680, data)


class LegBidPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegBidPx, self).__init__(681)
        else:
            super(LegBidPx, self).__init__(681, data)


class LegIOIQty(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegIOIQty, self).__init__(682)
        else:
            super(LegIOIQty, self).__init__(682, data)


class NoLegStipulations(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLegStipulations, self).__init__(683)
        else:
            super(NoLegStipulations, self).__init__(683, data)


class LegOfferPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegOfferPx, self).__init__(684)
        else:
            super(LegOfferPx, self).__init__(684, data)


class LegPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegPriceType, self).__init__(686)
        else:
            super(LegPriceType, self).__init__(686, data)


class LegQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegQty, self).__init__(687)
        else:
            super(LegQty, self).__init__(687, data)


class LegStipulationType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegStipulationType, self).__init__(688)
        else:
            super(LegStipulationType, self).__init__(688, data)


class LegStipulationValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegStipulationValue, self).__init__(689)
        else:
            super(LegStipulationValue, self).__init__(689, data)


class LegSwapType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegSwapType, self).__init__(690)
        else:
            super(LegSwapType, self).__init__(690, data)


class Pool(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Pool, self).__init__(691)
        else:
            super(Pool, self).__init__(691, data)


class QuotePriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuotePriceType, self).__init__(692)
        else:
            super(QuotePriceType, self).__init__(692, data)


class QuoteRespID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteRespID, self).__init__(693)
        else:
            super(QuoteRespID, self).__init__(693, data)


class QuoteRespType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteRespType, self).__init__(694)
        else:
            super(QuoteRespType, self).__init__(694, data)


class QuoteQualifier(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteQualifier, self).__init__(695)
        else:
            super(QuoteQualifier, self).__init__(695, data)


class YieldRedemptionDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(YieldRedemptionDate, self).__init__(696)
        else:
            super(YieldRedemptionDate, self).__init__(696, data)


class YieldRedemptionPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(YieldRedemptionPrice, self).__init__(697)
        else:
            super(YieldRedemptionPrice, self).__init__(697, data)


class YieldRedemptionPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(YieldRedemptionPriceType, self).__init__(698)
        else:
            super(YieldRedemptionPriceType, self).__init__(698, data)


class BenchmarkSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkSecurityID, self).__init__(699)
        else:
            super(BenchmarkSecurityID, self).__init__(699, data)


class ReversalIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ReversalIndicator, self).__init__(700)
        else:
            super(ReversalIndicator, self).__init__(700, data)


class YieldCalcDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(YieldCalcDate, self).__init__(701)
        else:
            super(YieldCalcDate, self).__init__(701, data)


class NoPositions(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoPositions, self).__init__(702)
        else:
            super(NoPositions, self).__init__(702, data)


class PosType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PosType, self).__init__(703)
        else:
            super(PosType, self).__init__(703, data)


class LongQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LongQty, self).__init__(704)
        else:
            super(LongQty, self).__init__(704, data)


class ShortQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ShortQty, self).__init__(705)
        else:
            super(ShortQty, self).__init__(705, data)


class PosQtyStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosQtyStatus, self).__init__(706)
        else:
            super(PosQtyStatus, self).__init__(706, data)


class PosAmtType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PosAmtType, self).__init__(707)
        else:
            super(PosAmtType, self).__init__(707, data)


class PosAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PosAmt, self).__init__(708)
        else:
            super(PosAmt, self).__init__(708, data)


class PosTransType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosTransType, self).__init__(709)
        else:
            super(PosTransType, self).__init__(709, data)


class PosReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PosReqID, self).__init__(710)
        else:
            super(PosReqID, self).__init__(710, data)


class NoUnderlyings(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUnderlyings, self).__init__(711)
        else:
            super(NoUnderlyings, self).__init__(711, data)


class PosMaintAction(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosMaintAction, self).__init__(712)
        else:
            super(PosMaintAction, self).__init__(712, data)


class OrigPosReqRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigPosReqRefID, self).__init__(713)
        else:
            super(OrigPosReqRefID, self).__init__(713, data)


class PosMaintRptRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PosMaintRptRefID, self).__init__(714)
        else:
            super(PosMaintRptRefID, self).__init__(714, data)


class ClearingBusinessDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ClearingBusinessDate, self).__init__(715)
        else:
            super(ClearingBusinessDate, self).__init__(715, data)


class SettlSessID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlSessID, self).__init__(716)
        else:
            super(SettlSessID, self).__init__(716, data)


class SettlSessSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlSessSubID, self).__init__(717)
        else:
            super(SettlSessSubID, self).__init__(717, data)


class AdjustmentType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AdjustmentType, self).__init__(718)
        else:
            super(AdjustmentType, self).__init__(718, data)


class ContraryInstructionIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ContraryInstructionIndicator, self).__init__(719)
        else:
            super(ContraryInstructionIndicator, self).__init__(719, data)


class PriorSpreadIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PriorSpreadIndicator, self).__init__(720)
        else:
            super(PriorSpreadIndicator, self).__init__(720, data)


class PosMaintRptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PosMaintRptID, self).__init__(721)
        else:
            super(PosMaintRptID, self).__init__(721, data)


class PosMaintStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosMaintStatus, self).__init__(722)
        else:
            super(PosMaintStatus, self).__init__(722, data)


class PosMaintResult(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosMaintResult, self).__init__(723)
        else:
            super(PosMaintResult, self).__init__(723, data)


class PosReqType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosReqType, self).__init__(724)
        else:
            super(PosReqType, self).__init__(724, data)


class ResponseTransportType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ResponseTransportType, self).__init__(725)
        else:
            super(ResponseTransportType, self).__init__(725, data)


class ResponseDestination(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ResponseDestination, self).__init__(726)
        else:
            super(ResponseDestination, self).__init__(726, data)


class TotalNumPosReports(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotalNumPosReports, self).__init__(727)
        else:
            super(TotalNumPosReports, self).__init__(727, data)


class PosReqResult(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosReqResult, self).__init__(728)
        else:
            super(PosReqResult, self).__init__(728, data)


class PosReqStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PosReqStatus, self).__init__(729)
        else:
            super(PosReqStatus, self).__init__(729, data)


class SettlPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPrice, self).__init__(730)
        else:
            super(SettlPrice, self).__init__(730, data)


class SettlPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPriceType, self).__init__(731)
        else:
            super(SettlPriceType, self).__init__(731, data)


class UnderlyingSettlPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlPrice, self).__init__(732)
        else:
            super(UnderlyingSettlPrice, self).__init__(732, data)


class UnderlyingSettlPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlPriceType, self).__init__(733)
        else:
            super(UnderlyingSettlPriceType, self).__init__(733, data)


class PriorSettlPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PriorSettlPrice, self).__init__(734)
        else:
            super(PriorSettlPrice, self).__init__(734, data)


class NoQuoteQualifiers(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoQuoteQualifiers, self).__init__(735)
        else:
            super(NoQuoteQualifiers, self).__init__(735, data)


class AllocSettlCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocSettlCurrency, self).__init__(736)
        else:
            super(AllocSettlCurrency, self).__init__(736, data)


class AllocSettlCurrAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocSettlCurrAmt, self).__init__(737)
        else:
            super(AllocSettlCurrAmt, self).__init__(737, data)


class InterestAtMaturity(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(InterestAtMaturity, self).__init__(738)
        else:
            super(InterestAtMaturity, self).__init__(738, data)


class LegDatedDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegDatedDate, self).__init__(739)
        else:
            super(LegDatedDate, self).__init__(739, data)


class LegPool(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegPool, self).__init__(740)
        else:
            super(LegPool, self).__init__(740, data)


class AllocInterestAtMaturity(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocInterestAtMaturity, self).__init__(741)
        else:
            super(AllocInterestAtMaturity, self).__init__(741, data)


class AllocAccruedInterestAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllocAccruedInterestAmt, self).__init__(742)
        else:
            super(AllocAccruedInterestAmt, self).__init__(742, data)


class DeliveryDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeliveryDate, self).__init__(743)
        else:
            super(DeliveryDate, self).__init__(743, data)


class AssignmentMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(AssignmentMethod, self).__init__(744)
        else:
            super(AssignmentMethod, self).__init__(744, data)


class AssignmentUnit(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AssignmentUnit, self).__init__(745)
        else:
            super(AssignmentUnit, self).__init__(745, data)


class OpenInterest(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OpenInterest, self).__init__(746)
        else:
            super(OpenInterest, self).__init__(746, data)


class ExerciseMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExerciseMethod, self).__init__(747)
        else:
            super(ExerciseMethod, self).__init__(747, data)


class TotNumTradeReports(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNumTradeReports, self).__init__(748)
        else:
            super(TotNumTradeReports, self).__init__(748, data)


class TradeRequestResult(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeRequestResult, self).__init__(749)
        else:
            super(TradeRequestResult, self).__init__(749, data)


class TradeRequestStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeRequestStatus, self).__init__(750)
        else:
            super(TradeRequestStatus, self).__init__(750, data)


class TradeReportRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeReportRejectReason, self).__init__(751)
        else:
            super(TradeReportRejectReason, self).__init__(751, data)


class SideMultiLegReportingType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideMultiLegReportingType, self).__init__(752)
        else:
            super(SideMultiLegReportingType, self).__init__(752, data)


class NoPosAmt(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoPosAmt, self).__init__(753)
        else:
            super(NoPosAmt, self).__init__(753, data)


class AutoAcceptIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(AutoAcceptIndicator, self).__init__(754)
        else:
            super(AutoAcceptIndicator, self).__init__(754, data)


class AllocReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocReportID, self).__init__(755)
        else:
            super(AllocReportID, self).__init__(755, data)


class NoNested2PartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested2PartyIDs, self).__init__(756)
        else:
            super(NoNested2PartyIDs, self).__init__(756, data)


class Nested2PartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested2PartyID, self).__init__(757)
        else:
            super(Nested2PartyID, self).__init__(757, data)


class Nested2PartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Nested2PartyIDSource, self).__init__(758)
        else:
            super(Nested2PartyIDSource, self).__init__(758, data)


class Nested2PartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested2PartyRole, self).__init__(759)
        else:
            super(Nested2PartyRole, self).__init__(759, data)


class Nested2PartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested2PartySubID, self).__init__(760)
        else:
            super(Nested2PartySubID, self).__init__(760, data)


class BenchmarkSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(BenchmarkSecurityIDSource, self).__init__(761)
        else:
            super(BenchmarkSecurityIDSource, self).__init__(761, data)


class SecuritySubType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecuritySubType, self).__init__(762)
        else:
            super(SecuritySubType, self).__init__(762, data)


class UnderlyingSecuritySubType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSecuritySubType, self).__init__(763)
        else:
            super(UnderlyingSecuritySubType, self).__init__(763, data)


class LegSecuritySubType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegSecuritySubType, self).__init__(764)
        else:
            super(LegSecuritySubType, self).__init__(764, data)


class AllowableOneSidednessPct(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllowableOneSidednessPct, self).__init__(765)
        else:
            super(AllowableOneSidednessPct, self).__init__(765, data)


class AllowableOneSidednessValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AllowableOneSidednessValue, self).__init__(766)
        else:
            super(AllowableOneSidednessValue, self).__init__(766, data)


class AllowableOneSidednessCurr(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllowableOneSidednessCurr, self).__init__(767)
        else:
            super(AllowableOneSidednessCurr, self).__init__(767, data)


class NoTrdRegTimestamps(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTrdRegTimestamps, self).__init__(768)
        else:
            super(NoTrdRegTimestamps, self).__init__(768, data)


class TrdRegTimestamp(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRegTimestamp, self).__init__(769)
        else:
            super(TrdRegTimestamp, self).__init__(769, data)


class TrdRegTimestampType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRegTimestampType, self).__init__(770)
        else:
            super(TrdRegTimestampType, self).__init__(770, data)


class TrdRegTimestampOrigin(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRegTimestampOrigin, self).__init__(771)
        else:
            super(TrdRegTimestampOrigin, self).__init__(771, data)


class ConfirmRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmRefID, self).__init__(772)
        else:
            super(ConfirmRefID, self).__init__(772, data)


class ConfirmType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmType, self).__init__(773)
        else:
            super(ConfirmType, self).__init__(773, data)


class ConfirmRejReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmRejReason, self).__init__(774)
        else:
            super(ConfirmRejReason, self).__init__(774, data)


class BookingType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(BookingType, self).__init__(775)
        else:
            super(BookingType, self).__init__(775, data)


class IndividualAllocRejCode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(IndividualAllocRejCode, self).__init__(776)
        else:
            super(IndividualAllocRejCode, self).__init__(776, data)


class SettlInstMsgID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstMsgID, self).__init__(777)
        else:
            super(SettlInstMsgID, self).__init__(777, data)


class NoSettlInst(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSettlInst, self).__init__(778)
        else:
            super(NoSettlInst, self).__init__(778, data)


class LastUpdateTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(LastUpdateTime, self).__init__(779)
        else:
            super(LastUpdateTime, self).__init__(779, data)


class AllocSettlInstType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocSettlInstType, self).__init__(780)
        else:
            super(AllocSettlInstType, self).__init__(780, data)


class NoSettlPartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSettlPartyIDs, self).__init__(781)
        else:
            super(NoSettlPartyIDs, self).__init__(781, data)


class SettlPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPartyID, self).__init__(782)
        else:
            super(SettlPartyID, self).__init__(782, data)


class SettlPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPartyIDSource, self).__init__(783)
        else:
            super(SettlPartyIDSource, self).__init__(783, data)


class SettlPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPartyRole, self).__init__(784)
        else:
            super(SettlPartyRole, self).__init__(784, data)


class SettlPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPartySubID, self).__init__(785)
        else:
            super(SettlPartySubID, self).__init__(785, data)


class SettlPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlPartySubIDType, self).__init__(786)
        else:
            super(SettlPartySubIDType, self).__init__(786, data)


class DlvyInstType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DlvyInstType, self).__init__(787)
        else:
            super(DlvyInstType, self).__init__(787, data)


class TerminationType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TerminationType, self).__init__(788)
        else:
            super(TerminationType, self).__init__(788, data)


class OrdStatusReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrdStatusReqID, self).__init__(790)
        else:
            super(OrdStatusReqID, self).__init__(790, data)


class SettlInstReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstReqID, self).__init__(791)
        else:
            super(SettlInstReqID, self).__init__(791, data)


class SettlInstReqRejCode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlInstReqRejCode, self).__init__(792)
        else:
            super(SettlInstReqRejCode, self).__init__(792, data)


class SecondaryAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryAllocID, self).__init__(793)
        else:
            super(SecondaryAllocID, self).__init__(793, data)


class AllocReportType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocReportType, self).__init__(794)
        else:
            super(AllocReportType, self).__init__(794, data)


class AllocReportRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocReportRefID, self).__init__(795)
        else:
            super(AllocReportRefID, self).__init__(795, data)


class AllocCancReplaceReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocCancReplaceReason, self).__init__(796)
        else:
            super(AllocCancReplaceReason, self).__init__(796, data)


class CopyMsgIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(CopyMsgIndicator, self).__init__(797)
        else:
            super(CopyMsgIndicator, self).__init__(797, data)


class AllocAccountType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocAccountType, self).__init__(798)
        else:
            super(AllocAccountType, self).__init__(798, data)


class OrderAvgPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderAvgPx, self).__init__(799)
        else:
            super(OrderAvgPx, self).__init__(799, data)


class OrderBookingQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderBookingQty, self).__init__(800)
        else:
            super(OrderBookingQty, self).__init__(800, data)


class NoSettlPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSettlPartySubIDs, self).__init__(801)
        else:
            super(NoSettlPartySubIDs, self).__init__(801, data)


class NoPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoPartySubIDs, self).__init__(802)
        else:
            super(NoPartySubIDs, self).__init__(802, data)


class PartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PartySubIDType, self).__init__(803)
        else:
            super(PartySubIDType, self).__init__(803, data)


class NoNestedPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNestedPartySubIDs, self).__init__(804)
        else:
            super(NoNestedPartySubIDs, self).__init__(804, data)


class NestedPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NestedPartySubIDType, self).__init__(805)
        else:
            super(NestedPartySubIDType, self).__init__(805, data)


class NoNested2PartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested2PartySubIDs, self).__init__(806)
        else:
            super(NoNested2PartySubIDs, self).__init__(806, data)


class Nested2PartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested2PartySubIDType, self).__init__(807)
        else:
            super(Nested2PartySubIDType, self).__init__(807, data)


class AllocIntermedReqType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocIntermedReqType, self).__init__(808)
        else:
            super(AllocIntermedReqType, self).__init__(808, data)


class UnderlyingPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPx, self).__init__(810)
        else:
            super(UnderlyingPx, self).__init__(810, data)


class PriceDelta(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PriceDelta, self).__init__(811)
        else:
            super(PriceDelta, self).__init__(811, data)


class ApplQueueMax(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplQueueMax, self).__init__(812)
        else:
            super(ApplQueueMax, self).__init__(812, data)


class ApplQueueDepth(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplQueueDepth, self).__init__(813)
        else:
            super(ApplQueueDepth, self).__init__(813, data)


class ApplQueueResolution(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplQueueResolution, self).__init__(814)
        else:
            super(ApplQueueResolution, self).__init__(814, data)


class ApplQueueAction(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplQueueAction, self).__init__(815)
        else:
            super(ApplQueueAction, self).__init__(815, data)


class NoAltMDSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoAltMDSource, self).__init__(816)
        else:
            super(NoAltMDSource, self).__init__(816, data)


class AltMDSourceID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AltMDSourceID, self).__init__(817)
        else:
            super(AltMDSourceID, self).__init__(817, data)


class SecondaryTradeReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryTradeReportID, self).__init__(818)
        else:
            super(SecondaryTradeReportID, self).__init__(818, data)


class AvgPxIndicator(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AvgPxIndicator, self).__init__(819)
        else:
            super(AvgPxIndicator, self).__init__(819, data)


class TradeLinkID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeLinkID, self).__init__(820)
        else:
            super(TradeLinkID, self).__init__(820, data)


class OrderInputDevice(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrderInputDevice, self).__init__(821)
        else:
            super(OrderInputDevice, self).__init__(821, data)


class UnderlyingTradingSessionID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingTradingSessionID, self).__init__(822)
        else:
            super(UnderlyingTradingSessionID, self).__init__(822, data)


class UnderlyingTradingSessionSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingTradingSessionSubID, self).__init__(823)
        else:
            super(UnderlyingTradingSessionSubID, self).__init__(823, data)


class TradeLegRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeLegRefID, self).__init__(824)
        else:
            super(TradeLegRefID, self).__init__(824, data)


class ExchangeRule(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExchangeRule, self).__init__(825)
        else:
            super(ExchangeRule, self).__init__(825, data)


class TradeAllocIndicator(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeAllocIndicator, self).__init__(826)
        else:
            super(TradeAllocIndicator, self).__init__(826, data)


class ExpirationCycle(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ExpirationCycle, self).__init__(827)
        else:
            super(ExpirationCycle, self).__init__(827, data)


class TrdType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TrdType, self).__init__(828)
        else:
            super(TrdType, self).__init__(828, data)


class TrdSubType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TrdSubType, self).__init__(829)
        else:
            super(TrdSubType, self).__init__(829, data)


class TransferReason(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TransferReason, self).__init__(830)
        else:
            super(TransferReason, self).__init__(830, data)


class TotNumAssignmentReports(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNumAssignmentReports, self).__init__(832)
        else:
            super(TotNumAssignmentReports, self).__init__(832, data)


class AsgnRptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AsgnRptID, self).__init__(833)
        else:
            super(AsgnRptID, self).__init__(833, data)


class ThresholdAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ThresholdAmount, self).__init__(834)
        else:
            super(ThresholdAmount, self).__init__(834, data)


class PegMoveType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegMoveType, self).__init__(835)
        else:
            super(PegMoveType, self).__init__(835, data)


class PegOffsetType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegOffsetType, self).__init__(836)
        else:
            super(PegOffsetType, self).__init__(836, data)


class PegLimitType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegLimitType, self).__init__(837)
        else:
            super(PegLimitType, self).__init__(837, data)


class PegRoundDirection(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegRoundDirection, self).__init__(838)
        else:
            super(PegRoundDirection, self).__init__(838, data)


class PeggedPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PeggedPrice, self).__init__(839)
        else:
            super(PeggedPrice, self).__init__(839, data)


class PegScope(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegScope, self).__init__(840)
        else:
            super(PegScope, self).__init__(840, data)


class DiscretionMoveType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionMoveType, self).__init__(841)
        else:
            super(DiscretionMoveType, self).__init__(841, data)


class DiscretionOffsetType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionOffsetType, self).__init__(842)
        else:
            super(DiscretionOffsetType, self).__init__(842, data)


class DiscretionLimitType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionLimitType, self).__init__(843)
        else:
            super(DiscretionLimitType, self).__init__(843, data)


class DiscretionRoundDirection(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionRoundDirection, self).__init__(844)
        else:
            super(DiscretionRoundDirection, self).__init__(844, data)


class DiscretionPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionPrice, self).__init__(845)
        else:
            super(DiscretionPrice, self).__init__(845, data)


class DiscretionScope(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DiscretionScope, self).__init__(846)
        else:
            super(DiscretionScope, self).__init__(846, data)


class TargetStrategy(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TargetStrategy, self).__init__(847)
        else:
            super(TargetStrategy, self).__init__(847, data)


class TargetStrategyParameters(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TargetStrategyParameters, self).__init__(848)
        else:
            super(TargetStrategyParameters, self).__init__(848, data)


class ParticipationRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ParticipationRate, self).__init__(849)
        else:
            super(ParticipationRate, self).__init__(849, data)


class TargetStrategyPerformance(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TargetStrategyPerformance, self).__init__(850)
        else:
            super(TargetStrategyPerformance, self).__init__(850, data)


class LastLiquidityInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LastLiquidityInd, self).__init__(851)
        else:
            super(LastLiquidityInd, self).__init__(851, data)


class PublishTrdIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PublishTrdIndicator, self).__init__(852)
        else:
            super(PublishTrdIndicator, self).__init__(852, data)


class ShortSaleReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ShortSaleReason, self).__init__(853)
        else:
            super(ShortSaleReason, self).__init__(853, data)


class QtyType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QtyType, self).__init__(854)
        else:
            super(QtyType, self).__init__(854, data)


class SecondaryTrdType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryTrdType, self).__init__(855)
        else:
            super(SecondaryTrdType, self).__init__(855, data)


class TradeReportType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradeReportType, self).__init__(856)
        else:
            super(TradeReportType, self).__init__(856, data)


class AllocNoOrdersType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocNoOrdersType, self).__init__(857)
        else:
            super(AllocNoOrdersType, self).__init__(857, data)


class SharedCommission(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SharedCommission, self).__init__(858)
        else:
            super(SharedCommission, self).__init__(858, data)


class ConfirmReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ConfirmReqID, self).__init__(859)
        else:
            super(ConfirmReqID, self).__init__(859, data)


class AvgParPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AvgParPx, self).__init__(860)
        else:
            super(AvgParPx, self).__init__(860, data)


class ReportedPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ReportedPx, self).__init__(861)
        else:
            super(ReportedPx, self).__init__(861, data)


class NoCapacities(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoCapacities, self).__init__(862)
        else:
            super(NoCapacities, self).__init__(862, data)


class OrderCapacityQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OrderCapacityQty, self).__init__(863)
        else:
            super(OrderCapacityQty, self).__init__(863, data)


class NoEvents(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoEvents, self).__init__(864)
        else:
            super(NoEvents, self).__init__(864, data)


class EventType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EventType, self).__init__(865)
        else:
            super(EventType, self).__init__(865, data)


class EventDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EventDate, self).__init__(866)
        else:
            super(EventDate, self).__init__(866, data)


class EventPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EventPx, self).__init__(867)
        else:
            super(EventPx, self).__init__(867, data)


class EventText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EventText, self).__init__(868)
        else:
            super(EventText, self).__init__(868, data)


class PctAtRisk(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PctAtRisk, self).__init__(869)
        else:
            super(PctAtRisk, self).__init__(869, data)


class NoInstrAttrib(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoInstrAttrib, self).__init__(870)
        else:
            super(NoInstrAttrib, self).__init__(870, data)


class InstrAttribType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(InstrAttribType, self).__init__(871)
        else:
            super(InstrAttribType, self).__init__(871, data)


class InstrAttribValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InstrAttribValue, self).__init__(872)
        else:
            super(InstrAttribValue, self).__init__(872, data)


class DatedDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DatedDate, self).__init__(873)
        else:
            super(DatedDate, self).__init__(873, data)


class InterestAccrualDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InterestAccrualDate, self).__init__(874)
        else:
            super(InterestAccrualDate, self).__init__(874, data)


class CPProgram(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CPProgram, self).__init__(875)
        else:
            super(CPProgram, self).__init__(875, data)


class CPRegType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CPRegType, self).__init__(876)
        else:
            super(CPRegType, self).__init__(876, data)


class UnderlyingCPProgram(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCPProgram, self).__init__(877)
        else:
            super(UnderlyingCPProgram, self).__init__(877, data)


class UnderlyingCPRegType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCPRegType, self).__init__(878)
        else:
            super(UnderlyingCPRegType, self).__init__(878, data)


class UnderlyingQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingQty, self).__init__(879)
        else:
            super(UnderlyingQty, self).__init__(879, data)


class TrdMatchID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TrdMatchID, self).__init__(880)
        else:
            super(TrdMatchID, self).__init__(880, data)


class SecondaryTradeReportRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryTradeReportRefID, self).__init__(881)
        else:
            super(SecondaryTradeReportRefID, self).__init__(881, data)


class UnderlyingDirtyPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingDirtyPrice, self).__init__(882)
        else:
            super(UnderlyingDirtyPrice, self).__init__(882, data)


class UnderlyingEndPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingEndPrice, self).__init__(883)
        else:
            super(UnderlyingEndPrice, self).__init__(883, data)


class UnderlyingStartValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStartValue, self).__init__(884)
        else:
            super(UnderlyingStartValue, self).__init__(884, data)


class UnderlyingCurrentValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCurrentValue, self).__init__(885)
        else:
            super(UnderlyingCurrentValue, self).__init__(885, data)


class UnderlyingEndValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingEndValue, self).__init__(886)
        else:
            super(UnderlyingEndValue, self).__init__(886, data)


class NoUnderlyingStips(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUnderlyingStips, self).__init__(887)
        else:
            super(NoUnderlyingStips, self).__init__(887, data)


class UnderlyingStipType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStipType, self).__init__(888)
        else:
            super(UnderlyingStipType, self).__init__(888, data)


class UnderlyingStipValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStipValue, self).__init__(889)
        else:
            super(UnderlyingStipValue, self).__init__(889, data)


class MaturityNetMoney(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityNetMoney, self).__init__(890)
        else:
            super(MaturityNetMoney, self).__init__(890, data)


class MiscFeeBasis(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MiscFeeBasis, self).__init__(891)
        else:
            super(MiscFeeBasis, self).__init__(891, data)


class TotNoAllocs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoAllocs, self).__init__(892)
        else:
            super(TotNoAllocs, self).__init__(892, data)


class LastFragment(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(LastFragment, self).__init__(893)
        else:
            super(LastFragment, self).__init__(893, data)


class CollReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollReqID, self).__init__(894)
        else:
            super(CollReqID, self).__init__(894, data)


class CollAsgnReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnReason, self).__init__(895)
        else:
            super(CollAsgnReason, self).__init__(895, data)


class CollInquiryQualifier(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollInquiryQualifier, self).__init__(896)
        else:
            super(CollInquiryQualifier, self).__init__(896, data)


class NoTrades(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTrades, self).__init__(897)
        else:
            super(NoTrades, self).__init__(897, data)


class MarginRatio(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MarginRatio, self).__init__(898)
        else:
            super(MarginRatio, self).__init__(898, data)


class MarginExcess(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MarginExcess, self).__init__(899)
        else:
            super(MarginExcess, self).__init__(899, data)


class TotalNetValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TotalNetValue, self).__init__(900)
        else:
            super(TotalNetValue, self).__init__(900, data)


class CashOutstanding(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CashOutstanding, self).__init__(901)
        else:
            super(CashOutstanding, self).__init__(901, data)


class CollAsgnID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnID, self).__init__(902)
        else:
            super(CollAsgnID, self).__init__(902, data)


class CollAsgnTransType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnTransType, self).__init__(903)
        else:
            super(CollAsgnTransType, self).__init__(903, data)


class CollRespID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollRespID, self).__init__(904)
        else:
            super(CollRespID, self).__init__(904, data)


class CollAsgnRespType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnRespType, self).__init__(905)
        else:
            super(CollAsgnRespType, self).__init__(905, data)


class CollAsgnRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnRejectReason, self).__init__(906)
        else:
            super(CollAsgnRejectReason, self).__init__(906, data)


class CollAsgnRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollAsgnRefID, self).__init__(907)
        else:
            super(CollAsgnRefID, self).__init__(907, data)


class CollRptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollRptID, self).__init__(908)
        else:
            super(CollRptID, self).__init__(908, data)


class CollInquiryID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CollInquiryID, self).__init__(909)
        else:
            super(CollInquiryID, self).__init__(909, data)


class CollStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollStatus, self).__init__(910)
        else:
            super(CollStatus, self).__init__(910, data)


class TotNumReports(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNumReports, self).__init__(911)
        else:
            super(TotNumReports, self).__init__(911, data)


class LastRptRequested(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(LastRptRequested, self).__init__(912)
        else:
            super(LastRptRequested, self).__init__(912, data)


class AgreementDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AgreementDesc, self).__init__(913)
        else:
            super(AgreementDesc, self).__init__(913, data)


class AgreementID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AgreementID, self).__init__(914)
        else:
            super(AgreementID, self).__init__(914, data)


class AgreementDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AgreementDate, self).__init__(915)
        else:
            super(AgreementDate, self).__init__(915, data)


class StartDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StartDate, self).__init__(916)
        else:
            super(StartDate, self).__init__(916, data)


class EndDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EndDate, self).__init__(917)
        else:
            super(EndDate, self).__init__(917, data)


class AgreementCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AgreementCurrency, self).__init__(918)
        else:
            super(AgreementCurrency, self).__init__(918, data)


class DeliveryType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DeliveryType, self).__init__(919)
        else:
            super(DeliveryType, self).__init__(919, data)


class EndAccruedInterestAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EndAccruedInterestAmt, self).__init__(920)
        else:
            super(EndAccruedInterestAmt, self).__init__(920, data)


class StartCash(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StartCash, self).__init__(921)
        else:
            super(StartCash, self).__init__(921, data)


class EndCash(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EndCash, self).__init__(922)
        else:
            super(EndCash, self).__init__(922, data)


class UserRequestID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UserRequestID, self).__init__(923)
        else:
            super(UserRequestID, self).__init__(923, data)


class UserRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UserRequestType, self).__init__(924)
        else:
            super(UserRequestType, self).__init__(924, data)


class NewPassword(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NewPassword, self).__init__(925)
        else:
            super(NewPassword, self).__init__(925, data)


class UserStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UserStatus, self).__init__(926)
        else:
            super(UserStatus, self).__init__(926, data)


class UserStatusText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UserStatusText, self).__init__(927)
        else:
            super(UserStatusText, self).__init__(927, data)


class StatusValue(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StatusValue, self).__init__(928)
        else:
            super(StatusValue, self).__init__(928, data)


class StatusText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StatusText, self).__init__(929)
        else:
            super(StatusText, self).__init__(929, data)


class RefCompID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefCompID, self).__init__(930)
        else:
            super(RefCompID, self).__init__(930, data)


class RefSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefSubID, self).__init__(931)
        else:
            super(RefSubID, self).__init__(931, data)


class NetworkResponseID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NetworkResponseID, self).__init__(932)
        else:
            super(NetworkResponseID, self).__init__(932, data)


class NetworkRequestID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NetworkRequestID, self).__init__(933)
        else:
            super(NetworkRequestID, self).__init__(933, data)


class LastNetworkResponseID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LastNetworkResponseID, self).__init__(934)
        else:
            super(LastNetworkResponseID, self).__init__(934, data)


class NetworkRequestType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NetworkRequestType, self).__init__(935)
        else:
            super(NetworkRequestType, self).__init__(935, data)


class NoCompIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoCompIDs, self).__init__(936)
        else:
            super(NoCompIDs, self).__init__(936, data)


class NetworkStatusResponseType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NetworkStatusResponseType, self).__init__(937)
        else:
            super(NetworkStatusResponseType, self).__init__(937, data)


class NoCollInquiryQualifier(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoCollInquiryQualifier, self).__init__(938)
        else:
            super(NoCollInquiryQualifier, self).__init__(938, data)


class TrdRptStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRptStatus, self).__init__(939)
        else:
            super(TrdRptStatus, self).__init__(939, data)


class AffirmStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AffirmStatus, self).__init__(940)
        else:
            super(AffirmStatus, self).__init__(940, data)


class UnderlyingStrikeCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingStrikeCurrency, self).__init__(941)
        else:
            super(UnderlyingStrikeCurrency, self).__init__(941, data)


class LegStrikeCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegStrikeCurrency, self).__init__(942)
        else:
            super(LegStrikeCurrency, self).__init__(942, data)


class TimeBracket(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TimeBracket, self).__init__(943)
        else:
            super(TimeBracket, self).__init__(943, data)


class CollAction(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollAction, self).__init__(944)
        else:
            super(CollAction, self).__init__(944, data)


class CollInquiryStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollInquiryStatus, self).__init__(945)
        else:
            super(CollInquiryStatus, self).__init__(945, data)


class CollInquiryResult(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollInquiryResult, self).__init__(946)
        else:
            super(CollInquiryResult, self).__init__(946, data)


class StrikeCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeCurrency, self).__init__(947)
        else:
            super(StrikeCurrency, self).__init__(947, data)


class NoNested3PartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested3PartyIDs, self).__init__(948)
        else:
            super(NoNested3PartyIDs, self).__init__(948, data)


class Nested3PartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested3PartyID, self).__init__(949)
        else:
            super(Nested3PartyID, self).__init__(949, data)


class Nested3PartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Nested3PartyIDSource, self).__init__(950)
        else:
            super(Nested3PartyIDSource, self).__init__(950, data)


class Nested3PartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested3PartyRole, self).__init__(951)
        else:
            super(Nested3PartyRole, self).__init__(951, data)


class NoNested3PartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested3PartySubIDs, self).__init__(952)
        else:
            super(NoNested3PartySubIDs, self).__init__(952, data)


class Nested3PartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested3PartySubID, self).__init__(953)
        else:
            super(Nested3PartySubID, self).__init__(953, data)


class Nested3PartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested3PartySubIDType, self).__init__(954)
        else:
            super(Nested3PartySubIDType, self).__init__(954, data)


class LegContractSettlMonth(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegContractSettlMonth, self).__init__(955)
        else:
            super(LegContractSettlMonth, self).__init__(955, data)


class LegInterestAccrualDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegInterestAccrualDate, self).__init__(956)
        else:
            super(LegInterestAccrualDate, self).__init__(956, data)


class LegOrderQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegOrderQty, self).__init__(685)
        else:
            super(LegOrderQty, self).__init__(685, data)


class NoStrategyParameters(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoStrategyParameters, self).__init__(957)
        else:
            super(NoStrategyParameters, self).__init__(957, data)


class StrategyParameterName(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StrategyParameterName, self).__init__(958)
        else:
            super(StrategyParameterName, self).__init__(958, data)


class StrategyParameterType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StrategyParameterType, self).__init__(959)
        else:
            super(StrategyParameterType, self).__init__(959, data)


class StrategyParameterValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StrategyParameterValue, self).__init__(960)
        else:
            super(StrategyParameterValue, self).__init__(960, data)


class HostCrossID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(HostCrossID, self).__init__(961)
        else:
            super(HostCrossID, self).__init__(961, data)


class SideTimeInForce(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(SideTimeInForce, self).__init__(962)
        else:
            super(SideTimeInForce, self).__init__(962, data)


class MDReportID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDReportID, self).__init__(963)
        else:
            super(MDReportID, self).__init__(963, data)


class SecurityReportID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityReportID, self).__init__(964)
        else:
            super(SecurityReportID, self).__init__(964, data)


class SecurityStatus(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityStatus, self).__init__(965)
        else:
            super(SecurityStatus, self).__init__(965, data)


class SettleOnOpenFlag(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettleOnOpenFlag, self).__init__(966)
        else:
            super(SettleOnOpenFlag, self).__init__(966, data)


class StrikeMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeMultiplier, self).__init__(967)
        else:
            super(StrikeMultiplier, self).__init__(967, data)


class StrikeValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeValue, self).__init__(968)
        else:
            super(StrikeValue, self).__init__(968, data)


class MinPriceIncrement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinPriceIncrement, self).__init__(969)
        else:
            super(MinPriceIncrement, self).__init__(969, data)


class PositionLimit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PositionLimit, self).__init__(970)
        else:
            super(PositionLimit, self).__init__(970, data)


class NTPositionLimit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NTPositionLimit, self).__init__(971)
        else:
            super(NTPositionLimit, self).__init__(971, data)


class UnderlyingAllocationPercent(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingAllocationPercent, self).__init__(972)
        else:
            super(UnderlyingAllocationPercent, self).__init__(972, data)


class UnderlyingCashAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCashAmount, self).__init__(973)
        else:
            super(UnderlyingCashAmount, self).__init__(973, data)


class UnderlyingCashType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCashType, self).__init__(974)
        else:
            super(UnderlyingCashType, self).__init__(974, data)


class UnderlyingSettlementType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlementType, self).__init__(975)
        else:
            super(UnderlyingSettlementType, self).__init__(975, data)


class QuantityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuantityDate, self).__init__(976)
        else:
            super(QuantityDate, self).__init__(976, data)


class ContIntRptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ContIntRptID, self).__init__(977)
        else:
            super(ContIntRptID, self).__init__(977, data)


class LateIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(LateIndicator, self).__init__(978)
        else:
            super(LateIndicator, self).__init__(978, data)


class InputSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InputSource, self).__init__(979)
        else:
            super(InputSource, self).__init__(979, data)


class SecurityUpdateAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityUpdateAction, self).__init__(980)
        else:
            super(SecurityUpdateAction, self).__init__(980, data)


class NoExpiration(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoExpiration, self).__init__(981)
        else:
            super(NoExpiration, self).__init__(981, data)


class ExpType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ExpType, self).__init__(982)
        else:
            super(ExpType, self).__init__(982, data)


class ExpQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ExpQty, self).__init__(983)
        else:
            super(ExpQty, self).__init__(983, data)


class NoUnderlyingAmounts(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUnderlyingAmounts, self).__init__(984)
        else:
            super(NoUnderlyingAmounts, self).__init__(984, data)


class UnderlyingPayAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPayAmount, self).__init__(985)
        else:
            super(UnderlyingPayAmount, self).__init__(985, data)


class UnderlyingCollectAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCollectAmount, self).__init__(986)
        else:
            super(UnderlyingCollectAmount, self).__init__(986, data)


class UnderlyingSettlementDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlementDate, self).__init__(987)
        else:
            super(UnderlyingSettlementDate, self).__init__(987, data)


class UnderlyingSettlementStatus(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlementStatus, self).__init__(988)
        else:
            super(UnderlyingSettlementStatus, self).__init__(988, data)


class SecondaryIndividualAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryIndividualAllocID, self).__init__(989)
        else:
            super(SecondaryIndividualAllocID, self).__init__(989, data)


class LegReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegReportID, self).__init__(990)
        else:
            super(LegReportID, self).__init__(990, data)


class RndPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RndPx, self).__init__(991)
        else:
            super(RndPx, self).__init__(991, data)


class IndividualAllocType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(IndividualAllocType, self).__init__(992)
        else:
            super(IndividualAllocType, self).__init__(992, data)


class AllocCustomerCapacity(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocCustomerCapacity, self).__init__(993)
        else:
            super(AllocCustomerCapacity, self).__init__(993, data)


class TierCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TierCode, self).__init__(994)
        else:
            super(TierCode, self).__init__(994, data)


class UnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnitOfMeasure, self).__init__(996)
        else:
            super(UnitOfMeasure, self).__init__(996, data)


class TimeUnit(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TimeUnit, self).__init__(997)
        else:
            super(TimeUnit, self).__init__(997, data)


class UnderlyingUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingUnitOfMeasure, self).__init__(998)
        else:
            super(UnderlyingUnitOfMeasure, self).__init__(998, data)


class LegUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegUnitOfMeasure, self).__init__(999)
        else:
            super(LegUnitOfMeasure, self).__init__(999, data)


class UnderlyingTimeUnit(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingTimeUnit, self).__init__(1000)
        else:
            super(UnderlyingTimeUnit, self).__init__(1000, data)


class LegTimeUnit(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegTimeUnit, self).__init__(1001)
        else:
            super(LegTimeUnit, self).__init__(1001, data)


class AllocMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(AllocMethod, self).__init__(1002)
        else:
            super(AllocMethod, self).__init__(1002, data)


class TradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradeID, self).__init__(1003)
        else:
            super(TradeID, self).__init__(1003, data)


class SideTradeReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideTradeReportID, self).__init__(1005)
        else:
            super(SideTradeReportID, self).__init__(1005, data)


class SideFillStationCd(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideFillStationCd, self).__init__(1006)
        else:
            super(SideFillStationCd, self).__init__(1006, data)


class SideReasonCd(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideReasonCd, self).__init__(1007)
        else:
            super(SideReasonCd, self).__init__(1007, data)


class SideTrdSubTyp(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideTrdSubTyp, self).__init__(1008)
        else:
            super(SideTrdSubTyp, self).__init__(1008, data)


class SideQty(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideQty, self).__init__(1009)
        else:
            super(SideQty, self).__init__(1009, data)


class MessageEventSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MessageEventSource, self).__init__(1011)
        else:
            super(MessageEventSource, self).__init__(1011, data)


class SideTrdRegTimestamp(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(SideTrdRegTimestamp, self).__init__(1012)
        else:
            super(SideTrdRegTimestamp, self).__init__(1012, data)


class SideTrdRegTimestampType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideTrdRegTimestampType, self).__init__(1013)
        else:
            super(SideTrdRegTimestampType, self).__init__(1013, data)


class SideTrdRegTimestampSrc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideTrdRegTimestampSrc, self).__init__(1014)
        else:
            super(SideTrdRegTimestampSrc, self).__init__(1014, data)


class AsOfIndicator(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(AsOfIndicator, self).__init__(1015)
        else:
            super(AsOfIndicator, self).__init__(1015, data)


class NoSideTrdRegTS(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSideTrdRegTS, self).__init__(1016)
        else:
            super(NoSideTrdRegTS, self).__init__(1016, data)


class LegOptionRatio(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegOptionRatio, self).__init__(1017)
        else:
            super(LegOptionRatio, self).__init__(1017, data)


class NoInstrumentParties(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoInstrumentParties, self).__init__(1018)
        else:
            super(NoInstrumentParties, self).__init__(1018, data)


class InstrumentPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InstrumentPartyID, self).__init__(1019)
        else:
            super(InstrumentPartyID, self).__init__(1019, data)


class TradeVolume(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TradeVolume, self).__init__(1020)
        else:
            super(TradeVolume, self).__init__(1020, data)


class MDBookType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDBookType, self).__init__(1021)
        else:
            super(MDBookType, self).__init__(1021, data)


class MDFeedType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDFeedType, self).__init__(1022)
        else:
            super(MDFeedType, self).__init__(1022, data)


class MDPriceLevel(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDPriceLevel, self).__init__(1023)
        else:
            super(MDPriceLevel, self).__init__(1023, data)


class MDOriginType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDOriginType, self).__init__(1024)
        else:
            super(MDOriginType, self).__init__(1024, data)


class FirstPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FirstPx, self).__init__(1025)
        else:
            super(FirstPx, self).__init__(1025, data)


class MDEntrySpotRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntrySpotRate, self).__init__(1026)
        else:
            super(MDEntrySpotRate, self).__init__(1026, data)


class MDEntryForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MDEntryForwardPoints, self).__init__(1027)
        else:
            super(MDEntryForwardPoints, self).__init__(1027, data)


class ManualOrderIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ManualOrderIndicator, self).__init__(1028)
        else:
            super(ManualOrderIndicator, self).__init__(1028, data)


class CustDirectedOrder(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(CustDirectedOrder, self).__init__(1029)
        else:
            super(CustDirectedOrder, self).__init__(1029, data)


class ReceivedDeptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ReceivedDeptID, self).__init__(1030)
        else:
            super(ReceivedDeptID, self).__init__(1030, data)


class CustOrderHandlingInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(CustOrderHandlingInst, self).__init__(1031)
        else:
            super(CustOrderHandlingInst, self).__init__(1031, data)


class OrderHandlingInstSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OrderHandlingInstSource, self).__init__(1032)
        else:
            super(OrderHandlingInstSource, self).__init__(1032, data)


class DeskType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeskType, self).__init__(1033)
        else:
            super(DeskType, self).__init__(1033, data)


class DeskTypeSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DeskTypeSource, self).__init__(1034)
        else:
            super(DeskTypeSource, self).__init__(1034, data)


class DeskOrderHandlingInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DeskOrderHandlingInst, self).__init__(1035)
        else:
            super(DeskOrderHandlingInst, self).__init__(1035, data)


class ExecAckStatus(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExecAckStatus, self).__init__(1036)
        else:
            super(ExecAckStatus, self).__init__(1036, data)


class UnderlyingDeliveryAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingDeliveryAmount, self).__init__(1037)
        else:
            super(UnderlyingDeliveryAmount, self).__init__(1037, data)


class UnderlyingCapValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingCapValue, self).__init__(1038)
        else:
            super(UnderlyingCapValue, self).__init__(1038, data)


class UnderlyingSettlMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSettlMethod, self).__init__(1039)
        else:
            super(UnderlyingSettlMethod, self).__init__(1039, data)


class SecondaryTradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryTradeID, self).__init__(1040)
        else:
            super(SecondaryTradeID, self).__init__(1040, data)


class FirmTradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FirmTradeID, self).__init__(1041)
        else:
            super(FirmTradeID, self).__init__(1041, data)


class SecondaryFirmTradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryFirmTradeID, self).__init__(1042)
        else:
            super(SecondaryFirmTradeID, self).__init__(1042, data)


class CollApplType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(CollApplType, self).__init__(1043)
        else:
            super(CollApplType, self).__init__(1043, data)


class UnderlyingAdjustedQuantity(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingAdjustedQuantity, self).__init__(1044)
        else:
            super(UnderlyingAdjustedQuantity, self).__init__(1044, data)


class UnderlyingFXRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingFXRate, self).__init__(1045)
        else:
            super(UnderlyingFXRate, self).__init__(1045, data)


class UnderlyingFXRateCalc(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingFXRateCalc, self).__init__(1046)
        else:
            super(UnderlyingFXRateCalc, self).__init__(1046, data)


class AllocPositionEffect(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(AllocPositionEffect, self).__init__(1047)
        else:
            super(AllocPositionEffect, self).__init__(1047, data)


class DealingCapacity(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DealingCapacity, self).__init__(1048)
        else:
            super(DealingCapacity, self).__init__(1048, data)


class InstrmtAssignmentMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(InstrmtAssignmentMethod, self).__init__(1049)
        else:
            super(InstrmtAssignmentMethod, self).__init__(1049, data)


class InstrumentPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(InstrumentPartyIDSource, self).__init__(1050)
        else:
            super(InstrumentPartyIDSource, self).__init__(1050, data)


class InstrumentPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(InstrumentPartyRole, self).__init__(1051)
        else:
            super(InstrumentPartyRole, self).__init__(1051, data)


class NoInstrumentPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoInstrumentPartySubIDs, self).__init__(1052)
        else:
            super(NoInstrumentPartySubIDs, self).__init__(1052, data)


class InstrumentPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(InstrumentPartySubID, self).__init__(1053)
        else:
            super(InstrumentPartySubID, self).__init__(1053, data)


class InstrumentPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(InstrumentPartySubIDType, self).__init__(1054)
        else:
            super(InstrumentPartySubIDType, self).__init__(1054, data)


class PositionCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PositionCurrency, self).__init__(1055)
        else:
            super(PositionCurrency, self).__init__(1055, data)


class CalculatedCcyLastQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CalculatedCcyLastQty, self).__init__(1056)
        else:
            super(CalculatedCcyLastQty, self).__init__(1056, data)


class AggressorIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(AggressorIndicator, self).__init__(1057)
        else:
            super(AggressorIndicator, self).__init__(1057, data)


class NoUndlyInstrumentParties(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUndlyInstrumentParties, self).__init__(1058)
        else:
            super(NoUndlyInstrumentParties, self).__init__(1058, data)


class UndlyInstrumentPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UndlyInstrumentPartyID, self).__init__(1059)
        else:
            super(UndlyInstrumentPartyID, self).__init__(1059, data)


class UndlyInstrumentPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(UndlyInstrumentPartyIDSource, self).__init__(1060)
        else:
            super(UndlyInstrumentPartyIDSource, self).__init__(1060, data)


class UndlyInstrumentPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UndlyInstrumentPartyRole, self).__init__(1061)
        else:
            super(UndlyInstrumentPartyRole, self).__init__(1061, data)


class NoUndlyInstrumentPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUndlyInstrumentPartySubIDs, self).__init__(1062)
        else:
            super(NoUndlyInstrumentPartySubIDs, self).__init__(1062, data)


class UndlyInstrumentPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UndlyInstrumentPartySubID, self).__init__(1063)
        else:
            super(UndlyInstrumentPartySubID, self).__init__(1063, data)


class UndlyInstrumentPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UndlyInstrumentPartySubIDType, self).__init__(1064)
        else:
            super(UndlyInstrumentPartySubIDType, self).__init__(1064, data)


class BidSwapPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(BidSwapPoints, self).__init__(1065)
        else:
            super(BidSwapPoints, self).__init__(1065, data)


class OfferSwapPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OfferSwapPoints, self).__init__(1066)
        else:
            super(OfferSwapPoints, self).__init__(1066, data)


class LegBidForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegBidForwardPoints, self).__init__(1067)
        else:
            super(LegBidForwardPoints, self).__init__(1067, data)


class LegOfferForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegOfferForwardPoints, self).__init__(1068)
        else:
            super(LegOfferForwardPoints, self).__init__(1068, data)


class SwapPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SwapPoints, self).__init__(1069)
        else:
            super(SwapPoints, self).__init__(1069, data)


class MDQuoteType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDQuoteType, self).__init__(1070)
        else:
            super(MDQuoteType, self).__init__(1070, data)


class LastSwapPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LastSwapPoints, self).__init__(1071)
        else:
            super(LastSwapPoints, self).__init__(1071, data)


class SideGrossTradeAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SideGrossTradeAmt, self).__init__(1072)
        else:
            super(SideGrossTradeAmt, self).__init__(1072, data)


class LegLastForwardPoints(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegLastForwardPoints, self).__init__(1073)
        else:
            super(LegLastForwardPoints, self).__init__(1073, data)


class LegCalculatedCcyLastQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegCalculatedCcyLastQty, self).__init__(1074)
        else:
            super(LegCalculatedCcyLastQty, self).__init__(1074, data)


class LegGrossTradeAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegGrossTradeAmt, self).__init__(1075)
        else:
            super(LegGrossTradeAmt, self).__init__(1075, data)


class MaturityTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityTime, self).__init__(1079)
        else:
            super(MaturityTime, self).__init__(1079, data)


class RefOrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefOrderID, self).__init__(1080)
        else:
            super(RefOrderID, self).__init__(1080, data)


class RefOrderIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(RefOrderIDSource, self).__init__(1081)
        else:
            super(RefOrderIDSource, self).__init__(1081, data)


class SecondaryDisplayQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryDisplayQty, self).__init__(1082)
        else:
            super(SecondaryDisplayQty, self).__init__(1082, data)


class DisplayWhen(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayWhen, self).__init__(1083)
        else:
            super(DisplayWhen, self).__init__(1083, data)


class DisplayMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayMethod, self).__init__(1084)
        else:
            super(DisplayMethod, self).__init__(1084, data)


class DisplayLowQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayLowQty, self).__init__(1085)
        else:
            super(DisplayLowQty, self).__init__(1085, data)


class DisplayHighQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayHighQty, self).__init__(1086)
        else:
            super(DisplayHighQty, self).__init__(1086, data)


class DisplayMinIncr(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayMinIncr, self).__init__(1087)
        else:
            super(DisplayMinIncr, self).__init__(1087, data)


class RefreshQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RefreshQty, self).__init__(1088)
        else:
            super(RefreshQty, self).__init__(1088, data)


class MatchIncrement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MatchIncrement, self).__init__(1089)
        else:
            super(MatchIncrement, self).__init__(1089, data)


class MaxPriceLevels(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MaxPriceLevels, self).__init__(1090)
        else:
            super(MaxPriceLevels, self).__init__(1090, data)


class PreTradeAnonymity(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PreTradeAnonymity, self).__init__(1091)
        else:
            super(PreTradeAnonymity, self).__init__(1091, data)


class PriceProtectionScope(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(PriceProtectionScope, self).__init__(1092)
        else:
            super(PriceProtectionScope, self).__init__(1092, data)


class LotType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(LotType, self).__init__(1093)
        else:
            super(LotType, self).__init__(1093, data)


class PegPriceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PegPriceType, self).__init__(1094)
        else:
            super(PegPriceType, self).__init__(1094, data)


class PeggedRefPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PeggedRefPrice, self).__init__(1095)
        else:
            super(PeggedRefPrice, self).__init__(1095, data)


class PegSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PegSecurityIDSource, self).__init__(1096)
        else:
            super(PegSecurityIDSource, self).__init__(1096, data)


class PegSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PegSecurityID, self).__init__(1097)
        else:
            super(PegSecurityID, self).__init__(1097, data)


class PegSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PegSymbol, self).__init__(1098)
        else:
            super(PegSymbol, self).__init__(1098, data)


class PegSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PegSecurityDesc, self).__init__(1099)
        else:
            super(PegSecurityDesc, self).__init__(1099, data)


class TriggerType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerType, self).__init__(1100)
        else:
            super(TriggerType, self).__init__(1100, data)


class TriggerAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerAction, self).__init__(1101)
        else:
            super(TriggerAction, self).__init__(1101, data)


class TriggerPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerPrice, self).__init__(1102)
        else:
            super(TriggerPrice, self).__init__(1102, data)


class TriggerSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerSymbol, self).__init__(1103)
        else:
            super(TriggerSymbol, self).__init__(1103, data)


class TriggerSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerSecurityID, self).__init__(1104)
        else:
            super(TriggerSecurityID, self).__init__(1104, data)


class TriggerSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerSecurityIDSource, self).__init__(1105)
        else:
            super(TriggerSecurityIDSource, self).__init__(1105, data)


class TriggerSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerSecurityDesc, self).__init__(1106)
        else:
            super(TriggerSecurityDesc, self).__init__(1106, data)


class TriggerPriceType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerPriceType, self).__init__(1107)
        else:
            super(TriggerPriceType, self).__init__(1107, data)


class TriggerPriceTypeScope(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerPriceTypeScope, self).__init__(1108)
        else:
            super(TriggerPriceTypeScope, self).__init__(1108, data)


class TriggerPriceDirection(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerPriceDirection, self).__init__(1109)
        else:
            super(TriggerPriceDirection, self).__init__(1109, data)


class TriggerNewPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerNewPrice, self).__init__(1110)
        else:
            super(TriggerNewPrice, self).__init__(1110, data)


class TriggerOrderType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerOrderType, self).__init__(1111)
        else:
            super(TriggerOrderType, self).__init__(1111, data)


class TriggerNewQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerNewQty, self).__init__(1112)
        else:
            super(TriggerNewQty, self).__init__(1112, data)


class TriggerTradingSessionID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerTradingSessionID, self).__init__(1113)
        else:
            super(TriggerTradingSessionID, self).__init__(1113, data)


class TriggerTradingSessionSubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TriggerTradingSessionSubID, self).__init__(1114)
        else:
            super(TriggerTradingSessionSubID, self).__init__(1114, data)


class OrderCategory(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OrderCategory, self).__init__(1115)
        else:
            super(OrderCategory, self).__init__(1115, data)


class NoRootPartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRootPartyIDs, self).__init__(1116)
        else:
            super(NoRootPartyIDs, self).__init__(1116, data)


class RootPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RootPartyID, self).__init__(1117)
        else:
            super(RootPartyID, self).__init__(1117, data)


class RootPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(RootPartyIDSource, self).__init__(1118)
        else:
            super(RootPartyIDSource, self).__init__(1118, data)


class RootPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RootPartyRole, self).__init__(1119)
        else:
            super(RootPartyRole, self).__init__(1119, data)


class NoRootPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRootPartySubIDs, self).__init__(1120)
        else:
            super(NoRootPartySubIDs, self).__init__(1120, data)


class RootPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RootPartySubID, self).__init__(1121)
        else:
            super(RootPartySubID, self).__init__(1121, data)


class RootPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RootPartySubIDType, self).__init__(1122)
        else:
            super(RootPartySubIDType, self).__init__(1122, data)


class TradeHandlingInstr(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TradeHandlingInstr, self).__init__(1123)
        else:
            super(TradeHandlingInstr, self).__init__(1123, data)


class OrigTradeHandlingInstr(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(OrigTradeHandlingInstr, self).__init__(1124)
        else:
            super(OrigTradeHandlingInstr, self).__init__(1124, data)


class OrigTradeDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigTradeDate, self).__init__(1125)
        else:
            super(OrigTradeDate, self).__init__(1125, data)


class OrigTradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigTradeID, self).__init__(1126)
        else:
            super(OrigTradeID, self).__init__(1126, data)


class OrigSecondaryTradeID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(OrigSecondaryTradeID, self).__init__(1127)
        else:
            super(OrigSecondaryTradeID, self).__init__(1127, data)


class TZTransactTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TZTransactTime, self).__init__(1132)
        else:
            super(TZTransactTime, self).__init__(1132, data)


class ExDestinationIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExDestinationIDSource, self).__init__(1133)
        else:
            super(ExDestinationIDSource, self).__init__(1133, data)


class ReportedPxDiff(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ReportedPxDiff, self).__init__(1134)
        else:
            super(ReportedPxDiff, self).__init__(1134, data)


class RptSys(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RptSys, self).__init__(1135)
        else:
            super(RptSys, self).__init__(1135, data)


class AllocClearingFeeIndicator(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(AllocClearingFeeIndicator, self).__init__(1136)
        else:
            super(AllocClearingFeeIndicator, self).__init__(1136, data)


class DisplayQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DisplayQty, self).__init__(1138)
        else:
            super(DisplayQty, self).__init__(1138, data)


class ExchangeSpecialInstructions(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ExchangeSpecialInstructions, self).__init__(1139)
        else:
            super(ExchangeSpecialInstructions, self).__init__(1139, data)


class ExpirationQtyType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ExpirationQtyType, self).__init__(982)
        else:
            super(ExpirationQtyType, self).__init__(982, data)


class MaxTradeVol(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MaxTradeVol, self).__init__(1140)
        else:
            super(MaxTradeVol, self).__init__(1140, data)


class NoMDFeedTypes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMDFeedTypes, self).__init__(1141)
        else:
            super(NoMDFeedTypes, self).__init__(1141, data)


class MatchAlgorithm(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MatchAlgorithm, self).__init__(1142)
        else:
            super(MatchAlgorithm, self).__init__(1142, data)


class MaxPriceVariation(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MaxPriceVariation, self).__init__(1143)
        else:
            super(MaxPriceVariation, self).__init__(1143, data)


class ImpliedMarketIndicator(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ImpliedMarketIndicator, self).__init__(1144)
        else:
            super(ImpliedMarketIndicator, self).__init__(1144, data)


class EventTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(EventTime, self).__init__(1145)
        else:
            super(EventTime, self).__init__(1145, data)


class MinPriceIncrementAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinPriceIncrementAmount, self).__init__(1146)
        else:
            super(MinPriceIncrementAmount, self).__init__(1146, data)


class UnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnitOfMeasureQty, self).__init__(1147)
        else:
            super(UnitOfMeasureQty, self).__init__(1147, data)


class LowLimitPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LowLimitPrice, self).__init__(1148)
        else:
            super(LowLimitPrice, self).__init__(1148, data)


class HighLimitPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(HighLimitPrice, self).__init__(1149)
        else:
            super(HighLimitPrice, self).__init__(1149, data)


class TradingReferencePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TradingReferencePrice, self).__init__(1150)
        else:
            super(TradingReferencePrice, self).__init__(1150, data)


class SecurityGroup(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityGroup, self).__init__(1151)
        else:
            super(SecurityGroup, self).__init__(1151, data)


class LegNumber(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegNumber, self).__init__(1152)
        else:
            super(LegNumber, self).__init__(1152, data)


class SettlementCycleNo(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlementCycleNo, self).__init__(1153)
        else:
            super(SettlementCycleNo, self).__init__(1153, data)


class SideCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideCurrency, self).__init__(1154)
        else:
            super(SideCurrency, self).__init__(1154, data)


class SideSettlCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideSettlCurrency, self).__init__(1155)
        else:
            super(SideSettlCurrency, self).__init__(1155, data)


class ApplExtID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplExtID, self).__init__(1156)
        else:
            super(ApplExtID, self).__init__(1156, data)


class CcyAmt(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CcyAmt, self).__init__(1157)
        else:
            super(CcyAmt, self).__init__(1157, data)


class NoSettlDetails(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSettlDetails, self).__init__(1158)
        else:
            super(NoSettlDetails, self).__init__(1158, data)


class SettlObligMode(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligMode, self).__init__(1159)
        else:
            super(SettlObligMode, self).__init__(1159, data)


class SettlObligMsgID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligMsgID, self).__init__(1160)
        else:
            super(SettlObligMsgID, self).__init__(1160, data)


class SettlObligID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligID, self).__init__(1161)
        else:
            super(SettlObligID, self).__init__(1161, data)


class SettlObligTransType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligTransType, self).__init__(1162)
        else:
            super(SettlObligTransType, self).__init__(1162, data)


class SettlObligRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligRefID, self).__init__(1163)
        else:
            super(SettlObligRefID, self).__init__(1163, data)


class SettlObligSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlObligSource, self).__init__(1164)
        else:
            super(SettlObligSource, self).__init__(1164, data)


class NoSettlOblig(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoSettlOblig, self).__init__(1165)
        else:
            super(NoSettlOblig, self).__init__(1165, data)


class QuoteMsgID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteMsgID, self).__init__(1166)
        else:
            super(QuoteMsgID, self).__init__(1166, data)


class QuoteEntryStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(QuoteEntryStatus, self).__init__(1167)
        else:
            super(QuoteEntryStatus, self).__init__(1167, data)


class TotNoCxldQuotes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoCxldQuotes, self).__init__(1168)
        else:
            super(TotNoCxldQuotes, self).__init__(1168, data)


class TotNoAccQuotes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoAccQuotes, self).__init__(1169)
        else:
            super(TotNoAccQuotes, self).__init__(1169, data)


class TotNoRejQuotes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoRejQuotes, self).__init__(1170)
        else:
            super(TotNoRejQuotes, self).__init__(1170, data)


class PrivateQuote(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(PrivateQuote, self).__init__(1171)
        else:
            super(PrivateQuote, self).__init__(1171, data)


class RespondentType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RespondentType, self).__init__(1172)
        else:
            super(RespondentType, self).__init__(1172, data)


class MDSubBookType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDSubBookType, self).__init__(1173)
        else:
            super(MDSubBookType, self).__init__(1173, data)


class SecurityTradingEvent(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityTradingEvent, self).__init__(1174)
        else:
            super(SecurityTradingEvent, self).__init__(1174, data)


class NoStatsIndicators(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoStatsIndicators, self).__init__(1175)
        else:
            super(NoStatsIndicators, self).__init__(1175, data)


class StatsType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StatsType, self).__init__(1176)
        else:
            super(StatsType, self).__init__(1176, data)


class NoOfSecSizes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoOfSecSizes, self).__init__(1177)
        else:
            super(NoOfSecSizes, self).__init__(1177, data)


class MDSecSizeType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MDSecSizeType, self).__init__(1178)
        else:
            super(MDSecSizeType, self).__init__(1178, data)


class MDSecSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MDSecSize, self).__init__(1179)
        else:
            super(MDSecSize, self).__init__(1179, data)


class ApplID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ApplID, self).__init__(1180)
        else:
            super(ApplID, self).__init__(1180, data)


class ApplSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplSeqNum, self).__init__(1181)
        else:
            super(ApplSeqNum, self).__init__(1181, data)


class ApplBegSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplBegSeqNum, self).__init__(1182)
        else:
            super(ApplBegSeqNum, self).__init__(1182, data)


class ApplEndSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplEndSeqNum, self).__init__(1183)
        else:
            super(ApplEndSeqNum, self).__init__(1183, data)


class SecurityXMLLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityXMLLen, self).__init__(1184)
        else:
            super(SecurityXMLLen, self).__init__(1184, data)


class SecurityXML(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityXML, self).__init__(1185)
        else:
            super(SecurityXML, self).__init__(1185, data)


class SecurityXMLSchema(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityXMLSchema, self).__init__(1186)
        else:
            super(SecurityXMLSchema, self).__init__(1186, data)


class RefreshIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(RefreshIndicator, self).__init__(1187)
        else:
            super(RefreshIndicator, self).__init__(1187, data)


class Volatility(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(Volatility, self).__init__(1188)
        else:
            super(Volatility, self).__init__(1188, data)


class TimeToExpiration(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TimeToExpiration, self).__init__(1189)
        else:
            super(TimeToExpiration, self).__init__(1189, data)


class RiskFreeRate(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(RiskFreeRate, self).__init__(1190)
        else:
            super(RiskFreeRate, self).__init__(1190, data)


class PriceUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PriceUnitOfMeasure, self).__init__(1191)
        else:
            super(PriceUnitOfMeasure, self).__init__(1191, data)


class PriceUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(PriceUnitOfMeasureQty, self).__init__(1192)
        else:
            super(PriceUnitOfMeasureQty, self).__init__(1192, data)


class SettlMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(SettlMethod, self).__init__(1193)
        else:
            super(SettlMethod, self).__init__(1193, data)


class ExerciseStyle(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ExerciseStyle, self).__init__(1194)
        else:
            super(ExerciseStyle, self).__init__(1194, data)


class OptPayAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OptPayAmount, self).__init__(1195)
        else:
            super(OptPayAmount, self).__init__(1195, data)


class PriceQuoteMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(PriceQuoteMethod, self).__init__(1196)
        else:
            super(PriceQuoteMethod, self).__init__(1196, data)


class FuturesValuationMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FuturesValuationMethod, self).__init__(1197)
        else:
            super(FuturesValuationMethod, self).__init__(1197, data)


class ListMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListMethod, self).__init__(1198)
        else:
            super(ListMethod, self).__init__(1198, data)


class CapPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CapPrice, self).__init__(1199)
        else:
            super(CapPrice, self).__init__(1199, data)


class FloorPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FloorPrice, self).__init__(1200)
        else:
            super(FloorPrice, self).__init__(1200, data)


class NoStrikeRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoStrikeRules, self).__init__(1201)
        else:
            super(NoStrikeRules, self).__init__(1201, data)


class StartStrikePxRange(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StartStrikePxRange, self).__init__(1202)
        else:
            super(StartStrikePxRange, self).__init__(1202, data)


class EndStrikePxRange(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EndStrikePxRange, self).__init__(1203)
        else:
            super(EndStrikePxRange, self).__init__(1203, data)


class StrikeIncrement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeIncrement, self).__init__(1204)
        else:
            super(StrikeIncrement, self).__init__(1204, data)


class NoTickRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTickRules, self).__init__(1205)
        else:
            super(NoTickRules, self).__init__(1205, data)


class StartTickPriceRange(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StartTickPriceRange, self).__init__(1206)
        else:
            super(StartTickPriceRange, self).__init__(1206, data)


class EndTickPriceRange(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(EndTickPriceRange, self).__init__(1207)
        else:
            super(EndTickPriceRange, self).__init__(1207, data)


class TickIncrement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(TickIncrement, self).__init__(1208)
        else:
            super(TickIncrement, self).__init__(1208, data)


class TickRuleType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TickRuleType, self).__init__(1209)
        else:
            super(TickRuleType, self).__init__(1209, data)


class NestedInstrAttribType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NestedInstrAttribType, self).__init__(1210)
        else:
            super(NestedInstrAttribType, self).__init__(1210, data)


class NestedInstrAttribValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NestedInstrAttribValue, self).__init__(1211)
        else:
            super(NestedInstrAttribValue, self).__init__(1211, data)


class LegMaturityTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegMaturityTime, self).__init__(1212)
        else:
            super(LegMaturityTime, self).__init__(1212, data)


class UnderlyingMaturityTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingMaturityTime, self).__init__(1213)
        else:
            super(UnderlyingMaturityTime, self).__init__(1213, data)


class DerivativeSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSymbol, self).__init__(1214)
        else:
            super(DerivativeSymbol, self).__init__(1214, data)


class DerivativeSymbolSfx(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSymbolSfx, self).__init__(1215)
        else:
            super(DerivativeSymbolSfx, self).__init__(1215, data)


class DerivativeSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityID, self).__init__(1216)
        else:
            super(DerivativeSecurityID, self).__init__(1216, data)


class DerivativeSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityIDSource, self).__init__(1217)
        else:
            super(DerivativeSecurityIDSource, self).__init__(1217, data)


class NoDerivativeSecurityAltID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDerivativeSecurityAltID, self).__init__(1218)
        else:
            super(NoDerivativeSecurityAltID, self).__init__(1218, data)


class DerivativeSecurityAltID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityAltID, self).__init__(1219)
        else:
            super(DerivativeSecurityAltID, self).__init__(1219, data)


class DerivativeSecurityAltIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityAltIDSource, self).__init__(1220)
        else:
            super(DerivativeSecurityAltIDSource, self).__init__(1220, data)


class SecondaryLowLimitPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryLowLimitPrice, self).__init__(1221)
        else:
            super(SecondaryLowLimitPrice, self).__init__(1221, data)


class MaturityRuleID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityRuleID, self).__init__(1222)
        else:
            super(MaturityRuleID, self).__init__(1222, data)


class StrikeRuleID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeRuleID, self).__init__(1223)
        else:
            super(StrikeRuleID, self).__init__(1223, data)


class LegUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegUnitOfMeasureQty, self).__init__(1224)
        else:
            super(LegUnitOfMeasureQty, self).__init__(1224, data)


class DerivativeOptPayAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeOptPayAmount, self).__init__(1225)
        else:
            super(DerivativeOptPayAmount, self).__init__(1225, data)


class EndMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EndMaturityMonthYear, self).__init__(1226)
        else:
            super(EndMaturityMonthYear, self).__init__(1226, data)


class ProductComplex(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ProductComplex, self).__init__(1227)
        else:
            super(ProductComplex, self).__init__(1227, data)


class DerivativeProductComplex(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeProductComplex, self).__init__(1228)
        else:
            super(DerivativeProductComplex, self).__init__(1228, data)


class MaturityMonthYearIncrement(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityMonthYearIncrement, self).__init__(1229)
        else:
            super(MaturityMonthYearIncrement, self).__init__(1229, data)


class SecondaryHighLimitPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryHighLimitPrice, self).__init__(1230)
        else:
            super(SecondaryHighLimitPrice, self).__init__(1230, data)


class MinLotSize(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(MinLotSize, self).__init__(1231)
        else:
            super(MinLotSize, self).__init__(1231, data)


class NoExecInstRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoExecInstRules, self).__init__(1232)
        else:
            super(NoExecInstRules, self).__init__(1232, data)


class NoLotTypeRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoLotTypeRules, self).__init__(1234)
        else:
            super(NoLotTypeRules, self).__init__(1234, data)


class NoMatchRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMatchRules, self).__init__(1235)
        else:
            super(NoMatchRules, self).__init__(1235, data)


class NoMaturityRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMaturityRules, self).__init__(1236)
        else:
            super(NoMaturityRules, self).__init__(1236, data)


class NoOrdTypeRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoOrdTypeRules, self).__init__(1237)
        else:
            super(NoOrdTypeRules, self).__init__(1237, data)


class NoTimeInForceRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTimeInForceRules, self).__init__(1239)
        else:
            super(NoTimeInForceRules, self).__init__(1239, data)


class SecondaryTradingReferencePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryTradingReferencePrice, self).__init__(1240)
        else:
            super(SecondaryTradingReferencePrice, self).__init__(1240, data)


class StartMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StartMaturityMonthYear, self).__init__(1241)
        else:
            super(StartMaturityMonthYear, self).__init__(1241, data)


class FlexProductEligibilityIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(FlexProductEligibilityIndicator, self).__init__(1242)
        else:
            super(FlexProductEligibilityIndicator, self).__init__(1242, data)


class DerivFlexProductEligibilityIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(DerivFlexProductEligibilityIndicator, self).__init__(1243)
        else:
            super(DerivFlexProductEligibilityIndicator, self).__init__(1243, data)


class FlexibleIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(FlexibleIndicator, self).__init__(1244)
        else:
            super(FlexibleIndicator, self).__init__(1244, data)


class TradingCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradingCurrency, self).__init__(1245)
        else:
            super(TradingCurrency, self).__init__(1245, data)


class DerivativeProduct(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeProduct, self).__init__(1246)
        else:
            super(DerivativeProduct, self).__init__(1246, data)


class DerivativeSecurityGroup(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityGroup, self).__init__(1247)
        else:
            super(DerivativeSecurityGroup, self).__init__(1247, data)


class DerivativeCFICode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeCFICode, self).__init__(1248)
        else:
            super(DerivativeCFICode, self).__init__(1248, data)


class DerivativeSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityType, self).__init__(1249)
        else:
            super(DerivativeSecurityType, self).__init__(1249, data)


class DerivativeSecuritySubType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecuritySubType, self).__init__(1250)
        else:
            super(DerivativeSecuritySubType, self).__init__(1250, data)


class DerivativeMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeMaturityMonthYear, self).__init__(1251)
        else:
            super(DerivativeMaturityMonthYear, self).__init__(1251, data)


class DerivativeMaturityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeMaturityDate, self).__init__(1252)
        else:
            super(DerivativeMaturityDate, self).__init__(1252, data)


class DerivativeMaturityTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeMaturityTime, self).__init__(1253)
        else:
            super(DerivativeMaturityTime, self).__init__(1253, data)


class DerivativeSettleOnOpenFlag(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSettleOnOpenFlag, self).__init__(1254)
        else:
            super(DerivativeSettleOnOpenFlag, self).__init__(1254, data)


class DerivativeInstrmtAssignmentMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrmtAssignmentMethod, self).__init__(1255)
        else:
            super(DerivativeInstrmtAssignmentMethod, self).__init__(1255, data)


class DerivativeSecurityStatus(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityStatus, self).__init__(1256)
        else:
            super(DerivativeSecurityStatus, self).__init__(1256, data)


class DerivativeInstrRegistry(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrRegistry, self).__init__(1257)
        else:
            super(DerivativeInstrRegistry, self).__init__(1257, data)


class DerivativeCountryOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeCountryOfIssue, self).__init__(1258)
        else:
            super(DerivativeCountryOfIssue, self).__init__(1258, data)


class DerivativeStateOrProvinceOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeStateOrProvinceOfIssue, self).__init__(1259)
        else:
            super(DerivativeStateOrProvinceOfIssue, self).__init__(1259, data)


class DerivativeLocaleOfIssue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeLocaleOfIssue, self).__init__(1260)
        else:
            super(DerivativeLocaleOfIssue, self).__init__(1260, data)


class DerivativeStrikePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeStrikePrice, self).__init__(1261)
        else:
            super(DerivativeStrikePrice, self).__init__(1261, data)


class DerivativeStrikeCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeStrikeCurrency, self).__init__(1262)
        else:
            super(DerivativeStrikeCurrency, self).__init__(1262, data)


class DerivativeStrikeMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeStrikeMultiplier, self).__init__(1263)
        else:
            super(DerivativeStrikeMultiplier, self).__init__(1263, data)


class DerivativeStrikeValue(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeStrikeValue, self).__init__(1264)
        else:
            super(DerivativeStrikeValue, self).__init__(1264, data)


class DerivativeOptAttribute(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeOptAttribute, self).__init__(1265)
        else:
            super(DerivativeOptAttribute, self).__init__(1265, data)


class DerivativeContractMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeContractMultiplier, self).__init__(1266)
        else:
            super(DerivativeContractMultiplier, self).__init__(1266, data)


class DerivativeMinPriceIncrement(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeMinPriceIncrement, self).__init__(1267)
        else:
            super(DerivativeMinPriceIncrement, self).__init__(1267, data)


class DerivativeMinPriceIncrementAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeMinPriceIncrementAmount, self).__init__(1268)
        else:
            super(DerivativeMinPriceIncrementAmount, self).__init__(1268, data)


class DerivativeUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeUnitOfMeasure, self).__init__(1269)
        else:
            super(DerivativeUnitOfMeasure, self).__init__(1269, data)


class DerivativeUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeUnitOfMeasureQty, self).__init__(1270)
        else:
            super(DerivativeUnitOfMeasureQty, self).__init__(1270, data)


class DerivativeTimeUnit(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeTimeUnit, self).__init__(1271)
        else:
            super(DerivativeTimeUnit, self).__init__(1271, data)


class DerivativeSecurityExchange(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityExchange, self).__init__(1272)
        else:
            super(DerivativeSecurityExchange, self).__init__(1272, data)


class DerivativePositionLimit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativePositionLimit, self).__init__(1273)
        else:
            super(DerivativePositionLimit, self).__init__(1273, data)


class DerivativeNTPositionLimit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeNTPositionLimit, self).__init__(1274)
        else:
            super(DerivativeNTPositionLimit, self).__init__(1274, data)


class DerivativeIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeIssuer, self).__init__(1275)
        else:
            super(DerivativeIssuer, self).__init__(1275, data)


class DerivativeIssueDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeIssueDate, self).__init__(1276)
        else:
            super(DerivativeIssueDate, self).__init__(1276, data)


class DerivativeEncodedIssuerLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEncodedIssuerLen, self).__init__(1277)
        else:
            super(DerivativeEncodedIssuerLen, self).__init__(1277, data)


class DerivativeEncodedIssuer(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEncodedIssuer, self).__init__(1278)
        else:
            super(DerivativeEncodedIssuer, self).__init__(1278, data)


class DerivativeSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityDesc, self).__init__(1279)
        else:
            super(DerivativeSecurityDesc, self).__init__(1279, data)


class DerivativeEncodedSecurityDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEncodedSecurityDescLen, self).__init__(1280)
        else:
            super(DerivativeEncodedSecurityDescLen, self).__init__(1280, data)


class DerivativeEncodedSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEncodedSecurityDesc, self).__init__(1281)
        else:
            super(DerivativeEncodedSecurityDesc, self).__init__(1281, data)


class DerivativeSecurityXMLLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityXMLLen, self).__init__(1282)
        else:
            super(DerivativeSecurityXMLLen, self).__init__(1282, data)


class DerivativeSecurityXML(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityXML, self).__init__(1283)
        else:
            super(DerivativeSecurityXML, self).__init__(1283, data)


class DerivativeSecurityXMLSchema(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSecurityXMLSchema, self).__init__(1284)
        else:
            super(DerivativeSecurityXMLSchema, self).__init__(1284, data)


class DerivativeContractSettlMonth(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeContractSettlMonth, self).__init__(1285)
        else:
            super(DerivativeContractSettlMonth, self).__init__(1285, data)


class NoDerivativeEvents(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDerivativeEvents, self).__init__(1286)
        else:
            super(NoDerivativeEvents, self).__init__(1286, data)


class DerivativeEventType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEventType, self).__init__(1287)
        else:
            super(DerivativeEventType, self).__init__(1287, data)


class DerivativeEventDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEventDate, self).__init__(1288)
        else:
            super(DerivativeEventDate, self).__init__(1288, data)


class DerivativeEventTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEventTime, self).__init__(1289)
        else:
            super(DerivativeEventTime, self).__init__(1289, data)


class DerivativeEventPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEventPx, self).__init__(1290)
        else:
            super(DerivativeEventPx, self).__init__(1290, data)


class DerivativeEventText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeEventText, self).__init__(1291)
        else:
            super(DerivativeEventText, self).__init__(1291, data)


class NoDerivativeInstrumentParties(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDerivativeInstrumentParties, self).__init__(1292)
        else:
            super(NoDerivativeInstrumentParties, self).__init__(1292, data)


class DerivativeInstrumentPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrumentPartyID, self).__init__(1293)
        else:
            super(DerivativeInstrumentPartyID, self).__init__(1293, data)


class DerivativeInstrumentPartyIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrumentPartyIDSource, self).__init__(1294)
        else:
            super(DerivativeInstrumentPartyIDSource, self).__init__(1294, data)


class DerivativeInstrumentPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrumentPartyRole, self).__init__(1295)
        else:
            super(DerivativeInstrumentPartyRole, self).__init__(1295, data)


class NoDerivativeInstrumentPartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDerivativeInstrumentPartySubIDs, self).__init__(1296)
        else:
            super(NoDerivativeInstrumentPartySubIDs, self).__init__(1296, data)


class DerivativeInstrumentPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrumentPartySubID, self).__init__(1297)
        else:
            super(DerivativeInstrumentPartySubID, self).__init__(1297, data)


class DerivativeInstrumentPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrumentPartySubIDType, self).__init__(1298)
        else:
            super(DerivativeInstrumentPartySubIDType, self).__init__(1298, data)


class DerivativeExerciseStyle(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeExerciseStyle, self).__init__(1299)
        else:
            super(DerivativeExerciseStyle, self).__init__(1299, data)


class MarketSegmentID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MarketSegmentID, self).__init__(1300)
        else:
            super(MarketSegmentID, self).__init__(1300, data)


class MarketID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MarketID, self).__init__(1301)
        else:
            super(MarketID, self).__init__(1301, data)


class MaturityMonthYearIncrementUnits(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityMonthYearIncrementUnits, self).__init__(1302)
        else:
            super(MaturityMonthYearIncrementUnits, self).__init__(1302, data)


class MaturityMonthYearFormat(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MaturityMonthYearFormat, self).__init__(1303)
        else:
            super(MaturityMonthYearFormat, self).__init__(1303, data)


class StrikeExerciseStyle(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StrikeExerciseStyle, self).__init__(1304)
        else:
            super(StrikeExerciseStyle, self).__init__(1304, data)


class SecondaryPriceLimitType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecondaryPriceLimitType, self).__init__(1305)
        else:
            super(SecondaryPriceLimitType, self).__init__(1305, data)


class PriceLimitType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(PriceLimitType, self).__init__(1306)
        else:
            super(PriceLimitType, self).__init__(1306, data)


class ExecInstValue(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ExecInstValue, self).__init__(1308)
        else:
            super(ExecInstValue, self).__init__(1308, data)


class NoTradingSessionRules(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTradingSessionRules, self).__init__(1309)
        else:
            super(NoTradingSessionRules, self).__init__(1309, data)


class NoMarketSegments(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoMarketSegments, self).__init__(1310)
        else:
            super(NoMarketSegments, self).__init__(1310, data)


class NoDerivativeInstrAttrib(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoDerivativeInstrAttrib, self).__init__(1311)
        else:
            super(NoDerivativeInstrAttrib, self).__init__(1311, data)


class NoNestedInstrAttrib(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNestedInstrAttrib, self).__init__(1312)
        else:
            super(NoNestedInstrAttrib, self).__init__(1312, data)


class DerivativeInstrAttribType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrAttribType, self).__init__(1313)
        else:
            super(DerivativeInstrAttribType, self).__init__(1313, data)


class DerivativeInstrAttribValue(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeInstrAttribValue, self).__init__(1314)
        else:
            super(DerivativeInstrAttribValue, self).__init__(1314, data)


class DerivativePriceUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativePriceUnitOfMeasure, self).__init__(1315)
        else:
            super(DerivativePriceUnitOfMeasure, self).__init__(1315, data)


class DerivativePriceUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativePriceUnitOfMeasureQty, self).__init__(1316)
        else:
            super(DerivativePriceUnitOfMeasureQty, self).__init__(1316, data)


class DerivativeSettlMethod(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeSettlMethod, self).__init__(1317)
        else:
            super(DerivativeSettlMethod, self).__init__(1317, data)


class DerivativePriceQuoteMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativePriceQuoteMethod, self).__init__(1318)
        else:
            super(DerivativePriceQuoteMethod, self).__init__(1318, data)


class DerivativeFuturesValuationMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeFuturesValuationMethod, self).__init__(1319)
        else:
            super(DerivativeFuturesValuationMethod, self).__init__(1319, data)


class DerivativeListMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeListMethod, self).__init__(1320)
        else:
            super(DerivativeListMethod, self).__init__(1320, data)


class DerivativeCapPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeCapPrice, self).__init__(1321)
        else:
            super(DerivativeCapPrice, self).__init__(1321, data)


class DerivativeFloorPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeFloorPrice, self).__init__(1322)
        else:
            super(DerivativeFloorPrice, self).__init__(1322, data)


class DerivativePutOrCall(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativePutOrCall, self).__init__(1323)
        else:
            super(DerivativePutOrCall, self).__init__(1323, data)


class ListUpdateAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(ListUpdateAction, self).__init__(1324)
        else:
            super(ListUpdateAction, self).__init__(1324, data)


class ParentMktSegmID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ParentMktSegmID, self).__init__(1325)
        else:
            super(ParentMktSegmID, self).__init__(1325, data)


class TradingSessionDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TradingSessionDesc, self).__init__(1326)
        else:
            super(TradingSessionDesc, self).__init__(1326, data)


class TradSesUpdateAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesUpdateAction, self).__init__(1327)
        else:
            super(TradSesUpdateAction, self).__init__(1327, data)


class RejectText(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RejectText, self).__init__(1328)
        else:
            super(RejectText, self).__init__(1328, data)


class FeeMultiplier(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FeeMultiplier, self).__init__(1329)
        else:
            super(FeeMultiplier, self).__init__(1329, data)


class UnderlyingLegSymbol(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSymbol, self).__init__(1330)
        else:
            super(UnderlyingLegSymbol, self).__init__(1330, data)


class UnderlyingLegSymbolSfx(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSymbolSfx, self).__init__(1331)
        else:
            super(UnderlyingLegSymbolSfx, self).__init__(1331, data)


class UnderlyingLegSecurityID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityID, self).__init__(1332)
        else:
            super(UnderlyingLegSecurityID, self).__init__(1332, data)


class UnderlyingLegSecurityIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityIDSource, self).__init__(1333)
        else:
            super(UnderlyingLegSecurityIDSource, self).__init__(1333, data)


class NoUnderlyingLegSecurityAltID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoUnderlyingLegSecurityAltID, self).__init__(1334)
        else:
            super(NoUnderlyingLegSecurityAltID, self).__init__(1334, data)


class UnderlyingLegSecurityAltID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityAltID, self).__init__(1335)
        else:
            super(UnderlyingLegSecurityAltID, self).__init__(1335, data)


class UnderlyingLegSecurityAltIDSource(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityAltIDSource, self).__init__(1336)
        else:
            super(UnderlyingLegSecurityAltIDSource, self).__init__(1336, data)


class UnderlyingLegSecurityType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityType, self).__init__(1337)
        else:
            super(UnderlyingLegSecurityType, self).__init__(1337, data)


class UnderlyingLegSecuritySubType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecuritySubType, self).__init__(1338)
        else:
            super(UnderlyingLegSecuritySubType, self).__init__(1338, data)


class UnderlyingLegMaturityMonthYear(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegMaturityMonthYear, self).__init__(1339)
        else:
            super(UnderlyingLegMaturityMonthYear, self).__init__(1339, data)


class UnderlyingLegStrikePrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegStrikePrice, self).__init__(1340)
        else:
            super(UnderlyingLegStrikePrice, self).__init__(1340, data)


class UnderlyingLegSecurityExchange(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityExchange, self).__init__(1341)
        else:
            super(UnderlyingLegSecurityExchange, self).__init__(1341, data)


class NoOfLegUnderlyings(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoOfLegUnderlyings, self).__init__(1342)
        else:
            super(NoOfLegUnderlyings, self).__init__(1342, data)


class UnderlyingLegPutOrCall(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegPutOrCall, self).__init__(1343)
        else:
            super(UnderlyingLegPutOrCall, self).__init__(1343, data)


class UnderlyingLegCFICode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegCFICode, self).__init__(1344)
        else:
            super(UnderlyingLegCFICode, self).__init__(1344, data)


class UnderlyingLegMaturityDate(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegMaturityDate, self).__init__(1345)
        else:
            super(UnderlyingLegMaturityDate, self).__init__(1345, data)


class ApplReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ApplReqID, self).__init__(1346)
        else:
            super(ApplReqID, self).__init__(1346, data)


class ApplReqType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplReqType, self).__init__(1347)
        else:
            super(ApplReqType, self).__init__(1347, data)


class ApplResponseType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplResponseType, self).__init__(1348)
        else:
            super(ApplResponseType, self).__init__(1348, data)


class ApplTotalMessageCount(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplTotalMessageCount, self).__init__(1349)
        else:
            super(ApplTotalMessageCount, self).__init__(1349, data)


class ApplLastSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplLastSeqNum, self).__init__(1350)
        else:
            super(ApplLastSeqNum, self).__init__(1350, data)


class NoApplIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoApplIDs, self).__init__(1351)
        else:
            super(NoApplIDs, self).__init__(1351, data)


class ApplResendFlag(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(ApplResendFlag, self).__init__(1352)
        else:
            super(ApplResendFlag, self).__init__(1352, data)


class ApplResponseID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ApplResponseID, self).__init__(1353)
        else:
            super(ApplResponseID, self).__init__(1353, data)


class ApplResponseError(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplResponseError, self).__init__(1354)
        else:
            super(ApplResponseError, self).__init__(1354, data)


class RefApplID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefApplID, self).__init__(1355)
        else:
            super(RefApplID, self).__init__(1355, data)


class ApplReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ApplReportID, self).__init__(1356)
        else:
            super(ApplReportID, self).__init__(1356, data)


class RefApplLastSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RefApplLastSeqNum, self).__init__(1357)
        else:
            super(RefApplLastSeqNum, self).__init__(1357, data)


class LegPutOrCall(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegPutOrCall, self).__init__(1358)
        else:
            super(LegPutOrCall, self).__init__(1358, data)


class TotNoFills(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TotNoFills, self).__init__(1361)
        else:
            super(TotNoFills, self).__init__(1361, data)


class NoFills(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoFills, self).__init__(1362)
        else:
            super(NoFills, self).__init__(1362, data)


class FillExecID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(FillExecID, self).__init__(1363)
        else:
            super(FillExecID, self).__init__(1363, data)


class FillPx(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FillPx, self).__init__(1364)
        else:
            super(FillPx, self).__init__(1364, data)


class FillQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(FillQty, self).__init__(1365)
        else:
            super(FillQty, self).__init__(1365, data)


class LegAllocID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegAllocID, self).__init__(1366)
        else:
            super(LegAllocID, self).__init__(1366, data)


class LegAllocSettlCurrency(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegAllocSettlCurrency, self).__init__(1367)
        else:
            super(LegAllocSettlCurrency, self).__init__(1367, data)


class TradSesEvent(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradSesEvent, self).__init__(1368)
        else:
            super(TradSesEvent, self).__init__(1368, data)


class MassActionReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MassActionReportID, self).__init__(1369)
        else:
            super(MassActionReportID, self).__init__(1369, data)


class NoNotAffectedOrders(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNotAffectedOrders, self).__init__(1370)
        else:
            super(NoNotAffectedOrders, self).__init__(1370, data)


class NotAffectedOrderID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NotAffectedOrderID, self).__init__(1371)
        else:
            super(NotAffectedOrderID, self).__init__(1371, data)


class NotAffOrigClOrdID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NotAffOrigClOrdID, self).__init__(1372)
        else:
            super(NotAffOrigClOrdID, self).__init__(1372, data)


class MassActionType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassActionType, self).__init__(1373)
        else:
            super(MassActionType, self).__init__(1373, data)


class MassActionScope(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassActionScope, self).__init__(1374)
        else:
            super(MassActionScope, self).__init__(1374, data)


class MassActionResponse(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassActionResponse, self).__init__(1375)
        else:
            super(MassActionResponse, self).__init__(1375, data)


class MassActionRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MassActionRejectReason, self).__init__(1376)
        else:
            super(MassActionRejectReason, self).__init__(1376, data)


class MultilegModel(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MultilegModel, self).__init__(1377)
        else:
            super(MultilegModel, self).__init__(1377, data)


class MultilegPriceMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(MultilegPriceMethod, self).__init__(1378)
        else:
            super(MultilegPriceMethod, self).__init__(1378, data)


class LegVolatility(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegVolatility, self).__init__(1379)
        else:
            super(LegVolatility, self).__init__(1379, data)


class DividendYield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DividendYield, self).__init__(1380)
        else:
            super(DividendYield, self).__init__(1380, data)


class LegDividendYield(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegDividendYield, self).__init__(1381)
        else:
            super(LegDividendYield, self).__init__(1381, data)


class CurrencyRatio(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(CurrencyRatio, self).__init__(1382)
        else:
            super(CurrencyRatio, self).__init__(1382, data)


class LegCurrencyRatio(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegCurrencyRatio, self).__init__(1383)
        else:
            super(LegCurrencyRatio, self).__init__(1383, data)


class LegExecInst(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegExecInst, self).__init__(1384)
        else:
            super(LegExecInst, self).__init__(1384, data)


class ContingencyType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ContingencyType, self).__init__(1385)
        else:
            super(ContingencyType, self).__init__(1385, data)


class ListRejectReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ListRejectReason, self).__init__(1386)
        else:
            super(ListRejectReason, self).__init__(1386, data)


class NoTrdRepIndicators(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTrdRepIndicators, self).__init__(1387)
        else:
            super(NoTrdRepIndicators, self).__init__(1387, data)


class TrdRepPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRepPartyRole, self).__init__(1388)
        else:
            super(TrdRepPartyRole, self).__init__(1388, data)


class TrdRepIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(TrdRepIndicator, self).__init__(1389)
        else:
            super(TrdRepIndicator, self).__init__(1389, data)


class TradePublishIndicator(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TradePublishIndicator, self).__init__(1390)
        else:
            super(TradePublishIndicator, self).__init__(1390, data)


class UnderlyingLegOptAttribute(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegOptAttribute, self).__init__(1391)
        else:
            super(UnderlyingLegOptAttribute, self).__init__(1391, data)


class UnderlyingLegSecurityDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegSecurityDesc, self).__init__(1392)
        else:
            super(UnderlyingLegSecurityDesc, self).__init__(1392, data)


class MarketReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MarketReqID, self).__init__(1393)
        else:
            super(MarketReqID, self).__init__(1393, data)


class MarketReportID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MarketReportID, self).__init__(1394)
        else:
            super(MarketReportID, self).__init__(1394, data)


class MarketUpdateAction(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(MarketUpdateAction, self).__init__(1395)
        else:
            super(MarketUpdateAction, self).__init__(1395, data)


class MarketSegmentDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MarketSegmentDesc, self).__init__(1396)
        else:
            super(MarketSegmentDesc, self).__init__(1396, data)


class EncodedMktSegmDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedMktSegmDescLen, self).__init__(1397)
        else:
            super(EncodedMktSegmDescLen, self).__init__(1397, data)


class EncodedMktSegmDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedMktSegmDesc, self).__init__(1398)
        else:
            super(EncodedMktSegmDesc, self).__init__(1398, data)


class ApplNewSeqNum(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplNewSeqNum, self).__init__(1399)
        else:
            super(ApplNewSeqNum, self).__init__(1399, data)


class EncryptedPasswordMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptedPasswordMethod, self).__init__(1400)
        else:
            super(EncryptedPasswordMethod, self).__init__(1400, data)


class EncryptedPasswordLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptedPasswordLen, self).__init__(1401)
        else:
            super(EncryptedPasswordLen, self).__init__(1401, data)


class EncryptedPassword(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptedPassword, self).__init__(1402)
        else:
            super(EncryptedPassword, self).__init__(1402, data)


class EncryptedNewPasswordLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptedNewPasswordLen, self).__init__(1403)
        else:
            super(EncryptedNewPasswordLen, self).__init__(1403, data)


class EncryptedNewPassword(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncryptedNewPassword, self).__init__(1404)
        else:
            super(EncryptedNewPassword, self).__init__(1404, data)


class UnderlyingLegMaturityTime(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingLegMaturityTime, self).__init__(1405)
        else:
            super(UnderlyingLegMaturityTime, self).__init__(1405, data)


class RefApplExtID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RefApplExtID, self).__init__(1406)
        else:
            super(RefApplExtID, self).__init__(1406, data)


class DefaultApplExtID(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DefaultApplExtID, self).__init__(1407)
        else:
            super(DefaultApplExtID, self).__init__(1407, data)


class DefaultCstmApplVerID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DefaultCstmApplVerID, self).__init__(1408)
        else:
            super(DefaultCstmApplVerID, self).__init__(1408, data)


class SessionStatus(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SessionStatus, self).__init__(1409)
        else:
            super(SessionStatus, self).__init__(1409, data)


class DefaultVerIndicator(quickfix.BoolField):
    def __init__(self, data=None):
        if data is None:
            super(DefaultVerIndicator, self).__init__(1410)
        else:
            super(DefaultVerIndicator, self).__init__(1410, data)


class Nested4PartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested4PartySubIDType, self).__init__(1411)
        else:
            super(Nested4PartySubIDType, self).__init__(1411, data)


class Nested4PartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested4PartySubID, self).__init__(1412)
        else:
            super(Nested4PartySubID, self).__init__(1412, data)


class NoNested4PartySubIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested4PartySubIDs, self).__init__(1413)
        else:
            super(NoNested4PartySubIDs, self).__init__(1413, data)


class NoNested4PartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNested4PartyIDs, self).__init__(1414)
        else:
            super(NoNested4PartyIDs, self).__init__(1414, data)


class Nested4PartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Nested4PartyID, self).__init__(1415)
        else:
            super(Nested4PartyID, self).__init__(1415, data)


class Nested4PartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(Nested4PartyIDSource, self).__init__(1416)
        else:
            super(Nested4PartyIDSource, self).__init__(1416, data)


class Nested4PartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(Nested4PartyRole, self).__init__(1417)
        else:
            super(Nested4PartyRole, self).__init__(1417, data)


class LegLastQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegLastQty, self).__init__(1418)
        else:
            super(LegLastQty, self).__init__(1418, data)


class UnderlyingExerciseStyle(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingExerciseStyle, self).__init__(1419)
        else:
            super(UnderlyingExerciseStyle, self).__init__(1419, data)


class LegExerciseStyle(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegExerciseStyle, self).__init__(1420)
        else:
            super(LegExerciseStyle, self).__init__(1420, data)


class LegPriceUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LegPriceUnitOfMeasure, self).__init__(1421)
        else:
            super(LegPriceUnitOfMeasure, self).__init__(1421, data)


class LegPriceUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(LegPriceUnitOfMeasureQty, self).__init__(1422)
        else:
            super(LegPriceUnitOfMeasureQty, self).__init__(1422, data)


class UnderlyingUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingUnitOfMeasureQty, self).__init__(1423)
        else:
            super(UnderlyingUnitOfMeasureQty, self).__init__(1423, data)


class UnderlyingPriceUnitOfMeasure(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPriceUnitOfMeasure, self).__init__(1424)
        else:
            super(UnderlyingPriceUnitOfMeasure, self).__init__(1424, data)


class UnderlyingPriceUnitOfMeasureQty(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPriceUnitOfMeasureQty, self).__init__(1425)
        else:
            super(UnderlyingPriceUnitOfMeasureQty, self).__init__(1425, data)


class ApplReportType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ApplReportType, self).__init__(1426)
        else:
            super(ApplReportType, self).__init__(1426, data)


class HaltReasonInt(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(HaltReasonInt, self).__init__(327)
        else:
            super(HaltReasonInt, self).__init__(327, data)


class SideLastQty(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideLastQty, self).__init__(1009)
        else:
            super(SideLastQty, self).__init__(1009, data)


class UnderlyingInstrumentPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrumentPartyID, self).__init__(1059)
        else:
            super(UnderlyingInstrumentPartyID, self).__init__(1059, data)


class UnderlyingInstrumentPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrumentPartyIDSource, self).__init__(1060)
        else:
            super(UnderlyingInstrumentPartyIDSource, self).__init__(1060, data)


class UnderlyingInstrumentPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrumentPartyRole, self).__init__(1061)
        else:
            super(UnderlyingInstrumentPartyRole, self).__init__(1061, data)


class UnderlyingInstrumentPartySubID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrumentPartySubID, self).__init__(1063)
        else:
            super(UnderlyingInstrumentPartySubID, self).__init__(1063, data)


class UnderlyingInstrumentPartySubIDType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingInstrumentPartySubIDType, self).__init__(1064)
        else:
            super(UnderlyingInstrumentPartySubIDType, self).__init__(1064, data)


class OptPayoutAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OptPayoutAmount, self).__init__(1195)
        else:
            super(OptPayoutAmount, self).__init__(1195, data)


class ValuationMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ValuationMethod, self).__init__(1197)
        else:
            super(ValuationMethod, self).__init__(1197, data)


class DerivativeValuationMethod(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeValuationMethod, self).__init__(1319)
        else:
            super(DerivativeValuationMethod, self).__init__(1319, data)


class SideExecID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SideExecID, self).__init__(1427)
        else:
            super(SideExecID, self).__init__(1427, data)


class OrderDelay(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OrderDelay, self).__init__(1428)
        else:
            super(OrderDelay, self).__init__(1428, data)


class OrderDelayUnit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OrderDelayUnit, self).__init__(1429)
        else:
            super(OrderDelayUnit, self).__init__(1429, data)


class VenueType(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(VenueType, self).__init__(1430)
        else:
            super(VenueType, self).__init__(1430, data)


class RefOrdIDReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RefOrdIDReason, self).__init__(1431)
        else:
            super(RefOrdIDReason, self).__init__(1431, data)


class OrigCustOrderCapacity(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OrigCustOrderCapacity, self).__init__(1432)
        else:
            super(OrigCustOrderCapacity, self).__init__(1432, data)


class RefApplReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RefApplReqID, self).__init__(1433)
        else:
            super(RefApplReqID, self).__init__(1433, data)


class ModelType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ModelType, self).__init__(1434)
        else:
            super(ModelType, self).__init__(1434, data)


class ContractMultiplierUnit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ContractMultiplierUnit, self).__init__(1435)
        else:
            super(ContractMultiplierUnit, self).__init__(1435, data)


class LegContractMultiplierUnit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegContractMultiplierUnit, self).__init__(1436)
        else:
            super(LegContractMultiplierUnit, self).__init__(1436, data)


class UnderlyingContractMultiplierUnit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingContractMultiplierUnit, self).__init__(1437)
        else:
            super(UnderlyingContractMultiplierUnit, self).__init__(1437, data)


class DerivativeContractMultiplierUnit(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeContractMultiplierUnit, self).__init__(1438)
        else:
            super(DerivativeContractMultiplierUnit, self).__init__(1438, data)


class FlowScheduleType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(FlowScheduleType, self).__init__(1439)
        else:
            super(FlowScheduleType, self).__init__(1439, data)


class LegFlowScheduleType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(LegFlowScheduleType, self).__init__(1440)
        else:
            super(LegFlowScheduleType, self).__init__(1440, data)


class UnderlyingFlowScheduleType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingFlowScheduleType, self).__init__(1441)
        else:
            super(UnderlyingFlowScheduleType, self).__init__(1441, data)


class DerivativeFlowScheduleType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(DerivativeFlowScheduleType, self).__init__(1442)
        else:
            super(DerivativeFlowScheduleType, self).__init__(1442, data)


class FillLiquidityInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(FillLiquidityInd, self).__init__(1443)
        else:
            super(FillLiquidityInd, self).__init__(1443, data)


class SideLiquidityInd(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SideLiquidityInd, self).__init__(1444)
        else:
            super(SideLiquidityInd, self).__init__(1444, data)


class NoRateSources(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoRateSources, self).__init__(1445)
        else:
            super(NoRateSources, self).__init__(1445, data)


class RateSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RateSource, self).__init__(1446)
        else:
            super(RateSource, self).__init__(1446, data)


class RateSourceType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(RateSourceType, self).__init__(1447)
        else:
            super(RateSourceType, self).__init__(1447, data)


class ReferencePage(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(ReferencePage, self).__init__(1448)
        else:
            super(ReferencePage, self).__init__(1448, data)


class RestructuringType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(RestructuringType, self).__init__(1449)
        else:
            super(RestructuringType, self).__init__(1449, data)


class Seniority(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(Seniority, self).__init__(1450)
        else:
            super(Seniority, self).__init__(1450, data)


class NotionalPercentageOutstanding(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(NotionalPercentageOutstanding, self).__init__(1451)
        else:
            super(NotionalPercentageOutstanding, self).__init__(1451, data)


class OriginalNotionalPercentageOutstanding(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(OriginalNotionalPercentageOutstanding, self).__init__(1452)
        else:
            super(OriginalNotionalPercentageOutstanding, self).__init__(1452, data)


class UnderlyingRestructuringType(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingRestructuringType, self).__init__(1453)
        else:
            super(UnderlyingRestructuringType, self).__init__(1453, data)


class UnderlyingSeniority(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingSeniority, self).__init__(1454)
        else:
            super(UnderlyingSeniority, self).__init__(1454, data)


class UnderlyingNotionalPercentageOutstanding(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingNotionalPercentageOutstanding, self).__init__(1455)
        else:
            super(UnderlyingNotionalPercentageOutstanding, self).__init__(1455, data)


class UnderlyingOriginalNotionalPercentageOutstanding(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingOriginalNotionalPercentageOutstanding, self).__init__(1456)
        else:
            super(UnderlyingOriginalNotionalPercentageOutstanding, self).__init__(1456, data)


class AttachmentPoint(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(AttachmentPoint, self).__init__(1457)
        else:
            super(AttachmentPoint, self).__init__(1457, data)


class DetachmentPoint(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(DetachmentPoint, self).__init__(1458)
        else:
            super(DetachmentPoint, self).__init__(1458, data)


class UnderlyingAttachmentPoint(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingAttachmentPoint, self).__init__(1459)
        else:
            super(UnderlyingAttachmentPoint, self).__init__(1459, data)


class UnderlyingDetachmentPoint(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingDetachmentPoint, self).__init__(1460)
        else:
            super(UnderlyingDetachmentPoint, self).__init__(1460, data)


class NoTargetPartyIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoTargetPartyIDs, self).__init__(1461)
        else:
            super(NoTargetPartyIDs, self).__init__(1461, data)


class TargetPartyID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(TargetPartyID, self).__init__(1462)
        else:
            super(TargetPartyID, self).__init__(1462, data)


class TargetPartyIDSource(quickfix.CharField):
    def __init__(self, data=None):
        if data is None:
            super(TargetPartyIDSource, self).__init__(1463)
        else:
            super(TargetPartyIDSource, self).__init__(1463, data)


class TargetPartyRole(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(TargetPartyRole, self).__init__(1464)
        else:
            super(TargetPartyRole, self).__init__(1464, data)


class SecurityListID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListID, self).__init__(1465)
        else:
            super(SecurityListID, self).__init__(1465, data)


class SecurityListRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListRefID, self).__init__(1466)
        else:
            super(SecurityListRefID, self).__init__(1466, data)


class SecurityListDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListDesc, self).__init__(1467)
        else:
            super(SecurityListDesc, self).__init__(1467, data)


class EncodedSecurityListDescLen(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSecurityListDescLen, self).__init__(1468)
        else:
            super(EncodedSecurityListDescLen, self).__init__(1468, data)


class EncodedSecurityListDesc(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(EncodedSecurityListDesc, self).__init__(1469)
        else:
            super(EncodedSecurityListDesc, self).__init__(1469, data)


class SecurityListType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListType, self).__init__(1470)
        else:
            super(SecurityListType, self).__init__(1470, data)


class SecurityListTypeSource(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(SecurityListTypeSource, self).__init__(1471)
        else:
            super(SecurityListTypeSource, self).__init__(1471, data)


class NewsID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NewsID, self).__init__(1472)
        else:
            super(NewsID, self).__init__(1472, data)


class NewsCategory(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NewsCategory, self).__init__(1473)
        else:
            super(NewsCategory, self).__init__(1473, data)


class LanguageCode(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(LanguageCode, self).__init__(1474)
        else:
            super(LanguageCode, self).__init__(1474, data)


class NoNewsRefIDs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoNewsRefIDs, self).__init__(1475)
        else:
            super(NoNewsRefIDs, self).__init__(1475, data)


class NewsRefID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(NewsRefID, self).__init__(1476)
        else:
            super(NewsRefID, self).__init__(1476, data)


class NewsRefType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NewsRefType, self).__init__(1477)
        else:
            super(NewsRefType, self).__init__(1477, data)


class StrikePriceDeterminationMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StrikePriceDeterminationMethod, self).__init__(1478)
        else:
            super(StrikePriceDeterminationMethod, self).__init__(1478, data)


class StrikePriceBoundaryMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StrikePriceBoundaryMethod, self).__init__(1479)
        else:
            super(StrikePriceBoundaryMethod, self).__init__(1479, data)


class StrikePriceBoundaryPrecision(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(StrikePriceBoundaryPrecision, self).__init__(1480)
        else:
            super(StrikePriceBoundaryPrecision, self).__init__(1480, data)


class UnderlyingPriceDeterminationMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(UnderlyingPriceDeterminationMethod, self).__init__(1481)
        else:
            super(UnderlyingPriceDeterminationMethod, self).__init__(1481, data)


class OptPayoutType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(OptPayoutType, self).__init__(1482)
        else:
            super(OptPayoutType, self).__init__(1482, data)


class NoComplexEvents(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoComplexEvents, self).__init__(1483)
        else:
            super(NoComplexEvents, self).__init__(1483, data)


class ComplexEventType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventType, self).__init__(1484)
        else:
            super(ComplexEventType, self).__init__(1484, data)


class ComplexOptPayoutAmount(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexOptPayoutAmount, self).__init__(1485)
        else:
            super(ComplexOptPayoutAmount, self).__init__(1485, data)


class ComplexEventPrice(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventPrice, self).__init__(1486)
        else:
            super(ComplexEventPrice, self).__init__(1486, data)


class ComplexEventPriceBoundaryMethod(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventPriceBoundaryMethod, self).__init__(1487)
        else:
            super(ComplexEventPriceBoundaryMethod, self).__init__(1487, data)


class ComplexEventPriceBoundaryPrecision(quickfix.DoubleField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventPriceBoundaryPrecision, self).__init__(1488)
        else:
            super(ComplexEventPriceBoundaryPrecision, self).__init__(1488, data)


class ComplexEventPriceTimeType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventPriceTimeType, self).__init__(1489)
        else:
            super(ComplexEventPriceTimeType, self).__init__(1489, data)


class ComplexEventCondition(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventCondition, self).__init__(1490)
        else:
            super(ComplexEventCondition, self).__init__(1490, data)


class NoComplexEventDates(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoComplexEventDates, self).__init__(1491)
        else:
            super(NoComplexEventDates, self).__init__(1491, data)


class ComplexEventStartDate(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventStartDate, self).__init__(1492)
        else:
            super(ComplexEventStartDate, self).__init__(1492, data)


class ComplexEventEndDate(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventEndDate, self).__init__(1493)
        else:
            super(ComplexEventEndDate, self).__init__(1493, data)


class NoComplexEventTimes(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoComplexEventTimes, self).__init__(1494)
        else:
            super(NoComplexEventTimes, self).__init__(1494, data)


class ComplexEventStartTime(quickfix.UtcTimeOnlyField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventStartTime, self).__init__(1495)
        else:
            super(ComplexEventStartTime, self).__init__(1495, data)


class ComplexEventEndTime(quickfix.UtcTimeOnlyField):
    def __init__(self, data=None):
        if data is None:
            super(ComplexEventEndTime, self).__init__(1496)
        else:
            super(ComplexEventEndTime, self).__init__(1496, data)


class StreamAsgnReqID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnReqID, self).__init__(1497)
        else:
            super(StreamAsgnReqID, self).__init__(1497, data)


class StreamAsgnReqType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnReqType, self).__init__(1498)
        else:
            super(StreamAsgnReqType, self).__init__(1498, data)


class NoAsgnReqs(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(NoAsgnReqs, self).__init__(1499)
        else:
            super(NoAsgnReqs, self).__init__(1499, data)


class MDStreamID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(MDStreamID, self).__init__(1500)
        else:
            super(MDStreamID, self).__init__(1500, data)


class StreamAsgnRptID(quickfix.StringField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnRptID, self).__init__(1501)
        else:
            super(StreamAsgnRptID, self).__init__(1501, data)


class StreamAsgnRejReason(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnRejReason, self).__init__(1502)
        else:
            super(StreamAsgnRejReason, self).__init__(1502, data)


class StreamAsgnAckType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnAckType, self).__init__(1503)
        else:
            super(StreamAsgnAckType, self).__init__(1503, data)


class RelSymTransactTime(quickfix.UtcTimeStampField):
    def __init__(self, data=None):
        if data is None:
            super(RelSymTransactTime, self).__init__(1504)
        else:
            super(RelSymTransactTime, self).__init__(1504, data)


class StreamAsgnType(quickfix.IntField):
    def __init__(self, data=None):
        if data is None:
            super(StreamAsgnType, self).__init__(1617)
        else:
            super(StreamAsgnType, self).__init__(1617, data)
