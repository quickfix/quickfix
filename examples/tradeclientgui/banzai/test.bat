SET LIB_PATH=..\..\..\lib

del /s/q logs

java -Djava.library.path=%LIB_PATH% -classpath %LIB_PATH%\junit.jar;%LIB_PATH%\log4j.jar;%LIB_PATH%\quickfix.jar;.\build;. junit.textui.TestRunner %1

