/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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
 
#ifndef FIX40_MESSAGECRACKER_H
#define FIX40_MESSAGECRACKER_H

#include "../SessionID.h"
#include "../Exceptions.h"
#include "../fix40/Message.h"

namespace FIX40
{  
  class Heartbeat; 
  class Logon; 
  class TestRequest; 
  class ResendRequest; 
  class Reject; 
  class SequenceReset; 
  class Logout; 
  class Advertisement; 
  class IndicationofInterest; 
  class News; 
  class Email; 
  class QuoteRequest; 
  class Quote; 
  class NewOrderSingle; 
  class ExecutionReport; 
  class DontKnowTrade; 
  class OrderCancelReplaceRequest; 
  class OrderCancelRequest; 
  class OrderCancelReject; 
  class OrderStatusRequest; 
  class Allocation; 
  class AllocationACK; 
  class NewOrderList; 
  class ListStatus; 
  class ListExecute; 
  class ListCancelRequest; 
  class ListStatusRequest;

  class MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( const Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
 virtual void onMessage( const Heartbeat&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logon&, const FIX::SessionID& ) 
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
  virtual void onMessage( const Advertisement&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const IndicationofInterest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const News&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Email&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const QuoteRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Quote&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ExecutionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const DontKnowTrade&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReplaceRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const Allocation&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const AllocationACK&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListExecute&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatusRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
 
public:
  void crack( const Message& message, 
              const FIX::SessionID& sessionID )
  {
    FIX::MsgType msgType;
    message.getHeader().getField(msgType);
    std::string msgTypeValue = msgType.getValue();
    
    if( msgTypeValue == "0" )
      onMessage( (Heartbeat&)message, sessionID );
    else
    if( msgTypeValue == "A" )
      onMessage( (Logon&)message, sessionID );
    else
    if( msgTypeValue == "1" )
      onMessage( (TestRequest&)message, sessionID );
    else
    if( msgTypeValue == "2" )
      onMessage( (ResendRequest&)message, sessionID );
    else
    if( msgTypeValue == "3" )
      onMessage( (Reject&)message, sessionID );
    else
    if( msgTypeValue == "4" )
      onMessage( (SequenceReset&)message, sessionID );
    else
    if( msgTypeValue == "5" )
      onMessage( (Logout&)message, sessionID );
    else
    if( msgTypeValue == "7" )
      onMessage( (Advertisement&)message, sessionID );
    else
    if( msgTypeValue == "6" )
      onMessage( (IndicationofInterest&)message, sessionID );
    else
    if( msgTypeValue == "B" )
      onMessage( (News&)message, sessionID );
    else
    if( msgTypeValue == "C" )
      onMessage( (Email&)message, sessionID );
    else
    if( msgTypeValue == "R" )
      onMessage( (QuoteRequest&)message, sessionID );
    else
    if( msgTypeValue == "S" )
      onMessage( (Quote&)message, sessionID );
    else
    if( msgTypeValue == "D" )
      onMessage( (NewOrderSingle&)message, sessionID );
    else
    if( msgTypeValue == "8" )
      onMessage( (ExecutionReport&)message, sessionID );
    else
    if( msgTypeValue == "Q" )
      onMessage( (DontKnowTrade&)message, sessionID );
    else
    if( msgTypeValue == "G" )
      onMessage( (OrderCancelReplaceRequest&)message, sessionID );
    else
    if( msgTypeValue == "F" )
      onMessage( (OrderCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "9" )
      onMessage( (OrderCancelReject&)message, sessionID );
    else
    if( msgTypeValue == "H" )
      onMessage( (OrderStatusRequest&)message, sessionID );
    else
    if( msgTypeValue == "J" )
      onMessage( (Allocation&)message, sessionID );
    else
    if( msgTypeValue == "P" )
      onMessage( (AllocationACK&)message, sessionID );
    else
    if( msgTypeValue == "E" )
      onMessage( (NewOrderList&)message, sessionID );
    else
    if( msgTypeValue == "N" )
      onMessage( (ListStatus&)message, sessionID );
    else
    if( msgTypeValue == "L" )
      onMessage( (ListExecute&)message, sessionID );
    else
    if( msgTypeValue == "K" )
      onMessage( (ListCancelRequest&)message, sessionID );
    else
    if( msgTypeValue == "M" )
      onMessage( (ListStatusRequest&)message, sessionID );
    else onMessage( message, sessionID );
  }

  };
}

#endif //FIX40_MESSAGECRACKER_H

