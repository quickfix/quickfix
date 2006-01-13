echo off
set COMMAND=%1
set PROFILE=%2
if "%1" == "" set COMMAND=build
if "%2" == "" set PROFILE=Release
devenv quickfix_vs7.sln /%COMMAND% %PROFILE%
if ERRORLEVEL 1 goto quit
:quit