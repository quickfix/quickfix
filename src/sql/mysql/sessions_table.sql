USE quickfix;

DROP TABLE IF EXISTS sessions;

CREATE TABLE sessions (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64) NOT NULL,
  creation_time DATETIME NOT NULL,
  incoming_seqnum INT NOT NULL, 
  outgoing_seqnum INT NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, session_qualifier)
);
