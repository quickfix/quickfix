require 'quickfix'

module Quickfix
	class Initiator
		def start
			Thread.new { block() }
		end
	end

	class Acceptor
		def start
			Thread.new { block() }
		end
	end
end