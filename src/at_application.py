import quickfix as fix

class Application(fix.Application):
    orderIDs = {}

    def onCreate(self, sessionID):
        self.reset()
        session = fix.Session.lookupSession( sessionID )
        if session == None:
            session.reset()

    def onLogon(self, sessionID): return
    def onLogout(self, sessionID): return
    def toAdmin(self, sessionID, message): return
    def fromAdmin(self, sessionID, message): return
    def toApp(self, sessionID, message): return

    def fromApp(self, message, sessionID):
        msgType = fix.MsgType()
        message.getHeader().getField( msgType )
        if( msgType.getValue() == fix.MsgType_NewOrderSingle ):
            echo = fix.Message( message )
            possResend = fix.PossResend( False )
            if( message.getHeader().isSetField( possResend ) ):
                message.getHeader().getField( possResend )

            clOrdID = fix.ClOrdID()
            message.getField( clOrdID )

            if( possResend.getValue() ):
                if( clOrdID.getString() in self.orderIDs ):
                    return
            self.orderIDs[clOrdID.getString()] = clOrdID.getString()
            fix.Session.sendToTarget( echo, sessionID )
        elif( msgType.getValue() == fix.MsgType_SecurityDefinition ):
            echo = fix.Message( message )
            fix.Session.sendToTarget( echo, sessionID )
        else:
            raise fix.UnsupportedMessageType()

    def reset( self ):
        self.orderIDs = {}

