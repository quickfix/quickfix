#include "ProcessTestCase.h"

#include <fstream>

namespace ATRUN
{
  std::string chompDriveLetter(const std::string& s)
  {
    std::string::size_type pos = s.find_first_of('\\');
    if(pos == std::string::npos)
      return s;

    std::string result = s;
    result.replace(0,pos+1,"\\");

    return result;
  }

  static std::string g_startDir("\\projects\\quickfix\\test");

  bool ProcessTestCase::createProcess::onSetup( Process*& pObject )
  {
    SetCurrentDirectory( const_cast<char*>(g_startDir.c_str()) );
    pObject = &m_Process; return true;
  }

  void ProcessTestCase::createProcess::onRun( Process& object )
  {
    object.setCommandLine("noproc yada yada");
    object.setWorkingDirectory("..");

    object.create();
    assert(object.created() == false);

    object.setCommandLine("cmd /C ECHO Hello World!");

    object.create();
    assert(object.created() == true);

  }

  bool ProcessTestCase::sendOutputToFile::onSetup( Process*& pObject )
  {
    SetCurrentDirectory( const_cast<char*>(g_startDir.c_str()) );
    pObject = &m_Process; return true;
  }

  void ProcessTestCase::sendOutputToFile::onRun( Process& object )
  {
    std::string expected = "Heidy Ho!";
    std::string cmdl = "cmd /C ECHO ";
    object.setCommandLine(cmdl + expected);

    std::string outfile = "sendOutputToFile.txt";
    object.setOutFile(outfile);
    object.sendToFile(true);

    object.create();
    object.waitFor();

    std::string line;
    std::ifstream f(outfile.c_str());
    std::getline(f,line);
    assert(line == expected);
  }

  bool ProcessTestCase::setWorkingDirectory::onSetup( Process*& pObject )
  {
    SetCurrentDirectory( const_cast<char*>(g_startDir.c_str()) );
    pObject = &m_Process; return true;
  }

  void ProcessTestCase::setWorkingDirectory::onRun( Process& object )
  {
    std::string outfile("setWorkingDirectory.txt");

    object.setCommandLine("cmd /C ECHO %CD%");  //write the current directory to file
    object.setOutFile(outfile);
    object.sendToFile(true);
    object.setWorkingDirectory("..");

    object.create();
    object.waitFor();

    std::string line;
    std::ifstream f(outfile.c_str());
    std::getline(f,line);
    assert(chompDriveLetter(line) == "\\projects\\quickfix");

    char curdir[100];
    GetCurrentDirectory(sizeof(curdir), curdir);
    std::string expected(curdir);
    assert( chompDriveLetter(expected) == g_startDir );
  }

  bool ProcessTestCase::terminateProcess::onSetup( Process*& pObject )
  {
    SetCurrentDirectory( const_cast<char*>(g_startDir.c_str()) );
    pObject = &m_Process; return true;
  }

  void ProcessTestCase::terminateProcess::onRun( Process& object )
  {
    std::string cmdl = "cmd /C PAUSE";
    object.setCommandLine(cmdl);

    std::string outfile("destroyProcess.txt");
    object.setOutFile(outfile);
    object.sendToFile(true);

    object.create();
    assert(object.created() == true);
    assert(object.getProcessId() > 0);

    object.terminate();
    assert(object.created() == false);
    assert(object.getProcessId() == -1);

    Sleep(1000); //give file a chance to close
    std::ofstream f(outfile.c_str());
    assert(!f.fail());
  }

  bool ProcessTestCase::waitFor::onSetup( Process*& pObject )
  {
    SetCurrentDirectory( const_cast<char*>(g_startDir.c_str()) );
    pObject = &m_Process; return true;
  }

  void ProcessTestCase::waitFor::onRun( Process& object )
  {
    std::string outfile("waitfor.txt");

    object.setCommandLine("cmd /C sleep 5");  //requires cygwin
    object.setOutFile(outfile);
    object.sendToFile(true);

    object.create();
    object.waitFor();
    assert(object.created() == false);

    std::ofstream f(outfile.c_str());
    assert( !(f.fail()) );

    assert(object.getProcessId() == -1);

    //could also assert that the waitFor() call holds for 5 seconds
    //because of the sleep call
  }
} //namespcae ATRUN
