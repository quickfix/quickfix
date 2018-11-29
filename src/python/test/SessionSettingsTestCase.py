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
            self.assertTrue( 0 )
        except fix.ConfigError as e:
            self.assertTrue( 1 )

        dictionary.setString( fix.CONNECTION_TYPE, "badvalue" )
        try:
            self.object.set( sessionID, dictionary );
            self.assertTrue( 0 );
        except fix.ConfigError as e:
            self.assertTrue( 1 )

        dictionary.setString( fix.CONNECTION_TYPE, "initiator" )
        try:
            self.object.set( sessionID, dictionary );
            self.assertTrue( 1 );
        except fix.ConfigError as e:
            self.assertTrue( 0 )

        sessionID = fix.SessionID( "FIX4.2", "SenderCompID", "TargetCompID" )
        try:
            self.object.set( sessionID, dictionary );
            self.assertTrue( 0 );
        except fix.ConfigError as e:
            self.assertTrue( 1 )

    def test_get_sessions(self):
        dictionary = fix.Dictionary()
        dictionary.setString(fix.BEGINSTRING, "FIX.4.4")
        dictionary.setString(fix.START_TIME, "00:00:00")
        dictionary.setString(fix.END_TIME, "00:00:00")
        dictionary.setString(fix.CONNECTION_TYPE, "initiator")
        self.object.set(dictionary)
        sessionids = [fix.SessionID('FIX.4.4', 'SenderA', 'TargetA'), fix.SessionID('FIX.4.4', 'SenderB', 'TargetB')]
        for sessionid in sessionids:
            self.object.set(sessionid, self.object.get())
        sessionids = [str(s) for s in sessionids]
        for sessionid in self.object.getSessions():
            self.assertIn(str(sessionid), sessionids)

if __name__ == '__main__':
    unittest.main()
