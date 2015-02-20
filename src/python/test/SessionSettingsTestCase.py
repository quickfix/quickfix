import unittest

import quickfix as fix


class SessionSettingsTestCase(unittest.TestCase):

    def setUp(self):
        self.object = fix.SessionSettings()

    def test_validate(self):
        sessionID = fix.SessionID("FIX.4.2", "SenderCompID", "TargetCompID")

        dictionary = fix.Dictionary()
        self.assertRaises(fix.ConfigError, self.object.set, sessionID, dictionary)

        dictionary.setString(fix.CONNECTION_TYPE, "badvalue")
        self.assertRaises(fix.ConfigError, self.object.set, sessionID, dictionary)

        dictionary.setString(fix.CONNECTION_TYPE, "initiator")
        self.assertIsNone(self.object.set(sessionID, dictionary))

        sessionID = fix.SessionID("FIX4.2", "SenderCompID", "TargetCompID")
        self.assertRaises(fix.ConfigError, self.object.set, sessionID, dictionary)

if __name__ == '__main__':
    unittest.main(verbosity=2)
