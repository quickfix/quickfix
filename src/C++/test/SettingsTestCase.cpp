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

#include <UnitTest++.h>
#include <Settings.h>
#include <sstream>

using namespace FIX;

SUITE(SettingsTests)
{

TEST(readFromIstream)
{
  Settings object;
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
  CHECK_EQUAL( 0, none.size() );

  Settings::Sections foo = object.get( "FOO" );
  CHECK_EQUAL( 1, foo.size() );
  CHECK_EQUAL( 24, foo[ 0 ].getLong( "bar" ) );
  CHECK_EQUAL( "moo", foo[ 0 ].getString( "baz" ) );
  CHECK_EQUAL( 2, foo[ 0 ].size() );

  Settings::Sections oren = object.get( "OREN" );
  CHECK_EQUAL( 2, oren.size() );
  CHECK_EQUAL( 1, oren[ 0 ].size() );
  CHECK_EQUAL( "TW", oren[ 0 ].getString( "Nero" ) );
  CHECK_EQUAL( 2, oren[ 1 ].size() );
  CHECK_EQUAL( "Nero", oren[ 1 ].getString( "ISLD" ) );
  CHECK_EQUAL( "./\\:", oren[ 1 ].getString( "STUFF" ) );

  Settings::Sections nero = object.get( "NERO" );
  CHECK_EQUAL( 1, nero.size() );
  CHECK_EQUAL( 4, nero[ 0 ].size() );
  CHECK_EQUAL( "D:\\This Is\\A-Directory\\ok\\", nero[ 0 ].getString( "WINDIR" ) );
  CHECK_EQUAL( "/This Is/A Directory/ok/", nero[ 0 ].getString( "UNIXDIR" ) );
  CHECK_EQUAL( "D:\\Program Files\\Tomcat 4.1\\webapps\\mek\\WEB-INF\\HTTPtoFIX.cfg", nero[ 0 ].getString( "WINFILE" ) );
  CHECK_EQUAL( "last spaces stripped", nero[ 0 ].getString( "stripspace" ) );
}

}
