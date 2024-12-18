CREATE TABLE messages (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64) NOT NULL,
  msgseqnum NUMERIC NOT NULL, 
  message TEXT NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, session_qualifier, msgseqnum)
);
