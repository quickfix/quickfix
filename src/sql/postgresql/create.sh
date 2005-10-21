dropdb -q quickfix
createdb quickfix
psql -d quickfix -f postgresql.sql
