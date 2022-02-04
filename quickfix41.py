import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIX.4.1") )

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

	class NoIOIQualifiers(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 104
			order[1] = 0
			fix.Group.__init__(self, 199, 104, order)

class Advertisement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("7") )

class ExecutionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("8") )

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

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(14)
			order[0] = 46
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 207
			order[11] = 106
			order[12] = 107
			order[13] = 0
			fix.Group.__init__(self, 146, 46, order)

	class LinesOfText(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 58
			order[1] = 0
			fix.Group.__init__(self, 33, 58, order)

class Email(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("C") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(14)
			order[0] = 46
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 207
			order[11] = 106
			order[12] = 107
			order[13] = 0
			fix.Group.__init__(self, 146, 46, order)

	class LinesOfText(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 58
			order[1] = 0
			fix.Group.__init__(self, 33, 58, order)

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
			order = fix.IntArray(6)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 66
			order[4] = 105
			order[5] = 0
			fix.Group.__init__(self, 73, 11, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 32
			order[1] = 17
			order[2] = 31
			order[3] = 29
			order[4] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(21)
			order[0] = 79
			order[1] = 80
			order[2] = 81
			order[3] = 92
			order[4] = 208
			order[5] = 209
			order[6] = 161
			order[7] = 76
			order[8] = 109
			order[9] = 12
			order[10] = 13
			order[11] = 153
			order[12] = 154
			order[13] = 119
			order[14] = 120
			order[15] = 155
			order[16] = 156
			order[17] = 159
			order[18] = 160
			order[19] = 136
			order[20] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 0
				fix.Group.__init__(self, 136, 137, order)

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
			order = fix.IntArray(6)
			order[0] = 11
			order[1] = 14
			order[2] = 151
			order[3] = 84
			order[4] = 6
			order[5] = 0
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

class SettlementInstructions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("T") )
