import quickfix

class BeginSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 7)
		else:
			quickfix.IntField.__init__(self, 7, data)

class BeginString(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 8)
		else:
			quickfix.StringField.__init__(self, 8, data)

class BodyLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 9)
		else:
			quickfix.IntField.__init__(self, 9, data)

class CheckSum(quickfix.CheckSumField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CheckSumField.__init__(self, 10)
		else:
			quickfix.CheckSumField.__init__(self, 10, data)

class EndSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 16)
		else:
			quickfix.IntField.__init__(self, 16, data)

class MsgSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 34)
		else:
			quickfix.IntField.__init__(self, 34, data)

class MsgType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 35)
		else:
			quickfix.StringField.__init__(self, 35, data)

class NewSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 36)
		else:
			quickfix.IntField.__init__(self, 36, data)

class PossDupFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 43)
		else:
			quickfix.BoolField.__init__(self, 43, data)

class RefSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 45)
		else:
			quickfix.IntField.__init__(self, 45, data)

class SenderCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 49)
		else:
			quickfix.StringField.__init__(self, 49, data)

class SenderSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 50)
		else:
			quickfix.StringField.__init__(self, 50, data)

class SendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 52)
		else:
			quickfix.UtcTimeStampField.__init__(self, 52, data)

class TargetCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 56)
		else:
			quickfix.StringField.__init__(self, 56, data)

class TargetSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 57)
		else:
			quickfix.StringField.__init__(self, 57, data)

class Text(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 58)
		else:
			quickfix.StringField.__init__(self, 58, data)

class Signature(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 89)
		else:
			quickfix.StringField.__init__(self, 89, data)

class SecureDataLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 90)
		else:
			quickfix.IntField.__init__(self, 90, data)

class SecureData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 91)
		else:
			quickfix.StringField.__init__(self, 91, data)

class SignatureLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 93)
		else:
			quickfix.IntField.__init__(self, 93, data)

class RawDataLength(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 95)
		else:
			quickfix.IntField.__init__(self, 95, data)

class RawData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 96)
		else:
			quickfix.StringField.__init__(self, 96, data)

class PossResend(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 97)
		else:
			quickfix.BoolField.__init__(self, 97, data)

class EncryptMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 98)
		else:
			quickfix.IntField.__init__(self, 98, data)

class HeartBtInt(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 108)
		else:
			quickfix.IntField.__init__(self, 108, data)

class TestReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 112)
		else:
			quickfix.StringField.__init__(self, 112, data)

class OnBehalfOfCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 115)
		else:
			quickfix.StringField.__init__(self, 115, data)

class OnBehalfOfSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 116)
		else:
			quickfix.StringField.__init__(self, 116, data)

class OrigSendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 122)
		else:
			quickfix.UtcTimeStampField.__init__(self, 122, data)

class GapFillFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 123)
		else:
			quickfix.BoolField.__init__(self, 123, data)

class DeliverToCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 128)
		else:
			quickfix.StringField.__init__(self, 128, data)

class DeliverToSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 129)
		else:
			quickfix.StringField.__init__(self, 129, data)

class ResetSeqNumFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 141)
		else:
			quickfix.BoolField.__init__(self, 141, data)

class SenderLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 142)
		else:
			quickfix.StringField.__init__(self, 142, data)

class TargetLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 143)
		else:
			quickfix.StringField.__init__(self, 143, data)

class OnBehalfOfLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 144)
		else:
			quickfix.StringField.__init__(self, 144, data)

class DeliverToLocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 145)
		else:
			quickfix.StringField.__init__(self, 145, data)

class XmlDataLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 212)
		else:
			quickfix.IntField.__init__(self, 212, data)

class XmlData(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 213)
		else:
			quickfix.StringField.__init__(self, 213, data)

class MessageEncoding(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 347)
		else:
			quickfix.StringField.__init__(self, 347, data)

class EncodedTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 354)
		else:
			quickfix.IntField.__init__(self, 354, data)

class EncodedText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 355)
		else:
			quickfix.StringField.__init__(self, 355, data)

class LastMsgSeqNumProcessed(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 369)
		else:
			quickfix.IntField.__init__(self, 369, data)

class RefTagID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 371)
		else:
			quickfix.IntField.__init__(self, 371, data)

class RefMsgType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 372)
		else:
			quickfix.StringField.__init__(self, 372, data)

class SessionRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 373)
		else:
			quickfix.IntField.__init__(self, 373, data)

class MaxMessageSize(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 383)
		else:
			quickfix.IntField.__init__(self, 383, data)

class NoMsgTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 384)
		else:
			quickfix.IntField.__init__(self, 384, data)

class MsgDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 385)
		else:
			quickfix.CharField.__init__(self, 385, data)

class TestMessageIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 464)
		else:
			quickfix.BoolField.__init__(self, 464, data)

class Username(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 553)
		else:
			quickfix.StringField.__init__(self, 553, data)

class Password(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 554)
		else:
			quickfix.StringField.__init__(self, 554, data)

class NoHops(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 627)
		else:
			quickfix.IntField.__init__(self, 627, data)

class HopCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 628)
		else:
			quickfix.StringField.__init__(self, 628, data)

class HopSendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 629)
		else:
			quickfix.UtcTimeStampField.__init__(self, 629, data)

class HopRefID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 630)
		else:
			quickfix.IntField.__init__(self, 630, data)

class NextExpectedMsgSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 789)
		else:
			quickfix.IntField.__init__(self, 789, data)

class ApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1128)
		else:
			quickfix.StringField.__init__(self, 1128, data)

class CstmApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1129)
		else:
			quickfix.StringField.__init__(self, 1129, data)

class RefApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1130)
		else:
			quickfix.StringField.__init__(self, 1130, data)

class RefCstmApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1131)
		else:
			quickfix.StringField.__init__(self, 1131, data)

class DefaultApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1137)
		else:
			quickfix.StringField.__init__(self, 1137, data)

class Account(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1)
		else:
			quickfix.StringField.__init__(self, 1, data)

class AdvId(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 2)
		else:
			quickfix.StringField.__init__(self, 2, data)

class AdvRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 3)
		else:
			quickfix.StringField.__init__(self, 3, data)

class AdvSide(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 4)
		else:
			quickfix.CharField.__init__(self, 4, data)

class AdvTransType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 5)
		else:
			quickfix.StringField.__init__(self, 5, data)

class AvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 6)
		else:
			quickfix.DoubleField.__init__(self, 6, data)

class ClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 11)
		else:
			quickfix.StringField.__init__(self, 11, data)

class Commission(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 12)
		else:
			quickfix.DoubleField.__init__(self, 12, data)

class CommType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 13)
		else:
			quickfix.CharField.__init__(self, 13, data)

class CumQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 14)
		else:
			quickfix.DoubleField.__init__(self, 14, data)

class Currency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 15)
		else:
			quickfix.StringField.__init__(self, 15, data)

class ExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 17)
		else:
			quickfix.StringField.__init__(self, 17, data)

class ExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 18)
		else:
			quickfix.StringField.__init__(self, 18, data)

class ExecRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 19)
		else:
			quickfix.StringField.__init__(self, 19, data)

class ExecTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 20)
		else:
			quickfix.CharField.__init__(self, 20, data)

class HandlInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 21)
		else:
			quickfix.CharField.__init__(self, 21, data)

class IDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 22)
		else:
			quickfix.StringField.__init__(self, 22, data)

class IOIid(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 23)
		else:
			quickfix.StringField.__init__(self, 23, data)

class IOIOthSvc(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 24)
		else:
			quickfix.CharField.__init__(self, 24, data)

class IOIQltyInd(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 25)
		else:
			quickfix.CharField.__init__(self, 25, data)

class IOIRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 26)
		else:
			quickfix.StringField.__init__(self, 26, data)

class IOIShares(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 27)
		else:
			quickfix.StringField.__init__(self, 27, data)

class IOITransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 28)
		else:
			quickfix.CharField.__init__(self, 28, data)

class LastCapacity(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 29)
		else:
			quickfix.CharField.__init__(self, 29, data)

class LastMkt(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 30)
		else:
			quickfix.StringField.__init__(self, 30, data)

class LastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 31)
		else:
			quickfix.DoubleField.__init__(self, 31, data)

class LastShares(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 32)
		else:
			quickfix.DoubleField.__init__(self, 32, data)

class LinesOfText(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 33)
		else:
			quickfix.IntField.__init__(self, 33, data)

class OrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 37)
		else:
			quickfix.StringField.__init__(self, 37, data)

class OrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 38)
		else:
			quickfix.DoubleField.__init__(self, 38, data)

class OrdStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 39)
		else:
			quickfix.CharField.__init__(self, 39, data)

class OrdType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 40)
		else:
			quickfix.CharField.__init__(self, 40, data)

class OrigClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 41)
		else:
			quickfix.StringField.__init__(self, 41, data)

class OrigTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 42)
		else:
			quickfix.UtcTimeStampField.__init__(self, 42, data)

class Price(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 44)
		else:
			quickfix.DoubleField.__init__(self, 44, data)

class RelatdSym(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 46)
		else:
			quickfix.StringField.__init__(self, 46, data)

class Rule80A(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 47)
		else:
			quickfix.CharField.__init__(self, 47, data)

class SecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 48)
		else:
			quickfix.StringField.__init__(self, 48, data)

class Shares(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 53)
		else:
			quickfix.DoubleField.__init__(self, 53, data)

class Side(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 54)
		else:
			quickfix.CharField.__init__(self, 54, data)

class Symbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 55)
		else:
			quickfix.StringField.__init__(self, 55, data)

class TimeInForce(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 59)
		else:
			quickfix.CharField.__init__(self, 59, data)

class TransactTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 60)
		else:
			quickfix.UtcTimeStampField.__init__(self, 60, data)

class Urgency(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 61)
		else:
			quickfix.CharField.__init__(self, 61, data)

class ValidUntilTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 62)
		else:
			quickfix.UtcTimeStampField.__init__(self, 62, data)

class SettlmntTyp(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 63)
		else:
			quickfix.CharField.__init__(self, 63, data)

class FutSettDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 64)
		else:
			quickfix.StringField.__init__(self, 64, data)

class SymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 65)
		else:
			quickfix.StringField.__init__(self, 65, data)

class ListID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 66)
		else:
			quickfix.StringField.__init__(self, 66, data)

class ListSeqNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 67)
		else:
			quickfix.IntField.__init__(self, 67, data)

class ListNoOrds(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 68)
		else:
			quickfix.IntField.__init__(self, 68, data)

class ListExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 69)
		else:
			quickfix.StringField.__init__(self, 69, data)

class AllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 70)
		else:
			quickfix.StringField.__init__(self, 70, data)

class AllocTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 71)
		else:
			quickfix.CharField.__init__(self, 71, data)

class RefAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 72)
		else:
			quickfix.StringField.__init__(self, 72, data)

class NoOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 73)
		else:
			quickfix.IntField.__init__(self, 73, data)

class AvgPrxPrecision(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 74)
		else:
			quickfix.IntField.__init__(self, 74, data)

class TradeDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 75)
		else:
			quickfix.StringField.__init__(self, 75, data)

class ExecBroker(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 76)
		else:
			quickfix.StringField.__init__(self, 76, data)

class OpenClose(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 77)
		else:
			quickfix.CharField.__init__(self, 77, data)

class NoAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 78)
		else:
			quickfix.IntField.__init__(self, 78, data)

class AllocAccount(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 79)
		else:
			quickfix.StringField.__init__(self, 79, data)

class AllocShares(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 80)
		else:
			quickfix.DoubleField.__init__(self, 80, data)

class ProcessCode(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 81)
		else:
			quickfix.CharField.__init__(self, 81, data)

class NoRpts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 82)
		else:
			quickfix.IntField.__init__(self, 82, data)

class RptSeq(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 83)
		else:
			quickfix.IntField.__init__(self, 83, data)

class CxlQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 84)
		else:
			quickfix.DoubleField.__init__(self, 84, data)

class NoDlvyInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 85)
		else:
			quickfix.IntField.__init__(self, 85, data)

class DlvyInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 86)
		else:
			quickfix.StringField.__init__(self, 86, data)

class AllocStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 87)
		else:
			quickfix.IntField.__init__(self, 87, data)

class AllocRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 88)
		else:
			quickfix.IntField.__init__(self, 88, data)

class BrokerOfCredit(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 92)
		else:
			quickfix.StringField.__init__(self, 92, data)

class EmailType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 94)
		else:
			quickfix.CharField.__init__(self, 94, data)

class StopPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 99)
		else:
			quickfix.DoubleField.__init__(self, 99, data)

class ExDestination(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 100)
		else:
			quickfix.StringField.__init__(self, 100, data)

class CxlRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 102)
		else:
			quickfix.IntField.__init__(self, 102, data)

class OrdRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 103)
		else:
			quickfix.IntField.__init__(self, 103, data)

class IOIQualifier(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 104)
		else:
			quickfix.CharField.__init__(self, 104, data)

class WaveNo(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 105)
		else:
			quickfix.StringField.__init__(self, 105, data)

class Issuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 106)
		else:
			quickfix.StringField.__init__(self, 106, data)

class SecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 107)
		else:
			quickfix.StringField.__init__(self, 107, data)

class ClientID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 109)
		else:
			quickfix.StringField.__init__(self, 109, data)

class MinQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 110)
		else:
			quickfix.DoubleField.__init__(self, 110, data)

class MaxFloor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 111)
		else:
			quickfix.DoubleField.__init__(self, 111, data)

class ReportToExch(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 113)
		else:
			quickfix.BoolField.__init__(self, 113, data)

class LocateReqd(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 114)
		else:
			quickfix.BoolField.__init__(self, 114, data)

class QuoteID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 117)
		else:
			quickfix.StringField.__init__(self, 117, data)

class NetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 118)
		else:
			quickfix.DoubleField.__init__(self, 118, data)

class SettlCurrAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 119)
		else:
			quickfix.DoubleField.__init__(self, 119, data)

class SettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 120)
		else:
			quickfix.StringField.__init__(self, 120, data)

class ForexReq(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 121)
		else:
			quickfix.BoolField.__init__(self, 121, data)

class NoExecs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 124)
		else:
			quickfix.IntField.__init__(self, 124, data)

class CxlType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 125)
		else:
			quickfix.CharField.__init__(self, 125, data)

class ExpireTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 126)
		else:
			quickfix.UtcTimeStampField.__init__(self, 126, data)

class DKReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 127)
		else:
			quickfix.CharField.__init__(self, 127, data)

class IOINaturalFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 130)
		else:
			quickfix.BoolField.__init__(self, 130, data)

class QuoteReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 131)
		else:
			quickfix.StringField.__init__(self, 131, data)

class BidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 132)
		else:
			quickfix.DoubleField.__init__(self, 132, data)

class OfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 133)
		else:
			quickfix.DoubleField.__init__(self, 133, data)

class BidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 134)
		else:
			quickfix.DoubleField.__init__(self, 134, data)

class OfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 135)
		else:
			quickfix.DoubleField.__init__(self, 135, data)

class NoMiscFees(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 136)
		else:
			quickfix.IntField.__init__(self, 136, data)

class MiscFeeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 137)
		else:
			quickfix.DoubleField.__init__(self, 137, data)

class MiscFeeCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 138)
		else:
			quickfix.StringField.__init__(self, 138, data)

class MiscFeeType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 139)
		else:
			quickfix.StringField.__init__(self, 139, data)

class PrevClosePx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 140)
		else:
			quickfix.DoubleField.__init__(self, 140, data)

class NoRelatedSym(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 146)
		else:
			quickfix.IntField.__init__(self, 146, data)

class Subject(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 147)
		else:
			quickfix.StringField.__init__(self, 147, data)

class Headline(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 148)
		else:
			quickfix.StringField.__init__(self, 148, data)

class URLLink(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 149)
		else:
			quickfix.StringField.__init__(self, 149, data)

class ExecType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 150)
		else:
			quickfix.CharField.__init__(self, 150, data)

class LeavesQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 151)
		else:
			quickfix.DoubleField.__init__(self, 151, data)

class CashOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 152)
		else:
			quickfix.DoubleField.__init__(self, 152, data)

class AllocAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 153)
		else:
			quickfix.DoubleField.__init__(self, 153, data)

class AllocNetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 154)
		else:
			quickfix.DoubleField.__init__(self, 154, data)

class SettlCurrFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 155)
		else:
			quickfix.DoubleField.__init__(self, 155, data)

class SettlCurrFxRateCalc(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 156)
		else:
			quickfix.CharField.__init__(self, 156, data)

class NumDaysInterest(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 157)
		else:
			quickfix.IntField.__init__(self, 157, data)

class AccruedInterestRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 158)
		else:
			quickfix.DoubleField.__init__(self, 158, data)

class AccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 159)
		else:
			quickfix.DoubleField.__init__(self, 159, data)

class SettlInstMode(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 160)
		else:
			quickfix.CharField.__init__(self, 160, data)

class AllocText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 161)
		else:
			quickfix.StringField.__init__(self, 161, data)

class SettlInstID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 162)
		else:
			quickfix.StringField.__init__(self, 162, data)

class SettlInstTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 163)
		else:
			quickfix.CharField.__init__(self, 163, data)

class EmailThreadID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 164)
		else:
			quickfix.StringField.__init__(self, 164, data)

class SettlInstSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 165)
		else:
			quickfix.CharField.__init__(self, 165, data)

class SettlLocation(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 166)
		else:
			quickfix.StringField.__init__(self, 166, data)

class SecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 167)
		else:
			quickfix.StringField.__init__(self, 167, data)

class EffectiveTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 168)
		else:
			quickfix.UtcTimeStampField.__init__(self, 168, data)

class StandInstDbType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 169)
		else:
			quickfix.IntField.__init__(self, 169, data)

class StandInstDbName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 170)
		else:
			quickfix.StringField.__init__(self, 170, data)

class StandInstDbID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 171)
		else:
			quickfix.StringField.__init__(self, 171, data)

class SettlDeliveryType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 172)
		else:
			quickfix.IntField.__init__(self, 172, data)

class SettlDepositoryCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 173)
		else:
			quickfix.StringField.__init__(self, 173, data)

class SettlBrkrCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 174)
		else:
			quickfix.StringField.__init__(self, 174, data)

class SettlInstCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 175)
		else:
			quickfix.StringField.__init__(self, 175, data)

class SecuritySettlAgentName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 176)
		else:
			quickfix.StringField.__init__(self, 176, data)

class SecuritySettlAgentCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 177)
		else:
			quickfix.StringField.__init__(self, 177, data)

class SecuritySettlAgentAcctNum(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 178)
		else:
			quickfix.StringField.__init__(self, 178, data)

class SecuritySettlAgentAcctName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 179)
		else:
			quickfix.StringField.__init__(self, 179, data)

class SecuritySettlAgentContactName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 180)
		else:
			quickfix.StringField.__init__(self, 180, data)

class SecuritySettlAgentContactPhone(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 181)
		else:
			quickfix.StringField.__init__(self, 181, data)

class CashSettlAgentName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 182)
		else:
			quickfix.StringField.__init__(self, 182, data)

class CashSettlAgentCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 183)
		else:
			quickfix.StringField.__init__(self, 183, data)

class CashSettlAgentAcctNum(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 184)
		else:
			quickfix.StringField.__init__(self, 184, data)

class CashSettlAgentAcctName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 185)
		else:
			quickfix.StringField.__init__(self, 185, data)

class CashSettlAgentContactName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 186)
		else:
			quickfix.StringField.__init__(self, 186, data)

class CashSettlAgentContactPhone(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 187)
		else:
			quickfix.StringField.__init__(self, 187, data)

class BidSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 188)
		else:
			quickfix.DoubleField.__init__(self, 188, data)

class BidForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 189)
		else:
			quickfix.DoubleField.__init__(self, 189, data)

class OfferSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 190)
		else:
			quickfix.DoubleField.__init__(self, 190, data)

class OfferForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 191)
		else:
			quickfix.DoubleField.__init__(self, 191, data)

class OrderQty2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 192)
		else:
			quickfix.DoubleField.__init__(self, 192, data)

class FutSettDate2(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 193)
		else:
			quickfix.StringField.__init__(self, 193, data)

class LastSpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 194)
		else:
			quickfix.DoubleField.__init__(self, 194, data)

class LastForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 195)
		else:
			quickfix.DoubleField.__init__(self, 195, data)

class AllocLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 196)
		else:
			quickfix.StringField.__init__(self, 196, data)

class AllocLinkType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 197)
		else:
			quickfix.IntField.__init__(self, 197, data)

class SecondaryOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 198)
		else:
			quickfix.StringField.__init__(self, 198, data)

class NoIOIQualifiers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 199)
		else:
			quickfix.IntField.__init__(self, 199, data)

class MaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 200)
		else:
			quickfix.StringField.__init__(self, 200, data)

class PutOrCall(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 201)
		else:
			quickfix.IntField.__init__(self, 201, data)

class StrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 202)
		else:
			quickfix.DoubleField.__init__(self, 202, data)

class CoveredOrUncovered(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 203)
		else:
			quickfix.IntField.__init__(self, 203, data)

class CustomerOrFirm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 204)
		else:
			quickfix.IntField.__init__(self, 204, data)

class MaturityDay(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 205)
		else:
			quickfix.StringField.__init__(self, 205, data)

class OptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 206)
		else:
			quickfix.CharField.__init__(self, 206, data)

class SecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 207)
		else:
			quickfix.StringField.__init__(self, 207, data)

class NotifyBrokerOfCredit(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 208)
		else:
			quickfix.BoolField.__init__(self, 208, data)

class AllocHandlInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 209)
		else:
			quickfix.IntField.__init__(self, 209, data)

class MaxShow(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 210)
		else:
			quickfix.DoubleField.__init__(self, 210, data)

class PegDifference(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 211)
		else:
			quickfix.DoubleField.__init__(self, 211, data)

class SendingDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 51)
		else:
			quickfix.StringField.__init__(self, 51, data)

class TotNoOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 68)
		else:
			quickfix.IntField.__init__(self, 68, data)

class SettlInstRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 214)
		else:
			quickfix.StringField.__init__(self, 214, data)

class NoRoutingIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 215)
		else:
			quickfix.IntField.__init__(self, 215, data)

class RoutingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 216)
		else:
			quickfix.IntField.__init__(self, 216, data)

class RoutingID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 217)
		else:
			quickfix.StringField.__init__(self, 217, data)

class SpreadToBenchmark(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 218)
		else:
			quickfix.DoubleField.__init__(self, 218, data)

class Benchmark(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 219)
		else:
			quickfix.CharField.__init__(self, 219, data)

class CouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 223)
		else:
			quickfix.DoubleField.__init__(self, 223, data)

class ContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 231)
		else:
			quickfix.DoubleField.__init__(self, 231, data)

class MDReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 262)
		else:
			quickfix.StringField.__init__(self, 262, data)

class SubscriptionRequestType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 263)
		else:
			quickfix.CharField.__init__(self, 263, data)

class MarketDepth(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 264)
		else:
			quickfix.IntField.__init__(self, 264, data)

class MDUpdateType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 265)
		else:
			quickfix.IntField.__init__(self, 265, data)

class AggregatedBook(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 266)
		else:
			quickfix.BoolField.__init__(self, 266, data)

class NoMDEntryTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 267)
		else:
			quickfix.IntField.__init__(self, 267, data)

class NoMDEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 268)
		else:
			quickfix.IntField.__init__(self, 268, data)

class MDEntryType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 269)
		else:
			quickfix.CharField.__init__(self, 269, data)

class MDEntryPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 270)
		else:
			quickfix.DoubleField.__init__(self, 270, data)

class MDEntrySize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 271)
		else:
			quickfix.DoubleField.__init__(self, 271, data)

class MDEntryDate(quickfix.UtcDateField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcDateField.__init__(self, 272)
		else:
			quickfix.UtcDateField.__init__(self, 272, data)

class MDEntryTime(quickfix.UtcTimeOnlyField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeOnlyField.__init__(self, 273)
		else:
			quickfix.UtcTimeOnlyField.__init__(self, 273, data)

class TickDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 274)
		else:
			quickfix.CharField.__init__(self, 274, data)

class MDMkt(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 275)
		else:
			quickfix.StringField.__init__(self, 275, data)

class QuoteCondition(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 276)
		else:
			quickfix.StringField.__init__(self, 276, data)

class TradeCondition(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 277)
		else:
			quickfix.StringField.__init__(self, 277, data)

class MDEntryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 278)
		else:
			quickfix.StringField.__init__(self, 278, data)

class MDUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 279)
		else:
			quickfix.CharField.__init__(self, 279, data)

class MDEntryRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 280)
		else:
			quickfix.StringField.__init__(self, 280, data)

class MDReqRejReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 281)
		else:
			quickfix.CharField.__init__(self, 281, data)

class MDEntryOriginator(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 282)
		else:
			quickfix.StringField.__init__(self, 282, data)

class LocationID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 283)
		else:
			quickfix.StringField.__init__(self, 283, data)

class DeskID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 284)
		else:
			quickfix.StringField.__init__(self, 284, data)

class DeleteReason(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 285)
		else:
			quickfix.CharField.__init__(self, 285, data)

class OpenCloseSettleFlag(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 286)
		else:
			quickfix.StringField.__init__(self, 286, data)

class SellerDays(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 287)
		else:
			quickfix.IntField.__init__(self, 287, data)

class MDEntryBuyer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 288)
		else:
			quickfix.StringField.__init__(self, 288, data)

class MDEntrySeller(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 289)
		else:
			quickfix.StringField.__init__(self, 289, data)

class MDEntryPositionNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 290)
		else:
			quickfix.IntField.__init__(self, 290, data)

class FinancialStatus(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 291)
		else:
			quickfix.StringField.__init__(self, 291, data)

class CorporateAction(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 292)
		else:
			quickfix.StringField.__init__(self, 292, data)

class DefBidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 293)
		else:
			quickfix.DoubleField.__init__(self, 293, data)

class DefOfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 294)
		else:
			quickfix.DoubleField.__init__(self, 294, data)

class NoQuoteEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 295)
		else:
			quickfix.IntField.__init__(self, 295, data)

class NoQuoteSets(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 296)
		else:
			quickfix.IntField.__init__(self, 296, data)

class QuoteAckStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 297)
		else:
			quickfix.IntField.__init__(self, 297, data)

class QuoteCancelType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 298)
		else:
			quickfix.IntField.__init__(self, 298, data)

class QuoteEntryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 299)
		else:
			quickfix.StringField.__init__(self, 299, data)

class QuoteRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 300)
		else:
			quickfix.IntField.__init__(self, 300, data)

class QuoteResponseLevel(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 301)
		else:
			quickfix.IntField.__init__(self, 301, data)

class QuoteSetID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 302)
		else:
			quickfix.StringField.__init__(self, 302, data)

class QuoteRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 303)
		else:
			quickfix.IntField.__init__(self, 303, data)

class TotQuoteEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 304)
		else:
			quickfix.IntField.__init__(self, 304, data)

class UnderlyingIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 305)
		else:
			quickfix.StringField.__init__(self, 305, data)

class UnderlyingIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 306)
		else:
			quickfix.StringField.__init__(self, 306, data)

class UnderlyingSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 307)
		else:
			quickfix.StringField.__init__(self, 307, data)

class UnderlyingSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 308)
		else:
			quickfix.StringField.__init__(self, 308, data)

class UnderlyingSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 309)
		else:
			quickfix.StringField.__init__(self, 309, data)

class UnderlyingSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 310)
		else:
			quickfix.StringField.__init__(self, 310, data)

class UnderlyingSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 311)
		else:
			quickfix.StringField.__init__(self, 311, data)

class UnderlyingSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 312)
		else:
			quickfix.StringField.__init__(self, 312, data)

class UnderlyingMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 313)
		else:
			quickfix.StringField.__init__(self, 313, data)

class UnderlyingMaturityDay(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 314)
		else:
			quickfix.StringField.__init__(self, 314, data)

class UnderlyingPutOrCall(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 315)
		else:
			quickfix.IntField.__init__(self, 315, data)

class UnderlyingStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 316)
		else:
			quickfix.DoubleField.__init__(self, 316, data)

class UnderlyingOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 317)
		else:
			quickfix.CharField.__init__(self, 317, data)

class UnderlyingCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 318)
		else:
			quickfix.StringField.__init__(self, 318, data)

class RatioQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 319)
		else:
			quickfix.DoubleField.__init__(self, 319, data)

class SecurityReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 320)
		else:
			quickfix.StringField.__init__(self, 320, data)

class SecurityRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 321)
		else:
			quickfix.IntField.__init__(self, 321, data)

class SecurityResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 322)
		else:
			quickfix.StringField.__init__(self, 322, data)

class SecurityResponseType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 323)
		else:
			quickfix.IntField.__init__(self, 323, data)

class SecurityStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 324)
		else:
			quickfix.StringField.__init__(self, 324, data)

class UnsolicitedIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 325)
		else:
			quickfix.BoolField.__init__(self, 325, data)

class SecurityTradingStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 326)
		else:
			quickfix.IntField.__init__(self, 326, data)

class HaltReasonChar(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 327)
		else:
			quickfix.CharField.__init__(self, 327, data)

class InViewOfCommon(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 328)
		else:
			quickfix.BoolField.__init__(self, 328, data)

class DueToRelated(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 329)
		else:
			quickfix.BoolField.__init__(self, 329, data)

class BuyVolume(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 330)
		else:
			quickfix.DoubleField.__init__(self, 330, data)

class SellVolume(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 331)
		else:
			quickfix.DoubleField.__init__(self, 331, data)

class HighPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 332)
		else:
			quickfix.DoubleField.__init__(self, 332, data)

class LowPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 333)
		else:
			quickfix.DoubleField.__init__(self, 333, data)

class Adjustment(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 334)
		else:
			quickfix.IntField.__init__(self, 334, data)

class TradSesReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 335)
		else:
			quickfix.StringField.__init__(self, 335, data)

class TradingSessionID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 336)
		else:
			quickfix.StringField.__init__(self, 336, data)

class ContraTrader(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 337)
		else:
			quickfix.StringField.__init__(self, 337, data)

class TradSesMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 338)
		else:
			quickfix.IntField.__init__(self, 338, data)

class TradSesMode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 339)
		else:
			quickfix.IntField.__init__(self, 339, data)

class TradSesStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 340)
		else:
			quickfix.IntField.__init__(self, 340, data)

class TradSesStartTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 341)
		else:
			quickfix.UtcTimeStampField.__init__(self, 341, data)

class TradSesOpenTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 342)
		else:
			quickfix.UtcTimeStampField.__init__(self, 342, data)

class TradSesPreCloseTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 343)
		else:
			quickfix.UtcTimeStampField.__init__(self, 343, data)

class TradSesCloseTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 344)
		else:
			quickfix.UtcTimeStampField.__init__(self, 344, data)

class TradSesEndTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 345)
		else:
			quickfix.UtcTimeStampField.__init__(self, 345, data)

class NumberOfOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 346)
		else:
			quickfix.IntField.__init__(self, 346, data)

class EncodedIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 348)
		else:
			quickfix.IntField.__init__(self, 348, data)

class EncodedIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 349)
		else:
			quickfix.StringField.__init__(self, 349, data)

class EncodedSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 350)
		else:
			quickfix.IntField.__init__(self, 350, data)

class EncodedSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 351)
		else:
			quickfix.StringField.__init__(self, 351, data)

class EncodedListExecInstLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 352)
		else:
			quickfix.IntField.__init__(self, 352, data)

class EncodedListExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 353)
		else:
			quickfix.StringField.__init__(self, 353, data)

class EncodedSubjectLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 356)
		else:
			quickfix.IntField.__init__(self, 356, data)

class EncodedSubject(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 357)
		else:
			quickfix.StringField.__init__(self, 357, data)

class EncodedHeadlineLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 358)
		else:
			quickfix.IntField.__init__(self, 358, data)

class EncodedHeadline(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 359)
		else:
			quickfix.StringField.__init__(self, 359, data)

class EncodedAllocTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 360)
		else:
			quickfix.IntField.__init__(self, 360, data)

class EncodedAllocText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 361)
		else:
			quickfix.StringField.__init__(self, 361, data)

class EncodedUnderlyingIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 362)
		else:
			quickfix.IntField.__init__(self, 362, data)

class EncodedUnderlyingIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 363)
		else:
			quickfix.StringField.__init__(self, 363, data)

class EncodedUnderlyingSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 364)
		else:
			quickfix.IntField.__init__(self, 364, data)

class EncodedUnderlyingSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 365)
		else:
			quickfix.StringField.__init__(self, 365, data)

class AllocPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 366)
		else:
			quickfix.DoubleField.__init__(self, 366, data)

class QuoteSetValidUntilTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 367)
		else:
			quickfix.UtcTimeStampField.__init__(self, 367, data)

class QuoteEntryRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 368)
		else:
			quickfix.IntField.__init__(self, 368, data)

class OnBehalfOfSendingTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 370)
		else:
			quickfix.UtcTimeStampField.__init__(self, 370, data)

class BidRequestTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 374)
		else:
			quickfix.CharField.__init__(self, 374, data)

class ContraBroker(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 375)
		else:
			quickfix.StringField.__init__(self, 375, data)

class ComplianceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 376)
		else:
			quickfix.StringField.__init__(self, 376, data)

class SolicitedFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 377)
		else:
			quickfix.BoolField.__init__(self, 377, data)

class ExecRestatementReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 378)
		else:
			quickfix.IntField.__init__(self, 378, data)

class BusinessRejectRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 379)
		else:
			quickfix.StringField.__init__(self, 379, data)

class BusinessRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 380)
		else:
			quickfix.IntField.__init__(self, 380, data)

class GrossTradeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 381)
		else:
			quickfix.DoubleField.__init__(self, 381, data)

class NoContraBrokers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 382)
		else:
			quickfix.IntField.__init__(self, 382, data)

class NoTradingSessions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 386)
		else:
			quickfix.IntField.__init__(self, 386, data)

class TotalVolumeTraded(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 387)
		else:
			quickfix.DoubleField.__init__(self, 387, data)

class DiscretionInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 388)
		else:
			quickfix.CharField.__init__(self, 388, data)

class DiscretionOffset(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 389)
		else:
			quickfix.DoubleField.__init__(self, 389, data)

class BidID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 390)
		else:
			quickfix.StringField.__init__(self, 390, data)

class ClientBidID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 391)
		else:
			quickfix.StringField.__init__(self, 391, data)

class ListName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 392)
		else:
			quickfix.StringField.__init__(self, 392, data)

class TotalNumSecurities(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 393)
		else:
			quickfix.IntField.__init__(self, 393, data)

class BidType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 394)
		else:
			quickfix.IntField.__init__(self, 394, data)

class NumTickets(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 395)
		else:
			quickfix.IntField.__init__(self, 395, data)

class SideValue1(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 396)
		else:
			quickfix.DoubleField.__init__(self, 396, data)

class SideValue2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 397)
		else:
			quickfix.DoubleField.__init__(self, 397, data)

class NoBidDescriptors(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 398)
		else:
			quickfix.IntField.__init__(self, 398, data)

class BidDescriptorType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 399)
		else:
			quickfix.IntField.__init__(self, 399, data)

class BidDescriptor(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 400)
		else:
			quickfix.StringField.__init__(self, 400, data)

class SideValueInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 401)
		else:
			quickfix.IntField.__init__(self, 401, data)

class LiquidityPctLow(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 402)
		else:
			quickfix.DoubleField.__init__(self, 402, data)

class LiquidityPctHigh(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 403)
		else:
			quickfix.DoubleField.__init__(self, 403, data)

class LiquidityValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 404)
		else:
			quickfix.DoubleField.__init__(self, 404, data)

class EFPTrackingError(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 405)
		else:
			quickfix.DoubleField.__init__(self, 405, data)

class FairValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 406)
		else:
			quickfix.DoubleField.__init__(self, 406, data)

class OutsideIndexPct(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 407)
		else:
			quickfix.DoubleField.__init__(self, 407, data)

class ValueOfFutures(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 408)
		else:
			quickfix.DoubleField.__init__(self, 408, data)

class LiquidityIndType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 409)
		else:
			quickfix.IntField.__init__(self, 409, data)

class WtAverageLiquidity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 410)
		else:
			quickfix.DoubleField.__init__(self, 410, data)

class ExchangeForPhysical(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 411)
		else:
			quickfix.BoolField.__init__(self, 411, data)

class OutMainCntryUIndex(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 412)
		else:
			quickfix.DoubleField.__init__(self, 412, data)

class CrossPercent(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 413)
		else:
			quickfix.DoubleField.__init__(self, 413, data)

class ProgRptReqs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 414)
		else:
			quickfix.IntField.__init__(self, 414, data)

class ProgPeriodInterval(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 415)
		else:
			quickfix.IntField.__init__(self, 415, data)

class IncTaxInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 416)
		else:
			quickfix.IntField.__init__(self, 416, data)

class NumBidders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 417)
		else:
			quickfix.IntField.__init__(self, 417, data)

class TradeType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 418)
		else:
			quickfix.CharField.__init__(self, 418, data)

class BasisPxType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 419)
		else:
			quickfix.CharField.__init__(self, 419, data)

class NoBidComponents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 420)
		else:
			quickfix.IntField.__init__(self, 420, data)

class Country(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 421)
		else:
			quickfix.StringField.__init__(self, 421, data)

class TotNoStrikes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 422)
		else:
			quickfix.IntField.__init__(self, 422, data)

class PriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 423)
		else:
			quickfix.IntField.__init__(self, 423, data)

class DayOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 424)
		else:
			quickfix.DoubleField.__init__(self, 424, data)

class DayCumQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 425)
		else:
			quickfix.DoubleField.__init__(self, 425, data)

class DayAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 426)
		else:
			quickfix.DoubleField.__init__(self, 426, data)

class GTBookingInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 427)
		else:
			quickfix.IntField.__init__(self, 427, data)

class NoStrikes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 428)
		else:
			quickfix.IntField.__init__(self, 428, data)

class ListStatusType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 429)
		else:
			quickfix.IntField.__init__(self, 429, data)

class NetGrossInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 430)
		else:
			quickfix.IntField.__init__(self, 430, data)

class ListOrderStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 431)
		else:
			quickfix.IntField.__init__(self, 431, data)

class ExpireDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 432)
		else:
			quickfix.StringField.__init__(self, 432, data)

class ListExecInstType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 433)
		else:
			quickfix.CharField.__init__(self, 433, data)

class CxlRejResponseTo(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 434)
		else:
			quickfix.CharField.__init__(self, 434, data)

class UnderlyingCouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 435)
		else:
			quickfix.DoubleField.__init__(self, 435, data)

class UnderlyingContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 436)
		else:
			quickfix.DoubleField.__init__(self, 436, data)

class ContraTradeQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 437)
		else:
			quickfix.DoubleField.__init__(self, 437, data)

class ContraTradeTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 438)
		else:
			quickfix.UtcTimeStampField.__init__(self, 438, data)

class ClearingFirm(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 439)
		else:
			quickfix.StringField.__init__(self, 439, data)

class ClearingAccount(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 440)
		else:
			quickfix.StringField.__init__(self, 440, data)

class LiquidityNumSecurities(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 441)
		else:
			quickfix.IntField.__init__(self, 441, data)

class MultiLegReportingType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 442)
		else:
			quickfix.CharField.__init__(self, 442, data)

class StrikeTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 443)
		else:
			quickfix.UtcTimeStampField.__init__(self, 443, data)

class ListStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 444)
		else:
			quickfix.StringField.__init__(self, 444, data)

class EncodedListStatusTextLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 445)
		else:
			quickfix.IntField.__init__(self, 445, data)

class EncodedListStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 446)
		else:
			quickfix.StringField.__init__(self, 446, data)

class SecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 22)
		else:
			quickfix.StringField.__init__(self, 22, data)

class IOIQty(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 27)
		else:
			quickfix.StringField.__init__(self, 27, data)

class LastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 32)
		else:
			quickfix.DoubleField.__init__(self, 32, data)

class Quantity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 53)
		else:
			quickfix.DoubleField.__init__(self, 53, data)

class PositionEffect(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 77)
		else:
			quickfix.CharField.__init__(self, 77, data)

class AllocQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 80)
		else:
			quickfix.DoubleField.__init__(self, 80, data)

class Spread(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 218)
		else:
			quickfix.DoubleField.__init__(self, 218, data)

class BenchmarkCurveCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 220)
		else:
			quickfix.StringField.__init__(self, 220, data)

class BenchmarkCurveName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 221)
		else:
			quickfix.StringField.__init__(self, 221, data)

class BenchmarkCurvePoint(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 222)
		else:
			quickfix.StringField.__init__(self, 222, data)

class CouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 224)
		else:
			quickfix.StringField.__init__(self, 224, data)

class IssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 225)
		else:
			quickfix.StringField.__init__(self, 225, data)

class RepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 226)
		else:
			quickfix.IntField.__init__(self, 226, data)

class RepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 227)
		else:
			quickfix.DoubleField.__init__(self, 227, data)

class Factor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 228)
		else:
			quickfix.DoubleField.__init__(self, 228, data)

class TradeOriginationDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 229)
		else:
			quickfix.StringField.__init__(self, 229, data)

class ExDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 230)
		else:
			quickfix.StringField.__init__(self, 230, data)

class NoStipulations(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 232)
		else:
			quickfix.IntField.__init__(self, 232, data)

class StipulationType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 233)
		else:
			quickfix.StringField.__init__(self, 233, data)

class StipulationValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 234)
		else:
			quickfix.StringField.__init__(self, 234, data)

class YieldType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 235)
		else:
			quickfix.StringField.__init__(self, 235, data)

class Yield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 236)
		else:
			quickfix.DoubleField.__init__(self, 236, data)

class TotalTakedown(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 237)
		else:
			quickfix.DoubleField.__init__(self, 237, data)

class Concession(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 238)
		else:
			quickfix.DoubleField.__init__(self, 238, data)

class RepoCollateralSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 239)
		else:
			quickfix.StringField.__init__(self, 239, data)

class RedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 240)
		else:
			quickfix.StringField.__init__(self, 240, data)

class UnderlyingCouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 241)
		else:
			quickfix.StringField.__init__(self, 241, data)

class UnderlyingIssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 242)
		else:
			quickfix.StringField.__init__(self, 242, data)

class UnderlyingRepoCollateralSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 243)
		else:
			quickfix.StringField.__init__(self, 243, data)

class UnderlyingRepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 244)
		else:
			quickfix.IntField.__init__(self, 244, data)

class UnderlyingRepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 245)
		else:
			quickfix.DoubleField.__init__(self, 245, data)

class UnderlyingFactor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 246)
		else:
			quickfix.DoubleField.__init__(self, 246, data)

class UnderlyingRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 247)
		else:
			quickfix.StringField.__init__(self, 247, data)

class LegCouponPaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 248)
		else:
			quickfix.StringField.__init__(self, 248, data)

class LegIssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 249)
		else:
			quickfix.StringField.__init__(self, 249, data)

class LegRepoCollateralSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 250)
		else:
			quickfix.StringField.__init__(self, 250, data)

class LegRepurchaseTerm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 251)
		else:
			quickfix.IntField.__init__(self, 251, data)

class LegRepurchaseRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 252)
		else:
			quickfix.DoubleField.__init__(self, 252, data)

class LegFactor(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 253)
		else:
			quickfix.DoubleField.__init__(self, 253, data)

class LegRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 254)
		else:
			quickfix.StringField.__init__(self, 254, data)

class CreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 255)
		else:
			quickfix.StringField.__init__(self, 255, data)

class UnderlyingCreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 256)
		else:
			quickfix.StringField.__init__(self, 256, data)

class LegCreditRating(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 257)
		else:
			quickfix.StringField.__init__(self, 257, data)

class TradedFlatSwitch(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 258)
		else:
			quickfix.BoolField.__init__(self, 258, data)

class BasisFeatureDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 259)
		else:
			quickfix.StringField.__init__(self, 259, data)

class BasisFeaturePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 260)
		else:
			quickfix.DoubleField.__init__(self, 260, data)

class QuoteStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 297)
		else:
			quickfix.IntField.__init__(self, 297, data)

class UnderlyingSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 305)
		else:
			quickfix.StringField.__init__(self, 305, data)

class PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 447)
		else:
			quickfix.CharField.__init__(self, 447, data)

class PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 448)
		else:
			quickfix.StringField.__init__(self, 448, data)

class TotalVolumeTradedDate(quickfix.UtcDateField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcDateField.__init__(self, 449)
		else:
			quickfix.UtcDateField.__init__(self, 449, data)

class TotalVolumeTradedTime(quickfix.UtcTimeOnlyField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeOnlyField.__init__(self, 450)
		else:
			quickfix.UtcTimeOnlyField.__init__(self, 450, data)

class NetChgPrevDay(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 451)
		else:
			quickfix.DoubleField.__init__(self, 451, data)

class PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 452)
		else:
			quickfix.IntField.__init__(self, 452, data)

class NoPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 453)
		else:
			quickfix.IntField.__init__(self, 453, data)

class NoSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 454)
		else:
			quickfix.IntField.__init__(self, 454, data)

class SecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 455)
		else:
			quickfix.StringField.__init__(self, 455, data)

class SecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 456)
		else:
			quickfix.StringField.__init__(self, 456, data)

class NoUnderlyingSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 457)
		else:
			quickfix.IntField.__init__(self, 457, data)

class UnderlyingSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 458)
		else:
			quickfix.StringField.__init__(self, 458, data)

class UnderlyingSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 459)
		else:
			quickfix.StringField.__init__(self, 459, data)

class Product(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 460)
		else:
			quickfix.IntField.__init__(self, 460, data)

class CFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 461)
		else:
			quickfix.StringField.__init__(self, 461, data)

class UnderlyingProduct(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 462)
		else:
			quickfix.IntField.__init__(self, 462, data)

class UnderlyingCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 463)
		else:
			quickfix.StringField.__init__(self, 463, data)

class QuantityType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 465)
		else:
			quickfix.IntField.__init__(self, 465, data)

class BookingRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 466)
		else:
			quickfix.StringField.__init__(self, 466, data)

class IndividualAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 467)
		else:
			quickfix.StringField.__init__(self, 467, data)

class RoundingDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 468)
		else:
			quickfix.CharField.__init__(self, 468, data)

class RoundingModulus(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 469)
		else:
			quickfix.DoubleField.__init__(self, 469, data)

class CountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 470)
		else:
			quickfix.StringField.__init__(self, 470, data)

class StateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 471)
		else:
			quickfix.StringField.__init__(self, 471, data)

class LocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 472)
		else:
			quickfix.StringField.__init__(self, 472, data)

class NoRegistDtls(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 473)
		else:
			quickfix.IntField.__init__(self, 473, data)

class MailingDtls(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 474)
		else:
			quickfix.StringField.__init__(self, 474, data)

class InvestorCountryOfResidence(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 475)
		else:
			quickfix.StringField.__init__(self, 475, data)

class PaymentRef(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 476)
		else:
			quickfix.StringField.__init__(self, 476, data)

class DistribPaymentMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 477)
		else:
			quickfix.IntField.__init__(self, 477, data)

class CashDistribCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 478)
		else:
			quickfix.StringField.__init__(self, 478, data)

class CommCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 479)
		else:
			quickfix.StringField.__init__(self, 479, data)

class CancellationRights(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 480)
		else:
			quickfix.CharField.__init__(self, 480, data)

class MoneyLaunderingStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 481)
		else:
			quickfix.CharField.__init__(self, 481, data)

class MailingInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 482)
		else:
			quickfix.StringField.__init__(self, 482, data)

class TransBkdTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 483)
		else:
			quickfix.UtcTimeStampField.__init__(self, 483, data)

class ExecPriceType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 484)
		else:
			quickfix.CharField.__init__(self, 484, data)

class ExecPriceAdjustment(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 485)
		else:
			quickfix.DoubleField.__init__(self, 485, data)

class DateOfBirth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 486)
		else:
			quickfix.StringField.__init__(self, 486, data)

class TradeReportTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 487)
		else:
			quickfix.IntField.__init__(self, 487, data)

class CardHolderName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 488)
		else:
			quickfix.StringField.__init__(self, 488, data)

class CardNumber(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 489)
		else:
			quickfix.StringField.__init__(self, 489, data)

class CardExpDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 490)
		else:
			quickfix.StringField.__init__(self, 490, data)

class CardIssNo(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 491)
		else:
			quickfix.StringField.__init__(self, 491, data)

class PaymentMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 492)
		else:
			quickfix.IntField.__init__(self, 492, data)

class RegistAcctType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 493)
		else:
			quickfix.StringField.__init__(self, 493, data)

class Designation(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 494)
		else:
			quickfix.StringField.__init__(self, 494, data)

class TaxAdvantageType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 495)
		else:
			quickfix.IntField.__init__(self, 495, data)

class RegistRejReasonText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 496)
		else:
			quickfix.StringField.__init__(self, 496, data)

class FundRenewWaiv(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 497)
		else:
			quickfix.CharField.__init__(self, 497, data)

class CashDistribAgentName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 498)
		else:
			quickfix.StringField.__init__(self, 498, data)

class CashDistribAgentCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 499)
		else:
			quickfix.StringField.__init__(self, 499, data)

class CashDistribAgentAcctNumber(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 500)
		else:
			quickfix.StringField.__init__(self, 500, data)

class CashDistribPayRef(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 501)
		else:
			quickfix.StringField.__init__(self, 501, data)

class CardStartDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 503)
		else:
			quickfix.StringField.__init__(self, 503, data)

class PaymentDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 504)
		else:
			quickfix.StringField.__init__(self, 504, data)

class PaymentRemitterID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 505)
		else:
			quickfix.StringField.__init__(self, 505, data)

class RegistStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 506)
		else:
			quickfix.CharField.__init__(self, 506, data)

class RegistRejReasonCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 507)
		else:
			quickfix.IntField.__init__(self, 507, data)

class RegistRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 508)
		else:
			quickfix.StringField.__init__(self, 508, data)

class RegistDetls(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 509)
		else:
			quickfix.StringField.__init__(self, 509, data)

class NoDistribInsts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 510)
		else:
			quickfix.IntField.__init__(self, 510, data)

class RegistEmail(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 511)
		else:
			quickfix.StringField.__init__(self, 511, data)

class DistribPercentage(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 512)
		else:
			quickfix.DoubleField.__init__(self, 512, data)

class RegistID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 513)
		else:
			quickfix.StringField.__init__(self, 513, data)

class RegistTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 514)
		else:
			quickfix.CharField.__init__(self, 514, data)

class ExecValuationPoint(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 515)
		else:
			quickfix.UtcTimeStampField.__init__(self, 515, data)

class OrderPercent(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 516)
		else:
			quickfix.DoubleField.__init__(self, 516, data)

class OwnershipType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 517)
		else:
			quickfix.CharField.__init__(self, 517, data)

class NoContAmts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 518)
		else:
			quickfix.IntField.__init__(self, 518, data)

class ContAmtType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 519)
		else:
			quickfix.IntField.__init__(self, 519, data)

class ContAmtValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 520)
		else:
			quickfix.DoubleField.__init__(self, 520, data)

class ContAmtCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 521)
		else:
			quickfix.StringField.__init__(self, 521, data)

class OwnerType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 522)
		else:
			quickfix.IntField.__init__(self, 522, data)

class PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 523)
		else:
			quickfix.StringField.__init__(self, 523, data)

class NestedPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 524)
		else:
			quickfix.StringField.__init__(self, 524, data)

class NestedPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 525)
		else:
			quickfix.CharField.__init__(self, 525, data)

class SecondaryClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 526)
		else:
			quickfix.StringField.__init__(self, 526, data)

class SecondaryExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 527)
		else:
			quickfix.StringField.__init__(self, 527, data)

class OrderCapacity(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 528)
		else:
			quickfix.CharField.__init__(self, 528, data)

class OrderRestrictions(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 529)
		else:
			quickfix.StringField.__init__(self, 529, data)

class MassCancelRequestType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 530)
		else:
			quickfix.CharField.__init__(self, 530, data)

class MassCancelResponse(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 531)
		else:
			quickfix.CharField.__init__(self, 531, data)

class MassCancelRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 532)
		else:
			quickfix.IntField.__init__(self, 532, data)

class TotalAffectedOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 533)
		else:
			quickfix.IntField.__init__(self, 533, data)

class NoAffectedOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 534)
		else:
			quickfix.IntField.__init__(self, 534, data)

class AffectedOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 535)
		else:
			quickfix.StringField.__init__(self, 535, data)

class AffectedSecondaryOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 536)
		else:
			quickfix.StringField.__init__(self, 536, data)

class QuoteType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 537)
		else:
			quickfix.IntField.__init__(self, 537, data)

class NestedPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 538)
		else:
			quickfix.IntField.__init__(self, 538, data)

class NoNestedPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 539)
		else:
			quickfix.IntField.__init__(self, 539, data)

class TotalAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 540)
		else:
			quickfix.DoubleField.__init__(self, 540, data)

class MaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 541)
		else:
			quickfix.StringField.__init__(self, 541, data)

class UnderlyingMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 542)
		else:
			quickfix.StringField.__init__(self, 542, data)

class InstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 543)
		else:
			quickfix.StringField.__init__(self, 543, data)

class CashMargin(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 544)
		else:
			quickfix.CharField.__init__(self, 544, data)

class NestedPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 545)
		else:
			quickfix.StringField.__init__(self, 545, data)

class Scope(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 546)
		else:
			quickfix.StringField.__init__(self, 546, data)

class MDImplicitDelete(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 547)
		else:
			quickfix.BoolField.__init__(self, 547, data)

class CrossID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 548)
		else:
			quickfix.StringField.__init__(self, 548, data)

class CrossType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 549)
		else:
			quickfix.IntField.__init__(self, 549, data)

class CrossPrioritization(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 550)
		else:
			quickfix.IntField.__init__(self, 550, data)

class OrigCrossID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 551)
		else:
			quickfix.StringField.__init__(self, 551, data)

class NoSides(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 552)
		else:
			quickfix.IntField.__init__(self, 552, data)

class NoLegs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 555)
		else:
			quickfix.IntField.__init__(self, 555, data)

class LegCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 556)
		else:
			quickfix.StringField.__init__(self, 556, data)

class TotalNumSecurityTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 557)
		else:
			quickfix.IntField.__init__(self, 557, data)

class NoSecurityTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 558)
		else:
			quickfix.IntField.__init__(self, 558, data)

class SecurityListRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 559)
		else:
			quickfix.IntField.__init__(self, 559, data)

class SecurityRequestResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 560)
		else:
			quickfix.IntField.__init__(self, 560, data)

class RoundLot(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 561)
		else:
			quickfix.DoubleField.__init__(self, 561, data)

class MinTradeVol(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 562)
		else:
			quickfix.DoubleField.__init__(self, 562, data)

class MultiLegRptTypeReq(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 563)
		else:
			quickfix.IntField.__init__(self, 563, data)

class LegPositionEffect(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 564)
		else:
			quickfix.CharField.__init__(self, 564, data)

class LegCoveredOrUncovered(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 565)
		else:
			quickfix.IntField.__init__(self, 565, data)

class LegPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 566)
		else:
			quickfix.DoubleField.__init__(self, 566, data)

class TradSesStatusRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 567)
		else:
			quickfix.IntField.__init__(self, 567, data)

class TradeRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 568)
		else:
			quickfix.StringField.__init__(self, 568, data)

class TradeRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 569)
		else:
			quickfix.IntField.__init__(self, 569, data)

class PreviouslyReported(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 570)
		else:
			quickfix.BoolField.__init__(self, 570, data)

class TradeReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 571)
		else:
			quickfix.StringField.__init__(self, 571, data)

class TradeReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 572)
		else:
			quickfix.StringField.__init__(self, 572, data)

class MatchStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 573)
		else:
			quickfix.CharField.__init__(self, 573, data)

class MatchType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 574)
		else:
			quickfix.StringField.__init__(self, 574, data)

class OddLot(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 575)
		else:
			quickfix.BoolField.__init__(self, 575, data)

class NoClearingInstructions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 576)
		else:
			quickfix.IntField.__init__(self, 576, data)

class ClearingInstruction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 577)
		else:
			quickfix.IntField.__init__(self, 577, data)

class TradeInputSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 578)
		else:
			quickfix.StringField.__init__(self, 578, data)

class TradeInputDevice(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 579)
		else:
			quickfix.StringField.__init__(self, 579, data)

class NoDates(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 580)
		else:
			quickfix.IntField.__init__(self, 580, data)

class AccountType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 581)
		else:
			quickfix.IntField.__init__(self, 581, data)

class CustOrderCapacity(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 582)
		else:
			quickfix.IntField.__init__(self, 582, data)

class ClOrdLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 583)
		else:
			quickfix.StringField.__init__(self, 583, data)

class MassStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 584)
		else:
			quickfix.StringField.__init__(self, 584, data)

class MassStatusReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 585)
		else:
			quickfix.IntField.__init__(self, 585, data)

class OrigOrdModTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 586)
		else:
			quickfix.UtcTimeStampField.__init__(self, 586, data)

class LegSettlmntTyp(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 587)
		else:
			quickfix.CharField.__init__(self, 587, data)

class LegFutSettDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 588)
		else:
			quickfix.StringField.__init__(self, 588, data)

class DayBookingInst(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 589)
		else:
			quickfix.CharField.__init__(self, 589, data)

class BookingUnit(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 590)
		else:
			quickfix.CharField.__init__(self, 590, data)

class PreallocMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 591)
		else:
			quickfix.CharField.__init__(self, 591, data)

class UnderlyingCountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 592)
		else:
			quickfix.StringField.__init__(self, 592, data)

class UnderlyingStateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 593)
		else:
			quickfix.StringField.__init__(self, 593, data)

class UnderlyingLocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 594)
		else:
			quickfix.StringField.__init__(self, 594, data)

class UnderlyingInstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 595)
		else:
			quickfix.StringField.__init__(self, 595, data)

class LegCountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 596)
		else:
			quickfix.StringField.__init__(self, 596, data)

class LegStateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 597)
		else:
			quickfix.StringField.__init__(self, 597, data)

class LegLocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 598)
		else:
			quickfix.StringField.__init__(self, 598, data)

class LegInstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 599)
		else:
			quickfix.StringField.__init__(self, 599, data)

class LegSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 600)
		else:
			quickfix.StringField.__init__(self, 600, data)

class LegSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 601)
		else:
			quickfix.StringField.__init__(self, 601, data)

class LegSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 602)
		else:
			quickfix.StringField.__init__(self, 602, data)

class LegSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 603)
		else:
			quickfix.StringField.__init__(self, 603, data)

class NoLegSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 604)
		else:
			quickfix.IntField.__init__(self, 604, data)

class LegSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 605)
		else:
			quickfix.StringField.__init__(self, 605, data)

class LegSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 606)
		else:
			quickfix.StringField.__init__(self, 606, data)

class LegProduct(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 607)
		else:
			quickfix.IntField.__init__(self, 607, data)

class LegCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 608)
		else:
			quickfix.StringField.__init__(self, 608, data)

class LegSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 609)
		else:
			quickfix.StringField.__init__(self, 609, data)

class LegMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 610)
		else:
			quickfix.StringField.__init__(self, 610, data)

class LegMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 611)
		else:
			quickfix.StringField.__init__(self, 611, data)

class LegStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 612)
		else:
			quickfix.DoubleField.__init__(self, 612, data)

class LegOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 613)
		else:
			quickfix.CharField.__init__(self, 613, data)

class LegContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 614)
		else:
			quickfix.DoubleField.__init__(self, 614, data)

class LegCouponRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 615)
		else:
			quickfix.DoubleField.__init__(self, 615, data)

class LegSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 616)
		else:
			quickfix.StringField.__init__(self, 616, data)

class LegIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 617)
		else:
			quickfix.StringField.__init__(self, 617, data)

class EncodedLegIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 618)
		else:
			quickfix.IntField.__init__(self, 618, data)

class EncodedLegIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 619)
		else:
			quickfix.StringField.__init__(self, 619, data)

class LegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 620)
		else:
			quickfix.StringField.__init__(self, 620, data)

class EncodedLegSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 621)
		else:
			quickfix.IntField.__init__(self, 621, data)

class EncodedLegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 622)
		else:
			quickfix.StringField.__init__(self, 622, data)

class LegRatioQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 623)
		else:
			quickfix.DoubleField.__init__(self, 623, data)

class LegSide(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 624)
		else:
			quickfix.CharField.__init__(self, 624, data)

class TradingSessionSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 625)
		else:
			quickfix.StringField.__init__(self, 625, data)

class AllocType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 626)
		else:
			quickfix.IntField.__init__(self, 626, data)

class MidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 631)
		else:
			quickfix.DoubleField.__init__(self, 631, data)

class BidYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 632)
		else:
			quickfix.DoubleField.__init__(self, 632, data)

class MidYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 633)
		else:
			quickfix.DoubleField.__init__(self, 633, data)

class OfferYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 634)
		else:
			quickfix.DoubleField.__init__(self, 634, data)

class ClearingFeeIndicator(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 635)
		else:
			quickfix.StringField.__init__(self, 635, data)

class WorkingIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 636)
		else:
			quickfix.BoolField.__init__(self, 636, data)

class LegLastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 637)
		else:
			quickfix.DoubleField.__init__(self, 637, data)

class PriorityIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 638)
		else:
			quickfix.IntField.__init__(self, 638, data)

class PriceImprovement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 639)
		else:
			quickfix.DoubleField.__init__(self, 639, data)

class Price2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 640)
		else:
			quickfix.DoubleField.__init__(self, 640, data)

class LastForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 641)
		else:
			quickfix.DoubleField.__init__(self, 641, data)

class BidForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 642)
		else:
			quickfix.DoubleField.__init__(self, 642, data)

class OfferForwardPoints2(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 643)
		else:
			quickfix.DoubleField.__init__(self, 643, data)

class RFQReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 644)
		else:
			quickfix.StringField.__init__(self, 644, data)

class MktBidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 645)
		else:
			quickfix.DoubleField.__init__(self, 645, data)

class MktOfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 646)
		else:
			quickfix.DoubleField.__init__(self, 646, data)

class MinBidSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 647)
		else:
			quickfix.DoubleField.__init__(self, 647, data)

class MinOfferSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 648)
		else:
			quickfix.DoubleField.__init__(self, 648, data)

class QuoteStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 649)
		else:
			quickfix.StringField.__init__(self, 649, data)

class LegalConfirm(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 650)
		else:
			quickfix.BoolField.__init__(self, 650, data)

class UnderlyingLastPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 651)
		else:
			quickfix.DoubleField.__init__(self, 651, data)

class UnderlyingLastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 652)
		else:
			quickfix.DoubleField.__init__(self, 652, data)

class LegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 654)
		else:
			quickfix.StringField.__init__(self, 654, data)

class ContraLegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 655)
		else:
			quickfix.StringField.__init__(self, 655, data)

class SettlCurrBidFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 656)
		else:
			quickfix.DoubleField.__init__(self, 656, data)

class SettlCurrOfferFxRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 657)
		else:
			quickfix.DoubleField.__init__(self, 657, data)

class QuoteRequestRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 658)
		else:
			quickfix.IntField.__init__(self, 658, data)

class SideComplianceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 659)
		else:
			quickfix.StringField.__init__(self, 659, data)

class IOIID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 23)
		else:
			quickfix.StringField.__init__(self, 23, data)

class NoLinesOfText(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 33)
		else:
			quickfix.IntField.__init__(self, 33, data)

class SettlType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 63)
		else:
			quickfix.StringField.__init__(self, 63, data)

class SettlDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 64)
		else:
			quickfix.StringField.__init__(self, 64, data)

class AvgPxPrecision(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 74)
		else:
			quickfix.IntField.__init__(self, 74, data)

class SettlDate2(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 193)
		else:
			quickfix.StringField.__init__(self, 193, data)

class PegOffsetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 211)
		else:
			quickfix.DoubleField.__init__(self, 211, data)

class OpenCloseSettlFlag(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 286)
		else:
			quickfix.StringField.__init__(self, 286, data)

class TotNoQuoteEntries(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 304)
		else:
			quickfix.IntField.__init__(self, 304, data)

class DiscretionOffsetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 389)
		else:
			quickfix.DoubleField.__init__(self, 389, data)

class TotNoRelatedSym(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 393)
		else:
			quickfix.IntField.__init__(self, 393, data)

class BidTradeType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 418)
		else:
			quickfix.CharField.__init__(self, 418, data)

class CardIssNum(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 491)
		else:
			quickfix.StringField.__init__(self, 491, data)

class CashDistribAgentAcctName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 502)
		else:
			quickfix.StringField.__init__(self, 502, data)

class RegistDtls(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 509)
		else:
			quickfix.StringField.__init__(self, 509, data)

class TotNoSecurityTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 557)
		else:
			quickfix.IntField.__init__(self, 557, data)

class LegSettlType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 587)
		else:
			quickfix.CharField.__init__(self, 587, data)

class LegSettlDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 588)
		else:
			quickfix.StringField.__init__(self, 588, data)

class AcctIDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 660)
		else:
			quickfix.IntField.__init__(self, 660, data)

class AllocAcctIDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 661)
		else:
			quickfix.IntField.__init__(self, 661, data)

class BenchmarkPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 662)
		else:
			quickfix.DoubleField.__init__(self, 662, data)

class BenchmarkPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 663)
		else:
			quickfix.IntField.__init__(self, 663, data)

class ConfirmID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 664)
		else:
			quickfix.StringField.__init__(self, 664, data)

class ConfirmStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 665)
		else:
			quickfix.IntField.__init__(self, 665, data)

class ConfirmTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 666)
		else:
			quickfix.IntField.__init__(self, 666, data)

class ContractSettlMonth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 667)
		else:
			quickfix.StringField.__init__(self, 667, data)

class DeliveryForm(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 668)
		else:
			quickfix.IntField.__init__(self, 668, data)

class LastParPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 669)
		else:
			quickfix.DoubleField.__init__(self, 669, data)

class NoLegAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 670)
		else:
			quickfix.IntField.__init__(self, 670, data)

class LegAllocAccount(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 671)
		else:
			quickfix.StringField.__init__(self, 671, data)

class LegIndividualAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 672)
		else:
			quickfix.StringField.__init__(self, 672, data)

class LegAllocQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 673)
		else:
			quickfix.DoubleField.__init__(self, 673, data)

class LegAllocAcctIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 674)
		else:
			quickfix.StringField.__init__(self, 674, data)

class LegSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 675)
		else:
			quickfix.StringField.__init__(self, 675, data)

class LegBenchmarkCurveCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 676)
		else:
			quickfix.StringField.__init__(self, 676, data)

class LegBenchmarkCurveName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 677)
		else:
			quickfix.StringField.__init__(self, 677, data)

class LegBenchmarkCurvePoint(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 678)
		else:
			quickfix.StringField.__init__(self, 678, data)

class LegBenchmarkPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 679)
		else:
			quickfix.DoubleField.__init__(self, 679, data)

class LegBenchmarkPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 680)
		else:
			quickfix.IntField.__init__(self, 680, data)

class LegBidPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 681)
		else:
			quickfix.DoubleField.__init__(self, 681, data)

class LegIOIQty(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 682)
		else:
			quickfix.StringField.__init__(self, 682, data)

class NoLegStipulations(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 683)
		else:
			quickfix.IntField.__init__(self, 683, data)

class LegOfferPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 684)
		else:
			quickfix.DoubleField.__init__(self, 684, data)

class LegPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 686)
		else:
			quickfix.IntField.__init__(self, 686, data)

class LegQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 687)
		else:
			quickfix.DoubleField.__init__(self, 687, data)

class LegStipulationType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 688)
		else:
			quickfix.StringField.__init__(self, 688, data)

class LegStipulationValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 689)
		else:
			quickfix.StringField.__init__(self, 689, data)

class LegSwapType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 690)
		else:
			quickfix.IntField.__init__(self, 690, data)

class Pool(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 691)
		else:
			quickfix.StringField.__init__(self, 691, data)

class QuotePriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 692)
		else:
			quickfix.IntField.__init__(self, 692, data)

class QuoteRespID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 693)
		else:
			quickfix.StringField.__init__(self, 693, data)

class QuoteRespType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 694)
		else:
			quickfix.IntField.__init__(self, 694, data)

class QuoteQualifier(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 695)
		else:
			quickfix.CharField.__init__(self, 695, data)

class YieldRedemptionDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 696)
		else:
			quickfix.StringField.__init__(self, 696, data)

class YieldRedemptionPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 697)
		else:
			quickfix.DoubleField.__init__(self, 697, data)

class YieldRedemptionPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 698)
		else:
			quickfix.IntField.__init__(self, 698, data)

class BenchmarkSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 699)
		else:
			quickfix.StringField.__init__(self, 699, data)

class ReversalIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 700)
		else:
			quickfix.BoolField.__init__(self, 700, data)

class YieldCalcDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 701)
		else:
			quickfix.StringField.__init__(self, 701, data)

class NoPositions(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 702)
		else:
			quickfix.IntField.__init__(self, 702, data)

class PosType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 703)
		else:
			quickfix.StringField.__init__(self, 703, data)

class LongQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 704)
		else:
			quickfix.DoubleField.__init__(self, 704, data)

class ShortQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 705)
		else:
			quickfix.DoubleField.__init__(self, 705, data)

class PosQtyStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 706)
		else:
			quickfix.IntField.__init__(self, 706, data)

class PosAmtType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 707)
		else:
			quickfix.StringField.__init__(self, 707, data)

class PosAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 708)
		else:
			quickfix.DoubleField.__init__(self, 708, data)

class PosTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 709)
		else:
			quickfix.IntField.__init__(self, 709, data)

class PosReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 710)
		else:
			quickfix.StringField.__init__(self, 710, data)

class NoUnderlyings(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 711)
		else:
			quickfix.IntField.__init__(self, 711, data)

class PosMaintAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 712)
		else:
			quickfix.IntField.__init__(self, 712, data)

class OrigPosReqRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 713)
		else:
			quickfix.StringField.__init__(self, 713, data)

class PosMaintRptRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 714)
		else:
			quickfix.StringField.__init__(self, 714, data)

class ClearingBusinessDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 715)
		else:
			quickfix.StringField.__init__(self, 715, data)

class SettlSessID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 716)
		else:
			quickfix.StringField.__init__(self, 716, data)

class SettlSessSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 717)
		else:
			quickfix.StringField.__init__(self, 717, data)

class AdjustmentType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 718)
		else:
			quickfix.IntField.__init__(self, 718, data)

class ContraryInstructionIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 719)
		else:
			quickfix.BoolField.__init__(self, 719, data)

class PriorSpreadIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 720)
		else:
			quickfix.BoolField.__init__(self, 720, data)

class PosMaintRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 721)
		else:
			quickfix.StringField.__init__(self, 721, data)

class PosMaintStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 722)
		else:
			quickfix.IntField.__init__(self, 722, data)

class PosMaintResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 723)
		else:
			quickfix.IntField.__init__(self, 723, data)

class PosReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 724)
		else:
			quickfix.IntField.__init__(self, 724, data)

class ResponseTransportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 725)
		else:
			quickfix.IntField.__init__(self, 725, data)

class ResponseDestination(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 726)
		else:
			quickfix.StringField.__init__(self, 726, data)

class TotalNumPosReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 727)
		else:
			quickfix.IntField.__init__(self, 727, data)

class PosReqResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 728)
		else:
			quickfix.IntField.__init__(self, 728, data)

class PosReqStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 729)
		else:
			quickfix.IntField.__init__(self, 729, data)

class SettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 730)
		else:
			quickfix.DoubleField.__init__(self, 730, data)

class SettlPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 731)
		else:
			quickfix.IntField.__init__(self, 731, data)

class UnderlyingSettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 732)
		else:
			quickfix.DoubleField.__init__(self, 732, data)

class UnderlyingSettlPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 733)
		else:
			quickfix.IntField.__init__(self, 733, data)

class PriorSettlPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 734)
		else:
			quickfix.DoubleField.__init__(self, 734, data)

class NoQuoteQualifiers(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 735)
		else:
			quickfix.IntField.__init__(self, 735, data)

class AllocSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 736)
		else:
			quickfix.StringField.__init__(self, 736, data)

class AllocSettlCurrAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 737)
		else:
			quickfix.DoubleField.__init__(self, 737, data)

class InterestAtMaturity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 738)
		else:
			quickfix.DoubleField.__init__(self, 738, data)

class LegDatedDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 739)
		else:
			quickfix.StringField.__init__(self, 739, data)

class LegPool(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 740)
		else:
			quickfix.StringField.__init__(self, 740, data)

class AllocInterestAtMaturity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 741)
		else:
			quickfix.DoubleField.__init__(self, 741, data)

class AllocAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 742)
		else:
			quickfix.DoubleField.__init__(self, 742, data)

class DeliveryDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 743)
		else:
			quickfix.StringField.__init__(self, 743, data)

class AssignmentMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 744)
		else:
			quickfix.CharField.__init__(self, 744, data)

class AssignmentUnit(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 745)
		else:
			quickfix.DoubleField.__init__(self, 745, data)

class OpenInterest(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 746)
		else:
			quickfix.DoubleField.__init__(self, 746, data)

class ExerciseMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 747)
		else:
			quickfix.CharField.__init__(self, 747, data)

class TotNumTradeReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 748)
		else:
			quickfix.IntField.__init__(self, 748, data)

class TradeRequestResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 749)
		else:
			quickfix.IntField.__init__(self, 749, data)

class TradeRequestStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 750)
		else:
			quickfix.IntField.__init__(self, 750, data)

class TradeReportRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 751)
		else:
			quickfix.IntField.__init__(self, 751, data)

class SideMultiLegReportingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 752)
		else:
			quickfix.IntField.__init__(self, 752, data)

class NoPosAmt(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 753)
		else:
			quickfix.IntField.__init__(self, 753, data)

class AutoAcceptIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 754)
		else:
			quickfix.BoolField.__init__(self, 754, data)

class AllocReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 755)
		else:
			quickfix.StringField.__init__(self, 755, data)

class NoNested2PartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 756)
		else:
			quickfix.IntField.__init__(self, 756, data)

class Nested2PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 757)
		else:
			quickfix.StringField.__init__(self, 757, data)

class Nested2PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 758)
		else:
			quickfix.CharField.__init__(self, 758, data)

class Nested2PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 759)
		else:
			quickfix.IntField.__init__(self, 759, data)

class Nested2PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 760)
		else:
			quickfix.StringField.__init__(self, 760, data)

class BenchmarkSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 761)
		else:
			quickfix.StringField.__init__(self, 761, data)

class SecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 762)
		else:
			quickfix.StringField.__init__(self, 762, data)

class UnderlyingSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 763)
		else:
			quickfix.StringField.__init__(self, 763, data)

class LegSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 764)
		else:
			quickfix.StringField.__init__(self, 764, data)

class AllowableOneSidednessPct(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 765)
		else:
			quickfix.DoubleField.__init__(self, 765, data)

class AllowableOneSidednessValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 766)
		else:
			quickfix.DoubleField.__init__(self, 766, data)

class AllowableOneSidednessCurr(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 767)
		else:
			quickfix.StringField.__init__(self, 767, data)

class NoTrdRegTimestamps(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 768)
		else:
			quickfix.IntField.__init__(self, 768, data)

class TrdRegTimestamp(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 769)
		else:
			quickfix.UtcTimeStampField.__init__(self, 769, data)

class TrdRegTimestampType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 770)
		else:
			quickfix.IntField.__init__(self, 770, data)

class TrdRegTimestampOrigin(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 771)
		else:
			quickfix.StringField.__init__(self, 771, data)

class ConfirmRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 772)
		else:
			quickfix.StringField.__init__(self, 772, data)

class ConfirmType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 773)
		else:
			quickfix.IntField.__init__(self, 773, data)

class ConfirmRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 774)
		else:
			quickfix.IntField.__init__(self, 774, data)

class BookingType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 775)
		else:
			quickfix.IntField.__init__(self, 775, data)

class IndividualAllocRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 776)
		else:
			quickfix.IntField.__init__(self, 776, data)

class SettlInstMsgID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 777)
		else:
			quickfix.StringField.__init__(self, 777, data)

class NoSettlInst(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 778)
		else:
			quickfix.IntField.__init__(self, 778, data)

class LastUpdateTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 779)
		else:
			quickfix.UtcTimeStampField.__init__(self, 779, data)

class AllocSettlInstType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 780)
		else:
			quickfix.IntField.__init__(self, 780, data)

class NoSettlPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 781)
		else:
			quickfix.IntField.__init__(self, 781, data)

class SettlPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 782)
		else:
			quickfix.StringField.__init__(self, 782, data)

class SettlPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 783)
		else:
			quickfix.CharField.__init__(self, 783, data)

class SettlPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 784)
		else:
			quickfix.IntField.__init__(self, 784, data)

class SettlPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 785)
		else:
			quickfix.StringField.__init__(self, 785, data)

class SettlPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 786)
		else:
			quickfix.IntField.__init__(self, 786, data)

class DlvyInstType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 787)
		else:
			quickfix.CharField.__init__(self, 787, data)

class TerminationType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 788)
		else:
			quickfix.IntField.__init__(self, 788, data)

class OrdStatusReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 790)
		else:
			quickfix.StringField.__init__(self, 790, data)

class SettlInstReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 791)
		else:
			quickfix.StringField.__init__(self, 791, data)

class SettlInstReqRejCode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 792)
		else:
			quickfix.IntField.__init__(self, 792, data)

class SecondaryAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 793)
		else:
			quickfix.StringField.__init__(self, 793, data)

class AllocReportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 794)
		else:
			quickfix.IntField.__init__(self, 794, data)

class AllocReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 795)
		else:
			quickfix.StringField.__init__(self, 795, data)

class AllocCancReplaceReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 796)
		else:
			quickfix.IntField.__init__(self, 796, data)

class CopyMsgIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 797)
		else:
			quickfix.BoolField.__init__(self, 797, data)

class AllocAccountType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 798)
		else:
			quickfix.IntField.__init__(self, 798, data)

class OrderAvgPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 799)
		else:
			quickfix.DoubleField.__init__(self, 799, data)

class OrderBookingQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 800)
		else:
			quickfix.DoubleField.__init__(self, 800, data)

class NoSettlPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 801)
		else:
			quickfix.IntField.__init__(self, 801, data)

class NoPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 802)
		else:
			quickfix.IntField.__init__(self, 802, data)

class PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 803)
		else:
			quickfix.IntField.__init__(self, 803, data)

class NoNestedPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 804)
		else:
			quickfix.IntField.__init__(self, 804, data)

class NestedPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 805)
		else:
			quickfix.IntField.__init__(self, 805, data)

class NoNested2PartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 806)
		else:
			quickfix.IntField.__init__(self, 806, data)

class Nested2PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 807)
		else:
			quickfix.IntField.__init__(self, 807, data)

class AllocIntermedReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 808)
		else:
			quickfix.IntField.__init__(self, 808, data)

class UnderlyingPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 810)
		else:
			quickfix.DoubleField.__init__(self, 810, data)

class PriceDelta(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 811)
		else:
			quickfix.DoubleField.__init__(self, 811, data)

class ApplQueueMax(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 812)
		else:
			quickfix.IntField.__init__(self, 812, data)

class ApplQueueDepth(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 813)
		else:
			quickfix.IntField.__init__(self, 813, data)

class ApplQueueResolution(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 814)
		else:
			quickfix.IntField.__init__(self, 814, data)

class ApplQueueAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 815)
		else:
			quickfix.IntField.__init__(self, 815, data)

class NoAltMDSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 816)
		else:
			quickfix.IntField.__init__(self, 816, data)

class AltMDSourceID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 817)
		else:
			quickfix.StringField.__init__(self, 817, data)

class SecondaryTradeReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 818)
		else:
			quickfix.StringField.__init__(self, 818, data)

class AvgPxIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 819)
		else:
			quickfix.IntField.__init__(self, 819, data)

class TradeLinkID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 820)
		else:
			quickfix.StringField.__init__(self, 820, data)

class OrderInputDevice(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 821)
		else:
			quickfix.StringField.__init__(self, 821, data)

class UnderlyingTradingSessionID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 822)
		else:
			quickfix.StringField.__init__(self, 822, data)

class UnderlyingTradingSessionSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 823)
		else:
			quickfix.StringField.__init__(self, 823, data)

class TradeLegRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 824)
		else:
			quickfix.StringField.__init__(self, 824, data)

class ExchangeRule(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 825)
		else:
			quickfix.StringField.__init__(self, 825, data)

class TradeAllocIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 826)
		else:
			quickfix.IntField.__init__(self, 826, data)

class ExpirationCycle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 827)
		else:
			quickfix.IntField.__init__(self, 827, data)

class TrdType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 828)
		else:
			quickfix.IntField.__init__(self, 828, data)

class TrdSubType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 829)
		else:
			quickfix.IntField.__init__(self, 829, data)

class TransferReason(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 830)
		else:
			quickfix.StringField.__init__(self, 830, data)

class TotNumAssignmentReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 832)
		else:
			quickfix.IntField.__init__(self, 832, data)

class AsgnRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 833)
		else:
			quickfix.StringField.__init__(self, 833, data)

class ThresholdAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 834)
		else:
			quickfix.DoubleField.__init__(self, 834, data)

class PegMoveType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 835)
		else:
			quickfix.IntField.__init__(self, 835, data)

class PegOffsetType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 836)
		else:
			quickfix.IntField.__init__(self, 836, data)

class PegLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 837)
		else:
			quickfix.IntField.__init__(self, 837, data)

class PegRoundDirection(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 838)
		else:
			quickfix.IntField.__init__(self, 838, data)

class PeggedPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 839)
		else:
			quickfix.DoubleField.__init__(self, 839, data)

class PegScope(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 840)
		else:
			quickfix.IntField.__init__(self, 840, data)

class DiscretionMoveType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 841)
		else:
			quickfix.IntField.__init__(self, 841, data)

class DiscretionOffsetType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 842)
		else:
			quickfix.IntField.__init__(self, 842, data)

class DiscretionLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 843)
		else:
			quickfix.IntField.__init__(self, 843, data)

class DiscretionRoundDirection(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 844)
		else:
			quickfix.IntField.__init__(self, 844, data)

class DiscretionPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 845)
		else:
			quickfix.DoubleField.__init__(self, 845, data)

class DiscretionScope(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 846)
		else:
			quickfix.IntField.__init__(self, 846, data)

class TargetStrategy(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 847)
		else:
			quickfix.IntField.__init__(self, 847, data)

class TargetStrategyParameters(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 848)
		else:
			quickfix.StringField.__init__(self, 848, data)

class ParticipationRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 849)
		else:
			quickfix.DoubleField.__init__(self, 849, data)

class TargetStrategyPerformance(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 850)
		else:
			quickfix.DoubleField.__init__(self, 850, data)

class LastLiquidityInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 851)
		else:
			quickfix.IntField.__init__(self, 851, data)

class PublishTrdIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 852)
		else:
			quickfix.BoolField.__init__(self, 852, data)

class ShortSaleReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 853)
		else:
			quickfix.IntField.__init__(self, 853, data)

class QtyType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 854)
		else:
			quickfix.IntField.__init__(self, 854, data)

class SecondaryTrdType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 855)
		else:
			quickfix.IntField.__init__(self, 855, data)

class TradeReportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 856)
		else:
			quickfix.IntField.__init__(self, 856, data)

class AllocNoOrdersType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 857)
		else:
			quickfix.IntField.__init__(self, 857, data)

class SharedCommission(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 858)
		else:
			quickfix.DoubleField.__init__(self, 858, data)

class ConfirmReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 859)
		else:
			quickfix.StringField.__init__(self, 859, data)

class AvgParPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 860)
		else:
			quickfix.DoubleField.__init__(self, 860, data)

class ReportedPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 861)
		else:
			quickfix.DoubleField.__init__(self, 861, data)

class NoCapacities(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 862)
		else:
			quickfix.IntField.__init__(self, 862, data)

class OrderCapacityQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 863)
		else:
			quickfix.DoubleField.__init__(self, 863, data)

class NoEvents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 864)
		else:
			quickfix.IntField.__init__(self, 864, data)

class EventType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 865)
		else:
			quickfix.IntField.__init__(self, 865, data)

class EventDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 866)
		else:
			quickfix.StringField.__init__(self, 866, data)

class EventPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 867)
		else:
			quickfix.DoubleField.__init__(self, 867, data)

class EventText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 868)
		else:
			quickfix.StringField.__init__(self, 868, data)

class PctAtRisk(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 869)
		else:
			quickfix.DoubleField.__init__(self, 869, data)

class NoInstrAttrib(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 870)
		else:
			quickfix.IntField.__init__(self, 870, data)

class InstrAttribType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 871)
		else:
			quickfix.IntField.__init__(self, 871, data)

class InstrAttribValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 872)
		else:
			quickfix.StringField.__init__(self, 872, data)

class DatedDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 873)
		else:
			quickfix.StringField.__init__(self, 873, data)

class InterestAccrualDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 874)
		else:
			quickfix.StringField.__init__(self, 874, data)

class CPProgram(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 875)
		else:
			quickfix.IntField.__init__(self, 875, data)

class CPRegType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 876)
		else:
			quickfix.StringField.__init__(self, 876, data)

class UnderlyingCPProgram(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 877)
		else:
			quickfix.StringField.__init__(self, 877, data)

class UnderlyingCPRegType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 878)
		else:
			quickfix.StringField.__init__(self, 878, data)

class UnderlyingQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 879)
		else:
			quickfix.DoubleField.__init__(self, 879, data)

class TrdMatchID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 880)
		else:
			quickfix.StringField.__init__(self, 880, data)

class SecondaryTradeReportRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 881)
		else:
			quickfix.StringField.__init__(self, 881, data)

class UnderlyingDirtyPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 882)
		else:
			quickfix.DoubleField.__init__(self, 882, data)

class UnderlyingEndPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 883)
		else:
			quickfix.DoubleField.__init__(self, 883, data)

class UnderlyingStartValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 884)
		else:
			quickfix.DoubleField.__init__(self, 884, data)

class UnderlyingCurrentValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 885)
		else:
			quickfix.DoubleField.__init__(self, 885, data)

class UnderlyingEndValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 886)
		else:
			quickfix.DoubleField.__init__(self, 886, data)

class NoUnderlyingStips(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 887)
		else:
			quickfix.IntField.__init__(self, 887, data)

class UnderlyingStipType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 888)
		else:
			quickfix.StringField.__init__(self, 888, data)

class UnderlyingStipValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 889)
		else:
			quickfix.StringField.__init__(self, 889, data)

class MaturityNetMoney(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 890)
		else:
			quickfix.DoubleField.__init__(self, 890, data)

class MiscFeeBasis(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 891)
		else:
			quickfix.IntField.__init__(self, 891, data)

class TotNoAllocs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 892)
		else:
			quickfix.IntField.__init__(self, 892, data)

class LastFragment(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 893)
		else:
			quickfix.BoolField.__init__(self, 893, data)

class CollReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 894)
		else:
			quickfix.StringField.__init__(self, 894, data)

class CollAsgnReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 895)
		else:
			quickfix.IntField.__init__(self, 895, data)

class CollInquiryQualifier(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 896)
		else:
			quickfix.IntField.__init__(self, 896, data)

class NoTrades(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 897)
		else:
			quickfix.IntField.__init__(self, 897, data)

class MarginRatio(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 898)
		else:
			quickfix.DoubleField.__init__(self, 898, data)

class MarginExcess(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 899)
		else:
			quickfix.DoubleField.__init__(self, 899, data)

class TotalNetValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 900)
		else:
			quickfix.DoubleField.__init__(self, 900, data)

class CashOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 901)
		else:
			quickfix.DoubleField.__init__(self, 901, data)

class CollAsgnID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 902)
		else:
			quickfix.StringField.__init__(self, 902, data)

class CollAsgnTransType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 903)
		else:
			quickfix.IntField.__init__(self, 903, data)

class CollRespID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 904)
		else:
			quickfix.StringField.__init__(self, 904, data)

class CollAsgnRespType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 905)
		else:
			quickfix.IntField.__init__(self, 905, data)

class CollAsgnRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 906)
		else:
			quickfix.IntField.__init__(self, 906, data)

class CollAsgnRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 907)
		else:
			quickfix.StringField.__init__(self, 907, data)

class CollRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 908)
		else:
			quickfix.StringField.__init__(self, 908, data)

class CollInquiryID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 909)
		else:
			quickfix.StringField.__init__(self, 909, data)

class CollStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 910)
		else:
			quickfix.IntField.__init__(self, 910, data)

class TotNumReports(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 911)
		else:
			quickfix.IntField.__init__(self, 911, data)

class LastRptRequested(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 912)
		else:
			quickfix.BoolField.__init__(self, 912, data)

class AgreementDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 913)
		else:
			quickfix.StringField.__init__(self, 913, data)

class AgreementID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 914)
		else:
			quickfix.StringField.__init__(self, 914, data)

class AgreementDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 915)
		else:
			quickfix.StringField.__init__(self, 915, data)

class StartDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 916)
		else:
			quickfix.StringField.__init__(self, 916, data)

class EndDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 917)
		else:
			quickfix.StringField.__init__(self, 917, data)

class AgreementCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 918)
		else:
			quickfix.StringField.__init__(self, 918, data)

class DeliveryType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 919)
		else:
			quickfix.IntField.__init__(self, 919, data)

class EndAccruedInterestAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 920)
		else:
			quickfix.DoubleField.__init__(self, 920, data)

class StartCash(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 921)
		else:
			quickfix.DoubleField.__init__(self, 921, data)

class EndCash(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 922)
		else:
			quickfix.DoubleField.__init__(self, 922, data)

class UserRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 923)
		else:
			quickfix.StringField.__init__(self, 923, data)

class UserRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 924)
		else:
			quickfix.IntField.__init__(self, 924, data)

class NewPassword(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 925)
		else:
			quickfix.StringField.__init__(self, 925, data)

class UserStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 926)
		else:
			quickfix.IntField.__init__(self, 926, data)

class UserStatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 927)
		else:
			quickfix.StringField.__init__(self, 927, data)

class StatusValue(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 928)
		else:
			quickfix.IntField.__init__(self, 928, data)

class StatusText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 929)
		else:
			quickfix.StringField.__init__(self, 929, data)

class RefCompID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 930)
		else:
			quickfix.StringField.__init__(self, 930, data)

class RefSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 931)
		else:
			quickfix.StringField.__init__(self, 931, data)

class NetworkResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 932)
		else:
			quickfix.StringField.__init__(self, 932, data)

class NetworkRequestID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 933)
		else:
			quickfix.StringField.__init__(self, 933, data)

class LastNetworkResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 934)
		else:
			quickfix.StringField.__init__(self, 934, data)

class NetworkRequestType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 935)
		else:
			quickfix.IntField.__init__(self, 935, data)

class NoCompIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 936)
		else:
			quickfix.IntField.__init__(self, 936, data)

class NetworkStatusResponseType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 937)
		else:
			quickfix.IntField.__init__(self, 937, data)

class NoCollInquiryQualifier(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 938)
		else:
			quickfix.IntField.__init__(self, 938, data)

class TrdRptStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 939)
		else:
			quickfix.IntField.__init__(self, 939, data)

class AffirmStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 940)
		else:
			quickfix.IntField.__init__(self, 940, data)

class UnderlyingStrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 941)
		else:
			quickfix.StringField.__init__(self, 941, data)

class LegStrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 942)
		else:
			quickfix.StringField.__init__(self, 942, data)

class TimeBracket(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 943)
		else:
			quickfix.StringField.__init__(self, 943, data)

class CollAction(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 944)
		else:
			quickfix.IntField.__init__(self, 944, data)

class CollInquiryStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 945)
		else:
			quickfix.IntField.__init__(self, 945, data)

class CollInquiryResult(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 946)
		else:
			quickfix.IntField.__init__(self, 946, data)

class StrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 947)
		else:
			quickfix.StringField.__init__(self, 947, data)

class NoNested3PartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 948)
		else:
			quickfix.IntField.__init__(self, 948, data)

class Nested3PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 949)
		else:
			quickfix.StringField.__init__(self, 949, data)

class Nested3PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 950)
		else:
			quickfix.CharField.__init__(self, 950, data)

class Nested3PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 951)
		else:
			quickfix.IntField.__init__(self, 951, data)

class NoNested3PartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 952)
		else:
			quickfix.IntField.__init__(self, 952, data)

class Nested3PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 953)
		else:
			quickfix.StringField.__init__(self, 953, data)

class Nested3PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 954)
		else:
			quickfix.IntField.__init__(self, 954, data)

class LegContractSettlMonth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 955)
		else:
			quickfix.StringField.__init__(self, 955, data)

class LegInterestAccrualDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 956)
		else:
			quickfix.StringField.__init__(self, 956, data)

class LegOrderQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 685)
		else:
			quickfix.DoubleField.__init__(self, 685, data)

class NoStrategyParameters(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 957)
		else:
			quickfix.IntField.__init__(self, 957, data)

class StrategyParameterName(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 958)
		else:
			quickfix.StringField.__init__(self, 958, data)

class StrategyParameterType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 959)
		else:
			quickfix.IntField.__init__(self, 959, data)

class StrategyParameterValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 960)
		else:
			quickfix.StringField.__init__(self, 960, data)

class HostCrossID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 961)
		else:
			quickfix.StringField.__init__(self, 961, data)

class SideTimeInForce(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 962)
		else:
			quickfix.UtcTimeStampField.__init__(self, 962, data)

class MDReportID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 963)
		else:
			quickfix.IntField.__init__(self, 963, data)

class SecurityReportID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 964)
		else:
			quickfix.IntField.__init__(self, 964, data)

class SecurityStatus(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 965)
		else:
			quickfix.StringField.__init__(self, 965, data)

class SettleOnOpenFlag(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 966)
		else:
			quickfix.StringField.__init__(self, 966, data)

class StrikeMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 967)
		else:
			quickfix.DoubleField.__init__(self, 967, data)

class StrikeValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 968)
		else:
			quickfix.DoubleField.__init__(self, 968, data)

class MinPriceIncrement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 969)
		else:
			quickfix.DoubleField.__init__(self, 969, data)

class PositionLimit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 970)
		else:
			quickfix.IntField.__init__(self, 970, data)

class NTPositionLimit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 971)
		else:
			quickfix.IntField.__init__(self, 971, data)

class UnderlyingAllocationPercent(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 972)
		else:
			quickfix.DoubleField.__init__(self, 972, data)

class UnderlyingCashAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 973)
		else:
			quickfix.DoubleField.__init__(self, 973, data)

class UnderlyingCashType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 974)
		else:
			quickfix.StringField.__init__(self, 974, data)

class UnderlyingSettlementType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 975)
		else:
			quickfix.IntField.__init__(self, 975, data)

class QuantityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 976)
		else:
			quickfix.StringField.__init__(self, 976, data)

class ContIntRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 977)
		else:
			quickfix.StringField.__init__(self, 977, data)

class LateIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 978)
		else:
			quickfix.BoolField.__init__(self, 978, data)

class InputSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 979)
		else:
			quickfix.StringField.__init__(self, 979, data)

class SecurityUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 980)
		else:
			quickfix.CharField.__init__(self, 980, data)

class NoExpiration(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 981)
		else:
			quickfix.IntField.__init__(self, 981, data)

class ExpType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 982)
		else:
			quickfix.IntField.__init__(self, 982, data)

class ExpQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 983)
		else:
			quickfix.DoubleField.__init__(self, 983, data)

class NoUnderlyingAmounts(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 984)
		else:
			quickfix.IntField.__init__(self, 984, data)

class UnderlyingPayAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 985)
		else:
			quickfix.DoubleField.__init__(self, 985, data)

class UnderlyingCollectAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 986)
		else:
			quickfix.DoubleField.__init__(self, 986, data)

class UnderlyingSettlementDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 987)
		else:
			quickfix.StringField.__init__(self, 987, data)

class UnderlyingSettlementStatus(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 988)
		else:
			quickfix.StringField.__init__(self, 988, data)

class SecondaryIndividualAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 989)
		else:
			quickfix.StringField.__init__(self, 989, data)

class LegReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 990)
		else:
			quickfix.StringField.__init__(self, 990, data)

class RndPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 991)
		else:
			quickfix.DoubleField.__init__(self, 991, data)

class IndividualAllocType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 992)
		else:
			quickfix.IntField.__init__(self, 992, data)

class AllocCustomerCapacity(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 993)
		else:
			quickfix.StringField.__init__(self, 993, data)

class TierCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 994)
		else:
			quickfix.StringField.__init__(self, 994, data)

class UnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 996)
		else:
			quickfix.StringField.__init__(self, 996, data)

class TimeUnit(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 997)
		else:
			quickfix.StringField.__init__(self, 997, data)

class UnderlyingUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 998)
		else:
			quickfix.StringField.__init__(self, 998, data)

class LegUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 999)
		else:
			quickfix.StringField.__init__(self, 999, data)

class UnderlyingTimeUnit(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1000)
		else:
			quickfix.StringField.__init__(self, 1000, data)

class LegTimeUnit(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1001)
		else:
			quickfix.StringField.__init__(self, 1001, data)

class AllocMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1002)
		else:
			quickfix.IntField.__init__(self, 1002, data)

class TradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1003)
		else:
			quickfix.StringField.__init__(self, 1003, data)

class SideTradeReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1005)
		else:
			quickfix.StringField.__init__(self, 1005, data)

class SideFillStationCd(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1006)
		else:
			quickfix.StringField.__init__(self, 1006, data)

class SideReasonCd(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1007)
		else:
			quickfix.StringField.__init__(self, 1007, data)

class SideTrdSubTyp(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1008)
		else:
			quickfix.IntField.__init__(self, 1008, data)

class SideQty(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1009)
		else:
			quickfix.IntField.__init__(self, 1009, data)

class MessageEventSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1011)
		else:
			quickfix.StringField.__init__(self, 1011, data)

class SideTrdRegTimestamp(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1012)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1012, data)

class SideTrdRegTimestampType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1013)
		else:
			quickfix.IntField.__init__(self, 1013, data)

class SideTrdRegTimestampSrc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1014)
		else:
			quickfix.StringField.__init__(self, 1014, data)

class AsOfIndicator(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1015)
		else:
			quickfix.CharField.__init__(self, 1015, data)

class NoSideTrdRegTS(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1016)
		else:
			quickfix.IntField.__init__(self, 1016, data)

class LegOptionRatio(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1017)
		else:
			quickfix.DoubleField.__init__(self, 1017, data)

class NoInstrumentParties(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1018)
		else:
			quickfix.IntField.__init__(self, 1018, data)

class InstrumentPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1019)
		else:
			quickfix.StringField.__init__(self, 1019, data)

class TradeVolume(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1020)
		else:
			quickfix.DoubleField.__init__(self, 1020, data)

class MDBookType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1021)
		else:
			quickfix.IntField.__init__(self, 1021, data)

class MDFeedType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1022)
		else:
			quickfix.StringField.__init__(self, 1022, data)

class MDPriceLevel(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1023)
		else:
			quickfix.IntField.__init__(self, 1023, data)

class MDOriginType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1024)
		else:
			quickfix.IntField.__init__(self, 1024, data)

class FirstPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1025)
		else:
			quickfix.DoubleField.__init__(self, 1025, data)

class MDEntrySpotRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1026)
		else:
			quickfix.DoubleField.__init__(self, 1026, data)

class MDEntryForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1027)
		else:
			quickfix.DoubleField.__init__(self, 1027, data)

class ManualOrderIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1028)
		else:
			quickfix.BoolField.__init__(self, 1028, data)

class CustDirectedOrder(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1029)
		else:
			quickfix.BoolField.__init__(self, 1029, data)

class ReceivedDeptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1030)
		else:
			quickfix.StringField.__init__(self, 1030, data)

class CustOrderHandlingInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1031)
		else:
			quickfix.StringField.__init__(self, 1031, data)

class OrderHandlingInstSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1032)
		else:
			quickfix.IntField.__init__(self, 1032, data)

class DeskType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1033)
		else:
			quickfix.StringField.__init__(self, 1033, data)

class DeskTypeSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1034)
		else:
			quickfix.IntField.__init__(self, 1034, data)

class DeskOrderHandlingInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1035)
		else:
			quickfix.StringField.__init__(self, 1035, data)

class ExecAckStatus(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1036)
		else:
			quickfix.CharField.__init__(self, 1036, data)

class UnderlyingDeliveryAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1037)
		else:
			quickfix.DoubleField.__init__(self, 1037, data)

class UnderlyingCapValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1038)
		else:
			quickfix.DoubleField.__init__(self, 1038, data)

class UnderlyingSettlMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1039)
		else:
			quickfix.StringField.__init__(self, 1039, data)

class SecondaryTradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1040)
		else:
			quickfix.StringField.__init__(self, 1040, data)

class FirmTradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1041)
		else:
			quickfix.StringField.__init__(self, 1041, data)

class SecondaryFirmTradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1042)
		else:
			quickfix.StringField.__init__(self, 1042, data)

class CollApplType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1043)
		else:
			quickfix.IntField.__init__(self, 1043, data)

class UnderlyingAdjustedQuantity(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1044)
		else:
			quickfix.DoubleField.__init__(self, 1044, data)

class UnderlyingFXRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1045)
		else:
			quickfix.DoubleField.__init__(self, 1045, data)

class UnderlyingFXRateCalc(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1046)
		else:
			quickfix.CharField.__init__(self, 1046, data)

class AllocPositionEffect(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1047)
		else:
			quickfix.CharField.__init__(self, 1047, data)

class DealingCapacity(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1048)
		else:
			quickfix.CharField.__init__(self, 1048, data)

class InstrmtAssignmentMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1049)
		else:
			quickfix.CharField.__init__(self, 1049, data)

class InstrumentPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1050)
		else:
			quickfix.CharField.__init__(self, 1050, data)

class InstrumentPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1051)
		else:
			quickfix.IntField.__init__(self, 1051, data)

class NoInstrumentPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1052)
		else:
			quickfix.IntField.__init__(self, 1052, data)

class InstrumentPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1053)
		else:
			quickfix.StringField.__init__(self, 1053, data)

class InstrumentPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1054)
		else:
			quickfix.IntField.__init__(self, 1054, data)

class PositionCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1055)
		else:
			quickfix.StringField.__init__(self, 1055, data)

class CalculatedCcyLastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1056)
		else:
			quickfix.DoubleField.__init__(self, 1056, data)

class AggressorIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1057)
		else:
			quickfix.BoolField.__init__(self, 1057, data)

class NoUndlyInstrumentParties(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1058)
		else:
			quickfix.IntField.__init__(self, 1058, data)

class UndlyInstrumentPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1059)
		else:
			quickfix.StringField.__init__(self, 1059, data)

class UndlyInstrumentPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1060)
		else:
			quickfix.CharField.__init__(self, 1060, data)

class UndlyInstrumentPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1061)
		else:
			quickfix.IntField.__init__(self, 1061, data)

class NoUndlyInstrumentPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1062)
		else:
			quickfix.IntField.__init__(self, 1062, data)

class UndlyInstrumentPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1063)
		else:
			quickfix.StringField.__init__(self, 1063, data)

class UndlyInstrumentPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1064)
		else:
			quickfix.IntField.__init__(self, 1064, data)

class BidSwapPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1065)
		else:
			quickfix.DoubleField.__init__(self, 1065, data)

class OfferSwapPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1066)
		else:
			quickfix.DoubleField.__init__(self, 1066, data)

class LegBidForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1067)
		else:
			quickfix.DoubleField.__init__(self, 1067, data)

class LegOfferForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1068)
		else:
			quickfix.DoubleField.__init__(self, 1068, data)

class SwapPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1069)
		else:
			quickfix.DoubleField.__init__(self, 1069, data)

class MDQuoteType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1070)
		else:
			quickfix.IntField.__init__(self, 1070, data)

class LastSwapPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1071)
		else:
			quickfix.DoubleField.__init__(self, 1071, data)

class SideGrossTradeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1072)
		else:
			quickfix.DoubleField.__init__(self, 1072, data)

class LegLastForwardPoints(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1073)
		else:
			quickfix.DoubleField.__init__(self, 1073, data)

class LegCalculatedCcyLastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1074)
		else:
			quickfix.DoubleField.__init__(self, 1074, data)

class LegGrossTradeAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1075)
		else:
			quickfix.DoubleField.__init__(self, 1075, data)

class MaturityTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1079)
		else:
			quickfix.StringField.__init__(self, 1079, data)

class RefOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1080)
		else:
			quickfix.StringField.__init__(self, 1080, data)

class RefOrderIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1081)
		else:
			quickfix.CharField.__init__(self, 1081, data)

class SecondaryDisplayQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1082)
		else:
			quickfix.DoubleField.__init__(self, 1082, data)

class DisplayWhen(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1083)
		else:
			quickfix.CharField.__init__(self, 1083, data)

class DisplayMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1084)
		else:
			quickfix.CharField.__init__(self, 1084, data)

class DisplayLowQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1085)
		else:
			quickfix.DoubleField.__init__(self, 1085, data)

class DisplayHighQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1086)
		else:
			quickfix.DoubleField.__init__(self, 1086, data)

class DisplayMinIncr(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1087)
		else:
			quickfix.DoubleField.__init__(self, 1087, data)

class RefreshQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1088)
		else:
			quickfix.DoubleField.__init__(self, 1088, data)

class MatchIncrement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1089)
		else:
			quickfix.DoubleField.__init__(self, 1089, data)

class MaxPriceLevels(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1090)
		else:
			quickfix.IntField.__init__(self, 1090, data)

class PreTradeAnonymity(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1091)
		else:
			quickfix.BoolField.__init__(self, 1091, data)

class PriceProtectionScope(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1092)
		else:
			quickfix.CharField.__init__(self, 1092, data)

class LotType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1093)
		else:
			quickfix.CharField.__init__(self, 1093, data)

class PegPriceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1094)
		else:
			quickfix.IntField.__init__(self, 1094, data)

class PeggedRefPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1095)
		else:
			quickfix.DoubleField.__init__(self, 1095, data)

class PegSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1096)
		else:
			quickfix.StringField.__init__(self, 1096, data)

class PegSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1097)
		else:
			quickfix.StringField.__init__(self, 1097, data)

class PegSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1098)
		else:
			quickfix.StringField.__init__(self, 1098, data)

class PegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1099)
		else:
			quickfix.StringField.__init__(self, 1099, data)

class TriggerType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1100)
		else:
			quickfix.CharField.__init__(self, 1100, data)

class TriggerAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1101)
		else:
			quickfix.CharField.__init__(self, 1101, data)

class TriggerPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1102)
		else:
			quickfix.DoubleField.__init__(self, 1102, data)

class TriggerSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1103)
		else:
			quickfix.StringField.__init__(self, 1103, data)

class TriggerSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1104)
		else:
			quickfix.StringField.__init__(self, 1104, data)

class TriggerSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1105)
		else:
			quickfix.StringField.__init__(self, 1105, data)

class TriggerSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1106)
		else:
			quickfix.StringField.__init__(self, 1106, data)

class TriggerPriceType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1107)
		else:
			quickfix.CharField.__init__(self, 1107, data)

class TriggerPriceTypeScope(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1108)
		else:
			quickfix.CharField.__init__(self, 1108, data)

class TriggerPriceDirection(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1109)
		else:
			quickfix.CharField.__init__(self, 1109, data)

class TriggerNewPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1110)
		else:
			quickfix.DoubleField.__init__(self, 1110, data)

class TriggerOrderType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1111)
		else:
			quickfix.CharField.__init__(self, 1111, data)

class TriggerNewQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1112)
		else:
			quickfix.DoubleField.__init__(self, 1112, data)

class TriggerTradingSessionID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1113)
		else:
			quickfix.StringField.__init__(self, 1113, data)

class TriggerTradingSessionSubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1114)
		else:
			quickfix.StringField.__init__(self, 1114, data)

class OrderCategory(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1115)
		else:
			quickfix.CharField.__init__(self, 1115, data)

class NoRootPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1116)
		else:
			quickfix.IntField.__init__(self, 1116, data)

class RootPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1117)
		else:
			quickfix.StringField.__init__(self, 1117, data)

class RootPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1118)
		else:
			quickfix.CharField.__init__(self, 1118, data)

class RootPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1119)
		else:
			quickfix.IntField.__init__(self, 1119, data)

class NoRootPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1120)
		else:
			quickfix.IntField.__init__(self, 1120, data)

class RootPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1121)
		else:
			quickfix.StringField.__init__(self, 1121, data)

class RootPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1122)
		else:
			quickfix.IntField.__init__(self, 1122, data)

class TradeHandlingInstr(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1123)
		else:
			quickfix.CharField.__init__(self, 1123, data)

class OrigTradeHandlingInstr(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1124)
		else:
			quickfix.CharField.__init__(self, 1124, data)

class OrigTradeDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1125)
		else:
			quickfix.StringField.__init__(self, 1125, data)

class OrigTradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1126)
		else:
			quickfix.StringField.__init__(self, 1126, data)

class OrigSecondaryTradeID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1127)
		else:
			quickfix.StringField.__init__(self, 1127, data)

class TZTransactTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1132)
		else:
			quickfix.StringField.__init__(self, 1132, data)

class ExDestinationIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1133)
		else:
			quickfix.CharField.__init__(self, 1133, data)

class ReportedPxDiff(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1134)
		else:
			quickfix.BoolField.__init__(self, 1134, data)

class RptSys(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1135)
		else:
			quickfix.StringField.__init__(self, 1135, data)

class AllocClearingFeeIndicator(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1136)
		else:
			quickfix.StringField.__init__(self, 1136, data)

class DisplayQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1138)
		else:
			quickfix.DoubleField.__init__(self, 1138, data)

class ExchangeSpecialInstructions(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1139)
		else:
			quickfix.StringField.__init__(self, 1139, data)

class NoUsernames(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 809)
		else:
			quickfix.IntField.__init__(self, 809, data)

class ExpirationQtyType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 982)
		else:
			quickfix.IntField.__init__(self, 982, data)

class MaxTradeVol(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1140)
		else:
			quickfix.DoubleField.__init__(self, 1140, data)

class NoMDFeedTypes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1141)
		else:
			quickfix.IntField.__init__(self, 1141, data)

class MatchAlgorithm(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1142)
		else:
			quickfix.StringField.__init__(self, 1142, data)

class MaxPriceVariation(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1143)
		else:
			quickfix.DoubleField.__init__(self, 1143, data)

class ImpliedMarketIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1144)
		else:
			quickfix.IntField.__init__(self, 1144, data)

class EventTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1145)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1145, data)

class MinPriceIncrementAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1146)
		else:
			quickfix.DoubleField.__init__(self, 1146, data)

class UnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1147)
		else:
			quickfix.DoubleField.__init__(self, 1147, data)

class LowLimitPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1148)
		else:
			quickfix.DoubleField.__init__(self, 1148, data)

class HighLimitPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1149)
		else:
			quickfix.DoubleField.__init__(self, 1149, data)

class TradingReferencePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1150)
		else:
			quickfix.DoubleField.__init__(self, 1150, data)

class SecurityGroup(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1151)
		else:
			quickfix.StringField.__init__(self, 1151, data)

class LegNumber(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1152)
		else:
			quickfix.IntField.__init__(self, 1152, data)

class SettlementCycleNo(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1153)
		else:
			quickfix.IntField.__init__(self, 1153, data)

class SideCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1154)
		else:
			quickfix.StringField.__init__(self, 1154, data)

class SideSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1155)
		else:
			quickfix.StringField.__init__(self, 1155, data)

class ApplExtID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1156)
		else:
			quickfix.IntField.__init__(self, 1156, data)

class CcyAmt(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1157)
		else:
			quickfix.DoubleField.__init__(self, 1157, data)

class NoSettlDetails(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1158)
		else:
			quickfix.IntField.__init__(self, 1158, data)

class SettlObligMode(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1159)
		else:
			quickfix.IntField.__init__(self, 1159, data)

class SettlObligMsgID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1160)
		else:
			quickfix.StringField.__init__(self, 1160, data)

class SettlObligID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1161)
		else:
			quickfix.StringField.__init__(self, 1161, data)

class SettlObligTransType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1162)
		else:
			quickfix.CharField.__init__(self, 1162, data)

class SettlObligRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1163)
		else:
			quickfix.StringField.__init__(self, 1163, data)

class SettlObligSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1164)
		else:
			quickfix.CharField.__init__(self, 1164, data)

class NoSettlOblig(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1165)
		else:
			quickfix.IntField.__init__(self, 1165, data)

class QuoteMsgID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1166)
		else:
			quickfix.StringField.__init__(self, 1166, data)

class QuoteEntryStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1167)
		else:
			quickfix.IntField.__init__(self, 1167, data)

class TotNoCxldQuotes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1168)
		else:
			quickfix.IntField.__init__(self, 1168, data)

class TotNoAccQuotes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1169)
		else:
			quickfix.IntField.__init__(self, 1169, data)

class TotNoRejQuotes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1170)
		else:
			quickfix.IntField.__init__(self, 1170, data)

class PrivateQuote(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1171)
		else:
			quickfix.BoolField.__init__(self, 1171, data)

class RespondentType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1172)
		else:
			quickfix.IntField.__init__(self, 1172, data)

class MDSubBookType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1173)
		else:
			quickfix.IntField.__init__(self, 1173, data)

class SecurityTradingEvent(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1174)
		else:
			quickfix.IntField.__init__(self, 1174, data)

class NoStatsIndicators(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1175)
		else:
			quickfix.IntField.__init__(self, 1175, data)

class StatsType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1176)
		else:
			quickfix.IntField.__init__(self, 1176, data)

class NoOfSecSizes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1177)
		else:
			quickfix.IntField.__init__(self, 1177, data)

class MDSecSizeType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1178)
		else:
			quickfix.IntField.__init__(self, 1178, data)

class MDSecSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1179)
		else:
			quickfix.DoubleField.__init__(self, 1179, data)

class ApplID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1180)
		else:
			quickfix.StringField.__init__(self, 1180, data)

class ApplSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1181)
		else:
			quickfix.IntField.__init__(self, 1181, data)

class ApplBegSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1182)
		else:
			quickfix.IntField.__init__(self, 1182, data)

class ApplEndSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1183)
		else:
			quickfix.IntField.__init__(self, 1183, data)

class SecurityXMLLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1184)
		else:
			quickfix.IntField.__init__(self, 1184, data)

class SecurityXML(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1185)
		else:
			quickfix.StringField.__init__(self, 1185, data)

class SecurityXMLSchema(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1186)
		else:
			quickfix.StringField.__init__(self, 1186, data)

class RefreshIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1187)
		else:
			quickfix.BoolField.__init__(self, 1187, data)

class Volatility(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1188)
		else:
			quickfix.DoubleField.__init__(self, 1188, data)

class TimeToExpiration(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1189)
		else:
			quickfix.DoubleField.__init__(self, 1189, data)

class RiskFreeRate(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1190)
		else:
			quickfix.DoubleField.__init__(self, 1190, data)

class PriceUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1191)
		else:
			quickfix.StringField.__init__(self, 1191, data)

class PriceUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1192)
		else:
			quickfix.DoubleField.__init__(self, 1192, data)

class SettlMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1193)
		else:
			quickfix.CharField.__init__(self, 1193, data)

class ExerciseStyle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1194)
		else:
			quickfix.IntField.__init__(self, 1194, data)

class OptPayAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1195)
		else:
			quickfix.DoubleField.__init__(self, 1195, data)

class PriceQuoteMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1196)
		else:
			quickfix.StringField.__init__(self, 1196, data)

class FuturesValuationMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1197)
		else:
			quickfix.StringField.__init__(self, 1197, data)

class ListMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1198)
		else:
			quickfix.IntField.__init__(self, 1198, data)

class CapPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1199)
		else:
			quickfix.DoubleField.__init__(self, 1199, data)

class FloorPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1200)
		else:
			quickfix.DoubleField.__init__(self, 1200, data)

class NoStrikeRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1201)
		else:
			quickfix.IntField.__init__(self, 1201, data)

class StartStrikePxRange(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1202)
		else:
			quickfix.DoubleField.__init__(self, 1202, data)

class EndStrikePxRange(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1203)
		else:
			quickfix.DoubleField.__init__(self, 1203, data)

class StrikeIncrement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1204)
		else:
			quickfix.DoubleField.__init__(self, 1204, data)

class NoTickRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1205)
		else:
			quickfix.IntField.__init__(self, 1205, data)

class StartTickPriceRange(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1206)
		else:
			quickfix.DoubleField.__init__(self, 1206, data)

class EndTickPriceRange(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1207)
		else:
			quickfix.DoubleField.__init__(self, 1207, data)

class TickIncrement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1208)
		else:
			quickfix.DoubleField.__init__(self, 1208, data)

class TickRuleType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1209)
		else:
			quickfix.IntField.__init__(self, 1209, data)

class NestedInstrAttribType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1210)
		else:
			quickfix.IntField.__init__(self, 1210, data)

class NestedInstrAttribValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1211)
		else:
			quickfix.StringField.__init__(self, 1211, data)

class LegMaturityTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1212)
		else:
			quickfix.StringField.__init__(self, 1212, data)

class UnderlyingMaturityTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1213)
		else:
			quickfix.StringField.__init__(self, 1213, data)

class DerivativeSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1214)
		else:
			quickfix.StringField.__init__(self, 1214, data)

class DerivativeSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1215)
		else:
			quickfix.StringField.__init__(self, 1215, data)

class DerivativeSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1216)
		else:
			quickfix.StringField.__init__(self, 1216, data)

class DerivativeSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1217)
		else:
			quickfix.StringField.__init__(self, 1217, data)

class NoDerivativeSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1218)
		else:
			quickfix.IntField.__init__(self, 1218, data)

class DerivativeSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1219)
		else:
			quickfix.StringField.__init__(self, 1219, data)

class DerivativeSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1220)
		else:
			quickfix.StringField.__init__(self, 1220, data)

class SecondaryLowLimitPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1221)
		else:
			quickfix.DoubleField.__init__(self, 1221, data)

class MaturityRuleID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1222)
		else:
			quickfix.StringField.__init__(self, 1222, data)

class StrikeRuleID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1223)
		else:
			quickfix.StringField.__init__(self, 1223, data)

class LegUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1224)
		else:
			quickfix.DoubleField.__init__(self, 1224, data)

class DerivativeOptPayAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1225)
		else:
			quickfix.DoubleField.__init__(self, 1225, data)

class EndMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1226)
		else:
			quickfix.StringField.__init__(self, 1226, data)

class ProductComplex(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1227)
		else:
			quickfix.StringField.__init__(self, 1227, data)

class DerivativeProductComplex(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1228)
		else:
			quickfix.StringField.__init__(self, 1228, data)

class MaturityMonthYearIncrement(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1229)
		else:
			quickfix.IntField.__init__(self, 1229, data)

class SecondaryHighLimitPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1230)
		else:
			quickfix.DoubleField.__init__(self, 1230, data)

class MinLotSize(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1231)
		else:
			quickfix.DoubleField.__init__(self, 1231, data)

class NoExecInstRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1232)
		else:
			quickfix.IntField.__init__(self, 1232, data)

class NoLotTypeRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1234)
		else:
			quickfix.IntField.__init__(self, 1234, data)

class NoMatchRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1235)
		else:
			quickfix.IntField.__init__(self, 1235, data)

class NoMaturityRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1236)
		else:
			quickfix.IntField.__init__(self, 1236, data)

class NoOrdTypeRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1237)
		else:
			quickfix.IntField.__init__(self, 1237, data)

class NoTimeInForceRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1239)
		else:
			quickfix.IntField.__init__(self, 1239, data)

class SecondaryTradingReferencePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1240)
		else:
			quickfix.DoubleField.__init__(self, 1240, data)

class StartMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1241)
		else:
			quickfix.StringField.__init__(self, 1241, data)

class FlexProductEligibilityIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1242)
		else:
			quickfix.BoolField.__init__(self, 1242, data)

class DerivFlexProductEligibilityIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1243)
		else:
			quickfix.BoolField.__init__(self, 1243, data)

class FlexibleIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1244)
		else:
			quickfix.BoolField.__init__(self, 1244, data)

class TradingCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1245)
		else:
			quickfix.StringField.__init__(self, 1245, data)

class DerivativeProduct(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1246)
		else:
			quickfix.IntField.__init__(self, 1246, data)

class DerivativeSecurityGroup(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1247)
		else:
			quickfix.StringField.__init__(self, 1247, data)

class DerivativeCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1248)
		else:
			quickfix.StringField.__init__(self, 1248, data)

class DerivativeSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1249)
		else:
			quickfix.StringField.__init__(self, 1249, data)

class DerivativeSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1250)
		else:
			quickfix.StringField.__init__(self, 1250, data)

class DerivativeMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1251)
		else:
			quickfix.StringField.__init__(self, 1251, data)

class DerivativeMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1252)
		else:
			quickfix.StringField.__init__(self, 1252, data)

class DerivativeMaturityTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1253)
		else:
			quickfix.StringField.__init__(self, 1253, data)

class DerivativeSettleOnOpenFlag(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1254)
		else:
			quickfix.StringField.__init__(self, 1254, data)

class DerivativeInstrmtAssignmentMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1255)
		else:
			quickfix.CharField.__init__(self, 1255, data)

class DerivativeSecurityStatus(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1256)
		else:
			quickfix.StringField.__init__(self, 1256, data)

class DerivativeInstrRegistry(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1257)
		else:
			quickfix.StringField.__init__(self, 1257, data)

class DerivativeCountryOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1258)
		else:
			quickfix.StringField.__init__(self, 1258, data)

class DerivativeStateOrProvinceOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1259)
		else:
			quickfix.StringField.__init__(self, 1259, data)

class DerivativeLocaleOfIssue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1260)
		else:
			quickfix.StringField.__init__(self, 1260, data)

class DerivativeStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1261)
		else:
			quickfix.DoubleField.__init__(self, 1261, data)

class DerivativeStrikeCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1262)
		else:
			quickfix.StringField.__init__(self, 1262, data)

class DerivativeStrikeMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1263)
		else:
			quickfix.DoubleField.__init__(self, 1263, data)

class DerivativeStrikeValue(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1264)
		else:
			quickfix.DoubleField.__init__(self, 1264, data)

class DerivativeOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1265)
		else:
			quickfix.CharField.__init__(self, 1265, data)

class DerivativeContractMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1266)
		else:
			quickfix.DoubleField.__init__(self, 1266, data)

class DerivativeMinPriceIncrement(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1267)
		else:
			quickfix.DoubleField.__init__(self, 1267, data)

class DerivativeMinPriceIncrementAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1268)
		else:
			quickfix.DoubleField.__init__(self, 1268, data)

class DerivativeUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1269)
		else:
			quickfix.StringField.__init__(self, 1269, data)

class DerivativeUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1270)
		else:
			quickfix.DoubleField.__init__(self, 1270, data)

class DerivativeTimeUnit(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1271)
		else:
			quickfix.StringField.__init__(self, 1271, data)

class DerivativeSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1272)
		else:
			quickfix.StringField.__init__(self, 1272, data)

class DerivativePositionLimit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1273)
		else:
			quickfix.IntField.__init__(self, 1273, data)

class DerivativeNTPositionLimit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1274)
		else:
			quickfix.IntField.__init__(self, 1274, data)

class DerivativeIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1275)
		else:
			quickfix.StringField.__init__(self, 1275, data)

class DerivativeIssueDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1276)
		else:
			quickfix.StringField.__init__(self, 1276, data)

class DerivativeEncodedIssuerLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1277)
		else:
			quickfix.IntField.__init__(self, 1277, data)

class DerivativeEncodedIssuer(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1278)
		else:
			quickfix.StringField.__init__(self, 1278, data)

class DerivativeSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1279)
		else:
			quickfix.StringField.__init__(self, 1279, data)

class DerivativeEncodedSecurityDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1280)
		else:
			quickfix.IntField.__init__(self, 1280, data)

class DerivativeEncodedSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1281)
		else:
			quickfix.StringField.__init__(self, 1281, data)

class DerivativeSecurityXMLLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1282)
		else:
			quickfix.IntField.__init__(self, 1282, data)

class DerivativeSecurityXML(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1283)
		else:
			quickfix.StringField.__init__(self, 1283, data)

class DerivativeSecurityXMLSchema(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1284)
		else:
			quickfix.StringField.__init__(self, 1284, data)

class DerivativeContractSettlMonth(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1285)
		else:
			quickfix.StringField.__init__(self, 1285, data)

class NoDerivativeEvents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1286)
		else:
			quickfix.IntField.__init__(self, 1286, data)

class DerivativeEventType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1287)
		else:
			quickfix.IntField.__init__(self, 1287, data)

class DerivativeEventDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1288)
		else:
			quickfix.StringField.__init__(self, 1288, data)

class DerivativeEventTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1289)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1289, data)

class DerivativeEventPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1290)
		else:
			quickfix.DoubleField.__init__(self, 1290, data)

class DerivativeEventText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1291)
		else:
			quickfix.StringField.__init__(self, 1291, data)

class NoDerivativeInstrumentParties(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1292)
		else:
			quickfix.IntField.__init__(self, 1292, data)

class DerivativeInstrumentPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1293)
		else:
			quickfix.StringField.__init__(self, 1293, data)

class DerivativeInstrumentPartyIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1294)
		else:
			quickfix.StringField.__init__(self, 1294, data)

class DerivativeInstrumentPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1295)
		else:
			quickfix.IntField.__init__(self, 1295, data)

class NoDerivativeInstrumentPartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1296)
		else:
			quickfix.IntField.__init__(self, 1296, data)

class DerivativeInstrumentPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1297)
		else:
			quickfix.StringField.__init__(self, 1297, data)

class DerivativeInstrumentPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1298)
		else:
			quickfix.IntField.__init__(self, 1298, data)

class DerivativeExerciseStyle(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1299)
		else:
			quickfix.CharField.__init__(self, 1299, data)

class MarketSegmentID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1300)
		else:
			quickfix.StringField.__init__(self, 1300, data)

class MarketID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1301)
		else:
			quickfix.StringField.__init__(self, 1301, data)

class MaturityMonthYearIncrementUnits(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1302)
		else:
			quickfix.IntField.__init__(self, 1302, data)

class MaturityMonthYearFormat(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1303)
		else:
			quickfix.IntField.__init__(self, 1303, data)

class StrikeExerciseStyle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1304)
		else:
			quickfix.IntField.__init__(self, 1304, data)

class SecondaryPriceLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1305)
		else:
			quickfix.IntField.__init__(self, 1305, data)

class PriceLimitType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1306)
		else:
			quickfix.IntField.__init__(self, 1306, data)

class ExecInstValue(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1308)
		else:
			quickfix.CharField.__init__(self, 1308, data)

class NoTradingSessionRules(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1309)
		else:
			quickfix.IntField.__init__(self, 1309, data)

class NoMarketSegments(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1310)
		else:
			quickfix.IntField.__init__(self, 1310, data)

class NoDerivativeInstrAttrib(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1311)
		else:
			quickfix.IntField.__init__(self, 1311, data)

class NoNestedInstrAttrib(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1312)
		else:
			quickfix.IntField.__init__(self, 1312, data)

class DerivativeInstrAttribType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1313)
		else:
			quickfix.IntField.__init__(self, 1313, data)

class DerivativeInstrAttribValue(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1314)
		else:
			quickfix.StringField.__init__(self, 1314, data)

class DerivativePriceUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1315)
		else:
			quickfix.StringField.__init__(self, 1315, data)

class DerivativePriceUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1316)
		else:
			quickfix.DoubleField.__init__(self, 1316, data)

class DerivativeSettlMethod(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1317)
		else:
			quickfix.CharField.__init__(self, 1317, data)

class DerivativePriceQuoteMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1318)
		else:
			quickfix.StringField.__init__(self, 1318, data)

class DerivativeFuturesValuationMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1319)
		else:
			quickfix.StringField.__init__(self, 1319, data)

class DerivativeListMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1320)
		else:
			quickfix.IntField.__init__(self, 1320, data)

class DerivativeCapPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1321)
		else:
			quickfix.DoubleField.__init__(self, 1321, data)

class DerivativeFloorPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1322)
		else:
			quickfix.DoubleField.__init__(self, 1322, data)

class DerivativePutOrCall(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1323)
		else:
			quickfix.IntField.__init__(self, 1323, data)

class ListUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1324)
		else:
			quickfix.CharField.__init__(self, 1324, data)

class ParentMktSegmID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1325)
		else:
			quickfix.StringField.__init__(self, 1325, data)

class TradingSessionDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1326)
		else:
			quickfix.StringField.__init__(self, 1326, data)

class TradSesUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1327)
		else:
			quickfix.CharField.__init__(self, 1327, data)

class RejectText(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1328)
		else:
			quickfix.StringField.__init__(self, 1328, data)

class FeeMultiplier(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1329)
		else:
			quickfix.DoubleField.__init__(self, 1329, data)

class UnderlyingLegSymbol(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1330)
		else:
			quickfix.StringField.__init__(self, 1330, data)

class UnderlyingLegSymbolSfx(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1331)
		else:
			quickfix.StringField.__init__(self, 1331, data)

class UnderlyingLegSecurityID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1332)
		else:
			quickfix.StringField.__init__(self, 1332, data)

class UnderlyingLegSecurityIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1333)
		else:
			quickfix.StringField.__init__(self, 1333, data)

class NoUnderlyingLegSecurityAltID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1334)
		else:
			quickfix.IntField.__init__(self, 1334, data)

class UnderlyingLegSecurityAltID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1335)
		else:
			quickfix.StringField.__init__(self, 1335, data)

class UnderlyingLegSecurityAltIDSource(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1336)
		else:
			quickfix.StringField.__init__(self, 1336, data)

class UnderlyingLegSecurityType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1337)
		else:
			quickfix.StringField.__init__(self, 1337, data)

class UnderlyingLegSecuritySubType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1338)
		else:
			quickfix.StringField.__init__(self, 1338, data)

class UnderlyingLegMaturityMonthYear(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1339)
		else:
			quickfix.StringField.__init__(self, 1339, data)

class UnderlyingLegStrikePrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1340)
		else:
			quickfix.DoubleField.__init__(self, 1340, data)

class UnderlyingLegSecurityExchange(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1341)
		else:
			quickfix.StringField.__init__(self, 1341, data)

class NoOfLegUnderlyings(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1342)
		else:
			quickfix.IntField.__init__(self, 1342, data)

class UnderlyingLegPutOrCall(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1343)
		else:
			quickfix.IntField.__init__(self, 1343, data)

class UnderlyingLegCFICode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1344)
		else:
			quickfix.StringField.__init__(self, 1344, data)

class UnderlyingLegMaturityDate(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1345)
		else:
			quickfix.StringField.__init__(self, 1345, data)

class ApplReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1346)
		else:
			quickfix.StringField.__init__(self, 1346, data)

class ApplReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1347)
		else:
			quickfix.IntField.__init__(self, 1347, data)

class ApplResponseType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1348)
		else:
			quickfix.IntField.__init__(self, 1348, data)

class ApplTotalMessageCount(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1349)
		else:
			quickfix.IntField.__init__(self, 1349, data)

class ApplLastSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1350)
		else:
			quickfix.IntField.__init__(self, 1350, data)

class NoApplIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1351)
		else:
			quickfix.IntField.__init__(self, 1351, data)

class ApplResendFlag(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1352)
		else:
			quickfix.BoolField.__init__(self, 1352, data)

class ApplResponseID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1353)
		else:
			quickfix.StringField.__init__(self, 1353, data)

class ApplResponseError(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1354)
		else:
			quickfix.IntField.__init__(self, 1354, data)

class RefApplID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1355)
		else:
			quickfix.StringField.__init__(self, 1355, data)

class ApplReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1356)
		else:
			quickfix.StringField.__init__(self, 1356, data)

class RefApplLastSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1357)
		else:
			quickfix.IntField.__init__(self, 1357, data)

class LegPutOrCall(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1358)
		else:
			quickfix.IntField.__init__(self, 1358, data)

class TotNoFills(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1361)
		else:
			quickfix.IntField.__init__(self, 1361, data)

class NoFills(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1362)
		else:
			quickfix.IntField.__init__(self, 1362, data)

class FillExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1363)
		else:
			quickfix.StringField.__init__(self, 1363, data)

class FillPx(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1364)
		else:
			quickfix.DoubleField.__init__(self, 1364, data)

class FillQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1365)
		else:
			quickfix.DoubleField.__init__(self, 1365, data)

class LegAllocID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1366)
		else:
			quickfix.StringField.__init__(self, 1366, data)

class LegAllocSettlCurrency(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1367)
		else:
			quickfix.StringField.__init__(self, 1367, data)

class TradSesEvent(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1368)
		else:
			quickfix.IntField.__init__(self, 1368, data)

class MassActionReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1369)
		else:
			quickfix.StringField.__init__(self, 1369, data)

class NoNotAffectedOrders(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1370)
		else:
			quickfix.IntField.__init__(self, 1370, data)

class NotAffectedOrderID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1371)
		else:
			quickfix.StringField.__init__(self, 1371, data)

class NotAffOrigClOrdID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1372)
		else:
			quickfix.StringField.__init__(self, 1372, data)

class MassActionType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1373)
		else:
			quickfix.IntField.__init__(self, 1373, data)

class MassActionScope(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1374)
		else:
			quickfix.IntField.__init__(self, 1374, data)

class MassActionResponse(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1375)
		else:
			quickfix.IntField.__init__(self, 1375, data)

class MassActionRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1376)
		else:
			quickfix.IntField.__init__(self, 1376, data)

class MultilegModel(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1377)
		else:
			quickfix.IntField.__init__(self, 1377, data)

class MultilegPriceMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1378)
		else:
			quickfix.IntField.__init__(self, 1378, data)

class LegVolatility(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1379)
		else:
			quickfix.DoubleField.__init__(self, 1379, data)

class DividendYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1380)
		else:
			quickfix.DoubleField.__init__(self, 1380, data)

class LegDividendYield(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1381)
		else:
			quickfix.DoubleField.__init__(self, 1381, data)

class CurrencyRatio(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1382)
		else:
			quickfix.DoubleField.__init__(self, 1382, data)

class LegCurrencyRatio(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1383)
		else:
			quickfix.DoubleField.__init__(self, 1383, data)

class LegExecInst(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1384)
		else:
			quickfix.StringField.__init__(self, 1384, data)

class ContingencyType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1385)
		else:
			quickfix.IntField.__init__(self, 1385, data)

class ListRejectReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1386)
		else:
			quickfix.IntField.__init__(self, 1386, data)

class NoTrdRepIndicators(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1387)
		else:
			quickfix.IntField.__init__(self, 1387, data)

class TrdRepPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1388)
		else:
			quickfix.IntField.__init__(self, 1388, data)

class TrdRepIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1389)
		else:
			quickfix.BoolField.__init__(self, 1389, data)

class TradePublishIndicator(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1390)
		else:
			quickfix.IntField.__init__(self, 1390, data)

class UnderlyingLegOptAttribute(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1391)
		else:
			quickfix.CharField.__init__(self, 1391, data)

class UnderlyingLegSecurityDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1392)
		else:
			quickfix.StringField.__init__(self, 1392, data)

class MarketReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1393)
		else:
			quickfix.StringField.__init__(self, 1393, data)

class MarketReportID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1394)
		else:
			quickfix.StringField.__init__(self, 1394, data)

class MarketUpdateAction(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1395)
		else:
			quickfix.CharField.__init__(self, 1395, data)

class MarketSegmentDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1396)
		else:
			quickfix.StringField.__init__(self, 1396, data)

class EncodedMktSegmDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1397)
		else:
			quickfix.IntField.__init__(self, 1397, data)

class EncodedMktSegmDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1398)
		else:
			quickfix.StringField.__init__(self, 1398, data)

class ApplNewSeqNum(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1399)
		else:
			quickfix.IntField.__init__(self, 1399, data)

class EncryptedPasswordMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1400)
		else:
			quickfix.IntField.__init__(self, 1400, data)

class EncryptedPasswordLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1401)
		else:
			quickfix.IntField.__init__(self, 1401, data)

class EncryptedPassword(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1402)
		else:
			quickfix.StringField.__init__(self, 1402, data)

class EncryptedNewPasswordLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1403)
		else:
			quickfix.IntField.__init__(self, 1403, data)

class EncryptedNewPassword(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1404)
		else:
			quickfix.StringField.__init__(self, 1404, data)

class UnderlyingLegMaturityTime(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1405)
		else:
			quickfix.StringField.__init__(self, 1405, data)

class RefApplExtID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1406)
		else:
			quickfix.IntField.__init__(self, 1406, data)

class DefaultApplExtID(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1407)
		else:
			quickfix.IntField.__init__(self, 1407, data)

class DefaultCstmApplVerID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1408)
		else:
			quickfix.StringField.__init__(self, 1408, data)

class SessionStatus(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1409)
		else:
			quickfix.IntField.__init__(self, 1409, data)

class DefaultVerIndicator(quickfix.BoolField):
	def __init__(self, data = None):
		if data == None:
			quickfix.BoolField.__init__(self, 1410)
		else:
			quickfix.BoolField.__init__(self, 1410, data)

class Nested4PartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1411)
		else:
			quickfix.IntField.__init__(self, 1411, data)

class Nested4PartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1412)
		else:
			quickfix.StringField.__init__(self, 1412, data)

class NoNested4PartySubIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1413)
		else:
			quickfix.IntField.__init__(self, 1413, data)

class NoNested4PartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1414)
		else:
			quickfix.IntField.__init__(self, 1414, data)

class Nested4PartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1415)
		else:
			quickfix.StringField.__init__(self, 1415, data)

class Nested4PartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1416)
		else:
			quickfix.CharField.__init__(self, 1416, data)

class Nested4PartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1417)
		else:
			quickfix.IntField.__init__(self, 1417, data)

class LegLastQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1418)
		else:
			quickfix.DoubleField.__init__(self, 1418, data)

class UnderlyingExerciseStyle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1419)
		else:
			quickfix.IntField.__init__(self, 1419, data)

class LegExerciseStyle(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1420)
		else:
			quickfix.IntField.__init__(self, 1420, data)

class LegPriceUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1421)
		else:
			quickfix.StringField.__init__(self, 1421, data)

class LegPriceUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1422)
		else:
			quickfix.DoubleField.__init__(self, 1422, data)

class UnderlyingUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1423)
		else:
			quickfix.DoubleField.__init__(self, 1423, data)

class UnderlyingPriceUnitOfMeasure(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1424)
		else:
			quickfix.StringField.__init__(self, 1424, data)

class UnderlyingPriceUnitOfMeasureQty(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1425)
		else:
			quickfix.DoubleField.__init__(self, 1425, data)

class ApplReportType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1426)
		else:
			quickfix.IntField.__init__(self, 1426, data)

class HaltReasonInt(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 327)
		else:
			quickfix.IntField.__init__(self, 327, data)

class SideLastQty(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1009)
		else:
			quickfix.IntField.__init__(self, 1009, data)

class UnderlyingInstrumentPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1059)
		else:
			quickfix.StringField.__init__(self, 1059, data)

class UnderlyingInstrumentPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1060)
		else:
			quickfix.CharField.__init__(self, 1060, data)

class UnderlyingInstrumentPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1061)
		else:
			quickfix.IntField.__init__(self, 1061, data)

class UnderlyingInstrumentPartySubID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1063)
		else:
			quickfix.StringField.__init__(self, 1063, data)

class UnderlyingInstrumentPartySubIDType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1064)
		else:
			quickfix.IntField.__init__(self, 1064, data)

class OptPayoutAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1195)
		else:
			quickfix.DoubleField.__init__(self, 1195, data)

class ValuationMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1197)
		else:
			quickfix.StringField.__init__(self, 1197, data)

class DerivativeValuationMethod(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1319)
		else:
			quickfix.StringField.__init__(self, 1319, data)

class SideExecID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1427)
		else:
			quickfix.StringField.__init__(self, 1427, data)

class OrderDelay(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1428)
		else:
			quickfix.IntField.__init__(self, 1428, data)

class OrderDelayUnit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1429)
		else:
			quickfix.IntField.__init__(self, 1429, data)

class VenueType(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1430)
		else:
			quickfix.CharField.__init__(self, 1430, data)

class RefOrdIDReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1431)
		else:
			quickfix.IntField.__init__(self, 1431, data)

class OrigCustOrderCapacity(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1432)
		else:
			quickfix.IntField.__init__(self, 1432, data)

class RefApplReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1433)
		else:
			quickfix.StringField.__init__(self, 1433, data)

class ModelType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1434)
		else:
			quickfix.IntField.__init__(self, 1434, data)

class ContractMultiplierUnit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1435)
		else:
			quickfix.IntField.__init__(self, 1435, data)

class LegContractMultiplierUnit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1436)
		else:
			quickfix.IntField.__init__(self, 1436, data)

class UnderlyingContractMultiplierUnit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1437)
		else:
			quickfix.IntField.__init__(self, 1437, data)

class DerivativeContractMultiplierUnit(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1438)
		else:
			quickfix.IntField.__init__(self, 1438, data)

class FlowScheduleType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1439)
		else:
			quickfix.IntField.__init__(self, 1439, data)

class LegFlowScheduleType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1440)
		else:
			quickfix.IntField.__init__(self, 1440, data)

class UnderlyingFlowScheduleType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1441)
		else:
			quickfix.IntField.__init__(self, 1441, data)

class DerivativeFlowScheduleType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1442)
		else:
			quickfix.IntField.__init__(self, 1442, data)

class FillLiquidityInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1443)
		else:
			quickfix.IntField.__init__(self, 1443, data)

class SideLiquidityInd(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1444)
		else:
			quickfix.IntField.__init__(self, 1444, data)

class NoRateSources(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1445)
		else:
			quickfix.IntField.__init__(self, 1445, data)

class RateSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1446)
		else:
			quickfix.IntField.__init__(self, 1446, data)

class RateSourceType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1447)
		else:
			quickfix.IntField.__init__(self, 1447, data)

class ReferencePage(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1448)
		else:
			quickfix.StringField.__init__(self, 1448, data)

class RestructuringType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1449)
		else:
			quickfix.StringField.__init__(self, 1449, data)

class Seniority(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1450)
		else:
			quickfix.StringField.__init__(self, 1450, data)

class NotionalPercentageOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1451)
		else:
			quickfix.DoubleField.__init__(self, 1451, data)

class OriginalNotionalPercentageOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1452)
		else:
			quickfix.DoubleField.__init__(self, 1452, data)

class UnderlyingRestructuringType(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1453)
		else:
			quickfix.StringField.__init__(self, 1453, data)

class UnderlyingSeniority(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1454)
		else:
			quickfix.StringField.__init__(self, 1454, data)

class UnderlyingNotionalPercentageOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1455)
		else:
			quickfix.DoubleField.__init__(self, 1455, data)

class UnderlyingOriginalNotionalPercentageOutstanding(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1456)
		else:
			quickfix.DoubleField.__init__(self, 1456, data)

class AttachmentPoint(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1457)
		else:
			quickfix.DoubleField.__init__(self, 1457, data)

class DetachmentPoint(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1458)
		else:
			quickfix.DoubleField.__init__(self, 1458, data)

class UnderlyingAttachmentPoint(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1459)
		else:
			quickfix.DoubleField.__init__(self, 1459, data)

class UnderlyingDetachmentPoint(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1460)
		else:
			quickfix.DoubleField.__init__(self, 1460, data)

class NoTargetPartyIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1461)
		else:
			quickfix.IntField.__init__(self, 1461, data)

class TargetPartyID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1462)
		else:
			quickfix.StringField.__init__(self, 1462, data)

class TargetPartyIDSource(quickfix.CharField):
	def __init__(self, data = None):
		if data == None:
			quickfix.CharField.__init__(self, 1463)
		else:
			quickfix.CharField.__init__(self, 1463, data)

class TargetPartyRole(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1464)
		else:
			quickfix.IntField.__init__(self, 1464, data)

class SecurityListID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1465)
		else:
			quickfix.StringField.__init__(self, 1465, data)

class SecurityListRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1466)
		else:
			quickfix.StringField.__init__(self, 1466, data)

class SecurityListDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1467)
		else:
			quickfix.StringField.__init__(self, 1467, data)

class EncodedSecurityListDescLen(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1468)
		else:
			quickfix.IntField.__init__(self, 1468, data)

class EncodedSecurityListDesc(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1469)
		else:
			quickfix.StringField.__init__(self, 1469, data)

class SecurityListType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1470)
		else:
			quickfix.IntField.__init__(self, 1470, data)

class SecurityListTypeSource(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1471)
		else:
			quickfix.IntField.__init__(self, 1471, data)

class NewsID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1472)
		else:
			quickfix.StringField.__init__(self, 1472, data)

class NewsCategory(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1473)
		else:
			quickfix.IntField.__init__(self, 1473, data)

class LanguageCode(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1474)
		else:
			quickfix.StringField.__init__(self, 1474, data)

class NoNewsRefIDs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1475)
		else:
			quickfix.IntField.__init__(self, 1475, data)

class NewsRefID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1476)
		else:
			quickfix.StringField.__init__(self, 1476, data)

class NewsRefType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1477)
		else:
			quickfix.IntField.__init__(self, 1477, data)

class StrikePriceDeterminationMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1478)
		else:
			quickfix.IntField.__init__(self, 1478, data)

class StrikePriceBoundaryMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1479)
		else:
			quickfix.IntField.__init__(self, 1479, data)

class StrikePriceBoundaryPrecision(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1480)
		else:
			quickfix.DoubleField.__init__(self, 1480, data)

class UnderlyingPriceDeterminationMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1481)
		else:
			quickfix.IntField.__init__(self, 1481, data)

class OptPayoutType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1482)
		else:
			quickfix.IntField.__init__(self, 1482, data)

class NoComplexEvents(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1483)
		else:
			quickfix.IntField.__init__(self, 1483, data)

class ComplexEventType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1484)
		else:
			quickfix.IntField.__init__(self, 1484, data)

class ComplexOptPayoutAmount(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1485)
		else:
			quickfix.DoubleField.__init__(self, 1485, data)

class ComplexEventPrice(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1486)
		else:
			quickfix.DoubleField.__init__(self, 1486, data)

class ComplexEventPriceBoundaryMethod(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1487)
		else:
			quickfix.IntField.__init__(self, 1487, data)

class ComplexEventPriceBoundaryPrecision(quickfix.DoubleField):
	def __init__(self, data = None):
		if data == None:
			quickfix.DoubleField.__init__(self, 1488)
		else:
			quickfix.DoubleField.__init__(self, 1488, data)

class ComplexEventPriceTimeType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1489)
		else:
			quickfix.IntField.__init__(self, 1489, data)

class ComplexEventCondition(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1490)
		else:
			quickfix.IntField.__init__(self, 1490, data)

class NoComplexEventDates(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1491)
		else:
			quickfix.IntField.__init__(self, 1491, data)

class ComplexEventStartDate(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1492)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1492, data)

class ComplexEventEndDate(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1493)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1493, data)

class NoComplexEventTimes(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1494)
		else:
			quickfix.IntField.__init__(self, 1494, data)

class ComplexEventStartTime(quickfix.UtcTimeOnlyField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeOnlyField.__init__(self, 1495)
		else:
			quickfix.UtcTimeOnlyField.__init__(self, 1495, data)

class ComplexEventEndTime(quickfix.UtcTimeOnlyField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeOnlyField.__init__(self, 1496)
		else:
			quickfix.UtcTimeOnlyField.__init__(self, 1496, data)

class StreamAsgnReqID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1497)
		else:
			quickfix.StringField.__init__(self, 1497, data)

class StreamAsgnReqType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1498)
		else:
			quickfix.IntField.__init__(self, 1498, data)

class NoAsgnReqs(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1499)
		else:
			quickfix.IntField.__init__(self, 1499, data)

class MDStreamID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1500)
		else:
			quickfix.StringField.__init__(self, 1500, data)

class StreamAsgnRptID(quickfix.StringField):
	def __init__(self, data = None):
		if data == None:
			quickfix.StringField.__init__(self, 1501)
		else:
			quickfix.StringField.__init__(self, 1501, data)

class StreamAsgnRejReason(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1502)
		else:
			quickfix.IntField.__init__(self, 1502, data)

class StreamAsgnAckType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1503)
		else:
			quickfix.IntField.__init__(self, 1503, data)

class RelSymTransactTime(quickfix.UtcTimeStampField):
	def __init__(self, data = None):
		if data == None:
			quickfix.UtcTimeStampField.__init__(self, 1504)
		else:
			quickfix.UtcTimeStampField.__init__(self, 1504, data)

class StreamAsgnType(quickfix.IntField):
	def __init__(self, data = None):
		if data == None:
			quickfix.IntField.__init__(self, 1617)
		else:
			quickfix.IntField.__init__(self, 1617, data)

