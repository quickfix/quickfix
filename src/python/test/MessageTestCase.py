import quickfix as fix
import quickfix42 as fix42
import unittest

class MessageTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.Message()

	def test_isAdmin(self):
		self.failUnless( self.object.isAdmin() == 0 )
		self.object.getHeader().setField( fix.MsgType("A") )
		assert( self.object.isAdmin() )
		self.object.getHeader().setField( fix.MsgType("D") )
		assert( self.object.isAdmin() == 0 )

	def test_isApp(self):
		self.failUnless( self.object.isApp() == 0 )
		self.object.getHeader().setField( fix.MsgType("A") )
		self.failUnless( self.object.isApp() == 0 )
		self.object.getHeader().setField( fix.MsgType("D") )
		assert( self.object.isApp() )

	def test_isEmpty(self):
		message = fix.Message()
		self.failUnless( message.isEmpty() )
		message.getHeader().setField( fix.BeginString("FIX.4.2") )
		self.failUnless( message.isEmpty() == 0 )
		message.clear()
		self.failUnless( message.isEmpty() )
		message.setField( fix.Symbol("MSFT") )
		self.failUnless( message.isEmpty() == 0 )
		message.clear()
		self.failUnless( message.isEmpty() )
		message.getTrailer().setField( fix.CheckSum(10) )
		self.failUnless( message.isEmpty() == 0 )
		message.clear()
		self.failUnless( message.isEmpty() )

	def test_setString(self):
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

		try:
			self.object.setString( strGood )
			self.object.setString( strNull )
			self.object.setString( strNoLengthAndChk, False )
		except fix.InvalidMessage, e:
			self.failUnless( 0 )

		try:
			self.object.setString( strTrailingCharacter )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strNoChk )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strBadChk )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strBad )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strBadHeaderOrder )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strNoLengthAndChk )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strJunk )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		try:
			self.object.setString( strEmpty )
			self.failUnless(0)
		except fix.InvalidMessage, e:
			self.failUnless(1)

		dataDictionary = fix.DataDictionary()
		dataDictionary.addHeaderField( 11, False )
		dataDictionary.addTrailerField( 60, False )

		clOrdID = fix.ClOrdID()
		transactTime = fix.TransactTime()
		symbol = fix.Symbol()

		try:
			self.object.setString( strBodyFields, True, dataDictionary )
		except fix.InvalidMessage, e:
			self.failUnless( 0 )

		assert( self.object.getHeader().isSetField( clOrdID ) )
		assert( self.object.getTrailer().isSetField( transactTime ) )
		assert( self.object.isSetField( symbol ) )

	def test_setStringWithGroup(self):
		dataDictionary = fix.DataDictionary( "spec/FIX43.xml" )
		str = "8=FIX.4.3\0019=199\00135=E\00134=126\00149=BUYSIDE\00150=00303\00152=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459\00168=2\00173=2\00111=1095350459\00167=1\0011=00303\00155=fred\00154=1\00140=1\00159=3\00111=1095350460\00167=2\0011=00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110=138\001"

		try:
			self.object.setString( str, True, dataDictionary )
			self.assertEquals( str, self.object.toString() )
		except fix.InvalidMessage, e:
			assert( 0 )

	def test_setStringWithHeaderGroup(self):
		dataDictionary = fix.DataDictionary( "spec/FIX43.xml" )
		str = "8=FIX.4.3\0019=152\00135=A\00134=125\00149=BUYSIDE\00152=20040916-16:19:18.328\00156=SELLSIDE\001627=2\001628=HOP1\001629=20040916-16:19:18.328\001630=ID1\001628=HOP2\001629=20040916-16:19:18.328\001630=ID2\00110=079\001"

		try:
			self.object.setString( str, True, dataDictionary )
			self.assertEquals( str, self.object.toString() )
		except fix.InvalidMessage, e:
			assert( 0 )


	def test_outOfOrder(self):
		str = "54=1\00120=0\00131=109.03125\00160=00000000-00:00:00\0018=FIX.4.2\0016=109.03125\0011=acct1\001151=0\001150=2\00117=2\00139=2\00138=3000\00149=MEK\00115=USD\00137=1\00148=123ABC789\00114=3000\00135=8\00156=KEM\00134=2\00155=ABCD\00111=ID1\00122=1\001"
		expected = "8=FIX.4.2\0019=171\00135=8\00134=2\00149=MEK\00156=KEM\0011=acct1\0016=109.03125\00111=ID1\00114=3000\00115=USD\00117=2\00120=0\00122=1\00131=109.03125\00137=1\00138=3000\00139=2\00148=123ABC789\00154=1\00155=ABCD\00160=00000000-00:00:00\001150=2\001151=0\00110=225\001"

		try:
			self.object.setString( str, False )
			self.assertEquals( expected, self.object.toString() )
		except fix.InvalidMessage, e:
			self.failUnless(0)

	def test_reverseRoute(self):
		header = fix.Header()
		beginString = fix.BeginString( "FIX.4.2" )
		senderCompID = fix.SenderCompID( "SenderCompID" )
		targetCompID = fix.TargetCompID( "TargetCompID" )
		onBehalfOfCompID = fix.OnBehalfOfCompID( "OnBehalfOfCompID" )
		onBehalfOfSubID = fix.OnBehalfOfSubID( "OnBehalfOfSubID" )
		onBehalfOfLocationID = fix.OnBehalfOfLocationID( "OnBehalfOfLocationID" )
		deliverToCompID = fix.DeliverToCompID( "DeliverToCompID" )
		deliverToSubID = fix.DeliverToSubID( "DeliverToSubID" )
		deliverToLocationID = fix.DeliverToLocationID( "DeliverToLocationID" )

		reversedMessage = fix.Message()
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
		self.failUnless( reversedHeader.getField( beginString ).getString() == "FIX.4.2" )
		self.failUnless( reversedHeader.getField( senderCompID ).getString() == "TargetCompID" )
		self.failUnless( reversedHeader.getField( targetCompID ).getString() == "SenderCompID" )
		self.failUnless( reversedHeader.getField( onBehalfOfCompID ).getString() == "DeliverToCompID" )
		self.failUnless( reversedHeader.getField( onBehalfOfSubID ).getString() == "DeliverToSubID" )
		self.failUnless( reversedHeader.getField( onBehalfOfLocationID ).getString() == "DeliverToLocationID" )
		self.failUnless( reversedHeader.getField( deliverToCompID ).getString() == "OnBehalfOfCompID" )
		self.failUnless( reversedHeader.getField( deliverToSubID ).getString() == "OnBehalfOfSubID" )
		self.failUnless( reversedHeader.getField( deliverToLocationID ).getString() == "OnBehalfOfLocationID" )

		header.setField( fix.BeginString("FIX.4.0" ) )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField( onBehalfOfLocationID ) == 0 )
		self.failUnless( reversedHeader.isSetField( deliverToLocationID ) == 0 )

		header.setField( beginString )
		reversedMessage.reverseRoute( header )

		header.removeField( fix.OnBehalfOfCompID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(deliverToCompID) == 0 )
		header.removeField( fix.DeliverToCompID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(onBehalfOfCompID) == 0 )
		header.removeField( fix.OnBehalfOfSubID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(deliverToSubID) == 0 )
		header.removeField( fix.DeliverToSubID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(onBehalfOfSubID) == 0 )
		header.removeField( fix.OnBehalfOfLocationID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(deliverToLocationID) == 0 )
		header.removeField( fix.DeliverToLocationID().getField() )
		reversedMessage.reverseRoute( header )
		self.failUnless( reversedHeader.isSetField(onBehalfOfLocationID) == 0 )

	def test_replaceGroup(self):
		self.object.setField( fix.ListID( "1" ) )
		self.object.setField( fix.BidType( 0 ) )
		self.object.setField( fix.TotNoOrders( 3 ) )

		group = fix42.NewOrderList.NoOrders()
		group.setField( fix.ClOrdID( "A" ) )
		group.setField( fix.ListSeqNo( 1 ) )
		group.setField( fix.Symbol( "DELL" ) )
		group.setField( fix.Side( '1' ) )
		self.object.addGroup( group )

		group.setField( fix.ClOrdID( "B" ) )
		group.setField( fix.ListSeqNo( 2 ) )
		group.setField( fix.Symbol( "LNUX" ) )
		group.setField( fix.Side( '2' ) )
		self.object.addGroup( group );

		group.setField( fix.ClOrdID( "C" ) )
		group.setField( fix.ListSeqNo( 3 ) )
		group.setField( fix.Symbol( "RHAT" ) )
		group.setField( fix.Side( '3' ) )
		self.object.addGroup( group );

		group.setField( fix.ClOrdID( "D" ) )
		group.setField( fix.ListSeqNo( 4 ) )
		group.setField( fix.Symbol( "AAPL" ) )
		group.setField( fix.Side( '4' ) )
		self.object.replaceGroup( 2, group );

		noOrders = fix.NoOrders()

		assert( self.object.hasGroup(1, group) )
		assert( self.object.hasGroup(2, group) )
		assert( self.object.hasGroup(3, group) )
		self.assertEquals( 3, self.object.groupCount(fix.NoOrders().getField()) )
		self.object.getField( noOrders )
		self.assertEquals( 3, noOrders.getValue() )

		clOrdID = fix.ClOrdID()
		self.object.getGroup( 1, group )
		self.assertEquals( "A", group.getField(clOrdID).getString() )
		self.object.getGroup( 2, group )
		self.assertEquals( "D", group.getField(clOrdID).getString() )
		self.object.getGroup( 3, group )
		self.assertEquals( "C", group.getField(clOrdID).getString() )

if __name__ == '__main__':
	unittest.main()
