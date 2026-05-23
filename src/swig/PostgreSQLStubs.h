#ifndef HAVE_POSTGRESQL

#include "Utility.h"

class PGconn {};

namespace FIX {

class PostgreSQLQuery {
public:
  PostgreSQLQuery(const std::string &query) { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  ~PostgreSQLQuery() {}

  bool execute(PGconn *pConnection) { unreachable(); }

  bool success() { unreachable(); };

  int rows() { unreachable(); }

  const char *reason() { unreachable(); }

  char *getValue(int row, int column) { unreachable(); }

  void throwException() {}
};

class PostgreSQLConnection {
public:
  PostgreSQLConnection(const DatabaseConnectionID &id) { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  PostgreSQLConnection(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  ~PostgreSQLConnection() {}

  const DatabaseConnectionID &connectionID() { unreachable(); }

  bool connected() { unreachable(); }

  bool reconnect() { unreachable(); }

  bool execute(PostgreSQLQuery &pQuery) { unreachable(); }
};

typedef DatabaseConnectionPool<PostgreSQLConnection> PostgreSQLConnectionPool;
typedef std::unique_ptr<PostgreSQLConnectionPool> PostgreSQLConnectionPoolPtr;

class PostgreSQLStoreFactory : public MessageStoreFactory {
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

  PostgreSQLStoreFactory(const SessionSettings &settings) { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  PostgreSQLStoreFactory(const Dictionary &dictionary) { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  PostgreSQLStoreFactory(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLStoreFactory() { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  MessageStore *create(const UtcTimeStamp &, const SessionID &) { return nullptr; }
  void destroy(MessageStore *) {}
};

const std::string PostgreSQLStoreFactory::DEFAULT_DATABASE = "";
const std::string PostgreSQLStoreFactory::DEFAULT_USER = "";
const std::string PostgreSQLStoreFactory::DEFAULT_PASSWORD = "";
const std::string PostgreSQLStoreFactory::DEFAULT_HOST = "";
const short PostgreSQLStoreFactory::DEFAULT_PORT = 3306;

class PostgreSQLStore : public MessageStore {
public:
  PostgreSQLStore(
      const UtcTimeStamp &now,
      const SessionID &sessionID,
      const DatabaseConnectionID &connection,
      PostgreSQLConnectionPool *pool) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLStore(
      const UtcTimeStamp &now,
      const SessionID &sessionID,
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  ~PostgreSQLStore() {}

  bool set(SEQNUM, const std::string &) { unreachable(); }
  void get(SEQNUM, SEQNUM, std::vector<std::string> &) const {}

  SEQNUM getNextSenderMsgSeqNum() const { unreachable(); }
  SEQNUM getNextTargetMsgSeqNum() const { unreachable(); }
  void setNextSenderMsgSeqNum(SEQNUM value) {}
  void setNextTargetMsgSeqNum(SEQNUM value) {}
  void incrNextSenderMsgSeqNum() {}
  void incrNextTargetMsgSeqNum() {}

  UtcTimeStamp getCreationTime() const { unreachable(); }

  void reset(const UtcTimeStamp &now) {}
  void refresh() {}
};

class PostgreSQLLogFactory : public LogFactory {
public:
  static const std::string DEFAULT_DATABASE;
  static const std::string DEFAULT_USER;
  static const std::string DEFAULT_PASSWORD;
  static const std::string DEFAULT_HOST;
  static const short DEFAULT_PORT;

  PostgreSQLLogFactory(const SessionSettings &settings) { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  PostgreSQLLogFactory(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLLogFactory() { throw ConfigError("HAVE_POSTGRESQL not enabled"); }

  Log *create() { return nullptr; }
  Log *create(const SessionID &) { return nullptr; }
  void destroy(Log *) {}
};

const std::string PostgreSQLLogFactory::DEFAULT_DATABASE = "";
const std::string PostgreSQLLogFactory::DEFAULT_USER = "";
const std::string PostgreSQLLogFactory::DEFAULT_PASSWORD = "";
const std::string PostgreSQLLogFactory::DEFAULT_HOST = "";
const short PostgreSQLLogFactory::DEFAULT_PORT = 0;

class PostgreSQLLog : public Log {
public:
  PostgreSQLLog(const SessionID &sessionID, const DatabaseConnectionID &connectionID, PostgreSQLConnectionPool *pool) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLLog(const DatabaseConnectionID &connectionID, PostgreSQLConnectionPool *pool) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLLog(
      const SessionID &sessionID,
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  PostgreSQLLog(
      const std::string &database,
      const std::string &user,
      const std::string &password,
      const std::string &host,
      short port) {
    throw ConfigError("HAVE_POSTGRESQL not enabled");
  }

  ~PostgreSQLLog() {}

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
