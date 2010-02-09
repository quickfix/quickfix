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

