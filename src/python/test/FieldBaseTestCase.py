import unittest

import quickfix as fix


class FieldBaseTestCase(unittest.TestCase):

    def setUp(self):
        self.object = fix.FieldBase(12, "VALUE")

    def test_set(self):
        self.object.setString("VALUE")
        self.assertEqual(self.object.getFixString(), "12=VALUE\001")
        self.assertEqual(self.object.getTotal(), 542)
        self.assertEqual(self.object.getLength(), 9)
        self.object.setString("VALUF")
        self.assertEqual(self.object.getFixString(), "12=VALUF\001")
        self.assertEqual(self.object.getTotal(), 543)
        self.assertEqual(self.object.getLength(), 9)
        self.object.setTag(13)
        self.assertEqual(self.object.getFixString(), "13=VALUF\001")
        self.assertEqual(self.object.getTotal(), 544)
        self.assertEqual(self.object.getLength(), 9)

if __name__ == '__main__':
    unittest.main(verbosity=2)
