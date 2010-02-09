module Quickfix
	class BeginSeqNo < Quickfix::IntField
		def BeginSeqNo.field
			return 7
		end
		def initialize(data = nil)
			if( data == nil )
				super(7)
			else
				super(7, data)
			end
		end
	end

	class BeginString < Quickfix::StringField
		def BeginString.field
			return 8
		end
		def initialize(data = nil)
			if( data == nil )
				super(8)
			else
				super(8, data)
			end
		end
	end

	class BodyLength < Quickfix::IntField
		def BodyLength.field
			return 9
		end
		def initialize(data = nil)
			if( data == nil )
				super(9)
			else
				super(9, data)
			end
		end
	end

	class CheckSum < Quickfix::CheckSumField
		def CheckSum.field
			return 10
		end
		def initialize(data = nil)
			if( data == nil )
				super(10)
			else
				super(10, data)
			end
		end
	end

	class EndSeqNo < Quickfix::IntField
		def EndSeqNo.field
			return 16
		end
		def initialize(data = nil)
			if( data == nil )
				super(16)
			else
				super(16, data)
			end
		end
	end

	class MsgSeqNum < Quickfix::IntField
		def MsgSeqNum.field
			return 34
		end
		def initialize(data = nil)
			if( data == nil )
				super(34)
			else
				super(34, data)
			end
		end
	end

	class MsgType < Quickfix::StringField
		def MsgType.field
			return 35
		end
		def initialize(data = nil)
			if( data == nil )
				super(35)
			else
				super(35, data)
			end
		end
	end

	class NewSeqNo < Quickfix::IntField
		def NewSeqNo.field
			return 36
		end
		def initialize(data = nil)
			if( data == nil )
				super(36)
			else
				super(36, data)
			end
		end
	end

	class PossDupFlag < Quickfix::BoolField
		def PossDupFlag.field
			return 43
		end
		def initialize(data = nil)
			if( data == nil )
				super(43)
			else
				super(43, data)
			end
		end
	end

	class RefSeqNum < Quickfix::IntField
		def RefSeqNum.field
			return 45
		end
		def initialize(data = nil)
			if( data == nil )
				super(45)
			else
				super(45, data)
			end
		end
	end

	class SenderCompID < Quickfix::StringField
		def SenderCompID.field
			return 49
		end
		def initialize(data = nil)
			if( data == nil )
				super(49)
			else
				super(49, data)
			end
		end
	end

	class SenderSubID < Quickfix::StringField
		def SenderSubID.field
			return 50
		end
		def initialize(data = nil)
			if( data == nil )
				super(50)
			else
				super(50, data)
			end
		end
	end

	class SendingTime < Quickfix::UtcTimeStampField
		def SendingTime.field
			return 52
		end
		def initialize(data = nil)
			if( data == nil )
				super(52)
			else
				super(52, data)
			end
		end
	end

	class TargetCompID < Quickfix::StringField
		def TargetCompID.field
			return 56
		end
		def initialize(data = nil)
			if( data == nil )
				super(56)
			else
				super(56, data)
			end
		end
	end

	class TargetSubID < Quickfix::StringField
		def TargetSubID.field
			return 57
		end
		def initialize(data = nil)
			if( data == nil )
				super(57)
			else
				super(57, data)
			end
		end
	end

	class Text < Quickfix::StringField
		def Text.field
			return 58
		end
		def initialize(data = nil)
			if( data == nil )
				super(58)
			else
				super(58, data)
			end
		end
	end

	class Signature < Quickfix::StringField
		def Signature.field
			return 89
		end
		def initialize(data = nil)
			if( data == nil )
				super(89)
			else
				super(89, data)
			end
		end
	end

	class SecureDataLen < Quickfix::IntField
		def SecureDataLen.field
			return 90
		end
		def initialize(data = nil)
			if( data == nil )
				super(90)
			else
				super(90, data)
			end
		end
	end

	class SecureData < Quickfix::StringField
		def SecureData.field
			return 91
		end
		def initialize(data = nil)
			if( data == nil )
				super(91)
			else
				super(91, data)
			end
		end
	end

	class SignatureLength < Quickfix::IntField
		def SignatureLength.field
			return 93
		end
		def initialize(data = nil)
			if( data == nil )
				super(93)
			else
				super(93, data)
			end
		end
	end

	class RawDataLength < Quickfix::IntField
		def RawDataLength.field
			return 95
		end
		def initialize(data = nil)
			if( data == nil )
				super(95)
			else
				super(95, data)
			end
		end
	end

	class RawData < Quickfix::StringField
		def RawData.field
			return 96
		end
		def initialize(data = nil)
			if( data == nil )
				super(96)
			else
				super(96, data)
			end
		end
	end

	class PossResend < Quickfix::BoolField
		def PossResend.field
			return 97
		end
		def initialize(data = nil)
			if( data == nil )
				super(97)
			else
				super(97, data)
			end
		end
	end

	class EncryptMethod < Quickfix::IntField
		def EncryptMethod.field
			return 98
		end
		def initialize(data = nil)
			if( data == nil )
				super(98)
			else
				super(98, data)
			end
		end
	end

	class HeartBtInt < Quickfix::IntField
		def HeartBtInt.field
			return 108
		end
		def initialize(data = nil)
			if( data == nil )
				super(108)
			else
				super(108, data)
			end
		end
	end

	class TestReqID < Quickfix::StringField
		def TestReqID.field
			return 112
		end
		def initialize(data = nil)
			if( data == nil )
				super(112)
			else
				super(112, data)
			end
		end
	end

	class OnBehalfOfCompID < Quickfix::StringField
		def OnBehalfOfCompID.field
			return 115
		end
		def initialize(data = nil)
			if( data == nil )
				super(115)
			else
				super(115, data)
			end
		end
	end

	class OnBehalfOfSubID < Quickfix::StringField
		def OnBehalfOfSubID.field
			return 116
		end
		def initialize(data = nil)
			if( data == nil )
				super(116)
			else
				super(116, data)
			end
		end
	end

	class OrigSendingTime < Quickfix::UtcTimeStampField
		def OrigSendingTime.field
			return 122
		end
		def initialize(data = nil)
			if( data == nil )
				super(122)
			else
				super(122, data)
			end
		end
	end

	class GapFillFlag < Quickfix::BoolField
		def GapFillFlag.field
			return 123
		end
		def initialize(data = nil)
			if( data == nil )
				super(123)
			else
				super(123, data)
			end
		end
	end

	class DeliverToCompID < Quickfix::StringField
		def DeliverToCompID.field
			return 128
		end
		def initialize(data = nil)
			if( data == nil )
				super(128)
			else
				super(128, data)
			end
		end
	end

	class DeliverToSubID < Quickfix::StringField
		def DeliverToSubID.field
			return 129
		end
		def initialize(data = nil)
			if( data == nil )
				super(129)
			else
				super(129, data)
			end
		end
	end

	class ResetSeqNumFlag < Quickfix::BoolField
		def ResetSeqNumFlag.field
			return 141
		end
		def initialize(data = nil)
			if( data == nil )
				super(141)
			else
				super(141, data)
			end
		end
	end

	class SenderLocationID < Quickfix::StringField
		def SenderLocationID.field
			return 142
		end
		def initialize(data = nil)
			if( data == nil )
				super(142)
			else
				super(142, data)
			end
		end
	end

	class TargetLocationID < Quickfix::StringField
		def TargetLocationID.field
			return 143
		end
		def initialize(data = nil)
			if( data == nil )
				super(143)
			else
				super(143, data)
			end
		end
	end

	class OnBehalfOfLocationID < Quickfix::StringField
		def OnBehalfOfLocationID.field
			return 144
		end
		def initialize(data = nil)
			if( data == nil )
				super(144)
			else
				super(144, data)
			end
		end
	end

	class DeliverToLocationID < Quickfix::StringField
		def DeliverToLocationID.field
			return 145
		end
		def initialize(data = nil)
			if( data == nil )
				super(145)
			else
				super(145, data)
			end
		end
	end

	class XmlDataLen < Quickfix::IntField
		def XmlDataLen.field
			return 212
		end
		def initialize(data = nil)
			if( data == nil )
				super(212)
			else
				super(212, data)
			end
		end
	end

	class XmlData < Quickfix::StringField
		def XmlData.field
			return 213
		end
		def initialize(data = nil)
			if( data == nil )
				super(213)
			else
				super(213, data)
			end
		end
	end

	class MessageEncoding < Quickfix::StringField
		def MessageEncoding.field
			return 347
		end
		def initialize(data = nil)
			if( data == nil )
				super(347)
			else
				super(347, data)
			end
		end
	end

	class EncodedTextLen < Quickfix::IntField
		def EncodedTextLen.field
			return 354
		end
		def initialize(data = nil)
			if( data == nil )
				super(354)
			else
				super(354, data)
			end
		end
	end

	class EncodedText < Quickfix::StringField
		def EncodedText.field
			return 355
		end
		def initialize(data = nil)
			if( data == nil )
				super(355)
			else
				super(355, data)
			end
		end
	end

	class LastMsgSeqNumProcessed < Quickfix::IntField
		def LastMsgSeqNumProcessed.field
			return 369
		end
		def initialize(data = nil)
			if( data == nil )
				super(369)
			else
				super(369, data)
			end
		end
	end

	class RefTagID < Quickfix::IntField
		def RefTagID.field
			return 371
		end
		def initialize(data = nil)
			if( data == nil )
				super(371)
			else
				super(371, data)
			end
		end
	end

	class RefMsgType < Quickfix::StringField
		def RefMsgType.field
			return 372
		end
		def initialize(data = nil)
			if( data == nil )
				super(372)
			else
				super(372, data)
			end
		end
	end

	class SessionRejectReason < Quickfix::IntField
		def SessionRejectReason.field
			return 373
		end
		def initialize(data = nil)
			if( data == nil )
				super(373)
			else
				super(373, data)
			end
		end
	end

	class MaxMessageSize < Quickfix::IntField
		def MaxMessageSize.field
			return 383
		end
		def initialize(data = nil)
			if( data == nil )
				super(383)
			else
				super(383, data)
			end
		end
	end

	class NoMsgTypes < Quickfix::IntField
		def NoMsgTypes.field
			return 384
		end
		def initialize(data = nil)
			if( data == nil )
				super(384)
			else
				super(384, data)
			end
		end
	end

	class MsgDirection < Quickfix::CharField
		def MsgDirection.field
			return 385
		end
		def initialize(data = nil)
			if( data == nil )
				super(385)
			else
				super(385, data)
			end
		end
	end

	class TestMessageIndicator < Quickfix::BoolField
		def TestMessageIndicator.field
			return 464
		end
		def initialize(data = nil)
			if( data == nil )
				super(464)
			else
				super(464, data)
			end
		end
	end

	class Username < Quickfix::StringField
		def Username.field
			return 553
		end
		def initialize(data = nil)
			if( data == nil )
				super(553)
			else
				super(553, data)
			end
		end
	end

	class Password < Quickfix::StringField
		def Password.field
			return 554
		end
		def initialize(data = nil)
			if( data == nil )
				super(554)
			else
				super(554, data)
			end
		end
	end

	class NoHops < Quickfix::IntField
		def NoHops.field
			return 627
		end
		def initialize(data = nil)
			if( data == nil )
				super(627)
			else
				super(627, data)
			end
		end
	end

	class HopCompID < Quickfix::StringField
		def HopCompID.field
			return 628
		end
		def initialize(data = nil)
			if( data == nil )
				super(628)
			else
				super(628, data)
			end
		end
	end

	class HopSendingTime < Quickfix::UtcTimeStampField
		def HopSendingTime.field
			return 629
		end
		def initialize(data = nil)
			if( data == nil )
				super(629)
			else
				super(629, data)
			end
		end
	end

	class HopRefID < Quickfix::IntField
		def HopRefID.field
			return 630
		end
		def initialize(data = nil)
			if( data == nil )
				super(630)
			else
				super(630, data)
			end
		end
	end

	class NextExpectedMsgSeqNum < Quickfix::IntField
		def NextExpectedMsgSeqNum.field
			return 789
		end
		def initialize(data = nil)
			if( data == nil )
				super(789)
			else
				super(789, data)
			end
		end
	end

	class ApplVerID < Quickfix::StringField
		def ApplVerID.field
			return 1128
		end
		def initialize(data = nil)
			if( data == nil )
				super(1128)
			else
				super(1128, data)
			end
		end
	end

	class CstmApplVerID < Quickfix::StringField
		def CstmApplVerID.field
			return 1129
		end
		def initialize(data = nil)
			if( data == nil )
				super(1129)
			else
				super(1129, data)
			end
		end
	end

	class RefApplVerID < Quickfix::StringField
		def RefApplVerID.field
			return 1130
		end
		def initialize(data = nil)
			if( data == nil )
				super(1130)
			else
				super(1130, data)
			end
		end
	end

	class RefCstmApplVerID < Quickfix::StringField
		def RefCstmApplVerID.field
			return 1131
		end
		def initialize(data = nil)
			if( data == nil )
				super(1131)
			else
				super(1131, data)
			end
		end
	end

	class DefaultApplVerID < Quickfix::StringField
		def DefaultApplVerID.field
			return 1137
		end
		def initialize(data = nil)
			if( data == nil )
				super(1137)
			else
				super(1137, data)
			end
		end
	end

end
