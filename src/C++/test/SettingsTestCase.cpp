/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
