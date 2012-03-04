echo Dropping database
dropdb -U $1 -W quickfix

echo Creating database
createdb -U $1 -W quickfix

echo Creating database tables
psql -U $1 -W -d quickfix -f postgresql.sql
