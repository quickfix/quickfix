if HAS_JNI
SUBDIRS = C++ java
else
SUBDIRS = C++
endif

noinst_PROGRAMS = at_server at_client ut pt

at_server_SOURCES = at_server.cpp at_application.h
at_client_SOURCES = at_client.cpp at_application.h
ut_SOURCES = ut.cpp TestSuite.h
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_server_LDFLAGS = -static
at_client_LDFLAGS = -static
ut_LDFLAGS = -static
pt_LDFLAGS = -static

at_server_LDADD = C++/libquickfix.la -lxml2 -lpthread
at_client_LDADD = C++/libquickfix.la -lxml2 -lpthread
ut_LDADD = C++/test/libquickfixcpptest.la C++/libquickfix.la -lxml2 -lpthread
pt_LDADD = C++/libquickfix.la -lxml2 -lpthread

INCLUDES =-I. -I.. -I../.. -IC++

all-local:
	rm -f ../bin/ut ../bin/pt ../bin/at_server ../bin/at_client
	ln -s ../src/ut ../bin/ut
	ln -s ../src/pt ../bin/pt
	ln -s ../src/at_server ../bin/at_server
	ln -s ../src/at_client ../bin/at_client