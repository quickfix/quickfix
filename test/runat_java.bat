echo off
if "%1" == "" goto usage

call setup.bat %1
atrun -t run -s "java -Djava.library.path=..\lib -classpath ..\lib\quickfix.jar;..\lib\at.jar at -f cfg\at.cfg" -d . -c "ruby Runner.rb 127.0.0.1 %1 definitions\server\fix40\*.def definitions\server\fix41\*.def definitions\server\fix42\*.def definitions\server\fix43\*.def" -i .\

goto quit

:usage
echo "Usage: runat [port]"

:quit