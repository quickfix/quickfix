lib_LTLIBRARIES = libquickfix_python.la
libquickfix_python_la_SOURCES = \
	QuickfixPython.cpp

pkgdata_DATA = quickfix.py quickfix40.py quickfix41.py quickfix42.py quickfix43.py quickfix44.py

all-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la
	rm -rf $(top_builddir)/lib/libquickfix_python.so
	rm -rf $(top_builddir)/lib/libquickfix_python.dylib
	rm -rf $(top_builddir)/lib/_quickfix.so
	rm -rf $(top_builddir)/lib/_quickfix.dylib
	rm -rf $(top_builddir)/lib/quickfix.py
	rm -rf $(top_builddir)/lib/quickfix40.py
	rm -rf $(top_builddir)/lib/quickfix41.py
	rm -rf $(top_builddir)/lib/quickfix42.py
	rm -rf $(top_builddir)/lib/quickfix43.py
	rm -rf $(top_builddir)/lib/quickfix44.py
	ln -s ../src/python/.libs/libquickfix_python.a $(top_builddir)/lib/libquickfix_python.a
	ln -s ../src/python/.libs/libquickfix_python.la $(top_builddir)/lib/libquickfix_python.la
	ln -s ../src/python/.libs/libquickfix_python.so $(top_builddir)/lib/libquickfix_python.so
	ln -s ../src/python/.libs/libquickfix_python.dylib $(top_builddir)/lib/libquickfix_python.dylib
	ln -s libquickfix_python.so $(top_builddir)/lib/_quickfix.so
	ln -s libquickfix_python.dylib $(top_builddir)/lib/_quickfix.dylib
	ln -s ../src/python/quickfix.py $(top_builddir)/lib/quickfix.py
	ln -s ../src/python/quickfix40.py $(top_builddir)/lib/quickfix40.py
	ln -s ../src/python/quickfix41.py $(top_builddir)/lib/quickfix41.py
	ln -s ../src/python/quickfix42.py $(top_builddir)/lib/quickfix42.py
	ln -s ../src/python/quickfix43.py $(top_builddir)/lib/quickfix43.py
	ln -s ../src/python/quickfix44.py $(top_builddir)/lib/quickfix44.py

clean-local:
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la
	rm -rf $(top_builddir)/lib/libquickfix_python.so
	rm -rf $(top_builddir)/lib/libquickfix_python.dylib
	rm -rf $(top_builddir)/lib/_quickfix.so
	rm -rf $(top_builddir)/lib/_quickfix.dylib
	rm -rf $(top_builddir)/lib/libquickfix_python.a
	rm -rf $(top_builddir)/lib/libquickfix_python.la

install-exec-local:
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.so
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.dylib
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix40.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix41.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix42.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix43.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix44.py
	ln -s $(prefix)/lib/libquickfix_python.so $(PYTHON_SITE_PACKAGES)/_quickfix.so
	ln -s $(prefix)/lib/libquickfix_python.dylib $(PYTHON_SITE_PACKAGES)/_quickfix.dylib
	cp $(top_builddir)/lib/*.py $(PYTHON_SITE_PACKAGES)

uninstall-local:
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.so
	rm -rf $(PYTHON_SITE_PACKAGES)/_quickfix.dylib
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix40.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix41.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix42.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix43.py
	rm -rf $(PYTHON_SITE_PACKAGES)/quickfix44.py

libquickfix_python_la_LDFLAGS = -version-info 4:1:0
libquickfix_python_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES =-I. -I.. -I../..
