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

#include "SettingsTestCase.h"
#include <sstream>

namespace FIX
{
void SettingsTestCase::readFromIstream::onRun( Settings& object )
{
  std::string configuration =
    "[FOO]\nbar=24\nbaz=moo\n\n"
    "[OREN]\nNero=TW\n#Nero=IGNOREME\n"
    "# this is a comment\n"
    "#[OREN]\n#Nero=IGNOREME\n"
    "[OREN]\nISLD=Nero\nSTUFF=./\\:\n"
    "[NERO]\nWINDIR=D:\\This Is\\A-Directory\\ok\\\n"
    "\nWINFILE=D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg\n"
    "UNIXDIR=/This Is/A Directory/ok/\n"
    "stripspace=last spaces stripped  \n"
    "#Nero=IGNOREME";

  std::istringstream input( configuration );

  input >> object;

  Settings::Sections none = object.get( "NONE" );
  assert( none.size() == 0 );

  Settings::Sections foo = object.get( "FOO" );
  assert( foo.size() == 1 );
  assert( foo[ 0 ].getLong( "bar" ) == 24 );
  assert( foo[ 0 ].getString( "baz" ) == "moo" );
  assert( foo[ 0 ].size() == 2 );

  Settings::Sections oren = object.get( "OREN" );
  assert( oren.size() == 2 );
  assert( oren[ 0 ].size() == 1 );
  assert( oren[ 0 ].getString( "Nero" ) == "TW" );
  assert( oren[ 1 ].size() == 2 );
  assert( oren[ 1 ].getString( "ISLD" ) == "Nero" );
  assert( oren[ 1 ].getString( "STUFF" ) == "./\\:" );

  Settings::Sections nero = object.get( "NERO" );
  assert( nero.size() == 1 );
  assert( nero[ 0 ].size() == 4 );
  assert( nero[ 0 ].getString( "WINDIR" ) == "D:\\This Is\\A-Directory\\ok\\" );
  assert( nero[ 0 ].getString( "UNIXDIR" ) == "/This Is/A Directory/ok/" );
  assert( nero[ 0 ].getString( "WINFILE" ) == "D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg" );
  assert( nero[ 0 ].getString( "stripspace" ) == "last spaces stripped" );
}
}
