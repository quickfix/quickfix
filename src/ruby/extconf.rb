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

RbConfig::MAKEFILE_CONFIG['CXX'] = ENV['CXX'] if ENV['CXX']

additional_flags = ' -Wno-deprecated-declarations -Wno-deprecated -Wno-uninitialized -Wno-unused-but-set-variable -Wno-inconsistent-missing-override -Wno-register'
$CFLAGS << additional_flags
$CXXFLAGS << additional_flags

create_makefile("quickfix")
