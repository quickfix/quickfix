USE quickfix;

DROP TABLE IF EXISTS sessions;

CREATE TABLE sessions (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  qualifier VATCHAR(64),
  creationtime DATETIME NOT NULL,
  incoming_seqnum INT NOT NULL, 
  outgoing_seqnum INT NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, qualifier)
);