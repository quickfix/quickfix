pkgdata_DATA = quickfix_ruby.rb quickfix40.rb quickfix41.rb quickfix42.rb quickfix43.rb quickfix44.rb

all-local:
	bash ./make_ruby.sh $(CXX) $(CXXFLAGS) $(LIBS)
	rm -rf $(top_builddir)/lib/ruby
	mkdir $(top_builddir)/lib/ruby
	ln -s ../../src/ruby/quickfix_ruby.rb $(top_builddir)/lib/ruby/quickfix_ruby.rb
	ln -s ../../src/ruby/quickfix40.rb $(top_builddir)/lib/ruby/quickfix40.rb
	ln -s ../../src/ruby/quickfix41.rb $(top_builddir)/lib/ruby/quickfix41.rb
	ln -s ../../src/ruby/quickfix42.rb $(top_builddir)/lib/ruby/quickfix42.rb
	ln -s ../../src/ruby/quickfix43.rb $(top_builddir)/lib/ruby/quickfix43.rb
	ln -s ../../src/ruby/quickfix44.rb $(top_builddir)/lib/ruby/quickfix44.rb
	ln -s ../../src/ruby/quickfix.so $(top_builddir)/lib/ruby/quickfix.so
	ln -s ../../src/ruby/quickfix.bundle $(top_builddir)/lib/ruby/quickfix.bundle

	bash ./link.sh $(top_builddir)/lib/ruby quickfix.so quickfix.bundle

clean-local:
	make -f Makefile.ruby clean

install-exec-local:
	cp -f $(top_builddir)/lib/ruby/*.rb $(RUBY_SITE_PACKAGES)
	cp -f $(top_builddir)/lib/ruby/quickfix.bundle $(RUBY_SITE_PACKAGES)

uninstall-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix*.rb
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.bundle

