require 'quickfix_ruby'
require 'test/unit'

class DataDictionaryTestCase < Test::Unit::TestCase

	def setup
		@testObject = Quickfix::DataDictionary.new("../../spec/FIX42.xml")
		@side = Quickfix::Side.new.getField

		assert_not_nil( @testObject )
		assert_equal( 54, @side )
	end

	def test_getValueName
		assert_equal( "BUY", @testObject.getValueName(@side, Quickfix::Side_BUY()) )
		assert_nil @testObject.getValueName( @side, "no_such_field" )
	end

	def test_getFieldTag
		assert_equal( 54, @testObject.getFieldTag("Side") )
		assert_nil( @testObject.getFieldTag("no_such_field") )
	end
end