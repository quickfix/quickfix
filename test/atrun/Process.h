#ifndef ATRUN_PROCESS_H
#define ATRUN_PROCESS_H

#include <string>
#include <windows.h>

namespace ATRUN
{
  class Process
  {
  public:
    Process() 
      : m_created(false), m_sendToFile(false), m_sendToStd(false),
        m_isOutFileOpen(false), m_showWindow(false), 
        m_exitCode(0)
    {
      m_procinfo.dwThreadId = -1;
    }

    void setCommandLine(std::string cmdl) { m_commandLine = cmdl; }
    void setWorkingDirectory(std::string wd) { m_workingDir = wd; }
    void setOutFile(std::string f) { m_outFile = f; }
    void sendToFile(bool b) { m_sendToFile = b; }
    void sendToStd(bool b)  { m_sendToStd = b; }
    void showWindow(bool s) { m_showWindow = s; }

    unsigned long getProcessId() const { return m_procinfo.dwThreadId; }
    int getExitCode() const { return m_exitCode; }
    bool created() const { return m_created; }
    
    void create();
    void terminate();
    void waitFor();

  private:
    void reset();
    void openOutFile();
    void closeOutFile();

    DWORD getFlags();

    HANDLE m_outFileHandle;
    PROCESS_INFORMATION m_procinfo;

    std::string m_commandLine;
    std::string m_workingDir;
    std::string m_outFile;

    bool m_created;
    bool m_sendToFile;
    bool m_sendToStd;
    bool m_isOutFileOpen;
    bool m_showWindow;

    unsigned long m_exitCode;

  };
}

#endif //ATRUN_PROCESS_H