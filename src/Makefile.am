if HAS_JNI
SUBDIRS = C++ java
else
SUBDIRS = C++
endif

noinst_PROGRAMS = at ut pt

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDFLAGS = -static
ut_LDFLAGS = -static
pt_LDFLAGS = -static

at_LDADD = C++/libquickfix.la
ut_LDADD = C++/test/libquickfixcpptest.la C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

INCLUDES =-I. -I.. -I../.. -IC++

all-local:
	rm -f ../bin/ut ../bin/pt ../bin/at
	ln -s ../src/ut ../bin/ut
	ln -s ../src/pt ../bin/pt
	ln -s ../src/at ../bin/at
	./build.sh

clean-local:
	rm -f *.class