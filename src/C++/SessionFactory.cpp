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

  if( connectionType == "acceptor" && settings.has(SESSION_QUALIFIER) )
    throw ConfigError( "SessionQualifier cannot be used with acceptor." );
   
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
  if( settings.has( VALIDATE_USER_DEFINED_FIELDS ) )
  {
    dataDictionary.checkUserDefinedFields
    ( settings.getBool( VALIDATE_USER_DEFINED_FIELDS ) );
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

  int startDay = -1;
  int endDay = -1;

  try
  {
    startDay = settings.getDay( START_DAY );
    endDay = settings.getDay( END_DAY );
  }
  catch( ConfigError & ) {}
  catch( FieldConvertError & e ) { throw ConfigError( e.what() ); }

  if( startDay >= 0 && endDay < 0 )
    throw ConfigError( "StartDay used without EndDay" );
  if( endDay >= 0 && startDay < 0 )
    throw ConfigError( "EndDay used without StartDay" );

  HeartBtInt heartBtInt( 0 );
  if ( connectionType == "initiator" )
  {
    heartBtInt = HeartBtInt( settings.getLong( HEARTBTINT ) );
    if ( heartBtInt <= 0 ) throw ConfigError( "Heartbeat must be greater than zero" );
  }

  Session* pSession = 0;
  pSession = new Session( m_application, m_messageStoreFactory, 
                          sessionID, dataDictionary, 
                          SessionTime(startTime, endTime, startDay, endDay), 
                          heartBtInt, m_pLogFactory );

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
