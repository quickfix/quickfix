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

#pragma once

using namespace System;

#include "quickfix_net.h"

#include "MessageStore.h"
#include "MessageStoreFactory.h"
#include "SessionID.h"
#include "SessionSettings.h"
#include "vcclr.h"

namespace QuickFix
{
public __gc class CPPMessageStore : public MessageStore
{
public:
  CPPMessageStore() {}
  CPPMessageStore( FIX::MessageStore* pUnmanaged )
  { QF_STACK_TRY
    m_pUnmanaged = pUnmanaged;
    QF_STACK_CATCH
  }

  bool set( int sequence, String* message ) throw ( IOException* )
  { QF_STACK_TRY

    try
    { char* umessage = createUnmanagedString( message );
      return m_pUnmanaged->set( sequence, umessage ); 
      destroyUnmanagedString( umessage );
    }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  bool get( int sequence, String* message ) throw ( IOException* )
  { QF_STACK_TRY

    try
    {
      std::string string;
      return m_pUnmanaged->get( sequence, string );
      message = string.c_str();
    }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void get( int begin, int end, ArrayList* list ) throw ( IOException* )
  { QF_STACK_TRY

    try
    {
      std::vector < std::string > messages;
      m_pUnmanaged->get( begin, end, messages );
      std::vector < std::string > ::iterator i;
      for ( i = messages.begin(); i != messages.end(); ++i )
        list->Add( new String( i->c_str() ) );
    }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  int getNextSenderMsgSeqNum() throw ( IOException* )
  { QF_STACK_TRY

    try
    { return m_pUnmanaged->getNextSenderMsgSeqNum(); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  int getNextTargetMsgSeqNum() throw ( IOException* )
  { QF_STACK_TRY

    try
    { return m_pUnmanaged->getNextTargetMsgSeqNum(); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void setNextSenderMsgSeqNum( int next ) throw ( IOException* )
  { QF_STACK_TRY

    try
    { m_pUnmanaged->setNextSenderMsgSeqNum( next ); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void setNextTargetMsgSeqNum( int next ) throw ( IOException* )
  { QF_STACK_TRY

    try
    { m_pUnmanaged->setNextTargetMsgSeqNum( next ); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void incrNextSenderMsgSeqNum() throw ( IOException* )
  { QF_STACK_TRY

    try
    { m_pUnmanaged->incrNextSenderMsgSeqNum(); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void incrNextTargetMsgSeqNum() throw ( IOException* )
  { QF_STACK_TRY

    try
    { m_pUnmanaged->incrNextTargetMsgSeqNum(); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  DateTime getCreationTime() throw ( IOException* )
  { QF_STACK_TRY

    try
    {
      FIX::UtcTimeStamp d = m_pUnmanaged->getCreationTime();
      return DateTime( d.getYear(), d.getMonth(), d.getDate(),
                       d.getHour(), d.getMinute(), d.getSecond() );
    }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

  void reset() throw ( IOException* )
  { QF_STACK_TRY

    try
    { m_pUnmanaged->reset(); }
    catch ( FIX::IOException& )
    { throw new IOException(); }

    QF_STACK_CATCH
  }

protected:
  FIX::MessageStore* m_pUnmanaged;
};

}
