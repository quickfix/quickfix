require 'quickfix_ruby'
require 'test/unit'

class SessionSettingsTestCase < Test::Unit::TestCase

	def setup
		@object = Quickfix::SessionSettings.new()
	end

	def test_validate
		sessionID = Quickfix::SessionID.new( "FIX.4.2", "SenderCompID", "TargetCompID" )
		
		dictionary = Quickfix::Dictionary.new
		begin
			@object.set( sessionID, dictionary )
			assert( false )
		rescue Quickfix::ConfigError
		end

		dictionary.setString( Quickfix::CONNECTION_TYPE(), "badvalue" )
		begin
			@object.set( sessionID, dictionary );
			assert( false );
		rescue Quickfix::ConfigError
		end

		dictionary.setString( Quickfix::CONNECTION_TYPE(), "initiator" )
		begin
			@object.set( sessionID, dictionary );
		rescue Quickfix::ConfigError
			assert( false )
		end

		sessionID = Quickfix::SessionID.new( "FIX4.2", "SenderCompID", "TargetCompID" )
		begin
			@object.set( sessionID, dictionary )
			assert( false )
		rescue Quickfix::ConfigError
		end
	end
end