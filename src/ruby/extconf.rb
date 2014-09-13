require 'mkmf'
dir_config("quickfix", ["../..", "../../include", "../C++"], "../../lib")
have_library("quickfix")
CONFIG["CC"] = ENV['CXX']
CONFIG["CXXFLAGS"] = ENV['CXXFLAGS']
CONFIG["LIBS"] += ENV['LIBS'] if ENV['LIBS'] != nil

if( ENV['CXX'] != nil )
  CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX']) 
  CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
end

create_makefile("quickfix")
