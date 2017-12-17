from __future__ import print_function
import sys
import time
import quickfix as fix
import at_application

if len(sys.argv) == 0:
	print("usage: at.py -f FILE")
	exit

file = sys.argv[1]

settings = fix.SessionSettings( file )
application = at_application.Application()
factory = fix.FileStoreFactory( "store" )

acceptor = fix.SocketAcceptor( application, factory, settings )

acceptor.start()
while 1:
	time.sleep( 1 )
acceptor.stop()
