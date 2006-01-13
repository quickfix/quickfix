# Microsoft Developer Studio Project File - Name="quickfix_jni_vs6" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=quickfix_jni_vs6 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_jni_vs6.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_jni_vs6.mak" CFG="quickfix_jni_vs6 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "quickfix_jni_vs6 - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "quickfix_jni_vs6 - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "quickfix_jni_vs6 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\..\lib"
# PROP Intermediate_Dir "release\vs6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "QUICKFIX_JNI_EXPORTS" /YX /FD /c
# ADD CPP /nologo /MD /w /W0 /GR /GX /O2 /I "../../include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "QUICKFIX_JNI_EXPORTS" /YX /FD /Zm200 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 quickfix.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"..\..\lib\quickfix_jni.dll" /libpath:"../../lib"

!ELSEIF  "$(CFG)" == "quickfix_jni_vs6 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\..\lib"
# PROP Intermediate_Dir "release\vs6"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "QUICKFIX_JNI_EXPORTS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /w /W0 /Gm /GR /GX /ZI /Od /I "../../include" /D "_MBCS" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_USRDLL" /D "QUICKFIX_JNI_EXPORTS" /YX /FD /GZ /Zm200 /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 quickfix.lib ws2_32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"..\..\lib\quickfix_jni.dll" /pdbtype:sept /libpath:"../../lib/debug"

!ENDIF 

# Begin Target

# Name "quickfix_jni_vs6 - Win32 Release"
# Name "quickfix_jni_vs6 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Conversions.cpp
# End Source File
# Begin Source File

SOURCE=.\JavaApplication.cpp
# End Source File
# Begin Source File

SOURCE=.\JavaLog.cpp
# End Source File
# Begin Source File

SOURCE=.\JavaLogFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\JavaMessageStore.cpp
# End Source File
# Begin Source File

SOURCE=.\JavaMessageStoreFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\JVM.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_CppLog.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_CppMessageStore.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_DataDictionary.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileLog.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileLogFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileStore.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileStoreFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_Group.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_MemoryStore.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_Message.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLLog.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLLogFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLStore.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLStoreFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_ScreenLog.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_ScreenLogFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_Session.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_SessionID.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_SessionSettings.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_SocketAcceptor.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_SocketInitiator.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_ThreadedSocketAcceptor.cpp
# End Source File
# Begin Source File

SOURCE=.\quickfix_ThreadedSocketInitiator.cpp
# End Source File
# Begin Source File

SOURCE=.\Stdafx.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Conversions.h
# End Source File
# Begin Source File

SOURCE=.\JavaApplication.h
# End Source File
# Begin Source File

SOURCE=.\JavaLog.h
# End Source File
# Begin Source File

SOURCE=.\JavaLogFactory.h
# End Source File
# Begin Source File

SOURCE=.\JavaMessageStore.h
# End Source File
# Begin Source File

SOURCE=.\JavaMessageStoreFactory.h
# End Source File
# Begin Source File

SOURCE=.\JVM.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_CppLog.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_CppMessageStore.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_DataDictionary.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileLog.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileLogFactory.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileStore.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_FileStoreFactory.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_Group.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_MemoryStore.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_Message.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLLog.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLLogFactory.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLStore.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_MySQLStoreFactory.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_ScreenLog.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_ScreenLogFactory.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_Session.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_SessionID.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_SessionSettings.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_SocketAcceptor.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_SocketInitiator.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_ThreadedSocketAcceptor.h
# End Source File
# Begin Source File

SOURCE=.\quickfix_ThreadedSocketInitiator.h
# End Source File
# Begin Source File

SOURCE=.\Stdafx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
