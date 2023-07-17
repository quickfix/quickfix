require 'quickfix'
module Quickfix11
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIXT.1.1") )
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

class Logon < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("A") )
	end
end

class XMLnonFIX < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("n") )
	end
end
end
