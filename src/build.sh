#!/bin/bash
WHICH_JAVA=$(which java)
if [ $? != 0 ] ; then
    exit 0
fi

# set up classpath
BUILD_CLASSPATH=../lib/ant.jar:../lib/optional.jar:../lib/junit.jar:../lib/crimson.jar:$JAVA_HOME/lib/tools.jar

# call ant
java -cp $BUILD_CLASSPATH org.apache.tools.ant.Main $1
