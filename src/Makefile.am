if HAS_JNI
SUBDIRS = C++
else
SUBDIRS = C++
endif

noinst_PROGRAMS = at ut pt

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDADD = C++/libquickfix.la
ut_LDADD = C++/test/libquickfixcpptest.la C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

INCLUDES =-IC++

all-local:
	rm -f ../bin/ut ../bin/pt ../bin/at
	ln -s ../src/ut ../bin/ut
	ln -s ../src/pt ../bin/pt
	ln -s ../src/at ../bin/at
if HAS_JNI
	bash ./build.sh
endif

clean-local:
if HAS_JNI
	bash ./build.sh clean
endif