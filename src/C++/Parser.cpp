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

#include "Parser.h"
#include "Utility.h"
#include "FieldConvertors.h"
#include <algorithm>

namespace FIX
{
void Parser::allocate( int length )
{ QF_STACK_PUSH(Parser::allocate)

  char* newBuffer = new char[length+1];
  if( m_readBuffer && m_bufferSize )
  {
    memcpy( newBuffer, m_readBuffer, m_bufferSize + 1 );
    delete [] m_readBuffer;
  }
  m_readBuffer = newBuffer;
  m_bufferSize = length;
  m_readBuffer[m_bufferSize] = '\0';
  m_buffer.reserve( length + 1 );

  QF_STACK_POP
}

bool Parser::extractLength( int& length, std::string::size_type& pos,
                            const std::string& buffer )
throw( MessageParseError )
{ QF_STACK_PUSH(Parser::extractLength)

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

  QF_STACK_POP
}

bool Parser::readFixMessage( std::string& str )
throw( MessageParseError, SocketRecvFailed )
{ QF_STACK_PUSH(Parser::readFixMessage)

  readFromStream();

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

      str = m_buffer.substr( 0, pos );
      m_buffer.erase( 0, pos );
      return true;
    }
  }
  catch( MessageParseError& e )
  {
    m_buffer.erase( 0, pos + length );
    throw e;
  }

  readFromStream();
  return false;

  QF_STACK_POP
}

bool Parser::readFromStream() throw( SocketRecvFailed )
{ QF_STACK_PUSH(Parser::readFromStream)

  int size = 0;
  if ( m_pStream )
  {
    m_pStream->read( m_readBuffer, m_bufferSize );
    size = m_pStream->gcount();
    if ( size == 0 ) return false;
  }
  else if ( m_socket )
  {
    int bytes = 0;
    if ( !socket_fionread( m_socket, bytes ) )
      return false;
    if ( bytes == 0 )
      return false;

    size = recv( m_socket, m_readBuffer, m_bufferSize, 0 );
    if( size <= 0 ) throw SocketRecvFailed();
    if( size == m_bufferSize ) allocate( m_bufferSize * 2 );
  }
  else return true;

  m_readBuffer[ size ] = '\0';
  m_buffer.append( m_readBuffer, size );

  return true;

  QF_STACK_POP
}
}
