require 'quickfix'

module Quickfix
	class Initiator
		def start
			Thread.new { block() }
		end
	end

	class Acceptor
		def start
			Thread.new { block() }
		end
	end

	class SocketInitiator < SocketInitiatorBase
		def initiatlize( application, storeFactory, settings )
			super( application, storeFactory, settings )
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
		end

		def initiatlize( application, storeFactory, settings, logFactory )
			super( application, storeFactory, settings, logFactory )
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
			@logFactory = logFactory;
		end
	end

	class SocketAcceptor < SocketAcceptorBase
		def initiatlize( application, storeFactory, settings )
			super( application, storeFactory, settings )
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
		end

		def initiatlize( application, storeFactory, settings, logFactory )
			super( application, storeFactory, settings, logFactory )
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
			@logFactory = logFactory;
		end
	end
end