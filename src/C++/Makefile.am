SUBDIRS = test

LEX += -+ -olex.yy.c

lib_LTLIBRARIES = libquickfix.la
libquickfix_la_SOURCES = \
	Session.cpp \
	Session.h \
	SessionState.h \
	SessionFactory.h \
	SessionFactory.cpp \
	Parser.cpp \
	Parser.h \
	Log.cpp \
	Log.h \
	FileLog.cpp \
	FileLog.h \
	Settings.cpp \
	Settings.h \
	ConfigLexer.cpp \
	ConfigLexer.h \
	MessageStore.cpp \
	MessageStore.h \
	SocketServer.cpp \
	SocketServer.h \
	SocketConnector.cpp \
	Acceptor.cpp \
	Acceptor.h \
	Initiator.cpp \
	Initiator.h \
	SocketAcceptor.cpp \
	SocketAcceptor.h \
	SocketInitiator.cpp \
	SocketInitiator.h \
	SocketMonitor.cpp \
	SocketMonitor.h \
	SocketConnection.cpp \
	SocketConnection.h \
	ThreadedSocketAcceptor.cpp \
	ThreadedSocketAcceptor.h \
	ThreadedSocketInitiator.cpp \
	ThreadedSocketInitiator.h \
	ThreadedSocketConnection.cpp \
	ThreadedSocketConnection.h \
	FileStore.cpp \
	FileStore.h \
	MySQLStore.cpp \
	MySQLStore.h \
	MySQLLog.cpp \
	MySQLLog.h \
	Dictionary.cpp \
	Dictionary.h \
	DataDictionary.cpp \
	DataDictionary.h \
	SessionSettings.cpp \
	SessionSettings.h \
	Application.h \
	Field.h \
	FieldConvertors.h \
	FieldNumbers.h \
	DeprecatedFieldNumbers.h \
	FieldTypes.cpp \
	FieldTypes.h \
	Fields.h \
	DeprecatedFields.h \
	FieldMap.cpp \
	FieldMap.h \
	Message.cpp \
	Message.h \
	Group.cpp \
	Group.h \
	MessageSorters.cpp \
	MessageSorters.h \
	Messages.h \
	SessionID.h \
	SocketConnector.h \
	Mutex.h \
	Event.h \
	Queue.h \
	Exceptions.h \
	Utility.cpp \
	Utility.h \
	Values.h \
	DeprecatedValues.h \
	FlexLexer.h \
	DOMDocument.h \
	LIBXML_DOMDocument.cpp \
	LIBXML_DOMDocument.h \
	FIX40_Messages.h \
	FIX41_Messages.h \
	FIX42_Messages.h \
	FIX43_Messages.h \
	FIX40_MessageCracker.h \
	FIX41_MessageCracker.h \
	FIX42_MessageCracker.h \
	FIX43_MessageCracker.h \
	MessageCracker.h \
	CallStack.h \
	CallStack.cpp

all-local:
	rm -rf ../../lib/libquickfix.a
	rm -rf ../../lib/libquickfix.la
	ln -s ../src/C++/.libs/libquickfix.a ../../lib/libquickfix.a
	ln -s ../src/C++/.libs/libquickfix.la ../../lib/libquickfix.la
	./copy.sh *.h

clean-local:
	rm -rf ../../lib/libquickfix.a
	rm -rf ../../lib/libquickfix.la
	rm -f ../../include/*.h

install-exec-local: *.h
	rm -rf $(includedir)/quickfix
	mkdir $(includedir)/quickfix
	mkdir $(includedir)/quickfix/include
	cp *.h $(includedir)/quickfix/include

uninstall-local:
	rm -rf $(includedir)/quickfix

EXTRA_DIST = strptime.c strptime.h

libquickfix_la_LDFLAGS = -static

INCLUDES =-I. -I.. -I../.. -I../../..
