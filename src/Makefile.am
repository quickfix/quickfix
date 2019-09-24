if HAVE_PYTHON2
PYTHON2_DIR = python2
endif

if HAVE_PYTHON3
PYTHON3_DIR = python3
endif

if HAVE_RUBY
RUBY_DIR = ruby
endif

SUBDIRS = C++ ${PYTHON2_DIR} ${PYTHON3_DIR} ${RUBY_DIR}

if NO_UNIT_TEST
noinst_PROGRAMS =
else
noinst_PROGRAMS = at ut pt
endif

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDADD = C++/libquickfix.la
ut_LDADD = C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

INCLUDES =-IC++ -IC++/test -I../UnitTest++/src
LDFLAGS =-L../UnitTest++ -lUnitTest++

all-local:
	rm -f ../test/ut ../test/pt ../test/at ../test/ut_debug
	ln -s ../src/ut ../test/ut
	ln -s ../src/pt ../test/pt
	ln -s ../src/at ../test/at
	ln -s ../src/.libs/ut ../test/ut_debug

clean-local:
