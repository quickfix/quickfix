#include <Windows.h>
#include <process.h>

#include "Process.h"

void* readOutput( void* p )
{
  HANDLE hReadPipe = p;
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  char chBuf[128];
  DWORD dwRead, dwWritten;

  while(true)
  { 
    if( !ReadFile( hReadPipe, chBuf, 128, &dwRead, 
      NULL) || dwRead == 0) break; 
    if (! WriteFile(hStdOut, chBuf, dwRead, &dwWritten, NULL)) 
      break; 
  }
  return 0;
}

namespace ATRUN
{
  void Process::create()
  {
    SECURITY_ATTRIBUTES sa; 
    sa.nLength = sizeof(SECURITY_ATTRIBUTES); 
    sa.bInheritHandle = TRUE; 
    sa.lpSecurityDescriptor = NULL; 


    STARTUPINFO info;
    GetStartupInfo(&info);

    char curdir[100];
    GetCurrentDirectory(sizeof(curdir), curdir);

    SetCurrentDirectory( const_cast<char*>(m_workingDir.c_str()) );

    HANDLE hReadPipe, hWritePipe;
    if(m_sendToFile)
    {
      openOutFile();
      info.dwFlags = STARTF_USESTDHANDLES;
      CreatePipe(&hReadPipe, &hWritePipe, &sa, 0);
      info.hStdOutput = m_outFileHandle;
      info.hStdError = m_outFileHandle;
    }

    else if(m_sendToStd)
    {
      info.dwFlags = STARTF_USESTDHANDLES;
      CreatePipe(&hReadPipe, &hWritePipe, &sa, 0);
      info.hStdOutput = hWritePipe;
      info.hStdError = hWritePipe;
    }

    m_created = CreateProcess(
      NULL,
      const_cast<char*>(m_commandLine.c_str()),
      NULL,
      NULL,
      TRUE,
      getFlags(),
      NULL,
      NULL,
      &info,
      &m_procinfo ) != 0;

    if(m_created && (m_sendToFile || m_sendToStd))
      _beginthread((void(__cdecl*)(void*))readOutput, 0, hReadPipe);

    SetCurrentDirectory( curdir );
  }

  void Process::terminate()
  {
    if(m_created)
    {
      TerminateProcess(m_procinfo.hProcess, 0);
      reset();
    }
  }

  void Process::waitFor()
  {
    WaitForSingleObject(m_procinfo.hProcess, INFINITE);
    reset();
  }

  void Process::reset()
  {
    GetExitCodeProcess(m_procinfo.hProcess, &m_exitCode);
    CloseHandle(m_procinfo.hProcess);
    m_created = false;
    m_procinfo.dwThreadId = -1;

    if( m_isOutFileOpen )
    {
      closeOutFile();
    }
  }

  void Process::openOutFile()
  {
      SECURITY_ATTRIBUTES sa; 

      sa.nLength = sizeof(SECURITY_ATTRIBUTES); 
      sa.bInheritHandle = TRUE; 
      sa.lpSecurityDescriptor = NULL; 

      m_outFileHandle = CreateFile(
        m_outFile.c_str(),
        GENERIC_WRITE,
        0, //open exclusively
        &sa,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL );

      m_isOutFileOpen = true;
  }

  void Process::closeOutFile()
  {
    CloseHandle(m_outFileHandle);
    m_isOutFileOpen = false;
  }

  DWORD Process::getFlags()
  {
    if(m_showWindow)
      return CREATE_NEW_CONSOLE;

    return CREATE_NO_WINDOW;
  }
}