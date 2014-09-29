if HAVE_PYTHON
PYTHON_DIR = python
endif

if HAVE_RUBY
RUBY_DIR = ruby
endif

SUBDIRS = C++ ${PYTHON_DIR} ${RUBY_DIR}

noinst_PROGRAMS = at ut pt

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDADD = C++/libquickfix.la
ut_LDADD = $(top_builddir)/UnitTest++/libunittest.la C++/test/libquickfixcpptest.la C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

INCLUDES =-IC++ -IC++/test -I../UnitTest++/src

all-local:
	rm -f $(top_builddir)/test/ut 
	rm -f $(top_builddir)/test/pt 
	rm -f $(top_builddir)/test/at 
	rm -f $(top_builddir)/test/ut_debug
	ln -s ../src/ut $(top_builddir)/test/ut
	ln -s ../src/pt $(top_builddir)/test/pt
	ln -s ../src/at $(top_builddir)/test/at
	ln -s ../src/.libs/ut $(top_builddir)/test/ut_debug

clean-local:
