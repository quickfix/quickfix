echo off
if "%1" == "" goto usage

if "%1" == "debug" goto debug
if "%1" == "release" goto release
goto usage

:debug
set DIR=debug\pt
goto start

:release
set DIR=release\pt
goto start

:start
set SPECPATH=%~dp0..\spec
%DIR%\pt.exe --quickfix-spec-path "%SPECPATH%" -# "~[network]" %2 %3 %4 %5
%DIR%\pt.exe --quickfix-spec-path "%SPECPATH%" -# "[network]" %2 %3 %4 %5
goto quit

:usage
echo Usage: runpt [release ^| debug] [catch2-options...]

:quit
