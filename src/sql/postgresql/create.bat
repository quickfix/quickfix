echo Dropping database
dropdb -U %1 quickfix

echo Creating database
createdb -U %1 quickfix

echo Creating database tables
psql -U %1 -d quickfix -f postgresql.sql
