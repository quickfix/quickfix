USE quickfix;

DROP TABLE IF EXISTS event_log;

CREATE TABLE event_log (
  id INT UNSIGNED NOT NULL AUTO_INCREMENT,
  time DATETIME NOT NULL,
  beginstring CHAR(8),
  sendercompid VARCHAR(64),
  targetcompid VARCHAR(64),
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);