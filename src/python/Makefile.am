lib_LTLIBRARIES = libquickfix_python.la
libquickfix_python_la_SOURCES = \
	QuickfixPython.cpp

pkgdata_DATA = quickfix.py

all-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la
	rm -rf $(top_builddir)/lib/libquickfix_python.so
	rm -rf $(top_builddir)/lib/_quickfix.so
	rm -rf $(top_builddir)/lib/quickfix.py
	ln -s ../src/python/.libs/libquickfix_python.a $(top_builddir)/lib/libquickfix_python.a
	ln -s ../src/python/.libs/libquickfix_python.la $(top_builddir)/lib/libquickfix_python.la
	ln -s ../src/python/.libs/libquickfix_python.so $(top_builddir)/lib/libquickfix_python.so
	ln -s libquickfix_python.so $(top_builddir)/lib/_quickfix.so
	ln -s ../src/python/quickfix.py $(top_builddir)/lib/quickfix.py

clean-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la
	rm -rf $(top_builddir)/lib/libquickfix_python.so
	rm -rf $(top_builddir)/lib/_quickfix.so
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la

install-exec-local:
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.so
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix.py
	ln -s $(prefix)/lib/libquickfix_python.so $(PYTHON_SITE_PACKAGES)/_quickfix.so
	cp $(top_builddir)/lib/quickfix.py $(PYTHON_SITE_PACKAGES)

uninstall-local:
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.so
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix.py

libquickfix_python_la_LDFLAGS = -version-info 4:1:0
libquickfix_python_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES =-I. -I.. -I../..
