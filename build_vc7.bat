echo off
set COMMAND=%1
if "%1" == "" set COMMAND=build

rem devenv quickfix.sln /%COMMAND% Debug
rem if ERRORLEVEL 1 goto quit

devenv quickfix.sln /%COMMAND% Release
if ERRORLEVEL 1 goto quit

rem devenv quickfix_jni.sln /%COMMAND% Debug
rem if ERRORLEVEL 1 goto quit

devenv quickfix_jni.sln /%COMMAND% Release
if ERRORLEVEL 1 goto quit

rem pushd examples
rem devenv examples.sln /%COMMAND% Debug
rem popd
rem if ERRORLEVEL 1 goto quit

pushd examples
devenv examples.sln /%COMMAND% Release
popd
if ERRORLEVEL 1 goto quit

:quit