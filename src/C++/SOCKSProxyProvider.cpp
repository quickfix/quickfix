#include "SOCKSProxyProvider.h"
#include "SessionSettings.h"
#include "Utility.h"

//
// ssh -N -D 0.0.0.0:1080 localhost
// or alike can be used as a SOCKS proxy for testing.
//

const unsigned int FIX::SOCKSProxyProvider::DEFAULT_SOCKS_VERSION = 4;

FIX::SOCKSProxyDetails FIX::SOCKSProxyProvider::getSOCKSProxy(const SessionID &s, const Dictionary &d) {
  SOCKSProxyDetails details;

  if (d.has(SOCKS_PROXY_HOST) && d.has(SOCKS_PROXY_PORT)) {
    details.address = d.getString(SOCKS_PROXY_HOST);
    details.port = (short)d.getInt(SOCKS_PROXY_PORT);

    details.version = (short)(d.has(SOCKS_PROXY_VERSION) ? d.getInt(SOCKS_PROXY_VERSION) : DEFAULT_SOCKS_VERSION);
  }

  return details;
}

FIX::SOCKSInitiator *FIX::SOCKSProxyProvider::getSOCKSInitiator(
    const std::string &targetAddress,
    short targetPort,
    const SOCKSProxyDetails &details) {
  return new SOCKSInitiator(targetAddress, targetPort, details);
}

void FIX::SOCKSProxyProvider::release(SOCKSInitiator *socks) { delete socks; }

FIX::SOCKSInitiator::SOCKSInitiator(
    const std::string &targetAddress,
    short targetPort,
    const SOCKSProxyDetails &details)
    : m_details(details),
      m_address(targetAddress),
      m_port(targetPort),
      m_inetAddress((uint32_t)-1),
      m_stage(STAGE_NONE) {}

FIX::SOCKSInitiator::ConnectionStatus FIX::SOCKSInitiator::connect(socket_handle socket) {
  if (STAGE_FAILED == m_stage) {
    return STATUS_FAILED;
  } else if (STAGE_COMPLETED == m_stage) {
    return STATUS_SUCCEEDED;
  }

  m_error.clear();

  if (4 == m_details.version) {
    return connect4(socket);
  } else if (5 == m_details.version) {
    return connect5(socket);
  }

  m_error = "Unknown SOCKS protocol (" + IntConvertor::convert(m_details.version) + ") has been requested.";
  m_stage = STAGE_FAILED;
  return STATUS_FAILED;
}

bool FIX::SOCKSInitiator::inet_addr() {
  const char *host = socket_hostname(m_address.c_str());

  if (!host) {
    m_error = "Cannot resolve SOCKS proxy host \"" + m_address + "\".";
    return false;
  }

  m_inetAddress = ::inet_addr(host);

  if (m_inetAddress == (unsigned)-1) {
    m_error = "Cannot resolve IP of SOCKS proxy host \"" + m_address + "\" (\"" + host + "\".";
    return false;
  }

  return true;
}

FIX::SOCKSInitiator::ConnectionStatus FIX::SOCKSInitiator::connect4(socket_handle socket) {
  if (STAGE_NONE == m_stage) {
    if (!inet_addr()) {
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    }

    m_buffer.push_back<std::uint8_t>(m_details.version);
    m_buffer.push_back<std::uint8_t>(1);              // connect code
    m_buffer.push_back<std::uint16_t>(htons(m_port)); // destination port
    m_buffer.push_back(m_inetAddress);                // destination address
    // The location for the user id if any.
    m_buffer.push_back<std::uint8_t>(0); // terminator
    m_stage = STAGE_SENDING_HANDSHAKE;
  }

  if (STAGE_HANDSHAKE_SENT == m_stage) {
    ssize_t size = socket_recv(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());
    if (size <= 0) {
      m_error = "Cannot read reply from SOCKS proxy \"" + m_details.address + ":"
                + IntConvertor::convert(m_details.port) + "\".";
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    } else {
      m_buffer.mark(size);

      if (m_buffer.remained() == 0) { // Everything expected has been received.
        if ((m_buffer[0] == 0) && (m_buffer[1] == 90)) {
          m_stage = STAGE_COMPLETED;
          return STATUS_SUCCEEDED;
        }
        m_error = "Bad reply has been received from SOCKS proxy \"" + m_details.address + ":"
                  + IntConvertor::convert(m_details.port) + "\".";
        m_stage = STAGE_FAILED;
        return STATUS_FAILED;
      }
    }
  }

  if (STAGE_SENDING_HANDSHAKE == m_stage) {
    ssize_t size = socket_send(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());

    if (size > 0) {
      m_buffer.mark(size);
    }

    if (m_buffer.remained() == 0) {
      m_stage = STAGE_HANDSHAKE_SENT;
      m_buffer.reset(8); // Amount of data we expect in reply.
    }
  }

  return STATUS_IN_PROGRESS;
}

FIX::SOCKSInitiator::ConnectionStatus FIX::SOCKSInitiator::connect5(socket_handle socket) {
  if (STAGE_NONE == m_stage) {
    if (!inet_addr()) {
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    }

    m_buffer.push_back<std::uint8_t>(m_details.version);
    m_buffer.push_back<std::uint8_t>(1); // number of authentication methods
    m_buffer.push_back<std::uint8_t>(0); // no authentication method
    m_stage = STAGE_SENDING_AUTH_METHOD;
  }

  if (STAGE_AUTH_METHOD_SENT == m_stage) {
    ssize_t size = socket_recv(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());
    if (size <= 0) {
      m_error = "Cannot read reply from SOCKS proxy \"" + m_details.address + ":"
                + IntConvertor::convert(m_details.port) + "\".";
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    } else {
      m_buffer.mark(size);

      if (m_buffer.remained() == 0) { // Everything expected has been received.
        if (m_buffer[1] == 0xFF) {
          m_error = "SOCKS proxy \"" + m_details.address + ":" + IntConvertor::convert(m_details.port)
                    + "\" rejects the offered authentication method.";
          m_stage = STAGE_FAILED;
          return STATUS_FAILED;
        }

        m_buffer.reset(0);

        m_buffer.push_back<std::uint8_t>(m_details.version);
        m_buffer.push_back<std::uint8_t>(1);              // connect code
        m_buffer.push_back<std::uint8_t>(0);              // a flag
        m_buffer.push_back<std::uint8_t>(1);              // Address type - IP V4
        m_buffer.push_back(m_inetAddress);                // destination address
        m_buffer.push_back<std::uint16_t>(htons(m_port)); // destination port
        m_stage = STAGE_SENDING_HANDSHAKE;
      }
    }
  }

  if (STAGE_HANDSHAKE_SENT == m_stage) {
    ssize_t size = socket_recv(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());
    if (size <= 0) {
      m_error = "Cannot read reply from SOCKS proxy \"" + m_details.address + ":"
                + IntConvertor::convert(m_details.port) + "\".";
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    } else {
      m_buffer.mark(size);

      if (m_buffer.remained() == 0) { // Everything expected has been received.
        if (m_buffer[1] != 0) {
          m_error = "SOCKS proxy \"" + m_details.address + ":" + IntConvertor::convert(m_details.port)
                    + "\" reported a failure (" + IntConvertor::convert(m_buffer[1]) + ").";
          m_stage = STAGE_FAILED;
          return STATUS_FAILED;
        }
        if (m_buffer[3] != 1) {
          m_error = "SOCKS proxy \"" + m_details.address + ":" + IntConvertor::convert(m_details.port)
                    + "\" reported an unsupported address type (" + IntConvertor::convert(m_buffer[3]) + ").";
          m_stage = STAGE_FAILED;
          return STATUS_FAILED;
        }

        // If succeeded, read the rest of the data (for IPv4).
        m_stage = STAGE_HANDSHAKE_RECEIVING;
        m_buffer.reset(6); // Amount of data we expect in reply (IPv4 inet address + port).
      }
    }
  }

  if (STAGE_HANDSHAKE_RECEIVING == m_stage) {
    ssize_t size = socket_recv(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());
    if (size <= 0) {
      m_error = "Cannot read reply from SOCKS proxy \"" + m_details.address + ":"
                + IntConvertor::convert(m_details.port) + "\".";
      m_stage = STAGE_FAILED;
      return STATUS_FAILED;
    } else {
      m_buffer.mark(size);

      if (m_buffer.remained() == 0) { // Everything expected has been received.
        m_stage = STAGE_COMPLETED;
        return STATUS_SUCCEEDED;
      }
    }
  }

  if (STAGE_SENDING_AUTH_METHOD == m_stage) {
    ssize_t size = socket_send(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());

    if (size > 0) {
      m_buffer.mark(size);
    }

    if (m_buffer.remained() == 0) {
      m_stage = STAGE_AUTH_METHOD_SENT;
      m_buffer.reset(2); // Amount of data we expect in reply.
    }
  }

  if (STAGE_SENDING_HANDSHAKE == m_stage) {
    ssize_t size = socket_send(socket, reinterpret_cast<char *>(&m_buffer.remaining()), m_buffer.remained());

    if (size > 0) {
      m_buffer.mark(size);
    }

    if (m_buffer.remained() == 0) {
      m_stage = STAGE_HANDSHAKE_SENT;
      m_buffer.reset(4); // Amount of data we expect in reply.
    }
  }

  return STATUS_IN_PROGRESS;
}
