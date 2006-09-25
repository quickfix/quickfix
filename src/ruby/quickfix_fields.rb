module Quickfix
	class Account < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(1)
			else
				super(1, data)
			end
		end
	end

	class AdvId < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(2)
			else
				super(2, data)
			end
		end
	end

	class AdvRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(3)
			else
				super(3, data)
			end
		end
	end

	class AdvSide < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(4)
			else
				super(4, data)
			end
		end
	end

	class AdvTransType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(5)
			else
				super(5, data)
			end
		end
	end

	class AvgPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(6)
			else
				super(6, data)
			end
		end
	end

	class BeginSeqNo < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(7)
			else
				super(7, data)
			end
		end
	end

	class BeginString < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(8)
			else
				super(8, data)
			end
		end
	end

	class BodyLength < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(9)
			else
				super(9, data)
			end
		end
	end

	class CheckSum < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(10)
			else
				super(10, data)
			end
		end
	end

	class ClOrdID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(11)
			else
				super(11, data)
			end
		end
	end

	class Commission < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(12)
			else
				super(12, data)
			end
		end
	end

	class CommType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(13)
			else
				super(13, data)
			end
		end
	end

	class CumQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(14)
			else
				super(14, data)
			end
		end
	end

	class Currency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(15)
			else
				super(15, data)
			end
		end
	end

	class EndSeqNo < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(16)
			else
				super(16, data)
			end
		end
	end

	class ExecID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(17)
			else
				super(17, data)
			end
		end
	end

	class ExecInst < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(18)
			else
				super(18, data)
			end
		end
	end

	class ExecRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(19)
			else
				super(19, data)
			end
		end
	end

	class HandlInst < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(21)
			else
				super(21, data)
			end
		end
	end

	class SecurityIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(22)
			else
				super(22, data)
			end
		end
	end

	class IOIid < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(23)
			else
				super(23, data)
			end
		end
	end

	class IOIQltyInd < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(25)
			else
				super(25, data)
			end
		end
	end

	class IOIRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(26)
			else
				super(26, data)
			end
		end
	end

	class IOIQty < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(27)
			else
				super(27, data)
			end
		end
	end

	class IOITransType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(28)
			else
				super(28, data)
			end
		end
	end

	class LastCapacity < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(29)
			else
				super(29, data)
			end
		end
	end

	class LastMkt < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(30)
			else
				super(30, data)
			end
		end
	end

	class LastPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(31)
			else
				super(31, data)
			end
		end
	end

	class LastQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(32)
			else
				super(32, data)
			end
		end
	end

	class LinesOfText < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(33)
			else
				super(33, data)
			end
		end
	end

	class MsgSeqNum < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(34)
			else
				super(34, data)
			end
		end
	end

	class MsgType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(35)
			else
				super(35, data)
			end
		end
	end

	class NewSeqNo < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(36)
			else
				super(36, data)
			end
		end
	end

	class OrderID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(37)
			else
				super(37, data)
			end
		end
	end

	class OrderQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(38)
			else
				super(38, data)
			end
		end
	end

	class OrdStatus < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(39)
			else
				super(39, data)
			end
		end
	end

	class OrdType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(40)
			else
				super(40, data)
			end
		end
	end

	class OrigClOrdID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(41)
			else
				super(41, data)
			end
		end
	end

	class OrigTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(42)
			else
				super(42, data)
			end
		end
	end

	class PossDupFlag < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(43)
			else
				super(43, data)
			end
		end
	end

	class Price < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(44)
			else
				super(44, data)
			end
		end
	end

	class RefSeqNum < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(45)
			else
				super(45, data)
			end
		end
	end

	class SecurityID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(48)
			else
				super(48, data)
			end
		end
	end

	class SenderCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(49)
			else
				super(49, data)
			end
		end
	end

	class SenderSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(50)
			else
				super(50, data)
			end
		end
	end

	class SendingTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(52)
			else
				super(52, data)
			end
		end
	end

	class Quantity < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(53)
			else
				super(53, data)
			end
		end
	end

	class Side < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(54)
			else
				super(54, data)
			end
		end
	end

	class Symbol < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(55)
			else
				super(55, data)
			end
		end
	end

	class TargetCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(56)
			else
				super(56, data)
			end
		end
	end

	class TargetSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(57)
			else
				super(57, data)
			end
		end
	end

	class Text < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(58)
			else
				super(58, data)
			end
		end
	end

	class TimeInForce < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(59)
			else
				super(59, data)
			end
		end
	end

	class TransactTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(60)
			else
				super(60, data)
			end
		end
	end

	class Urgency < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(61)
			else
				super(61, data)
			end
		end
	end

	class ValidUntilTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(62)
			else
				super(62, data)
			end
		end
	end

	class SettlType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(63)
			else
				super(63, data)
			end
		end
	end

	class SettlDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(64)
			else
				super(64, data)
			end
		end
	end

	class SymbolSfx < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(65)
			else
				super(65, data)
			end
		end
	end

	class ListID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(66)
			else
				super(66, data)
			end
		end
	end

	class ListSeqNo < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(67)
			else
				super(67, data)
			end
		end
	end

	class TotNoOrders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(68)
			else
				super(68, data)
			end
		end
	end

	class ListExecInst < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(69)
			else
				super(69, data)
			end
		end
	end

	class AllocID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(70)
			else
				super(70, data)
			end
		end
	end

	class AllocTransType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(71)
			else
				super(71, data)
			end
		end
	end

	class RefAllocID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(72)
			else
				super(72, data)
			end
		end
	end

	class NoOrders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(73)
			else
				super(73, data)
			end
		end
	end

	class AvgPxPrecision < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(74)
			else
				super(74, data)
			end
		end
	end

	class TradeDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(75)
			else
				super(75, data)
			end
		end
	end

	class PositionEffect < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(77)
			else
				super(77, data)
			end
		end
	end

	class NoAllocs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(78)
			else
				super(78, data)
			end
		end
	end

	class AllocAccount < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(79)
			else
				super(79, data)
			end
		end
	end

	class AllocQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(80)
			else
				super(80, data)
			end
		end
	end

	class ProcessCode < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(81)
			else
				super(81, data)
			end
		end
	end

	class NoRpts < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(82)
			else
				super(82, data)
			end
		end
	end

	class RptSeq < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(83)
			else
				super(83, data)
			end
		end
	end

	class CxlQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(84)
			else
				super(84, data)
			end
		end
	end

	class NoDlvyInst < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(85)
			else
				super(85, data)
			end
		end
	end

	class AllocStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(87)
			else
				super(87, data)
			end
		end
	end

	class AllocRejCode < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(88)
			else
				super(88, data)
			end
		end
	end

	class Signature < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(89)
			else
				super(89, data)
			end
		end
	end

	class SecureDataLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(90)
			else
				super(90, data)
			end
		end
	end

	class SecureData < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(91)
			else
				super(91, data)
			end
		end
	end

	class SignatureLength < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(93)
			else
				super(93, data)
			end
		end
	end

	class EmailType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(94)
			else
				super(94, data)
			end
		end
	end

	class RawDataLength < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(95)
			else
				super(95, data)
			end
		end
	end

	class RawData < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(96)
			else
				super(96, data)
			end
		end
	end

	class PossResend < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(97)
			else
				super(97, data)
			end
		end
	end

	class EncryptMethod < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(98)
			else
				super(98, data)
			end
		end
	end

	class StopPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(99)
			else
				super(99, data)
			end
		end
	end

	class ExDestination < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(100)
			else
				super(100, data)
			end
		end
	end

	class CxlRejReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(102)
			else
				super(102, data)
			end
		end
	end

	class OrdRejReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(103)
			else
				super(103, data)
			end
		end
	end

	class IOIQualifier < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(104)
			else
				super(104, data)
			end
		end
	end

	class WaveNo < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(105)
			else
				super(105, data)
			end
		end
	end

	class Issuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(106)
			else
				super(106, data)
			end
		end
	end

	class SecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(107)
			else
				super(107, data)
			end
		end
	end

	class HeartBtInt < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(108)
			else
				super(108, data)
			end
		end
	end

	class MinQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(110)
			else
				super(110, data)
			end
		end
	end

	class MaxFloor < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(111)
			else
				super(111, data)
			end
		end
	end

	class TestReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(112)
			else
				super(112, data)
			end
		end
	end

	class ReportToExch < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(113)
			else
				super(113, data)
			end
		end
	end

	class LocateReqd < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(114)
			else
				super(114, data)
			end
		end
	end

	class OnBehalfOfCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(115)
			else
				super(115, data)
			end
		end
	end

	class OnBehalfOfSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(116)
			else
				super(116, data)
			end
		end
	end

	class QuoteID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(117)
			else
				super(117, data)
			end
		end
	end

	class NetMoney < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(118)
			else
				super(118, data)
			end
		end
	end

	class SettlCurrAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(119)
			else
				super(119, data)
			end
		end
	end

	class SettlCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(120)
			else
				super(120, data)
			end
		end
	end

	class ForexReq < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(121)
			else
				super(121, data)
			end
		end
	end

	class OrigSendingTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(122)
			else
				super(122, data)
			end
		end
	end

	class GapFillFlag < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(123)
			else
				super(123, data)
			end
		end
	end

	class NoExecs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(124)
			else
				super(124, data)
			end
		end
	end

	class ExpireTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(126)
			else
				super(126, data)
			end
		end
	end

	class DKReason < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(127)
			else
				super(127, data)
			end
		end
	end

	class DeliverToCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(128)
			else
				super(128, data)
			end
		end
	end

	class DeliverToSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(129)
			else
				super(129, data)
			end
		end
	end

	class IOINaturalFlag < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(130)
			else
				super(130, data)
			end
		end
	end

	class QuoteReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(131)
			else
				super(131, data)
			end
		end
	end

	class BidPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(132)
			else
				super(132, data)
			end
		end
	end

	class OfferPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(133)
			else
				super(133, data)
			end
		end
	end

	class BidSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(134)
			else
				super(134, data)
			end
		end
	end

	class OfferSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(135)
			else
				super(135, data)
			end
		end
	end

	class NoMiscFees < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(136)
			else
				super(136, data)
			end
		end
	end

	class MiscFeeAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(137)
			else
				super(137, data)
			end
		end
	end

	class MiscFeeCurr < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(138)
			else
				super(138, data)
			end
		end
	end

	class MiscFeeType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(139)
			else
				super(139, data)
			end
		end
	end

	class PrevClosePx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(140)
			else
				super(140, data)
			end
		end
	end

	class ResetSeqNumFlag < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(141)
			else
				super(141, data)
			end
		end
	end

	class SenderLocationID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(142)
			else
				super(142, data)
			end
		end
	end

	class TargetLocationID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(143)
			else
				super(143, data)
			end
		end
	end

	class OnBehalfOfLocationID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(144)
			else
				super(144, data)
			end
		end
	end

	class DeliverToLocationID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(145)
			else
				super(145, data)
			end
		end
	end

	class NoRelatedSym < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(146)
			else
				super(146, data)
			end
		end
	end

	class Subject < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(147)
			else
				super(147, data)
			end
		end
	end

	class Headline < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(148)
			else
				super(148, data)
			end
		end
	end

	class URLLink < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(149)
			else
				super(149, data)
			end
		end
	end

	class ExecType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(150)
			else
				super(150, data)
			end
		end
	end

	class LeavesQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(151)
			else
				super(151, data)
			end
		end
	end

	class CashOrderQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(152)
			else
				super(152, data)
			end
		end
	end

	class AllocAvgPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(153)
			else
				super(153, data)
			end
		end
	end

	class AllocNetMoney < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(154)
			else
				super(154, data)
			end
		end
	end

	class SettlCurrFxRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(155)
			else
				super(155, data)
			end
		end
	end

	class SettlCurrFxRateCalc < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(156)
			else
				super(156, data)
			end
		end
	end

	class NumDaysInterest < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(157)
			else
				super(157, data)
			end
		end
	end

	class AccruedInterestRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(158)
			else
				super(158, data)
			end
		end
	end

	class AccruedInterestAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(159)
			else
				super(159, data)
			end
		end
	end

	class SettlInstMode < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(160)
			else
				super(160, data)
			end
		end
	end

	class AllocText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(161)
			else
				super(161, data)
			end
		end
	end

	class SettlInstID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(162)
			else
				super(162, data)
			end
		end
	end

	class SettlInstTransType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(163)
			else
				super(163, data)
			end
		end
	end

	class EmailThreadID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(164)
			else
				super(164, data)
			end
		end
	end

	class SettlInstSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(165)
			else
				super(165, data)
			end
		end
	end

	class SecurityType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(167)
			else
				super(167, data)
			end
		end
	end

	class EffectiveTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(168)
			else
				super(168, data)
			end
		end
	end

	class StandInstDbType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(169)
			else
				super(169, data)
			end
		end
	end

	class StandInstDbName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(170)
			else
				super(170, data)
			end
		end
	end

	class StandInstDbID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(171)
			else
				super(171, data)
			end
		end
	end

	class SettlDeliveryType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(172)
			else
				super(172, data)
			end
		end
	end

	class BidSpotRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(188)
			else
				super(188, data)
			end
		end
	end

	class BidForwardPoints < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(189)
			else
				super(189, data)
			end
		end
	end

	class OfferSpotRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(190)
			else
				super(190, data)
			end
		end
	end

	class OfferForwardPoints < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(191)
			else
				super(191, data)
			end
		end
	end

	class OrderQty2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(192)
			else
				super(192, data)
			end
		end
	end

	class SettlDate2 < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(193)
			else
				super(193, data)
			end
		end
	end

	class LastSpotRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(194)
			else
				super(194, data)
			end
		end
	end

	class LastForwardPoints < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(195)
			else
				super(195, data)
			end
		end
	end

	class AllocLinkID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(196)
			else
				super(196, data)
			end
		end
	end

	class AllocLinkType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(197)
			else
				super(197, data)
			end
		end
	end

	class SecondaryOrderID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(198)
			else
				super(198, data)
			end
		end
	end

	class NoIOIQualifiers < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(199)
			else
				super(199, data)
			end
		end
	end

	class MaturityMonthYear < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(200)
			else
				super(200, data)
			end
		end
	end

	class StrikePrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(202)
			else
				super(202, data)
			end
		end
	end

	class CoveredOrUncovered < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(203)
			else
				super(203, data)
			end
		end
	end

	class OptAttribute < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(206)
			else
				super(206, data)
			end
		end
	end

	class SecurityExchange < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(207)
			else
				super(207, data)
			end
		end
	end

	class NotifyBrokerOfCredit < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(208)
			else
				super(208, data)
			end
		end
	end

	class AllocHandlInst < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(209)
			else
				super(209, data)
			end
		end
	end

	class MaxShow < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(210)
			else
				super(210, data)
			end
		end
	end

	class PegOffsetValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(211)
			else
				super(211, data)
			end
		end
	end

	class XmlDataLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(212)
			else
				super(212, data)
			end
		end
	end

	class XmlData < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(213)
			else
				super(213, data)
			end
		end
	end

	class SettlInstRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(214)
			else
				super(214, data)
			end
		end
	end

	class NoRoutingIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(215)
			else
				super(215, data)
			end
		end
	end

	class RoutingType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(216)
			else
				super(216, data)
			end
		end
	end

	class RoutingID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(217)
			else
				super(217, data)
			end
		end
	end

	class Spread < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(218)
			else
				super(218, data)
			end
		end
	end

	class BenchmarkCurveCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(220)
			else
				super(220, data)
			end
		end
	end

	class BenchmarkCurveName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(221)
			else
				super(221, data)
			end
		end
	end

	class BenchmarkCurvePoint < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(222)
			else
				super(222, data)
			end
		end
	end

	class CouponRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(223)
			else
				super(223, data)
			end
		end
	end

	class CouponPaymentDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(224)
			else
				super(224, data)
			end
		end
	end

	class IssueDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(225)
			else
				super(225, data)
			end
		end
	end

	class RepurchaseTerm < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(226)
			else
				super(226, data)
			end
		end
	end

	class RepurchaseRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(227)
			else
				super(227, data)
			end
		end
	end

	class Factor < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(228)
			else
				super(228, data)
			end
		end
	end

	class TradeOriginationDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(229)
			else
				super(229, data)
			end
		end
	end

	class ExDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(230)
			else
				super(230, data)
			end
		end
	end

	class ContractMultiplier < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(231)
			else
				super(231, data)
			end
		end
	end

	class NoStipulations < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(232)
			else
				super(232, data)
			end
		end
	end

	class StipulationType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(233)
			else
				super(233, data)
			end
		end
	end

	class StipulationValue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(234)
			else
				super(234, data)
			end
		end
	end

	class YieldType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(235)
			else
				super(235, data)
			end
		end
	end

	class Yield < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(236)
			else
				super(236, data)
			end
		end
	end

	class TotalTakedown < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(237)
			else
				super(237, data)
			end
		end
	end

	class Concession < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(238)
			else
				super(238, data)
			end
		end
	end

	class RepoCollateralSecurityType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(239)
			else
				super(239, data)
			end
		end
	end

	class RedemptionDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(240)
			else
				super(240, data)
			end
		end
	end

	class UnderlyingCouponPaymentDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(241)
			else
				super(241, data)
			end
		end
	end

	class UnderlyingIssueDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(242)
			else
				super(242, data)
			end
		end
	end

	class UnderlyingRepoCollateralSecurityType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(243)
			else
				super(243, data)
			end
		end
	end

	class UnderlyingRepurchaseTerm < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(244)
			else
				super(244, data)
			end
		end
	end

	class UnderlyingRepurchaseRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(245)
			else
				super(245, data)
			end
		end
	end

	class UnderlyingFactor < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(246)
			else
				super(246, data)
			end
		end
	end

	class UnderlyingRedemptionDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(247)
			else
				super(247, data)
			end
		end
	end

	class LegCouponPaymentDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(248)
			else
				super(248, data)
			end
		end
	end

	class LegIssueDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(249)
			else
				super(249, data)
			end
		end
	end

	class LegRepoCollateralSecurityType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(250)
			else
				super(250, data)
			end
		end
	end

	class LegRepurchaseTerm < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(251)
			else
				super(251, data)
			end
		end
	end

	class LegRepurchaseRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(252)
			else
				super(252, data)
			end
		end
	end

	class LegFactor < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(253)
			else
				super(253, data)
			end
		end
	end

	class LegRedemptionDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(254)
			else
				super(254, data)
			end
		end
	end

	class CreditRating < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(255)
			else
				super(255, data)
			end
		end
	end

	class UnderlyingCreditRating < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(256)
			else
				super(256, data)
			end
		end
	end

	class LegCreditRating < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(257)
			else
				super(257, data)
			end
		end
	end

	class TradedFlatSwitch < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(258)
			else
				super(258, data)
			end
		end
	end

	class BasisFeatureDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(259)
			else
				super(259, data)
			end
		end
	end

	class BasisFeaturePrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(260)
			else
				super(260, data)
			end
		end
	end

	class MDReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(262)
			else
				super(262, data)
			end
		end
	end

	class SubscriptionRequestType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(263)
			else
				super(263, data)
			end
		end
	end

	class MarketDepth < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(264)
			else
				super(264, data)
			end
		end
	end

	class MDUpdateType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(265)
			else
				super(265, data)
			end
		end
	end

	class AggregatedBook < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(266)
			else
				super(266, data)
			end
		end
	end

	class NoMDEntryTypes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(267)
			else
				super(267, data)
			end
		end
	end

	class NoMDEntries < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(268)
			else
				super(268, data)
			end
		end
	end

	class MDEntryType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(269)
			else
				super(269, data)
			end
		end
	end

	class MDEntryPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(270)
			else
				super(270, data)
			end
		end
	end

	class MDEntrySize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(271)
			else
				super(271, data)
			end
		end
	end

	class MDEntryDate < Quickfix::UtcDateField
		def initialize(data = nil)
			if( data == nil )
				super(272)
			else
				super(272, data)
			end
		end
	end

	class MDEntryTime < Quickfix::UtcTimeOnlyField
		def initialize(data = nil)
			if( data == nil )
				super(273)
			else
				super(273, data)
			end
		end
	end

	class TickDirection < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(274)
			else
				super(274, data)
			end
		end
	end

	class MDMkt < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(275)
			else
				super(275, data)
			end
		end
	end

	class QuoteCondition < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(276)
			else
				super(276, data)
			end
		end
	end

	class TradeCondition < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(277)
			else
				super(277, data)
			end
		end
	end

	class MDEntryID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(278)
			else
				super(278, data)
			end
		end
	end

	class MDUpdateAction < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(279)
			else
				super(279, data)
			end
		end
	end

	class MDEntryRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(280)
			else
				super(280, data)
			end
		end
	end

	class MDReqRejReason < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(281)
			else
				super(281, data)
			end
		end
	end

	class MDEntryOriginator < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(282)
			else
				super(282, data)
			end
		end
	end

	class LocationID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(283)
			else
				super(283, data)
			end
		end
	end

	class DeskID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(284)
			else
				super(284, data)
			end
		end
	end

	class DeleteReason < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(285)
			else
				super(285, data)
			end
		end
	end

	class OpenCloseSettlFlag < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(286)
			else
				super(286, data)
			end
		end
	end

	class SellerDays < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(287)
			else
				super(287, data)
			end
		end
	end

	class MDEntryBuyer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(288)
			else
				super(288, data)
			end
		end
	end

	class MDEntrySeller < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(289)
			else
				super(289, data)
			end
		end
	end

	class MDEntryPositionNo < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(290)
			else
				super(290, data)
			end
		end
	end

	class FinancialStatus < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(291)
			else
				super(291, data)
			end
		end
	end

	class CorporateAction < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(292)
			else
				super(292, data)
			end
		end
	end

	class DefBidSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(293)
			else
				super(293, data)
			end
		end
	end

	class DefOfferSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(294)
			else
				super(294, data)
			end
		end
	end

	class NoQuoteEntries < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(295)
			else
				super(295, data)
			end
		end
	end

	class NoQuoteSets < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(296)
			else
				super(296, data)
			end
		end
	end

	class QuoteStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(297)
			else
				super(297, data)
			end
		end
	end

	class QuoteCancelType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(298)
			else
				super(298, data)
			end
		end
	end

	class QuoteEntryID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(299)
			else
				super(299, data)
			end
		end
	end

	class QuoteRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(300)
			else
				super(300, data)
			end
		end
	end

	class QuoteResponseLevel < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(301)
			else
				super(301, data)
			end
		end
	end

	class QuoteSetID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(302)
			else
				super(302, data)
			end
		end
	end

	class QuoteRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(303)
			else
				super(303, data)
			end
		end
	end

	class TotNoQuoteEntries < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(304)
			else
				super(304, data)
			end
		end
	end

	class UnderlyingSecurityIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(305)
			else
				super(305, data)
			end
		end
	end

	class UnderlyingIssuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(306)
			else
				super(306, data)
			end
		end
	end

	class UnderlyingSecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(307)
			else
				super(307, data)
			end
		end
	end

	class UnderlyingSecurityExchange < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(308)
			else
				super(308, data)
			end
		end
	end

	class UnderlyingSecurityID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(309)
			else
				super(309, data)
			end
		end
	end

	class UnderlyingSecurityType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(310)
			else
				super(310, data)
			end
		end
	end

	class UnderlyingSymbol < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(311)
			else
				super(311, data)
			end
		end
	end

	class UnderlyingSymbolSfx < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(312)
			else
				super(312, data)
			end
		end
	end

	class UnderlyingMaturityMonthYear < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(313)
			else
				super(313, data)
			end
		end
	end

	class UnderlyingStrikePrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(316)
			else
				super(316, data)
			end
		end
	end

	class UnderlyingOptAttribute < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(317)
			else
				super(317, data)
			end
		end
	end

	class UnderlyingCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(318)
			else
				super(318, data)
			end
		end
	end

	class SecurityReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(320)
			else
				super(320, data)
			end
		end
	end

	class SecurityRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(321)
			else
				super(321, data)
			end
		end
	end

	class SecurityResponseID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(322)
			else
				super(322, data)
			end
		end
	end

	class SecurityResponseType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(323)
			else
				super(323, data)
			end
		end
	end

	class SecurityStatusReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(324)
			else
				super(324, data)
			end
		end
	end

	class UnsolicitedIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(325)
			else
				super(325, data)
			end
		end
	end

	class SecurityTradingStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(326)
			else
				super(326, data)
			end
		end
	end

	class HaltReason < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(327)
			else
				super(327, data)
			end
		end
	end

	class InViewOfCommon < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(328)
			else
				super(328, data)
			end
		end
	end

	class DueToRelated < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(329)
			else
				super(329, data)
			end
		end
	end

	class BuyVolume < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(330)
			else
				super(330, data)
			end
		end
	end

	class SellVolume < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(331)
			else
				super(331, data)
			end
		end
	end

	class HighPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(332)
			else
				super(332, data)
			end
		end
	end

	class LowPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(333)
			else
				super(333, data)
			end
		end
	end

	class Adjustment < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(334)
			else
				super(334, data)
			end
		end
	end

	class TradSesReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(335)
			else
				super(335, data)
			end
		end
	end

	class TradingSessionID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(336)
			else
				super(336, data)
			end
		end
	end

	class ContraTrader < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(337)
			else
				super(337, data)
			end
		end
	end

	class TradSesMethod < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(338)
			else
				super(338, data)
			end
		end
	end

	class TradSesMode < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(339)
			else
				super(339, data)
			end
		end
	end

	class TradSesStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(340)
			else
				super(340, data)
			end
		end
	end

	class TradSesStartTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(341)
			else
				super(341, data)
			end
		end
	end

	class TradSesOpenTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(342)
			else
				super(342, data)
			end
		end
	end

	class TradSesPreCloseTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(343)
			else
				super(343, data)
			end
		end
	end

	class TradSesCloseTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(344)
			else
				super(344, data)
			end
		end
	end

	class TradSesEndTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(345)
			else
				super(345, data)
			end
		end
	end

	class NumberOfOrders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(346)
			else
				super(346, data)
			end
		end
	end

	class MessageEncoding < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(347)
			else
				super(347, data)
			end
		end
	end

	class EncodedIssuerLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(348)
			else
				super(348, data)
			end
		end
	end

	class EncodedIssuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(349)
			else
				super(349, data)
			end
		end
	end

	class EncodedSecurityDescLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(350)
			else
				super(350, data)
			end
		end
	end

	class EncodedSecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(351)
			else
				super(351, data)
			end
		end
	end

	class EncodedListExecInstLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(352)
			else
				super(352, data)
			end
		end
	end

	class EncodedListExecInst < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(353)
			else
				super(353, data)
			end
		end
	end

	class EncodedTextLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(354)
			else
				super(354, data)
			end
		end
	end

	class EncodedText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(355)
			else
				super(355, data)
			end
		end
	end

	class EncodedSubjectLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(356)
			else
				super(356, data)
			end
		end
	end

	class EncodedSubject < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(357)
			else
				super(357, data)
			end
		end
	end

	class EncodedHeadlineLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(358)
			else
				super(358, data)
			end
		end
	end

	class EncodedHeadline < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(359)
			else
				super(359, data)
			end
		end
	end

	class EncodedAllocTextLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(360)
			else
				super(360, data)
			end
		end
	end

	class EncodedAllocText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(361)
			else
				super(361, data)
			end
		end
	end

	class EncodedUnderlyingIssuerLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(362)
			else
				super(362, data)
			end
		end
	end

	class EncodedUnderlyingIssuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(363)
			else
				super(363, data)
			end
		end
	end

	class EncodedUnderlyingSecurityDescLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(364)
			else
				super(364, data)
			end
		end
	end

	class EncodedUnderlyingSecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(365)
			else
				super(365, data)
			end
		end
	end

	class AllocPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(366)
			else
				super(366, data)
			end
		end
	end

	class QuoteSetValidUntilTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(367)
			else
				super(367, data)
			end
		end
	end

	class QuoteEntryRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(368)
			else
				super(368, data)
			end
		end
	end

	class LastMsgSeqNumProcessed < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(369)
			else
				super(369, data)
			end
		end
	end

	class RefTagID < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(371)
			else
				super(371, data)
			end
		end
	end

	class RefMsgType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(372)
			else
				super(372, data)
			end
		end
	end

	class SessionRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(373)
			else
				super(373, data)
			end
		end
	end

	class BidRequestTransType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(374)
			else
				super(374, data)
			end
		end
	end

	class ContraBroker < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(375)
			else
				super(375, data)
			end
		end
	end

	class ComplianceID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(376)
			else
				super(376, data)
			end
		end
	end

	class SolicitedFlag < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(377)
			else
				super(377, data)
			end
		end
	end

	class ExecRestatementReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(378)
			else
				super(378, data)
			end
		end
	end

	class BusinessRejectRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(379)
			else
				super(379, data)
			end
		end
	end

	class BusinessRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(380)
			else
				super(380, data)
			end
		end
	end

	class GrossTradeAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(381)
			else
				super(381, data)
			end
		end
	end

	class NoContraBrokers < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(382)
			else
				super(382, data)
			end
		end
	end

	class MaxMessageSize < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(383)
			else
				super(383, data)
			end
		end
	end

	class NoMsgTypes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(384)
			else
				super(384, data)
			end
		end
	end

	class MsgDirection < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(385)
			else
				super(385, data)
			end
		end
	end

	class NoTradingSessions < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(386)
			else
				super(386, data)
			end
		end
	end

	class TotalVolumeTraded < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(387)
			else
				super(387, data)
			end
		end
	end

	class DiscretionInst < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(388)
			else
				super(388, data)
			end
		end
	end

	class DiscretionOffsetValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(389)
			else
				super(389, data)
			end
		end
	end

	class BidID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(390)
			else
				super(390, data)
			end
		end
	end

	class ClientBidID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(391)
			else
				super(391, data)
			end
		end
	end

	class ListName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(392)
			else
				super(392, data)
			end
		end
	end

	class TotNoRelatedSym < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(393)
			else
				super(393, data)
			end
		end
	end

	class BidType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(394)
			else
				super(394, data)
			end
		end
	end

	class NumTickets < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(395)
			else
				super(395, data)
			end
		end
	end

	class SideValue1 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(396)
			else
				super(396, data)
			end
		end
	end

	class SideValue2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(397)
			else
				super(397, data)
			end
		end
	end

	class NoBidDescriptors < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(398)
			else
				super(398, data)
			end
		end
	end

	class BidDescriptorType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(399)
			else
				super(399, data)
			end
		end
	end

	class BidDescriptor < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(400)
			else
				super(400, data)
			end
		end
	end

	class SideValueInd < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(401)
			else
				super(401, data)
			end
		end
	end

	class LiquidityPctLow < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(402)
			else
				super(402, data)
			end
		end
	end

	class LiquidityPctHigh < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(403)
			else
				super(403, data)
			end
		end
	end

	class LiquidityValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(404)
			else
				super(404, data)
			end
		end
	end

	class EFPTrackingError < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(405)
			else
				super(405, data)
			end
		end
	end

	class FairValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(406)
			else
				super(406, data)
			end
		end
	end

	class OutsideIndexPct < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(407)
			else
				super(407, data)
			end
		end
	end

	class ValueOfFutures < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(408)
			else
				super(408, data)
			end
		end
	end

	class LiquidityIndType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(409)
			else
				super(409, data)
			end
		end
	end

	class WtAverageLiquidity < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(410)
			else
				super(410, data)
			end
		end
	end

	class ExchangeForPhysical < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(411)
			else
				super(411, data)
			end
		end
	end

	class OutMainCntryUIndex < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(412)
			else
				super(412, data)
			end
		end
	end

	class CrossPercent < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(413)
			else
				super(413, data)
			end
		end
	end

	class ProgRptReqs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(414)
			else
				super(414, data)
			end
		end
	end

	class ProgPeriodInterval < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(415)
			else
				super(415, data)
			end
		end
	end

	class IncTaxInd < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(416)
			else
				super(416, data)
			end
		end
	end

	class NumBidders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(417)
			else
				super(417, data)
			end
		end
	end

	class BidTradeType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(418)
			else
				super(418, data)
			end
		end
	end

	class BasisPxType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(419)
			else
				super(419, data)
			end
		end
	end

	class NoBidComponents < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(420)
			else
				super(420, data)
			end
		end
	end

	class Country < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(421)
			else
				super(421, data)
			end
		end
	end

	class TotNoStrikes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(422)
			else
				super(422, data)
			end
		end
	end

	class PriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(423)
			else
				super(423, data)
			end
		end
	end

	class DayOrderQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(424)
			else
				super(424, data)
			end
		end
	end

	class DayCumQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(425)
			else
				super(425, data)
			end
		end
	end

	class DayAvgPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(426)
			else
				super(426, data)
			end
		end
	end

	class GTBookingInst < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(427)
			else
				super(427, data)
			end
		end
	end

	class NoStrikes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(428)
			else
				super(428, data)
			end
		end
	end

	class ListStatusType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(429)
			else
				super(429, data)
			end
		end
	end

	class NetGrossInd < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(430)
			else
				super(430, data)
			end
		end
	end

	class ListOrderStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(431)
			else
				super(431, data)
			end
		end
	end

	class ExpireDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(432)
			else
				super(432, data)
			end
		end
	end

	class ListExecInstType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(433)
			else
				super(433, data)
			end
		end
	end

	class CxlRejResponseTo < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(434)
			else
				super(434, data)
			end
		end
	end

	class UnderlyingCouponRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(435)
			else
				super(435, data)
			end
		end
	end

	class UnderlyingContractMultiplier < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(436)
			else
				super(436, data)
			end
		end
	end

	class ContraTradeQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(437)
			else
				super(437, data)
			end
		end
	end

	class ContraTradeTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(438)
			else
				super(438, data)
			end
		end
	end

	class LiquidityNumSecurities < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(441)
			else
				super(441, data)
			end
		end
	end

	class MultiLegReportingType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(442)
			else
				super(442, data)
			end
		end
	end

	class StrikeTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(443)
			else
				super(443, data)
			end
		end
	end

	class ListStatusText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(444)
			else
				super(444, data)
			end
		end
	end

	class EncodedListStatusTextLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(445)
			else
				super(445, data)
			end
		end
	end

	class EncodedListStatusText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(446)
			else
				super(446, data)
			end
		end
	end

	class PartyIDSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(447)
			else
				super(447, data)
			end
		end
	end

	class PartyID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(448)
			else
				super(448, data)
			end
		end
	end

	class NetChgPrevDay < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(451)
			else
				super(451, data)
			end
		end
	end

	class PartyRole < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(452)
			else
				super(452, data)
			end
		end
	end

	class NoPartyIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(453)
			else
				super(453, data)
			end
		end
	end

	class NoSecurityAltID < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(454)
			else
				super(454, data)
			end
		end
	end

	class SecurityAltID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(455)
			else
				super(455, data)
			end
		end
	end

	class SecurityAltIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(456)
			else
				super(456, data)
			end
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(457)
			else
				super(457, data)
			end
		end
	end

	class UnderlyingSecurityAltID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(458)
			else
				super(458, data)
			end
		end
	end

	class UnderlyingSecurityAltIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(459)
			else
				super(459, data)
			end
		end
	end

	class Product < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(460)
			else
				super(460, data)
			end
		end
	end

	class CFICode < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(461)
			else
				super(461, data)
			end
		end
	end

	class UnderlyingProduct < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(462)
			else
				super(462, data)
			end
		end
	end

	class UnderlyingCFICode < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(463)
			else
				super(463, data)
			end
		end
	end

	class TestMessageIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(464)
			else
				super(464, data)
			end
		end
	end

	class QuantityType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(465)
			else
				super(465, data)
			end
		end
	end

	class BookingRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(466)
			else
				super(466, data)
			end
		end
	end

	class IndividualAllocID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(467)
			else
				super(467, data)
			end
		end
	end

	class RoundingDirection < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(468)
			else
				super(468, data)
			end
		end
	end

	class RoundingModulus < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(469)
			else
				super(469, data)
			end
		end
	end

	class CountryOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(470)
			else
				super(470, data)
			end
		end
	end

	class StateOrProvinceOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(471)
			else
				super(471, data)
			end
		end
	end

	class LocaleOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(472)
			else
				super(472, data)
			end
		end
	end

	class NoRegistDtls < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(473)
			else
				super(473, data)
			end
		end
	end

	class MailingDtls < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(474)
			else
				super(474, data)
			end
		end
	end

	class InvestorCountryOfResidence < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(475)
			else
				super(475, data)
			end
		end
	end

	class PaymentRef < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(476)
			else
				super(476, data)
			end
		end
	end

	class DistribPaymentMethod < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(477)
			else
				super(477, data)
			end
		end
	end

	class CashDistribCurr < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(478)
			else
				super(478, data)
			end
		end
	end

	class CommCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(479)
			else
				super(479, data)
			end
		end
	end

	class CancellationRights < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(480)
			else
				super(480, data)
			end
		end
	end

	class MoneyLaunderingStatus < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(481)
			else
				super(481, data)
			end
		end
	end

	class MailingInst < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(482)
			else
				super(482, data)
			end
		end
	end

	class TransBkdTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(483)
			else
				super(483, data)
			end
		end
	end

	class ExecPriceType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(484)
			else
				super(484, data)
			end
		end
	end

	class ExecPriceAdjustment < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(485)
			else
				super(485, data)
			end
		end
	end

	class DateOfBirth < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(486)
			else
				super(486, data)
			end
		end
	end

	class TradeReportTransType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(487)
			else
				super(487, data)
			end
		end
	end

	class CardHolderName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(488)
			else
				super(488, data)
			end
		end
	end

	class CardNumber < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(489)
			else
				super(489, data)
			end
		end
	end

	class CardExpDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(490)
			else
				super(490, data)
			end
		end
	end

	class CardIssNum < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(491)
			else
				super(491, data)
			end
		end
	end

	class PaymentMethod < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(492)
			else
				super(492, data)
			end
		end
	end

	class RegistAcctType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(493)
			else
				super(493, data)
			end
		end
	end

	class Designation < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(494)
			else
				super(494, data)
			end
		end
	end

	class TaxAdvantageType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(495)
			else
				super(495, data)
			end
		end
	end

	class RegistRejReasonText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(496)
			else
				super(496, data)
			end
		end
	end

	class FundRenewWaiv < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(497)
			else
				super(497, data)
			end
		end
	end

	class CashDistribAgentName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(498)
			else
				super(498, data)
			end
		end
	end

	class CashDistribAgentCode < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(499)
			else
				super(499, data)
			end
		end
	end

	class CashDistribAgentAcctNumber < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(500)
			else
				super(500, data)
			end
		end
	end

	class CashDistribPayRef < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(501)
			else
				super(501, data)
			end
		end
	end

	class CashDistribAgentAcctName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(502)
			else
				super(502, data)
			end
		end
	end

	class CardStartDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(503)
			else
				super(503, data)
			end
		end
	end

	class PaymentDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(504)
			else
				super(504, data)
			end
		end
	end

	class PaymentRemitterID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(505)
			else
				super(505, data)
			end
		end
	end

	class RegistStatus < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(506)
			else
				super(506, data)
			end
		end
	end

	class RegistRejReasonCode < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(507)
			else
				super(507, data)
			end
		end
	end

	class RegistRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(508)
			else
				super(508, data)
			end
		end
	end

	class RegistDtls < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(509)
			else
				super(509, data)
			end
		end
	end

	class NoDistribInsts < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(510)
			else
				super(510, data)
			end
		end
	end

	class RegistEmail < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(511)
			else
				super(511, data)
			end
		end
	end

	class DistribPercentage < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(512)
			else
				super(512, data)
			end
		end
	end

	class RegistID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(513)
			else
				super(513, data)
			end
		end
	end

	class RegistTransType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(514)
			else
				super(514, data)
			end
		end
	end

	class ExecValuationPoint < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(515)
			else
				super(515, data)
			end
		end
	end

	class OrderPercent < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(516)
			else
				super(516, data)
			end
		end
	end

	class OwnershipType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(517)
			else
				super(517, data)
			end
		end
	end

	class NoContAmts < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(518)
			else
				super(518, data)
			end
		end
	end

	class ContAmtType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(519)
			else
				super(519, data)
			end
		end
	end

	class ContAmtValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(520)
			else
				super(520, data)
			end
		end
	end

	class ContAmtCurr < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(521)
			else
				super(521, data)
			end
		end
	end

	class OwnerType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(522)
			else
				super(522, data)
			end
		end
	end

	class PartySubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(523)
			else
				super(523, data)
			end
		end
	end

	class NestedPartyID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(524)
			else
				super(524, data)
			end
		end
	end

	class NestedPartyIDSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(525)
			else
				super(525, data)
			end
		end
	end

	class SecondaryClOrdID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(526)
			else
				super(526, data)
			end
		end
	end

	class SecondaryExecID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(527)
			else
				super(527, data)
			end
		end
	end

	class OrderCapacity < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(528)
			else
				super(528, data)
			end
		end
	end

	class OrderRestrictions < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(529)
			else
				super(529, data)
			end
		end
	end

	class MassCancelRequestType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(530)
			else
				super(530, data)
			end
		end
	end

	class MassCancelResponse < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(531)
			else
				super(531, data)
			end
		end
	end

	class MassCancelRejectReason < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(532)
			else
				super(532, data)
			end
		end
	end

	class TotalAffectedOrders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(533)
			else
				super(533, data)
			end
		end
	end

	class NoAffectedOrders < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(534)
			else
				super(534, data)
			end
		end
	end

	class AffectedOrderID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(535)
			else
				super(535, data)
			end
		end
	end

	class AffectedSecondaryOrderID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(536)
			else
				super(536, data)
			end
		end
	end

	class QuoteType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(537)
			else
				super(537, data)
			end
		end
	end

	class NestedPartyRole < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(538)
			else
				super(538, data)
			end
		end
	end

	class NoNestedPartyIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(539)
			else
				super(539, data)
			end
		end
	end

	class TotalAccruedInterestAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(540)
			else
				super(540, data)
			end
		end
	end

	class MaturityDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(541)
			else
				super(541, data)
			end
		end
	end

	class UnderlyingMaturityDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(542)
			else
				super(542, data)
			end
		end
	end

	class InstrRegistry < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(543)
			else
				super(543, data)
			end
		end
	end

	class CashMargin < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(544)
			else
				super(544, data)
			end
		end
	end

	class NestedPartySubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(545)
			else
				super(545, data)
			end
		end
	end

	class Scope < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(546)
			else
				super(546, data)
			end
		end
	end

	class MDImplicitDelete < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(547)
			else
				super(547, data)
			end
		end
	end

	class CrossID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(548)
			else
				super(548, data)
			end
		end
	end

	class CrossType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(549)
			else
				super(549, data)
			end
		end
	end

	class CrossPrioritization < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(550)
			else
				super(550, data)
			end
		end
	end

	class OrigCrossID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(551)
			else
				super(551, data)
			end
		end
	end

	class NoSides < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(552)
			else
				super(552, data)
			end
		end
	end

	class Username < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(553)
			else
				super(553, data)
			end
		end
	end

	class Password < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(554)
			else
				super(554, data)
			end
		end
	end

	class NoLegs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(555)
			else
				super(555, data)
			end
		end
	end

	class LegCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(556)
			else
				super(556, data)
			end
		end
	end

	class TotNoSecurityTypes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(557)
			else
				super(557, data)
			end
		end
	end

	class NoSecurityTypes < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(558)
			else
				super(558, data)
			end
		end
	end

	class SecurityListRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(559)
			else
				super(559, data)
			end
		end
	end

	class SecurityRequestResult < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(560)
			else
				super(560, data)
			end
		end
	end

	class RoundLot < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(561)
			else
				super(561, data)
			end
		end
	end

	class MinTradeVol < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(562)
			else
				super(562, data)
			end
		end
	end

	class MultiLegRptTypeReq < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(563)
			else
				super(563, data)
			end
		end
	end

	class LegPositionEffect < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(564)
			else
				super(564, data)
			end
		end
	end

	class LegCoveredOrUncovered < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(565)
			else
				super(565, data)
			end
		end
	end

	class LegPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(566)
			else
				super(566, data)
			end
		end
	end

	class TradSesStatusRejReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(567)
			else
				super(567, data)
			end
		end
	end

	class TradeRequestID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(568)
			else
				super(568, data)
			end
		end
	end

	class TradeRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(569)
			else
				super(569, data)
			end
		end
	end

	class PreviouslyReported < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(570)
			else
				super(570, data)
			end
		end
	end

	class TradeReportID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(571)
			else
				super(571, data)
			end
		end
	end

	class TradeReportRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(572)
			else
				super(572, data)
			end
		end
	end

	class MatchStatus < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(573)
			else
				super(573, data)
			end
		end
	end

	class MatchType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(574)
			else
				super(574, data)
			end
		end
	end

	class OddLot < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(575)
			else
				super(575, data)
			end
		end
	end

	class NoClearingInstructions < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(576)
			else
				super(576, data)
			end
		end
	end

	class ClearingInstruction < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(577)
			else
				super(577, data)
			end
		end
	end

	class TradeInputSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(578)
			else
				super(578, data)
			end
		end
	end

	class TradeInputDevice < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(579)
			else
				super(579, data)
			end
		end
	end

	class NoDates < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(580)
			else
				super(580, data)
			end
		end
	end

	class AccountType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(581)
			else
				super(581, data)
			end
		end
	end

	class CustOrderCapacity < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(582)
			else
				super(582, data)
			end
		end
	end

	class ClOrdLinkID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(583)
			else
				super(583, data)
			end
		end
	end

	class MassStatusReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(584)
			else
				super(584, data)
			end
		end
	end

	class MassStatusReqType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(585)
			else
				super(585, data)
			end
		end
	end

	class OrigOrdModTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(586)
			else
				super(586, data)
			end
		end
	end

	class LegSettlType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(587)
			else
				super(587, data)
			end
		end
	end

	class LegSettlDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(588)
			else
				super(588, data)
			end
		end
	end

	class DayBookingInst < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(589)
			else
				super(589, data)
			end
		end
	end

	class BookingUnit < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(590)
			else
				super(590, data)
			end
		end
	end

	class PreallocMethod < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(591)
			else
				super(591, data)
			end
		end
	end

	class UnderlyingCountryOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(592)
			else
				super(592, data)
			end
		end
	end

	class UnderlyingStateOrProvinceOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(593)
			else
				super(593, data)
			end
		end
	end

	class UnderlyingLocaleOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(594)
			else
				super(594, data)
			end
		end
	end

	class UnderlyingInstrRegistry < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(595)
			else
				super(595, data)
			end
		end
	end

	class LegCountryOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(596)
			else
				super(596, data)
			end
		end
	end

	class LegStateOrProvinceOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(597)
			else
				super(597, data)
			end
		end
	end

	class LegLocaleOfIssue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(598)
			else
				super(598, data)
			end
		end
	end

	class LegInstrRegistry < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(599)
			else
				super(599, data)
			end
		end
	end

	class LegSymbol < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(600)
			else
				super(600, data)
			end
		end
	end

	class LegSymbolSfx < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(601)
			else
				super(601, data)
			end
		end
	end

	class LegSecurityID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(602)
			else
				super(602, data)
			end
		end
	end

	class LegSecurityIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(603)
			else
				super(603, data)
			end
		end
	end

	class NoLegSecurityAltID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(604)
			else
				super(604, data)
			end
		end
	end

	class LegSecurityAltID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(605)
			else
				super(605, data)
			end
		end
	end

	class LegSecurityAltIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(606)
			else
				super(606, data)
			end
		end
	end

	class LegProduct < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(607)
			else
				super(607, data)
			end
		end
	end

	class LegCFICode < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(608)
			else
				super(608, data)
			end
		end
	end

	class LegSecurityType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(609)
			else
				super(609, data)
			end
		end
	end

	class LegMaturityMonthYear < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(610)
			else
				super(610, data)
			end
		end
	end

	class LegMaturityDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(611)
			else
				super(611, data)
			end
		end
	end

	class LegStrikePrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(612)
			else
				super(612, data)
			end
		end
	end

	class LegOptAttribute < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(613)
			else
				super(613, data)
			end
		end
	end

	class LegContractMultiplier < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(614)
			else
				super(614, data)
			end
		end
	end

	class LegCouponRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(615)
			else
				super(615, data)
			end
		end
	end

	class LegSecurityExchange < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(616)
			else
				super(616, data)
			end
		end
	end

	class LegIssuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(617)
			else
				super(617, data)
			end
		end
	end

	class EncodedLegIssuerLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(618)
			else
				super(618, data)
			end
		end
	end

	class EncodedLegIssuer < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(619)
			else
				super(619, data)
			end
		end
	end

	class LegSecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(620)
			else
				super(620, data)
			end
		end
	end

	class EncodedLegSecurityDescLen < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(621)
			else
				super(621, data)
			end
		end
	end

	class EncodedLegSecurityDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(622)
			else
				super(622, data)
			end
		end
	end

	class LegRatioQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(623)
			else
				super(623, data)
			end
		end
	end

	class LegSide < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(624)
			else
				super(624, data)
			end
		end
	end

	class TradingSessionSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(625)
			else
				super(625, data)
			end
		end
	end

	class AllocType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(626)
			else
				super(626, data)
			end
		end
	end

	class NoHops < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(627)
			else
				super(627, data)
			end
		end
	end

	class HopCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(628)
			else
				super(628, data)
			end
		end
	end

	class HopSendingTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(629)
			else
				super(629, data)
			end
		end
	end

	class HopRefID < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(630)
			else
				super(630, data)
			end
		end
	end

	class MidPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(631)
			else
				super(631, data)
			end
		end
	end

	class BidYield < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(632)
			else
				super(632, data)
			end
		end
	end

	class MidYield < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(633)
			else
				super(633, data)
			end
		end
	end

	class OfferYield < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(634)
			else
				super(634, data)
			end
		end
	end

	class ClearingFeeIndicator < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(635)
			else
				super(635, data)
			end
		end
	end

	class WorkingIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(636)
			else
				super(636, data)
			end
		end
	end

	class LegLastPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(637)
			else
				super(637, data)
			end
		end
	end

	class PriorityIndicator < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(638)
			else
				super(638, data)
			end
		end
	end

	class PriceImprovement < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(639)
			else
				super(639, data)
			end
		end
	end

	class Price2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(640)
			else
				super(640, data)
			end
		end
	end

	class LastForwardPoints2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(641)
			else
				super(641, data)
			end
		end
	end

	class BidForwardPoints2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(642)
			else
				super(642, data)
			end
		end
	end

	class OfferForwardPoints2 < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(643)
			else
				super(643, data)
			end
		end
	end

	class RFQReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(644)
			else
				super(644, data)
			end
		end
	end

	class MktBidPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(645)
			else
				super(645, data)
			end
		end
	end

	class MktOfferPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(646)
			else
				super(646, data)
			end
		end
	end

	class MinBidSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(647)
			else
				super(647, data)
			end
		end
	end

	class MinOfferSize < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(648)
			else
				super(648, data)
			end
		end
	end

	class QuoteStatusReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(649)
			else
				super(649, data)
			end
		end
	end

	class LegalConfirm < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(650)
			else
				super(650, data)
			end
		end
	end

	class UnderlyingLastPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(651)
			else
				super(651, data)
			end
		end
	end

	class UnderlyingLastQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(652)
			else
				super(652, data)
			end
		end
	end

	class LegRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(654)
			else
				super(654, data)
			end
		end
	end

	class ContraLegRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(655)
			else
				super(655, data)
			end
		end
	end

	class SettlCurrBidFxRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(656)
			else
				super(656, data)
			end
		end
	end

	class SettlCurrOfferFxRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(657)
			else
				super(657, data)
			end
		end
	end

	class QuoteRequestRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(658)
			else
				super(658, data)
			end
		end
	end

	class SideComplianceID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(659)
			else
				super(659, data)
			end
		end
	end

	class AcctIDSource < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(660)
			else
				super(660, data)
			end
		end
	end

	class AllocAcctIDSource < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(661)
			else
				super(661, data)
			end
		end
	end

	class BenchmarkPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(662)
			else
				super(662, data)
			end
		end
	end

	class BenchmarkPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(663)
			else
				super(663, data)
			end
		end
	end

	class ConfirmID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(664)
			else
				super(664, data)
			end
		end
	end

	class ConfirmStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(665)
			else
				super(665, data)
			end
		end
	end

	class ConfirmTransType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(666)
			else
				super(666, data)
			end
		end
	end

	class ContractSettlMonth < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(667)
			else
				super(667, data)
			end
		end
	end

	class DeliveryForm < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(668)
			else
				super(668, data)
			end
		end
	end

	class LastParPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(669)
			else
				super(669, data)
			end
		end
	end

	class NoLegAllocs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(670)
			else
				super(670, data)
			end
		end
	end

	class LegAllocAccount < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(671)
			else
				super(671, data)
			end
		end
	end

	class LegIndividualAllocID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(672)
			else
				super(672, data)
			end
		end
	end

	class LegAllocQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(673)
			else
				super(673, data)
			end
		end
	end

	class LegAllocAcctIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(674)
			else
				super(674, data)
			end
		end
	end

	class LegSettlCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(675)
			else
				super(675, data)
			end
		end
	end

	class LegBenchmarkCurveCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(676)
			else
				super(676, data)
			end
		end
	end

	class LegBenchmarkCurveName < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(677)
			else
				super(677, data)
			end
		end
	end

	class LegBenchmarkCurvePoint < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(678)
			else
				super(678, data)
			end
		end
	end

	class LegBenchmarkPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(679)
			else
				super(679, data)
			end
		end
	end

	class LegBenchmarkPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(680)
			else
				super(680, data)
			end
		end
	end

	class LegBidPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(681)
			else
				super(681, data)
			end
		end
	end

	class LegIOIQty < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(682)
			else
				super(682, data)
			end
		end
	end

	class NoLegStipulations < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(683)
			else
				super(683, data)
			end
		end
	end

	class LegOfferPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(684)
			else
				super(684, data)
			end
		end
	end

	class LegOrderQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(685)
			else
				super(685, data)
			end
		end
	end

	class LegPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(686)
			else
				super(686, data)
			end
		end
	end

	class LegQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(687)
			else
				super(687, data)
			end
		end
	end

	class LegStipulationType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(688)
			else
				super(688, data)
			end
		end
	end

	class LegStipulationValue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(689)
			else
				super(689, data)
			end
		end
	end

	class LegSwapType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(690)
			else
				super(690, data)
			end
		end
	end

	class Pool < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(691)
			else
				super(691, data)
			end
		end
	end

	class QuotePriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(692)
			else
				super(692, data)
			end
		end
	end

	class QuoteRespID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(693)
			else
				super(693, data)
			end
		end
	end

	class QuoteRespType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(694)
			else
				super(694, data)
			end
		end
	end

	class QuoteQualifier < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(695)
			else
				super(695, data)
			end
		end
	end

	class YieldRedemptionDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(696)
			else
				super(696, data)
			end
		end
	end

	class YieldRedemptionPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(697)
			else
				super(697, data)
			end
		end
	end

	class YieldRedemptionPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(698)
			else
				super(698, data)
			end
		end
	end

	class BenchmarkSecurityID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(699)
			else
				super(699, data)
			end
		end
	end

	class ReversalIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(700)
			else
				super(700, data)
			end
		end
	end

	class YieldCalcDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(701)
			else
				super(701, data)
			end
		end
	end

	class NoPositions < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(702)
			else
				super(702, data)
			end
		end
	end

	class PosType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(703)
			else
				super(703, data)
			end
		end
	end

	class LongQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(704)
			else
				super(704, data)
			end
		end
	end

	class ShortQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(705)
			else
				super(705, data)
			end
		end
	end

	class PosQtyStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(706)
			else
				super(706, data)
			end
		end
	end

	class PosAmtType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(707)
			else
				super(707, data)
			end
		end
	end

	class PosAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(708)
			else
				super(708, data)
			end
		end
	end

	class PosTransType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(709)
			else
				super(709, data)
			end
		end
	end

	class PosReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(710)
			else
				super(710, data)
			end
		end
	end

	class NoUnderlyings < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(711)
			else
				super(711, data)
			end
		end
	end

	class PosMaintAction < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(712)
			else
				super(712, data)
			end
		end
	end

	class OrigPosReqRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(713)
			else
				super(713, data)
			end
		end
	end

	class PosMaintRptRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(714)
			else
				super(714, data)
			end
		end
	end

	class ClearingBusinessDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(715)
			else
				super(715, data)
			end
		end
	end

	class SettlSessID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(716)
			else
				super(716, data)
			end
		end
	end

	class SettlSessSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(717)
			else
				super(717, data)
			end
		end
	end

	class AdjustmentType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(718)
			else
				super(718, data)
			end
		end
	end

	class ContraryInstructionIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(719)
			else
				super(719, data)
			end
		end
	end

	class PriorSpreadIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(720)
			else
				super(720, data)
			end
		end
	end

	class PosMaintRptID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(721)
			else
				super(721, data)
			end
		end
	end

	class PosMaintStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(722)
			else
				super(722, data)
			end
		end
	end

	class PosMaintResult < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(723)
			else
				super(723, data)
			end
		end
	end

	class PosReqType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(724)
			else
				super(724, data)
			end
		end
	end

	class ResponseTransportType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(725)
			else
				super(725, data)
			end
		end
	end

	class ResponseDestination < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(726)
			else
				super(726, data)
			end
		end
	end

	class TotalNumPosReports < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(727)
			else
				super(727, data)
			end
		end
	end

	class PosReqResult < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(728)
			else
				super(728, data)
			end
		end
	end

	class PosReqStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(729)
			else
				super(729, data)
			end
		end
	end

	class SettlPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(730)
			else
				super(730, data)
			end
		end
	end

	class SettlPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(731)
			else
				super(731, data)
			end
		end
	end

	class UnderlyingSettlPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(732)
			else
				super(732, data)
			end
		end
	end

	class UnderlyingSettlPriceType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(733)
			else
				super(733, data)
			end
		end
	end

	class PriorSettlPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(734)
			else
				super(734, data)
			end
		end
	end

	class NoQuoteQualifiers < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(735)
			else
				super(735, data)
			end
		end
	end

	class AllocSettlCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(736)
			else
				super(736, data)
			end
		end
	end

	class AllocSettlCurrAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(737)
			else
				super(737, data)
			end
		end
	end

	class InterestAtMaturity < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(738)
			else
				super(738, data)
			end
		end
	end

	class LegDatedDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(739)
			else
				super(739, data)
			end
		end
	end

	class LegPool < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(740)
			else
				super(740, data)
			end
		end
	end

	class AllocInterestAtMaturity < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(741)
			else
				super(741, data)
			end
		end
	end

	class AllocAccruedInterestAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(742)
			else
				super(742, data)
			end
		end
	end

	class DeliveryDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(743)
			else
				super(743, data)
			end
		end
	end

	class AssignmentMethod < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(744)
			else
				super(744, data)
			end
		end
	end

	class AssignmentUnit < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(745)
			else
				super(745, data)
			end
		end
	end

	class OpenInterest < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(746)
			else
				super(746, data)
			end
		end
	end

	class ExerciseMethod < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(747)
			else
				super(747, data)
			end
		end
	end

	class TotNumTradeReports < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(748)
			else
				super(748, data)
			end
		end
	end

	class TradeRequestResult < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(749)
			else
				super(749, data)
			end
		end
	end

	class TradeRequestStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(750)
			else
				super(750, data)
			end
		end
	end

	class TradeReportRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(751)
			else
				super(751, data)
			end
		end
	end

	class SideMultiLegReportingType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(752)
			else
				super(752, data)
			end
		end
	end

	class NoPosAmt < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(753)
			else
				super(753, data)
			end
		end
	end

	class AutoAcceptIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(754)
			else
				super(754, data)
			end
		end
	end

	class AllocReportID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(755)
			else
				super(755, data)
			end
		end
	end

	class NoNested2PartyIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(756)
			else
				super(756, data)
			end
		end
	end

	class Nested2PartyID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(757)
			else
				super(757, data)
			end
		end
	end

	class Nested2PartyIDSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(758)
			else
				super(758, data)
			end
		end
	end

	class Nested2PartyRole < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(759)
			else
				super(759, data)
			end
		end
	end

	class Nested2PartySubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(760)
			else
				super(760, data)
			end
		end
	end

	class BenchmarkSecurityIDSource < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(761)
			else
				super(761, data)
			end
		end
	end

	class SecuritySubType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(762)
			else
				super(762, data)
			end
		end
	end

	class UnderlyingSecuritySubType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(763)
			else
				super(763, data)
			end
		end
	end

	class LegSecuritySubType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(764)
			else
				super(764, data)
			end
		end
	end

	class AllowableOneSidednessPct < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(765)
			else
				super(765, data)
			end
		end
	end

	class AllowableOneSidednessValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(766)
			else
				super(766, data)
			end
		end
	end

	class AllowableOneSidednessCurr < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(767)
			else
				super(767, data)
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(768)
			else
				super(768, data)
			end
		end
	end

	class TrdRegTimestamp < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(769)
			else
				super(769, data)
			end
		end
	end

	class TrdRegTimestampType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(770)
			else
				super(770, data)
			end
		end
	end

	class TrdRegTimestampOrigin < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(771)
			else
				super(771, data)
			end
		end
	end

	class ConfirmRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(772)
			else
				super(772, data)
			end
		end
	end

	class ConfirmType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(773)
			else
				super(773, data)
			end
		end
	end

	class ConfirmRejReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(774)
			else
				super(774, data)
			end
		end
	end

	class BookingType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(775)
			else
				super(775, data)
			end
		end
	end

	class IndividualAllocRejCode < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(776)
			else
				super(776, data)
			end
		end
	end

	class SettlInstMsgID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(777)
			else
				super(777, data)
			end
		end
	end

	class NoSettlInst < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(778)
			else
				super(778, data)
			end
		end
	end

	class LastUpdateTime < Quickfix::UtcTimeStampField
		def initialize(data = nil)
			if( data == nil )
				super(779)
			else
				super(779, data)
			end
		end
	end

	class AllocSettlInstType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(780)
			else
				super(780, data)
			end
		end
	end

	class NoSettlPartyIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(781)
			else
				super(781, data)
			end
		end
	end

	class SettlPartyID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(782)
			else
				super(782, data)
			end
		end
	end

	class SettlPartyIDSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(783)
			else
				super(783, data)
			end
		end
	end

	class SettlPartyRole < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(784)
			else
				super(784, data)
			end
		end
	end

	class SettlPartySubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(785)
			else
				super(785, data)
			end
		end
	end

	class SettlPartySubIDType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(786)
			else
				super(786, data)
			end
		end
	end

	class DlvyInstType < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(787)
			else
				super(787, data)
			end
		end
	end

	class TerminationType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(788)
			else
				super(788, data)
			end
		end
	end

	class NextExpectedMsgSeqNum < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(789)
			else
				super(789, data)
			end
		end
	end

	class OrdStatusReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(790)
			else
				super(790, data)
			end
		end
	end

	class SettlInstReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(791)
			else
				super(791, data)
			end
		end
	end

	class SettlInstReqRejCode < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(792)
			else
				super(792, data)
			end
		end
	end

	class SecondaryAllocID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(793)
			else
				super(793, data)
			end
		end
	end

	class AllocReportType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(794)
			else
				super(794, data)
			end
		end
	end

	class AllocReportRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(795)
			else
				super(795, data)
			end
		end
	end

	class AllocCancReplaceReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(796)
			else
				super(796, data)
			end
		end
	end

	class CopyMsgIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(797)
			else
				super(797, data)
			end
		end
	end

	class AllocAccountType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(798)
			else
				super(798, data)
			end
		end
	end

	class OrderAvgPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(799)
			else
				super(799, data)
			end
		end
	end

	class OrderBookingQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(800)
			else
				super(800, data)
			end
		end
	end

	class NoSettlPartySubIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(801)
			else
				super(801, data)
			end
		end
	end

	class NoPartySubIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(802)
			else
				super(802, data)
			end
		end
	end

	class PartySubIDType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(803)
			else
				super(803, data)
			end
		end
	end

	class NoNestedPartySubIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(804)
			else
				super(804, data)
			end
		end
	end

	class NestedPartySubIDType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(805)
			else
				super(805, data)
			end
		end
	end

	class NoNested2PartySubIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(806)
			else
				super(806, data)
			end
		end
	end

	class Nested2PartySubIDType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(807)
			else
				super(807, data)
			end
		end
	end

	class AllocIntermedReqType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(808)
			else
				super(808, data)
			end
		end
	end

	class UnderlyingPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(810)
			else
				super(810, data)
			end
		end
	end

	class PriceDelta < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(811)
			else
				super(811, data)
			end
		end
	end

	class ApplQueueMax < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(812)
			else
				super(812, data)
			end
		end
	end

	class ApplQueueDepth < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(813)
			else
				super(813, data)
			end
		end
	end

	class ApplQueueResolution < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(814)
			else
				super(814, data)
			end
		end
	end

	class ApplQueueAction < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(815)
			else
				super(815, data)
			end
		end
	end

	class NoAltMDSource < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(816)
			else
				super(816, data)
			end
		end
	end

	class AltMDSourceID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(817)
			else
				super(817, data)
			end
		end
	end

	class SecondaryTradeReportID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(818)
			else
				super(818, data)
			end
		end
	end

	class AvgPxIndicator < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(819)
			else
				super(819, data)
			end
		end
	end

	class TradeLinkID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(820)
			else
				super(820, data)
			end
		end
	end

	class OrderInputDevice < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(821)
			else
				super(821, data)
			end
		end
	end

	class UnderlyingTradingSessionID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(822)
			else
				super(822, data)
			end
		end
	end

	class UnderlyingTradingSessionSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(823)
			else
				super(823, data)
			end
		end
	end

	class TradeLegRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(824)
			else
				super(824, data)
			end
		end
	end

	class ExchangeRule < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(825)
			else
				super(825, data)
			end
		end
	end

	class TradeAllocIndicator < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(826)
			else
				super(826, data)
			end
		end
	end

	class ExpirationCycle < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(827)
			else
				super(827, data)
			end
		end
	end

	class TrdType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(828)
			else
				super(828, data)
			end
		end
	end

	class TrdSubType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(829)
			else
				super(829, data)
			end
		end
	end

	class TransferReason < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(830)
			else
				super(830, data)
			end
		end
	end

	class AsgnReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(831)
			else
				super(831, data)
			end
		end
	end

	class TotNumAssignmentReports < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(832)
			else
				super(832, data)
			end
		end
	end

	class AsgnRptID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(833)
			else
				super(833, data)
			end
		end
	end

	class ThresholdAmount < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(834)
			else
				super(834, data)
			end
		end
	end

	class PegMoveType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(835)
			else
				super(835, data)
			end
		end
	end

	class PegOffsetType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(836)
			else
				super(836, data)
			end
		end
	end

	class PegLimitType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(837)
			else
				super(837, data)
			end
		end
	end

	class PegRoundDirection < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(838)
			else
				super(838, data)
			end
		end
	end

	class PeggedPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(839)
			else
				super(839, data)
			end
		end
	end

	class PegScope < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(840)
			else
				super(840, data)
			end
		end
	end

	class DiscretionMoveType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(841)
			else
				super(841, data)
			end
		end
	end

	class DiscretionOffsetType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(842)
			else
				super(842, data)
			end
		end
	end

	class DiscretionLimitType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(843)
			else
				super(843, data)
			end
		end
	end

	class DiscretionRoundDirection < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(844)
			else
				super(844, data)
			end
		end
	end

	class DiscretionPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(845)
			else
				super(845, data)
			end
		end
	end

	class DiscretionScope < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(846)
			else
				super(846, data)
			end
		end
	end

	class TargetStrategy < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(847)
			else
				super(847, data)
			end
		end
	end

	class TargetStrategyParameters < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(848)
			else
				super(848, data)
			end
		end
	end

	class ParticipationRate < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(849)
			else
				super(849, data)
			end
		end
	end

	class TargetStrategyPerformance < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(850)
			else
				super(850, data)
			end
		end
	end

	class LastLiquidityInd < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(851)
			else
				super(851, data)
			end
		end
	end

	class PublishTrdIndicator < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(852)
			else
				super(852, data)
			end
		end
	end

	class ShortSaleReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(853)
			else
				super(853, data)
			end
		end
	end

	class QtyType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(854)
			else
				super(854, data)
			end
		end
	end

	class SecondaryTrdType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(855)
			else
				super(855, data)
			end
		end
	end

	class TradeReportType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(856)
			else
				super(856, data)
			end
		end
	end

	class AllocNoOrdersType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(857)
			else
				super(857, data)
			end
		end
	end

	class SharedCommission < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(858)
			else
				super(858, data)
			end
		end
	end

	class ConfirmReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(859)
			else
				super(859, data)
			end
		end
	end

	class AvgParPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(860)
			else
				super(860, data)
			end
		end
	end

	class ReportedPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(861)
			else
				super(861, data)
			end
		end
	end

	class NoCapacities < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(862)
			else
				super(862, data)
			end
		end
	end

	class OrderCapacityQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(863)
			else
				super(863, data)
			end
		end
	end

	class NoEvents < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(864)
			else
				super(864, data)
			end
		end
	end

	class EventType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(865)
			else
				super(865, data)
			end
		end
	end

	class EventDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(866)
			else
				super(866, data)
			end
		end
	end

	class EventPx < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(867)
			else
				super(867, data)
			end
		end
	end

	class EventText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(868)
			else
				super(868, data)
			end
		end
	end

	class PctAtRisk < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(869)
			else
				super(869, data)
			end
		end
	end

	class NoInstrAttrib < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(870)
			else
				super(870, data)
			end
		end
	end

	class InstrAttribType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(871)
			else
				super(871, data)
			end
		end
	end

	class InstrAttribValue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(872)
			else
				super(872, data)
			end
		end
	end

	class DatedDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(873)
			else
				super(873, data)
			end
		end
	end

	class InterestAccrualDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(874)
			else
				super(874, data)
			end
		end
	end

	class CPProgram < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(875)
			else
				super(875, data)
			end
		end
	end

	class CPRegType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(876)
			else
				super(876, data)
			end
		end
	end

	class UnderlyingCPProgram < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(877)
			else
				super(877, data)
			end
		end
	end

	class UnderlyingCPRegType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(878)
			else
				super(878, data)
			end
		end
	end

	class UnderlyingQty < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(879)
			else
				super(879, data)
			end
		end
	end

	class TrdMatchID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(880)
			else
				super(880, data)
			end
		end
	end

	class SecondaryTradeReportRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(881)
			else
				super(881, data)
			end
		end
	end

	class UnderlyingDirtyPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(882)
			else
				super(882, data)
			end
		end
	end

	class UnderlyingEndPrice < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(883)
			else
				super(883, data)
			end
		end
	end

	class UnderlyingStartValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(884)
			else
				super(884, data)
			end
		end
	end

	class UnderlyingCurrentValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(885)
			else
				super(885, data)
			end
		end
	end

	class UnderlyingEndValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(886)
			else
				super(886, data)
			end
		end
	end

	class NoUnderlyingStips < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(887)
			else
				super(887, data)
			end
		end
	end

	class UnderlyingStipType < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(888)
			else
				super(888, data)
			end
		end
	end

	class UnderlyingStipValue < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(889)
			else
				super(889, data)
			end
		end
	end

	class MaturityNetMoney < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(890)
			else
				super(890, data)
			end
		end
	end

	class MiscFeeBasis < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(891)
			else
				super(891, data)
			end
		end
	end

	class TotNoAllocs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(892)
			else
				super(892, data)
			end
		end
	end

	class LastFragment < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(893)
			else
				super(893, data)
			end
		end
	end

	class CollReqID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(894)
			else
				super(894, data)
			end
		end
	end

	class CollAsgnReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(895)
			else
				super(895, data)
			end
		end
	end

	class CollInquiryQualifier < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(896)
			else
				super(896, data)
			end
		end
	end

	class NoTrades < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(897)
			else
				super(897, data)
			end
		end
	end

	class MarginRatio < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(898)
			else
				super(898, data)
			end
		end
	end

	class MarginExcess < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(899)
			else
				super(899, data)
			end
		end
	end

	class TotalNetValue < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(900)
			else
				super(900, data)
			end
		end
	end

	class CashOutstanding < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(901)
			else
				super(901, data)
			end
		end
	end

	class CollAsgnID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(902)
			else
				super(902, data)
			end
		end
	end

	class CollAsgnTransType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(903)
			else
				super(903, data)
			end
		end
	end

	class CollRespID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(904)
			else
				super(904, data)
			end
		end
	end

	class CollAsgnRespType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(905)
			else
				super(905, data)
			end
		end
	end

	class CollAsgnRejectReason < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(906)
			else
				super(906, data)
			end
		end
	end

	class CollAsgnRefID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(907)
			else
				super(907, data)
			end
		end
	end

	class CollRptID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(908)
			else
				super(908, data)
			end
		end
	end

	class CollInquiryID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(909)
			else
				super(909, data)
			end
		end
	end

	class CollStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(910)
			else
				super(910, data)
			end
		end
	end

	class TotNumReports < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(911)
			else
				super(911, data)
			end
		end
	end

	class LastRptRequested < Quickfix::BoolField
		def initialize(data = nil)
			if( data == nil )
				super(912)
			else
				super(912, data)
			end
		end
	end

	class AgreementDesc < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(913)
			else
				super(913, data)
			end
		end
	end

	class AgreementID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(914)
			else
				super(914, data)
			end
		end
	end

	class AgreementDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(915)
			else
				super(915, data)
			end
		end
	end

	class StartDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(916)
			else
				super(916, data)
			end
		end
	end

	class EndDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(917)
			else
				super(917, data)
			end
		end
	end

	class AgreementCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(918)
			else
				super(918, data)
			end
		end
	end

	class DeliveryType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(919)
			else
				super(919, data)
			end
		end
	end

	class EndAccruedInterestAmt < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(920)
			else
				super(920, data)
			end
		end
	end

	class StartCash < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(921)
			else
				super(921, data)
			end
		end
	end

	class EndCash < Quickfix::DoubleField
		def initialize(data = nil)
			if( data == nil )
				super(922)
			else
				super(922, data)
			end
		end
	end

	class UserRequestID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(923)
			else
				super(923, data)
			end
		end
	end

	class UserRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(924)
			else
				super(924, data)
			end
		end
	end

	class NewPassword < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(925)
			else
				super(925, data)
			end
		end
	end

	class UserStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(926)
			else
				super(926, data)
			end
		end
	end

	class UserStatusText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(927)
			else
				super(927, data)
			end
		end
	end

	class StatusValue < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(928)
			else
				super(928, data)
			end
		end
	end

	class StatusText < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(929)
			else
				super(929, data)
			end
		end
	end

	class RefCompID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(930)
			else
				super(930, data)
			end
		end
	end

	class RefSubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(931)
			else
				super(931, data)
			end
		end
	end

	class NetworkResponseID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(932)
			else
				super(932, data)
			end
		end
	end

	class NetworkRequestID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(933)
			else
				super(933, data)
			end
		end
	end

	class LastNetworkResponseID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(934)
			else
				super(934, data)
			end
		end
	end

	class NetworkRequestType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(935)
			else
				super(935, data)
			end
		end
	end

	class NoCompIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(936)
			else
				super(936, data)
			end
		end
	end

	class NetworkStatusResponseType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(937)
			else
				super(937, data)
			end
		end
	end

	class NoCollInquiryQualifier < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(938)
			else
				super(938, data)
			end
		end
	end

	class TrdRptStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(939)
			else
				super(939, data)
			end
		end
	end

	class AffirmStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(940)
			else
				super(940, data)
			end
		end
	end

	class UnderlyingStrikeCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(941)
			else
				super(941, data)
			end
		end
	end

	class LegStrikeCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(942)
			else
				super(942, data)
			end
		end
	end

	class TimeBracket < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(943)
			else
				super(943, data)
			end
		end
	end

	class CollAction < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(944)
			else
				super(944, data)
			end
		end
	end

	class CollInquiryStatus < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(945)
			else
				super(945, data)
			end
		end
	end

	class CollInquiryResult < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(946)
			else
				super(946, data)
			end
		end
	end

	class StrikeCurrency < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(947)
			else
				super(947, data)
			end
		end
	end

	class NoNested3PartyIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(948)
			else
				super(948, data)
			end
		end
	end

	class Nested3PartyID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(949)
			else
				super(949, data)
			end
		end
	end

	class Nested3PartyIDSource < Quickfix::CharField
		def initialize(data = nil)
			if( data == nil )
				super(950)
			else
				super(950, data)
			end
		end
	end

	class Nested3PartyRole < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(951)
			else
				super(951, data)
			end
		end
	end

	class NoNested3PartySubIDs < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(952)
			else
				super(952, data)
			end
		end
	end

	class Nested3PartySubID < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(953)
			else
				super(953, data)
			end
		end
	end

	class Nested3PartySubIDType < Quickfix::IntField
		def initialize(data = nil)
			if( data == nil )
				super(954)
			else
				super(954, data)
			end
		end
	end

	class LegContractSettlMonth < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(955)
			else
				super(955, data)
			end
		end
	end

	class LegInterestAccrualDate < Quickfix::StringField
		def initialize(data = nil)
			if( data == nil )
				super(956)
			else
				super(956, data)
			end
		end
	end

end
