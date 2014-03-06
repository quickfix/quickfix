echo off
if "%1" == "" goto usage
if "%2" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=debug\pt
goto start

:release
set DIR=release\pt
goto start

:start
%DIR%\pt.exe -p %2 -c 500000
goto quit

:usage
echo "Usage: runpt [release | debug] [port]"

:quit