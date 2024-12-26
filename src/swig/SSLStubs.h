#ifndef HAVE_SSL

struct SSL {};
struct RSA {};
struct X509 {};

namespace FIX {
enum SSLHandshakeStatus {
  SSL_HANDSHAKE_FAILED = 0,
  SSL_HANDSHAKE_SUCCEDED = 1,
  SSL_HANDSHAKE_IN_PROGRESS = 2
};

class SSLSocketInitiator : public Initiator, SocketConnector::Strategy {
public:
  SSLSocketInitiator(Application &application, MessageStoreFactory &factory, const SessionSettings &settings)
      EXCEPT(ConfigError)
      : Initiator(application, factory, settings) {
    throw ConfigError("HAVE_SSL not enabled");
  }

  SSLSocketInitiator(
      Application &application,
      MessageStoreFactory &factory,
      const SessionSettings &settings,
      LogFactory &logFactory) EXCEPT(ConfigError)
      : Initiator(application, factory, settings, logFactory) {
    throw ConfigError("HAVE_SSL not enabled");
  }

  virtual ~SSLSocketInitiator() {}

  void setPassword(const std::string &) {}

  void setCertAndKey(X509 *, RSA *) {}

  int passwordHandleCallback(char *, size_t, int) { return 0; }

  static int passwordHandleCB(char *, int, int, void *) { return 0; }

private:
  void onStart() {};
  bool onPoll() { return false; };
  void onStop() {};

  void doConnect(const SessionID &, const Dictionary &) override {};
  void onConnect(SocketConnector &, socket_handle) override {};
  void onWrite(SocketConnector &, socket_handle) override {};
  bool onData(SocketConnector &, socket_handle) override { return false; };
  void onDisconnect(SocketConnector &, socket_handle) override {};
  void onError(SocketConnector &) override {};
};

class SSLSocketAcceptor : public Acceptor, SocketServer::Strategy {
public:
  SSLSocketAcceptor(Application &application, MessageStoreFactory &factory, const SessionSettings &settings)
      EXCEPT(ConfigError)
      : Acceptor(application, factory, settings) {
    throw ConfigError("HAVE_SSL not enabled");
  }

  SSLSocketAcceptor(
      Application &application,
      MessageStoreFactory &factory,
      const SessionSettings &settings,
      LogFactory &logFactory) EXCEPT(ConfigError)
      : Acceptor(application, factory, settings, logFactory) {
    throw ConfigError("HAVE_SSL not enabled");
  }

  virtual ~SSLSocketAcceptor() {}

  void setPassword(const std::string &pwd) {}

  int passwordHandleCallback(char *, size_t, int) { return 0; }

  static int passPhraseHandleCB(char *, int, int, void *) { return 0; }

private:
  void onStart() override {};
  bool onPoll() override { return false; };
  void onStop() override {};

  void onConnect(SocketServer &, socket_handle, socket_handle) override {};
  void onWrite(SocketServer &, socket_handle) override {};
  bool onData(SocketServer &, socket_handle) override { return false; };
  void onDisconnect(SocketServer &, socket_handle) override {};
  void onError(SocketServer &) override {};
};

class SSLSocketConnection : Responder {
public:
  typedef std::set<SessionID> Sessions;

  SSLSocketConnection(socket_handle, SSL *, Sessions, SocketMonitor *) {}
  SSLSocketConnection(SSLSocketInitiator &, const SessionID &, socket_handle, SSL *, SocketMonitor *) {}
  virtual ~SSLSocketConnection() {};

  socket_handle getSocket() const { return 0; }
  Session *getSession() const { return nullptr; }

  bool read(SocketConnector &) { return false; };
  bool read(SSLSocketAcceptor &, SocketServer &) { return false; };
  bool processQueue() { return false; }

  void signal() {}

  void subscribeToSocketWriteAvailableEvents() {}

  void unsignal() {}

  void setHandshakeStartTime(time_t) {}

  int getSecondsFromHandshakeStart(time_t) { return 0; }

  void onTimeout() {}

  SSL *sslObject() { return nullptr; }

  bool didProcessQueueRequestToRead() const { return false; };
  bool didReadFromSocketRequestToWrite() const { return false; };

private:
  bool send(const std::string &) override { return false; };
  void disconnect() override {};
};
} // namespace FIX

#endif