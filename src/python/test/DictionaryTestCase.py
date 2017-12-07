import quickfix as fix
import unittest

class DictionaryTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.Dictionary()

	def test_setGetString(self):
		self.object.setString( "STRINGKEY1", "STRINGVALUE1" )
		self.object.setString( "STRINGKEY2", "stringvalue2" )

		self.assertEqual( "STRINGVALUE1", self.object.getString("STRINGKEY1") )
		self.assertEqual( "stringvalue2", self.object.getString("STRINGKEY2") )
		self.assertEqual( "STRINGVALUE2", self.object.getString("STRINGKEY2", True) )

		try:
			self.object.getString( "STRINGKEY3" )
			self.assertTrue( 0 )
		except fix.ConfigError as e:
			self.assertTrue( 1 )

	def test_setGetInt(self):
		self.object.setInt( "LONGKEY1", 12 )
		self.object.setInt( "LONGKEY2", 9827362 )
		self.object.setString( "BADLONGKEY", "AB12" )

		self.assertEqual( 12, self.object.getInt("LONGKEY1") )
		self.assertEqual( 9827362, self.object.getInt("LONGKEY2") )

		try:
			self.object.getInt( "LONGKEY3" )
			self.assertTrue( 0 )
		except fix.ConfigError as e:
			self.assertTrue( 1 )

		try:
			self.object.getInt( "BADLONGKEY" )
			self.assertTrue( 0 )
		except fix.ConfigError as e:
			self.assertTrue( 1 )

	def test_setGetDouble(self):
		self.object.setDouble( "DOUBLEKEY1", 12.3 )
		self.object.setDouble( "DOUBLEKEY2", 9827362.9827362 )
		self.object.setString( "BADDOUBLEKEY", "AB12.3" )

		self.assertEqual( 12.3, self.object.getDouble("DOUBLEKEY1") )
		self.assertEqual( 9827362.9827362, self.object.getDouble("DOUBLEKEY2") )

		try:
			self.object.getDouble( "DOUBLEKEY3" )
			self.assertTrue( 0 )
		except fix.ConfigError as e:
			self.assertTrue( 1 )

		try:
			self.object.getDouble( "BADDOUBLEKEY" )
			self.assertTrue( 0 )
		except fix.ConfigError as e:
			self.assertTrue( 1 )

	def test_setGetDay(self):
		self.object.setString( "DAY1", "SU" );
		self.object.setString( "DAY2", "MO" );
		self.object.setString( "DAY3", "TU" );
		self.object.setString( "DAY4", "WE" );
		self.object.setString( "DAY5", "TH" );
		self.object.setString( "DAY6", "FR" );
		self.object.setString( "DAY7", "SA" );

		self.assertTrue( self.object.getDay( "DAY1" ) == 1 );
		self.assertTrue( self.object.getDay( "DAY2" ) == 2 );
		self.assertTrue( self.object.getDay( "DAY3" ) == 3 );
		self.assertTrue( self.object.getDay( "DAY4" ) == 4 );
		self.assertTrue( self.object.getDay( "DAY5" ) == 5 );
		self.assertTrue( self.object.getDay( "DAY6" ) == 6 );
		self.assertTrue( self.object.getDay( "DAY7" ) == 7 );

		self.object.setDay( "NEXTDAY1", 1 );
		self.object.setDay( "NEXTDAY2", 2 );
		self.object.setDay( "NEXTDAY3", 3 );
		self.object.setDay( "NEXTDAY4", 4 );
		self.object.setDay( "NEXTDAY5", 5 );
		self.object.setDay( "NEXTDAY6", 6 );
		self.object.setDay( "NEXTDAY7", 7 );

		self.assertTrue( self.object.getDay( "NEXTDAY1" ) == 1 );
		self.assertTrue( self.object.getDay( "NEXTDAY2" ) == 2 );
		self.assertTrue( self.object.getDay( "NEXTDAY3" ) == 3 );
		self.assertTrue( self.object.getDay( "NEXTDAY4" ) == 4 );
		self.assertTrue( self.object.getDay( "NEXTDAY5" ) == 5 );
		self.assertTrue( self.object.getDay( "NEXTDAY6" ) == 6 );
		self.assertTrue( self.object.getDay( "NEXTDAY7" ) == 7 );

	def test_merge(self):
		self.object.setString( "FIRSTKEY", "FIRSTVALUE" );
		self.object.setString( "THIRDKEY", "FIRST" );
		second = fix.Dictionary()
		second.setString( "SECONDKEY", "SECONDVALUE" );
		second.setString( "THIRDKEY", "SECOND" );
		self.object.merge( second );
		self.assertTrue( self.object.getString( "FIRSTKEY" ) == "FIRSTVALUE" );
		self.assertTrue( self.object.getString( "SECONDKEY" ) == "SECONDVALUE" );
		self.assertTrue( self.object.getString( "THIRDKEY" ) == "FIRST" );

if __name__ == '__main__':
	unittest.main()
