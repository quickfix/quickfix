#!/bin/sh

PORT=$1

cat > cfg/at.cfg <<EOF
[DEFAULT]
ConnectionType=acceptor
SocketAcceptPort=$PORT
SocketReuseAddress=Y
StartTime=00:00:00
EndTime=00:00:00
SenderCompID=ISLD
TargetCompID=TW
ResetOnLogon=Y
FileStorePath=store
[SESSION]
BeginString=FIX.4.0
DataDictionary=../spec/FIX40.xml
[SESSION]
BeginString=FIX.4.1
DataDictionary=../spec/FIX41.xml
[SESSION]
BeginString=FIX.4.2
DataDictionary=../spec/FIX42.xml
[SESSION]
BeginString=FIX.4.3
DataDictionary=../spec/FIX43.xml
[SESSION]
BeginString=FIX.4.4
DataDictionary=../spec/FIX44.xml
[SESSION]
BeginString=FIXT.1.1
DefaultApplVerID=FIX.5.0
TransportDataDictionary=../spec/FIXT11.xml
AppDataDictionary=../spec/FIX50.xml
AppDataDictionary.FIX.5.0SP1=../spec/FIX50SP1.xml
AppDataDictionary.FIX.5.0SP2=../spec/FIX50SP2.xml
EOF
