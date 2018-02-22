SET LIB_PATH=..\..\..\lib\jar

del /s/q logs

java -Djava.library.path=%LIB_PATH% -classpath %LIB_PATH%\junit.jar;%LIB_PATH%\log4j.jar;%LIB_PATH%\quickfixj-all-1.4.0.jar;%LIB_PATH%\slf4j-api-1.5.3.jar;%LIB_PATH%\slf4j-jdk14-1.5.3.jar;%LIB_PATH%\mina-core-1.0.3.jar;%LIB_PATH%\backport-util-concurrent-3.0.jar;.\build;. junit.textui.TestRunner %1

