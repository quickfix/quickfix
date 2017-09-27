## System Requirements
#### REDHAT/CENTOS 5.x

    Required: sudo yum install gcc-c++ automake autoconf libtool libxml2 libxml2-devel
    Optional: sudo yum install postgresql-devel ruby-devel postgresql-server mysql-server mysql-client mysql-devel libxslt

#### UBUNTU

    Required: sudo apt-get install g++ automake libtool libxml2 libxml2-dev
    Optional: sudo apt-get install ruby ruby-dev libmysqlclient-dev libpq-dev mysql-server postgresql xsltproc

#### MACOS
    Required: automake, libtool, autoconf
    Use brew install

## Setting up Database
`cd quickfix/src/sql/postgresql`

`./create.sh eshares`

- **eshares** is the username for the database
- A database called **quickfix** with the tables will now be created

## Building and Installing
`./bootstrap`

`./configure --prefix=/Users/master/.pyenv/versions/fix --with-postgresql --with-python`

- **IMPORTANT**: Replace the above --prefix with your path to your virtualenv. In this example, the virtualenv under pyenv is named "fix"
- *--with-postgresql* and *--with-python*, compiles it with the postgresql libraries and into python

`make`

`make install`

## Other Notes
When modifying swig file, see /src/python/swig.sh as the script to run to recompile before running the build and install again
