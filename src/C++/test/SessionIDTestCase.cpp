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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "SessionIDTestCase.h"
#include <string>
#include <sstream>

namespace FIX
{
SessionIDTestCase::lessThan::lessThan()
    :
    m_less1( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    m_less2( BeginString( "A" ), SenderCompID( "A" ), TargetCompID( "B" ) ),
    m_less3( BeginString( "A" ), SenderCompID( "B" ), TargetCompID( "A" ) ),
    m_less4( BeginString( "B" ), SenderCompID( "A" ), TargetCompID( "A" ) ),
    m_less5( BeginString( "B" ), SenderCompID( "B" ), TargetCompID( "B" ) ),
    m_less6( BeginString( "C" ), SenderCompID( "A" ), TargetCompID( "C" ) )
{}

void SessionIDTestCase::lessThan::onRun( SessionID& object )
{
  assert( !( m_less1 < m_less1 ) );
  assert( m_less1 < m_less2 );
  assert( m_less1 < m_less3 );
  assert( m_less1 < m_less4 );
  assert( m_less1 < m_less5 );
  assert( m_less1 < m_less6 );

  assert( !( m_less2 < m_less1 ) );
  assert( !( m_less2 < m_less2 ) );
  assert( m_less2 < m_less3 );
  assert( m_less2 < m_less4 );
  assert( m_less2 < m_less5 );
  assert( m_less2 < m_less6 );

  assert( !( m_less3 < m_less1 ) );
  assert( !( m_less3 < m_less2 ) );
  assert( !( m_less3 < m_less3 ) );
  assert( m_less3 < m_less4 );
  assert( m_less3 < m_less5 );
  assert( m_less3 < m_less6 );

  assert( !( m_less4 < m_less1 ) );
  assert( !( m_less4 < m_less2 ) );
  assert( !( m_less4 < m_less3 ) );
  assert( !( m_less4 < m_less4 ) );
  assert( m_less4 < m_less5 );
  assert( m_less4 < m_less6 );

  assert( !( m_less5 < m_less1 ) );
  assert( !( m_less5 < m_less2 ) );
  assert( !( m_less5 < m_less3 ) );
  assert( !( m_less5 < m_less4 ) );
  assert( !( m_less5 < m_less5 ) );
  assert( m_less5 < m_less6 );

  assert( !( m_less6 < m_less1 ) );
  assert( !( m_less6 < m_less2 ) );
  assert( !( m_less6 < m_less3 ) );
  assert( !( m_less6 < m_less4 ) );
  assert( !( m_less6 < m_less5 ) );
  assert( !( m_less6 < m_less6 ) );
}

SessionIDTestCase::stream::stream()
    : m_object( BeginString( "FIX.4.2" ),
                SenderCompID( "SENDER" ),
                TargetCompID( "TARGET" ) )
{}

bool SessionIDTestCase::stream::onSetup( SessionID*& pObject )
{
  pObject = &m_object;
  return true;
}

void SessionIDTestCase::stream::onRun( SessionID& object )
{
  std::stringstream strstream;
  strstream << object;
  assert( strstream.str() == "FIX.4.2:SENDER->TARGET" );
}
}
