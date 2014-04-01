echo off

set TARGET=%1
set CONFIGURATION=%2
set NET_VERSION=%3

if "%1" == "" set TARGET=Build
if "%2" == "" set CONFIGURATION=Release
if "%3" == "" set NET_VERSION=v4.5

set BUILD_CMD=MSBuild.exe quickfix_vs12.sln /t:%TARGET% /p:Configuration=%CONFIGURATION%;TargetFrameworkVersion=%NET_VERSION%
echo Build command: %BUILD_CMD%
%BUILD_CMD%