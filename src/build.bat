rem set up classpath
set BUILD_CLASSPATH=..\lib\quickfix.jar

javac -classpath %BUILD_CLASSPATH% at_messagecracker.java at_application.java at.java
