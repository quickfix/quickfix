#!/bin/sh

LOG_TAG="[MYSQL_DB_CREATE]"
STATUS_SUCCESS="[SUCCESS]"
STATUS_ERROR="[ERROR]"
EXIT_ERROR=1
EXIT_SUCCESS=0

# Check usage
if [ "$#" -ne 2 ]; then
  echo "$LOG_TAG $STATUS_ERROR : Illegal number of parameters"
  echo "Usage: $0 <mysql username> <mysql password>"
  exit EXIT_ERROR
fi

DB_USER=$1
DB_PASS=$2

echo Creating database
mysql -u${DB_USER} -p${DB_PASS} --execute="source mysql.sql";
exit EXIT_SUCCESS
