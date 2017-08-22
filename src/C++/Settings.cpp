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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <cstring>
#include "Settings.h"

namespace FIX
{
bool isComment( const std::string& line )
{
  if( line.size() == 0 )
    return false;

  return line[0] == '#';
}

bool isSection( const std::string& line )
{
  if( line.size() == 0 )
    return false;

  return line[0] == '[' && line[line.size()-1] == ']';
}

std::string splitSection( const std::string& line )
{
  return string_strip(std::string( line, 1, line.size() - 2 ));
}

bool isKeyValue( const std::string& line )
{
  return line.find( '=' ) != std::string::npos;
}

std::pair<std::string, std::string> splitKeyValue( const std::string& line )
{
  size_t equals = line.find( '=' );
  std::string key = std::string( line, 0, equals );
  std::string value = std::string( line, equals + 1, std::string::npos );
  return std::pair<std::string, std::string>( key, value );
}

std::string resolveEnvVars(const std::string& str)
{
  std::string resultStr;
  size_t      actPos = 0;
  size_t      sourceLen = str.length();

  while (actPos < sourceLen)
  {
    char c = str[actPos++];
    if (actPos < sourceLen)
    {
      // escape character
      if (c == '\\')
      {
        c = str[actPos++];
        switch (c)
        {
          case 't' : resultStr.append(1, '\t'); break;
          case 'r' : resultStr.append(1, '\r'); break;
          case 'n' : resultStr.append(1, '\n'); break;
          default :
            resultStr.append(1, c);
            break;
        }
        continue;
      }

      // variable substitution
      if (c == '$')
      {
        bool inBraces = false;
        c = str[actPos++];
        if ((c == '(') || (c == '{'))
        {
          c = str[actPos++];
          inBraces = true;
        }

        // actPos now points at start of var name
        if (actPos >= sourceLen)
          break;
        std::string varName;
        while (  (actPos <= sourceLen) )
        {
          varName.append(1, c);  // this must be done before overwriting c
          c = str[actPos++];
          if (std::strchr(" /:;,.=\"'?#+*()[]{}$&%\t\n", c))
            break;
        }
        if (inBraces && (actPos <= sourceLen) && ((c == ')') || (c == '}')))
          ;
        else
          --actPos;
        // varName contains the name of the variable,
        // actPos points to first char _after_ variable
        const char *varValue = 0;
        if (!varName.empty() && (0 != (varValue = getenv(varName.c_str()))))
          resultStr.append(varValue);
        continue;
      }
    }

    // nothing special, just copy
    resultStr.append(1, c);
  }

  return resultStr;
}

std::istream& operator>>( std::istream& stream, Settings& s )
{
  char buffer[1024];
  std::string line;
  Settings::Sections::iterator section = s.m_sections.end();;

  while( stream.getline(buffer, sizeof(buffer)) )
  {
    line = string_strip( buffer );
    if( isComment(line) )
    {
      continue;
    }
    else if( isSection(line) )
    {
      section = s.m_sections.insert( s.m_sections.end(), Dictionary(splitSection(line)) );
    }
    else if( isKeyValue(line) )
    {
      std::pair<std::string, std::string> keyValue = splitKeyValue( line );
      if( section == s.m_sections.end() )
        continue;
      (*section).setString( keyValue.first, s.m_resolveEnvVars ? resolveEnvVars(keyValue.second) : keyValue.second );
    }
  }
  return stream;
}

Settings::Sections Settings::get( const std::string& name ) const
{
  Sections sections;
  for ( Sections::size_type i = 0; i < m_sections.size(); ++i )
    if ( m_sections[ i ].getName() == name )
      sections.push_back( m_sections[ i ] );
  return sections;
}
}
