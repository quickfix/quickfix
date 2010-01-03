#include <iostream>
#include <string>
#include <signal.h>
#include <UnitTest++.h>

#include "TestSuite.h"

#include "Process.h"

extern "C" 
{
  int getopt(int argc, char * const argv[], const char *optstring);
  extern char *optarg;
  char* __progname;
}

namespace ATRUN {
  std::string m_server;
  std::string m_serverDir;

  std::string m_client;
  std::string m_clientDir;

  std::string m_outfile;
}

ATRUN::Process server;
ATRUN::Process client;

int doTestMode();
int doRunMode(int argc, char** argv );
bool processArguments(int argc, char** argv);
void printUsage(char* exe);
void term(int) 
{
  client.terminate();
  server.terminate();  
}

int main( int argc, char** argv )
{
  if(getopt(argc, argv, "+t:") != 't')
  {
    printUsage(argv[0]);
    return 1;
  }

  if(strcmp(optarg, "test") == 0)
  {
    return doTestMode();
  }
  else if(strcmp(optarg, "run") == 0)
  {
    return doRunMode( argc, argv );
  }

  printUsage(argv[0]);    
  return 1;
}

int doTestMode()
{
  std::cout << "<ut>" << std::endl << "  <output>" << std::endl;
  int result = UnitTest::RunAllTests();
  std::cout << "  </output>" << std::endl << "</ut>" << std::endl;
  return 0;
}

int doRunMode(int argc, char** argv )
{
  if( !processArguments(argc, argv) ) return 1;

  signal(SIGINT, term);
  signal(SIGABRT, term);
  signal(SIGTERM, term);

  server.setCommandLine(ATRUN::m_server);
  server.setWorkingDirectory(ATRUN::m_serverDir);
  server.create();

  client.setCommandLine(ATRUN::m_client);
  client.setWorkingDirectory(ATRUN::m_clientDir);
  if(ATRUN::m_outfile.size())
  {
    client.setOutFile(ATRUN::m_outfile);
    client.sendToFile(true);
  }
  else
    client.sendToStd(true);

  client.create();

  client.waitFor();
  server.terminate();

  return client.getExitCode();
}



bool processArguments(int argc, char** argv)
{
  if( getopt(argc, argv, "+s:") != 's' ) 
  {
    printUsage(argv[0]);
    return false;
  }
  ATRUN::m_server = optarg;

  if( getopt(argc, argv, "+d:") != 'd' )
  {
    printUsage(argv[0]);
    return false;
  }
  ATRUN::m_serverDir = optarg;

  if( getopt(argc, argv, "+c:") != 'c' )
  {
    printUsage(argv[0]);
    return false;
  }
  ATRUN::m_client = optarg;

  if( getopt(argc, argv, "+i:") != 'i' )
  {
    printUsage(argv[0]);
    return false;
  }
  ATRUN::m_clientDir = optarg;

  if( getopt(argc, argv, "+o:") == 'o' )
    ATRUN::m_outfile = optarg;

  return true;
}

void printUsage(char* exe)
{
  std::cout << "usage: " 
            << exe 
            << " -t test|run -s serverCmdLine -d serverStartDir -c clientCmdLine -i initialClientDir -o outFile" << std::endl;
}