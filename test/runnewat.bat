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
echo [DEFAULT] > cfg\at.cfg
echo ConnectionType=acceptor >> cfg\at.cfg
echo SocketAcceptPort=%2 >> cfg\at.cfg
echo StartTime=00:00:00 >> cfg\at.cfg
echo EndTime=00:00:00 >> cfg\at.cfg
echo ResetOnDisconnect=Y >> cfg\at.cfg
echo [SESSION] >> cfg\at.cfg
echo BeginString=FIX.4.2 >> cfg\at.cfg
echo SenderCompID=ISLD >> cfg\at.cfg
echo TargetCompID=TW >> cfg\at.cfg
echo DataDictionary=../spec/FIX42.xml >> cfg\at.cfg

atrun -t run -s "..\bin\at%EX%.exe -f cfg\at.cfg" -d . -c "ruby Runner.rb localhost %2 definitions\server\future\*.def" -i .
goto quit

:usage
echo "Usage: runfutureat [release | debug] [port]"

:quit