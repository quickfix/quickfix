echo off
if "%1" == "" goto usage
if "%2" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set EX=_debug
goto start
:release
set EX=
goto start

:start
call setup.bat %2

atrun -t run -s "..\%DIR%\at.exe -f cfg\at.cfg" -d . -c "ruby Runner.rb localhost %2 definitions\server\future\*.def" -i .\
goto quit
:usage
echo "Usage: runnewat [release | debug] [port]"
:quit