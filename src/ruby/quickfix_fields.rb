module Quickfix
	class Account < Quickfix::StringField
		def initialize
			super(1)
		end

		def initialize(data)
			super(1, data)
		end
	end

	class AdvId < Quickfix::StringField
		def initialize
			super(2)
		end

		def initialize(data)
			super(2, data)
		end
	end

	class AdvRefID < Quickfix::StringField
		def initialize
			super(3)
		end

		def initialize(data)
			super(3, data)
		end
	end

	class AdvSide < Quickfix::CharField
		def initialize
			super(4)
		end

		def initialize(data)
			super(4, data)
		end
	end

	class AdvTransType < Quickfix::StringField
		def initialize
			super(5)
		end

		def initialize(data)
			super(5, data)
		end
	end

	class AvgPx < Quickfix::DoubleField
		def initialize
			super(6)
		end

		def initialize(data)
			super(6, data)
		end
	end

	class BeginSeqNo < Quickfix::IntField
		def initialize
			super(7)
		end

		def initialize(data)
			super(7, data)
		end
	end

	class BeginString < Quickfix::StringField
		def initialize
			super(8)
		end

		def initialize(data)
			super(8, data)
		end
	end

	class BodyLength < Quickfix::IntField
		def initialize
			super(9)
		end

		def initialize(data)
			super(9, data)
		end
	end

	class CheckSum < Quickfix::StringField
		def initialize
			super(10)
		end

		def initialize(data)
			super(10, data)
		end
	end

	class ClOrdID < Quickfix::StringField
		def initialize
			super(11)
		end

		def initialize(data)
			super(11, data)
		end
	end

	class Commission < Quickfix::DoubleField
		def initialize
			super(12)
		end

		def initialize(data)
			super(12, data)
		end
	end

	class CommType < Quickfix::CharField
		def initialize
			super(13)
		end

		def initialize(data)
			super(13, data)
		end
	end

	class CumQty < Quickfix::DoubleField
		def initialize
			super(14)
		end

		def initialize(data)
			super(14, data)
		end
	end

	class Currency < Quickfix::StringField
		def initialize
			super(15)
		end

		def initialize(data)
			super(15, data)
		end
	end

	class EndSeqNo < Quickfix::IntField
		def initialize
			super(16)
		end

		def initialize(data)
			super(16, data)
		end
	end

	class ExecID < Quickfix::StringField
		def initialize
			super(17)
		end

		def initialize(data)
			super(17, data)
		end
	end

	class ExecInst < Quickfix::StringField
		def initialize
			super(18)
		end

		def initialize(data)
			super(18, data)
		end
	end

	class ExecRefID < Quickfix::StringField
		def initialize
			super(19)
		end

		def initialize(data)
			super(19, data)
		end
	end

	class HandlInst < Quickfix::CharField
		def initialize
			super(21)
		end

		def initialize(data)
			super(21, data)
		end
	end

	class SecurityIDSource < Quickfix::StringField
		def initialize
			super(22)
		end

		def initialize(data)
			super(22, data)
		end
	end

	class IOIid < Quickfix::StringField
		def initialize
			super(23)
		end

		def initialize(data)
			super(23, data)
		end
	end

	class IOIQltyInd < Quickfix::CharField
		def initialize
			super(25)
		end

		def initialize(data)
			super(25, data)
		end
	end

	class IOIRefID < Quickfix::StringField
		def initialize
			super(26)
		end

		def initialize(data)
			super(26, data)
		end
	end

	class IOIQty < Quickfix::StringField
		def initialize
			super(27)
		end

		def initialize(data)
			super(27, data)
		end
	end

	class IOITransType < Quickfix::CharField
		def initialize
			super(28)
		end

		def initialize(data)
			super(28, data)
		end
	end

	class LastCapacity < Quickfix::CharField
		def initialize
			super(29)
		end

		def initialize(data)
			super(29, data)
		end
	end

	class LastMkt < Quickfix::StringField
		def initialize
			super(30)
		end

		def initialize(data)
			super(30, data)
		end
	end

	class LastPx < Quickfix::DoubleField
		def initialize
			super(31)
		end

		def initialize(data)
			super(31, data)
		end
	end

	class LastQty < Quickfix::DoubleField
		def initialize
			super(32)
		end

		def initialize(data)
			super(32, data)
		end
	end

	class LinesOfText < Quickfix::IntField
		def initialize
			super(33)
		end

		def initialize(data)
			super(33, data)
		end
	end

	class MsgSeqNum < Quickfix::IntField
		def initialize
			super(34)
		end

		def initialize(data)
			super(34, data)
		end
	end

	class MsgType < Quickfix::StringField
		def initialize
			super(35)
		end

		def initialize(data)
			super(35, data)
		end
	end

	class NewSeqNo < Quickfix::IntField
		def initialize
			super(36)
		end

		def initialize(data)
			super(36, data)
		end
	end

	class OrderID < Quickfix::StringField
		def initialize
			super(37)
		end

		def initialize(data)
			super(37, data)
		end
	end

	class OrderQty < Quickfix::DoubleField
		def initialize
			super(38)
		end

		def initialize(data)
			super(38, data)
		end
	end

	class OrdStatus < Quickfix::CharField
		def initialize
			super(39)
		end

		def initialize(data)
			super(39, data)
		end
	end

	class OrdType < Quickfix::CharField
		def initialize
			super(40)
		end

		def initialize(data)
			super(40, data)
		end
	end

	class OrigClOrdID < Quickfix::StringField
		def initialize
			super(41)
		end

		def initialize(data)
			super(41, data)
		end
	end

	class OrigTime < Quickfix::UtcTimeStampField
		def initialize
			super(42)
		end

		def initialize(data)
			super(42, data)
		end
	end

	class PossDupFlag < Quickfix::BoolField
		def initialize
			super(43)
		end

		def initialize(data)
			super(43, data)
		end
	end

	class Price < Quickfix::DoubleField
		def initialize
			super(44)
		end

		def initialize(data)
			super(44, data)
		end
	end

	class RefSeqNum < Quickfix::IntField
		def initialize
			super(45)
		end

		def initialize(data)
			super(45, data)
		end
	end

	class SecurityID < Quickfix::StringField
		def initialize
			super(48)
		end

		def initialize(data)
			super(48, data)
		end
	end

	class SenderCompID < Quickfix::StringField
		def initialize
			super(49)
		end

		def initialize(data)
			super(49, data)
		end
	end

	class SenderSubID < Quickfix::StringField
		def initialize
			super(50)
		end

		def initialize(data)
			super(50, data)
		end
	end

	class SendingTime < Quickfix::UtcTimeStampField
		def initialize
			super(52)
		end

		def initialize(data)
			super(52, data)
		end
	end

	class Quantity < Quickfix::DoubleField
		def initialize
			super(53)
		end

		def initialize(data)
			super(53, data)
		end
	end

	class Side < Quickfix::CharField
		def initialize
			super(54)
		end

		def initialize(data)
			super(54, data)
		end
	end

	class Symbol < Quickfix::StringField
		def initialize
			super(55)
		end

		def initialize(data)
			super(55, data)
		end
	end

	class TargetCompID < Quickfix::StringField
		def initialize
			super(56)
		end

		def initialize(data)
			super(56, data)
		end
	end

	class TargetSubID < Quickfix::StringField
		def initialize
			super(57)
		end

		def initialize(data)
			super(57, data)
		end
	end

	class Text < Quickfix::StringField
		def initialize
			super(58)
		end

		def initialize(data)
			super(58, data)
		end
	end

	class TimeInForce < Quickfix::CharField
		def initialize
			super(59)
		end

		def initialize(data)
			super(59, data)
		end
	end

	class TransactTime < Quickfix::UtcTimeStampField
		def initialize
			super(60)
		end

		def initialize(data)
			super(60, data)
		end
	end

	class Urgency < Quickfix::CharField
		def initialize
			super(61)
		end

		def initialize(data)
			super(61, data)
		end
	end

	class ValidUntilTime < Quickfix::UtcTimeStampField
		def initialize
			super(62)
		end

		def initialize(data)
			super(62, data)
		end
	end

	class SettlType < Quickfix::CharField
		def initialize
			super(63)
		end

		def initialize(data)
			super(63, data)
		end
	end

	class SettlDate < Quickfix::StringField
		def initialize
			super(64)
		end

		def initialize(data)
			super(64, data)
		end
	end

	class SymbolSfx < Quickfix::StringField
		def initialize
			super(65)
		end

		def initialize(data)
			super(65, data)
		end
	end

	class ListID < Quickfix::StringField
		def initialize
			super(66)
		end

		def initialize(data)
			super(66, data)
		end
	end

	class ListSeqNo < Quickfix::IntField
		def initialize
			super(67)
		end

		def initialize(data)
			super(67, data)
		end
	end

	class TotNoOrders < Quickfix::IntField
		def initialize
			super(68)
		end

		def initialize(data)
			super(68, data)
		end
	end

	class ListExecInst < Quickfix::StringField
		def initialize
			super(69)
		end

		def initialize(data)
			super(69, data)
		end
	end

	class AllocID < Quickfix::StringField
		def initialize
			super(70)
		end

		def initialize(data)
			super(70, data)
		end
	end

	class AllocTransType < Quickfix::CharField
		def initialize
			super(71)
		end

		def initialize(data)
			super(71, data)
		end
	end

	class RefAllocID < Quickfix::StringField
		def initialize
			super(72)
		end

		def initialize(data)
			super(72, data)
		end
	end

	class NoOrders < Quickfix::IntField
		def initialize
			super(73)
		end

		def initialize(data)
			super(73, data)
		end
	end

	class AvgPxPrecision < Quickfix::IntField
		def initialize
			super(74)
		end

		def initialize(data)
			super(74, data)
		end
	end

	class TradeDate < Quickfix::StringField
		def initialize
			super(75)
		end

		def initialize(data)
			super(75, data)
		end
	end

	class PositionEffect < Quickfix::CharField
		def initialize
			super(77)
		end

		def initialize(data)
			super(77, data)
		end
	end

	class NoAllocs < Quickfix::IntField
		def initialize
			super(78)
		end

		def initialize(data)
			super(78, data)
		end
	end

	class AllocAccount < Quickfix::StringField
		def initialize
			super(79)
		end

		def initialize(data)
			super(79, data)
		end
	end

	class AllocQty < Quickfix::DoubleField
		def initialize
			super(80)
		end

		def initialize(data)
			super(80, data)
		end
	end

	class ProcessCode < Quickfix::CharField
		def initialize
			super(81)
		end

		def initialize(data)
			super(81, data)
		end
	end

	class NoRpts < Quickfix::IntField
		def initialize
			super(82)
		end

		def initialize(data)
			super(82, data)
		end
	end

	class RptSeq < Quickfix::IntField
		def initialize
			super(83)
		end

		def initialize(data)
			super(83, data)
		end
	end

	class CxlQty < Quickfix::DoubleField
		def initialize
			super(84)
		end

		def initialize(data)
			super(84, data)
		end
	end

	class NoDlvyInst < Quickfix::IntField
		def initialize
			super(85)
		end

		def initialize(data)
			super(85, data)
		end
	end

	class AllocStatus < Quickfix::IntField
		def initialize
			super(87)
		end

		def initialize(data)
			super(87, data)
		end
	end

	class AllocRejCode < Quickfix::IntField
		def initialize
			super(88)
		end

		def initialize(data)
			super(88, data)
		end
	end

	class Signature < Quickfix::StringField
		def initialize
			super(89)
		end

		def initialize(data)
			super(89, data)
		end
	end

	class SecureDataLen < Quickfix::IntField
		def initialize
			super(90)
		end

		def initialize(data)
			super(90, data)
		end
	end

	class SecureData < Quickfix::StringField
		def initialize
			super(91)
		end

		def initialize(data)
			super(91, data)
		end
	end

	class SignatureLength < Quickfix::IntField
		def initialize
			super(93)
		end

		def initialize(data)
			super(93, data)
		end
	end

	class EmailType < Quickfix::CharField
		def initialize
			super(94)
		end

		def initialize(data)
			super(94, data)
		end
	end

	class RawDataLength < Quickfix::IntField
		def initialize
			super(95)
		end

		def initialize(data)
			super(95, data)
		end
	end

	class RawData < Quickfix::StringField
		def initialize
			super(96)
		end

		def initialize(data)
			super(96, data)
		end
	end

	class PossResend < Quickfix::BoolField
		def initialize
			super(97)
		end

		def initialize(data)
			super(97, data)
		end
	end

	class EncryptMethod < Quickfix::IntField
		def initialize
			super(98)
		end

		def initialize(data)
			super(98, data)
		end
	end

	class StopPx < Quickfix::DoubleField
		def initialize
			super(99)
		end

		def initialize(data)
			super(99, data)
		end
	end

	class ExDestination < Quickfix::StringField
		def initialize
			super(100)
		end

		def initialize(data)
			super(100, data)
		end
	end

	class CxlRejReason < Quickfix::IntField
		def initialize
			super(102)
		end

		def initialize(data)
			super(102, data)
		end
	end

	class OrdRejReason < Quickfix::IntField
		def initialize
			super(103)
		end

		def initialize(data)
			super(103, data)
		end
	end

	class IOIQualifier < Quickfix::CharField
		def initialize
			super(104)
		end

		def initialize(data)
			super(104, data)
		end
	end

	class WaveNo < Quickfix::StringField
		def initialize
			super(105)
		end

		def initialize(data)
			super(105, data)
		end
	end

	class Issuer < Quickfix::StringField
		def initialize
			super(106)
		end

		def initialize(data)
			super(106, data)
		end
	end

	class SecurityDesc < Quickfix::StringField
		def initialize
			super(107)
		end

		def initialize(data)
			super(107, data)
		end
	end

	class HeartBtInt < Quickfix::IntField
		def initialize
			super(108)
		end

		def initialize(data)
			super(108, data)
		end
	end

	class MinQty < Quickfix::DoubleField
		def initialize
			super(110)
		end

		def initialize(data)
			super(110, data)
		end
	end

	class MaxFloor < Quickfix::DoubleField
		def initialize
			super(111)
		end

		def initialize(data)
			super(111, data)
		end
	end

	class TestReqID < Quickfix::StringField
		def initialize
			super(112)
		end

		def initialize(data)
			super(112, data)
		end
	end

	class ReportToExch < Quickfix::BoolField
		def initialize
			super(113)
		end

		def initialize(data)
			super(113, data)
		end
	end

	class LocateReqd < Quickfix::BoolField
		def initialize
			super(114)
		end

		def initialize(data)
			super(114, data)
		end
	end

	class OnBehalfOfCompID < Quickfix::StringField
		def initialize
			super(115)
		end

		def initialize(data)
			super(115, data)
		end
	end

	class OnBehalfOfSubID < Quickfix::StringField
		def initialize
			super(116)
		end

		def initialize(data)
			super(116, data)
		end
	end

	class QuoteID < Quickfix::StringField
		def initialize
			super(117)
		end

		def initialize(data)
			super(117, data)
		end
	end

	class NetMoney < Quickfix::DoubleField
		def initialize
			super(118)
		end

		def initialize(data)
			super(118, data)
		end
	end

	class SettlCurrAmt < Quickfix::DoubleField
		def initialize
			super(119)
		end

		def initialize(data)
			super(119, data)
		end
	end

	class SettlCurrency < Quickfix::StringField
		def initialize
			super(120)
		end

		def initialize(data)
			super(120, data)
		end
	end

	class ForexReq < Quickfix::BoolField
		def initialize
			super(121)
		end

		def initialize(data)
			super(121, data)
		end
	end

	class OrigSendingTime < Quickfix::UtcTimeStampField
		def initialize
			super(122)
		end

		def initialize(data)
			super(122, data)
		end
	end

	class GapFillFlag < Quickfix::BoolField
		def initialize
			super(123)
		end

		def initialize(data)
			super(123, data)
		end
	end

	class NoExecs < Quickfix::IntField
		def initialize
			super(124)
		end

		def initialize(data)
			super(124, data)
		end
	end

	class ExpireTime < Quickfix::UtcTimeStampField
		def initialize
			super(126)
		end

		def initialize(data)
			super(126, data)
		end
	end

	class DKReason < Quickfix::CharField
		def initialize
			super(127)
		end

		def initialize(data)
			super(127, data)
		end
	end

	class DeliverToCompID < Quickfix::StringField
		def initialize
			super(128)
		end

		def initialize(data)
			super(128, data)
		end
	end

	class DeliverToSubID < Quickfix::StringField
		def initialize
			super(129)
		end

		def initialize(data)
			super(129, data)
		end
	end

	class IOINaturalFlag < Quickfix::BoolField
		def initialize
			super(130)
		end

		def initialize(data)
			super(130, data)
		end
	end

	class QuoteReqID < Quickfix::StringField
		def initialize
			super(131)
		end

		def initialize(data)
			super(131, data)
		end
	end

	class BidPx < Quickfix::DoubleField
		def initialize
			super(132)
		end

		def initialize(data)
			super(132, data)
		end
	end

	class OfferPx < Quickfix::DoubleField
		def initialize
			super(133)
		end

		def initialize(data)
			super(133, data)
		end
	end

	class BidSize < Quickfix::DoubleField
		def initialize
			super(134)
		end

		def initialize(data)
			super(134, data)
		end
	end

	class OfferSize < Quickfix::DoubleField
		def initialize
			super(135)
		end

		def initialize(data)
			super(135, data)
		end
	end

	class NoMiscFees < Quickfix::IntField
		def initialize
			super(136)
		end

		def initialize(data)
			super(136, data)
		end
	end

	class MiscFeeAmt < Quickfix::DoubleField
		def initialize
			super(137)
		end

		def initialize(data)
			super(137, data)
		end
	end

	class MiscFeeCurr < Quickfix::StringField
		def initialize
			super(138)
		end

		def initialize(data)
			super(138, data)
		end
	end

	class MiscFeeType < Quickfix::CharField
		def initialize
			super(139)
		end

		def initialize(data)
			super(139, data)
		end
	end

	class PrevClosePx < Quickfix::DoubleField
		def initialize
			super(140)
		end

		def initialize(data)
			super(140, data)
		end
	end

	class ResetSeqNumFlag < Quickfix::BoolField
		def initialize
			super(141)
		end

		def initialize(data)
			super(141, data)
		end
	end

	class SenderLocationID < Quickfix::StringField
		def initialize
			super(142)
		end

		def initialize(data)
			super(142, data)
		end
	end

	class TargetLocationID < Quickfix::StringField
		def initialize
			super(143)
		end

		def initialize(data)
			super(143, data)
		end
	end

	class OnBehalfOfLocationID < Quickfix::StringField
		def initialize
			super(144)
		end

		def initialize(data)
			super(144, data)
		end
	end

	class DeliverToLocationID < Quickfix::StringField
		def initialize
			super(145)
		end

		def initialize(data)
			super(145, data)
		end
	end

	class NoRelatedSym < Quickfix::IntField
		def initialize
			super(146)
		end

		def initialize(data)
			super(146, data)
		end
	end

	class Subject < Quickfix::StringField
		def initialize
			super(147)
		end

		def initialize(data)
			super(147, data)
		end
	end

	class Headline < Quickfix::StringField
		def initialize
			super(148)
		end

		def initialize(data)
			super(148, data)
		end
	end

	class URLLink < Quickfix::StringField
		def initialize
			super(149)
		end

		def initialize(data)
			super(149, data)
		end
	end

	class ExecType < Quickfix::CharField
		def initialize
			super(150)
		end

		def initialize(data)
			super(150, data)
		end
	end

	class LeavesQty < Quickfix::DoubleField
		def initialize
			super(151)
		end

		def initialize(data)
			super(151, data)
		end
	end

	class CashOrderQty < Quickfix::DoubleField
		def initialize
			super(152)
		end

		def initialize(data)
			super(152, data)
		end
	end

	class AllocAvgPx < Quickfix::DoubleField
		def initialize
			super(153)
		end

		def initialize(data)
			super(153, data)
		end
	end

	class AllocNetMoney < Quickfix::DoubleField
		def initialize
			super(154)
		end

		def initialize(data)
			super(154, data)
		end
	end

	class SettlCurrFxRate < Quickfix::DoubleField
		def initialize
			super(155)
		end

		def initialize(data)
			super(155, data)
		end
	end

	class SettlCurrFxRateCalc < Quickfix::CharField
		def initialize
			super(156)
		end

		def initialize(data)
			super(156, data)
		end
	end

	class NumDaysInterest < Quickfix::IntField
		def initialize
			super(157)
		end

		def initialize(data)
			super(157, data)
		end
	end

	class AccruedInterestRate < Quickfix::DoubleField
		def initialize
			super(158)
		end

		def initialize(data)
			super(158, data)
		end
	end

	class AccruedInterestAmt < Quickfix::DoubleField
		def initialize
			super(159)
		end

		def initialize(data)
			super(159, data)
		end
	end

	class SettlInstMode < Quickfix::CharField
		def initialize
			super(160)
		end

		def initialize(data)
			super(160, data)
		end
	end

	class AllocText < Quickfix::StringField
		def initialize
			super(161)
		end

		def initialize(data)
			super(161, data)
		end
	end

	class SettlInstID < Quickfix::StringField
		def initialize
			super(162)
		end

		def initialize(data)
			super(162, data)
		end
	end

	class SettlInstTransType < Quickfix::CharField
		def initialize
			super(163)
		end

		def initialize(data)
			super(163, data)
		end
	end

	class EmailThreadID < Quickfix::StringField
		def initialize
			super(164)
		end

		def initialize(data)
			super(164, data)
		end
	end

	class SettlInstSource < Quickfix::CharField
		def initialize
			super(165)
		end

		def initialize(data)
			super(165, data)
		end
	end

	class SecurityType < Quickfix::StringField
		def initialize
			super(167)
		end

		def initialize(data)
			super(167, data)
		end
	end

	class EffectiveTime < Quickfix::UtcTimeStampField
		def initialize
			super(168)
		end

		def initialize(data)
			super(168, data)
		end
	end

	class StandInstDbType < Quickfix::IntField
		def initialize
			super(169)
		end

		def initialize(data)
			super(169, data)
		end
	end

	class StandInstDbName < Quickfix::StringField
		def initialize
			super(170)
		end

		def initialize(data)
			super(170, data)
		end
	end

	class StandInstDbID < Quickfix::StringField
		def initialize
			super(171)
		end

		def initialize(data)
			super(171, data)
		end
	end

	class SettlDeliveryType < Quickfix::IntField
		def initialize
			super(172)
		end

		def initialize(data)
			super(172, data)
		end
	end

	class BidSpotRate < Quickfix::DoubleField
		def initialize
			super(188)
		end

		def initialize(data)
			super(188, data)
		end
	end

	class BidForwardPoints < Quickfix::DoubleField
		def initialize
			super(189)
		end

		def initialize(data)
			super(189, data)
		end
	end

	class OfferSpotRate < Quickfix::DoubleField
		def initialize
			super(190)
		end

		def initialize(data)
			super(190, data)
		end
	end

	class OfferForwardPoints < Quickfix::DoubleField
		def initialize
			super(191)
		end

		def initialize(data)
			super(191, data)
		end
	end

	class OrderQty2 < Quickfix::DoubleField
		def initialize
			super(192)
		end

		def initialize(data)
			super(192, data)
		end
	end

	class SettlDate2 < Quickfix::StringField
		def initialize
			super(193)
		end

		def initialize(data)
			super(193, data)
		end
	end

	class LastSpotRate < Quickfix::DoubleField
		def initialize
			super(194)
		end

		def initialize(data)
			super(194, data)
		end
	end

	class LastForwardPoints < Quickfix::DoubleField
		def initialize
			super(195)
		end

		def initialize(data)
			super(195, data)
		end
	end

	class AllocLinkID < Quickfix::StringField
		def initialize
			super(196)
		end

		def initialize(data)
			super(196, data)
		end
	end

	class AllocLinkType < Quickfix::IntField
		def initialize
			super(197)
		end

		def initialize(data)
			super(197, data)
		end
	end

	class SecondaryOrderID < Quickfix::StringField
		def initialize
			super(198)
		end

		def initialize(data)
			super(198, data)
		end
	end

	class NoIOIQualifiers < Quickfix::IntField
		def initialize
			super(199)
		end

		def initialize(data)
			super(199, data)
		end
	end

	class MaturityMonthYear < Quickfix::StringField
		def initialize
			super(200)
		end

		def initialize(data)
			super(200, data)
		end
	end

	class StrikePrice < Quickfix::DoubleField
		def initialize
			super(202)
		end

		def initialize(data)
			super(202, data)
		end
	end

	class CoveredOrUncovered < Quickfix::IntField
		def initialize
			super(203)
		end

		def initialize(data)
			super(203, data)
		end
	end

	class OptAttribute < Quickfix::CharField
		def initialize
			super(206)
		end

		def initialize(data)
			super(206, data)
		end
	end

	class SecurityExchange < Quickfix::StringField
		def initialize
			super(207)
		end

		def initialize(data)
			super(207, data)
		end
	end

	class NotifyBrokerOfCredit < Quickfix::BoolField
		def initialize
			super(208)
		end

		def initialize(data)
			super(208, data)
		end
	end

	class AllocHandlInst < Quickfix::IntField
		def initialize
			super(209)
		end

		def initialize(data)
			super(209, data)
		end
	end

	class MaxShow < Quickfix::DoubleField
		def initialize
			super(210)
		end

		def initialize(data)
			super(210, data)
		end
	end

	class PegOffsetValue < Quickfix::DoubleField
		def initialize
			super(211)
		end

		def initialize(data)
			super(211, data)
		end
	end

	class XmlDataLen < Quickfix::IntField
		def initialize
			super(212)
		end

		def initialize(data)
			super(212, data)
		end
	end

	class XmlData < Quickfix::StringField
		def initialize
			super(213)
		end

		def initialize(data)
			super(213, data)
		end
	end

	class SettlInstRefID < Quickfix::StringField
		def initialize
			super(214)
		end

		def initialize(data)
			super(214, data)
		end
	end

	class NoRoutingIDs < Quickfix::IntField
		def initialize
			super(215)
		end

		def initialize(data)
			super(215, data)
		end
	end

	class RoutingType < Quickfix::IntField
		def initialize
			super(216)
		end

		def initialize(data)
			super(216, data)
		end
	end

	class RoutingID < Quickfix::StringField
		def initialize
			super(217)
		end

		def initialize(data)
			super(217, data)
		end
	end

	class Spread < Quickfix::DoubleField
		def initialize
			super(218)
		end

		def initialize(data)
			super(218, data)
		end
	end

	class BenchmarkCurveCurrency < Quickfix::StringField
		def initialize
			super(220)
		end

		def initialize(data)
			super(220, data)
		end
	end

	class BenchmarkCurveName < Quickfix::StringField
		def initialize
			super(221)
		end

		def initialize(data)
			super(221, data)
		end
	end

	class BenchmarkCurvePoint < Quickfix::StringField
		def initialize
			super(222)
		end

		def initialize(data)
			super(222, data)
		end
	end

	class CouponRate < Quickfix::DoubleField
		def initialize
			super(223)
		end

		def initialize(data)
			super(223, data)
		end
	end

	class CouponPaymentDate < Quickfix::StringField
		def initialize
			super(224)
		end

		def initialize(data)
			super(224, data)
		end
	end

	class IssueDate < Quickfix::StringField
		def initialize
			super(225)
		end

		def initialize(data)
			super(225, data)
		end
	end

	class RepurchaseTerm < Quickfix::IntField
		def initialize
			super(226)
		end

		def initialize(data)
			super(226, data)
		end
	end

	class RepurchaseRate < Quickfix::DoubleField
		def initialize
			super(227)
		end

		def initialize(data)
			super(227, data)
		end
	end

	class Factor < Quickfix::DoubleField
		def initialize
			super(228)
		end

		def initialize(data)
			super(228, data)
		end
	end

	class TradeOriginationDate < Quickfix::StringField
		def initialize
			super(229)
		end

		def initialize(data)
			super(229, data)
		end
	end

	class ExDate < Quickfix::StringField
		def initialize
			super(230)
		end

		def initialize(data)
			super(230, data)
		end
	end

	class ContractMultiplier < Quickfix::DoubleField
		def initialize
			super(231)
		end

		def initialize(data)
			super(231, data)
		end
	end

	class NoStipulations < Quickfix::IntField
		def initialize
			super(232)
		end

		def initialize(data)
			super(232, data)
		end
	end

	class StipulationType < Quickfix::StringField
		def initialize
			super(233)
		end

		def initialize(data)
			super(233, data)
		end
	end

	class StipulationValue < Quickfix::StringField
		def initialize
			super(234)
		end

		def initialize(data)
			super(234, data)
		end
	end

	class YieldType < Quickfix::StringField
		def initialize
			super(235)
		end

		def initialize(data)
			super(235, data)
		end
	end

	class Yield < Quickfix::DoubleField
		def initialize
			super(236)
		end

		def initialize(data)
			super(236, data)
		end
	end

	class TotalTakedown < Quickfix::DoubleField
		def initialize
			super(237)
		end

		def initialize(data)
			super(237, data)
		end
	end

	class Concession < Quickfix::DoubleField
		def initialize
			super(238)
		end

		def initialize(data)
			super(238, data)
		end
	end

	class RepoCollateralSecurityType < Quickfix::IntField
		def initialize
			super(239)
		end

		def initialize(data)
			super(239, data)
		end
	end

	class RedemptionDate < Quickfix::StringField
		def initialize
			super(240)
		end

		def initialize(data)
			super(240, data)
		end
	end

	class UnderlyingCouponPaymentDate < Quickfix::StringField
		def initialize
			super(241)
		end

		def initialize(data)
			super(241, data)
		end
	end

	class UnderlyingIssueDate < Quickfix::StringField
		def initialize
			super(242)
		end

		def initialize(data)
			super(242, data)
		end
	end

	class UnderlyingRepoCollateralSecurityType < Quickfix::IntField
		def initialize
			super(243)
		end

		def initialize(data)
			super(243, data)
		end
	end

	class UnderlyingRepurchaseTerm < Quickfix::IntField
		def initialize
			super(244)
		end

		def initialize(data)
			super(244, data)
		end
	end

	class UnderlyingRepurchaseRate < Quickfix::DoubleField
		def initialize
			super(245)
		end

		def initialize(data)
			super(245, data)
		end
	end

	class UnderlyingFactor < Quickfix::DoubleField
		def initialize
			super(246)
		end

		def initialize(data)
			super(246, data)
		end
	end

	class UnderlyingRedemptionDate < Quickfix::StringField
		def initialize
			super(247)
		end

		def initialize(data)
			super(247, data)
		end
	end

	class LegCouponPaymentDate < Quickfix::StringField
		def initialize
			super(248)
		end

		def initialize(data)
			super(248, data)
		end
	end

	class LegIssueDate < Quickfix::StringField
		def initialize
			super(249)
		end

		def initialize(data)
			super(249, data)
		end
	end

	class LegRepoCollateralSecurityType < Quickfix::IntField
		def initialize
			super(250)
		end

		def initialize(data)
			super(250, data)
		end
	end

	class LegRepurchaseTerm < Quickfix::IntField
		def initialize
			super(251)
		end

		def initialize(data)
			super(251, data)
		end
	end

	class LegRepurchaseRate < Quickfix::DoubleField
		def initialize
			super(252)
		end

		def initialize(data)
			super(252, data)
		end
	end

	class LegFactor < Quickfix::DoubleField
		def initialize
			super(253)
		end

		def initialize(data)
			super(253, data)
		end
	end

	class LegRedemptionDate < Quickfix::StringField
		def initialize
			super(254)
		end

		def initialize(data)
			super(254, data)
		end
	end

	class CreditRating < Quickfix::StringField
		def initialize
			super(255)
		end

		def initialize(data)
			super(255, data)
		end
	end

	class UnderlyingCreditRating < Quickfix::StringField
		def initialize
			super(256)
		end

		def initialize(data)
			super(256, data)
		end
	end

	class LegCreditRating < Quickfix::StringField
		def initialize
			super(257)
		end

		def initialize(data)
			super(257, data)
		end
	end

	class TradedFlatSwitch < Quickfix::BoolField
		def initialize
			super(258)
		end

		def initialize(data)
			super(258, data)
		end
	end

	class BasisFeatureDate < Quickfix::StringField
		def initialize
			super(259)
		end

		def initialize(data)
			super(259, data)
		end
	end

	class BasisFeaturePrice < Quickfix::DoubleField
		def initialize
			super(260)
		end

		def initialize(data)
			super(260, data)
		end
	end

	class MDReqID < Quickfix::StringField
		def initialize
			super(262)
		end

		def initialize(data)
			super(262, data)
		end
	end

	class SubscriptionRequestType < Quickfix::CharField
		def initialize
			super(263)
		end

		def initialize(data)
			super(263, data)
		end
	end

	class MarketDepth < Quickfix::IntField
		def initialize
			super(264)
		end

		def initialize(data)
			super(264, data)
		end
	end

	class MDUpdateType < Quickfix::IntField
		def initialize
			super(265)
		end

		def initialize(data)
			super(265, data)
		end
	end

	class AggregatedBook < Quickfix::BoolField
		def initialize
			super(266)
		end

		def initialize(data)
			super(266, data)
		end
	end

	class NoMDEntryTypes < Quickfix::IntField
		def initialize
			super(267)
		end

		def initialize(data)
			super(267, data)
		end
	end

	class NoMDEntries < Quickfix::IntField
		def initialize
			super(268)
		end

		def initialize(data)
			super(268, data)
		end
	end

	class MDEntryType < Quickfix::CharField
		def initialize
			super(269)
		end

		def initialize(data)
			super(269, data)
		end
	end

	class MDEntryPx < Quickfix::DoubleField
		def initialize
			super(270)
		end

		def initialize(data)
			super(270, data)
		end
	end

	class MDEntrySize < Quickfix::DoubleField
		def initialize
			super(271)
		end

		def initialize(data)
			super(271, data)
		end
	end

	class MDEntryDate < Quickfix::UtcDateField
		def initialize
			super(272)
		end

		def initialize(data)
			super(272, data)
		end
	end

	class MDEntryTime < Quickfix::UtcTimeOnlyField
		def initialize
			super(273)
		end

		def initialize(data)
			super(273, data)
		end
	end

	class TickDirection < Quickfix::CharField
		def initialize
			super(274)
		end

		def initialize(data)
			super(274, data)
		end
	end

	class MDMkt < Quickfix::StringField
		def initialize
			super(275)
		end

		def initialize(data)
			super(275, data)
		end
	end

	class QuoteCondition < Quickfix::StringField
		def initialize
			super(276)
		end

		def initialize(data)
			super(276, data)
		end
	end

	class TradeCondition < Quickfix::StringField
		def initialize
			super(277)
		end

		def initialize(data)
			super(277, data)
		end
	end

	class MDEntryID < Quickfix::StringField
		def initialize
			super(278)
		end

		def initialize(data)
			super(278, data)
		end
	end

	class MDUpdateAction < Quickfix::CharField
		def initialize
			super(279)
		end

		def initialize(data)
			super(279, data)
		end
	end

	class MDEntryRefID < Quickfix::StringField
		def initialize
			super(280)
		end

		def initialize(data)
			super(280, data)
		end
	end

	class MDReqRejReason < Quickfix::CharField
		def initialize
			super(281)
		end

		def initialize(data)
			super(281, data)
		end
	end

	class MDEntryOriginator < Quickfix::StringField
		def initialize
			super(282)
		end

		def initialize(data)
			super(282, data)
		end
	end

	class LocationID < Quickfix::StringField
		def initialize
			super(283)
		end

		def initialize(data)
			super(283, data)
		end
	end

	class DeskID < Quickfix::StringField
		def initialize
			super(284)
		end

		def initialize(data)
			super(284, data)
		end
	end

	class DeleteReason < Quickfix::CharField
		def initialize
			super(285)
		end

		def initialize(data)
			super(285, data)
		end
	end

	class OpenCloseSettlFlag < Quickfix::StringField
		def initialize
			super(286)
		end

		def initialize(data)
			super(286, data)
		end
	end

	class SellerDays < Quickfix::IntField
		def initialize
			super(287)
		end

		def initialize(data)
			super(287, data)
		end
	end

	class MDEntryBuyer < Quickfix::StringField
		def initialize
			super(288)
		end

		def initialize(data)
			super(288, data)
		end
	end

	class MDEntrySeller < Quickfix::StringField
		def initialize
			super(289)
		end

		def initialize(data)
			super(289, data)
		end
	end

	class MDEntryPositionNo < Quickfix::IntField
		def initialize
			super(290)
		end

		def initialize(data)
			super(290, data)
		end
	end

	class FinancialStatus < Quickfix::StringField
		def initialize
			super(291)
		end

		def initialize(data)
			super(291, data)
		end
	end

	class CorporateAction < Quickfix::StringField
		def initialize
			super(292)
		end

		def initialize(data)
			super(292, data)
		end
	end

	class DefBidSize < Quickfix::DoubleField
		def initialize
			super(293)
		end

		def initialize(data)
			super(293, data)
		end
	end

	class DefOfferSize < Quickfix::DoubleField
		def initialize
			super(294)
		end

		def initialize(data)
			super(294, data)
		end
	end

	class NoQuoteEntries < Quickfix::IntField
		def initialize
			super(295)
		end

		def initialize(data)
			super(295, data)
		end
	end

	class NoQuoteSets < Quickfix::IntField
		def initialize
			super(296)
		end

		def initialize(data)
			super(296, data)
		end
	end

	class QuoteStatus < Quickfix::IntField
		def initialize
			super(297)
		end

		def initialize(data)
			super(297, data)
		end
	end

	class QuoteCancelType < Quickfix::IntField
		def initialize
			super(298)
		end

		def initialize(data)
			super(298, data)
		end
	end

	class QuoteEntryID < Quickfix::StringField
		def initialize
			super(299)
		end

		def initialize(data)
			super(299, data)
		end
	end

	class QuoteRejectReason < Quickfix::IntField
		def initialize
			super(300)
		end

		def initialize(data)
			super(300, data)
		end
	end

	class QuoteResponseLevel < Quickfix::IntField
		def initialize
			super(301)
		end

		def initialize(data)
			super(301, data)
		end
	end

	class QuoteSetID < Quickfix::StringField
		def initialize
			super(302)
		end

		def initialize(data)
			super(302, data)
		end
	end

	class QuoteRequestType < Quickfix::IntField
		def initialize
			super(303)
		end

		def initialize(data)
			super(303, data)
		end
	end

	class TotNoQuoteEntries < Quickfix::IntField
		def initialize
			super(304)
		end

		def initialize(data)
			super(304, data)
		end
	end

	class UnderlyingSecurityIDSource < Quickfix::StringField
		def initialize
			super(305)
		end

		def initialize(data)
			super(305, data)
		end
	end

	class UnderlyingIssuer < Quickfix::StringField
		def initialize
			super(306)
		end

		def initialize(data)
			super(306, data)
		end
	end

	class UnderlyingSecurityDesc < Quickfix::StringField
		def initialize
			super(307)
		end

		def initialize(data)
			super(307, data)
		end
	end

	class UnderlyingSecurityExchange < Quickfix::StringField
		def initialize
			super(308)
		end

		def initialize(data)
			super(308, data)
		end
	end

	class UnderlyingSecurityID < Quickfix::StringField
		def initialize
			super(309)
		end

		def initialize(data)
			super(309, data)
		end
	end

	class UnderlyingSecurityType < Quickfix::StringField
		def initialize
			super(310)
		end

		def initialize(data)
			super(310, data)
		end
	end

	class UnderlyingSymbol < Quickfix::StringField
		def initialize
			super(311)
		end

		def initialize(data)
			super(311, data)
		end
	end

	class UnderlyingSymbolSfx < Quickfix::StringField
		def initialize
			super(312)
		end

		def initialize(data)
			super(312, data)
		end
	end

	class UnderlyingMaturityMonthYear < Quickfix::StringField
		def initialize
			super(313)
		end

		def initialize(data)
			super(313, data)
		end
	end

	class UnderlyingStrikePrice < Quickfix::DoubleField
		def initialize
			super(316)
		end

		def initialize(data)
			super(316, data)
		end
	end

	class UnderlyingOptAttribute < Quickfix::CharField
		def initialize
			super(317)
		end

		def initialize(data)
			super(317, data)
		end
	end

	class UnderlyingCurrency < Quickfix::StringField
		def initialize
			super(318)
		end

		def initialize(data)
			super(318, data)
		end
	end

	class SecurityReqID < Quickfix::StringField
		def initialize
			super(320)
		end

		def initialize(data)
			super(320, data)
		end
	end

	class SecurityRequestType < Quickfix::IntField
		def initialize
			super(321)
		end

		def initialize(data)
			super(321, data)
		end
	end

	class SecurityResponseID < Quickfix::StringField
		def initialize
			super(322)
		end

		def initialize(data)
			super(322, data)
		end
	end

	class SecurityResponseType < Quickfix::IntField
		def initialize
			super(323)
		end

		def initialize(data)
			super(323, data)
		end
	end

	class SecurityStatusReqID < Quickfix::StringField
		def initialize
			super(324)
		end

		def initialize(data)
			super(324, data)
		end
	end

	class UnsolicitedIndicator < Quickfix::BoolField
		def initialize
			super(325)
		end

		def initialize(data)
			super(325, data)
		end
	end

	class SecurityTradingStatus < Quickfix::IntField
		def initialize
			super(326)
		end

		def initialize(data)
			super(326, data)
		end
	end

	class HaltReason < Quickfix::CharField
		def initialize
			super(327)
		end

		def initialize(data)
			super(327, data)
		end
	end

	class InViewOfCommon < Quickfix::BoolField
		def initialize
			super(328)
		end

		def initialize(data)
			super(328, data)
		end
	end

	class DueToRelated < Quickfix::BoolField
		def initialize
			super(329)
		end

		def initialize(data)
			super(329, data)
		end
	end

	class BuyVolume < Quickfix::DoubleField
		def initialize
			super(330)
		end

		def initialize(data)
			super(330, data)
		end
	end

	class SellVolume < Quickfix::DoubleField
		def initialize
			super(331)
		end

		def initialize(data)
			super(331, data)
		end
	end

	class HighPx < Quickfix::DoubleField
		def initialize
			super(332)
		end

		def initialize(data)
			super(332, data)
		end
	end

	class LowPx < Quickfix::DoubleField
		def initialize
			super(333)
		end

		def initialize(data)
			super(333, data)
		end
	end

	class Adjustment < Quickfix::IntField
		def initialize
			super(334)
		end

		def initialize(data)
			super(334, data)
		end
	end

	class TradSesReqID < Quickfix::StringField
		def initialize
			super(335)
		end

		def initialize(data)
			super(335, data)
		end
	end

	class TradingSessionID < Quickfix::StringField
		def initialize
			super(336)
		end

		def initialize(data)
			super(336, data)
		end
	end

	class ContraTrader < Quickfix::StringField
		def initialize
			super(337)
		end

		def initialize(data)
			super(337, data)
		end
	end

	class TradSesMethod < Quickfix::IntField
		def initialize
			super(338)
		end

		def initialize(data)
			super(338, data)
		end
	end

	class TradSesMode < Quickfix::IntField
		def initialize
			super(339)
		end

		def initialize(data)
			super(339, data)
		end
	end

	class TradSesStatus < Quickfix::IntField
		def initialize
			super(340)
		end

		def initialize(data)
			super(340, data)
		end
	end

	class TradSesStartTime < Quickfix::UtcTimeStampField
		def initialize
			super(341)
		end

		def initialize(data)
			super(341, data)
		end
	end

	class TradSesOpenTime < Quickfix::UtcTimeStampField
		def initialize
			super(342)
		end

		def initialize(data)
			super(342, data)
		end
	end

	class TradSesPreCloseTime < Quickfix::UtcTimeStampField
		def initialize
			super(343)
		end

		def initialize(data)
			super(343, data)
		end
	end

	class TradSesCloseTime < Quickfix::UtcTimeStampField
		def initialize
			super(344)
		end

		def initialize(data)
			super(344, data)
		end
	end

	class TradSesEndTime < Quickfix::UtcTimeStampField
		def initialize
			super(345)
		end

		def initialize(data)
			super(345, data)
		end
	end

	class NumberOfOrders < Quickfix::IntField
		def initialize
			super(346)
		end

		def initialize(data)
			super(346, data)
		end
	end

	class MessageEncoding < Quickfix::StringField
		def initialize
			super(347)
		end

		def initialize(data)
			super(347, data)
		end
	end

	class EncodedIssuerLen < Quickfix::IntField
		def initialize
			super(348)
		end

		def initialize(data)
			super(348, data)
		end
	end

	class EncodedIssuer < Quickfix::StringField
		def initialize
			super(349)
		end

		def initialize(data)
			super(349, data)
		end
	end

	class EncodedSecurityDescLen < Quickfix::IntField
		def initialize
			super(350)
		end

		def initialize(data)
			super(350, data)
		end
	end

	class EncodedSecurityDesc < Quickfix::StringField
		def initialize
			super(351)
		end

		def initialize(data)
			super(351, data)
		end
	end

	class EncodedListExecInstLen < Quickfix::IntField
		def initialize
			super(352)
		end

		def initialize(data)
			super(352, data)
		end
	end

	class EncodedListExecInst < Quickfix::StringField
		def initialize
			super(353)
		end

		def initialize(data)
			super(353, data)
		end
	end

	class EncodedTextLen < Quickfix::IntField
		def initialize
			super(354)
		end

		def initialize(data)
			super(354, data)
		end
	end

	class EncodedText < Quickfix::StringField
		def initialize
			super(355)
		end

		def initialize(data)
			super(355, data)
		end
	end

	class EncodedSubjectLen < Quickfix::IntField
		def initialize
			super(356)
		end

		def initialize(data)
			super(356, data)
		end
	end

	class EncodedSubject < Quickfix::StringField
		def initialize
			super(357)
		end

		def initialize(data)
			super(357, data)
		end
	end

	class EncodedHeadlineLen < Quickfix::IntField
		def initialize
			super(358)
		end

		def initialize(data)
			super(358, data)
		end
	end

	class EncodedHeadline < Quickfix::StringField
		def initialize
			super(359)
		end

		def initialize(data)
			super(359, data)
		end
	end

	class EncodedAllocTextLen < Quickfix::IntField
		def initialize
			super(360)
		end

		def initialize(data)
			super(360, data)
		end
	end

	class EncodedAllocText < Quickfix::StringField
		def initialize
			super(361)
		end

		def initialize(data)
			super(361, data)
		end
	end

	class EncodedUnderlyingIssuerLen < Quickfix::IntField
		def initialize
			super(362)
		end

		def initialize(data)
			super(362, data)
		end
	end

	class EncodedUnderlyingIssuer < Quickfix::StringField
		def initialize
			super(363)
		end

		def initialize(data)
			super(363, data)
		end
	end

	class EncodedUnderlyingSecurityDescLen < Quickfix::IntField
		def initialize
			super(364)
		end

		def initialize(data)
			super(364, data)
		end
	end

	class EncodedUnderlyingSecurityDesc < Quickfix::StringField
		def initialize
			super(365)
		end

		def initialize(data)
			super(365, data)
		end
	end

	class AllocPrice < Quickfix::DoubleField
		def initialize
			super(366)
		end

		def initialize(data)
			super(366, data)
		end
	end

	class QuoteSetValidUntilTime < Quickfix::UtcTimeStampField
		def initialize
			super(367)
		end

		def initialize(data)
			super(367, data)
		end
	end

	class QuoteEntryRejectReason < Quickfix::IntField
		def initialize
			super(368)
		end

		def initialize(data)
			super(368, data)
		end
	end

	class LastMsgSeqNumProcessed < Quickfix::IntField
		def initialize
			super(369)
		end

		def initialize(data)
			super(369, data)
		end
	end

	class RefTagID < Quickfix::IntField
		def initialize
			super(371)
		end

		def initialize(data)
			super(371, data)
		end
	end

	class RefMsgType < Quickfix::StringField
		def initialize
			super(372)
		end

		def initialize(data)
			super(372, data)
		end
	end

	class SessionRejectReason < Quickfix::IntField
		def initialize
			super(373)
		end

		def initialize(data)
			super(373, data)
		end
	end

	class BidRequestTransType < Quickfix::CharField
		def initialize
			super(374)
		end

		def initialize(data)
			super(374, data)
		end
	end

	class ContraBroker < Quickfix::StringField
		def initialize
			super(375)
		end

		def initialize(data)
			super(375, data)
		end
	end

	class ComplianceID < Quickfix::StringField
		def initialize
			super(376)
		end

		def initialize(data)
			super(376, data)
		end
	end

	class SolicitedFlag < Quickfix::BoolField
		def initialize
			super(377)
		end

		def initialize(data)
			super(377, data)
		end
	end

	class ExecRestatementReason < Quickfix::IntField
		def initialize
			super(378)
		end

		def initialize(data)
			super(378, data)
		end
	end

	class BusinessRejectRefID < Quickfix::StringField
		def initialize
			super(379)
		end

		def initialize(data)
			super(379, data)
		end
	end

	class BusinessRejectReason < Quickfix::IntField
		def initialize
			super(380)
		end

		def initialize(data)
			super(380, data)
		end
	end

	class GrossTradeAmt < Quickfix::DoubleField
		def initialize
			super(381)
		end

		def initialize(data)
			super(381, data)
		end
	end

	class NoContraBrokers < Quickfix::IntField
		def initialize
			super(382)
		end

		def initialize(data)
			super(382, data)
		end
	end

	class MaxMessageSize < Quickfix::IntField
		def initialize
			super(383)
		end

		def initialize(data)
			super(383, data)
		end
	end

	class NoMsgTypes < Quickfix::IntField
		def initialize
			super(384)
		end

		def initialize(data)
			super(384, data)
		end
	end

	class MsgDirection < Quickfix::CharField
		def initialize
			super(385)
		end

		def initialize(data)
			super(385, data)
		end
	end

	class NoTradingSessions < Quickfix::IntField
		def initialize
			super(386)
		end

		def initialize(data)
			super(386, data)
		end
	end

	class TotalVolumeTraded < Quickfix::DoubleField
		def initialize
			super(387)
		end

		def initialize(data)
			super(387, data)
		end
	end

	class DiscretionInst < Quickfix::CharField
		def initialize
			super(388)
		end

		def initialize(data)
			super(388, data)
		end
	end

	class DiscretionOffsetValue < Quickfix::DoubleField
		def initialize
			super(389)
		end

		def initialize(data)
			super(389, data)
		end
	end

	class BidID < Quickfix::StringField
		def initialize
			super(390)
		end

		def initialize(data)
			super(390, data)
		end
	end

	class ClientBidID < Quickfix::StringField
		def initialize
			super(391)
		end

		def initialize(data)
			super(391, data)
		end
	end

	class ListName < Quickfix::StringField
		def initialize
			super(392)
		end

		def initialize(data)
			super(392, data)
		end
	end

	class TotNoRelatedSym < Quickfix::IntField
		def initialize
			super(393)
		end

		def initialize(data)
			super(393, data)
		end
	end

	class BidType < Quickfix::IntField
		def initialize
			super(394)
		end

		def initialize(data)
			super(394, data)
		end
	end

	class NumTickets < Quickfix::IntField
		def initialize
			super(395)
		end

		def initialize(data)
			super(395, data)
		end
	end

	class SideValue1 < Quickfix::DoubleField
		def initialize
			super(396)
		end

		def initialize(data)
			super(396, data)
		end
	end

	class SideValue2 < Quickfix::DoubleField
		def initialize
			super(397)
		end

		def initialize(data)
			super(397, data)
		end
	end

	class NoBidDescriptors < Quickfix::IntField
		def initialize
			super(398)
		end

		def initialize(data)
			super(398, data)
		end
	end

	class BidDescriptorType < Quickfix::IntField
		def initialize
			super(399)
		end

		def initialize(data)
			super(399, data)
		end
	end

	class BidDescriptor < Quickfix::StringField
		def initialize
			super(400)
		end

		def initialize(data)
			super(400, data)
		end
	end

	class SideValueInd < Quickfix::IntField
		def initialize
			super(401)
		end

		def initialize(data)
			super(401, data)
		end
	end

	class LiquidityPctLow < Quickfix::DoubleField
		def initialize
			super(402)
		end

		def initialize(data)
			super(402, data)
		end
	end

	class LiquidityPctHigh < Quickfix::DoubleField
		def initialize
			super(403)
		end

		def initialize(data)
			super(403, data)
		end
	end

	class LiquidityValue < Quickfix::DoubleField
		def initialize
			super(404)
		end

		def initialize(data)
			super(404, data)
		end
	end

	class EFPTrackingError < Quickfix::DoubleField
		def initialize
			super(405)
		end

		def initialize(data)
			super(405, data)
		end
	end

	class FairValue < Quickfix::DoubleField
		def initialize
			super(406)
		end

		def initialize(data)
			super(406, data)
		end
	end

	class OutsideIndexPct < Quickfix::DoubleField
		def initialize
			super(407)
		end

		def initialize(data)
			super(407, data)
		end
	end

	class ValueOfFutures < Quickfix::DoubleField
		def initialize
			super(408)
		end

		def initialize(data)
			super(408, data)
		end
	end

	class LiquidityIndType < Quickfix::IntField
		def initialize
			super(409)
		end

		def initialize(data)
			super(409, data)
		end
	end

	class WtAverageLiquidity < Quickfix::DoubleField
		def initialize
			super(410)
		end

		def initialize(data)
			super(410, data)
		end
	end

	class ExchangeForPhysical < Quickfix::BoolField
		def initialize
			super(411)
		end

		def initialize(data)
			super(411, data)
		end
	end

	class OutMainCntryUIndex < Quickfix::DoubleField
		def initialize
			super(412)
		end

		def initialize(data)
			super(412, data)
		end
	end

	class CrossPercent < Quickfix::DoubleField
		def initialize
			super(413)
		end

		def initialize(data)
			super(413, data)
		end
	end

	class ProgRptReqs < Quickfix::IntField
		def initialize
			super(414)
		end

		def initialize(data)
			super(414, data)
		end
	end

	class ProgPeriodInterval < Quickfix::IntField
		def initialize
			super(415)
		end

		def initialize(data)
			super(415, data)
		end
	end

	class IncTaxInd < Quickfix::IntField
		def initialize
			super(416)
		end

		def initialize(data)
			super(416, data)
		end
	end

	class NumBidders < Quickfix::IntField
		def initialize
			super(417)
		end

		def initialize(data)
			super(417, data)
		end
	end

	class BidTradeType < Quickfix::CharField
		def initialize
			super(418)
		end

		def initialize(data)
			super(418, data)
		end
	end

	class BasisPxType < Quickfix::CharField
		def initialize
			super(419)
		end

		def initialize(data)
			super(419, data)
		end
	end

	class NoBidComponents < Quickfix::IntField
		def initialize
			super(420)
		end

		def initialize(data)
			super(420, data)
		end
	end

	class Country < Quickfix::StringField
		def initialize
			super(421)
		end

		def initialize(data)
			super(421, data)
		end
	end

	class TotNoStrikes < Quickfix::IntField
		def initialize
			super(422)
		end

		def initialize(data)
			super(422, data)
		end
	end

	class PriceType < Quickfix::IntField
		def initialize
			super(423)
		end

		def initialize(data)
			super(423, data)
		end
	end

	class DayOrderQty < Quickfix::DoubleField
		def initialize
			super(424)
		end

		def initialize(data)
			super(424, data)
		end
	end

	class DayCumQty < Quickfix::DoubleField
		def initialize
			super(425)
		end

		def initialize(data)
			super(425, data)
		end
	end

	class DayAvgPx < Quickfix::DoubleField
		def initialize
			super(426)
		end

		def initialize(data)
			super(426, data)
		end
	end

	class GTBookingInst < Quickfix::IntField
		def initialize
			super(427)
		end

		def initialize(data)
			super(427, data)
		end
	end

	class NoStrikes < Quickfix::IntField
		def initialize
			super(428)
		end

		def initialize(data)
			super(428, data)
		end
	end

	class ListStatusType < Quickfix::IntField
		def initialize
			super(429)
		end

		def initialize(data)
			super(429, data)
		end
	end

	class NetGrossInd < Quickfix::IntField
		def initialize
			super(430)
		end

		def initialize(data)
			super(430, data)
		end
	end

	class ListOrderStatus < Quickfix::IntField
		def initialize
			super(431)
		end

		def initialize(data)
			super(431, data)
		end
	end

	class ExpireDate < Quickfix::StringField
		def initialize
			super(432)
		end

		def initialize(data)
			super(432, data)
		end
	end

	class ListExecInstType < Quickfix::CharField
		def initialize
			super(433)
		end

		def initialize(data)
			super(433, data)
		end
	end

	class CxlRejResponseTo < Quickfix::CharField
		def initialize
			super(434)
		end

		def initialize(data)
			super(434, data)
		end
	end

	class UnderlyingCouponRate < Quickfix::DoubleField
		def initialize
			super(435)
		end

		def initialize(data)
			super(435, data)
		end
	end

	class UnderlyingContractMultiplier < Quickfix::DoubleField
		def initialize
			super(436)
		end

		def initialize(data)
			super(436, data)
		end
	end

	class ContraTradeQty < Quickfix::DoubleField
		def initialize
			super(437)
		end

		def initialize(data)
			super(437, data)
		end
	end

	class ContraTradeTime < Quickfix::UtcTimeStampField
		def initialize
			super(438)
		end

		def initialize(data)
			super(438, data)
		end
	end

	class LiquidityNumSecurities < Quickfix::IntField
		def initialize
			super(441)
		end

		def initialize(data)
			super(441, data)
		end
	end

	class MultiLegReportingType < Quickfix::CharField
		def initialize
			super(442)
		end

		def initialize(data)
			super(442, data)
		end
	end

	class StrikeTime < Quickfix::UtcTimeStampField
		def initialize
			super(443)
		end

		def initialize(data)
			super(443, data)
		end
	end

	class ListStatusText < Quickfix::StringField
		def initialize
			super(444)
		end

		def initialize(data)
			super(444, data)
		end
	end

	class EncodedListStatusTextLen < Quickfix::IntField
		def initialize
			super(445)
		end

		def initialize(data)
			super(445, data)
		end
	end

	class EncodedListStatusText < Quickfix::StringField
		def initialize
			super(446)
		end

		def initialize(data)
			super(446, data)
		end
	end

	class PartyIDSource < Quickfix::CharField
		def initialize
			super(447)
		end

		def initialize(data)
			super(447, data)
		end
	end

	class PartyID < Quickfix::StringField
		def initialize
			super(448)
		end

		def initialize(data)
			super(448, data)
		end
	end

	class NetChgPrevDay < Quickfix::DoubleField
		def initialize
			super(451)
		end

		def initialize(data)
			super(451, data)
		end
	end

	class PartyRole < Quickfix::IntField
		def initialize
			super(452)
		end

		def initialize(data)
			super(452, data)
		end
	end

	class NoPartyIDs < Quickfix::IntField
		def initialize
			super(453)
		end

		def initialize(data)
			super(453, data)
		end
	end

	class NoSecurityAltID < Quickfix::IntField
		def initialize
			super(454)
		end

		def initialize(data)
			super(454, data)
		end
	end

	class SecurityAltID < Quickfix::StringField
		def initialize
			super(455)
		end

		def initialize(data)
			super(455, data)
		end
	end

	class SecurityAltIDSource < Quickfix::StringField
		def initialize
			super(456)
		end

		def initialize(data)
			super(456, data)
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::IntField
		def initialize
			super(457)
		end

		def initialize(data)
			super(457, data)
		end
	end

	class UnderlyingSecurityAltID < Quickfix::StringField
		def initialize
			super(458)
		end

		def initialize(data)
			super(458, data)
		end
	end

	class UnderlyingSecurityAltIDSource < Quickfix::StringField
		def initialize
			super(459)
		end

		def initialize(data)
			super(459, data)
		end
	end

	class Product < Quickfix::IntField
		def initialize
			super(460)
		end

		def initialize(data)
			super(460, data)
		end
	end

	class CFICode < Quickfix::StringField
		def initialize
			super(461)
		end

		def initialize(data)
			super(461, data)
		end
	end

	class UnderlyingProduct < Quickfix::IntField
		def initialize
			super(462)
		end

		def initialize(data)
			super(462, data)
		end
	end

	class UnderlyingCFICode < Quickfix::StringField
		def initialize
			super(463)
		end

		def initialize(data)
			super(463, data)
		end
	end

	class TestMessageIndicator < Quickfix::BoolField
		def initialize
			super(464)
		end

		def initialize(data)
			super(464, data)
		end
	end

	class QuantityType < Quickfix::IntField
		def initialize
			super(465)
		end

		def initialize(data)
			super(465, data)
		end
	end

	class BookingRefID < Quickfix::StringField
		def initialize
			super(466)
		end

		def initialize(data)
			super(466, data)
		end
	end

	class IndividualAllocID < Quickfix::StringField
		def initialize
			super(467)
		end

		def initialize(data)
			super(467, data)
		end
	end

	class RoundingDirection < Quickfix::CharField
		def initialize
			super(468)
		end

		def initialize(data)
			super(468, data)
		end
	end

	class RoundingModulus < Quickfix::DoubleField
		def initialize
			super(469)
		end

		def initialize(data)
			super(469, data)
		end
	end

	class CountryOfIssue < Quickfix::StringField
		def initialize
			super(470)
		end

		def initialize(data)
			super(470, data)
		end
	end

	class StateOrProvinceOfIssue < Quickfix::StringField
		def initialize
			super(471)
		end

		def initialize(data)
			super(471, data)
		end
	end

	class LocaleOfIssue < Quickfix::StringField
		def initialize
			super(472)
		end

		def initialize(data)
			super(472, data)
		end
	end

	class NoRegistDtls < Quickfix::IntField
		def initialize
			super(473)
		end

		def initialize(data)
			super(473, data)
		end
	end

	class MailingDtls < Quickfix::StringField
		def initialize
			super(474)
		end

		def initialize(data)
			super(474, data)
		end
	end

	class InvestorCountryOfResidence < Quickfix::StringField
		def initialize
			super(475)
		end

		def initialize(data)
			super(475, data)
		end
	end

	class PaymentRef < Quickfix::StringField
		def initialize
			super(476)
		end

		def initialize(data)
			super(476, data)
		end
	end

	class DistribPaymentMethod < Quickfix::IntField
		def initialize
			super(477)
		end

		def initialize(data)
			super(477, data)
		end
	end

	class CashDistribCurr < Quickfix::StringField
		def initialize
			super(478)
		end

		def initialize(data)
			super(478, data)
		end
	end

	class CommCurrency < Quickfix::StringField
		def initialize
			super(479)
		end

		def initialize(data)
			super(479, data)
		end
	end

	class CancellationRights < Quickfix::CharField
		def initialize
			super(480)
		end

		def initialize(data)
			super(480, data)
		end
	end

	class MoneyLaunderingStatus < Quickfix::CharField
		def initialize
			super(481)
		end

		def initialize(data)
			super(481, data)
		end
	end

	class MailingInst < Quickfix::StringField
		def initialize
			super(482)
		end

		def initialize(data)
			super(482, data)
		end
	end

	class TransBkdTime < Quickfix::UtcTimeStampField
		def initialize
			super(483)
		end

		def initialize(data)
			super(483, data)
		end
	end

	class ExecPriceType < Quickfix::CharField
		def initialize
			super(484)
		end

		def initialize(data)
			super(484, data)
		end
	end

	class ExecPriceAdjustment < Quickfix::DoubleField
		def initialize
			super(485)
		end

		def initialize(data)
			super(485, data)
		end
	end

	class DateOfBirth < Quickfix::StringField
		def initialize
			super(486)
		end

		def initialize(data)
			super(486, data)
		end
	end

	class TradeReportTransType < Quickfix::IntField
		def initialize
			super(487)
		end

		def initialize(data)
			super(487, data)
		end
	end

	class CardHolderName < Quickfix::StringField
		def initialize
			super(488)
		end

		def initialize(data)
			super(488, data)
		end
	end

	class CardNumber < Quickfix::StringField
		def initialize
			super(489)
		end

		def initialize(data)
			super(489, data)
		end
	end

	class CardExpDate < Quickfix::StringField
		def initialize
			super(490)
		end

		def initialize(data)
			super(490, data)
		end
	end

	class CardIssNum < Quickfix::StringField
		def initialize
			super(491)
		end

		def initialize(data)
			super(491, data)
		end
	end

	class PaymentMethod < Quickfix::IntField
		def initialize
			super(492)
		end

		def initialize(data)
			super(492, data)
		end
	end

	class RegistAcctType < Quickfix::StringField
		def initialize
			super(493)
		end

		def initialize(data)
			super(493, data)
		end
	end

	class Designation < Quickfix::StringField
		def initialize
			super(494)
		end

		def initialize(data)
			super(494, data)
		end
	end

	class TaxAdvantageType < Quickfix::IntField
		def initialize
			super(495)
		end

		def initialize(data)
			super(495, data)
		end
	end

	class RegistRejReasonText < Quickfix::StringField
		def initialize
			super(496)
		end

		def initialize(data)
			super(496, data)
		end
	end

	class FundRenewWaiv < Quickfix::CharField
		def initialize
			super(497)
		end

		def initialize(data)
			super(497, data)
		end
	end

	class CashDistribAgentName < Quickfix::StringField
		def initialize
			super(498)
		end

		def initialize(data)
			super(498, data)
		end
	end

	class CashDistribAgentCode < Quickfix::StringField
		def initialize
			super(499)
		end

		def initialize(data)
			super(499, data)
		end
	end

	class CashDistribAgentAcctNumber < Quickfix::StringField
		def initialize
			super(500)
		end

		def initialize(data)
			super(500, data)
		end
	end

	class CashDistribPayRef < Quickfix::StringField
		def initialize
			super(501)
		end

		def initialize(data)
			super(501, data)
		end
	end

	class CashDistribAgentAcctName < Quickfix::StringField
		def initialize
			super(502)
		end

		def initialize(data)
			super(502, data)
		end
	end

	class CardStartDate < Quickfix::StringField
		def initialize
			super(503)
		end

		def initialize(data)
			super(503, data)
		end
	end

	class PaymentDate < Quickfix::StringField
		def initialize
			super(504)
		end

		def initialize(data)
			super(504, data)
		end
	end

	class PaymentRemitterID < Quickfix::StringField
		def initialize
			super(505)
		end

		def initialize(data)
			super(505, data)
		end
	end

	class RegistStatus < Quickfix::CharField
		def initialize
			super(506)
		end

		def initialize(data)
			super(506, data)
		end
	end

	class RegistRejReasonCode < Quickfix::IntField
		def initialize
			super(507)
		end

		def initialize(data)
			super(507, data)
		end
	end

	class RegistRefID < Quickfix::StringField
		def initialize
			super(508)
		end

		def initialize(data)
			super(508, data)
		end
	end

	class RegistDtls < Quickfix::StringField
		def initialize
			super(509)
		end

		def initialize(data)
			super(509, data)
		end
	end

	class NoDistribInsts < Quickfix::IntField
		def initialize
			super(510)
		end

		def initialize(data)
			super(510, data)
		end
	end

	class RegistEmail < Quickfix::StringField
		def initialize
			super(511)
		end

		def initialize(data)
			super(511, data)
		end
	end

	class DistribPercentage < Quickfix::DoubleField
		def initialize
			super(512)
		end

		def initialize(data)
			super(512, data)
		end
	end

	class RegistID < Quickfix::StringField
		def initialize
			super(513)
		end

		def initialize(data)
			super(513, data)
		end
	end

	class RegistTransType < Quickfix::CharField
		def initialize
			super(514)
		end

		def initialize(data)
			super(514, data)
		end
	end

	class ExecValuationPoint < Quickfix::UtcTimeStampField
		def initialize
			super(515)
		end

		def initialize(data)
			super(515, data)
		end
	end

	class OrderPercent < Quickfix::DoubleField
		def initialize
			super(516)
		end

		def initialize(data)
			super(516, data)
		end
	end

	class OwnershipType < Quickfix::CharField
		def initialize
			super(517)
		end

		def initialize(data)
			super(517, data)
		end
	end

	class NoContAmts < Quickfix::IntField
		def initialize
			super(518)
		end

		def initialize(data)
			super(518, data)
		end
	end

	class ContAmtType < Quickfix::IntField
		def initialize
			super(519)
		end

		def initialize(data)
			super(519, data)
		end
	end

	class ContAmtValue < Quickfix::DoubleField
		def initialize
			super(520)
		end

		def initialize(data)
			super(520, data)
		end
	end

	class ContAmtCurr < Quickfix::StringField
		def initialize
			super(521)
		end

		def initialize(data)
			super(521, data)
		end
	end

	class OwnerType < Quickfix::IntField
		def initialize
			super(522)
		end

		def initialize(data)
			super(522, data)
		end
	end

	class PartySubID < Quickfix::StringField
		def initialize
			super(523)
		end

		def initialize(data)
			super(523, data)
		end
	end

	class NestedPartyID < Quickfix::StringField
		def initialize
			super(524)
		end

		def initialize(data)
			super(524, data)
		end
	end

	class NestedPartyIDSource < Quickfix::CharField
		def initialize
			super(525)
		end

		def initialize(data)
			super(525, data)
		end
	end

	class SecondaryClOrdID < Quickfix::StringField
		def initialize
			super(526)
		end

		def initialize(data)
			super(526, data)
		end
	end

	class SecondaryExecID < Quickfix::StringField
		def initialize
			super(527)
		end

		def initialize(data)
			super(527, data)
		end
	end

	class OrderCapacity < Quickfix::CharField
		def initialize
			super(528)
		end

		def initialize(data)
			super(528, data)
		end
	end

	class OrderRestrictions < Quickfix::StringField
		def initialize
			super(529)
		end

		def initialize(data)
			super(529, data)
		end
	end

	class MassCancelRequestType < Quickfix::CharField
		def initialize
			super(530)
		end

		def initialize(data)
			super(530, data)
		end
	end

	class MassCancelResponse < Quickfix::CharField
		def initialize
			super(531)
		end

		def initialize(data)
			super(531, data)
		end
	end

	class MassCancelRejectReason < Quickfix::CharField
		def initialize
			super(532)
		end

		def initialize(data)
			super(532, data)
		end
	end

	class TotalAffectedOrders < Quickfix::IntField
		def initialize
			super(533)
		end

		def initialize(data)
			super(533, data)
		end
	end

	class NoAffectedOrders < Quickfix::IntField
		def initialize
			super(534)
		end

		def initialize(data)
			super(534, data)
		end
	end

	class AffectedOrderID < Quickfix::StringField
		def initialize
			super(535)
		end

		def initialize(data)
			super(535, data)
		end
	end

	class AffectedSecondaryOrderID < Quickfix::StringField
		def initialize
			super(536)
		end

		def initialize(data)
			super(536, data)
		end
	end

	class QuoteType < Quickfix::IntField
		def initialize
			super(537)
		end

		def initialize(data)
			super(537, data)
		end
	end

	class NestedPartyRole < Quickfix::IntField
		def initialize
			super(538)
		end

		def initialize(data)
			super(538, data)
		end
	end

	class NoNestedPartyIDs < Quickfix::IntField
		def initialize
			super(539)
		end

		def initialize(data)
			super(539, data)
		end
	end

	class TotalAccruedInterestAmt < Quickfix::DoubleField
		def initialize
			super(540)
		end

		def initialize(data)
			super(540, data)
		end
	end

	class MaturityDate < Quickfix::StringField
		def initialize
			super(541)
		end

		def initialize(data)
			super(541, data)
		end
	end

	class UnderlyingMaturityDate < Quickfix::StringField
		def initialize
			super(542)
		end

		def initialize(data)
			super(542, data)
		end
	end

	class InstrRegistry < Quickfix::StringField
		def initialize
			super(543)
		end

		def initialize(data)
			super(543, data)
		end
	end

	class CashMargin < Quickfix::CharField
		def initialize
			super(544)
		end

		def initialize(data)
			super(544, data)
		end
	end

	class NestedPartySubID < Quickfix::StringField
		def initialize
			super(545)
		end

		def initialize(data)
			super(545, data)
		end
	end

	class Scope < Quickfix::StringField
		def initialize
			super(546)
		end

		def initialize(data)
			super(546, data)
		end
	end

	class MDImplicitDelete < Quickfix::BoolField
		def initialize
			super(547)
		end

		def initialize(data)
			super(547, data)
		end
	end

	class CrossID < Quickfix::StringField
		def initialize
			super(548)
		end

		def initialize(data)
			super(548, data)
		end
	end

	class CrossType < Quickfix::IntField
		def initialize
			super(549)
		end

		def initialize(data)
			super(549, data)
		end
	end

	class CrossPrioritization < Quickfix::IntField
		def initialize
			super(550)
		end

		def initialize(data)
			super(550, data)
		end
	end

	class OrigCrossID < Quickfix::StringField
		def initialize
			super(551)
		end

		def initialize(data)
			super(551, data)
		end
	end

	class NoSides < Quickfix::IntField
		def initialize
			super(552)
		end

		def initialize(data)
			super(552, data)
		end
	end

	class Username < Quickfix::StringField
		def initialize
			super(553)
		end

		def initialize(data)
			super(553, data)
		end
	end

	class Password < Quickfix::StringField
		def initialize
			super(554)
		end

		def initialize(data)
			super(554, data)
		end
	end

	class NoLegs < Quickfix::IntField
		def initialize
			super(555)
		end

		def initialize(data)
			super(555, data)
		end
	end

	class LegCurrency < Quickfix::StringField
		def initialize
			super(556)
		end

		def initialize(data)
			super(556, data)
		end
	end

	class TotNoSecurityTypes < Quickfix::IntField
		def initialize
			super(557)
		end

		def initialize(data)
			super(557, data)
		end
	end

	class NoSecurityTypes < Quickfix::IntField
		def initialize
			super(558)
		end

		def initialize(data)
			super(558, data)
		end
	end

	class SecurityListRequestType < Quickfix::IntField
		def initialize
			super(559)
		end

		def initialize(data)
			super(559, data)
		end
	end

	class SecurityRequestResult < Quickfix::IntField
		def initialize
			super(560)
		end

		def initialize(data)
			super(560, data)
		end
	end

	class RoundLot < Quickfix::DoubleField
		def initialize
			super(561)
		end

		def initialize(data)
			super(561, data)
		end
	end

	class MinTradeVol < Quickfix::DoubleField
		def initialize
			super(562)
		end

		def initialize(data)
			super(562, data)
		end
	end

	class MultiLegRptTypeReq < Quickfix::IntField
		def initialize
			super(563)
		end

		def initialize(data)
			super(563, data)
		end
	end

	class LegPositionEffect < Quickfix::CharField
		def initialize
			super(564)
		end

		def initialize(data)
			super(564, data)
		end
	end

	class LegCoveredOrUncovered < Quickfix::IntField
		def initialize
			super(565)
		end

		def initialize(data)
			super(565, data)
		end
	end

	class LegPrice < Quickfix::DoubleField
		def initialize
			super(566)
		end

		def initialize(data)
			super(566, data)
		end
	end

	class TradSesStatusRejReason < Quickfix::IntField
		def initialize
			super(567)
		end

		def initialize(data)
			super(567, data)
		end
	end

	class TradeRequestID < Quickfix::StringField
		def initialize
			super(568)
		end

		def initialize(data)
			super(568, data)
		end
	end

	class TradeRequestType < Quickfix::IntField
		def initialize
			super(569)
		end

		def initialize(data)
			super(569, data)
		end
	end

	class PreviouslyReported < Quickfix::BoolField
		def initialize
			super(570)
		end

		def initialize(data)
			super(570, data)
		end
	end

	class TradeReportID < Quickfix::StringField
		def initialize
			super(571)
		end

		def initialize(data)
			super(571, data)
		end
	end

	class TradeReportRefID < Quickfix::StringField
		def initialize
			super(572)
		end

		def initialize(data)
			super(572, data)
		end
	end

	class MatchStatus < Quickfix::CharField
		def initialize
			super(573)
		end

		def initialize(data)
			super(573, data)
		end
	end

	class MatchType < Quickfix::StringField
		def initialize
			super(574)
		end

		def initialize(data)
			super(574, data)
		end
	end

	class OddLot < Quickfix::BoolField
		def initialize
			super(575)
		end

		def initialize(data)
			super(575, data)
		end
	end

	class NoClearingInstructions < Quickfix::IntField
		def initialize
			super(576)
		end

		def initialize(data)
			super(576, data)
		end
	end

	class ClearingInstruction < Quickfix::IntField
		def initialize
			super(577)
		end

		def initialize(data)
			super(577, data)
		end
	end

	class TradeInputSource < Quickfix::StringField
		def initialize
			super(578)
		end

		def initialize(data)
			super(578, data)
		end
	end

	class TradeInputDevice < Quickfix::StringField
		def initialize
			super(579)
		end

		def initialize(data)
			super(579, data)
		end
	end

	class NoDates < Quickfix::IntField
		def initialize
			super(580)
		end

		def initialize(data)
			super(580, data)
		end
	end

	class AccountType < Quickfix::IntField
		def initialize
			super(581)
		end

		def initialize(data)
			super(581, data)
		end
	end

	class CustOrderCapacity < Quickfix::IntField
		def initialize
			super(582)
		end

		def initialize(data)
			super(582, data)
		end
	end

	class ClOrdLinkID < Quickfix::StringField
		def initialize
			super(583)
		end

		def initialize(data)
			super(583, data)
		end
	end

	class MassStatusReqID < Quickfix::StringField
		def initialize
			super(584)
		end

		def initialize(data)
			super(584, data)
		end
	end

	class MassStatusReqType < Quickfix::IntField
		def initialize
			super(585)
		end

		def initialize(data)
			super(585, data)
		end
	end

	class OrigOrdModTime < Quickfix::UtcTimeStampField
		def initialize
			super(586)
		end

		def initialize(data)
			super(586, data)
		end
	end

	class LegSettlType < Quickfix::CharField
		def initialize
			super(587)
		end

		def initialize(data)
			super(587, data)
		end
	end

	class LegSettlDate < Quickfix::StringField
		def initialize
			super(588)
		end

		def initialize(data)
			super(588, data)
		end
	end

	class DayBookingInst < Quickfix::CharField
		def initialize
			super(589)
		end

		def initialize(data)
			super(589, data)
		end
	end

	class BookingUnit < Quickfix::CharField
		def initialize
			super(590)
		end

		def initialize(data)
			super(590, data)
		end
	end

	class PreallocMethod < Quickfix::CharField
		def initialize
			super(591)
		end

		def initialize(data)
			super(591, data)
		end
	end

	class UnderlyingCountryOfIssue < Quickfix::StringField
		def initialize
			super(592)
		end

		def initialize(data)
			super(592, data)
		end
	end

	class UnderlyingStateOrProvinceOfIssue < Quickfix::StringField
		def initialize
			super(593)
		end

		def initialize(data)
			super(593, data)
		end
	end

	class UnderlyingLocaleOfIssue < Quickfix::StringField
		def initialize
			super(594)
		end

		def initialize(data)
			super(594, data)
		end
	end

	class UnderlyingInstrRegistry < Quickfix::StringField
		def initialize
			super(595)
		end

		def initialize(data)
			super(595, data)
		end
	end

	class LegCountryOfIssue < Quickfix::StringField
		def initialize
			super(596)
		end

		def initialize(data)
			super(596, data)
		end
	end

	class LegStateOrProvinceOfIssue < Quickfix::StringField
		def initialize
			super(597)
		end

		def initialize(data)
			super(597, data)
		end
	end

	class LegLocaleOfIssue < Quickfix::StringField
		def initialize
			super(598)
		end

		def initialize(data)
			super(598, data)
		end
	end

	class LegInstrRegistry < Quickfix::StringField
		def initialize
			super(599)
		end

		def initialize(data)
			super(599, data)
		end
	end

	class LegSymbol < Quickfix::StringField
		def initialize
			super(600)
		end

		def initialize(data)
			super(600, data)
		end
	end

	class LegSymbolSfx < Quickfix::StringField
		def initialize
			super(601)
		end

		def initialize(data)
			super(601, data)
		end
	end

	class LegSecurityID < Quickfix::StringField
		def initialize
			super(602)
		end

		def initialize(data)
			super(602, data)
		end
	end

	class LegSecurityIDSource < Quickfix::StringField
		def initialize
			super(603)
		end

		def initialize(data)
			super(603, data)
		end
	end

	class NoLegSecurityAltID < Quickfix::StringField
		def initialize
			super(604)
		end

		def initialize(data)
			super(604, data)
		end
	end

	class LegSecurityAltID < Quickfix::StringField
		def initialize
			super(605)
		end

		def initialize(data)
			super(605, data)
		end
	end

	class LegSecurityAltIDSource < Quickfix::StringField
		def initialize
			super(606)
		end

		def initialize(data)
			super(606, data)
		end
	end

	class LegProduct < Quickfix::IntField
		def initialize
			super(607)
		end

		def initialize(data)
			super(607, data)
		end
	end

	class LegCFICode < Quickfix::StringField
		def initialize
			super(608)
		end

		def initialize(data)
			super(608, data)
		end
	end

	class LegSecurityType < Quickfix::StringField
		def initialize
			super(609)
		end

		def initialize(data)
			super(609, data)
		end
	end

	class LegMaturityMonthYear < Quickfix::StringField
		def initialize
			super(610)
		end

		def initialize(data)
			super(610, data)
		end
	end

	class LegMaturityDate < Quickfix::StringField
		def initialize
			super(611)
		end

		def initialize(data)
			super(611, data)
		end
	end

	class LegStrikePrice < Quickfix::DoubleField
		def initialize
			super(612)
		end

		def initialize(data)
			super(612, data)
		end
	end

	class LegOptAttribute < Quickfix::CharField
		def initialize
			super(613)
		end

		def initialize(data)
			super(613, data)
		end
	end

	class LegContractMultiplier < Quickfix::DoubleField
		def initialize
			super(614)
		end

		def initialize(data)
			super(614, data)
		end
	end

	class LegCouponRate < Quickfix::DoubleField
		def initialize
			super(615)
		end

		def initialize(data)
			super(615, data)
		end
	end

	class LegSecurityExchange < Quickfix::StringField
		def initialize
			super(616)
		end

		def initialize(data)
			super(616, data)
		end
	end

	class LegIssuer < Quickfix::StringField
		def initialize
			super(617)
		end

		def initialize(data)
			super(617, data)
		end
	end

	class EncodedLegIssuerLen < Quickfix::IntField
		def initialize
			super(618)
		end

		def initialize(data)
			super(618, data)
		end
	end

	class EncodedLegIssuer < Quickfix::StringField
		def initialize
			super(619)
		end

		def initialize(data)
			super(619, data)
		end
	end

	class LegSecurityDesc < Quickfix::StringField
		def initialize
			super(620)
		end

		def initialize(data)
			super(620, data)
		end
	end

	class EncodedLegSecurityDescLen < Quickfix::IntField
		def initialize
			super(621)
		end

		def initialize(data)
			super(621, data)
		end
	end

	class EncodedLegSecurityDesc < Quickfix::StringField
		def initialize
			super(622)
		end

		def initialize(data)
			super(622, data)
		end
	end

	class LegRatioQty < Quickfix::DoubleField
		def initialize
			super(623)
		end

		def initialize(data)
			super(623, data)
		end
	end

	class LegSide < Quickfix::CharField
		def initialize
			super(624)
		end

		def initialize(data)
			super(624, data)
		end
	end

	class TradingSessionSubID < Quickfix::StringField
		def initialize
			super(625)
		end

		def initialize(data)
			super(625, data)
		end
	end

	class AllocType < Quickfix::IntField
		def initialize
			super(626)
		end

		def initialize(data)
			super(626, data)
		end
	end

	class NoHops < Quickfix::IntField
		def initialize
			super(627)
		end

		def initialize(data)
			super(627, data)
		end
	end

	class HopCompID < Quickfix::StringField
		def initialize
			super(628)
		end

		def initialize(data)
			super(628, data)
		end
	end

	class HopSendingTime < Quickfix::UtcTimeStampField
		def initialize
			super(629)
		end

		def initialize(data)
			super(629, data)
		end
	end

	class HopRefID < Quickfix::IntField
		def initialize
			super(630)
		end

		def initialize(data)
			super(630, data)
		end
	end

	class MidPx < Quickfix::DoubleField
		def initialize
			super(631)
		end

		def initialize(data)
			super(631, data)
		end
	end

	class BidYield < Quickfix::DoubleField
		def initialize
			super(632)
		end

		def initialize(data)
			super(632, data)
		end
	end

	class MidYield < Quickfix::DoubleField
		def initialize
			super(633)
		end

		def initialize(data)
			super(633, data)
		end
	end

	class OfferYield < Quickfix::DoubleField
		def initialize
			super(634)
		end

		def initialize(data)
			super(634, data)
		end
	end

	class ClearingFeeIndicator < Quickfix::StringField
		def initialize
			super(635)
		end

		def initialize(data)
			super(635, data)
		end
	end

	class WorkingIndicator < Quickfix::BoolField
		def initialize
			super(636)
		end

		def initialize(data)
			super(636, data)
		end
	end

	class LegLastPx < Quickfix::DoubleField
		def initialize
			super(637)
		end

		def initialize(data)
			super(637, data)
		end
	end

	class PriorityIndicator < Quickfix::IntField
		def initialize
			super(638)
		end

		def initialize(data)
			super(638, data)
		end
	end

	class PriceImprovement < Quickfix::DoubleField
		def initialize
			super(639)
		end

		def initialize(data)
			super(639, data)
		end
	end

	class Price2 < Quickfix::DoubleField
		def initialize
			super(640)
		end

		def initialize(data)
			super(640, data)
		end
	end

	class LastForwardPoints2 < Quickfix::DoubleField
		def initialize
			super(641)
		end

		def initialize(data)
			super(641, data)
		end
	end

	class BidForwardPoints2 < Quickfix::DoubleField
		def initialize
			super(642)
		end

		def initialize(data)
			super(642, data)
		end
	end

	class OfferForwardPoints2 < Quickfix::DoubleField
		def initialize
			super(643)
		end

		def initialize(data)
			super(643, data)
		end
	end

	class RFQReqID < Quickfix::StringField
		def initialize
			super(644)
		end

		def initialize(data)
			super(644, data)
		end
	end

	class MktBidPx < Quickfix::DoubleField
		def initialize
			super(645)
		end

		def initialize(data)
			super(645, data)
		end
	end

	class MktOfferPx < Quickfix::DoubleField
		def initialize
			super(646)
		end

		def initialize(data)
			super(646, data)
		end
	end

	class MinBidSize < Quickfix::DoubleField
		def initialize
			super(647)
		end

		def initialize(data)
			super(647, data)
		end
	end

	class MinOfferSize < Quickfix::DoubleField
		def initialize
			super(648)
		end

		def initialize(data)
			super(648, data)
		end
	end

	class QuoteStatusReqID < Quickfix::StringField
		def initialize
			super(649)
		end

		def initialize(data)
			super(649, data)
		end
	end

	class LegalConfirm < Quickfix::BoolField
		def initialize
			super(650)
		end

		def initialize(data)
			super(650, data)
		end
	end

	class UnderlyingLastPx < Quickfix::DoubleField
		def initialize
			super(651)
		end

		def initialize(data)
			super(651, data)
		end
	end

	class UnderlyingLastQty < Quickfix::DoubleField
		def initialize
			super(652)
		end

		def initialize(data)
			super(652, data)
		end
	end

	class LegRefID < Quickfix::StringField
		def initialize
			super(654)
		end

		def initialize(data)
			super(654, data)
		end
	end

	class ContraLegRefID < Quickfix::StringField
		def initialize
			super(655)
		end

		def initialize(data)
			super(655, data)
		end
	end

	class SettlCurrBidFxRate < Quickfix::DoubleField
		def initialize
			super(656)
		end

		def initialize(data)
			super(656, data)
		end
	end

	class SettlCurrOfferFxRate < Quickfix::DoubleField
		def initialize
			super(657)
		end

		def initialize(data)
			super(657, data)
		end
	end

	class QuoteRequestRejectReason < Quickfix::IntField
		def initialize
			super(658)
		end

		def initialize(data)
			super(658, data)
		end
	end

	class SideComplianceID < Quickfix::StringField
		def initialize
			super(659)
		end

		def initialize(data)
			super(659, data)
		end
	end

	class AcctIDSource < Quickfix::IntField
		def initialize
			super(660)
		end

		def initialize(data)
			super(660, data)
		end
	end

	class AllocAcctIDSource < Quickfix::IntField
		def initialize
			super(661)
		end

		def initialize(data)
			super(661, data)
		end
	end

	class BenchmarkPrice < Quickfix::DoubleField
		def initialize
			super(662)
		end

		def initialize(data)
			super(662, data)
		end
	end

	class BenchmarkPriceType < Quickfix::IntField
		def initialize
			super(663)
		end

		def initialize(data)
			super(663, data)
		end
	end

	class ConfirmID < Quickfix::StringField
		def initialize
			super(664)
		end

		def initialize(data)
			super(664, data)
		end
	end

	class ConfirmStatus < Quickfix::IntField
		def initialize
			super(665)
		end

		def initialize(data)
			super(665, data)
		end
	end

	class ConfirmTransType < Quickfix::IntField
		def initialize
			super(666)
		end

		def initialize(data)
			super(666, data)
		end
	end

	class ContractSettlMonth < Quickfix::StringField
		def initialize
			super(667)
		end

		def initialize(data)
			super(667, data)
		end
	end

	class DeliveryForm < Quickfix::IntField
		def initialize
			super(668)
		end

		def initialize(data)
			super(668, data)
		end
	end

	class LastParPx < Quickfix::DoubleField
		def initialize
			super(669)
		end

		def initialize(data)
			super(669, data)
		end
	end

	class NoLegAllocs < Quickfix::IntField
		def initialize
			super(670)
		end

		def initialize(data)
			super(670, data)
		end
	end

	class LegAllocAccount < Quickfix::StringField
		def initialize
			super(671)
		end

		def initialize(data)
			super(671, data)
		end
	end

	class LegIndividualAllocID < Quickfix::StringField
		def initialize
			super(672)
		end

		def initialize(data)
			super(672, data)
		end
	end

	class LegAllocQty < Quickfix::DoubleField
		def initialize
			super(673)
		end

		def initialize(data)
			super(673, data)
		end
	end

	class LegAllocAcctIDSource < Quickfix::StringField
		def initialize
			super(674)
		end

		def initialize(data)
			super(674, data)
		end
	end

	class LegSettlCurrency < Quickfix::StringField
		def initialize
			super(675)
		end

		def initialize(data)
			super(675, data)
		end
	end

	class LegBenchmarkCurveCurrency < Quickfix::StringField
		def initialize
			super(676)
		end

		def initialize(data)
			super(676, data)
		end
	end

	class LegBenchmarkCurveName < Quickfix::StringField
		def initialize
			super(677)
		end

		def initialize(data)
			super(677, data)
		end
	end

	class LegBenchmarkCurvePoint < Quickfix::StringField
		def initialize
			super(678)
		end

		def initialize(data)
			super(678, data)
		end
	end

	class LegBenchmarkPrice < Quickfix::DoubleField
		def initialize
			super(679)
		end

		def initialize(data)
			super(679, data)
		end
	end

	class LegBenchmarkPriceType < Quickfix::IntField
		def initialize
			super(680)
		end

		def initialize(data)
			super(680, data)
		end
	end

	class LegBidPx < Quickfix::DoubleField
		def initialize
			super(681)
		end

		def initialize(data)
			super(681, data)
		end
	end

	class LegIOIQty < Quickfix::StringField
		def initialize
			super(682)
		end

		def initialize(data)
			super(682, data)
		end
	end

	class NoLegStipulations < Quickfix::IntField
		def initialize
			super(683)
		end

		def initialize(data)
			super(683, data)
		end
	end

	class LegOfferPx < Quickfix::DoubleField
		def initialize
			super(684)
		end

		def initialize(data)
			super(684, data)
		end
	end

	class LegOrderQty < Quickfix::DoubleField
		def initialize
			super(685)
		end

		def initialize(data)
			super(685, data)
		end
	end

	class LegPriceType < Quickfix::IntField
		def initialize
			super(686)
		end

		def initialize(data)
			super(686, data)
		end
	end

	class LegQty < Quickfix::DoubleField
		def initialize
			super(687)
		end

		def initialize(data)
			super(687, data)
		end
	end

	class LegStipulationType < Quickfix::StringField
		def initialize
			super(688)
		end

		def initialize(data)
			super(688, data)
		end
	end

	class LegStipulationValue < Quickfix::StringField
		def initialize
			super(689)
		end

		def initialize(data)
			super(689, data)
		end
	end

	class LegSwapType < Quickfix::IntField
		def initialize
			super(690)
		end

		def initialize(data)
			super(690, data)
		end
	end

	class Pool < Quickfix::StringField
		def initialize
			super(691)
		end

		def initialize(data)
			super(691, data)
		end
	end

	class QuotePriceType < Quickfix::IntField
		def initialize
			super(692)
		end

		def initialize(data)
			super(692, data)
		end
	end

	class QuoteRespID < Quickfix::StringField
		def initialize
			super(693)
		end

		def initialize(data)
			super(693, data)
		end
	end

	class QuoteRespType < Quickfix::IntField
		def initialize
			super(694)
		end

		def initialize(data)
			super(694, data)
		end
	end

	class QuoteQualifier < Quickfix::CharField
		def initialize
			super(695)
		end

		def initialize(data)
			super(695, data)
		end
	end

	class YieldRedemptionDate < Quickfix::StringField
		def initialize
			super(696)
		end

		def initialize(data)
			super(696, data)
		end
	end

	class YieldRedemptionPrice < Quickfix::DoubleField
		def initialize
			super(697)
		end

		def initialize(data)
			super(697, data)
		end
	end

	class YieldRedemptionPriceType < Quickfix::IntField
		def initialize
			super(698)
		end

		def initialize(data)
			super(698, data)
		end
	end

	class BenchmarkSecurityID < Quickfix::StringField
		def initialize
			super(699)
		end

		def initialize(data)
			super(699, data)
		end
	end

	class ReversalIndicator < Quickfix::BoolField
		def initialize
			super(700)
		end

		def initialize(data)
			super(700, data)
		end
	end

	class YieldCalcDate < Quickfix::StringField
		def initialize
			super(701)
		end

		def initialize(data)
			super(701, data)
		end
	end

	class NoPositions < Quickfix::IntField
		def initialize
			super(702)
		end

		def initialize(data)
			super(702, data)
		end
	end

	class PosType < Quickfix::StringField
		def initialize
			super(703)
		end

		def initialize(data)
			super(703, data)
		end
	end

	class LongQty < Quickfix::DoubleField
		def initialize
			super(704)
		end

		def initialize(data)
			super(704, data)
		end
	end

	class ShortQty < Quickfix::DoubleField
		def initialize
			super(705)
		end

		def initialize(data)
			super(705, data)
		end
	end

	class PosQtyStatus < Quickfix::IntField
		def initialize
			super(706)
		end

		def initialize(data)
			super(706, data)
		end
	end

	class PosAmtType < Quickfix::StringField
		def initialize
			super(707)
		end

		def initialize(data)
			super(707, data)
		end
	end

	class PosAmt < Quickfix::DoubleField
		def initialize
			super(708)
		end

		def initialize(data)
			super(708, data)
		end
	end

	class PosTransType < Quickfix::IntField
		def initialize
			super(709)
		end

		def initialize(data)
			super(709, data)
		end
	end

	class PosReqID < Quickfix::StringField
		def initialize
			super(710)
		end

		def initialize(data)
			super(710, data)
		end
	end

	class NoUnderlyings < Quickfix::IntField
		def initialize
			super(711)
		end

		def initialize(data)
			super(711, data)
		end
	end

	class PosMaintAction < Quickfix::IntField
		def initialize
			super(712)
		end

		def initialize(data)
			super(712, data)
		end
	end

	class OrigPosReqRefID < Quickfix::StringField
		def initialize
			super(713)
		end

		def initialize(data)
			super(713, data)
		end
	end

	class PosMaintRptRefID < Quickfix::StringField
		def initialize
			super(714)
		end

		def initialize(data)
			super(714, data)
		end
	end

	class ClearingBusinessDate < Quickfix::StringField
		def initialize
			super(715)
		end

		def initialize(data)
			super(715, data)
		end
	end

	class SettlSessID < Quickfix::StringField
		def initialize
			super(716)
		end

		def initialize(data)
			super(716, data)
		end
	end

	class SettlSessSubID < Quickfix::StringField
		def initialize
			super(717)
		end

		def initialize(data)
			super(717, data)
		end
	end

	class AdjustmentType < Quickfix::IntField
		def initialize
			super(718)
		end

		def initialize(data)
			super(718, data)
		end
	end

	class ContraryInstructionIndicator < Quickfix::BoolField
		def initialize
			super(719)
		end

		def initialize(data)
			super(719, data)
		end
	end

	class PriorSpreadIndicator < Quickfix::BoolField
		def initialize
			super(720)
		end

		def initialize(data)
			super(720, data)
		end
	end

	class PosMaintRptID < Quickfix::StringField
		def initialize
			super(721)
		end

		def initialize(data)
			super(721, data)
		end
	end

	class PosMaintStatus < Quickfix::IntField
		def initialize
			super(722)
		end

		def initialize(data)
			super(722, data)
		end
	end

	class PosMaintResult < Quickfix::IntField
		def initialize
			super(723)
		end

		def initialize(data)
			super(723, data)
		end
	end

	class PosReqType < Quickfix::IntField
		def initialize
			super(724)
		end

		def initialize(data)
			super(724, data)
		end
	end

	class ResponseTransportType < Quickfix::IntField
		def initialize
			super(725)
		end

		def initialize(data)
			super(725, data)
		end
	end

	class ResponseDestination < Quickfix::StringField
		def initialize
			super(726)
		end

		def initialize(data)
			super(726, data)
		end
	end

	class TotalNumPosReports < Quickfix::IntField
		def initialize
			super(727)
		end

		def initialize(data)
			super(727, data)
		end
	end

	class PosReqResult < Quickfix::IntField
		def initialize
			super(728)
		end

		def initialize(data)
			super(728, data)
		end
	end

	class PosReqStatus < Quickfix::IntField
		def initialize
			super(729)
		end

		def initialize(data)
			super(729, data)
		end
	end

	class SettlPrice < Quickfix::DoubleField
		def initialize
			super(730)
		end

		def initialize(data)
			super(730, data)
		end
	end

	class SettlPriceType < Quickfix::IntField
		def initialize
			super(731)
		end

		def initialize(data)
			super(731, data)
		end
	end

	class UnderlyingSettlPrice < Quickfix::DoubleField
		def initialize
			super(732)
		end

		def initialize(data)
			super(732, data)
		end
	end

	class UnderlyingSettlPriceType < Quickfix::IntField
		def initialize
			super(733)
		end

		def initialize(data)
			super(733, data)
		end
	end

	class PriorSettlPrice < Quickfix::DoubleField
		def initialize
			super(734)
		end

		def initialize(data)
			super(734, data)
		end
	end

	class NoQuoteQualifiers < Quickfix::IntField
		def initialize
			super(735)
		end

		def initialize(data)
			super(735, data)
		end
	end

	class AllocSettlCurrency < Quickfix::StringField
		def initialize
			super(736)
		end

		def initialize(data)
			super(736, data)
		end
	end

	class AllocSettlCurrAmt < Quickfix::DoubleField
		def initialize
			super(737)
		end

		def initialize(data)
			super(737, data)
		end
	end

	class InterestAtMaturity < Quickfix::DoubleField
		def initialize
			super(738)
		end

		def initialize(data)
			super(738, data)
		end
	end

	class LegDatedDate < Quickfix::StringField
		def initialize
			super(739)
		end

		def initialize(data)
			super(739, data)
		end
	end

	class LegPool < Quickfix::StringField
		def initialize
			super(740)
		end

		def initialize(data)
			super(740, data)
		end
	end

	class AllocInterestAtMaturity < Quickfix::DoubleField
		def initialize
			super(741)
		end

		def initialize(data)
			super(741, data)
		end
	end

	class AllocAccruedInterestAmt < Quickfix::DoubleField
		def initialize
			super(742)
		end

		def initialize(data)
			super(742, data)
		end
	end

	class DeliveryDate < Quickfix::StringField
		def initialize
			super(743)
		end

		def initialize(data)
			super(743, data)
		end
	end

	class AssignmentMethod < Quickfix::CharField
		def initialize
			super(744)
		end

		def initialize(data)
			super(744, data)
		end
	end

	class AssignmentUnit < Quickfix::DoubleField
		def initialize
			super(745)
		end

		def initialize(data)
			super(745, data)
		end
	end

	class OpenInterest < Quickfix::DoubleField
		def initialize
			super(746)
		end

		def initialize(data)
			super(746, data)
		end
	end

	class ExerciseMethod < Quickfix::CharField
		def initialize
			super(747)
		end

		def initialize(data)
			super(747, data)
		end
	end

	class TotNumTradeReports < Quickfix::IntField
		def initialize
			super(748)
		end

		def initialize(data)
			super(748, data)
		end
	end

	class TradeRequestResult < Quickfix::IntField
		def initialize
			super(749)
		end

		def initialize(data)
			super(749, data)
		end
	end

	class TradeRequestStatus < Quickfix::IntField
		def initialize
			super(750)
		end

		def initialize(data)
			super(750, data)
		end
	end

	class TradeReportRejectReason < Quickfix::IntField
		def initialize
			super(751)
		end

		def initialize(data)
			super(751, data)
		end
	end

	class SideMultiLegReportingType < Quickfix::IntField
		def initialize
			super(752)
		end

		def initialize(data)
			super(752, data)
		end
	end

	class NoPosAmt < Quickfix::IntField
		def initialize
			super(753)
		end

		def initialize(data)
			super(753, data)
		end
	end

	class AutoAcceptIndicator < Quickfix::BoolField
		def initialize
			super(754)
		end

		def initialize(data)
			super(754, data)
		end
	end

	class AllocReportID < Quickfix::StringField
		def initialize
			super(755)
		end

		def initialize(data)
			super(755, data)
		end
	end

	class NoNested2PartyIDs < Quickfix::IntField
		def initialize
			super(756)
		end

		def initialize(data)
			super(756, data)
		end
	end

	class Nested2PartyID < Quickfix::StringField
		def initialize
			super(757)
		end

		def initialize(data)
			super(757, data)
		end
	end

	class Nested2PartyIDSource < Quickfix::CharField
		def initialize
			super(758)
		end

		def initialize(data)
			super(758, data)
		end
	end

	class Nested2PartyRole < Quickfix::IntField
		def initialize
			super(759)
		end

		def initialize(data)
			super(759, data)
		end
	end

	class Nested2PartySubID < Quickfix::StringField
		def initialize
			super(760)
		end

		def initialize(data)
			super(760, data)
		end
	end

	class BenchmarkSecurityIDSource < Quickfix::StringField
		def initialize
			super(761)
		end

		def initialize(data)
			super(761, data)
		end
	end

	class SecuritySubType < Quickfix::StringField
		def initialize
			super(762)
		end

		def initialize(data)
			super(762, data)
		end
	end

	class UnderlyingSecuritySubType < Quickfix::StringField
		def initialize
			super(763)
		end

		def initialize(data)
			super(763, data)
		end
	end

	class LegSecuritySubType < Quickfix::StringField
		def initialize
			super(764)
		end

		def initialize(data)
			super(764, data)
		end
	end

	class AllowableOneSidednessPct < Quickfix::DoubleField
		def initialize
			super(765)
		end

		def initialize(data)
			super(765, data)
		end
	end

	class AllowableOneSidednessValue < Quickfix::DoubleField
		def initialize
			super(766)
		end

		def initialize(data)
			super(766, data)
		end
	end

	class AllowableOneSidednessCurr < Quickfix::StringField
		def initialize
			super(767)
		end

		def initialize(data)
			super(767, data)
		end
	end

	class NoTrdRegTimestamps < Quickfix::IntField
		def initialize
			super(768)
		end

		def initialize(data)
			super(768, data)
		end
	end

	class TrdRegTimestamp < Quickfix::UtcTimeStampField
		def initialize
			super(769)
		end

		def initialize(data)
			super(769, data)
		end
	end

	class TrdRegTimestampType < Quickfix::IntField
		def initialize
			super(770)
		end

		def initialize(data)
			super(770, data)
		end
	end

	class TrdRegTimestampOrigin < Quickfix::StringField
		def initialize
			super(771)
		end

		def initialize(data)
			super(771, data)
		end
	end

	class ConfirmRefID < Quickfix::StringField
		def initialize
			super(772)
		end

		def initialize(data)
			super(772, data)
		end
	end

	class ConfirmType < Quickfix::IntField
		def initialize
			super(773)
		end

		def initialize(data)
			super(773, data)
		end
	end

	class ConfirmRejReason < Quickfix::IntField
		def initialize
			super(774)
		end

		def initialize(data)
			super(774, data)
		end
	end

	class BookingType < Quickfix::IntField
		def initialize
			super(775)
		end

		def initialize(data)
			super(775, data)
		end
	end

	class IndividualAllocRejCode < Quickfix::IntField
		def initialize
			super(776)
		end

		def initialize(data)
			super(776, data)
		end
	end

	class SettlInstMsgID < Quickfix::StringField
		def initialize
			super(777)
		end

		def initialize(data)
			super(777, data)
		end
	end

	class NoSettlInst < Quickfix::IntField
		def initialize
			super(778)
		end

		def initialize(data)
			super(778, data)
		end
	end

	class LastUpdateTime < Quickfix::UtcTimeStampField
		def initialize
			super(779)
		end

		def initialize(data)
			super(779, data)
		end
	end

	class AllocSettlInstType < Quickfix::IntField
		def initialize
			super(780)
		end

		def initialize(data)
			super(780, data)
		end
	end

	class NoSettlPartyIDs < Quickfix::IntField
		def initialize
			super(781)
		end

		def initialize(data)
			super(781, data)
		end
	end

	class SettlPartyID < Quickfix::StringField
		def initialize
			super(782)
		end

		def initialize(data)
			super(782, data)
		end
	end

	class SettlPartyIDSource < Quickfix::CharField
		def initialize
			super(783)
		end

		def initialize(data)
			super(783, data)
		end
	end

	class SettlPartyRole < Quickfix::IntField
		def initialize
			super(784)
		end

		def initialize(data)
			super(784, data)
		end
	end

	class SettlPartySubID < Quickfix::StringField
		def initialize
			super(785)
		end

		def initialize(data)
			super(785, data)
		end
	end

	class SettlPartySubIDType < Quickfix::IntField
		def initialize
			super(786)
		end

		def initialize(data)
			super(786, data)
		end
	end

	class DlvyInstType < Quickfix::CharField
		def initialize
			super(787)
		end

		def initialize(data)
			super(787, data)
		end
	end

	class TerminationType < Quickfix::IntField
		def initialize
			super(788)
		end

		def initialize(data)
			super(788, data)
		end
	end

	class NextExpectedMsgSeqNum < Quickfix::IntField
		def initialize
			super(789)
		end

		def initialize(data)
			super(789, data)
		end
	end

	class OrdStatusReqID < Quickfix::StringField
		def initialize
			super(790)
		end

		def initialize(data)
			super(790, data)
		end
	end

	class SettlInstReqID < Quickfix::StringField
		def initialize
			super(791)
		end

		def initialize(data)
			super(791, data)
		end
	end

	class SettlInstReqRejCode < Quickfix::IntField
		def initialize
			super(792)
		end

		def initialize(data)
			super(792, data)
		end
	end

	class SecondaryAllocID < Quickfix::StringField
		def initialize
			super(793)
		end

		def initialize(data)
			super(793, data)
		end
	end

	class AllocReportType < Quickfix::IntField
		def initialize
			super(794)
		end

		def initialize(data)
			super(794, data)
		end
	end

	class AllocReportRefID < Quickfix::StringField
		def initialize
			super(795)
		end

		def initialize(data)
			super(795, data)
		end
	end

	class AllocCancReplaceReason < Quickfix::IntField
		def initialize
			super(796)
		end

		def initialize(data)
			super(796, data)
		end
	end

	class CopyMsgIndicator < Quickfix::BoolField
		def initialize
			super(797)
		end

		def initialize(data)
			super(797, data)
		end
	end

	class AllocAccountType < Quickfix::IntField
		def initialize
			super(798)
		end

		def initialize(data)
			super(798, data)
		end
	end

	class OrderAvgPx < Quickfix::DoubleField
		def initialize
			super(799)
		end

		def initialize(data)
			super(799, data)
		end
	end

	class OrderBookingQty < Quickfix::DoubleField
		def initialize
			super(800)
		end

		def initialize(data)
			super(800, data)
		end
	end

	class NoSettlPartySubIDs < Quickfix::IntField
		def initialize
			super(801)
		end

		def initialize(data)
			super(801, data)
		end
	end

	class NoPartySubIDs < Quickfix::IntField
		def initialize
			super(802)
		end

		def initialize(data)
			super(802, data)
		end
	end

	class PartySubIDType < Quickfix::IntField
		def initialize
			super(803)
		end

		def initialize(data)
			super(803, data)
		end
	end

	class NoNestedPartySubIDs < Quickfix::IntField
		def initialize
			super(804)
		end

		def initialize(data)
			super(804, data)
		end
	end

	class NestedPartySubIDType < Quickfix::IntField
		def initialize
			super(805)
		end

		def initialize(data)
			super(805, data)
		end
	end

	class NoNested2PartySubIDs < Quickfix::IntField
		def initialize
			super(806)
		end

		def initialize(data)
			super(806, data)
		end
	end

	class Nested2PartySubIDType < Quickfix::IntField
		def initialize
			super(807)
		end

		def initialize(data)
			super(807, data)
		end
	end

	class AllocIntermedReqType < Quickfix::IntField
		def initialize
			super(808)
		end

		def initialize(data)
			super(808, data)
		end
	end

	class UnderlyingPx < Quickfix::DoubleField
		def initialize
			super(810)
		end

		def initialize(data)
			super(810, data)
		end
	end

	class PriceDelta < Quickfix::DoubleField
		def initialize
			super(811)
		end

		def initialize(data)
			super(811, data)
		end
	end

	class ApplQueueMax < Quickfix::IntField
		def initialize
			super(812)
		end

		def initialize(data)
			super(812, data)
		end
	end

	class ApplQueueDepth < Quickfix::IntField
		def initialize
			super(813)
		end

		def initialize(data)
			super(813, data)
		end
	end

	class ApplQueueResolution < Quickfix::IntField
		def initialize
			super(814)
		end

		def initialize(data)
			super(814, data)
		end
	end

	class ApplQueueAction < Quickfix::IntField
		def initialize
			super(815)
		end

		def initialize(data)
			super(815, data)
		end
	end

	class NoAltMDSource < Quickfix::IntField
		def initialize
			super(816)
		end

		def initialize(data)
			super(816, data)
		end
	end

	class AltMDSourceID < Quickfix::StringField
		def initialize
			super(817)
		end

		def initialize(data)
			super(817, data)
		end
	end

	class SecondaryTradeReportID < Quickfix::StringField
		def initialize
			super(818)
		end

		def initialize(data)
			super(818, data)
		end
	end

	class AvgPxIndicator < Quickfix::IntField
		def initialize
			super(819)
		end

		def initialize(data)
			super(819, data)
		end
	end

	class TradeLinkID < Quickfix::StringField
		def initialize
			super(820)
		end

		def initialize(data)
			super(820, data)
		end
	end

	class OrderInputDevice < Quickfix::StringField
		def initialize
			super(821)
		end

		def initialize(data)
			super(821, data)
		end
	end

	class UnderlyingTradingSessionID < Quickfix::StringField
		def initialize
			super(822)
		end

		def initialize(data)
			super(822, data)
		end
	end

	class UnderlyingTradingSessionSubID < Quickfix::StringField
		def initialize
			super(823)
		end

		def initialize(data)
			super(823, data)
		end
	end

	class TradeLegRefID < Quickfix::StringField
		def initialize
			super(824)
		end

		def initialize(data)
			super(824, data)
		end
	end

	class ExchangeRule < Quickfix::StringField
		def initialize
			super(825)
		end

		def initialize(data)
			super(825, data)
		end
	end

	class TradeAllocIndicator < Quickfix::IntField
		def initialize
			super(826)
		end

		def initialize(data)
			super(826, data)
		end
	end

	class ExpirationCycle < Quickfix::IntField
		def initialize
			super(827)
		end

		def initialize(data)
			super(827, data)
		end
	end

	class TrdType < Quickfix::IntField
		def initialize
			super(828)
		end

		def initialize(data)
			super(828, data)
		end
	end

	class TrdSubType < Quickfix::IntField
		def initialize
			super(829)
		end

		def initialize(data)
			super(829, data)
		end
	end

	class TransferReason < Quickfix::StringField
		def initialize
			super(830)
		end

		def initialize(data)
			super(830, data)
		end
	end

	class AsgnReqID < Quickfix::StringField
		def initialize
			super(831)
		end

		def initialize(data)
			super(831, data)
		end
	end

	class TotNumAssignmentReports < Quickfix::IntField
		def initialize
			super(832)
		end

		def initialize(data)
			super(832, data)
		end
	end

	class AsgnRptID < Quickfix::StringField
		def initialize
			super(833)
		end

		def initialize(data)
			super(833, data)
		end
	end

	class ThresholdAmount < Quickfix::DoubleField
		def initialize
			super(834)
		end

		def initialize(data)
			super(834, data)
		end
	end

	class PegMoveType < Quickfix::IntField
		def initialize
			super(835)
		end

		def initialize(data)
			super(835, data)
		end
	end

	class PegOffsetType < Quickfix::IntField
		def initialize
			super(836)
		end

		def initialize(data)
			super(836, data)
		end
	end

	class PegLimitType < Quickfix::IntField
		def initialize
			super(837)
		end

		def initialize(data)
			super(837, data)
		end
	end

	class PegRoundDirection < Quickfix::IntField
		def initialize
			super(838)
		end

		def initialize(data)
			super(838, data)
		end
	end

	class PeggedPrice < Quickfix::DoubleField
		def initialize
			super(839)
		end

		def initialize(data)
			super(839, data)
		end
	end

	class PegScope < Quickfix::IntField
		def initialize
			super(840)
		end

		def initialize(data)
			super(840, data)
		end
	end

	class DiscretionMoveType < Quickfix::IntField
		def initialize
			super(841)
		end

		def initialize(data)
			super(841, data)
		end
	end

	class DiscretionOffsetType < Quickfix::IntField
		def initialize
			super(842)
		end

		def initialize(data)
			super(842, data)
		end
	end

	class DiscretionLimitType < Quickfix::IntField
		def initialize
			super(843)
		end

		def initialize(data)
			super(843, data)
		end
	end

	class DiscretionRoundDirection < Quickfix::IntField
		def initialize
			super(844)
		end

		def initialize(data)
			super(844, data)
		end
	end

	class DiscretionPrice < Quickfix::DoubleField
		def initialize
			super(845)
		end

		def initialize(data)
			super(845, data)
		end
	end

	class DiscretionScope < Quickfix::IntField
		def initialize
			super(846)
		end

		def initialize(data)
			super(846, data)
		end
	end

	class TargetStrategy < Quickfix::IntField
		def initialize
			super(847)
		end

		def initialize(data)
			super(847, data)
		end
	end

	class TargetStrategyParameters < Quickfix::StringField
		def initialize
			super(848)
		end

		def initialize(data)
			super(848, data)
		end
	end

	class ParticipationRate < Quickfix::DoubleField
		def initialize
			super(849)
		end

		def initialize(data)
			super(849, data)
		end
	end

	class TargetStrategyPerformance < Quickfix::DoubleField
		def initialize
			super(850)
		end

		def initialize(data)
			super(850, data)
		end
	end

	class LastLiquidityInd < Quickfix::IntField
		def initialize
			super(851)
		end

		def initialize(data)
			super(851, data)
		end
	end

	class PublishTrdIndicator < Quickfix::BoolField
		def initialize
			super(852)
		end

		def initialize(data)
			super(852, data)
		end
	end

	class ShortSaleReason < Quickfix::IntField
		def initialize
			super(853)
		end

		def initialize(data)
			super(853, data)
		end
	end

	class QtyType < Quickfix::IntField
		def initialize
			super(854)
		end

		def initialize(data)
			super(854, data)
		end
	end

	class SecondaryTrdType < Quickfix::IntField
		def initialize
			super(855)
		end

		def initialize(data)
			super(855, data)
		end
	end

	class TradeReportType < Quickfix::IntField
		def initialize
			super(856)
		end

		def initialize(data)
			super(856, data)
		end
	end

	class AllocNoOrdersType < Quickfix::IntField
		def initialize
			super(857)
		end

		def initialize(data)
			super(857, data)
		end
	end

	class SharedCommission < Quickfix::DoubleField
		def initialize
			super(858)
		end

		def initialize(data)
			super(858, data)
		end
	end

	class ConfirmReqID < Quickfix::StringField
		def initialize
			super(859)
		end

		def initialize(data)
			super(859, data)
		end
	end

	class AvgParPx < Quickfix::DoubleField
		def initialize
			super(860)
		end

		def initialize(data)
			super(860, data)
		end
	end

	class ReportedPx < Quickfix::DoubleField
		def initialize
			super(861)
		end

		def initialize(data)
			super(861, data)
		end
	end

	class NoCapacities < Quickfix::IntField
		def initialize
			super(862)
		end

		def initialize(data)
			super(862, data)
		end
	end

	class OrderCapacityQty < Quickfix::DoubleField
		def initialize
			super(863)
		end

		def initialize(data)
			super(863, data)
		end
	end

	class NoEvents < Quickfix::IntField
		def initialize
			super(864)
		end

		def initialize(data)
			super(864, data)
		end
	end

	class EventType < Quickfix::IntField
		def initialize
			super(865)
		end

		def initialize(data)
			super(865, data)
		end
	end

	class EventDate < Quickfix::StringField
		def initialize
			super(866)
		end

		def initialize(data)
			super(866, data)
		end
	end

	class EventPx < Quickfix::DoubleField
		def initialize
			super(867)
		end

		def initialize(data)
			super(867, data)
		end
	end

	class EventText < Quickfix::StringField
		def initialize
			super(868)
		end

		def initialize(data)
			super(868, data)
		end
	end

	class PctAtRisk < Quickfix::DoubleField
		def initialize
			super(869)
		end

		def initialize(data)
			super(869, data)
		end
	end

	class NoInstrAttrib < Quickfix::IntField
		def initialize
			super(870)
		end

		def initialize(data)
			super(870, data)
		end
	end

	class InstrAttribType < Quickfix::IntField
		def initialize
			super(871)
		end

		def initialize(data)
			super(871, data)
		end
	end

	class InstrAttribValue < Quickfix::StringField
		def initialize
			super(872)
		end

		def initialize(data)
			super(872, data)
		end
	end

	class DatedDate < Quickfix::StringField
		def initialize
			super(873)
		end

		def initialize(data)
			super(873, data)
		end
	end

	class InterestAccrualDate < Quickfix::StringField
		def initialize
			super(874)
		end

		def initialize(data)
			super(874, data)
		end
	end

	class CPProgram < Quickfix::IntField
		def initialize
			super(875)
		end

		def initialize(data)
			super(875, data)
		end
	end

	class CPRegType < Quickfix::StringField
		def initialize
			super(876)
		end

		def initialize(data)
			super(876, data)
		end
	end

	class UnderlyingCPProgram < Quickfix::StringField
		def initialize
			super(877)
		end

		def initialize(data)
			super(877, data)
		end
	end

	class UnderlyingCPRegType < Quickfix::StringField
		def initialize
			super(878)
		end

		def initialize(data)
			super(878, data)
		end
	end

	class UnderlyingQty < Quickfix::DoubleField
		def initialize
			super(879)
		end

		def initialize(data)
			super(879, data)
		end
	end

	class TrdMatchID < Quickfix::StringField
		def initialize
			super(880)
		end

		def initialize(data)
			super(880, data)
		end
	end

	class SecondaryTradeReportRefID < Quickfix::StringField
		def initialize
			super(881)
		end

		def initialize(data)
			super(881, data)
		end
	end

	class UnderlyingDirtyPrice < Quickfix::DoubleField
		def initialize
			super(882)
		end

		def initialize(data)
			super(882, data)
		end
	end

	class UnderlyingEndPrice < Quickfix::DoubleField
		def initialize
			super(883)
		end

		def initialize(data)
			super(883, data)
		end
	end

	class UnderlyingStartValue < Quickfix::DoubleField
		def initialize
			super(884)
		end

		def initialize(data)
			super(884, data)
		end
	end

	class UnderlyingCurrentValue < Quickfix::DoubleField
		def initialize
			super(885)
		end

		def initialize(data)
			super(885, data)
		end
	end

	class UnderlyingEndValue < Quickfix::DoubleField
		def initialize
			super(886)
		end

		def initialize(data)
			super(886, data)
		end
	end

	class NoUnderlyingStips < Quickfix::IntField
		def initialize
			super(887)
		end

		def initialize(data)
			super(887, data)
		end
	end

	class UnderlyingStipType < Quickfix::StringField
		def initialize
			super(888)
		end

		def initialize(data)
			super(888, data)
		end
	end

	class UnderlyingStipValue < Quickfix::StringField
		def initialize
			super(889)
		end

		def initialize(data)
			super(889, data)
		end
	end

	class MaturityNetMoney < Quickfix::DoubleField
		def initialize
			super(890)
		end

		def initialize(data)
			super(890, data)
		end
	end

	class MiscFeeBasis < Quickfix::IntField
		def initialize
			super(891)
		end

		def initialize(data)
			super(891, data)
		end
	end

	class TotNoAllocs < Quickfix::IntField
		def initialize
			super(892)
		end

		def initialize(data)
			super(892, data)
		end
	end

	class LastFragment < Quickfix::BoolField
		def initialize
			super(893)
		end

		def initialize(data)
			super(893, data)
		end
	end

	class CollReqID < Quickfix::StringField
		def initialize
			super(894)
		end

		def initialize(data)
			super(894, data)
		end
	end

	class CollAsgnReason < Quickfix::IntField
		def initialize
			super(895)
		end

		def initialize(data)
			super(895, data)
		end
	end

	class CollInquiryQualifier < Quickfix::IntField
		def initialize
			super(896)
		end

		def initialize(data)
			super(896, data)
		end
	end

	class NoTrades < Quickfix::IntField
		def initialize
			super(897)
		end

		def initialize(data)
			super(897, data)
		end
	end

	class MarginRatio < Quickfix::DoubleField
		def initialize
			super(898)
		end

		def initialize(data)
			super(898, data)
		end
	end

	class MarginExcess < Quickfix::DoubleField
		def initialize
			super(899)
		end

		def initialize(data)
			super(899, data)
		end
	end

	class TotalNetValue < Quickfix::DoubleField
		def initialize
			super(900)
		end

		def initialize(data)
			super(900, data)
		end
	end

	class CashOutstanding < Quickfix::DoubleField
		def initialize
			super(901)
		end

		def initialize(data)
			super(901, data)
		end
	end

	class CollAsgnID < Quickfix::StringField
		def initialize
			super(902)
		end

		def initialize(data)
			super(902, data)
		end
	end

	class CollAsgnTransType < Quickfix::IntField
		def initialize
			super(903)
		end

		def initialize(data)
			super(903, data)
		end
	end

	class CollRespID < Quickfix::StringField
		def initialize
			super(904)
		end

		def initialize(data)
			super(904, data)
		end
	end

	class CollAsgnRespType < Quickfix::IntField
		def initialize
			super(905)
		end

		def initialize(data)
			super(905, data)
		end
	end

	class CollAsgnRejectReason < Quickfix::IntField
		def initialize
			super(906)
		end

		def initialize(data)
			super(906, data)
		end
	end

	class CollAsgnRefID < Quickfix::StringField
		def initialize
			super(907)
		end

		def initialize(data)
			super(907, data)
		end
	end

	class CollRptID < Quickfix::StringField
		def initialize
			super(908)
		end

		def initialize(data)
			super(908, data)
		end
	end

	class CollInquiryID < Quickfix::StringField
		def initialize
			super(909)
		end

		def initialize(data)
			super(909, data)
		end
	end

	class CollStatus < Quickfix::IntField
		def initialize
			super(910)
		end

		def initialize(data)
			super(910, data)
		end
	end

	class TotNumReports < Quickfix::IntField
		def initialize
			super(911)
		end

		def initialize(data)
			super(911, data)
		end
	end

	class LastRptRequested < Quickfix::BoolField
		def initialize
			super(912)
		end

		def initialize(data)
			super(912, data)
		end
	end

	class AgreementDesc < Quickfix::StringField
		def initialize
			super(913)
		end

		def initialize(data)
			super(913, data)
		end
	end

	class AgreementID < Quickfix::StringField
		def initialize
			super(914)
		end

		def initialize(data)
			super(914, data)
		end
	end

	class AgreementDate < Quickfix::StringField
		def initialize
			super(915)
		end

		def initialize(data)
			super(915, data)
		end
	end

	class StartDate < Quickfix::StringField
		def initialize
			super(916)
		end

		def initialize(data)
			super(916, data)
		end
	end

	class EndDate < Quickfix::StringField
		def initialize
			super(917)
		end

		def initialize(data)
			super(917, data)
		end
	end

	class AgreementCurrency < Quickfix::StringField
		def initialize
			super(918)
		end

		def initialize(data)
			super(918, data)
		end
	end

	class DeliveryType < Quickfix::IntField
		def initialize
			super(919)
		end

		def initialize(data)
			super(919, data)
		end
	end

	class EndAccruedInterestAmt < Quickfix::DoubleField
		def initialize
			super(920)
		end

		def initialize(data)
			super(920, data)
		end
	end

	class StartCash < Quickfix::DoubleField
		def initialize
			super(921)
		end

		def initialize(data)
			super(921, data)
		end
	end

	class EndCash < Quickfix::DoubleField
		def initialize
			super(922)
		end

		def initialize(data)
			super(922, data)
		end
	end

	class UserRequestID < Quickfix::StringField
		def initialize
			super(923)
		end

		def initialize(data)
			super(923, data)
		end
	end

	class UserRequestType < Quickfix::IntField
		def initialize
			super(924)
		end

		def initialize(data)
			super(924, data)
		end
	end

	class NewPassword < Quickfix::StringField
		def initialize
			super(925)
		end

		def initialize(data)
			super(925, data)
		end
	end

	class UserStatus < Quickfix::IntField
		def initialize
			super(926)
		end

		def initialize(data)
			super(926, data)
		end
	end

	class UserStatusText < Quickfix::StringField
		def initialize
			super(927)
		end

		def initialize(data)
			super(927, data)
		end
	end

	class StatusValue < Quickfix::IntField
		def initialize
			super(928)
		end

		def initialize(data)
			super(928, data)
		end
	end

	class StatusText < Quickfix::StringField
		def initialize
			super(929)
		end

		def initialize(data)
			super(929, data)
		end
	end

	class RefCompID < Quickfix::StringField
		def initialize
			super(930)
		end

		def initialize(data)
			super(930, data)
		end
	end

	class RefSubID < Quickfix::StringField
		def initialize
			super(931)
		end

		def initialize(data)
			super(931, data)
		end
	end

	class NetworkResponseID < Quickfix::StringField
		def initialize
			super(932)
		end

		def initialize(data)
			super(932, data)
		end
	end

	class NetworkRequestID < Quickfix::StringField
		def initialize
			super(933)
		end

		def initialize(data)
			super(933, data)
		end
	end

	class LastNetworkResponseID < Quickfix::StringField
		def initialize
			super(934)
		end

		def initialize(data)
			super(934, data)
		end
	end

	class NetworkRequestType < Quickfix::IntField
		def initialize
			super(935)
		end

		def initialize(data)
			super(935, data)
		end
	end

	class NoCompIDs < Quickfix::IntField
		def initialize
			super(936)
		end

		def initialize(data)
			super(936, data)
		end
	end

	class NetworkStatusResponseType < Quickfix::IntField
		def initialize
			super(937)
		end

		def initialize(data)
			super(937, data)
		end
	end

	class NoCollInquiryQualifier < Quickfix::IntField
		def initialize
			super(938)
		end

		def initialize(data)
			super(938, data)
		end
	end

	class TrdRptStatus < Quickfix::IntField
		def initialize
			super(939)
		end

		def initialize(data)
			super(939, data)
		end
	end

	class AffirmStatus < Quickfix::IntField
		def initialize
			super(940)
		end

		def initialize(data)
			super(940, data)
		end
	end

	class UnderlyingStrikeCurrency < Quickfix::StringField
		def initialize
			super(941)
		end

		def initialize(data)
			super(941, data)
		end
	end

	class LegStrikeCurrency < Quickfix::StringField
		def initialize
			super(942)
		end

		def initialize(data)
			super(942, data)
		end
	end

	class TimeBracket < Quickfix::StringField
		def initialize
			super(943)
		end

		def initialize(data)
			super(943, data)
		end
	end

	class CollAction < Quickfix::IntField
		def initialize
			super(944)
		end

		def initialize(data)
			super(944, data)
		end
	end

	class CollInquiryStatus < Quickfix::IntField
		def initialize
			super(945)
		end

		def initialize(data)
			super(945, data)
		end
	end

	class CollInquiryResult < Quickfix::IntField
		def initialize
			super(946)
		end

		def initialize(data)
			super(946, data)
		end
	end

	class StrikeCurrency < Quickfix::StringField
		def initialize
			super(947)
		end

		def initialize(data)
			super(947, data)
		end
	end

	class NoNested3PartyIDs < Quickfix::IntField
		def initialize
			super(948)
		end

		def initialize(data)
			super(948, data)
		end
	end

	class Nested3PartyID < Quickfix::StringField
		def initialize
			super(949)
		end

		def initialize(data)
			super(949, data)
		end
	end

	class Nested3PartyIDSource < Quickfix::CharField
		def initialize
			super(950)
		end

		def initialize(data)
			super(950, data)
		end
	end

	class Nested3PartyRole < Quickfix::IntField
		def initialize
			super(951)
		end

		def initialize(data)
			super(951, data)
		end
	end

	class NoNested3PartySubIDs < Quickfix::IntField
		def initialize
			super(952)
		end

		def initialize(data)
			super(952, data)
		end
	end

	class Nested3PartySubID < Quickfix::StringField
		def initialize
			super(953)
		end

		def initialize(data)
			super(953, data)
		end
	end

	class Nested3PartySubIDType < Quickfix::IntField
		def initialize
			super(954)
		end

		def initialize(data)
			super(954, data)
		end
	end

	class LegContractSettlMonth < Quickfix::StringField
		def initialize
			super(955)
		end

		def initialize(data)
			super(955, data)
		end
	end

	class LegInterestAccrualDate < Quickfix::StringField
		def initialize
			super(956)
		end

		def initialize(data)
			super(956, data)
		end
	end

end
