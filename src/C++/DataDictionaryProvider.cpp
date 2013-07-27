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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "DataDictionaryProvider.h"
#include "Fields.h"
#include "DataDictionary.h"

namespace FIX
{
DataDictionaryProvider::DataDictionaryProvider( const DataDictionaryProvider& copy )
{
  *this = copy;
}

const DataDictionary& DataDictionaryProvider::getSessionDataDictionary
(const BeginString& beginString) const throw( DataDictionaryNotFound )
{
  std::map<std::string, const DataDictionary*>::const_iterator find =
    m_transportDictionaries.find(beginString);
  if( find != m_transportDictionaries.end() )
    return *find->second;
  
  return emptyDataDictionary;
}

const DataDictionary& DataDictionaryProvider::getApplicationDataDictionary
(const ApplVerID& applVerID) const throw( DataDictionaryNotFound )
{
  std::map<std::string, const DataDictionary*>::const_iterator find =
    m_applicationDictionaries.find(applVerID);
  if( find != m_applicationDictionaries.end() )
    return *find->second;

  return emptyDataDictionary;
}

void DataDictionaryProvider::addTransportDataDictionary
(const BeginString& beginString, const DataDictionary * pDD)
{
  m_transportDictionaries[beginString.getValue()] = pDD;
}

void DataDictionaryProvider::addApplicationDataDictionary
(const ApplVerID& applVerID, const DataDictionary * pDD)
{
  m_applicationDictionaries[applVerID.getValue()] = pDD;
}
}

