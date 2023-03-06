import quickfix as fix
import unittest


class TestApplication(fix.Application):
    def onCreate(self, sessionID): return

    def onLogon(self, sessionID): return

    def onLogout(self, sessionID): return

    def toAdmin(self, sessionID, message): return

    def fromAdmin(self, sessionID, message): return

    def toApp(self, sessionID, message): return

    def fromApp(self, message, sessionID): return


class AcceptorTestCase(unittest.TestCase):

    def setUp(self):
        self.settings = fix.SessionSettings()
        self.sendercompid = "SenderCompID"
        dictionary = fix.Dictionary()
        dictionary.setString(fix.CONNECTION_TYPE, "acceptor")
        dictionary.setBool(fix.USE_DATA_DICTIONARY, False)
        dictionary.setInt(fix.SOCKET_ACCEPT_PORT, 10800)
        dictionary.setBool(fix.SOCKET_REUSE_ADDRESS, True)
        dictionary.setString(fix.SENDERCOMPID, self.sendercompid)
        dictionary.setString(fix.START_TIME, "00:00:00")
        dictionary.setString(fix.END_TIME, "00:00:00")
        dictionary.setString(fix.END_TIME, "00:00:00")
        dictionary.setString(fix.FILE_STORE_PATH, "store")
        dictionary.setString(fix.FILE_LOG_PATH, "log")
        self.settings.set(dictionary)
        sessionID = fix.SessionID("FIX.4.4", self.sendercompid, "TargetCompID")
        global_dict = self.settings.get()
        self.settings.set(sessionID, global_dict)

        self.app = TestApplication()
        self.store_factory = fix.FileStoreFactory(self.settings)
        self.log_factory = fix.ScreenLogFactory(self.settings)
        self.acceptor = fix.SocketAcceptor(self.app, self.store_factory, self.settings, logFactory=None)
        self.acceptor.start()

    def test_add_user(self):
        global_dict = self.settings.get()
        session_id = fix.SessionID("FIX.4.4", "SenderCompID", "TargetCompID-Add")
        self.acceptor.createSession(session_id, global_dict)
        self.assertTrue(self.acceptor.has(session_id))


if __name__ == '__main__':
    unittest.main()
