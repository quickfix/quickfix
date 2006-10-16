require 'quickfix_ruby'
require '../src/at_application'

if( ARGV.length == 0 )
	puts "usage: at.rb -f FILE"
	exit 1
end

file = ARGV[0]

settings = Quickfix::SessionSettings.new( file )
application = Application.new
factory = Quickfix::FileStoreFactory.new( "store" )

acceptor = Quickfix::SocketAcceptor.new( application, factory, settings )

acceptor.start()
while( true )
	sleep( 1 )
end
acceptor.stop()
