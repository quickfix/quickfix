require 'quickfix'
module Quickfix41
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIX.4.1") )
	end
end

class Heartbeat < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("0") )
	end
end

class TestRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("1") )
	end
end

class ResendRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("2") )
	end
end

class Reject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("3") )
	end
end

class SequenceReset < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("4") )
	end
end

class Logout < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("5") )
	end
end

class IOI < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("6") )
	end

	class NoIOIQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 104
			order[1] = 0
			super(199, 104, order)
		end
	end
end

class Advertisement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("7") )
	end
end

class ExecutionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("8") )
	end
end

class OrderCancelReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("9") )
	end
end

class Logon < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("A") )
	end
end

class News < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("B") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(14)
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
			super(146, 46, order)
		end
	end

	class LinesOfText < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 58
			order[1] = 0
			super(33, 58, order)
		end
	end
end

class Email < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("C") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(14)
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
			super(146, 46, order)
		end
	end

	class LinesOfText < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 58
			order[1] = 0
			super(33, 58, order)
		end
	end
end

class NewOrderSingle < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("D") )
	end
end

class NewOrderList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("E") )
	end
end

class OrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("F") )
	end
end

class OrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("G") )
	end
end

class OrderStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("H") )
	end
end

class Allocation < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("J") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 66
			order[4] = 105
			order[5] = 0
			super(73, 11, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 32
			order[1] = 17
			order[2] = 31
			order[3] = 29
			order[4] = 0
			super(124, 32, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(21)
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
			super(78, 79, order)
		end

		class NoMiscFees < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 0
				super(136, 137, order)
			end
		end
	end
end

class ListCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("K") )
	end
end

class ListExecute < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("L") )
	end
end

class ListStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("M") )
	end
end

class ListStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("N") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 11
			order[1] = 14
			order[2] = 151
			order[3] = 84
			order[4] = 6
			order[5] = 0
			super(73, 11, order)
		end
	end
end

class AllocationInstructionAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("P") )
	end
end

class DontKnowTrade < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Q") )
	end
end

class QuoteRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("R") )
	end
end

class Quote < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("S") )
	end
end

class SettlementInstructions < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("T") )
	end
end
end
