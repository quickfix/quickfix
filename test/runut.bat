echo off
if "%1" == "" goto usage
if "%2" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=bin\debug
goto start
:release
set DIR=bin
goto start

:start
pushd ..
%DIR%\ut.exe -p %2
popd
goto quit

:usage
echo "Usage: runall [release | debug] [port]"

:quit