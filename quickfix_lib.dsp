# Microsoft Developer Studio Project File - Name="quickfix_lib" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=quickfix_lib - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_lib.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_lib.mak" CFG="quickfix_lib - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "quickfix_lib - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "quickfix_lib - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

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
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "../" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX"stdafx.h" /FD /Zm1000 /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"lib\quickfix.lib"

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "quickfix_lib___Win32_Debug"
# PROP BASE Intermediate_Dir "quickfix_lib___Win32_Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /I "../" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX"stdafx.h" /FD /Zm1000 /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"lib\quickfix_debug.lib"

!ENDIF 

# Begin Target

# Name "quickfix_lib - Win32 Release"
# Name "quickfix_lib - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=".\src\C++\Acceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ConfigLexer.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Dictionary.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Initiator.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MSXML_DOMDocument.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Parser.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Session.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionFactory.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionSettings.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Settings.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\stdafx.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\strptime.c"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Utility.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=".\src\C++\Acceptor.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Acceptor.h"
InputName=Acceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Acceptor.h"
InputName=Acceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Application.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Application.h"
InputName=Application

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Application.h"
InputName=Application

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\ConfigLexer.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\ConfigLexer.h"
InputName=ConfigLexer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\ConfigLexer.h"
InputName=ConfigLexer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Dictionary.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Dictionary.h"
InputName=Dictionary

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Dictionary.h"
InputName=Dictionary

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\DOMDocument.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\DOMDocument.h"
InputName=DOMDocument

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\DOMDocument.h"
InputName=DOMDocument

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Event.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Event.h"
InputName=Event

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Event.h"
InputName=Event

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Exceptions.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Exceptions.h"
InputName=Exceptions

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Exceptions.h"
InputName=Exceptions

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FlexLexer.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FlexLexer.h"
InputName=FlexLexer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FlexLexer.h"
InputName=FlexLexer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\index.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\index.h"
InputName=index

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\index.h"
InputName=index

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Initiator.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Initiator.h"
InputName=Initiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Initiator.h"
InputName=Initiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MSXML_DOMDocument.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MSXML_DOMDocument.h"
InputName=MSXML_DOMDocument

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MSXML_DOMDocument.h"
InputName=MSXML_DOMDocument

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Mutex.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Mutex.h"
InputName=Mutex

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Mutex.h"
InputName=Mutex

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Parser.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Parser.h"
InputName=Parser

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Parser.h"
InputName=Parser

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Queue.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Queue.h"
InputName=Queue

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Queue.h"
InputName=Queue

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Session.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Session.h"
InputName=Session

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Session.h"
InputName=Session

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionFactory.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SessionFactory.h"
InputName=SessionFactory

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SessionFactory.h"
InputName=SessionFactory

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionID.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SessionID.h"
InputName=SessionID

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SessionID.h"
InputName=SessionID

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionSettings.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SessionSettings.h"
InputName=SessionSettings

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SessionSettings.h"
InputName=SessionSettings

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionState.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SessionState.h"
InputName=SessionState

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SessionState.h"
InputName=SessionState

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Settings.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Settings.h"
InputName=Settings

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Settings.h"
InputName=Settings

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\strptime.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\strptime.h"
InputName=strptime

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\strptime.h"
InputName=strptime

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Utility.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Utility.h"
InputName=Utility

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Utility.h"
InputName=Utility

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "Field"

# PROP Default_Filter ""
# Begin Group "Field Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\src\C++\FieldTypes.cpp"
# End Source File
# End Group
# Begin Group "Field Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=".\src\C++\DeprecatedFieldNumbers.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\DeprecatedFieldNumbers.h"
InputName=DeprecatedFieldNumbers

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\DeprecatedFieldNumbers.h"
InputName=DeprecatedFieldNumbers

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\DeprecatedFields.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\DeprecatedFields.h"
InputName=DeprecatedFields

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\DeprecatedValues.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\DeprecatedValues.h"
InputName=DeprecatedValues

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Field.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Field.h"
InputName=Field

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Field.h"
InputName=Field

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldConvertors.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FieldConvertors.h"
InputName=FieldConvertors

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FieldConvertors.h"
InputName=FieldConvertors

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldMap.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FieldMap.h"
InputName=FieldMap

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FieldMap.h"
InputName=FieldMap

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldNumbers.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FieldNumbers.h"
InputName=FieldNumbers

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FieldNumbers.h"
InputName=FieldNumbers

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Fields.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Fields.h"
InputName=Fields

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Fields.h"
InputName=Fields

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldTypes.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FieldTypes.h"
InputName=FieldTypes

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FieldTypes.h"
InputName=FieldTypes

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Values.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Values.h"
InputName=Values

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Values.h"
InputName=Values

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# End Group
# End Group
# Begin Group "Message"

# PROP Default_Filter ""
# Begin Group "Message Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\DataDictionary.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\DataDictionary.h"
InputName=DataDictionary

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\DataDictionary.h"
InputName=DataDictionary

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX40_MessageCracker.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX40_MessageCracker.h"
InputName=FIX40_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX40_MessageCracker.h"
InputName=FIX40_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX40_Messages.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX40_Messages.h"
InputName=FIX40_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX40_Messages.h"
InputName=FIX40_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX41_MessageCracker.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX41_MessageCracker.h"
InputName=FIX41_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX41_MessageCracker.h"
InputName=FIX41_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX41_Messages.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX41_Messages.h"
InputName=FIX41_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX41_Messages.h"
InputName=FIX41_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX42_MessageCracker.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX42_MessageCracker.h"
InputName=FIX42_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX42_MessageCracker.h"
InputName=FIX42_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX42_Messages.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX42_Messages.h"
InputName=FIX42_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX42_Messages.h"
InputName=FIX42_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX43_MessageCracker.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX43_MessageCracker.h"
InputName=FIX43_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX43_MessageCracker.h"
InputName=FIX43_MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FIX43_Messages.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FIX43_Messages.h"
InputName=FIX43_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FIX43_Messages.h"
InputName=FIX43_Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Group.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Group.h"
InputName=Group

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Group.h"
InputName=Group

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Message.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Message.h"
InputName=Message

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Message.h"
InputName=Message

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageCracker.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MessageCracker.h"
InputName=MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MessageCracker.h"
InputName=MessageCracker

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Messages.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Messages.h"
InputName=Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Messages.h"
InputName=Messages

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageSorters.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MessageSorters.h"
InputName=MessageSorters

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MessageSorters.h"
InputName=MessageSorters

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# End Group
# Begin Group "Message Source Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\DataDictionary.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Group.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Message.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageSorters.cpp"
# End Source File
# End Group
# End Group
# Begin Group "Socket"

# PROP Default_Filter ""
# Begin Group "Socket Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\src\C++\SocketAcceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnection.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnector.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketInitiator.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketMonitor.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketServer.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketAcceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketConnection.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketInitiator.cpp"
# End Source File
# End Group
# Begin Group "Socket Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=".\src\C++\SocketAcceptor.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketAcceptor.h"
InputName=SocketAcceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketAcceptor.h"
InputName=SocketAcceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnection.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketConnection.h"
InputName=SocketConnection

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketConnection.h"
InputName=SocketConnection

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnector.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketConnector.h"
InputName=SocketConnector

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketConnector.h"
InputName=SocketConnector

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketInitiator.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketInitiator.h"
InputName=SocketInitiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketInitiator.h"
InputName=SocketInitiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketMonitor.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketMonitor.h"
InputName=SocketMonitor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketMonitor.h"
InputName=SocketMonitor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketServer.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\SocketServer.h"
InputName=SocketServer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\SocketServer.h"
InputName=SocketServer

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketAcceptor.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketAcceptor.h"
InputName=ThreadedSocketAcceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketAcceptor.h"
InputName=ThreadedSocketAcceptor

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketConnection.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketConnection.h"
InputName=ThreadedSocketConnection

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketConnection.h"
InputName=ThreadedSocketConnection

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketInitiator.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketInitiator.h"
InputName=ThreadedSocketInitiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\ThreadedSocketInitiator.h"
InputName=ThreadedSocketInitiator

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# End Group
# End Group
# Begin Group "Storage"

# PROP Default_Filter ""
# Begin Group "Storage Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\src\C++\FileLog.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FileStore.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Log.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageStore.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLLog.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLStore.cpp"
# End Source File
# End Group
# Begin Group "Storage Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\FileLog.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FileLog.h"
InputName=FileLog

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FileLog.h"
InputName=FileLog

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\FileStore.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\FileStore.h"
InputName=FileStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\FileStore.h"
InputName=FileStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\Log.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\Log.h"
InputName=Log

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\Log.h"
InputName=Log

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageStore.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MessageStore.h"
InputName=MessageStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MessageStore.h"
InputName=MessageStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLLog.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MySQLLog.h"
InputName=MySQLLog

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MySQLLog.h"
InputName=MySQLLog

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLStore.h"

!IF  "$(CFG)" == "quickfix_lib - Win32 Release"

# Begin Custom Build
InputPath=".\src\C++\MySQLStore.h"
InputName=MySQLStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "quickfix_lib - Win32 Debug"

# Begin Custom Build
InputPath=".\src\C++\MySQLStore.h"
InputName=MySQLStore

"include\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	echo off 
	IF EXIST include\$(InputName).h (del include\$(InputName).h) 
	xcopy "$(InputPath)" include 
	
# End Custom Build

!ENDIF 

# End Source File
# End Group
# End Group
# Begin Source File

SOURCE=".\src\C++\stdafx.h"
# End Source File
# End Target
# End Project
