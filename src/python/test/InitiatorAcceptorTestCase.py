import quickfix as fix
import unittest


class Application(fix.Application):
    def onCreate(self, sessionID): pass
    def onLogon(self, sessionID): pass
    def onLogout(self, sessionID): pass
    def toAdmin(self, message, sessionID): pass
    def toApp(self, message, sessionID): pass
    def fromAdmin(self, message, sessionID): pass
    def fromApp(self, message, sessionID): pass


class InitiatorAcceptorTestCase(unittest.TestCase):

    def settings(self, connectionType):
        defaults = fix.Dictionary()
        defaults.setString(fix.CONNECTION_TYPE, connectionType)
        defaults.setString(fix.BEGINSTRING, "FIX.4.4")
        defaults.setString(fix.START_TIME, "00:00:00")
        defaults.setString(fix.END_TIME, "00:00:00")
        defaults.setString(fix.HEARTBTINT, "30")
        defaults.setString(fix.USE_DATA_DICTIONARY, "N")
        if connectionType == "initiator":
            defaults.setString(fix.SOCKET_CONNECT_HOST, "127.0.0.1")
            defaults.setString(fix.SOCKET_CONNECT_PORT, "1")
        else:
            defaults.setString(fix.SOCKET_ACCEPT_PORT, "0")
        settings = fix.SessionSettings()
        settings.set(defaults)
        settings.set(fix.SessionID("FIX.4.4", "SenderCompID", "TargetCompID"), settings.get())
        return settings

    def test_destroy(self):
        # The application and store factory are only referenced by the
        # connector, so they are released as part of destroying it. The C++
        # destructor must run before they go away.
        for cls, connectionType in [(fix.SocketInitiator, "initiator"),
                                    (fix.ThreadedSocketInitiator, "initiator"),
                                    (fix.SocketAcceptor, "acceptor"),
                                    (fix.ThreadedSocketAcceptor, "acceptor")]:
            settings = self.settings(connectionType)
            connector = cls(Application(), fix.MemoryStoreFactory(), settings)
            del connector


if __name__ == '__main__':
    unittest.main()
