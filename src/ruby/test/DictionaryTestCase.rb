require 'quickfix_ruby'
require 'test/unit'

class DictionaryTestCase < Test::Unit::TestCase

	def setup
		@object = Quickfix::Dictionary.new
	end

	def test_setGetString
		@object.setString( "STRINGKEY1", "STRINGVALUE1" )
		@object.setString( "STRINGKEY2", "stringvalue2" )

		assert_equal( "STRINGVALUE1", @object.getString("STRINGKEY1") )
		assert_equal( "stringvalue2", @object.getString("STRINGKEY2") )
		assert_equal( "STRINGVALUE2", @object.getString("STRINGKEY2", true) )

		begin
			@object.getString( "STRINGKEY3" )
			assert( false )
		rescue Quickfix::ConfigError
		end
	end

	def test_setGetInt
		@object.setInt( "LONGKEY1", 12 )
		@object.setInt( "LONGKEY2", 9827362 )
		@object.setString( "BADLONGKEY", "AB12" )

		assert_equal( 12, @object.getInt("LONGKEY1") )
		assert_equal( 9827362, @object.getInt("LONGKEY2") )
		
		begin
			@object.getInt( "LONGKEY3" )
			assert( false )
		rescue Quickfix::ConfigError
		end

		begin
			@object.getInt( "BADLONGKEY" )
			assert( false )
		rescue Quickfix::ConfigError
		end
	end

	def test_setGetDouble
		@object.setDouble( "DOUBLEKEY1", 12.3 )
		@object.setDouble( "DOUBLEKEY2", 9827362.9827362 )
		@object.setString( "BADDOUBLEKEY", "AB12.3" )

		assert_equal( 12.3, @object.getDouble("DOUBLEKEY1") )
		assert_equal( 9827362.9827362, @object.getDouble("DOUBLEKEY2") )
		
		begin
			@object.getDouble( "DOUBLEKEY3" )
			assert( false )
		rescue Quickfix::ConfigError
		end

		begin
			@object.getDouble( "BADDOUBLEKEY" )
			assert( false )
		rescue Quickfix::ConfigError
		end
	end

	def test_setGetDay
		@object.setString( "DAY1", "SU" );
		@object.setString( "DAY2", "MO" );
		@object.setString( "DAY3", "TU" );
		@object.setString( "DAY4", "WE" );
		@object.setString( "DAY5", "TH" );
		@object.setString( "DAY6", "FR" );
		@object.setString( "DAY7", "SA" );

		assert( @object.getDay( "DAY1" ) == 1 );
		assert( @object.getDay( "DAY2" ) == 2 );
		assert( @object.getDay( "DAY3" ) == 3 );
		assert( @object.getDay( "DAY4" ) == 4 );
		assert( @object.getDay( "DAY5" ) == 5 );
		assert( @object.getDay( "DAY6" ) == 6 );
		assert( @object.getDay( "DAY7" ) == 7 );

		@object.setDay( "NEXTDAY1", 1 );
		@object.setDay( "NEXTDAY2", 2 );
		@object.setDay( "NEXTDAY3", 3 );
		@object.setDay( "NEXTDAY4", 4 );
		@object.setDay( "NEXTDAY5", 5 );
		@object.setDay( "NEXTDAY6", 6 );
		@object.setDay( "NEXTDAY7", 7 );

		assert( @object.getDay( "NEXTDAY1" ) == 1 );
		assert( @object.getDay( "NEXTDAY2" ) == 2 );
		assert( @object.getDay( "NEXTDAY3" ) == 3 );
		assert( @object.getDay( "NEXTDAY4" ) == 4 );
		assert( @object.getDay( "NEXTDAY5" ) == 5 );
		assert( @object.getDay( "NEXTDAY6" ) == 6 );
		assert( @object.getDay( "NEXTDAY7" ) == 7 );
	end

	def test_merge
		@object.setString( "FIRSTKEY", "FIRSTVALUE" );
		@object.setString( "THIRDKEY", "FIRST" );
		second = Quickfix::Dictionary.new
		second.setString( "SECONDKEY", "SECONDVALUE" );
		second.setString( "THIRDKEY", "SECOND" );
		@object.merge( second );
		assert( @object.getString( "FIRSTKEY" ) == "FIRSTVALUE" );
		assert( @object.getString( "SECONDKEY" ) == "SECONDVALUE" );
		assert( @object.getString( "THIRDKEY" ) == "FIRST" );
	end
end