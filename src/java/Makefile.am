SUBDIRS = cfg src
EXTRA_DIST = *.h *.cpp *.bat *.xml *.properties *.dsp *.dsw

lib_LTLIBRARIES = libquickfix_jni.la

jardir = $(libdir)
jar_DATA = $(top_builddir)/lib/quickfix.jar

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
	quickfix_DataDictionary.h \
	quickfix_DataDictionary.cpp \
	quickfix_FileStore.h \
	quickfix_FileStore.cpp \
	quickfix_FileStoreFactory.h \
	quickfix_FileStoreFactory.cpp \
	quickfix_FileLog.h \
	quickfix_FileLog.cpp \
	quickfix_FileLogFactory.h \
	quickfix_FileLogFactory.cpp \
	quickfix_Group.h \
	quickfix_Group.cpp \
	quickfix_CppMessageStore.h \
	quickfix_CppMessageStore.cpp \
	quickfix_MemoryStore.h \
	quickfix_MemoryStore.cpp \
	quickfix_Message.h \
	quickfix_Message.cpp \
	quickfix_MySQLStore.h \
	quickfix_MySQLStore.cpp \
	quickfix_MySQLStoreFactory.h \
	quickfix_MySQLStoreFactory.cpp \
	quickfix_CppLog.h \
	quickfix_CppLog.cpp \
	quickfix_MySQLLog.h \
	quickfix_MySQLLog.cpp \
	quickfix_MySQLLogFactory.h \
	quickfix_MySQLLogFactory.cpp \
	quickfix_ScreenLog.h \
	quickfix_ScreenLog.cpp \
	quickfix_ScreenLogFactory.h \
	quickfix_ScreenLogFactory.cpp \
	quickfix_Session.h \
	quickfix_Session.cpp \
	quickfix_SessionID.h \
	quickfix_SessionID.cpp \
	quickfix_SessionSettings.h \
	quickfix_SessionSettings.cpp \
	quickfix_SocketAcceptor.h \
	quickfix_SocketAcceptor.cpp \
	quickfix_SocketInitiator.h \
	quickfix_SocketInitiator.cpp \
	quickfix_ThreadedSocketAcceptor.h \
	quickfix_ThreadedSocketAcceptor.cpp \
	quickfix_ThreadedSocketInitiator.h \
	quickfix_ThreadedSocketInitiator.cpp

libquickfix_jni_la_LDFLAGS = -version-info 8:0:0
libquickfix_jni_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES = -I$(top_builddir)/include

ant-all:
	./build.sh

$(top_builddir)/lib/quickfix.jar: ant-all

all-local: ant-all
	rm -f $(top_builddir)/lib/libquickfix_jni.so
	rm -f $(top_builddir)/lib/libquickfix_jni.jnilib
	ln -s ../src/java/.libs/libquickfix_jni.so $(top_builddir)/lib/libquickfix_jni.so
	ln -s ../src/java/.libs/libquickfix_jni.dylib $(top_builddir)/lib/libquickfix_jni.jnilib

clean-local:
	echo $(top_builddir)
	rm -f ../../lib/libquickfix_jni.so
	rm -f ../../lib/libquickfix_jni.jnilib
	./build.sh clean
