echo off
set COMMAND=%1
if "%1" == "" set COMMAND=BUILD

msdev quickfix.dsw /MAKE "at - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "at - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "atrun - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "atrun - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "pt - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "pt - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "quickfix - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "quickfix - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "ut - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix.dsw /MAKE "ut - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_jni.dsw /MAKE "quickfix_jni - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev quickfix_jni.dsw /MAKE "quickfix_jni - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit

pushd examples
msdev examples.dsw /MAKE "ordermatch - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "ordermatch - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "ordermatch_ut - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "ordermatch_ut - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "tradeclient - Win32 Debug" /%COMMAND%
if ERRORLEVEL 1 goto quit
msdev examples.dsw /MAKE "tradeclient - Win32 Release" /%COMMAND%
if ERRORLEVEL 1 goto quit
popd

:quit