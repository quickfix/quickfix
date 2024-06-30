DROP DATABASE IF EXISTS quickfix;
CREATE DATABASE quickfix;

source sessions_table.sql;
source messages_table.sql;
source messages_log_table.sql;
source event_log_table.sql;