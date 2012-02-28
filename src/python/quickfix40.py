import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIX.4.0") )

class Heartbeat(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("0") )

class TestRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("1") )

class ResendRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("2") )

class Reject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("3") )

class SequenceReset(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("4") )

class Logout(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("5") )

class IOI(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("6") )

class Advertisement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("7") )

class ExecutionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("8") )

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 0
			fix.Group.__init__(self, 136, 137, order)

class OrderCancelReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("9") )

class Logon(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("A") )

class News(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("B") )

class Email(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("C") )

class NewOrderSingle(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("D") )

class NewOrderList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("E") )

class OrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("F") )

class OrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("G") )

class OrderStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("H") )

class Allocation(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("J") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 11
			order[1] = 37
			order[2] = 66
			order[3] = 105
			order[4] = 0
			fix.Group.__init__(self, 73, 11, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 17
			order[1] = 32
			order[2] = 31
			order[3] = 30
			order[4] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(11)
			order[0] = 79
			order[1] = 80
			order[2] = 81
			order[3] = 76
			order[4] = 109
			order[5] = 12
			order[6] = 13
			order[7] = 85
			order[8] = 92
			order[9] = 86
			order[10] = 0
			fix.Group.__init__(self, 78, 79, order)

class ListCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("K") )

class ListExecute(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("L") )

class ListStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("M") )

class ListStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("N") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 11
			order[1] = 14
			order[2] = 84
			order[3] = 6
			order[4] = 0
			fix.Group.__init__(self, 73, 11, order)

class AllocationInstructionAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("P") )

class DontKnowTrade(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Q") )

class QuoteRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("R") )

class Quote(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("S") )
