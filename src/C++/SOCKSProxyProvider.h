#ifndef FIX_SOCKSPROXYPROVIDER_H
#define FIX_SOCKSPROXYPROVIDER_H

#include "Utility.h"
#include <cstddef>
#include <cstdint>
#include <functional>
#include <map>
#include <string>
#include <time.h>
#include <vector>

namespace FIX {
class Dictionary;
class SessionID;

struct SOCKSProxyDetails {
  std::string address;
  std::string user;
  std::string password;
  short port{0};
  short version{0};
};

class SOCKSInitiator {
public:
  enum ConnectionStatus {
    STATUS_SUCCEEDED = 0,
    STATUS_FAILED = 1,
    STATUS_IN_PROGRESS = 2
  };

public:
  SOCKSInitiator(const std::string &targetAddress, short targetPort, const SOCKSProxyDetails &details);

  ConnectionStatus connect(socket_handle);
  const std::string &errorMessage() const { return m_error; }
  bool empty() const { return m_details.address.empty(); }

protected:
  class Buffer {
  public:
    typedef std::uint8_t byte_t;

    Buffer()
        : m_marker(0) {}

    template <class T> void push_back(T value) {
      m_data.insert(m_data.end(), reinterpret_cast<byte_t *>(&value), reinterpret_cast<byte_t *>(&value + 1));
    }

    byte_t operator[](size_t i) const { return m_data[i]; }
    const byte_t &front() const { return m_data.front(); }
    size_t size() const { return m_data.size(); }
    byte_t &remaining() { return *(&m_data.front() + m_marker); }
    size_t remained() const { return m_data.size() - m_marker; }
    void mark(size_t x) { m_marker += x; }

    void clear() {
      m_marker = 0;
      m_data.clear();
    }

    void reset(size_t x) {
      clear();
      m_data.resize(x, 0);
    }

  private:
    std::vector<byte_t> m_data;
    size_t m_marker;
  };

  enum Stage {
    STAGE_NONE = 0,
    STAGE_SENDING_AUTH_METHOD = 1,
    STAGE_AUTH_METHOD_SENT = 2,
    STAGE_SENDING_HANDSHAKE = 3,
    STAGE_HANDSHAKE_SENT = 4,
    STAGE_HANDSHAKE_RECEIVING = 5,
    STAGE_COMPLETED = 6,
    STAGE_FAILED = 31
  };

private:
  ConnectionStatus connect4(socket_handle);
  ConnectionStatus connect5(socket_handle);
  bool inet_addr();

  SOCKSProxyDetails m_details;
  std::string m_address;
  short m_port;
  uint32_t m_inetAddress;
  std::string m_error;
  Buffer m_buffer;
  Stage m_stage;
};

class SOCKSProxyProvider {
public:
  static const unsigned int DEFAULT_SOCKS_VERSION;

  SOCKSProxyDetails getSOCKSProxy(const SessionID &s, const Dictionary &d);

  SOCKSInitiator *getSOCKSInitiator(
      const std::string &targetAddress,
      short targetPort,
      const SOCKSProxyDetails &details);

  static void release(SOCKSInitiator *socks);
};
} // namespace FIX

#endif
