echo off
set COMMAND=%1
if "%1" == "" set COMMAND=build

devenv quickfix.sln /%COMMAND% Debug
if ERRORLEVEL 1 goto quit

devenv quickfix.sln /%COMMAND% Release
if ERRORLEVEL 1 goto quit

pushd examples
devenv examples.sln /%COMMAND% Debug
popd
if ERRORLEVEL 1 goto quit

pushd examples
devenv examples.sln /%COMMAND% Release
popd
if ERRORLEVEL 1 goto quit

pushd src\java
devenv quickfix_jni.sln /%COMMAND% Debug
popd
if ERRORLEVEL 1 goto quit

pushd src\java
devenv quickfix_jni.sln /%COMMAND% Release
popd
if ERRORLEVEL 1 goto quit

:quit