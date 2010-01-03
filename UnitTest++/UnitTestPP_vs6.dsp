# Microsoft Developer Studio Project File - Name="UnitTestPP_vs6" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=UnitTestPP_vs6 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "UnitTestPP_vs6.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "UnitTestPP_vs6.mak" CFG="UnitTestPP_vs6 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "UnitTestPP_vs6 - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "UnitTestPP_vs6 - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "UnitTestPP_vs6 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x411 /d "NDEBUG"
# ADD RSC /l 0x411 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\UnitTestPP_vs6.lib"

!ELSEIF  "$(CFG)" == "UnitTestPP_vs6 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x411 /d "_DEBUG"
# ADD RSC /l 0x411 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\debug\UnitTestPP_vs6.lib"

!ENDIF 

# Begin Target

# Name "UnitTestPP_vs6 - Win32 Release"
# Name "UnitTestPP_vs6 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\AssertException.cpp
# End Source File
# Begin Source File

SOURCE=.\src\Checks.cpp
# End Source File
# Begin Source File

SOURCE=.\src\CurrentTest.cpp
# End Source File
# Begin Source File

SOURCE=.\src\DeferredTestReporter.cpp
# End Source File
# Begin Source File

SOURCE=.\src\DeferredTestResult.cpp
# End Source File
# Begin Source File

SOURCE=.\src\MemoryOutStream.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ReportAssert.cpp
# End Source File
# Begin Source File

SOURCE=.\src\Test.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestDetails.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestList.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestReporter.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestReporterStdout.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestResults.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestRunner.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TimeConstraint.cpp
# End Source File
# Begin Source File

SOURCE=.\src\XmlTestReporter.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\src\AssertException.h
# End Source File
# Begin Source File

SOURCE=.\src\CheckMacros.h
# End Source File
# Begin Source File

SOURCE=.\src\Checks.h
# End Source File
# Begin Source File

SOURCE=.\src\Config.h
# End Source File
# Begin Source File

SOURCE=.\src\CurrentTest.h
# End Source File
# Begin Source File

SOURCE=.\src\DeferredTestReporter.h
# End Source File
# Begin Source File

SOURCE=.\src\DeferredTestResult.h
# End Source File
# Begin Source File

SOURCE=.\src\ExecuteTest.h
# End Source File
# Begin Source File

SOURCE=.\src\MemoryOutStream.h
# End Source File
# Begin Source File

SOURCE=.\src\ReportAssert.h
# End Source File
# Begin Source File

SOURCE=.\src\Test.h
# End Source File
# Begin Source File

SOURCE=.\src\TestDetails.h
# End Source File
# Begin Source File

SOURCE=.\src\TestList.h
# End Source File
# Begin Source File

SOURCE=.\src\TestMacros.h
# End Source File
# Begin Source File

SOURCE=.\src\TestReporter.h
# End Source File
# Begin Source File

SOURCE=.\src\TestReporterStdout.h
# End Source File
# Begin Source File

SOURCE=.\src\TestResults.h
# End Source File
# Begin Source File

SOURCE=.\src\TestRunner.h
# End Source File
# Begin Source File

SOURCE=.\src\TestSuite.h
# End Source File
# Begin Source File

SOURCE=.\src\TimeConstraint.h
# End Source File
# Begin Source File

SOURCE=.\src\TimeHelpers.h
# End Source File
# Begin Source File

SOURCE=".\src\UnitTest++.h"
# End Source File
# Begin Source File

SOURCE=.\src\XmlTestReporter.h
# End Source File
# End Group
# Begin Group "Win32"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\Win32\TimeHelpers.cpp
# End Source File
# Begin Source File

SOURCE=.\src\Win32\TimeHelpers.h
# End Source File
# End Group
# End Target
# End Project
