/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "SessionFactory.h"
#include "SessionSettings.h"
#include "Session.h"

namespace FIX
{
SessionFactory::~SessionFactory()
{ QF_STACK_IGNORE_BEGIN
  Dictionaries::iterator i = m_dictionaries.begin();
  for ( ; i != m_dictionaries.end(); ++i )
    delete i->second;
  QF_STACK_IGNORE_END
}

Session* SessionFactory::create( const SessionID& sessionID,
                                 const Dictionary& settings ) throw( ConfigError )
{ QF_STACK_PUSH(SessionFactory::create)

  std::string connectionType = settings.getString( CONNECTION_TYPE );
  if ( connectionType != "acceptor" && connectionType != "initiator" )
    throw ConfigError( "Invalid ConnectionType" );

  bool useDataDictionary = true;
  if ( settings.has( USE_DATA_DICTIONARY ) )
    useDataDictionary = settings.getBool( USE_DATA_DICTIONARY );

  DataDictionary dataDictionary;
  if ( useDataDictionary )
  {
    std::string path = settings.getString( DATA_DICTIONARY );
    Dictionaries::iterator i = m_dictionaries.find( path );
    if ( i != m_dictionaries.end() )
      dataDictionary = *i->second;
    else
    {
      DataDictionary* p = new DataDictionary( path );
      dataDictionary = *p;
      m_dictionaries[ path ] = p;
    }
  }

  if( settings.has( VALIDATE_FIELDS_OUT_OF_ORDER ) )
  {
    dataDictionary.checkFieldsOutOfOrder
    ( settings.getBool( VALIDATE_FIELDS_OUT_OF_ORDER ) );
  }
  if( settings.has( VALIDATE_FIELDS_HAVE_VALUES ) )
  {
    dataDictionary.checkFieldsHaveValues
    ( settings.getBool( VALIDATE_FIELDS_HAVE_VALUES ) );
  }

  UtcTimeOnly startTime;
  UtcTimeOnly endTime;
  try
  {
    startTime = UtcTimeOnlyConvertor::convert
                ( settings.getString( START_TIME ) );
    endTime = UtcTimeOnlyConvertor::convert
              ( settings.getString( END_TIME ) );
  }
  catch ( FieldConvertError & e ) { throw ConfigError( e.what() ); }

  HeartBtInt heartBtInt( 0 );
  if ( connectionType == "initiator" )
  {
    heartBtInt = HeartBtInt( settings.getLong( HEARTBTINT ) );
    if ( heartBtInt <= 0 ) throw ConfigError( "Heartbeat must be greater than zero" );
  }

  Session* pSession = 0;
  pSession = new Session( m_application, m_messageStoreFactory, sessionID,
                          dataDictionary, startTime, endTime, heartBtInt,
                          m_pLogFactory );

  if ( settings.has( CHECK_LATENCY ) )
    pSession->checkLatency( settings.getBool( CHECK_LATENCY ) );
  if ( settings.has( MAX_LATENCY ) )
    pSession->setMaxLatency( settings.getLong( MAX_LATENCY ) );
  if ( settings.has( LOGON_TIMEOUT ) )
    pSession->setLogonTimeout( settings.getLong( LOGON_TIMEOUT ) );
  if ( settings.has( RESET_ON_LOGOUT ) )
    pSession->setResetOnLogout( settings.getBool( RESET_ON_LOGOUT ) );
  if ( settings.has( RESET_ON_DISCONNECT ) )
    pSession->setResetOnDisconnect( settings.getBool( RESET_ON_DISCONNECT ) );
  if ( settings.has( MILLISECONDS_IN_TIMESTAMP ) )
    pSession->setMillisecondsInTimeStamp( settings.getBool( MILLISECONDS_IN_TIMESTAMP ) );

  return pSession;

  QF_STACK_POP
}
}
