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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Settings.h"
#include "ConfigLexer.h"

namespace FIX
{
std::istream& operator>>( std::istream& stream, Settings& s )
{
  ConfigLexer lexer( &stream );
  int lcState = 0;
  Settings::Sections::iterator currentSection = s.m_sections.end();
  std::string currentName;
  while ( 0 != ( lcState = lexer.yylex() ) )
  {
    switch ( lcState )
    {
      case ConfigLexer::LC_STATE_SECTION:
      currentSection = s.m_sections.insert
                       ( s.m_sections.end(),
                         Dictionary( lexer.YYText() ) );
      break;
      case ConfigLexer::LC_STATE_NAME:
      currentName = lexer.YYText();
      break;
      case ConfigLexer::LC_STATE_VALUE:
      std::string value = lexer.YYText();
      std::string::size_type pos = value.find_last_not_of( ' ' );
      if ( pos == std::string::npos ) continue;
      value.resize( pos + 1 );
      ( *currentSection ).setString( currentName, value );
      break;
    }
  }
  return stream;
}

Settings::Sections Settings::get( std::string name ) const
{ QF_STACK_PUSH(Settings::get)

  Sections sections;
  for ( Sections::size_type i = 0; i < m_sections.size(); ++i )
    if ( m_sections[ i ].getName() == name )
      sections.push_back( m_sections[ i ] );
  return sections;

  QF_STACK_POP
}
}
