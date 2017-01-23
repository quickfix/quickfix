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

	class Account < Quickfix::StringField
		def Account.field
			return 1
		end
		def initialize(data = nil)
			if( data == nil )
				super(1)
			else
				super(1, data)
			end
		end
	end

	class AdvId < Quickfix::StringField
		def AdvId.field
			return 2
		end
		def initialize(data = nil)
			if( data == nil )
				super(2)
			else
				super(2, data)
			end
		end
	end

	class AdvRefID < Quickfix::StringField
		def AdvRefID.field
			return 3
		end
		def initialize(data = nil)
			if( data == nil )
				super(3)
			else
				super(3, data)
			end
		end
	end

	class AdvSide < Quickfix::CharField
		def AdvSide.field
			return 4
		end
		def initialize(data = nil)
			if( data == nil )
				super(4)
			else
				super(4, data)
			end
		end
	end

	class AdvTransType < Quickfix::StringField
		def AdvTransType.field
			return 5
		end
		def initialize(data = nil)
			if( data == nil )
				super(5)
			else
				super(5, data)
			end
		end
	end

	class AvgPx < Quickfix::DoubleField
		def AvgPx.field
			return 6
		end
		def initialize(data = nil)
			if( data == nil )
				super(6)
			else
				super(6, data)
			end
		end
	end

	class ClOrdID < Quickfix::StringField
		def ClOrdID.field
			return 11
		end
		def initialize(data = nil)
			if( data == nil )
				super(11)
			else
				super(11, data)
			end
		end
	end

	class Commission < Quickfix::DoubleField
		def Commission.field
			return 12
		end
		def initialize(data = nil)
			if( data == nil )
				super(12)
			else
				super(12, data)
			end
		end
	end

	class CommType < Quickfix::CharField
		def CommType.field
			return 13
		end
		def initialize(data = nil)
			if( data == nil )
				super(13)
			else
				super(13, data)
			end
		end
	end

	class CumQty < Quickfix::DoubleField
		def CumQty.field
			return 14
		end
		def initialize(data = nil)
			if( data == nil )
				super(14)
			else
				super(14, data)
			end
		end
	end

	class Currency < Quickfix::StringField
		def Currency.field
			return 15
		end
		def initialize(data = nil)
			if( data == nil )
				super(15)
			else
				super(15, data)
			end
		end
	end

	class ExecID < Quickfix::StringField
		def ExecID.field
			return 17
		end
		def initialize(data = nil)
			if( data == nil )
				super(17)
			else
				super(17, data)
			end
		end
	end

	class ExecInst < Quickfix::StringField
		def ExecInst.field
			return 18
		end
		def initialize(data = nil)
			if( data == nil )
				super(18)
			else
				super(18, data)
			end
		end
	end

	class ExecRefID < Quickfix::StringField
		def ExecRefID.field
			return 19
		end
		def initialize(data = nil)
			if( data == nil )
				super(19)
			else
				super(19, data)
			end
		end
	end

	class ExecTransType < Quickfix::CharField
		def ExecTransType.field
			return 20
		end
		def initialize(data = nil)
			if( data == nil )
				super(20)
			else
				super(20, data)
			end
		end
	end

	class HandlInst < Quickfix::CharField
		def HandlInst.field
			return 21
		end
		def initialize(data = nil)
			if( data == nil )
				super(21)
			else
				super(21, data)
			end
		end
	end

	class IDSource < Quickfix::StringField
		def IDSource.field
			return 22
		end
		def initialize(data = nil)
			if( data == nil )
				super(22)
			else
				super(22, data)
			end
		end
	end

	class IOIid < Quickfix::StringField
		def IOIid.field
			return 23
		end
		def initialize(data = nil)
			if( data == nil )
				super(23)
			else
				super(23, data)
			end
		end
	end

	class IOIOthSvc < Quickfix::CharField
		def IOIOthSvc.field
			return 24
		end
		def initialize(data = nil)
			if( data == nil )
				super(24)
			else
				super(24, data)
			end
		end
	end

	class IOIQltyInd < Quickfix::CharField
		def IOIQltyInd.field
			return 25
		end
		def initialize(data = nil)
			if( data == nil )
				super(25)
			else
				super(25, data)
			end
		end
	end

	class IOIRefID < Quickfix::StringField
		def IOIRefID.field
			return 26
		end
		def initialize(data = nil)
			if( data == nil )
				super(26)
			else
				super(26, data)
			end
		end
	end

	class IOIShares < Quickfix::StringField
		def IOIShares.field
			return 27
		end
		def initialize(data = nil)
			if( data == nil )
				super(27)
			else
				super(27, data)
			end
		end
	end

	class IOITransType < Quickfix::CharField
		def IOITransType.field
			return 28
		end
		def initialize(data = nil)
			if( data == nil )
				super(28)
			else
				super(28, data)
			end
		end
	end

	class LastCapacity < Quickfix::CharField
		def LastCapacity.field
			return 29
		end
		def initialize(data = nil)
			if( data == nil )
				super(29)
			else
				super(29, data)
			end
		end
	end

	class LastMkt < Quickfix::StringField
		def LastMkt.field
			return 30
		end
		def initialize(data = nil)
			if( data == nil )
				super(30)
			else
				super(30, data)
			end
		end
	end

	class LastPx < Quickfix::DoubleField
		def LastPx.field
			return 31
		end
		def initialize(data = nil)
			if( data == nil )
				super(31)
			else
				super(31, data)
			end
		end
	end

	class LastShares < Quickfix::DoubleField
		def LastShares.field
			return 32
		end
		def initialize(data = nil)
			if( data == nil )
				super(32)
			else
				super(32, data)
			end
		end
	end

	class LinesOfText < Quickfix::IntField
		def LinesOfText.field
			return 33
		end
		def initialize(data = nil)
			if( data == nil )
				super(33)
			else
				super(33, data)
			end
		end
	end

	class OrderID < Quickfix::StringField
		def OrderID.field
			return 37
		end
		def initialize(data = nil)
			if( data == nil )
				super(37)
			else
				super(37, data)
			end
		end
	end

	class OrderQty < Quickfix::DoubleField
		def OrderQty.field
			return 38
		end
		def initialize(data = nil)
			if( data == nil )
				super(38)
			else
				super(38, data)
			end
		end
	end

	class OrdStatus < Quickfix::CharField
		def OrdStatus.field
			return 39
		end
		def initialize(data = nil)
			if( data == nil )
				super(39)
			else
				super(39, data)
			end
		end
	end

	class OrdType < Quickfix::CharField
		def OrdType.field
			return 40
		end
		def initialize(data = nil)
			if( data == nil )
				super(40)
			else
				super(40, data)
			end
		end
	end

	class OrigClOrdID < Quickfix::StringField
		def OrigClOrdID.field
			return 41
		end
		def initialize(data = nil)
			if( data == nil )
				super(41)
			else
				super(41, data)
			end
		end
	end

	class OrigTime < Quickfix::UtcTimeStampField
		def OrigTime.field
			return 42
		end
		def initialize(data = nil)
			if( data == nil )
				super(42)
			else
				super(42, data)
			end
		end
	end

	class Price < Quickfix::DoubleField
		def Price.field
			return 44
		end
		def initialize(data = nil)
			if( data == nil )
				super(44)
			else
				super(44, data)
			end
		end
	end

	class RelatdSym < Quickfix::StringField
		def RelatdSym.field
			return 46
		end
		def initialize(data = nil)
			if( data == nil )
				super(46)
			else
				super(46, data)
			end
		end
	end

	class Rule80A < Quickfix::CharField
		def Rule80A.field
			return 47
		end
		def initialize(data = nil)
			if( data == nil )
				super(47)
			else
				super(47, data)
			end
		end
	end

	class SecurityID < Quickfix::StringField
		def SecurityID.field
			return 48
		end
		def initialize(data = nil)
			if( data == nil )
				super(48)
			else
				super(48, data)
			end
		end
	end

	class Shares < Quickfix::DoubleField
		def Shares.field
			return 53
		end
		def initialize(data = nil)
			if( data == nil )
				super(53)
			else
				super(53, data)
			end
		end
	end

	class Side < Quickfix::CharField
		def Side.field
			return 54
		end
		def initialize(data = nil)
			if( data == nil )
				super(54)
			else
				super(54, data)
			end
		end
	end

	class Symbol < Quickfix::StringField
		def Symbol.field
			return 55
		end
		def initialize(data = nil)
			if( data == nil )
				super(55)
			else
				super(55, data)
			end
		end
	end

	class TimeInForce < Quickfix::CharField
		def TimeInForce.field
			return 59
		end
		def initialize(data = nil)
			if( data == nil )
				super(59)
			else
				super(59, data)
			end
		end
	end

	class TransactTime < Quickfix::UtcTimeStampField
		def TransactTime.field
			return 60
		end
		def initialize(data = nil)
			if( data == nil )
				super(60)
			else
				super(60, data)
			end
		end
	end

	class Urgency < Quickfix::CharField
		def Urgency.field
			return 61
		end
		def initialize(data = nil)
			if( data == nil )
				super(61)
			else
				super(61, data)
			end
		end
	end

	class ValidUntilTime < Quickfix::UtcTimeStampField
		def ValidUntilTime.field
			return 62
		end
		def initialize(data = nil)
			if( data == nil )
				super(62)
			else
				super(62, data)
			end
		end
	end

	class SettlmntTyp < Quickfix::CharField
		def SettlmntTyp.field
			return 63
		end
		def initialize(data = nil)
			if( data == nil )
				super(63)
			else
				super(63, data)
			end
		end
	end

	class FutSettDate < Quickfix::StringField
		def FutSettDate.field
			return 64
		end
		def initialize(data = nil)
			if( data == nil )
				super(64)
			else
				super(64, data)
			end
		end
	end

	class SymbolSfx < Quickfix::StringField
		def SymbolSfx.field
			return 65
		end
		def initialize(data = nil)
			if( data == nil )
				super(65)
			else
				super(65, data)
			end
		end
	end

	class ListID < Quickfix::StringField
		def ListID.field
			return 66
		end
		def initialize(data = nil)
			if( data == nil )
				super(66)
			else
				super(66, data)
			end
		end
	end

	class ListSeqNo < Quickfix::IntField
		def ListSeqNo.field
			return 67
		end
		def initialize(data = nil)
			if( data == nil )
				super(67)
			else
				super(67, data)
			end
		end
	end

	class ListNoOrds < Quickfix::IntField
		def ListNoOrds.field
			return 68
		end
		def initialize(data = nil)
			if( data == nil )
				super(68)
			else
				super(68, data)
			end
		end
	end

	class ListExecInst < Quickfix::StringField
		def ListExecInst.field
			return 69
		end
		def initialize(data = nil)
			if( data == nil )
				super(69)
			else
				super(69, data)
			end
		end
	end

	class AllocID < Quickfix::StringField
		def AllocID.field
			return 70
		end
		def initialize(data = nil)
			if( data == nil )
				super(70)
			else
				super(70, data)
			end
		end
	end

	class AllocTransType < Quickfix::CharField
		def AllocTransType.field
			return 71
		end
		def initialize(data = nil)
			if( data == nil )
				super(71)
			else
				super(71, data)
			end
		end
	end

	class RefAllocID < Quickfix::StringField
		def RefAllocID.field
			return 72
		end
		def initialize(data = nil)
			if( data == nil )
				super(72)
			else
				super(72, data)
			end
		end
	end

	class NoOrders < Quickfix::IntField
		def NoOrders.field
			return 73
		end
		def initialize(data = nil)
			if( data == nil )
				super(73)
			else
				super(73, data)
			end
		end
	end

	class AvgPrxPrecision < Quickfix::IntField
		def AvgPrxPrecision.field
			return 74
		end
		def initialize(data = nil)
			if( data == nil )
				super(74)
			else
				super(74, data)
			end
		end
	end

	class TradeDate < Quickfix::StringField
		def TradeDate.field
			return 75
		end
		def initialize(data = nil)
			if( data == nil )
				super(75)
			else
				super(75, data)
			end
		end
	end

	class ExecBroker < Quickfix::StringField
		def ExecBroker.field
			return 76
		end
		def initialize(data = nil)
			if( data == nil )
				super(76)
			else
				super(76, data)
			end
		end
	end

	class OpenClose < Quickfix::CharField
		def OpenClose.field
			return 77
		end
		def initialize(data = nil)
			if( data == nil )
				super(77)
			else
				super(77, data)
			end
		end
	end

	class NoAllocs < Quickfix::IntField
		def NoAllocs.field
			return 78
		end
		def initialize(data = nil)
			if( data == nil )
				super(78)
			else
				super(78, data)
			end
		end
	end

	class AllocAccount < Quickfix::StringField
		def AllocAccount.field
			return 79
		end
		def initialize(data = nil)
			if( data == nil )
				super(79)
			else
				super(79, data)
			end
		end
	end

	class AllocShares < Quickfix::DoubleField
		def AllocShares.field
			return 80
		end
		def initialize(data = nil)
			if( data == nil )
				super(80)
			else
				super(80, data)
			end
		end
	end

	class ProcessCode < Quickfix::CharField
		def ProcessCode.field
			return 81
		end
		def initialize(data = nil)
			if( data == nil )
				super(81)
			else
				super(81, data)
			end
		end
	end

	class NoRpts < Quickfix::IntField
		def NoRpts.field
			return 82
		end
		def initialize(data = nil)
			if( data == nil )
				super(82)
			else
				super(82, data)
			end
		end
	end

	class RptSeq < Quickfix::IntField
		def RptSeq.field
			return 83
		end
		def initialize(data = nil)
			if( data == nil )
				super(83)
			else
				super(83, data)
			end
		end
	end

	class CxlQty < Quickfix::DoubleField
		def CxlQty.field
			return 84
		end
		def initialize(data = nil)
			if( data == nil )
				super(84)
			else
				super(84, data)
			end
		end
	end

	class NoDlvyInst < Quickfix::IntField
		def NoDlvyInst.field
			return 85
		end
		def initialize(data = nil)
			if( data == nil )
				super(85)
			else
				super(85, data)
			end
		end
	end

	class DlvyInst < Quickfix::StringField
		def DlvyInst.field
			return 86
		end
		def initialize(data = nil)
			if( data == nil )
				super(86)
			else
				super(86, data)
			end
		end
	end

	class AllocStatus < Quickfix::IntField
		def AllocStatus.field
			return 87
		end
		def initialize(data = nil)
			if( data == nil )
				super(87)
			else
				super(87, data)
			end
		end
	end

	class AllocRejCode < Quickfix::IntField
		def AllocRejCode.field
			return 88
		end
		def initialize(data = nil)
			if( data == nil )
				super(88)
			else
				super(88, data)
			end
		end
	end

	class BrokerOfCredit < Quickfix::StringField
		def BrokerOfCredit.field
			return 92
		end
		def initialize(data = nil)
			if( data == nil )
				super(92)
			else
				super(92, data)
			end
		end
	end

	class EmailType < Quickfix::CharField
		def EmailType.field
			return 94
		end
		def initialize(data = nil)
			if( data == nil )
				super(94)
			else
				super(94, data)
			end
		end
	end

	class StopPx < Quickfix::DoubleField
		def StopPx.field
			return 99
		end
		def initialize(data = nil)
			if( data == nil )
				super(99)
			else
				super(99, data)
			end
		end
	end

	class ExDestination < Quickfix::StringField
		def ExDestination.field
			return 100
		end
		def initialize(data = nil)
			if( data == nil )
				super(100)
			else
				super(100, data)
			end
		end
	end

	class CxlRejReason < Quickfix::IntField
		def CxlRejReason.field
			return 102
		end
		def initialize(data = nil)
			if( data == nil )
				super(102)
			else
				super(102, data)
			end
		end
	end

	class OrdRejReason < Quickfix::IntField
		def OrdRejReason.field
			return 103
		end
		def initialize(data = nil)
			if( data == nil )
				super(103)
			else
				super(103, data)
			end
		end
	end

	class IOIQualifier < Quickfix::CharField
		def IOIQualifier.field
			return 104
		end
		def initialize(data = nil)
			if( data == nil )
				super(104)
			else
				super(104, data)
			end
		end
	end

	class WaveNo < Quickfix::StringField
		def WaveNo.field
			return 105
		end
		def initialize(data = nil)
			if( data == nil )
				super(105)
			else
				super(105, data)
			end
		end
	end

	class Issuer < Quickfix::StringField
		def Issuer.field
			return 106
		end
		def initialize(data = nil)
			if( data == nil )
				super(106)
			else
				super(106, data)
			end
		end
	end

	class SecurityDesc < Quickfix::StringField
		def SecurityDesc.field
			return 107
		end
		def initialize(data = nil)
			if( data == nil )
				super(107)
			else
				super(107, data)
			end
		end
	end

	class ClientID < Quickfix::StringField
		def ClientID.field
			return 109
		end
		def initialize(data = nil)
			if( data == nil )
				super(109)
			else
				super(109, data)
			end
		end
	end

	class MinQty < Quickfix::DoubleField
		def MinQty.field
			return 110
		end
		def initialize(data = nil)
			if( data == nil )
				super(110)
			else
				super(110, data)
			end
		end
	end

	class MaxFloor < Quickfix::DoubleField
		def MaxFloor.field
			return 111
		end
		def initialize(data = nil)
			if( data == nil )
				super(111)
			else
				super(111, data)
			end
		end
	end

	class ReportToExch < Quickfix::BoolField
		def ReportToExch.field
			return 113
		end
		def initialize(data = nil)
			if( data == nil )
				super(113)
			else
				super(113, data)
			end
		end
	end

	class LocateReqd < Quickfix::BoolField
		def LocateReqd.field
			return 114
		end
		def initialize(data = nil)
			if( data == nil )
				super(114)
			else
				super(114, data)
			end
		end
	end

	class QuoteID < Quickfix::StringField
		def QuoteID.field
			return 117
		end
		def initialize(data = nil)
			if( data == nil )
				super(117)
			else
				super(117, data)
			end
		end
	end

	class NetMoney < Quickfix::DoubleField
		def NetMoney.field
			return 118
		end
		def initialize(data = nil)
			if( data == nil )
				super(118)
			else
				super(118, data)
			end
		end
	end

	class SettlCurrAmt < Quickfix::DoubleField
		def SettlCurrAmt.field
			return 119
		end
		def initialize(data = nil)
			if( data == nil )
				super(119)
			else
				super(119, data)
			end
		end
	end

	class SettlCurrency < Quickfix::StringField
		def SettlCurrency.field
			return 120
		end
		def initialize(data = nil)
			if( data == nil )
				super(120)
			else
				super(120, data)
			end
		end
	end

	class ForexReq < Quickfix::BoolField
		def ForexReq.field
			return 121
		end
		def initialize(data = nil)
			if( data == nil )
				super(121)
			else
				super(121, data)
			end
		end
	end

	class NoExecs < Quickfix::IntField
		def NoExecs.field
			return 124
		end
		def initialize(data = nil)
			if( data == nil )
				super(124)
			else
				super(124, data)
			end
		end
	end

	class CxlType < Quickfix::CharField
		def CxlType.field
			return 125
		end
		def initialize(data = nil)
			if( data == nil )
				super(125)
			else
				super(125, data)
			end
		end
	end

	class ExpireTime < Quickfix::UtcTimeStampField
		def ExpireTime.field
			return 126
		end
		def initialize(data = nil)
			if( data == nil )
				super(126)
			else
				super(126, data)
			end
		end
	end

	class DKReason < Quickfix::CharField
		def DKReason.field
			return 127
		end
		def initialize(data = nil)
			if( data == nil )
				super(127)
			else
				super(127, data)
			end
		end
	end

	class IOINaturalFlag < Quickfix::BoolField
		def IOINaturalFlag.field
			return 130
		end
		def initialize(data = nil)
			if( data == nil )
				super(130)
			else
				super(130, data)
			end
		end
	end

	class QuoteReqID < Quickfix::StringField
		def QuoteReqID.field
			return 131
		end
		def initialize(data = nil)
			if( data == nil )
				super(131)
			else
				super(131, data)
			end
		end
	end

	class BidPx < Quickfix::DoubleField
		def BidPx.field
			return 132
		end
		def initialize(data = nil)
			if( data == nil )
				super(132)
			else
				super(132, data)
			end
		end
	end

	class OfferPx < Quickfix::DoubleField
		def OfferPx.field
			return 133
		end
		def initialize(data = nil)
			if( data == nil )
				super(133)
			else
				super(133, data)
			end
		end
	end

	class BidSize < Quickfix::DoubleField
		def BidSize.field
			return 134
		end
		def initialize(data = nil)
			if( data == nil )
				super(134)
			else
				super(134, data)
			end
		end
	end

	class OfferSize < Quickfix::DoubleField
		def OfferSize.field
			return 135
		end
		def initialize(data = nil)
			if( data == nil )
				super(135)
			else
				super(135, data)
			end
		end
	end

	class NoMiscFees < Quickfix::IntField
		def NoMiscFees.field
			return 136
		end
		def initialize(data = nil)
			if( data == nil )
				super(136)
			else
				super(136, data)
			end
		end
	end

	class MiscFeeAmt < Quickfix::DoubleField
		def MiscFeeAmt.field
			return 137
		end
		def initialize(data = nil)
			if( data == nil )
				super(137)
			else
				super(137, data)
			end
		end
	end

	class MiscFeeCurr < Quickfix::StringField
		def MiscFeeCurr.field
			return 138
		end
		def initialize(data = nil)
			if( data == nil )
				super(138)
			else
				super(138, data)
			end
		end
	end

	class MiscFeeType < Quickfix::StringField
		def MiscFeeType.field
			return 139
		end
		def initialize(data = nil)
			if( data == nil )
				super(139)
			else
				super(139, data)
			end
		end
	end

	class PrevClosePx < Quickfix::DoubleField
		def PrevClosePx.field
			return 140
		end
		def initialize(data = nil)
			if( data == nil )
				super(140)
			else
				super(140, data)
			end
		end
	end

	class NoRelatedSym < Quickfix::IntField
		def NoRelatedSym.field
			return 146
		end
		def initialize(data = nil)
			if( data == nil )
				super(146)
			else
				super(146, data)
			end
		end
	end

	class Subject < Quickfix::StringField
		def Subject.field
			return 147
		end
		def initialize(data = nil)
			if( data == nil )
				super(147)
			else
				super(147, data)
			end
		end
	end

	class Headline < Quickfix::StringField
		def Headline.field
			return 148
		end
		def initialize(data = nil)
			if( data == nil )
				super(148)
			else
				super(148, data)
			end
		end
	end

	class URLLink < Quickfix::StringField
		def URLLink.field
			return 149
		end
		def initialize(data = nil)
			if( data == nil )
				super(149)
			else
				super(149, data)
			end
		end
	end

	class ExecType < Quickfix::CharField
		def ExecType.field
			return 150
		end
		def initialize(data = nil)
			if( data == nil )
				super(150)
			else
				super(150, data)
			end
		end
	end

	class LeavesQty < Quickfix::DoubleField
		def LeavesQty.field
			return 151
		end
		def initialize(data = nil)
			if( data == nil )
				super(151)
			else
				super(151, data)
			end
		end
	end

	class CashOrderQty < Quickfix::DoubleField
		def CashOrderQty.field
			return 152
		end
		def initialize(data = nil)
			if( data == nil )
				super(152)
			else
				super(152, data)
			end
		end
	end

	class AllocAvgPx < Quickfix::DoubleField
		def AllocAvgPx.field
			return 153
		end
		def initialize(data = nil)
			if( data == nil )
				super(153)
			else
				super(153, data)
			end
		end
	end

	class AllocNetMoney < Quickfix::DoubleField
		def AllocNetMoney.field
			return 154
		end
		def initialize(data = nil)
			if( data == nil )
				super(154)
			else
				super(154, data)
			end
		end
	end

	class SettlCurrFxRate < Quickfix::DoubleField
		def SettlCurrFxRate.field
			return 155
		end
		def initialize(data = nil)
			if( data == nil )
				super(155)
			else
				super(155, data)
			end
		end
	end

	class SettlCurrFxRateCalc < Quickfix::CharField
		def SettlCurrFxRateCalc.field
			return 156
		end
		def initialize(data = nil)
			if( data == nil )
				super(156)
			else
				super(156, data)
			end
		end
	end

	class NumDaysInterest < Quickfix::IntField
		def NumDaysInterest.field
			return 157
		end
		def initialize(data = nil)
			if( data == nil )
				super(157)
			else
				super(157, data)
			end
		end
	end

	class AccruedInterestRate < Quickfix::DoubleField
		def AccruedInterestRate.field
			return 158
		end
		def initialize(data = nil)
			if( data == nil )
				super(158)
			else
				super(158, data)
			end
		end
	end

	class AccruedInterestAmt < Quickfix::DoubleField
		def AccruedInterestAmt.field
			return 159
		end
		def initialize(data = nil)
			if( data == nil )
				super(159)
			else
				super(159, data)
			end
		end
	end

	class SettlInstMode < Quickfix::CharField
		def SettlInstMode.field
			return 160
		end
		def initialize(data = nil)
			if( data == nil )
				super(160)
			else
				super(160, data)
			end
		end
	end

	class AllocText < Quickfix::StringField
		def AllocText.field
			return 161
		end
		def initialize(data = nil)
			if( data == nil )
				super(161)
			else
				super(161, data)
			end
		end
	end

	class SettlInstID < Quickfix::StringField
		def SettlInstID.field
			return 162
		end
		def initialize(data = nil)
			if( data == nil )
				super(162)
			else
				super(162, data)
			end
		end
	end

	class SettlInstTransType < Quickfix::CharField
		def SettlInstTransType.field
			return 163
		end
		def initialize(data = nil)
			if( data == nil )
				super(163)
			else
				super(163, data)
			end
		end
	end

	class EmailThreadID < Quickfix::StringField
		def EmailThreadID.field
			return 164
		end
		def initialize(data = nil)
			if( data == nil )
				super(164)
			else
				super(164, data)
			end
		end
	end

	class SettlInstSource < Quickfix::CharField
		def SettlInstSource.field
			return 165
		end
		def initialize(data = nil)
			if( data == nil )
				super(165)
			else
				super(165, data)
			end
		end
	end

	class SettlLocation < Quickfix::StringField
		def SettlLocation.field
			return 166
		end
		def initialize(data = nil)
			if( data == nil )
				super(166)
			else
				super(166, data)
			end
		end
	end

	class SecurityType < Quickfix::StringField
		def SecurityType.field
			return 167
		end
		def initialize(data = nil)
			if( data == nil )
				super(167)
			else
				super(167, data)
			end
		end
	end

	class EffectiveTime < Quickfix::UtcTimeStampField
		def EffectiveTime.field
			return 168
		end
		def initialize(data = nil)
			if( data == nil )
				super(168)
			else
				super(168, data)
			end
		end
	end

	class StandInstDbType < Quickfix::IntField
		def StandInstDbType.field
			return 169
		end
		def initialize(data = nil)
			if( data == nil )
				super(169)
			else
				super(169, data)
			end
		end
	end

	class StandInstDbName < Quickfix::StringField
		def StandInstDbName.field
			return 170
		end
		def initialize(data = nil)
			if( data == nil )
				super(170)
			else
				super(170, data)
			end
		end
	end

	class StandInstDbID < Quickfix::StringField
		def StandInstDbID.field
			return 171
		end
		def initialize(data = nil)
			if( data == nil )
				super(171)
			else
				super(171, data)
			end
		end
	end

	class SettlDeliveryType < Quickfix::IntField
		def SettlDeliveryType.field
			return 172
		end
		def initialize(data = nil)
			if( data == nil )
				super(172)
			else
				super(172, data)
			end
		end
	end

	class SettlDepositoryCode < Quickfix::StringField
		def SettlDepositoryCode.field
			return 173
		end
		def initialize(data = nil)
			if( data == nil )
				super(173)
			else
				super(173, data)
			end
		end
	end

	class SettlBrkrCode < Quickfix::StringField
		def SettlBrkrCode.field
			return 174
		end
		def initialize(data = nil)
			if( data == nil )
				super(174)
			else
				super(174, data)
			end
		end
	end

	class SettlInstCode < Quickfix::StringField
		def SettlInstCode.field
			return 175
		end
		def initialize(data = nil)
			if( data == nil )
				super(175)
			else
				super(175, data)
			end
		end
	end

	class SecuritySettlAgentName < Quickfix::StringField
		def SecuritySettlAgentName.field
			return 176
		end
		def initialize(data = nil)
			if( data == nil )
				super(176)
			else
				super(176, data)
			end
		end
	end

	class SecuritySettlAgentCode < Quickfix::StringField
		def SecuritySettlAgentCode.field
			return 177
		end
		def initialize(data = nil)
			if( data == nil )
				super(177)
			else
				super(177, data)
			end
		end
	end

	class SecuritySettlAgentAcctNum < Quickfix::StringField
		def SecuritySettlAgentAcctNum.field
			return 178
		end
		def initialize(data = nil)
			if( data == nil )
				super(178)
			else
				super(178, data)
			end
		end
	end

	class SecuritySettlAgentAcctName < Quickfix::StringField
		def SecuritySettlAgentAcctName.field
			return 179
		end
		def initialize(data = nil)
			if( data == nil )
				super(179)
			else
				super(179, data)
			end
		end
	end

	class SecuritySettlAgentContactName < Quickfix::StringField
		def SecuritySettlAgentContactName.field
			return 180
		end
		def initialize(data = nil)
			if( data == nil )
				super(180)
			else
				super(180, data)
			end
		end
	end

	class SecuritySettlAgentContactPhone < Quickfix::StringField
		def SecuritySettlAgentContactPhone.field
			return 181
		end
		def initialize(data = nil)
			if( data == nil )
				super(181)
			else
				super(181, data)
			end
		end
	end

	class CashSettlAgentName < Quickfix::StringField
		def CashSettlAgentName.field
			return 182
		end
		def initialize(data = nil)
			if( data == nil )
				super(182)
			else
				super(182, data)
			end
		end
	end

	class CashSettlAgentCode < Quickfix::StringField
		def CashSettlAgentCode.field
			return 183
		end
		def initialize(data = nil)
			if( data == nil )
				super(183)
			else
				super(183, data)
			end
		end
	end

	class CashSettlAgentAcctNum < Quickfix::StringField
		def CashSettlAgentAcctNum.field
			return 184
		end
		def initialize(data = nil)
			if( data == nil )
				super(184)
			else
				super(184, data)
			end
		end
	end

	class CashSettlAgentAcctName < Quickfix::StringField
		def CashSettlAgentAcctName.field
			return 185
		end
		def initialize(data = nil)
			if( data == nil )
				super(185)
			else
				super(185, data)
			end
		end
	end

	class CashSettlAgentContactName < Quickfix::StringField
		def CashSettlAgentContactName.field
			return 186
		end
		def initialize(data = nil)
			if( data == nil )
				super(186)
			else
				super(186, data)
			end
		end
	end

	class CashSettlAgentContactPhone < Quickfix::StringField
		def CashSettlAgentContactPhone.field
			return 187
		end
		def initialize(data = nil)
			if( data == nil )
				super(187)
			else
				super(187, data)
			end
		end
	end

	class BidSpotRate < Quickfix::DoubleField
		def BidSpotRate.field
			return 188
		end
		def initialize(data = nil)
			if( data == nil )
				super(188)
			else
				super(188, data)
			end
		end
	end

	class BidForwardPoints < Quickfix::DoubleField
		def BidForwardPoints.field
			return 189
		end
		def initialize(data = nil)
			if( data == nil )
				super(189)
			else
				super(189, data)
			end
		end
	end

	class OfferSpotRate < Quickfix::DoubleField
		def OfferSpotRate.field
			return 190
		end
		def initialize(data = nil)
			if( data == nil )
				super(190)
			else
				super(190, data)
			end
		end
	end

	class OfferForwardPoints < Quickfix::DoubleField
		def OfferForwardPoints.field
			return 191
		end
		def initialize(data = nil)
			if( data == nil )
				super(191)
			else
				super(191, data)
			end
		end
	end

	class OrderQty2 < Quickfix::DoubleField
		def OrderQty2.field
			return 192
		end
		def initialize(data = nil)
			if( data == nil )
				super(192)
			else
				super(192, data)
			end
		end
	end

	class FutSettDate2 < Quickfix::StringField
		def FutSettDate2.field
			return 193
		end
		def initialize(data = nil)
			if( data == nil )
				super(193)
			else
				super(193, data)
			end
		end
	end

	class LastSpotRate < Quickfix::DoubleField
		def LastSpotRate.field
			return 194
		end
		def initialize(data = nil)
			if( data == nil )
				super(194)
			else
				super(194, data)
			end
		end
	end

	class LastForwardPoints < Quickfix::DoubleField
		def LastForwardPoints.field
			return 195
		end
		def initialize(data = nil)
			if( data == nil )
				super(195)
			else
				super(195, data)
			end
		end
	end

	class AllocLinkID < Quickfix::StringField
		def AllocLinkID.field
			return 196
		end
		def initialize(data = nil)
			if( data == nil )
				super(196)
			else
				super(196, data)
			end
		end
	end

	class AllocLinkType < Quickfix::IntField
		def AllocLinkType.field
			return 197
		end
		def initialize(data = nil)
			if( data == nil )
				super(197)
			else
				super(197, data)
			end
		end
	end

	class SecondaryOrderID < Quickfix::StringField
		def SecondaryOrderID.field
			return 198
		end
		def initialize(data = nil)
			if( data == nil )
				super(198)
			else
				super(198, data)
			end
		end
	end

	class NoIOIQualifiers < Quickfix::IntField
		def NoIOIQualifiers.field
			return 199
		end
		def initialize(data = nil)
			if( data == nil )
				super(199)
			else
				super(199, data)
			end
		end
	end

	class MaturityMonthYear < Quickfix::StringField
		def MaturityMonthYear.field
			return 200
		end
		def initialize(data = nil)
			if( data == nil )
				super(200)
			else
				super(200, data)
			end
		end
	end

	class PutOrCall < Quickfix::IntField
		def PutOrCall.field
			return 201
		end
		def initialize(data = nil)
			if( data == nil )
				super(201)
			else
				super(201, data)
			end
		end
	end

	class StrikePrice < Quickfix::DoubleField
		def StrikePrice.field
			return 202
		end
		def initialize(data = nil)
			if( data == nil )
				super(202)
			else
				super(202, data)
			end
		end
	end

	class CoveredOrUncovered < Quickfix::IntField
		def CoveredOrUncovered.field
			return 203
		end
		def initialize(data = nil)
			if( data == nil )
				super(203)
			else
				super(203, data)
			end
		end
	end

	class CustomerOrFirm < Quickfix::IntField
		def CustomerOrFirm.field
			return 204
		end
		def initialize(data = nil)
			if( data == nil )
				super(204)
			else
				super(204, data)
			end
		end
	end

	class MaturityDay < Quickfix::StringField
		def MaturityDay.field
			return 205
		end
		def initialize(data = nil)
			if( data == nil )
				super(205)
			else
				super(205, data)
			end
		end
	end

	class OptAttribute < Quickfix::CharField
		def OptAttribute.field
			return 206
		end
		def initialize(data = nil)
			if( data == nil )
				super(206)
			else
				super(206, data)
			end
		end
	end

	class SecurityExchange < Quickfix::StringField
		def SecurityExchange.field
			return 207
		end
		def initialize(data = nil)
			if( data == nil )
				super(207)
			else
				super(207, data)
			end
		end
	end

	class NotifyBrokerOfCredit < Quickfix::BoolField
		def NotifyBrokerOfCredit.field
			return 208
		end
		def initialize(data = nil)
			if( data == nil )
				super(208)
			else
				super(208, data)
			end
		end
	end

	class AllocHandlInst < Quickfix::IntField
		def AllocHandlInst.field
			return 209
		end
		def initialize(data = nil)
			if( data == nil )
				super(209)
			else
				super(209, data)
			end
		end
	end

	class MaxShow < Quickfix::DoubleField
		def MaxShow.field
			return 210
		end
		def initialize(data = nil)
			if( data == nil )
				super(210)
			else
				super(210, data)
			end
		end
	end

	class PegDifference < Quickfix::DoubleField
		def PegDifference.field
			return 211
		end
		def initialize(data = nil)
			if( data == nil )
				super(211)
			else
				super(211, data)
			end
		end
	end

	class SendingDate < Quickfix::StringField
		def SendingDate.field
			return 51
		end
		def initialize(data = nil)
			if( data == nil )
				super(51)
			else
				super(51, data)
			end
		end
	end

	class TotNoOrders < Quickfix::IntField
		def TotNoOrders.field
			return 68
		end
		def initialize(data = nil)
			if( data == nil )
				super(68)
			else
				super(68, data)
			end
		end
	end

	class SettlInstRefID < Quickfix::StringField
		def SettlInstRefID.field
			return 214
		end
		def initialize(data = nil)
			if( data == nil )
				super(214)
			else
				super(214, data)
			end
		end
	end

	class NoRoutingIDs < Quickfix::IntField
		def NoRoutingIDs.field
			return 215
		end
		def initialize(data = nil)
			if( data == nil )
				super(215)
			else
				super(215, data)
			end
		end
	end

	class RoutingType < Quickfix::IntField
		def RoutingType.field
			return 216
		end
		def initialize(data = nil)
			if( data == nil )
				super(216)
			else
				super(216, data)
			end
		end
	end

	class RoutingID < Quickfix::StringField
		def RoutingID.field
			return 217
		end
		def initialize(data = nil)
			if( data == nil )
				super(217)
			else
				super(217, data)
			end
		end
	end

	class SpreadToBenchmark < Quickfix::DoubleField
		def SpreadToBenchmark.field
			return 218
		end
		def initialize(data = nil)
			if( data == nil )
				super(218)
			else
				super(218, data)
			end
		end
	end

	class Benchmark < Quickfix::CharField
		def Benchmark.field
			return 219
		end
		def initialize(data = nil)
			if( data == nil )
				super(219)
			else
				super(219, data)
			end
		end
	end

	class CouponRate < Quickfix::DoubleField
		def CouponRate.field
			return 223
		end
		def initialize(data = nil)
			if( data == nil )
				super(223)
			else
				super(223, data)
			end
		end
	end

	class ContractMultiplier < Quickfix::DoubleField
		def ContractMultiplier.field
			return 231
		end
		def initialize(data = nil)
			if( data == nil )
				super(231)
			else
				super(231, data)
			end
		end
	end

	class MDReqID < Quickfix::StringField
		def MDReqID.field
			return 262
		end
		def initialize(data = nil)
			if( data == nil )
				super(262)
			else
				super(262, data)
			end
		end
	end

	class SubscriptionRequestType < Quickfix::CharField
		def SubscriptionRequestType.field
			return 263
		end
		def initialize(data = nil)
			if( data == nil )
				super(263)
			else
				super(263, data)
			end
		end
	end

	class MarketDepth < Quickfix::IntField
		def MarketDepth.field
			return 264
		end
		def initialize(data = nil)
			if( data == nil )
				super(264)
			else
				super(264, data)
			end
		end
	end

	class MDUpdateType < Quickfix::IntField
		def MDUpdateType.field
			return 265
		end
		def initialize(data = nil)
			if( data == nil )
				super(265)
			else
				super(265, data)
			end
		end
	end

	class AggregatedBook < Quickfix::BoolField
		def AggregatedBook.field
			return 266
		end
		def initialize(data = nil)
			if( data == nil )
				super(266)
			else
				super(266, data)
			end
		end
	end

	class NoMDEntryTypes < Quickfix::IntField
		def NoMDEntryTypes.field
			return 267
		end
		def initialize(data = nil)
			if( data == nil )
				super(267)
			else
				super(267, data)
			end
		end
	end

	class NoMDEntries < Quickfix::IntField
		def NoMDEntries.field
			return 268
		end
		def initialize(data = nil)
			if( data == nil )
				super(268)
			else
				super(268, data)
			end
		end
	end

	class MDEntryType < Quickfix::CharField
		def MDEntryType.field
			return 269
		end
		def initialize(data = nil)
			if( data == nil )
				super(269)
			else
				super(269, data)
			end
		end
	end

	class MDEntryPx < Quickfix::DoubleField
		def MDEntryPx.field
			return 270
		end
		def initialize(data = nil)
			if( data == nil )
				super(270)
			else
				super(270, data)
			end
		end
	end

	class MDEntrySize < Quickfix::DoubleField
		def MDEntrySize.field
			return 271
		end
		def initialize(data = nil)
			if( data == nil )
				super(271)
			else
				super(271, data)
			end
		end
	end

	class MDEntryDate < Quickfix::UtcDateField
		def MDEntryDate.field
			return 272
		end
		def initialize(data = nil)
			if( data == nil )
				super(272)
			else
				super(272, data)
			end
		end
	end

	class MDEntryTime < Quickfix::UtcTimeOnlyField
		def MDEntryTime.field
			return 273
		end
		def initialize(data = nil)
			if( data == nil )
				super(273)
			else
				super(273, data)
			end
		end
	end

	class TickDirection < Quickfix::CharField
		def TickDirection.field
			return 274
		end
		def initialize(data = nil)
			if( data == nil )
				super(274)
			else
				super(274, data)
			end
		end
	end

	class MDMkt < Quickfix::StringField
		def MDMkt.field
			return 275
		end
		def initialize(data = nil)
			if( data == nil )
				super(275)
			else
				super(275, data)
			end
		end
	end

	class QuoteCondition < Quickfix::StringField
		def QuoteCondition.field
			return 276
		end
		def initialize(data = nil)
			if( data == nil )
				super(276)
			else
				super(276, data)
			end
		end
	end

	class TradeCondition < Quickfix::StringField
		def TradeCondition.field
			return 277
		end
		def initialize(data = nil)
			if( data == nil )
				super(277)
			else
				super(277, data)
			end
		end
	end

	class MDEntryID < Quickfix::StringField
		def MDEntryID.field
			return 278
		end
		def initialize(data = nil)
			if( data == nil )
				super(278)
			else
				super(278, data)
			end
		end
	end

	class MDUpdateAction < Quickfix::CharField
		def MDUpdateAction.field
			return 279
		end
		def initialize(data = nil)
			if( data == nil )
				super(279)
			else
				super(279, data)
			end
		end
	end

	class MDEntryRefID < Quickfix::StringField
		def MDEntryRefID.field
			return 280
		end
		def initialize(data = nil)
			if( data == nil )
				super(280)
			else
				super(280, data)
			end
		end
	end

	class MDReqRejReason < Quickfix::CharField
		def MDReqRejReason.field
			return 281
		end
		def initialize(data = nil)
			if( data == nil )
				super(281)
			else
				super(281, data)
			end
		end
	end

	class MDEntryOriginator < Quickfix::StringField
		def MDEntryOriginator.field
			return 282
		end
		def initialize(data = nil)
			if( data == nil )
				super(282)
			else
				super(282, data)
			end
		end
	end

	class LocationID < Quickfix::StringField
		def LocationID.field
			return 283
		end
		def initialize(data = nil)
			if( data == nil )
				super(283)
			else
				super(283, data)
			end
		end
	end

	class DeskID < Quickfix::StringField
		def DeskID.field
			return 284
		end
		def initialize(data = nil)
			if( data == nil )
				super(284)
			else
				super(284, data)
			end
		end
	end

	class DeleteReason < Quickfix::CharField
		def DeleteReason.field
			return 285
		end
		def initialize(data = nil)
			if( data == nil )
				super(285)
			else
				super(285, data)
			end
		end
	end

	class OpenCloseSettleFlag < Quickfix::StringField
		def OpenCloseSettleFlag.field
			return 286
		end
		def initialize(data = nil)
			if( data == nil )
				super(286)
			else
				super(286, data)
			end
		end
	end

	class SellerDays < Quickfix::IntField
		def SellerDays.field
			return 287
		end
		def initialize(data = nil)
			if( data == nil )
				super(287)
			else
				super(287, data)
			end
		end
	end

	class MDEntryBuyer < Quickfix::StringField
		def MDEntryBuyer.field
			return 288
		end
		def initialize(data = nil)
			if( data == nil )
				super(288)
			else
				super(288, data)
			end
		end
	end

	class MDEntrySeller < Quickfix::StringField
		def MDEntrySeller.field
			return 289
		end
		def initialize(data = nil)
			if( data == nil )
				super(289)
			else
				super(289, data)
			end
		end
	end

	class MDEntryPositionNo < Quickfix::IntField
		def MDEntryPositionNo.field
			return 290
		end
		def initialize(data = nil)
			if( data == nil )
				super(290)
			else
				super(290, data)
			end
		end
	end

	class FinancialStatus < Quickfix::StringField
		def FinancialStatus.field
			return 291
		end
		def initialize(data = nil)
			if( data == nil )
				super(291)
			else
				super(291, data)
			end
		end
	end

	class CorporateAction < Quickfix::StringField
		def CorporateAction.field
			return 292
		end
		def initialize(data = nil)
			if( data == nil )
				super(292)
			else
				super(292, data)
			end
		end
	end

	class DefBidSize < Quickfix::DoubleField
		def DefBidSize.field
			return 293
		end
		def initialize(data = nil)
			if( data == nil )
				super(293)
			else
				super(293, data)
			end
		end
	end

	class DefOfferSize < Quickfix::DoubleField
		def DefOfferSize.field
			return 294
		end
		def initialize(data = nil)
			if( data == nil )
				super(294)
			else
				super(294, data)
			end
		end
	end

	class NoQuoteEntries < Quickfix::IntField
		def NoQuoteEntries.field
			return 295
		end
		def initialize(data = nil)
			if( data == nil )
				super(295)
			else
				super(295, data)
			end
		end
	end

	class NoQuoteSets < Quickfix::IntField
		def NoQuoteSets.field
			return 296
		end
		def initialize(data = nil)
			if( data == nil )
				super(296)
			else
				super(296, data)
			end
		end
	end

	class QuoteAckStatus < Quickfix::IntField
		def QuoteAckStatus.field
			return 297
		end
		def initialize(data = nil)
			if( data == nil )
				super(297)
			else
				super(297, data)
			end
		end
	end

	class QuoteCancelType < Quickfix::IntField
		def QuoteCancelType.field
			return 298
		end
		def initialize(data = nil)
			if( data == nil )
				super(298)
			else
				super(298, data)
			end
		end
	end

	class QuoteEntryID < Quickfix::StringField
		def QuoteEntryID.field
			return 299
		end
		def initialize(data = nil)
			if( data == nil )
				super(299)
			else
				super(299, data)
			end
		end
	end

	class QuoteRejectReason < Quickfix::IntField
		def QuoteRejectReason.field
			return 300
		end
		def initialize(data = nil)
			if( data == nil )
				super(300)
			else
				super(300, data)
			end
		end
	end

	class QuoteResponseLevel < Quickfix::IntField
		def QuoteResponseLevel.field
			return 301
		end
		def initialize(data = nil)
			if( data == nil )
				super(301)
			else
				super(301, data)
			end
		end
	end

	class QuoteSetID < Quickfix::StringField
		def QuoteSetID.field
			return 302
		end
		def initialize(data = nil)
			if( data == nil )
				super(302)
			else
				super(302, data)
			end
		end
	end

	class QuoteRequestType < Quickfix::IntField
		def QuoteRequestType.field
			return 303
		end
		def initialize(data = nil)
			if( data == nil )
				super(303)
			else
				super(303, data)
			end
		end
	end

	class TotQuoteEntries < Quickfix::IntField
		def TotQuoteEntries.field
			return 304
		end
		def initialize(data = nil)
			if( data == nil )
				super(304)
			else
				super(304, data)
			end
		end
	end

	class UnderlyingIDSource < Quickfix::StringField
		def UnderlyingIDSource.field
			return 305
		end
		def initialize(data = nil)
			if( data == nil )
				super(305)
			else
				super(305, data)
			end
		end
	end

	class UnderlyingIssuer < Quickfix::StringField
		def UnderlyingIssuer.field
			return 306
		end
		def initialize(data = nil)
			if( data == nil )
				super(306)
			else
				super(306, data)
			end
		end
	end

	class UnderlyingSecurityDesc < Quickfix::StringField
		def UnderlyingSecurityDesc.field
			return 307
		end
		def initialize(data = nil)
			if( data == nil )
				super(307)
			else
				super(307, data)
			end
		end
	end

	class UnderlyingSecurityExchange < Quickfix::StringField
		def UnderlyingSecurityExchange.field
			return 308
		end
		def initialize(data = nil)
			if( data == nil )
				super(308)
			else
				super(308, data)
			end
		end
	end

	class UnderlyingSecurityID < Quickfix::StringField
		def UnderlyingSecurityID.field
			return 309
		end
		def initialize(data = nil)
			if( data == nil )
				super(309)
			else
				super(309, data)
			end
		end
	end

	class UnderlyingSecurityType < Quickfix::StringField
		def UnderlyingSecurityType.field
			return 310
		end
		def initialize(data = nil)
			if( data == nil )
				super(310)
			else
				super(310, data)
			end
		end
	end

	class UnderlyingSymbol < Quickfix::StringField
		def UnderlyingSymbol.field
			return 311
		end
		def initialize(data = nil)
			if( data == nil )
				super(311)
			else
				super(311, data)
			end
		end
	end

	class UnderlyingSymbolSfx < Quickfix::StringField
		def UnderlyingSymbolSfx.field
			return 312
		end
		def initialize(data = nil)
			if( data == nil )
				super(312)
			else
				super(312, data)
			end
		end
	end

	class UnderlyingMaturityMonthYear < Quickfix::StringField
		def UnderlyingMaturityMonthYear.field
			return 313
		end
		def initialize(data = nil)
			if( data == nil )
				super(313)
			else
				super(313, data)
			end
		end
	end

	class UnderlyingMaturityDay < Quickfix::StringField
		def UnderlyingMaturityDay.field
			return 314
		end
		def initialize(data = nil)
			if( data == nil )
				super(314)
			else
				super(314, data)
			end
		end
	end

	class UnderlyingPutOrCall < Quickfix::IntField
		def UnderlyingPutOrCall.field
			return 315
		end
		def initialize(data = nil)
			if( data == nil )
				super(315)
			else
				super(315, data)
			end
		end
	end

	class UnderlyingStrikePrice < Quickfix::DoubleField
		def UnderlyingStrikePrice.field
			return 316
		end
		def initialize(data = nil)
			if( data == nil )
				super(316)
			else
				super(316, data)
			end
		end
	end

	class UnderlyingOptAttribute < Quickfix::CharField
		def UnderlyingOptAttribute.field
			return 317
		end
		def initialize(data = nil)
			if( data == nil )
				super(317)
			else
				super(317, data)
			end
		end
	end

	class UnderlyingCurrency < Quickfix::StringField
		def UnderlyingCurrency.field
			return 318
		end
		def initialize(data = nil)
			if( data == nil )
				super(318)
			else
				super(318, data)
			end
		end
	end

	class RatioQty < Quickfix::DoubleField
		def RatioQty.field
			return 319
		end
		def initialize(data = nil)
			if( data == nil )
				super(319)
			else
				super(319, data)
			end
		end
	end

	class SecurityReqID < Quickfix::StringField
		def SecurityReqID.field
			return 320
		end
		def initialize(data = nil)
			if( data == nil )
				super(320)
			else
				super(320, data)
			end
		end
	end

	class SecurityRequestType < Quickfix::IntField
		def SecurityRequestType.field
			return 321
		end
		def initialize(data = nil)
			if( data == nil )
				super(321)
			else
				super(321, data)
			end
		end
	end

	class SecurityResponseID < Quickfix::StringField
		def SecurityResponseID.field
			return 322
		end
		def initialize(data = nil)
			if( data == nil )
				super(322)
			else
				super(322, data)
			end
		end
	end

	class SecurityResponseType < Quickfix::IntField
		def SecurityResponseType.field
			return 323
		end
		def initialize(data = nil)
			if( data == nil )
				super(323)
			else
				super(323, data)
			end
		end
	end

	class SecurityStatusReqID < Quickfix::StringField
		def SecurityStatusReqID.field
			return 324
		end
		def initialize(data = nil)
			if( data == nil )
				super(324)
			else
				super(324, data)
			end
		end
	end

	class UnsolicitedIndicator < Quickfix::BoolField
		def UnsolicitedIndicator.field
			return 325
		end
		def initialize(data = nil)
			if( data == nil )
				super(325)
			else
				super(325, data)
			end
		end
	end

	class SecurityTradingStatus < Quickfix::IntField
		def SecurityTradingStatus.field
			return 326
		end
		def initialize(data = nil)
			if( data == nil )
				super(326)
			else
				super(326, data)
			end
		end
	end

	class HaltReasonChar < Quickfix::CharField
		def HaltReasonChar.field
			return 327
		end
		def initialize(data = nil)
			if( data == nil )
				super(327)
			else
				super(327, data)
			end
		end
	end

	class InViewOfCommon < Quickfix::BoolField
		def InViewOfCommon.field
			return 328
		end
		def initialize(data = nil)
			if( data == nil )
				super(328)
			else
				super(328, data)
			end
		end
	end

	class DueToRelated < Quickfix::BoolField
		def DueToRelated.field
			return 329
		end
		def initialize(data = nil)
			if( data == nil )
				super(329)
			else
				super(329, data)
			end
		end
	end

	class BuyVolume < Quickfix::DoubleField
		def BuyVolume.field
			return 330
		end
		def initialize(data = nil)
			if( data == nil )
				super(330)
			else
				super(330, data)
			end
		end
	end

	class SellVolume < Quickfix::DoubleField
		def SellVolume.field
			return 331
		end
		def initialize(data = nil)
			if( data == nil )
				super(331)
			else
				super(331, data)
			end
		end
	end

	class HighPx < Quickfix::DoubleField
		def HighPx.field
			return 332
		end
		def initialize(data = nil)
			if( data == nil )
				super(332)
			else
				super(332, data)
			end
		end
	end

	class LowPx < Quickfix::DoubleField
		def LowPx.field
			return 333
		end
		def initialize(data = nil)
			if( data == nil )
				super(333)
			else
				super(333, data)
			end
		end
	end

	class Adjustment < Quickfix::IntField
		def Adjustment.field
			return 334
		end
		def initialize(data = nil)
			if( data == nil )
				super(334)
			else
				super(334, data)
			end
		end
	end

	class TradSesReqID < Quickfix::StringField
		def TradSesReqID.field
			return 335
		end
		def initialize(data = nil)
			if( data == nil )
				super(335)
			else
				super(335, data)
			end
		end
	end

	class TradingSessionID < Quickfix::StringField
		def TradingSessionID.field
			return 336
		end
		def initialize(data = nil)
			if( data == nil )
				super(336)
			else
				super(336, data)
			end
		end
	end

	class ContraTrader < Quickfix::StringField
		def ContraTrader.field
			return 337
		end
		def initialize(data = nil)
			if( data == nil )
				super(337)
			else
				super(337, data)
			end
		end
	end

	class TradSesMethod < Quickfix::IntField
		def TradSesMethod.field
			return 338
		end
		def initialize(data = nil)
			if( data == nil )
				super(338)
			else
				super(338, data)
			end
		end
	end

	class TradSesMode < Quickfix::IntField
		def TradSesMode.field
			return 339
		end
		def initialize(data = nil)
			if( data == nil )
				super(339)
			else
				super(339, data)
			end
		end
	end

	class TradSesStatus < Quickfix::IntField
		def TradSesStatus.field
			return 340
		end
		def initialize(data = nil)
			if( data == nil )
				super(340)
			else
				super(340, data)
			end
		end
	end

	class TradSesStartTime < Quickfix::UtcTimeStampField
		def TradSesStartTime.field
			return 341
		end
		def initialize(data = nil)
			if( data == nil )
				super(341)
			else
				super(341, data)
			end
		end
	end

	class TradSesOpenTime < Quickfix::UtcTimeStampField
		def TradSesOpenTime.field
			return 342
		end
		def initialize(data = nil)
			if( data == nil )
				super(342)
			else
				super(342, data)
			end
		end
	end

	class TradSesPreCloseTime < Quickfix::UtcTimeStampField
		def TradSesPreCloseTime.field
			return 343
		end
		def initialize(data = nil)
			if( data == nil )
				super(343)
			else
				super(343, data)
			end
		end
	end

	class TradSesCloseTime < Quickfix::UtcTimeStampField
		def TradSesCloseTime.field
			return 344
		end
		def initialize(data = nil)
			if( data == nil )
				super(344)
			else
				super(344, data)
			end
		end
	end

	class TradSesEndTime < Quickfix::UtcTimeStampField
		def TradSesEndTime.field
			return 345
		end
		def initialize(data = nil)
			if( data == nil )
				super(345)
			else
				super(345, data)
			end
		end
	end

	class NumberOfOrders < Quickfix::IntField
		def NumberOfOrders.field
			return 346
		end
		def initialize(data = nil)
			if( data == nil )
				super(346)
			else
				super(346, data)
			end
		end
	end

	class EncodedIssuerLen < Quickfix::IntField
		def EncodedIssuerLen.field
			return 348
		end
		def initialize(data = nil)
			if( data == nil )
				super(348)
			else
				super(348, data)
			end
		end
	end

	class EncodedIssuer < Quickfix::StringField
		def EncodedIssuer.field
			return 349
		end
		def initialize(data = nil)
			if( data == nil )
				super(349)
			else
				super(349, data)
			end
		end
	end

	class EncodedSecurityDescLen < Quickfix::IntField
		def EncodedSecurityDescLen.field
			return 350
		end
		def initialize(data = nil)
			if( data == nil )
				super(350)
			else
				super(350, data)
			end
		end
	end

	class EncodedSecurityDesc < Quickfix::StringField
		def EncodedSecurityDesc.field
			return 351
		end
		def initialize(data = nil)
			if( data == nil )
				super(351)
			else
				super(351, data)
			end
		end
	end

	class EncodedListExecInstLen < Quickfix::IntField
		def EncodedListExecInstLen.field
			return 352
		end
		def initialize(data = nil)
			if( data == nil )
				super(352)
			else
				super(352, data)
			end
		end
	end

	class EncodedListExecInst < Quickfix::StringField
		def EncodedListExecInst.field
			return 353
		end
		def initialize(data = nil)
			if( data == nil )
				super(353)
			else
				super(353, data)
			end
		end
	end

	class EncodedSubjectLen < Quickfix::IntField
		def EncodedSubjectLen.field
			return 356
		end
		def initialize(data = nil)
			if( data == nil )
				super(356)
			else
				super(356, data)
			end
		end
	end

	class EncodedSubject < Quickfix::StringField
		def EncodedSubject.field
			return 357
		end
		def initialize(data = nil)
			if( data == nil )
				super(357)
			else
				super(357, data)
			end
		end
	end

	class EncodedHeadlineLen < Quickfix::IntField
		def EncodedHeadlineLen.field
			return 358
		end
		def initialize(data = nil)
			if( data == nil )
				super(358)
			else
				super(358, data)
			end
		end
	end

	class EncodedHeadline < Quickfix::StringField
		def EncodedHeadline.field
			return 359
		end
		def initialize(data = nil)
			if( data == nil )
				super(359)
			else
				super(359, data)
			end
		end
	end

	class EncodedAllocTextLen < Quickfix::IntField
		def EncodedAllocTextLen.field
			return 360
		end
		def initialize(data = nil)
			if( data == nil )
				super(360)
			else
				super(360, data)
			end
		end
	end

	class EncodedAllocText < Quickfix::StringField
		def EncodedAllocText.field
			return 361
		end
		def initialize(data = nil)
			if( data == nil )
				super(361)
			else
				super(361, data)
			end
		end
	end

	class EncodedUnderlyingIssuerLen < Quickfix::IntField
		def EncodedUnderlyingIssuerLen.field
			return 362
		end
		def initialize(data = nil)
			if( data == nil )
				super(362)
			else
				super(362, data)
			end
		end
	end

	class EncodedUnderlyingIssuer < Quickfix::StringField
		def EncodedUnderlyingIssuer.field
			return 363
		end
		def initialize(data = nil)
			if( data == nil )
				super(363)
			else
				super(363, data)
			end
		end
	end

	class EncodedUnderlyingSecurityDescLen < Quickfix::IntField
		def EncodedUnderlyingSecurityDescLen.field
			return 364
		end
		def initialize(data = nil)
			if( data == nil )
				super(364)
			else
				super(364, data)
			end
		end
	end

	class EncodedUnderlyingSecurityDesc < Quickfix::StringField
		def EncodedUnderlyingSecurityDesc.field
			return 365
		end
		def initialize(data = nil)
			if( data == nil )
				super(365)
			else
				super(365, data)
			end
		end
	end

	class AllocPrice < Quickfix::DoubleField
		def AllocPrice.field
			return 366
		end
		def initialize(data = nil)
			if( data == nil )
				super(366)
			else
				super(366, data)
			end
		end
	end

	class QuoteSetValidUntilTime < Quickfix::UtcTimeStampField
		def QuoteSetValidUntilTime.field
			return 367
		end
		def initialize(data = nil)
			if( data == nil )
				super(367)
			else
				super(367, data)
			end
		end
	end

	class QuoteEntryRejectReason < Quickfix::IntField
		def QuoteEntryRejectReason.field
			return 368
		end
		def initialize(data = nil)
			if( data == nil )
				super(368)
			else
				super(368, data)
			end
		end
	end

	class OnBehalfOfSendingTime < Quickfix::UtcTimeStampField
		def OnBehalfOfSendingTime.field
			return 370
		end
		def initialize(data = nil)
			if( data == nil )
				super(370)
			else
				super(370, data)
			end
		end
	end

	class BidRequestTransType < Quickfix::CharField
		def BidRequestTransType.field
			return 374
		end
		def initialize(data = nil)
			if( data == nil )
				super(374)
			else
				super(374, data)
			end
		end
	end

	class ContraBroker < Quickfix::StringField
		def ContraBroker.field
			return 375
		end
		def initialize(data = nil)
			if( data == nil )
				super(375)
			else
				super(375, data)
			end
		end
	end

	class ComplianceID < Quickfix::StringField
		def ComplianceID.field
			return 376
		end
		def initialize(data = nil)
			if( data == nil )
				super(376)
			else
				super(376, data)
			end
		end
	end

	class SolicitedFlag < Quickfix::BoolField
		def SolicitedFlag.field
			return 377
		end
		def initialize(data = nil)
			if( data == nil )
				super(377)
			else
				super(377, data)
			end
		end
	end

	class ExecRestatementReason < Quickfix::IntField
		def ExecRestatementReason.field
			return 378
		end
		def initialize(data = nil)
			if( data == nil )
				super(378)
			else
				super(378, data)
			end
		end
	end

	class BusinessRejectRefID < Quickfix::StringField
		def BusinessRejectRefID.field
			return 379
		end
		def initialize(data = nil)
			if( data == nil )
				super(379)
			else
				super(379, data)
			end
		end
	end

	class BusinessRejectReason < Quickfix::IntField
		def BusinessRejectReason.field
			return 380
		end
		def initialize(data = nil)
			if( data == nil )
				super(380)
			else
				super(380, data)
			end
		end
	end

	class GrossTradeAmt < Quickfix::DoubleField
		def GrossTradeAmt.field
			return 381
		end
		def initialize(data = nil)
			if( data == nil )
				super(381)
			else
				super(381, data)
			end
		end
	end

	class NoContraBrokers < Quickfix::IntField
		def NoContraBrokers.field
			return 382
		end
		def initialize(data = nil)
			if( data == nil )
				super(382)
			else
				super(382, data)
			end
		end
	end

	class NoTradingSessions < Quickfix::IntField
		def NoTradingSessions.field
			return 386
		end
		def initialize(data = nil)
			if( data == nil )
				super(386)
			else
				super(386, data)
			end
		end
	end

	class TotalVolumeTraded < Quickfix::DoubleField
		def TotalVolumeTraded.field
			return 387
		end
		def initialize(data = nil)
			if( data == nil )
				super(387)
			else
				super(387, data)
			end
		end
	end

	class DiscretionInst < Quickfix::CharField
		def DiscretionInst.field
			return 388
		end
		def initialize(data = nil)
			if( data == nil )
				super(388)
			else
				super(388, data)
			end
		end
	end

	class DiscretionOffset < Quickfix::DoubleField
		def DiscretionOffset.field
			return 389
		end
		def initialize(data = nil)
			if( data == nil )
				super(389)
			else
				super(389, data)
			end
		end
	end

	class BidID < Quickfix::StringField
		def BidID.field
			return 390
		end
		def initialize(data = nil)
			if( data == nil )
				super(390)
			else
				super(390, data)
			end
		end
	end

	class ClientBidID < Quickfix::StringField
		def ClientBidID.field
			return 391
		end
		def initialize(data = nil)
			if( data == nil )
				super(391)
			else
				super(391, data)
			end
		end
	end

	class ListName < Quickfix::StringField
		def ListName.field
			return 392
		end
		def initialize(data = nil)
			if( data == nil )
				super(392)
			else
				super(392, data)
			end
		end
	end

	class TotalNumSecurities < Quickfix::IntField
		def TotalNumSecurities.field
			return 393
		end
		def initialize(data = nil)
			if( data == nil )
				super(393)
			else
				super(393, data)
			end
		end
	end

	class BidType < Quickfix::IntField
		def BidType.field
			return 394
		end
		def initialize(data = nil)
			if( data == nil )
				super(394)
			else
				super(394, data)
			end
		end
	end

	class NumTickets < Quickfix::IntField
		def NumTickets.field
			return 395
		end
		def initialize(data = nil)
			if( data == nil )
				super(395)
			else
				super(395, data)
			end
		end
	end

	class SideValue1 < Quickfix::DoubleField
		def SideValue1.field
			return 396
		end
		def initialize(data = nil)
			if( data == nil )
				super(396)
			else
				super(396, data)
			end
		end
	end

	class SideValue2 < Quickfix::DoubleField
		def SideValue2.field
			return 397
		end
		def initialize(data = nil)
			if( data == nil )
				super(397)
			else
				super(397, data)
			end
		end
	end

	class NoBidDescriptors < Quickfix::IntField
		def NoBidDescriptors.field
			return 398
		end
		def initialize(data = nil)
			if( data == nil )
				super(398)
			else
				super(398, data)
			end
		end
	end

	class BidDescriptorType < Quickfix::IntField
		def BidDescriptorType.field
			return 399
		end
		def initialize(data = nil)
			if( data == nil )
				super(399)
			else
				super(399, data)
			end
		end
	end

	class BidDescriptor < Quickfix::StringField
		def BidDescriptor.field
			return 400
		end
		def initialize(data = nil)
			if( data == nil )
				super(400)
			else
				super(400, data)
			end
		end
	end

	class SideValueInd < Quickfix::IntField
		def SideValueInd.field
			return 401
		end
		def initialize(data = nil)
			if( data == nil )
				super(401)
			else
				super(401, data)
			end
		end
	end

	class LiquidityPctLow < Quickfix::DoubleField
		def LiquidityPctLow.field
			return 402
		end
		def initialize(data = nil)
			if( data == nil )
				super(402)
			else
				super(402, data)
			end
		end
	end

	class LiquidityPctHigh < Quickfix::DoubleField
		def LiquidityPctHigh.field
			return 403
		end
		def initialize(data = nil)
			if( data == nil )
				super(403)
			else
				super(403, data)
			end
		end
	end

	class LiquidityValue < Quickfix::DoubleField
		def LiquidityValue.field
			return 404
		end
		def initialize(data = nil)
			if( data == nil )
				super(404)
			else
				super(404, data)
			end
		end
	end

	class EFPTrackingError < Quickfix::DoubleField
		def EFPTrackingError.field
			return 405
		end
		def initialize(data = nil)
			if( data == nil )
				super(405)
			else
				super(405, data)
			end
		end
	end

	class FairValue < Quickfix::DoubleField
		def FairValue.field
			return 406
		end
		def initialize(data = nil)
			if( data == nil )
				super(406)
			else
				super(406, data)
			end
		end
	end

	class OutsideIndexPct < Quickfix::DoubleField
		def OutsideIndexPct.field
			return 407
		end
		def initialize(data = nil)
			if( data == nil )
				super(407)
			else
				super(407, data)
			end
		end
	end

	class ValueOfFutures < Quickfix::DoubleField
		def ValueOfFutures.field
			return 408
		end
		def initialize(data = nil)
			if( data == nil )
				super(408)
			else
				super(408, data)
			end
		end
	end

	class LiquidityIndType < Quickfix::IntField
		def LiquidityIndType.field
			return 409
		end
		def initialize(data = nil)
			if( data == nil )
				super(409)
			else
				super(409, data)
			end
		end
	end

	class WtAverageLiquidity < Quickfix::DoubleField
		def WtAverageLiquidity.field
			return 410
		end
		def initialize(data = nil)
			if( data == nil )
				super(410)
			else
				super(410, data)
			end
		end
	end

	class ExchangeForPhysical < Quickfix::BoolField
		def ExchangeForPhysical.field
			return 411
		end
		def initialize(data = nil)
			if( data == nil )
				super(411)
			else
				super(411, data)
			end
		end
	end

	class OutMainCntryUIndex < Quickfix::DoubleField
		def OutMainCntryUIndex.field
			return 412
		end
		def initialize(data = nil)
			if( data == nil )
				super(412)
			else
				super(412, data)
			end
		end
	end

	class CrossPercent < Quickfix::DoubleField
		def CrossPercent.field
			return 413
		end
		def initialize(data = nil)
			if( data == nil )
				super(413)
			else
				super(413, data)
			end
		end
	end

	class ProgRptReqs < Quickfix::IntField
		def ProgRptReqs.field
			return 414
		end
		def initialize(data = nil)
			if( data == nil )
				super(414)
			else
				super(414, data)
			end
		end
	end

	class ProgPeriodInterval < Quickfix::IntField
		def ProgPeriodInterval.field
			return 415
		end
		def initialize(data = nil)
			if( data == nil )
				super(415)
			else
				super(415, data)
			end
		end
	end

	class IncTaxInd < Quickfix::IntField
		def IncTaxInd.field
			return 416
		end
		def initialize(data = nil)
			if( data == nil )
				super(416)
			else
				super(416, data)
			end
		end
	end

	class NumBidders < Quickfix::IntField
		def NumBidders.field
			return 417
		end
		def initialize(data = nil)
			if( data == nil )
				super(417)
			else
				super(417, data)
			end
		end
	end

	class TradeType < Quickfix::CharField
		def TradeType.field
			return 418
		end
		def initialize(data = nil)
			if( data == nil )
				super(418)
			else
				super(418, data)
			end
		end
	end

	class BasisPxType < Quickfix::CharField
		def BasisPxType.field
			return 419
		end
		def initialize(data = nil)
			if( data == nil )
				super(419)
			else
				super(419, data)
			end
		end
	end

	class NoBidComponents < Quickfix::IntField
		def NoBidComponents.field
			return 420
		end
		def initialize(data = nil)
			if( data == nil )
				super(420)
			else
				super(420, data)
			end
		end
	end

	class Country < Quickfix::StringField
		def Country.field
			return 421
		end
		def initialize(data = nil)
			if( data == nil )
				super(421)
			else
				super(421, data)
			end
		end
	end

	class TotNoStrikes < Quickfix::IntField
		def TotNoStrikes.field
			return 422
		end
		def initialize(data = nil)
			if( data == nil )
				super(422)
			else
				super(422, data)
			end
		end
	end

	class PriceType < Quickfix::IntField
		def PriceType.field
			return 423
		end
		def initialize(data = nil)
			if( data == nil )
				super(423)
			else
				super(423, data)
			end
		end
	end

	class DayOrderQty < Quickfix::DoubleField
		def DayOrderQty.field
			return 424
		end
		def initialize(data = nil)
			if( data == nil )
				super(424)
			else
				super(424, data)
			end
		end
	end

	class DayCumQty < Quickfix::DoubleField
		def DayCumQty.field
			return 425
		end
		def initialize(data = nil)
			if( data == nil )
				super(425)
			else
				super(425, data)
			end
		end
	end

	class DayAvgPx < Quickfix::DoubleField
		def DayAvgPx.field
			return 426
		end
		def initialize(data = nil)
			if( data == nil )
				super(426)
			else
				super(426, data)
			end
		end
	end

	class GTBookingInst < Quickfix::IntField
		def GTBookingInst.field
			return 427
		end
		def initialize(data = nil)
			if( data == nil )
				super(427)
			else
				super(427, data)
			end
		end
	end

	class NoStrikes < Quickfix::IntField
		def NoStrikes.field
			return 428
		end
		def initialize(data = nil)
			if( data == nil )
				super(428)
			else
				super(428, data)
			end
		end
	end

	class ListStatusType < Quickfix::IntField
		def ListStatusType.field
			return 429
		end
		def initialize(data = nil)
			if( data == nil )
				super(429)
			else
				super(429, data)
			end
		end
	end

	class NetGrossInd < Quickfix::IntField
		def NetGrossInd.field
			return 430
		end
		def initialize(data = nil)
			if( data == nil )
				super(430)
			else
				super(430, data)
			end
		end
	end

	class ListOrderStatus < Quickfix::IntField
		def ListOrderStatus.field
			return 431
		end
		def initialize(data = nil)
			if( data == nil )
				super(431)
			else
				super(431, data)
			end
		end
	end

	class ExpireDate < Quickfix::StringField
		def ExpireDate.field
			return 432
		end
		def initialize(data = nil)
			if( data == nil )
				super(432)
			else
				super(432, data)
			end
		end
	end

	class ListExecInstType < Quickfix::CharField
		def ListExecInstType.field
			return 433
		end
		def initialize(data = nil)
			if( data == nil )
				super(433)
			else
				super(433, data)
			end
		end
	end

	class CxlRejResponseTo < Quickfix::CharField
		def CxlRejResponseTo.field
			return 434
		end
		def initialize(data = nil)
			if( data == nil )
				super(434)
			else
				super(434, data)
			end
		end
	end

	class UnderlyingCouponRate < Quickfix::DoubleField
		def UnderlyingCouponRate.field
			return 435
		end
		def initialize(data = nil)
			if( data == nil )
				super(435)
			else
				super(435, data)
			end
		end
	end

	class UnderlyingContractMultiplier < Quickfix::DoubleField
		def UnderlyingContractMultiplier.field
			return 436
		end
		def initialize(data = nil)
			if( data == nil )
				super(436)
			else
				super(436, data)
			end
		end
	end

	class ContraTradeQty < Quickfix::DoubleField
		def ContraTradeQty.field
			return 437
		end
		def initialize(data = nil)
			if( data == nil )
				super(437)
			else
				super(437, data)
			end
		end
	end

	class ContraTradeTime < Quickfix::UtcTimeStampField
		def ContraTradeTime.field
			return 438
		end
		def initialize(data = nil)
			if( data == nil )
				super(438)
			else
				super(438, data)
			end
		end
	end

	class ClearingFirm < Quickfix::StringField
		def ClearingFirm.field
			return 439
		end
		def initialize(data = nil)
			if( data == nil )
				super(439)
			else
				super(439, data)
			end
		end
	end

	class ClearingAccount < Quickfix::StringField
		def ClearingAccount.field
			return 440
		end
		def initialize(data = nil)
			if( data == nil )
				super(440)
			else
				super(440, data)
			end
		end
	end

	class LiquidityNumSecurities < Quickfix::IntField
		def LiquidityNumSecurities.field
			return 441
		end
		def initialize(data = nil)
			if( data == nil )
				super(441)
			else
				super(441, data)
			end
		end
	end

	class MultiLegReportingType < Quickfix::CharField
		def MultiLegReportingType.field
			return 442
		end
		def initialize(data = nil)
			if( data == nil )
				super(442)
			else
				super(442, data)
			end
		end
	end

	class StrikeTime < Quickfix::UtcTimeStampField
		def StrikeTime.field
			return 443
		end
		def initialize(data = nil)
			if( data == nil )
				super(443)
			else
				super(443, data)
			end
		end
	end

	class ListStatusText < Quickfix::StringField
		def ListStatusText.field
			return 444
		end
		def initialize(data = nil)
			if( data == nil )
				super(444)
			else
				super(444, data)
			end
		end
	end

	class EncodedListStatusTextLen < Quickfix::IntField
		def EncodedListStatusTextLen.field
			return 445
		end
		def initialize(data = nil)
			if( data == nil )
				super(445)
			else
				super(445, data)
			end
		end
	end

	class EncodedListStatusText < Quickfix::StringField
		def EncodedListStatusText.field
			return 446
		end
		def initialize(data = nil)
			if( data == nil )
				super(446)
			else
				super(446, data)
			end
		end
	end

	class SecurityIDSource < Quickfix::StringField
		def SecurityIDSource.field
			return 22
		end
		def initialize(data = nil)
			if( data == nil )
				super(22)
			else
				super(22, data)
			end
		end
	end

	class IOIQty < Quickfix::StringField
		def IOIQty.field
			return 27
		end
		def initialize(data = nil)
			if( data == nil )
				super(27)
			else
				super(27, data)
			end
		end
	end

	class LastQty < Quickfix::DoubleField
		def LastQty.field
			return 32
		end
		def initialize(data = nil)
			if( data == nil )
				super(32)
			else
				super(32, data)
			end
		end
	end

	class Quantity < Quickfix::DoubleField
		def Quantity.field
			return 53
		end
		def initialize(data = nil)
			if( data == nil )
				super(53)
			else
				super(53, data)
			end
		end
	end

	class PositionEffect < Quickfix::CharField
		def PositionEffect.field
			return 77
		end
		def initialize(data = nil)
			if( data == nil )
				super(77)
			else
				super(77, data)
			end
		end
	end

	class AllocQty < Quickfix::DoubleField
		def AllocQty.field
			return 80
		end
		def initialize(data = nil)
			if( data == nil )
				super(80)
			else
				super(80, data)
			end
		end
	end

	class Spread < Quickfix::DoubleField
		def Spread.field
			return 218
		end
		def initialize(data = nil)
			if( data == nil )
				super(218)
			else
				super(218, data)
			end
		end
	end

	class BenchmarkCurveCurrency < Quickfix::StringField
		def BenchmarkCurveCurrency.field
			return 220
		end
		def initialize(data = nil)
			if( data == nil )
				super(220)
			else
				super(220, data)
			end
		end
	end

	class BenchmarkCurveName < Quickfix::StringField
		def BenchmarkCurveName.field
			return 221
		end
		def initialize(data = nil)
			if( data == nil )
				super(221)
			else
				super(221, data)
			end
		end
	end

	class BenchmarkCurvePoint < Quickfix::StringField
		def BenchmarkCurvePoint.field
			return 222
		end
		def initialize(data = nil)
			if( data == nil )
				super(222)
			else
				super(222, data)
			end
		end
	end

	class CouponPaymentDate < Quickfix::StringField
		def CouponPaymentDate.field
			return 224
		end
		def initialize(data = nil)
			if( data == nil )
				super(224)
			else
				super(224, data)
			end
		end
	end

	class IssueDate < Quickfix::StringField
		def IssueDate.field
			return 225
		end
		def initialize(data = nil)
			if( data == nil )
				super(225)
			else
				super(225, data)
			end
		end
	end

	class RepurchaseTerm < Quickfix::IntField
		def RepurchaseTerm.field
			return 226
		end
		def initialize(data = nil)
			if( data == nil )
				super(226)
			else
				super(226, data)
			end
		end
	end

	class RepurchaseRate < Quickfix::DoubleField
		def RepurchaseRate.field
			return 227
		end
		def initialize(data = nil)
			if( data == nil )
				super(227)
			else
				super(227, data)
			end
		end
	end

	class Factor < Quickfix::DoubleField
		def Factor.field
			return 228
		end
		def initialize(data = nil)
			if( data == nil )
				super(228)
			else
				super(228, data)
			end
		end
	end

	class TradeOriginationDate < Quickfix::StringField
		def TradeOriginationDate.field
			return 229
		end
		def initialize(data = nil)
			if( data == nil )
				super(229)
			else
				super(229, data)
			end
		end
	end

	class ExDate < Quickfix::StringField
		def ExDate.field
			return 230
		end
		def initialize(data = nil)
			if( data == nil )
				super(230)
			else
				super(230, data)
			end
		end
	end

	class NoStipulations < Quickfix::IntField
		def NoStipulations.field
			return 232
		end
		def initialize(data = nil)
			if( data == nil )
				super(232)
			else
				super(232, data)
			end
		end
	end

	class StipulationType < Quickfix::StringField
		def StipulationType.field
			return 233
		end
		def initialize(data = nil)
			if( data == nil )
				super(233)
			else
				super(233, data)
			end
		end
	end

	class StipulationValue < Quickfix::StringField
		def StipulationValue.field
			return 234
		end
		def initialize(data = nil)
			if( data == nil )
				super(234)
			else
				super(234, data)
			end
		end
	end

	class YieldType < Quickfix::StringField
		def YieldType.field
			return 235
		end
		def initialize(data = nil)
			if( data == nil )
				super(235)
			else
				super(235, data)
			end
		end
	end

	class Yield < Quickfix::DoubleField
		def Yield.field
			return 236
		end
		def initialize(data = nil)
			if( data == nil )
				super(236)
			else
				super(236, data)
			end
		end
	end

	class TotalTakedown < Quickfix::DoubleField
		def TotalTakedown.field
			return 237
		end
		def initialize(data = nil)
			if( data == nil )
				super(237)
			else
				super(237, data)
			end
		end
	end

	class Concession < Quickfix::DoubleField
		def Concession.field
			return 238
		end
		def initialize(data = nil)
			if( data == nil )
				super(238)
			else
				super(238, data)
			end
		end
	end

	class RepoCollateralSecurityType < Quickfix::StringField
		def RepoCollateralSecurityType.field
			return 239
		end
		def initialize(data = nil)
			if( data == nil )
				super(239)
			else
				super(239, data)
			end
		end
	end

	class RedemptionDate < Quickfix::StringField
		def RedemptionDate.field
			return 240
		end
		def initialize(data = nil)
			if( data == nil )
				super(240)
			else
				super(240, data)
			end
		end
	end

	class UnderlyingCouponPaymentDate < Quickfix::StringField
		def UnderlyingCouponPaymentDate.field
			return 241
		end
		def initialize(data = nil)
			if( data == nil )
				super(241)
			else
				super(241, data)
			end
		end
	end

	class UnderlyingIssueDate < Quickfix::StringField
		def UnderlyingIssueDate.field
			return 242
		end
		def initialize(data = nil)
			if( data == nil )
				super(242)
			else
				super(242, data)
			end
		end
	end

	class UnderlyingRepoCollateralSecurityType < Quickfix::StringField
		def UnderlyingRepoCollateralSecurityType.field
			return 243
		end
		def initialize(data = nil)
			if( data == nil )
				super(243)
			else
				super(243, data)
			end
		end
	end

	class UnderlyingRepurchaseTerm < Quickfix::IntField
		def UnderlyingRepurchaseTerm.field
			return 244
		end
		def initialize(data = nil)
			if( data == nil )
				super(244)
			else
				super(244, data)
			end
		end
	end

	class UnderlyingRepurchaseRate < Quickfix::DoubleField
		def UnderlyingRepurchaseRate.field
			return 245
		end
		def initialize(data = nil)
			if( data == nil )
				super(245)
			else
				super(245, data)
			end
		end
	end

	class UnderlyingFactor < Quickfix::DoubleField
		def UnderlyingFactor.field
			return 246
		end
		def initialize(data = nil)
			if( data == nil )
				super(246)
			else
				super(246, data)
			end
		end
	end

	class UnderlyingRedemptionDate < Quickfix::StringField
		def UnderlyingRedemptionDate.field
			return 247
		end
		def initialize(data = nil)
			if( data == nil )
				super(247)
			else
				super(247, data)
			end
		end
	end

	class LegCouponPaymentDate < Quickfix::StringField
		def LegCouponPaymentDate.field
			return 248
		end
		def initialize(data = nil)
			if( data == nil )
				super(248)
			else
				super(248, data)
			end
		end
	end

	class LegIssueDate < Quickfix::StringField
		def LegIssueDate.field
			return 249
		end
		def initialize(data = nil)
			if( data == nil )
				super(249)
			else
				super(249, data)
			end
		end
	end

	class LegRepoCollateralSecurityType < Quickfix::StringField
		def LegRepoCollateralSecurityType.field
			return 250
		end
		def initialize(data = nil)
			if( data == nil )
				super(250)
			else
				super(250, data)
			end
		end
	end

	class LegRepurchaseTerm < Quickfix::IntField
		def LegRepurchaseTerm.field
			return 251
		end
		def initialize(data = nil)
			if( data == nil )
				super(251)
			else
				super(251, data)
			end
		end
	end

	class LegRepurchaseRate < Quickfix::DoubleField
		def LegRepurchaseRate.field
			return 252
		end
		def initialize(data = nil)
			if( data == nil )
				super(252)
			else
				super(252, data)
			end
		end
	end

	class LegFactor < Quickfix::DoubleField
		def LegFactor.field
			return 253
		end
		def initialize(data = nil)
			if( data == nil )
				super(253)
			else
				super(253, data)
			end
		end
	end

	class LegRedemptionDate < Quickfix::StringField
		def LegRedemptionDate.field
			return 254
		end
		def initialize(data = nil)
			if( data == nil )
				super(254)
			else
				super(254, data)
			end
		end
	end

	class CreditRating < Quickfix::StringField
		def CreditRating.field
			return 255
		end
		def initialize(data = nil)
			if( data == nil )
				super(255)
			else
				super(255, data)
			end
		end
	end

	class UnderlyingCreditRating < Quickfix::StringField
		def UnderlyingCreditRating.field
			return 256
		end
		def initialize(data = nil)
			if( data == nil )
				super(256)
			else
				super(256, data)
			end
		end
	end

	class LegCreditRating < Quickfix::StringField
		def LegCreditRating.field
			return 257
		end
		def initialize(data = nil)
			if( data == nil )
				super(257)
			else
				super(257, data)
			end
		end
	end

	class TradedFlatSwitch < Quickfix::BoolField
		def TradedFlatSwitch.field
			return 258
		end
		def initialize(data = nil)
			if( data == nil )
				super(258)
			else
				super(258, data)
			end
		end
	end

	class BasisFeatureDate < Quickfix::StringField
		def BasisFeatureDate.field
			return 259
		end
		def initialize(data = nil)
			if( data == nil )
				super(259)
			else
				super(259, data)
			end
		end
	end

	class BasisFeaturePrice < Quickfix::DoubleField
		def BasisFeaturePrice.field
			return 260
		end
		def initialize(data = nil)
			if( data == nil )
				super(260)
			else
				super(260, data)
			end
		end
	end

	class QuoteStatus < Quickfix::IntField
		def QuoteStatus.field
			return 297
		end
		def initialize(data = nil)
			if( data == nil )
				super(297)
			else
				super(297, data)
			end
		end
	end

	class UnderlyingSecurityIDSource < Quickfix::StringField
		def UnderlyingSecurityIDSource.field
			return 305
		end
		def initialize(data = nil)
			if( data == nil )
				super(305)
			else
				super(305, data)
			end
		end
	end

	class PartyIDSource < Quickfix::CharField
		def PartyIDSource.field
			return 447
		end
		def initialize(data = nil)
			if( data == nil )
				super(447)
			else
				super(447, data)
			end
		end
	end

	class PartyID < Quickfix::StringField
		def PartyID.field
			return 448
		end
		def initialize(data = nil)
			if( data == nil )
				super(448)
			else
				super(448, data)
			end
		end
	end

	class TotalVolumeTradedDate < Quickfix::UtcDateField
		def TotalVolumeTradedDate.field
			return 449
		end
		def initialize(data = nil)
			if( data == nil )
				super(449)
			else
				super(449, data)
			end
		end
	end

	class TotalVolumeTradedTime < Quickfix::UtcTimeOnlyField
		def TotalVolumeTradedTime.field
			return 450
		end
		def initialize(data = nil)
			if( data == nil )
				super(450)
			else
				super(450, data)
			end
		end
	end

	class NetChgPrevDay < Quickfix::DoubleField
		def NetChgPrevDay.field
			return 451
		end
		def initialize(data = nil)
			if( data == nil )
				super(451)
			else
				super(451, data)
			end
		end
	end

	class PartyRole < Quickfix::IntField
		def PartyRole.field
			return 452
		end
		def initialize(data = nil)
			if( data == nil )
				super(452)
			else
				super(452, data)
			end
		end
	end

	class NoPartyIDs < Quickfix::IntField
		def NoPartyIDs.field
			return 453
		end
		def initialize(data = nil)
			if( data == nil )
				super(453)
			else
				super(453, data)
			end
		end
	end

	class NoSecurityAltID < Quickfix::IntField
		def NoSecurityAltID.field
			return 454
		end
		def initialize(data = nil)
			if( data == nil )
				super(454)
			else
				super(454, data)
			end
		end
	end

	class SecurityAltID < Quickfix::StringField
		def SecurityAltID.field
			return 455
		end
		def initialize(data = nil)
			if( data == nil )
				super(455)
			else
				super(455, data)
			end
		end
	end

	class SecurityAltIDSource < Quickfix::StringField
		def SecurityAltIDSource.field
			return 456
		end
		def initialize(data = nil)
			if( data == nil )
				super(456)
			else
				super(456, data)
			end
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::IntField
		def NoUnderlyingSecurityAltID.field
			return 457
		end
		def initialize(data = nil)
			if( data == nil )
				super(457)
			else
				super(457, data)
			end
		end
	end

	class UnderlyingSecurityAltID < Quickfix::StringField
		def UnderlyingSecurityAltID.field
			return 458
		end
		def initialize(data = nil)
			if( data == nil )
				super(458)
			else
				super(458, data)
			end
		end
	end

	class UnderlyingSecurityAltIDSource < Quickfix::StringField
		def UnderlyingSecurityAltIDSource.field
			return 459
		end
		def initialize(data = nil)
			if( data == nil )
				super(459)
			else
				super(459, data)
			end
		end
	end

	class Product < Quickfix::IntField
		def Product.field
			return 460
		end
		def initialize(data = nil)
			if( data == nil )
				super(460)
			else
				super(460, data)
			end
		end
	end

	class CFICode < Quickfix::StringField
		def CFICode.field
			return 461
		end
		def initialize(data = nil)
			if( data == nil )
				super(461)
			else
				super(461, data)
			end
		end
	end

	class UnderlyingProduct < Quickfix::IntField
		def UnderlyingProduct.field
			return 462
		end
		def initialize(data = nil)
			if( data == nil )
				super(462)
			else
				super(462, data)
			end
		end
	end

	class UnderlyingCFICode < Quickfix::StringField
		def UnderlyingCFICode.field
			return 463
		end
		def initialize(data = nil)
			if( data == nil )
				super(463)
			else
				super(463, data)
			end
		end
	end

	class QuantityType < Quickfix::IntField
		def QuantityType.field
			return 465
		end
		def initialize(data = nil)
			if( data == nil )
				super(465)
			else
				super(465, data)
			end
		end
	end

	class BookingRefID < Quickfix::StringField
		def BookingRefID.field
			return 466
		end
		def initialize(data = nil)
			if( data == nil )
				super(466)
			else
				super(466, data)
			end
		end
	end

	class IndividualAllocID < Quickfix::StringField
		def IndividualAllocID.field
			return 467
		end
		def initialize(data = nil)
			if( data == nil )
				super(467)
			else
				super(467, data)
			end
		end
	end

	class RoundingDirection < Quickfix::CharField
		def RoundingDirection.field
			return 468
		end
		def initialize(data = nil)
			if( data == nil )
				super(468)
			else
				super(468, data)
			end
		end
	end

	class RoundingModulus < Quickfix::DoubleField
		def RoundingModulus.field
			return 469
		end
		def initialize(data = nil)
			if( data == nil )
				super(469)
			else
				super(469, data)
			end
		end
	end

	class CountryOfIssue < Quickfix::StringField
		def CountryOfIssue.field
			return 470
		end
		def initialize(data = nil)
			if( data == nil )
				super(470)
			else
				super(470, data)
			end
		end
	end

	class StateOrProvinceOfIssue < Quickfix::StringField
		def StateOrProvinceOfIssue.field
			return 471
		end
		def initialize(data = nil)
			if( data == nil )
				super(471)
			else
				super(471, data)
			end
		end
	end

	class LocaleOfIssue < Quickfix::StringField
		def LocaleOfIssue.field
			return 472
		end
		def initialize(data = nil)
			if( data == nil )
				super(472)
			else
				super(472, data)
			end
		end
	end

	class NoRegistDtls < Quickfix::IntField
		def NoRegistDtls.field
			return 473
		end
		def initialize(data = nil)
			if( data == nil )
				super(473)
			else
				super(473, data)
			end
		end
	end

	class MailingDtls < Quickfix::StringField
		def MailingDtls.field
			return 474
		end
		def initialize(data = nil)
			if( data == nil )
				super(474)
			else
				super(474, data)
			end
		end
	end

	class InvestorCountryOfResidence < Quickfix::StringField
		def InvestorCountryOfResidence.field
			return 475
		end
		def initialize(data = nil)
			if( data == nil )
				super(475)
			else
				super(475, data)
			end
		end
	end

	class PaymentRef < Quickfix::StringField
		def PaymentRef.field
			return 476
		end
		def initialize(data = nil)
			if( data == nil )
				super(476)
			else
				super(476, data)
			end
		end
	end

	class DistribPaymentMethod < Quickfix::IntField
		def DistribPaymentMethod.field
			return 477
		end
		def initialize(data = nil)
			if( data == nil )
				super(477)
			else
				super(477, data)
			end
		end
	end

	class CashDistribCurr < Quickfix::StringField
		def CashDistribCurr.field
			return 478
		end
		def initialize(data = nil)
			if( data == nil )
				super(478)
			else
				super(478, data)
			end
		end
	end

	class CommCurrency < Quickfix::StringField
		def CommCurrency.field
			return 479
		end
		def initialize(data = nil)
			if( data == nil )
				super(479)
			else
				super(479, data)
			end
		end
	end

	class CancellationRights < Quickfix::CharField
		def CancellationRights.field
			return 480
		end
		def initialize(data = nil)
			if( data == nil )
				super(480)
			else
				super(480, data)
			end
		end
	end

	class MoneyLaunderingStatus < Quickfix::CharField
		def MoneyLaunderingStatus.field
			return 481
		end
		def initialize(data = nil)
			if( data == nil )
				super(481)
			else
				super(481, data)
			end
		end
	end

	class MailingInst < Quickfix::StringField
		def MailingInst.field
			return 482
		end
		def initialize(data = nil)
			if( data == nil )
				super(482)
			else
				super(482, data)
			end
		end
	end

	class TransBkdTime < Quickfix::UtcTimeStampField
		def TransBkdTime.field
			return 483
		end
		def initialize(data = nil)
			if( data == nil )
				super(483)
			else
				super(483, data)
			end
		end
	end

	class ExecPriceType < Quickfix::CharField
		def ExecPriceType.field
			return 484
		end
		def initialize(data = nil)
			if( data == nil )
				super(484)
			else
				super(484, data)
			end
		end
	end

	class ExecPriceAdjustment < Quickfix::DoubleField
		def ExecPriceAdjustment.field
			return 485
		end
		def initialize(data = nil)
			if( data == nil )
				super(485)
			else
				super(485, data)
			end
		end
	end

	class DateOfBirth < Quickfix::StringField
		def DateOfBirth.field
			return 486
		end
		def initialize(data = nil)
			if( data == nil )
				super(486)
			else
				super(486, data)
			end
		end
	end

	class TradeReportTransType < Quickfix::IntField
		def TradeReportTransType.field
			return 487
		end
		def initialize(data = nil)
			if( data == nil )
				super(487)
			else
				super(487, data)
			end
		end
	end

	class CardHolderName < Quickfix::StringField
		def CardHolderName.field
			return 488
		end
		def initialize(data = nil)
			if( data == nil )
				super(488)
			else
				super(488, data)
			end
		end
	end

	class CardNumber < Quickfix::StringField
		def CardNumber.field
			return 489
		end
		def initialize(data = nil)
			if( data == nil )
				super(489)
			else
				super(489, data)
			end
		end
	end

	class CardExpDate < Quickfix::StringField
		def CardExpDate.field
			return 490
		end
		def initialize(data = nil)
			if( data == nil )
				super(490)
			else
				super(490, data)
			end
		end
	end

	class CardIssNo < Quickfix::StringField
		def CardIssNo.field
			return 491
		end
		def initialize(data = nil)
			if( data == nil )
				super(491)
			else
				super(491, data)
			end
		end
	end

	class PaymentMethod < Quickfix::IntField
		def PaymentMethod.field
			return 492
		end
		def initialize(data = nil)
			if( data == nil )
				super(492)
			else
				super(492, data)
			end
		end
	end

	class RegistAcctType < Quickfix::StringField
		def RegistAcctType.field
			return 493
		end
		def initialize(data = nil)
			if( data == nil )
				super(493)
			else
				super(493, data)
			end
		end
	end

	class Designation < Quickfix::StringField
		def Designation.field
			return 494
		end
		def initialize(data = nil)
			if( data == nil )
				super(494)
			else
				super(494, data)
			end
		end
	end

	class TaxAdvantageType < Quickfix::IntField
		def TaxAdvantageType.field
			return 495
		end
		def initialize(data = nil)
			if( data == nil )
				super(495)
			else
				super(495, data)
			end
		end
	end

	class RegistRejReasonText < Quickfix::StringField
		def RegistRejReasonText.field
			return 496
		end
		def initialize(data = nil)
			if( data == nil )
				super(496)
			else
				super(496, data)
			end
		end
	end

	class FundRenewWaiv < Quickfix::CharField
		def FundRenewWaiv.field
			return 497
		end
		def initialize(data = nil)
			if( data == nil )
				super(497)
			else
				super(497, data)
			end
		end
	end

	class CashDistribAgentName < Quickfix::StringField
		def CashDistribAgentName.field
			return 498
		end
		def initialize(data = nil)
			if( data == nil )
				super(498)
			else
				super(498, data)
			end
		end
	end

	class CashDistribAgentCode < Quickfix::StringField
		def CashDistribAgentCode.field
			return 499
		end
		def initialize(data = nil)
			if( data == nil )
				super(499)
			else
				super(499, data)
			end
		end
	end

	class CashDistribAgentAcctNumber < Quickfix::StringField
		def CashDistribAgentAcctNumber.field
			return 500
		end
		def initialize(data = nil)
			if( data == nil )
				super(500)
			else
				super(500, data)
			end
		end
	end

	class CashDistribPayRef < Quickfix::StringField
		def CashDistribPayRef.field
			return 501
		end
		def initialize(data = nil)
			if( data == nil )
				super(501)
			else
				super(501, data)
			end
		end
	end

	class CardStartDate < Quickfix::StringField
		def CardStartDate.field
			return 503
		end
		def initialize(data = nil)
			if( data == nil )
				super(503)
			else
				super(503, data)
			end
		end
	end

	class PaymentDate < Quickfix::StringField
		def PaymentDate.field
			return 504
		end
		def initialize(data = nil)
			if( data == nil )
				super(504)
			else
				super(504, data)
			end
		end
	end

	class PaymentRemitterID < Quickfix::StringField
		def PaymentRemitterID.field
			return 505
		end
		def initialize(data = nil)
			if( data == nil )
				super(505)
			else
				super(505, data)
			end
		end
	end

	class RegistStatus < Quickfix::CharField
		def RegistStatus.field
			return 506
		end
		def initialize(data = nil)
			if( data == nil )
				super(506)
			else
				super(506, data)
			end
		end
	end

	class RegistRejReasonCode < Quickfix::IntField
		def RegistRejReasonCode.field
			return 507
		end
		def initialize(data = nil)
			if( data == nil )
				super(507)
			else
				super(507, data)
			end
		end
	end

	class RegistRefID < Quickfix::StringField
		def RegistRefID.field
			return 508
		end
		def initialize(data = nil)
			if( data == nil )
				super(508)
			else
				super(508, data)
			end
		end
	end

	class RegistDetls < Quickfix::StringField
		def RegistDetls.field
			return 509
		end
		def initialize(data = nil)
			if( data == nil )
				super(509)
			else
				super(509, data)
			end
		end
	end

	class NoDistribInsts < Quickfix::IntField
		def NoDistribInsts.field
			return 510
		end
		def initialize(data = nil)
			if( data == nil )
				super(510)
			else
				super(510, data)
			end
		end
	end

	class RegistEmail < Quickfix::StringField
		def RegistEmail.field
			return 511
		end
		def initialize(data = nil)
			if( data == nil )
				super(511)
			else
				super(511, data)
			end
		end
	end

	class DistribPercentage < Quickfix::DoubleField
		def DistribPercentage.field
			return 512
		end
		def initialize(data = nil)
			if( data == nil )
				super(512)
			else
				super(512, data)
			end
		end
	end

	class RegistID < Quickfix::StringField
		def RegistID.field
			return 513
		end
		def initialize(data = nil)
			if( data == nil )
				super(513)
			else
				super(513, data)
			end
		end
	end

	class RegistTransType < Quickfix::CharField
		def RegistTransType.field
			return 514
		end
		def initialize(data = nil)
			if( data == nil )
				super(514)
			else
				super(514, data)
			end
		end
	end

	class ExecValuationPoint < Quickfix::UtcTimeStampField
		def ExecValuationPoint.field
			return 515
		end
		def initialize(data = nil)
			if( data == nil )
				super(515)
			else
				super(515, data)
			end
		end
	end

	class OrderPercent < Quickfix::DoubleField
		def OrderPercent.field
			return 516
		end
		def initialize(data = nil)
			if( data == nil )
				super(516)
			else
				super(516, data)
			end
		end
	end

	class OwnershipType < Quickfix::CharField
		def OwnershipType.field
			return 517
		end
		def initialize(data = nil)
			if( data == nil )
				super(517)
			else
				super(517, data)
			end
		end
	end

	class NoContAmts < Quickfix::IntField
		def NoContAmts.field
			return 518
		end
		def initialize(data = nil)
			if( data == nil )
				super(518)
			else
				super(518, data)
			end
		end
	end

	class ContAmtType < Quickfix::IntField
		def ContAmtType.field
			return 519
		end
		def initialize(data = nil)
			if( data == nil )
				super(519)
			else
				super(519, data)
			end
		end
	end

	class ContAmtValue < Quickfix::DoubleField
		def ContAmtValue.field
			return 520
		end
		def initialize(data = nil)
			if( data == nil )
				super(520)
			else
				super(520, data)
			end
		end
	end

	class ContAmtCurr < Quickfix::StringField
		def ContAmtCurr.field
			return 521
		end
		def initialize(data = nil)
			if( data == nil )
				super(521)
			else
				super(521, data)
			end
		end
	end

	class OwnerType < Quickfix::IntField
		def OwnerType.field
			return 522
		end
		def initialize(data = nil)
			if( data == nil )
				super(522)
			else
				super(522, data)
			end
		end
	end

	class PartySubID < Quickfix::StringField
		def PartySubID.field
			return 523
		end
		def initialize(data = nil)
			if( data == nil )
				super(523)
			else
				super(523, data)
			end
		end
	end

	class NestedPartyID < Quickfix::StringField
		def NestedPartyID.field
			return 524
		end
		def initialize(data = nil)
			if( data == nil )
				super(524)
			else
				super(524, data)
			end
		end
	end

	class NestedPartyIDSource < Quickfix::CharField
		def NestedPartyIDSource.field
			return 525
		end
		def initialize(data = nil)
			if( data == nil )
				super(525)
			else
				super(525, data)
			end
		end
	end

	class SecondaryClOrdID < Quickfix::StringField
		def SecondaryClOrdID.field
			return 526
		end
		def initialize(data = nil)
			if( data == nil )
				super(526)
			else
				super(526, data)
			end
		end
	end

	class SecondaryExecID < Quickfix::StringField
		def SecondaryExecID.field
			return 527
		end
		def initialize(data = nil)
			if( data == nil )
				super(527)
			else
				super(527, data)
			end
		end
	end

	class OrderCapacity < Quickfix::CharField
		def OrderCapacity.field
			return 528
		end
		def initialize(data = nil)
			if( data == nil )
				super(528)
			else
				super(528, data)
			end
		end
	end

	class OrderRestrictions < Quickfix::StringField
		def OrderRestrictions.field
			return 529
		end
		def initialize(data = nil)
			if( data == nil )
				super(529)
			else
				super(529, data)
			end
		end
	end

	class MassCancelRequestType < Quickfix::CharField
		def MassCancelRequestType.field
			return 530
		end
		def initialize(data = nil)
			if( data == nil )
				super(530)
			else
				super(530, data)
			end
		end
	end

	class MassCancelResponse < Quickfix::CharField
		def MassCancelResponse.field
			return 531
		end
		def initialize(data = nil)
			if( data == nil )
				super(531)
			else
				super(531, data)
			end
		end
	end

	class MassCancelRejectReason < Quickfix::IntField
		def MassCancelRejectReason.field
			return 532
		end
		def initialize(data = nil)
			if( data == nil )
				super(532)
			else
				super(532, data)
			end
		end
	end

	class TotalAffectedOrders < Quickfix::IntField
		def TotalAffectedOrders.field
			return 533
		end
		def initialize(data = nil)
			if( data == nil )
				super(533)
			else
				super(533, data)
			end
		end
	end

	class NoAffectedOrders < Quickfix::IntField
		def NoAffectedOrders.field
			return 534
		end
		def initialize(data = nil)
			if( data == nil )
				super(534)
			else
				super(534, data)
			end
		end
	end

	class AffectedOrderID < Quickfix::StringField
		def AffectedOrderID.field
			return 535
		end
		def initialize(data = nil)
			if( data == nil )
				super(535)
			else
				super(535, data)
			end
		end
	end

	class AffectedSecondaryOrderID < Quickfix::StringField
		def AffectedSecondaryOrderID.field
			return 536
		end
		def initialize(data = nil)
			if( data == nil )
				super(536)
			else
				super(536, data)
			end
		end
	end

	class QuoteType < Quickfix::IntField
		def QuoteType.field
			return 537
		end
		def initialize(data = nil)
			if( data == nil )
				super(537)
			else
				super(537, data)
			end
		end
	end

	class NestedPartyRole < Quickfix::IntField
		def NestedPartyRole.field
			return 538
		end
		def initialize(data = nil)
			if( data == nil )
				super(538)
			else
				super(538, data)
			end
		end
	end

	class NoNestedPartyIDs < Quickfix::IntField
		def NoNestedPartyIDs.field
			return 539
		end
		def initialize(data = nil)
			if( data == nil )
				super(539)
			else
				super(539, data)
			end
		end
	end

	class TotalAccruedInterestAmt < Quickfix::DoubleField
		def TotalAccruedInterestAmt.field
			return 540
		end
		def initialize(data = nil)
			if( data == nil )
				super(540)
			else
				super(540, data)
			end
		end
	end

	class MaturityDate < Quickfix::StringField
		def MaturityDate.field
			return 541
		end
		def initialize(data = nil)
			if( data == nil )
				super(541)
			else
				super(541, data)
			end
		end
	end

	class UnderlyingMaturityDate < Quickfix::StringField
		def UnderlyingMaturityDate.field
			return 542
		end
		def initialize(data = nil)
			if( data == nil )
				super(542)
			else
				super(542, data)
			end
		end
	end

	class InstrRegistry < Quickfix::StringField
		def InstrRegistry.field
			return 543
		end
		def initialize(data = nil)
			if( data == nil )
				super(543)
			else
				super(543, data)
			end
		end
	end

	class CashMargin < Quickfix::CharField
		def CashMargin.field
			return 544
		end
		def initialize(data = nil)
			if( data == nil )
				super(544)
			else
				super(544, data)
			end
		end
	end

	class NestedPartySubID < Quickfix::StringField
		def NestedPartySubID.field
			return 545
		end
		def initialize(data = nil)
			if( data == nil )
				super(545)
			else
				super(545, data)
			end
		end
	end

	class Scope < Quickfix::StringField
		def Scope.field
			return 546
		end
		def initialize(data = nil)
			if( data == nil )
				super(546)
			else
				super(546, data)
			end
		end
	end

	class MDImplicitDelete < Quickfix::BoolField
		def MDImplicitDelete.field
			return 547
		end
		def initialize(data = nil)
			if( data == nil )
				super(547)
			else
				super(547, data)
			end
		end
	end

	class CrossID < Quickfix::StringField
		def CrossID.field
			return 548
		end
		def initialize(data = nil)
			if( data == nil )
				super(548)
			else
				super(548, data)
			end
		end
	end

	class CrossType < Quickfix::IntField
		def CrossType.field
			return 549
		end
		def initialize(data = nil)
			if( data == nil )
				super(549)
			else
				super(549, data)
			end
		end
	end

	class CrossPrioritization < Quickfix::IntField
		def CrossPrioritization.field
			return 550
		end
		def initialize(data = nil)
			if( data == nil )
				super(550)
			else
				super(550, data)
			end
		end
	end

	class OrigCrossID < Quickfix::StringField
		def OrigCrossID.field
			return 551
		end
		def initialize(data = nil)
			if( data == nil )
				super(551)
			else
				super(551, data)
			end
		end
	end

	class NoSides < Quickfix::IntField
		def NoSides.field
			return 552
		end
		def initialize(data = nil)
			if( data == nil )
				super(552)
			else
				super(552, data)
			end
		end
	end

	class NoLegs < Quickfix::IntField
		def NoLegs.field
			return 555
		end
		def initialize(data = nil)
			if( data == nil )
				super(555)
			else
				super(555, data)
			end
		end
	end

	class LegCurrency < Quickfix::StringField
		def LegCurrency.field
			return 556
		end
		def initialize(data = nil)
			if( data == nil )
				super(556)
			else
				super(556, data)
			end
		end
	end

	class TotalNumSecurityTypes < Quickfix::IntField
		def TotalNumSecurityTypes.field
			return 557
		end
		def initialize(data = nil)
			if( data == nil )
				super(557)
			else
				super(557, data)
			end
		end
	end

	class NoSecurityTypes < Quickfix::IntField
		def NoSecurityTypes.field
			return 558
		end
		def initialize(data = nil)
			if( data == nil )
				super(558)
			else
				super(558, data)
			end
		end
	end

	class SecurityListRequestType < Quickfix::IntField
		def SecurityListRequestType.field
			return 559
		end
		def initialize(data = nil)
			if( data == nil )
				super(559)
			else
				super(559, data)
			end
		end
	end

	class SecurityRequestResult < Quickfix::IntField
		def SecurityRequestResult.field
			return 560
		end
		def initialize(data = nil)
			if( data == nil )
				super(560)
			else
				super(560, data)
			end
		end
	end

	class RoundLot < Quickfix::DoubleField
		def RoundLot.field
			return 561
		end
		def initialize(data = nil)
			if( data == nil )
				super(561)
			else
				super(561, data)
			end
		end
	end

	class MinTradeVol < Quickfix::DoubleField
		def MinTradeVol.field
			return 562
		end
		def initialize(data = nil)
			if( data == nil )
				super(562)
			else
				super(562, data)
			end
		end
	end

	class MultiLegRptTypeReq < Quickfix::IntField
		def MultiLegRptTypeReq.field
			return 563
		end
		def initialize(data = nil)
			if( data == nil )
				super(563)
			else
				super(563, data)
			end
		end
	end

	class LegPositionEffect < Quickfix::CharField
		def LegPositionEffect.field
			return 564
		end
		def initialize(data = nil)
			if( data == nil )
				super(564)
			else
				super(564, data)
			end
		end
	end

	class LegCoveredOrUncovered < Quickfix::IntField
		def LegCoveredOrUncovered.field
			return 565
		end
		def initialize(data = nil)
			if( data == nil )
				super(565)
			else
				super(565, data)
			end
		end
	end

	class LegPrice < Quickfix::DoubleField
		def LegPrice.field
			return 566
		end
		def initialize(data = nil)
			if( data == nil )
				super(566)
			else
				super(566, data)
			end
		end
	end

	class TradSesStatusRejReason < Quickfix::IntField
		def TradSesStatusRejReason.field
			return 567
		end
		def initialize(data = nil)
			if( data == nil )
				super(567)
			else
				super(567, data)
			end
		end
	end

	class TradeRequestID < Quickfix::StringField
		def TradeRequestID.field
			return 568
		end
		def initialize(data = nil)
			if( data == nil )
				super(568)
			else
				super(568, data)
			end
		end
	end

	class TradeRequestType < Quickfix::IntField
		def TradeRequestType.field
			return 569
		end
		def initialize(data = nil)
			if( data == nil )
				super(569)
			else
				super(569, data)
			end
		end
	end

	class PreviouslyReported < Quickfix::BoolField
		def PreviouslyReported.field
			return 570
		end
		def initialize(data = nil)
			if( data == nil )
				super(570)
			else
				super(570, data)
			end
		end
	end

	class TradeReportID < Quickfix::StringField
		def TradeReportID.field
			return 571
		end
		def initialize(data = nil)
			if( data == nil )
				super(571)
			else
				super(571, data)
			end
		end
	end

	class TradeReportRefID < Quickfix::StringField
		def TradeReportRefID.field
			return 572
		end
		def initialize(data = nil)
			if( data == nil )
				super(572)
			else
				super(572, data)
			end
		end
	end

	class MatchStatus < Quickfix::CharField
		def MatchStatus.field
			return 573
		end
		def initialize(data = nil)
			if( data == nil )
				super(573)
			else
				super(573, data)
			end
		end
	end

	class MatchType < Quickfix::StringField
		def MatchType.field
			return 574
		end
		def initialize(data = nil)
			if( data == nil )
				super(574)
			else
				super(574, data)
			end
		end
	end

	class OddLot < Quickfix::BoolField
		def OddLot.field
			return 575
		end
		def initialize(data = nil)
			if( data == nil )
				super(575)
			else
				super(575, data)
			end
		end
	end

	class NoClearingInstructions < Quickfix::IntField
		def NoClearingInstructions.field
			return 576
		end
		def initialize(data = nil)
			if( data == nil )
				super(576)
			else
				super(576, data)
			end
		end
	end

	class ClearingInstruction < Quickfix::IntField
		def ClearingInstruction.field
			return 577
		end
		def initialize(data = nil)
			if( data == nil )
				super(577)
			else
				super(577, data)
			end
		end
	end

	class TradeInputSource < Quickfix::StringField
		def TradeInputSource.field
			return 578
		end
		def initialize(data = nil)
			if( data == nil )
				super(578)
			else
				super(578, data)
			end
		end
	end

	class TradeInputDevice < Quickfix::StringField
		def TradeInputDevice.field
			return 579
		end
		def initialize(data = nil)
			if( data == nil )
				super(579)
			else
				super(579, data)
			end
		end
	end

	class NoDates < Quickfix::IntField
		def NoDates.field
			return 580
		end
		def initialize(data = nil)
			if( data == nil )
				super(580)
			else
				super(580, data)
			end
		end
	end

	class AccountType < Quickfix::IntField
		def AccountType.field
			return 581
		end
		def initialize(data = nil)
			if( data == nil )
				super(581)
			else
				super(581, data)
			end
		end
	end

	class CustOrderCapacity < Quickfix::IntField
		def CustOrderCapacity.field
			return 582
		end
		def initialize(data = nil)
			if( data == nil )
				super(582)
			else
				super(582, data)
			end
		end
	end

	class ClOrdLinkID < Quickfix::StringField
		def ClOrdLinkID.field
			return 583
		end
		def initialize(data = nil)
			if( data == nil )
				super(583)
			else
				super(583, data)
			end
		end
	end

	class MassStatusReqID < Quickfix::StringField
		def MassStatusReqID.field
			return 584
		end
		def initialize(data = nil)
			if( data == nil )
				super(584)
			else
				super(584, data)
			end
		end
	end

	class MassStatusReqType < Quickfix::IntField
		def MassStatusReqType.field
			return 585
		end
		def initialize(data = nil)
			if( data == nil )
				super(585)
			else
				super(585, data)
			end
		end
	end

	class OrigOrdModTime < Quickfix::UtcTimeStampField
		def OrigOrdModTime.field
			return 586
		end
		def initialize(data = nil)
			if( data == nil )
				super(586)
			else
				super(586, data)
			end
		end
	end

	class LegSettlmntTyp < Quickfix::CharField
		def LegSettlmntTyp.field
			return 587
		end
		def initialize(data = nil)
			if( data == nil )
				super(587)
			else
				super(587, data)
			end
		end
	end

	class LegFutSettDate < Quickfix::StringField
		def LegFutSettDate.field
			return 588
		end
		def initialize(data = nil)
			if( data == nil )
				super(588)
			else
				super(588, data)
			end
		end
	end

	class DayBookingInst < Quickfix::CharField
		def DayBookingInst.field
			return 589
		end
		def initialize(data = nil)
			if( data == nil )
				super(589)
			else
				super(589, data)
			end
		end
	end

	class BookingUnit < Quickfix::CharField
		def BookingUnit.field
			return 590
		end
		def initialize(data = nil)
			if( data == nil )
				super(590)
			else
				super(590, data)
			end
		end
	end

	class PreallocMethod < Quickfix::CharField
		def PreallocMethod.field
			return 591
		end
		def initialize(data = nil)
			if( data == nil )
				super(591)
			else
				super(591, data)
			end
		end
	end

	class UnderlyingCountryOfIssue < Quickfix::StringField
		def UnderlyingCountryOfIssue.field
			return 592
		end
		def initialize(data = nil)
			if( data == nil )
				super(592)
			else
				super(592, data)
			end
		end
	end

	class UnderlyingStateOrProvinceOfIssue < Quickfix::StringField
		def UnderlyingStateOrProvinceOfIssue.field
			return 593
		end
		def initialize(data = nil)
			if( data == nil )
				super(593)
			else
				super(593, data)
			end
		end
	end

	class UnderlyingLocaleOfIssue < Quickfix::StringField
		def UnderlyingLocaleOfIssue.field
			return 594
		end
		def initialize(data = nil)
			if( data == nil )
				super(594)
			else
				super(594, data)
			end
		end
	end

	class UnderlyingInstrRegistry < Quickfix::StringField
		def UnderlyingInstrRegistry.field
			return 595
		end
		def initialize(data = nil)
			if( data == nil )
				super(595)
			else
				super(595, data)
			end
		end
	end

	class LegCountryOfIssue < Quickfix::StringField
		def LegCountryOfIssue.field
			return 596
		end
		def initialize(data = nil)
			if( data == nil )
				super(596)
			else
				super(596, data)
			end
		end
	end

	class LegStateOrProvinceOfIssue < Quickfix::StringField
		def LegStateOrProvinceOfIssue.field
			return 597
		end
		def initialize(data = nil)
			if( data == nil )
				super(597)
			else
				super(597, data)
			end
		end
	end

	class LegLocaleOfIssue < Quickfix::StringField
		def LegLocaleOfIssue.field
			return 598
		end
		def initialize(data = nil)
			if( data == nil )
				super(598)
			else
				super(598, data)
			end
		end
	end

	class LegInstrRegistry < Quickfix::StringField
		def LegInstrRegistry.field
			return 599
		end
		def initialize(data = nil)
			if( data == nil )
				super(599)
			else
				super(599, data)
			end
		end
	end

	class LegSymbol < Quickfix::StringField
		def LegSymbol.field
			return 600
		end
		def initialize(data = nil)
			if( data == nil )
				super(600)
			else
				super(600, data)
			end
		end
	end

	class LegSymbolSfx < Quickfix::StringField
		def LegSymbolSfx.field
			return 601
		end
		def initialize(data = nil)
			if( data == nil )
				super(601)
			else
				super(601, data)
			end
		end
	end

	class LegSecurityID < Quickfix::StringField
		def LegSecurityID.field
			return 602
		end
		def initialize(data = nil)
			if( data == nil )
				super(602)
			else
				super(602, data)
			end
		end
	end

	class LegSecurityIDSource < Quickfix::StringField
		def LegSecurityIDSource.field
			return 603
		end
		def initialize(data = nil)
			if( data == nil )
				super(603)
			else
				super(603, data)
			end
		end
	end

	class NoLegSecurityAltID < Quickfix::IntField
		def NoLegSecurityAltID.field
			return 604
		end
		def initialize(data = nil)
			if( data == nil )
				super(604)
			else
				super(604, data)
			end
		end
	end

	class LegSecurityAltID < Quickfix::StringField
		def LegSecurityAltID.field
			return 605
		end
		def initialize(data = nil)
			if( data == nil )
				super(605)
			else
				super(605, data)
			end
		end
	end

	class LegSecurityAltIDSource < Quickfix::StringField
		def LegSecurityAltIDSource.field
			return 606
		end
		def initialize(data = nil)
			if( data == nil )
				super(606)
			else
				super(606, data)
			end
		end
	end

	class LegProduct < Quickfix::IntField
		def LegProduct.field
			return 607
		end
		def initialize(data = nil)
			if( data == nil )
				super(607)
			else
				super(607, data)
			end
		end
	end

	class LegCFICode < Quickfix::StringField
		def LegCFICode.field
			return 608
		end
		def initialize(data = nil)
			if( data == nil )
				super(608)
			else
				super(608, data)
			end
		end
	end

	class LegSecurityType < Quickfix::StringField
		def LegSecurityType.field
			return 609
		end
		def initialize(data = nil)
			if( data == nil )
				super(609)
			else
				super(609, data)
			end
		end
	end

	class LegMaturityMonthYear < Quickfix::StringField
		def LegMaturityMonthYear.field
			return 610
		end
		def initialize(data = nil)
			if( data == nil )
				super(610)
			else
				super(610, data)
			end
		end
	end

	class LegMaturityDate < Quickfix::StringField
		def LegMaturityDate.field
			return 611
		end
		def initialize(data = nil)
			if( data == nil )
				super(611)
			else
				super(611, data)
			end
		end
	end

	class LegStrikePrice < Quickfix::DoubleField
		def LegStrikePrice.field
			return 612
		end
		def initialize(data = nil)
			if( data == nil )
				super(612)
			else
				super(612, data)
			end
		end
	end

	class LegOptAttribute < Quickfix::CharField
		def LegOptAttribute.field
			return 613
		end
		def initialize(data = nil)
			if( data == nil )
				super(613)
			else
				super(613, data)
			end
		end
	end

	class LegContractMultiplier < Quickfix::DoubleField
		def LegContractMultiplier.field
			return 614
		end
		def initialize(data = nil)
			if( data == nil )
				super(614)
			else
				super(614, data)
			end
		end
	end

	class LegCouponRate < Quickfix::DoubleField
		def LegCouponRate.field
			return 615
		end
		def initialize(data = nil)
			if( data == nil )
				super(615)
			else
				super(615, data)
			end
		end
	end

	class LegSecurityExchange < Quickfix::StringField
		def LegSecurityExchange.field
			return 616
		end
		def initialize(data = nil)
			if( data == nil )
				super(616)
			else
				super(616, data)
			end
		end
	end

	class LegIssuer < Quickfix::StringField
		def LegIssuer.field
			return 617
		end
		def initialize(data = nil)
			if( data == nil )
				super(617)
			else
				super(617, data)
			end
		end
	end

	class EncodedLegIssuerLen < Quickfix::IntField
		def EncodedLegIssuerLen.field
			return 618
		end
		def initialize(data = nil)
			if( data == nil )
				super(618)
			else
				super(618, data)
			end
		end
	end

	class EncodedLegIssuer < Quickfix::StringField
		def EncodedLegIssuer.field
			return 619
		end
		def initialize(data = nil)
			if( data == nil )
				super(619)
			else
				super(619, data)
			end
		end
	end

	class LegSecurityDesc < Quickfix::StringField
		def LegSecurityDesc.field
			return 620
		end
		def initialize(data = nil)
			if( data == nil )
				super(620)
			else
				super(620, data)
			end
		end
	end

	class EncodedLegSecurityDescLen < Quickfix::IntField
		def EncodedLegSecurityDescLen.field
			return 621
		end
		def initialize(data = nil)
			if( data == nil )
				super(621)
			else
				super(621, data)
			end
		end
	end

	class EncodedLegSecurityDesc < Quickfix::StringField
		def EncodedLegSecurityDesc.field
			return 622
		end
		def initialize(data = nil)
			if( data == nil )
				super(622)
			else
				super(622, data)
			end
		end
	end

	class LegRatioQty < Quickfix::DoubleField
		def LegRatioQty.field
			return 623
		end
		def initialize(data = nil)
			if( data == nil )
				super(623)
			else
				super(623, data)
			end
		end
	end

	class LegSide < Quickfix::CharField
		def LegSide.field
			return 624
		end
		def initialize(data = nil)
			if( data == nil )
				super(624)
			else
				super(624, data)
			end
		end
	end

	class TradingSessionSubID < Quickfix::StringField
		def TradingSessionSubID.field
			return 625
		end
		def initialize(data = nil)
			if( data == nil )
				super(625)
			else
				super(625, data)
			end
		end
	end

	class AllocType < Quickfix::IntField
		def AllocType.field
			return 626
		end
		def initialize(data = nil)
			if( data == nil )
				super(626)
			else
				super(626, data)
			end
		end
	end

	class MidPx < Quickfix::DoubleField
		def MidPx.field
			return 631
		end
		def initialize(data = nil)
			if( data == nil )
				super(631)
			else
				super(631, data)
			end
		end
	end

	class BidYield < Quickfix::DoubleField
		def BidYield.field
			return 632
		end
		def initialize(data = nil)
			if( data == nil )
				super(632)
			else
				super(632, data)
			end
		end
	end

	class MidYield < Quickfix::DoubleField
		def MidYield.field
			return 633
		end
		def initialize(data = nil)
			if( data == nil )
				super(633)
			else
				super(633, data)
			end
		end
	end

	class OfferYield < Quickfix::DoubleField
		def OfferYield.field
			return 634
		end
		def initialize(data = nil)
			if( data == nil )
				super(634)
			else
				super(634, data)
			end
		end
	end

	class ClearingFeeIndicator < Quickfix::StringField
		def ClearingFeeIndicator.field
			return 635
		end
		def initialize(data = nil)
			if( data == nil )
				super(635)
			else
				super(635, data)
			end
		end
	end

	class WorkingIndicator < Quickfix::BoolField
		def WorkingIndicator.field
			return 636
		end
		def initialize(data = nil)
			if( data == nil )
				super(636)
			else
				super(636, data)
			end
		end
	end

	class LegLastPx < Quickfix::DoubleField
		def LegLastPx.field
			return 637
		end
		def initialize(data = nil)
			if( data == nil )
				super(637)
			else
				super(637, data)
			end
		end
	end

	class PriorityIndicator < Quickfix::IntField
		def PriorityIndicator.field
			return 638
		end
		def initialize(data = nil)
			if( data == nil )
				super(638)
			else
				super(638, data)
			end
		end
	end

	class PriceImprovement < Quickfix::DoubleField
		def PriceImprovement.field
			return 639
		end
		def initialize(data = nil)
			if( data == nil )
				super(639)
			else
				super(639, data)
			end
		end
	end

	class Price2 < Quickfix::DoubleField
		def Price2.field
			return 640
		end
		def initialize(data = nil)
			if( data == nil )
				super(640)
			else
				super(640, data)
			end
		end
	end

	class LastForwardPoints2 < Quickfix::DoubleField
		def LastForwardPoints2.field
			return 641
		end
		def initialize(data = nil)
			if( data == nil )
				super(641)
			else
				super(641, data)
			end
		end
	end

	class BidForwardPoints2 < Quickfix::DoubleField
		def BidForwardPoints2.field
			return 642
		end
		def initialize(data = nil)
			if( data == nil )
				super(642)
			else
				super(642, data)
			end
		end
	end

	class OfferForwardPoints2 < Quickfix::DoubleField
		def OfferForwardPoints2.field
			return 643
		end
		def initialize(data = nil)
			if( data == nil )
				super(643)
			else
				super(643, data)
			end
		end
	end

	class RFQReqID < Quickfix::StringField
		def RFQReqID.field
			return 644
		end
		def initialize(data = nil)
			if( data == nil )
				super(644)
			else
				super(644, data)
			end
		end
	end

	class MktBidPx < Quickfix::DoubleField
		def MktBidPx.field
			return 645
		end
		def initialize(data = nil)
			if( data == nil )
				super(645)
			else
				super(645, data)
			end
		end
	end

	class MktOfferPx < Quickfix::DoubleField
		def MktOfferPx.field
			return 646
		end
		def initialize(data = nil)
			if( data == nil )
				super(646)
			else
				super(646, data)
			end
		end
	end

	class MinBidSize < Quickfix::DoubleField
		def MinBidSize.field
			return 647
		end
		def initialize(data = nil)
			if( data == nil )
				super(647)
			else
				super(647, data)
			end
		end
	end

	class MinOfferSize < Quickfix::DoubleField
		def MinOfferSize.field
			return 648
		end
		def initialize(data = nil)
			if( data == nil )
				super(648)
			else
				super(648, data)
			end
		end
	end

	class QuoteStatusReqID < Quickfix::StringField
		def QuoteStatusReqID.field
			return 649
		end
		def initialize(data = nil)
			if( data == nil )
				super(649)
			else
				super(649, data)
			end
		end
	end

	class LegalConfirm < Quickfix::BoolField
		def LegalConfirm.field
			return 650
		end
		def initialize(data = nil)
			if( data == nil )
				super(650)
			else
				super(650, data)
			end
		end
	end

	class UnderlyingLastPx < Quickfix::DoubleField
		def UnderlyingLastPx.field
			return 651
		end
		def initialize(data = nil)
			if( data == nil )
				super(651)
			else
				super(651, data)
			end
		end
	end

	class UnderlyingLastQty < Quickfix::DoubleField
		def UnderlyingLastQty.field
			return 652
		end
		def initialize(data = nil)
			if( data == nil )
				super(652)
			else
				super(652, data)
			end
		end
	end

	class LegRefID < Quickfix::StringField
		def LegRefID.field
			return 654
		end
		def initialize(data = nil)
			if( data == nil )
				super(654)
			else
				super(654, data)
			end
		end
	end

	class ContraLegRefID < Quickfix::StringField
		def ContraLegRefID.field
			return 655
		end
		def initialize(data = nil)
			if( data == nil )
				super(655)
			else
				super(655, data)
			end
		end
	end

	class SettlCurrBidFxRate < Quickfix::DoubleField
		def SettlCurrBidFxRate.field
			return 656
		end
		def initialize(data = nil)
			if( data == nil )
				super(656)
			else
				super(656, data)
			end
		end
	end

	class SettlCurrOfferFxRate < Quickfix::DoubleField
		def SettlCurrOfferFxRate.field
			return 657
		end
		def initialize(data = nil)
			if( data == nil )
				super(657)
			else
				super(657, data)
			end
		end
	end

	class QuoteRequestRejectReason < Quickfix::IntField
		def QuoteRequestRejectReason.field
			return 658
		end
		def initialize(data = nil)
			if( data == nil )
				super(658)
			else
				super(658, data)
			end
		end
	end

	class SideComplianceID < Quickfix::StringField
		def SideComplianceID.field
			return 659
		end
		def initialize(data = nil)
			if( data == nil )
				super(659)
			else
				super(659, data)
			end
		end
	end

	class IOIID < Quickfix::StringField
		def IOIID.field
			return 23
		end
		def initialize(data = nil)
			if( data == nil )
				super(23)
			else
				super(23, data)
			end
		end
	end

	class NoLinesOfText < Quickfix::IntField
		def NoLinesOfText.field
			return 33
		end
		def initialize(data = nil)
			if( data == nil )
				super(33)
			else
				super(33, data)
			end
		end
	end

	class SettlType < Quickfix::StringField
		def SettlType.field
			return 63
		end
		def initialize(data = nil)
			if( data == nil )
				super(63)
			else
				super(63, data)
			end
		end
	end

	class SettlDate < Quickfix::StringField
		def SettlDate.field
			return 64
		end
		def initialize(data = nil)
			if( data == nil )
				super(64)
			else
				super(64, data)
			end
		end
	end

	class AvgPxPrecision < Quickfix::IntField
		def AvgPxPrecision.field
			return 74
		end
		def initialize(data = nil)
			if( data == nil )
				super(74)
			else
				super(74, data)
			end
		end
	end

	class SettlDate2 < Quickfix::StringField
		def SettlDate2.field
			return 193
		end
		def initialize(data = nil)
			if( data == nil )
				super(193)
			else
				super(193, data)
			end
		end
	end

	class PegOffsetValue < Quickfix::DoubleField
		def PegOffsetValue.field
			return 211
		end
		def initialize(data = nil)
			if( data == nil )
				super(211)
			else
				super(211, data)
			end
		end
	end

	class OpenCloseSettlFlag < Quickfix::StringField
		def OpenCloseSettlFlag.field
			return 286
		end
		def initialize(data = nil)
			if( data == nil )
				super(286)
			else
				super(286, data)
			end
		end
	end

	class TotNoQuoteEntries < Quickfix::IntField
		def TotNoQuoteEntries.field
			return 304
		end
		def initialize(data = nil)
			if( data == nil )
				super(304)
			else
				super(304, data)
			end
		end
	end

	class DiscretionOffsetValue < Quickfix::DoubleField
		def DiscretionOffsetValue.field
			return 389
		end
		def initialize(data = nil)
			if( data == nil )
				super(389)
			else
				super(389, data)
			end
		end
	end

	class TotNoRelatedSym < Quickfix::IntField
		def TotNoRelatedSym.field
			return 393
		end
		def initialize(data = nil)
			if( data == nil )
				super(393)
			else
				super(393, data)
			end
		end
	end

	class BidTradeType < Quickfix::CharField
		def BidTradeType.field
			return 418
		end
		def initialize(data = nil)
			if( data == nil )
				super(418)
			else
				super(418, data)
			end
		end
	end

	class CardIssNum < Quickfix::StringField
		def CardIssNum.field
			return 491
		end
		def initialize(data = nil)
			if( data == nil )
				super(491)
			else
				super(491, data)
			end
		end
	end

	class CashDistribAgentAcctName < Quickfix::StringField
		def CashDistribAgentAcctName.field
			return 502
		end
		def initialize(data = nil)
			if( data == nil )
				super(502)
			else
				super(502, data)
			end
		end
	end

	class RegistDtls < Quickfix::StringField
		def RegistDtls.field
			return 509
		end
		def initialize(data = nil)
			if( data == nil )
				super(509)
			else
				super(509, data)
			end
		end
	end

	class TotNoSecurityTypes < Quickfix::IntField
		def TotNoSecurityTypes.field
			return 557
		end
		def initialize(data = nil)
			if( data == nil )
				super(557)
			else
				super(557, data)
			end
		end
	end

	class LegSettlType < Quickfix::CharField
		def LegSettlType.field
			return 587
		end
		def initialize(data = nil)
			if( data == nil )
				super(587)
			else
				super(587, data)
			end
		end
	end

	class LegSettlDate < Quickfix::StringField
		def LegSettlDate.field
			return 588
		end
		def initialize(data = nil)
			if( data == nil )
				super(588)
			else
				super(588, data)
			end
		end
	end

	class AcctIDSource < Quickfix::IntField
		def AcctIDSource.field
			return 660
		end
		def initialize(data = nil)
			if( data == nil )
				super(660)
			else
				super(660, data)
			end
		end
	end

	class AllocAcctIDSource < Quickfix::IntField
		def AllocAcctIDSource.field
			return 661
		end
		def initialize(data = nil)
			if( data == nil )
				super(661)
			else
				super(661, data)
			end
		end
	end

	class BenchmarkPrice < Quickfix::DoubleField
		def BenchmarkPrice.field
			return 662
		end
		def initialize(data = nil)
			if( data == nil )
				super(662)
			else
				super(662, data)
			end
		end
	end

	class BenchmarkPriceType < Quickfix::IntField
		def BenchmarkPriceType.field
			return 663
		end
		def initialize(data = nil)
			if( data == nil )
				super(663)
			else
				super(663, data)
			end
		end
	end

	class ConfirmID < Quickfix::StringField
		def ConfirmID.field
			return 664
		end
		def initialize(data = nil)
			if( data == nil )
				super(664)
			else
				super(664, data)
			end
		end
	end

	class ConfirmStatus < Quickfix::IntField
		def ConfirmStatus.field
			return 665
		end
		def initialize(data = nil)
			if( data == nil )
				super(665)
			else
				super(665, data)
			end
		end
	end

	class ConfirmTransType < Quickfix::IntField
		def ConfirmTransType.field
			return 666
		end
		def initialize(data = nil)
			if( data == nil )
				super(666)
			else
				super(666, data)
			end
		end
	end

	class ContractSettlMonth < Quickfix::StringField
		def ContractSettlMonth.field
			return 667
		end
		def initialize(data = nil)
			if( data == nil )
				super(667)
			else
				super(667, data)
			end
		end
	end

	class DeliveryForm < Quickfix::IntField
		def DeliveryForm.field
			return 668
		end
		def initialize(data = nil)
			if( data == nil )
				super(668)
			else
				super(668, data)
			end
		end
	end

	class LastParPx < Quickfix::DoubleField
		def LastParPx.field
			return 669
		end
		def initialize(data = nil)
			if( data == nil )
				super(669)
			else
				super(669, data)
			end
		end
	end

	class NoLegAllocs < Quickfix::IntField
		def NoLegAllocs.field
			return 670
		end
		def initialize(data = nil)
			if( data == nil )
				super(670)
			else
				super(670, data)
			end
		end
	end

	class LegAllocAccount < Quickfix::StringField
		def LegAllocAccount.field
			return 671
		end
		def initialize(data = nil)
			if( data == nil )
				super(671)
			else
				super(671, data)
			end
		end
	end

	class LegIndividualAllocID < Quickfix::StringField
		def LegIndividualAllocID.field
			return 672
		end
		def initialize(data = nil)
			if( data == nil )
				super(672)
			else
				super(672, data)
			end
		end
	end

	class LegAllocQty < Quickfix::DoubleField
		def LegAllocQty.field
			return 673
		end
		def initialize(data = nil)
			if( data == nil )
				super(673)
			else
				super(673, data)
			end
		end
	end

	class LegAllocAcctIDSource < Quickfix::StringField
		def LegAllocAcctIDSource.field
			return 674
		end
		def initialize(data = nil)
			if( data == nil )
				super(674)
			else
				super(674, data)
			end
		end
	end

	class LegSettlCurrency < Quickfix::StringField
		def LegSettlCurrency.field
			return 675
		end
		def initialize(data = nil)
			if( data == nil )
				super(675)
			else
				super(675, data)
			end
		end
	end

	class LegBenchmarkCurveCurrency < Quickfix::StringField
		def LegBenchmarkCurveCurrency.field
			return 676
		end
		def initialize(data = nil)
			if( data == nil )
				super(676)
			else
				super(676, data)
			end
		end
	end

	class LegBenchmarkCurveName < Quickfix::StringField
		def LegBenchmarkCurveName.field
			return 677
		end
		def initialize(data = nil)
			if( data == nil )
				super(677)
			else
				super(677, data)
			end
		end
	end

	class LegBenchmarkCurvePoint < Quickfix::StringField
		def LegBenchmarkCurvePoint.field
			return 678
		end
		def initialize(data = nil)
			if( data == nil )
				super(678)
			else
				super(678, data)
			end
		end
	end

	class LegBenchmarkPrice < Quickfix::DoubleField
		def LegBenchmarkPrice.field
			return 679
		end
		def initialize(data = nil)
			if( data == nil )
				super(679)
			else
				super(679, data)
			end
		end
	end

	class LegBenchmarkPriceType < Quickfix::IntField
		def LegBenchmarkPriceType.field
			return 680
		end
		def initialize(data = nil)
			if( data == nil )
				super(680)
			else
				super(680, data)
			end
		end
	end

	class LegBidPx < Quickfix::DoubleField
		def LegBidPx.field
			return 681
		end
		def initialize(data = nil)
			if( data == nil )
				super(681)
			else
				super(681, data)
			end
		end
	end

	class LegIOIQty < Quickfix::StringField
		def LegIOIQty.field
			return 682
		end
		def initialize(data = nil)
			if( data == nil )
				super(682)
			else
				super(682, data)
			end
		end
	end

	class NoLegStipulations < Quickfix::IntField
		def NoLegStipulations.field
			return 683
		end
		def initialize(data = nil)
			if( data == nil )
				super(683)
			else
				super(683, data)
			end
		end
	end

	class LegOfferPx < Quickfix::DoubleField
		def LegOfferPx.field
			return 684
		end
		def initialize(data = nil)
			if( data == nil )
				super(684)
			else
				super(684, data)
			end
		end
	end

	class LegPriceType < Quickfix::IntField
		def LegPriceType.field
			return 686
		end
		def initialize(data = nil)
			if( data == nil )
				super(686)
			else
				super(686, data)
			end
		end
	end

	class LegQty < Quickfix::DoubleField
		def LegQty.field
			return 687
		end
		def initialize(data = nil)
			if( data == nil )
				super(687)
			else
				super(687, data)
			end
		end
	end

	class LegStipulationType < Quickfix::StringField
		def LegStipulationType.field
			return 688
		end
		def initialize(data = nil)
			if( data == nil )
				super(688)
			else
				super(688, data)
			end
		end
	end

	class LegStipulationValue < Quickfix::StringField
		def LegStipulationValue.field
			return 689
		end
		def initialize(data = nil)
			if( data == nil )
				super(689)
			else
				super(689, data)
			end
		end
	end

	class LegSwapType < Quickfix::IntField
		def LegSwapType.field
			return 690
		end
		def initialize(data = nil)
			if( data == nil )
				super(690)
			else
				super(690, data)
			end
		end
	end

	class Pool < Quickfix::StringField
		def Pool.field
			return 691
		end
		def initialize(data = nil)
			if( data == nil )
				super(691)
			else
				super(691, data)
			end
		end
	end

	class QuotePriceType < Quickfix::IntField
		def QuotePriceType.field
			return 692
		end
		def initialize(data = nil)
			if( data == nil )
				super(692)
			else
				super(692, data)
			end
		end
	end

	class QuoteRespID < Quickfix::StringField
		def QuoteRespID.field
			return 693
		end
		def initialize(data = nil)
			if( data == nil )
				super(693)
			else
				super(693, data)
			end
		end
	end

	class QuoteRespType < Quickfix::IntField
		def QuoteRespType.field
			return 694
		end
		def initialize(data = nil)
			if( data == nil )
				super(694)
			else
				super(694, data)
			end
		end
	end

	class QuoteQualifier < Quickfix::CharField
		def QuoteQualifier.field
			return 695
		end
		def initialize(data = nil)
			if( data == nil )
				super(695)
			else
				super(695, data)
			end
		end
	end

	class YieldRedemptionDate < Quickfix::StringField
		def YieldRedemptionDate.field
			return 696
		end
		def initialize(data = nil)
			if( data == nil )
				super(696)
			else
				super(696, data)
			end
		end
	end

	class YieldRedemptionPrice < Quickfix::DoubleField
		def YieldRedemptionPrice.field
			return 697
		end
		def initialize(data = nil)
			if( data == nil )
				super(697)
			else
				super(697, data)
			end
		end
	end

	class YieldRedemptionPriceType < Quickfix::IntField
		def YieldRedemptionPriceType.field
			return 698
		end
		def initialize(data = nil)
			if( data == nil )
				super(698)
			else
				super(698, data)
			end
		end
	end

	class BenchmarkSecurityID < Quickfix::StringField
		def BenchmarkSecurityID.field
			return 699
		end
		def initialize(data = nil)
			if( data == nil )
				super(699)
			else
				super(699, data)
			end
		end
	end

	class ReversalIndicator < Quickfix::BoolField
		def ReversalIndicator.field
			return 700
		end
		def initialize(data = nil)
			if( data == nil )
				super(700)
			else
				super(700, data)
			end
		end
	end

	class YieldCalcDate < Quickfix::StringField
		def YieldCalcDate.field
			return 701
		end
		def initialize(data = nil)
			if( data == nil )
				super(701)
			else
				super(701, data)
			end
		end
	end

	class NoPositions < Quickfix::IntField
		def NoPositions.field
			return 702
		end
		def initialize(data = nil)
			if( data == nil )
				super(702)
			else
				super(702, data)
			end
		end
	end

	class PosType < Quickfix::StringField
		def PosType.field
			return 703
		end
		def initialize(data = nil)
			if( data == nil )
				super(703)
			else
				super(703, data)
			end
		end
	end

	class LongQty < Quickfix::DoubleField
		def LongQty.field
			return 704
		end
		def initialize(data = nil)
			if( data == nil )
				super(704)
			else
				super(704, data)
			end
		end
	end

	class ShortQty < Quickfix::DoubleField
		def ShortQty.field
			return 705
		end
		def initialize(data = nil)
			if( data == nil )
				super(705)
			else
				super(705, data)
			end
		end
	end

	class PosQtyStatus < Quickfix::IntField
		def PosQtyStatus.field
			return 706
		end
		def initialize(data = nil)
			if( data == nil )
				super(706)
			else
				super(706, data)
			end
		end
	end

	class PosAmtType < Quickfix::StringField
		def PosAmtType.field
			return 707
		end
		def initialize(data = nil)
			if( data == nil )
				super(707)
			else
				super(707, data)
			end
		end
	end

	class PosAmt < Quickfix::DoubleField
		def PosAmt.field
			return 708
		end
		def initialize(data = nil)
			if( data == nil )
				super(708)
			else
				super(708, data)
			end
		end
	end

	class PosTransType < Quickfix::IntField
		def PosTransType.field
			return 709
		end
		def initialize(data = nil)
			if( data == nil )
				super(709)
			else
				super(709, data)
			end
		end
	end

	class PosReqID < Quickfix::StringField
		def PosReqID.field
			return 710
		end
		def initialize(data = nil)
			if( data == nil )
				super(710)
			else
				super(710, data)
			end
		end
	end

	class NoUnderlyings < Quickfix::IntField
		def NoUnderlyings.field
			return 711
		end
		def initialize(data = nil)
			if( data == nil )
				super(711)
			else
				super(711, data)
			end
		end
	end

	class PosMaintAction < Quickfix::IntField
		def PosMaintAction.field
			return 712
		end
		def initialize(data = nil)
			if( data == nil )
				super(712)
			else
				super(712, data)
			end
		end
	end

	class OrigPosReqRefID < Quickfix::StringField
		def OrigPosReqRefID.field
			return 713
		end
		def initialize(data = nil)
			if( data == nil )
				super(713)
			else
				super(713, data)
			end
		end
	end

	class PosMaintRptRefID < Quickfix::StringField
		def PosMaintRptRefID.field
			return 714
		end
		def initialize(data = nil)
			if( data == nil )
				super(714)
			else
				super(714, data)
			end
		end
	end

	class ClearingBusinessDate < Quickfix::StringField
		def ClearingBusinessDate.field
			return 715
		end
		def initialize(data = nil)
			if( data == nil )
				super(715)
			else
				super(715, data)
			end
		end
	end

	class SettlSessID < Quickfix::StringField
		def SettlSessID.field
			return 716
		end
		def initialize(data = nil)
			if( data == nil )
				super(716)
			else
				super(716, data)
			end
		end
	end

	class SettlSessSubID < Quickfix::StringField
		def SettlSessSubID.field
			return 717
		end
		def initialize(data = nil)
			if( data == nil )
				super(717)
			else
				super(717, data)
			end
		end
	end

	class AdjustmentType < Quickfix::IntField
		def AdjustmentType.field
			return 718
		end
		def initialize(data = nil)
			if( data == nil )
				super(718)
			else
				super(718, data)
			end
		end
	end

	class ContraryInstructionIndicator < Quickfix::BoolField
		def ContraryInstructionIndicator.field
			return 719
		end
		def initialize(data = nil)
			if( data == nil )
				super(719)
			else
				super(719, data)
			end
		end
	end

	class PriorSpreadIndicator < Quickfix::BoolField
		def PriorSpreadIndicator.field
			return 720
		end
		def initialize(data = nil)
			if( data == nil )
				super(720)
			else
				super(720, data)
			end
		end
	end

	class PosMaintRptID < Quickfix::StringField
		def PosMaintRptID.field
			return 721
		end
		def initialize(data = nil)
			if( data == nil )
				super(721)
			else
				super(721, data)
			end
		end
	end

	class PosMaintStatus < Quickfix::IntField
		def PosMaintStatus.field
			return 722
		end
		def initialize(data = nil)
			if( data == nil )
				super(722)
			else
				super(722, data)
			end
		end
	end

	class PosMaintResult < Quickfix::IntField
		def PosMaintResult.field
			return 723
		end
		def initialize(data = nil)
			if( data == nil )
				super(723)
			else
				super(723, data)
			end
		end
	end

	class PosReqType < Quickfix::IntField
		def PosReqType.field
			return 724
		end
		def initialize(data = nil)
			if( data == nil )
				super(724)
			else
				super(724, data)
			end
		end
	end

	class ResponseTransportType < Quickfix::IntField
		def ResponseTransportType.field
			return 725
		end
		def initialize(data = nil)
			if( data == nil )
				super(725)
			else
				super(725, data)
			end
		end
	end

	class ResponseDestination < Quickfix::StringField
		def ResponseDestination.field
			return 726
		end
		def initialize(data = nil)
			if( data == nil )
				super(726)
			else
				super(726, data)
			end
		end
	end

	class TotalNumPosReports < Quickfix::IntField
		def TotalNumPosReports.field
			return 727
		end
		def initialize(data = nil)
			if( data == nil )
				super(727)
			else
				super(727, data)
			end
		end
	end

	class PosReqResult < Quickfix::IntField
		def PosReqResult.field
			return 728
		end
		def initialize(data = nil)
			if( data == nil )
				super(728)
			else
				super(728, data)
			end
		end
	end

	class PosReqStatus < Quickfix::IntField
		def PosReqStatus.field
			return 729
		end
		def initialize(data = nil)
			if( data == nil )
				super(729)
			else
				super(729, data)
			end
		end
	end

	class SettlPrice < Quickfix::DoubleField
		def SettlPrice.field
			return 730
		end
		def initialize(data = nil)
			if( data == nil )
				super(730)
			else
				super(730, data)
			end
		end
	end

	class SettlPriceType < Quickfix::IntField
		def SettlPriceType.field
			return 731
		end
		def initialize(data = nil)
			if( data == nil )
				super(731)
			else
				super(731, data)
			end
		end
	end

	class UnderlyingSettlPrice < Quickfix::DoubleField
		def UnderlyingSettlPrice.field
			return 732
		end
		def initialize(data = nil)
			if( data == nil )
				super(732)
			else
				super(732, data)
			end
		end
	end

	class UnderlyingSettlPriceType < Quickfix::IntField
		def UnderlyingSettlPriceType.field
			return 733
		end
		def initialize(data = nil)
			if( data == nil )
				super(733)
			else
				super(733, data)
			end
		end
	end

	class PriorSettlPrice < Quickfix::DoubleField
		def PriorSettlPrice.field
			return 734
		end
		def initialize(data = nil)
			if( data == nil )
				super(734)
			else
				super(734, data)
			end
		end
	end

	class NoQuoteQualifiers < Quickfix::IntField
		def NoQuoteQualifiers.field
			return 735
		end
		def initialize(data = nil)
			if( data == nil )
				super(735)
			else
				super(735, data)
			end
		end
	end

	class AllocSettlCurrency < Quickfix::StringField
		def AllocSettlCurrency.field
			return 736
		end
		def initialize(data = nil)
			if( data == nil )
				super(736)
			else
				super(736, data)
			end
		end
	end

	class AllocSettlCurrAmt < Quickfix::DoubleField
		def AllocSettlCurrAmt.field
			return 737
		end
		def initialize(data = nil)
			if( data == nil )
				super(737)
			else
				super(737, data)
			end
		end
	end

	class InterestAtMaturity < Quickfix::DoubleField
		def InterestAtMaturity.field
			return 738
		end
		def initialize(data = nil)
			if( data == nil )
				super(738)
			else
				super(738, data)
			end
		end
	end

	class LegDatedDate < Quickfix::StringField
		def LegDatedDate.field
			return 739
		end
		def initialize(data = nil)
			if( data == nil )
				super(739)
			else
				super(739, data)
			end
		end
	end

	class LegPool < Quickfix::StringField
		def LegPool.field
			return 740
		end
		def initialize(data = nil)
			if( data == nil )
				super(740)
			else
				super(740, data)
			end
		end
	end

	class AllocInterestAtMaturity < Quickfix::DoubleField
		def AllocInterestAtMaturity.field
			return 741
		end
		def initialize(data = nil)
			if( data == nil )
				super(741)
			else
				super(741, data)
			end
		end
	end

	class AllocAccruedInterestAmt < Quickfix::DoubleField
		def AllocAccruedInterestAmt.field
			return 742
		end
		def initialize(data = nil)
			if( data == nil )
				super(742)
			else
				super(742, data)
			end
		end
	end

	class DeliveryDate < Quickfix::StringField
		def DeliveryDate.field
			return 743
		end
		def initialize(data = nil)
			if( data == nil )
				super(743)
			else
				super(743, data)
			end
		end
	end

	class AssignmentMethod < Quickfix::CharField
		def AssignmentMethod.field
			return 744
		end
		def initialize(data = nil)
			if( data == nil )
				super(744)
			else
				super(744, data)
			end
		end
	end

	class AssignmentUnit < Quickfix::DoubleField
		def AssignmentUnit.field
			return 745
		end
		def initialize(data = nil)
			if( data == nil )
				super(745)
			else
				super(745, data)
			end
		end
	end

	class OpenInterest < Quickfix::DoubleField
		def OpenInterest.field
			return 746
		end
		def initialize(data = nil)
			if( data == nil )
				super(746)
			else
				super(746, data)
			end
		end
	end

	class ExerciseMethod < Quickfix::CharField
		def ExerciseMethod.field
			return 747
		end
		def initialize(data = nil)
			if( data == nil )
				super(747)
			else
				super(747, data)
			end
		end
	end

	class TotNumTradeReports < Quickfix::IntField
		def TotNumTradeReports.field
			return 748
		end
		def initialize(data = nil)
			if( data == nil )
				super(748)
			else
				super(748, data)
			end
		end
	end

	class TradeRequestResult < Quickfix::IntField
		def TradeRequestResult.field
			return 749
		end
		def initialize(data = nil)
			if( data == nil )
				super(749)
			else
				super(749, data)
			end
		end
	end

	class TradeRequestStatus < Quickfix::IntField
		def TradeRequestStatus.field
			return 750
		end
		def initialize(data = nil)
			if( data == nil )
				super(750)
			else
				super(750, data)
			end
		end
	end

	class TradeReportRejectReason < Quickfix::IntField
		def TradeReportRejectReason.field
			return 751
		end
		def initialize(data = nil)
			if( data == nil )
				super(751)
			else
				super(751, data)
			end
		end
	end

	class SideMultiLegReportingType < Quickfix::IntField
		def SideMultiLegReportingType.field
			return 752
		end
		def initialize(data = nil)
			if( data == nil )
				super(752)
			else
				super(752, data)
			end
		end
	end

	class NoPosAmt < Quickfix::IntField
		def NoPosAmt.field
			return 753
		end
		def initialize(data = nil)
			if( data == nil )
				super(753)
			else
				super(753, data)
			end
		end
	end

	class AutoAcceptIndicator < Quickfix::BoolField
		def AutoAcceptIndicator.field
			return 754
		end
		def initialize(data = nil)
			if( data == nil )
				super(754)
			else
				super(754, data)
			end
		end
	end

	class AllocReportID < Quickfix::StringField
		def AllocReportID.field
			return 755
		end
		def initialize(data = nil)
			if( data == nil )
				super(755)
			else
				super(755, data)
			end
		end
	end

	class NoNested2PartyIDs < Quickfix::IntField
		def NoNested2PartyIDs.field
			return 756
		end
		def initialize(data = nil)
			if( data == nil )
				super(756)
			else
				super(756, data)
			end
		end
	end

	class Nested2PartyID < Quickfix::StringField
		def Nested2PartyID.field
			return 757
		end
		def initialize(data = nil)
			if( data == nil )
				super(757)
			else
				super(757, data)
			end
		end
	end

	class Nested2PartyIDSource < Quickfix::CharField
		def Nested2PartyIDSource.field
			return 758
		end
		def initialize(data = nil)
			if( data == nil )
				super(758)
			else
				super(758, data)
			end
		end
	end

	class Nested2PartyRole < Quickfix::IntField
		def Nested2PartyRole.field
			return 759
		end
		def initialize(data = nil)
			if( data == nil )
				super(759)
			else
				super(759, data)
			end
		end
	end

	class Nested2PartySubID < Quickfix::StringField
		def Nested2PartySubID.field
			return 760
		end
		def initialize(data = nil)
			if( data == nil )
				super(760)
			else
				super(760, data)
			end
		end
	end

	class BenchmarkSecurityIDSource < Quickfix::StringField
		def BenchmarkSecurityIDSource.field
			return 761
		end
		def initialize(data = nil)
			if( data == nil )
				super(761)
			else
				super(761, data)
			end
		end
	end

	class SecuritySubType < Quickfix::StringField
		def SecuritySubType.field
			return 762
		end
		def initialize(data = nil)
			if( data == nil )
				super(762)
			else
				super(762, data)
			end
		end
	end

	class UnderlyingSecuritySubType < Quickfix::StringField
		def UnderlyingSecuritySubType.field
			return 763
		end
		def initialize(data = nil)
			if( data == nil )
				super(763)
			else
				super(763, data)
			end
		end
	end

	class LegSecuritySubType < Quickfix::StringField
		def LegSecuritySubType.field
			return 764
		end
		def initialize(data = nil)
			if( data == nil )
				super(764)
			else
				super(764, data)
			end
		end
	end

	class AllowableOneSidednessPct < Quickfix::DoubleField
		def AllowableOneSidednessPct.field
			return 765
		end
		def initialize(data = nil)
			if( data == nil )
				super(765)
			else
				super(765, data)
			end
		end
	end

	class AllowableOneSidednessValue < Quickfix::DoubleField
		def AllowableOneSidednessValue.field
			return 766
		end
		def initialize(data = nil)
			if( data == nil )
				super(766)
			else
				super(766, data)
			end
		end
	end

	class AllowableOneSidednessCurr < Quickfix::StringField
		def AllowableOneSidednessCurr.field
			return 767
		end
		def initialize(data = nil)
			if( data == nil )
				super(767)
			else
				super(767, data)
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::IntField
		def NoTrdRegTimestamps.field
			return 768
		end
		def initialize(data = nil)
			if( data == nil )
				super(768)
			else
				super(768, data)
			end
		end
	end

	class TrdRegTimestamp < Quickfix::UtcTimeStampField
		def TrdRegTimestamp.field
			return 769
		end
		def initialize(data = nil)
			if( data == nil )
				super(769)
			else
				super(769, data)
			end
		end
	end

	class TrdRegTimestampType < Quickfix::IntField
		def TrdRegTimestampType.field
			return 770
		end
		def initialize(data = nil)
			if( data == nil )
				super(770)
			else
				super(770, data)
			end
		end
	end

	class TrdRegTimestampOrigin < Quickfix::StringField
		def TrdRegTimestampOrigin.field
			return 771
		end
		def initialize(data = nil)
			if( data == nil )
				super(771)
			else
				super(771, data)
			end
		end
	end

	class ConfirmRefID < Quickfix::StringField
		def ConfirmRefID.field
			return 772
		end
		def initialize(data = nil)
			if( data == nil )
				super(772)
			else
				super(772, data)
			end
		end
	end

	class ConfirmType < Quickfix::IntField
		def ConfirmType.field
			return 773
		end
		def initialize(data = nil)
			if( data == nil )
				super(773)
			else
				super(773, data)
			end
		end
	end

	class ConfirmRejReason < Quickfix::IntField
		def ConfirmRejReason.field
			return 774
		end
		def initialize(data = nil)
			if( data == nil )
				super(774)
			else
				super(774, data)
			end
		end
	end

	class BookingType < Quickfix::IntField
		def BookingType.field
			return 775
		end
		def initialize(data = nil)
			if( data == nil )
				super(775)
			else
				super(775, data)
			end
		end
	end

	class IndividualAllocRejCode < Quickfix::IntField
		def IndividualAllocRejCode.field
			return 776
		end
		def initialize(data = nil)
			if( data == nil )
				super(776)
			else
				super(776, data)
			end
		end
	end

	class SettlInstMsgID < Quickfix::StringField
		def SettlInstMsgID.field
			return 777
		end
		def initialize(data = nil)
			if( data == nil )
				super(777)
			else
				super(777, data)
			end
		end
	end

	class NoSettlInst < Quickfix::IntField
		def NoSettlInst.field
			return 778
		end
		def initialize(data = nil)
			if( data == nil )
				super(778)
			else
				super(778, data)
			end
		end
	end

	class LastUpdateTime < Quickfix::UtcTimeStampField
		def LastUpdateTime.field
			return 779
		end
		def initialize(data = nil)
			if( data == nil )
				super(779)
			else
				super(779, data)
			end
		end
	end

	class AllocSettlInstType < Quickfix::IntField
		def AllocSettlInstType.field
			return 780
		end
		def initialize(data = nil)
			if( data == nil )
				super(780)
			else
				super(780, data)
			end
		end
	end

	class NoSettlPartyIDs < Quickfix::IntField
		def NoSettlPartyIDs.field
			return 781
		end
		def initialize(data = nil)
			if( data == nil )
				super(781)
			else
				super(781, data)
			end
		end
	end

	class SettlPartyID < Quickfix::StringField
		def SettlPartyID.field
			return 782
		end
		def initialize(data = nil)
			if( data == nil )
				super(782)
			else
				super(782, data)
			end
		end
	end

	class SettlPartyIDSource < Quickfix::CharField
		def SettlPartyIDSource.field
			return 783
		end
		def initialize(data = nil)
			if( data == nil )
				super(783)
			else
				super(783, data)
			end
		end
	end

	class SettlPartyRole < Quickfix::IntField
		def SettlPartyRole.field
			return 784
		end
		def initialize(data = nil)
			if( data == nil )
				super(784)
			else
				super(784, data)
			end
		end
	end

	class SettlPartySubID < Quickfix::StringField
		def SettlPartySubID.field
			return 785
		end
		def initialize(data = nil)
			if( data == nil )
				super(785)
			else
				super(785, data)
			end
		end
	end

	class SettlPartySubIDType < Quickfix::IntField
		def SettlPartySubIDType.field
			return 786
		end
		def initialize(data = nil)
			if( data == nil )
				super(786)
			else
				super(786, data)
			end
		end
	end

	class DlvyInstType < Quickfix::CharField
		def DlvyInstType.field
			return 787
		end
		def initialize(data = nil)
			if( data == nil )
				super(787)
			else
				super(787, data)
			end
		end
	end

	class TerminationType < Quickfix::IntField
		def TerminationType.field
			return 788
		end
		def initialize(data = nil)
			if( data == nil )
				super(788)
			else
				super(788, data)
			end
		end
	end

	class OrdStatusReqID < Quickfix::StringField
		def OrdStatusReqID.field
			return 790
		end
		def initialize(data = nil)
			if( data == nil )
				super(790)
			else
				super(790, data)
			end
		end
	end

	class SettlInstReqID < Quickfix::StringField
		def SettlInstReqID.field
			return 791
		end
		def initialize(data = nil)
			if( data == nil )
				super(791)
			else
				super(791, data)
			end
		end
	end

	class SettlInstReqRejCode < Quickfix::IntField
		def SettlInstReqRejCode.field
			return 792
		end
		def initialize(data = nil)
			if( data == nil )
				super(792)
			else
				super(792, data)
			end
		end
	end

	class SecondaryAllocID < Quickfix::StringField
		def SecondaryAllocID.field
			return 793
		end
		def initialize(data = nil)
			if( data == nil )
				super(793)
			else
				super(793, data)
			end
		end
	end

	class AllocReportType < Quickfix::IntField
		def AllocReportType.field
			return 794
		end
		def initialize(data = nil)
			if( data == nil )
				super(794)
			else
				super(794, data)
			end
		end
	end

	class AllocReportRefID < Quickfix::StringField
		def AllocReportRefID.field
			return 795
		end
		def initialize(data = nil)
			if( data == nil )
				super(795)
			else
				super(795, data)
			end
		end
	end

	class AllocCancReplaceReason < Quickfix::IntField
		def AllocCancReplaceReason.field
			return 796
		end
		def initialize(data = nil)
			if( data == nil )
				super(796)
			else
				super(796, data)
			end
		end
	end

	class CopyMsgIndicator < Quickfix::BoolField
		def CopyMsgIndicator.field
			return 797
		end
		def initialize(data = nil)
			if( data == nil )
				super(797)
			else
				super(797, data)
			end
		end
	end

	class AllocAccountType < Quickfix::IntField
		def AllocAccountType.field
			return 798
		end
		def initialize(data = nil)
			if( data == nil )
				super(798)
			else
				super(798, data)
			end
		end
	end

	class OrderAvgPx < Quickfix::DoubleField
		def OrderAvgPx.field
			return 799
		end
		def initialize(data = nil)
			if( data == nil )
				super(799)
			else
				super(799, data)
			end
		end
	end

	class OrderBookingQty < Quickfix::DoubleField
		def OrderBookingQty.field
			return 800
		end
		def initialize(data = nil)
			if( data == nil )
				super(800)
			else
				super(800, data)
			end
		end
	end

	class NoSettlPartySubIDs < Quickfix::IntField
		def NoSettlPartySubIDs.field
			return 801
		end
		def initialize(data = nil)
			if( data == nil )
				super(801)
			else
				super(801, data)
			end
		end
	end

	class NoPartySubIDs < Quickfix::IntField
		def NoPartySubIDs.field
			return 802
		end
		def initialize(data = nil)
			if( data == nil )
				super(802)
			else
				super(802, data)
			end
		end
	end

	class PartySubIDType < Quickfix::IntField
		def PartySubIDType.field
			return 803
		end
		def initialize(data = nil)
			if( data == nil )
				super(803)
			else
				super(803, data)
			end
		end
	end

	class NoNestedPartySubIDs < Quickfix::IntField
		def NoNestedPartySubIDs.field
			return 804
		end
		def initialize(data = nil)
			if( data == nil )
				super(804)
			else
				super(804, data)
			end
		end
	end

	class NestedPartySubIDType < Quickfix::IntField
		def NestedPartySubIDType.field
			return 805
		end
		def initialize(data = nil)
			if( data == nil )
				super(805)
			else
				super(805, data)
			end
		end
	end

	class NoNested2PartySubIDs < Quickfix::IntField
		def NoNested2PartySubIDs.field
			return 806
		end
		def initialize(data = nil)
			if( data == nil )
				super(806)
			else
				super(806, data)
			end
		end
	end

	class Nested2PartySubIDType < Quickfix::IntField
		def Nested2PartySubIDType.field
			return 807
		end
		def initialize(data = nil)
			if( data == nil )
				super(807)
			else
				super(807, data)
			end
		end
	end

	class AllocIntermedReqType < Quickfix::IntField
		def AllocIntermedReqType.field
			return 808
		end
		def initialize(data = nil)
			if( data == nil )
				super(808)
			else
				super(808, data)
			end
		end
	end

	class UnderlyingPx < Quickfix::DoubleField
		def UnderlyingPx.field
			return 810
		end
		def initialize(data = nil)
			if( data == nil )
				super(810)
			else
				super(810, data)
			end
		end
	end

	class PriceDelta < Quickfix::DoubleField
		def PriceDelta.field
			return 811
		end
		def initialize(data = nil)
			if( data == nil )
				super(811)
			else
				super(811, data)
			end
		end
	end

	class ApplQueueMax < Quickfix::IntField
		def ApplQueueMax.field
			return 812
		end
		def initialize(data = nil)
			if( data == nil )
				super(812)
			else
				super(812, data)
			end
		end
	end

	class ApplQueueDepth < Quickfix::IntField
		def ApplQueueDepth.field
			return 813
		end
		def initialize(data = nil)
			if( data == nil )
				super(813)
			else
				super(813, data)
			end
		end
	end

	class ApplQueueResolution < Quickfix::IntField
		def ApplQueueResolution.field
			return 814
		end
		def initialize(data = nil)
			if( data == nil )
				super(814)
			else
				super(814, data)
			end
		end
	end

	class ApplQueueAction < Quickfix::IntField
		def ApplQueueAction.field
			return 815
		end
		def initialize(data = nil)
			if( data == nil )
				super(815)
			else
				super(815, data)
			end
		end
	end

	class NoAltMDSource < Quickfix::IntField
		def NoAltMDSource.field
			return 816
		end
		def initialize(data = nil)
			if( data == nil )
				super(816)
			else
				super(816, data)
			end
		end
	end

	class AltMDSourceID < Quickfix::StringField
		def AltMDSourceID.field
			return 817
		end
		def initialize(data = nil)
			if( data == nil )
				super(817)
			else
				super(817, data)
			end
		end
	end

	class SecondaryTradeReportID < Quickfix::StringField
		def SecondaryTradeReportID.field
			return 818
		end
		def initialize(data = nil)
			if( data == nil )
				super(818)
			else
				super(818, data)
			end
		end
	end

	class AvgPxIndicator < Quickfix::IntField
		def AvgPxIndicator.field
			return 819
		end
		def initialize(data = nil)
			if( data == nil )
				super(819)
			else
				super(819, data)
			end
		end
	end

	class TradeLinkID < Quickfix::StringField
		def TradeLinkID.field
			return 820
		end
		def initialize(data = nil)
			if( data == nil )
				super(820)
			else
				super(820, data)
			end
		end
	end

	class OrderInputDevice < Quickfix::StringField
		def OrderInputDevice.field
			return 821
		end
		def initialize(data = nil)
			if( data == nil )
				super(821)
			else
				super(821, data)
			end
		end
	end

	class UnderlyingTradingSessionID < Quickfix::StringField
		def UnderlyingTradingSessionID.field
			return 822
		end
		def initialize(data = nil)
			if( data == nil )
				super(822)
			else
				super(822, data)
			end
		end
	end

	class UnderlyingTradingSessionSubID < Quickfix::StringField
		def UnderlyingTradingSessionSubID.field
			return 823
		end
		def initialize(data = nil)
			if( data == nil )
				super(823)
			else
				super(823, data)
			end
		end
	end

	class TradeLegRefID < Quickfix::StringField
		def TradeLegRefID.field
			return 824
		end
		def initialize(data = nil)
			if( data == nil )
				super(824)
			else
				super(824, data)
			end
		end
	end

	class ExchangeRule < Quickfix::StringField
		def ExchangeRule.field
			return 825
		end
		def initialize(data = nil)
			if( data == nil )
				super(825)
			else
				super(825, data)
			end
		end
	end

	class TradeAllocIndicator < Quickfix::IntField
		def TradeAllocIndicator.field
			return 826
		end
		def initialize(data = nil)
			if( data == nil )
				super(826)
			else
				super(826, data)
			end
		end
	end

	class ExpirationCycle < Quickfix::IntField
		def ExpirationCycle.field
			return 827
		end
		def initialize(data = nil)
			if( data == nil )
				super(827)
			else
				super(827, data)
			end
		end
	end

	class TrdType < Quickfix::IntField
		def TrdType.field
			return 828
		end
		def initialize(data = nil)
			if( data == nil )
				super(828)
			else
				super(828, data)
			end
		end
	end

	class TrdSubType < Quickfix::IntField
		def TrdSubType.field
			return 829
		end
		def initialize(data = nil)
			if( data == nil )
				super(829)
			else
				super(829, data)
			end
		end
	end

	class TransferReason < Quickfix::StringField
		def TransferReason.field
			return 830
		end
		def initialize(data = nil)
			if( data == nil )
				super(830)
			else
				super(830, data)
			end
		end
	end

	class TotNumAssignmentReports < Quickfix::IntField
		def TotNumAssignmentReports.field
			return 832
		end
		def initialize(data = nil)
			if( data == nil )
				super(832)
			else
				super(832, data)
			end
		end
	end

	class AsgnRptID < Quickfix::StringField
		def AsgnRptID.field
			return 833
		end
		def initialize(data = nil)
			if( data == nil )
				super(833)
			else
				super(833, data)
			end
		end
	end

	class ThresholdAmount < Quickfix::DoubleField
		def ThresholdAmount.field
			return 834
		end
		def initialize(data = nil)
			if( data == nil )
				super(834)
			else
				super(834, data)
			end
		end
	end

	class PegMoveType < Quickfix::IntField
		def PegMoveType.field
			return 835
		end
		def initialize(data = nil)
			if( data == nil )
				super(835)
			else
				super(835, data)
			end
		end
	end

	class PegOffsetType < Quickfix::IntField
		def PegOffsetType.field
			return 836
		end
		def initialize(data = nil)
			if( data == nil )
				super(836)
			else
				super(836, data)
			end
		end
	end

	class PegLimitType < Quickfix::IntField
		def PegLimitType.field
			return 837
		end
		def initialize(data = nil)
			if( data == nil )
				super(837)
			else
				super(837, data)
			end
		end
	end

	class PegRoundDirection < Quickfix::IntField
		def PegRoundDirection.field
			return 838
		end
		def initialize(data = nil)
			if( data == nil )
				super(838)
			else
				super(838, data)
			end
		end
	end

	class PeggedPrice < Quickfix::DoubleField
		def PeggedPrice.field
			return 839
		end
		def initialize(data = nil)
			if( data == nil )
				super(839)
			else
				super(839, data)
			end
		end
	end

	class PegScope < Quickfix::IntField
		def PegScope.field
			return 840
		end
		def initialize(data = nil)
			if( data == nil )
				super(840)
			else
				super(840, data)
			end
		end
	end

	class DiscretionMoveType < Quickfix::IntField
		def DiscretionMoveType.field
			return 841
		end
		def initialize(data = nil)
			if( data == nil )
				super(841)
			else
				super(841, data)
			end
		end
	end

	class DiscretionOffsetType < Quickfix::IntField
		def DiscretionOffsetType.field
			return 842
		end
		def initialize(data = nil)
			if( data == nil )
				super(842)
			else
				super(842, data)
			end
		end
	end

	class DiscretionLimitType < Quickfix::IntField
		def DiscretionLimitType.field
			return 843
		end
		def initialize(data = nil)
			if( data == nil )
				super(843)
			else
				super(843, data)
			end
		end
	end

	class DiscretionRoundDirection < Quickfix::IntField
		def DiscretionRoundDirection.field
			return 844
		end
		def initialize(data = nil)
			if( data == nil )
				super(844)
			else
				super(844, data)
			end
		end
	end

	class DiscretionPrice < Quickfix::DoubleField
		def DiscretionPrice.field
			return 845
		end
		def initialize(data = nil)
			if( data == nil )
				super(845)
			else
				super(845, data)
			end
		end
	end

	class DiscretionScope < Quickfix::IntField
		def DiscretionScope.field
			return 846
		end
		def initialize(data = nil)
			if( data == nil )
				super(846)
			else
				super(846, data)
			end
		end
	end

	class TargetStrategy < Quickfix::IntField
		def TargetStrategy.field
			return 847
		end
		def initialize(data = nil)
			if( data == nil )
				super(847)
			else
				super(847, data)
			end
		end
	end

	class TargetStrategyParameters < Quickfix::StringField
		def TargetStrategyParameters.field
			return 848
		end
		def initialize(data = nil)
			if( data == nil )
				super(848)
			else
				super(848, data)
			end
		end
	end

	class ParticipationRate < Quickfix::DoubleField
		def ParticipationRate.field
			return 849
		end
		def initialize(data = nil)
			if( data == nil )
				super(849)
			else
				super(849, data)
			end
		end
	end

	class TargetStrategyPerformance < Quickfix::DoubleField
		def TargetStrategyPerformance.field
			return 850
		end
		def initialize(data = nil)
			if( data == nil )
				super(850)
			else
				super(850, data)
			end
		end
	end

	class LastLiquidityInd < Quickfix::IntField
		def LastLiquidityInd.field
			return 851
		end
		def initialize(data = nil)
			if( data == nil )
				super(851)
			else
				super(851, data)
			end
		end
	end

	class PublishTrdIndicator < Quickfix::BoolField
		def PublishTrdIndicator.field
			return 852
		end
		def initialize(data = nil)
			if( data == nil )
				super(852)
			else
				super(852, data)
			end
		end
	end

	class ShortSaleReason < Quickfix::IntField
		def ShortSaleReason.field
			return 853
		end
		def initialize(data = nil)
			if( data == nil )
				super(853)
			else
				super(853, data)
			end
		end
	end

	class QtyType < Quickfix::IntField
		def QtyType.field
			return 854
		end
		def initialize(data = nil)
			if( data == nil )
				super(854)
			else
				super(854, data)
			end
		end
	end

	class SecondaryTrdType < Quickfix::IntField
		def SecondaryTrdType.field
			return 855
		end
		def initialize(data = nil)
			if( data == nil )
				super(855)
			else
				super(855, data)
			end
		end
	end

	class TradeReportType < Quickfix::IntField
		def TradeReportType.field
			return 856
		end
		def initialize(data = nil)
			if( data == nil )
				super(856)
			else
				super(856, data)
			end
		end
	end

	class AllocNoOrdersType < Quickfix::IntField
		def AllocNoOrdersType.field
			return 857
		end
		def initialize(data = nil)
			if( data == nil )
				super(857)
			else
				super(857, data)
			end
		end
	end

	class SharedCommission < Quickfix::DoubleField
		def SharedCommission.field
			return 858
		end
		def initialize(data = nil)
			if( data == nil )
				super(858)
			else
				super(858, data)
			end
		end
	end

	class ConfirmReqID < Quickfix::StringField
		def ConfirmReqID.field
			return 859
		end
		def initialize(data = nil)
			if( data == nil )
				super(859)
			else
				super(859, data)
			end
		end
	end

	class AvgParPx < Quickfix::DoubleField
		def AvgParPx.field
			return 860
		end
		def initialize(data = nil)
			if( data == nil )
				super(860)
			else
				super(860, data)
			end
		end
	end

	class ReportedPx < Quickfix::DoubleField
		def ReportedPx.field
			return 861
		end
		def initialize(data = nil)
			if( data == nil )
				super(861)
			else
				super(861, data)
			end
		end
	end

	class NoCapacities < Quickfix::IntField
		def NoCapacities.field
			return 862
		end
		def initialize(data = nil)
			if( data == nil )
				super(862)
			else
				super(862, data)
			end
		end
	end

	class OrderCapacityQty < Quickfix::DoubleField
		def OrderCapacityQty.field
			return 863
		end
		def initialize(data = nil)
			if( data == nil )
				super(863)
			else
				super(863, data)
			end
		end
	end

	class NoEvents < Quickfix::IntField
		def NoEvents.field
			return 864
		end
		def initialize(data = nil)
			if( data == nil )
				super(864)
			else
				super(864, data)
			end
		end
	end

	class EventType < Quickfix::IntField
		def EventType.field
			return 865
		end
		def initialize(data = nil)
			if( data == nil )
				super(865)
			else
				super(865, data)
			end
		end
	end

	class EventDate < Quickfix::StringField
		def EventDate.field
			return 866
		end
		def initialize(data = nil)
			if( data == nil )
				super(866)
			else
				super(866, data)
			end
		end
	end

	class EventPx < Quickfix::DoubleField
		def EventPx.field
			return 867
		end
		def initialize(data = nil)
			if( data == nil )
				super(867)
			else
				super(867, data)
			end
		end
	end

	class EventText < Quickfix::StringField
		def EventText.field
			return 868
		end
		def initialize(data = nil)
			if( data == nil )
				super(868)
			else
				super(868, data)
			end
		end
	end

	class PctAtRisk < Quickfix::DoubleField
		def PctAtRisk.field
			return 869
		end
		def initialize(data = nil)
			if( data == nil )
				super(869)
			else
				super(869, data)
			end
		end
	end

	class NoInstrAttrib < Quickfix::IntField
		def NoInstrAttrib.field
			return 870
		end
		def initialize(data = nil)
			if( data == nil )
				super(870)
			else
				super(870, data)
			end
		end
	end

	class InstrAttribType < Quickfix::IntField
		def InstrAttribType.field
			return 871
		end
		def initialize(data = nil)
			if( data == nil )
				super(871)
			else
				super(871, data)
			end
		end
	end

	class InstrAttribValue < Quickfix::StringField
		def InstrAttribValue.field
			return 872
		end
		def initialize(data = nil)
			if( data == nil )
				super(872)
			else
				super(872, data)
			end
		end
	end

	class DatedDate < Quickfix::StringField
		def DatedDate.field
			return 873
		end
		def initialize(data = nil)
			if( data == nil )
				super(873)
			else
				super(873, data)
			end
		end
	end

	class InterestAccrualDate < Quickfix::StringField
		def InterestAccrualDate.field
			return 874
		end
		def initialize(data = nil)
			if( data == nil )
				super(874)
			else
				super(874, data)
			end
		end
	end

	class CPProgram < Quickfix::IntField
		def CPProgram.field
			return 875
		end
		def initialize(data = nil)
			if( data == nil )
				super(875)
			else
				super(875, data)
			end
		end
	end

	class CPRegType < Quickfix::StringField
		def CPRegType.field
			return 876
		end
		def initialize(data = nil)
			if( data == nil )
				super(876)
			else
				super(876, data)
			end
		end
	end

	class UnderlyingCPProgram < Quickfix::StringField
		def UnderlyingCPProgram.field
			return 877
		end
		def initialize(data = nil)
			if( data == nil )
				super(877)
			else
				super(877, data)
			end
		end
	end

	class UnderlyingCPRegType < Quickfix::StringField
		def UnderlyingCPRegType.field
			return 878
		end
		def initialize(data = nil)
			if( data == nil )
				super(878)
			else
				super(878, data)
			end
		end
	end

	class UnderlyingQty < Quickfix::DoubleField
		def UnderlyingQty.field
			return 879
		end
		def initialize(data = nil)
			if( data == nil )
				super(879)
			else
				super(879, data)
			end
		end
	end

	class TrdMatchID < Quickfix::StringField
		def TrdMatchID.field
			return 880
		end
		def initialize(data = nil)
			if( data == nil )
				super(880)
			else
				super(880, data)
			end
		end
	end

	class SecondaryTradeReportRefID < Quickfix::StringField
		def SecondaryTradeReportRefID.field
			return 881
		end
		def initialize(data = nil)
			if( data == nil )
				super(881)
			else
				super(881, data)
			end
		end
	end

	class UnderlyingDirtyPrice < Quickfix::DoubleField
		def UnderlyingDirtyPrice.field
			return 882
		end
		def initialize(data = nil)
			if( data == nil )
				super(882)
			else
				super(882, data)
			end
		end
	end

	class UnderlyingEndPrice < Quickfix::DoubleField
		def UnderlyingEndPrice.field
			return 883
		end
		def initialize(data = nil)
			if( data == nil )
				super(883)
			else
				super(883, data)
			end
		end
	end

	class UnderlyingStartValue < Quickfix::DoubleField
		def UnderlyingStartValue.field
			return 884
		end
		def initialize(data = nil)
			if( data == nil )
				super(884)
			else
				super(884, data)
			end
		end
	end

	class UnderlyingCurrentValue < Quickfix::DoubleField
		def UnderlyingCurrentValue.field
			return 885
		end
		def initialize(data = nil)
			if( data == nil )
				super(885)
			else
				super(885, data)
			end
		end
	end

	class UnderlyingEndValue < Quickfix::DoubleField
		def UnderlyingEndValue.field
			return 886
		end
		def initialize(data = nil)
			if( data == nil )
				super(886)
			else
				super(886, data)
			end
		end
	end

	class NoUnderlyingStips < Quickfix::IntField
		def NoUnderlyingStips.field
			return 887
		end
		def initialize(data = nil)
			if( data == nil )
				super(887)
			else
				super(887, data)
			end
		end
	end

	class UnderlyingStipType < Quickfix::StringField
		def UnderlyingStipType.field
			return 888
		end
		def initialize(data = nil)
			if( data == nil )
				super(888)
			else
				super(888, data)
			end
		end
	end

	class UnderlyingStipValue < Quickfix::StringField
		def UnderlyingStipValue.field
			return 889
		end
		def initialize(data = nil)
			if( data == nil )
				super(889)
			else
				super(889, data)
			end
		end
	end

	class MaturityNetMoney < Quickfix::DoubleField
		def MaturityNetMoney.field
			return 890
		end
		def initialize(data = nil)
			if( data == nil )
				super(890)
			else
				super(890, data)
			end
		end
	end

	class MiscFeeBasis < Quickfix::IntField
		def MiscFeeBasis.field
			return 891
		end
		def initialize(data = nil)
			if( data == nil )
				super(891)
			else
				super(891, data)
			end
		end
	end

	class TotNoAllocs < Quickfix::IntField
		def TotNoAllocs.field
			return 892
		end
		def initialize(data = nil)
			if( data == nil )
				super(892)
			else
				super(892, data)
			end
		end
	end

	class LastFragment < Quickfix::BoolField
		def LastFragment.field
			return 893
		end
		def initialize(data = nil)
			if( data == nil )
				super(893)
			else
				super(893, data)
			end
		end
	end

	class CollReqID < Quickfix::StringField
		def CollReqID.field
			return 894
		end
		def initialize(data = nil)
			if( data == nil )
				super(894)
			else
				super(894, data)
			end
		end
	end

	class CollAsgnReason < Quickfix::IntField
		def CollAsgnReason.field
			return 895
		end
		def initialize(data = nil)
			if( data == nil )
				super(895)
			else
				super(895, data)
			end
		end
	end

	class CollInquiryQualifier < Quickfix::IntField
		def CollInquiryQualifier.field
			return 896
		end
		def initialize(data = nil)
			if( data == nil )
				super(896)
			else
				super(896, data)
			end
		end
	end

	class NoTrades < Quickfix::IntField
		def NoTrades.field
			return 897
		end
		def initialize(data = nil)
			if( data == nil )
				super(897)
			else
				super(897, data)
			end
		end
	end

	class MarginRatio < Quickfix::DoubleField
		def MarginRatio.field
			return 898
		end
		def initialize(data = nil)
			if( data == nil )
				super(898)
			else
				super(898, data)
			end
		end
	end

	class MarginExcess < Quickfix::DoubleField
		def MarginExcess.field
			return 899
		end
		def initialize(data = nil)
			if( data == nil )
				super(899)
			else
				super(899, data)
			end
		end
	end

	class TotalNetValue < Quickfix::DoubleField
		def TotalNetValue.field
			return 900
		end
		def initialize(data = nil)
			if( data == nil )
				super(900)
			else
				super(900, data)
			end
		end
	end

	class CashOutstanding < Quickfix::DoubleField
		def CashOutstanding.field
			return 901
		end
		def initialize(data = nil)
			if( data == nil )
				super(901)
			else
				super(901, data)
			end
		end
	end

	class CollAsgnID < Quickfix::StringField
		def CollAsgnID.field
			return 902
		end
		def initialize(data = nil)
			if( data == nil )
				super(902)
			else
				super(902, data)
			end
		end
	end

	class CollAsgnTransType < Quickfix::IntField
		def CollAsgnTransType.field
			return 903
		end
		def initialize(data = nil)
			if( data == nil )
				super(903)
			else
				super(903, data)
			end
		end
	end

	class CollRespID < Quickfix::StringField
		def CollRespID.field
			return 904
		end
		def initialize(data = nil)
			if( data == nil )
				super(904)
			else
				super(904, data)
			end
		end
	end

	class CollAsgnRespType < Quickfix::IntField
		def CollAsgnRespType.field
			return 905
		end
		def initialize(data = nil)
			if( data == nil )
				super(905)
			else
				super(905, data)
			end
		end
	end

	class CollAsgnRejectReason < Quickfix::IntField
		def CollAsgnRejectReason.field
			return 906
		end
		def initialize(data = nil)
			if( data == nil )
				super(906)
			else
				super(906, data)
			end
		end
	end

	class CollAsgnRefID < Quickfix::StringField
		def CollAsgnRefID.field
			return 907
		end
		def initialize(data = nil)
			if( data == nil )
				super(907)
			else
				super(907, data)
			end
		end
	end

	class CollRptID < Quickfix::StringField
		def CollRptID.field
			return 908
		end
		def initialize(data = nil)
			if( data == nil )
				super(908)
			else
				super(908, data)
			end
		end
	end

	class CollInquiryID < Quickfix::StringField
		def CollInquiryID.field
			return 909
		end
		def initialize(data = nil)
			if( data == nil )
				super(909)
			else
				super(909, data)
			end
		end
	end

	class CollStatus < Quickfix::IntField
		def CollStatus.field
			return 910
		end
		def initialize(data = nil)
			if( data == nil )
				super(910)
			else
				super(910, data)
			end
		end
	end

	class TotNumReports < Quickfix::IntField
		def TotNumReports.field
			return 911
		end
		def initialize(data = nil)
			if( data == nil )
				super(911)
			else
				super(911, data)
			end
		end
	end

	class LastRptRequested < Quickfix::BoolField
		def LastRptRequested.field
			return 912
		end
		def initialize(data = nil)
			if( data == nil )
				super(912)
			else
				super(912, data)
			end
		end
	end

	class AgreementDesc < Quickfix::StringField
		def AgreementDesc.field
			return 913
		end
		def initialize(data = nil)
			if( data == nil )
				super(913)
			else
				super(913, data)
			end
		end
	end

	class AgreementID < Quickfix::StringField
		def AgreementID.field
			return 914
		end
		def initialize(data = nil)
			if( data == nil )
				super(914)
			else
				super(914, data)
			end
		end
	end

	class AgreementDate < Quickfix::StringField
		def AgreementDate.field
			return 915
		end
		def initialize(data = nil)
			if( data == nil )
				super(915)
			else
				super(915, data)
			end
		end
	end

	class StartDate < Quickfix::StringField
		def StartDate.field
			return 916
		end
		def initialize(data = nil)
			if( data == nil )
				super(916)
			else
				super(916, data)
			end
		end
	end

	class EndDate < Quickfix::StringField
		def EndDate.field
			return 917
		end
		def initialize(data = nil)
			if( data == nil )
				super(917)
			else
				super(917, data)
			end
		end
	end

	class AgreementCurrency < Quickfix::StringField
		def AgreementCurrency.field
			return 918
		end
		def initialize(data = nil)
			if( data == nil )
				super(918)
			else
				super(918, data)
			end
		end
	end

	class DeliveryType < Quickfix::IntField
		def DeliveryType.field
			return 919
		end
		def initialize(data = nil)
			if( data == nil )
				super(919)
			else
				super(919, data)
			end
		end
	end

	class EndAccruedInterestAmt < Quickfix::DoubleField
		def EndAccruedInterestAmt.field
			return 920
		end
		def initialize(data = nil)
			if( data == nil )
				super(920)
			else
				super(920, data)
			end
		end
	end

	class StartCash < Quickfix::DoubleField
		def StartCash.field
			return 921
		end
		def initialize(data = nil)
			if( data == nil )
				super(921)
			else
				super(921, data)
			end
		end
	end

	class EndCash < Quickfix::DoubleField
		def EndCash.field
			return 922
		end
		def initialize(data = nil)
			if( data == nil )
				super(922)
			else
				super(922, data)
			end
		end
	end

	class UserRequestID < Quickfix::StringField
		def UserRequestID.field
			return 923
		end
		def initialize(data = nil)
			if( data == nil )
				super(923)
			else
				super(923, data)
			end
		end
	end

	class UserRequestType < Quickfix::IntField
		def UserRequestType.field
			return 924
		end
		def initialize(data = nil)
			if( data == nil )
				super(924)
			else
				super(924, data)
			end
		end
	end

	class NewPassword < Quickfix::StringField
		def NewPassword.field
			return 925
		end
		def initialize(data = nil)
			if( data == nil )
				super(925)
			else
				super(925, data)
			end
		end
	end

	class UserStatus < Quickfix::IntField
		def UserStatus.field
			return 926
		end
		def initialize(data = nil)
			if( data == nil )
				super(926)
			else
				super(926, data)
			end
		end
	end

	class UserStatusText < Quickfix::StringField
		def UserStatusText.field
			return 927
		end
		def initialize(data = nil)
			if( data == nil )
				super(927)
			else
				super(927, data)
			end
		end
	end

	class StatusValue < Quickfix::IntField
		def StatusValue.field
			return 928
		end
		def initialize(data = nil)
			if( data == nil )
				super(928)
			else
				super(928, data)
			end
		end
	end

	class StatusText < Quickfix::StringField
		def StatusText.field
			return 929
		end
		def initialize(data = nil)
			if( data == nil )
				super(929)
			else
				super(929, data)
			end
		end
	end

	class RefCompID < Quickfix::StringField
		def RefCompID.field
			return 930
		end
		def initialize(data = nil)
			if( data == nil )
				super(930)
			else
				super(930, data)
			end
		end
	end

	class RefSubID < Quickfix::StringField
		def RefSubID.field
			return 931
		end
		def initialize(data = nil)
			if( data == nil )
				super(931)
			else
				super(931, data)
			end
		end
	end

	class NetworkResponseID < Quickfix::StringField
		def NetworkResponseID.field
			return 932
		end
		def initialize(data = nil)
			if( data == nil )
				super(932)
			else
				super(932, data)
			end
		end
	end

	class NetworkRequestID < Quickfix::StringField
		def NetworkRequestID.field
			return 933
		end
		def initialize(data = nil)
			if( data == nil )
				super(933)
			else
				super(933, data)
			end
		end
	end

	class LastNetworkResponseID < Quickfix::StringField
		def LastNetworkResponseID.field
			return 934
		end
		def initialize(data = nil)
			if( data == nil )
				super(934)
			else
				super(934, data)
			end
		end
	end

	class NetworkRequestType < Quickfix::IntField
		def NetworkRequestType.field
			return 935
		end
		def initialize(data = nil)
			if( data == nil )
				super(935)
			else
				super(935, data)
			end
		end
	end

	class NoCompIDs < Quickfix::IntField
		def NoCompIDs.field
			return 936
		end
		def initialize(data = nil)
			if( data == nil )
				super(936)
			else
				super(936, data)
			end
		end
	end

	class NetworkStatusResponseType < Quickfix::IntField
		def NetworkStatusResponseType.field
			return 937
		end
		def initialize(data = nil)
			if( data == nil )
				super(937)
			else
				super(937, data)
			end
		end
	end

	class NoCollInquiryQualifier < Quickfix::IntField
		def NoCollInquiryQualifier.field
			return 938
		end
		def initialize(data = nil)
			if( data == nil )
				super(938)
			else
				super(938, data)
			end
		end
	end

	class TrdRptStatus < Quickfix::IntField
		def TrdRptStatus.field
			return 939
		end
		def initialize(data = nil)
			if( data == nil )
				super(939)
			else
				super(939, data)
			end
		end
	end

	class AffirmStatus < Quickfix::IntField
		def AffirmStatus.field
			return 940
		end
		def initialize(data = nil)
			if( data == nil )
				super(940)
			else
				super(940, data)
			end
		end
	end

	class UnderlyingStrikeCurrency < Quickfix::StringField
		def UnderlyingStrikeCurrency.field
			return 941
		end
		def initialize(data = nil)
			if( data == nil )
				super(941)
			else
				super(941, data)
			end
		end
	end

	class LegStrikeCurrency < Quickfix::StringField
		def LegStrikeCurrency.field
			return 942
		end
		def initialize(data = nil)
			if( data == nil )
				super(942)
			else
				super(942, data)
			end
		end
	end

	class TimeBracket < Quickfix::StringField
		def TimeBracket.field
			return 943
		end
		def initialize(data = nil)
			if( data == nil )
				super(943)
			else
				super(943, data)
			end
		end
	end

	class CollAction < Quickfix::IntField
		def CollAction.field
			return 944
		end
		def initialize(data = nil)
			if( data == nil )
				super(944)
			else
				super(944, data)
			end
		end
	end

	class CollInquiryStatus < Quickfix::IntField
		def CollInquiryStatus.field
			return 945
		end
		def initialize(data = nil)
			if( data == nil )
				super(945)
			else
				super(945, data)
			end
		end
	end

	class CollInquiryResult < Quickfix::IntField
		def CollInquiryResult.field
			return 946
		end
		def initialize(data = nil)
			if( data == nil )
				super(946)
			else
				super(946, data)
			end
		end
	end

	class StrikeCurrency < Quickfix::StringField
		def StrikeCurrency.field
			return 947
		end
		def initialize(data = nil)
			if( data == nil )
				super(947)
			else
				super(947, data)
			end
		end
	end

	class NoNested3PartyIDs < Quickfix::IntField
		def NoNested3PartyIDs.field
			return 948
		end
		def initialize(data = nil)
			if( data == nil )
				super(948)
			else
				super(948, data)
			end
		end
	end

	class Nested3PartyID < Quickfix::StringField
		def Nested3PartyID.field
			return 949
		end
		def initialize(data = nil)
			if( data == nil )
				super(949)
			else
				super(949, data)
			end
		end
	end

	class Nested3PartyIDSource < Quickfix::CharField
		def Nested3PartyIDSource.field
			return 950
		end
		def initialize(data = nil)
			if( data == nil )
				super(950)
			else
				super(950, data)
			end
		end
	end

	class Nested3PartyRole < Quickfix::IntField
		def Nested3PartyRole.field
			return 951
		end
		def initialize(data = nil)
			if( data == nil )
				super(951)
			else
				super(951, data)
			end
		end
	end

	class NoNested3PartySubIDs < Quickfix::IntField
		def NoNested3PartySubIDs.field
			return 952
		end
		def initialize(data = nil)
			if( data == nil )
				super(952)
			else
				super(952, data)
			end
		end
	end

	class Nested3PartySubID < Quickfix::StringField
		def Nested3PartySubID.field
			return 953
		end
		def initialize(data = nil)
			if( data == nil )
				super(953)
			else
				super(953, data)
			end
		end
	end

	class Nested3PartySubIDType < Quickfix::IntField
		def Nested3PartySubIDType.field
			return 954
		end
		def initialize(data = nil)
			if( data == nil )
				super(954)
			else
				super(954, data)
			end
		end
	end

	class LegContractSettlMonth < Quickfix::StringField
		def LegContractSettlMonth.field
			return 955
		end
		def initialize(data = nil)
			if( data == nil )
				super(955)
			else
				super(955, data)
			end
		end
	end

	class LegInterestAccrualDate < Quickfix::StringField
		def LegInterestAccrualDate.field
			return 956
		end
		def initialize(data = nil)
			if( data == nil )
				super(956)
			else
				super(956, data)
			end
		end
	end

	class LegOrderQty < Quickfix::DoubleField
		def LegOrderQty.field
			return 685
		end
		def initialize(data = nil)
			if( data == nil )
				super(685)
			else
				super(685, data)
			end
		end
	end

	class NoStrategyParameters < Quickfix::IntField
		def NoStrategyParameters.field
			return 957
		end
		def initialize(data = nil)
			if( data == nil )
				super(957)
			else
				super(957, data)
			end
		end
	end

	class StrategyParameterName < Quickfix::StringField
		def StrategyParameterName.field
			return 958
		end
		def initialize(data = nil)
			if( data == nil )
				super(958)
			else
				super(958, data)
			end
		end
	end

	class StrategyParameterType < Quickfix::IntField
		def StrategyParameterType.field
			return 959
		end
		def initialize(data = nil)
			if( data == nil )
				super(959)
			else
				super(959, data)
			end
		end
	end

	class StrategyParameterValue < Quickfix::StringField
		def StrategyParameterValue.field
			return 960
		end
		def initialize(data = nil)
			if( data == nil )
				super(960)
			else
				super(960, data)
			end
		end
	end

	class HostCrossID < Quickfix::StringField
		def HostCrossID.field
			return 961
		end
		def initialize(data = nil)
			if( data == nil )
				super(961)
			else
				super(961, data)
			end
		end
	end

	class SideTimeInForce < Quickfix::UtcTimeStampField
		def SideTimeInForce.field
			return 962
		end
		def initialize(data = nil)
			if( data == nil )
				super(962)
			else
				super(962, data)
			end
		end
	end

	class MDReportID < Quickfix::IntField
		def MDReportID.field
			return 963
		end
		def initialize(data = nil)
			if( data == nil )
				super(963)
			else
				super(963, data)
			end
		end
	end

	class SecurityReportID < Quickfix::IntField
		def SecurityReportID.field
			return 964
		end
		def initialize(data = nil)
			if( data == nil )
				super(964)
			else
				super(964, data)
			end
		end
	end

	class SecurityStatus < Quickfix::StringField
		def SecurityStatus.field
			return 965
		end
		def initialize(data = nil)
			if( data == nil )
				super(965)
			else
				super(965, data)
			end
		end
	end

	class SettleOnOpenFlag < Quickfix::StringField
		def SettleOnOpenFlag.field
			return 966
		end
		def initialize(data = nil)
			if( data == nil )
				super(966)
			else
				super(966, data)
			end
		end
	end

	class StrikeMultiplier < Quickfix::DoubleField
		def StrikeMultiplier.field
			return 967
		end
		def initialize(data = nil)
			if( data == nil )
				super(967)
			else
				super(967, data)
			end
		end
	end

	class StrikeValue < Quickfix::DoubleField
		def StrikeValue.field
			return 968
		end
		def initialize(data = nil)
			if( data == nil )
				super(968)
			else
				super(968, data)
			end
		end
	end

	class MinPriceIncrement < Quickfix::DoubleField
		def MinPriceIncrement.field
			return 969
		end
		def initialize(data = nil)
			if( data == nil )
				super(969)
			else
				super(969, data)
			end
		end
	end

	class PositionLimit < Quickfix::IntField
		def PositionLimit.field
			return 970
		end
		def initialize(data = nil)
			if( data == nil )
				super(970)
			else
				super(970, data)
			end
		end
	end

	class NTPositionLimit < Quickfix::IntField
		def NTPositionLimit.field
			return 971
		end
		def initialize(data = nil)
			if( data == nil )
				super(971)
			else
				super(971, data)
			end
		end
	end

	class UnderlyingAllocationPercent < Quickfix::DoubleField
		def UnderlyingAllocationPercent.field
			return 972
		end
		def initialize(data = nil)
			if( data == nil )
				super(972)
			else
				super(972, data)
			end
		end
	end

	class UnderlyingCashAmount < Quickfix::DoubleField
		def UnderlyingCashAmount.field
			return 973
		end
		def initialize(data = nil)
			if( data == nil )
				super(973)
			else
				super(973, data)
			end
		end
	end

	class UnderlyingCashType < Quickfix::StringField
		def UnderlyingCashType.field
			return 974
		end
		def initialize(data = nil)
			if( data == nil )
				super(974)
			else
				super(974, data)
			end
		end
	end

	class UnderlyingSettlementType < Quickfix::IntField
		def UnderlyingSettlementType.field
			return 975
		end
		def initialize(data = nil)
			if( data == nil )
				super(975)
			else
				super(975, data)
			end
		end
	end

	class QuantityDate < Quickfix::StringField
		def QuantityDate.field
			return 976
		end
		def initialize(data = nil)
			if( data == nil )
				super(976)
			else
				super(976, data)
			end
		end
	end

	class ContIntRptID < Quickfix::StringField
		def ContIntRptID.field
			return 977
		end
		def initialize(data = nil)
			if( data == nil )
				super(977)
			else
				super(977, data)
			end
		end
	end

	class LateIndicator < Quickfix::BoolField
		def LateIndicator.field
			return 978
		end
		def initialize(data = nil)
			if( data == nil )
				super(978)
			else
				super(978, data)
			end
		end
	end

	class InputSource < Quickfix::StringField
		def InputSource.field
			return 979
		end
		def initialize(data = nil)
			if( data == nil )
				super(979)
			else
				super(979, data)
			end
		end
	end

	class SecurityUpdateAction < Quickfix::CharField
		def SecurityUpdateAction.field
			return 980
		end
		def initialize(data = nil)
			if( data == nil )
				super(980)
			else
				super(980, data)
			end
		end
	end

	class NoExpiration < Quickfix::IntField
		def NoExpiration.field
			return 981
		end
		def initialize(data = nil)
			if( data == nil )
				super(981)
			else
				super(981, data)
			end
		end
	end

	class ExpType < Quickfix::IntField
		def ExpType.field
			return 982
		end
		def initialize(data = nil)
			if( data == nil )
				super(982)
			else
				super(982, data)
			end
		end
	end

	class ExpQty < Quickfix::DoubleField
		def ExpQty.field
			return 983
		end
		def initialize(data = nil)
			if( data == nil )
				super(983)
			else
				super(983, data)
			end
		end
	end

	class NoUnderlyingAmounts < Quickfix::IntField
		def NoUnderlyingAmounts.field
			return 984
		end
		def initialize(data = nil)
			if( data == nil )
				super(984)
			else
				super(984, data)
			end
		end
	end

	class UnderlyingPayAmount < Quickfix::DoubleField
		def UnderlyingPayAmount.field
			return 985
		end
		def initialize(data = nil)
			if( data == nil )
				super(985)
			else
				super(985, data)
			end
		end
	end

	class UnderlyingCollectAmount < Quickfix::DoubleField
		def UnderlyingCollectAmount.field
			return 986
		end
		def initialize(data = nil)
			if( data == nil )
				super(986)
			else
				super(986, data)
			end
		end
	end

	class UnderlyingSettlementDate < Quickfix::StringField
		def UnderlyingSettlementDate.field
			return 987
		end
		def initialize(data = nil)
			if( data == nil )
				super(987)
			else
				super(987, data)
			end
		end
	end

	class UnderlyingSettlementStatus < Quickfix::StringField
		def UnderlyingSettlementStatus.field
			return 988
		end
		def initialize(data = nil)
			if( data == nil )
				super(988)
			else
				super(988, data)
			end
		end
	end

	class SecondaryIndividualAllocID < Quickfix::StringField
		def SecondaryIndividualAllocID.field
			return 989
		end
		def initialize(data = nil)
			if( data == nil )
				super(989)
			else
				super(989, data)
			end
		end
	end

	class LegReportID < Quickfix::StringField
		def LegReportID.field
			return 990
		end
		def initialize(data = nil)
			if( data == nil )
				super(990)
			else
				super(990, data)
			end
		end
	end

	class RndPx < Quickfix::DoubleField
		def RndPx.field
			return 991
		end
		def initialize(data = nil)
			if( data == nil )
				super(991)
			else
				super(991, data)
			end
		end
	end

	class IndividualAllocType < Quickfix::IntField
		def IndividualAllocType.field
			return 992
		end
		def initialize(data = nil)
			if( data == nil )
				super(992)
			else
				super(992, data)
			end
		end
	end

	class AllocCustomerCapacity < Quickfix::StringField
		def AllocCustomerCapacity.field
			return 993
		end
		def initialize(data = nil)
			if( data == nil )
				super(993)
			else
				super(993, data)
			end
		end
	end

	class TierCode < Quickfix::StringField
		def TierCode.field
			return 994
		end
		def initialize(data = nil)
			if( data == nil )
				super(994)
			else
				super(994, data)
			end
		end
	end

	class UnitOfMeasure < Quickfix::StringField
		def UnitOfMeasure.field
			return 996
		end
		def initialize(data = nil)
			if( data == nil )
				super(996)
			else
				super(996, data)
			end
		end
	end

	class TimeUnit < Quickfix::StringField
		def TimeUnit.field
			return 997
		end
		def initialize(data = nil)
			if( data == nil )
				super(997)
			else
				super(997, data)
			end
		end
	end

	class UnderlyingUnitOfMeasure < Quickfix::StringField
		def UnderlyingUnitOfMeasure.field
			return 998
		end
		def initialize(data = nil)
			if( data == nil )
				super(998)
			else
				super(998, data)
			end
		end
	end

	class LegUnitOfMeasure < Quickfix::StringField
		def LegUnitOfMeasure.field
			return 999
		end
		def initialize(data = nil)
			if( data == nil )
				super(999)
			else
				super(999, data)
			end
		end
	end

	class UnderlyingTimeUnit < Quickfix::StringField
		def UnderlyingTimeUnit.field
			return 1000
		end
		def initialize(data = nil)
			if( data == nil )
				super(1000)
			else
				super(1000, data)
			end
		end
	end

	class LegTimeUnit < Quickfix::StringField
		def LegTimeUnit.field
			return 1001
		end
		def initialize(data = nil)
			if( data == nil )
				super(1001)
			else
				super(1001, data)
			end
		end
	end

	class AllocMethod < Quickfix::IntField
		def AllocMethod.field
			return 1002
		end
		def initialize(data = nil)
			if( data == nil )
				super(1002)
			else
				super(1002, data)
			end
		end
	end

	class TradeID < Quickfix::StringField
		def TradeID.field
			return 1003
		end
		def initialize(data = nil)
			if( data == nil )
				super(1003)
			else
				super(1003, data)
			end
		end
	end

	class SideTradeReportID < Quickfix::StringField
		def SideTradeReportID.field
			return 1005
		end
		def initialize(data = nil)
			if( data == nil )
				super(1005)
			else
				super(1005, data)
			end
		end
	end

	class SideFillStationCd < Quickfix::StringField
		def SideFillStationCd.field
			return 1006
		end
		def initialize(data = nil)
			if( data == nil )
				super(1006)
			else
				super(1006, data)
			end
		end
	end

	class SideReasonCd < Quickfix::StringField
		def SideReasonCd.field
			return 1007
		end
		def initialize(data = nil)
			if( data == nil )
				super(1007)
			else
				super(1007, data)
			end
		end
	end

	class SideTrdSubTyp < Quickfix::IntField
		def SideTrdSubTyp.field
			return 1008
		end
		def initialize(data = nil)
			if( data == nil )
				super(1008)
			else
				super(1008, data)
			end
		end
	end

	class SideQty < Quickfix::IntField
		def SideQty.field
			return 1009
		end
		def initialize(data = nil)
			if( data == nil )
				super(1009)
			else
				super(1009, data)
			end
		end
	end

	class MessageEventSource < Quickfix::StringField
		def MessageEventSource.field
			return 1011
		end
		def initialize(data = nil)
			if( data == nil )
				super(1011)
			else
				super(1011, data)
			end
		end
	end

	class SideTrdRegTimestamp < Quickfix::UtcTimeStampField
		def SideTrdRegTimestamp.field
			return 1012
		end
		def initialize(data = nil)
			if( data == nil )
				super(1012)
			else
				super(1012, data)
			end
		end
	end

	class SideTrdRegTimestampType < Quickfix::IntField
		def SideTrdRegTimestampType.field
			return 1013
		end
		def initialize(data = nil)
			if( data == nil )
				super(1013)
			else
				super(1013, data)
			end
		end
	end

	class SideTrdRegTimestampSrc < Quickfix::StringField
		def SideTrdRegTimestampSrc.field
			return 1014
		end
		def initialize(data = nil)
			if( data == nil )
				super(1014)
			else
				super(1014, data)
			end
		end
	end

	class AsOfIndicator < Quickfix::CharField
		def AsOfIndicator.field
			return 1015
		end
		def initialize(data = nil)
			if( data == nil )
				super(1015)
			else
				super(1015, data)
			end
		end
	end

	class NoSideTrdRegTS < Quickfix::IntField
		def NoSideTrdRegTS.field
			return 1016
		end
		def initialize(data = nil)
			if( data == nil )
				super(1016)
			else
				super(1016, data)
			end
		end
	end

	class LegOptionRatio < Quickfix::DoubleField
		def LegOptionRatio.field
			return 1017
		end
		def initialize(data = nil)
			if( data == nil )
				super(1017)
			else
				super(1017, data)
			end
		end
	end

	class NoInstrumentParties < Quickfix::IntField
		def NoInstrumentParties.field
			return 1018
		end
		def initialize(data = nil)
			if( data == nil )
				super(1018)
			else
				super(1018, data)
			end
		end
	end

	class InstrumentPartyID < Quickfix::StringField
		def InstrumentPartyID.field
			return 1019
		end
		def initialize(data = nil)
			if( data == nil )
				super(1019)
			else
				super(1019, data)
			end
		end
	end

	class TradeVolume < Quickfix::DoubleField
		def TradeVolume.field
			return 1020
		end
		def initialize(data = nil)
			if( data == nil )
				super(1020)
			else
				super(1020, data)
			end
		end
	end

	class MDBookType < Quickfix::IntField
		def MDBookType.field
			return 1021
		end
		def initialize(data = nil)
			if( data == nil )
				super(1021)
			else
				super(1021, data)
			end
		end
	end

	class MDFeedType < Quickfix::StringField
		def MDFeedType.field
			return 1022
		end
		def initialize(data = nil)
			if( data == nil )
				super(1022)
			else
				super(1022, data)
			end
		end
	end

	class MDPriceLevel < Quickfix::IntField
		def MDPriceLevel.field
			return 1023
		end
		def initialize(data = nil)
			if( data == nil )
				super(1023)
			else
				super(1023, data)
			end
		end
	end

	class MDOriginType < Quickfix::IntField
		def MDOriginType.field
			return 1024
		end
		def initialize(data = nil)
			if( data == nil )
				super(1024)
			else
				super(1024, data)
			end
		end
	end

	class FirstPx < Quickfix::DoubleField
		def FirstPx.field
			return 1025
		end
		def initialize(data = nil)
			if( data == nil )
				super(1025)
			else
				super(1025, data)
			end
		end
	end

	class MDEntrySpotRate < Quickfix::DoubleField
		def MDEntrySpotRate.field
			return 1026
		end
		def initialize(data = nil)
			if( data == nil )
				super(1026)
			else
				super(1026, data)
			end
		end
	end

	class MDEntryForwardPoints < Quickfix::DoubleField
		def MDEntryForwardPoints.field
			return 1027
		end
		def initialize(data = nil)
			if( data == nil )
				super(1027)
			else
				super(1027, data)
			end
		end
	end

	class ManualOrderIndicator < Quickfix::BoolField
		def ManualOrderIndicator.field
			return 1028
		end
		def initialize(data = nil)
			if( data == nil )
				super(1028)
			else
				super(1028, data)
			end
		end
	end

	class CustDirectedOrder < Quickfix::BoolField
		def CustDirectedOrder.field
			return 1029
		end
		def initialize(data = nil)
			if( data == nil )
				super(1029)
			else
				super(1029, data)
			end
		end
	end

	class ReceivedDeptID < Quickfix::StringField
		def ReceivedDeptID.field
			return 1030
		end
		def initialize(data = nil)
			if( data == nil )
				super(1030)
			else
				super(1030, data)
			end
		end
	end

	class CustOrderHandlingInst < Quickfix::StringField
		def CustOrderHandlingInst.field
			return 1031
		end
		def initialize(data = nil)
			if( data == nil )
				super(1031)
			else
				super(1031, data)
			end
		end
	end

	class OrderHandlingInstSource < Quickfix::IntField
		def OrderHandlingInstSource.field
			return 1032
		end
		def initialize(data = nil)
			if( data == nil )
				super(1032)
			else
				super(1032, data)
			end
		end
	end

	class DeskType < Quickfix::StringField
		def DeskType.field
			return 1033
		end
		def initialize(data = nil)
			if( data == nil )
				super(1033)
			else
				super(1033, data)
			end
		end
	end

	class DeskTypeSource < Quickfix::IntField
		def DeskTypeSource.field
			return 1034
		end
		def initialize(data = nil)
			if( data == nil )
				super(1034)
			else
				super(1034, data)
			end
		end
	end

	class DeskOrderHandlingInst < Quickfix::StringField
		def DeskOrderHandlingInst.field
			return 1035
		end
		def initialize(data = nil)
			if( data == nil )
				super(1035)
			else
				super(1035, data)
			end
		end
	end

	class ExecAckStatus < Quickfix::CharField
		def ExecAckStatus.field
			return 1036
		end
		def initialize(data = nil)
			if( data == nil )
				super(1036)
			else
				super(1036, data)
			end
		end
	end

	class UnderlyingDeliveryAmount < Quickfix::DoubleField
		def UnderlyingDeliveryAmount.field
			return 1037
		end
		def initialize(data = nil)
			if( data == nil )
				super(1037)
			else
				super(1037, data)
			end
		end
	end

	class UnderlyingCapValue < Quickfix::DoubleField
		def UnderlyingCapValue.field
			return 1038
		end
		def initialize(data = nil)
			if( data == nil )
				super(1038)
			else
				super(1038, data)
			end
		end
	end

	class UnderlyingSettlMethod < Quickfix::StringField
		def UnderlyingSettlMethod.field
			return 1039
		end
		def initialize(data = nil)
			if( data == nil )
				super(1039)
			else
				super(1039, data)
			end
		end
	end

	class SecondaryTradeID < Quickfix::StringField
		def SecondaryTradeID.field
			return 1040
		end
		def initialize(data = nil)
			if( data == nil )
				super(1040)
			else
				super(1040, data)
			end
		end
	end

	class FirmTradeID < Quickfix::StringField
		def FirmTradeID.field
			return 1041
		end
		def initialize(data = nil)
			if( data == nil )
				super(1041)
			else
				super(1041, data)
			end
		end
	end

	class SecondaryFirmTradeID < Quickfix::StringField
		def SecondaryFirmTradeID.field
			return 1042
		end
		def initialize(data = nil)
			if( data == nil )
				super(1042)
			else
				super(1042, data)
			end
		end
	end

	class CollApplType < Quickfix::IntField
		def CollApplType.field
			return 1043
		end
		def initialize(data = nil)
			if( data == nil )
				super(1043)
			else
				super(1043, data)
			end
		end
	end

	class UnderlyingAdjustedQuantity < Quickfix::DoubleField
		def UnderlyingAdjustedQuantity.field
			return 1044
		end
		def initialize(data = nil)
			if( data == nil )
				super(1044)
			else
				super(1044, data)
			end
		end
	end

	class UnderlyingFXRate < Quickfix::DoubleField
		def UnderlyingFXRate.field
			return 1045
		end
		def initialize(data = nil)
			if( data == nil )
				super(1045)
			else
				super(1045, data)
			end
		end
	end

	class UnderlyingFXRateCalc < Quickfix::CharField
		def UnderlyingFXRateCalc.field
			return 1046
		end
		def initialize(data = nil)
			if( data == nil )
				super(1046)
			else
				super(1046, data)
			end
		end
	end

	class AllocPositionEffect < Quickfix::CharField
		def AllocPositionEffect.field
			return 1047
		end
		def initialize(data = nil)
			if( data == nil )
				super(1047)
			else
				super(1047, data)
			end
		end
	end

	class DealingCapacity < Quickfix::CharField
		def DealingCapacity.field
			return 1048
		end
		def initialize(data = nil)
			if( data == nil )
				super(1048)
			else
				super(1048, data)
			end
		end
	end

	class InstrmtAssignmentMethod < Quickfix::CharField
		def InstrmtAssignmentMethod.field
			return 1049
		end
		def initialize(data = nil)
			if( data == nil )
				super(1049)
			else
				super(1049, data)
			end
		end
	end

	class InstrumentPartyIDSource < Quickfix::CharField
		def InstrumentPartyIDSource.field
			return 1050
		end
		def initialize(data = nil)
			if( data == nil )
				super(1050)
			else
				super(1050, data)
			end
		end
	end

	class InstrumentPartyRole < Quickfix::IntField
		def InstrumentPartyRole.field
			return 1051
		end
		def initialize(data = nil)
			if( data == nil )
				super(1051)
			else
				super(1051, data)
			end
		end
	end

	class NoInstrumentPartySubIDs < Quickfix::IntField
		def NoInstrumentPartySubIDs.field
			return 1052
		end
		def initialize(data = nil)
			if( data == nil )
				super(1052)
			else
				super(1052, data)
			end
		end
	end

	class InstrumentPartySubID < Quickfix::StringField
		def InstrumentPartySubID.field
			return 1053
		end
		def initialize(data = nil)
			if( data == nil )
				super(1053)
			else
				super(1053, data)
			end
		end
	end

	class InstrumentPartySubIDType < Quickfix::IntField
		def InstrumentPartySubIDType.field
			return 1054
		end
		def initialize(data = nil)
			if( data == nil )
				super(1054)
			else
				super(1054, data)
			end
		end
	end

	class PositionCurrency < Quickfix::StringField
		def PositionCurrency.field
			return 1055
		end
		def initialize(data = nil)
			if( data == nil )
				super(1055)
			else
				super(1055, data)
			end
		end
	end

	class CalculatedCcyLastQty < Quickfix::DoubleField
		def CalculatedCcyLastQty.field
			return 1056
		end
		def initialize(data = nil)
			if( data == nil )
				super(1056)
			else
				super(1056, data)
			end
		end
	end

	class AggressorIndicator < Quickfix::BoolField
		def AggressorIndicator.field
			return 1057
		end
		def initialize(data = nil)
			if( data == nil )
				super(1057)
			else
				super(1057, data)
			end
		end
	end

	class NoUndlyInstrumentParties < Quickfix::IntField
		def NoUndlyInstrumentParties.field
			return 1058
		end
		def initialize(data = nil)
			if( data == nil )
				super(1058)
			else
				super(1058, data)
			end
		end
	end

	class UndlyInstrumentPartyID < Quickfix::StringField
		def UndlyInstrumentPartyID.field
			return 1059
		end
		def initialize(data = nil)
			if( data == nil )
				super(1059)
			else
				super(1059, data)
			end
		end
	end

	class UndlyInstrumentPartyIDSource < Quickfix::CharField
		def UndlyInstrumentPartyIDSource.field
			return 1060
		end
		def initialize(data = nil)
			if( data == nil )
				super(1060)
			else
				super(1060, data)
			end
		end
	end

	class UndlyInstrumentPartyRole < Quickfix::IntField
		def UndlyInstrumentPartyRole.field
			return 1061
		end
		def initialize(data = nil)
			if( data == nil )
				super(1061)
			else
				super(1061, data)
			end
		end
	end

	class NoUndlyInstrumentPartySubIDs < Quickfix::IntField
		def NoUndlyInstrumentPartySubIDs.field
			return 1062
		end
		def initialize(data = nil)
			if( data == nil )
				super(1062)
			else
				super(1062, data)
			end
		end
	end

	class UndlyInstrumentPartySubID < Quickfix::StringField
		def UndlyInstrumentPartySubID.field
			return 1063
		end
		def initialize(data = nil)
			if( data == nil )
				super(1063)
			else
				super(1063, data)
			end
		end
	end

	class UndlyInstrumentPartySubIDType < Quickfix::IntField
		def UndlyInstrumentPartySubIDType.field
			return 1064
		end
		def initialize(data = nil)
			if( data == nil )
				super(1064)
			else
				super(1064, data)
			end
		end
	end

	class BidSwapPoints < Quickfix::DoubleField
		def BidSwapPoints.field
			return 1065
		end
		def initialize(data = nil)
			if( data == nil )
				super(1065)
			else
				super(1065, data)
			end
		end
	end

	class OfferSwapPoints < Quickfix::DoubleField
		def OfferSwapPoints.field
			return 1066
		end
		def initialize(data = nil)
			if( data == nil )
				super(1066)
			else
				super(1066, data)
			end
		end
	end

	class LegBidForwardPoints < Quickfix::DoubleField
		def LegBidForwardPoints.field
			return 1067
		end
		def initialize(data = nil)
			if( data == nil )
				super(1067)
			else
				super(1067, data)
			end
		end
	end

	class LegOfferForwardPoints < Quickfix::DoubleField
		def LegOfferForwardPoints.field
			return 1068
		end
		def initialize(data = nil)
			if( data == nil )
				super(1068)
			else
				super(1068, data)
			end
		end
	end

	class SwapPoints < Quickfix::DoubleField
		def SwapPoints.field
			return 1069
		end
		def initialize(data = nil)
			if( data == nil )
				super(1069)
			else
				super(1069, data)
			end
		end
	end

	class MDQuoteType < Quickfix::IntField
		def MDQuoteType.field
			return 1070
		end
		def initialize(data = nil)
			if( data == nil )
				super(1070)
			else
				super(1070, data)
			end
		end
	end

	class LastSwapPoints < Quickfix::DoubleField
		def LastSwapPoints.field
			return 1071
		end
		def initialize(data = nil)
			if( data == nil )
				super(1071)
			else
				super(1071, data)
			end
		end
	end

	class SideGrossTradeAmt < Quickfix::DoubleField
		def SideGrossTradeAmt.field
			return 1072
		end
		def initialize(data = nil)
			if( data == nil )
				super(1072)
			else
				super(1072, data)
			end
		end
	end

	class LegLastForwardPoints < Quickfix::DoubleField
		def LegLastForwardPoints.field
			return 1073
		end
		def initialize(data = nil)
			if( data == nil )
				super(1073)
			else
				super(1073, data)
			end
		end
	end

	class LegCalculatedCcyLastQty < Quickfix::DoubleField
		def LegCalculatedCcyLastQty.field
			return 1074
		end
		def initialize(data = nil)
			if( data == nil )
				super(1074)
			else
				super(1074, data)
			end
		end
	end

	class LegGrossTradeAmt < Quickfix::DoubleField
		def LegGrossTradeAmt.field
			return 1075
		end
		def initialize(data = nil)
			if( data == nil )
				super(1075)
			else
				super(1075, data)
			end
		end
	end

	class MaturityTime < Quickfix::StringField
		def MaturityTime.field
			return 1079
		end
		def initialize(data = nil)
			if( data == nil )
				super(1079)
			else
				super(1079, data)
			end
		end
	end

	class RefOrderID < Quickfix::StringField
		def RefOrderID.field
			return 1080
		end
		def initialize(data = nil)
			if( data == nil )
				super(1080)
			else
				super(1080, data)
			end
		end
	end

	class RefOrderIDSource < Quickfix::CharField
		def RefOrderIDSource.field
			return 1081
		end
		def initialize(data = nil)
			if( data == nil )
				super(1081)
			else
				super(1081, data)
			end
		end
	end

	class SecondaryDisplayQty < Quickfix::DoubleField
		def SecondaryDisplayQty.field
			return 1082
		end
		def initialize(data = nil)
			if( data == nil )
				super(1082)
			else
				super(1082, data)
			end
		end
	end

	class DisplayWhen < Quickfix::CharField
		def DisplayWhen.field
			return 1083
		end
		def initialize(data = nil)
			if( data == nil )
				super(1083)
			else
				super(1083, data)
			end
		end
	end

	class DisplayMethod < Quickfix::CharField
		def DisplayMethod.field
			return 1084
		end
		def initialize(data = nil)
			if( data == nil )
				super(1084)
			else
				super(1084, data)
			end
		end
	end

	class DisplayLowQty < Quickfix::DoubleField
		def DisplayLowQty.field
			return 1085
		end
		def initialize(data = nil)
			if( data == nil )
				super(1085)
			else
				super(1085, data)
			end
		end
	end

	class DisplayHighQty < Quickfix::DoubleField
		def DisplayHighQty.field
			return 1086
		end
		def initialize(data = nil)
			if( data == nil )
				super(1086)
			else
				super(1086, data)
			end
		end
	end

	class DisplayMinIncr < Quickfix::DoubleField
		def DisplayMinIncr.field
			return 1087
		end
		def initialize(data = nil)
			if( data == nil )
				super(1087)
			else
				super(1087, data)
			end
		end
	end

	class RefreshQty < Quickfix::DoubleField
		def RefreshQty.field
			return 1088
		end
		def initialize(data = nil)
			if( data == nil )
				super(1088)
			else
				super(1088, data)
			end
		end
	end

	class MatchIncrement < Quickfix::DoubleField
		def MatchIncrement.field
			return 1089
		end
		def initialize(data = nil)
			if( data == nil )
				super(1089)
			else
				super(1089, data)
			end
		end
	end

	class MaxPriceLevels < Quickfix::IntField
		def MaxPriceLevels.field
			return 1090
		end
		def initialize(data = nil)
			if( data == nil )
				super(1090)
			else
				super(1090, data)
			end
		end
	end

	class PreTradeAnonymity < Quickfix::BoolField
		def PreTradeAnonymity.field
			return 1091
		end
		def initialize(data = nil)
			if( data == nil )
				super(1091)
			else
				super(1091, data)
			end
		end
	end

	class PriceProtectionScope < Quickfix::CharField
		def PriceProtectionScope.field
			return 1092
		end
		def initialize(data = nil)
			if( data == nil )
				super(1092)
			else
				super(1092, data)
			end
		end
	end

	class LotType < Quickfix::CharField
		def LotType.field
			return 1093
		end
		def initialize(data = nil)
			if( data == nil )
				super(1093)
			else
				super(1093, data)
			end
		end
	end

	class PegPriceType < Quickfix::IntField
		def PegPriceType.field
			return 1094
		end
		def initialize(data = nil)
			if( data == nil )
				super(1094)
			else
				super(1094, data)
			end
		end
	end

	class PeggedRefPrice < Quickfix::DoubleField
		def PeggedRefPrice.field
			return 1095
		end
		def initialize(data = nil)
			if( data == nil )
				super(1095)
			else
				super(1095, data)
			end
		end
	end

	class PegSecurityIDSource < Quickfix::StringField
		def PegSecurityIDSource.field
			return 1096
		end
		def initialize(data = nil)
			if( data == nil )
				super(1096)
			else
				super(1096, data)
			end
		end
	end

	class PegSecurityID < Quickfix::StringField
		def PegSecurityID.field
			return 1097
		end
		def initialize(data = nil)
			if( data == nil )
				super(1097)
			else
				super(1097, data)
			end
		end
	end

	class PegSymbol < Quickfix::StringField
		def PegSymbol.field
			return 1098
		end
		def initialize(data = nil)
			if( data == nil )
				super(1098)
			else
				super(1098, data)
			end
		end
	end

	class PegSecurityDesc < Quickfix::StringField
		def PegSecurityDesc.field
			return 1099
		end
		def initialize(data = nil)
			if( data == nil )
				super(1099)
			else
				super(1099, data)
			end
		end
	end

	class TriggerType < Quickfix::CharField
		def TriggerType.field
			return 1100
		end
		def initialize(data = nil)
			if( data == nil )
				super(1100)
			else
				super(1100, data)
			end
		end
	end

	class TriggerAction < Quickfix::CharField
		def TriggerAction.field
			return 1101
		end
		def initialize(data = nil)
			if( data == nil )
				super(1101)
			else
				super(1101, data)
			end
		end
	end

	class TriggerPrice < Quickfix::DoubleField
		def TriggerPrice.field
			return 1102
		end
		def initialize(data = nil)
			if( data == nil )
				super(1102)
			else
				super(1102, data)
			end
		end
	end

	class TriggerSymbol < Quickfix::StringField
		def TriggerSymbol.field
			return 1103
		end
		def initialize(data = nil)
			if( data == nil )
				super(1103)
			else
				super(1103, data)
			end
		end
	end

	class TriggerSecurityID < Quickfix::StringField
		def TriggerSecurityID.field
			return 1104
		end
		def initialize(data = nil)
			if( data == nil )
				super(1104)
			else
				super(1104, data)
			end
		end
	end

	class TriggerSecurityIDSource < Quickfix::StringField
		def TriggerSecurityIDSource.field
			return 1105
		end
		def initialize(data = nil)
			if( data == nil )
				super(1105)
			else
				super(1105, data)
			end
		end
	end

	class TriggerSecurityDesc < Quickfix::StringField
		def TriggerSecurityDesc.field
			return 1106
		end
		def initialize(data = nil)
			if( data == nil )
				super(1106)
			else
				super(1106, data)
			end
		end
	end

	class TriggerPriceType < Quickfix::CharField
		def TriggerPriceType.field
			return 1107
		end
		def initialize(data = nil)
			if( data == nil )
				super(1107)
			else
				super(1107, data)
			end
		end
	end

	class TriggerPriceTypeScope < Quickfix::CharField
		def TriggerPriceTypeScope.field
			return 1108
		end
		def initialize(data = nil)
			if( data == nil )
				super(1108)
			else
				super(1108, data)
			end
		end
	end

	class TriggerPriceDirection < Quickfix::CharField
		def TriggerPriceDirection.field
			return 1109
		end
		def initialize(data = nil)
			if( data == nil )
				super(1109)
			else
				super(1109, data)
			end
		end
	end

	class TriggerNewPrice < Quickfix::DoubleField
		def TriggerNewPrice.field
			return 1110
		end
		def initialize(data = nil)
			if( data == nil )
				super(1110)
			else
				super(1110, data)
			end
		end
	end

	class TriggerOrderType < Quickfix::CharField
		def TriggerOrderType.field
			return 1111
		end
		def initialize(data = nil)
			if( data == nil )
				super(1111)
			else
				super(1111, data)
			end
		end
	end

	class TriggerNewQty < Quickfix::DoubleField
		def TriggerNewQty.field
			return 1112
		end
		def initialize(data = nil)
			if( data == nil )
				super(1112)
			else
				super(1112, data)
			end
		end
	end

	class TriggerTradingSessionID < Quickfix::StringField
		def TriggerTradingSessionID.field
			return 1113
		end
		def initialize(data = nil)
			if( data == nil )
				super(1113)
			else
				super(1113, data)
			end
		end
	end

	class TriggerTradingSessionSubID < Quickfix::StringField
		def TriggerTradingSessionSubID.field
			return 1114
		end
		def initialize(data = nil)
			if( data == nil )
				super(1114)
			else
				super(1114, data)
			end
		end
	end

	class OrderCategory < Quickfix::CharField
		def OrderCategory.field
			return 1115
		end
		def initialize(data = nil)
			if( data == nil )
				super(1115)
			else
				super(1115, data)
			end
		end
	end

	class NoRootPartyIDs < Quickfix::IntField
		def NoRootPartyIDs.field
			return 1116
		end
		def initialize(data = nil)
			if( data == nil )
				super(1116)
			else
				super(1116, data)
			end
		end
	end

	class RootPartyID < Quickfix::StringField
		def RootPartyID.field
			return 1117
		end
		def initialize(data = nil)
			if( data == nil )
				super(1117)
			else
				super(1117, data)
			end
		end
	end

	class RootPartyIDSource < Quickfix::CharField
		def RootPartyIDSource.field
			return 1118
		end
		def initialize(data = nil)
			if( data == nil )
				super(1118)
			else
				super(1118, data)
			end
		end
	end

	class RootPartyRole < Quickfix::IntField
		def RootPartyRole.field
			return 1119
		end
		def initialize(data = nil)
			if( data == nil )
				super(1119)
			else
				super(1119, data)
			end
		end
	end

	class NoRootPartySubIDs < Quickfix::IntField
		def NoRootPartySubIDs.field
			return 1120
		end
		def initialize(data = nil)
			if( data == nil )
				super(1120)
			else
				super(1120, data)
			end
		end
	end

	class RootPartySubID < Quickfix::StringField
		def RootPartySubID.field
			return 1121
		end
		def initialize(data = nil)
			if( data == nil )
				super(1121)
			else
				super(1121, data)
			end
		end
	end

	class RootPartySubIDType < Quickfix::IntField
		def RootPartySubIDType.field
			return 1122
		end
		def initialize(data = nil)
			if( data == nil )
				super(1122)
			else
				super(1122, data)
			end
		end
	end

	class TradeHandlingInstr < Quickfix::CharField
		def TradeHandlingInstr.field
			return 1123
		end
		def initialize(data = nil)
			if( data == nil )
				super(1123)
			else
				super(1123, data)
			end
		end
	end

	class OrigTradeHandlingInstr < Quickfix::CharField
		def OrigTradeHandlingInstr.field
			return 1124
		end
		def initialize(data = nil)
			if( data == nil )
				super(1124)
			else
				super(1124, data)
			end
		end
	end

	class OrigTradeDate < Quickfix::StringField
		def OrigTradeDate.field
			return 1125
		end
		def initialize(data = nil)
			if( data == nil )
				super(1125)
			else
				super(1125, data)
			end
		end
	end

	class OrigTradeID < Quickfix::StringField
		def OrigTradeID.field
			return 1126
		end
		def initialize(data = nil)
			if( data == nil )
				super(1126)
			else
				super(1126, data)
			end
		end
	end

	class OrigSecondaryTradeID < Quickfix::StringField
		def OrigSecondaryTradeID.field
			return 1127
		end
		def initialize(data = nil)
			if( data == nil )
				super(1127)
			else
				super(1127, data)
			end
		end
	end

	class TZTransactTime < Quickfix::StringField
		def TZTransactTime.field
			return 1132
		end
		def initialize(data = nil)
			if( data == nil )
				super(1132)
			else
				super(1132, data)
			end
		end
	end

	class ExDestinationIDSource < Quickfix::CharField
		def ExDestinationIDSource.field
			return 1133
		end
		def initialize(data = nil)
			if( data == nil )
				super(1133)
			else
				super(1133, data)
			end
		end
	end

	class ReportedPxDiff < Quickfix::BoolField
		def ReportedPxDiff.field
			return 1134
		end
		def initialize(data = nil)
			if( data == nil )
				super(1134)
			else
				super(1134, data)
			end
		end
	end

	class RptSys < Quickfix::StringField
		def RptSys.field
			return 1135
		end
		def initialize(data = nil)
			if( data == nil )
				super(1135)
			else
				super(1135, data)
			end
		end
	end

	class AllocClearingFeeIndicator < Quickfix::StringField
		def AllocClearingFeeIndicator.field
			return 1136
		end
		def initialize(data = nil)
			if( data == nil )
				super(1136)
			else
				super(1136, data)
			end
		end
	end

	class DisplayQty < Quickfix::DoubleField
		def DisplayQty.field
			return 1138
		end
		def initialize(data = nil)
			if( data == nil )
				super(1138)
			else
				super(1138, data)
			end
		end
	end

	class ExchangeSpecialInstructions < Quickfix::StringField
		def ExchangeSpecialInstructions.field
			return 1139
		end
		def initialize(data = nil)
			if( data == nil )
				super(1139)
			else
				super(1139, data)
			end
		end
	end

	class NoUsernames < Quickfix::IntField
		def NoUsernames.field
			return 809
		end
		def initialize(data = nil)
			if( data == nil )
				super(809)
			else
				super(809, data)
			end
		end
	end

	class ExpirationQtyType < Quickfix::IntField
		def ExpirationQtyType.field
			return 982
		end
		def initialize(data = nil)
			if( data == nil )
				super(982)
			else
				super(982, data)
			end
		end
	end

	class MaxTradeVol < Quickfix::DoubleField
		def MaxTradeVol.field
			return 1140
		end
		def initialize(data = nil)
			if( data == nil )
				super(1140)
			else
				super(1140, data)
			end
		end
	end

	class NoMDFeedTypes < Quickfix::IntField
		def NoMDFeedTypes.field
			return 1141
		end
		def initialize(data = nil)
			if( data == nil )
				super(1141)
			else
				super(1141, data)
			end
		end
	end

	class MatchAlgorithm < Quickfix::StringField
		def MatchAlgorithm.field
			return 1142
		end
		def initialize(data = nil)
			if( data == nil )
				super(1142)
			else
				super(1142, data)
			end
		end
	end

	class MaxPriceVariation < Quickfix::DoubleField
		def MaxPriceVariation.field
			return 1143
		end
		def initialize(data = nil)
			if( data == nil )
				super(1143)
			else
				super(1143, data)
			end
		end
	end

	class ImpliedMarketIndicator < Quickfix::IntField
		def ImpliedMarketIndicator.field
			return 1144
		end
		def initialize(data = nil)
			if( data == nil )
				super(1144)
			else
				super(1144, data)
			end
		end
	end

	class EventTime < Quickfix::UtcTimeStampField
		def EventTime.field
			return 1145
		end
		def initialize(data = nil)
			if( data == nil )
				super(1145)
			else
				super(1145, data)
			end
		end
	end

	class MinPriceIncrementAmount < Quickfix::DoubleField
		def MinPriceIncrementAmount.field
			return 1146
		end
		def initialize(data = nil)
			if( data == nil )
				super(1146)
			else
				super(1146, data)
			end
		end
	end

	class UnitOfMeasureQty < Quickfix::DoubleField
		def UnitOfMeasureQty.field
			return 1147
		end
		def initialize(data = nil)
			if( data == nil )
				super(1147)
			else
				super(1147, data)
			end
		end
	end

	class LowLimitPrice < Quickfix::DoubleField
		def LowLimitPrice.field
			return 1148
		end
		def initialize(data = nil)
			if( data == nil )
				super(1148)
			else
				super(1148, data)
			end
		end
	end

	class HighLimitPrice < Quickfix::DoubleField
		def HighLimitPrice.field
			return 1149
		end
		def initialize(data = nil)
			if( data == nil )
				super(1149)
			else
				super(1149, data)
			end
		end
	end

	class TradingReferencePrice < Quickfix::DoubleField
		def TradingReferencePrice.field
			return 1150
		end
		def initialize(data = nil)
			if( data == nil )
				super(1150)
			else
				super(1150, data)
			end
		end
	end

	class SecurityGroup < Quickfix::StringField
		def SecurityGroup.field
			return 1151
		end
		def initialize(data = nil)
			if( data == nil )
				super(1151)
			else
				super(1151, data)
			end
		end
	end

	class LegNumber < Quickfix::IntField
		def LegNumber.field
			return 1152
		end
		def initialize(data = nil)
			if( data == nil )
				super(1152)
			else
				super(1152, data)
			end
		end
	end

	class SettlementCycleNo < Quickfix::IntField
		def SettlementCycleNo.field
			return 1153
		end
		def initialize(data = nil)
			if( data == nil )
				super(1153)
			else
				super(1153, data)
			end
		end
	end

	class SideCurrency < Quickfix::StringField
		def SideCurrency.field
			return 1154
		end
		def initialize(data = nil)
			if( data == nil )
				super(1154)
			else
				super(1154, data)
			end
		end
	end

	class SideSettlCurrency < Quickfix::StringField
		def SideSettlCurrency.field
			return 1155
		end
		def initialize(data = nil)
			if( data == nil )
				super(1155)
			else
				super(1155, data)
			end
		end
	end

	class ApplExtID < Quickfix::IntField
		def ApplExtID.field
			return 1156
		end
		def initialize(data = nil)
			if( data == nil )
				super(1156)
			else
				super(1156, data)
			end
		end
	end

	class CcyAmt < Quickfix::DoubleField
		def CcyAmt.field
			return 1157
		end
		def initialize(data = nil)
			if( data == nil )
				super(1157)
			else
				super(1157, data)
			end
		end
	end

	class NoSettlDetails < Quickfix::IntField
		def NoSettlDetails.field
			return 1158
		end
		def initialize(data = nil)
			if( data == nil )
				super(1158)
			else
				super(1158, data)
			end
		end
	end

	class SettlObligMode < Quickfix::IntField
		def SettlObligMode.field
			return 1159
		end
		def initialize(data = nil)
			if( data == nil )
				super(1159)
			else
				super(1159, data)
			end
		end
	end

	class SettlObligMsgID < Quickfix::StringField
		def SettlObligMsgID.field
			return 1160
		end
		def initialize(data = nil)
			if( data == nil )
				super(1160)
			else
				super(1160, data)
			end
		end
	end

	class SettlObligID < Quickfix::StringField
		def SettlObligID.field
			return 1161
		end
		def initialize(data = nil)
			if( data == nil )
				super(1161)
			else
				super(1161, data)
			end
		end
	end

	class SettlObligTransType < Quickfix::CharField
		def SettlObligTransType.field
			return 1162
		end
		def initialize(data = nil)
			if( data == nil )
				super(1162)
			else
				super(1162, data)
			end
		end
	end

	class SettlObligRefID < Quickfix::StringField
		def SettlObligRefID.field
			return 1163
		end
		def initialize(data = nil)
			if( data == nil )
				super(1163)
			else
				super(1163, data)
			end
		end
	end

	class SettlObligSource < Quickfix::CharField
		def SettlObligSource.field
			return 1164
		end
		def initialize(data = nil)
			if( data == nil )
				super(1164)
			else
				super(1164, data)
			end
		end
	end

	class NoSettlOblig < Quickfix::IntField
		def NoSettlOblig.field
			return 1165
		end
		def initialize(data = nil)
			if( data == nil )
				super(1165)
			else
				super(1165, data)
			end
		end
	end

	class QuoteMsgID < Quickfix::StringField
		def QuoteMsgID.field
			return 1166
		end
		def initialize(data = nil)
			if( data == nil )
				super(1166)
			else
				super(1166, data)
			end
		end
	end

	class QuoteEntryStatus < Quickfix::IntField
		def QuoteEntryStatus.field
			return 1167
		end
		def initialize(data = nil)
			if( data == nil )
				super(1167)
			else
				super(1167, data)
			end
		end
	end

	class TotNoCxldQuotes < Quickfix::IntField
		def TotNoCxldQuotes.field
			return 1168
		end
		def initialize(data = nil)
			if( data == nil )
				super(1168)
			else
				super(1168, data)
			end
		end
	end

	class TotNoAccQuotes < Quickfix::IntField
		def TotNoAccQuotes.field
			return 1169
		end
		def initialize(data = nil)
			if( data == nil )
				super(1169)
			else
				super(1169, data)
			end
		end
	end

	class TotNoRejQuotes < Quickfix::IntField
		def TotNoRejQuotes.field
			return 1170
		end
		def initialize(data = nil)
			if( data == nil )
				super(1170)
			else
				super(1170, data)
			end
		end
	end

	class PrivateQuote < Quickfix::BoolField
		def PrivateQuote.field
			return 1171
		end
		def initialize(data = nil)
			if( data == nil )
				super(1171)
			else
				super(1171, data)
			end
		end
	end

	class RespondentType < Quickfix::IntField
		def RespondentType.field
			return 1172
		end
		def initialize(data = nil)
			if( data == nil )
				super(1172)
			else
				super(1172, data)
			end
		end
	end

	class MDSubBookType < Quickfix::IntField
		def MDSubBookType.field
			return 1173
		end
		def initialize(data = nil)
			if( data == nil )
				super(1173)
			else
				super(1173, data)
			end
		end
	end

	class SecurityTradingEvent < Quickfix::IntField
		def SecurityTradingEvent.field
			return 1174
		end
		def initialize(data = nil)
			if( data == nil )
				super(1174)
			else
				super(1174, data)
			end
		end
	end

	class NoStatsIndicators < Quickfix::IntField
		def NoStatsIndicators.field
			return 1175
		end
		def initialize(data = nil)
			if( data == nil )
				super(1175)
			else
				super(1175, data)
			end
		end
	end

	class StatsType < Quickfix::IntField
		def StatsType.field
			return 1176
		end
		def initialize(data = nil)
			if( data == nil )
				super(1176)
			else
				super(1176, data)
			end
		end
	end

	class NoOfSecSizes < Quickfix::IntField
		def NoOfSecSizes.field
			return 1177
		end
		def initialize(data = nil)
			if( data == nil )
				super(1177)
			else
				super(1177, data)
			end
		end
	end

	class MDSecSizeType < Quickfix::IntField
		def MDSecSizeType.field
			return 1178
		end
		def initialize(data = nil)
			if( data == nil )
				super(1178)
			else
				super(1178, data)
			end
		end
	end

	class MDSecSize < Quickfix::DoubleField
		def MDSecSize.field
			return 1179
		end
		def initialize(data = nil)
			if( data == nil )
				super(1179)
			else
				super(1179, data)
			end
		end
	end

	class ApplID < Quickfix::StringField
		def ApplID.field
			return 1180
		end
		def initialize(data = nil)
			if( data == nil )
				super(1180)
			else
				super(1180, data)
			end
		end
	end

	class ApplSeqNum < Quickfix::IntField
		def ApplSeqNum.field
			return 1181
		end
		def initialize(data = nil)
			if( data == nil )
				super(1181)
			else
				super(1181, data)
			end
		end
	end

	class ApplBegSeqNum < Quickfix::IntField
		def ApplBegSeqNum.field
			return 1182
		end
		def initialize(data = nil)
			if( data == nil )
				super(1182)
			else
				super(1182, data)
			end
		end
	end

	class ApplEndSeqNum < Quickfix::IntField
		def ApplEndSeqNum.field
			return 1183
		end
		def initialize(data = nil)
			if( data == nil )
				super(1183)
			else
				super(1183, data)
			end
		end
	end

	class SecurityXMLLen < Quickfix::IntField
		def SecurityXMLLen.field
			return 1184
		end
		def initialize(data = nil)
			if( data == nil )
				super(1184)
			else
				super(1184, data)
			end
		end
	end

	class SecurityXML < Quickfix::StringField
		def SecurityXML.field
			return 1185
		end
		def initialize(data = nil)
			if( data == nil )
				super(1185)
			else
				super(1185, data)
			end
		end
	end

	class SecurityXMLSchema < Quickfix::StringField
		def SecurityXMLSchema.field
			return 1186
		end
		def initialize(data = nil)
			if( data == nil )
				super(1186)
			else
				super(1186, data)
			end
		end
	end

	class RefreshIndicator < Quickfix::BoolField
		def RefreshIndicator.field
			return 1187
		end
		def initialize(data = nil)
			if( data == nil )
				super(1187)
			else
				super(1187, data)
			end
		end
	end

	class Volatility < Quickfix::DoubleField
		def Volatility.field
			return 1188
		end
		def initialize(data = nil)
			if( data == nil )
				super(1188)
			else
				super(1188, data)
			end
		end
	end

	class TimeToExpiration < Quickfix::DoubleField
		def TimeToExpiration.field
			return 1189
		end
		def initialize(data = nil)
			if( data == nil )
				super(1189)
			else
				super(1189, data)
			end
		end
	end

	class RiskFreeRate < Quickfix::DoubleField
		def RiskFreeRate.field
			return 1190
		end
		def initialize(data = nil)
			if( data == nil )
				super(1190)
			else
				super(1190, data)
			end
		end
	end

	class PriceUnitOfMeasure < Quickfix::StringField
		def PriceUnitOfMeasure.field
			return 1191
		end
		def initialize(data = nil)
			if( data == nil )
				super(1191)
			else
				super(1191, data)
			end
		end
	end

	class PriceUnitOfMeasureQty < Quickfix::DoubleField
		def PriceUnitOfMeasureQty.field
			return 1192
		end
		def initialize(data = nil)
			if( data == nil )
				super(1192)
			else
				super(1192, data)
			end
		end
	end

	class SettlMethod < Quickfix::CharField
		def SettlMethod.field
			return 1193
		end
		def initialize(data = nil)
			if( data == nil )
				super(1193)
			else
				super(1193, data)
			end
		end
	end

	class ExerciseStyle < Quickfix::IntField
		def ExerciseStyle.field
			return 1194
		end
		def initialize(data = nil)
			if( data == nil )
				super(1194)
			else
				super(1194, data)
			end
		end
	end

	class OptPayAmount < Quickfix::DoubleField
		def OptPayAmount.field
			return 1195
		end
		def initialize(data = nil)
			if( data == nil )
				super(1195)
			else
				super(1195, data)
			end
		end
	end

	class PriceQuoteMethod < Quickfix::StringField
		def PriceQuoteMethod.field
			return 1196
		end
		def initialize(data = nil)
			if( data == nil )
				super(1196)
			else
				super(1196, data)
			end
		end
	end

	class FuturesValuationMethod < Quickfix::StringField
		def FuturesValuationMethod.field
			return 1197
		end
		def initialize(data = nil)
			if( data == nil )
				super(1197)
			else
				super(1197, data)
			end
		end
	end

	class ListMethod < Quickfix::IntField
		def ListMethod.field
			return 1198
		end
		def initialize(data = nil)
			if( data == nil )
				super(1198)
			else
				super(1198, data)
			end
		end
	end

	class CapPrice < Quickfix::DoubleField
		def CapPrice.field
			return 1199
		end
		def initialize(data = nil)
			if( data == nil )
				super(1199)
			else
				super(1199, data)
			end
		end
	end

	class FloorPrice < Quickfix::DoubleField
		def FloorPrice.field
			return 1200
		end
		def initialize(data = nil)
			if( data == nil )
				super(1200)
			else
				super(1200, data)
			end
		end
	end

	class NoStrikeRules < Quickfix::IntField
		def NoStrikeRules.field
			return 1201
		end
		def initialize(data = nil)
			if( data == nil )
				super(1201)
			else
				super(1201, data)
			end
		end
	end

	class StartStrikePxRange < Quickfix::DoubleField
		def StartStrikePxRange.field
			return 1202
		end
		def initialize(data = nil)
			if( data == nil )
				super(1202)
			else
				super(1202, data)
			end
		end
	end

	class EndStrikePxRange < Quickfix::DoubleField
		def EndStrikePxRange.field
			return 1203
		end
		def initialize(data = nil)
			if( data == nil )
				super(1203)
			else
				super(1203, data)
			end
		end
	end

	class StrikeIncrement < Quickfix::DoubleField
		def StrikeIncrement.field
			return 1204
		end
		def initialize(data = nil)
			if( data == nil )
				super(1204)
			else
				super(1204, data)
			end
		end
	end

	class NoTickRules < Quickfix::IntField
		def NoTickRules.field
			return 1205
		end
		def initialize(data = nil)
			if( data == nil )
				super(1205)
			else
				super(1205, data)
			end
		end
	end

	class StartTickPriceRange < Quickfix::DoubleField
		def StartTickPriceRange.field
			return 1206
		end
		def initialize(data = nil)
			if( data == nil )
				super(1206)
			else
				super(1206, data)
			end
		end
	end

	class EndTickPriceRange < Quickfix::DoubleField
		def EndTickPriceRange.field
			return 1207
		end
		def initialize(data = nil)
			if( data == nil )
				super(1207)
			else
				super(1207, data)
			end
		end
	end

	class TickIncrement < Quickfix::DoubleField
		def TickIncrement.field
			return 1208
		end
		def initialize(data = nil)
			if( data == nil )
				super(1208)
			else
				super(1208, data)
			end
		end
	end

	class TickRuleType < Quickfix::IntField
		def TickRuleType.field
			return 1209
		end
		def initialize(data = nil)
			if( data == nil )
				super(1209)
			else
				super(1209, data)
			end
		end
	end

	class NestedInstrAttribType < Quickfix::IntField
		def NestedInstrAttribType.field
			return 1210
		end
		def initialize(data = nil)
			if( data == nil )
				super(1210)
			else
				super(1210, data)
			end
		end
	end

	class NestedInstrAttribValue < Quickfix::StringField
		def NestedInstrAttribValue.field
			return 1211
		end
		def initialize(data = nil)
			if( data == nil )
				super(1211)
			else
				super(1211, data)
			end
		end
	end

	class LegMaturityTime < Quickfix::StringField
		def LegMaturityTime.field
			return 1212
		end
		def initialize(data = nil)
			if( data == nil )
				super(1212)
			else
				super(1212, data)
			end
		end
	end

	class UnderlyingMaturityTime < Quickfix::StringField
		def UnderlyingMaturityTime.field
			return 1213
		end
		def initialize(data = nil)
			if( data == nil )
				super(1213)
			else
				super(1213, data)
			end
		end
	end

	class DerivativeSymbol < Quickfix::StringField
		def DerivativeSymbol.field
			return 1214
		end
		def initialize(data = nil)
			if( data == nil )
				super(1214)
			else
				super(1214, data)
			end
		end
	end

	class DerivativeSymbolSfx < Quickfix::StringField
		def DerivativeSymbolSfx.field
			return 1215
		end
		def initialize(data = nil)
			if( data == nil )
				super(1215)
			else
				super(1215, data)
			end
		end
	end

	class DerivativeSecurityID < Quickfix::StringField
		def DerivativeSecurityID.field
			return 1216
		end
		def initialize(data = nil)
			if( data == nil )
				super(1216)
			else
				super(1216, data)
			end
		end
	end

	class DerivativeSecurityIDSource < Quickfix::StringField
		def DerivativeSecurityIDSource.field
			return 1217
		end
		def initialize(data = nil)
			if( data == nil )
				super(1217)
			else
				super(1217, data)
			end
		end
	end

	class NoDerivativeSecurityAltID < Quickfix::IntField
		def NoDerivativeSecurityAltID.field
			return 1218
		end
		def initialize(data = nil)
			if( data == nil )
				super(1218)
			else
				super(1218, data)
			end
		end
	end

	class DerivativeSecurityAltID < Quickfix::StringField
		def DerivativeSecurityAltID.field
			return 1219
		end
		def initialize(data = nil)
			if( data == nil )
				super(1219)
			else
				super(1219, data)
			end
		end
	end

	class DerivativeSecurityAltIDSource < Quickfix::StringField
		def DerivativeSecurityAltIDSource.field
			return 1220
		end
		def initialize(data = nil)
			if( data == nil )
				super(1220)
			else
				super(1220, data)
			end
		end
	end

	class SecondaryLowLimitPrice < Quickfix::DoubleField
		def SecondaryLowLimitPrice.field
			return 1221
		end
		def initialize(data = nil)
			if( data == nil )
				super(1221)
			else
				super(1221, data)
			end
		end
	end

	class MaturityRuleID < Quickfix::StringField
		def MaturityRuleID.field
			return 1222
		end
		def initialize(data = nil)
			if( data == nil )
				super(1222)
			else
				super(1222, data)
			end
		end
	end

	class StrikeRuleID < Quickfix::StringField
		def StrikeRuleID.field
			return 1223
		end
		def initialize(data = nil)
			if( data == nil )
				super(1223)
			else
				super(1223, data)
			end
		end
	end

	class LegUnitOfMeasureQty < Quickfix::DoubleField
		def LegUnitOfMeasureQty.field
			return 1224
		end
		def initialize(data = nil)
			if( data == nil )
				super(1224)
			else
				super(1224, data)
			end
		end
	end

	class DerivativeOptPayAmount < Quickfix::DoubleField
		def DerivativeOptPayAmount.field
			return 1225
		end
		def initialize(data = nil)
			if( data == nil )
				super(1225)
			else
				super(1225, data)
			end
		end
	end

	class EndMaturityMonthYear < Quickfix::StringField
		def EndMaturityMonthYear.field
			return 1226
		end
		def initialize(data = nil)
			if( data == nil )
				super(1226)
			else
				super(1226, data)
			end
		end
	end

	class ProductComplex < Quickfix::StringField
		def ProductComplex.field
			return 1227
		end
		def initialize(data = nil)
			if( data == nil )
				super(1227)
			else
				super(1227, data)
			end
		end
	end

	class DerivativeProductComplex < Quickfix::StringField
		def DerivativeProductComplex.field
			return 1228
		end
		def initialize(data = nil)
			if( data == nil )
				super(1228)
			else
				super(1228, data)
			end
		end
	end

	class MaturityMonthYearIncrement < Quickfix::IntField
		def MaturityMonthYearIncrement.field
			return 1229
		end
		def initialize(data = nil)
			if( data == nil )
				super(1229)
			else
				super(1229, data)
			end
		end
	end

	class SecondaryHighLimitPrice < Quickfix::DoubleField
		def SecondaryHighLimitPrice.field
			return 1230
		end
		def initialize(data = nil)
			if( data == nil )
				super(1230)
			else
				super(1230, data)
			end
		end
	end

	class MinLotSize < Quickfix::DoubleField
		def MinLotSize.field
			return 1231
		end
		def initialize(data = nil)
			if( data == nil )
				super(1231)
			else
				super(1231, data)
			end
		end
	end

	class NoExecInstRules < Quickfix::IntField
		def NoExecInstRules.field
			return 1232
		end
		def initialize(data = nil)
			if( data == nil )
				super(1232)
			else
				super(1232, data)
			end
		end
	end

	class NoLotTypeRules < Quickfix::IntField
		def NoLotTypeRules.field
			return 1234
		end
		def initialize(data = nil)
			if( data == nil )
				super(1234)
			else
				super(1234, data)
			end
		end
	end

	class NoMatchRules < Quickfix::IntField
		def NoMatchRules.field
			return 1235
		end
		def initialize(data = nil)
			if( data == nil )
				super(1235)
			else
				super(1235, data)
			end
		end
	end

	class NoMaturityRules < Quickfix::IntField
		def NoMaturityRules.field
			return 1236
		end
		def initialize(data = nil)
			if( data == nil )
				super(1236)
			else
				super(1236, data)
			end
		end
	end

	class NoOrdTypeRules < Quickfix::IntField
		def NoOrdTypeRules.field
			return 1237
		end
		def initialize(data = nil)
			if( data == nil )
				super(1237)
			else
				super(1237, data)
			end
		end
	end

	class NoTimeInForceRules < Quickfix::IntField
		def NoTimeInForceRules.field
			return 1239
		end
		def initialize(data = nil)
			if( data == nil )
				super(1239)
			else
				super(1239, data)
			end
		end
	end

	class SecondaryTradingReferencePrice < Quickfix::DoubleField
		def SecondaryTradingReferencePrice.field
			return 1240
		end
		def initialize(data = nil)
			if( data == nil )
				super(1240)
			else
				super(1240, data)
			end
		end
	end

	class StartMaturityMonthYear < Quickfix::StringField
		def StartMaturityMonthYear.field
			return 1241
		end
		def initialize(data = nil)
			if( data == nil )
				super(1241)
			else
				super(1241, data)
			end
		end
	end

	class FlexProductEligibilityIndicator < Quickfix::BoolField
		def FlexProductEligibilityIndicator.field
			return 1242
		end
		def initialize(data = nil)
			if( data == nil )
				super(1242)
			else
				super(1242, data)
			end
		end
	end

	class DerivFlexProductEligibilityIndicator < Quickfix::BoolField
		def DerivFlexProductEligibilityIndicator.field
			return 1243
		end
		def initialize(data = nil)
			if( data == nil )
				super(1243)
			else
				super(1243, data)
			end
		end
	end

	class FlexibleIndicator < Quickfix::BoolField
		def FlexibleIndicator.field
			return 1244
		end
		def initialize(data = nil)
			if( data == nil )
				super(1244)
			else
				super(1244, data)
			end
		end
	end

	class TradingCurrency < Quickfix::StringField
		def TradingCurrency.field
			return 1245
		end
		def initialize(data = nil)
			if( data == nil )
				super(1245)
			else
				super(1245, data)
			end
		end
	end

	class DerivativeProduct < Quickfix::IntField
		def DerivativeProduct.field
			return 1246
		end
		def initialize(data = nil)
			if( data == nil )
				super(1246)
			else
				super(1246, data)
			end
		end
	end

	class DerivativeSecurityGroup < Quickfix::StringField
		def DerivativeSecurityGroup.field
			return 1247
		end
		def initialize(data = nil)
			if( data == nil )
				super(1247)
			else
				super(1247, data)
			end
		end
	end

	class DerivativeCFICode < Quickfix::StringField
		def DerivativeCFICode.field
			return 1248
		end
		def initialize(data = nil)
			if( data == nil )
				super(1248)
			else
				super(1248, data)
			end
		end
	end

	class DerivativeSecurityType < Quickfix::StringField
		def DerivativeSecurityType.field
			return 1249
		end
		def initialize(data = nil)
			if( data == nil )
				super(1249)
			else
				super(1249, data)
			end
		end
	end

	class DerivativeSecuritySubType < Quickfix::StringField
		def DerivativeSecuritySubType.field
			return 1250
		end
		def initialize(data = nil)
			if( data == nil )
				super(1250)
			else
				super(1250, data)
			end
		end
	end

	class DerivativeMaturityMonthYear < Quickfix::StringField
		def DerivativeMaturityMonthYear.field
			return 1251
		end
		def initialize(data = nil)
			if( data == nil )
				super(1251)
			else
				super(1251, data)
			end
		end
	end

	class DerivativeMaturityDate < Quickfix::StringField
		def DerivativeMaturityDate.field
			return 1252
		end
		def initialize(data = nil)
			if( data == nil )
				super(1252)
			else
				super(1252, data)
			end
		end
	end

	class DerivativeMaturityTime < Quickfix::StringField
		def DerivativeMaturityTime.field
			return 1253
		end
		def initialize(data = nil)
			if( data == nil )
				super(1253)
			else
				super(1253, data)
			end
		end
	end

	class DerivativeSettleOnOpenFlag < Quickfix::StringField
		def DerivativeSettleOnOpenFlag.field
			return 1254
		end
		def initialize(data = nil)
			if( data == nil )
				super(1254)
			else
				super(1254, data)
			end
		end
	end

	class DerivativeInstrmtAssignmentMethod < Quickfix::CharField
		def DerivativeInstrmtAssignmentMethod.field
			return 1255
		end
		def initialize(data = nil)
			if( data == nil )
				super(1255)
			else
				super(1255, data)
			end
		end
	end

	class DerivativeSecurityStatus < Quickfix::StringField
		def DerivativeSecurityStatus.field
			return 1256
		end
		def initialize(data = nil)
			if( data == nil )
				super(1256)
			else
				super(1256, data)
			end
		end
	end

	class DerivativeInstrRegistry < Quickfix::StringField
		def DerivativeInstrRegistry.field
			return 1257
		end
		def initialize(data = nil)
			if( data == nil )
				super(1257)
			else
				super(1257, data)
			end
		end
	end

	class DerivativeCountryOfIssue < Quickfix::StringField
		def DerivativeCountryOfIssue.field
			return 1258
		end
		def initialize(data = nil)
			if( data == nil )
				super(1258)
			else
				super(1258, data)
			end
		end
	end

	class DerivativeStateOrProvinceOfIssue < Quickfix::StringField
		def DerivativeStateOrProvinceOfIssue.field
			return 1259
		end
		def initialize(data = nil)
			if( data == nil )
				super(1259)
			else
				super(1259, data)
			end
		end
	end

	class DerivativeLocaleOfIssue < Quickfix::StringField
		def DerivativeLocaleOfIssue.field
			return 1260
		end
		def initialize(data = nil)
			if( data == nil )
				super(1260)
			else
				super(1260, data)
			end
		end
	end

	class DerivativeStrikePrice < Quickfix::DoubleField
		def DerivativeStrikePrice.field
			return 1261
		end
		def initialize(data = nil)
			if( data == nil )
				super(1261)
			else
				super(1261, data)
			end
		end
	end

	class DerivativeStrikeCurrency < Quickfix::StringField
		def DerivativeStrikeCurrency.field
			return 1262
		end
		def initialize(data = nil)
			if( data == nil )
				super(1262)
			else
				super(1262, data)
			end
		end
	end

	class DerivativeStrikeMultiplier < Quickfix::DoubleField
		def DerivativeStrikeMultiplier.field
			return 1263
		end
		def initialize(data = nil)
			if( data == nil )
				super(1263)
			else
				super(1263, data)
			end
		end
	end

	class DerivativeStrikeValue < Quickfix::DoubleField
		def DerivativeStrikeValue.field
			return 1264
		end
		def initialize(data = nil)
			if( data == nil )
				super(1264)
			else
				super(1264, data)
			end
		end
	end

	class DerivativeOptAttribute < Quickfix::CharField
		def DerivativeOptAttribute.field
			return 1265
		end
		def initialize(data = nil)
			if( data == nil )
				super(1265)
			else
				super(1265, data)
			end
		end
	end

	class DerivativeContractMultiplier < Quickfix::DoubleField
		def DerivativeContractMultiplier.field
			return 1266
		end
		def initialize(data = nil)
			if( data == nil )
				super(1266)
			else
				super(1266, data)
			end
		end
	end

	class DerivativeMinPriceIncrement < Quickfix::DoubleField
		def DerivativeMinPriceIncrement.field
			return 1267
		end
		def initialize(data = nil)
			if( data == nil )
				super(1267)
			else
				super(1267, data)
			end
		end
	end

	class DerivativeMinPriceIncrementAmount < Quickfix::DoubleField
		def DerivativeMinPriceIncrementAmount.field
			return 1268
		end
		def initialize(data = nil)
			if( data == nil )
				super(1268)
			else
				super(1268, data)
			end
		end
	end

	class DerivativeUnitOfMeasure < Quickfix::StringField
		def DerivativeUnitOfMeasure.field
			return 1269
		end
		def initialize(data = nil)
			if( data == nil )
				super(1269)
			else
				super(1269, data)
			end
		end
	end

	class DerivativeUnitOfMeasureQty < Quickfix::DoubleField
		def DerivativeUnitOfMeasureQty.field
			return 1270
		end
		def initialize(data = nil)
			if( data == nil )
				super(1270)
			else
				super(1270, data)
			end
		end
	end

	class DerivativeTimeUnit < Quickfix::StringField
		def DerivativeTimeUnit.field
			return 1271
		end
		def initialize(data = nil)
			if( data == nil )
				super(1271)
			else
				super(1271, data)
			end
		end
	end

	class DerivativeSecurityExchange < Quickfix::StringField
		def DerivativeSecurityExchange.field
			return 1272
		end
		def initialize(data = nil)
			if( data == nil )
				super(1272)
			else
				super(1272, data)
			end
		end
	end

	class DerivativePositionLimit < Quickfix::IntField
		def DerivativePositionLimit.field
			return 1273
		end
		def initialize(data = nil)
			if( data == nil )
				super(1273)
			else
				super(1273, data)
			end
		end
	end

	class DerivativeNTPositionLimit < Quickfix::IntField
		def DerivativeNTPositionLimit.field
			return 1274
		end
		def initialize(data = nil)
			if( data == nil )
				super(1274)
			else
				super(1274, data)
			end
		end
	end

	class DerivativeIssuer < Quickfix::StringField
		def DerivativeIssuer.field
			return 1275
		end
		def initialize(data = nil)
			if( data == nil )
				super(1275)
			else
				super(1275, data)
			end
		end
	end

	class DerivativeIssueDate < Quickfix::StringField
		def DerivativeIssueDate.field
			return 1276
		end
		def initialize(data = nil)
			if( data == nil )
				super(1276)
			else
				super(1276, data)
			end
		end
	end

	class DerivativeEncodedIssuerLen < Quickfix::IntField
		def DerivativeEncodedIssuerLen.field
			return 1277
		end
		def initialize(data = nil)
			if( data == nil )
				super(1277)
			else
				super(1277, data)
			end
		end
	end

	class DerivativeEncodedIssuer < Quickfix::StringField
		def DerivativeEncodedIssuer.field
			return 1278
		end
		def initialize(data = nil)
			if( data == nil )
				super(1278)
			else
				super(1278, data)
			end
		end
	end

	class DerivativeSecurityDesc < Quickfix::StringField
		def DerivativeSecurityDesc.field
			return 1279
		end
		def initialize(data = nil)
			if( data == nil )
				super(1279)
			else
				super(1279, data)
			end
		end
	end

	class DerivativeEncodedSecurityDescLen < Quickfix::IntField
		def DerivativeEncodedSecurityDescLen.field
			return 1280
		end
		def initialize(data = nil)
			if( data == nil )
				super(1280)
			else
				super(1280, data)
			end
		end
	end

	class DerivativeEncodedSecurityDesc < Quickfix::StringField
		def DerivativeEncodedSecurityDesc.field
			return 1281
		end
		def initialize(data = nil)
			if( data == nil )
				super(1281)
			else
				super(1281, data)
			end
		end
	end

	class DerivativeSecurityXMLLen < Quickfix::IntField
		def DerivativeSecurityXMLLen.field
			return 1282
		end
		def initialize(data = nil)
			if( data == nil )
				super(1282)
			else
				super(1282, data)
			end
		end
	end

	class DerivativeSecurityXML < Quickfix::StringField
		def DerivativeSecurityXML.field
			return 1283
		end
		def initialize(data = nil)
			if( data == nil )
				super(1283)
			else
				super(1283, data)
			end
		end
	end

	class DerivativeSecurityXMLSchema < Quickfix::StringField
		def DerivativeSecurityXMLSchema.field
			return 1284
		end
		def initialize(data = nil)
			if( data == nil )
				super(1284)
			else
				super(1284, data)
			end
		end
	end

	class DerivativeContractSettlMonth < Quickfix::StringField
		def DerivativeContractSettlMonth.field
			return 1285
		end
		def initialize(data = nil)
			if( data == nil )
				super(1285)
			else
				super(1285, data)
			end
		end
	end

	class NoDerivativeEvents < Quickfix::IntField
		def NoDerivativeEvents.field
			return 1286
		end
		def initialize(data = nil)
			if( data == nil )
				super(1286)
			else
				super(1286, data)
			end
		end
	end

	class DerivativeEventType < Quickfix::IntField
		def DerivativeEventType.field
			return 1287
		end
		def initialize(data = nil)
			if( data == nil )
				super(1287)
			else
				super(1287, data)
			end
		end
	end

	class DerivativeEventDate < Quickfix::StringField
		def DerivativeEventDate.field
			return 1288
		end
		def initialize(data = nil)
			if( data == nil )
				super(1288)
			else
				super(1288, data)
			end
		end
	end

	class DerivativeEventTime < Quickfix::UtcTimeStampField
		def DerivativeEventTime.field
			return 1289
		end
		def initialize(data = nil)
			if( data == nil )
				super(1289)
			else
				super(1289, data)
			end
		end
	end

	class DerivativeEventPx < Quickfix::DoubleField
		def DerivativeEventPx.field
			return 1290
		end
		def initialize(data = nil)
			if( data == nil )
				super(1290)
			else
				super(1290, data)
			end
		end
	end

	class DerivativeEventText < Quickfix::StringField
		def DerivativeEventText.field
			return 1291
		end
		def initialize(data = nil)
			if( data == nil )
				super(1291)
			else
				super(1291, data)
			end
		end
	end

	class NoDerivativeInstrumentParties < Quickfix::IntField
		def NoDerivativeInstrumentParties.field
			return 1292
		end
		def initialize(data = nil)
			if( data == nil )
				super(1292)
			else
				super(1292, data)
			end
		end
	end

	class DerivativeInstrumentPartyID < Quickfix::StringField
		def DerivativeInstrumentPartyID.field
			return 1293
		end
		def initialize(data = nil)
			if( data == nil )
				super(1293)
			else
				super(1293, data)
			end
		end
	end

	class DerivativeInstrumentPartyIDSource < Quickfix::StringField
		def DerivativeInstrumentPartyIDSource.field
			return 1294
		end
		def initialize(data = nil)
			if( data == nil )
				super(1294)
			else
				super(1294, data)
			end
		end
	end

	class DerivativeInstrumentPartyRole < Quickfix::IntField
		def DerivativeInstrumentPartyRole.field
			return 1295
		end
		def initialize(data = nil)
			if( data == nil )
				super(1295)
			else
				super(1295, data)
			end
		end
	end

	class NoDerivativeInstrumentPartySubIDs < Quickfix::IntField
		def NoDerivativeInstrumentPartySubIDs.field
			return 1296
		end
		def initialize(data = nil)
			if( data == nil )
				super(1296)
			else
				super(1296, data)
			end
		end
	end

	class DerivativeInstrumentPartySubID < Quickfix::StringField
		def DerivativeInstrumentPartySubID.field
			return 1297
		end
		def initialize(data = nil)
			if( data == nil )
				super(1297)
			else
				super(1297, data)
			end
		end
	end

	class DerivativeInstrumentPartySubIDType < Quickfix::IntField
		def DerivativeInstrumentPartySubIDType.field
			return 1298
		end
		def initialize(data = nil)
			if( data == nil )
				super(1298)
			else
				super(1298, data)
			end
		end
	end

	class DerivativeExerciseStyle < Quickfix::CharField
		def DerivativeExerciseStyle.field
			return 1299
		end
		def initialize(data = nil)
			if( data == nil )
				super(1299)
			else
				super(1299, data)
			end
		end
	end

	class MarketSegmentID < Quickfix::StringField
		def MarketSegmentID.field
			return 1300
		end
		def initialize(data = nil)
			if( data == nil )
				super(1300)
			else
				super(1300, data)
			end
		end
	end

	class MarketID < Quickfix::StringField
		def MarketID.field
			return 1301
		end
		def initialize(data = nil)
			if( data == nil )
				super(1301)
			else
				super(1301, data)
			end
		end
	end

	class MaturityMonthYearIncrementUnits < Quickfix::IntField
		def MaturityMonthYearIncrementUnits.field
			return 1302
		end
		def initialize(data = nil)
			if( data == nil )
				super(1302)
			else
				super(1302, data)
			end
		end
	end

	class MaturityMonthYearFormat < Quickfix::IntField
		def MaturityMonthYearFormat.field
			return 1303
		end
		def initialize(data = nil)
			if( data == nil )
				super(1303)
			else
				super(1303, data)
			end
		end
	end

	class StrikeExerciseStyle < Quickfix::IntField
		def StrikeExerciseStyle.field
			return 1304
		end
		def initialize(data = nil)
			if( data == nil )
				super(1304)
			else
				super(1304, data)
			end
		end
	end

	class SecondaryPriceLimitType < Quickfix::IntField
		def SecondaryPriceLimitType.field
			return 1305
		end
		def initialize(data = nil)
			if( data == nil )
				super(1305)
			else
				super(1305, data)
			end
		end
	end

	class PriceLimitType < Quickfix::IntField
		def PriceLimitType.field
			return 1306
		end
		def initialize(data = nil)
			if( data == nil )
				super(1306)
			else
				super(1306, data)
			end
		end
	end

	class ExecInstValue < Quickfix::CharField
		def ExecInstValue.field
			return 1308
		end
		def initialize(data = nil)
			if( data == nil )
				super(1308)
			else
				super(1308, data)
			end
		end
	end

	class NoTradingSessionRules < Quickfix::IntField
		def NoTradingSessionRules.field
			return 1309
		end
		def initialize(data = nil)
			if( data == nil )
				super(1309)
			else
				super(1309, data)
			end
		end
	end

	class NoMarketSegments < Quickfix::IntField
		def NoMarketSegments.field
			return 1310
		end
		def initialize(data = nil)
			if( data == nil )
				super(1310)
			else
				super(1310, data)
			end
		end
	end

	class NoDerivativeInstrAttrib < Quickfix::IntField
		def NoDerivativeInstrAttrib.field
			return 1311
		end
		def initialize(data = nil)
			if( data == nil )
				super(1311)
			else
				super(1311, data)
			end
		end
	end

	class NoNestedInstrAttrib < Quickfix::IntField
		def NoNestedInstrAttrib.field
			return 1312
		end
		def initialize(data = nil)
			if( data == nil )
				super(1312)
			else
				super(1312, data)
			end
		end
	end

	class DerivativeInstrAttribType < Quickfix::IntField
		def DerivativeInstrAttribType.field
			return 1313
		end
		def initialize(data = nil)
			if( data == nil )
				super(1313)
			else
				super(1313, data)
			end
		end
	end

	class DerivativeInstrAttribValue < Quickfix::StringField
		def DerivativeInstrAttribValue.field
			return 1314
		end
		def initialize(data = nil)
			if( data == nil )
				super(1314)
			else
				super(1314, data)
			end
		end
	end

	class DerivativePriceUnitOfMeasure < Quickfix::StringField
		def DerivativePriceUnitOfMeasure.field
			return 1315
		end
		def initialize(data = nil)
			if( data == nil )
				super(1315)
			else
				super(1315, data)
			end
		end
	end

	class DerivativePriceUnitOfMeasureQty < Quickfix::DoubleField
		def DerivativePriceUnitOfMeasureQty.field
			return 1316
		end
		def initialize(data = nil)
			if( data == nil )
				super(1316)
			else
				super(1316, data)
			end
		end
	end

	class DerivativeSettlMethod < Quickfix::CharField
		def DerivativeSettlMethod.field
			return 1317
		end
		def initialize(data = nil)
			if( data == nil )
				super(1317)
			else
				super(1317, data)
			end
		end
	end

	class DerivativePriceQuoteMethod < Quickfix::StringField
		def DerivativePriceQuoteMethod.field
			return 1318
		end
		def initialize(data = nil)
			if( data == nil )
				super(1318)
			else
				super(1318, data)
			end
		end
	end

	class DerivativeFuturesValuationMethod < Quickfix::StringField
		def DerivativeFuturesValuationMethod.field
			return 1319
		end
		def initialize(data = nil)
			if( data == nil )
				super(1319)
			else
				super(1319, data)
			end
		end
	end

	class DerivativeListMethod < Quickfix::IntField
		def DerivativeListMethod.field
			return 1320
		end
		def initialize(data = nil)
			if( data == nil )
				super(1320)
			else
				super(1320, data)
			end
		end
	end

	class DerivativeCapPrice < Quickfix::DoubleField
		def DerivativeCapPrice.field
			return 1321
		end
		def initialize(data = nil)
			if( data == nil )
				super(1321)
			else
				super(1321, data)
			end
		end
	end

	class DerivativeFloorPrice < Quickfix::DoubleField
		def DerivativeFloorPrice.field
			return 1322
		end
		def initialize(data = nil)
			if( data == nil )
				super(1322)
			else
				super(1322, data)
			end
		end
	end

	class DerivativePutOrCall < Quickfix::IntField
		def DerivativePutOrCall.field
			return 1323
		end
		def initialize(data = nil)
			if( data == nil )
				super(1323)
			else
				super(1323, data)
			end
		end
	end

	class ListUpdateAction < Quickfix::CharField
		def ListUpdateAction.field
			return 1324
		end
		def initialize(data = nil)
			if( data == nil )
				super(1324)
			else
				super(1324, data)
			end
		end
	end

	class ParentMktSegmID < Quickfix::StringField
		def ParentMktSegmID.field
			return 1325
		end
		def initialize(data = nil)
			if( data == nil )
				super(1325)
			else
				super(1325, data)
			end
		end
	end

	class TradingSessionDesc < Quickfix::StringField
		def TradingSessionDesc.field
			return 1326
		end
		def initialize(data = nil)
			if( data == nil )
				super(1326)
			else
				super(1326, data)
			end
		end
	end

	class TradSesUpdateAction < Quickfix::CharField
		def TradSesUpdateAction.field
			return 1327
		end
		def initialize(data = nil)
			if( data == nil )
				super(1327)
			else
				super(1327, data)
			end
		end
	end

	class RejectText < Quickfix::StringField
		def RejectText.field
			return 1328
		end
		def initialize(data = nil)
			if( data == nil )
				super(1328)
			else
				super(1328, data)
			end
		end
	end

	class FeeMultiplier < Quickfix::DoubleField
		def FeeMultiplier.field
			return 1329
		end
		def initialize(data = nil)
			if( data == nil )
				super(1329)
			else
				super(1329, data)
			end
		end
	end

	class UnderlyingLegSymbol < Quickfix::StringField
		def UnderlyingLegSymbol.field
			return 1330
		end
		def initialize(data = nil)
			if( data == nil )
				super(1330)
			else
				super(1330, data)
			end
		end
	end

	class UnderlyingLegSymbolSfx < Quickfix::StringField
		def UnderlyingLegSymbolSfx.field
			return 1331
		end
		def initialize(data = nil)
			if( data == nil )
				super(1331)
			else
				super(1331, data)
			end
		end
	end

	class UnderlyingLegSecurityID < Quickfix::StringField
		def UnderlyingLegSecurityID.field
			return 1332
		end
		def initialize(data = nil)
			if( data == nil )
				super(1332)
			else
				super(1332, data)
			end
		end
	end

	class UnderlyingLegSecurityIDSource < Quickfix::StringField
		def UnderlyingLegSecurityIDSource.field
			return 1333
		end
		def initialize(data = nil)
			if( data == nil )
				super(1333)
			else
				super(1333, data)
			end
		end
	end

	class NoUnderlyingLegSecurityAltID < Quickfix::IntField
		def NoUnderlyingLegSecurityAltID.field
			return 1334
		end
		def initialize(data = nil)
			if( data == nil )
				super(1334)
			else
				super(1334, data)
			end
		end
	end

	class UnderlyingLegSecurityAltID < Quickfix::StringField
		def UnderlyingLegSecurityAltID.field
			return 1335
		end
		def initialize(data = nil)
			if( data == nil )
				super(1335)
			else
				super(1335, data)
			end
		end
	end

	class UnderlyingLegSecurityAltIDSource < Quickfix::StringField
		def UnderlyingLegSecurityAltIDSource.field
			return 1336
		end
		def initialize(data = nil)
			if( data == nil )
				super(1336)
			else
				super(1336, data)
			end
		end
	end

	class UnderlyingLegSecurityType < Quickfix::StringField
		def UnderlyingLegSecurityType.field
			return 1337
		end
		def initialize(data = nil)
			if( data == nil )
				super(1337)
			else
				super(1337, data)
			end
		end
	end

	class UnderlyingLegSecuritySubType < Quickfix::StringField
		def UnderlyingLegSecuritySubType.field
			return 1338
		end
		def initialize(data = nil)
			if( data == nil )
				super(1338)
			else
				super(1338, data)
			end
		end
	end

	class UnderlyingLegMaturityMonthYear < Quickfix::StringField
		def UnderlyingLegMaturityMonthYear.field
			return 1339
		end
		def initialize(data = nil)
			if( data == nil )
				super(1339)
			else
				super(1339, data)
			end
		end
	end

	class UnderlyingLegStrikePrice < Quickfix::DoubleField
		def UnderlyingLegStrikePrice.field
			return 1340
		end
		def initialize(data = nil)
			if( data == nil )
				super(1340)
			else
				super(1340, data)
			end
		end
	end

	class UnderlyingLegSecurityExchange < Quickfix::StringField
		def UnderlyingLegSecurityExchange.field
			return 1341
		end
		def initialize(data = nil)
			if( data == nil )
				super(1341)
			else
				super(1341, data)
			end
		end
	end

	class NoOfLegUnderlyings < Quickfix::IntField
		def NoOfLegUnderlyings.field
			return 1342
		end
		def initialize(data = nil)
			if( data == nil )
				super(1342)
			else
				super(1342, data)
			end
		end
	end

	class UnderlyingLegPutOrCall < Quickfix::IntField
		def UnderlyingLegPutOrCall.field
			return 1343
		end
		def initialize(data = nil)
			if( data == nil )
				super(1343)
			else
				super(1343, data)
			end
		end
	end

	class UnderlyingLegCFICode < Quickfix::StringField
		def UnderlyingLegCFICode.field
			return 1344
		end
		def initialize(data = nil)
			if( data == nil )
				super(1344)
			else
				super(1344, data)
			end
		end
	end

	class UnderlyingLegMaturityDate < Quickfix::StringField
		def UnderlyingLegMaturityDate.field
			return 1345
		end
		def initialize(data = nil)
			if( data == nil )
				super(1345)
			else
				super(1345, data)
			end
		end
	end

	class ApplReqID < Quickfix::StringField
		def ApplReqID.field
			return 1346
		end
		def initialize(data = nil)
			if( data == nil )
				super(1346)
			else
				super(1346, data)
			end
		end
	end

	class ApplReqType < Quickfix::IntField
		def ApplReqType.field
			return 1347
		end
		def initialize(data = nil)
			if( data == nil )
				super(1347)
			else
				super(1347, data)
			end
		end
	end

	class ApplResponseType < Quickfix::IntField
		def ApplResponseType.field
			return 1348
		end
		def initialize(data = nil)
			if( data == nil )
				super(1348)
			else
				super(1348, data)
			end
		end
	end

	class ApplTotalMessageCount < Quickfix::IntField
		def ApplTotalMessageCount.field
			return 1349
		end
		def initialize(data = nil)
			if( data == nil )
				super(1349)
			else
				super(1349, data)
			end
		end
	end

	class ApplLastSeqNum < Quickfix::IntField
		def ApplLastSeqNum.field
			return 1350
		end
		def initialize(data = nil)
			if( data == nil )
				super(1350)
			else
				super(1350, data)
			end
		end
	end

	class NoApplIDs < Quickfix::IntField
		def NoApplIDs.field
			return 1351
		end
		def initialize(data = nil)
			if( data == nil )
				super(1351)
			else
				super(1351, data)
			end
		end
	end

	class ApplResendFlag < Quickfix::BoolField
		def ApplResendFlag.field
			return 1352
		end
		def initialize(data = nil)
			if( data == nil )
				super(1352)
			else
				super(1352, data)
			end
		end
	end

	class ApplResponseID < Quickfix::StringField
		def ApplResponseID.field
			return 1353
		end
		def initialize(data = nil)
			if( data == nil )
				super(1353)
			else
				super(1353, data)
			end
		end
	end

	class ApplResponseError < Quickfix::IntField
		def ApplResponseError.field
			return 1354
		end
		def initialize(data = nil)
			if( data == nil )
				super(1354)
			else
				super(1354, data)
			end
		end
	end

	class RefApplID < Quickfix::StringField
		def RefApplID.field
			return 1355
		end
		def initialize(data = nil)
			if( data == nil )
				super(1355)
			else
				super(1355, data)
			end
		end
	end

	class ApplReportID < Quickfix::StringField
		def ApplReportID.field
			return 1356
		end
		def initialize(data = nil)
			if( data == nil )
				super(1356)
			else
				super(1356, data)
			end
		end
	end

	class RefApplLastSeqNum < Quickfix::IntField
		def RefApplLastSeqNum.field
			return 1357
		end
		def initialize(data = nil)
			if( data == nil )
				super(1357)
			else
				super(1357, data)
			end
		end
	end

	class LegPutOrCall < Quickfix::IntField
		def LegPutOrCall.field
			return 1358
		end
		def initialize(data = nil)
			if( data == nil )
				super(1358)
			else
				super(1358, data)
			end
		end
	end

	class TotNoFills < Quickfix::IntField
		def TotNoFills.field
			return 1361
		end
		def initialize(data = nil)
			if( data == nil )
				super(1361)
			else
				super(1361, data)
			end
		end
	end

	class NoFills < Quickfix::IntField
		def NoFills.field
			return 1362
		end
		def initialize(data = nil)
			if( data == nil )
				super(1362)
			else
				super(1362, data)
			end
		end
	end

	class FillExecID < Quickfix::StringField
		def FillExecID.field
			return 1363
		end
		def initialize(data = nil)
			if( data == nil )
				super(1363)
			else
				super(1363, data)
			end
		end
	end

	class FillPx < Quickfix::DoubleField
		def FillPx.field
			return 1364
		end
		def initialize(data = nil)
			if( data == nil )
				super(1364)
			else
				super(1364, data)
			end
		end
	end

	class FillQty < Quickfix::DoubleField
		def FillQty.field
			return 1365
		end
		def initialize(data = nil)
			if( data == nil )
				super(1365)
			else
				super(1365, data)
			end
		end
	end

	class LegAllocID < Quickfix::StringField
		def LegAllocID.field
			return 1366
		end
		def initialize(data = nil)
			if( data == nil )
				super(1366)
			else
				super(1366, data)
			end
		end
	end

	class LegAllocSettlCurrency < Quickfix::StringField
		def LegAllocSettlCurrency.field
			return 1367
		end
		def initialize(data = nil)
			if( data == nil )
				super(1367)
			else
				super(1367, data)
			end
		end
	end

	class TradSesEvent < Quickfix::IntField
		def TradSesEvent.field
			return 1368
		end
		def initialize(data = nil)
			if( data == nil )
				super(1368)
			else
				super(1368, data)
			end
		end
	end

	class MassActionReportID < Quickfix::StringField
		def MassActionReportID.field
			return 1369
		end
		def initialize(data = nil)
			if( data == nil )
				super(1369)
			else
				super(1369, data)
			end
		end
	end

	class NoNotAffectedOrders < Quickfix::IntField
		def NoNotAffectedOrders.field
			return 1370
		end
		def initialize(data = nil)
			if( data == nil )
				super(1370)
			else
				super(1370, data)
			end
		end
	end

	class NotAffectedOrderID < Quickfix::StringField
		def NotAffectedOrderID.field
			return 1371
		end
		def initialize(data = nil)
			if( data == nil )
				super(1371)
			else
				super(1371, data)
			end
		end
	end

	class NotAffOrigClOrdID < Quickfix::StringField
		def NotAffOrigClOrdID.field
			return 1372
		end
		def initialize(data = nil)
			if( data == nil )
				super(1372)
			else
				super(1372, data)
			end
		end
	end

	class MassActionType < Quickfix::IntField
		def MassActionType.field
			return 1373
		end
		def initialize(data = nil)
			if( data == nil )
				super(1373)
			else
				super(1373, data)
			end
		end
	end

	class MassActionScope < Quickfix::IntField
		def MassActionScope.field
			return 1374
		end
		def initialize(data = nil)
			if( data == nil )
				super(1374)
			else
				super(1374, data)
			end
		end
	end

	class MassActionResponse < Quickfix::IntField
		def MassActionResponse.field
			return 1375
		end
		def initialize(data = nil)
			if( data == nil )
				super(1375)
			else
				super(1375, data)
			end
		end
	end

	class MassActionRejectReason < Quickfix::IntField
		def MassActionRejectReason.field
			return 1376
		end
		def initialize(data = nil)
			if( data == nil )
				super(1376)
			else
				super(1376, data)
			end
		end
	end

	class MultilegModel < Quickfix::IntField
		def MultilegModel.field
			return 1377
		end
		def initialize(data = nil)
			if( data == nil )
				super(1377)
			else
				super(1377, data)
			end
		end
	end

	class MultilegPriceMethod < Quickfix::IntField
		def MultilegPriceMethod.field
			return 1378
		end
		def initialize(data = nil)
			if( data == nil )
				super(1378)
			else
				super(1378, data)
			end
		end
	end

	class LegVolatility < Quickfix::DoubleField
		def LegVolatility.field
			return 1379
		end
		def initialize(data = nil)
			if( data == nil )
				super(1379)
			else
				super(1379, data)
			end
		end
	end

	class DividendYield < Quickfix::DoubleField
		def DividendYield.field
			return 1380
		end
		def initialize(data = nil)
			if( data == nil )
				super(1380)
			else
				super(1380, data)
			end
		end
	end

	class LegDividendYield < Quickfix::DoubleField
		def LegDividendYield.field
			return 1381
		end
		def initialize(data = nil)
			if( data == nil )
				super(1381)
			else
				super(1381, data)
			end
		end
	end

	class CurrencyRatio < Quickfix::DoubleField
		def CurrencyRatio.field
			return 1382
		end
		def initialize(data = nil)
			if( data == nil )
				super(1382)
			else
				super(1382, data)
			end
		end
	end

	class LegCurrencyRatio < Quickfix::DoubleField
		def LegCurrencyRatio.field
			return 1383
		end
		def initialize(data = nil)
			if( data == nil )
				super(1383)
			else
				super(1383, data)
			end
		end
	end

	class LegExecInst < Quickfix::StringField
		def LegExecInst.field
			return 1384
		end
		def initialize(data = nil)
			if( data == nil )
				super(1384)
			else
				super(1384, data)
			end
		end
	end

	class ContingencyType < Quickfix::IntField
		def ContingencyType.field
			return 1385
		end
		def initialize(data = nil)
			if( data == nil )
				super(1385)
			else
				super(1385, data)
			end
		end
	end

	class ListRejectReason < Quickfix::IntField
		def ListRejectReason.field
			return 1386
		end
		def initialize(data = nil)
			if( data == nil )
				super(1386)
			else
				super(1386, data)
			end
		end
	end

	class NoTrdRepIndicators < Quickfix::IntField
		def NoTrdRepIndicators.field
			return 1387
		end
		def initialize(data = nil)
			if( data == nil )
				super(1387)
			else
				super(1387, data)
			end
		end
	end

	class TrdRepPartyRole < Quickfix::IntField
		def TrdRepPartyRole.field
			return 1388
		end
		def initialize(data = nil)
			if( data == nil )
				super(1388)
			else
				super(1388, data)
			end
		end
	end

	class TrdRepIndicator < Quickfix::BoolField
		def TrdRepIndicator.field
			return 1389
		end
		def initialize(data = nil)
			if( data == nil )
				super(1389)
			else
				super(1389, data)
			end
		end
	end

	class TradePublishIndicator < Quickfix::IntField
		def TradePublishIndicator.field
			return 1390
		end
		def initialize(data = nil)
			if( data == nil )
				super(1390)
			else
				super(1390, data)
			end
		end
	end

	class UnderlyingLegOptAttribute < Quickfix::CharField
		def UnderlyingLegOptAttribute.field
			return 1391
		end
		def initialize(data = nil)
			if( data == nil )
				super(1391)
			else
				super(1391, data)
			end
		end
	end

	class UnderlyingLegSecurityDesc < Quickfix::StringField
		def UnderlyingLegSecurityDesc.field
			return 1392
		end
		def initialize(data = nil)
			if( data == nil )
				super(1392)
			else
				super(1392, data)
			end
		end
	end

	class MarketReqID < Quickfix::StringField
		def MarketReqID.field
			return 1393
		end
		def initialize(data = nil)
			if( data == nil )
				super(1393)
			else
				super(1393, data)
			end
		end
	end

	class MarketReportID < Quickfix::StringField
		def MarketReportID.field
			return 1394
		end
		def initialize(data = nil)
			if( data == nil )
				super(1394)
			else
				super(1394, data)
			end
		end
	end

	class MarketUpdateAction < Quickfix::CharField
		def MarketUpdateAction.field
			return 1395
		end
		def initialize(data = nil)
			if( data == nil )
				super(1395)
			else
				super(1395, data)
			end
		end
	end

	class MarketSegmentDesc < Quickfix::StringField
		def MarketSegmentDesc.field
			return 1396
		end
		def initialize(data = nil)
			if( data == nil )
				super(1396)
			else
				super(1396, data)
			end
		end
	end

	class EncodedMktSegmDescLen < Quickfix::IntField
		def EncodedMktSegmDescLen.field
			return 1397
		end
		def initialize(data = nil)
			if( data == nil )
				super(1397)
			else
				super(1397, data)
			end
		end
	end

	class EncodedMktSegmDesc < Quickfix::StringField
		def EncodedMktSegmDesc.field
			return 1398
		end
		def initialize(data = nil)
			if( data == nil )
				super(1398)
			else
				super(1398, data)
			end
		end
	end

	class ApplNewSeqNum < Quickfix::IntField
		def ApplNewSeqNum.field
			return 1399
		end
		def initialize(data = nil)
			if( data == nil )
				super(1399)
			else
				super(1399, data)
			end
		end
	end

	class EncryptedPasswordMethod < Quickfix::IntField
		def EncryptedPasswordMethod.field
			return 1400
		end
		def initialize(data = nil)
			if( data == nil )
				super(1400)
			else
				super(1400, data)
			end
		end
	end

	class EncryptedPasswordLen < Quickfix::IntField
		def EncryptedPasswordLen.field
			return 1401
		end
		def initialize(data = nil)
			if( data == nil )
				super(1401)
			else
				super(1401, data)
			end
		end
	end

	class EncryptedPassword < Quickfix::StringField
		def EncryptedPassword.field
			return 1402
		end
		def initialize(data = nil)
			if( data == nil )
				super(1402)
			else
				super(1402, data)
			end
		end
	end

	class EncryptedNewPasswordLen < Quickfix::IntField
		def EncryptedNewPasswordLen.field
			return 1403
		end
		def initialize(data = nil)
			if( data == nil )
				super(1403)
			else
				super(1403, data)
			end
		end
	end

	class EncryptedNewPassword < Quickfix::StringField
		def EncryptedNewPassword.field
			return 1404
		end
		def initialize(data = nil)
			if( data == nil )
				super(1404)
			else
				super(1404, data)
			end
		end
	end

	class UnderlyingLegMaturityTime < Quickfix::StringField
		def UnderlyingLegMaturityTime.field
			return 1405
		end
		def initialize(data = nil)
			if( data == nil )
				super(1405)
			else
				super(1405, data)
			end
		end
	end

	class RefApplExtID < Quickfix::IntField
		def RefApplExtID.field
			return 1406
		end
		def initialize(data = nil)
			if( data == nil )
				super(1406)
			else
				super(1406, data)
			end
		end
	end

	class DefaultApplExtID < Quickfix::IntField
		def DefaultApplExtID.field
			return 1407
		end
		def initialize(data = nil)
			if( data == nil )
				super(1407)
			else
				super(1407, data)
			end
		end
	end

	class DefaultCstmApplVerID < Quickfix::StringField
		def DefaultCstmApplVerID.field
			return 1408
		end
		def initialize(data = nil)
			if( data == nil )
				super(1408)
			else
				super(1408, data)
			end
		end
	end

	class SessionStatus < Quickfix::IntField
		def SessionStatus.field
			return 1409
		end
		def initialize(data = nil)
			if( data == nil )
				super(1409)
			else
				super(1409, data)
			end
		end
	end

	class DefaultVerIndicator < Quickfix::BoolField
		def DefaultVerIndicator.field
			return 1410
		end
		def initialize(data = nil)
			if( data == nil )
				super(1410)
			else
				super(1410, data)
			end
		end
	end

	class Nested4PartySubIDType < Quickfix::IntField
		def Nested4PartySubIDType.field
			return 1411
		end
		def initialize(data = nil)
			if( data == nil )
				super(1411)
			else
				super(1411, data)
			end
		end
	end

	class Nested4PartySubID < Quickfix::StringField
		def Nested4PartySubID.field
			return 1412
		end
		def initialize(data = nil)
			if( data == nil )
				super(1412)
			else
				super(1412, data)
			end
		end
	end

	class NoNested4PartySubIDs < Quickfix::IntField
		def NoNested4PartySubIDs.field
			return 1413
		end
		def initialize(data = nil)
			if( data == nil )
				super(1413)
			else
				super(1413, data)
			end
		end
	end

	class NoNested4PartyIDs < Quickfix::IntField
		def NoNested4PartyIDs.field
			return 1414
		end
		def initialize(data = nil)
			if( data == nil )
				super(1414)
			else
				super(1414, data)
			end
		end
	end

	class Nested4PartyID < Quickfix::StringField
		def Nested4PartyID.field
			return 1415
		end
		def initialize(data = nil)
			if( data == nil )
				super(1415)
			else
				super(1415, data)
			end
		end
	end

	class Nested4PartyIDSource < Quickfix::CharField
		def Nested4PartyIDSource.field
			return 1416
		end
		def initialize(data = nil)
			if( data == nil )
				super(1416)
			else
				super(1416, data)
			end
		end
	end

	class Nested4PartyRole < Quickfix::IntField
		def Nested4PartyRole.field
			return 1417
		end
		def initialize(data = nil)
			if( data == nil )
				super(1417)
			else
				super(1417, data)
			end
		end
	end

	class LegLastQty < Quickfix::DoubleField
		def LegLastQty.field
			return 1418
		end
		def initialize(data = nil)
			if( data == nil )
				super(1418)
			else
				super(1418, data)
			end
		end
	end

	class UnderlyingExerciseStyle < Quickfix::IntField
		def UnderlyingExerciseStyle.field
			return 1419
		end
		def initialize(data = nil)
			if( data == nil )
				super(1419)
			else
				super(1419, data)
			end
		end
	end

	class LegExerciseStyle < Quickfix::IntField
		def LegExerciseStyle.field
			return 1420
		end
		def initialize(data = nil)
			if( data == nil )
				super(1420)
			else
				super(1420, data)
			end
		end
	end

	class LegPriceUnitOfMeasure < Quickfix::StringField
		def LegPriceUnitOfMeasure.field
			return 1421
		end
		def initialize(data = nil)
			if( data == nil )
				super(1421)
			else
				super(1421, data)
			end
		end
	end

	class LegPriceUnitOfMeasureQty < Quickfix::DoubleField
		def LegPriceUnitOfMeasureQty.field
			return 1422
		end
		def initialize(data = nil)
			if( data == nil )
				super(1422)
			else
				super(1422, data)
			end
		end
	end

	class UnderlyingUnitOfMeasureQty < Quickfix::DoubleField
		def UnderlyingUnitOfMeasureQty.field
			return 1423
		end
		def initialize(data = nil)
			if( data == nil )
				super(1423)
			else
				super(1423, data)
			end
		end
	end

	class UnderlyingPriceUnitOfMeasure < Quickfix::StringField
		def UnderlyingPriceUnitOfMeasure.field
			return 1424
		end
		def initialize(data = nil)
			if( data == nil )
				super(1424)
			else
				super(1424, data)
			end
		end
	end

	class UnderlyingPriceUnitOfMeasureQty < Quickfix::DoubleField
		def UnderlyingPriceUnitOfMeasureQty.field
			return 1425
		end
		def initialize(data = nil)
			if( data == nil )
				super(1425)
			else
				super(1425, data)
			end
		end
	end

	class ApplReportType < Quickfix::IntField
		def ApplReportType.field
			return 1426
		end
		def initialize(data = nil)
			if( data == nil )
				super(1426)
			else
				super(1426, data)
			end
		end
	end

	class HaltReasonInt < Quickfix::IntField
		def HaltReasonInt.field
			return 327
		end
		def initialize(data = nil)
			if( data == nil )
				super(327)
			else
				super(327, data)
			end
		end
	end

	class SideLastQty < Quickfix::IntField
		def SideLastQty.field
			return 1009
		end
		def initialize(data = nil)
			if( data == nil )
				super(1009)
			else
				super(1009, data)
			end
		end
	end

	class UnderlyingInstrumentPartyID < Quickfix::StringField
		def UnderlyingInstrumentPartyID.field
			return 1059
		end
		def initialize(data = nil)
			if( data == nil )
				super(1059)
			else
				super(1059, data)
			end
		end
	end

	class UnderlyingInstrumentPartyIDSource < Quickfix::CharField
		def UnderlyingInstrumentPartyIDSource.field
			return 1060
		end
		def initialize(data = nil)
			if( data == nil )
				super(1060)
			else
				super(1060, data)
			end
		end
	end

	class UnderlyingInstrumentPartyRole < Quickfix::IntField
		def UnderlyingInstrumentPartyRole.field
			return 1061
		end
		def initialize(data = nil)
			if( data == nil )
				super(1061)
			else
				super(1061, data)
			end
		end
	end

	class UnderlyingInstrumentPartySubID < Quickfix::StringField
		def UnderlyingInstrumentPartySubID.field
			return 1063
		end
		def initialize(data = nil)
			if( data == nil )
				super(1063)
			else
				super(1063, data)
			end
		end
	end

	class UnderlyingInstrumentPartySubIDType < Quickfix::IntField
		def UnderlyingInstrumentPartySubIDType.field
			return 1064
		end
		def initialize(data = nil)
			if( data == nil )
				super(1064)
			else
				super(1064, data)
			end
		end
	end

	class OptPayoutAmount < Quickfix::DoubleField
		def OptPayoutAmount.field
			return 1195
		end
		def initialize(data = nil)
			if( data == nil )
				super(1195)
			else
				super(1195, data)
			end
		end
	end

	class ValuationMethod < Quickfix::StringField
		def ValuationMethod.field
			return 1197
		end
		def initialize(data = nil)
			if( data == nil )
				super(1197)
			else
				super(1197, data)
			end
		end
	end

	class DerivativeValuationMethod < Quickfix::StringField
		def DerivativeValuationMethod.field
			return 1319
		end
		def initialize(data = nil)
			if( data == nil )
				super(1319)
			else
				super(1319, data)
			end
		end
	end

	class SideExecID < Quickfix::StringField
		def SideExecID.field
			return 1427
		end
		def initialize(data = nil)
			if( data == nil )
				super(1427)
			else
				super(1427, data)
			end
		end
	end

	class OrderDelay < Quickfix::IntField
		def OrderDelay.field
			return 1428
		end
		def initialize(data = nil)
			if( data == nil )
				super(1428)
			else
				super(1428, data)
			end
		end
	end

	class OrderDelayUnit < Quickfix::IntField
		def OrderDelayUnit.field
			return 1429
		end
		def initialize(data = nil)
			if( data == nil )
				super(1429)
			else
				super(1429, data)
			end
		end
	end

	class VenueType < Quickfix::CharField
		def VenueType.field
			return 1430
		end
		def initialize(data = nil)
			if( data == nil )
				super(1430)
			else
				super(1430, data)
			end
		end
	end

	class RefOrdIDReason < Quickfix::IntField
		def RefOrdIDReason.field
			return 1431
		end
		def initialize(data = nil)
			if( data == nil )
				super(1431)
			else
				super(1431, data)
			end
		end
	end

	class OrigCustOrderCapacity < Quickfix::IntField
		def OrigCustOrderCapacity.field
			return 1432
		end
		def initialize(data = nil)
			if( data == nil )
				super(1432)
			else
				super(1432, data)
			end
		end
	end

	class RefApplReqID < Quickfix::StringField
		def RefApplReqID.field
			return 1433
		end
		def initialize(data = nil)
			if( data == nil )
				super(1433)
			else
				super(1433, data)
			end
		end
	end

	class ModelType < Quickfix::IntField
		def ModelType.field
			return 1434
		end
		def initialize(data = nil)
			if( data == nil )
				super(1434)
			else
				super(1434, data)
			end
		end
	end

	class ContractMultiplierUnit < Quickfix::IntField
		def ContractMultiplierUnit.field
			return 1435
		end
		def initialize(data = nil)
			if( data == nil )
				super(1435)
			else
				super(1435, data)
			end
		end
	end

	class LegContractMultiplierUnit < Quickfix::IntField
		def LegContractMultiplierUnit.field
			return 1436
		end
		def initialize(data = nil)
			if( data == nil )
				super(1436)
			else
				super(1436, data)
			end
		end
	end

	class UnderlyingContractMultiplierUnit < Quickfix::IntField
		def UnderlyingContractMultiplierUnit.field
			return 1437
		end
		def initialize(data = nil)
			if( data == nil )
				super(1437)
			else
				super(1437, data)
			end
		end
	end

	class DerivativeContractMultiplierUnit < Quickfix::IntField
		def DerivativeContractMultiplierUnit.field
			return 1438
		end
		def initialize(data = nil)
			if( data == nil )
				super(1438)
			else
				super(1438, data)
			end
		end
	end

	class FlowScheduleType < Quickfix::IntField
		def FlowScheduleType.field
			return 1439
		end
		def initialize(data = nil)
			if( data == nil )
				super(1439)
			else
				super(1439, data)
			end
		end
	end

	class LegFlowScheduleType < Quickfix::IntField
		def LegFlowScheduleType.field
			return 1440
		end
		def initialize(data = nil)
			if( data == nil )
				super(1440)
			else
				super(1440, data)
			end
		end
	end

	class UnderlyingFlowScheduleType < Quickfix::IntField
		def UnderlyingFlowScheduleType.field
			return 1441
		end
		def initialize(data = nil)
			if( data == nil )
				super(1441)
			else
				super(1441, data)
			end
		end
	end

	class DerivativeFlowScheduleType < Quickfix::IntField
		def DerivativeFlowScheduleType.field
			return 1442
		end
		def initialize(data = nil)
			if( data == nil )
				super(1442)
			else
				super(1442, data)
			end
		end
	end

	class FillLiquidityInd < Quickfix::IntField
		def FillLiquidityInd.field
			return 1443
		end
		def initialize(data = nil)
			if( data == nil )
				super(1443)
			else
				super(1443, data)
			end
		end
	end

	class SideLiquidityInd < Quickfix::IntField
		def SideLiquidityInd.field
			return 1444
		end
		def initialize(data = nil)
			if( data == nil )
				super(1444)
			else
				super(1444, data)
			end
		end
	end

	class NoRateSources < Quickfix::IntField
		def NoRateSources.field
			return 1445
		end
		def initialize(data = nil)
			if( data == nil )
				super(1445)
			else
				super(1445, data)
			end
		end
	end

	class RateSource < Quickfix::IntField
		def RateSource.field
			return 1446
		end
		def initialize(data = nil)
			if( data == nil )
				super(1446)
			else
				super(1446, data)
			end
		end
	end

	class RateSourceType < Quickfix::IntField
		def RateSourceType.field
			return 1447
		end
		def initialize(data = nil)
			if( data == nil )
				super(1447)
			else
				super(1447, data)
			end
		end
	end

	class ReferencePage < Quickfix::StringField
		def ReferencePage.field
			return 1448
		end
		def initialize(data = nil)
			if( data == nil )
				super(1448)
			else
				super(1448, data)
			end
		end
	end

	class RestructuringType < Quickfix::StringField
		def RestructuringType.field
			return 1449
		end
		def initialize(data = nil)
			if( data == nil )
				super(1449)
			else
				super(1449, data)
			end
		end
	end

	class Seniority < Quickfix::StringField
		def Seniority.field
			return 1450
		end
		def initialize(data = nil)
			if( data == nil )
				super(1450)
			else
				super(1450, data)
			end
		end
	end

	class NotionalPercentageOutstanding < Quickfix::DoubleField
		def NotionalPercentageOutstanding.field
			return 1451
		end
		def initialize(data = nil)
			if( data == nil )
				super(1451)
			else
				super(1451, data)
			end
		end
	end

	class OriginalNotionalPercentageOutstanding < Quickfix::DoubleField
		def OriginalNotionalPercentageOutstanding.field
			return 1452
		end
		def initialize(data = nil)
			if( data == nil )
				super(1452)
			else
				super(1452, data)
			end
		end
	end

	class UnderlyingRestructuringType < Quickfix::StringField
		def UnderlyingRestructuringType.field
			return 1453
		end
		def initialize(data = nil)
			if( data == nil )
				super(1453)
			else
				super(1453, data)
			end
		end
	end

	class UnderlyingSeniority < Quickfix::StringField
		def UnderlyingSeniority.field
			return 1454
		end
		def initialize(data = nil)
			if( data == nil )
				super(1454)
			else
				super(1454, data)
			end
		end
	end

	class UnderlyingNotionalPercentageOutstanding < Quickfix::DoubleField
		def UnderlyingNotionalPercentageOutstanding.field
			return 1455
		end
		def initialize(data = nil)
			if( data == nil )
				super(1455)
			else
				super(1455, data)
			end
		end
	end

	class UnderlyingOriginalNotionalPercentageOutstanding < Quickfix::DoubleField
		def UnderlyingOriginalNotionalPercentageOutstanding.field
			return 1456
		end
		def initialize(data = nil)
			if( data == nil )
				super(1456)
			else
				super(1456, data)
			end
		end
	end

	class AttachmentPoint < Quickfix::DoubleField
		def AttachmentPoint.field
			return 1457
		end
		def initialize(data = nil)
			if( data == nil )
				super(1457)
			else
				super(1457, data)
			end
		end
	end

	class DetachmentPoint < Quickfix::DoubleField
		def DetachmentPoint.field
			return 1458
		end
		def initialize(data = nil)
			if( data == nil )
				super(1458)
			else
				super(1458, data)
			end
		end
	end

	class UnderlyingAttachmentPoint < Quickfix::DoubleField
		def UnderlyingAttachmentPoint.field
			return 1459
		end
		def initialize(data = nil)
			if( data == nil )
				super(1459)
			else
				super(1459, data)
			end
		end
	end

	class UnderlyingDetachmentPoint < Quickfix::DoubleField
		def UnderlyingDetachmentPoint.field
			return 1460
		end
		def initialize(data = nil)
			if( data == nil )
				super(1460)
			else
				super(1460, data)
			end
		end
	end

	class NoTargetPartyIDs < Quickfix::IntField
		def NoTargetPartyIDs.field
			return 1461
		end
		def initialize(data = nil)
			if( data == nil )
				super(1461)
			else
				super(1461, data)
			end
		end
	end

	class TargetPartyID < Quickfix::StringField
		def TargetPartyID.field
			return 1462
		end
		def initialize(data = nil)
			if( data == nil )
				super(1462)
			else
				super(1462, data)
			end
		end
	end

	class TargetPartyIDSource < Quickfix::CharField
		def TargetPartyIDSource.field
			return 1463
		end
		def initialize(data = nil)
			if( data == nil )
				super(1463)
			else
				super(1463, data)
			end
		end
	end

	class TargetPartyRole < Quickfix::IntField
		def TargetPartyRole.field
			return 1464
		end
		def initialize(data = nil)
			if( data == nil )
				super(1464)
			else
				super(1464, data)
			end
		end
	end

	class SecurityListID < Quickfix::StringField
		def SecurityListID.field
			return 1465
		end
		def initialize(data = nil)
			if( data == nil )
				super(1465)
			else
				super(1465, data)
			end
		end
	end

	class SecurityListRefID < Quickfix::StringField
		def SecurityListRefID.field
			return 1466
		end
		def initialize(data = nil)
			if( data == nil )
				super(1466)
			else
				super(1466, data)
			end
		end
	end

	class SecurityListDesc < Quickfix::StringField
		def SecurityListDesc.field
			return 1467
		end
		def initialize(data = nil)
			if( data == nil )
				super(1467)
			else
				super(1467, data)
			end
		end
	end

	class EncodedSecurityListDescLen < Quickfix::IntField
		def EncodedSecurityListDescLen.field
			return 1468
		end
		def initialize(data = nil)
			if( data == nil )
				super(1468)
			else
				super(1468, data)
			end
		end
	end

	class EncodedSecurityListDesc < Quickfix::StringField
		def EncodedSecurityListDesc.field
			return 1469
		end
		def initialize(data = nil)
			if( data == nil )
				super(1469)
			else
				super(1469, data)
			end
		end
	end

	class SecurityListType < Quickfix::IntField
		def SecurityListType.field
			return 1470
		end
		def initialize(data = nil)
			if( data == nil )
				super(1470)
			else
				super(1470, data)
			end
		end
	end

	class SecurityListTypeSource < Quickfix::IntField
		def SecurityListTypeSource.field
			return 1471
		end
		def initialize(data = nil)
			if( data == nil )
				super(1471)
			else
				super(1471, data)
			end
		end
	end

	class NewsID < Quickfix::StringField
		def NewsID.field
			return 1472
		end
		def initialize(data = nil)
			if( data == nil )
				super(1472)
			else
				super(1472, data)
			end
		end
	end

	class NewsCategory < Quickfix::IntField
		def NewsCategory.field
			return 1473
		end
		def initialize(data = nil)
			if( data == nil )
				super(1473)
			else
				super(1473, data)
			end
		end
	end

	class LanguageCode < Quickfix::StringField
		def LanguageCode.field
			return 1474
		end
		def initialize(data = nil)
			if( data == nil )
				super(1474)
			else
				super(1474, data)
			end
		end
	end

	class NoNewsRefIDs < Quickfix::IntField
		def NoNewsRefIDs.field
			return 1475
		end
		def initialize(data = nil)
			if( data == nil )
				super(1475)
			else
				super(1475, data)
			end
		end
	end

	class NewsRefID < Quickfix::StringField
		def NewsRefID.field
			return 1476
		end
		def initialize(data = nil)
			if( data == nil )
				super(1476)
			else
				super(1476, data)
			end
		end
	end

	class NewsRefType < Quickfix::IntField
		def NewsRefType.field
			return 1477
		end
		def initialize(data = nil)
			if( data == nil )
				super(1477)
			else
				super(1477, data)
			end
		end
	end

	class StrikePriceDeterminationMethod < Quickfix::IntField
		def StrikePriceDeterminationMethod.field
			return 1478
		end
		def initialize(data = nil)
			if( data == nil )
				super(1478)
			else
				super(1478, data)
			end
		end
	end

	class StrikePriceBoundaryMethod < Quickfix::IntField
		def StrikePriceBoundaryMethod.field
			return 1479
		end
		def initialize(data = nil)
			if( data == nil )
				super(1479)
			else
				super(1479, data)
			end
		end
	end

	class StrikePriceBoundaryPrecision < Quickfix::DoubleField
		def StrikePriceBoundaryPrecision.field
			return 1480
		end
		def initialize(data = nil)
			if( data == nil )
				super(1480)
			else
				super(1480, data)
			end
		end
	end

	class UnderlyingPriceDeterminationMethod < Quickfix::IntField
		def UnderlyingPriceDeterminationMethod.field
			return 1481
		end
		def initialize(data = nil)
			if( data == nil )
				super(1481)
			else
				super(1481, data)
			end
		end
	end

	class OptPayoutType < Quickfix::IntField
		def OptPayoutType.field
			return 1482
		end
		def initialize(data = nil)
			if( data == nil )
				super(1482)
			else
				super(1482, data)
			end
		end
	end

	class NoComplexEvents < Quickfix::IntField
		def NoComplexEvents.field
			return 1483
		end
		def initialize(data = nil)
			if( data == nil )
				super(1483)
			else
				super(1483, data)
			end
		end
	end

	class ComplexEventType < Quickfix::IntField
		def ComplexEventType.field
			return 1484
		end
		def initialize(data = nil)
			if( data == nil )
				super(1484)
			else
				super(1484, data)
			end
		end
	end

	class ComplexOptPayoutAmount < Quickfix::DoubleField
		def ComplexOptPayoutAmount.field
			return 1485
		end
		def initialize(data = nil)
			if( data == nil )
				super(1485)
			else
				super(1485, data)
			end
		end
	end

	class ComplexEventPrice < Quickfix::DoubleField
		def ComplexEventPrice.field
			return 1486
		end
		def initialize(data = nil)
			if( data == nil )
				super(1486)
			else
				super(1486, data)
			end
		end
	end

	class ComplexEventPriceBoundaryMethod < Quickfix::IntField
		def ComplexEventPriceBoundaryMethod.field
			return 1487
		end
		def initialize(data = nil)
			if( data == nil )
				super(1487)
			else
				super(1487, data)
			end
		end
	end

	class ComplexEventPriceBoundaryPrecision < Quickfix::DoubleField
		def ComplexEventPriceBoundaryPrecision.field
			return 1488
		end
		def initialize(data = nil)
			if( data == nil )
				super(1488)
			else
				super(1488, data)
			end
		end
	end

	class ComplexEventPriceTimeType < Quickfix::IntField
		def ComplexEventPriceTimeType.field
			return 1489
		end
		def initialize(data = nil)
			if( data == nil )
				super(1489)
			else
				super(1489, data)
			end
		end
	end

	class ComplexEventCondition < Quickfix::IntField
		def ComplexEventCondition.field
			return 1490
		end
		def initialize(data = nil)
			if( data == nil )
				super(1490)
			else
				super(1490, data)
			end
		end
	end

	class NoComplexEventDates < Quickfix::IntField
		def NoComplexEventDates.field
			return 1491
		end
		def initialize(data = nil)
			if( data == nil )
				super(1491)
			else
				super(1491, data)
			end
		end
	end

	class ComplexEventStartDate < Quickfix::UtcTimeStampField
		def ComplexEventStartDate.field
			return 1492
		end
		def initialize(data = nil)
			if( data == nil )
				super(1492)
			else
				super(1492, data)
			end
		end
	end

	class ComplexEventEndDate < Quickfix::UtcTimeStampField
		def ComplexEventEndDate.field
			return 1493
		end
		def initialize(data = nil)
			if( data == nil )
				super(1493)
			else
				super(1493, data)
			end
		end
	end

	class NoComplexEventTimes < Quickfix::IntField
		def NoComplexEventTimes.field
			return 1494
		end
		def initialize(data = nil)
			if( data == nil )
				super(1494)
			else
				super(1494, data)
			end
		end
	end

	class ComplexEventStartTime < Quickfix::UtcTimeOnlyField
		def ComplexEventStartTime.field
			return 1495
		end
		def initialize(data = nil)
			if( data == nil )
				super(1495)
			else
				super(1495, data)
			end
		end
	end

	class ComplexEventEndTime < Quickfix::UtcTimeOnlyField
		def ComplexEventEndTime.field
			return 1496
		end
		def initialize(data = nil)
			if( data == nil )
				super(1496)
			else
				super(1496, data)
			end
		end
	end

	class StreamAsgnReqID < Quickfix::StringField
		def StreamAsgnReqID.field
			return 1497
		end
		def initialize(data = nil)
			if( data == nil )
				super(1497)
			else
				super(1497, data)
			end
		end
	end

	class StreamAsgnReqType < Quickfix::IntField
		def StreamAsgnReqType.field
			return 1498
		end
		def initialize(data = nil)
			if( data == nil )
				super(1498)
			else
				super(1498, data)
			end
		end
	end

	class NoAsgnReqs < Quickfix::IntField
		def NoAsgnReqs.field
			return 1499
		end
		def initialize(data = nil)
			if( data == nil )
				super(1499)
			else
				super(1499, data)
			end
		end
	end

	class MDStreamID < Quickfix::StringField
		def MDStreamID.field
			return 1500
		end
		def initialize(data = nil)
			if( data == nil )
				super(1500)
			else
				super(1500, data)
			end
		end
	end

	class StreamAsgnRptID < Quickfix::StringField
		def StreamAsgnRptID.field
			return 1501
		end
		def initialize(data = nil)
			if( data == nil )
				super(1501)
			else
				super(1501, data)
			end
		end
	end

	class StreamAsgnRejReason < Quickfix::IntField
		def StreamAsgnRejReason.field
			return 1502
		end
		def initialize(data = nil)
			if( data == nil )
				super(1502)
			else
				super(1502, data)
			end
		end
	end

	class StreamAsgnAckType < Quickfix::IntField
		def StreamAsgnAckType.field
			return 1503
		end
		def initialize(data = nil)
			if( data == nil )
				super(1503)
			else
				super(1503, data)
			end
		end
	end

	class RelSymTransactTime < Quickfix::UtcTimeStampField
		def RelSymTransactTime.field
			return 1504
		end
		def initialize(data = nil)
			if( data == nil )
				super(1504)
			else
				super(1504, data)
			end
		end
	end

	class StreamAsgnType < Quickfix::IntField
		def StreamAsgnType.field
			return 1617
		end
		def initialize(data = nil)
			if( data == nil )
				super(1617)
			else
				super(1617, data)
			end
		end
	end

end
