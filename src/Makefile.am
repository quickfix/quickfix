if HAVE_PYTHON3
PYTHON3_DIR = python3
endif

if HAVE_RUBY
RUBY_DIR = ruby
endif

SUBDIRS = C++ ${PYTHON3_DIR} ${RUBY_DIR}

noinst_PROGRAMS = at ut pt

at_SOURCES = at.cpp at_application.h
ut_SOURCES = ut.cpp
pt_SOURCES = pt.cpp

EXTRA_DIST = getopt.c getopt-repl.h

at_LDADD = C++/libquickfix.la
ut_LDADD = C++/libquickfix.la
pt_LDADD = C++/libquickfix.la

AM_CPPFLAGS =-IC++ -IC++/test

all-local:
	rm -f $(top_builddir)/test/ut 
	rm -f $(top_builddir)/test/pt 
	rm -f $(top_builddir)/test/at 
	rm -f $(top_builddir)/test/ut_debug
	ln -s $(top_builddir)/src/ut $(top_builddir)/test/ut
	ln -s $(top_builddir)/src/pt $(top_builddir)/test/pt
	ln -s $(top_builddir)/src/at $(top_builddir)/test/at
	ln -s $(top_builddir)/src/.libs/ut $(top_builddir)/test/ut_debug

clean-local:
