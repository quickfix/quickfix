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

#include "AcceptorTestCase.h"
#include <sstream>

namespace FIX
{
bool AcceptorTestCase::parseStream::onSetup( Acceptor*& pObject )
{
  SessionSettings settings;
  std::string input =
    "[DEFAULT]\n"
    "ConnectionType=acceptor\n"
    "SocketAcceptPort=5000\n"
    "StartTime=00:00:00\n"
    "EndTime=00:00:00\n"
    "UseDataDictionary=N\n"
    "[SESSION]\n"
    "BeginString=FIX.4.2\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=TW\n"
    "[SESSION]\n"
    "BeginString=FIX.4.1\n"
    "SenderCompID=ISLD\n"
    "TargetCompID=WT\n";
  std::stringstream stream( input );
  stream >> settings;
  m_pFactory = new MemoryStoreFactory();
  pObject = new TestAcceptor( settings, *m_pFactory );
  return true;
}

void AcceptorTestCase::parseStream::onRun( Acceptor& object )
{
  assert( object.has( SessionID( BeginString( "FIX.4.2" ),
                                 SenderCompID( "ISLD" ),
                                 TargetCompID( "TW" ) ) ) );
  assert( object.has( SessionID( BeginString( "FIX.4.1" ),
                                 SenderCompID( "ISLD" ),
                                 TargetCompID( "WT" ) ) ) );
}
}
