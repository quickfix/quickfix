echo off
set COMMAND=%1

pushd src\java
call build.bat %COMMAND%
popd
if ERRORLEVEL 1 goto quit

pushd examples\executor\java
call build.bat %COMMAND%
popd
if ERRORLEVEL 1 goto quit

pushd examples\tradeclientgui\banzai
call build.bat %COMMAND%
popd
if ERRORLEVEL 1 goto quit

:quit
