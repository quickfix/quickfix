#ifndef HAVE_MYSQL

#include "Utility.h"

class MYSQL {};

namespace FIX {

class MySQLQuery {
public:
  MySQLQuery(const std::string &query) { throw ConfigError("HAVE_MYSQL not enabled"); }

  ~MySQLQuery() {}

  bool execute(MYSQL *pConnection) { unreachable(); }

  bool success() { unreachable(); };

  int rows() { unreachable(); }

  const std::string &reason() { unreachable(); }

  char *getValue(int row, int column) { unreachable(); }

  void throwException() EXCEPT(IOException) {}
};

class MySQLConnection {
public:
  MySQLConnection(const DatabaseConnectionID &id) { throw ConfigError("HAVE_MYSQL not enabled"); }

  MySQLConnection(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  ~MySQLConnection() {}

  const DatabaseConnectionID &connectionID() { unreachable(); }

  bool connected() { unreachable(); }

  bool reconnect() { unreachable(); }

  bool execute(MySQLQuery &pQuery) { unreachable(); }
};

typedef DatabaseConnectionPool<MySQLConnection> MySQLConnectionPool;
typedef std::unique_ptr<MySQLConnectionPool> MySQLConnectionPoolPtr;

class MySQLStoreFactory : public MessageStoreFactory {
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

  MySQLStoreFactory(const SessionSettings &settings) { throw ConfigError("HAVE_MYSQL not enabled"); }

  MySQLStoreFactory(const Dictionary &dictionary) { throw ConfigError("HAVE_MYSQL not enabled"); }

  MySQLStoreFactory(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLStoreFactory() { throw ConfigError("HAVE_MYSQL not enabled"); }

  MessageStore *create(const UtcTimeStamp &, const SessionID &) { return nullptr; }
  void destroy(MessageStore *) {}
};

const std::string MySQLStoreFactory::DEFAULT_DATABASE = "";
const std::string MySQLStoreFactory::DEFAULT_USER = "";
const std::string MySQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string MySQLStoreFactory::DEFAULT_HOST = "";
const short MySQLStoreFactory::DEFAULT_PORT = 3306;

class MySQLStore : public MessageStore {
public:
  MySQLStore(
      const UtcTimeStamp &now,
      const SessionID &sessionID,
      const DatabaseConnectionID &connection,
      MySQLConnectionPool *pool) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLStore(
      const UtcTimeStamp &now,
      const SessionID &sessionID,
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  ~MySQLStore() {}

  bool set(SEQNUM, const std::string &) EXCEPT(IOException) { unreachable(); }
  void get(SEQNUM, SEQNUM, std::vector<std::string> &) const EXCEPT(IOException) {}

  SEQNUM getNextSenderMsgSeqNum() const EXCEPT(IOException) { unreachable(); }
  SEQNUM getNextTargetMsgSeqNum() const EXCEPT(IOException) { unreachable(); }
  void setNextSenderMsgSeqNum(SEQNUM value) EXCEPT(IOException) {}
  void setNextTargetMsgSeqNum(SEQNUM value) EXCEPT(IOException) {}
  void incrNextSenderMsgSeqNum() EXCEPT(IOException) {}
  void incrNextTargetMsgSeqNum() EXCEPT(IOException) {}

  UtcTimeStamp getCreationTime() const EXCEPT(IOException) { unreachable(); }

  void reset(const UtcTimeStamp &now) EXCEPT(IOException) {}
  void refresh() EXCEPT(IOException) {}
};

class MySQLLogFactory : public LogFactory {
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

  MySQLLogFactory(const SessionSettings &settings) { throw ConfigError("HAVE_MYSQL not enabled"); }

  MySQLLogFactory(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLLogFactory() { throw ConfigError("HAVE_MYSQL not enabled"); }

  Log *create() { return nullptr; }
  Log *create(const SessionID &) { return nullptr; }
  void destroy(Log *) {}
};

const std::string MySQLLogFactory::DEFAULT_DATABASE = "";
const std::string MySQLLogFactory::DEFAULT_USER = "";
const std::string MySQLLogFactory::DEFAULT_PASSWORD = "";
const std::string MySQLLogFactory::DEFAULT_HOST = "";
const short MySQLLogFactory::DEFAULT_PORT = 0;

class MySQLLog : public Log {
public:
  MySQLLog(const SessionID &sessionID, const DatabaseConnectionID &connectionID, MySQLConnectionPool *pool) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLLog(const DatabaseConnectionID &connectionID, MySQLConnectionPool *pool) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLLog(
      const SessionID &sessionID,
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  MySQLLog(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_MYSQL not enabled");
  }

  ~MySQLLog() {}

  void clear() {}
  void backup() {}
  void setIncomingTable(const std::string &incomingTable) {}
  void setOutgoingTable(const std::string &outgoingTable) {}
  void setEventTable(const std::string &eventTable) {}

  void onIncoming(const std::string &value) {}
  void onOutgoing(const std::string &value) {}
  void onEvent(const std::string &value) {}
};

} // namespace FIX

#endif
