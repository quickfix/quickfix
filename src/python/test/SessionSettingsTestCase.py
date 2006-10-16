import quickfix as fix
import unittest

class SessionSettingsTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.SessionSettings()

	def test_validate(self):
		sessionID = fix.SessionID( "FIX.4.2", "SenderCompID", "TargetCompID" )
		
		dictionary = fix.Dictionary()
		try:
			self.object.set( sessionID, dictionary )
			self.failUnless( 0 )
		except fix.ConfigError, e:
			self.failUnless( 1 )

		dictionary.setString( fix.CONNECTION_TYPE, "badvalue" )
		try:
			self.object.set( sessionID, dictionary );
			self.failUnless( 0 );
		except fix.ConfigError, e:
			self.failUnless( 1 )

		dictionary.setString( fix.CONNECTION_TYPE, "initiator" )
		try:
			self.object.set( sessionID, dictionary );
			self.failUnless( 1 );
		except fix.ConfigError, e:
			self.failUnless( 0 )

		sessionID = fix.SessionID( "FIX4.2", "SenderCompID", "TargetCompID" )
		try:
			self.object.set( sessionID, dictionary );
			self.failUnless( 0 );
		except fix.ConfigError, e:
			self.failUnless( 1 )

if __name__ == '__main__':
	unittest.main()