CREATE SEQUENCE messages_log_sequence;

CREATE TABLE incoming_log (
  id INTEGER DEFAULT NEXTVAL('messages_log_sequence'),
  time TIMESTAMP NOT NULL,
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  text TEXT NOT NULL,
  PRIMARY KEY (id)
);