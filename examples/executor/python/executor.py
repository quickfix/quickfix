import sys
import time
import thread
import quickfix as fix

class Application(fix.Application):
	orderID = 0
	execID = 0

	def onCreate(self, sessionID): return
	def onLogon(self, sessionID): return
	def onLogout(self, sessionID): return
	def toAdmin(self, sessionID, message): return
	def fromAdmin(self, sessionID, message): return
	def toApp(self, sessionID, message): return
	def fromApp(self, message, sessionID):
		beginString = fix.BeginString()
		msgType = fix.MsgType()
		message.getHeader().getField( beginString )
		message.getHeader().getField( msgType )
	
		symbol = fix.Symbol()
		side = fix.Side()
		ordType = fix.OrdType()
		orderQty = fix.OrderQty()
		price = fix.Price()
		clOrdID = fix.ClOrdID()

		message.getField( ordType )
		print ordType
		if ordType.getValue() != fix.OrdType_LIMIT:
			raise fix.IncorrectTagValue( ordType.getField() )

		message.getField( symbol )
		message.getField( side )
		message.getField( orderQty )
		message.getField( price )
		message.getField( clOrdID )

		executionReport = fix.Message()
		executionReport.getHeader().setField( beginString )
		executionReport.getHeader().setField( fix.MsgType(fix.MsgType_ExecutionReport) )

		executionReport.setField( fix.OrderID(self.genOrderID()) )
		executionReport.setField( fix.ExecID(self.genExecID()) )
		executionReport.setField( fix.ExecTransType(fix.ExecTransType_NEW) )
		executionReport.setField( fix.OrdStatus(fix.OrdStatus_FILLED) )
		executionReport.setField( symbol )
		executionReport.setField( side )
		executionReport.setField( fix.CumQty(orderQty.getValue()) )
		executionReport.setField( fix.AvgPx(price.getValue()) )
		executionReport.setField( fix.LastShares(orderQty.getValue()) )
		executionReport.setField( fix.LastPx(price.getValue()) )
		executionReport.setField( clOrdID )
		executionReport.setField( orderQty )

		if beginString.getValue() >= fix.BeginString_FIX41:
			executionReport.setField( fix.ExecType(fix.ExecType_FILL) )
			executionReport.setField( fix.LeavesQty(0) )

		try:
			fix.Session.sendToTarget( executionReport, sessionID )
		except SessionNotFound, e:
			return

	def genOrderID(self):
		self.orderID = self.orderID+1
		return `self.orderID`
	def genExecID(self):
		self.execID = self.execID+1
		return `self.execID`
def start(acceptor):
    acceptor.block()

try:
	file = sys.argv[1]
	settings = fix.SessionSettings( file )
	application = Application()
	factory = fix.FileStoreFactory( settings )
	logFactory = fix.ScreenLogFactory( 1, 1, 1 )
	acceptor = fix.SocketAcceptor( application, factory, settings, logFactory )
	thread.start_new_thread(start, (acceptor,))
	while 1:
	      time.sleep(1)
except (fix.ConfigError, fix.RuntimeError), e:
	print e


