echo off
set COMMAND=%1
set PROFILE=%2
if "%1" == "" set COMMAND=BUILD
if "%2" == "" set PROFILE=Release

msdev quickfix_vs6.dsw /MAKE "test_acceptance_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "test_acceptance_runner_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "test_performance_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "quickfix_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "test_unit_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "quickfix_jni_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "example_executor_cpp_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "example_ordermatch_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_vs6.dsw /MAKE "example_tradeclient_vs6 - Win32 %PROFILE%" /%COMMAND%
if ERRORLEVEL 1 goto quit
popd
:quit