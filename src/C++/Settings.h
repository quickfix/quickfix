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

#ifndef FIX_SETTINGS_H
#define FIX_SETTINGS_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Dictionary.h"
#include <string>
#include <vector>
#include <map>
#include <iostream>

namespace FIX
{
/// Internal representation of QuickFIX configuration settings.
class Settings
{
public:
  Settings( bool resolveEnvVars = false ) : m_resolveEnvVars(resolveEnvVars) {}

  typedef std::vector < Dictionary > Sections;

  Sections get( const std::string& name ) const;

  friend std::istream& operator>>( std::istream&, Settings& );
private:
  Sections m_sections;
  bool m_resolveEnvVars;
};

std::istream& operator>>( std::istream&, Settings& );
}

#endif //FIX_SETTINGS_H
