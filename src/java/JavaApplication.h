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

#ifndef JAVA_APPLICATION
#define JAVA_APPLICATION

#include <quickfix/Application.h>
#include <quickfix/Mutex.h>
#include "JVM.h"
#include <memory>

class JavaApplication : public FIX::Application
{
public:
  JavaApplication( JVMObject object, JVMObject factory );
  virtual ~JavaApplication();

  void onCreate( const FIX::SessionID& );
  void onLogon( const FIX::SessionID& );
  void onLogout( const FIX::SessionID& );
  void toAdmin( FIX::Message&, const FIX::SessionID& );
  void toApp( FIX::Message&, const FIX::SessionID& )
  throw( FIX::DoNotSend );
  void fromAdmin( const FIX::Message&, const FIX::SessionID& )
  throw( FIX::FieldNotFound, 
         FIX::IncorrectDataFormat,
         FIX::IncorrectTagValue,
         FIX::RejectLogon );
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
  throw( FIX::FieldNotFound, 
         FIX::IncorrectDataFormat,
         FIX::IncorrectTagValue,
         FIX::UnsupportedMessageType );  

private:
  struct Exceptions
  {
    Exceptions() : 
      doNotSend("Lquickfix/DoNotSend;"),
      rejectLogon("Lquickfix/RejectLogon;"),
      unsupportedMessageType("Lquickfix/UnsupportedMessageType;"),
      fieldNotFound("Lquickfix/FieldNotFound;"),
      incorrectTagValue("Lquickfix/IncorrectTagValue;"),
      incorrectDataFormat("Lquickfix/IncorrectDataFormat;") {}

    JVMClass doNotSend;
    JVMClass rejectLogon;
    JVMClass unsupportedMessageType;
    JVMClass fieldNotFound;
    JVMClass incorrectTagValue;
    JVMClass incorrectDataFormat;
  };
  void handleException( JNIEnv*, Exceptions& e ) const;

  JVMObject m_object;

  JVMObject m_factory;

  jmethodID onCreateId;
  jmethodID onLogonId;
  jmethodID onLogoutId;
  jmethodID notifyToAdminId;
  jmethodID notifyToAppId;
  jmethodID notifyFromAdminId;
  jmethodID notifyFromAppId;

  FIX::Mutex m_mutex;
};

#endif
