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
