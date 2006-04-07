import quickfix as fix

class Message(fix.Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.BeginString("FIX.4.3") )

class Heartbeat(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("0") )

class Logon(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("A") )

class TestRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("1") )

class ResendRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("2") )

class Reject(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("3") )

class SequenceReset(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("4") )

class Logout(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("5") )

class BusinessMessageReject(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("j") )

class Advertisement(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("7") )

class IndicationOfInterest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("6") )

class News(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("B") )

class Email(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("C") )

class QuoteRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("R") )

class QuoteRequestReject(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AG") )

class RFQRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AH") )

class Quote(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("S") )

class QuoteCancel(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("Z") )

class QuoteStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("a") )

class QuoteStatusReport(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AI") )

class MassQuote(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("i") )

class MassQuoteAcknowledgement(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("b") )

class MarketDataRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("V") )

class MarketDataSnapshotFullRefresh(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("W") )

class MarketDataIncrementalRefresh(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("X") )

class MarketDataRequestReject(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("Y") )

class SecurityDefinitionRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("c") )

class SecurityDefinition(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("d") )

class SecurityTypeRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("v") )

class SecurityTypes(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("w") )

class SecurityListRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("x") )

class SecurityList(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("y") )

class DerivativeSecurityListRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("z") )

class DerivativeSecurityList(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AA") )

class SecurityStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("e") )

class SecurityStatus(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("f") )

class TradingSessionStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("g") )

class TradingSessionStatus(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("h") )

class NewOrderSingle(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("D") )

class ExecutionReport(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("8") )

class DontKnowTrade(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("Q") )

class OrderCancelReplaceRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("G") )

class OrderCancelRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("F") )

class OrderCancelReject(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("9") )

class OrderStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("H") )

class OrderMassCancelRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("q") )

class OrderMassCancelReport(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("r") )

class OrderMassStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AF") )

class NewOrderCross(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("s") )

class CrossOrderCancelReplaceRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("t") )

class CrossOrderCancelRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("u") )

class NewOrderMultileg(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AB") )

class MultilegOrderCancelReplaceRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AC") )

class BidRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("k") )

class BidResponse(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("l") )

class NewOrderList(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("E") )

class ListStrikePrice(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("m") )

class ListExecute(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("L") )

class ListCancelRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("K") )

class ListStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("M") )

class ListStatus(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("N") )

class Allocation(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("J") )

class AllocationACK(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("P") )

class SettlementInstructions(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("T") )

class TradeCaptureReportRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AD") )

class TradeCaptureReport(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("AE") )

class RegistrationInstructions(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("o") )

class RegistrationInstructionsResponse(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("p") )
