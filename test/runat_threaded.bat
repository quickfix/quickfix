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
call setup.bat %2

atrun -t run -s "..\%DIR%\at.exe -f cfg\at.cfg -t" -d . -c "ruby Runner.rb 127.0.0.1 %2 definitions\server\fix40\*.def definitions\server\fix41\*.def definitions\server\fix42\*.def definitions\server\fix43\*.def definitions\server\fix44\*.def" -i .\

goto quit

:usage
echo "Usage: runat [release | debug] [port]"

:quit