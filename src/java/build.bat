@setlocal

REM set up classpath
set CLASSPATH=../../lib/ant.jar;../../lib/optional.jar;../../lib/junit.jar;../../lib/crimson.jar;%JAVA_HOME%/lib/tools.jar

REM call ant
java org.apache.tools.ant.Main %*

@endlocal