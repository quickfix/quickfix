#include "HostDetailsProvider.h"
#include "SessionSettings.h"

const std::string FIX::HostDetailsProvider::HOST_SELECTION_POLICY_PRIORITY = "PRIORITY";

FIX::HostDetails FIX::HostDetailsProvider::getHost(const SessionID &s, const Dictionary &d) {
  std::string hostSelectionPolicy;
  if (d.has(HOST_SELECTION_POLICY)) {
    hostSelectionPolicy = d.getString(HOST_SELECTION_POLICY);
  }

  auto sessionIt = m_sessionToLastConnectionAttempt.find(s);

  time_t now = getTime();

  if (sessionIt == m_sessionToLastConnectionAttempt.end()) {
    auto result = m_sessionToLastConnectionAttempt.emplace(s, LastConnectionAttempt{0, now});
    sessionIt = result.first;
  } else {
    if (hostSelectionPolicy == HOST_SELECTION_POLICY_PRIORITY) {
      int startOverInterval = 120;
      if (d.has(HOST_SELECTION_POLICY_PRIORITY_START_OVER_INTERVAL)) {
        startOverInterval = d.getInt(HOST_SELECTION_POLICY_PRIORITY_START_OVER_INTERVAL);
      }

      if ((now - sessionIt->second.time >= startOverInterval)) {
        sessionIt->second.hostNumber = 0;
        sessionIt->second.time = now;
      } else {
        ++sessionIt->second.hostNumber;
        sessionIt->second.time = now;
      }
    } else {
      ++sessionIt->second.hostNumber;
      sessionIt->second.time = now;
    }
  }

  HostDetails details;
  bool isDefinedInSettings = populateHostDetails(sessionIt->second.hostNumber, d, details);

  if (!isDefinedInSettings) {
    populateHostDetails(0, d, details);
    sessionIt->second.hostNumber = 0;
  }

  return details;
}

bool FIX::HostDetailsProvider::populateHostDetails(int n, const Dictionary &d, HostDetails &out) {
  std::string host = SOCKET_CONNECT_HOST;
  std::string port = SOCKET_CONNECT_PORT;
  std::string sourceHost = SOCKET_CONNECT_SOURCE_HOST;
  std::string sourcePort = SOCKET_CONNECT_SOURCE_PORT;

  if (n > 0) {
    std::string suffix = std::to_string(n);
    host += suffix;
    port += suffix;
    sourceHost += suffix;
    sourcePort += suffix;
  }

  if (d.has(host) && d.has(port)) {
    out.address = d.getString(host);
    out.port = (short)d.getInt(port);

    if (d.has(sourceHost)) {
      out.sourceAddress = d.getString(sourceHost);
    }

    if (d.has(sourcePort)) {
      out.sourcePort = (short)d.getInt(sourcePort);
    }

    return true;
  }
  return false;
}
