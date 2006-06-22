echo off
if "%1" == "" goto usage
if "%2" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=..\bin\debug\ut
goto start

:release
set DIR=..\bin\release\ut
goto start

:start
%DIR%\ut.exe -p %2 -f ..\test\cfg\ut.cfg
goto quit

:usage
echo "Usage: runut [release | debug] [port]"

:quit