lib_LTLIBRARIES = libquickfix_python.la
libquickfix_python_la_SOURCES = \
	QuickfixPython.cpp

all-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la
	rm -rf $(top_builddir)/lib/libquickfix_python.so
	rm -rf $(top_builddir)/lib/libquickfix_python.dylib
	ln -s ../src/python/.libs/libquickfix_python.a $(top_builddir)/lib/libquickfix_python.a
	ln -s ../src/python/.libs/libquickfix_python.la $(top_builddir)/lib/libquickfix_python.la
	ln -s ../src/python/.libs/libquickfix_python.so $(top_builddir)/lib/libquickfix_python.so
	ln -s ../src/python/.libs/libquickfix_python.dylib $(top_builddir)/lib/libquickfix_python.dylib

clean-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la

libquickfix_python_la_LDFLAGS = -version-info 0:0:0
libquickfix_python_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la -lstdc++

INCLUDES =-I. -I.. -I../..
