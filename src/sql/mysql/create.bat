echo Creating database
mysql -u %1 -p --execute="source quickfix_database.sql";
