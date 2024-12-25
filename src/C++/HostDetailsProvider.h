#ifndef FIX_HOSTDETAILSPROVIDER_H
#define FIX_HOSTDETAILSPROVIDER_H

#include <functional>
#include <map>
#include <optional>
#include <string>
#include <time.h>

namespace FIX {
class Dictionary;
class SessionID;

struct HostDetails {
  std::string address;
  short port{0};
  std::string sourceAddress;
  short sourcePort{0};
};

class HostDetailsProvider {
public:
  static const std::string HOST_SELECTION_POLICY_PRIORITY;

  HostDetails getHost(const SessionID &s, const Dictionary &d);

  std::function<time_t()> getTime = []() {
    time_t now;
    ::time(&now);
    return now;
  };

private:
  bool populateHostDetails(int n, const Dictionary &d, HostDetails &out);

  struct LastConnectionAttempt {
    int hostNumber;
    time_t time;
  };
  std::map<SessionID, LastConnectionAttempt> m_sessionToLastConnectionAttempt;
};
} // namespace FIX

#endif
