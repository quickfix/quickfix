import quickfix as fix
import quickfix42 as fix42
import unittest

class MessageTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.MemoryStore( fix.UtcTimeStamp() )

	def test_setGet(self):
		self.object.set( 1, "hello" )
		self.object.set( 1844674407370955165, "goodbye" )
		messages = fix.VectorString()
		self.object.get( 1, 1844674407370955165, messages )
		assert( messages.size() == 2 )
		assert( messages[0] == "hello" )
		assert( messages[1] == "goodbye" )

if __name__ == '__main__':
    unittest.main()
