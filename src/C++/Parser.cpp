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

#include "Parser.h"
#include "Utility.h"
#include "FieldConvertors.h"
#include <algorithm>

namespace FIX
{
bool Parser::extractLength( int& length, std::string::size_type& pos,
                            const std::string& buffer )
EXCEPT ( MessageParseError )
{
  if( !buffer.size() ) return false;

  std::string::size_type startPos = buffer.find( "\0019=", 0 );
  if( startPos == std::string::npos ) return false;
  startPos += 3;
  std::string::size_type endPos = buffer.find( "\001", startPos );
  if( endPos == std::string::npos ) return false;

  std::string strLength( buffer, startPos, endPos - startPos );

  try
  {
    length = IntConvertor::convert( strLength );
    if( length < 0 ) throw MessageParseError();
  }
  catch( FieldConvertError& )
  { throw MessageParseError(); }

  pos = endPos + 1;
  return true;
}

bool Parser::readFixMessage( std::string& str )
EXCEPT ( MessageParseError )
{
  std::string::size_type pos = 0;

  if( m_buffer.length() < 2 ) return false;
  pos = m_buffer.find( "8=" );
  if( pos == std::string::npos ) return false;
  m_buffer.erase( 0, pos );

  int length = 0;

  try
  {
    if( extractLength(length, pos, m_buffer) )
    {
      pos += length;
      if( m_buffer.size() < pos )
        return false;

      pos = m_buffer.find( "\00110=", pos-1 );
      if( pos == std::string::npos ) return false;
      pos += 4;
      pos = m_buffer.find( "\001", pos );
      if( pos == std::string::npos ) return false;
      pos += 1;

      str.assign( m_buffer, 0, pos );
      m_buffer.erase( 0, pos );
      return true;
    }
  }
  catch( MessageParseError& e )
  {
    if( length > 0 )
      m_buffer.erase( 0, pos + length );
    else
      m_buffer.erase();

    throw e;
  }

  return false;
}
}
