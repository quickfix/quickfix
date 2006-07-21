lib_LTLIBRARIES = libquickfix_python.la
libquickfix_python_la_SOURCES = \
	QuickfixPython.cpp

pkgdata_DATA = quickfix.py quickfix40.py quickfix41.py quickfix42.py quickfix43.py quickfix44.py

all-local:
	rm -rf $(top_builddir)/lib/python
	mkdir $(top_builddir)/lib/python
	rm -rf $(top_builddir)/lib/python/_quickfix.so
	rm -rf $(top_builddir)/lib/python/_quickfix.dylib
	rm -rf $(top_builddir)/lib/python/quickfix.py
	rm -rf $(top_builddir)/lib/python/quickfix40.py
	rm -rf $(top_builddir)/lib/python/quickfix41.py
	rm -rf $(top_builddir)/lib/python/quickfix42.py
	rm -rf $(top_builddir)/lib/python/quickfix43.py
	rm -rf $(top_builddir)/lib/python/quickfix44.py
	ln -s ../../src/python/.libs/libquickfix_python.so $(top_builddir)/lib/python/_quickfix.so 
	ln -s ../../src/python/.libs/libquickfix_python.dylib $(top_builddir)/lib/python/_quickfix.dylib 
	ln -s ../../src/python/quickfix.py $(top_builddir)/lib/python/quickfix.py
	ln -s ../../src/python/quickfix40.py $(top_builddir)/lib/python/quickfix40.py
	ln -s ../../src/python/quickfix41.py $(top_builddir)/lib/python/quickfix41.py
	ln -s ../../src/python/quickfix42.py $(top_builddir)/lib/python/quickfix42.py
	ln -s ../../src/python/quickfix43.py $(top_builddir)/lib/python/quickfix43.py
	ln -s ../../src/python/quickfix44.py $(top_builddir)/lib/python/quickfix44.py

	bash ./link.sh $(top_builddir)/lib/python _quickfix.so _quickfix.dylib

clean-local:
	rm -rf $(top_builddir)/lib/python/_quickfix.so
	rm -rf $(top_builddir)/lib/python/_quickfix.dylib

install-exec-local:
	rm -rf $(PYTHON_SITE_PACKAGES)/python/_quickfix.so
	rm -rf $(PYTHON_SITE_PACKAGES)/python/_quickfix.dylib
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix.py
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix40.py
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix41.py
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix42.py
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix43.py
	rm -rf $(PYTHON_SITE_PACKAGES)/python/quickfix44.py
	ln -sf $(prefix)/lib/python/_quickfix.so $(PYTHON_SITE_PACKAGES)/_quickfix.so
	ln -sf $(prefix)/lib/python/_quickfix.dylib $(PYTHON_SITE_PACKAGES)/_quickfix.dylib
	cp $(top_builddir)/lib/python/*.py $(PYTHON_SITE_PACKAGES)

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
