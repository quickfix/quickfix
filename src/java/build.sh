if [ $(whoami) = "root"  ] ; then
    exit 0
fi

WHICH_JAVA=$(which java)
if [ $? != 0 ] ; then
    exit 0
fi

# set up classpath
CLASSPATH=../../lib/ant.jar:../../lib/optional.jar:../../lib/junit.jar:../../lib/crimson.jar:$JAVA_HOME/lib/tools.jar

# call ant
#java org.apache.tools.ant.Main $1

exit 0