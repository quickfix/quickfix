#include "HostDetailsProvider.h"
#include "SessionSettings.h"

const std::string FIX::HostDetailsProvider::HOST_SELECTION_POLICY_PRIORITY = "PRIORITY";

 FIX::HostDetails FIX::HostDetailsProvider::getHost(const SessionID& s, const Dictionary& d)
{
  std::string hostSelectionPolicy;
  if( d.has(HOST_SELECTION_POLICY) )
  {
    hostSelectionPolicy = d.getString(HOST_SELECTION_POLICY);
  }

  auto sessionIt = m_sessionToLastConnectionDetails.find(s);
  if(hostSelectionPolicy == HOST_SELECTION_POLICY_PRIORITY )
  {
    time_t now;
    ::time(&now);

    if( sessionIt == m_sessionToLastConnectionDetails.end()
      || ( now - sessionIt->second.lastConnectionTime >= m_startOverIntervalInSeconds ) )
    {
      m_sessionToLastConnectionDetails[s] = { 0, now };
    }
    else
    {
      ++sessionIt->second.hostNumber;
      sessionIt->second.lastConnectionTime = now;
    }
    
  }

  int num = sessionIt->second.hostNumber;
  HostDetails details;

  std::stringstream hostStream;
  hostStream << SOCKET_CONNECT_HOST << num;
  std::string hostString = hostStream.str();

  std::stringstream portStream;
  portStream << SOCKET_CONNECT_PORT << num;
  std::string portString = portStream.str();

  if( d.has(hostString) && d.has(portString) )
  {
    details.address = d.getString(hostString);
    details.port = (short)d.getInt(portString);

    std::stringstream sourceHostStream;
    sourceHostStream << SOCKET_CONNECT_SOURCE_HOST << num;
    hostString = sourceHostStream.str();
    if( d.has(hostString) )
      details.sourceAddress = d.getString(hostString);

    std::stringstream sourcePortStream;
    sourcePortStream << SOCKET_CONNECT_SOURCE_PORT << num;
    portString = sourcePortStream.str();
    if( d.has(portString) )
      details.sourcePort = (short)d.getInt(portString);
  }
  else
  {
    num = 0;
    details.address = d.getString(SOCKET_CONNECT_HOST);
    details.port = (short)d.getInt(SOCKET_CONNECT_PORT);

    if( d.has(SOCKET_CONNECT_SOURCE_HOST) )
      details.sourceAddress = d.getString(SOCKET_CONNECT_SOURCE_HOST);
    if( d.has(SOCKET_CONNECT_SOURCE_PORT) )
      details.sourcePort = (short)d.getInt(SOCKET_CONNECT_SOURCE_PORT);
  }
  
  if ( hostSelectionPolicy == HOST_SELECTION_POLICY_PRIORITY )
  {
    sessionIt->second.hostNumber = num;
  }
  else
  {
    sessionIt->second.hostNumber = ++num;
  }
  return details;
}

 void FIX::HostDetailsProvider::setStartOverInterval(int seconds)
 {
   m_startOverIntervalInSeconds = seconds;
 }
