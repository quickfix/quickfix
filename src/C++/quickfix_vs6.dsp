# Microsoft Developer Studio Project File - Name="quickfix_vs6" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=quickfix_vs6 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_vs6.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "quickfix_vs6.mak" CFG="quickfix_vs6 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "quickfix_vs6 - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "quickfix_vs6 - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "quickfix_vs6 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\..\lib"
# PROP Intermediate_Dir "release\vs6"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I ".." /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\lib\quickfix.lib"
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Cmds=echo test\ > EXCLUDE	echo stdafx.h >> EXCLUDE	xcopy *.h /S/Y /EXCLUDE:EXCLUDE ..\..\include\quickfix	del /F EXCLUDE
# End Special Build Tool

!ELSEIF  "$(CFG)" == "quickfix_vs6 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "quickfix___Win32_Debug"
# PROP BASE Intermediate_Dir "quickfix___Win32_Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\..\lib\debug"
# PROP Intermediate_Dir "debug\vs6"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /I ".." /D "_LIB" /D "WIN32" /D "_DEBUG" /D "_MBCS" /FD /GZ /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\lib\debug\quickfix.lib"
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Cmds=echo test\ > EXCLUDE	echo stdafx.h >> EXCLUDE	xcopy *.h /S/Y /EXCLUDE:EXCLUDE ..\..\include\quickfix	del /F EXCLUDE
# End Special Build Tool

!ENDIF 

# Begin Target

# Name "quickfix_vs6 - Win32 Release"
# Name "quickfix_vs6 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=".\Acceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\CallStack.cpp"
# End Source File
# Begin Source File

SOURCE=".\ConfigLexer.cpp"
# End Source File
# Begin Source File

SOURCE=".\Dictionary.cpp"
# End Source File
# Begin Source File

SOURCE=".\Initiator.cpp"
# End Source File
# Begin Source File

SOURCE=".\LIBXML_DOMDocument.cpp"
# End Source File
# Begin Source File

SOURCE=".\MSXML_DOMDocument.cpp"
# End Source File
# Begin Source File

SOURCE=".\Parser.cpp"
# End Source File
# Begin Source File

SOURCE=".\Session.cpp"
# End Source File
# Begin Source File

SOURCE=".\SessionFactory.cpp"
# End Source File
# Begin Source File

SOURCE=".\SessionSettings.cpp"
# End Source File
# Begin Source File

SOURCE=".\SessionTime.cpp"
# End Source File
# Begin Source File

SOURCE=".\Settings.cpp"
# End Source File
# Begin Source File

SOURCE=".\stdafx.cpp"
# End Source File
# Begin Source File

SOURCE=".\strptime.c"
# End Source File
# Begin Source File

SOURCE=".\Utility.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=".\Acceptor.h"
# End Source File
# Begin Source File

SOURCE=".\Application.h"
# End Source File
# Begin Source File

SOURCE=".\CallStack.h"
# End Source File
# Begin Source File

SOURCE=".\ConfigLexer.h"
# End Source File
# Begin Source File

SOURCE=".\Dictionary.h"
# End Source File
# Begin Source File

SOURCE=".\DOMDocument.h"
# End Source File
# Begin Source File

SOURCE=".\Event.h"
# End Source File
# Begin Source File

SOURCE=".\Exceptions.h"
# End Source File
# Begin Source File

SOURCE=".\FlexLexer.h"
# End Source File
# Begin Source File

SOURCE=".\index.h"
# End Source File
# Begin Source File

SOURCE=".\Initiator.h"
# End Source File
# Begin Source File

SOURCE=".\LIBXML_DOMDocument.h"
# End Source File
# Begin Source File

SOURCE=".\MSXML_DOMDocument.h"
# End Source File
# Begin Source File

SOURCE=".\Mutex.h"
# End Source File
# Begin Source File

SOURCE=".\Parser.h"
# End Source File
# Begin Source File

SOURCE=".\Queue.h"
# End Source File
# Begin Source File

SOURCE=".\Responder.h"
# End Source File
# Begin Source File

SOURCE=".\Session.h"
# End Source File
# Begin Source File

SOURCE=".\SessionFactory.h"
# End Source File
# Begin Source File

SOURCE=".\SessionID.h"
# End Source File
# Begin Source File

SOURCE=".\SessionSettings.h"
# End Source File
# Begin Source File

SOURCE=".\SessionState.h"
# End Source File
# Begin Source File

SOURCE=".\SessionTime.h"
# End Source File
# Begin Source File

SOURCE=".\Settings.h"
# End Source File
# Begin Source File

SOURCE=".\strptime.h"
# End Source File
# Begin Source File

SOURCE=".\Utility.h"
# End Source File
# End Group
# Begin Group "Field"

# PROP Default_Filter ""
# Begin Group "Field Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\FieldMap.cpp"
# End Source File
# Begin Source File

SOURCE=".\FieldTypes.cpp"
# End Source File
# End Group
# Begin Group "Field Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=".\DeprecatedFieldNumbers.h"
# End Source File
# Begin Source File

SOURCE=".\DeprecatedFields.h"
# End Source File
# Begin Source File

SOURCE=".\DeprecatedValues.h"
# End Source File
# Begin Source File

SOURCE=".\Field.h"
# End Source File
# Begin Source File

SOURCE=".\FieldConvertors.h"
# End Source File
# Begin Source File

SOURCE=".\FieldMap.h"
# End Source File
# Begin Source File

SOURCE=".\FieldNumbers.h"
# End Source File
# Begin Source File

SOURCE=".\Fields.h"
# End Source File
# Begin Source File

SOURCE=".\FieldTypes.h"
# End Source File
# Begin Source File

SOURCE=".\Values.h"
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

SOURCE=".\fix40\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Email.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Message.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\News.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\fix40\TestRequest.h"
# End Source File
# End Group
# Begin Group "Fix41"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\fix41\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Email.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Message.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\News.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix41\TestRequest.h"
# End Source File
# End Group
# Begin Group "Fix42"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\fix42\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\BidRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\BidResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Email.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\IndicationofInterest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ListStrikePrice.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Message.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\News.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\QuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix42\TradingSessionStatusRequest.h"
# End Source File
# End Group
# Begin Group "Fix43"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\fix43\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Allocation.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\AllocationACK.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\BidRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\BidResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\CrossOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\CrossOrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\DerivativeSecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\DerivativeSecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Email.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\IndicationOfInterest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ListStrikePrice.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MassQuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Message.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\MultilegOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\NewOrderCross.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\NewOrderMultileg.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\News.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderMassCancelReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderMassCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderMassStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\QuoteRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\QuoteStatusReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\RegistrationInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\RegistrationInstructionsResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\RFQRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityTypeRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SecurityTypes.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\TradeCaptureReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\TradeCaptureReportRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix43\TradingSessionStatusRequest.h"
# End Source File
# End Group
# Begin Group "Fix44"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\fix44\Advertisement.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\AllocationInstruction.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\AllocationInstructionAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\AllocationReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\AllocationReportAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\AssignmentReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\BidRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\BidResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\BusinessMessageReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralAssignment.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralInquiry.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralInquiryAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CollateralResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Confirmation.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ConfirmationAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ConfirmationRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CrossOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\CrossOrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\DerivativeSecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\DerivativeSecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\DontKnowTrade.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Email.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ExecutionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Heartbeat.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\IndicationOfInterest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ListCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ListExecute.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ListStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ListStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ListStrikePrice.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Logon.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Logout.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MarketDataIncrementalRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MarketDataRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MarketDataRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MarketDataSnapshotFullRefresh.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MassQuote.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MassQuoteAcknowledgement.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Message.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\MultilegOrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\NewOrderCross.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\NewOrderList.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\NewOrderMultileg.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\NewOrderSingle.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\News.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderCancelReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderCancelReplaceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderMassCancelReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderMassCancelRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderMassStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\OrderStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\PositionMaintenanceReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\PositionMaintenanceRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\PositionReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Quote.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteCancel.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteRequestReject.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteStatusReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\QuoteStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\RegistrationInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\RegistrationInstructionsResponse.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\Reject.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\RequestForPositions.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\RequestForPositionsAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\ResendRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\RFQRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityDefinition.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityDefinitionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityList.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityListRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityTypeRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SecurityTypes.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SequenceReset.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SettlementInstructionRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\SettlementInstructions.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TestRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradeCaptureReport.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradeCaptureReportAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradeCaptureReportRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradeCaptureReportRequestAck.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradingSessionStatus.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\TradingSessionStatusRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\UserRequest.h"
# End Source File
# Begin Source File

SOURCE=".\fix44\UserResponse.h"
# End Source File
# End Group
# Begin Source File

SOURCE=".\DataDictionary.h"
# End Source File
# Begin Source File

SOURCE=".\Group.h"
# End Source File
# Begin Source File

SOURCE=".\Message.h"
# End Source File
# Begin Source File

SOURCE=".\MessageCracker.h"
# End Source File
# Begin Source File

SOURCE=".\Messages.h"
# End Source File
# Begin Source File

SOURCE=".\MessageSorters.h"
# End Source File
# End Group
# Begin Group "Message Source Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\DataDictionary.cpp"
# End Source File
# Begin Source File

SOURCE=".\Group.cpp"
# End Source File
# Begin Source File

SOURCE=".\Message.cpp"
# End Source File
# Begin Source File

SOURCE=".\MessageSorters.cpp"
# End Source File
# End Group
# End Group
# Begin Group "Socket"

# PROP Default_Filter ""
# Begin Group "Socket Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\SocketAcceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\SocketConnection.cpp"
# End Source File
# Begin Source File

SOURCE=".\SocketConnector.cpp"
# End Source File
# Begin Source File

SOURCE=".\SocketInitiator.cpp"
# End Source File
# Begin Source File

SOURCE=".\SocketMonitor.cpp"
# End Source File
# Begin Source File

SOURCE=".\SocketServer.cpp"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketAcceptor.cpp"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketConnection.cpp"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketInitiator.cpp"
# End Source File
# End Group
# Begin Group "Socket Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=".\SocketAcceptor.h"
# End Source File
# Begin Source File

SOURCE=".\SocketConnection.h"
# End Source File
# Begin Source File

SOURCE=".\SocketConnector.h"
# End Source File
# Begin Source File

SOURCE=".\SocketInitiator.h"
# End Source File
# Begin Source File

SOURCE=".\SocketMonitor.h"
# End Source File
# Begin Source File

SOURCE=".\SocketServer.h"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketAcceptor.h"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketConnection.h"
# End Source File
# Begin Source File

SOURCE=".\ThreadedSocketInitiator.h"
# End Source File
# End Group
# End Group
# Begin Group "Storage"

# PROP Default_Filter ""
# Begin Group "Storage Source Files"

# PROP Default_Filter "*.cpp"
# Begin Source File

SOURCE=".\FileLog.cpp"
# End Source File
# Begin Source File

SOURCE=".\FileStore.cpp"
# End Source File
# Begin Source File

SOURCE=".\Log.cpp"
# End Source File
# Begin Source File

SOURCE=".\MessageStore.cpp"
# End Source File
# Begin Source File

SOURCE=.\MSSQLLog.cpp
# End Source File
# Begin Source File

SOURCE=.\MSSQLStore.cpp
# End Source File
# Begin Source File

SOURCE=".\MySQLLog.cpp"
# End Source File
# Begin Source File

SOURCE=".\MySQLStore.cpp"
# End Source File
# Begin Source File

SOURCE=.\OdbcLog.cpp
# End Source File
# Begin Source File

SOURCE=.\OdbcStore.cpp
# End Source File
# Begin Source File

SOURCE=.\PostgreSQLLog.cpp
# End Source File
# Begin Source File

SOURCE=.\PostgreSQLStore.cpp
# End Source File
# End Group
# Begin Group "Storage Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=".\FileLog.h"
# End Source File
# Begin Source File

SOURCE=".\FileStore.h"
# End Source File
# Begin Source File

SOURCE=".\Log.h"
# End Source File
# Begin Source File

SOURCE=".\MessageStore.h"
# End Source File
# Begin Source File

SOURCE=.\MSSQLLog.h
# End Source File
# Begin Source File

SOURCE=.\MSSQLStore.h
# End Source File
# Begin Source File

SOURCE=.\MySQLConnection.h
# End Source File
# Begin Source File

SOURCE=".\MySQLLog.h"
# End Source File
# Begin Source File

SOURCE=".\MySQLStore.h"
# End Source File
# Begin Source File

SOURCE=.\OdbcConnection.h
# End Source File
# Begin Source File

SOURCE=.\OdbcLog.h
# End Source File
# Begin Source File

SOURCE=.\OdbcStore.h
# End Source File
# Begin Source File

SOURCE=.\PostgreSQLConnection.h
# End Source File
# Begin Source File

SOURCE=.\PostgreSQLLog.h
# End Source File
# Begin Source File

SOURCE=.\PostgreSQLStore.h
# End Source File
# End Group
# End Group
# Begin Source File

SOURCE=..\config_windows.h
# End Source File
# Begin Source File

SOURCE=".\stdafx.h"
# End Source File
# End Target
# End Project
