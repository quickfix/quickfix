#!/bin/bash -l

source $(dirname $0)/env.rc

set -ex

echo "postgres setup"
psql --version 
sudo localedef -i en_US -f UTF-8 en_US.UTF-8 
sudo service postgresql start || /bin/true
sudo service postgresql stop || /bin/true
sudo find /etc/postgresql/ -name "pg_hba.conf" -exec /usr/bin/perl -p -i -e 's/ident/trust/g' {} \;
sudo find /etc/postgresql/ -name "pg_hba.conf" -exec cat {} \; 
sudo service postgresql start

echo "mysql setup"
sudo service mysql start || /bin/true

echo "set mysql and postgres passwords"
sudo netstat -ltpn
sudo mysqladmin -u root password password || /bin/true
echo "ALTER USER postgres WITH PASSWORD 'password'" | sudo -u postgres -i psql

echo "create mysql db and tables"
pushd src/sql/mysql
  ./create.sh root password
popd

echo "create postgres db and tables"
pushd src/sql/postgresql
  mkdir -p /tmp/quickfix-postgres
  cp * /tmp/quickfix-postgres/
  sudo chown -R postgres /tmp/quickfix-postgres/
  pushd /tmp/quickfix-postgres/
     sudo -u postgres ./create.sh postgres
  popd
popd

