import quickfix as fix
import quickfix40 as fix40
import unittest

class TooHigh(fix.StringField):
	def __init__(self, data = None):
		if data == None:
			fix.StringField.__init__(self, 501)
		else:
			fix.StringField.__init__(self, 501, data)

class DataDictionaryTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.DataDictionary()

	def test_addMsgType(self):
		self.failUnless( self.object.isMsgType("A") == 0 )
		self.object.addMsgType("A")
		self.failUnless( self.object.isMsgType("A") )

	def test_addMsgField(self):
		self.failUnless( self.object.isMsgField( "A", 10 ) == 0 )
		self.failUnless( self.object.isMsgField( "Z", 50 ) == 0 )
		self.object.addMsgField( "A", 10 )
		self.object.addMsgField( "Z", 50 )
		self.failUnless( self.object.isMsgField( "A", 10 ) )
		self.failUnless( self.object.isMsgField( "Z", 50 ) )
		self.failUnless( self.object.isMsgField( "A", 50 ) == 0 )
		self.failUnless( self.object.isMsgField( "Z", 10 ) == 0 )

	def test_addHeaderField(self):
		self.failUnless( self.object.isHeaderField( 56 ) == 0 )
		self.failUnless( self.object.isHeaderField( 49 ) == 0 )
		self.object.addHeaderField( 56, True )
		self.object.addHeaderField( 49, True )
		self.failUnless( self.object.isHeaderField( 56 ) )
		self.failUnless( self.object.isHeaderField( 49 ) )

	def test_addTrailerField(self):
		self.failUnless( self.object.isTrailerField( 10 ) == 0 )
		self.object.addTrailerField( 10, True )
		self.failUnless( self.object.isTrailerField( 10 ) )

	def test_addRequiredField(self):
		self.failUnless( self.object.isRequiredField( "A", 10 ) == 0 )
		self.failUnless( self.object.isRequiredField( "Z", 50 ) == 0 )
		self.object.addRequiredField( "A", 10 )
		self.object.addRequiredField( "Z", 50 )
		self.failUnless( self.object.isRequiredField( "A", 10 ) )
		self.failUnless( self.object.isRequiredField( "Z", 50 ) )
		self.failUnless( self.object.isRequiredField( "A", 50 ) == 0 )
		self.failUnless( self.object.isRequiredField( "Z", 10 ) == 0 )

	def test_addFieldValue(self):
		self.failUnless( self.object.isFieldValue( 12, "f" ) == 0 )
		self.failUnless( self.object.isFieldValue( 12, "g" ) == 0 )
		self.failUnless( self.object.isFieldValue( 15, "1" ) == 0 )
		self.failUnless( self.object.isFieldValue( 18, "2" ) == 0 )
		self.failUnless( self.object.isFieldValue( 167, "FUT" ) == 0 )

		self.object.addFieldValue( 12, "f" )
		self.object.addFieldValue( 12, "g" )
		self.object.addFieldValue( 15, "1" )
		self.object.addFieldValue( 18, "2" )
		self.object.addFieldValue( 167, "FUT" )

		self.failUnless( self.object.isFieldValue( 12, "f" ) )
		self.failUnless( self.object.isFieldValue( 12, "g" ) )
		self.failUnless( self.object.isFieldValue( 15, "1" ) )
		self.failUnless( self.object.isFieldValue( 18, "2" ) )
		self.failUnless( self.object.isFieldValue( 167, "FUT" ) )

	def test_addGroup(self):
		self.object.setVersion( "FIX.4.2" )

		group1 = fix.DataDictionary()
		group1.addMsgType( "1" )
		group2 = fix.DataDictionary()
		group2.addMsgType( "2" )
		group3 = fix.DataDictionary()
		group3.addMsgType( "3" )

		self.object.addGroup( "A", 100, 101, group1 )
		self.object.addGroup( "A", 200, 201, group2 )
		self.object.addGroup( "A", 300, 301, group3 )

		d = fix.DataDictionary()
		delim = 0

		result = self.object.getGroup( "A", 100, delim, d )
		self.assertEquals( 101, result[0] )
		self.failUnless( d.isMsgType( "1" ) )

		result = self.object.getGroup( "A", 200, delim, d )
		self.assertEquals( 201, result[0] )
		self.failUnless( d.isMsgType( "2" ) )

		result = self.object.getGroup( "A", 300, delim, d )
		self.assertEquals( 301, result[0] )
		self.failUnless( d.isMsgType( "3" ) )

	def test_addFieldName(self):
		self.object.setVersion( "FIX.4.2" )

		self.object.addFieldName( 1, "Account" )
		self.object.addFieldName( 11, "ClOrdID" )
		self.object.addFieldName( 8, "BeginString" )

		self.assertEquals( "Account", self.object.getFieldName(1, "")[0] )
		self.assertEquals( 1, self.object.getFieldTag("Account", 0)[0] )
		self.assertEquals( "ClOrdID", self.object.getFieldName(11, "")[0] )
		self.assertEquals( 11, self.object.getFieldTag("ClOrdID", 0)[0] )
		self.assertEquals( "BeginString", self.object.getFieldName(8, "")[0] )
		self.assertEquals( 8, self.object.getFieldTag("BeginString", 0)[0] )

	def test_addValueName(self):
		self.object.setVersion( "FIX.4.2" )

		self.object.addValueName( 12, "0", "VALUE_12_0" )
		self.object.addValueName( 12, "B", "VALUE_12_B" )
		self.object.addValueName( 23, "BOO", "VALUE_23_BOO" )

		self.assertEquals( "VALUE_12_0", self.object.getValueName(12, "0", "")[0] )
		self.assertEquals( "VALUE_12_B", self.object.getValueName(12, "B", "")[0] )
		self.assertEquals( "VALUE_23_BOO", self.object.getValueName(23, "BOO", "")[0] )

	def test_checkValidTagNumber(self):
		self.object.setVersion( fix.BeginString_FIX40 )
		self.object.addField( fix.BeginString().getField() )
		self.object.addField( fix.BodyLength().getField() )
		self.object.addField( fix.MsgType().getField() )
		self.object.addField( fix.CheckSum().getField() )
		self.object.addField( fix.TestReqID().getField() )
		self.object.addMsgType( fix.MsgType_TestRequest )
		self.object.addMsgField( fix.MsgType_TestRequest, fix.TestReqID().getField() )

		testReqID = fix.TestReqID( "1" )
		message = fix40.TestRequest()
		message.setField( testReqID )
		message.setField( TooHigh( "value" ) )

		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

		self.object.addField( 501 )
		self.object.addMsgField( fix.MsgType_TestRequest, 501 )
		try:
			self.object.validate( message )
			self.failUnless( 1 )
		except fix.Exception, e:
			self.failUnless( 0 )

		message.setField( 5000, "value" )
		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

		self.object.checkUserDefinedFields( False )
		try:
			self.object.validate( message )
			self.failUnless( 1 )
		except fix.Exception, e:
			self.failUnless( 0 )

	def test_checkHasValue(self):
		message = fix40.TestRequest()
		message.setField( fix.TestReqID() )

		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

	def test_checkIsInMessage(self):
		self.object.setVersion( fix.BeginString_FIX40 )
		self.object.addField( fix.BeginString().getField() )
		self.object.addField( fix.BodyLength().getField() )
		self.object.addField( fix.MsgType().getField() )
		self.object.addField( fix.CheckSum().getField() )
		self.object.addField( fix.TestReqID().getField() )
		self.object.addField( fix.Symbol().getField() )
		self.object.addMsgType( fix.MsgType_TestRequest )
		self.object.addMsgField( fix.MsgType_TestRequest, fix.TestReqID().getField() )

		testReqID = fix.TestReqID( "1" )

		message = fix40.TestRequest()
		message.setField( testReqID )
		try:
			self.object.validate( message )
			self.failUnless( 1 )
		except fix.Exception, e:
			self.failUnless( 0 )

		message.setField( fix.Symbol("MSFT") )
		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

	def test_checkHasRequired(self):
		self.object.setVersion( fix.BeginString_FIX40 )
		self.object.addField( fix.BeginString().getField() )
		self.object.addField( fix.BodyLength().getField() )
		self.object.addField( fix.MsgType().getField() )
		self.object.addField( fix.SenderCompID().getField() )
		self.object.addField( fix.TargetCompID().getField() )
		self.object.addHeaderField( fix.SenderCompID().getField(), True )
		self.object.addHeaderField( fix.TargetCompID().getField(), False )
		self.object.addField( fix.CheckSum().getField() )
		self.object.addField( fix.TestReqID().getField() )
		self.object.addMsgType( fix.MsgType_TestRequest )
		self.object.addMsgField( fix.MsgType_TestRequest, fix.TestReqID().getField() )
		self.object.addRequiredField( fix.MsgType_TestRequest, fix.TestReqID().getField() )

		message = fix40.TestRequest()
		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

		message.getHeader().setField( fix.SenderCompID("SENDER") )
		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

		message.setField( fix.TestReqID("1") )
		try:
			self.object.validate( message )
			self.failUnless( 1 )
		except fix.Exception, e:
			self.failUnless( 0 )

		message.getHeader().removeField( fix.SenderCompID().getField() )
		message.setField( fix.SenderCompID("SENDER") )
		try:
			self.object.validate( message )
			self.failUnless( 0 )
		except fix.Exception, e:
			self.failUnless( 1 )

if __name__ == '__main__':
	unittest.main()
