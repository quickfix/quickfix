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
using namespace System::IO;
using namespace System::Runtime::InteropServices;

#include "quickfix_net.h"

#include "Exceptions.h"
#include "Fields.h"
#include "quickfix/DataDictionaryProvider.h"
#include "quickfix/CallStack.h"

namespace QuickFix
{
public __gc class DataDictionaryProvider
{
public:
  DataDictionaryProvider()
  { QF_STACK_TRY

    m_pUnmanaged = new FIX::DataDictionaryProvider();

    QF_STACK_CATCH
  }

  DataDictionaryProvider(const FIX::DataDictionaryProvider& dataDictionaryProvider)
  {
    m_pUnmanaged = new FIX::DataDictionaryProvider(dataDictionaryProvider);
  }

  ~DataDictionaryProvider()
  {
    delete m_pUnmanaged;
  }

  DataDictionary* getSessionDataDictionary(BeginString* beginString)
  { QF_STACK_TRY
    try
    {
      const FIX::DataDictionary& dataDictionary = 
        unmanaged().getSessionDataDictionary(FIX::BeginString(convertString(beginString->getValue())));
      return new DataDictionary(dataDictionary);
    }
    catch( FIX::DataDictionaryNotFound& e )
    {
      throw new DataDictionaryNotFound(e.version.c_str(), e.what());
    }

    QF_STACK_CATCH
  }

  DataDictionary* getApplicationDataDictionary(ApplVerID* applVerID)
  { QF_STACK_TRY
    try
    {
      const FIX::DataDictionary& dataDictionary = 
        unmanaged().getApplicationDataDictionary(FIX::ApplVerID(convertString(applVerID->getValue())));
      return new DataDictionary(dataDictionary);
    }
    catch( FIX::DataDictionaryNotFound& e )
    {
      throw new DataDictionaryNotFound(e.version.c_str(), e.what());
    }

    QF_STACK_CATCH
  }

  FIX::DataDictionaryProvider& unmanaged()
  { return * m_pUnmanaged; }

private:
  FIX::DataDictionaryProvider* m_pUnmanaged;
};
}
