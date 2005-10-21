dropdb -U postgres -q quickfix
createdb -U postgres quickfix
psql -U postgres -d quickfix -f postgresql.sql
