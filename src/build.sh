#!/bin/bash
WHICH_JAVAC=$(which javac)
if [ $? != 0 ] ; then
    exit 0
fi

# set up classpath
BUILD_CLASSPATH=../lib/quickfix.jar

javac -classpath $BUILD_CLASSPATH at_messagecracker.java at_application.java at.java
