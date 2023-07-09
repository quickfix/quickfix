echo off

set TARGET=%1
set CONFIGURATION=%2
set NET_VERSION=%3

if "%1" == "" set TARGET=Build
if "%2" == "" set CONFIGURATION=Release

set BUILD_CMD=MSBuild.exe quickfix_vs16.sln /t:%TARGET% /p:Configuration=%CONFIGURATION%
echo Build command: %BUILD_CMD%
%BUILD_CMD%