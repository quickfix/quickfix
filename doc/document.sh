#!/bin/bash
WHICH_JAVADOC=$(which javadoc)
if [ $? == 0 ] ; then
    javadoc -D doc/html/javadoc ../src/java/src/quickfix/*.java
fi

WHICH_DOXYGEN=$(which doxygen)
if [ $? == 0 ] ; then
    doxygen
fi
