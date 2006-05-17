lib_LTLIBRARIES = libquickfix_ruby.la
libquickfix_ruby_la_SOURCES = \
	QuickfixRuby.cpp

all-local:
	rm -rf $(top_builddir)/lib/libquickfix_ruby.a
	rm -rf $(top_builddir)/lib/libquickfix_ruby.la
	rm -rf $(top_builddir)/lib/libquickfix_ruby.so
	rm -rf $(top_builddir)/lib/libquickfix_ruby.dylib
	rm -rf $(top_builddir)/lib/quickfix.so
	rm -rf $(top_builddir)/lib/quickfix.dylib
	rm -rf $(top_builddir)/lib/quickfix.py
	rm -rf $(top_builddir)/lib/quickfix40.py
	rm -rf $(top_builddir)/lib/quickfix41.py
	rm -rf $(top_builddir)/lib/quickfix42.py
	rm -rf $(top_builddir)/lib/quickfix43.py
	rm -rf $(top_builddir)/lib/quickfix44.py
	ln -s ../src/ruby/.libs/libquickfix_ruby.a $(top_builddir)/lib/libquickfix_ruby.a
	ln -s ../src/ruby/.libs/libquickfix_ruby.la $(top_builddir)/lib/libquickfix_ruby.la
	ln -s ../src/ruby/.libs/libquickfix_ruby.so $(top_builddir)/lib/libquickfix_ruby.so
	ln -s ../src/ruby/.libs/libquickfix_ruby.dylib $(top_builddir)/lib/libquickfix_ruby.dylib
	ln -s ../src/ruby/quickfix.py $(top_builddir)/lib/quickfix.py
	ln -s ../src/ruby/quickfix40.py $(top_builddir)/lib/quickfix40.py
	ln -s ../src/ruby/quickfix41.py $(top_builddir)/lib/quickfix41.py
	ln -s ../src/ruby/quickfix42.py $(top_builddir)/lib/quickfix42.py
	ln -s ../src/ruby/quickfix43.py $(top_builddir)/lib/quickfix43.py
	ln -s ../src/ruby/quickfix44.py $(top_builddir)/lib/quickfix44.py
	ln -s libquickfix_ruby.so $(top_builddir)/lib/quickfix.so
	ln -s libquickfix_ruby.dylib $(top_builddir)/lib/quickfix.dylib

	bash ./link.sh $(top_builddir)/lib quickfix.so quickfix.dylib

clean-local:
	rm -rf $(top_builddir)/lib/libquickfix_ruby.a
	rm -rf $(top_builddir)/lib/libquickfix_ruby.la
	rm -rf $(top_builddir)/lib/libquickfix_ruby.so
	rm -rf $(top_builddir)/lib/libquickfix_ruby.dylib
	rm -rf $(top_builddir)/lib/quickfix.so
	rm -rf $(top_builddir)/lib/quickfix.dylib
	rm -rf $(top_builddir)/lib/libquickfix_ruby.a
	rm -rf $(top_builddir)/lib/libquickfix_ruby.la

install-exec-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.so
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.dylib
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix40.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix41.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix42.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix43.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix44.py
	ln -s $(prefix)/lib/libquickfix_ruby.so $(RUBY_SITE_PACKAGES)/quickfix.so
	ln -s $(prefix)/lib/libquickfix_ruby.dylib $(RUBY_SITE_PACKAGES)/quickfix.dylib
	cp $(top_builddir)/lib/*.py $(RUBY_SITE_PACKAGES)

uninstall-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.so
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.dylib
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix40.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix41.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix42.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix43.py
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix44.py

libquickfix_ruby_la_LDFLAGS = -version-info 4:1:0
libquickfix_ruby_la_LIBADD = $(top_builddir)/src/C++/libquickfix.la 

INCLUDES =-I. -I.. -I../..
