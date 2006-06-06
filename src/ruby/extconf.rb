require 'mkmf'
dir_config("quickfix", "../../include", "../../lib")
have_library("quickfix")
CONFIG["CC"] = ENV['CXX']
CONFIG["CXXFLAGS"] = ENV['CXXFLAGS']
CONFIG["LIBS"] += ENV['LIBS']
CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX'])
CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
create_makefile("quickfix")