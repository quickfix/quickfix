/* -*- C++ -*- */
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

#ifndef FIX_PARSER_H
#define FIX_PARSER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Exceptions.h"
#include <iostream>
#include <string>
#include <stdexcept>

namespace FIX
{
class RecvFailed : public std::exception {};

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
  throw ( MessageParseError& );
  bool readFixMessage( std::string& str )
  throw ( MessageParseError&, RecvFailed& );
  bool readFromStream() throw ( RecvFailed& );

  void setStream( std::istream& stream ) { m_pStream = &stream; }
  void addToStream( const char* str ) { m_buffer += str; }

private:
  std::istream* m_pStream;
  int m_socket;
  std::string m_buffer;
  int m_bufferSize;
  char* m_readBuffer;
};
}
#endif //FIX_PARSER_H
