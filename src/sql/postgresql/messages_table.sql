CREATE TABLE messages (
  id SERIAL PRIMARY KEY,
  created_at timestamp default now(),
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64) NOT NULL,
  msgseqnum INTEGER NOT NULL,
  message TEXT NOT NULL,
  UNIQUE (created_at, sendercompid, targetcompid, session_qualifier, msgseqnum)
);
