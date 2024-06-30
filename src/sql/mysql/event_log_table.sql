USE quickfix;

DROP TABLE IF EXISTS event_log;

CREATE TABLE event_log (
  id BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
  time DATETIME NOT NULL,
  time_milliseconds INT NOT NULL,
  beginstring CHAR(8),
  sendercompid VARCHAR(64),
  targetcompid VARCHAR(64),
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);

DROP TABLE IF EXISTS event_backup_log;

CREATE TABLE event_backup_log (
  id BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
  time DATETIME NOT NULL,
  time_milliseconds INT NOT NULL,
  beginstring CHAR(8),
  sendercompid VARCHAR(64),
  targetcompid VARCHAR(64),
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);
