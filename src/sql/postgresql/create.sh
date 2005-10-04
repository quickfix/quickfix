dropdb -q quickfix
createdb quickfix
psql -d quickfix -f event_log_table.sql
psql -d quickfix -f incoming_log_table.sql
psql -d quickfix -f outgoing_log_table.sql
psql -d quickfix -f messages_table.sql
psql -d quickfix -f sessions_table.sql
