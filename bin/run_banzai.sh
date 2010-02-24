#!/bin/sh
JAR=../lib/jar
RUN_CLASSPATH=$JAR/banzai.jar:$JAR/quickfixj-all-1.4.0.jar:$JAR/slf4j-api-1.5.3.jar:$JAR/slf4j-jdk14-1.5.3.jar:$JAR/mina-core-1.0.3.jar:$JAR/backport-util-concurrent-3.0.jar:$JAR/log4j.jar

java -cp $RUN_CLASSPATH Banzai