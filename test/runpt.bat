echo off
if "%1" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=bin\debug\pt
goto start
:release
set DIR=bin\release\pt
goto start

:start
pushd ..\bin
%DIR%\pt.exe -c 50000
popd
goto quit

:usage
echo "Usage: runut [release | debug]"

:quit