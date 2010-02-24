@setlocal

REM set up classpath
set JAR=../lib/jar
set CLASSPATH=%JAR%/ant.jar;%JAR%/optional.jar;%JAR%/junit.jar;%JAR%/crimson.jar;%JAVA_HOME%/lib/tools.jar

REM call ant
java org.apache.tools.ant.Main %*

@endlocal