import quickfix as fix
import unittest

class FieldBaseTestCase(unittest.TestCase):

	def setUp(self):
		self.object = fix.FieldBase( 12, "VALUE" )

	def test_set(self):
		self.object.setString("VALUE")
		self.failUnless(self.object.getFixString() == "12=VALUE\001")
		self.failUnless(self.object.getTotal() == 542)
		self.failUnless(self.object.getLength() == 9)
		self.object.setString("VALUF")
		self.failUnless(self.object.getFixString() == "12=VALUF\001")
		self.failUnless(self.object.getTotal() == 543)
		self.failUnless(self.object.getLength() == 9)
		self.object.setTag(13)
		self.failUnless(self.object.getFixString() == "13=VALUF\001")
		self.failUnless(self.object.getTotal() == 544)
		self.failUnless(self.object.getLength() == 9)

if __name__ == '__main__':
	unittest.main()
