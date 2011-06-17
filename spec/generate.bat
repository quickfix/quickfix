call generate_c++
call generate_net
call generate_java

REM The generator runs much faster with jruby, so use it if possible.
jruby -h
if ERRORLEVEL 1 goto try_ruby_mri
 
jruby --server Generator.rb
if ERRORLEVEL 1 exit 1
goto quit

REM Use MRI ruby if we do not have jruby
:try_ruby_mri
ruby Generator.rb

:quit

