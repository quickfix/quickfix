import quickfix as fix
import unittest

class FieldBaseTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.FieldBase( 12, "VALUE" )

	def test_set(self):
		self.object.setString("VALUE")
		self.assertTrue(self.object.getFixString() == "12=VALUE\001")
		self.assertTrue(self.object.getTotal() == 542)
		self.assertTrue(self.object.getLength() == 9)
		self.object.setString("VALUF")
		self.assertTrue(self.object.getFixString() == "12=VALUF\001")
		self.assertTrue(self.object.getTotal() == 543)
		self.assertTrue(self.object.getLength() == 9)
		self.object.setTag(13)
		self.assertTrue(self.object.getFixString() == "13=VALUF\001")
		self.assertTrue(self.object.getTotal() == 544)
		self.assertTrue(self.object.getLength() == 9)

if __name__ == '__main__':
	unittest.main()
