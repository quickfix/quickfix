require 'quickfix_ruby'
require 'test/unit'

class MessageTestCase < Test::Unit::TestCase

	def setup
		@object = Quickfix::Message.new()
	end

	def test_isAdmin
		assert( !@object.isAdmin() )
		@object.getHeader().setField( Quickfix::MsgType.new("A") )
		assert( @object.isAdmin() )
		@object.getHeader().setField( Quickfix::MsgType.new("D") )
		assert( !@object.isAdmin() )
	end

	def test_isApp
		assert( !@object.isApp() )
		@object.getHeader().setField( Quickfix::MsgType.new("A") )
		assert( !@object.isApp() )
		@object.getHeader().setField( Quickfix::MsgType.new("D") )
		assert( @object.isApp() )
	end

	def test_isEmpty
		message = Quickfix::Message.new
		assert( message.isEmpty() )
		message.getHeader().setField( Quickfix::BeginString.new("FIX.4.2") )
		assert( !message.isEmpty() )
		message.clear()
		assert( message.isEmpty() )
		message.setField( Quickfix::Symbol.new("MSFT") )
		assert( !message.isEmpty() )
		message.clear()
		assert( message.isEmpty() )
		message.getTrailer().setField( Quickfix::CheckSum.new(10) )
		assert( !message.isEmpty() )
		message.clear()
		assert( message.isEmpty() )
	end

	def test_setString
		strGood = "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\00110=218\001"
		strNull = "8=FIX.4.2\0019=46\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\000\00110=219\001"
		strTrailingCharacter = "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\00110=218\001 "
		strNoChk = "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\001"
		strBadChk = "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\00110=000\001"
		strBad = "8=FIX.4.2\0019=45\00135=0\00134=3\00149garbled=TW\00152=20000426-12:05:06\00156=ISLD\00110=000\001"
		strBadHeaderOrder = "8=FIX.4.2\00135=0\0019=45\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\00110=218\001"
		strBodyFields = "8=FIX.4.2\0019=60\00135=D\00111=ORDERID\00121=3\00140=2\00154=1\00155=MSFT\00160=19000101-00:00:00\00110=226\001"
		strNoLengthAndChk = "8=FIX.4.2\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\001";
		strJunk = "paste your FIX message here, then hit ENTER"
		strEmpty = ""

		begin
			@object.setString( strGood )
			@object.setString( strNull )
			@object.setString( strNoLengthAndChk, false )
		rescue Quickfix::InvalidMessage
			assert( false )
		end

		begin
			@object.setString( strTrailingCharacter )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strNoChk )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strBadChk )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strBad )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strBadHeaderOrder )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strNoLengthAndChk )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strJunk )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		begin
			@object.setString( strEmpty )
			assert(false)
		rescue Quickfix::InvalidMessage
		end

		dataDictionary = Quickfix::DataDictionary.new
		dataDictionary.addHeaderField( 11, false )
		dataDictionary.addTrailerField( 60, false )

		clOrdID = Quickfix::ClOrdID.new
		transactTime = Quickfix::TransactTime.new
		symbol = Quickfix::Symbol.new

		begin
			@object.setString( strBodyFields, true, dataDictionary )
		rescue Quickfix::InvalidMessage
			assert( false )
		end

		assert( @object.getHeader().isSetField( clOrdID ) );
		assert( @object.getTrailer().isSetField( transactTime ) );
		assert( @object.isSetField( symbol ) );
	end

	def test_setStringWithGroup
		dataDictionary = Quickfix::DataDictionary.new( "spec/FIX43.xml" )
		str = "8=FIX.4.3\0019=199\00135=E\00134=126\00149=BUYSIDE\00150=00303\00152=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459\00168=2\00173=2\00111=1095350459\00167=1\0011=00303\00155=fred\00154=1\00140=1\00159=3\00111=1095350460\00167=2\0011=00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110=138\001"

		begin
			@object.setString( str, true, dataDictionary )
			assert_equal( str, @object.toString() )
		rescue Quickfix::InvalidMessage
			assert( false )
		end
	end

	def test_setStringWithHeaderGroup
		dataDictionary = Quickfix::DataDictionary.new( "spec/FIX43.xml" )
		str = "8=FIX.4.3\0019=152\00135=A\00134=125\00149=BUYSIDE\00152=20040916-16:19:18.328\00156=SELLSIDE\001627=2\001628=HOP1\001629=20040916-16:19:18.328\001630=ID1\001628=HOP2\001629=20040916-16:19:18.328\001630=ID2\00110=079\001"

		begin
			@object.setString( str, true, dataDictionary )
			assert_equal( str, @object.toString() )
		rescue Quickfix::InvalidMessage
			assert( false )
		end
	end

	def test_noEndingDelim
		str = "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06\00156=ISLD\00110=218"

		begin
			@object.setString( str )
			assert(false)
		rescue Quickfix::InvalidMessage
		end
	end

	def test_outOfOrder
		str = "54=1\00120=0\00131=109.03125\00160=00000000-00:00:00\0018=FIX.4.2\0016=109.03125\0011=acct1\001151=0\001150=2\00117=2\00139=2\00138=3000\00149=MEK\00115=USD\00137=1\00148=123ABC789\00114=3000\00135=8\00156=KEM\00134=2\00155=ABCD\00111=ID1\00122=1\001"
		expected = "8=FIX.4.2\0019=171\00135=8\00134=2\00149=MEK\00156=KEM\0011=acct1\0016=109.03125\00111=ID1\00114=3000\00115=USD\00117=2\00120=0\00122=1\00131=109.03125\00137=1\00138=3000\00139=2\00148=123ABC789\00154=1\00155=ABCD\00160=00000000-00:00:00\001150=2\001151=0\00110=225\001"

		begin
			@object.setString( str, false )
			assert_equal( expected, @object.toString() )
		rescue Quickfix::InvalidMessage
			assert( false )
		end
	end

	def test_getXML
		Quickfix::Message::InitializeXML("spec/FIX42.xml")
		message = Quickfix::Message.new
		message.getHeader().setField(Quickfix::BeginString.new("FIX.4.2"))
		message.getHeader().setField(Quickfix::SenderCompID.new("SENDER"))
		message.getHeader().setField(Quickfix::TargetCompID.new("TARGET"))
		message.getHeader().setField(Quickfix::MsgType.new(Quickfix::MsgType_Logon()))
		message.setField(Quickfix::Account.new("ACCOUNT"))
		message.setField(Quickfix::ClOrdID.new("CLORDID"))
		message.setField(Quickfix::SecurityIDSource.new(Quickfix::SecurityIDSource_CUSIP()))
		message.setField(Quickfix::NoMsgTypes.new(2))
		group = Quickfix::Group.new(384, 372)
		group.setField(Quickfix::RefMsgType.new("A"))
		group.setField(Quickfix::MsgDirection.new('0'))
		message.addGroup(group)
		group.setField(Quickfix::RefMsgType.new("0"))
		group.setField(Quickfix::MsgDirection.new('1'))
		message.addGroup(group)
		message.getTrailer().setField(Quickfix::CheckSum.new(132))
	end

	# skip test for now
	def test_reverseRoute
		return
		header = Quickfix::FieldMap.new
		beginString = Quickfix::BeginString.new( "FIX.4.2" )
		senderCompID = Quickfix::SenderCompID.new( "SenderCompID" )
		targetCompID = Quickfix::TargetCompID.new( "TargetCompID" )
		onBehalfOfCompID = Quickfix::OnBehalfOfCompID.new( "OnBehalfOfCompID" )
		onBehalfOfSubID = Quickfix::OnBehalfOfSubID.new( "OnBehalfOfSubID" )
		onBehalfOfLocationID = Quickfix::OnBehalfOfLocationID.new( "OnBehalfOfLocationID" )
		deliverToCompID = Quickfix::DeliverToCompID.new( "DeliverToCompID" )
		deliverToSubID = Quickfix::DeliverToSubID.new( "DeliverToSubID" )
		deliverToLocationID = Quickfix::DeliverToLocationID.new( "DeliverToLocationID" )

		reversedMessage = Quickfix::Message.new
		reversedHeader = reversedMessage.getHeader()

		header.setField( beginString )
		header.setField( senderCompID )
		header.setField( targetCompID )
		header.setField( onBehalfOfCompID )
		header.setField( onBehalfOfSubID )
		header.setField( onBehalfOfLocationID )
		header.setField( deliverToCompID )
		header.setField( deliverToSubID )
		header.setField( deliverToLocationID )

		reversedMessage.reverseRoute( header );
		assert( reversedHeader.getField( beginString ).getString() == "FIX.4.2" )
		assert( reversedHeader.getField( senderCompID ).getString() == "TargetCompID" )
		assert( reversedHeader.getField( targetCompID ).getString() == "SenderCompID" )
		assert( reversedHeader.getField( onBehalfOfCompID ).getString() == "DeliverToCompID" )
		assert( reversedHeader.getField( onBehalfOfSubID ).getString() == "DeliverToSubID" )
		assert( reversedHeader.getField( onBehalfOfLocationID ).getString() == "DeliverToLocationID" )
		assert( reversedHeader.getField( deliverToCompID ).getString() == "OnBehalfOfCompID" )
		assert( reversedHeader.getField( deliverToSubID ).getString() == "OnBehalfOfSubID" )
		assert( reversedHeader.getField( deliverToLocationID ).getString() == "OnBehalfOfLocationID" )

		header.setField( Quickfix::BeginString.new("FIX.4.0" ) )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField( onBehalfOfLocationID ) )
		assert( !reversedHeader.isSetField( deliverToLocationID ) )

		header.setField( beginString )
		reversedMessage.reverseRoute( header )

		header.removeField( Quickfix::OnBehalfOfCompID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(deliverToCompID) )
		header.removeField( Quickfix::DeliverToCompID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(onBehalfOfCompID) )
		header.removeField( Quickfix::OnBehalfOfSubID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(deliverToSubID) )
		header.removeField( Quickfix::DeliverToSubID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(onBehalfOfSubID) )
		header.removeField( Quickfix::OnBehalfOfLocationID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(deliverToLocationID) )
		header.removeField( Quickfix::DeliverToLocationID.field )
		reversedMessage.reverseRoute( header )
		assert( !reversedHeader.isSetField(onBehalfOfLocationID) )
	end

	def test_addRemoveGroup
		@object.setField( Quickfix::ListID.new( "1" ) )
		@object.setField( Quickfix::BidType.new( 0 ) )
		@object.setField( Quickfix::TotNoOrders.new( 3 ) )

		group = Quickfix42::NewOrderList::NoOrders.new
		group.setField( Quickfix::ClOrdID.new( "A" ) )
		group.setField( Quickfix::ListSeqNo.new( 1 ) )
		group.setField( Quickfix::Symbol.new( "DELL" ) )
		group.setField( Quickfix::Side.new( '1' ) )
		@object.addGroup( group )

		group.setField( Quickfix::ClOrdID.new( "B" ) )
		group.setField( Quickfix::ListSeqNo.new( 2 ) )
		group.setField( Quickfix::Symbol.new( "LNUX" ) )
		group.setField( Quickfix::Side.new( '2' ) )
		@object.addGroup( group )

		group.setField( Quickfix::ClOrdID.new( "C" ) )
		group.setField( Quickfix::ListSeqNo.new( 3 ) )
		group.setField( Quickfix::Symbol.new( "RHAT" ) )
		group.setField( Quickfix::Side.new( '3' ) )
		@object.addGroup( group )

		noOrders = Quickfix::NoOrders.new

		assert( @object.hasGroup(1, group) )
		assert( @object.hasGroup(2, group) )
		assert( @object.hasGroup(3, group) )
		assert_equal( 3, @object.groupCount(Quickfix::NoOrders.field) )
		@object.getField( noOrders )
		assert_equal( 3, noOrders.getValue() )

		@object.removeGroup( 2, group )
		assert( @object.hasGroup(1, group) )
		assert( @object.hasGroup(2, group) )
		assert( !@object.hasGroup(3, group) )
		assert_equal( 2, @object.groupCount(Quickfix::NoOrders.field) )
		@object.getField( noOrders )
		assert_equal( 2, noOrders.getValue() )

		@object.removeGroup( group )
		assert( @object.hasGroup(1, group) )
		assert( !@object.hasGroup(2, group) )
		assert( !@object.hasGroup(3, group) )
		assert_equal( 1, @object.groupCount(Quickfix::NoOrders.field) )
		@object.getField( noOrders )
		assert_equal( 1, noOrders.getValue() )

		@object.removeGroup( group )
		assert( !@object.hasGroup(1, group) )
		assert( !@object.hasGroup(2, group) )
		assert( !@object.hasGroup(3, group) )
		assert_equal( 0, @object.groupCount(Quickfix::NoOrders.field) )
		!@object.isSetField( noOrders )
	end

	def test_replaceGroup
		@object.setField( Quickfix::ListID.new( "1" ) )
		@object.setField( Quickfix::BidType.new( 0 ) )
		@object.setField( Quickfix::TotNoOrders.new( 3 ) )

		group = Quickfix42::NewOrderList::NoOrders.new
		group.setField( Quickfix::ClOrdID.new( "A" ) )
		group.setField( Quickfix::ListSeqNo.new( 1 ) )
		group.setField( Quickfix::Symbol.new( "DELL" ) )
		group.setField( Quickfix::Side.new( '1' ) )
		@object.addGroup( group )

		group.setField( Quickfix::ClOrdID.new( "B" ) )
		group.setField( Quickfix::ListSeqNo.new( 2 ) )
		group.setField( Quickfix::Symbol.new( "LNUX" ) )
		group.setField( Quickfix::Side.new( '2' ) )
		@object.addGroup( group );

		group.setField( Quickfix::ClOrdID.new( "C" ) )
		group.setField( Quickfix::ListSeqNo.new( 3 ) )
		group.setField( Quickfix::Symbol.new( "RHAT" ) )
		group.setField( Quickfix::Side.new( '3' ) )
		@object.addGroup( group );

		group.setField( Quickfix::ClOrdID.new( "D" ) )
		group.setField( Quickfix::ListSeqNo.new( 4 ) )
		group.setField( Quickfix::Symbol.new( "AAPL" ) )
		group.setField( Quickfix::Side.new( '4' ) )
		@object.replaceGroup( 2, group );

		noOrders = Quickfix::NoOrders.new

		assert( @object.hasGroup(1, group) )
		assert( @object.hasGroup(2, group) )
		assert( @object.hasGroup(3, group) )
		assert_equal( 3, @object.groupCount(Quickfix::NoOrders.field) )
		@object.getField( noOrders )
		assert_equal( 3, noOrders.getValue() )

		clOrdID = Quickfix::ClOrdID.new
		@object.getGroup( 1, group )
		assert_equal( "A", group.getField(clOrdID).getString() )
		@object.getGroup( 2, group )
		assert_equal( "D", group.getField(clOrdID).getString() )
		@object.getGroup( 3, group )
		assert_equal( "C", group.getField(clOrdID).getString() )
	end
end