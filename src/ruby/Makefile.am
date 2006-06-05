pkgdata_DATA = quickfix40.rb quickfix41.rb quickfix42.rb quickfix43.rb quickfix44.rb

all-local:
	bash ./make_ruby.sh $(CXX) $(CXXFLAGS) $(LIBS)
	rm -rf $(top_builddir)/lib/quickfix40.rb
	rm -rf $(top_builddir)/lib/quickfix41.rb
	rm -rf $(top_builddir)/lib/quickfix42.rb
	rm -rf $(top_builddir)/lib/quickfix43.rb
	rm -rf $(top_builddir)/lib/quickfix44.rb
	rm -rf $(top_builddir)/lib/quickfix.so
	rm -rf $(top_builddir)/lib/quickfix.bundle
	ln -s ../src/ruby/quickfix40.rb $(top_builddir)/lib/quickfix40.rb
	ln -s ../src/ruby/quickfix41.rb $(top_builddir)/lib/quickfix41.rb
	ln -s ../src/ruby/quickfix42.rb $(top_builddir)/lib/quickfix42.rb
	ln -s ../src/ruby/quickfix43.rb $(top_builddir)/lib/quickfix43.rb
	ln -s ../src/ruby/quickfix44.rb $(top_builddir)/lib/quickfix44.rb
	ln -s ../src/ruby/quickfix.so $(top_builddir)/lib/quickfix.so
	ln -s ../src/ruby/quickfix.bundle $(top_builddir)/lib/quickfix.bundle

	bash ./link.sh $(top_builddir)/lib quickfix.so quickfix.bundle

clean-local:
	make -f Makefile.ruby clean

install-exec-local:
	cp -f $(top_builddir)/lib/*.rb $(RUBY_SITE_PACKAGES)
	cp -f $(top_builddir)/lib/quickfix.bundle $(RUBY_SITE_PACKAGES)

uninstall-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.bundle

