echo off

set DIR=../src/java
goto start

:start
pushd %DIR%
runut_java
popd
goto quit

:quit