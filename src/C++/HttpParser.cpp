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

#include "HttpParser.h"
#include "Utility.h"
#include <algorithm>

namespace FIX
{
bool HttpParser::readHttpMessage( std::string& str )
EXCEPT ( MessageParseError )
{
  std::string::size_type pos = 0;

  if( m_buffer.length() < 4 ) 
    return false;
  pos = m_buffer.find( "\r\n\r\n" );
  if( m_buffer.length() > 2048 )
    throw MessageParseError();
  if( pos == std::string::npos ) 
    return false;
  str.assign( m_buffer, 0, pos + 4 );
  m_buffer.erase( 0, pos + 4 );

  return true;
}
}
