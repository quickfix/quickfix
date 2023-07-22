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

#ifndef FIX41_MESSAGECRACKER_H
#define FIX41_MESSAGECRACKER_H


#include "../SessionID.h"
#include "../Exceptions.h"

#include "../fix41/Message.h"

namespace FIX41
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
  class Allocation; 
  class ListCancelRequest; 
  class ListExecute; 
  class ListStatusRequest; 
  class ListStatus; 
  class AllocationInstructionAck; 
  class DontKnowTrade; 
  class QuoteRequest; 
  class Quote; 
  class SettlementInstructions;

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
  virtual void onMessage( const Allocation&, const FIX::SessionID& ) 
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
 virtual void onMessage( Allocation&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListExecute&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStatusRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStatus&, const FIX::SessionID& ) {} 
 virtual void onMessage( AllocationInstructionAck&, const FIX::SessionID& ) {} 
 virtual void onMessage( DontKnowTrade&, const FIX::SessionID& ) {} 
 virtual void onMessage( QuoteRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( Quote&, const FIX::SessionID& ) {} 
 virtual void onMessage( SettlementInstructions&, const FIX::SessionID& ) {} 

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
      return onMessage( (const Allocation&)message, sessionID );
    
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
      return onMessage( (Allocation&)message, sessionID );
    
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
    
    return onMessage( message, sessionID );
  }

  };
}

#endif
