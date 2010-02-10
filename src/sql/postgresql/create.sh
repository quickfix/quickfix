dropdb -U $1 -W quickfix
createdb -U $1 -W quickfix
psql -U $1 -W -d quickfix -f postgresql.sql
