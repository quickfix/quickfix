require 'mkmf'
have_library("quickfix")
dir_config("quickfix", "../../include", "../../lib")
CONFIG["CC"] = ENV['CXX']
CONFIG["LIBS"] += ENV['LIBS']
CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX'])
CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
create_makefile("quickfix")