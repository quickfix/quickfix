noinst_PROGRAMS = executor

executor_SOURCES = \
	executor.cpp \
	Application.h \
	Application.cpp

executor_LDADD = $(top_builddir)/src/C++/libquickfix.la 

AM_CPPFLAGS = -I$(top_builddir)/include

all-local:
	rm -f $(top_builddir)/bin/executor
	ln -s ../examples/executor/C++/executor $(top_builddir)/bin/executor
