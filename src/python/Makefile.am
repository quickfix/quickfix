pythondir = $(PYTHON_SITE_PACKAGES)
python_LTLIBRARIES = _quickfix.la
_quickfix_la_SOURCES = \
	QuickfixPython.cpp

python_DATA = quickfix.py quickfix40.py quickfix41.py quickfix42.py quickfix43.py quickfix44.py quickfix50.py quickfix50sp1.py quickfix50sp2.py quickfixt11.py

_quickfix_la_LDFLAGS = -version-info 12:0:0 -module
_quickfix_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES =-I. -I.. -I../.. -I../C++

local_python_src=$(top_builddir)/src/python
local_python_lib=$(top_builddir)/lib/python

all-local: $(python_LTLIBRARIES)
	rm -rf $(local_python_lib)
	mkdir -p $(local_python_lib)
	ln -sf $(local_python_src)/.libs/_quickfix* $(local_python_lib)
	ln -sf $(local_python_src)/*.py $(local_python_lib)
	ln -sf $(top_builddir)/spec spec

clean-local:
	rm -rf $(local_python_lib)
