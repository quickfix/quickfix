/usr/local/pgsql/bin/dropdb -q quickfix
/usr/local/pgsql/bin/createdb quickfix
/usr/local/pgsql/bin/psql -d quickfix -f event_log_table.sql
/usr/local/pgsql/bin/psql -d quickfix -f incoming_log_table.sql
/usr/local/pgsql/bin/psql -d quickfix -f outgoing_log_table.sql
/usr/local/pgsql/bin/psql -d quickfix -f messages_table.sql
/usr/local/pgsql/bin/psql -d quickfix -f sessions_table.sql
