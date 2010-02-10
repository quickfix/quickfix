echo off
set COMMAND=%1
set PROFILE=%2
set VSPATH=%3
if "%1" == "" set COMMAND=build
if "%2" == "" set PROFILE=Release
if "%3" == "" set VSPATH=C:\Program Files\Microsoft Visual Studio 10.0\Common7\IDE\
"%VSPATH%devenv" quickfix_vs10.sln /%COMMAND% %PROFILE%
if ERRORLEVEL 1 goto quit
:quit
