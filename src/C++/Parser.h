/* -*- C++ -*- */

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

#ifndef FIX_PARSER_H
#define FIX_PARSER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Exceptions.h"
#include <iostream>
#include <string>

namespace FIX
{
/// Parses %FIX messages off an input stream.
class Parser
{
public:
  Parser( std::istream& stream ) 
  : m_pStream( &stream ), m_socket( 0 ), 
    m_bufferSize( 0 ), m_readBuffer( 0 ) 
  { allocate( 4096 ); }
  Parser( int socket ) 
  : m_pStream( 0 ), m_socket( socket ), 
    m_bufferSize( 0 ), m_readBuffer( 0 ) 
  { allocate( 4096 ); }
  Parser() 
  : m_pStream( 0 ), m_socket( 0 ), 
    m_bufferSize( 0 ), m_readBuffer( 0 ) 
  { allocate( 4096 ); }

  ~Parser() { delete [] m_readBuffer; }

  void allocate( int ); 
  bool extractLength( int& length, std::string::size_type& pos,
                      const std::string& buffer )
  throw ( MessageParseError );
  bool readFixMessage( std::string& str )
  throw ( MessageParseError, SocketRecvFailed );
  bool readFromStream() throw ( SocketRecvFailed );

  void setStream( std::istream& stream ) { m_pStream = &stream; }
  void addToStream( const char* str, size_t len ) 
  { m_buffer.append( str, len ); }

private:
  std::istream* m_pStream;
  int m_socket;
  std::string m_buffer;
  int m_bufferSize;
  char* m_readBuffer;
};
}
#endif //FIX_PARSER_H
