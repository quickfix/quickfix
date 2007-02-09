/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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
  assertEquals( 2, oren.size() );
  assertEquals( 1, oren[ 0 ].size() );
  assertEquals( "TW", oren[ 0 ].getString( "Nero" ) );
  assertEquals( 2, oren[ 1 ].size() );
  assertEquals( "Nero", oren[ 1 ].getString( "ISLD" ) );
  assertEquals( "./\\:", oren[ 1 ].getString( "STUFF" ) );

  Settings::Sections nero = object.get( "NERO" );
  assertEquals( 1, nero.size() );
  assertEquals( 4, nero[ 0 ].size() );
  assertEquals( "D:\\This Is\\A-Directory\\ok\\", nero[ 0 ].getString( "WINDIR" ) );
  assertEquals( "/This Is/A Directory/ok/", nero[ 0 ].getString( "UNIXDIR" ) );
  assertEquals( "D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg", nero[ 0 ].getString( "WINFILE" ) );
  assertEquals( "last spaces stripped", nero[ 0 ].getString( "stripspace" ) );
}
}
