BUILDING AND INSTALLING

    Full instructions:
        See doc/html/building.html

    Quick instructions:
        ./bootstrap
        ./configure
        make
        make check
        sudo make install

SYSTEM REQUIREMENTS

    REDHAT/CENTOS 5.x

        Required: sudo yum install gcc-c++ automake autoconf libtool libxml2 libxml2-devel
        Optional: sudo yum install postgresql-devel ruby-devel postgresql-server mysql-server mysql-client mysql-devel libxslt

    UBUNTU

        Required: sudo apt-get install g++ automake libtool libxml2 libxml2-dev
        Optional: sudo apt-get install ruby ruby-dev libmysqlclient-dev libpq-dev mysql-server postgresql xsltproc

