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

#ifndef CONFIG_LEXER
#define CONFIG_LEXER

#include "FlexLexer.h"

class ConfigLexer : public yyFlexLexer
{
public:
  enum {
    LC_STATE_NONE,
    LC_STATE_SECTION,
    LC_STATE_NAME,
    LC_STATE_VALUE
  };

  ConfigLexer( std::istream* in = 0, std::ostream* out = 0 )
: yyFlexLexer( in, out ), lcState( LC_STATE_NONE ) {}

  virtual int yylex();
private:
  int lcState;
};

#endif // CONFIG_LEXER
