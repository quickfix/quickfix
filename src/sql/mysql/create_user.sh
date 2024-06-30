#!/bin/sh

DB_USER=$1
DB_PASS=$2

echo Creating quickfix user
mysql -u${DB_USER} -p${DB_PASS} --execute="source user.sql";

