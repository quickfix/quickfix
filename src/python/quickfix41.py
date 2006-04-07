import quickfix as fix

class Message(fix.Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.BeginString("FIX.4.1") )

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

class Advertisement(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("7") )

class IndicationofInterest(Message):
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

class Quote(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("S") )

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

class Allocation(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("J") )

class AllocationACK(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("P") )

class SettlementInstructions(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("T") )

class NewOrderList(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("E") )

class ListStatus(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("N") )

class ListExecute(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("L") )

class ListCancelRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("K") )

class ListStatusRequest(Message):
	def __init__(self,parent):
		self.getHeader().setField( fix.MsgType("M") )
