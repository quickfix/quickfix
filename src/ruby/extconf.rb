require 'mkmf'
dir_config("quickfix", ["../..", "../../include", "../C++", "../swig"], "../../lib")
have_library("quickfix")

CONFIG["warnflags"].sub!('-Wdeprecated-declarations', '-Wno-deprecated-declarations -Wno-deprecated')
CONFIG["warnflags"].sub!('-Wall', '')
CONFIG["warnflags"].sub!('-Wextra', '')

if( ENV['CXX'] != nil )
  CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX']) 
  CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
end

additional_flags = ' -std=c++11 -Wno-deprecated-declarations -Wno-deprecated -Wno-maybe-uninitialized -Wno-unused-but-set-variable'
$CFLAGS << additional_flags
$CXXFLAGS << additional_flags

create_makefile("quickfix")
