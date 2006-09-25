class Account < QuickFix::StringField
	def initialize
		super(1)
	end

	def initialize(data)
		super(1, data)
	end
end

class AdvId < QuickFix::StringField
	def initialize
		super(2)
	end

	def initialize(data)
		super(2, data)
	end
end

class AdvRefID < QuickFix::StringField
	def initialize
		super(3)
	end

	def initialize(data)
		super(3, data)
	end
end

class AdvSide < QuickFix::CharField
	def initialize
		super(4)
	end

	def initialize(data)
		super(4, data)
	end
end

class AdvTransType < QuickFix::StringField
	def initialize
		super(5)
	end

	def initialize(data)
		super(5, data)
	end
end

class AvgPx < QuickFix::DoubleField
	def initialize
		super(6)
	end

	def initialize(data)
		super(6, data)
	end
end

class BeginSeqNo < QuickFix::IntField
	def initialize
		super(7)
	end

	def initialize(data)
		super(7, data)
	end
end

class BeginString < QuickFix::StringField
	def initialize
		super(8)
	end

	def initialize(data)
		super(8, data)
	end
end

class BodyLength < QuickFix::IntField
	def initialize
		super(9)
	end

	def initialize(data)
		super(9, data)
	end
end

class CheckSum < QuickFix::StringField
	def initialize
		super(10)
	end

	def initialize(data)
		super(10, data)
	end
end

class ClOrdID < QuickFix::StringField
	def initialize
		super(11)
	end

	def initialize(data)
		super(11, data)
	end
end

class Commission < QuickFix::DoubleField
	def initialize
		super(12)
	end

	def initialize(data)
		super(12, data)
	end
end

class CommType < QuickFix::CharField
	def initialize
		super(13)
	end

	def initialize(data)
		super(13, data)
	end
end

class CumQty < QuickFix::DoubleField
	def initialize
		super(14)
	end

	def initialize(data)
		super(14, data)
	end
end

class Currency < QuickFix::StringField
	def initialize
		super(15)
	end

	def initialize(data)
		super(15, data)
	end
end

class EndSeqNo < QuickFix::IntField
	def initialize
		super(16)
	end

	def initialize(data)
		super(16, data)
	end
end

class ExecID < QuickFix::StringField
	def initialize
		super(17)
	end

	def initialize(data)
		super(17, data)
	end
end

class ExecInst < QuickFix::StringField
	def initialize
		super(18)
	end

	def initialize(data)
		super(18, data)
	end
end

class ExecRefID < QuickFix::StringField
	def initialize
		super(19)
	end

	def initialize(data)
		super(19, data)
	end
end

class HandlInst < QuickFix::CharField
	def initialize
		super(21)
	end

	def initialize(data)
		super(21, data)
	end
end

class SecurityIDSource < QuickFix::StringField
	def initialize
		super(22)
	end

	def initialize(data)
		super(22, data)
	end
end

class IOIid < QuickFix::StringField
	def initialize
		super(23)
	end

	def initialize(data)
		super(23, data)
	end
end

class IOIQltyInd < QuickFix::CharField
	def initialize
		super(25)
	end

	def initialize(data)
		super(25, data)
	end
end

class IOIRefID < QuickFix::StringField
	def initialize
		super(26)
	end

	def initialize(data)
		super(26, data)
	end
end

class IOIQty < QuickFix::StringField
	def initialize
		super(27)
	end

	def initialize(data)
		super(27, data)
	end
end

class IOITransType < QuickFix::CharField
	def initialize
		super(28)
	end

	def initialize(data)
		super(28, data)
	end
end

class LastCapacity < QuickFix::CharField
	def initialize
		super(29)
	end

	def initialize(data)
		super(29, data)
	end
end

class LastMkt < QuickFix::StringField
	def initialize
		super(30)
	end

	def initialize(data)
		super(30, data)
	end
end

class LastPx < QuickFix::DoubleField
	def initialize
		super(31)
	end

	def initialize(data)
		super(31, data)
	end
end

class LastQty < QuickFix::DoubleField
	def initialize
		super(32)
	end

	def initialize(data)
		super(32, data)
	end
end

class LinesOfText < QuickFix::IntField
	def initialize
		super(33)
	end

	def initialize(data)
		super(33, data)
	end
end

class MsgSeqNum < QuickFix::IntField
	def initialize
		super(34)
	end

	def initialize(data)
		super(34, data)
	end
end

class MsgType < QuickFix::StringField
	def initialize
		super(35)
	end

	def initialize(data)
		super(35, data)
	end
end

class NewSeqNo < QuickFix::IntField
	def initialize
		super(36)
	end

	def initialize(data)
		super(36, data)
	end
end

class OrderID < QuickFix::StringField
	def initialize
		super(37)
	end

	def initialize(data)
		super(37, data)
	end
end

class OrderQty < QuickFix::DoubleField
	def initialize
		super(38)
	end

	def initialize(data)
		super(38, data)
	end
end

class OrdStatus < QuickFix::CharField
	def initialize
		super(39)
	end

	def initialize(data)
		super(39, data)
	end
end

class OrdType < QuickFix::CharField
	def initialize
		super(40)
	end

	def initialize(data)
		super(40, data)
	end
end

class OrigClOrdID < QuickFix::StringField
	def initialize
		super(41)
	end

	def initialize(data)
		super(41, data)
	end
end

class OrigTime < QuickFix::UtcTimeStampField
	def initialize
		super(42)
	end

	def initialize(data)
		super(42, data)
	end
end

class PossDupFlag < QuickFix::BooleanField
	def initialize
		super(43)
	end

	def initialize(data)
		super(43, data)
	end
end

class Price < QuickFix::DoubleField
	def initialize
		super(44)
	end

	def initialize(data)
		super(44, data)
	end
end

class RefSeqNum < QuickFix::IntField
	def initialize
		super(45)
	end

	def initialize(data)
		super(45, data)
	end
end

class SecurityID < QuickFix::StringField
	def initialize
		super(48)
	end

	def initialize(data)
		super(48, data)
	end
end

class SenderCompID < QuickFix::StringField
	def initialize
		super(49)
	end

	def initialize(data)
		super(49, data)
	end
end

class SenderSubID < QuickFix::StringField
	def initialize
		super(50)
	end

	def initialize(data)
		super(50, data)
	end
end

class SendingTime < QuickFix::UtcTimeStampField
	def initialize
		super(52)
	end

	def initialize(data)
		super(52, data)
	end
end

class Quantity < QuickFix::DoubleField
	def initialize
		super(53)
	end

	def initialize(data)
		super(53, data)
	end
end

class Side < QuickFix::CharField
	def initialize
		super(54)
	end

	def initialize(data)
		super(54, data)
	end
end

class Symbol < QuickFix::StringField
	def initialize
		super(55)
	end

	def initialize(data)
		super(55, data)
	end
end

class TargetCompID < QuickFix::StringField
	def initialize
		super(56)
	end

	def initialize(data)
		super(56, data)
	end
end

class TargetSubID < QuickFix::StringField
	def initialize
		super(57)
	end

	def initialize(data)
		super(57, data)
	end
end

class Text < QuickFix::StringField
	def initialize
		super(58)
	end

	def initialize(data)
		super(58, data)
	end
end

class TimeInForce < QuickFix::CharField
	def initialize
		super(59)
	end

	def initialize(data)
		super(59, data)
	end
end

class TransactTime < QuickFix::UtcTimeStampField
	def initialize
		super(60)
	end

	def initialize(data)
		super(60, data)
	end
end

class Urgency < QuickFix::CharField
	def initialize
		super(61)
	end

	def initialize(data)
		super(61, data)
	end
end

class ValidUntilTime < QuickFix::UtcTimeStampField
	def initialize
		super(62)
	end

	def initialize(data)
		super(62, data)
	end
end

class SettlType < QuickFix::CharField
	def initialize
		super(63)
	end

	def initialize(data)
		super(63, data)
	end
end

class SettlDate < QuickFix::StringField
	def initialize
		super(64)
	end

	def initialize(data)
		super(64, data)
	end
end

class SymbolSfx < QuickFix::StringField
	def initialize
		super(65)
	end

	def initialize(data)
		super(65, data)
	end
end

class ListID < QuickFix::StringField
	def initialize
		super(66)
	end

	def initialize(data)
		super(66, data)
	end
end

class ListSeqNo < QuickFix::IntField
	def initialize
		super(67)
	end

	def initialize(data)
		super(67, data)
	end
end

class TotNoOrders < QuickFix::IntField
	def initialize
		super(68)
	end

	def initialize(data)
		super(68, data)
	end
end

class ListExecInst < QuickFix::StringField
	def initialize
		super(69)
	end

	def initialize(data)
		super(69, data)
	end
end

class AllocID < QuickFix::StringField
	def initialize
		super(70)
	end

	def initialize(data)
		super(70, data)
	end
end

class AllocTransType < QuickFix::CharField
	def initialize
		super(71)
	end

	def initialize(data)
		super(71, data)
	end
end

class RefAllocID < QuickFix::StringField
	def initialize
		super(72)
	end

	def initialize(data)
		super(72, data)
	end
end

class NoOrders < QuickFix::IntField
	def initialize
		super(73)
	end

	def initialize(data)
		super(73, data)
	end
end

class AvgPxPrecision < QuickFix::IntField
	def initialize
		super(74)
	end

	def initialize(data)
		super(74, data)
	end
end

class TradeDate < QuickFix::StringField
	def initialize
		super(75)
	end

	def initialize(data)
		super(75, data)
	end
end

class PositionEffect < QuickFix::CharField
	def initialize
		super(77)
	end

	def initialize(data)
		super(77, data)
	end
end

class NoAllocs < QuickFix::IntField
	def initialize
		super(78)
	end

	def initialize(data)
		super(78, data)
	end
end

class AllocAccount < QuickFix::StringField
	def initialize
		super(79)
	end

	def initialize(data)
		super(79, data)
	end
end

class AllocQty < QuickFix::DoubleField
	def initialize
		super(80)
	end

	def initialize(data)
		super(80, data)
	end
end

class ProcessCode < QuickFix::CharField
	def initialize
		super(81)
	end

	def initialize(data)
		super(81, data)
	end
end

class NoRpts < QuickFix::IntField
	def initialize
		super(82)
	end

	def initialize(data)
		super(82, data)
	end
end

class RptSeq < QuickFix::IntField
	def initialize
		super(83)
	end

	def initialize(data)
		super(83, data)
	end
end

class CxlQty < QuickFix::DoubleField
	def initialize
		super(84)
	end

	def initialize(data)
		super(84, data)
	end
end

class NoDlvyInst < QuickFix::IntField
	def initialize
		super(85)
	end

	def initialize(data)
		super(85, data)
	end
end

class AllocStatus < QuickFix::IntField
	def initialize
		super(87)
	end

	def initialize(data)
		super(87, data)
	end
end

class AllocRejCode < QuickFix::IntField
	def initialize
		super(88)
	end

	def initialize(data)
		super(88, data)
	end
end

class Signature < QuickFix::StringField
	def initialize
		super(89)
	end

	def initialize(data)
		super(89, data)
	end
end

class SecureDataLen < QuickFix::IntField
	def initialize
		super(90)
	end

	def initialize(data)
		super(90, data)
	end
end

class SecureData < QuickFix::StringField
	def initialize
		super(91)
	end

	def initialize(data)
		super(91, data)
	end
end

class SignatureLength < QuickFix::IntField
	def initialize
		super(93)
	end

	def initialize(data)
		super(93, data)
	end
end

class EmailType < QuickFix::CharField
	def initialize
		super(94)
	end

	def initialize(data)
		super(94, data)
	end
end

class RawDataLength < QuickFix::IntField
	def initialize
		super(95)
	end

	def initialize(data)
		super(95, data)
	end
end

class RawData < QuickFix::StringField
	def initialize
		super(96)
	end

	def initialize(data)
		super(96, data)
	end
end

class PossResend < QuickFix::BooleanField
	def initialize
		super(97)
	end

	def initialize(data)
		super(97, data)
	end
end

class EncryptMethod < QuickFix::IntField
	def initialize
		super(98)
	end

	def initialize(data)
		super(98, data)
	end
end

class StopPx < QuickFix::DoubleField
	def initialize
		super(99)
	end

	def initialize(data)
		super(99, data)
	end
end

class ExDestination < QuickFix::StringField
	def initialize
		super(100)
	end

	def initialize(data)
		super(100, data)
	end
end

class CxlRejReason < QuickFix::IntField
	def initialize
		super(102)
	end

	def initialize(data)
		super(102, data)
	end
end

class OrdRejReason < QuickFix::IntField
	def initialize
		super(103)
	end

	def initialize(data)
		super(103, data)
	end
end

class IOIQualifier < QuickFix::CharField
	def initialize
		super(104)
	end

	def initialize(data)
		super(104, data)
	end
end

class WaveNo < QuickFix::StringField
	def initialize
		super(105)
	end

	def initialize(data)
		super(105, data)
	end
end

class Issuer < QuickFix::StringField
	def initialize
		super(106)
	end

	def initialize(data)
		super(106, data)
	end
end

class SecurityDesc < QuickFix::StringField
	def initialize
		super(107)
	end

	def initialize(data)
		super(107, data)
	end
end

class HeartBtInt < QuickFix::IntField
	def initialize
		super(108)
	end

	def initialize(data)
		super(108, data)
	end
end

class MinQty < QuickFix::DoubleField
	def initialize
		super(110)
	end

	def initialize(data)
		super(110, data)
	end
end

class MaxFloor < QuickFix::DoubleField
	def initialize
		super(111)
	end

	def initialize(data)
		super(111, data)
	end
end

class TestReqID < QuickFix::StringField
	def initialize
		super(112)
	end

	def initialize(data)
		super(112, data)
	end
end

class ReportToExch < QuickFix::BooleanField
	def initialize
		super(113)
	end

	def initialize(data)
		super(113, data)
	end
end

class LocateReqd < QuickFix::BooleanField
	def initialize
		super(114)
	end

	def initialize(data)
		super(114, data)
	end
end

class OnBehalfOfCompID < QuickFix::StringField
	def initialize
		super(115)
	end

	def initialize(data)
		super(115, data)
	end
end

class OnBehalfOfSubID < QuickFix::StringField
	def initialize
		super(116)
	end

	def initialize(data)
		super(116, data)
	end
end

class QuoteID < QuickFix::StringField
	def initialize
		super(117)
	end

	def initialize(data)
		super(117, data)
	end
end

class NetMoney < QuickFix::DoubleField
	def initialize
		super(118)
	end

	def initialize(data)
		super(118, data)
	end
end

class SettlCurrAmt < QuickFix::DoubleField
	def initialize
		super(119)
	end

	def initialize(data)
		super(119, data)
	end
end

class SettlCurrency < QuickFix::StringField
	def initialize
		super(120)
	end

	def initialize(data)
		super(120, data)
	end
end

class ForexReq < QuickFix::BooleanField
	def initialize
		super(121)
	end

	def initialize(data)
		super(121, data)
	end
end

class OrigSendingTime < QuickFix::UtcTimeStampField
	def initialize
		super(122)
	end

	def initialize(data)
		super(122, data)
	end
end

class GapFillFlag < QuickFix::BooleanField
	def initialize
		super(123)
	end

	def initialize(data)
		super(123, data)
	end
end

class NoExecs < QuickFix::IntField
	def initialize
		super(124)
	end

	def initialize(data)
		super(124, data)
	end
end

class ExpireTime < QuickFix::UtcTimeStampField
	def initialize
		super(126)
	end

	def initialize(data)
		super(126, data)
	end
end

class DKReason < QuickFix::CharField
	def initialize
		super(127)
	end

	def initialize(data)
		super(127, data)
	end
end

class DeliverToCompID < QuickFix::StringField
	def initialize
		super(128)
	end

	def initialize(data)
		super(128, data)
	end
end

class DeliverToSubID < QuickFix::StringField
	def initialize
		super(129)
	end

	def initialize(data)
		super(129, data)
	end
end

class IOINaturalFlag < QuickFix::BooleanField
	def initialize
		super(130)
	end

	def initialize(data)
		super(130, data)
	end
end

class QuoteReqID < QuickFix::StringField
	def initialize
		super(131)
	end

	def initialize(data)
		super(131, data)
	end
end

class BidPx < QuickFix::DoubleField
	def initialize
		super(132)
	end

	def initialize(data)
		super(132, data)
	end
end

class OfferPx < QuickFix::DoubleField
	def initialize
		super(133)
	end

	def initialize(data)
		super(133, data)
	end
end

class BidSize < QuickFix::DoubleField
	def initialize
		super(134)
	end

	def initialize(data)
		super(134, data)
	end
end

class OfferSize < QuickFix::DoubleField
	def initialize
		super(135)
	end

	def initialize(data)
		super(135, data)
	end
end

class NoMiscFees < QuickFix::IntField
	def initialize
		super(136)
	end

	def initialize(data)
		super(136, data)
	end
end

class MiscFeeAmt < QuickFix::DoubleField
	def initialize
		super(137)
	end

	def initialize(data)
		super(137, data)
	end
end

class MiscFeeCurr < QuickFix::StringField
	def initialize
		super(138)
	end

	def initialize(data)
		super(138, data)
	end
end

class MiscFeeType < QuickFix::CharField
	def initialize
		super(139)
	end

	def initialize(data)
		super(139, data)
	end
end

class PrevClosePx < QuickFix::DoubleField
	def initialize
		super(140)
	end

	def initialize(data)
		super(140, data)
	end
end

class ResetSeqNumFlag < QuickFix::BooleanField
	def initialize
		super(141)
	end

	def initialize(data)
		super(141, data)
	end
end

class SenderLocationID < QuickFix::StringField
	def initialize
		super(142)
	end

	def initialize(data)
		super(142, data)
	end
end

class TargetLocationID < QuickFix::StringField
	def initialize
		super(143)
	end

	def initialize(data)
		super(143, data)
	end
end

class OnBehalfOfLocationID < QuickFix::StringField
	def initialize
		super(144)
	end

	def initialize(data)
		super(144, data)
	end
end

class DeliverToLocationID < QuickFix::StringField
	def initialize
		super(145)
	end

	def initialize(data)
		super(145, data)
	end
end

class NoRelatedSym < QuickFix::IntField
	def initialize
		super(146)
	end

	def initialize(data)
		super(146, data)
	end
end

class Subject < QuickFix::StringField
	def initialize
		super(147)
	end

	def initialize(data)
		super(147, data)
	end
end

class Headline < QuickFix::StringField
	def initialize
		super(148)
	end

	def initialize(data)
		super(148, data)
	end
end

class URLLink < QuickFix::StringField
	def initialize
		super(149)
	end

	def initialize(data)
		super(149, data)
	end
end

class ExecType < QuickFix::CharField
	def initialize
		super(150)
	end

	def initialize(data)
		super(150, data)
	end
end

class LeavesQty < QuickFix::DoubleField
	def initialize
		super(151)
	end

	def initialize(data)
		super(151, data)
	end
end

class CashOrderQty < QuickFix::DoubleField
	def initialize
		super(152)
	end

	def initialize(data)
		super(152, data)
	end
end

class AllocAvgPx < QuickFix::DoubleField
	def initialize
		super(153)
	end

	def initialize(data)
		super(153, data)
	end
end

class AllocNetMoney < QuickFix::DoubleField
	def initialize
		super(154)
	end

	def initialize(data)
		super(154, data)
	end
end

class SettlCurrFxRate < QuickFix::DoubleField
	def initialize
		super(155)
	end

	def initialize(data)
		super(155, data)
	end
end

class SettlCurrFxRateCalc < QuickFix::CharField
	def initialize
		super(156)
	end

	def initialize(data)
		super(156, data)
	end
end

class NumDaysInterest < QuickFix::IntField
	def initialize
		super(157)
	end

	def initialize(data)
		super(157, data)
	end
end

class AccruedInterestRate < QuickFix::DoubleField
	def initialize
		super(158)
	end

	def initialize(data)
		super(158, data)
	end
end

class AccruedInterestAmt < QuickFix::DoubleField
	def initialize
		super(159)
	end

	def initialize(data)
		super(159, data)
	end
end

class SettlInstMode < QuickFix::CharField
	def initialize
		super(160)
	end

	def initialize(data)
		super(160, data)
	end
end

class AllocText < QuickFix::StringField
	def initialize
		super(161)
	end

	def initialize(data)
		super(161, data)
	end
end

class SettlInstID < QuickFix::StringField
	def initialize
		super(162)
	end

	def initialize(data)
		super(162, data)
	end
end

class SettlInstTransType < QuickFix::CharField
	def initialize
		super(163)
	end

	def initialize(data)
		super(163, data)
	end
end

class EmailThreadID < QuickFix::StringField
	def initialize
		super(164)
	end

	def initialize(data)
		super(164, data)
	end
end

class SettlInstSource < QuickFix::CharField
	def initialize
		super(165)
	end

	def initialize(data)
		super(165, data)
	end
end

class SecurityType < QuickFix::StringField
	def initialize
		super(167)
	end

	def initialize(data)
		super(167, data)
	end
end

class EffectiveTime < QuickFix::UtcTimeStampField
	def initialize
		super(168)
	end

	def initialize(data)
		super(168, data)
	end
end

class StandInstDbType < QuickFix::IntField
	def initialize
		super(169)
	end

	def initialize(data)
		super(169, data)
	end
end

class StandInstDbName < QuickFix::StringField
	def initialize
		super(170)
	end

	def initialize(data)
		super(170, data)
	end
end

class StandInstDbID < QuickFix::StringField
	def initialize
		super(171)
	end

	def initialize(data)
		super(171, data)
	end
end

class SettlDeliveryType < QuickFix::IntField
	def initialize
		super(172)
	end

	def initialize(data)
		super(172, data)
	end
end

class BidSpotRate < QuickFix::DoubleField
	def initialize
		super(188)
	end

	def initialize(data)
		super(188, data)
	end
end

class BidForwardPoints < QuickFix::DoubleField
	def initialize
		super(189)
	end

	def initialize(data)
		super(189, data)
	end
end

class OfferSpotRate < QuickFix::DoubleField
	def initialize
		super(190)
	end

	def initialize(data)
		super(190, data)
	end
end

class OfferForwardPoints < QuickFix::DoubleField
	def initialize
		super(191)
	end

	def initialize(data)
		super(191, data)
	end
end

class OrderQty2 < QuickFix::DoubleField
	def initialize
		super(192)
	end

	def initialize(data)
		super(192, data)
	end
end

class SettlDate2 < QuickFix::StringField
	def initialize
		super(193)
	end

	def initialize(data)
		super(193, data)
	end
end

class LastSpotRate < QuickFix::DoubleField
	def initialize
		super(194)
	end

	def initialize(data)
		super(194, data)
	end
end

class LastForwardPoints < QuickFix::DoubleField
	def initialize
		super(195)
	end

	def initialize(data)
		super(195, data)
	end
end

class AllocLinkID < QuickFix::StringField
	def initialize
		super(196)
	end

	def initialize(data)
		super(196, data)
	end
end

class AllocLinkType < QuickFix::IntField
	def initialize
		super(197)
	end

	def initialize(data)
		super(197, data)
	end
end

class SecondaryOrderID < QuickFix::StringField
	def initialize
		super(198)
	end

	def initialize(data)
		super(198, data)
	end
end

class NoIOIQualifiers < QuickFix::IntField
	def initialize
		super(199)
	end

	def initialize(data)
		super(199, data)
	end
end

class MaturityMonthYear < QuickFix::StringField
	def initialize
		super(200)
	end

	def initialize(data)
		super(200, data)
	end
end

class StrikePrice < QuickFix::DoubleField
	def initialize
		super(202)
	end

	def initialize(data)
		super(202, data)
	end
end

class CoveredOrUncovered < QuickFix::IntField
	def initialize
		super(203)
	end

	def initialize(data)
		super(203, data)
	end
end

class OptAttribute < QuickFix::CharField
	def initialize
		super(206)
	end

	def initialize(data)
		super(206, data)
	end
end

class SecurityExchange < QuickFix::StringField
	def initialize
		super(207)
	end

	def initialize(data)
		super(207, data)
	end
end

class NotifyBrokerOfCredit < QuickFix::BooleanField
	def initialize
		super(208)
	end

	def initialize(data)
		super(208, data)
	end
end

class AllocHandlInst < QuickFix::IntField
	def initialize
		super(209)
	end

	def initialize(data)
		super(209, data)
	end
end

class MaxShow < QuickFix::DoubleField
	def initialize
		super(210)
	end

	def initialize(data)
		super(210, data)
	end
end

class PegOffsetValue < QuickFix::DoubleField
	def initialize
		super(211)
	end

	def initialize(data)
		super(211, data)
	end
end

class XmlDataLen < QuickFix::IntField
	def initialize
		super(212)
	end

	def initialize(data)
		super(212, data)
	end
end

class XmlData < QuickFix::StringField
	def initialize
		super(213)
	end

	def initialize(data)
		super(213, data)
	end
end

class SettlInstRefID < QuickFix::StringField
	def initialize
		super(214)
	end

	def initialize(data)
		super(214, data)
	end
end

class NoRoutingIDs < QuickFix::IntField
	def initialize
		super(215)
	end

	def initialize(data)
		super(215, data)
	end
end

class RoutingType < QuickFix::IntField
	def initialize
		super(216)
	end

	def initialize(data)
		super(216, data)
	end
end

class RoutingID < QuickFix::StringField
	def initialize
		super(217)
	end

	def initialize(data)
		super(217, data)
	end
end

class Spread < QuickFix::DoubleField
	def initialize
		super(218)
	end

	def initialize(data)
		super(218, data)
	end
end

class BenchmarkCurveCurrency < QuickFix::StringField
	def initialize
		super(220)
	end

	def initialize(data)
		super(220, data)
	end
end

class BenchmarkCurveName < QuickFix::StringField
	def initialize
		super(221)
	end

	def initialize(data)
		super(221, data)
	end
end

class BenchmarkCurvePoint < QuickFix::StringField
	def initialize
		super(222)
	end

	def initialize(data)
		super(222, data)
	end
end

class CouponRate < QuickFix::DoubleField
	def initialize
		super(223)
	end

	def initialize(data)
		super(223, data)
	end
end

class CouponPaymentDate < QuickFix::StringField
	def initialize
		super(224)
	end

	def initialize(data)
		super(224, data)
	end
end

class IssueDate < QuickFix::StringField
	def initialize
		super(225)
	end

	def initialize(data)
		super(225, data)
	end
end

class RepurchaseTerm < QuickFix::IntField
	def initialize
		super(226)
	end

	def initialize(data)
		super(226, data)
	end
end

class RepurchaseRate < QuickFix::DoubleField
	def initialize
		super(227)
	end

	def initialize(data)
		super(227, data)
	end
end

class Factor < QuickFix::DoubleField
	def initialize
		super(228)
	end

	def initialize(data)
		super(228, data)
	end
end

class TradeOriginationDate < QuickFix::StringField
	def initialize
		super(229)
	end

	def initialize(data)
		super(229, data)
	end
end

class ExDate < QuickFix::StringField
	def initialize
		super(230)
	end

	def initialize(data)
		super(230, data)
	end
end

class ContractMultiplier < QuickFix::DoubleField
	def initialize
		super(231)
	end

	def initialize(data)
		super(231, data)
	end
end

class NoStipulations < QuickFix::IntField
	def initialize
		super(232)
	end

	def initialize(data)
		super(232, data)
	end
end

class StipulationType < QuickFix::StringField
	def initialize
		super(233)
	end

	def initialize(data)
		super(233, data)
	end
end

class StipulationValue < QuickFix::StringField
	def initialize
		super(234)
	end

	def initialize(data)
		super(234, data)
	end
end

class YieldType < QuickFix::StringField
	def initialize
		super(235)
	end

	def initialize(data)
		super(235, data)
	end
end

class Yield < QuickFix::DoubleField
	def initialize
		super(236)
	end

	def initialize(data)
		super(236, data)
	end
end

class TotalTakedown < QuickFix::DoubleField
	def initialize
		super(237)
	end

	def initialize(data)
		super(237, data)
	end
end

class Concession < QuickFix::DoubleField
	def initialize
		super(238)
	end

	def initialize(data)
		super(238, data)
	end
end

class RepoCollateralSecurityType < QuickFix::IntField
	def initialize
		super(239)
	end

	def initialize(data)
		super(239, data)
	end
end

class RedemptionDate < QuickFix::StringField
	def initialize
		super(240)
	end

	def initialize(data)
		super(240, data)
	end
end

class UnderlyingCouponPaymentDate < QuickFix::StringField
	def initialize
		super(241)
	end

	def initialize(data)
		super(241, data)
	end
end

class UnderlyingIssueDate < QuickFix::StringField
	def initialize
		super(242)
	end

	def initialize(data)
		super(242, data)
	end
end

class UnderlyingRepoCollateralSecurityType < QuickFix::IntField
	def initialize
		super(243)
	end

	def initialize(data)
		super(243, data)
	end
end

class UnderlyingRepurchaseTerm < QuickFix::IntField
	def initialize
		super(244)
	end

	def initialize(data)
		super(244, data)
	end
end

class UnderlyingRepurchaseRate < QuickFix::DoubleField
	def initialize
		super(245)
	end

	def initialize(data)
		super(245, data)
	end
end

class UnderlyingFactor < QuickFix::DoubleField
	def initialize
		super(246)
	end

	def initialize(data)
		super(246, data)
	end
end

class UnderlyingRedemptionDate < QuickFix::StringField
	def initialize
		super(247)
	end

	def initialize(data)
		super(247, data)
	end
end

class LegCouponPaymentDate < QuickFix::StringField
	def initialize
		super(248)
	end

	def initialize(data)
		super(248, data)
	end
end

class LegIssueDate < QuickFix::StringField
	def initialize
		super(249)
	end

	def initialize(data)
		super(249, data)
	end
end

class LegRepoCollateralSecurityType < QuickFix::IntField
	def initialize
		super(250)
	end

	def initialize(data)
		super(250, data)
	end
end

class LegRepurchaseTerm < QuickFix::IntField
	def initialize
		super(251)
	end

	def initialize(data)
		super(251, data)
	end
end

class LegRepurchaseRate < QuickFix::DoubleField
	def initialize
		super(252)
	end

	def initialize(data)
		super(252, data)
	end
end

class LegFactor < QuickFix::DoubleField
	def initialize
		super(253)
	end

	def initialize(data)
		super(253, data)
	end
end

class LegRedemptionDate < QuickFix::StringField
	def initialize
		super(254)
	end

	def initialize(data)
		super(254, data)
	end
end

class CreditRating < QuickFix::StringField
	def initialize
		super(255)
	end

	def initialize(data)
		super(255, data)
	end
end

class UnderlyingCreditRating < QuickFix::StringField
	def initialize
		super(256)
	end

	def initialize(data)
		super(256, data)
	end
end

class LegCreditRating < QuickFix::StringField
	def initialize
		super(257)
	end

	def initialize(data)
		super(257, data)
	end
end

class TradedFlatSwitch < QuickFix::BooleanField
	def initialize
		super(258)
	end

	def initialize(data)
		super(258, data)
	end
end

class BasisFeatureDate < QuickFix::StringField
	def initialize
		super(259)
	end

	def initialize(data)
		super(259, data)
	end
end

class BasisFeaturePrice < QuickFix::DoubleField
	def initialize
		super(260)
	end

	def initialize(data)
		super(260, data)
	end
end

class MDReqID < QuickFix::StringField
	def initialize
		super(262)
	end

	def initialize(data)
		super(262, data)
	end
end

class SubscriptionRequestType < QuickFix::CharField
	def initialize
		super(263)
	end

	def initialize(data)
		super(263, data)
	end
end

class MarketDepth < QuickFix::IntField
	def initialize
		super(264)
	end

	def initialize(data)
		super(264, data)
	end
end

class MDUpdateType < QuickFix::IntField
	def initialize
		super(265)
	end

	def initialize(data)
		super(265, data)
	end
end

class AggregatedBook < QuickFix::BooleanField
	def initialize
		super(266)
	end

	def initialize(data)
		super(266, data)
	end
end

class NoMDEntryTypes < QuickFix::IntField
	def initialize
		super(267)
	end

	def initialize(data)
		super(267, data)
	end
end

class NoMDEntries < QuickFix::IntField
	def initialize
		super(268)
	end

	def initialize(data)
		super(268, data)
	end
end

class MDEntryType < QuickFix::CharField
	def initialize
		super(269)
	end

	def initialize(data)
		super(269, data)
	end
end

class MDEntryPx < QuickFix::DoubleField
	def initialize
		super(270)
	end

	def initialize(data)
		super(270, data)
	end
end

class MDEntrySize < QuickFix::DoubleField
	def initialize
		super(271)
	end

	def initialize(data)
		super(271, data)
	end
end

class MDEntryDate < QuickFix::UtcDateOnlyField
	def initialize
		super(272)
	end

	def initialize(data)
		super(272, data)
	end
end

class MDEntryTime < QuickFix::UtcTimeOnlyField
	def initialize
		super(273)
	end

	def initialize(data)
		super(273, data)
	end
end

class TickDirection < QuickFix::CharField
	def initialize
		super(274)
	end

	def initialize(data)
		super(274, data)
	end
end

class MDMkt < QuickFix::StringField
	def initialize
		super(275)
	end

	def initialize(data)
		super(275, data)
	end
end

class QuoteCondition < QuickFix::StringField
	def initialize
		super(276)
	end

	def initialize(data)
		super(276, data)
	end
end

class TradeCondition < QuickFix::StringField
	def initialize
		super(277)
	end

	def initialize(data)
		super(277, data)
	end
end

class MDEntryID < QuickFix::StringField
	def initialize
		super(278)
	end

	def initialize(data)
		super(278, data)
	end
end

class MDUpdateAction < QuickFix::CharField
	def initialize
		super(279)
	end

	def initialize(data)
		super(279, data)
	end
end

class MDEntryRefID < QuickFix::StringField
	def initialize
		super(280)
	end

	def initialize(data)
		super(280, data)
	end
end

class MDReqRejReason < QuickFix::CharField
	def initialize
		super(281)
	end

	def initialize(data)
		super(281, data)
	end
end

class MDEntryOriginator < QuickFix::StringField
	def initialize
		super(282)
	end

	def initialize(data)
		super(282, data)
	end
end

class LocationID < QuickFix::StringField
	def initialize
		super(283)
	end

	def initialize(data)
		super(283, data)
	end
end

class DeskID < QuickFix::StringField
	def initialize
		super(284)
	end

	def initialize(data)
		super(284, data)
	end
end

class DeleteReason < QuickFix::CharField
	def initialize
		super(285)
	end

	def initialize(data)
		super(285, data)
	end
end

class OpenCloseSettlFlag < QuickFix::StringField
	def initialize
		super(286)
	end

	def initialize(data)
		super(286, data)
	end
end

class SellerDays < QuickFix::IntField
	def initialize
		super(287)
	end

	def initialize(data)
		super(287, data)
	end
end

class MDEntryBuyer < QuickFix::StringField
	def initialize
		super(288)
	end

	def initialize(data)
		super(288, data)
	end
end

class MDEntrySeller < QuickFix::StringField
	def initialize
		super(289)
	end

	def initialize(data)
		super(289, data)
	end
end

class MDEntryPositionNo < QuickFix::IntField
	def initialize
		super(290)
	end

	def initialize(data)
		super(290, data)
	end
end

class FinancialStatus < QuickFix::StringField
	def initialize
		super(291)
	end

	def initialize(data)
		super(291, data)
	end
end

class CorporateAction < QuickFix::StringField
	def initialize
		super(292)
	end

	def initialize(data)
		super(292, data)
	end
end

class DefBidSize < QuickFix::DoubleField
	def initialize
		super(293)
	end

	def initialize(data)
		super(293, data)
	end
end

class DefOfferSize < QuickFix::DoubleField
	def initialize
		super(294)
	end

	def initialize(data)
		super(294, data)
	end
end

class NoQuoteEntries < QuickFix::IntField
	def initialize
		super(295)
	end

	def initialize(data)
		super(295, data)
	end
end

class NoQuoteSets < QuickFix::IntField
	def initialize
		super(296)
	end

	def initialize(data)
		super(296, data)
	end
end

class QuoteStatus < QuickFix::IntField
	def initialize
		super(297)
	end

	def initialize(data)
		super(297, data)
	end
end

class QuoteCancelType < QuickFix::IntField
	def initialize
		super(298)
	end

	def initialize(data)
		super(298, data)
	end
end

class QuoteEntryID < QuickFix::StringField
	def initialize
		super(299)
	end

	def initialize(data)
		super(299, data)
	end
end

class QuoteRejectReason < QuickFix::IntField
	def initialize
		super(300)
	end

	def initialize(data)
		super(300, data)
	end
end

class QuoteResponseLevel < QuickFix::IntField
	def initialize
		super(301)
	end

	def initialize(data)
		super(301, data)
	end
end

class QuoteSetID < QuickFix::StringField
	def initialize
		super(302)
	end

	def initialize(data)
		super(302, data)
	end
end

class QuoteRequestType < QuickFix::IntField
	def initialize
		super(303)
	end

	def initialize(data)
		super(303, data)
	end
end

class TotNoQuoteEntries < QuickFix::IntField
	def initialize
		super(304)
	end

	def initialize(data)
		super(304, data)
	end
end

class UnderlyingSecurityIDSource < QuickFix::StringField
	def initialize
		super(305)
	end

	def initialize(data)
		super(305, data)
	end
end

class UnderlyingIssuer < QuickFix::StringField
	def initialize
		super(306)
	end

	def initialize(data)
		super(306, data)
	end
end

class UnderlyingSecurityDesc < QuickFix::StringField
	def initialize
		super(307)
	end

	def initialize(data)
		super(307, data)
	end
end

class UnderlyingSecurityExchange < QuickFix::StringField
	def initialize
		super(308)
	end

	def initialize(data)
		super(308, data)
	end
end

class UnderlyingSecurityID < QuickFix::StringField
	def initialize
		super(309)
	end

	def initialize(data)
		super(309, data)
	end
end

class UnderlyingSecurityType < QuickFix::StringField
	def initialize
		super(310)
	end

	def initialize(data)
		super(310, data)
	end
end

class UnderlyingSymbol < QuickFix::StringField
	def initialize
		super(311)
	end

	def initialize(data)
		super(311, data)
	end
end

class UnderlyingSymbolSfx < QuickFix::StringField
	def initialize
		super(312)
	end

	def initialize(data)
		super(312, data)
	end
end

class UnderlyingMaturityMonthYear < QuickFix::StringField
	def initialize
		super(313)
	end

	def initialize(data)
		super(313, data)
	end
end

class UnderlyingStrikePrice < QuickFix::DoubleField
	def initialize
		super(316)
	end

	def initialize(data)
		super(316, data)
	end
end

class UnderlyingOptAttribute < QuickFix::CharField
	def initialize
		super(317)
	end

	def initialize(data)
		super(317, data)
	end
end

class UnderlyingCurrency < QuickFix::StringField
	def initialize
		super(318)
	end

	def initialize(data)
		super(318, data)
	end
end

class SecurityReqID < QuickFix::StringField
	def initialize
		super(320)
	end

	def initialize(data)
		super(320, data)
	end
end

class SecurityRequestType < QuickFix::IntField
	def initialize
		super(321)
	end

	def initialize(data)
		super(321, data)
	end
end

class SecurityResponseID < QuickFix::StringField
	def initialize
		super(322)
	end

	def initialize(data)
		super(322, data)
	end
end

class SecurityResponseType < QuickFix::IntField
	def initialize
		super(323)
	end

	def initialize(data)
		super(323, data)
	end
end

class SecurityStatusReqID < QuickFix::StringField
	def initialize
		super(324)
	end

	def initialize(data)
		super(324, data)
	end
end

class UnsolicitedIndicator < QuickFix::BooleanField
	def initialize
		super(325)
	end

	def initialize(data)
		super(325, data)
	end
end

class SecurityTradingStatus < QuickFix::IntField
	def initialize
		super(326)
	end

	def initialize(data)
		super(326, data)
	end
end

class HaltReason < QuickFix::CharField
	def initialize
		super(327)
	end

	def initialize(data)
		super(327, data)
	end
end

class InViewOfCommon < QuickFix::BooleanField
	def initialize
		super(328)
	end

	def initialize(data)
		super(328, data)
	end
end

class DueToRelated < QuickFix::BooleanField
	def initialize
		super(329)
	end

	def initialize(data)
		super(329, data)
	end
end

class BuyVolume < QuickFix::DoubleField
	def initialize
		super(330)
	end

	def initialize(data)
		super(330, data)
	end
end

class SellVolume < QuickFix::DoubleField
	def initialize
		super(331)
	end

	def initialize(data)
		super(331, data)
	end
end

class HighPx < QuickFix::DoubleField
	def initialize
		super(332)
	end

	def initialize(data)
		super(332, data)
	end
end

class LowPx < QuickFix::DoubleField
	def initialize
		super(333)
	end

	def initialize(data)
		super(333, data)
	end
end

class Adjustment < QuickFix::IntField
	def initialize
		super(334)
	end

	def initialize(data)
		super(334, data)
	end
end

class TradSesReqID < QuickFix::StringField
	def initialize
		super(335)
	end

	def initialize(data)
		super(335, data)
	end
end

class TradingSessionID < QuickFix::StringField
	def initialize
		super(336)
	end

	def initialize(data)
		super(336, data)
	end
end

class ContraTrader < QuickFix::StringField
	def initialize
		super(337)
	end

	def initialize(data)
		super(337, data)
	end
end

class TradSesMethod < QuickFix::IntField
	def initialize
		super(338)
	end

	def initialize(data)
		super(338, data)
	end
end

class TradSesMode < QuickFix::IntField
	def initialize
		super(339)
	end

	def initialize(data)
		super(339, data)
	end
end

class TradSesStatus < QuickFix::IntField
	def initialize
		super(340)
	end

	def initialize(data)
		super(340, data)
	end
end

class TradSesStartTime < QuickFix::UtcTimeStampField
	def initialize
		super(341)
	end

	def initialize(data)
		super(341, data)
	end
end

class TradSesOpenTime < QuickFix::UtcTimeStampField
	def initialize
		super(342)
	end

	def initialize(data)
		super(342, data)
	end
end

class TradSesPreCloseTime < QuickFix::UtcTimeStampField
	def initialize
		super(343)
	end

	def initialize(data)
		super(343, data)
	end
end

class TradSesCloseTime < QuickFix::UtcTimeStampField
	def initialize
		super(344)
	end

	def initialize(data)
		super(344, data)
	end
end

class TradSesEndTime < QuickFix::UtcTimeStampField
	def initialize
		super(345)
	end

	def initialize(data)
		super(345, data)
	end
end

class NumberOfOrders < QuickFix::IntField
	def initialize
		super(346)
	end

	def initialize(data)
		super(346, data)
	end
end

class MessageEncoding < QuickFix::StringField
	def initialize
		super(347)
	end

	def initialize(data)
		super(347, data)
	end
end

class EncodedIssuerLen < QuickFix::IntField
	def initialize
		super(348)
	end

	def initialize(data)
		super(348, data)
	end
end

class EncodedIssuer < QuickFix::StringField
	def initialize
		super(349)
	end

	def initialize(data)
		super(349, data)
	end
end

class EncodedSecurityDescLen < QuickFix::IntField
	def initialize
		super(350)
	end

	def initialize(data)
		super(350, data)
	end
end

class EncodedSecurityDesc < QuickFix::StringField
	def initialize
		super(351)
	end

	def initialize(data)
		super(351, data)
	end
end

class EncodedListExecInstLen < QuickFix::IntField
	def initialize
		super(352)
	end

	def initialize(data)
		super(352, data)
	end
end

class EncodedListExecInst < QuickFix::StringField
	def initialize
		super(353)
	end

	def initialize(data)
		super(353, data)
	end
end

class EncodedTextLen < QuickFix::IntField
	def initialize
		super(354)
	end

	def initialize(data)
		super(354, data)
	end
end

class EncodedText < QuickFix::StringField
	def initialize
		super(355)
	end

	def initialize(data)
		super(355, data)
	end
end

class EncodedSubjectLen < QuickFix::IntField
	def initialize
		super(356)
	end

	def initialize(data)
		super(356, data)
	end
end

class EncodedSubject < QuickFix::StringField
	def initialize
		super(357)
	end

	def initialize(data)
		super(357, data)
	end
end

class EncodedHeadlineLen < QuickFix::IntField
	def initialize
		super(358)
	end

	def initialize(data)
		super(358, data)
	end
end

class EncodedHeadline < QuickFix::StringField
	def initialize
		super(359)
	end

	def initialize(data)
		super(359, data)
	end
end

class EncodedAllocTextLen < QuickFix::IntField
	def initialize
		super(360)
	end

	def initialize(data)
		super(360, data)
	end
end

class EncodedAllocText < QuickFix::StringField
	def initialize
		super(361)
	end

	def initialize(data)
		super(361, data)
	end
end

class EncodedUnderlyingIssuerLen < QuickFix::IntField
	def initialize
		super(362)
	end

	def initialize(data)
		super(362, data)
	end
end

class EncodedUnderlyingIssuer < QuickFix::StringField
	def initialize
		super(363)
	end

	def initialize(data)
		super(363, data)
	end
end

class EncodedUnderlyingSecurityDescLen < QuickFix::IntField
	def initialize
		super(364)
	end

	def initialize(data)
		super(364, data)
	end
end

class EncodedUnderlyingSecurityDesc < QuickFix::StringField
	def initialize
		super(365)
	end

	def initialize(data)
		super(365, data)
	end
end

class AllocPrice < QuickFix::DoubleField
	def initialize
		super(366)
	end

	def initialize(data)
		super(366, data)
	end
end

class QuoteSetValidUntilTime < QuickFix::UtcTimeStampField
	def initialize
		super(367)
	end

	def initialize(data)
		super(367, data)
	end
end

class QuoteEntryRejectReason < QuickFix::IntField
	def initialize
		super(368)
	end

	def initialize(data)
		super(368, data)
	end
end

class LastMsgSeqNumProcessed < QuickFix::IntField
	def initialize
		super(369)
	end

	def initialize(data)
		super(369, data)
	end
end

class RefTagID < QuickFix::IntField
	def initialize
		super(371)
	end

	def initialize(data)
		super(371, data)
	end
end

class RefMsgType < QuickFix::StringField
	def initialize
		super(372)
	end

	def initialize(data)
		super(372, data)
	end
end

class SessionRejectReason < QuickFix::IntField
	def initialize
		super(373)
	end

	def initialize(data)
		super(373, data)
	end
end

class BidRequestTransType < QuickFix::CharField
	def initialize
		super(374)
	end

	def initialize(data)
		super(374, data)
	end
end

class ContraBroker < QuickFix::StringField
	def initialize
		super(375)
	end

	def initialize(data)
		super(375, data)
	end
end

class ComplianceID < QuickFix::StringField
	def initialize
		super(376)
	end

	def initialize(data)
		super(376, data)
	end
end

class SolicitedFlag < QuickFix::BooleanField
	def initialize
		super(377)
	end

	def initialize(data)
		super(377, data)
	end
end

class ExecRestatementReason < QuickFix::IntField
	def initialize
		super(378)
	end

	def initialize(data)
		super(378, data)
	end
end

class BusinessRejectRefID < QuickFix::StringField
	def initialize
		super(379)
	end

	def initialize(data)
		super(379, data)
	end
end

class BusinessRejectReason < QuickFix::IntField
	def initialize
		super(380)
	end

	def initialize(data)
		super(380, data)
	end
end

class GrossTradeAmt < QuickFix::DoubleField
	def initialize
		super(381)
	end

	def initialize(data)
		super(381, data)
	end
end

class NoContraBrokers < QuickFix::IntField
	def initialize
		super(382)
	end

	def initialize(data)
		super(382, data)
	end
end

class MaxMessageSize < QuickFix::IntField
	def initialize
		super(383)
	end

	def initialize(data)
		super(383, data)
	end
end

class NoMsgTypes < QuickFix::IntField
	def initialize
		super(384)
	end

	def initialize(data)
		super(384, data)
	end
end

class MsgDirection < QuickFix::CharField
	def initialize
		super(385)
	end

	def initialize(data)
		super(385, data)
	end
end

class NoTradingSessions < QuickFix::IntField
	def initialize
		super(386)
	end

	def initialize(data)
		super(386, data)
	end
end

class TotalVolumeTraded < QuickFix::DoubleField
	def initialize
		super(387)
	end

	def initialize(data)
		super(387, data)
	end
end

class DiscretionInst < QuickFix::CharField
	def initialize
		super(388)
	end

	def initialize(data)
		super(388, data)
	end
end

class DiscretionOffsetValue < QuickFix::DoubleField
	def initialize
		super(389)
	end

	def initialize(data)
		super(389, data)
	end
end

class BidID < QuickFix::StringField
	def initialize
		super(390)
	end

	def initialize(data)
		super(390, data)
	end
end

class ClientBidID < QuickFix::StringField
	def initialize
		super(391)
	end

	def initialize(data)
		super(391, data)
	end
end

class ListName < QuickFix::StringField
	def initialize
		super(392)
	end

	def initialize(data)
		super(392, data)
	end
end

class TotNoRelatedSym < QuickFix::IntField
	def initialize
		super(393)
	end

	def initialize(data)
		super(393, data)
	end
end

class BidType < QuickFix::IntField
	def initialize
		super(394)
	end

	def initialize(data)
		super(394, data)
	end
end

class NumTickets < QuickFix::IntField
	def initialize
		super(395)
	end

	def initialize(data)
		super(395, data)
	end
end

class SideValue1 < QuickFix::DoubleField
	def initialize
		super(396)
	end

	def initialize(data)
		super(396, data)
	end
end

class SideValue2 < QuickFix::DoubleField
	def initialize
		super(397)
	end

	def initialize(data)
		super(397, data)
	end
end

class NoBidDescriptors < QuickFix::IntField
	def initialize
		super(398)
	end

	def initialize(data)
		super(398, data)
	end
end

class BidDescriptorType < QuickFix::IntField
	def initialize
		super(399)
	end

	def initialize(data)
		super(399, data)
	end
end

class BidDescriptor < QuickFix::StringField
	def initialize
		super(400)
	end

	def initialize(data)
		super(400, data)
	end
end

class SideValueInd < QuickFix::IntField
	def initialize
		super(401)
	end

	def initialize(data)
		super(401, data)
	end
end

class LiquidityPctLow < QuickFix::DoubleField
	def initialize
		super(402)
	end

	def initialize(data)
		super(402, data)
	end
end

class LiquidityPctHigh < QuickFix::DoubleField
	def initialize
		super(403)
	end

	def initialize(data)
		super(403, data)
	end
end

class LiquidityValue < QuickFix::DoubleField
	def initialize
		super(404)
	end

	def initialize(data)
		super(404, data)
	end
end

class EFPTrackingError < QuickFix::DoubleField
	def initialize
		super(405)
	end

	def initialize(data)
		super(405, data)
	end
end

class FairValue < QuickFix::DoubleField
	def initialize
		super(406)
	end

	def initialize(data)
		super(406, data)
	end
end

class OutsideIndexPct < QuickFix::DoubleField
	def initialize
		super(407)
	end

	def initialize(data)
		super(407, data)
	end
end

class ValueOfFutures < QuickFix::DoubleField
	def initialize
		super(408)
	end

	def initialize(data)
		super(408, data)
	end
end

class LiquidityIndType < QuickFix::IntField
	def initialize
		super(409)
	end

	def initialize(data)
		super(409, data)
	end
end

class WtAverageLiquidity < QuickFix::DoubleField
	def initialize
		super(410)
	end

	def initialize(data)
		super(410, data)
	end
end

class ExchangeForPhysical < QuickFix::BooleanField
	def initialize
		super(411)
	end

	def initialize(data)
		super(411, data)
	end
end

class OutMainCntryUIndex < QuickFix::DoubleField
	def initialize
		super(412)
	end

	def initialize(data)
		super(412, data)
	end
end

class CrossPercent < QuickFix::DoubleField
	def initialize
		super(413)
	end

	def initialize(data)
		super(413, data)
	end
end

class ProgRptReqs < QuickFix::IntField
	def initialize
		super(414)
	end

	def initialize(data)
		super(414, data)
	end
end

class ProgPeriodInterval < QuickFix::IntField
	def initialize
		super(415)
	end

	def initialize(data)
		super(415, data)
	end
end

class IncTaxInd < QuickFix::IntField
	def initialize
		super(416)
	end

	def initialize(data)
		super(416, data)
	end
end

class NumBidders < QuickFix::IntField
	def initialize
		super(417)
	end

	def initialize(data)
		super(417, data)
	end
end

class BidTradeType < QuickFix::CharField
	def initialize
		super(418)
	end

	def initialize(data)
		super(418, data)
	end
end

class BasisPxType < QuickFix::CharField
	def initialize
		super(419)
	end

	def initialize(data)
		super(419, data)
	end
end

class NoBidComponents < QuickFix::IntField
	def initialize
		super(420)
	end

	def initialize(data)
		super(420, data)
	end
end

class Country < QuickFix::StringField
	def initialize
		super(421)
	end

	def initialize(data)
		super(421, data)
	end
end

class TotNoStrikes < QuickFix::IntField
	def initialize
		super(422)
	end

	def initialize(data)
		super(422, data)
	end
end

class PriceType < QuickFix::IntField
	def initialize
		super(423)
	end

	def initialize(data)
		super(423, data)
	end
end

class DayOrderQty < QuickFix::DoubleField
	def initialize
		super(424)
	end

	def initialize(data)
		super(424, data)
	end
end

class DayCumQty < QuickFix::DoubleField
	def initialize
		super(425)
	end

	def initialize(data)
		super(425, data)
	end
end

class DayAvgPx < QuickFix::DoubleField
	def initialize
		super(426)
	end

	def initialize(data)
		super(426, data)
	end
end

class GTBookingInst < QuickFix::IntField
	def initialize
		super(427)
	end

	def initialize(data)
		super(427, data)
	end
end

class NoStrikes < QuickFix::IntField
	def initialize
		super(428)
	end

	def initialize(data)
		super(428, data)
	end
end

class ListStatusType < QuickFix::IntField
	def initialize
		super(429)
	end

	def initialize(data)
		super(429, data)
	end
end

class NetGrossInd < QuickFix::IntField
	def initialize
		super(430)
	end

	def initialize(data)
		super(430, data)
	end
end

class ListOrderStatus < QuickFix::IntField
	def initialize
		super(431)
	end

	def initialize(data)
		super(431, data)
	end
end

class ExpireDate < QuickFix::StringField
	def initialize
		super(432)
	end

	def initialize(data)
		super(432, data)
	end
end

class ListExecInstType < QuickFix::CharField
	def initialize
		super(433)
	end

	def initialize(data)
		super(433, data)
	end
end

class CxlRejResponseTo < QuickFix::CharField
	def initialize
		super(434)
	end

	def initialize(data)
		super(434, data)
	end
end

class UnderlyingCouponRate < QuickFix::DoubleField
	def initialize
		super(435)
	end

	def initialize(data)
		super(435, data)
	end
end

class UnderlyingContractMultiplier < QuickFix::DoubleField
	def initialize
		super(436)
	end

	def initialize(data)
		super(436, data)
	end
end

class ContraTradeQty < QuickFix::DoubleField
	def initialize
		super(437)
	end

	def initialize(data)
		super(437, data)
	end
end

class ContraTradeTime < QuickFix::UtcTimeStampField
	def initialize
		super(438)
	end

	def initialize(data)
		super(438, data)
	end
end

class LiquidityNumSecurities < QuickFix::IntField
	def initialize
		super(441)
	end

	def initialize(data)
		super(441, data)
	end
end

class MultiLegReportingType < QuickFix::CharField
	def initialize
		super(442)
	end

	def initialize(data)
		super(442, data)
	end
end

class StrikeTime < QuickFix::UtcTimeStampField
	def initialize
		super(443)
	end

	def initialize(data)
		super(443, data)
	end
end

class ListStatusText < QuickFix::StringField
	def initialize
		super(444)
	end

	def initialize(data)
		super(444, data)
	end
end

class EncodedListStatusTextLen < QuickFix::IntField
	def initialize
		super(445)
	end

	def initialize(data)
		super(445, data)
	end
end

class EncodedListStatusText < QuickFix::StringField
	def initialize
		super(446)
	end

	def initialize(data)
		super(446, data)
	end
end

class PartyIDSource < QuickFix::CharField
	def initialize
		super(447)
	end

	def initialize(data)
		super(447, data)
	end
end

class PartyID < QuickFix::StringField
	def initialize
		super(448)
	end

	def initialize(data)
		super(448, data)
	end
end

class NetChgPrevDay < QuickFix::DoubleField
	def initialize
		super(451)
	end

	def initialize(data)
		super(451, data)
	end
end

class PartyRole < QuickFix::IntField
	def initialize
		super(452)
	end

	def initialize(data)
		super(452, data)
	end
end

class NoPartyIDs < QuickFix::IntField
	def initialize
		super(453)
	end

	def initialize(data)
		super(453, data)
	end
end

class NoSecurityAltID < QuickFix::IntField
	def initialize
		super(454)
	end

	def initialize(data)
		super(454, data)
	end
end

class SecurityAltID < QuickFix::StringField
	def initialize
		super(455)
	end

	def initialize(data)
		super(455, data)
	end
end

class SecurityAltIDSource < QuickFix::StringField
	def initialize
		super(456)
	end

	def initialize(data)
		super(456, data)
	end
end

class NoUnderlyingSecurityAltID < QuickFix::IntField
	def initialize
		super(457)
	end

	def initialize(data)
		super(457, data)
	end
end

class UnderlyingSecurityAltID < QuickFix::StringField
	def initialize
		super(458)
	end

	def initialize(data)
		super(458, data)
	end
end

class UnderlyingSecurityAltIDSource < QuickFix::StringField
	def initialize
		super(459)
	end

	def initialize(data)
		super(459, data)
	end
end

class Product < QuickFix::IntField
	def initialize
		super(460)
	end

	def initialize(data)
		super(460, data)
	end
end

class CFICode < QuickFix::StringField
	def initialize
		super(461)
	end

	def initialize(data)
		super(461, data)
	end
end

class UnderlyingProduct < QuickFix::IntField
	def initialize
		super(462)
	end

	def initialize(data)
		super(462, data)
	end
end

class UnderlyingCFICode < QuickFix::StringField
	def initialize
		super(463)
	end

	def initialize(data)
		super(463, data)
	end
end

class TestMessageIndicator < QuickFix::BooleanField
	def initialize
		super(464)
	end

	def initialize(data)
		super(464, data)
	end
end

class QuantityType < QuickFix::IntField
	def initialize
		super(465)
	end

	def initialize(data)
		super(465, data)
	end
end

class BookingRefID < QuickFix::StringField
	def initialize
		super(466)
	end

	def initialize(data)
		super(466, data)
	end
end

class IndividualAllocID < QuickFix::StringField
	def initialize
		super(467)
	end

	def initialize(data)
		super(467, data)
	end
end

class RoundingDirection < QuickFix::CharField
	def initialize
		super(468)
	end

	def initialize(data)
		super(468, data)
	end
end

class RoundingModulus < QuickFix::DoubleField
	def initialize
		super(469)
	end

	def initialize(data)
		super(469, data)
	end
end

class CountryOfIssue < QuickFix::StringField
	def initialize
		super(470)
	end

	def initialize(data)
		super(470, data)
	end
end

class StateOrProvinceOfIssue < QuickFix::StringField
	def initialize
		super(471)
	end

	def initialize(data)
		super(471, data)
	end
end

class LocaleOfIssue < QuickFix::StringField
	def initialize
		super(472)
	end

	def initialize(data)
		super(472, data)
	end
end

class NoRegistDtls < QuickFix::IntField
	def initialize
		super(473)
	end

	def initialize(data)
		super(473, data)
	end
end

class MailingDtls < QuickFix::StringField
	def initialize
		super(474)
	end

	def initialize(data)
		super(474, data)
	end
end

class InvestorCountryOfResidence < QuickFix::StringField
	def initialize
		super(475)
	end

	def initialize(data)
		super(475, data)
	end
end

class PaymentRef < QuickFix::StringField
	def initialize
		super(476)
	end

	def initialize(data)
		super(476, data)
	end
end

class DistribPaymentMethod < QuickFix::IntField
	def initialize
		super(477)
	end

	def initialize(data)
		super(477, data)
	end
end

class CashDistribCurr < QuickFix::StringField
	def initialize
		super(478)
	end

	def initialize(data)
		super(478, data)
	end
end

class CommCurrency < QuickFix::StringField
	def initialize
		super(479)
	end

	def initialize(data)
		super(479, data)
	end
end

class CancellationRights < QuickFix::CharField
	def initialize
		super(480)
	end

	def initialize(data)
		super(480, data)
	end
end

class MoneyLaunderingStatus < QuickFix::CharField
	def initialize
		super(481)
	end

	def initialize(data)
		super(481, data)
	end
end

class MailingInst < QuickFix::StringField
	def initialize
		super(482)
	end

	def initialize(data)
		super(482, data)
	end
end

class TransBkdTime < QuickFix::UtcTimeStampField
	def initialize
		super(483)
	end

	def initialize(data)
		super(483, data)
	end
end

class ExecPriceType < QuickFix::CharField
	def initialize
		super(484)
	end

	def initialize(data)
		super(484, data)
	end
end

class ExecPriceAdjustment < QuickFix::DoubleField
	def initialize
		super(485)
	end

	def initialize(data)
		super(485, data)
	end
end

class DateOfBirth < QuickFix::StringField
	def initialize
		super(486)
	end

	def initialize(data)
		super(486, data)
	end
end

class TradeReportTransType < QuickFix::IntField
	def initialize
		super(487)
	end

	def initialize(data)
		super(487, data)
	end
end

class CardHolderName < QuickFix::StringField
	def initialize
		super(488)
	end

	def initialize(data)
		super(488, data)
	end
end

class CardNumber < QuickFix::StringField
	def initialize
		super(489)
	end

	def initialize(data)
		super(489, data)
	end
end

class CardExpDate < QuickFix::StringField
	def initialize
		super(490)
	end

	def initialize(data)
		super(490, data)
	end
end

class CardIssNum < QuickFix::StringField
	def initialize
		super(491)
	end

	def initialize(data)
		super(491, data)
	end
end

class PaymentMethod < QuickFix::IntField
	def initialize
		super(492)
	end

	def initialize(data)
		super(492, data)
	end
end

class RegistAcctType < QuickFix::StringField
	def initialize
		super(493)
	end

	def initialize(data)
		super(493, data)
	end
end

class Designation < QuickFix::StringField
	def initialize
		super(494)
	end

	def initialize(data)
		super(494, data)
	end
end

class TaxAdvantageType < QuickFix::IntField
	def initialize
		super(495)
	end

	def initialize(data)
		super(495, data)
	end
end

class RegistRejReasonText < QuickFix::StringField
	def initialize
		super(496)
	end

	def initialize(data)
		super(496, data)
	end
end

class FundRenewWaiv < QuickFix::CharField
	def initialize
		super(497)
	end

	def initialize(data)
		super(497, data)
	end
end

class CashDistribAgentName < QuickFix::StringField
	def initialize
		super(498)
	end

	def initialize(data)
		super(498, data)
	end
end

class CashDistribAgentCode < QuickFix::StringField
	def initialize
		super(499)
	end

	def initialize(data)
		super(499, data)
	end
end

class CashDistribAgentAcctNumber < QuickFix::StringField
	def initialize
		super(500)
	end

	def initialize(data)
		super(500, data)
	end
end

class CashDistribPayRef < QuickFix::StringField
	def initialize
		super(501)
	end

	def initialize(data)
		super(501, data)
	end
end

class CashDistribAgentAcctName < QuickFix::StringField
	def initialize
		super(502)
	end

	def initialize(data)
		super(502, data)
	end
end

class CardStartDate < QuickFix::StringField
	def initialize
		super(503)
	end

	def initialize(data)
		super(503, data)
	end
end

class PaymentDate < QuickFix::StringField
	def initialize
		super(504)
	end

	def initialize(data)
		super(504, data)
	end
end

class PaymentRemitterID < QuickFix::StringField
	def initialize
		super(505)
	end

	def initialize(data)
		super(505, data)
	end
end

class RegistStatus < QuickFix::CharField
	def initialize
		super(506)
	end

	def initialize(data)
		super(506, data)
	end
end

class RegistRejReasonCode < QuickFix::IntField
	def initialize
		super(507)
	end

	def initialize(data)
		super(507, data)
	end
end

class RegistRefID < QuickFix::StringField
	def initialize
		super(508)
	end

	def initialize(data)
		super(508, data)
	end
end

class RegistDtls < QuickFix::StringField
	def initialize
		super(509)
	end

	def initialize(data)
		super(509, data)
	end
end

class NoDistribInsts < QuickFix::IntField
	def initialize
		super(510)
	end

	def initialize(data)
		super(510, data)
	end
end

class RegistEmail < QuickFix::StringField
	def initialize
		super(511)
	end

	def initialize(data)
		super(511, data)
	end
end

class DistribPercentage < QuickFix::DoubleField
	def initialize
		super(512)
	end

	def initialize(data)
		super(512, data)
	end
end

class RegistID < QuickFix::StringField
	def initialize
		super(513)
	end

	def initialize(data)
		super(513, data)
	end
end

class RegistTransType < QuickFix::CharField
	def initialize
		super(514)
	end

	def initialize(data)
		super(514, data)
	end
end

class ExecValuationPoint < QuickFix::UtcTimeStampField
	def initialize
		super(515)
	end

	def initialize(data)
		super(515, data)
	end
end

class OrderPercent < QuickFix::DoubleField
	def initialize
		super(516)
	end

	def initialize(data)
		super(516, data)
	end
end

class OwnershipType < QuickFix::CharField
	def initialize
		super(517)
	end

	def initialize(data)
		super(517, data)
	end
end

class NoContAmts < QuickFix::IntField
	def initialize
		super(518)
	end

	def initialize(data)
		super(518, data)
	end
end

class ContAmtType < QuickFix::IntField
	def initialize
		super(519)
	end

	def initialize(data)
		super(519, data)
	end
end

class ContAmtValue < QuickFix::DoubleField
	def initialize
		super(520)
	end

	def initialize(data)
		super(520, data)
	end
end

class ContAmtCurr < QuickFix::StringField
	def initialize
		super(521)
	end

	def initialize(data)
		super(521, data)
	end
end

class OwnerType < QuickFix::IntField
	def initialize
		super(522)
	end

	def initialize(data)
		super(522, data)
	end
end

class PartySubID < QuickFix::StringField
	def initialize
		super(523)
	end

	def initialize(data)
		super(523, data)
	end
end

class NestedPartyID < QuickFix::StringField
	def initialize
		super(524)
	end

	def initialize(data)
		super(524, data)
	end
end

class NestedPartyIDSource < QuickFix::CharField
	def initialize
		super(525)
	end

	def initialize(data)
		super(525, data)
	end
end

class SecondaryClOrdID < QuickFix::StringField
	def initialize
		super(526)
	end

	def initialize(data)
		super(526, data)
	end
end

class SecondaryExecID < QuickFix::StringField
	def initialize
		super(527)
	end

	def initialize(data)
		super(527, data)
	end
end

class OrderCapacity < QuickFix::CharField
	def initialize
		super(528)
	end

	def initialize(data)
		super(528, data)
	end
end

class OrderRestrictions < QuickFix::StringField
	def initialize
		super(529)
	end

	def initialize(data)
		super(529, data)
	end
end

class MassCancelRequestType < QuickFix::CharField
	def initialize
		super(530)
	end

	def initialize(data)
		super(530, data)
	end
end

class MassCancelResponse < QuickFix::CharField
	def initialize
		super(531)
	end

	def initialize(data)
		super(531, data)
	end
end

class MassCancelRejectReason < QuickFix::CharField
	def initialize
		super(532)
	end

	def initialize(data)
		super(532, data)
	end
end

class TotalAffectedOrders < QuickFix::IntField
	def initialize
		super(533)
	end

	def initialize(data)
		super(533, data)
	end
end

class NoAffectedOrders < QuickFix::IntField
	def initialize
		super(534)
	end

	def initialize(data)
		super(534, data)
	end
end

class AffectedOrderID < QuickFix::StringField
	def initialize
		super(535)
	end

	def initialize(data)
		super(535, data)
	end
end

class AffectedSecondaryOrderID < QuickFix::StringField
	def initialize
		super(536)
	end

	def initialize(data)
		super(536, data)
	end
end

class QuoteType < QuickFix::IntField
	def initialize
		super(537)
	end

	def initialize(data)
		super(537, data)
	end
end

class NestedPartyRole < QuickFix::IntField
	def initialize
		super(538)
	end

	def initialize(data)
		super(538, data)
	end
end

class NoNestedPartyIDs < QuickFix::IntField
	def initialize
		super(539)
	end

	def initialize(data)
		super(539, data)
	end
end

class TotalAccruedInterestAmt < QuickFix::DoubleField
	def initialize
		super(540)
	end

	def initialize(data)
		super(540, data)
	end
end

class MaturityDate < QuickFix::StringField
	def initialize
		super(541)
	end

	def initialize(data)
		super(541, data)
	end
end

class UnderlyingMaturityDate < QuickFix::StringField
	def initialize
		super(542)
	end

	def initialize(data)
		super(542, data)
	end
end

class InstrRegistry < QuickFix::StringField
	def initialize
		super(543)
	end

	def initialize(data)
		super(543, data)
	end
end

class CashMargin < QuickFix::CharField
	def initialize
		super(544)
	end

	def initialize(data)
		super(544, data)
	end
end

class NestedPartySubID < QuickFix::StringField
	def initialize
		super(545)
	end

	def initialize(data)
		super(545, data)
	end
end

class Scope < QuickFix::StringField
	def initialize
		super(546)
	end

	def initialize(data)
		super(546, data)
	end
end

class MDImplicitDelete < QuickFix::BooleanField
	def initialize
		super(547)
	end

	def initialize(data)
		super(547, data)
	end
end

class CrossID < QuickFix::StringField
	def initialize
		super(548)
	end

	def initialize(data)
		super(548, data)
	end
end

class CrossType < QuickFix::IntField
	def initialize
		super(549)
	end

	def initialize(data)
		super(549, data)
	end
end

class CrossPrioritization < QuickFix::IntField
	def initialize
		super(550)
	end

	def initialize(data)
		super(550, data)
	end
end

class OrigCrossID < QuickFix::StringField
	def initialize
		super(551)
	end

	def initialize(data)
		super(551, data)
	end
end

class NoSides < QuickFix::IntField
	def initialize
		super(552)
	end

	def initialize(data)
		super(552, data)
	end
end

class Username < QuickFix::StringField
	def initialize
		super(553)
	end

	def initialize(data)
		super(553, data)
	end
end

class Password < QuickFix::StringField
	def initialize
		super(554)
	end

	def initialize(data)
		super(554, data)
	end
end

class NoLegs < QuickFix::IntField
	def initialize
		super(555)
	end

	def initialize(data)
		super(555, data)
	end
end

class LegCurrency < QuickFix::StringField
	def initialize
		super(556)
	end

	def initialize(data)
		super(556, data)
	end
end

class TotNoSecurityTypes < QuickFix::IntField
	def initialize
		super(557)
	end

	def initialize(data)
		super(557, data)
	end
end

class NoSecurityTypes < QuickFix::IntField
	def initialize
		super(558)
	end

	def initialize(data)
		super(558, data)
	end
end

class SecurityListRequestType < QuickFix::IntField
	def initialize
		super(559)
	end

	def initialize(data)
		super(559, data)
	end
end

class SecurityRequestResult < QuickFix::IntField
	def initialize
		super(560)
	end

	def initialize(data)
		super(560, data)
	end
end

class RoundLot < QuickFix::DoubleField
	def initialize
		super(561)
	end

	def initialize(data)
		super(561, data)
	end
end

class MinTradeVol < QuickFix::DoubleField
	def initialize
		super(562)
	end

	def initialize(data)
		super(562, data)
	end
end

class MultiLegRptTypeReq < QuickFix::IntField
	def initialize
		super(563)
	end

	def initialize(data)
		super(563, data)
	end
end

class LegPositionEffect < QuickFix::CharField
	def initialize
		super(564)
	end

	def initialize(data)
		super(564, data)
	end
end

class LegCoveredOrUncovered < QuickFix::IntField
	def initialize
		super(565)
	end

	def initialize(data)
		super(565, data)
	end
end

class LegPrice < QuickFix::DoubleField
	def initialize
		super(566)
	end

	def initialize(data)
		super(566, data)
	end
end

class TradSesStatusRejReason < QuickFix::IntField
	def initialize
		super(567)
	end

	def initialize(data)
		super(567, data)
	end
end

class TradeRequestID < QuickFix::StringField
	def initialize
		super(568)
	end

	def initialize(data)
		super(568, data)
	end
end

class TradeRequestType < QuickFix::IntField
	def initialize
		super(569)
	end

	def initialize(data)
		super(569, data)
	end
end

class PreviouslyReported < QuickFix::BooleanField
	def initialize
		super(570)
	end

	def initialize(data)
		super(570, data)
	end
end

class TradeReportID < QuickFix::StringField
	def initialize
		super(571)
	end

	def initialize(data)
		super(571, data)
	end
end

class TradeReportRefID < QuickFix::StringField
	def initialize
		super(572)
	end

	def initialize(data)
		super(572, data)
	end
end

class MatchStatus < QuickFix::CharField
	def initialize
		super(573)
	end

	def initialize(data)
		super(573, data)
	end
end

class MatchType < QuickFix::StringField
	def initialize
		super(574)
	end

	def initialize(data)
		super(574, data)
	end
end

class OddLot < QuickFix::BooleanField
	def initialize
		super(575)
	end

	def initialize(data)
		super(575, data)
	end
end

class NoClearingInstructions < QuickFix::IntField
	def initialize
		super(576)
	end

	def initialize(data)
		super(576, data)
	end
end

class ClearingInstruction < QuickFix::IntField
	def initialize
		super(577)
	end

	def initialize(data)
		super(577, data)
	end
end

class TradeInputSource < QuickFix::StringField
	def initialize
		super(578)
	end

	def initialize(data)
		super(578, data)
	end
end

class TradeInputDevice < QuickFix::StringField
	def initialize
		super(579)
	end

	def initialize(data)
		super(579, data)
	end
end

class NoDates < QuickFix::IntField
	def initialize
		super(580)
	end

	def initialize(data)
		super(580, data)
	end
end

class AccountType < QuickFix::IntField
	def initialize
		super(581)
	end

	def initialize(data)
		super(581, data)
	end
end

class CustOrderCapacity < QuickFix::IntField
	def initialize
		super(582)
	end

	def initialize(data)
		super(582, data)
	end
end

class ClOrdLinkID < QuickFix::StringField
	def initialize
		super(583)
	end

	def initialize(data)
		super(583, data)
	end
end

class MassStatusReqID < QuickFix::StringField
	def initialize
		super(584)
	end

	def initialize(data)
		super(584, data)
	end
end

class MassStatusReqType < QuickFix::IntField
	def initialize
		super(585)
	end

	def initialize(data)
		super(585, data)
	end
end

class OrigOrdModTime < QuickFix::UtcTimeStampField
	def initialize
		super(586)
	end

	def initialize(data)
		super(586, data)
	end
end

class LegSettlType < QuickFix::CharField
	def initialize
		super(587)
	end

	def initialize(data)
		super(587, data)
	end
end

class LegSettlDate < QuickFix::StringField
	def initialize
		super(588)
	end

	def initialize(data)
		super(588, data)
	end
end

class DayBookingInst < QuickFix::CharField
	def initialize
		super(589)
	end

	def initialize(data)
		super(589, data)
	end
end

class BookingUnit < QuickFix::CharField
	def initialize
		super(590)
	end

	def initialize(data)
		super(590, data)
	end
end

class PreallocMethod < QuickFix::CharField
	def initialize
		super(591)
	end

	def initialize(data)
		super(591, data)
	end
end

class UnderlyingCountryOfIssue < QuickFix::StringField
	def initialize
		super(592)
	end

	def initialize(data)
		super(592, data)
	end
end

class UnderlyingStateOrProvinceOfIssue < QuickFix::StringField
	def initialize
		super(593)
	end

	def initialize(data)
		super(593, data)
	end
end

class UnderlyingLocaleOfIssue < QuickFix::StringField
	def initialize
		super(594)
	end

	def initialize(data)
		super(594, data)
	end
end

class UnderlyingInstrRegistry < QuickFix::StringField
	def initialize
		super(595)
	end

	def initialize(data)
		super(595, data)
	end
end

class LegCountryOfIssue < QuickFix::StringField
	def initialize
		super(596)
	end

	def initialize(data)
		super(596, data)
	end
end

class LegStateOrProvinceOfIssue < QuickFix::StringField
	def initialize
		super(597)
	end

	def initialize(data)
		super(597, data)
	end
end

class LegLocaleOfIssue < QuickFix::StringField
	def initialize
		super(598)
	end

	def initialize(data)
		super(598, data)
	end
end

class LegInstrRegistry < QuickFix::StringField
	def initialize
		super(599)
	end

	def initialize(data)
		super(599, data)
	end
end

class LegSymbol < QuickFix::StringField
	def initialize
		super(600)
	end

	def initialize(data)
		super(600, data)
	end
end

class LegSymbolSfx < QuickFix::StringField
	def initialize
		super(601)
	end

	def initialize(data)
		super(601, data)
	end
end

class LegSecurityID < QuickFix::StringField
	def initialize
		super(602)
	end

	def initialize(data)
		super(602, data)
	end
end

class LegSecurityIDSource < QuickFix::StringField
	def initialize
		super(603)
	end

	def initialize(data)
		super(603, data)
	end
end

class NoLegSecurityAltID < QuickFix::StringField
	def initialize
		super(604)
	end

	def initialize(data)
		super(604, data)
	end
end

class LegSecurityAltID < QuickFix::StringField
	def initialize
		super(605)
	end

	def initialize(data)
		super(605, data)
	end
end

class LegSecurityAltIDSource < QuickFix::StringField
	def initialize
		super(606)
	end

	def initialize(data)
		super(606, data)
	end
end

class LegProduct < QuickFix::IntField
	def initialize
		super(607)
	end

	def initialize(data)
		super(607, data)
	end
end

class LegCFICode < QuickFix::StringField
	def initialize
		super(608)
	end

	def initialize(data)
		super(608, data)
	end
end

class LegSecurityType < QuickFix::StringField
	def initialize
		super(609)
	end

	def initialize(data)
		super(609, data)
	end
end

class LegMaturityMonthYear < QuickFix::StringField
	def initialize
		super(610)
	end

	def initialize(data)
		super(610, data)
	end
end

class LegMaturityDate < QuickFix::StringField
	def initialize
		super(611)
	end

	def initialize(data)
		super(611, data)
	end
end

class LegStrikePrice < QuickFix::DoubleField
	def initialize
		super(612)
	end

	def initialize(data)
		super(612, data)
	end
end

class LegOptAttribute < QuickFix::CharField
	def initialize
		super(613)
	end

	def initialize(data)
		super(613, data)
	end
end

class LegContractMultiplier < QuickFix::DoubleField
	def initialize
		super(614)
	end

	def initialize(data)
		super(614, data)
	end
end

class LegCouponRate < QuickFix::DoubleField
	def initialize
		super(615)
	end

	def initialize(data)
		super(615, data)
	end
end

class LegSecurityExchange < QuickFix::StringField
	def initialize
		super(616)
	end

	def initialize(data)
		super(616, data)
	end
end

class LegIssuer < QuickFix::StringField
	def initialize
		super(617)
	end

	def initialize(data)
		super(617, data)
	end
end

class EncodedLegIssuerLen < QuickFix::IntField
	def initialize
		super(618)
	end

	def initialize(data)
		super(618, data)
	end
end

class EncodedLegIssuer < QuickFix::StringField
	def initialize
		super(619)
	end

	def initialize(data)
		super(619, data)
	end
end

class LegSecurityDesc < QuickFix::StringField
	def initialize
		super(620)
	end

	def initialize(data)
		super(620, data)
	end
end

class EncodedLegSecurityDescLen < QuickFix::IntField
	def initialize
		super(621)
	end

	def initialize(data)
		super(621, data)
	end
end

class EncodedLegSecurityDesc < QuickFix::StringField
	def initialize
		super(622)
	end

	def initialize(data)
		super(622, data)
	end
end

class LegRatioQty < QuickFix::DoubleField
	def initialize
		super(623)
	end

	def initialize(data)
		super(623, data)
	end
end

class LegSide < QuickFix::CharField
	def initialize
		super(624)
	end

	def initialize(data)
		super(624, data)
	end
end

class TradingSessionSubID < QuickFix::StringField
	def initialize
		super(625)
	end

	def initialize(data)
		super(625, data)
	end
end

class AllocType < QuickFix::IntField
	def initialize
		super(626)
	end

	def initialize(data)
		super(626, data)
	end
end

class NoHops < QuickFix::IntField
	def initialize
		super(627)
	end

	def initialize(data)
		super(627, data)
	end
end

class HopCompID < QuickFix::StringField
	def initialize
		super(628)
	end

	def initialize(data)
		super(628, data)
	end
end

class HopSendingTime < QuickFix::UtcTimeStampField
	def initialize
		super(629)
	end

	def initialize(data)
		super(629, data)
	end
end

class HopRefID < QuickFix::IntField
	def initialize
		super(630)
	end

	def initialize(data)
		super(630, data)
	end
end

class MidPx < QuickFix::DoubleField
	def initialize
		super(631)
	end

	def initialize(data)
		super(631, data)
	end
end

class BidYield < QuickFix::DoubleField
	def initialize
		super(632)
	end

	def initialize(data)
		super(632, data)
	end
end

class MidYield < QuickFix::DoubleField
	def initialize
		super(633)
	end

	def initialize(data)
		super(633, data)
	end
end

class OfferYield < QuickFix::DoubleField
	def initialize
		super(634)
	end

	def initialize(data)
		super(634, data)
	end
end

class ClearingFeeIndicator < QuickFix::StringField
	def initialize
		super(635)
	end

	def initialize(data)
		super(635, data)
	end
end

class WorkingIndicator < QuickFix::BooleanField
	def initialize
		super(636)
	end

	def initialize(data)
		super(636, data)
	end
end

class LegLastPx < QuickFix::DoubleField
	def initialize
		super(637)
	end

	def initialize(data)
		super(637, data)
	end
end

class PriorityIndicator < QuickFix::IntField
	def initialize
		super(638)
	end

	def initialize(data)
		super(638, data)
	end
end

class PriceImprovement < QuickFix::DoubleField
	def initialize
		super(639)
	end

	def initialize(data)
		super(639, data)
	end
end

class Price2 < QuickFix::DoubleField
	def initialize
		super(640)
	end

	def initialize(data)
		super(640, data)
	end
end

class LastForwardPoints2 < QuickFix::DoubleField
	def initialize
		super(641)
	end

	def initialize(data)
		super(641, data)
	end
end

class BidForwardPoints2 < QuickFix::DoubleField
	def initialize
		super(642)
	end

	def initialize(data)
		super(642, data)
	end
end

class OfferForwardPoints2 < QuickFix::DoubleField
	def initialize
		super(643)
	end

	def initialize(data)
		super(643, data)
	end
end

class RFQReqID < QuickFix::StringField
	def initialize
		super(644)
	end

	def initialize(data)
		super(644, data)
	end
end

class MktBidPx < QuickFix::DoubleField
	def initialize
		super(645)
	end

	def initialize(data)
		super(645, data)
	end
end

class MktOfferPx < QuickFix::DoubleField
	def initialize
		super(646)
	end

	def initialize(data)
		super(646, data)
	end
end

class MinBidSize < QuickFix::DoubleField
	def initialize
		super(647)
	end

	def initialize(data)
		super(647, data)
	end
end

class MinOfferSize < QuickFix::DoubleField
	def initialize
		super(648)
	end

	def initialize(data)
		super(648, data)
	end
end

class QuoteStatusReqID < QuickFix::StringField
	def initialize
		super(649)
	end

	def initialize(data)
		super(649, data)
	end
end

class LegalConfirm < QuickFix::BooleanField
	def initialize
		super(650)
	end

	def initialize(data)
		super(650, data)
	end
end

class UnderlyingLastPx < QuickFix::DoubleField
	def initialize
		super(651)
	end

	def initialize(data)
		super(651, data)
	end
end

class UnderlyingLastQty < QuickFix::DoubleField
	def initialize
		super(652)
	end

	def initialize(data)
		super(652, data)
	end
end

class LegRefID < QuickFix::StringField
	def initialize
		super(654)
	end

	def initialize(data)
		super(654, data)
	end
end

class ContraLegRefID < QuickFix::StringField
	def initialize
		super(655)
	end

	def initialize(data)
		super(655, data)
	end
end

class SettlCurrBidFxRate < QuickFix::DoubleField
	def initialize
		super(656)
	end

	def initialize(data)
		super(656, data)
	end
end

class SettlCurrOfferFxRate < QuickFix::DoubleField
	def initialize
		super(657)
	end

	def initialize(data)
		super(657, data)
	end
end

class QuoteRequestRejectReason < QuickFix::IntField
	def initialize
		super(658)
	end

	def initialize(data)
		super(658, data)
	end
end

class SideComplianceID < QuickFix::StringField
	def initialize
		super(659)
	end

	def initialize(data)
		super(659, data)
	end
end

class AcctIDSource < QuickFix::IntField
	def initialize
		super(660)
	end

	def initialize(data)
		super(660, data)
	end
end

class AllocAcctIDSource < QuickFix::IntField
	def initialize
		super(661)
	end

	def initialize(data)
		super(661, data)
	end
end

class BenchmarkPrice < QuickFix::DoubleField
	def initialize
		super(662)
	end

	def initialize(data)
		super(662, data)
	end
end

class BenchmarkPriceType < QuickFix::IntField
	def initialize
		super(663)
	end

	def initialize(data)
		super(663, data)
	end
end

class ConfirmID < QuickFix::StringField
	def initialize
		super(664)
	end

	def initialize(data)
		super(664, data)
	end
end

class ConfirmStatus < QuickFix::IntField
	def initialize
		super(665)
	end

	def initialize(data)
		super(665, data)
	end
end

class ConfirmTransType < QuickFix::IntField
	def initialize
		super(666)
	end

	def initialize(data)
		super(666, data)
	end
end

class ContractSettlMonth < QuickFix::StringField
	def initialize
		super(667)
	end

	def initialize(data)
		super(667, data)
	end
end

class DeliveryForm < QuickFix::IntField
	def initialize
		super(668)
	end

	def initialize(data)
		super(668, data)
	end
end

class LastParPx < QuickFix::DoubleField
	def initialize
		super(669)
	end

	def initialize(data)
		super(669, data)
	end
end

class NoLegAllocs < QuickFix::IntField
	def initialize
		super(670)
	end

	def initialize(data)
		super(670, data)
	end
end

class LegAllocAccount < QuickFix::StringField
	def initialize
		super(671)
	end

	def initialize(data)
		super(671, data)
	end
end

class LegIndividualAllocID < QuickFix::StringField
	def initialize
		super(672)
	end

	def initialize(data)
		super(672, data)
	end
end

class LegAllocQty < QuickFix::DoubleField
	def initialize
		super(673)
	end

	def initialize(data)
		super(673, data)
	end
end

class LegAllocAcctIDSource < QuickFix::StringField
	def initialize
		super(674)
	end

	def initialize(data)
		super(674, data)
	end
end

class LegSettlCurrency < QuickFix::StringField
	def initialize
		super(675)
	end

	def initialize(data)
		super(675, data)
	end
end

class LegBenchmarkCurveCurrency < QuickFix::StringField
	def initialize
		super(676)
	end

	def initialize(data)
		super(676, data)
	end
end

class LegBenchmarkCurveName < QuickFix::StringField
	def initialize
		super(677)
	end

	def initialize(data)
		super(677, data)
	end
end

class LegBenchmarkCurvePoint < QuickFix::StringField
	def initialize
		super(678)
	end

	def initialize(data)
		super(678, data)
	end
end

class LegBenchmarkPrice < QuickFix::DoubleField
	def initialize
		super(679)
	end

	def initialize(data)
		super(679, data)
	end
end

class LegBenchmarkPriceType < QuickFix::IntField
	def initialize
		super(680)
	end

	def initialize(data)
		super(680, data)
	end
end

class LegBidPx < QuickFix::DoubleField
	def initialize
		super(681)
	end

	def initialize(data)
		super(681, data)
	end
end

class LegIOIQty < QuickFix::StringField
	def initialize
		super(682)
	end

	def initialize(data)
		super(682, data)
	end
end

class NoLegStipulations < QuickFix::IntField
	def initialize
		super(683)
	end

	def initialize(data)
		super(683, data)
	end
end

class LegOfferPx < QuickFix::DoubleField
	def initialize
		super(684)
	end

	def initialize(data)
		super(684, data)
	end
end

class LegOrderQty < QuickFix::DoubleField
	def initialize
		super(685)
	end

	def initialize(data)
		super(685, data)
	end
end

class LegPriceType < QuickFix::IntField
	def initialize
		super(686)
	end

	def initialize(data)
		super(686, data)
	end
end

class LegQty < QuickFix::DoubleField
	def initialize
		super(687)
	end

	def initialize(data)
		super(687, data)
	end
end

class LegStipulationType < QuickFix::StringField
	def initialize
		super(688)
	end

	def initialize(data)
		super(688, data)
	end
end

class LegStipulationValue < QuickFix::StringField
	def initialize
		super(689)
	end

	def initialize(data)
		super(689, data)
	end
end

class LegSwapType < QuickFix::IntField
	def initialize
		super(690)
	end

	def initialize(data)
		super(690, data)
	end
end

class Pool < QuickFix::StringField
	def initialize
		super(691)
	end

	def initialize(data)
		super(691, data)
	end
end

class QuotePriceType < QuickFix::IntField
	def initialize
		super(692)
	end

	def initialize(data)
		super(692, data)
	end
end

class QuoteRespID < QuickFix::StringField
	def initialize
		super(693)
	end

	def initialize(data)
		super(693, data)
	end
end

class QuoteRespType < QuickFix::IntField
	def initialize
		super(694)
	end

	def initialize(data)
		super(694, data)
	end
end

class QuoteQualifier < QuickFix::CharField
	def initialize
		super(695)
	end

	def initialize(data)
		super(695, data)
	end
end

class YieldRedemptionDate < QuickFix::StringField
	def initialize
		super(696)
	end

	def initialize(data)
		super(696, data)
	end
end

class YieldRedemptionPrice < QuickFix::DoubleField
	def initialize
		super(697)
	end

	def initialize(data)
		super(697, data)
	end
end

class YieldRedemptionPriceType < QuickFix::IntField
	def initialize
		super(698)
	end

	def initialize(data)
		super(698, data)
	end
end

class BenchmarkSecurityID < QuickFix::StringField
	def initialize
		super(699)
	end

	def initialize(data)
		super(699, data)
	end
end

class ReversalIndicator < QuickFix::BooleanField
	def initialize
		super(700)
	end

	def initialize(data)
		super(700, data)
	end
end

class YieldCalcDate < QuickFix::StringField
	def initialize
		super(701)
	end

	def initialize(data)
		super(701, data)
	end
end

class NoPositions < QuickFix::IntField
	def initialize
		super(702)
	end

	def initialize(data)
		super(702, data)
	end
end

class PosType < QuickFix::StringField
	def initialize
		super(703)
	end

	def initialize(data)
		super(703, data)
	end
end

class LongQty < QuickFix::DoubleField
	def initialize
		super(704)
	end

	def initialize(data)
		super(704, data)
	end
end

class ShortQty < QuickFix::DoubleField
	def initialize
		super(705)
	end

	def initialize(data)
		super(705, data)
	end
end

class PosQtyStatus < QuickFix::IntField
	def initialize
		super(706)
	end

	def initialize(data)
		super(706, data)
	end
end

class PosAmtType < QuickFix::StringField
	def initialize
		super(707)
	end

	def initialize(data)
		super(707, data)
	end
end

class PosAmt < QuickFix::DoubleField
	def initialize
		super(708)
	end

	def initialize(data)
		super(708, data)
	end
end

class PosTransType < QuickFix::IntField
	def initialize
		super(709)
	end

	def initialize(data)
		super(709, data)
	end
end

class PosReqID < QuickFix::StringField
	def initialize
		super(710)
	end

	def initialize(data)
		super(710, data)
	end
end

class NoUnderlyings < QuickFix::IntField
	def initialize
		super(711)
	end

	def initialize(data)
		super(711, data)
	end
end

class PosMaintAction < QuickFix::IntField
	def initialize
		super(712)
	end

	def initialize(data)
		super(712, data)
	end
end

class OrigPosReqRefID < QuickFix::StringField
	def initialize
		super(713)
	end

	def initialize(data)
		super(713, data)
	end
end

class PosMaintRptRefID < QuickFix::StringField
	def initialize
		super(714)
	end

	def initialize(data)
		super(714, data)
	end
end

class ClearingBusinessDate < QuickFix::StringField
	def initialize
		super(715)
	end

	def initialize(data)
		super(715, data)
	end
end

class SettlSessID < QuickFix::StringField
	def initialize
		super(716)
	end

	def initialize(data)
		super(716, data)
	end
end

class SettlSessSubID < QuickFix::StringField
	def initialize
		super(717)
	end

	def initialize(data)
		super(717, data)
	end
end

class AdjustmentType < QuickFix::IntField
	def initialize
		super(718)
	end

	def initialize(data)
		super(718, data)
	end
end

class ContraryInstructionIndicator < QuickFix::BooleanField
	def initialize
		super(719)
	end

	def initialize(data)
		super(719, data)
	end
end

class PriorSpreadIndicator < QuickFix::BooleanField
	def initialize
		super(720)
	end

	def initialize(data)
		super(720, data)
	end
end

class PosMaintRptID < QuickFix::StringField
	def initialize
		super(721)
	end

	def initialize(data)
		super(721, data)
	end
end

class PosMaintStatus < QuickFix::IntField
	def initialize
		super(722)
	end

	def initialize(data)
		super(722, data)
	end
end

class PosMaintResult < QuickFix::IntField
	def initialize
		super(723)
	end

	def initialize(data)
		super(723, data)
	end
end

class PosReqType < QuickFix::IntField
	def initialize
		super(724)
	end

	def initialize(data)
		super(724, data)
	end
end

class ResponseTransportType < QuickFix::IntField
	def initialize
		super(725)
	end

	def initialize(data)
		super(725, data)
	end
end

class ResponseDestination < QuickFix::StringField
	def initialize
		super(726)
	end

	def initialize(data)
		super(726, data)
	end
end

class TotalNumPosReports < QuickFix::IntField
	def initialize
		super(727)
	end

	def initialize(data)
		super(727, data)
	end
end

class PosReqResult < QuickFix::IntField
	def initialize
		super(728)
	end

	def initialize(data)
		super(728, data)
	end
end

class PosReqStatus < QuickFix::IntField
	def initialize
		super(729)
	end

	def initialize(data)
		super(729, data)
	end
end

class SettlPrice < QuickFix::DoubleField
	def initialize
		super(730)
	end

	def initialize(data)
		super(730, data)
	end
end

class SettlPriceType < QuickFix::IntField
	def initialize
		super(731)
	end

	def initialize(data)
		super(731, data)
	end
end

class UnderlyingSettlPrice < QuickFix::DoubleField
	def initialize
		super(732)
	end

	def initialize(data)
		super(732, data)
	end
end

class UnderlyingSettlPriceType < QuickFix::IntField
	def initialize
		super(733)
	end

	def initialize(data)
		super(733, data)
	end
end

class PriorSettlPrice < QuickFix::DoubleField
	def initialize
		super(734)
	end

	def initialize(data)
		super(734, data)
	end
end

class NoQuoteQualifiers < QuickFix::IntField
	def initialize
		super(735)
	end

	def initialize(data)
		super(735, data)
	end
end

class AllocSettlCurrency < QuickFix::StringField
	def initialize
		super(736)
	end

	def initialize(data)
		super(736, data)
	end
end

class AllocSettlCurrAmt < QuickFix::DoubleField
	def initialize
		super(737)
	end

	def initialize(data)
		super(737, data)
	end
end

class InterestAtMaturity < QuickFix::DoubleField
	def initialize
		super(738)
	end

	def initialize(data)
		super(738, data)
	end
end

class LegDatedDate < QuickFix::StringField
	def initialize
		super(739)
	end

	def initialize(data)
		super(739, data)
	end
end

class LegPool < QuickFix::StringField
	def initialize
		super(740)
	end

	def initialize(data)
		super(740, data)
	end
end

class AllocInterestAtMaturity < QuickFix::DoubleField
	def initialize
		super(741)
	end

	def initialize(data)
		super(741, data)
	end
end

class AllocAccruedInterestAmt < QuickFix::DoubleField
	def initialize
		super(742)
	end

	def initialize(data)
		super(742, data)
	end
end

class DeliveryDate < QuickFix::StringField
	def initialize
		super(743)
	end

	def initialize(data)
		super(743, data)
	end
end

class AssignmentMethod < QuickFix::CharField
	def initialize
		super(744)
	end

	def initialize(data)
		super(744, data)
	end
end

class AssignmentUnit < QuickFix::DoubleField
	def initialize
		super(745)
	end

	def initialize(data)
		super(745, data)
	end
end

class OpenInterest < QuickFix::DoubleField
	def initialize
		super(746)
	end

	def initialize(data)
		super(746, data)
	end
end

class ExerciseMethod < QuickFix::CharField
	def initialize
		super(747)
	end

	def initialize(data)
		super(747, data)
	end
end

class TotNumTradeReports < QuickFix::IntField
	def initialize
		super(748)
	end

	def initialize(data)
		super(748, data)
	end
end

class TradeRequestResult < QuickFix::IntField
	def initialize
		super(749)
	end

	def initialize(data)
		super(749, data)
	end
end

class TradeRequestStatus < QuickFix::IntField
	def initialize
		super(750)
	end

	def initialize(data)
		super(750, data)
	end
end

class TradeReportRejectReason < QuickFix::IntField
	def initialize
		super(751)
	end

	def initialize(data)
		super(751, data)
	end
end

class SideMultiLegReportingType < QuickFix::IntField
	def initialize
		super(752)
	end

	def initialize(data)
		super(752, data)
	end
end

class NoPosAmt < QuickFix::IntField
	def initialize
		super(753)
	end

	def initialize(data)
		super(753, data)
	end
end

class AutoAcceptIndicator < QuickFix::BooleanField
	def initialize
		super(754)
	end

	def initialize(data)
		super(754, data)
	end
end

class AllocReportID < QuickFix::StringField
	def initialize
		super(755)
	end

	def initialize(data)
		super(755, data)
	end
end

class NoNested2PartyIDs < QuickFix::IntField
	def initialize
		super(756)
	end

	def initialize(data)
		super(756, data)
	end
end

class Nested2PartyID < QuickFix::StringField
	def initialize
		super(757)
	end

	def initialize(data)
		super(757, data)
	end
end

class Nested2PartyIDSource < QuickFix::CharField
	def initialize
		super(758)
	end

	def initialize(data)
		super(758, data)
	end
end

class Nested2PartyRole < QuickFix::IntField
	def initialize
		super(759)
	end

	def initialize(data)
		super(759, data)
	end
end

class Nested2PartySubID < QuickFix::StringField
	def initialize
		super(760)
	end

	def initialize(data)
		super(760, data)
	end
end

class BenchmarkSecurityIDSource < QuickFix::StringField
	def initialize
		super(761)
	end

	def initialize(data)
		super(761, data)
	end
end

class SecuritySubType < QuickFix::StringField
	def initialize
		super(762)
	end

	def initialize(data)
		super(762, data)
	end
end

class UnderlyingSecuritySubType < QuickFix::StringField
	def initialize
		super(763)
	end

	def initialize(data)
		super(763, data)
	end
end

class LegSecuritySubType < QuickFix::StringField
	def initialize
		super(764)
	end

	def initialize(data)
		super(764, data)
	end
end

class AllowableOneSidednessPct < QuickFix::DoubleField
	def initialize
		super(765)
	end

	def initialize(data)
		super(765, data)
	end
end

class AllowableOneSidednessValue < QuickFix::DoubleField
	def initialize
		super(766)
	end

	def initialize(data)
		super(766, data)
	end
end

class AllowableOneSidednessCurr < QuickFix::StringField
	def initialize
		super(767)
	end

	def initialize(data)
		super(767, data)
	end
end

class NoTrdRegTimestamps < QuickFix::IntField
	def initialize
		super(768)
	end

	def initialize(data)
		super(768, data)
	end
end

class TrdRegTimestamp < QuickFix::UtcTimeStampField
	def initialize
		super(769)
	end

	def initialize(data)
		super(769, data)
	end
end

class TrdRegTimestampType < QuickFix::IntField
	def initialize
		super(770)
	end

	def initialize(data)
		super(770, data)
	end
end

class TrdRegTimestampOrigin < QuickFix::StringField
	def initialize
		super(771)
	end

	def initialize(data)
		super(771, data)
	end
end

class ConfirmRefID < QuickFix::StringField
	def initialize
		super(772)
	end

	def initialize(data)
		super(772, data)
	end
end

class ConfirmType < QuickFix::IntField
	def initialize
		super(773)
	end

	def initialize(data)
		super(773, data)
	end
end

class ConfirmRejReason < QuickFix::IntField
	def initialize
		super(774)
	end

	def initialize(data)
		super(774, data)
	end
end

class BookingType < QuickFix::IntField
	def initialize
		super(775)
	end

	def initialize(data)
		super(775, data)
	end
end

class IndividualAllocRejCode < QuickFix::IntField
	def initialize
		super(776)
	end

	def initialize(data)
		super(776, data)
	end
end

class SettlInstMsgID < QuickFix::StringField
	def initialize
		super(777)
	end

	def initialize(data)
		super(777, data)
	end
end

class NoSettlInst < QuickFix::IntField
	def initialize
		super(778)
	end

	def initialize(data)
		super(778, data)
	end
end

class LastUpdateTime < QuickFix::UtcTimeStampField
	def initialize
		super(779)
	end

	def initialize(data)
		super(779, data)
	end
end

class AllocSettlInstType < QuickFix::IntField
	def initialize
		super(780)
	end

	def initialize(data)
		super(780, data)
	end
end

class NoSettlPartyIDs < QuickFix::IntField
	def initialize
		super(781)
	end

	def initialize(data)
		super(781, data)
	end
end

class SettlPartyID < QuickFix::StringField
	def initialize
		super(782)
	end

	def initialize(data)
		super(782, data)
	end
end

class SettlPartyIDSource < QuickFix::CharField
	def initialize
		super(783)
	end

	def initialize(data)
		super(783, data)
	end
end

class SettlPartyRole < QuickFix::IntField
	def initialize
		super(784)
	end

	def initialize(data)
		super(784, data)
	end
end

class SettlPartySubID < QuickFix::StringField
	def initialize
		super(785)
	end

	def initialize(data)
		super(785, data)
	end
end

class SettlPartySubIDType < QuickFix::IntField
	def initialize
		super(786)
	end

	def initialize(data)
		super(786, data)
	end
end

class DlvyInstType < QuickFix::CharField
	def initialize
		super(787)
	end

	def initialize(data)
		super(787, data)
	end
end

class TerminationType < QuickFix::IntField
	def initialize
		super(788)
	end

	def initialize(data)
		super(788, data)
	end
end

class NextExpectedMsgSeqNum < QuickFix::IntField
	def initialize
		super(789)
	end

	def initialize(data)
		super(789, data)
	end
end

class OrdStatusReqID < QuickFix::StringField
	def initialize
		super(790)
	end

	def initialize(data)
		super(790, data)
	end
end

class SettlInstReqID < QuickFix::StringField
	def initialize
		super(791)
	end

	def initialize(data)
		super(791, data)
	end
end

class SettlInstReqRejCode < QuickFix::IntField
	def initialize
		super(792)
	end

	def initialize(data)
		super(792, data)
	end
end

class SecondaryAllocID < QuickFix::StringField
	def initialize
		super(793)
	end

	def initialize(data)
		super(793, data)
	end
end

class AllocReportType < QuickFix::IntField
	def initialize
		super(794)
	end

	def initialize(data)
		super(794, data)
	end
end

class AllocReportRefID < QuickFix::StringField
	def initialize
		super(795)
	end

	def initialize(data)
		super(795, data)
	end
end

class AllocCancReplaceReason < QuickFix::IntField
	def initialize
		super(796)
	end

	def initialize(data)
		super(796, data)
	end
end

class CopyMsgIndicator < QuickFix::BooleanField
	def initialize
		super(797)
	end

	def initialize(data)
		super(797, data)
	end
end

class AllocAccountType < QuickFix::IntField
	def initialize
		super(798)
	end

	def initialize(data)
		super(798, data)
	end
end

class OrderAvgPx < QuickFix::DoubleField
	def initialize
		super(799)
	end

	def initialize(data)
		super(799, data)
	end
end

class OrderBookingQty < QuickFix::DoubleField
	def initialize
		super(800)
	end

	def initialize(data)
		super(800, data)
	end
end

class NoSettlPartySubIDs < QuickFix::IntField
	def initialize
		super(801)
	end

	def initialize(data)
		super(801, data)
	end
end

class NoPartySubIDs < QuickFix::IntField
	def initialize
		super(802)
	end

	def initialize(data)
		super(802, data)
	end
end

class PartySubIDType < QuickFix::IntField
	def initialize
		super(803)
	end

	def initialize(data)
		super(803, data)
	end
end

class NoNestedPartySubIDs < QuickFix::IntField
	def initialize
		super(804)
	end

	def initialize(data)
		super(804, data)
	end
end

class NestedPartySubIDType < QuickFix::IntField
	def initialize
		super(805)
	end

	def initialize(data)
		super(805, data)
	end
end

class NoNested2PartySubIDs < QuickFix::IntField
	def initialize
		super(806)
	end

	def initialize(data)
		super(806, data)
	end
end

class Nested2PartySubIDType < QuickFix::IntField
	def initialize
		super(807)
	end

	def initialize(data)
		super(807, data)
	end
end

class AllocIntermedReqType < QuickFix::IntField
	def initialize
		super(808)
	end

	def initialize(data)
		super(808, data)
	end
end

class UnderlyingPx < QuickFix::DoubleField
	def initialize
		super(810)
	end

	def initialize(data)
		super(810, data)
	end
end

class PriceDelta < QuickFix::DoubleField
	def initialize
		super(811)
	end

	def initialize(data)
		super(811, data)
	end
end

class ApplQueueMax < QuickFix::IntField
	def initialize
		super(812)
	end

	def initialize(data)
		super(812, data)
	end
end

class ApplQueueDepth < QuickFix::IntField
	def initialize
		super(813)
	end

	def initialize(data)
		super(813, data)
	end
end

class ApplQueueResolution < QuickFix::IntField
	def initialize
		super(814)
	end

	def initialize(data)
		super(814, data)
	end
end

class ApplQueueAction < QuickFix::IntField
	def initialize
		super(815)
	end

	def initialize(data)
		super(815, data)
	end
end

class NoAltMDSource < QuickFix::IntField
	def initialize
		super(816)
	end

	def initialize(data)
		super(816, data)
	end
end

class AltMDSourceID < QuickFix::StringField
	def initialize
		super(817)
	end

	def initialize(data)
		super(817, data)
	end
end

class SecondaryTradeReportID < QuickFix::StringField
	def initialize
		super(818)
	end

	def initialize(data)
		super(818, data)
	end
end

class AvgPxIndicator < QuickFix::IntField
	def initialize
		super(819)
	end

	def initialize(data)
		super(819, data)
	end
end

class TradeLinkID < QuickFix::StringField
	def initialize
		super(820)
	end

	def initialize(data)
		super(820, data)
	end
end

class OrderInputDevice < QuickFix::StringField
	def initialize
		super(821)
	end

	def initialize(data)
		super(821, data)
	end
end

class UnderlyingTradingSessionID < QuickFix::StringField
	def initialize
		super(822)
	end

	def initialize(data)
		super(822, data)
	end
end

class UnderlyingTradingSessionSubID < QuickFix::StringField
	def initialize
		super(823)
	end

	def initialize(data)
		super(823, data)
	end
end

class TradeLegRefID < QuickFix::StringField
	def initialize
		super(824)
	end

	def initialize(data)
		super(824, data)
	end
end

class ExchangeRule < QuickFix::StringField
	def initialize
		super(825)
	end

	def initialize(data)
		super(825, data)
	end
end

class TradeAllocIndicator < QuickFix::IntField
	def initialize
		super(826)
	end

	def initialize(data)
		super(826, data)
	end
end

class ExpirationCycle < QuickFix::IntField
	def initialize
		super(827)
	end

	def initialize(data)
		super(827, data)
	end
end

class TrdType < QuickFix::IntField
	def initialize
		super(828)
	end

	def initialize(data)
		super(828, data)
	end
end

class TrdSubType < QuickFix::IntField
	def initialize
		super(829)
	end

	def initialize(data)
		super(829, data)
	end
end

class TransferReason < QuickFix::StringField
	def initialize
		super(830)
	end

	def initialize(data)
		super(830, data)
	end
end

class AsgnReqID < QuickFix::StringField
	def initialize
		super(831)
	end

	def initialize(data)
		super(831, data)
	end
end

class TotNumAssignmentReports < QuickFix::IntField
	def initialize
		super(832)
	end

	def initialize(data)
		super(832, data)
	end
end

class AsgnRptID < QuickFix::StringField
	def initialize
		super(833)
	end

	def initialize(data)
		super(833, data)
	end
end

class ThresholdAmount < QuickFix::DoubleField
	def initialize
		super(834)
	end

	def initialize(data)
		super(834, data)
	end
end

class PegMoveType < QuickFix::IntField
	def initialize
		super(835)
	end

	def initialize(data)
		super(835, data)
	end
end

class PegOffsetType < QuickFix::IntField
	def initialize
		super(836)
	end

	def initialize(data)
		super(836, data)
	end
end

class PegLimitType < QuickFix::IntField
	def initialize
		super(837)
	end

	def initialize(data)
		super(837, data)
	end
end

class PegRoundDirection < QuickFix::IntField
	def initialize
		super(838)
	end

	def initialize(data)
		super(838, data)
	end
end

class PeggedPrice < QuickFix::DoubleField
	def initialize
		super(839)
	end

	def initialize(data)
		super(839, data)
	end
end

class PegScope < QuickFix::IntField
	def initialize
		super(840)
	end

	def initialize(data)
		super(840, data)
	end
end

class DiscretionMoveType < QuickFix::IntField
	def initialize
		super(841)
	end

	def initialize(data)
		super(841, data)
	end
end

class DiscretionOffsetType < QuickFix::IntField
	def initialize
		super(842)
	end

	def initialize(data)
		super(842, data)
	end
end

class DiscretionLimitType < QuickFix::IntField
	def initialize
		super(843)
	end

	def initialize(data)
		super(843, data)
	end
end

class DiscretionRoundDirection < QuickFix::IntField
	def initialize
		super(844)
	end

	def initialize(data)
		super(844, data)
	end
end

class DiscretionPrice < QuickFix::DoubleField
	def initialize
		super(845)
	end

	def initialize(data)
		super(845, data)
	end
end

class DiscretionScope < QuickFix::IntField
	def initialize
		super(846)
	end

	def initialize(data)
		super(846, data)
	end
end

class TargetStrategy < QuickFix::IntField
	def initialize
		super(847)
	end

	def initialize(data)
		super(847, data)
	end
end

class TargetStrategyParameters < QuickFix::StringField
	def initialize
		super(848)
	end

	def initialize(data)
		super(848, data)
	end
end

class ParticipationRate < QuickFix::DoubleField
	def initialize
		super(849)
	end

	def initialize(data)
		super(849, data)
	end
end

class TargetStrategyPerformance < QuickFix::DoubleField
	def initialize
		super(850)
	end

	def initialize(data)
		super(850, data)
	end
end

class LastLiquidityInd < QuickFix::IntField
	def initialize
		super(851)
	end

	def initialize(data)
		super(851, data)
	end
end

class PublishTrdIndicator < QuickFix::BooleanField
	def initialize
		super(852)
	end

	def initialize(data)
		super(852, data)
	end
end

class ShortSaleReason < QuickFix::IntField
	def initialize
		super(853)
	end

	def initialize(data)
		super(853, data)
	end
end

class QtyType < QuickFix::IntField
	def initialize
		super(854)
	end

	def initialize(data)
		super(854, data)
	end
end

class SecondaryTrdType < QuickFix::IntField
	def initialize
		super(855)
	end

	def initialize(data)
		super(855, data)
	end
end

class TradeReportType < QuickFix::IntField
	def initialize
		super(856)
	end

	def initialize(data)
		super(856, data)
	end
end

class AllocNoOrdersType < QuickFix::IntField
	def initialize
		super(857)
	end

	def initialize(data)
		super(857, data)
	end
end

class SharedCommission < QuickFix::DoubleField
	def initialize
		super(858)
	end

	def initialize(data)
		super(858, data)
	end
end

class ConfirmReqID < QuickFix::StringField
	def initialize
		super(859)
	end

	def initialize(data)
		super(859, data)
	end
end

class AvgParPx < QuickFix::DoubleField
	def initialize
		super(860)
	end

	def initialize(data)
		super(860, data)
	end
end

class ReportedPx < QuickFix::DoubleField
	def initialize
		super(861)
	end

	def initialize(data)
		super(861, data)
	end
end

class NoCapacities < QuickFix::IntField
	def initialize
		super(862)
	end

	def initialize(data)
		super(862, data)
	end
end

class OrderCapacityQty < QuickFix::DoubleField
	def initialize
		super(863)
	end

	def initialize(data)
		super(863, data)
	end
end

class NoEvents < QuickFix::IntField
	def initialize
		super(864)
	end

	def initialize(data)
		super(864, data)
	end
end

class EventType < QuickFix::IntField
	def initialize
		super(865)
	end

	def initialize(data)
		super(865, data)
	end
end

class EventDate < QuickFix::StringField
	def initialize
		super(866)
	end

	def initialize(data)
		super(866, data)
	end
end

class EventPx < QuickFix::DoubleField
	def initialize
		super(867)
	end

	def initialize(data)
		super(867, data)
	end
end

class EventText < QuickFix::StringField
	def initialize
		super(868)
	end

	def initialize(data)
		super(868, data)
	end
end

class PctAtRisk < QuickFix::DoubleField
	def initialize
		super(869)
	end

	def initialize(data)
		super(869, data)
	end
end

class NoInstrAttrib < QuickFix::IntField
	def initialize
		super(870)
	end

	def initialize(data)
		super(870, data)
	end
end

class InstrAttribType < QuickFix::IntField
	def initialize
		super(871)
	end

	def initialize(data)
		super(871, data)
	end
end

class InstrAttribValue < QuickFix::StringField
	def initialize
		super(872)
	end

	def initialize(data)
		super(872, data)
	end
end

class DatedDate < QuickFix::StringField
	def initialize
		super(873)
	end

	def initialize(data)
		super(873, data)
	end
end

class InterestAccrualDate < QuickFix::StringField
	def initialize
		super(874)
	end

	def initialize(data)
		super(874, data)
	end
end

class CPProgram < QuickFix::IntField
	def initialize
		super(875)
	end

	def initialize(data)
		super(875, data)
	end
end

class CPRegType < QuickFix::StringField
	def initialize
		super(876)
	end

	def initialize(data)
		super(876, data)
	end
end

class UnderlyingCPProgram < QuickFix::StringField
	def initialize
		super(877)
	end

	def initialize(data)
		super(877, data)
	end
end

class UnderlyingCPRegType < QuickFix::StringField
	def initialize
		super(878)
	end

	def initialize(data)
		super(878, data)
	end
end

class UnderlyingQty < QuickFix::DoubleField
	def initialize
		super(879)
	end

	def initialize(data)
		super(879, data)
	end
end

class TrdMatchID < QuickFix::StringField
	def initialize
		super(880)
	end

	def initialize(data)
		super(880, data)
	end
end

class SecondaryTradeReportRefID < QuickFix::StringField
	def initialize
		super(881)
	end

	def initialize(data)
		super(881, data)
	end
end

class UnderlyingDirtyPrice < QuickFix::DoubleField
	def initialize
		super(882)
	end

	def initialize(data)
		super(882, data)
	end
end

class UnderlyingEndPrice < QuickFix::DoubleField
	def initialize
		super(883)
	end

	def initialize(data)
		super(883, data)
	end
end

class UnderlyingStartValue < QuickFix::DoubleField
	def initialize
		super(884)
	end

	def initialize(data)
		super(884, data)
	end
end

class UnderlyingCurrentValue < QuickFix::DoubleField
	def initialize
		super(885)
	end

	def initialize(data)
		super(885, data)
	end
end

class UnderlyingEndValue < QuickFix::DoubleField
	def initialize
		super(886)
	end

	def initialize(data)
		super(886, data)
	end
end

class NoUnderlyingStips < QuickFix::IntField
	def initialize
		super(887)
	end

	def initialize(data)
		super(887, data)
	end
end

class UnderlyingStipType < QuickFix::StringField
	def initialize
		super(888)
	end

	def initialize(data)
		super(888, data)
	end
end

class UnderlyingStipValue < QuickFix::StringField
	def initialize
		super(889)
	end

	def initialize(data)
		super(889, data)
	end
end

class MaturityNetMoney < QuickFix::DoubleField
	def initialize
		super(890)
	end

	def initialize(data)
		super(890, data)
	end
end

class MiscFeeBasis < QuickFix::IntField
	def initialize
		super(891)
	end

	def initialize(data)
		super(891, data)
	end
end

class TotNoAllocs < QuickFix::IntField
	def initialize
		super(892)
	end

	def initialize(data)
		super(892, data)
	end
end

class LastFragment < QuickFix::BooleanField
	def initialize
		super(893)
	end

	def initialize(data)
		super(893, data)
	end
end

class CollReqID < QuickFix::StringField
	def initialize
		super(894)
	end

	def initialize(data)
		super(894, data)
	end
end

class CollAsgnReason < QuickFix::IntField
	def initialize
		super(895)
	end

	def initialize(data)
		super(895, data)
	end
end

class CollInquiryQualifier < QuickFix::IntField
	def initialize
		super(896)
	end

	def initialize(data)
		super(896, data)
	end
end

class NoTrades < QuickFix::IntField
	def initialize
		super(897)
	end

	def initialize(data)
		super(897, data)
	end
end

class MarginRatio < QuickFix::DoubleField
	def initialize
		super(898)
	end

	def initialize(data)
		super(898, data)
	end
end

class MarginExcess < QuickFix::DoubleField
	def initialize
		super(899)
	end

	def initialize(data)
		super(899, data)
	end
end

class TotalNetValue < QuickFix::DoubleField
	def initialize
		super(900)
	end

	def initialize(data)
		super(900, data)
	end
end

class CashOutstanding < QuickFix::DoubleField
	def initialize
		super(901)
	end

	def initialize(data)
		super(901, data)
	end
end

class CollAsgnID < QuickFix::StringField
	def initialize
		super(902)
	end

	def initialize(data)
		super(902, data)
	end
end

class CollAsgnTransType < QuickFix::IntField
	def initialize
		super(903)
	end

	def initialize(data)
		super(903, data)
	end
end

class CollRespID < QuickFix::StringField
	def initialize
		super(904)
	end

	def initialize(data)
		super(904, data)
	end
end

class CollAsgnRespType < QuickFix::IntField
	def initialize
		super(905)
	end

	def initialize(data)
		super(905, data)
	end
end

class CollAsgnRejectReason < QuickFix::IntField
	def initialize
		super(906)
	end

	def initialize(data)
		super(906, data)
	end
end

class CollAsgnRefID < QuickFix::StringField
	def initialize
		super(907)
	end

	def initialize(data)
		super(907, data)
	end
end

class CollRptID < QuickFix::StringField
	def initialize
		super(908)
	end

	def initialize(data)
		super(908, data)
	end
end

class CollInquiryID < QuickFix::StringField
	def initialize
		super(909)
	end

	def initialize(data)
		super(909, data)
	end
end

class CollStatus < QuickFix::IntField
	def initialize
		super(910)
	end

	def initialize(data)
		super(910, data)
	end
end

class TotNumReports < QuickFix::IntField
	def initialize
		super(911)
	end

	def initialize(data)
		super(911, data)
	end
end

class LastRptRequested < QuickFix::BooleanField
	def initialize
		super(912)
	end

	def initialize(data)
		super(912, data)
	end
end

class AgreementDesc < QuickFix::StringField
	def initialize
		super(913)
	end

	def initialize(data)
		super(913, data)
	end
end

class AgreementID < QuickFix::StringField
	def initialize
		super(914)
	end

	def initialize(data)
		super(914, data)
	end
end

class AgreementDate < QuickFix::StringField
	def initialize
		super(915)
	end

	def initialize(data)
		super(915, data)
	end
end

class StartDate < QuickFix::StringField
	def initialize
		super(916)
	end

	def initialize(data)
		super(916, data)
	end
end

class EndDate < QuickFix::StringField
	def initialize
		super(917)
	end

	def initialize(data)
		super(917, data)
	end
end

class AgreementCurrency < QuickFix::StringField
	def initialize
		super(918)
	end

	def initialize(data)
		super(918, data)
	end
end

class DeliveryType < QuickFix::IntField
	def initialize
		super(919)
	end

	def initialize(data)
		super(919, data)
	end
end

class EndAccruedInterestAmt < QuickFix::DoubleField
	def initialize
		super(920)
	end

	def initialize(data)
		super(920, data)
	end
end

class StartCash < QuickFix::DoubleField
	def initialize
		super(921)
	end

	def initialize(data)
		super(921, data)
	end
end

class EndCash < QuickFix::DoubleField
	def initialize
		super(922)
	end

	def initialize(data)
		super(922, data)
	end
end

class UserRequestID < QuickFix::StringField
	def initialize
		super(923)
	end

	def initialize(data)
		super(923, data)
	end
end

class UserRequestType < QuickFix::IntField
	def initialize
		super(924)
	end

	def initialize(data)
		super(924, data)
	end
end

class NewPassword < QuickFix::StringField
	def initialize
		super(925)
	end

	def initialize(data)
		super(925, data)
	end
end

class UserStatus < QuickFix::IntField
	def initialize
		super(926)
	end

	def initialize(data)
		super(926, data)
	end
end

class UserStatusText < QuickFix::StringField
	def initialize
		super(927)
	end

	def initialize(data)
		super(927, data)
	end
end

class StatusValue < QuickFix::IntField
	def initialize
		super(928)
	end

	def initialize(data)
		super(928, data)
	end
end

class StatusText < QuickFix::StringField
	def initialize
		super(929)
	end

	def initialize(data)
		super(929, data)
	end
end

class RefCompID < QuickFix::StringField
	def initialize
		super(930)
	end

	def initialize(data)
		super(930, data)
	end
end

class RefSubID < QuickFix::StringField
	def initialize
		super(931)
	end

	def initialize(data)
		super(931, data)
	end
end

class NetworkResponseID < QuickFix::StringField
	def initialize
		super(932)
	end

	def initialize(data)
		super(932, data)
	end
end

class NetworkRequestID < QuickFix::StringField
	def initialize
		super(933)
	end

	def initialize(data)
		super(933, data)
	end
end

class LastNetworkResponseID < QuickFix::StringField
	def initialize
		super(934)
	end

	def initialize(data)
		super(934, data)
	end
end

class NetworkRequestType < QuickFix::IntField
	def initialize
		super(935)
	end

	def initialize(data)
		super(935, data)
	end
end

class NoCompIDs < QuickFix::IntField
	def initialize
		super(936)
	end

	def initialize(data)
		super(936, data)
	end
end

class NetworkStatusResponseType < QuickFix::IntField
	def initialize
		super(937)
	end

	def initialize(data)
		super(937, data)
	end
end

class NoCollInquiryQualifier < QuickFix::IntField
	def initialize
		super(938)
	end

	def initialize(data)
		super(938, data)
	end
end

class TrdRptStatus < QuickFix::IntField
	def initialize
		super(939)
	end

	def initialize(data)
		super(939, data)
	end
end

class AffirmStatus < QuickFix::IntField
	def initialize
		super(940)
	end

	def initialize(data)
		super(940, data)
	end
end

class UnderlyingStrikeCurrency < QuickFix::StringField
	def initialize
		super(941)
	end

	def initialize(data)
		super(941, data)
	end
end

class LegStrikeCurrency < QuickFix::StringField
	def initialize
		super(942)
	end

	def initialize(data)
		super(942, data)
	end
end

class TimeBracket < QuickFix::StringField
	def initialize
		super(943)
	end

	def initialize(data)
		super(943, data)
	end
end

class CollAction < QuickFix::IntField
	def initialize
		super(944)
	end

	def initialize(data)
		super(944, data)
	end
end

class CollInquiryStatus < QuickFix::IntField
	def initialize
		super(945)
	end

	def initialize(data)
		super(945, data)
	end
end

class CollInquiryResult < QuickFix::IntField
	def initialize
		super(946)
	end

	def initialize(data)
		super(946, data)
	end
end

class StrikeCurrency < QuickFix::StringField
	def initialize
		super(947)
	end

	def initialize(data)
		super(947, data)
	end
end

class NoNested3PartyIDs < QuickFix::IntField
	def initialize
		super(948)
	end

	def initialize(data)
		super(948, data)
	end
end

class Nested3PartyID < QuickFix::StringField
	def initialize
		super(949)
	end

	def initialize(data)
		super(949, data)
	end
end

class Nested3PartyIDSource < QuickFix::CharField
	def initialize
		super(950)
	end

	def initialize(data)
		super(950, data)
	end
end

class Nested3PartyRole < QuickFix::IntField
	def initialize
		super(951)
	end

	def initialize(data)
		super(951, data)
	end
end

class NoNested3PartySubIDs < QuickFix::IntField
	def initialize
		super(952)
	end

	def initialize(data)
		super(952, data)
	end
end

class Nested3PartySubID < QuickFix::StringField
	def initialize
		super(953)
	end

	def initialize(data)
		super(953, data)
	end
end

class Nested3PartySubIDType < QuickFix::IntField
	def initialize
		super(954)
	end

	def initialize(data)
		super(954, data)
	end
end

class LegContractSettlMonth < QuickFix::StringField
	def initialize
		super(955)
	end

	def initialize(data)
		super(955, data)
	end
end

class LegInterestAccrualDate < QuickFix::StringField
	def initialize
		super(956)
	end

	def initialize(data)
		super(956, data)
	end
end

