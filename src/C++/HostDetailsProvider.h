#ifndef FIX_HOSTDETAILSPROVIDER_H
#define FIX_HOSTDETAILSPROVIDER_H

#include <time.h>
#include <string>
#include <map>

namespace FIX
{
  class Dictionary;
  class SessionID;


  struct SessionConnection
  {
    int hostNumber;
    time_t lastConnectionTime;
  };

  struct HostDetails
  {
    std::string address;
    short port{ 0 };
    std::string sourceAddress;
    short sourcePort{ 0 };
  };


  class HostDetailsProvider
  {
  public:
    static const std::string HOST_SELECTION_POLICY_PRIORITY;


    HostDetails getHost(const SessionID& s, const Dictionary& d);
    void setStartOverInterval(int seconds);

  private:
    std::map<SessionID, SessionConnection> m_sessionToLastConnectionDetails;
    int m_startOverIntervalInSeconds{ 120 };
  
  };
}


#endif
