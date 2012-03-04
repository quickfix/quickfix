CREATE TABLE sessions (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64) NOT NULL,
  creation_time TIMESTAMP NOT NULL,
  incoming_seqnum INTEGER NOT NULL, 
  outgoing_seqnum INTEGER NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, session_qualifier)
);
