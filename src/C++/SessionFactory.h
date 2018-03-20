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

#ifndef FIX_SESSIONFACTORY_H
#define FIX_SESSIONFACTORY_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Log.h"
#include "Exceptions.h"
#include "Dictionary.h"

namespace FIX
{
class SessionID;
class Session;
class Application;
class MessageStoreFactory;
class DataDictionaryProvider;

/** Responsible for creating Session objects.  This factory will use
 *  QuickFIX SessionID, Dictionary settings, MessageStoreFactory, and
 *  optional LogFactory to create all the required sessions for an
 *  Application.
 */
class SessionFactory
{
public:
  SessionFactory( Application& application,
                  MessageStoreFactory& messageStoreFactory,
                  LogFactory* pLogFactory )
: m_application( application ),
  m_messageStoreFactory( messageStoreFactory ),
  m_pLogFactory( pLogFactory ) {}

  ~SessionFactory();

  Session* create( const SessionID& sessionID,
                   const Dictionary& settings );
  void destroy( Session* pSession );

private:
  typedef std::map < std::string, ptr::shared_ptr<DataDictionary> > Dictionaries;

  ptr::shared_ptr<DataDictionary> createDataDictionary(const SessionID& sessionID, 
                                                       const Dictionary& settings, 
                                                       const std::string& settingsKey);

  void processFixtDataDictionaries(const SessionID& sessionID, 
                                   const Dictionary& settings, 
                                   DataDictionaryProvider& provider);

  void processFixDataDictionary(const SessionID& sessionID, 
                                const Dictionary& settings, 
                                DataDictionaryProvider& provider);

  std::string toApplVerID(const std::string& value);

  Application& m_application;
  MessageStoreFactory& m_messageStoreFactory;
  LogFactory* m_pLogFactory;
  Dictionaries m_dictionaries;
};
}

#endif
