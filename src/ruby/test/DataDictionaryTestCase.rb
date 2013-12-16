require 'quickfix_ruby'
require 'test/unit'

class TooHigh < Quickfix::StringField
	def initialize(data = nil)
		if( data == nil )
			super(501)
		else
			super(501, data)
		end
	end
end

class DataDictionaryTestCase < Test::Unit::TestCase

	def setup
		@object = Quickfix::DataDictionary.new()
		assert_not_nil( @object )
	end

	def test_addMsgType
		assert( !@object.isMsgType("A") )
		@object.addMsgType("A")
		assert( @object.isMsgType("A") )
	end

	def test_addMsgField
		assert( !@object.isMsgField( "A", 10 ) )
		assert( !@object.isMsgField( "Z", 50 ) )
		@object.addMsgField( "A", 10 )
		@object.addMsgField( "Z", 50 )
		assert( @object.isMsgField( "A", 10 ) )
		assert( @object.isMsgField( "Z", 50 ) )
		assert( !@object.isMsgField( "A", 50 ) )
		assert( !@object.isMsgField( "Z", 10 ) )
	end

	def test_addHeaderField
		assert( !@object.isHeaderField( 56 ) )
		assert( !@object.isHeaderField( 49 ) )
		@object.addHeaderField( 56, true )
		@object.addHeaderField( 49, true )
		assert( @object.isHeaderField( 56 ) )
		assert( @object.isHeaderField( 49 ) )
	end

	def test_addTrailerField
		assert( !@object.isTrailerField( 10 ) )
		@object.addTrailerField( 10, true )
		assert( @object.isTrailerField( 10 ) )
	end

	def test_addRequiredField
		assert( !@object.isRequiredField( "A", 10 ) )
		assert( !@object.isRequiredField( "Z", 50 ) )
		@object.addRequiredField( "A", 10 )
		@object.addRequiredField( "Z", 50 )
		assert( @object.isRequiredField( "A", 10 ) )
		assert( @object.isRequiredField( "Z", 50 ) )
		assert( !@object.isRequiredField( "A", 50 ) )
		assert( !@object.isRequiredField( "Z", 10 ) )
	end

	def test_addFieldValue
		assert( !@object.isFieldValue( 12, "f" ) )
		assert( !@object.isFieldValue( 12, "g" ) )
		assert( !@object.isFieldValue( 15, "1" ) )
		assert( !@object.isFieldValue( 18, "2" ) )
		assert( !@object.isFieldValue( 167, "FUT" ) )

		@object.addFieldValue( 12, "f" )
		@object.addFieldValue( 12, "g" )
		@object.addFieldValue( 15, "1" )
		@object.addFieldValue( 18, "2" )
		@object.addFieldValue( 167, "FUT" )

		assert( @object.isFieldValue( 12, "f" ) )
		assert( @object.isFieldValue( 12, "g" ) )
		assert( @object.isFieldValue( 15, "1" ) )
		assert( @object.isFieldValue( 18, "2" ) )
		assert( @object.isFieldValue( 167, "FUT" ) )
	end

	def test_addGroup
		@object.setVersion( "FIX.4.2" )

		group1 = Quickfix::DataDictionary.new
		group1.addMsgType( "1" )
		group2 = Quickfix::DataDictionary.new
		group2.addMsgType( "2" )
		group3 = Quickfix::DataDictionary.new
		group3.addMsgType( "3" )

		@object.addGroup( "A", 100, 101, group1 )
		@object.addGroup( "A", 200, 201, group2 )
		@object.addGroup( "A", 300, 301, group3 )

		result = @object.getGroup( "A", 100 )
		assert_equal( 101, result[0] )
		assert( result[1].isMsgType( "1" ) )

		result = @object.getGroup( "A", 200 )
		assert_equal( 201, result[0] )
		assert( result[1].isMsgType( "2" ) )

		result = @object.getGroup( "A", 300 )
		assert_equal( 301, result[0] )
		assert( result[1].isMsgType( "3" ) )
	end

	def test_addFieldName
		@object.setVersion( "FIX.4.2" )

		@object.addFieldName( 1, "Account" )
		@object.addFieldName( 11, "ClOrdID" )
		@object.addFieldName( 8, "BeginString" )

		s = String.new
		@object.getFieldName(1)
                assert_equal( "Account", @object.getFieldName(1) )
		assert_equal( 1, @object.getFieldTag("Account") )
		assert_equal( "ClOrdID", @object.getFieldName(11) )
		assert_equal( 11, @object.getFieldTag("ClOrdID") )
		assert_equal( "BeginString", @object.getFieldName(8) )
		assert_equal( 8, @object.getFieldTag("BeginString") )
	end

	def test_addValueName
		@object.setVersion( "FIX.4.2" )

		@object.addValueName( 12, "0", "VALUE_12_0" )
		@object.addValueName( 12, "B", "VALUE_12_B" )
		@object.addValueName( 23, "BOO", "VALUE_23_BOO" )

		assert_equal( "VALUE_12_0", @object.getValueName(12, "0") )
		assert_equal( "VALUE_12_B", @object.getValueName(12, "B") )
		assert_equal( "VALUE_23_BOO", @object.getValueName(23, "BOO") )
	end

	def test_checkValidTagNumber
		@object.setVersion( Quickfix::BeginString_FIX40() )
		@object.addField( Quickfix::BeginString.field )
		@object.addField( Quickfix::BodyLength.field )
		@object.addField( Quickfix::MsgType.field )
		@object.addField( Quickfix::CheckSum.field )
		@object.addField( Quickfix::TestReqID.field )
		@object.addMsgType( Quickfix::MsgType_TestRequest() )
		@object.addMsgField( Quickfix::MsgType_TestRequest(), Quickfix::TestReqID.field )

		testReqID = Quickfix::TestReqID.new( "1" )
		message = Quickfix40::TestRequest.new()
		message.setField( testReqID )
		message.setField( TooHigh.new( "value" ) )

		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end

		@object.addField( 501 )
		@object.addMsgField( Quickfix::MsgType_TestRequest(), 501 )
		begin
			@object.validate( message )
		rescue Quickfix::Exception
			assert( false )
		end

		message.setField( 5000, "value" )
		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end

		@object.checkUserDefinedFields( false )
		begin
			@object.validate( message )
		rescue Quickfix::Exception
			assert( false )
		end
	end

	def test_checkHasValue
		message = Quickfix40::TestRequest.new
		message.setField( Quickfix::TestReqID.new )

		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end
	end

	def test_checkIsInMessage
		@object.setVersion( Quickfix::BeginString_FIX40() )
		@object.addField( Quickfix::BeginString.field )
		@object.addField( Quickfix::BodyLength.field )
		@object.addField( Quickfix::MsgType.field )
		@object.addField( Quickfix::CheckSum.field )
		@object.addField( Quickfix::TestReqID.field )
		@object.addField( Quickfix::Symbol.field )
		@object.addMsgType( Quickfix::MsgType_TestRequest() )
		@object.addMsgField( Quickfix::MsgType_TestRequest(), Quickfix::TestReqID.field )

		testReqID = Quickfix::TestReqID.new( "1" )

		message = Quickfix40::TestRequest.new
		message.setField( testReqID )
  		begin
			@object.validate( message )
		rescue Quickfix::Exception
			assert( false )
		end

		message.setField( Quickfix::Symbol.new("MSFT") )
		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end
	end

	def test_checkHasRequired
		@object.setVersion( Quickfix::BeginString_FIX40() )
		@object.addField( Quickfix::BeginString.field )
		@object.addField( Quickfix::BodyLength.field )
		@object.addField( Quickfix::MsgType.field )
		@object.addField( Quickfix::SenderCompID.field )
		@object.addField( Quickfix::TargetCompID.field )
		@object.addHeaderField( Quickfix::SenderCompID.field, true )
		@object.addHeaderField( Quickfix::TargetCompID.field, false )
		@object.addField( Quickfix::CheckSum.field )
		@object.addField( Quickfix::TestReqID.field )
		@object.addMsgType( Quickfix::MsgType_TestRequest() )
		@object.addMsgField( Quickfix::MsgType_TestRequest(), Quickfix::TestReqID.field )
		@object.addRequiredField( Quickfix::MsgType_TestRequest(), Quickfix::TestReqID.field )

		message = Quickfix40::TestRequest.new
		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end

		message.getHeader().setField( Quickfix::SenderCompID.new("SENDER") )
		begin
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end

		message.setField( Quickfix::TestReqID.new( "1" ) )
		begin
			@object.validate( message )
		rescue Quickfix::Exception
			assert( false )
		end

		message.getHeader().removeField( Quickfix::SenderCompID.field )
		message.setField( Quickfix::SenderCompID.new("SENDER") )
		begin 
			@object.validate( message )
			assert( false )
		rescue Quickfix::Exception
		end
	end
end
