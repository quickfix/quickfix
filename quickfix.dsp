# Microsoft Developer Studio Project File - Name="quickfix" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=quickfix - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "quickfix.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "quickfix.mak" CFG="quickfix - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "quickfix - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "quickfix - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "quickfix - Win32 Release"

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
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "../" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"lib\quickfix.lib"
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Cmds=echo test > EXCLUDE	echo stdafx.h >> EXCLUDE	xcopy src\C++\*.h /S/Y /EXCLUDE:EXCLUDE include\quickfix	del /F EXCLUDE
# End Special Build Tool

!ELSEIF  "$(CFG)" == "quickfix - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "quickfix___Win32_Debug"
# PROP BASE Intermediate_Dir "quickfix___Win32_Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /I "../" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"lib\quickfix_debug.lib"
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Cmds=echo test > EXCLUDE	echo stdafx.h >> EXCLUDE	xcopy src\C++\*.h /S/Y /EXCLUDE:EXCLUDE include\quickfix	del /F EXCLUDE
# End Special Build Tool

!ENDIF 

# Begin Target

# Name "quickfix - Win32 Release"
# Name "quickfix - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=".\src\C++\Acceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\CallStack.cpp"
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
# End Source File
# Begin Source File

SOURCE=".\src\C++\Application.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\CallStack.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ConfigLexer.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Dictionary.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\DOMDocument.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Event.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Exceptions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FlexLexer.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\index.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Initiator.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MSXML_DOMDocument.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Mutex.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Parser.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Queue.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Responder.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Session.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionFactory.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionID.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionSettings.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SessionState.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Settings.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\strptime.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Utility.h"
# End Source File
# End Group
# Begin Group "Field"

# PROP Default_Filter ""
# Begin Group "Field Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\src\C++\FieldMap.cpp"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldTypes.cpp"
# End Source File
# End Group
# Begin Group "Field Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=".\src\C++\DeprecatedFieldNumbers.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\DeprecatedFields.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\DeprecatedValues.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Field.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldConvertors.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldMap.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldNumbers.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Fields.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\FieldTypes.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Values.h"
# End Source File
# End Group
# End Group
# Begin Group "Message"

# PROP Default_Filter ""
# Begin Group "Message Header Files"

# PROP Default_Filter ""
# Begin Group "Fix40"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\fix40\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Email.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\News.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix40\TestRequest.h"
# End Source File
# End Group
# Begin Group "Fix41"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\fix41\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Email.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\News.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix41\TestRequest.h"
# End Source File
# End Group
# Begin Group "Fix42"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\fix42\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Email.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\News.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\QuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix42\TradingSessionStatusRequest.h"
# End Source File
# End Group
# Begin Group "Fix43"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\fix43\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\BidRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\BidResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\CrossOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\CrossOrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\DerivativeSecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\DerivativeSecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Email.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\IndicationOfInterest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ListStrikePrice.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MassQuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\MultilegOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\NewOrderCross.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\NewOrderMultileg.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\News.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderMassCancelReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderMassCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderMassStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\QuoteRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\QuoteStatusReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\RegistrationInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\RegistrationInstructionsResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\RFQRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityTypeRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SecurityTypes.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\TradeCaptureReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\TradeCaptureReportRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix43\TradingSessionStatusRequest.h"
# End Source File
# End Group
# Begin Group "Fix44"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\src\C++\fix44\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\AllocationInstruction.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\AllocationInstructionAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\AllocationReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\AllocationReportAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\AssignmentReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\BidRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\BidResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralAssignment.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralInquiry.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralInquiryAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CollateralResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Confirmation.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ConfirmationAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ConfirmationRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CrossOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\CrossOrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\DerivativeSecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\DerivativeSecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Email.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\IndicationOfInterest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ListStrikePrice.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MassQuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\MultilegOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\NewOrderCross.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\NewOrderMultileg.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\News.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderMassCancelReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderMassCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderMassStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\PositionMaintenanceReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\PositionMaintenanceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\PositionReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteStatusReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\RegistrationInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\RegistrationInstructionsResponse.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\RequestForPositions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\RequestForPositionsAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\RFQRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityTypeRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SecurityTypes.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SettlementInstructionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradeCaptureReport.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradeCaptureReportAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradeCaptureReportRequest.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradeCaptureReportRequestAck.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\fix44\TradingSessionStatusRequest.h"
# End Source File
# End Group
# Begin Source File

SOURCE=".\src\C++\DataDictionary.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Group.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Message.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Messages.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageSorters.h"
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
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnection.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketConnector.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketInitiator.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketMonitor.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\SocketServer.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketAcceptor.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketConnection.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\ThreadedSocketInitiator.h"
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
# End Source File
# Begin Source File

SOURCE=".\src\C++\FileStore.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\Log.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MessageStore.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLLog.h"
# End Source File
# Begin Source File

SOURCE=".\src\C++\MySQLStore.h"
# End Source File
# End Group
# End Group
# Begin Source File

SOURCE=".\src\C++\stdafx.h"
# End Source File
# End Target
# End Project
