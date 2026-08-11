call generate_c++

REM The generator runs much faster with jruby, so use it if possible.
jruby --version
if ERRORLEVEL 1 goto try_ruby_mri
 
jruby --server -I. Generator.rb
if ERRORLEVEL 1 exit 1
goto quit

REM Use MRI ruby if we do not have jruby
:try_ruby_mri
ruby -I. Generator.rb

:quit

