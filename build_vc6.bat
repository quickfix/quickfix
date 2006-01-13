echo off
set COMMAND=%1
if "%1" == "" set COMMAND=BUILD
if "%2" == "" set PROFILE=Release

msdev quickfix_vs6.dsw /MAKE "at_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "atrun_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "pt_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "quickfix_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "ut_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "quickfix_jni_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit

pushd examples
msdev examples.dsw /MAKE "executor_cpp - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit

msdev examples.dsw /MAKE "ordermatch - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "ordermatch_ut - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "tradeclient - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
popd
:quit