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

#include "Parser.h"
#include "Utility.h"
#include <algorithm>

namespace FIX
{
void throw_isdigit( const char c )
{
  if ( !isdigit( c ) ) throw MessageParseError();
}

bool Parser::readFixMessage( std::string& str )
throw( MessageParseError&, RecvFailed& )
{
  readFromStream();

  std::string::size_type pos = m_buffer.find( "\00110=", 0 );
  if ( pos != std::string::npos )
  {
    pos++;
    pos = m_buffer.find( "\001", pos );
    if ( pos != std::string::npos )
    {
      str = m_buffer.substr( 0, pos + 1 );
      m_buffer.erase( 0, pos + 1 );
      return true;
    }
  }
  readFromStream();
  return false;
}

bool Parser::readFromStream() throw( RecvFailed& )
{
  int size = 0;
  if ( m_pStream )
  {
    m_pStream->read( m_readBuffer, 4096 );
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

    size = recv( m_socket, m_readBuffer, 4096, 0 );
    if ( size <= 0 ) throw RecvFailed();
  }
  else return true;

  m_readBuffer[ size ] = '\0';
  m_buffer += m_readBuffer;

  return true;
}
}
