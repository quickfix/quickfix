require 'mkmf'
dir_config("quickfix", ["../..", "../../include", "../C++"], "../../lib")
have_library("quickfix")

CONFIG["warnflags"].sub!('-Wdeprecated-declarations', '-Wno-deprecated-declarations -Wno-deprecated')
CONFIG["warnflags"].sub!('-Wall', '')
CONFIG["warnflags"].sub!('-Wextra', '')

if( ENV['CXX'] != nil )
  CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX']) 
  CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
end

warning_flags = ' -Wno-deprecated-declarations -Wno-deprecated -Wno-maybe-uninitialized -Wno-unused-but-set-variable'
$CFLAGS << warning_flags 
$CXXFLAGS << warning_flags

create_makefile("quickfix")
