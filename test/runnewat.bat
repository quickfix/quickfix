echo off
if "%1" == "" goto usage
if "%2" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set EX=_debug
goto start
:release
set EX=
goto start

:start
echo [DEFAULT] > cfg\at_server.cfg
echo ConnectionType=acceptor >> cfg\at_server.cfg
echo SocketAcceptPort=%2 >> cfg\at_server.cfg
echo StartTime=00:00:00 >> cfg\at_server.cfg
echo EndTime=00:00:00 >> cfg\at_server.cfg
echo ResetOnDisconnect=Y >> cfg\at_server.cfg
echo [SESSION] >> cfg\at_server.cfg
echo BeginString=FIX.4.2 >> cfg\at_server.cfg
echo SenderCompID=ISLD >> cfg\at_server.cfg
echo TargetCompID=TW >> cfg\at_server.cfg
echo DataDictionary=../spec/FIX42.xml >> cfg\at_server.cfg

atrun -t run -s "..\bin\at_server%EX%.exe -f cfg\at_server.cfg" -d . -c "ruby Runner.rb localhost %2 definitions\server\future\*.def" -i .
goto quit

:usage
echo "Usage: runfutureat [release | debug] [port]"

:quit