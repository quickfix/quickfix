pkgdata_DATA = quickfix_ruby.rb quickfix_fields.rb quickfix40.rb quickfix41.rb quickfix42.rb quickfix43.rb quickfix44.rb quickfix50.rb quickfix50sp1.rb quickfix50sp2.rb quickfixt11.rb

all-local:
	bash ./make_ruby.sh $(CXX) $(CXXFLAGS) $(LIBS)
	mkdir -p $(top_builddir)/lib/ruby
	ln -sf ../../src/ruby/quickfix_ruby.rb $(top_builddir)/lib/ruby/quickfix_ruby.rb
	ln -sf ../../src/ruby/quickfix_fields.rb $(top_builddir)/lib/ruby/quickfix_fields.rb
	ln -sf ../../src/ruby/quickfix40.rb $(top_builddir)/lib/ruby/quickfix40.rb
	ln -sf ../../src/ruby/quickfix41.rb $(top_builddir)/lib/ruby/quickfix41.rb
	ln -sf ../../src/ruby/quickfix42.rb $(top_builddir)/lib/ruby/quickfix42.rb
	ln -sf ../../src/ruby/quickfix43.rb $(top_builddir)/lib/ruby/quickfix43.rb
	ln -sf ../../src/ruby/quickfix44.rb $(top_builddir)/lib/ruby/quickfix44.rb
	ln -sf ../../src/ruby/quickfix50.rb $(top_builddir)/lib/ruby/quickfix50.rb
	ln -sf ../../src/ruby/quickfix50sp1.rb $(top_builddir)/lib/ruby/quickfix50sp1.rb
	ln -sf ../../src/ruby/quickfix50sp2.rb $(top_builddir)/lib/ruby/quickfix50sp2.rb
	ln -sf ../../src/ruby/quickfixt11.rb $(top_builddir)/lib/ruby/quickfixt11.rb
	ln -sf ../../src/ruby/quickfix.so $(top_builddir)/lib/ruby/quickfix.so
	ln -sf ../../src/ruby/quickfix.bundle $(top_builddir)/lib/ruby/quickfix.bundle

	bash ./link.sh $(top_builddir)/lib/ruby quickfix.so quickfix.bundle

clean-local:
	make -f Makefile.ruby clean
	rm -rf $(top_builddir)/lib/ruby

install-exec-local:
	cp -f $(top_builddir)/lib/ruby/*.rb $(RUBY_SITE_PACKAGES)
	cp -f $(top_builddir)/lib/ruby/quickfix.so $(RUBY_SITE_PACKAGES)
	cp -f $(top_builddir)/lib/ruby/quickfix.bundle $(RUBY_SITE_PACKAGES)

uninstall-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix*.rb
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix*.so
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.bundle

