/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX44_MESSAGECRACKER_H
#define FIX44_MESSAGECRACKER_H


#include "../SessionID.h"
#include "../Exceptions.h"

#include "../fix44/Message.h"

namespace FIX44
{  
  class Heartbeat; 
  class TestRequest; 
  class ResendRequest; 
  class Reject; 
  class SequenceReset; 
  class Logout; 
  class IOI; 
  class Advertisement; 
  class ExecutionReport; 
  class OrderCancelReject; 
  class Logon; 
  class News; 
  class Email; 
  class NewOrderSingle; 
  class NewOrderList; 
  class OrderCancelRequest; 
  class OrderCancelReplaceRequest; 
  class OrderStatusRequest; 
  class AllocationInstruction; 
  class ListCancelRequest; 
  class ListExecute; 
  class ListStatusRequest; 
  class ListStatus; 
  class AllocationInstructionAck; 
  class DontKnowTrade; 
  class QuoteRequest; 
  class Quote; 
  class SettlementInstructions; 
  class MarketDataRequest; 
  class MarketDataSnapshotFullRefresh; 
  class MarketDataIncrementalRefresh; 
  class MarketDataRequestReject; 
  class QuoteCancel; 
  class QuoteStatusRequest; 
  class MassQuoteAcknowledgement; 
  class SecurityDefinitionRequest; 
  class SecurityDefinition; 
  class SecurityStatusRequest; 
  class SecurityStatus; 
  class TradingSessionStatusRequest; 
  class TradingSessionStatus; 
  class MassQuote; 
  class BusinessMessageReject; 
  class BidRequest; 
  class BidResponse; 
  class ListStrikePrice; 
  class XMLnonFIX; 
  class RegistrationInstructions; 
  class RegistrationInstructionsResponse; 
  class OrderMassCancelRequest; 
  class OrderMassCancelReport; 
  class NewOrderCross; 
  class CrossOrderCancelReplaceRequest; 
  class CrossOrderCancelRequest; 
  class SecurityTypeRequest; 
  class SecurityTypes; 
  class SecurityListRequest; 
  class SecurityList; 
  class DerivativeSecurityListRequest; 
  class DerivativeSecurityList; 
  class NewOrderMultileg; 
  class MultilegOrderCancelReplace; 
  class TradeCaptureReportRequest; 
  class TradeCaptureReport; 
  class OrderMassStatusRequest; 
  class QuoteRequestReject; 
  class RFQRequest; 
  class QuoteStatusReport; 
  class QuoteResponse; 
  class Confirmation; 
  class PositionMaintenanceRequest; 
  class PositionMaintenanceReport; 
  class RequestForPositions; 
  class RequestForPositionsAck; 
  class PositionReport; 
  class TradeCaptureReportRequestAck; 
  class TradeCaptureReportAck; 
  class AllocationReport; 
  class AllocationReportAck; 
  class ConfirmationAck; 
  class SettlementInstructionRequest; 
  class AssignmentReport; 
  class CollateralRequest; 
  class CollateralAssignment; 
  class CollateralResponse; 
  class CollateralReport; 
  class CollateralInquiry; 
  class NetworkCounterpartySystemStatusRequest; 
  class NetworkCounterpartySystemStatusResponse; 
  class UserRequest; 
  class UserResponse; 
  class CollateralInquiryAck; 
  class ConfirmationRequest;

  class MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( const Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
 virtual void onMessage( const Heartbeat&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const TestRequest&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const ResendRequest&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Reject&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const SequenceReset&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logout&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const IOI&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Advertisement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ExecutionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Logon&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const News&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Email&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReplaceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationInstruction&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListExecute&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationInstructionAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DontKnowTrade&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Quote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SettlementInstructions&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataSnapshotFullRefresh&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataIncrementalRefresh&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequestReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteCancel&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MassQuoteAcknowledgement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityDefinitionRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityDefinition&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradingSessionStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradingSessionStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MassQuote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const BusinessMessageReject&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const BidRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const BidResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStrikePrice&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const XMLnonFIX&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const RegistrationInstructions&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const RegistrationInstructionsResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderMassCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderMassCancelReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderCross&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CrossOrderCancelReplaceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CrossOrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityTypeRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityTypes&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityListRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SecurityList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DerivativeSecurityListRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DerivativeSecurityList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderMultileg&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MultilegOrderCancelReplace&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradeCaptureReportRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradeCaptureReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderMassStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteRequestReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const RFQRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteStatusReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Confirmation&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const PositionMaintenanceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const PositionMaintenanceReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const RequestForPositions&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const RequestForPositionsAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const PositionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradeCaptureReportRequestAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const TradeCaptureReportAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationReportAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ConfirmationAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const SettlementInstructionRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AssignmentReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralAssignment&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralInquiry&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NetworkCounterpartySystemStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NetworkCounterpartySystemStatusResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const UserRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const UserResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const CollateralInquiryAck&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ConfirmationRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( Heartbeat&, const FIX::SessionID& ) {} 
 virtual void onMessage( TestRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ResendRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( Reject&, const FIX::SessionID& ) {} 
 virtual void onMessage( SequenceReset&, const FIX::SessionID& ) {} 
 virtual void onMessage( Logout&, const FIX::SessionID& ) {} 
 virtual void onMessage( IOI&, const FIX::SessionID& ) {} 
 virtual void onMessage( Advertisement&, const FIX::SessionID& ) {} 
 virtual void onMessage( ExecutionReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( Logon&, const FIX::SessionID& ) {} 
 virtual void onMessage( News&, const FIX::SessionID& ) {} 
 virtual void onMessage( Email&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderSingle&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderList&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelReplaceRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( AllocationInstruction&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListExecute&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStatus&, const FIX::SessionID& ) {} 
 virtual void onMessage( AllocationInstructionAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( DontKnowTrade&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( Quote&, const FIX::SessionID& ) {} 
 virtual void onMessage( SettlementInstructions&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataSnapshotFullRefresh&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataIncrementalRefresh&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataRequestReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteCancel&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( MassQuoteAcknowledgement&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityDefinitionRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityDefinition&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityStatus&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradingSessionStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradingSessionStatus&, const FIX::SessionID& ) {} 
 virtual void onMessage( MassQuote&, const FIX::SessionID& ) {} 
 virtual void onMessage( BusinessMessageReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( BidRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( BidResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStrikePrice&, const FIX::SessionID& ) {} 
 virtual void onMessage( XMLnonFIX&, const FIX::SessionID& ) {} 
 virtual void onMessage( RegistrationInstructions&, const FIX::SessionID& ) {} 
 virtual void onMessage( RegistrationInstructionsResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderMassCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderMassCancelReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderCross&, const FIX::SessionID& ) {} 
 virtual void onMessage( CrossOrderCancelReplaceRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( CrossOrderCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityTypeRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityTypes&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityListRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( SecurityList&, const FIX::SessionID& ) {} 
 virtual void onMessage( DerivativeSecurityListRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( DerivativeSecurityList&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderMultileg&, const FIX::SessionID& ) {} 
 virtual void onMessage( MultilegOrderCancelReplace&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradeCaptureReportRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradeCaptureReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderMassStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteRequestReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( RFQRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteStatusReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( Confirmation&, const FIX::SessionID& ) {} 
 virtual void onMessage( PositionMaintenanceRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( PositionMaintenanceReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( RequestForPositions&, const FIX::SessionID& ) {} 
 virtual void onMessage( RequestForPositionsAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( PositionReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradeCaptureReportRequestAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( TradeCaptureReportAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( AllocationReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( AllocationReportAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( ConfirmationAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( SettlementInstructionRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( AssignmentReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralAssignment&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralInquiry&, const FIX::SessionID& ) {} 
 virtual void onMessage( NetworkCounterpartySystemStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( NetworkCounterpartySystemStatusResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( UserRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( UserResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( CollateralInquiryAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( ConfirmationRequest&, const FIX::SessionID& ) {} 

public:
  void crack( const Message& message, 
              const FIX::SessionID& sessionID )
  {
    const std::string & msgTypeValue 
      = message.getHeader().getField( FIX::FIELD::MsgType );
    
    
    if( msgTypeValue == "0" )
      return onMessage( (const Heartbeat&)message, sessionID );
    
    if( msgTypeValue == "1" )
      return onMessage( (const TestRequest&)message, sessionID );
    
    if( msgTypeValue == "2" )
      return onMessage( (const ResendRequest&)message, sessionID );
    
    if( msgTypeValue == "3" )
      return onMessage( (const Reject&)message, sessionID );
    
    if( msgTypeValue == "4" )
      return onMessage( (const SequenceReset&)message, sessionID );
    
    if( msgTypeValue == "5" )
      return onMessage( (const Logout&)message, sessionID );
    
    if( msgTypeValue == "6" )
      return onMessage( (const IOI&)message, sessionID );
    
    if( msgTypeValue == "7" )
      return onMessage( (const Advertisement&)message, sessionID );
    
    if( msgTypeValue == "8" )
      return onMessage( (const ExecutionReport&)message, sessionID );
    
    if( msgTypeValue == "9" )
      return onMessage( (const OrderCancelReject&)message, sessionID );
    
    if( msgTypeValue == "A" )
      return onMessage( (const Logon&)message, sessionID );
    
    if( msgTypeValue == "B" )
      return onMessage( (const News&)message, sessionID );
    
    if( msgTypeValue == "C" )
      return onMessage( (const Email&)message, sessionID );
    
    if( msgTypeValue == "D" )
      return onMessage( (const NewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "E" )
      return onMessage( (const NewOrderList&)message, sessionID );
    
    if( msgTypeValue == "F" )
      return onMessage( (const OrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "G" )
      return onMessage( (const OrderCancelReplaceRequest&)message, sessionID );
    
    if( msgTypeValue == "H" )
      return onMessage( (const OrderStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "J" )
      return onMessage( (const AllocationInstruction&)message, sessionID );
    
    if( msgTypeValue == "K" )
      return onMessage( (const ListCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "L" )
      return onMessage( (const ListExecute&)message, sessionID );
    
    if( msgTypeValue == "M" )
      return onMessage( (const ListStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "N" )
      return onMessage( (const ListStatus&)message, sessionID );
    
    if( msgTypeValue == "P" )
      return onMessage( (const AllocationInstructionAck&)message, sessionID );
    
    if( msgTypeValue == "Q" )
      return onMessage( (const DontKnowTrade&)message, sessionID );
    
    if( msgTypeValue == "R" )
      return onMessage( (const QuoteRequest&)message, sessionID );
    
    if( msgTypeValue == "S" )
      return onMessage( (const Quote&)message, sessionID );
    
    if( msgTypeValue == "T" )
      return onMessage( (const SettlementInstructions&)message, sessionID );
    
    if( msgTypeValue == "V" )
      return onMessage( (const MarketDataRequest&)message, sessionID );
    
    if( msgTypeValue == "W" )
      return onMessage( (const MarketDataSnapshotFullRefresh&)message, sessionID );
    
    if( msgTypeValue == "X" )
      return onMessage( (const MarketDataIncrementalRefresh&)message, sessionID );
    
    if( msgTypeValue == "Y" )
      return onMessage( (const MarketDataRequestReject&)message, sessionID );
    
    if( msgTypeValue == "Z" )
      return onMessage( (const QuoteCancel&)message, sessionID );
    
    if( msgTypeValue == "a" )
      return onMessage( (const QuoteStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "b" )
      return onMessage( (const MassQuoteAcknowledgement&)message, sessionID );
    
    if( msgTypeValue == "c" )
      return onMessage( (const SecurityDefinitionRequest&)message, sessionID );
    
    if( msgTypeValue == "d" )
      return onMessage( (const SecurityDefinition&)message, sessionID );
    
    if( msgTypeValue == "e" )
      return onMessage( (const SecurityStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "f" )
      return onMessage( (const SecurityStatus&)message, sessionID );
    
    if( msgTypeValue == "g" )
      return onMessage( (const TradingSessionStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "h" )
      return onMessage( (const TradingSessionStatus&)message, sessionID );
    
    if( msgTypeValue == "i" )
      return onMessage( (const MassQuote&)message, sessionID );
    
    if( msgTypeValue == "j" )
      return onMessage( (const BusinessMessageReject&)message, sessionID );
    
    if( msgTypeValue == "k" )
      return onMessage( (const BidRequest&)message, sessionID );
    
    if( msgTypeValue == "l" )
      return onMessage( (const BidResponse&)message, sessionID );
    
    if( msgTypeValue == "m" )
      return onMessage( (const ListStrikePrice&)message, sessionID );
    
    if( msgTypeValue == "n" )
      return onMessage( (const XMLnonFIX&)message, sessionID );
    
    if( msgTypeValue == "o" )
      return onMessage( (const RegistrationInstructions&)message, sessionID );
    
    if( msgTypeValue == "p" )
      return onMessage( (const RegistrationInstructionsResponse&)message, sessionID );
    
    if( msgTypeValue == "q" )
      return onMessage( (const OrderMassCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "r" )
      return onMessage( (const OrderMassCancelReport&)message, sessionID );
    
    if( msgTypeValue == "s" )
      return onMessage( (const NewOrderCross&)message, sessionID );
    
    if( msgTypeValue == "t" )
      return onMessage( (const CrossOrderCancelReplaceRequest&)message, sessionID );
    
    if( msgTypeValue == "u" )
      return onMessage( (const CrossOrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "v" )
      return onMessage( (const SecurityTypeRequest&)message, sessionID );
    
    if( msgTypeValue == "w" )
      return onMessage( (const SecurityTypes&)message, sessionID );
    
    if( msgTypeValue == "x" )
      return onMessage( (const SecurityListRequest&)message, sessionID );
    
    if( msgTypeValue == "y" )
      return onMessage( (const SecurityList&)message, sessionID );
    
    if( msgTypeValue == "z" )
      return onMessage( (const DerivativeSecurityListRequest&)message, sessionID );
    
    if( msgTypeValue == "AA" )
      return onMessage( (const DerivativeSecurityList&)message, sessionID );
    
    if( msgTypeValue == "AB" )
      return onMessage( (const NewOrderMultileg&)message, sessionID );
    
    if( msgTypeValue == "AC" )
      return onMessage( (const MultilegOrderCancelReplace&)message, sessionID );
    
    if( msgTypeValue == "AD" )
      return onMessage( (const TradeCaptureReportRequest&)message, sessionID );
    
    if( msgTypeValue == "AE" )
      return onMessage( (const TradeCaptureReport&)message, sessionID );
    
    if( msgTypeValue == "AF" )
      return onMessage( (const OrderMassStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "AG" )
      return onMessage( (const QuoteRequestReject&)message, sessionID );
    
    if( msgTypeValue == "AH" )
      return onMessage( (const RFQRequest&)message, sessionID );
    
    if( msgTypeValue == "AI" )
      return onMessage( (const QuoteStatusReport&)message, sessionID );
    
    if( msgTypeValue == "AJ" )
      return onMessage( (const QuoteResponse&)message, sessionID );
    
    if( msgTypeValue == "AK" )
      return onMessage( (const Confirmation&)message, sessionID );
    
    if( msgTypeValue == "AL" )
      return onMessage( (const PositionMaintenanceRequest&)message, sessionID );
    
    if( msgTypeValue == "AM" )
      return onMessage( (const PositionMaintenanceReport&)message, sessionID );
    
    if( msgTypeValue == "AN" )
      return onMessage( (const RequestForPositions&)message, sessionID );
    
    if( msgTypeValue == "AO" )
      return onMessage( (const RequestForPositionsAck&)message, sessionID );
    
    if( msgTypeValue == "AP" )
      return onMessage( (const PositionReport&)message, sessionID );
    
    if( msgTypeValue == "AQ" )
      return onMessage( (const TradeCaptureReportRequestAck&)message, sessionID );
    
    if( msgTypeValue == "AR" )
      return onMessage( (const TradeCaptureReportAck&)message, sessionID );
    
    if( msgTypeValue == "AS" )
      return onMessage( (const AllocationReport&)message, sessionID );
    
    if( msgTypeValue == "AT" )
      return onMessage( (const AllocationReportAck&)message, sessionID );
    
    if( msgTypeValue == "AU" )
      return onMessage( (const ConfirmationAck&)message, sessionID );
    
    if( msgTypeValue == "AV" )
      return onMessage( (const SettlementInstructionRequest&)message, sessionID );
    
    if( msgTypeValue == "AW" )
      return onMessage( (const AssignmentReport&)message, sessionID );
    
    if( msgTypeValue == "AX" )
      return onMessage( (const CollateralRequest&)message, sessionID );
    
    if( msgTypeValue == "AY" )
      return onMessage( (const CollateralAssignment&)message, sessionID );
    
    if( msgTypeValue == "AZ" )
      return onMessage( (const CollateralResponse&)message, sessionID );
    
    if( msgTypeValue == "BA" )
      return onMessage( (const CollateralReport&)message, sessionID );
    
    if( msgTypeValue == "BB" )
      return onMessage( (const CollateralInquiry&)message, sessionID );
    
    if( msgTypeValue == "BC" )
      return onMessage( (const NetworkCounterpartySystemStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "BD" )
      return onMessage( (const NetworkCounterpartySystemStatusResponse&)message, sessionID );
    
    if( msgTypeValue == "BE" )
      return onMessage( (const UserRequest&)message, sessionID );
    
    if( msgTypeValue == "BF" )
      return onMessage( (const UserResponse&)message, sessionID );
    
    if( msgTypeValue == "BG" )
      return onMessage( (const CollateralInquiryAck&)message, sessionID );
    
    if( msgTypeValue == "BH" )
      return onMessage( (const ConfirmationRequest&)message, sessionID );
    
    return onMessage( message, sessionID );
  }
  
void crack( Message& message, 
            const FIX::SessionID& sessionID )
  {
    const std::string & msgTypeValue 
      = message.getHeader().getField( FIX::FIELD::MsgType );
    
    
    if( msgTypeValue == "0" )
      return onMessage( (Heartbeat&)message, sessionID );
    
    if( msgTypeValue == "1" )
      return onMessage( (TestRequest&)message, sessionID );
    
    if( msgTypeValue == "2" )
      return onMessage( (ResendRequest&)message, sessionID );
    
    if( msgTypeValue == "3" )
      return onMessage( (Reject&)message, sessionID );
    
    if( msgTypeValue == "4" )
      return onMessage( (SequenceReset&)message, sessionID );
    
    if( msgTypeValue == "5" )
      return onMessage( (Logout&)message, sessionID );
    
    if( msgTypeValue == "6" )
      return onMessage( (IOI&)message, sessionID );
    
    if( msgTypeValue == "7" )
      return onMessage( (Advertisement&)message, sessionID );
    
    if( msgTypeValue == "8" )
      return onMessage( (ExecutionReport&)message, sessionID );
    
    if( msgTypeValue == "9" )
      return onMessage( (OrderCancelReject&)message, sessionID );
    
    if( msgTypeValue == "A" )
      return onMessage( (Logon&)message, sessionID );
    
    if( msgTypeValue == "B" )
      return onMessage( (News&)message, sessionID );
    
    if( msgTypeValue == "C" )
      return onMessage( (Email&)message, sessionID );
    
    if( msgTypeValue == "D" )
      return onMessage( (NewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "E" )
      return onMessage( (NewOrderList&)message, sessionID );
    
    if( msgTypeValue == "F" )
      return onMessage( (OrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "G" )
      return onMessage( (OrderCancelReplaceRequest&)message, sessionID );
    
    if( msgTypeValue == "H" )
      return onMessage( (OrderStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "J" )
      return onMessage( (AllocationInstruction&)message, sessionID );
    
    if( msgTypeValue == "K" )
      return onMessage( (ListCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "L" )
      return onMessage( (ListExecute&)message, sessionID );
    
    if( msgTypeValue == "M" )
      return onMessage( (ListStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "N" )
      return onMessage( (ListStatus&)message, sessionID );
    
    if( msgTypeValue == "P" )
      return onMessage( (AllocationInstructionAck&)message, sessionID );
    
    if( msgTypeValue == "Q" )
      return onMessage( (DontKnowTrade&)message, sessionID );
    
    if( msgTypeValue == "R" )
      return onMessage( (QuoteRequest&)message, sessionID );
    
    if( msgTypeValue == "S" )
      return onMessage( (Quote&)message, sessionID );
    
    if( msgTypeValue == "T" )
      return onMessage( (SettlementInstructions&)message, sessionID );
    
    if( msgTypeValue == "V" )
      return onMessage( (MarketDataRequest&)message, sessionID );
    
    if( msgTypeValue == "W" )
      return onMessage( (MarketDataSnapshotFullRefresh&)message, sessionID );
    
    if( msgTypeValue == "X" )
      return onMessage( (MarketDataIncrementalRefresh&)message, sessionID );
    
    if( msgTypeValue == "Y" )
      return onMessage( (MarketDataRequestReject&)message, sessionID );
    
    if( msgTypeValue == "Z" )
      return onMessage( (QuoteCancel&)message, sessionID );
    
    if( msgTypeValue == "a" )
      return onMessage( (QuoteStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "b" )
      return onMessage( (MassQuoteAcknowledgement&)message, sessionID );
    
    if( msgTypeValue == "c" )
      return onMessage( (SecurityDefinitionRequest&)message, sessionID );
    
    if( msgTypeValue == "d" )
      return onMessage( (SecurityDefinition&)message, sessionID );
    
    if( msgTypeValue == "e" )
      return onMessage( (SecurityStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "f" )
      return onMessage( (SecurityStatus&)message, sessionID );
    
    if( msgTypeValue == "g" )
      return onMessage( (TradingSessionStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "h" )
      return onMessage( (TradingSessionStatus&)message, sessionID );
    
    if( msgTypeValue == "i" )
      return onMessage( (MassQuote&)message, sessionID );
    
    if( msgTypeValue == "j" )
      return onMessage( (BusinessMessageReject&)message, sessionID );
    
    if( msgTypeValue == "k" )
      return onMessage( (BidRequest&)message, sessionID );
    
    if( msgTypeValue == "l" )
      return onMessage( (BidResponse&)message, sessionID );
    
    if( msgTypeValue == "m" )
      return onMessage( (ListStrikePrice&)message, sessionID );
    
    if( msgTypeValue == "n" )
      return onMessage( (XMLnonFIX&)message, sessionID );
    
    if( msgTypeValue == "o" )
      return onMessage( (RegistrationInstructions&)message, sessionID );
    
    if( msgTypeValue == "p" )
      return onMessage( (RegistrationInstructionsResponse&)message, sessionID );
    
    if( msgTypeValue == "q" )
      return onMessage( (OrderMassCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "r" )
      return onMessage( (OrderMassCancelReport&)message, sessionID );
    
    if( msgTypeValue == "s" )
      return onMessage( (NewOrderCross&)message, sessionID );
    
    if( msgTypeValue == "t" )
      return onMessage( (CrossOrderCancelReplaceRequest&)message, sessionID );
    
    if( msgTypeValue == "u" )
      return onMessage( (CrossOrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "v" )
      return onMessage( (SecurityTypeRequest&)message, sessionID );
    
    if( msgTypeValue == "w" )
      return onMessage( (SecurityTypes&)message, sessionID );
    
    if( msgTypeValue == "x" )
      return onMessage( (SecurityListRequest&)message, sessionID );
    
    if( msgTypeValue == "y" )
      return onMessage( (SecurityList&)message, sessionID );
    
    if( msgTypeValue == "z" )
      return onMessage( (DerivativeSecurityListRequest&)message, sessionID );
    
    if( msgTypeValue == "AA" )
      return onMessage( (DerivativeSecurityList&)message, sessionID );
    
    if( msgTypeValue == "AB" )
      return onMessage( (NewOrderMultileg&)message, sessionID );
    
    if( msgTypeValue == "AC" )
      return onMessage( (MultilegOrderCancelReplace&)message, sessionID );
    
    if( msgTypeValue == "AD" )
      return onMessage( (TradeCaptureReportRequest&)message, sessionID );
    
    if( msgTypeValue == "AE" )
      return onMessage( (TradeCaptureReport&)message, sessionID );
    
    if( msgTypeValue == "AF" )
      return onMessage( (OrderMassStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "AG" )
      return onMessage( (QuoteRequestReject&)message, sessionID );
    
    if( msgTypeValue == "AH" )
      return onMessage( (RFQRequest&)message, sessionID );
    
    if( msgTypeValue == "AI" )
      return onMessage( (QuoteStatusReport&)message, sessionID );
    
    if( msgTypeValue == "AJ" )
      return onMessage( (QuoteResponse&)message, sessionID );
    
    if( msgTypeValue == "AK" )
      return onMessage( (Confirmation&)message, sessionID );
    
    if( msgTypeValue == "AL" )
      return onMessage( (PositionMaintenanceRequest&)message, sessionID );
    
    if( msgTypeValue == "AM" )
      return onMessage( (PositionMaintenanceReport&)message, sessionID );
    
    if( msgTypeValue == "AN" )
      return onMessage( (RequestForPositions&)message, sessionID );
    
    if( msgTypeValue == "AO" )
      return onMessage( (RequestForPositionsAck&)message, sessionID );
    
    if( msgTypeValue == "AP" )
      return onMessage( (PositionReport&)message, sessionID );
    
    if( msgTypeValue == "AQ" )
      return onMessage( (TradeCaptureReportRequestAck&)message, sessionID );
    
    if( msgTypeValue == "AR" )
      return onMessage( (TradeCaptureReportAck&)message, sessionID );
    
    if( msgTypeValue == "AS" )
      return onMessage( (AllocationReport&)message, sessionID );
    
    if( msgTypeValue == "AT" )
      return onMessage( (AllocationReportAck&)message, sessionID );
    
    if( msgTypeValue == "AU" )
      return onMessage( (ConfirmationAck&)message, sessionID );
    
    if( msgTypeValue == "AV" )
      return onMessage( (SettlementInstructionRequest&)message, sessionID );
    
    if( msgTypeValue == "AW" )
      return onMessage( (AssignmentReport&)message, sessionID );
    
    if( msgTypeValue == "AX" )
      return onMessage( (CollateralRequest&)message, sessionID );
    
    if( msgTypeValue == "AY" )
      return onMessage( (CollateralAssignment&)message, sessionID );
    
    if( msgTypeValue == "AZ" )
      return onMessage( (CollateralResponse&)message, sessionID );
    
    if( msgTypeValue == "BA" )
      return onMessage( (CollateralReport&)message, sessionID );
    
    if( msgTypeValue == "BB" )
      return onMessage( (CollateralInquiry&)message, sessionID );
    
    if( msgTypeValue == "BC" )
      return onMessage( (NetworkCounterpartySystemStatusRequest&)message, sessionID );
    
    if( msgTypeValue == "BD" )
      return onMessage( (NetworkCounterpartySystemStatusResponse&)message, sessionID );
    
    if( msgTypeValue == "BE" )
      return onMessage( (UserRequest&)message, sessionID );
    
    if( msgTypeValue == "BF" )
      return onMessage( (UserResponse&)message, sessionID );
    
    if( msgTypeValue == "BG" )
      return onMessage( (CollateralInquiryAck&)message, sessionID );
    
    if( msgTypeValue == "BH" )
      return onMessage( (ConfirmationRequest&)message, sessionID );
    
    return onMessage( message, sessionID );
  }

  };
}

#endif
