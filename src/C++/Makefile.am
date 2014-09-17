SUBDIRS = test

LEX += -+ -olex.yy.c

lib_LTLIBRARIES = libquickfix.la
libquickfix_la_SOURCES = \
	Allocator.h \
	AtomicCount.h \
	Session.cpp \
	Session.h \
	TimeRange.cpp \
	TimeRange.h \
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
	NullStore.cpp \
	NullStore.h \
	FileStore.cpp \
	FileStore.h \
	MySQLConnection.h \
	MySQLStore.cpp \
	MySQLStore.h \
	MySQLLog.cpp \
	MySQLLog.h \
	PostgreSQLConnection.h \
	PostgreSQLStore.cpp \
	PostgreSQLStore.h \
	PostgreSQLLog.cpp \
	PostgreSQLLog.h \
	DatabaseConnectionID.h \
	DatabaseConnectionPool.h \
	Dictionary.cpp \
	Dictionary.h \
	DataDictionary.cpp \
	DataDictionary.h \
	DataDictionaryProvider.cpp \
	DataDictionaryProvider.h \
	SessionSettings.cpp \
	SessionSettings.h \
	Application.h \
	Field.h \
	FieldConvertors.h \
	FieldNumbers.h \
	FieldTypes.cpp \
	FieldTypes.h \
	Fields.h \
	FieldMap.cpp \
	FieldMap.h \
	Message.cpp \
	Message.h \
	Group.cpp \
	Group.h \
	MessageSorters.cpp \
	MessageSorters.h \
	HtmlBuilder.h \
	HttpParser.cpp \
	HttpParser.h \
	HttpMessage.cpp \
	HttpMessage.h \
	HttpConnection.h \
	HttpConnection.cpp \
	HttpServer.cpp \
	HttpServer.h \
	Messages.h \
	SessionID.h \
	SocketConnector.h \
	Mutex.h \
	Event.h \
	Queue.h \
	SharedArray.h \
	Exceptions.h \
	Utility.cpp \
	Utility.h \
	Values.h \
	DeprecatedValues.h \
	FlexLexer.h \
	DOMDocument.h \
	PUGIXML_DOMDocument.cpp \
	PUGIXML_DOMDocument.h \
	pugixml.cpp \
	pugixml.hpp \
	pugiconfig.hpp \
	MessageCracker.h \
	Responder.h

BUILT_SOURCES = Allocator.h
CLEANFILES = Allocator.h
Allocator.h: Makefile
	grep "_ALLOCATOR" $(top_builddir)/config.h >$@

all-local:
	rm -rf $(top_builddir)/lib/libquickfix.a
	rm -rf $(top_builddir)/lib/libquickfix.la
	rm -rf $(top_builddir)/lib/libquickfix.so
	rm -rf $(top_builddir)/lib/libquickfix.dylib
	ln -s ../src/C++/.libs/libquickfix.a $(top_builddir)/lib/libquickfix.a
	ln -s ../src/C++/.libs/libquickfix.la $(top_builddir)/lib/libquickfix.la
	ln -s ../src/C++/.libs/libquickfix.so $(top_builddir)/lib/libquickfix.so
	ln -s ../src/C++/.libs/libquickfix.dylib $(top_builddir)/lib/libquickfix.dylib
	bash ./copy.sh $(top_builddir)/include/quickfix *.h
	bash ./copy.sh $(top_builddir)/include/quickfix fix*/*.h

clean-local:
	rm -rf $(top_builddir)/lib/libquickfix.a
	rm -rf $(top_builddir)/lib/libquickfix.la
	rm -f $(top_builddir)/include/quickfix/*.h

install-exec-local: *.h
	rm -rf $(DESTDIR)$(pkgincludedir)
	mkdir -p $(DESTDIR)$(pkgincludedir)
	mkdir $(DESTDIR)$(pkgincludedir)/fix40
	mkdir $(DESTDIR)$(pkgincludedir)/fix41
	mkdir $(DESTDIR)$(pkgincludedir)/fix42
	mkdir $(DESTDIR)$(pkgincludedir)/fix43
	mkdir $(DESTDIR)$(pkgincludedir)/fix44
	mkdir $(DESTDIR)$(pkgincludedir)/fix50
	mkdir $(DESTDIR)$(pkgincludedir)/fix50sp1
	mkdir $(DESTDIR)$(pkgincludedir)/fix50sp2
	mkdir $(DESTDIR)$(pkgincludedir)/fixt11
	cp *.h $(DESTDIR)$(pkgincludedir)
	cp fix40/*.h $(DESTDIR)$(pkgincludedir)/fix40
	cp fix41/*.h $(DESTDIR)$(pkgincludedir)/fix41
	cp fix42/*.h $(DESTDIR)$(pkgincludedir)/fix42
	cp fix43/*.h $(DESTDIR)$(pkgincludedir)/fix43
	cp fix44/*.h $(DESTDIR)$(pkgincludedir)/fix44
	cp fix50/*.h $(DESTDIR)$(pkgincludedir)/fix50
	cp fix50sp1/*.h $(DESTDIR)$(pkgincludedir)/fix50sp1
	cp fix50sp2/*.h $(DESTDIR)$(pkgincludedir)/fix50sp2
	cp fixt11/*.h $(DESTDIR)$(pkgincludedir)/fixt11

uninstall-local:
	rm -rf $(DESTDIR)$(pkgincludedir)

EXTRA_DIST = strptime.c strptime.h

libquickfix_la_LDFLAGS = -version-info 16:1:0

INCLUDES =-I. -I.. -I../..
