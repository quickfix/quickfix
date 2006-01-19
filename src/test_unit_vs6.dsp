# Microsoft Developer Studio Project File - Name="test_unit_vs6" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=test_unit_vs6 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "test_unit_vs6.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "test_unit_vs6.mak" CFG="test_unit_vs6 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "test_unit_vs6 - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "test_unit_vs6 - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "test_unit_vs6 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ut___Win32_Release"
# PROP BASE Intermediate_Dir "ut___Win32_Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\bin"
# PROP Intermediate_Dir "release\vs6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I ".." /I "c++" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /FD /I /src/socket" " /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 quickfix.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386 /out:"..\bin\ut.exe" /libpath:"..\lib"
# SUBTRACT LINK32 /profile

!ELSEIF  "$(CFG)" == "test_unit_vs6 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "ut___Win32_Debug"
# PROP BASE Intermediate_Dir "ut___Win32_Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\bin\debug"
# PROP Intermediate_Dir "debug\vs6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /I ".." /I "c++" /D "_CONSOLE" /D "WIN32" /D "_DEBUG" /D "_MBCS" /FD /I /src/socket" /GZ " /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 quickfix.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:no /debug /machine:I386 /out:"..\bin\debug\ut.exe" /pdbtype:sept /libpath:"..\lib\debug"

!ENDIF 

# Begin Target

# Name "test_unit_vs6 - Win32 Release"
# Name "test_unit_vs6 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=".\C++\test\AcceptorTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\DataDictionaryTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\DictionaryTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FieldBaseTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FieldConvertorsTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileStoreFactoryTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileUtilitiesTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=.\getopt.c
# End Source File
# Begin Source File

SOURCE=".\C++\test\MemoryStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MessagesTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MessageStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MSSQLStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MySQLStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\ParserTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\PostgreSQLStoreTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionIDTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionSettingsTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionTimeTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SettingsTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketAcceptorTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketConnectorTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketServerTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketUtilitiesTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\StringUtilitiesTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=.\ut.cpp
# End Source File
# Begin Source File

SOURCE=".\C++\test\UtcTimeOnlyTestCase.cpp"
# End Source File
# Begin Source File

SOURCE=".\C++\test\UtcTimeStampTestCase.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=".\C++\test\AcceptorTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\DataDictionaryTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\DictionaryTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FieldBaseTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FieldConvertorsTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileStoreFactoryTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\FileUtilitiesTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\getopt-repl.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MemoryStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MessagesTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MessageStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MSSQLStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\MySQLStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\ParserTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\PostgreSQLStoreTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionIDTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionSettingsTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SessionTimeTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SettingsTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketAcceptorTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketConnectorTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketServerTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\SocketUtilitiesTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\StringUtilitiesTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\TestSuite.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\UtcTimeOnlyTestCase.h"
# End Source File
# Begin Source File

SOURCE=".\C++\test\UtcTimeStampTestCase.h"
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
