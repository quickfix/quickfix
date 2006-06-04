require 'quickfix'
require 'quickfix40'

class Application < Quickfix::Application

	def initialize
		super
		@orderID = 0
		@execID = 0
	end

	def onCreate(sessionID)
	end

	def onLogon(sessionID)
	end

	def onLogout(sessionID)
	end

	def toAdmin(sessionID, message)
	end

	def fromAdmin(sessionID, message)
	end

	def toApp(sessionID, message)
	end

	def fromApp(message, sessionID)
		beginString = Quickfix::BeginString.new
		msgType = Quickfix::MsgType.new
		message.getHeader().getField( beginString )
		message.getHeader().getField( msgType )
	
		symbol = Quickfix::Symbol.new
		side = Quickfix::Side.new
		ordType = Quickfix::OrdType.new
		orderQty = Quickfix::OrderQty.new
		price = Quickfix::Price.new
		clOrdID = Quickfix::ClOrdID.new

		message.getField( ordType )
		puts ordType
		if( ordType.getValue() != Quickfix::OrdType_LIMIT )
			raise Quickfix::IncorrectTagValue.new( ordType.getField() )
		end

		message.getField( symbol )
		message.getField( side )
		message.getField( orderQty )
		message.getField( price )
		message.getField( clOrdID )

		executionReport = Quickfix::Message.new
		executionReport.getHeader().setField( beginString )
		executionReport.getHeader().setField( Quickfix::MsgType.new(Quickfix::MsgType_ExecutionReport) )

		executionReport.setField( Quickfix::OrderID(genOrderID()) )
		executionReport.setField( Quickfix::ExecID(genExecID()) )
		executionReport.setField( Quickfix::ExecTransType(Quickfix::ExecTransType_NEW) )
		executionReport.setField( Quickfix::OrdStatus(Quickfix::OrdStatus_FILLED) )
		executionReport.setField( symbol )
		executionReport.setField( side )
		executionReport.setField( Quickfix::CumQty(orderQty.getValue()) )
		executionReport.setField( Quickfix::AvgPx(price.getValue()) )
		executionReport.setField( Quickfix::LastShares(orderQty.getValue()) )
		executionReport.setField( Quickfix::LastPx(price.getValue()) )
		executionReport.setField( clOrdID )
		executionReport.setField( orderQty )

		if( beginString.getValue() >= Quickfix::BeginString_FIX41 )
			executionReport.setField( Quickfix::ExecType.new(Quickfix::ExecType_FILL) )
			executionReport.setField( Quickfix::LeavesQty.new )
		end

		begin
			Quickfix::Session.sendToTarget( executionReport, sessionID )
		rescue SessionNotFound
			return
		end
	end

	def genOrderID
		@orderID = @orderID+1
	end

	def genExecID
		@execID = @execID+1
	end
end

begin
	#print sys.path
	file = ARGV[0]
	settings = Quickfix::SessionSettings.new( file )
	application = Application.new
	storeFactory = Quickfix::FileStoreFactory.new( settings )
	logFactory = Quickfix::ScreenLogFactory.new( settings )
acceptor = Quickfix::SocketAcceptor.new( application, storeFactory, settings )
	acceptor = Quickfix::SocketAcceptor.new( application, storeFactory, settings, logFactory )
	acceptor.start()
	while( true )
		sleep(1)
	end
rescue Quickfix::ConfigError, Quickfix::RuntimeError => e
	print e
end
