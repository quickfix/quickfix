DROP TABLE sessions;
CREATE TABLE sessions (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  creation_time TIMESTAMP NOT NULL,
  incoming_seqnum INT NOT NULL,
  outgoing_seqnum INT NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid)
);

DROP TABLE messages;
CREATE TABLE messages (
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  msgseqnum INT NOT NULL,
  message BLOB NOT NULL,
  PRIMARY KEY (beginstring, sendercompid, targetcompid, msgseqnum)
);

DROP TABLE event_log;
CREATE TABLE event_log (
  id INT NOT NULL,
  time TIMESTAMP NOT NULL,
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);

DROP SEQUENCE event_log_sequence;
CREATE SEQUENCE event_log_sequence
START WITH 1 
INCREMENT BY 1 
NOMAXVALUE;

CREATE TRIGGER event_log_trigger
BEFORE INSERT ON event_log
FOR EACH ROW
BEGIN
SELECT event_log_sequence.nextval INTO :new.id FROM dual;
END;
/

DROP TABLE event_backup_log;
CREATE TABLE event_backup_log (
  id INT NOT NULL,
  time TIMESTAMP NOT NULL,
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);

DROP SEQUENCE event_backup_log_sequence;
CREATE SEQUENCE event_backup_log_sequence
START WITH 1 
INCREMENT BY 1 
NOMAXVALUE;

CREATE TRIGGER event_backup_log_trigger
BEFORE INSERT ON event_backup_log
FOR EACH ROW
BEGIN
SELECT event_backup_log_sequence.nextval INTO :new.id FROM dual;
END;
/

DROP TABLE messages_log;
CREATE TABLE messages_log (
  id INT NOT NULL,
  time TIMESTAMP NOT NULL,
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);

DROP SEQUENCE messages_log_sequence;
CREATE SEQUENCE messages_log_sequence
START WITH 1 
INCREMENT BY 1 
NOMAXVALUE;

CREATE TRIGGER messages_log_trigger
BEFORE INSERT ON messages_log
FOR EACH ROW
BEGIN
SELECT messages_log_sequence.nextval INTO :new.id FROM dual;
END;
/

DROP TABLE messages_backup_log;
CREATE TABLE messages_backup_log (
  id INT NOT NULL,
  time TIMESTAMP NOT NULL,
  beginstring CHAR(8) NOT NULL,
  sendercompid VARCHAR(64) NOT NULL,
  targetcompid VARCHAR(64) NOT NULL,
  session_qualifier VARCHAR(64),
  text BLOB NOT NULL,
  PRIMARY KEY (id)
);

DROP SEQUENCE messages_backup_log_sequence;
CREATE SEQUENCE messages_backup_log_sequence
START WITH 1 
INCREMENT BY 1 
NOMAXVALUE;

CREATE TRIGGER messages_backup_log_trigger
BEFORE INSERT ON messages_backup_log
FOR EACH ROW
BEGIN
SELECT messages_backup_log_sequence.nextval INTO :new.id FROM dual;
END;
/
