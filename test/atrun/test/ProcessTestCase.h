/* -*- C++ -*- */

#ifndef PROCESSTESTCASE_H
#define PROCESSTESTCASE_H

#include <CPPTest/TestCase.h>
#include "../Process.h"

namespace ATRUN
{
  class ProcessTestCase : public CPPTest::TestCase<Process>
  {
  public:
    ProcessTestCase()
    {
      add(&m_createProcess);
      add(&m_sendOutputToFile);
      add(&m_setWorkingDirectory);
      add(&m_destroyProcess);
      add(&m_waitFor);
    }

  private:
    typedef CPPTest::Test<Process> Test;

    class createProcess : public Test
    {
    public:
      bool onSetup( Process*& pObject );

      void onRun( Process& object );
      
      Process m_Process;
    } m_createProcess;

    class sendOutputToFile : public Test
    {
    public:
      bool onSetup( Process*& pObject );
      
      void onRun( Process& object );

      Process m_Process;
    } m_sendOutputToFile;

    class setWorkingDirectory : public Test
    {
      public:
      bool onSetup( Process*& pObject );
      
      void onRun( Process& object );

      Process m_Process;
    } m_setWorkingDirectory;

    class terminateProcess : public Test
    {
    public:
      bool onSetup( Process*& pObject );
      
      void onRun( Process& object );

      Process m_Process;
    } m_destroyProcess;

    class waitFor : public Test
    {
    public:
      bool onSetup( Process*& pObject );
      
      void onRun( Process& object );

      Process m_Process;
    } m_waitFor;

  };
}

#endif // PROCESSTESTCASE_H