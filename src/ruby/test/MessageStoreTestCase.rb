require 'quickfix_ruby'
require 'test/unit'

class MessageStoreTestCase < Test::Unit::TestCase

	def setup
		@object = Quickfix::MemoryStore.new( Quickfix::UtcTimeStamp::now() )
	end

	def test_setGet
		@object.set( 1, "hello" )
		@object.set( 1844674407370955165, "goodbye" )
		messages = Quickfix::VectorString.new()
		@object.get( 1, 1844674407370955165, messages )
		assert( messages.size() == 2 )
		assert( messages[0] == "hello" )
		assert( messages[1] == "goodbye" )
	end
end
