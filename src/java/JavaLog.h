/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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

#ifndef JAVA_LOG
#define JAVA_LOG

#include <quickfix/Log.h>
#include "JVM.h"

class JavaLog : public FIX::Log
{
public:
  JavaLog( JVMObject object );
  virtual ~JavaLog();

  void onIncoming( const std::string& string );
  void onOutgoing( const std::string& string );
  void onEvent( const std::string& string );

private:
  JVMObject m_object;

  jmethodID onIncomingId;
  jmethodID onOutgoingId;
  jmethodID onEventId;
};

#endif
