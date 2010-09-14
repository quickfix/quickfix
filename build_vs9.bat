echo off
set COMMAND=%1

set PROFILE=%2

set VSPATH=%3

if "%1" == "" set COMMAND=build

if "%2" == "" set PROFILE=Release

devenv quickfix_vs9.sln /%COMMAND% %PROFILE%

if ERRORLEVEL 1 goto quit

:quit
