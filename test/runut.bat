
echo off
if "%1" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=debug\ut
goto start

:release
set DIR=release\ut
goto start

:start
%DIR%\ut.exe --quickfix-config-file cfg\ut.cfg --quickfix-spec-path ..\spec
goto quit

:usage
echo "Usage: runut [release | debug]"

:quit