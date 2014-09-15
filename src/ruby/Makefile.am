pkgdata_DATA = quickfix_ruby.rb quickfix_fields.rb quickfix40.rb quickfix41.rb quickfix42.rb quickfix43.rb quickfix44.rb quickfix50.rb quickfix50sp1.rb quickfix50sp2.rb quickfixt11.rb

INCLUDES =-I. -I.. -I../.. -I../C++

local_ruby_src=$(top_builddir)/src/ruby
local_ruby_lib=$(top_builddir)/lib/ruby

all-local:
	mkdir -p $(local_ruby_lib)
	bash ./make_ruby.sh "$(CXX)" "$(CXXFLAGS)" "$(LIBS)"
	ln -sf $(local_ruby_src)/quickfix* $(local_ruby_lib)
	ln -sf $(top_builddir)/spec spec

clean-local:
	make -f Makefile.ruby clean
	rm -rf $(local_ruby_lib)

install-exec-local:
	cp -f $(top_builddir)/lib/ruby/*.rb $(RUBY_SITE_PACKAGES)
	cp -f $(top_builddir)/lib/ruby/quickfix.so $(RUBY_SITE_PACKAGES) || :
	cp -f $(top_builddir)/lib/ruby/quickfix.bundle $(RUBY_SITE_PACKAGES) || :

uninstall-local:
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix*.rb
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix*.so
	rm -rf $(RUBY_SITE_PACKAGES)/quickfix.bundle

