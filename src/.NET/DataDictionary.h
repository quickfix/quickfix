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

#include "quickfix/DataDictionary.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class DataDictionary
{
public:
  DataDictionary()
  { QF_STACK_TRY
    
    m_pUnmanaged = new FIX::DataDictionary();

    QF_STACK_CATCH
  }

  DataDictionary( DataDictionary* dataDictionary )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionary( dataDictionary->unmanaged() );

    QF_STACK_CATCH
  }

  DataDictionary( String* url )
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionary( convertString(url) );

    QF_STACK_CATCH
  }

  ~DataDictionary()
  {
    delete m_pUnmanaged;
  }

  FIX::DataDictionary& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::DataDictionary* m_pUnmanaged;
};
}
