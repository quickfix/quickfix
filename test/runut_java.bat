echo off

set DIR=..\src\java
goto start

:start
pushd %DIR%
call test.bat quickfix.test.AllTests
popd
goto quit

:quit