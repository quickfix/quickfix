import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIXT.1.1") )

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

class Logon(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("A") )

	class NoMsgTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 372
			order[1] = 385
			order[2] = 1130
			order[3] = 1131
			order[4] = 0
			fix.Group.__init__(self, 384, 372, order)
