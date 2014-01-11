#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

echo "installing deps"
sudo apt-get -y install g++ automake libtool libxml2 libxml2-dev xsltproc jruby ruby ruby-dev libmysqlclient-dev libpq-dev mysql-server postgresql
sudo dpkg --list | egrep -i "mysql|pgsql|pq|postgres|ruby|java|xslt"

