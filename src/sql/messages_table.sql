USE quickfix;

DROP TABLE IF EXISTS messages;

CREATE TABLE messages (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  msgseqnum INT NOT NULL, 
  message BLOB NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, msgseqnum)
);