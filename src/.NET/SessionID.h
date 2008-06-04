/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "quickfix/SessionID.h"
#include "quickfix/CallStack.h"

#include "Fields.h"

namespace QuickFix
{
public __gc class SessionID
{
public:
  SessionID()
  { QF_STACK_TRY
    m_pUnmanaged = new FIX::SessionID();
    QF_STACK_CATCH
  }

  SessionID( BeginString* beginString, SenderCompID* senderCompID, TargetCompID* targetCompID )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionID(
                       FIX::BeginString( convertString(beginString->getValue())),
                       FIX::SenderCompID( convertString(senderCompID->getValue())),
                       FIX::TargetCompID( convertString(targetCompID->getValue())) );

    QF_STACK_CATCH
  }

  SessionID( BeginString* beginString, SenderCompID* senderCompID, 
	         TargetCompID* targetCompID, String* sessionQualifier )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionID(
                       FIX::BeginString( convertString(beginString->getValue())),
                       FIX::SenderCompID( convertString(senderCompID->getValue())),
                       FIX::TargetCompID( convertString(targetCompID->getValue())),
                       convertString(sessionQualifier) );

    QF_STACK_CATCH
  }

  SessionID( String* beginString, String* senderCompID, String* targetCompID )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionID(
                       FIX::BeginString( convertString( beginString ) ),
                       FIX::SenderCompID( convertString( senderCompID ) ),
                       FIX::TargetCompID( convertString( targetCompID ) ) );

    QF_STACK_CATCH
  }

  SessionID( String* beginString, String* senderCompID,
             String* targetCompID, String* sessionQualifier )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionID(
                       FIX::BeginString( convertString( beginString ) ),
                       FIX::SenderCompID( convertString( senderCompID ) ),
                       FIX::TargetCompID( convertString( targetCompID ) ),
                       convertString( sessionQualifier ) );

    QF_STACK_CATCH
  }

  SessionID( const FIX::SessionID& sessionID )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::SessionID(
                     sessionID.getBeginString(),
                     sessionID.getSenderCompID(),
                     sessionID.getTargetCompID(),
                     sessionID.getSessionQualifier() );

    QF_STACK_CATCH
  }

  ~SessionID()
  {
    delete m_pUnmanaged;
  }

  FIX::SessionID& unmanaged()
  { return * m_pUnmanaged; }

  virtual bool Equals( Object* object )
  {
    if( Object::Equals( object ) )
      return true;
    if( object == 0 )
      return false;
    if( !object->GetType()->Equals(GetType()) )
      return false;

    return static_cast<SessionID*>(object)->ToString()->Equals( ToString() );
  }

  String* ToString()
  { QF_STACK_TRY
    return m_pUnmanaged->toString().c_str();
    QF_STACK_CATCH
  }

  virtual int GetHashCode()
  {
    return ToString()->GetHashCode();
  }

  void fromString( String* str )
  { QF_STACK_TRY
    m_pUnmanaged->fromString( convertString(str) );
    QF_STACK_CATCH
  }

  String* getBeginString()
  { QF_STACK_TRY
    return m_pUnmanaged->getBeginString().getValue().c_str();
    QF_STACK_CATCH
  }

  String* getSenderCompID()
  { QF_STACK_TRY
    return m_pUnmanaged->getSenderCompID().getValue().c_str();
    QF_STACK_CATCH
  }

  String* getTargetCompID()
  { QF_STACK_TRY
    return m_pUnmanaged->getTargetCompID().getValue().c_str();
    QF_STACK_CATCH
  }

  String* getSessionQualifier() 
  { QF_STACK_TRY 
    return m_pUnmanaged->getSessionQualifier().c_str(); 
    QF_STACK_CATCH 
  } 

private:
  FIX::SessionID* m_pUnmanaged;
};
}
