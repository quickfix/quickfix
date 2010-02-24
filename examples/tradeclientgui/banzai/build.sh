#!/bin/bash
WHICH_JAVA=$(which java)
if [ $? != 0 ] ; then
    exit 0
fi

# set up classpath
JAR=../../../lib/jar
BUILD_CLASSPATH=$JAR/ant.jar:$JAR/lib/optional.jar:$JAR/lib/junit.jar:$JAR/lib/crimson.jar:$JAVA_HOME/lib/tools.jar

# call ant
java -cp $BUILD_CLASSPATH org.apache.tools.ant.Main $1