require 'quickfix'
require 'quickfix_fields'
require 'quickfix40'
require 'quickfix41'
require 'quickfix42'
require 'quickfix43'
require 'quickfix44'

module Quickfix
	class DataDictionary
		def getFieldName( field )
			name = String.new
			if( _getFieldName(field, name) )
				return name
			else
				return nil
			end
		end

		def getValueName( field, value )
			name = String.new
			if( _getValueName(field, value, name) )
				return name
			else
				return nil
			end
		end

		def getFieldTag( field )
			tag = 0
			return  _getFieldTag(field, tag)
		end

		def getGroup( msgType, group )
			delim = 0
			dictionary = Quickfix::DataDictionary.new
			delim = _getGroup( msgType, group, delim, dictionary )
			return nil if delim == nil
			return [delim, dictionary]
		end
	end

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
		def initialize( application, storeFactory, settings, logFactory = nil )
			if( logFactory == nil )
				super( application, storeFactory, settings )
			else
				super( application, storeFactory, settings, logFactory )
			end
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
			@logFactory = logFactory
		end
	end

	class SocketAcceptor < SocketAcceptorBase
		def initialize( application, storeFactory, settings, logFactory = nil )
			if( logFactory == nil )
				super( application, storeFactory, settings )
			else
				super( application, storeFactory, settings, logFactory )
			end
			@application = application;
			@storeFactory = storeFactory;
			@settings = settings;
			@logFactory = logFactory
		end
	end
end