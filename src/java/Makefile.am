SUBDIRS = cfg src test
EXTRA_DIST = *.h *.cpp *.bat *.xml *.properties *.dsp *.dsw

lib_LTLIBRARIES = libquickfix_jni.la

libquickfix_jni_la_SOURCES = \
	JVM.h \
	JVM.cpp \
	Conversions.h \
	Conversions.cpp \
	JavaApplication.h \
	JavaApplication.cpp \
	JavaLog.h \
	JavaLog.cpp \
	JavaLogFactory.h \
	JavaLogFactory.cpp \
	JavaMessageStore.h \
	JavaMessageStore.cpp \
	JavaMessageStoreFactory.h \
	JavaMessageStoreFactory.cpp \
	org_quickfix_FileStore.h \
	org_quickfix_FileStore.cpp \
	org_quickfix_FileStoreFactory.h \
	org_quickfix_FileStoreFactory.cpp \
	org_quickfix_FileLog.h \
	org_quickfix_FileLog.cpp \
	org_quickfix_FileLogFactory.h \
	org_quickfix_FileLogFactory.cpp \
	org_quickfix_Group.h \
	org_quickfix_Group.cpp \
	org_quickfix_MemoryStore.h \
	org_quickfix_MemoryStore.cpp \
	org_quickfix_Message.h \
	org_quickfix_Message.cpp \
	org_quickfix_MySQLStore.h \
	org_quickfix_MySQLStore.cpp \
	org_quickfix_MySQLStoreFactory.h \
	org_quickfix_MySQLStoreFactory.cpp \
	org_quickfix_MySQLLog.h \
	org_quickfix_MySQLLog.cpp \
	org_quickfix_MySQLLogFactory.h \
	org_quickfix_MySQLLogFactory.cpp \
	org_quickfix_ScreenLog.h \
	org_quickfix_ScreenLog.cpp \
	org_quickfix_ScreenLogFactory.h \
	org_quickfix_ScreenLogFactory.cpp \
	org_quickfix_Session.h \
	org_quickfix_Session.cpp \
	org_quickfix_SessionID.h \
	org_quickfix_SessionID.cpp \
	org_quickfix_SessionSettings.h \
	org_quickfix_SessionSettings.cpp \
	org_quickfix_SocketAcceptor.h \
	org_quickfix_SocketAcceptor.cpp \
	org_quickfix_SocketInitiator.h \
	org_quickfix_SocketInitiator.cpp \
	org_quickfix_ThreadedSocketAcceptor.h \
	org_quickfix_ThreadedSocketAcceptor.cpp \
	org_quickfix_ThreadedSocketInitiator.h \
	org_quickfix_ThreadedSocketInitiator.cpp

libquickfix_jni_la_LDFLAGS = -version-info 2:0:0
libquickfix_jni_la_LIBADD = -L../../src/C++ -lquickfix -lstdc++

INCLUDES = -I. -I.. -I../.. -I../../..

all-local:
	rm -f ../../lib/libquickfix_jni.so
	ln -s ../src/java/.libs/libquickfix_jni.so ../../lib/libquickfix_jni.so
	./build.sh

clean-local:
	rm -f ../../lib/libquickfix_jni.so
	./build.sh clean