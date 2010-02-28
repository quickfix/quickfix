echo off
set COMMAND=%1

pushd examples\tradeclientgui\banzai
call build.bat %COMMAND%
popd
if ERRORLEVEL 1 goto quit

:quit
